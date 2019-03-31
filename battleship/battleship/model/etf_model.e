note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature -- board

    make
    	do
    		create game.make
			i := 0
			error_s:=""
			do_s := ""
    	end

	game: GAME

feature -- model attributes
	i : INTEGER
	error_s : STRING
	do_s : STRING
	game_state : INTEGER

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end
	game_state_update
	do
		game_state := game_state + 1
	end

	reset
			-- Reset model state.
		do
			make
		end

	set_error_message (message : STRING)
	do
		error_s := message
	end

	set_do_message (do_message: STRING)
	do
		do_s := do_message
	end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("state ")
			Result.append (i.out)

			if error_s ~ "" then
				if NOT (do_s ~ "") then
					Result.append (do_s)
				end

				if game.history.on_item then
					Result.append (game.history.item.next_message)
				elseif game.started then
					Result.append (" OK -> Fire Away!")
				else
					Result.append (" OK -> Start a new game")
				end

			else
				Result.append(error_s)
			end

			if game.started then
				Result.append(game.out)
			end

			error_s:= ""
			do_s := ""

		end

end




