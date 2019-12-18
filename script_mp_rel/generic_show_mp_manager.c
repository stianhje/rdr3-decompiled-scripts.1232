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
	while (!aggregate_func_523(0, 0))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_4264();
}

void func_1()
{
	aggregate_func_1994(32, -1);
	aggregate_func_306();
	if (aggregate_func_2318())
	{
		aggregate_func_4264();
	}
	func_7();
	aggregate_func_453(0);
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
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1268203), 36, "g_mpShowHostData");
	if (aggregate_func_4345())
	{
		(*Global_1268170)[aggregate_func_4294()] = uVar36;
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268170, 33, 8);
		aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17((*Global_1268170)[0]), 33, "g_mpShowPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268170, 33, 8);
		aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17((*Global_1268170)[0]), 33, "g_mpShowPlayerData");
	}
}

