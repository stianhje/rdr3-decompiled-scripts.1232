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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	struct<33> Local_21 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<7> Local_56[32];
	struct<80> Local_281 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0 } ;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 2;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 1114636288;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 1114636288;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 2;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_21, 35, 47);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_21), 35, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_56, 225, 48);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_56[0 /*7*/]), 225, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	aggregate_func_6497(&(Local_281.f_18.f_12));
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_91();
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_145();
	bVar0 = aggregate_func_2109();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (bVar0)
		{
			if (Local_281.f_18.f_50 != 0)
			{
				GRAPHICS::REMOVE_DECAL(Local_281.f_18.f_50);
			}
			iVar2 = 0;
			while (iVar2 <= 1)
			{
				func_146(iVar2);
				if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[iVar2])))
				{
					aggregate_func_2017(&(Local_281.f_18.f_54[iVar2]));
				}
				iVar2++;
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
			{
				iVar3 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (ANIMSCENE::_0x25557E324489393C(func_148(iVar4)))
				{
					if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_148(iVar4)))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(func_148(iVar4));
					}
				}
				iVar4++;
			}
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar5]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_4[iVar5])))
		{
			iVar6 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_4[iVar5]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar6);
		}
		iVar5++;
	}
}

void func_91()
{
	Local_21.f_7.f_18 = { 1.4f, 0.6f, -5f };
	Local_21.f_7.f_9.f_3 = 4;
}

bool func_106()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar2 != 1 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar2])))
		{
			if (func_179(iVar2, &bVar1, func_178(iVar2), 0) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (aggregate_func_4995() != 0)
			{
				iVar3 = 0;
				while (iVar3 <= 0)
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar3])))
					{
						if (aggregate_func_3815(iVar3, &bVar1) || bVar1)
						{
							iVar0 = 0;
						}
					}
					iVar3++;
				}
			}
			if (bVar1)
			{
				aggregate_func_4983();
			}
			return iVar0;
		}
	}
}

bool func_112()
{
	if (func_186())
	{
		return true;
	}
	switch (Local_21.f_7)
	{
		case 0:
			func_187();
			break;
		case 1:
			func_188();
			break;
		case 2:
			func_189();
			break;
		case 3:
			func_190();
			break;
		case 4:
			func_191();
			break;
	}
	return false;
}

bool func_114()
{
	if (aggregate_func_4644(-2147483648))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(0)) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(aggregate_func_4849(0), false))
	{
		return true;
	}
	return false;
}

bool func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!aggregate_func_2053(func_197(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (aggregate_func_4995() != 0)
	{
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (!aggregate_func_2053(func_199(iVar2)))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!aggregate_func_264(func_200(iVar3), Local_281.f_18.f_57[iVar3], Local_21.f_7.f_6[iVar3], func_201(iVar3), func_202(iVar3)))
		{
			iVar0 = 0;
		}
		iVar3++;
	}
	switch (aggregate_func_4995())
	{
		case 0:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("nb_slumped_hunter_cairn_1"))
			{
				TASK::REQUEST_WAYPOINT_RECORDING("nb_slumped_hunter_cairn_1");
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

void func_128()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 != 1 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar0])))
		{
			(Local_281.f_18.f_1[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_1[iVar0]));
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_281.f_18.f_1[iVar0 /*4*/])->f_1))
			{
				aggregate_func_2586(iVar0);
			}
			PED::ADD_RELATIONSHIP_GROUP("NB_SLUMPED_ANIMAL", &(Local_281.f_18.f_44));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((Local_281.f_18.f_1[iVar0 /*4*/])->f_1, Local_281.f_18.f_44);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_281.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		}
		iVar0++;
	}
	if (aggregate_func_4995() != 0)
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar1])))
			{
				Local_281.f_18.f_10[iVar1] = NETWORK::NET_TO_OBJ(&(Local_21.f_7.f_4[iVar1]));
			}
			iVar1++;
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_6[0])))
	{
		func_208();
		func_209(func_148(0), func_200(0));
	}
}

void func_134()
{
	aggregate_func_2548();
	func_218();
	aggregate_func_4310(Local_21.f_7);
	switch (Local_281.f_18)
	{
		case 0:
			func_220();
			break;
		case 1:
			func_221();
			break;
		case 2:
			func_222();
			break;
		case 3:
			func_223();
			break;
		case 4:
			func_224();
			break;
	}
}

