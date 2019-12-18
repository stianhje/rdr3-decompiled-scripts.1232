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
	struct<49> Local_18 = { 0, 0, 0, 7, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255 } ;
	var uLocal_67 = 255;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	struct<13> Local_76[7];
	struct<1228> Local_168 = { 0, 0, 0, 0, 32, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1396 = -1;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, -1, -1, 255 } ;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(ScriptParam_0);
	Local_168.f_2 = 0;
	Local_168 = ScriptParam_0;
	Local_168.f_1179 = ScriptParam_0.f_9;
	Local_168.f_1 = ScriptParam_0;
	aggregate_func_6523(6);
	Var0 = { ScriptParam_0.f_7 };
	func_3(Var0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		(Local_76[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_6 = { ScriptParam_0.f_1 };
	}
	while (!func_4())
	{
		func_5(&Local_18, &Local_76, &Local_168);
		BUILTIN::WAIT(0);
	}
	func_6(Var0, Local_18.f_48 == PLAYER::PLAYER_ID(), Local_18.f_48 == 255);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_7(&Local_18);
	}
	func_8(&Local_18, &Local_168);
	aggregate_func_2819();
}

void func_1(int iParam0)
{
	aggregate_func_1994(7, iParam0);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_18, 58, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_18), 58, "m_IRON_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_76, 92, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_76[0 /*13*/]), 92, "m_IRON_PlayerData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_3(struct<2> Param0)
{
	aggregate_func_2976(Param0, 1, 1, 1);
}

bool func_4()
{
	if (Local_168.f_2 >= 15)
	{
		return true;
	}
	if (aggregate_func_523(0, 0))
	{
		return true;
	}
	if (aggregate_func_2889(Local_168.f_1227, 1, 0))
	{
		return true;
	}
	if (SCRIPTS::_0x54AE4FDEEFEAB77E() != 0)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_18(), -1, true, 0))
	{
		return true;
	}
	return false;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19(uParam0, uParam1, iParam2);
	}
	func_20(uParam0, uParam1, iParam2);
	func_21(uParam0, (*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2);
	func_22(uParam0, (*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2, 0);
	func_23(iParam2);
	aggregate_func_4264();
}

void func_6(struct<2> Param0, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		aggregate_func_2037(Param0, 0, 2, 0);
	}
	else if (bParam2)
	{
		aggregate_func_2037(Param0, 0, 0, 0);
	}
	else
	{
		aggregate_func_2037(Param0, 0, 1, 0);
	}
	if (aggregate_func_4718(Param0))
	{
		aggregate_func_6728(Param0);
	}
}

void func_7(var uParam0)
{
	if (PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
	{
		PATHFIND::_0x4907D0E4FB26EE65(uParam0->f_34);
	}
}

void func_8(var uParam0, int iParam1)
{
	func_28();
	func_29();
	func_30(iParam1);
	func_31(iParam1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	NETWORK::_0x455156F47DC6B78C(1);
	aggregate_func_796(&(iParam1->f_167), 1);
	aggregate_func_3452(&(iParam1->f_182));
	aggregate_func_135(&(iParam1->f_1140), 1);
	MISC::CLEAR_BIT(&(iParam1->f_182.f_11.f_159), 13);
	func_35();
	aggregate_func_1684(0);
	func_37(1);
	if (aggregate_func_5980(3))
	{
		aggregate_func_4643(0);
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	PED::SET_PED_RESET_FLAG(aggregate_func_2430(PLAYER::PLAYER_PED_ID()), 105, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(aggregate_func_2430(PLAYER::PLAYER_PED_ID()), 0, 1);
	aggregate_func_7528();
	func_42();
	if (PATHFIND::_0x65A8196B8D7F5E0B(iParam1->f_1237))
	{
		PATHFIND::_0x4907D0E4FB26EE65(iParam1->f_1237);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam1->f_1180))
	{
		VOLUME::_0x43F867EF5C463A53(iParam1->f_1180);
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1210))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1210));
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1211))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1211));
	}
	func_43(iParam1);
	aggregate_func_5299(0);
	Global_1102098->f_935.f_21 = 0;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1102098->f_19, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1102098->f_19);
	}
	aggregate_func_6642();
	if (!aggregate_func_4278(uParam0, 64))
	{
		aggregate_func_6641(6);
	}
}

