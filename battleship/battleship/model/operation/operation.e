note
	description: "Summary description for {OPERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	OPERATION

feature{NONE}

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

feature{NONE} -- check hit and win

	check_hit_or_win
	do
		if game.was_a_ship_hit_this_turn then
	   		if game.ship_sank_this_turn.count = 0 then
   				set_next_message (" OK -> Hit!")
   			else
   				if game.ship_sank_this_turn.count ~ 1 then
   					set_next_message (" OK -> "+game.ship_sank_this_turn[1].ship_size_out+" ship sunk!")
   				else
   					set_next_message (" OK -> "+game.ship_sank_this_turn[1].ship_size_out+" and "+game.ship_sank_this_turn[2].ship_size_out+" ships sunk!")
   				end
   			end
   		else
   			set_next_message (" OK -> Miss!")
   		end
    	if game.game_over then
    		if game.check_ship_status then
    			append_message (" You Win!")
    		else
    			append_message (" Game Over!")
    		end
    	else
    		append_message(" Keep Firing!")
    	end
	end

feature -- queries

	state : INTEGER

	post_state : INTEGER

	next_message : STRING

	first_shot : BOOLEAN

	append_message(a_message:STRING)
	do
		next_message := next_message + a_message
	end

	prepend_message(a_message:STRING)
	do
		print(a_message)
		next_message := a_message + next_message
	end

	set_next_message(a_message:STRING)
	do
		next_message := a_message
	end

feature -- deferred commands
	execute
		deferred
		end
	undo
		deferred
		end

	redo
		deferred
		end
end
