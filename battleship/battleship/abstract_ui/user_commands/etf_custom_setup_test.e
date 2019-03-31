note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_CUSTOM_SETUP_TEST
inherit
	ETF_CUSTOM_SETUP_TEST_INTERFACE
		redefine custom_setup_test end
create
	make
feature -- command
	custom_setup_test(dimension: INTEGER_64 ; ships: INTEGER_64 ; max_shots: INTEGER_64 ; num_bombs: INTEGER_64)
		require else
			custom_setup_test_precond(dimension, ships, max_shots, num_bombs)
		local
			grid_size : INTEGER
			ship_number : INTEGER
			fire_number : INTEGER
			bomb_number : INTEGER
			op: NEW_GAME
			state : INTEGER
    	do
    		grid_size := dimension.to_integer
			ship_number := ships.to_integer
			fire_number := max_shots.to_integer
			bomb_number := num_bombs.to_integer

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

			create op.make_custom (grid_size, ship_number, fire_number, bomb_number,state,model.i+1,true)
			model.game.history.extend_history (op)
    		op.execute

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
		end

end
