note
	description: "Summary description for {GAME}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GAME

inherit
	ANY
		redefine
			out
		end
create {ETF_MODEL}
	make

feature -- creation

	make
		do
			create history.make
			debug_mode:=true
			create board.make
			create ships.make_empty
			create ship_sank_this_turn.make_empty
			game_board_print := ""
		end

feature -- attributes

	board: BOARD

	history: HISTORY
	game_board_print : STRING

	debug_mode: BOOLEAN
	set_debug_mode_to (to_debug_mode : BOOLEAN)
    	do
        	debug_mode := to_debug_mode
    	end

	-- shots:
	bombs_total : INTEGER
	bombs_shot : INTEGER
	fires_total : INTEGER
	fires_shot : INTEGER

	--game over information
	gave_up : BOOLEAN
	game_over: BOOLEAN

	started: BOOLEAN
	-- check if the first ever game has been started
    set_started
    	do
        	started := True
    	end

	ship_sank_this_turn : ARRAY[SHIP]

	first_shot : BOOLEAN
	set_first_shot_to (this: BOOLEAN)
	do
		first_shot := this
	end

feature{NONE} --hidden


	--scores:
	current_score : INTEGER
	current_score_total : INTEGER
	score : INTEGER
	score_total : INTEGER
	debug_score : INTEGER
	debug_score_total : INTEGER

	-- game peices

	ships : ARRAY[SHIP]

	--tracks if the previous game was a debug game or not
	was_debug_mode : BOOLEAN

	hit_this_turn : BOOLEAN

	-- game number trackers
	game_number : INTEGER
	debug_game_number : INTEGER


feature -- game_start

	new_game(board_size, ships_number, max_shots, max_bombs: INTEGER)
	local
		sum , i : INTEGER
	do
		if NOT debug_mode and was_debug_mode then
			was_debug_mode := false
		end

		set_started
		reset_game
		if debug_mode then
			debug_game_number:= debug_game_number + 1
			game_number := 0
			score := 0
			score_total := 0
		else
			game_number:= game_number + 1
			debug_game_number := 0
			debug_score := 0
			debug_score_total := 0
		end

		bombs_total := max_bombs
		fires_total := max_shots

		from
			i := 1
		until
			i ~ ships_number+1
		loop
			sum := sum + i
			i := i + 1
		end
		current_score_total := sum

		set_up_game_board(board_size,ships_number)
		if debug_mode then
			debug_score_total := debug_score_total + current_score_total
		else
			score_total := score_total + current_score_total
		end

		if debug_mode then
			was_debug_mode := True
		end
		game_board_print := update_game_board
	end

	set_up_game_board (size,ship_number:INTEGER)
	local
		new_ships: ARRAYED_LIST[TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN]]
	do
		board.reset_game (size)
		new_ships := board.generate_ships (debug_mode, size, ship_number, was_debug_mode)

		ships.make_empty

		across 1 |..| new_ships.upper as cursor
		loop
			ships.force (create {SHIP}.make(new_ships[cursor.item]),cursor.item)
		end
		board.place_new_ships (new_ships)
	end

	reset_game
	do
		first_shot := false
		gave_up := false
		bombs_shot := 0
		fires_shot := 0
		current_score := 0
		game_over := false
		create history.make
	end



