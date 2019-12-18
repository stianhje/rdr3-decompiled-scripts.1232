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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	struct<4> Local_34[32];
	struct<48> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1 } ;
	var uLocal_211 = 1;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	float fLocal_221 = 0f;
	float fLocal_222 = 0f;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 21, 53);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_13), 21, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_34, 129, 54);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_34[0 /*4*/]), 129, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	HUD::_TEXT_DATABASE_REQUEST("NBEGP");
	TASK::_0x73F0D0327BFA0812(func_87());
	aggregate_func_7924(0, 0, func_88(), 5f, -1, 1);
	STREAMING::REQUEST_COLLISION_AT_COORD(func_88());
	STREAMING::REQUEST_PTFX_ASSET();
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

int func_87()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 454325279;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1443632175;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -924706522;
		default:
			break;
	}
	return 0;
}

Vector3 func_88()
{
	switch (aggregate_func_4995())
	{
		case 0:
			return 2252.035f, 1342.706f, 84.5573f;
		case 1:
			return 2280.7f, 1608.79f, 84.32f;
		case 2:
			return 2438.612f, 960.3168f, 73.0963f;
		case 3:
			return 1130.541f, 575.7938f, 86.66257f;
		case 4:
			return -754.3893f, -399.1133f, 40.84306f;
		case 5:
			return -410.6756f, -63.938f, 40.7762f;
		case 6:
			return -2085.777f, -161.9067f, 208.0633f;
		case 7:
			return -1678.304f, -517.8369f, 140.867f;
		case 8:
			return -2624.881f, -339.7662f, 141.8102f;
		case 9:
			return -926.5729f, -924.4639f, 41.1771f;
		case 10:
			return -722.9517f, -1718.81f, 41.41f;
		case 11:
			return -1069.18f, -1919.616f, 42.3447f;
		case 12:
			return 1673.672f, 1440.046f, 146.0849f;
		case 13:
			return 1562.434f, 1445.237f, 145.2842f;
		case 14:
			return 1244.927f, 1177.251f, 148.2856f;
		case 15:
			return 1926.703f, -362.3477f, 42.4864f;
		case 16:
			return 2192.489f, -318.3198f, 40.7232f;
		case 17:
			return 2408.447f, -490.4562f, 40.9243f;
		case 18:
			return -3243.502f, -3187.141f, -9.3137f;
		case 19:
			return -1745.01f, -2929.141f, -12.3355f;
		case 20:
			return -1735.07f, -2378.355f, 41.289f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_90()
{
	switch (aggregate_func_4995())
	{
		case 0:
			Local_13.f_7.f_9 = joaat("a_c_crow_01");
			break;
		case 1:
			Local_13.f_7.f_9 = joaat("a_c_vulture_01");
			break;
		case 2:
			Local_13.f_7.f_9 = joaat("a_c_raccoon_01");
			break;
		case 3:
			Local_13.f_7.f_9 = joaat("a_c_coyote_01");
			break;
		case 4:
			Local_13.f_7.f_9 = joaat("a_c_wolf");
			break;
		case 5:
			Local_13.f_7.f_9 = joaat("a_c_fox_01");
			break;
		case 6:
			Local_13.f_7.f_9 = joaat("a_c_cougar_01");
			break;
		case 7:
			Local_13.f_7.f_9 = joaat("a_c_boar_01");
			break;
	}
}

bool func_103()
{
	int iVar0;

	iVar0 = 1;
	if (!aggregate_func_2053(aggregate_func_6711()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_119()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("NBEGP"))
	{
		return false;
	}
	if (!TASK::_0x5E5D96BE25E9DF68(func_87()))
	{
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	return true;
}

bool func_124()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (!TASK::_0x841475AC96E794D1(Local_163.f_18.f_17))
	{
		iVar1 = func_182();
		if (iVar1 == 0)
		{
		}
		Local_163.f_18.f_17 = TASK::CREATE_SCENARIO_POINT(iVar1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_183(), func_184()), func_183(), 0f, 0f, 1);
		iVar0 = 0;
	}
	return iVar0;
}

void func_128()
{
	func_187();
	Local_163.f_18.f_18 = func_188(func_88(), 2f, 2f, 2f);
}

void func_146(bool bParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_163.f_18.f_8))
		{
			if (func_202())
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_163.f_18.f_8, func_88(), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(Local_163.f_18.f_8, true);
			}
			else
			{
				TASK::TASK_WANDER_IN_AREA(Local_163.f_18.f_8, ENTITY::GET_ENTITY_COORDS(Local_163.f_18.f_8, true, false), 200f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
				PED::SET_PED_KEEP_TASK(Local_163.f_18.f_8, true);
			}
		}
		if (bParam0)
		{
			aggregate_func_706(&(Local_13.f_7.f_13), 0);
		}
		else
		{
			aggregate_func_1025(&(Local_13.f_7.f_13));
		}
	}
	TASK::_0x5758B1EE0C3FD4AC(Local_163.f_18.f_10, 1);
	if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
	}
	if (TASK::_0x841475AC96E794D1(Local_163.f_18.f_17))
	{
		TASK::_0x81948DFE4F5A0283(Local_163.f_18.f_17);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_163.f_18.f_18, false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

bool func_172()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_13.f_7.f_13)))
	{
		return true;
	}
	if (!aggregate_func_404(&(Local_13.f_7.f_13), aggregate_func_6711(), func_212(), aggregate_func_8921(), 1, 0, 1, 1, 1))
	{
		return false;
	}
	PED::_0xCE6B874286D640BB(NETWORK::NET_TO_PED(Local_13.f_7.f_13), 2);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_13.f_7.f_13), 297, true);
	return true;
}

