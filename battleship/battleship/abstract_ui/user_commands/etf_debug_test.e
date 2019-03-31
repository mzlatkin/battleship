note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DEBUG_TEST
inherit
	ETF_DEBUG_TEST_INTERFACE
		redefine debug_test end
create
	make
feature -- command
	debug_test(level: INTEGER_64)
		require else
			debug_test_precond(level)
    	local
			difficulty : INTEGER
			op: NEW_GAME
			state: INTEGER
    	do


    		difficulty := level.to_integer_32


			if model.game.history.count ~ 0 then
				state := model.i
			else
				if model.game.history.on_item then
					state := model.game.history.item.post_state
				else
					if model.game.history.after then
						model.game.history.back
						state := model.game.history.item.post_state
						model.game.history.forth
					end
				end
			end

    		create op.make (difficulty,state,model.i+1,true)
			model.game.history.extend_history (op)
			op.execute

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
