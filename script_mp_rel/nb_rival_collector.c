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
	struct<8> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<2> Local_25[32];
	struct<19> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 2;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1097859072;
	var uLocal_135 = 1000;
	var uLocal_136 = 500;
	var uLocal_137 = 1067450368;
	var uLocal_138 = 5000;
	var uLocal_139 = 42;
	var uLocal_140 = 1103626240;
	var uLocal_141 = 1077936128;
	var uLocal_142 = 1106247680;
	var uLocal_143 = 1103101952;
	var uLocal_144 = 1109393408;
	var uLocal_145 = 1097859072;
	var uLocal_146 = 1103626240;
	var uLocal_147 = 1061997773;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	var uLocal_153 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 12, 40);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_13), 12, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_25, 65, 41);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_25[0 /*2*/]), 65, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	aggregate_func_6497(&(Local_90.f_18.f_9));
}

void func_61()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = aggregate_func_2109();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		aggregate_func_2442(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_2[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_2[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Local_90.f_18.f_7);
	PED::REMOVE_RELATIONSHIP_GROUP(Local_90.f_18.f_8);
}

bool func_101()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar2])))
		{
			if (func_169(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				aggregate_func_4983();
			}
			return iVar0;
		}
	}
}

bool func_107()
{
	if (func_173())
	{
		return true;
	}
	aggregate_func_8929();
	switch (Local_13.f_7)
	{
		case 0:
			aggregate_func_4238();
			break;
		case 1:
			aggregate_func_4238();
			break;
	}
	return false;
}

bool func_109()
{
	int iVar0;

	iVar0 = aggregate_func_4849(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::_0x8DE41E9902E85756(iVar0)))
	{
		return true;
	}
	return false;
}

bool func_114()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "ORERC";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!aggregate_func_2053(func_181(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

void func_123()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])))
		{
			(Local_90.f_18.f_2[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar0]));
		}
		iVar0++;
	}
	iVar1 = aggregate_func_4849(0);
	PED::SET_PED_CONFIG_FLAG(iVar1, 458, true);
	aggregate_func_1066(iVar1, aggregate_func_4849(1), 1, -1, 1);
	ENTITY::_0x18FF3110CF47115D(aggregate_func_4849(1), 9, false);
}

void func_129()
{
	func_191();
	aggregate_func_4310(Local_13.f_7);
	func_193();
	switch (Local_90.f_18)
	{
		case 0:
			func_194();
			break;
		case 1:
			func_195();
			break;
	}
}

bool func_132()
{
	int iVar0;

	iVar0 = aggregate_func_4849(0);
	if (aggregate_func_1727(iVar0, -1665583462, 1, 0) && !aggregate_func_7154())
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 0, 0);
	}
	if (aggregate_func_2905(iVar0, -1665583462))
	{
		PED::SET_PED_KEEP_TASK(iVar0, true);
	}
	return true;
}

int func_169(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_13.f_7.f_2[iParam0], func_181(iParam0), func_210(iParam0), func_211(iParam0), 1, 0, 1, 1, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	iVar0 = aggregate_func_4849(iParam0);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return 0;
	}
	return 1;
}

bool func_173()
{
	int iVar0;

	if (Local_13.f_7 == 2)
	{
		return true;
	}
	iVar0 = aggregate_func_4849(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ((ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true)) && ENTITY::_0x8DE41E9902E85756(iVar0)))
	{
		return true;
	}
	return false;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1731070285;
		case 1:
			return 96930969;
		default:
			break;
	}
	return 0;
}

void func_191()
{
	if (aggregate_func_7154())
	{
		return;
	}
	if (aggregate_func_415(aggregate_func_4849(0), 0, &(Local_90.f_18.f_9), &(Local_90.f_18.f_40), 0, 0))
	{
		aggregate_func_4896(32);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_90.f_18.f_8);
		aggregate_func_7155(0);
	}
}

void func_193()
{
	int iVar0;

	iVar0 = aggregate_func_4849(0);
	if (((ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true)) && aggregate_func_1031(iVar0, Global_35)) && !aggregate_func_4644(4))
	{
		aggregate_func_4322(805, 0);
		aggregate_func_2680(-1399051227, PLAYER::GET_PLAYER_INDEX());
		aggregate_func_4896(4);
	}
	if (aggregate_func_1014(Global_35) == aggregate_func_4270(iVar0) && !aggregate_func_4644(8))
	{
		aggregate_func_6692();
		aggregate_func_2680(1571096148, PLAYER::GET_PLAYER_INDEX());
		aggregate_func_4896(8);
	}
}

void func_194()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = aggregate_func_4849(iVar0);
		if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			switch (iVar0)
			{
				case 0:
					if (!aggregate_func_4644(1))
					{
						aggregate_func_4896(1);
						PED::_0x1902C4CFCC5BE57C(iVar1, func_226());
						PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, true);
					}
					break;
				case 1:
					if (!aggregate_func_4644(2))
					{
						aggregate_func_4896(2);
						PED::_0x1902C4CFCC5BE57C(iVar1, -1793085205);
						aggregate_func_919(iVar1, 1);
						PED::_0xCC8CA3E88256E58F(iVar1, 1, 1, 1, 1, true);
					}
					break;
			}
		}
		iVar0++;
	}
	if (!aggregate_func_4644(16))
	{
		func_228();
		aggregate_func_4896(16);
	}
	iVar2 = aggregate_func_4849(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < 20f && !aggregate_func_3056(32, 255))
		{
			aggregate_func_6723();
			aggregate_func_6724();
		}
		if (!aggregate_func_4644(64) && aggregate_func_1727(iVar2, -1665583462, 1, 0))
		{
			aggregate_func_4896(64);
			TASK::_TASK_MOVE_IN_TRAFFIC(iVar2, 1f, 0, 0);
		}
	}
}