int func_175()
{
	func_215();
	func_216();
	if (func_217())
	{
		if (Local_13.f_7 != 4)
		{
			func_218(4);
		}
	}
	switch (Local_13.f_7)
	{
		case 0:
			if (aggregate_func_4244())
			{
				func_218(1);
			}
			break;
		case 1:
			if (func_220())
			{
				func_218(2);
			}
			break;
		case 2:
			if (func_221())
			{
				func_218(3);
			}
			break;
		case 3:
			if (func_222())
			{
				func_218(4);
			}
			break;
		case 4:
			if (aggregate_func_4244())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_182()
{
	switch (aggregate_func_6711())
	{
		case joaat("a_c_crow_01"):
			return 519635473;
		case joaat("a_c_raccoon_01"):
			return 1051774341;
		case joaat("a_c_fox_01"):
			return 1935884576;
		case joaat("a_c_boar_01"):
			return -1638353519;
		case joaat("a_c_vulture_01"):
			return -1415296020;
		case joaat("a_c_coyote_01"):
			return -1534116401;
		case joaat("a_c_wolf"):
			return 1974927641;
		case joaat("a_c_cougar_01"):
			return -963073294;
		default:
			break;
	}
	return 0;
}

float func_183()
{
	float fVar0;

	fVar0 = -1f;
	switch (aggregate_func_4995())
	{
		case 0:
			fVar0 = 141f;
			break;
		case 1:
			fVar0 = 68.7f;
			break;
		case 2:
			fVar0 = 121.4f;
			break;
		case 3:
			fVar0 = 272.5f;
			break;
		case 4:
			fVar0 = 240f;
			break;
		case 5:
			fVar0 = 60.4f;
			break;
		case 6:
			fVar0 = 139.3f;
			break;
		case 7:
			fVar0 = 181f;
			break;
		case 8:
			fVar0 = 194.9f;
			break;
		case 9:
			fVar0 = 227.6f;
			break;
		case 10:
			fVar0 = 319.3f;
			break;
		case 11:
			fVar0 = 284.1f;
			break;
		case 12:
			fVar0 = 120.5f;
			break;
		case 13:
			fVar0 = 327.6f;
			break;
		case 14:
			fVar0 = 213f;
			break;
		case 15:
			fVar0 = 232f;
			break;
		case 16:
			fVar0 = 284.7f;
			break;
		case 17:
			fVar0 = 193.9f;
			break;
		case 18:
			fVar0 = 167.4f;
			break;
		case 19:
			fVar0 = 292.7f;
			break;
		case 20:
			fVar0 = 305.2f;
			break;
	}
	return fVar0;
}

Vector3 func_184()
{
	switch (aggregate_func_6711())
	{
		case joaat("a_c_crow_01"):
			return -0.03f, -0.12f, 0f;
		case joaat("a_c_raccoon_01"):
			return 0f, -0.27f, 0f;
		case joaat("a_c_fox_01"):
			return 0f, -0.444f, 0f;
		case joaat("a_c_boar_01"):
			return 0f, -0.71f, 0f;
		case joaat("a_c_vulture_01"):
			return 0.03f, -0.2f, 0f;
		case joaat("a_c_coyote_01"):
			return 0.04f, -0.38f, 0f;
		case joaat("a_c_wolf"):
			return 0f, -0.48f, 0f;
		case joaat("a_c_cougar_01"):
			return 0f, -0.63f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_187()
{
	Local_163.f_18.f_8 = NETWORK::NET_TO_PED(Local_13.f_7.f_13);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_13))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_163.f_18.f_8, true);
	}
}