char* func_18()
{
	return "net_main_online";
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_37) || !_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_37)) || func_67(uParam1, 4))
		{
			aggregate_func_4266(uParam0, 64);
			aggregate_func_4252(uParam0, 9);
		}
	}
	if ((*uParam0 > 3 && *uParam0 < 7) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		aggregate_func_4266(uParam0, 64);
		aggregate_func_4252(uParam0, 9);
	}
	switch (*uParam0)
	{
		case 0:
			aggregate_func_4293(&(uParam0->f_45), 0);
			uParam0->f_37 = Global_1273882->f_15;
			aggregate_func_4252(uParam0, 2);
			break;
		case 2:
			if (!func_71(uParam0, uParam1))
			{
				if (aggregate_func_4732(&(uParam0->f_45)) > 7500)
				{
					aggregate_func_4266(uParam0, 64);
					aggregate_func_4266(uParam0, 128);
					aggregate_func_4252(uParam0, 9);
				}
				return;
			}
			if (!aggregate_func_4260(&(uParam0->f_45)))
			{
				aggregate_func_4293(&(uParam0->f_45), 0);
			}
			if (aggregate_func_4732(&(uParam0->f_45)) < 7500)
			{
				return;
			}
			uParam0->f_43 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			if (func_74(uParam0))
			{
				uParam0->f_33 = 0;
			}
			else
			{
				uParam0->f_33++;
				return;
			}
			aggregate_func_4252(uParam0, 3);
			break;
		case 3:
			if (aggregate_func_4732(&(uParam0->f_45)) < 7500)
			{
				return;
			}
			uParam0->f_32 = func_75(uParam1, 4);
			if (uParam0->f_32 > 1)
			{
				if (!PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
				{
					func_76(uParam0, uParam1);
				}
				else
				{
					func_77(uParam0);
				}
				if (aggregate_func_4278(uParam0, 1))
				{
					aggregate_func_4252(uParam0, 5);
					uParam0->f_42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			else
			{
				aggregate_func_4266(uParam0, 64);
				aggregate_func_4252(uParam0, 9);
				aggregate_func_4266(uParam0, 512);
			}
			break;
		case 5:
			if (func_78(uParam0))
			{
				uParam0->f_35 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				aggregate_func_4252(uParam0, 6);
			}
			break;
		case 6:
			func_79(uParam0, uParam1);
			if (func_80(uParam1, 16777216, 33554432))
			{
				aggregate_func_4252(uParam0, 7);
			}
			break;
		case 7:
			func_81(uParam0, uParam1);
			uParam0->f_40 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			aggregate_func_4252(uParam0, 8);
			break;
		case 8:
			if (func_82(uParam0))
			{
				aggregate_func_4252(uParam0, 11);
			}
			break;
		case 9:
			aggregate_func_4266(uParam0, 64);
			break;
		case 11:
			break;
	}
}

void func_20(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = PLAYER::PLAYER_ID();
	if (*uParam0 > 0 && uParam0->f_37 != Global_1273882->f_15)
	{
		if (!func_83(iParam2))
		{
			return;
		}
		aggregate_func_4242(iParam2, 11);
	}
	if (aggregate_func_4278(uParam0, 64))
	{
		if (!func_83(iParam2))
		{
			return;
		}
		aggregate_func_4242(iParam2, 11);
	}
	switch (iParam2->f_2)
	{
		case 0:
			if (!func_85((*uParam1)[iVar0 /*13*/], iParam2))
			{
				return;
			}
			if (aggregate_func_4260(&(uParam0->f_45)) && aggregate_func_4732(&(uParam0->f_45)) > 7500)
			{
				aggregate_func_4242(iParam2, 12);
			}
			aggregate_func_8128();
			aggregate_func_3775(Global_35, 869278708, 1971704925);
			((*uParam1)[iVar0 /*13*/])->f_12 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar1);
			aggregate_func_4247((*uParam1)[iVar0 /*13*/], 4);
			if (((*uParam1)[iVar0 /*13*/])->f_12)
			{
				((*uParam1)[iVar0 /*13*/])->f_6 = { MAP::_GET_WAYPOINT_COORDS() };
				NETWORK::_0x455156F47DC6B78C(0);
				func_89();
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				if ((iParam2->f_182.f_210[iVar2 /*23*/])->f_14 == 255)
				{
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_1 = 9999999f;
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_2 = 9999999f;
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_5 = 9999999f;
				}
				iVar2++;
			}
			aggregate_func_1962(aggregate_func_4257(joaat("attempts"), -785841056), 1);
			aggregate_func_4969(8);
			aggregate_func_4242(iParam2, 5);
			break;
		case 5:
			if (*uParam0 >= 5)
			{
				aggregate_func_4242(iParam2, 6);
				aggregate_func_1312("MP_HORSE_RACE_START", 1, 0);
			}
			break;
		case 6:
			func_94(iParam2);
			if (*uParam0 > 5 || func_78(uParam0))
			{
				func_95();
				aggregate_func_135(&(iParam2->f_1140), 1);
				aggregate_func_6950(1, 2);
				iParam2->f_1182 = { Global_36 };
				((*uParam1)[iVar0 /*13*/])->f_10 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				aggregate_func_5299(1);
				aggregate_func_4242(iParam2, 7);
			}
			break;
		case 7:
			func_97(uParam0, (*uParam1)[iVar0 /*13*/], iParam2);
			func_98(uParam0, iParam2);
			func_94(iParam2);
			func_99();
			aggregate_func_6615();
			aggregate_func_8721();
			func_102(uParam0, (*uParam1)[iVar0 /*13*/], iParam2);
			if (aggregate_func_4368((*uParam1)[iVar0 /*13*/], 16777216) || aggregate_func_4368((*uParam1)[iVar0 /*13*/], 33554432))
			{
				aggregate_func_5299(0);
				aggregate_func_796(&(iParam2->f_167), 1);
				aggregate_func_1312("MP_HORSE_RACE_END", 1, 1);
				aggregate_func_4242(iParam2, 8);
			}
			break;
		case 8:
			if (!aggregate_func_4368((*uParam1)[iVar0 /*13*/], 1073741824 /* Float: 2f */))
			{
				aggregate_func_4247((*uParam1)[iVar0 /*13*/], 131072);
			}
			func_30(iParam2);
			if (*uParam0 > 7)
			{
				Global_1102098->f_935.f_21 = 1;
				aggregate_func_796(&(iParam2->f_167), 1);
				func_105(uParam0, uParam1, iParam2);
				aggregate_func_4242(iParam2, 9);
			}
			break;
		case 9:
			if (!MISC::IS_BIT_SET(iParam2->f_182.f_11.f_159, 13))
			{
				MISC::SET_BIT(&(iParam2->f_182.f_11.f_159), 13);
			}
			func_106(iParam2);
			if (!aggregate_func_4260(&(iParam2->f_1234)))
			{
				aggregate_func_4293(&(iParam2->f_1234), 0);
			}
			if (*uParam0 > 8 && aggregate_func_1526(&(iParam2->f_1234)) > 2000)
			{
				aggregate_func_4242(iParam2, 10);
			}
			break;
		case 10:
			if (aggregate_func_4368((*uParam1)[iVar0 /*13*/], 1))
			{
				aggregate_func_4242(iParam2, 14);
				return;
			}
			func_110(uParam0, iParam2);
			if (uParam0->f_48 == PLAYER::PLAYER_ID())
			{
				aggregate_func_1962(aggregate_func_4257(-1892463704, -681494152), 1);
				aggregate_func_1962(aggregate_func_4257(-1892463704, -785841056), 1);
				aggregate_func_1962(aggregate_func_4354(1114562171), 1);
			}
			else
			{
				aggregate_func_1962(aggregate_func_4257(1374282888, -681494152), 1);
				aggregate_func_1962(aggregate_func_4257(1374282888, -785841056), 1);
			}
			aggregate_func_4242(iParam2, 14);
			break;
		case 12:
			if (iParam2->f_1239 != 0)
			{
				_NAMESPACE71::_0x2F901291EF177B02(iParam2->f_1239, 1);
				iParam2->f_1239 = 0;
			}
			if (!aggregate_func_4368((*uParam1)[iVar0 /*13*/], 1))
			{
				aggregate_func_796(&(iParam2->f_167), 1);
				aggregate_func_6950(1, 2);
				PED::SET_PED_RESET_FLAG(aggregate_func_2430(PLAYER::PLAYER_PED_ID()), 105, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(aggregate_func_2430(PLAYER::PLAYER_PED_ID()), 0, 1);
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				aggregate_func_4247((*uParam1)[iVar0 /*13*/], 1);
			}
			if (Global_1273882->f_15 != uParam0->f_37)
			{
				aggregate_func_4242(iParam2, 11);
			}
			if (*uParam0 > 7)
			{
				func_105(uParam0, uParam1, iParam2);
				Global_1102098->f_935.f_21 = 1;
				aggregate_func_4242(iParam2, 9);
				aggregate_func_796(&(iParam2->f_167), 1);
			}
			break;
		case 14:
			if (*uParam0 == 11)
			{
				aggregate_func_4242(iParam2, 15);
			}
			break;
		case 11:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			if (!aggregate_func_4278(iParam2, 64))
			{
				return;
			}
			aggregate_func_1312("MP_HORSE_RACE_FAIL", 1, 1);
			aggregate_func_7528();
			aggregate_func_4247((*uParam1)[iVar0 /*13*/], 1);
			aggregate_func_4242(iParam2, 15);
			break;
		case 15:
			break;
	}
}

void func_21(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char[] cVar3[8];

	if (!func_83(iParam2))
	{
		return;
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(3);
	iVar1 = 0;
	if ((((iVar0 == 0 || iVar0 != iParam2->f_1238) || iParam2->f_2 != iParam2->f_1240) || iParam2->f_3 != iParam2->f_1241) || iParam2->f_1243)
	{
		bVar2 = true;
		iParam2->f_1243 = 0;
	}
	switch (iParam2->f_2)
	{
		case 0:
			break;
		case 6:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			cVar3 = (6500 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			if (cVar3 < 6500)
			{
				aggregate_func_796(&(iParam2->f_167), 1);
				if (cVar3 < 6000)
				{
					cVar3 = (cVar3 / 1000);
				}
				else
				{
					cVar3 = 5;
				}
				func_113(&(iParam2->f_1140), cVar3, 1, 0, 1);
			}
			break;
		case 7:
			if (aggregate_func_4278(uParam0, 16))
			{
				aggregate_func_796(&(iParam2->f_167), 1);
			}
			else
			{
				aggregate_func_6648(&(iParam2->f_167), (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE())) + 1, 0, 30000, 0);
			}
			if (bVar2)
			{
				if (aggregate_func_4278(iParam2, 65536))
				{
					iParam2->f_1238 = aggregate_func_3306("IRON_NEED_OWN_HORSE_OBJ", -1, 0, 0, 1);
				}
				else
				{
					iParam2->f_1238 = aggregate_func_3306("IRON_RACE_OBJ", -1, 0, 0, 1);
				}
			}
			break;
		case 8:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
			break;
		case 9:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 10:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 12:
			aggregate_func_796(&(iParam2->f_167), 1);
			if (!aggregate_func_4278(iParam2, 4) && !aggregate_func_4497(255))
			{
				if (aggregate_func_3634(func_117(), 10000, 0, 0, 0, 1) != 0)
				{
					aggregate_func_4266(iParam2, 4);
				}
			}
			if (aggregate_func_4368(uParam1, 65536) && !aggregate_func_4497(255))
			{
				aggregate_func_4161("IRON_DECLINE_ATTACK_TITLE", "IRON_DECLINE_ATTACK_BODY", -2, 0, 0, 0, 1, 1);
				aggregate_func_4247(uParam1, 65536);
			}
			if (bVar2)
			{
				iParam2->f_1238 = aggregate_func_3306("IRON_SPECTATE_OBJ", -1, 0, 0, 1);
			}
			break;
		case 11:
			aggregate_func_796(&(iParam2->f_167), 1);
			if (!aggregate_func_4278(iParam2, 64))
			{
				if (aggregate_func_4278(uParam0, 1024))
				{
					iVar1 = aggregate_func_4161("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_LEADER_NO_MONEY", -2, 0, 0, 0, 1, 1);
				}
				else if (aggregate_func_4278(uParam0, 128))
				{
					iVar1 = aggregate_func_4161("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_FINISH", -2, 0, 0, 0, 1, 1);
				}
				else if (aggregate_func_4278(uParam0, 256))
				{
					iVar1 = aggregate_func_4161("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_BET", -2, 0, 0, 0, 1, 1);
				}
				else if (aggregate_func_4278(uParam0, 512))
				{
					iVar1 = aggregate_func_4161("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_PLAYERS", -2, 0, 0, 0, 1, 1);
				}
				else
				{
					iVar1 = aggregate_func_4161("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_CANCELED", -2, 0, 0, 0, 1, 1);
				}
				if (iVar1 != 0)
				{
					aggregate_func_4266(iParam2, 64);
				}
			}
			break;
		case 13:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 14:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 15:
			aggregate_func_796(&(iParam2->f_167), 1);
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
	}
	if (iParam2->f_1238 != 0)
	{
		iParam2->f_1240 = iParam2->f_2;
	}
}

void func_22(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_83(iParam2))
	{
		return;
	}
	if (iParam3 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
		{
			return;
		}
		if (aggregate_func_4946())
		{
			return;
		}
	}
	if (iParam2->f_2 >= 0 && !aggregate_func_4278(iParam2, 128))
	{
		if (aggregate_func_4161("IRON_SHARD_INTRO_ONE", "IRON_SHARD_INTRO_TWO", -2, 0, 0, 0, 1, 1) != 0)
		{
			aggregate_func_4266(iParam2, 128);
		}
		return;
	}
	if (iParam2->f_2 >= 9 && !aggregate_func_4278(iParam2, 256))
	{
		if (!aggregate_func_4260(&(iParam2->f_1234)))
		{
			aggregate_func_4293(&(iParam2->f_1234), 0);
		}
		if (aggregate_func_1526(&(iParam2->f_1234)) > 2000)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(11, 1, 0);
			if (!aggregate_func_4368(uParam1, 1))
			{
				if (aggregate_func_4278(uParam0, 2))
				{
					if (uParam0->f_48 == PLAYER::PLAYER_ID())
					{
						if (func_122("IRON_SHARD_PASS_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							aggregate_func_4266(iParam2, 256);
						}
					}
					else if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_48))
					{
						if (func_122("IRON_SHARD_FAIL_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							aggregate_func_4266(iParam2, 256);
						}
					}
					else if (func_122("IRON_SHARD_FAIL_ONE", MISC::_CREATE_VAR_STRING(10, "IRON_SHARD_FAIL_TWO", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(uParam0->f_48), aggregate_func_752(uParam0->f_48, 1, -1, 0))), "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
					{
						aggregate_func_4266(iParam2, 256);
					}
				}
				else if (func_122("IRON_SHARD_OVER_ONE", "IRON_TIME_LIMIT_EXPIRED", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
				{
					aggregate_func_4266(iParam2, 256);
				}
			}
			else if (func_122("IRON_SHARD_OVER_ONE", "GEIRON_SHOW_SCORES", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
			{
				aggregate_func_4266(iParam2, 256);
			}
			return;
		}
	}
}

void func_23(int iParam0)
{
	if (aggregate_func_7963(0, 0, 0))
	{
		if (!aggregate_func_4260(&(iParam0->f_1229)))
		{
			aggregate_func_4293(&(iParam0->f_1229), 1);
			aggregate_func_1684(1);
		}
		else if (aggregate_func_1526(&(iParam0->f_1229)) <= 45000)
		{
			LAW::_0xBD944A3D36E992DE();
			PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
		}
	}
	else if (aggregate_func_4260(&(iParam0->f_1229)))
	{
		aggregate_func_4313(&(iParam0->f_1229));
	}
}

void func_28()
{
	((*Global_1103072)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/])->f_1 = -1;
	((*Global_1103072)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/])->f_2 = 255;
	aggregate_func_4247((*Global_1103072)[aggregate_func_4294() /*6*/], 4);
	aggregate_func_4266(Global_1102098, 8);
	aggregate_func_4266(Global_1102098, 4);
	aggregate_func_4266(Global_1102098, 16);
}

void func_29()
{
	aggregate_func_4266(Global_1102098, 32);
}

void func_30(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1210))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1210));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1211))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1211));
	}
}

