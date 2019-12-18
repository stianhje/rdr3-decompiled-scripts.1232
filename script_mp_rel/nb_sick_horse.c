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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	struct<48> Local_17 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 2 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	struct<11> Local_67[32];
	struct<203> Local_420 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, -1, -1, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_623 = 1;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 50, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_17), 50, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_67, 353, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_67[0 /*11*/]), 353, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_204(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 377515857:
			func_232(iParam0);
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(513747494, PLAYER::GET_PLAYER_PED(iParam0->f_1), 20f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
			break;
		case 107137171:
			break;
		case 1773639449:
			if (aggregate_func_1501(PLAYER::PLAYER_PED_ID(), Local_420.f_15, 1) < 25f)
			{
				aggregate_func_6692();
			}
			break;
	}
}

void func_226(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 24, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

void func_232(int iParam0)
{
	if (!aggregate_func_2986(iParam0->f_13) || func_250(iParam0->f_13))
	{
		if (func_251(iParam0->f_11, iParam0->f_12, iParam0->f_13))
		{
			if (!func_250(iParam0->f_13))
			{
				aggregate_func_3742(iParam0->f_13);
			}
		}
	}
}

bool func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return true;
	}
	return false;
}

bool func_251(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (!func_259(iParam2, &vVar0))
	{
		return false;
	}
	if (!aggregate_func_938(&(Local_420.f_18.f_42), vVar0, 0, -1, 0, 0))
	{
		return false;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		if (aggregate_func_702(iParam0, 200f, -1, 0))
		{
			aggregate_func_1726(1891783641, aggregate_func_7382(iParam0), 1);
		}
	}
	return true;
}

bool func_259(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "ORESH_1_IDLE", 24);
			break;
		case 1:
			StringCopy(sParam1, "ORESH_1_CALLOUT", 24);
			break;
		case 2:
			StringCopy(sParam1, "ORESH_1_APPRCH", 24);
			break;
		case 3:
			StringCopy(sParam1, "ORESH_1_HELP", 24);
			break;
		case 4:
			StringCopy(sParam1, "ORESH_1_WAITING", 24);
			break;
		case 5:
			StringCopy(sParam1, "ORESH_1_THANKS", 24);
			break;
		case 6:
			StringCopy(sParam1, "ORESH_1_LEAVES", 24);
			break;
		case 7:
			StringCopy(sParam1, "ORESH_1_AGGRO", 24);
			break;
		default:
			return false;
	}
	return true;
}