int func_188(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

void func_195()
{
	if ((!aggregate_func_4281(1) && aggregate_func_1279(PLAYER::PLAYER_PED_ID(), func_88(), 100f, 0, 0)) && func_230())
	{
		func_231();
		aggregate_func_4355(1);
	}
	func_233();
	switch ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1)
	{
		case 0:
			if (aggregate_func_4244())
			{
				func_235(1);
			}
			break;
		case 1:
			if (func_236())
			{
				func_235(2);
			}
			break;
		case 2:
			if (func_237())
			{
				func_235(3);
			}
			break;
		case 3:
			if (func_238())
			{
				func_235(4);
			}
			break;
		case 4:
			break;
	}
}

bool func_202()
{
	switch (aggregate_func_6711())
	{
		case joaat("a_c_crow_01"):
		case joaat("a_c_vulture_01"):
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_212()
{
	vector3 vVar0[3];
	vector3 vVar10;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	int iVar17;

	if (func_202())
	{
		switch (aggregate_func_4995())
		{
			case 0:
			case 1:
			case 14:
			case 15:
				return 0f, 0f, 0f;
			case 2:
				return 2499.929f, 921.9749f, 74.177f;
			case 3:
				return 1141.117f, 642.0093f, 94.421f;
			case 4:
				return -749.5237f, -296.766f, 43.3761f;
			case 5:
				return -329.0235f, -52.5757f, 45.8452f;
			case 6:
				return -2053.756f, -116.8186f, 230.0462f;
			case 7:
				return -1702.605f, -479.6481f, 146.3338f;
			case 8:
				return -2662.749f, -309.4969f, 151.3755f;
			case 9:
				return -980.2054f, -881.1652f, 41.6434f;
			case 10:
				return -756.0024f, -1652.032f, 52.6045f;
			case 11:
				return -1144.993f, -1901.913f, 43.5536f;
			case 12:
				return 1715.549f, 1432.565f, 149.1353f;
			case 13:
				return 1511.118f, 1464.94f, 149.3803f;
			case 16:
				return 2151.582f, -324.508f, 41.2257f;
			case 17:
				return 2418.005f, -454.8427f, 41.4962f;
			case 18:
				return -3221.346f, -3158.854f, -1.2424f;
			case 19:
				return -1821.95f, -2976.88f, -11.8508f;
			case 20:
				return -1787.927f, -2408.416f, 42.8006f;
			default:
				break;
		}
	}
	*(vVar0[0 /*3*/]) = { 0f, 0f, 0f };
	switch (aggregate_func_4995())
	{
		case 0:
			*(vVar0[0 /*3*/]) = { 2237.093f, 1380.931f, 85.2051f };
			*(vVar0[1 /*3*/]) = { 2281.359f, 1331.793f, 87.4576f };
			*(vVar0[2 /*3*/]) = { 2281.359f, 1331.793f, 87.4576f };
			break;
		case 1:
			*(vVar0[0 /*3*/]) = { 2309.382f, 1600.389f, 85.6999f };
			*(vVar0[1 /*3*/]) = { 2309.382f, 1600.389f, 85.6999f };
			*(vVar0[2 /*3*/]) = { 2278.347f, 1583.027f, 90.2505f };
			break;
		case 2:
			*(vVar0[0 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			*(vVar0[1 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			*(vVar0[2 /*3*/]) = { 2499.929f, 921.9749f, 74.177f };
			break;
		case 3:
			*(vVar0[0 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			*(vVar0[1 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			*(vVar0[2 /*3*/]) = { 1060.92f, 581.6669f, 97.0162f };
			break;
		case 4:
			*(vVar0[0 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			*(vVar0[1 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			*(vVar0[2 /*3*/]) = { -749.3711f, -366.9533f, 41.0892f };
			break;
		case 5:
			*(vVar0[0 /*3*/]) = { -389.5133f, -13.34f, 41.148f };
			*(vVar0[1 /*3*/]) = { -460.9073f, -152.8856f, 40.9957f };
			*(vVar0[2 /*3*/]) = { -396.0391f, -163.0576f, 48.4683f };
			break;
		case 6:
			*(vVar0[0 /*3*/]) = { -2112.213f, -183.2262f, 205.0876f };
			*(vVar0[1 /*3*/]) = { -2084.974f, -139.1795f, 216.9706f };
			*(vVar0[2 /*3*/]) = { -2084.974f, -139.1795f, 216.9706f };
			break;
		case 7:
			*(vVar0[0 /*3*/]) = { -1679.426f, -468.7442f, 152.9432f };
			*(vVar0[1 /*3*/]) = { -1679.426f, -468.7442f, 152.9432f };
			*(vVar0[2 /*3*/]) = { -1704.041f, -464.1898f, 147.6129f };
			break;
		case 8:
			*(vVar0[0 /*3*/]) = { -2669.562f, -330.1496f, 141.9721f };
			*(vVar0[1 /*3*/]) = { -2586.323f, -307.567f, 150.4258f };
			*(vVar0[2 /*3*/]) = { -2630.061f, -262.2281f, 163.2078f };
			break;
		case 9:
			*(vVar0[0 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			*(vVar0[1 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			*(vVar0[2 /*3*/]) = { -991.1825f, -898.5116f, 44.3542f };
			break;
		case 10:
			*(vVar0[0 /*3*/]) = { -758.0438f, -1712.119f, 43.3051f };
			*(vVar0[1 /*3*/]) = { -758.0438f, -1712.119f, 43.3051f };
			*(vVar0[2 /*3*/]) = { -743.8483f, -1743.072f, 43.7966f };
			break;
		case 12:
			*(vVar0[0 /*3*/]) = { 1718.777f, 1512.462f, 147.2264f };
			*(vVar0[1 /*3*/]) = { 1759.737f, 1452.263f, 156.6534f };
			*(vVar0[2 /*3*/]) = { 1715.549f, 1432.565f, 149.1353f };
			break;
		case 14:
			*(vVar0[0 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			*(vVar0[1 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			*(vVar0[2 /*3*/]) = { 1218.487f, 1216.578f, 155.7601f };
			break;
		case 15:
			*(vVar0[0 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			*(vVar0[1 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			*(vVar0[2 /*3*/]) = { 1898.424f, -373.1028f, 42.3333f };
			break;
		case 16:
			*(vVar0[0 /*3*/]) = { 2151.582f, -324.508f, 41.2257f };
			*(vVar0[1 /*3*/]) = { 2175.533f, -291.4925f, 41.669f };
			*(vVar0[2 /*3*/]) = { 2202.655f, -353.7488f, 42.0224f };
			break;
		case 17:
			*(vVar0[0 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			*(vVar0[1 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			*(vVar0[2 /*3*/]) = { 2418.005f, -454.8427f, 41.4962f };
			break;
		case 18:
			*(vVar0[0 /*3*/]) = { -3249.258f, -3132.819f, -7.0835f };
			*(vVar0[1 /*3*/]) = { -3221.346f, -3158.854f, -1.2424f };
			*(vVar0[2 /*3*/]) = { -3208.264f, -3174.166f, -6.574f };
			break;
		case 20:
			*(vVar0[0 /*3*/]) = { -1749.76f, -2354.581f, 41.8165f };
			*(vVar0[1 /*3*/]) = { -1740.252f, -2428.295f, 41.2845f };
			*(vVar0[2 /*3*/]) = { -1787.927f, -2408.416f, 42.8006f };
			break;
	}
	if (aggregate_func_4745(*(vVar0[0 /*3*/]), 0f, 0f, 0f))
	{
		return 0f, 0f, 0f;
	}
	vVar10 = { 0f, 0f, 0f };
	iVar13 = 0;
	while (iVar13 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13)) && aggregate_func_1279(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), func_88(), 200f, 1, 1))
		{
			vVar10 = { vVar10 + ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar13))), true, false) };
			iVar14++;
		}
		iVar13++;
	}
	vVar10 = { vVar10 / FtoV(IntToFloat(iVar14)) };
	fVar15 = 0f;
	fVar16 = 0f;
	iVar17 = -1;
	iVar13 = 0;
	while (iVar13 <= 2)
	{
		fVar15 = BUILTIN::VDIST2(*(vVar0[iVar13 /*3*/]), vVar10);
		if (fVar15 > fVar16)
		{
			fVar16 = fVar15;
			iVar17 = iVar13;
		}
		iVar13++;
	}
	return *(vVar0[iVar17 /*3*/]);
}

void func_215()
{
	int iVar0;

	Local_163.f_18.f_1++;
	if (Local_163.f_18.f_1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_163.f_18.f_1 = 0;
	}
	iVar0 = Local_163.f_18.f_1;
	if (!aggregate_func_4644(4) && func_248(iVar0, 1))
	{
		aggregate_func_4896(4);
	}
	if (!aggregate_func_4644(16) && func_248(iVar0, 2))
	{
		aggregate_func_4896(16);
	}
	if (!aggregate_func_4644(32) && func_248(iVar0, 4))
	{
		aggregate_func_4896(32);
	}
	if (Local_13.f_7 == 2 && (Local_34[iVar0 /*4*/])->f_1 == 4)
	{
		func_218(4);
	}
}

void func_216()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		iVar0++;
	}
}

bool func_217()
{
	if (aggregate_func_4644(16) && Local_13.f_7.f_10 != 9)
	{
		aggregate_func_7941(9);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			aggregate_func_7941(1);
			break;
		case 1:
			if (aggregate_func_4644(4))
			{
				aggregate_func_7941(2);
			}
			break;
		case 2:
			if (func_202())
			{
				if (aggregate_func_1279(Local_163.f_18.f_8, func_251(), 5f, 1, 1) || func_252(16))
				{
					aggregate_func_7941(3);
				}
			}
			else if (aggregate_func_1279(Local_163.f_18.f_8, func_251(), 10f, 1, 1) || func_252(16))
			{
				aggregate_func_7941(3);
			}
			break;
		case 3:
			if (func_202())
			{
				aggregate_func_7941(4);
			}
			else if (aggregate_func_1279(Local_163.f_18.f_8, func_251(), 4f, 1, 1) || func_252(32))
			{
				aggregate_func_7941(4);
			}
			break;
		case 4:
			if (aggregate_func_1279(Local_163.f_18.f_8, TASK::_0xA8452DD321607029(Local_163.f_18.f_17, 1), 2f, 1, 1) && PED::IS_PED_USING_ANY_SCENARIO(Local_163.f_18.f_8))
			{
				aggregate_func_7941(5);
			}
			break;
		case 5:
			if (Local_13.f_7 >= 4)
			{
				if (aggregate_func_8628(&(Local_13.f_7.f_6), 3000))
				{
					func_254();
					aggregate_func_7941(8);
				}
			}
			else if (aggregate_func_8628(&(Local_13.f_7.f_6), 30000))
			{
				func_254();
				aggregate_func_7941(8);
			}
			break;
		case 6:
			break;
		case 7:
			if (aggregate_func_8628(&(Local_13.f_7.f_6), 10000))
			{
				aggregate_func_7941(9);
			}
			break;
		case 8:
			return true;
		case 9:
			break;
	}
	return false;
}

void func_218(int iParam0)
{
	if (Local_13.f_7 == iParam0)
	{
		return;
	}
	Local_13.f_7 = iParam0;
	aggregate_func_4480(&(Local_13.f_7.f_3));
}

bool func_220()
{
	if (aggregate_func_4644(4))
	{
		return true;
	}
	return false;
}

bool func_221()
{
	if (aggregate_func_4644(32))
	{
		return true;
	}
	return false;
}

bool func_222()
{
	if (func_252(8))
	{
		return true;
	}
	return false;
}

void func_226(int iParam0)
{
	bool bVar0;

	switch (iParam0->f_9)
	{
		case -713336544:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_13.f_7.f_11 == -1)
				{
					Local_13.f_7.f_11 = iParam0->f_11;
					func_256();
				}
			}
			break;
		case -1213418800:
			if (NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == iParam0->f_11)
			{
				aggregate_func_4355(32);
			}
			else
			{
				aggregate_func_4355(64);
			}
			if (aggregate_func_4281(8))
			{
				aggregate_func_4355(8);
			}
			break;
		case 851346657:
			if (aggregate_func_4281(64))
			{
				aggregate_func_4355(64);
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_11 = -1;
			}
			break;
		case -1571564170:
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[0])))
			{
				func_258();
			}
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_egg_break", func_88(), aggregate_func_4952(), 1f, false, false, false);
			break;
		case 1241867137:
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4))
			{
				aggregate_func_4355(2);
				func_260();
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (Local_13.f_7.f_12 == -1)
				{
					Local_13.f_7.f_12 = iParam0->f_11;
				}
			}
			break;
		case 1649314687:
			bVar0 = func_261();
			Local_163.f_18.f_7 = iParam0->f_1;
			if (bVar0)
			{
				Local_163.f_18.f_9 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), Local_163.f_18.f_8);
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Local_163.f_18.f_8))
				{
					PED::_0xF1C03A5352243A30(Local_163.f_18.f_8);
				}
				if (bVar0)
				{
					TASK::TASK_COMBAT_PED(Local_163.f_18.f_8, PLAYER::GET_PLAYER_PED(Local_163.f_18.f_7), 0, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_163.f_18.f_8, PLAYER::GET_PLAYER_PED(Local_163.f_18.f_7), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			aggregate_func_4355(4);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4896(8);
				if (bVar0)
				{
					aggregate_func_7941(7);
				}
				else
				{
					aggregate_func_7941(6);
				}
			}
			break;
	}
}

bool func_230()
{
	var uVar0;

	Local_163.f_18.f_10 = TASK::_0x5B4BBE80AD5972DC(func_87(), func_88(), 0f, 0, &uVar0, -1);
	return true;
}

void func_231()
{
	int iVar0;
	int iVar1[1];
	var uVar3[1];

	iVar1[0] = func_265();
	if (aggregate_func_3415(&(Local_163.f_18.f_11), &iVar1, func_266(), func_88(), 5f) > 0)
	{
		iVar0 = 0;
		while (iVar0 < func_266())
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
			{
				MAP::_0x7563CBCA99253D1A(&(Local_163.f_18.f_11[iVar0]), 187984275);
				PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), &(Local_163.f_18.f_11[iVar0]), 0);
				PLAYER::_0x6ECFC621A168424C(&(Local_163.f_18.f_11[iVar0]), &(Local_163.f_18.f_11[iVar0]), 0);
			}
			iVar0++;
		}
	}
	iVar1[0] = func_268();
	if (aggregate_func_3415(&uVar3, &iVar1, 1, func_88(), 5f) > 0)
	{
		MAP::_0x7563CBCA99253D1A(&(uVar3[0]), 187984275);
	}
}

void func_233()
{
	bool bVar0;

	bVar0 = Local_163.f_18.f_6 != Local_13.f_7.f_10;
	Local_163.f_18.f_6 = Local_13.f_7.f_10;
	func_269(bVar0);
	if ((!aggregate_func_4281(4) && !aggregate_func_4644(8)) && func_270())
	{
		aggregate_func_4355(4);
		func_271();
	}
	if ((Local_13.f_7.f_10 == 4 || Local_13.f_7.f_10 == 5) || Local_13.f_7.f_10 == 8)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Local_163.f_18.f_8);
		aggregate_func_1825(Local_163.f_18.f_8);
	}
	if ((Local_13.f_7.f_10 == 6 && !aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 50f, 1)) && MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
	{
		MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
	{
		return;
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 2) && ENTITY::IS_ENTITY_DEAD(Local_163.f_18.f_8))
	{
		if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_9))
		{
			MAP::REMOVE_BLIP(&(Local_163.f_18.f_9));
		}
		aggregate_func_3553(2);
	}
	switch (Local_13.f_7.f_10)
	{
		case 0:
			break;
		case 1:
			if (func_202())
			{
				if (!aggregate_func_2905(Local_163.f_18.f_8, 475934052))
				{
					TASK::TASK_FLYING_CIRCLE(Local_163.f_18.f_8, 1f, func_212() + Vector(40f, 0f, 0f), 0f, 2f);
				}
			}
			else if (!aggregate_func_2905(Local_163.f_18.f_8, 923520851))
			{
				TASK::TASK_WANDER_IN_AREA(Local_163.f_18.f_8, ENTITY::GET_ENTITY_COORDS(Local_163.f_18.f_8, true, false), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			break;
		case 2:
			if (bVar0)
			{
				if (func_202())
				{
					TASK::TASK_FLY_TO_COORD(Local_163.f_18.f_8, func_276(), func_251(), 1, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_276(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!aggregate_func_1279(Local_163.f_18.f_8, func_251(), 5f, 1, 1) && (MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (func_202())
				{
					if (!aggregate_func_2905(Local_163.f_18.f_8, -708058584))
					{
						TASK::TASK_FLY_TO_COORD(Local_163.f_18.f_8, func_276(), func_251(), 1, 0);
					}
				}
				else if (!aggregate_func_2905(Local_163.f_18.f_8, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_276(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 16) && aggregate_func_1279(Local_163.f_18.f_8, func_251(), 10f, 1, 1))
			{
				aggregate_func_3553(16);
			}
			break;
		case 3:
			if (bVar0)
			{
				if (!func_202())
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_163.f_18.f_8, func_251(), func_277(), -1, 0.25f, 4194304, 40000f);
				}
			}
			if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 32) && aggregate_func_1279(Local_163.f_18.f_8, func_251(), 4f, 1, 1))
			{
				aggregate_func_3553(32);
			}
			break;
		case 4:
			if (bVar0)
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_163.f_18.f_8, Local_163.f_18.f_17, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
			}
			break;
		case 5:
			if (bVar0)
			{
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				aggregate_func_1025(&(Local_13.f_7.f_13));
			}
			break;
		case 9:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_163.f_18.f_8))
			{
				aggregate_func_1025(&(Local_13.f_7.f_13));
			}
			break;
	}
}

void func_235(int iParam0)
{
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1 == iParam0)
	{
		return;
	}
	(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1 = iParam0;
	aggregate_func_4480(&(Local_163.f_18.f_2));
}

bool func_236()
{
	if (aggregate_func_1279(PLAYER::PLAYER_PED_ID(), func_88(), 60f, 1, 1))
	{
		aggregate_func_3553(1);
		return true;
	}
	return false;
}

bool func_237()
{
	bool bVar0;

	if (!aggregate_func_4281(2) && Local_13.f_7.f_10 == 8)
	{
		if (!aggregate_func_4281(256))
		{
			if (func_278(3) < 3)
			{
				aggregate_func_3074("NBEGP_H_FAIL");
			}
			aggregate_func_4355(256);
		}
		aggregate_func_4355(2);
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4) && !aggregate_func_4281(2))
	{
		aggregate_func_204(&(Local_163.f_18.f_19), func_88(), 1, 1, 1);
		if (aggregate_func_1279(Global_35, func_88(), 7f, 1, 1))
		{
			aggregate_func_1736(&(Local_163.f_18.f_28));
		}
		if ((MISC::GET_FRAME_COUNT() % 5) == 0)
		{
			bVar0 = ((Global_1939168->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || aggregate_func_8616());
			func_283(bVar0);
		}
	}
	if (!aggregate_func_4281(16))
	{
		if (((aggregate_func_987(PLAYER::PLAYER_PED_ID(), &(Local_163.f_18.f_11[0]), 30f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(&(Local_163.f_18.f_11[0]))) || (aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 30f, 1) && !ENTITY::IS_ENTITY_OCCLUDED(Local_163.f_18.f_8))) || aggregate_func_987(PLAYER::PLAYER_PED_ID(), &(Local_163.f_18.f_11[0]), 3f, 1))
		{
			aggregate_func_6723();
			aggregate_func_6724();
			aggregate_func_4355(16);
		}
	}
	func_286();
	if (aggregate_func_4281(2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[0])))
		{
			func_258();
		}
	}
	if (!aggregate_func_4281(2) && func_287())
	{
		if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 4) && !aggregate_func_4281(2))
		{
			func_288();
			return true;
		}
	}
	return false;
}

bool func_238()
{
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && func_252(8))
	{
		func_260();
		func_258();
	}
	if (!func_248(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()) == Local_13.f_7.f_12)
	{
		aggregate_func_6692();
		aggregate_func_4741(func_290(), 0);
		aggregate_func_3553(8);
		return true;
	}
	return false;
}