void func_31(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_1245))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_1245, true);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iParam0->f_1246))
	{
		PROPSET::_DELETE_PROPSET(iParam0->f_1246, true, true);
	}
}

void func_35()
{
	aggregate_func_7552(*Global_1197807, 0);
	if (&Global_1197807 != -1)
	{
		aggregate_func_8009(Global_1197807);
		aggregate_func_7553(Global_1197807, 0);
	}
}

void func_37(bool bParam0)
{
	Global_1903928->f_485[57] = !bParam0;
}

void func_42()
{
	if (!Global_1070355->f_2)
	{
		aggregate_func_5366();
	}
}

void func_43(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (MAP::DOES_BLIP_EXIST(&(iParam0->f_1212[iVar0])))
		{
			MAP::REMOVE_BLIP(iParam0->f_1212[iVar0]);
		}
		iVar0++;
	}
}

bool func_67(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!((*uParam0)[iVar0 /*13*/])->f_12)
		{
		}
		else if (aggregate_func_4240(((*uParam0)[iVar0 /*13*/])->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_71(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_37);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	if (!aggregate_func_4271(iVar1))
	{
		return false;
	}
	if (aggregate_func_4268(((*uParam1)[iVar2 /*13*/])->f_6))
	{
		return false;
	}
	uParam0->f_50 = { aggregate_func_1977(iVar0) };
	uParam0->f_53 = { ((*uParam1)[iVar2 /*13*/])->f_6 };
	uParam0->f_53.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(uParam0->f_53, uParam0->f_53.f_1);
	STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_53);
	if (!ENTITY::_0x6BFBDC46139C45AB(uParam0->f_53))
	{
		return false;
	}
	if (!aggregate_func_3423(&(uParam0->f_53), 9999f))
	{
		return false;
	}
	return true;
}

