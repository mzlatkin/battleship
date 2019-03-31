note
	description: "Summary description for {NEW_GAME}. the most useless calss since it can never be undone or redone"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_GAME

inherit
	OPERATION

create
	make,
	make_custom

feature {NONE} -- constructor

	make(difficulty,a_state,p_state: INTEGER; debug_on : BOOLEAN)
		do
			debug_mode := debug_on
			if difficulty ~ 13 then
    			board_size :=4
				ships_number :=2
				max_shots :=8
				max_bombs :=2
			elseif difficulty ~ 14 then
				board_size :=6
				ships_number :=3
				max_shots :=16
				max_bombs :=3
			elseif difficulty ~ 15 then
				board_size :=8
				ships_number :=5
				max_shots :=24
				max_bombs :=5
			elseif difficulty ~ 16 then
				board_size :=12
				ships_number :=7
				max_shots :=40
				max_bombs :=7
			end
			post_state := p_state
			next_message := ""
			state := a_state
		end
	make_custom(a_board_size, a_ships_number, a_max_shots, a_max_bombs, a_state,p_state: INTEGER; debug_on : BOOLEAN)
		do
			debug_mode := debug_on
			board_size :=a_board_size
			ships_number :=a_ships_number
			max_shots :=a_max_shots
			max_bombs :=a_max_bombs
			next_message := ""
			state := a_state
			post_state := p_state
		end

feature -- queries
		board_size, ships_number, max_shots, max_bombs: INTEGER
		debug_mode : BOOLEAN

feature -- commands

	validate_new_game : BOOLEAN
	do
		if game.started ~ game.game_over then
			if (board_size/3) > ships_number then
				set_next_message (" Not enough ships")
			else
				if  ships_number > (board_size/2)+1 then
					set_next_message (" Too many ships")
				else
					if (ships_number * (ships_number+1) / 2) > max_shots then
						set_next_message (" Not enough shots")
					else
						if board_size*board_size < max_shots	then
							set_next_message (" Too many shots")
						else
							if (board_size/3) > max_bombs then
								set_next_message (" Not enough bombs")
							else
								if (board_size/2)+1 < max_bombs then
									set_next_message (" Too many bombs")
								else
									game.set_first_shot_to (false)
									set_next_message (" OK -> ")
									result:=true
								end
							end
						end
					end
				end
			end
		else
			set_next_message (" Game already started -> ")
    	end
    	if NOT game.first_shot then
    		append_message("Fire Away!")
    	else
    		append_message("Keep Firing!")
    	end
	end

	execute
		do
			if validate_new_game then
				game.set_debug_mode_to (debug_mode)
				game.new_game(board_size, ships_number, max_shots, max_bombs)
				game.history.extend_history(CURRENT)
			end
		end

	undo
		do
			--you can't undo this!
		end

	redo
		do
			--you can't redo this!
		end

end