bool func_137()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = true;
	func_145();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			PED::SET_PED_KEEP_TASK(aggregate_func_4849(iVar1), true);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			bVar0 = false;
		}
		iVar1++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_4[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_4[iVar3])))
		{
			iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_4[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
			bVar0 = false;
		}
		iVar3++;
	}
	if (bVar0)
	{
		aggregate_func_2922(-2147483648);
	}
	return bVar0;
}

void func_145()
{
	if (aggregate_func_4644(1))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, 0);
		}
		else
		{
			aggregate_func_4896(1);
		}
	}
}

void func_146(int iParam0)
{
	if (aggregate_func_4508(Local_281.f_18.f_51[iParam0]))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(Local_281.f_18.f_51[iParam0], 1);
	}
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = &Local_21.f_7.f_6[iParam0];
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_0xD7F6781A0ABAF6FB(iVar0);
	}
	return 0;
}

Vector3 func_178(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1109.718f, 2104.703f, 360.3868f;
						case 1:
							return -1138.816f, 2220.154f, 338.2513f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -4361.463f, -3439.308f, 29.04307f;
						case 1:
							return -4391.48f, -3429.176f, 28.69202f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3895.461f, -2492.511f, -11.07848f;
						case 1:
							return -3953.237f, -2545.791f, -3.01603f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -2183.753f, -2882.835f, 23.5659f;
						case 1:
							return -2131.08f, -2833.381f, 32.88717f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -2083.893f, -1412.552f, 131.8581f;
						case 1:
							return -2152.373f, -1368.933f, 133.126f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -897.5998f, 535.8544f, 58.2352f;
						case 1:
							return -978.1911f, 492.8889f, 61.25683f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 280.7151f, 263.9585f, 112.8886f;
						case 1:
							return 236.6632f, 333.7341f, 115.2812f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1451.073f, 1260.018f, 166.723f;
						case 1:
							return 1436.617f, 1351.127f, 161.5423f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 2652.989f, 1189.503f, 118.7033f;
						case 1:
							return 2558.496f, 1185.24f, 162.3743f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1509.102f, -2101.449f, 45.3134f;
						case 1:
							return 1509.102f, -2101.449f, 45.3134f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_179(int iParam0, bool bParam1, vector3 vParam2, bool bParam5)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_21.f_7.f_1[iParam0], func_197(iParam0), vParam2, func_241(iParam0), 1, 0, bParam5, 1, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_186()
{
	if (Local_21.f_7 == 6)
	{
		return true;
	}
	if (aggregate_func_4644(1073741824 /* Float: 2f */))
	{
		aggregate_func_4310(6);
	}
	return false;
}

void func_187()
{
	if (aggregate_func_4644(536870912))
	{
		aggregate_func_4310(1);
	}
}

void func_188()
{
	if (aggregate_func_5162())
	{
		switch (aggregate_func_4995())
		{
			case 0:
			case 1:
				aggregate_func_4310(2);
				break;
			default:
				aggregate_func_4310(2);
				break;
		}
	}
}

void func_189()
{
	if (aggregate_func_4644(1))
	{
		aggregate_func_4310(3);
	}
}

void func_190()
{
	if (aggregate_func_4644(1073741824 /* Float: 2f */))
	{
		aggregate_func_4310(6);
	}
	if (aggregate_func_4644(2))
	{
		aggregate_func_4310(4);
	}
}

void func_191()
{
	int iVar0;
	var uVar1;

	if (aggregate_func_4644(1073741824 /* Float: 2f */))
	{
		aggregate_func_4310(6);
	}
	if (!aggregate_func_4644(1))
	{
		if (aggregate_func_4644(32))
		{
			aggregate_func_4896(2);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 25)
			{
				aggregate_func_4896(2);
			}
			else
			{
				aggregate_func_4896(4);
			}
		}
		aggregate_func_4896(1);
	}
	if (aggregate_func_4644(2))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[1])))
		{
			if (!aggregate_func_4644(8))
			{
				func_252();
			}
			else
			{
				func_179(1, &uVar1, Local_21.f_7.f_22, 1);
			}
		}
	}
}