bool func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	uParam0->f_56 = 2.147484E+09f;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_33);
	if (!aggregate_func_4271(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
	{
		return false;
	}
	fVar2 = aggregate_func_2912(aggregate_func_1977(iVar1), uParam0->f_53);
	if (fVar2 < uParam0->f_56)
	{
		uParam0->f_56 = fVar2;
	}
	return uParam0->f_33 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1);
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!aggregate_func_4271(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (aggregate_func_4368((*uParam0)[iVar1 /*13*/], iParam1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_76(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar0 = 0f;
	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (aggregate_func_4368((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			if (!aggregate_func_4271(iVar3))
			{
			}
			else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
			}
			else
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar4) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar4))
				{
				}
				else
				{
					fVar1 = aggregate_func_2912(aggregate_func_1977(iVar4), uParam0->f_53);
					if (fVar1 > fVar0)
					{
						fVar0 = fVar1;
						uParam0->f_50 = { aggregate_func_1977(iVar4) };
					}
				}
			}
		}
		iVar2++;
	}
	uParam0->f_34 = PATHFIND::_0xFD5BB35AAB83FD48(uParam0->f_50, uParam0->f_53, 0);
}

void func_77(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
	{
		if (PATHFIND::SIMULATED_ROUTE_IS_LOADED(uParam0->f_34))
		{
			PATHFIND::SIMULATED_ROUTE_TRAVEL_TO_POINT(uParam0->f_34, 1f, 5f);
			uParam0->f_36 = BUILTIN::CEIL(((PATHFIND::SIMULATED_ROUTE_GET_ETA(uParam0->f_34) * 1000f) * 1.5f));
			fVar0 = aggregate_func_2912(uParam0->f_50, uParam0->f_53);
			fVar1 = 5f;
			iVar2 = BUILTIN::CEIL((fVar0 / fVar1)) * 1000;
			if (uParam0->f_36 < iVar2)
			{
				uParam0->f_36 = BUILTIN::CEIL(((fVar0 * 1.5f) / fVar1)) * 1000;
			}
			if ((uParam0->f_36 % 60000) > 0)
			{
				uParam0->f_36 = (uParam0->f_36 + (60000 - (uParam0->f_36 % 60000)));
			}
			Global_1102098->f_23 = uParam0->f_35;
			Global_1102098->f_24 = uParam0->f_36;
			aggregate_func_4266(uParam0, 1);
		}
	}
}

