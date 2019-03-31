note
	description: "Summary description for {FIRE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GIVE_UP

inherit
	OPERATION

create
	make

feature {NONE} -- constructor

	make(a_state,p_state: INTEGER)
		do
			state:=a_state
			post_state := p_state
			next_message := ""
		end

feature -- commands

	execute
		do
			if game.started ~ game.game_over then
    			set_next_message (" Game not started -> Start a new game")
			else
				game.give_up
				set_next_message (" OK -> You gave up!")
    		end

		end

	undo
		do
		end

	redo
		do
		end

end