feature -- commands

	give_up
	require
		started ~ true and not game_over and not gave_up
	do
		game_over := true
		gave_up := true
		if debug_mode then
			debug_game_number := debug_game_number -1
			debug_score_total := debug_score_total - current_score_total
		else
			game_number := game_number -1
			score_total := score_total - current_score_total
		end
	end

	reset_score
	do
		game_over := check_game_status
		if debug_mode then
			debug_score := debug_score - current_score

			current_score := 0
			across ships as s
			loop
				if s.item.status ~ "SUNK" then
					current_score := current_score + s.item.sections.count
				end
			end

			debug_score := debug_score + current_score
		else
			score := score - current_score

			current_score := 0
			across ships as s
			loop
				if s.item.status ~ "SUNK" then
					current_score := current_score + s.item.sections.count
				end
			end

			score := score + current_score
		end
		game_board_print := update_game_board
	end

	fire(x,y :INTEGER;undo:BOOLEAN)
	require
		validate_coordinate(x,y)
	local
		hit_ship : BOOLEAN
	do
		ship_sank_this_turn.make_empty
		if not undo then
			board.coord_board[x,y].set_shot_at(true)
			if attached board.coord_board[x,y].ship as s then
				s.hit_ship (board.coord_board[x,y])
				hit_ship := true
				if s.status ~ "SUNK" then
					ship_sank_this_turn.force (s, ship_sank_this_turn.count+1)
				end
			end
			fires_shot := fires_shot+1
		else
			board.coord_board[x,y].set_shot_at(false)
			if attached board.coord_board[x,y].ship as s then
				s.unhit_ship (board.coord_board[x,y])
			end
			fires_shot := fires_shot-1
		end
		hit_this_turn := hit_ship
		reset_score
	end

	bomb(l_x,l_y,r_x,r_y :INTEGER;undo:BOOLEAN)
	require
		validate_coordinate(l_x,l_y) and validate_coordinate(r_x,r_y)
	local
		first_hit : BOOLEAN
		second_hit : BOOLEAN
	do
		ship_sank_this_turn.make_empty
		if not undo then
			board.coord_board[l_x,l_y].set_shot_at(true)
			if attached board.coord_board[l_x,l_y].ship as s then
				s.hit_ship (board.coord_board[l_x,l_y])
				first_hit := true
				if s.status ~ "SUNK" then
					ship_sank_this_turn.force (s, ship_sank_this_turn.count+1)
				end
			end
			board.coord_board[r_x,r_y].set_shot_at(true)
			if attached board.coord_board[r_x,r_y].ship as s then
				s.hit_ship (board.coord_board[r_x,r_y])
				second_hit := true
				if s.status ~ "SUNK" then
					ship_sank_this_turn.force (s, ship_sank_this_turn.count+1)
				end
			end
			hit_this_turn := first_hit or second_hit
			bombs_shot := bombs_shot+1
		else
			board.coord_board[l_x,l_y].set_shot_at(false)
			if attached board.coord_board[l_x,l_y].ship as s then
				s.unhit_ship (board.coord_board[l_x,l_y])
			end
			board.coord_board[r_x,r_y].set_shot_at(false)
			if attached board.coord_board[r_x,r_y].ship as s then
				s.unhit_ship (board.coord_board[r_x,r_y])
			end
			bombs_shot := bombs_shot-1
		end
		reset_score
	end


feature -- queries

	was_a_ship_hit_this_turn : BOOLEAN
	do
		Result := hit_this_turn
	end

	validate_coordinate(x,y:INTEGER) : BOOLEAN
	do
		result := (x>=1 or x<= board.size) and (y>=1 or y<= board.size)
	end

	check_game_status : BOOLEAN
	do
		Result := check_ship_status or check_fire_status
	end

	check_ship_status : BOOLEAN
	do
		Result := across ships as s all s.item.status ~ "SUNK" end
	end

	check_fire_status : BOOLEAN
	do
		Result := fires_shot ~ fires_total and bombs_shot ~ bombs_total
	end

feature -- output

	out : STRING
	do
		Result := game_board_print
	end

	update_game_board: STRING
		local
			fi: FORMAT_INTEGER
			ships_sunk : INTEGER
		do
			ships_sunk:= 0
			across ships as s
			loop
				if s.item.status ~ "SUNK" then
					ships_sunk := ships_sunk +1
				end
			end
			create fi.make (2)
			create Result.make_from_string ("%N   ")
			across 1 |..| board.coord_board.width as i loop
				Result.append(" " + fi.formatted (i.item))
			end
			across 1 |..| board.coord_board.width as i loop
				Result.append("%N  " + board.row_indices[i.item].out)
				across 1 |..| board.coord_board.height as j loop
					Result.append("  "+ board.coord_board[i.item,j.item].out)
				end
			end
			Result.append("%N")
			if debug_mode then
				Result.append("  Current Game (debug): "+debug_game_number.out)
			else
				Result.append("  Current Game: "+game_number.out)
			end
			Result.append("%N")
			Result.append("  Shots: "+fires_shot.out + "/" + fires_total.out)
			Result.append("%N")
			Result.append("  Bombs: "+bombs_shot.out + "/" + bombs_total.out)
			Result.append("%N")
			if debug_mode then
				Result.append("  Score: "+current_score.out + "/" + current_score_total.out+" (Total: "+debug_score.out + "/" + debug_score_total.out+")")
			else
				Result.append("  Score: "+current_score.out + "/" + current_score_total.out+" (Total: "+score.out + "/" + score_total.out+")")
			end
			Result.append("%N")
			Result.append("  Ships: "+ships_sunk.out + "/" + ships.count.out)
			across ships as s
			loop
				Result.append("%N ")
				if debug_mode then
					Result.append("   "+s.item.ship_size_out + ": " +s.item.debug_out)
				else
					Result.append("   "+s.item.ship_size_out + ": " + s.item.status)
				end
			end
		end
end