bool func_78(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6500;
}

void func_79(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 255;
	if (!aggregate_func_4278(uParam0, 2))
	{
		iVar0 = func_188(uParam1, 16777216);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_189(uParam0);
			aggregate_func_4266(uParam0, 2);
			uParam0->f_49 = iVar0;
		}
	}
	if (aggregate_func_4278(uParam0, 2) && !aggregate_func_4278(uParam0, 16))
	{
		func_190(uParam0);
		func_191(uParam0, uParam1);
		aggregate_func_4266(uParam0, 16);
	}
	if (!aggregate_func_4278(uParam0, 16))
	{
		iVar1 = (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	else
	{
		iVar1 = (3000 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_38, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	if (iVar1 <= 0)
	{
		aggregate_func_4266(uParam0, 32);
		if (!aggregate_func_4278(uParam0, 16))
		{
			func_191(uParam0, uParam1);
		}
	}
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!aggregate_func_4368((*uParam0)[iVar0 /*13*/], 1))
			{
				if (!(aggregate_func_4368((*uParam0)[iVar0 /*13*/], iParam1) || aggregate_func_4368((*uParam0)[iVar0 /*13*/], iParam2)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar2 = false;
	iVar3 = 255;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (aggregate_func_4368((*uParam1)[iVar1 /*13*/], 16777216))
			{
				iVar4 = NETWORK::GET_TIME_DIFFERENCE(((*uParam1)[iVar1 /*13*/])->f_10, ((*uParam1)[iVar1 /*13*/])->f_9);
				if (!bVar2 || iVar4 < iVar0)
				{
					bVar2 = true;
					iVar0 = iVar4;
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
				}
			}
		}
		iVar1++;
	}
	uParam0->f_48 = iVar3;
}

bool func_82(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_40, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 20000;
}

bool func_83(int iParam0)
{
	if (iParam0->f_1244)
	{
		return true;
	}
	if (!aggregate_func_4278(iParam0, -2147483648))
	{
		HUD::_0xF66090013DE648D5("GEIRONMP");
		aggregate_func_4266(iParam0, -2147483648);
	}
	if (!HUD::_0xD0976CC34002DB57("GEIRONMP"))
	{
		if (!HUD::_0x3CF96E16265B7DC8("GEIRONMP"))
		{
			HUD::_0xF66090013DE648D5("GEIRONMP");
		}
		return false;
	}
	iParam0->f_1244 = 1;
	return true;
}

bool func_85(var uParam0, int iParam1)
{
	if (!aggregate_func_4278(iParam1, -2147483648))
	{
		HUD::_0xF66090013DE648D5("GEIRONMP");
		aggregate_func_4266(iParam1, -2147483648);
	}
	if (!HUD::_0xD0976CC34002DB57("GEIRONMP"))
	{
		if (!HUD::_0x3CF96E16265B7DC8("GEIRONMP"))
		{
			HUD::_0xF66090013DE648D5("GEIRONMP");
		}
		return false;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED_2(func_192()) || !PROPSET::_HAS_PROPSET_LOADED(func_192()))
	{
		func_193();
		return false;
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	uParam0->f_11 = 0;
	iParam1->f_1220 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	func_37(0);
	iParam1->f_1244 = 1;
	return true;
}

void func_89()
{
	if (MAP::IS_WAYPOINT_ACTIVE())
	{
		MAP::CLEAR_GPS_PLAYER_WAYPOINT();
		MAP::SET_WAYPOINT_OFF();
	}
}

void func_94(int iParam0)
{
	if (aggregate_func_4946())
	{
		iParam0->f_166 = 1;
	}
	else if (iParam0->f_166)
	{
		aggregate_func_1312("MP_HORSE_RACE_START", 1, 0);
		iParam0->f_166 = 0;
	}
}

void func_95()
{
	aggregate_func_4266(Global_1102098, 32);
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (aggregate_func_4368(uParam1, 131072))
	{
		return;
	}
	if (aggregate_func_4268(uParam0->f_53))
	{
		return;
	}
	if (aggregate_func_2912(Global_36, uParam0->f_53) > 400f)
	{
		return;
	}
	vVar0 = { uParam0->f_53 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, (50f * 2f));
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar0 + Vector(50f, 50f, 50f), vVar0 - Vector(50f, 50f, 50f));
		return;
	}
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0, false, &vVar0, 2))
	{
		vVar0 = { uParam0->f_53 };
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1245))
		{
			iParam2->f_1245 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_197(), uParam0->f_53, 0f, 0f, 0f, 1.5f, false, false, false, true);
		}
	}
	if (PROPSET::_HAS_PROPSET_LOADED_2(func_192()))
	{
		aggregate_func_3423(&vVar0, 9999f);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1245))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iParam2->f_1245, true);
		}
		iParam2->f_1245 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_197(), vVar0, 0f, 0f, 0f, 1.5f, false, false, false, true);
		iParam2->f_1246 = PROPSET::_CREATE_PROPSET(func_192(), vVar0, 0, 0f, 9999f, false, true);
		if (!aggregate_func_4368(uParam1, 131072))
		{
			aggregate_func_4247(uParam1, 131072);
		}
	}
	if (aggregate_func_4368(uParam1, 1073741824 /* Float: 2f */))
	{
		aggregate_func_4247(uParam1, 1073741824 /* Float: 2f */);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (BUILTIN::VDIST(Global_36, uParam0->f_53) < 150f)
	{
		return;
	}
	if (!aggregate_func_4268(uParam0->f_53))
	{
		aggregate_func_144(&(iParam1->f_1221), uParam0->f_53, 1, -1082130432 /* Float: -1f */);
	}
}

