note
	description: "Summary description for {FIRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOMB

inherit
	OPERATION

create
	make

feature {NONE} -- constructor

	make(a_x, a_y, b_x, b_y,a_state,p_state : INTEGER)
		do
			l_x := a_x
			l_y := a_y
			r_x := b_x
			r_y := b_y
			state:=a_state
			post_state := p_state
			next_message := ""
		end

feature -- queries
		l_x: INTEGER
		l_y: INTEGER
		r_x: INTEGER
		r_y: INTEGER
		valid_bomb : BOOLEAN

feature -- commands

	validate_bomb : BOOLEAN
	do
		if game.started ~ game.game_over then
    		set_next_message (" Game not started -> Start a new game")
    	else
    		if game.bombs_shot ~ game.bombs_total then
    			set_next_message (" No bombs remaining -> ")
    		else

				if (l_x <= game.board.coord_board.width and l_x >= 1) and (l_y <= game.board.coord_board.height and l_y >= 1)
				and (r_x <= game.board.coord_board.width and r_x >= 1) and (r_y <= game.board.coord_board.height and r_y >= 1) then
					if (l_y ~ r_y and (l_x ~ r_x -1 or l_x ~ r_x +1)) or (l_x ~ r_x and (l_y ~ r_y -1 or l_y ~ r_y +1)) then

						if game.board.coord_board[l_x,l_y].shot_at or game.board.coord_board[r_x,r_y].shot_at then
							set_next_message (" Already fired there -> ")
						else
							Result := true
							valid_bomb := Result
						end
					else
						set_next_message (" Bomb coordinates must be adjacent -> ")
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
			if validate_bomb then
				game.bomb (l_x, l_y, r_x, r_y, false)
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
    			if valid_bomb then
    				game.bomb (l_x, l_y, r_x, r_y, true)
					if first_shot ~ true then
						first_shot := false
						game.set_first_shot_to (false)
					end
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