void func_244(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 19, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

bool func_248(int iParam0, int iParam1)
{
	return aggregate_func_4240((Local_34[iParam0 /*4*/])->f_1.f_1, iParam1);
}

Vector3 func_251()
{
	vector3 vVar0;
	var uVar3;

	if (func_202())
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_295(), 4f, 0f, 10f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_88(), func_295(), 8f, 0f, 10f) };
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		vVar0 = { vVar0.x, vVar0.y, uVar3 };
	}
	return vVar0;
}

bool func_252(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_248(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_254()
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-1571564170) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	aggregate_func_7153(&Var0);
}

void func_256()
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-1213418800) };
	Var0.f_11 = Local_13.f_7.f_11;
	aggregate_func_7153(&Var0);
}

void func_258()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			OBJECT::DELETE_OBJECT(Local_163.f_18.f_11[iVar0]);
		}
		iVar0++;
	}
}

void func_260()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), &(Local_163.f_18.f_11[iVar0]));
			PLAYER::_0xDC5E09D012D759C4(&(Local_163.f_18.f_11[iVar0]), &(Local_163.f_18.f_11[iVar0]), 0);
		}
		iVar0++;
	}
}

bool func_261()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	switch (aggregate_func_6711())
	{
		case joaat("a_c_crow_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_boar_01"):
			return false;
		case joaat("a_c_coyote_01"):
			return iVar0 < 50;
		case joaat("a_c_wolf"):
			return iVar0 < 100;
		case joaat("a_c_cougar_01"):
			return iVar0 < 100;
		default:
			break;
	}
	return false;
}

