note
	description: "Summary description for {BOARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY

create
	make

feature -- random generators

	rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_random
			counter := counter + 1
		end

	debug_gen: RANDOM_GENERATOR
			-- deterministic generator for debug mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_debug
		end

	reset_debug_gen: RANDOM_GENERATOR
	do
		create result.make_debug
		debug_gen := result
	end

feature{NONE} -- hidden attributes

	board: ARRAY2[SHIP_ALPHABET]

	counter : INTEGER

feature -- attributes

	coord_board: ARRAY2[COORDINATE]

	row_indices : ARRAY[CHARACTER]
		once
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end

	size: INTEGER
		-- size of board	

feature -- creation

	make
			-- Initialization for `Current'.
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 12, 12)
			create coord_board.make_filled (create {COORDINATE}.make (1, 1), 12, 12)
		end

feature -- query

	get_coord_board : ARRAY2[COORDINATE]
	do
		result := coord_board
	end

feature -- utilities

	reset_game (r_size: INTEGER)
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), r_size, r_size)
			create coord_board.make_filled (create {COORDINATE}.make (1, 1), r_size, r_size)
			across 1 |..| r_size as coord_board_x
			loop
			 	across 1 |..| r_size as coord_board_y
			 	loop
			 		coord_board[coord_board_x.item, coord_board_y.item]:= create {COORDINATE}.make (coord_board_x.item, coord_board_y.item)
			 	end
			end
		end

	generate_ships (is_debug_mode: BOOLEAN; board_size: INTEGER; num_ships: INTEGER; was_debug_mode: BOOLEAN): ARRAYED_LIST[TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]]
			-- places the ships on the board
			-- either deterministicly random or completely random depending on debug mode
		local
			g_size: INTEGER
			c,r : INTEGER
			d: BOOLEAN
			gen: RANDOM_GENERATOR
			new_ship: TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]
		do
			create Result.make (num_ships)
			if is_debug_mode then
				if was_debug_mode then
					gen := debug_gen
				else
					gen := reset_debug_gen
				end

			else
				gen := rand_gen
			end
			from
				g_size := num_ships
			until
				g_size = 0
			loop
				d := (gen.direction \\ 2 = 1)
				if d then
					c := (gen.column \\ board_size) + 1
					r := (gen.row \\ (board_size - g_size)) + 1
				else
					r := (gen.row \\ board_size) + 1
					c := (gen.column \\ (board_size - g_size)) + 1
				end

				new_ship := [g_size, r, c, d]

				if not collide_with (Result, new_ship) then
					-- If the generated ship does not collide with
					-- ones that have been generated, then
					-- add it to the set.
					Result.extend (new_ship)
					g_size := g_size - 1
				end
				gen.forth
			end
		ensure
			-- not sure how to best check this
		end

	collide_with_each_other (ship1, ship2: TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]): BOOLEAN
				-- Does `ship1' collide with `ship2'?
			local
				ship1_head_row, ship1_head_col, ship1_tail_row, ship1_tail_col: INTEGER
				ship2_head_row, ship2_head_col, ship2_tail_row, ship2_tail_col: INTEGER
			do
					ship1_tail_row := ship1.row
					ship1_tail_col := ship1.col
					if ship1.dir then
						ship1_tail_row := ship1_tail_row + 1
						ship1_head_row := ship1_tail_row + ship1.size - 1
						ship1_head_col := ship1_tail_col
					else
						ship1_tail_col := ship1_tail_col + 1
						ship1_head_col := ship1_tail_col + ship1.size - 1
						ship1_head_row := ship1_tail_row
					end

					ship2_tail_row := ship2.row
					ship2_tail_col := ship2.col
					if ship2.dir then
						ship2_tail_row := ship2_tail_row + 1
						ship2_head_row := ship2_tail_row + ship2.size - 1
						ship2_head_col := ship2_tail_col
					else
						ship2_tail_col := ship2_tail_col + 1
						ship2_head_col := ship2_tail_col + ship2.size - 1
						ship2_head_row := ship2_tail_row
					end

					Result :=
						ship1_tail_col <= ship2_head_col and then
 						ship1_head_col >= ship2_tail_col and then
 						ship1_tail_row <= ship2_head_row and then
 						ship1_head_row >= ship2_tail_row
			end

	collide_with (existing_ships: ARRAYED_LIST[TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]];
		new_ship: TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]): BOOLEAN
				-- Does `new_ship' collide with the set of `existing_ships'?
			do
					across
						existing_ships as existing_ship
					loop
						Result := Result or collide_with_each_other (new_ship, existing_ship.item)
					end
			ensure
				Result =
					across existing_ships as existing_ship
					some
						collide_with_each_other (new_ship, existing_ship.item)
					end
			end
	set_square (x,y: INTEGER)
	do
		board[x, y] := create {SHIP_ALPHABET}.make ('X')
	end

feature --ship placement

	place_new_ships(new_ships: ARRAYED_LIST[TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]])
			-- Place the randomly generated positions of `new_ships' onto the `board'.
			-- Notice that when a ship's row and column are given,
			-- its coordinate starts with (row + 1, col) for a vertical ship,
			-- and starts with (row, col + 1) for a horizontal ship.
		require
			across new_ships.lower |..| new_ships.upper as i all
			across new_ships.lower |..| new_ships.upper as j all
				i.item /= j.item implies not collide_with_each_other (new_ships[i.item], new_ships[j.item])
			end
			end
		do
			across
				new_ships as new_ship
			loop
				if new_ship.item.dir then
					-- Vertical ship
					across
						1 |..| new_ship.item.size as i
					loop
						board[new_ship.item.row + i.item, new_ship.item.col] := create {SHIP_ALPHABET}.make ('v')
					end
				else
					-- Horizontal ship
					across
						1 |..| new_ship.item.size as i
					loop
						board[new_ship.item.row, new_ship.item.col + i.item] := create {SHIP_ALPHABET}.make ('h')
					end
				end
			end
		end
end