void func_99()
{
	struct<30> Var0;
	struct<9> Var30;

	if (!aggregate_func_1557(Global_35, 1))
	{
		if (PED::_0x7A4E00364B5D727B(Global_35))
		{
			aggregate_func_6145(0);
		}
		return;
	}
	if (!aggregate_func_5519(255) || !aggregate_func_5596(255))
	{
		return;
	}
	NETWORK::_0x44D59EC597BBF348(9, true);
	NETWORK::_0xEB6027FD1B4600D5(15, false, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(19, true, 0.05f);
	NETWORK::_0x44D59EC597BBF348(3, false);
	func_203(aggregate_func_1977(PLAYER::PLAYER_ID()), 2f, 7f, &Var0, &Var30);
	aggregate_func_7463(1, 0);
	aggregate_func_5982(Var0, Var30, 1, 1, 1);
}

void func_102(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	func_97(uParam0, uParam1, iParam2);
	func_206(iParam2);
	if ((!aggregate_func_4278(iParam2, 262144) && NETWORK::_0x255A5EF65EDA9167(uParam0->f_49)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_49))
	{
		aggregate_func_1807("IRON_TICKER_WINNER_VALID", uParam0->f_49, -963477619);
		aggregate_func_4266(iParam2, 262144);
	}
	if (aggregate_func_4278(uParam0, 32) && !uParam1->f_11)
	{
		aggregate_func_4247(uParam1, 33554432);
		return;
	}
	fVar0 = aggregate_func_1501(PLAYER::PLAYER_PED_ID(), uParam0->f_53, 0);
	if ((fVar0 <= 33f && !uParam1->f_11) && !aggregate_func_4278(iParam2, 65536))
	{
		uParam1->f_11 = 1;
		uParam1->f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		aggregate_func_4247(uParam1, 16777216);
	}
	if (fVar0 > 33f)
	{
		if (!aggregate_func_4368(uParam1, 134217728) && MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::CLEAR_GPS_PLAYER_WAYPOINT();
			MAP::SET_WAYPOINT_OFF();
			aggregate_func_4247(uParam1, 134217728);
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1210))
		{
			iParam2->f_1210 = MAP::_0x554D9D53F696D002(-282719360, uParam0->f_53);
			MAP::_0x662D364ABF16DE2F(iParam2->f_1210, -1878373110);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1210, "IRON_WAYPOINT_NAME");
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1211))
		{
			iParam2->f_1211 = MAP::_0xEC174ADBCB611ECC(1247852480, uParam0->f_53, 45f, 45f, 45f, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1210, "IRON_AREA_NAME");
		}
	}
}