int func_265()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return -946816685;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 1390217426;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 755040865;
		default:
			break;
	}
	return 0;
}

int func_266()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 5;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return 4;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 3;
		default:
			break;
	}
	return 1;
}

int func_268()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 420299933;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1824227939;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return -235579763;
		default:
			break;
	}
	return 0;
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		if ((Local_13.f_7.f_10 == 2 || Local_13.f_7.f_10 == 4) || Local_13.f_7.f_10 == 5)
		{
			if (!aggregate_func_4281(128))
			{
				if (func_278(3) < 3)
				{
					aggregate_func_3074("NBEGP_H_INVESTIGATE");
				}
				aggregate_func_4355(128);
			}
			aggregate_func_6723();
			aggregate_func_1726(-342321975, Local_163.f_18.f_8, 1);
		}
	}
	if (Local_13.f_7.f_10 == 5)
	{
		if (aggregate_func_4260(&(Local_13.f_7.f_6)) && aggregate_func_4732(&(Local_13.f_7.f_6)) > (4000 * Local_163.f_18.f_5 + 1))
		{
			Local_163.f_18.f_5++;
			aggregate_func_1726(-342321975, Local_163.f_18.f_8, 1);
		}
	}
}

bool func_270()
{
	if (!aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 75f, 1))
	{
		return false;
	}
	if (aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 4f, 1))
	{
		return true;
	}
	if ((!func_202() && aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 8f, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_163.f_18.f_8, PLAYER::PLAYER_PED_ID(), 17))
	{
		return true;
	}
	if (PED::_0x285D36C5C72B0569(PLAYER::PLAYER_PED_ID()) < 0.5f)
	{
		if (func_202())
		{
			return true;
		}
		else if (aggregate_func_987(PLAYER::PLAYER_PED_ID(), Local_163.f_18.f_8, 60f, 1))
		{
			return true;
		}
	}
	return false;
}

