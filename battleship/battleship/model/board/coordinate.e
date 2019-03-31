note
	description: "Summary description for {COORDINATE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COORDINATE

inherit
	ANY
		redefine out end
	DEBUG_OUTPUT
		redefine out end
create
	make

feature -- make
	make(a_x,a_y: INTEGER)
			-- may not be a valid square
		do
			x := a_x
			y := a_y
		end

feature -- hidden

	x: INTEGER

	y:INTEGER

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

feature -- attributes

	ship:detachable SHIP assign set_ship

	shot_at:BOOLEAN

feature -- commands

	set_shot_at(hit : BOOLEAN)
	do
		shot_at := hit
	end

	set_coords (a_x,a_y: INTEGER)
	do
		x:=a_x
		y:=a_y
	end

	set_ship (a_ship : detachable SHIP)
	do
		ship:= a_ship
	end

	debug_output: STRING
	do
		Result := out
	end

	coord_out: STRING
	do
		Result := "["+ game.board.row_indices[x].out + ", " + y.out + "]"
	end

	out: STRING
	local
		coord_space : SHIP_ALPHABET
	do
		coord_space := create {SHIP_ALPHABET}.make('_')
		if shot_at then
			coord_space := create {SHIP_ALPHABET}.make('O')
			if attached ship as s then
				coord_space := create {SHIP_ALPHABET}.make('X')
			end
		else
			if attached ship as s then
				if game.debug_mode then
					if s.direction then
						coord_space := create {SHIP_ALPHABET}.make('v')
					else
						coord_space := create {SHIP_ALPHABET}.make('h')
					end
				else
					coord_space := create {SHIP_ALPHABET}.make('_')
				end

			else
				coord_space := create {SHIP_ALPHABET}.make('_')
			end

		end
		Result := coord_space.out
	end

end
