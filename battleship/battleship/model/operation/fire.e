note
	description: "Summary description for {FIRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FIRE

inherit
	OPERATION

create
	make

feature {NONE} -- constructor

	make(a_x,a_y,a_state,p_state: INTEGER)
		do
			y := a_y
			x := a_x
			state:=a_state
			post_state := p_state
			next_message := ""
		end

feature -- queries
		x: INTEGER
		y: INTEGER

feature -- commands

	validate_fire : BOOLEAN
	do
		if game.started ~ game.game_over then
    		set_next_message (" Game not started -> Start a new game")
    	else
    		if game.fires_shot ~ game.fires_total then
    			set_next_message (" No shots remaining -> ")
    		else
				if (x <= game.board.coord_board.width and x >= 1) and (y <= game.board.coord_board.height and y >= 1) then
					if game.board.coord_board[x,y].shot_at then
						set_next_message (" Already fired there -> ")
					else
						Result := true
					end
				else
					set_next_message (" Invalid coordinate -> ")
				end
			end
			if NOT game.first_shot then
	    		append_message("Fire Away!")
	    	else
	    		append_message("Keep Firing!")
	    	end
		end

	end

	execute
		do
			if validate_fire then
				game.fire (x, y, false)
				check_hit_or_win
				if game.first_shot ~ false then
					first_shot := true
					game.set_first_shot_to (true)
				end
			end

		end

	undo
		do
			if game.game_over then
    			set_next_message (" Nothing to undo -> Start a new game")
    		else
				game.fire (x, y, true)
				if first_shot ~ true then
					first_shot := false
					game.set_first_shot_to (false)
				end
			end
		end

	redo
		do
			if game.game_over then
    			set_next_message (" Nothing to redo -> Start a new game")
    		else
				execute

			end
		end

end
