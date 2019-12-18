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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iVar0 = MISC::GET_GAME_TIMER();
	func_1();
	iVar1 = (MISC::GET_GAME_TIMER() - iVar0);
	Global_1264800->f_24 = aggregate_func_1047("GFMP", 60, -1, 0, 0);
	Global_1264800->f_7 = NETWORK::PARTICIPANT_ID_TO_INT();
	((*Global_1261535)[Global_1264800->f_7 /*102*/])->f_97 = PLAYER::PLAYER_ID();
	while (!aggregate_func_523(0, 0))
	{
		func_4();
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
	func_9();
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

void func_4()
{
	if (!Global_1264800->f_24)
	{
		Global_1264800->f_24 = aggregate_func_1047("GFMP", 60, -1, 0, 0);
		return;
	}
	if ((aggregate_func_1980(2, 255) || !UNLOCK::_UNLOCK_IS_VISIBLE(759426019)) || !UNLOCK::_UNLOCK_IS_UNLOCKED(759426019))
	{
		Global_1264800 = 0;
		return;
	}
	if (!(func_13() && func_14()))
	{
		Global_1264800 = 0;
		return;
	}
	if (!func_15())
	{
		Global_1264800 = 0;
		return;
	}
	Global_1264800 = 1;
	func_16();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17();
	}
	func_18();
}

void func_9()
{
	aggregate_func_4591(Global_1261405);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1261405, 130, 39);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1261405), 130, "g_mpGangfeudHostData");
	if (aggregate_func_4345())
	{
		aggregate_func_7546(Global_1261535);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1261535, 3265, 40);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1261535)[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1261535, 3265, 40);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1261535)[0 /*102*/]), 3265, "g_mpGangfeudPlayerData");
		aggregate_func_4285(Global_1264800);
	}
}

int func_13()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_3;
}

int func_14()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_5;
}

bool func_15()
{
	if (aggregate_func_9110() == 1)
	{
		return false;
	}
	if (aggregate_func_4442())
	{
		return false;
	}
	if (aggregate_func_2889(aggregate_func_4464(), 0, 0))
	{
		return false;
	}
	return true;
}

void func_16()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				func_31(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_17()
{
	switch (&Global_1261405)
	{
		case 0:
			func_32(1);
			break;
		case 1:
			func_33();
			break;
	}
}

void func_18()
{
	if (Global_1264800->f_7 == -1)
	{
		return;
	}
	func_34((*Global_1261535)[Global_1264800->f_7 /*102*/]);
	if ((Global_1939221->f_1433 == 1 || Global_1939221->f_1433 == 0) || Global_1939221->f_1433.f_2 == 1)
	{
		func_35();
	}
	func_36();
	if (Global_1264800->f_23 && !aggregate_func_4497(255))
	{
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			aggregate_func_2916("NG_CANNOT_SEND_CHALLENGE", 10000, 0, 0, 0, 1);
		}
		else
		{
			aggregate_func_2916("NG_CANNOT_SEND_CHALLENGE_MEMBER", 10000, 0, 0, 0, 1);
		}
		Global_1264800->f_23 = 0;
	}
	switch (((*Global_1261535)[&Global_1273882 /*102*/])->f_99)
	{
		case 0:
			if (func_39())
			{
				aggregate_func_3753(1);
			}
			break;
		case 1:
			if (func_41())
			{
				if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					aggregate_func_3753(2);
				}
				else
				{
					aggregate_func_4293(&(Global_1264800->f_2), 1);
					aggregate_func_3753(3);
				}
			}
			break;
		case 3:
			if (!aggregate_func_4260(&(Global_1264800->f_2)))
			{
				aggregate_func_4293(&(Global_1264800->f_2), 1);
			}
			if (aggregate_func_4298(&(Global_1264800->f_2)) > 60f)
			{
				aggregate_func_3753(1);
			}
			break;
		case 2:
			if (&Global_1197807 != -1)
			{
				aggregate_func_8374();
			}
			break;
		case 4:
			aggregate_func_4342();
			break;
	}
}