void func_105(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (aggregate_func_4368((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (((*uParam1)[iVar2 /*13*/])->f_11)
			{
				iVar3 = NETWORK::GET_TIME_DIFFERENCE(((*uParam1)[iVar2 /*13*/])->f_10, ((*uParam1)[iVar2 /*13*/])->f_9);
				fVar4 = 0f;
				aggregate_func_813(&(iParam2->f_182), BUILTIN::TO_FLOAT(iVar3), iVar1, iParam2->f_1146[iVar2], 0, 0f, 0, 0, 0, 0);
			}
			else
			{
				iVar3 = uParam0->f_36 + 3000;
				fVar4 = func_211(uParam0, iVar1);
				aggregate_func_813(&(iParam2->f_182), -1f, iVar1, iParam2->f_1146[iVar2], 0, fVar4, 0, 0, 0, 0);
			}
		}
		iVar2++;
	}
	func_212(&(iParam2->f_182));
}

void func_106(int iParam0)
{
	var uVar0;

	uVar0 = 1;
	aggregate_func_6650(&(iParam0->f_167), &(iParam0->f_182), &uVar0, 10241, 0);
}

void func_110(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	fVar0 = BUILTIN::VDIST(iParam1->f_1182, uParam0->f_53);
	fVar1 = BUILTIN::VDIST(Global_36, uParam0->f_53);
	fVar2 = (fVar0 - fVar1);
	iVar3 = 1785817993;
	iVar4 = func_217(fVar2);
	Var5.f_1 = 11;
	aggregate_func_4575(&Var5, iVar4);
	if (uParam0->f_48 == PLAYER::PLAYER_ID())
	{
		iVar3 = 1356271729;
	}
	func_219(fVar2);
	aggregate_func_6951(iVar3, &Var5, 0, 255, 0, 0);
}

int func_113(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	if (aggregate_func_326(iParam0, sParam1, &bVar0, 0, vVar2, 0, 0))
	{
		aggregate_func_327(iParam0, sParam1, bParam2, bParam3, bParam4);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		aggregate_func_135(iParam0, 1);
	}
	return iVar1;
}

char* func_117()
{
	return "IRON_SPECTATE_HELP";
}

int func_122(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	switch (iParam3)
	{
		case 3:
			iVar0 = aggregate_func_4162(sParam0, sParam1, sParam2, -2, 0, 0, 0, 1, 1, 1);
			break;
		case 2:
			iVar0 = aggregate_func_4161(sParam0, sParam1, -2, 0, 0, 0, 1, 1);
			break;
		case 1:
			iVar0 = aggregate_func_3913(sParam0, -2, 0, 0, 0, 1);
			break;
	}
	return iVar0;
}

int func_188(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_4368((*uParam0)[iVar0 /*13*/], iParam1))
			{
				return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			}
		}
		iVar0++;
	}
	return 255;
}