void func_195()
{
	if (!aggregate_func_3056(32, 255))
	{
		aggregate_func_6723();
		aggregate_func_6724();
	}
	if (!aggregate_func_4644(32))
	{
		if (aggregate_func_415(aggregate_func_4849(0), 0, &(Local_90.f_18.f_9), &(Local_90.f_18.f_40), 0, 0))
		{
			aggregate_func_4896(32);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_90.f_18.f_8);
		}
	}
}

Vector3 func_210(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			return 1452.25f, -1695.116f, 64.9668f;
		case 1:
			return 1163.55f, -324.0086f, 97.10712f;
		case 2:
			return 2682.104f, 858.447f, 85.90118f;
		case 3:
			return 1311.333f, 1183.934f, 151.5859f;
		case 4:
			return 40.99253f, 1813.064f, 189.5056f;
		case 5:
			return 109.9411f, 1282.256f, 176.292f;
		case 6:
			return -1450.859f, 1686.266f, 255.2526f;
		case 7:
			return 66.91456f, -445.5748f, 72.15018f;
		case 8:
			return -1698.036f, 380.6171f, 106.0826f;
		case 9:
			return -2016.359f, -909.5917f, 84.91344f;
		case 10:
			return -1362.091f, -1267.624f, 82.41972f;
		case 11:
			return -2449.051f, -1457.942f, 148.705f;
		case 12:
			return -1559.339f, -1930.728f, 50.99157f;
		case 13:
			return -1764.444f, -2717.768f, 62.81413f;
		case 14:
			return -2190.544f, -2200.288f, 64.42333f;
		case 15:
			return -2803.26f, -3142.291f, 5.88098f;
		case 16:
			return -3175.168f, -2402.267f, 22.72451f;
		case 17:
			return -4220.611f, -2690.138f, 0.65931f;
		case 18:
			return -4372.619f, -3274.055f, 20.26154f;
		case 19:
			return -5456.922f, -3562.744f, -21.1142f;
		case 20:
			return -5796.222f, -2650.145f, -16.68393f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_211(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			return 67f;
		case 1:
			return 300f;
		case 2:
			return 178f;
		case 3:
			return 25f;
		case 4:
			return 89f;
		case 5:
			return 76f;
		case 6:
			return 150f;
		case 7:
			return 82f;
		case 8:
			return 237f;
		case 9:
			return 270f;
		case 10:
			return 164f;
		case 11:
			return 130f;
		case 12:
			return 300f;
		case 13:
			return 140f;
		case 14:
			return 310f;
		case 15:
			return 310f;
		case 16:
			return 235f;
		case 17:
			return 252f;
		case 18:
			return 100f;
		case 19:
			return 48f;
		case 20:
			return 160f;
		default:
			break;
	}
	return 0f;
}

int func_226()
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	switch (aggregate_func_5076())
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			switch (iVar1)
			{
				case 0:
					iVar0 = 889771567;
					break;
				case 1:
					iVar0 = 636991573;
					break;
				case 2:
					iVar0 = 330929113;
					break;
				case 3:
					iVar0 = 1114927438;
					break;
				case 4:
					iVar0 = 875484355;
					break;
				case 5:
					iVar0 = 1597975267;
					break;
				case 6:
					iVar0 = 1359253102;
					break;
				case 7:
					iVar0 = 2076828664;
					break;
				case 8:
					iVar0 = 1837647733;
					break;
				case 9:
					iVar0 = -1717231026;
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar1)
			{
				case 0:
					iVar0 = -502622876;
					break;
				case 1:
					iVar0 = 1288792812;
					break;
				case 2:
					iVar0 = 1049349729;
					break;
				case 3:
					iVar0 = 693543927;
					break;
				case 4:
					iVar0 = 454559610;
					break;
				case 5:
					iVar0 = -1125496020;
					break;
				case 6:
					iVar0 = -1356288087;
					break;
				case 7:
					iVar0 = -1737522633;
					break;
				case 8:
					iVar0 = -1969822078;
					break;
				case 9:
					iVar0 = 1663243975;
					break;
			}
			break;
	}
	return iVar0;
}

void func_228()
{
	PED::ADD_RELATIONSHIP_GROUP("NB_RIVAL_COLLECTOR_COLLECTOR", &(Local_90.f_18.f_7));
	PED::ADD_RELATIONSHIP_GROUP("NB_RIVAL_COLLECTOR_PLAYER", &(Local_90.f_18.f_8));
	if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(0)))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(aggregate_func_4849(0), Local_90.f_18.f_7);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_90.f_18.f_7, Local_90.f_18.f_8);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_90.f_18.f_8, Local_90.f_18.f_8);
}