void func_31(int iParam0)
{
	struct<12> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0)
	{
		case 30:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_54(Var0);
			}
			func_55(&Var0);
			break;
	}
}

void func_32(int iParam0)
{
	Global_1261405 = iParam0;
}

void func_33()
{
	var uVar0;
	int iVar33;
	int iVar34;

	uVar0 = 32;
	iVar34 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar0, 1);
	if (iVar34 < 2)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < 1)
	{
		func_56();
		Global_1264800->f_80 = (Global_1264800->f_80 + 1 % 32);
		iVar33++;
	}
}

void func_34(var uParam0)
{
	var uVar0;

	if (((Global_1264800->f_16 != 255 && !PED::_0x3AA24CCC0D451379(Global_35)) && !aggregate_func_4946()) || (Global_1264800->f_16 != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1264800->f_16)))
	{
		Global_1264800->f_16 = 255;
	}
	if (uParam0->f_98 != Global_1273882->f_15)
	{
		uParam0->f_98 = Global_1273882->f_15;
		if (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) > 1 && !_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1273882->f_10))
		{
			func_58(uParam0);
		}
		else
		{
			func_59(uParam0);
		}
	}
	if (((*uParam0)[Global_1264800->f_30 /*3*/])->f_1 == -1)
	{
		return;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0[Global_1264800->f_30 /*3*/]) || _NAMESPACE26::_0x149A2751AB66AC02(uParam0[Global_1264800->f_30 /*3*/]) < 1)
	{
		((*uParam0)[Global_1264800->f_30 /*3*/])->f_2 = -1;
		((*uParam0)[Global_1264800->f_30 /*3*/])->f_1 = -1;
		(*uParam0)[Global_1264800->f_30 /*3*/] = uVar0;
		if (Global_1264800->f_8 > Global_1264800->f_30)
		{
			Global_1264800->f_8 = Global_1264800->f_30;
		}
		return;
	}
	aggregate_func_4054((*uParam0)[Global_1264800->f_30 /*3*/]);
}

void func_35()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = &Global_1273882;
	Var1 = { aggregate_func_4320() };
	if ((aggregate_func_4255(Var1) || ((*Global_1261535)[iVar0 /*102*/])->f_99 > 1) || Global_1102098->f_935.f_27 != -1)
	{
		func_62();
	}
	else
	{
		func_63();
	}
}

void func_36()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = &Global_1273882;
	if (((*Global_1261535)[iVar0 /*102*/])->f_99 > 1)
	{
		func_64(1);
		return;
	}
	if (&Global_1273882->f_22[&Global_1273882] == 0)
	{
		func_64(1);
		return;
	}
	Var1 = { aggregate_func_4320() };
	if (aggregate_func_4255(Var1))
	{
		func_64(1);
		return;
	}
	if (aggregate_func_4255(((*Global_1055965)[iVar0 /*436*/])->f_2) && aggregate_func_4521(((*Global_1055965)[iVar0 /*436*/])->f_2))
	{
		func_64(1);
		return;
	}
	if (aggregate_func_4278((*Global_1261535)[iVar0 /*102*/], 1))
	{
		func_67(1);
	}
}

bool func_39()
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1264800->f_75))
	{
		Global_1264800->f_75 = DATAFILE::_0xD97D8D905F1562F2(-152187458);
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1264800->f_75))
	{
		return false;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1264800->f_75, -761724091, "posse_feud_data/animosity_data(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1264800->f_75, 1456495662, ":value");
	return true;
}