void func_189(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_190(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_191(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (aggregate_func_4368((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			fVar3 = BUILTIN::VDIST(aggregate_func_1977(iVar1), uParam0->f_53);
			uParam0->f_3[iVar2 /*4*/] = iVar1;
			(uParam0->f_3[iVar2 /*4*/])->f_3 = fVar3;
		}
		iVar2++;
	}
}

int func_192()
{
	return 8658837;
}

void func_193()
{
	PROPSET::_REQUEST_PROPSET_2(func_192());
	PROPSET::_REQUEST_PROPSET(func_192());
}

char* func_197()
{
	return "scr_net_imp_race_smoke";
}

void func_203(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6)
{
	uParam5->f_5 = 2;
	uParam5->f_1 = { vParam0 };
	uParam5->f_17.f_6 = { vParam0 };
	uParam5->f_17 = { fParam3, fParam3, fParam3 };
	if (fParam3 > 30f)
	{
		uParam5->f_17 = { fParam3, fParam3, 30f };
	}
	uParam5->f_17.f_9 = -432403087;
	uParam5->f_6.f_6 = { vParam0 };
	uParam5->f_6 = { fParam4, fParam4, 0f };
	uParam5->f_6.f_9 = -432403087;
	uParam5->f_16 = 1;
	uParam6->f_5 = 2;
	uParam6->f_1 = { vParam0 };
	uParam6->f_6 = { vParam0 };
}

void func_206(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_2430(Global_35);
	if ((func_288(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !aggregate_func_4278(iParam0, 65536))
	{
		aggregate_func_8128();
		aggregate_func_4266(iParam0, 65536);
		iParam0->f_1243 = 1;
	}
	else if ((!func_288(iVar0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) && aggregate_func_4278(iParam0, 65536))
	{
		aggregate_func_4266(iParam0, 65536);
		iParam0->f_1243 = 1;
	}
}

float func_211(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (&uParam0->f_3[iVar0 /*4*/] == iParam1)
		{
			return (uParam0->f_3[iVar0 /*4*/])->f_3;
		}
		iVar0++;
	}
	return BUILTIN::VDIST(aggregate_func_1977(iParam1), uParam0->f_53);
}

void func_212(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uParam0->f_210, 23, 1, 2, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0);
}

int func_217(float fParam0)
{
	if (fParam0 >= 9600f)
	{
		return 1345538268;
	}
	else if (fParam0 >= 8800f)
	{
		return 499324630;
	}
	else if (fParam0 >= 8000f)
	{
		return 616151496;
	}
	else if (fParam0 >= 7200f)
	{
		return 1472121948;
	}
	else if (fParam0 >= 6400f)
	{
		return -2145795486;
	}
	else if (fParam0 >= 5600f)
	{
		return -312702407;
	}
	else if (fParam0 >= 4800f)
	{
		return 276641649;
	}
	else if (fParam0 >= 4000f)
	{
		return -1886330704;
	}
	else if (fParam0 >= 3200f)
	{
		return 54118186;
	}
	else if (fParam0 >= 2400f)
	{
		return 487570185;
	}
	else if (fParam0 >= 1600f)
	{
		return -1699723306;
	}
	return 0;
}

void func_219(float fParam0)
{
	struct<2> Var0;
	float fVar2;

	Var0 = { aggregate_func_4257(joaat("misc"), 1380603511) };
	fVar2 = func_297(Var0);
	if (fParam0 > 0f && fParam0 > fVar2)
	{
		STATS::STAT_ID_SET_FLOAT(&Var0, fParam0, true);
	}
}

void func_260(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 25, &uParam1);
}

int func_283(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1138889->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1138889->f_1997 >= 21)
	{
		return 0;
	}
	Global_1138889->f_1975[Global_1138889->f_1997] = iParam0;
	Global_1138889->f_1997++;
	return 1;
}

bool func_288(int iParam0)
{
	return AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, -1) != PLAYER::PLAYER_PED_ID();
}

float func_297(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_378(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939057->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			aggregate_func_6374(iParam4, &uVar4, uParam0->f_150, bVar16);
			aggregate_func_6375(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && bVar0 < 5)
					{
						aggregate_func_1247(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			aggregate_func_6376(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (bVar0 == 0 || iVar2 >= iVar13)
				{
					if (aggregate_func_3386(&(((*uParam1)[iVar2 /*23*/])->f_14)) && bVar0 < 5)
					{
						aggregate_func_1247(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (bVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= bVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		aggregate_func_6374(iParam4, &uVar4, uParam0->f_150, bVar16);
		aggregate_func_62(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					aggregate_func_1247(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, bVar0);
					bVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && aggregate_func_3386(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							aggregate_func_1247(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
							bVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (aggregate_func_3386(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				aggregate_func_1247(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
				bVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || bVar0 > 0)
	{
		if (bVar0 < 3)
		{
			bVar20 = bVar0;
			while (bVar20 <= 3)
			{
				aggregate_func_1247(uParam0->f_2, &(uParam0->f_12[bVar20]), "LeaderboardListItemBlank", iVar3, bVar0);
				bVar0++;
				bVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (bVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= bVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

