note
	description: "Summary description for {SHIP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SHIP

create
	make

feature{NONE} -- hidden

	access: ETF_MODEL_ACCESS
		local
			ma: ETF_MODEL_ACCESS
		once
			Result := ma
		end

	game: GAME
		once
			Result := access.m.game
		end
	coord_board : ARRAY2[COORDINATE]
		do
			Result := game.board.coord_board
		end

feature -- attributes

	direction : BOOLEAN

	sections : ARRAYED_LIST[COORDINATE]

	hit_sections : ARRAYED_LIST[COORDINATE]

feature -- creation

	make (ship : TUPLE[size: INTEGER; row: INTEGER; col: INTEGER; dir: BOOLEAN])
	do
		create hit_sections.make(0)
		create sections.make(0)
		direction := ship.dir
		if direction then -- horizontal
			across 0 |..| (ship.size-1) as size
			loop
				sections.force(coord_board[ship.row+size.item +1,ship.col])
				coord_board[ship.row+size.item +1,ship.col].set_ship (CURRENT)

			end
		else
			across 0 |..| (ship.size-1) as size
			loop
				sections.force(coord_board[ship.row,ship.col+size.item +1])
				coord_board[ship.row,ship.col+size.item +1].set_ship (CURRENT)
			end
		end
	end

feature -- command

	hit_ship (cord: COORDINATE)
	require
		sections.has (cord) and not hit_sections.has (cord)
	do
		hit_sections.force (cord)
	ensure
		across hit_sections as hit some hit.item = cord end
	end

	unhit_ship (cord: COORDINATE)
	require
		sections.has (cord) and hit_sections.has (cord)
	do
		hit_sections.prune (cord)
	ensure
		across hit_sections as hit all NOT (hit.item = cord) end
	end

feature -- query

	status : STRING
	do
		if
			hit_sections.count ~ sections.count
		then
			Result := "SUNK"
		else
			Result := "Not Sunk"
		end
	end

	ship_size_out : STRING
	do
		Result := sections.count.out + "x1"
	end

	debug_out : STRING
	local
		first_flag : BOOLEAN
	do
		Result := ""
		first_flag := true
		across sections as sec
		loop
			if first_flag then
				Result := Result + sec.item.coord_out + "->"
				first_flag := false
			else
				Result := Result + ";" + sec.item.coord_out + "->"
			end

			if direction then
				Result := Result + sec.item.out
			else
				Result := Result + sec.item.out
			end
		end
	end

end