bool func_41()
{
	struct<12> Var0;

	if (Global_1099293->f_26.f_141.f_5)
	{
		aggregate_func_7552(*Global_1197807, 1);
		Global_1264800->f_5 = 0;
		Global_1264800->f_25 = 1;
		Var0.f_9 = 255;
		Var0.f_10 = 255;
		Var0.f_11 = 255;
		Var0 = 30;
		Var0.f_6 = 0;
		Var0.f_9 = PLAYER::PLAYER_ID();
		Var0.f_10 = Global_1264800->f_15;
		Var0.f_11 = PLAYER::PLAYER_ID();
		Var0.f_7 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		Var0.f_8 = _NAMESPACE26::_0x901E0DC25080C8B9(Global_1264800->f_15);
		func_70(&Var0);
	}
	return Global_1099293->f_26.f_141.f_5;
}

void func_47(var uParam0)
{
	struct<102> Var0;

	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_97 = 255;
	*uParam0 = { Var0 };
}

void func_54(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (Param0.f_6)
	{
		case 0:
			func_82(&Param0);
			break;
		case 2:
			func_83(&Param0);
			break;
		case 3:
			func_84(&Param0);
			break;
		case 1:
			break;
	}
}

void func_55(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			func_85(uParam0);
			break;
		case 1:
			func_86();
			break;
		case 2:
			func_87(uParam0);
			break;
		case 3:
			func_88(uParam0);
			break;
	}
}

void func_56()
{
	if (NETWORK::GET_TIME_DIFFERENCE((Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 60000)
	{
		(Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_1 = 255;
		Global_1261405->f_1[Global_1264800->f_80 /*4*/] = 255;
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(&(Global_1261405->f_1[Global_1264800->f_80 /*4*/])) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED(&(Global_1261405->f_1[Global_1264800->f_80 /*4*/])))
	{
		(Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_1 = 255;
		Global_1261405->f_1[Global_1264800->f_80 /*4*/] = 255;
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167((Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_1) && !NETWORK::NETWORK_IS_PLAYER_CONNECTED((Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_1))
	{
		(Global_1261405->f_1[Global_1264800->f_80 /*4*/])->f_1 = 255;
		Global_1261405->f_1[Global_1264800->f_80 /*4*/] = 255;
		return;
	}
}

void func_58(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) || !aggregate_func_4505(iVar3))
	{
		return;
	}
	iVar1 = iVar3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*((*uParam0)[iVar0 /*3*/]) = { *((*(*Global_1261535)[iVar1 /*102*/])[iVar0 /*3*/]) };
		iVar0++;
	}
	Global_1264800->f_20 = iVar3;
}

void func_59(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*((*uParam0)[iVar0 /*3*/]) = { vVar1 };
		iVar0++;
	}
	Global_1264800->f_20 = NETWORK::PARTICIPANT_ID();
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1264800->f_40[iVar0])))
		{
		}
		else if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(&(Global_1264800->f_40[iVar0]), aggregate_func_4915(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(Global_1264800->f_40[iVar0]), aggregate_func_4915(0), false);
		}
		iVar0++;
	}
}

void func_63()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1264800->f_40[iVar0])))
		{
		}
		else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(&(Global_1264800->f_40[iVar0]), aggregate_func_4915(0)))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(Global_1264800->f_40[iVar0]), aggregate_func_4915(0), true);
		}
		iVar0++;
	}
}

void func_64(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1273882;
	aggregate_func_4241(&(((*Global_1261535)[iVar0 /*102*/])->f_100), iParam0);
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1273882;
	aggregate_func_4243(&(((*Global_1261535)[iVar0 /*102*/])->f_100), iParam0);
}

void func_70(var uParam0)
{
	var uVar0;

	uVar0 = aggregate_func_4507(0, 8);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar0))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 36, &uVar0);
}

void func_77()
{
	int iVar0;

	iVar0 = &Global_1273882;
	((*Global_1261535)[iVar0 /*102*/])->f_100 = 0;
}

void func_78()
{
	var uVar0;

	Global_1264800->f_79 = 255;
	Global_1264800->f_18 = uVar0;
	aggregate_func_3753(1);
}

