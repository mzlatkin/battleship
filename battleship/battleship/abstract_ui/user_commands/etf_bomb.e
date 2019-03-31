note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_BOMB
inherit
	ETF_BOMB_INTERFACE
		redefine bomb end
create
	make
feature -- command
	bomb(coordinate1: TUPLE[row: INTEGER_64; column: INTEGER_64] ; coordinate2: TUPLE[row: INTEGER_64; column: INTEGER_64])
		require else
			bomb_precond(coordinate1, coordinate2)
    	local
			l_x,l_y,r_x,r_y: INTEGER
			op: BOMB
			state : INTEGER
    	do
    		l_x := coordinate1.row.as_integer_32
			l_y := coordinate1.column.as_integer_32
			r_x := coordinate2.row.as_integer_32
			r_y := coordinate2.column.as_integer_32



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

    		create op.make (l_x, l_y, r_x,r_y,state,model.i+1)
    		model.game.history.extend_history (op)
    		op.execute

			-- push
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end


end