void func_271()
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(1649314687) };
	aggregate_func_7153(&Var0);
}

float func_276()
{
	switch (aggregate_func_4995())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1.5f;
		case 2:
		case 5:
			return 2f;
		default:
			break;
	}
	return 1.5f;
}

float func_277()
{
	switch (aggregate_func_4995())
	{
		case 3:
		case 4:
		case 6:
		case 7:
			return 1f;
		case 2:
		case 5:
			return 1.5f;
		default:
			break;
	}
	return 1f;
}

int func_278(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { aggregate_func_3044(iParam0, -1797584255) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_283(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_266())
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_163.f_18.f_11[iVar0])))
		{
			if (bParam0)
			{
				PLAYER::_0x907B16B3834C69E2(&(Local_163.f_18.f_11[iVar0]), 500f);
			}
			else
			{
				PLAYER::_0x907B16B3834C69E2(&(Local_163.f_18.f_11[iVar0]), 100f);
			}
		}
		iVar0++;
	}
}

void func_286()
{
	if ((!aggregate_func_4281(32) && !aggregate_func_4281(64)) && !aggregate_func_4281(8))
	{
		if (func_324())
		{
			func_325();
			aggregate_func_4355(8);
		}
	}
	if (aggregate_func_4281(32) && !func_324())
	{
		func_326();
		aggregate_func_4355(32);
	}
	if (aggregate_func_4281(64) || aggregate_func_4281(2))
	{
		MISC::_0x082C043C7AFC3747(Local_163.f_18.f_10, 1);
	}
}