void func_82(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_4)
	{
		return;
	}
	uParam0->f_4 = 1;
	SCRIPTS::_0x31010318BA9897AC(&uVar0, uParam0->f_9);
	uParam0->f_9 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_9));
	uParam0->f_10 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_10));
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((&Global_1261405->f_1[iVar1 /*4*/] == uParam0->f_9 || &Global_1261405->f_1[iVar1 /*4*/] == uParam0->f_10) && NETWORK::GET_TIME_DIFFERENCE((Global_1261405->f_1[iVar1 /*4*/])->f_3, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 60000)
		{
			uParam0->f_5 = 0;
			func_101(uParam0, &uVar0);
			return;
		}
		if (iVar2 == -1)
		{
			if ((Global_1261405->f_1[iVar1 /*4*/])->f_1 == 255 || &Global_1261405->f_1[iVar1 /*4*/] == 255)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1261405->f_1[iVar2 /*4*/] = uParam0->f_9;
	(Global_1261405->f_1[iVar2 /*4*/])->f_1 = uParam0->f_10;
	(Global_1261405->f_1[iVar2 /*4*/])->f_2 = uParam0->f_11;
	(Global_1261405->f_1[iVar2 /*4*/])->f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_5 = 1;
	func_101(uParam0, &uVar0);
	return;
}

void func_83(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1261405->f_1[iVar0 /*4*/] == uParam0->f_9 && (Global_1261405->f_1[iVar0 /*4*/])->f_1 == uParam0->f_10)
		{
			(Global_1261405->f_1[iVar0 /*4*/])->f_1 = 255;
			Global_1261405->f_1[iVar0 /*4*/] = 255;
			(Global_1261405->f_1[iVar0 /*4*/])->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_84(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_1261405->f_1[iVar0 /*4*/])->f_2 == uParam0->f_10)
		{
			(Global_1261405->f_1[iVar0 /*4*/])->f_1 = 255;
			Global_1261405->f_1[iVar0 /*4*/] = 255;
			(Global_1261405->f_1[iVar0 /*4*/])->f_2 = 255;
			return;
		}
		iVar0++;
	}
}

void func_85(var uParam0)
{
	if (!uParam0->f_4)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		Global_1264800->f_23 = 1;
		Global_1264800->f_25 = 1;
		aggregate_func_8009(Global_1197807);
		aggregate_func_3753(1);
		return;
	}
	func_103(uParam0);
}

void func_86()
{
	Global_1197807 = -1;
	aggregate_func_7552(*Global_1197807, 0);
}

void func_87(var uParam0)
{
	if (uParam0->f_9 == PLAYER::PLAYER_ID())
	{
		Global_1264800->f_27 = 1;
	}
}

void func_88(var uParam0)
{
	if (uParam0->f_10 == PLAYER::PLAYER_ID())
	{
		aggregate_func_3753(1);
	}
}

void func_98(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 24, &uParam1);
}

void func_101(var uParam0, float fParam1)
{
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 36, fParam1);
}

void func_103(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	switch (Global_1264800->f_28)
	{
		case 1:
			func_112(uParam0->f_10, Global_1901929->f_295.f_170);
			func_113(uParam0->f_10);
			Global_1264800->f_5 = 0;
			func_114();
			return;
		case 4:
			iVar0 = 1;
			iVar1 = 4;
			break;
		case 5:
			iVar0 = 2;
			iVar1 = 5;
			break;
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		aggregate_func_712(iVar0, uParam0->f_8, Global_1901929->f_295.f_170);
		func_116(uParam0->f_8);
		func_117();
		func_114();
	}
	else
	{
		Var2.f_4 = iVar1;
		Var2.f_5 = uParam0->f_8;
		Var2.f_1 = PLAYER::PLAYER_ID();
		Var2.f_9 = &Global_1197807;
		aggregate_func_1415(&Var2, _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15));
		func_116(uParam0->f_8);
		func_114();
	}
}

