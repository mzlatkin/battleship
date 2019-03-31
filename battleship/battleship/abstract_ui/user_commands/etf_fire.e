note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_FIRE
inherit
	ETF_FIRE_INTERFACE
		redefine fire end
create
	make
feature -- command
	fire(coordinate: TUPLE[row: INTEGER_64; column: INTEGER_64])
		require else
			fire_precond(coordinate)
    	local
			l_x,l_y: INTEGER
			op: FIRE
			state : INTEGER
    	do
    		l_x := coordinate.row.as_integer_32
			l_y := coordinate.column.as_integer_32



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

			create op.make (l_x, l_y,state,model.i+1)

    		model.game.history.extend_history (op)

    		op.execute

			-- push
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