int func_197(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1223834952;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_bear_01");
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1211068025;
						case 1:
							return joaat("a_c_cougar_01");
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 209716759;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 336139515;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 336139515;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -235945995;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -235945995;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -179993551;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_200(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script@beat@wilderness@lostfriend@lake_bodyloops";
				case 1:
					return "script@beat@wilderness@lostfriend@lake_turnbody";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_201(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 0;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_202(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "PL_BODYSTART";
				case 1:
					return func_254();
				default:
					break;
			}
			return "";
	}
	return "";
}

void func_208()
{
	if (!ANIMSCENE::_0x25557E324489393C(func_148(0)) || !ANIMSCENE::_0x477122B8D05E7968(func_148(0), 1, 0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(func_148(0), func_258(1), func_259(1), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(0), func_260(), aggregate_func_4849(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(0), "ROCK", aggregate_func_8219(0), 0);
}

void func_209(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
	{
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(iParam0);
	}
}

void func_218()
{
	if (Local_281.f_18.f_60 >= 5)
	{
		if (!aggregate_func_4644(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_276()) < 60f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 60f)
			{
				func_278();
				func_279();
				func_280();
				aggregate_func_4896(2);
			}
		}
		Local_281.f_18.f_60 = 0;
	}
	else
	{
		Local_281.f_18.f_60++;
	}
}

void func_220()
{
	if (!aggregate_func_5277(0, 1073741824 /* Float: 2f */))
	{
		func_283();
	}
	else if (!aggregate_func_3816(536870912, 255))
	{
		aggregate_func_2922(536870912);
	}
}

void func_221()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 45f)
	{
		aggregate_func_6723();
	}
}

void func_222()
{
	func_286();
	aggregate_func_6724();
	if (!aggregate_func_4644(4))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 60f)
		{
			aggregate_func_1726(1891783641, aggregate_func_4849(0), 1);
			aggregate_func_4896(4);
		}
	}
	if (aggregate_func_455(Local_281.f_18.f_49, 1))
	{
		if (!aggregate_func_4644(1))
		{
			aggregate_func_2922(1);
		}
		aggregate_func_2878(&(Local_281.f_18.f_49), 1, 1);
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (45f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

void func_223()
{
	aggregate_func_2878(&(Local_281.f_18.f_49), 1, 1);
	func_291();
	aggregate_func_6692();
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (45f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

void func_224()
{
	func_291();
	aggregate_func_5153();
	if (!aggregate_func_3816(8, 255))
	{
		aggregate_func_1032(aggregate_func_4849(0), 1);
		ENTITY::_0x18FF3110CF47115D(aggregate_func_4849(0), 7, true);
		aggregate_func_2922(8);
	}
	if (aggregate_func_4644(2))
	{
		func_294();
		if (aggregate_func_3816(16, 255))
		{
			func_295();
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (45f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

float func_241(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 216.43f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 236.48f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 247.99f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 301.26f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 202.06f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 250.23f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 306.98f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 119.75f;
						case 1:
							return 274.89f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_244(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
	}
	return aggregate_func_5996();
}

void func_252()
{
	char cVar0[64];
	struct<2> Var8;
	vector3 vVar18;
	int iVar22;

	if (!aggregate_func_4644(8))
	{
		StringCopy(&cVar0, "ORESPH_BearSpawnScan", 64);
		Var8 = -1;
		Var8 = 20;
		Var8.f_1 = { aggregate_func_5996() };
		vVar18.f_3 = -1;
		iVar22 = func_308(cVar0, &Var8, &vVar18);
		switch (iVar22)
		{
			case 0:
				break;
			case 2:
				Local_21.f_7.f_22 = { func_178(1) };
				aggregate_func_4896(8);
				break;
			case 1:
				Local_21.f_7.f_22 = { vVar18 };
				aggregate_func_4896(8);
				break;
		}
	}
}

char* func_254()
{
	switch (func_197(0))
	{
		case 1223834952:
			return "pl_turnbody";
		case 1211068025:
			return "pl_turnbody_f";
		default:
			break;
	}
	return "";
}

int func_257(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1913713471;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 787340101;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2035414332;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1207636623;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 213813854;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 460892114;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1572093441;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 2134404948;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1190493899;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1623375598;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 41788943;
}

Vector3 func_258(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1109.45f, 2104.77f, 360.63f;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -4300.761f, -3445.572f, 33.398f;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -3895.461f, -2492.511f, -11.428f;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -2190.508f, -2867.223f, 25.357f;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -2083.893f, -1412.552f, 130.9481f;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -897.5998f, 535.8544f, 57.335f;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 290.999f, 262.044f, 110.394f;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1548.084f, 1355.097f, 145.176f;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 2652.989f, 1189.503f, 117.783f;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1509.102f, -2101.449f, 44.413f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_259(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -7.6f, 14.7f, 90f;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 12.8f, 15f;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -3f, 12.5f, -140f;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 0f;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 140f;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, -160f;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, 90f;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 11f, -160f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_260()
{
	if (PED::IS_PED_MALE(aggregate_func_4849(0)))
	{
		return "body";
	}
	else
	{
		return "body_f";
	}
	return "";
}

Vector3 func_276()
{
	switch (aggregate_func_4995())
	{
		case 0:
			return aggregate_func_5996();
		case 1:
			return -4321.539f, -3444.516f, 31.84637f;
		case 2:
			return -3886.186f, -2460.759f, -12.22894f;
		case 3:
			return -2202.776f, -2879.107f, 21.0543f;
		case 4:
			return -2077.611f, -1386.821f, 126.729f;
		case 5:
			return -860.764f, 522.6799f, 60.89857f;
		case 6:
			return 268.4785f, 215.0211f, 103.9115f;
		case 7:
			return 1520.264f, 1351.372f, 156.8496f;
		case 8:
			return 2595.907f, 1183.094f, 145.6995f;
		case 9:
			return 1513.276f, -2114.609f, 43.2031f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_278()
{
	switch (aggregate_func_4995())
	{
		case 0:
			func_318(Global_35, "nb_slumped_hunter_cairn_1", 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1);
			break;
	}
}

void func_279()
{
	struct<22> Var0;

	Var0.f_7 = 1056964608;
	Var0.f_8 = 1065353216;
	Var0.f_9 = 1043542835;
	Var0.f_10 = 1048576000;
	Var0.f_12 = 1061158912;
	Var0.f_13 = 1048576000;
	Var0.f_14 = 1055286886;
	Var0.f_15 = 1048576000;
	Var0.f_17 = 1065353216;
	Var0.f_18 = 1065353216;
	Var0.f_19 = 1073741824;
	Var0.f_20 = 1065353216;
	Var0.f_21 = 1048576000;
	switch (aggregate_func_4995())
	{
		case 0:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -1109.51f, 2106.493f, 360.5136f, 0f, 16);
			func_319(&Var0, -1108.537f, 2105.028f, 360.8698f, 0f, 16);
			Var0.f_17 = 2f;
			Var0.f_18 = 3f;
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -1110.142f, 2104.68f, 360.6942f, 0f, 16);
			func_319(&Var0, -1110.537f, 2105.034f, 360.7543f, 0f, 16);
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 1f, -2f, 1f };
			func_319(&Var0, -1111.565f, 2105.641f, 360.6581f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -1109.269f, 2104.641f, 361.3413f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 1:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -20f, 1f };
			func_319(&Var0, -4307.2f, -3444.932f, 32.82885f, 265f, 5);
			Var0.f_21 = 0.25f;
			Var0.f_17 = 1.25f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -4301.879f, -3446.388f, 33.25344f, 0f, 16);
			func_319(&Var0, -4305.6f, -3445.602f, 32.96651f, 20f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -4347.645f, -3443.412f, 29.3485f, 0f, 16);
			func_319(&Var0, -4301.34f, -3446.336f, 33.28331f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -4300.792f, -3445.786f, 34.08266f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			break;
		case 2:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.25f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -3891.917f, -2480.408f, -11.3641f, 170f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 2f, -4f, 1f };
			func_319(&Var0, -3893.021f, -2483.305f, -11.31038f, -60f, 16);
			Var0.f_4 = { 2f, -2f, 1f };
			func_319(&Var0, -3895.77f, -2488.116f, -11.31099f, -60f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -3895.96f, -2492.69f, -11.57146f, -45f, 16);
			func_319(&Var0, -3885.353f, -2438.913f, -12.54987f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -3895.461f, -2492.801f, -10.71474f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 1102
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -2202.088f, -2877.403f, 21.67883f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -2201.413f, -2877.482f, 21.77147f, -45f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -6f, 1f };
			func_319(&Var0, -2194.822f, -2868.107f, 25.09646f, -60f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -2190.094f, -2867.042f, 25.44861f, -45f, 16);
			func_319(&Var0, -2215.274f, -2891.501f, 12.90098f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -2190.67f, -2866.961f, 26.09237f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 1436
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -2078.412f, -1387.822f, 127.2937f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -2078.051f, -1391.873f, 128.2124f, -45f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -6f, 1f };
			func_319(&Var0, -2085.695f, -1406.422f, 130.7508f, 0f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -2084.542f, -1413.188f, 130.8916f, -45f, 16);
			func_319(&Var0, -2070.742f, -1361.117f, 122.0473f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -2083.995f, -1412.851f, 131.6568f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 1766
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -30f, 1f };
			func_319(&Var0, -841.2379f, 513.8311f, 63.81583f, 160f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, -861.4038f, 522.8286f, 60.81899f, -115f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -5f, 1f };
			func_319(&Var0, -890.9692f, 534.4683f, 57.62687f, -135f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, -826.9647f, 509.9298f, 65.01224f, -45f, 16);
			func_319(&Var0, -896.588f, 536.1981f, 57.20066f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -897.346f, 536.0071f, 58.04606f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 2100
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -20f, 1f };
			func_319(&Var0, 287.269f, 248.723f, 107.8854f, -30f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -6f, 1f };
			func_319(&Var0, 289.4469f, 255.7949f, 109.2819f, 160f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -25f, 1f };
			func_319(&Var0, 271.0932f, 206.9842f, 102.1762f, 155f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 291.84f, 261.931f, 110.5593f, -45f, 16);
			func_319(&Var0, 270.5358f, 201.3969f, 100.8203f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 291.0582f, 262.403f, 111.0703f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 2430
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, 5f, 1f };
			func_319(&Var0, 1538.508f, 1352.538f, 147.5429f, -20f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -1f, 1f };
			func_319(&Var0, 1545.553f, 1356.246f, 145.2261f, -135f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -15f, 1f };
			func_319(&Var0, 1519.899f, 1352.85f, 156.8353f, 75f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 1548.057f, 1355.951f, 144.9647f, -45f, 16);
			func_319(&Var0, 1519.117f, 1354.071f, 156.8844f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 1548.351f, 1355.055f, 145.9102f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 2752
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -15f, 1f };
			func_319(&Var0, 2562.901f, 1183.488f, 161.2576f, 60f, 16);
			Var0.f_21 = 0.5f;
			Var0.f_17 = 0.75f;
			Var0.f_18 = 1.75f;
			Var0.f_4 = { 1f, -5f, 1f };
			func_319(&Var0, 2609.94f, 1187.812f, 136.9735f, 75f, 16);
			Var0.f_21 = 0.25f;
			Var0.f_4 = { 2f, -15f, 1f };
			func_319(&Var0, 2636.818f, 1188.824f, 123.5303f, 75f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 2557.519f, 1182.989f, 162.3332f, -45f, 16);
			func_319(&Var0, 2652.654f, 1188.571f, 117.8865f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, 2653.229f, 1189.425f, 118.5011f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
			Jump @3297; //curOff = 3082
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 0.75f;
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -10f, 1f };
			func_319(&Var0, 1510.621f, -2105.338f, 44.05938f, -10f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 3.5f;
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_319(&Var0, 1515.058f, -2120.371f, 42.75279f, -45f, 16);
			func_319(&Var0, 1509.76f, -2102.439f, 44.25107f, 0f, 16);
			Local_281.f_18.f_50 = GRAPHICS::ADD_DECAL(-199919112, -3929.88f, -2589.017f, -9.95133f, 0f, 0f, -1f, 1f, 0f, 0f, 0.8f, 1f, 0f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 0);
		}

void func_280()
{
	switch (aggregate_func_4995())
	{
		case 0:
			aggregate_func_4780(Local_281.f_18.f_51[0], aggregate_func_5996(), 12f);
			break;
		case 1:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-4326.079f, -3445.069f, 31.483f, -3f, -5f, -4f, 48f, 4f, 3f, "slumpHuntRio1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-4302.172f, -3444.35f, 33.08683f, 10f, 6, -1, 0);
			break;
		case 2:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3890.429f, -2464.78f, -11.246f, -2f, 2f, 79f, 53f, 4f, 3f, "slumpHuntCholla1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-3896.965f, -2403.786f, -12.36896f, 12f, 2, -1, 0);
			break;
		case 3:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2204.084f, -2879.555f, 19.58f, 0f, -20f, 44f, 41f, 6f, 3f, "slumpHuntHennig1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-2190.508f, -2867.223f, 25.40727f, 12f, 2, -1, 0);
			break;
		case 4:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2077.611f, -1386.821f, 126.729f, 0f, 9f, 76f, 55f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-2083.065f, -1412.265f, 130.8061f, 12f, 2, -1, 0);
			break;
		case 5:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-863.525f, 523.014f, 61.494f, 0f, -6f, -20f, 72f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(-897.4304f, 535.6448f, 57.2746f, 12f, 2, -1, 0);
			break;
		case 6:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(281.006f, 229.583f, 106.618f, 9f, -9f, 71f, 64f, 4f, 4f, "slumpHuntTwnStack1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(290.999f, 262.044f, 110.394f, 5f, 3, -1, 0);
			break;
		case 7:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1530.822f, 1352.741f, 153.023f, -4f, 26f, 2f, 25f, 4f, 4f, "slumpHuntOcreaghs1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(1548.084f, 1355.097f, 145.176f, 12f, 2, -1, 0);
			break;
		case 8:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2605.391f, 1185.667f, 140.615f, 3f, 26f, 3f, 100f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(2652.989f, 1189.503f, 117.783f, 12f, 2, -1, 0);
			break;
		case 9:
			Local_281.f_18.f_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1512.404f, -2112.008f, 44.296f, 0f, 0f, -76f, 17f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::_0x92A78D0BEDB332A3(&(Local_281.f_18.f_54[0])))
			{
				Local_281.f_18.f_51[0] = GRAPHICS::_0xBD3324281E8B9933(&(Local_281.f_18.f_54[0]), 7, -1, 0);
			}
			Local_281.f_18.f_51[1] = GRAPHICS::_0xFA50F79257745E74(1509.102f, -2101.449f, 44.413f, 12f, 2, -1, 0);
			break;
	}
}

void func_283()
{
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_148(0)))
	{
	}
	else
	{
		aggregate_func_1032(aggregate_func_4849(0), 0);
		PED::_0x6569F31A01B4C097(aggregate_func_4849(0), 4, true);
		ENTITY::_0x8C03CD6B5E0E85E8(aggregate_func_4849(0), joaat("hunter"));
		ENTITY::_0x18FF3110CF47115D(aggregate_func_4849(0), 7, false);
		Local_281.f_18.f_1[0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(-773443467, aggregate_func_4849(0));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(aggregate_func_4849(0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		Local_281.f_18.f_49 = aggregate_func_1523("RE_LF_USECHECK", joaat("INPUT_CONTEXT_Y"), aggregate_func_4849(0), 2, 1, 0, 0, 5, 2f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		aggregate_func_2079(Local_281.f_18.f_49, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(aggregate_func_4849(0)), 0, 1);
		aggregate_func_5014(0, 1073741824 /* Float: 2f */);
	}
}

void func_286()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = Local_281.f_18.f_49;
	bVar1 = true;
	if (!aggregate_func_2875(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(0)))
	{
		if (bVar1)
		{
			aggregate_func_4583(iVar0, 0, 1, 1);
			aggregate_func_4823(iVar0, 0, 1);
			bVar1 = false;
		}
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (aggregate_func_918(iVar2, aggregate_func_4849(0), 1, 1) > 2f)
	{
		if (bVar1)
		{
			aggregate_func_4583(iVar0, 0, 1, 1);
			aggregate_func_4823(iVar0, 0, 1);
			bVar1 = false;
		}
		return;
	}
	if (PED::_0xA911EE21EDF69DAF(iVar2))
	{
		bVar1 = false;
	}
	else if (func_334())
	{
		bVar1 = false;
	}
	else if (aggregate_func_1316())
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		aggregate_func_4583(iVar0, 0, 1, 1);
		aggregate_func_4823(iVar0, 1, 1);
	}
	else
	{
		aggregate_func_4583(iVar0, 1, 1, 1);
		aggregate_func_4823(iVar0, 1, 1);
		bVar1 = true;
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(aggregate_func_4849(0), 2f, 0, 1, 0, "NB_SLUMPED_CORPSE_PROMPT", 0);
	}
}

void func_291()
{
	func_338();
	if (aggregate_func_3816(1, 255))
	{
		if (!aggregate_func_3816(2, 255))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, func_148(1)))
			{
				if (aggregate_func_1727(Global_35, 1369124074, 1, 0))
				{
					if (!aggregate_func_4644(1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, 0);
						aggregate_func_4896(1);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, func_148(1), "player", func_254(), 1069379748 /* Float: 1.48f */, true, 8, 20000, -1082130432 /* Float: -1f */);
					}
				}
			}
			else
			{
				aggregate_func_2922(2);
			}
		}
		else if (!aggregate_func_3816(4, 255))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, func_148(1)))
			{
				func_145();
				aggregate_func_2922(4);
			}
		}
	}
}

void func_294()
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!aggregate_func_3816(16, 255) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[1])))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((Local_281.f_18.f_1[1 /*4*/])->f_1))
		{
			(Local_281.f_18.f_1[1 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_1[1]));
		}
		else
		{
			PED::_0xBD75500141E4725C(aggregate_func_4849(1), -1270154578);
			PED::SET_PED_COMBAT_ATTRIBUTES(aggregate_func_4849(1), 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(aggregate_func_4849(1), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(aggregate_func_4849(1), 67, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(aggregate_func_4849(1), 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(aggregate_func_4849(1), 25, true);
			PED::SET_PED_CONFIG_FLAG(aggregate_func_4849(1), 224, true);
			PED::SET_PED_CONFIG_FLAG(aggregate_func_4849(1), 263, true);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(aggregate_func_4849(1), 2f);
			uVar0 = aggregate_func_130(aggregate_func_5996(), 0f, 0f, 0f, 20f, 20f, 20f, -432403087, 0, 8);
			iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
			if (iVar1 > 1)
			{
				iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(aggregate_func_4849(1), 0);
				iVar2 = (iVar2 + ((iVar2 / 4) * iVar1));
				ENTITY::SET_ENTITY_MAX_HEALTH(aggregate_func_4849(1), iVar2);
				ENTITY::_SET_ENTITY_HEALTH(aggregate_func_4849(1), iVar2, 0);
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 60f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(aggregate_func_4849(1), true, false)) < 60f)
			{
				func_341(1, joaat("BLIP_STYLE_ENEMY"));
			}
			aggregate_func_2922(16);
		}
	}
}

void func_295()
{
	if (aggregate_func_3816(1, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(1)))
		{
			if (!PED::IS_PED_IN_COMBAT(aggregate_func_4849(1), 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(aggregate_func_4849(1), ENTITY::GET_ENTITY_COORDS(aggregate_func_4849(0), true, false), 10f, 1048576, 0);
			}
		}
	}
}

void func_301(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 44, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

int func_308(char[32] cParam0, var uParam8, var uParam9)
{
	int iVar0;
	struct<4> Var1;
	int iVar12;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1 = SCRIPTS::_GET_HASH_OF_THREAD(iVar0);
	Var1.f_1 = NETWORK::_0xFB9ECED5B68F3B78(iVar0);
	Var1.f_3 = { cParam0 };
	iVar12 = func_345(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1246311[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { ((*Global_1246311)[iVar12 /*29*/])->f_22 };
				func_346(iVar12);
				return 2;
			case 3:
				*uParam9 = { ((*Global_1246311)[iVar12 /*29*/])->f_22 };
				func_346(iVar12);
				return 1;
		}
	}
	else
	{
		if (aggregate_func_8931())
		{
			return 0;
		}
		if (!aggregate_func_8229(&Var1))
		{
			return 0;
		}
		if (!aggregate_func_8230(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_350(uParam8, &Var1);
	}
	return 0;
}

int func_318(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_319(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	float fVar20;
	float fVar21;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_1) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, uParam0->f_4) };
	vVar10 = { aggregate_func_2907(vVar7 - vVar4) };
	vVar13 = { aggregate_func_8932(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((BUILTIN::VDIST(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (aggregate_func_4240(*uParam0, 1))
	{
		GRAPHICS::_0x41F88A85A579A61D(uParam0->f_9);
		while (func_358(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
		{
			GRAPHICS::_0xDD9DC1AB63D513CE(vVar1);
			iVar19++;
			if (iVar19 > iParam5)
			{
			}
		else
		{
			}
		}
		GRAPHICS::_0x812C1563185C6FB2();
		iVar19 = 0;
		fVar0 = 0f;
		vVar1 = { 0f, 0f, 0f };
	}
	if (aggregate_func_4240(*uParam0, 2))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11))
		{
			GRAPHICS::_0x4BD66B4E3427689B(uParam0->f_11);
			while (func_358(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
			{
				MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
				if ((uParam0->f_12 < 0f || uParam0->f_12 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_12)
				{
					GRAPHICS::_0xF5E45CB1CF965D2D(vVar1);
					iVar19++;
					if (iVar19 > iParam5)
					{
					}
				else
				{
					}
					GRAPHICS::_0xF2F543D48F319A3A();
					iVar19 = 0;
					fVar0 = 0f;
					vVar1 = { 0f, 0f, 0f };
					if (aggregate_func_4240(*uParam0, 4))
					{
						while (func_358(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_15, uParam0->f_16);
								fVar21 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_17, uParam0->f_18);
								GRAPHICS::_0xF708298675ABDC6A(vVar1, fVar20, fVar21, uParam0->f_20, 0, -1, 0);
								iVar19++;
								if (iVar19 > iParam5)
								{
								}
							else
							{
								}
								iVar19 = 0;
								fVar0 = 0f;
								vVar1 = { 0f, 0f, 0f };
							}
						}
					}
				}
			}
		}
	}
}

bool func_334()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((PED::GET_PED_CONFIG_FLAG(iVar0, 227, true) || PED::_0x84D0BF2B21862059(iVar0)) || aggregate_func_1080(iVar0))
	{
		return true;
	}
	return false;
}

void func_338()
{
	if (!ANIMSCENE::_0x25557E324489393C(func_148(1)) || !ANIMSCENE::_0x477122B8D05E7968(func_148(1), 1, 0))
	{
		return;
	}
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_148(1)))
	{
		if (func_374(func_148(1), "body", 0) != aggregate_func_4849(0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(func_148(1), func_258(1), func_259(1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), func_260(), aggregate_func_4849(0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), "ROCK", aggregate_func_8219(0), 0);
		}
	}
	if (aggregate_func_3816(1, 255))
	{
		if (func_374(func_148(1), func_375(), 0) != PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_148(1), func_375(), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
		}
	}
}

void func_341(int iParam0, int iParam1)
{
	if (!aggregate_func_7208(255))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_281.f_18.f_1[iParam0 /*4*/])))
	{
		Local_281.f_18.f_1[iParam0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(iParam1, aggregate_func_4849(iParam0));
	}
}

int func_345(var uParam0)
{
	int iVar0;

	if (!aggregate_func_3820(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!aggregate_func_4017(&(((*Global_1246311)[iVar0 /*29*/])->f_1), uParam0))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_346(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_387(&Var0);
}

void func_350(var uParam0, var uParam1)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = { *uParam0 };
	Var0.f_15 = { *uParam1 };
	Global_1247291->f_75 = { *uParam1 };
	func_387(&Var0);
}

bool func_358(float fParam0, var uParam1, float fParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (*fParam0 > 1f || *fParam0 < 0f)
	{
		return false;
	}
	*uParam1 = { func_388(vParam3, vParam9, vParam6, *fParam0) };
	if (!aggregate_func_803(uParam1, 1, 10, 0, 0))
	{
		return false;
	}
	if (*fParam0 != 1f)
	{
		*fParam0 = (*fParam0 + fParam2);
		if (*fParam0 > 1f)
		{
			*fParam0 = 1f;
		}
	}
	else
	{
		*fParam0 = -1f;
	}
	return true;
}

int func_374(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return 0;
}

char* func_375()
{
	if (PED::IS_PED_MALE(Global_35))
	{
		return "player";
	}
	else
	{
		return "player_f";
	}
	return "";
}

void func_387(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[16])))
	{
		return;
	}
	uParam0->f_4 = uParam0->f_4;
	*uParam0 = 177;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 27, 37, &(Global_1051202->f_16[16]));
	func_394(uParam0);
}

Vector3 func_388(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { aggregate_func_7456(vParam0, vParam3, uParam9) };
	vVar3 = { aggregate_func_7456(vParam3, vParam6, uParam9) };
	return aggregate_func_7456(vVar0, vVar3, uParam9);
}

void func_394(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = aggregate_func_1734(iVar0);
		if (aggregate_func_4240(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