void func_112(int iParam0, var uParam1)
{
	struct<18> Var0;
	float fVar18;
	struct<19> Var19;
	vector3 vVar38;
	var uVar41;

	if (!aggregate_func_841(3))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var19.f_12 = -1;
	Var19.f_12.f_1 = -1;
	Var19.f_14 = 255;
	Var19.f_15 = 255;
	vVar38 = { 0f, 0f, 0f };
	Var0.f_5 = 3;
	Var0.f_10 = uParam1;
	if (&Global_1197807 != -1)
	{
		uVar41 = (&Global_1197807 - aggregate_func_4939(3));
		aggregate_func_7552(*Global_1197807, 1);
	}
	else
	{
		return;
	}
	Var19.f_4 = 85;
	SCRIPTS::_0x31010318BA9897AC(&fVar18, iParam0);
	Var19 = 1;
	Var19.f_1 = PLAYER::PLAYER_ID();
	Var19.f_14 = PLAYER::PLAYER_ID();
	Var19.f_15 = iParam0;
	Var19.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var19.f_6 = uParam1;
	Var19.f_16 = Global_1273882->f_15;
	func_130(aggregate_func_8377(1, aggregate_func_8376(uVar41)), vVar38, 0f, 0, 0, fVar18, Var19);
	SCRIPTS::_0xDE544B7EC0C187CC(&fVar18);
	SCRIPTS::_0x31010318BA9897AC(&fVar18, PLAYER::PLAYER_ID());
	Var0.f_6 = PLAYER::PLAYER_ID();
	Var0.f_8 = { aggregate_func_8377(1, aggregate_func_8376(uVar41)) };
	Var0.f_7 = fVar18;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	Var0.f_1 = iParam0;
	Var0.f_17 = 1;
	func_131(&Var0, &fVar18);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	aggregate_func_4580();
}

void func_113(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	Global_1264800->f_79 = iParam0;
	Global_1264800->f_18 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	aggregate_func_3753(2);
}

void func_114()
{
	switch (Global_1264800->f_28)
	{
		case 1:
			TELEMETRY::_0xF37A2149BC9A8A27(1403358139, PLAYER::PLAYER_ID(), Global_1264800->f_15, func_133(Global_1264800->f_18), 0);
			break;
		case 4:
			TELEMETRY::_0xF37A2149BC9A8A27(-1522841992, PLAYER::PLAYER_ID(), Global_1264800->f_15, func_133(Global_1264800->f_18), 0);
			break;
		case 5:
			TELEMETRY::_0xF37A2149BC9A8A27(2112282570, PLAYER::PLAYER_ID(), Global_1264800->f_15, func_133(Global_1264800->f_18), 0);
			break;
	}
}

void func_116(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return;
	}
	Global_1264800->f_18 = iParam0;
	aggregate_func_3753(2);
}

void func_117()
{
	aggregate_func_4055(16);
	aggregate_func_4055(17);
}

void func_130(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	struct<27> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 38, &fParam8);
}

void func_131(var uParam0, float fParam1)
{
	*uParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 18, 37, fParam1);
}

int func_133(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1264800->f_20;
	iVar1 = 0;
	if ((*Global_1261535)[iVar0 /*102*/])->f_97 != _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15)
	{
	}
	Global_1264800->f_12 = Global_1264800->f_12;
	while (Global_1264800->f_12 <= 31)
	{
		if ((*Global_1261535)[iVar0 /*102*/][Global_1264800->f_12 /*3*/] != iParam0)
		{
		}
		else
		{
			iVar1 = (iVar1 + ((*(*Global_1261535)[iVar0 /*102*/])[Global_1264800->f_12 /*3*/])->f_1);
		}
		Global_1264800->f_12++;
	}
	return iVar1;
}

