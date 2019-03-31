note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
		redefine undo end
create
	make
feature -- command
	undo
    	do
    		if model.game.history.after then
				model.game.history.back
			end

			if model.game.history.on_item then
				if model.game.game_over then
					model.set_error_message (" Nothing to undo -> Start a new game")
				else
					if attached {NEW_GAME} model.game.history.item as new and model.game.history.first = model.game.history.item then
						model.set_error_message (" Nothing to undo -> Fire Away!")
					else
						model.game.history.item.undo
						model.set_do_message (" (= state "+ (model.game.history.item.state).out+")")
						model.game.history.back
					end
				end
			else
				if NOT model.game.started then
					model.set_error_message (" Nothing to undo -> Start a new game")
				else
					model.set_error_message (" Nothing to undo -> Fire Away!")
				end

			end


			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
