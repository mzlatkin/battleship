note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_GIVE_UP
inherit
	ETF_GIVE_UP_INTERFACE
		redefine give_up end
create
	make
feature -- command
	give_up
		local
			op: GIVE_UP
			state : INTEGER
    	do
    		if model.game.history.before then
				state := model.i
			else
				if model.game.history.on_item then
					state := model.game.history.item.state
				else
					state := model.i
				end

			end

			create op.make (state,model.i+1)
    		model.game.history.extend_history (op)
    		op.execute

			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