bool func_287()
{
	var uVar0;

	if (ENTITY::GET_ENTITY_MODEL(func_327(PLAYER::PLAYER_PED_ID(), 0)) != func_268())
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(PLAYER::PLAYER_PED_ID(), 0, &uVar0, 1, 1) != 8)
	{
		return false;
	}
	return true;
}

void func_288()
{
	struct<15> Var0;

	aggregate_func_3553(4);
	Var0 = { aggregate_func_1739(1241867137) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	aggregate_func_7153(&Var0);
}

int func_290()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			return 1510925660;
		case 3:
		case 4:
		case 5:
		case 15:
		case 16:
		case 17:
			return -1390165137;
		case 6:
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 18:
		case 19:
		case 20:
			return 1824947548;
		default:
			break;
	}
	return 0;
}

float func_295()
{
	return (func_183() - 90f);
}

bool func_324()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_0x5463C962BC7777C3(PLAYER::PLAYER_PED_ID(), 0, &iVar0, 1, 0);
	if (ENTITY::GET_ENTITY_MODEL(iVar0) != func_268())
	{
		return false;
	}
	if ((iVar1 != 4 && iVar1 != 6) && iVar1 != 8)
	{
		return false;
	}
	return true;
}

void func_325()
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-713336544) };
	Var0.f_11 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	aggregate_func_7153(&Var0);
}

void func_326()
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(851346657) };
	aggregate_func_7153(&Var0);
}

int func_327(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

