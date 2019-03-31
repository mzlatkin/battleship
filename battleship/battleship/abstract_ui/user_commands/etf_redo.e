note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
		redefine redo end
create
	make
feature -- command
	redo
    	do

    		-- forth
			if
				model.game.history.before
				or not model.game.history.after
			then
				model.game.history.forth
			end

			-- redo
			if model.game.history.on_item then
				if model.game.game_over then
					model.set_error_message (" Nothing to redo -> Start a new game")
				else
					if attached {NEW_GAME} model.game.history.item as new and (model.game.history.count~1) then
						model.set_error_message (" Nothing to redo -> Fire Away!")
					else
						model.game.history.item.redo
						model.set_do_message (" (= state "+ (model.game.history.item.post_state).out+")")
					end
				end
			else
				if model.game.game_over then
					model.set_error_message (" Nothing to redo -> Start a new game")
				elseif NOT model.game.started then
					model.set_error_message (" Nothing to redo -> Start a new game")
				else
					if NOT model.game.first_shot then
			    		model.set_error_message (" Nothing to redo -> Fire Away!")
			    	else
			    		model.set_error_message (" Nothing to redo -> Keep Firing!")
			    	end

				end
			end

			-- push
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
