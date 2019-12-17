#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
#endregion

void __EntryFunction__()
{
	func_1();
	while (!aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		BUILTIN::WAIT(0);
	}
	aggregate.ambient_fishing_scenario.func_7();
}

void func_1()
{
	aggregate.flow_controller.func_7(32, -1);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.ambient_fishing_scenario.func_7();
	}
	func_7();
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

void func_7()
{
	struct<36> Var0;
	var uVar36;

	Var0.f_3 = 4;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_1 = -1;
	Var0.f_3.f_1.f_2 = -1;
	Var0.f_3.f_1.f_5 = -1;
	Var0.f_3.f_1.f_8 = -1;
	Var0.f_3.f_1.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_5 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_1 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_2 = -1;
	Var0.f_3.f_1.f_8.f_8.f_8.f_5 = -1;
	*Global_1268203 = { Var0 };
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1268203, 36, 7);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1268203), 36, "g_mpShowHostData");
	if (aggregate.dynamic_craft_scenario.func_452())
	{
		(*Global_1268170)[aggregate.annesburg.func_265()] = uVar36;
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268170, 33, 8);
		aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17((*Global_1268170)[0]), 33, "g_mpShowPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268170, 33, 8);
		aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17((*Global_1268170)[0]), 33, "g_mpShowPlayerData");
	}
}

