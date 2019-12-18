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
	struct<35> Local_21 = { 0, 0, 0, 0, 0, 0, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<22> Local_58[32];
	struct<199> Local_763 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = -1;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 255;
	var uLocal_969 = -1;
	var uLocal_970 = -1;
	var uLocal_971 = 1;
	var uLocal_972 = 1101004800;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 3;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 1;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = -1;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 1;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = -1;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 1;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = -1;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4264();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_21, 37, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_21), 37, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_58, 705, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_58[0 /*22*/]), 705, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			Local_21.f_29.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_35()
{
	func_95();
	aggregate_func_7929(17921);
}

void func_36()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(7);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_62()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = aggregate_func_7927(aggregate_func_4270(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		aggregate_func_7928(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_67()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate_func_2109();
	if (bVar0)
	{
		aggregate_func_3000(func_157());
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar1])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_763.f_18.f_1[iVar1]);
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_9[iVar3])))
		{
			if (!PED::IS_PED_FLEEING(aggregate_func_4849(iVar3)) && !aggregate_func_927(aggregate_func_4849(iVar3), 242628503))
			{
				if (aggregate_func_1727(aggregate_func_4849(iVar3), -1146898486, 1, 0))
				{
					TASK::TASK_WANDER_STANDARD(aggregate_func_4849(iVar3), 40000f, 1);
				}
			}
			aggregate_func_2442(iVar3);
			PED::SET_PED_KEEP_TASK(aggregate_func_4849(iVar3), true);
			iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
	func_164(1);
}

void func_93()
{
	aggregate_func_7929(25252);
}

void func_94()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_182(&(Local_763.f_101), &(Local_763.f_101.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_21.f_29.f_3[iVar0] = 0;
			Local_21.f_29.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_58[iVar1 /*22*/])->f_6.f_11[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_95()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			aggregate_func_7924(0, 0, 0.001f, 0f, 0f, 10f, -1, 3);
			break;
	}
}

bool func_112()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (iVar2 != 0 && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar2])))
		{
			if (aggregate_func_3815(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (aggregate_func_4995() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3])))
			{
				if (func_192(iVar3, &bVar1, 0) || bVar1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar3++;
				}
				if (bVar1)
				{
					aggregate_func_4983();
				}
				return iVar0;
			}
		}
	}
}

bool func_118()
{
	if (func_198())
	{
		return true;
	}
	if (aggregate_func_4644(33554432) && Local_21.f_7 != 5)
	{
		aggregate_func_4310(5);
	}
	if (aggregate_func_4644(2048) && Local_21.f_7 < 4)
	{
		aggregate_func_4310(4);
	}
	switch (Local_21.f_7)
	{
		case 0:
			func_201();
			break;
		case 1:
			func_202();
			break;
		case 2:
			func_203();
			break;
		case 3:
			func_204();
			break;
		case 4:
			func_205();
			break;
		case 5:
			func_206();
			break;
	}
	return false;
}

bool func_120()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_8219(iVar1)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(aggregate_func_8219(iVar1), true))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_126()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "ORECRW";
	bVar1 = true;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			bVar1 = false;
		}
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(func_157()))
	{
		aggregate_func_3021(func_157());
		bVar1 = false;
	}
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (!aggregate_func_2053(func_215(iVar2)))
		{
			bVar1 = false;
		}
		iVar2++;
	}
	if (aggregate_func_4995() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (!aggregate_func_2053(func_217(iVar3)))
			{
				bVar1 = false;
			}
			iVar3++;
		}
		if (!aggregate_func_264(func_218(0), &(Local_763.f_18.f_53), &(Local_21.f_7.f_12), func_219(0), func_220(0)))
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(func_222(), func_220(iVar4)))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(func_222(), func_220(iVar4));
					bVar1 = false;
				}
				iVar4++;
			}
		}
	}
	return bVar1;
}

bool func_131()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (iVar2 == 0 && !ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar2])))
		{
			if (func_224(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bVar1)
	{
	}
	return iVar0;
}

void func_135()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar0])) || iVar0 == 0)
		{
			if (iVar0 != 0)
			{
				Local_763.f_18.f_1[iVar0] = NETWORK::NET_TO_OBJ(&(Local_21.f_7.f_1[iVar0]));
			}
			switch (iVar0)
			{
				case 0:
					Local_763.f_18.f_56 = TASK::_0xD508FA229F1C4900(&(Local_763.f_18.f_1[iVar0]), 0f, -0.25f, 0f, 1765033373, 1f);
					if (TASK::_0x841475AC96E794D1(Local_763.f_18.f_56))
					{
						TASK::_0xEEE4829304F93EEE(Local_763.f_18.f_56, 0);
						Local_763.f_18.f_56 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(&(Local_763.f_18.f_1[iVar0]), 75374539, 0f, -0.25f, 0f, 0f, 0f, 0f, 1);
					}
					_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
					func_228(func_215(0), func_159(0), Local_763.f_18.f_1[iVar0], 0, 0);
					aggregate_func_1961(&(Local_763.f_18.f_1[iVar0]));
					aggregate_func_2576(func_215(0), func_159(0), func_230(), func_231(), Local_763.f_18.f_1[iVar0], func_232(), 1, 0, 0, 0, -1);
					break;
				case 1:
					if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
					{
						ENTITY::_0xEBDC12861D079ABA(&(Local_763.f_18.f_1[iVar0]), 1);
					}
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					TASK::_0x78B4567E18B54480(&(Local_763.f_18.f_1[iVar0]));
					GRAPHICS::_0x7DFB49BCDB73089A(&(Local_763.f_18.f_1[iVar0]), true);
					ENTITY::SET_ENTITY_COLLISION(&(Local_763.f_18.f_1[iVar0]), false, false);
					break;
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_763.f_18.f_1[iVar0])) || iVar0 == 0)
			{
				ENTITY::SET_ENTITY_ROTATION(&(Local_763.f_18.f_1[iVar0]), func_234(iVar0), 2, false);
				aggregate_func_1332(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
			}
		}
		iVar0++;
	}
	if (aggregate_func_4995() == 2)
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar1])))
			{
				(Local_763.f_18.f_9[iVar1 /*7*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_9[iVar1]));
				aggregate_func_7704(iVar1, (Local_763.f_18.f_9[iVar1 /*7*/])->f_1);
				aggregate_func_2586(iVar1);
			}
			iVar1++;
		}
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RECW_Area", true, false);
	AUDIO::_0x3743CE6948194349("AZ_RECW_Area", aggregate_func_5996(), 0f);
	func_164(0);
}

void func_141()
{
	aggregate_func_2548();
	func_250();
	aggregate_func_4310(Local_21.f_7);
	switch (Local_763.f_18)
	{
		case 0:
			func_252();
			break;
		case 1:
			func_253();
			break;
		case 2:
			func_254();
			break;
		case 3:
			func_255();
			break;
		case 4:
			func_256();
			break;
		case 5:
			func_257();
			break;
	}
}

bool func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	aggregate_func_3000(func_157());
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			iVar0 = 0;
		}
		if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iVar1])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(Local_763.f_18.f_1[iVar1]);
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_159(0), 2f);
			iVar0 = 0;
		}
		iVar1++;
	}
	if (aggregate_func_4995() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_9[iVar3])))
			{
				iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
				aggregate_func_2442(iVar3);
				PED::SET_PED_KEEP_TASK(aggregate_func_4849(iVar3), true);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
				iVar0 = 0;
			}
			if (ANIMSCENE::_0x25557E324489393C(func_222()) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_21.f_7.f_12))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(func_222());
				}
			}
			iVar3++;
		}
	}
	func_164(1);
	return iVar0;
}

int func_157()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					return -1754970007;
				case 1:
					return 2144414063;
				case 2:
					return -2042475701;
				case 3:
					return 1358414393;
				case 4:
					return 289521398;
				case 5:
					return 1883534212;
				case 6:
					return 209919309;
				default:
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					return 1364276294;
				case 1:
					return 1108743226;
				case 2:
					return -198101911;
				case 3:
					return 672931117;
				default:
					break;
			}
			break;
	}
	return -1754970007;
}

Vector3 func_159(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1497.818f, -556.8351f, 131.8656f;
						case 1:
							return -1498.818f, -557.8351f, 131.8656f;
						case 2:
							return -1497.509f, -555.1789f, 131.8371f;
						case 3:
							return -1501.39f, -555.5867f, 131.8429f;
						case 4:
							return -1499.623f, -558.7266f, 131.8674f;
						case 5:
							return -1501.423f, -553.6351f, 131.8304f;
						case 6:
							return -1498.62f, -552.0974f, 131.7956f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1757.98f, 268.1308f, 118.7833f;
						case 1:
							return -1761.539f, 270.308f, 118.323f;
						case 2:
							return -1758.738f, 268.6893f, 119.7066f;
						case 3:
							return -1760.483f, 270.0028f, 119.4709f;
						case 4:
							return -1762.358f, 269.5813f, 119.438f;
						case 5:
							return -1760.702f, 266.5843f, 119.1385f;
						case 6:
							return -1758.459f, 265.7853f, 119.3051f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2761.15f, -155.7835f, 150.856f;
						case 1:
							return -2763.649f, -160.2878f, 150.8133f;
						case 2:
							return -2761.855f, -159.1378f, 151.0176f;
						case 3:
							return -2763.572f, -160.8323f, 150.8463f;
						case 4:
							return -2761.176f, -161.9261f, 151.021f;
						case 5:
							return -2764.819f, -159.9952f, 150.5882f;
						case 6:
							return -2764.838f, -157.4752f, 150.5356f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -719.2113f, -755.4812f, 49.81384f;
						case 1:
							return -717.5301f, -758.2379f, 49.85249f;
						case 2:
							return -721.2198f, -760.2551f, 49.83548f;
						case 3:
							return -716.4632f, -757.7909f, 49.83548f;
						case 4:
							return -721.7213f, -755.4597f, 50.867f;
						case 5:
							return -719.8456f, -753.7499f, 49.79519f;
						case 6:
							return -723.6201f, -756.3176f, 49.93331f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 953.2573f, -1249.291f, 53.87093f;
						case 1:
							return 950.9216f, -1250.914f, 53.96534f;
						case 2:
							return 949.3633f, -1248.699f, 53.97248f;
						case 3:
							return 951.8709f, -1249.214f, 53.86581f;
						case 4:
							return 952.5452f, -1246.627f, 53.80265f;
						case 5:
							return 949.3638f, -1246.241f, 53.90157f;
						case 6:
							return 951.9981f, -1245.212f, 53.79996f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1089.388f, -1421.76f, 55.4995f;
						case 1:
							return 1089.704f, -1417.942f, 55.52629f;
						case 2:
							return 1089.866f, -1420.286f, 55.35836f;
						case 3:
							return 1090.614f, -1417.273f, 55.77501f;
						case 4:
							return 1086.425f, -1418.622f, 55.6114f;
						case 5:
							return 1089.64f, -1422.87f, 55.45679f;
						case 6:
							return 1087.065f, -1422.422f, 55.4695f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1289.037f, -1605.02f, 64.52058f;
						case 1:
							return 1285.907f, -1604.498f, 64.50636f;
						case 2:
							return 1290.473f, -1605.005f, 64.46574f;
						case 3:
							return 1292.644f, -1604.174f, 64.27807f;
						case 4:
							return 1294.001f, -1605.432f, 64.31178f;
						case 5:
							return 1292.688f, -1602.594f, 64.01215f;
						case 6:
							return 1286.933f, -1604.619f, 64.5117f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1499.519f, -553.7022f, 131.816f;
						case 1:
							return -1496.353f, -555.2807f, 131.8417f;
						case 2:
							return -1495.8f, -556.1063f, 131.8637f;
						case 3:
							return -1500.151f, -556.0807f, 131.8662f;
						case 4:
							return -1501.354f, -553.8411f, 131.8338f;
						case 5:
							return -1501.634f, -552.0386f, 131.8112f;
						case 6:
							return -1495.57f, -555.4305f, 131.8408f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1758.699f, 269.4274f, 118.5922f;
						case 1:
							return -1757.563f, 267.2061f, 118.9688f;
						case 2:
							return -1758.044f, 267.5631f, 118.9089f;
						case 3:
							return -1760.03f, 268.3575f, 118.7854f;
						case 4:
							return -1762.666f, 267.2132f, 118.8957f;
						case 5:
							return -1760.06f, 265.9642f, 119.2891f;
						case 6:
							return -1762.323f, 269.8965f, 118.3679f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2764.391f, -160.7872f, 150.7077f;
						case 1:
							return -2761.297f, -155.987f, 150.8689f;
						case 2:
							return -2760.491f, -159.7183f, 151.0812f;
						case 3:
							return -2760.785f, -156.5841f, 150.951f;
						case 4:
							return -2763.912f, -157.4422f, 150.6202f;
						case 5:
							return -2765.199f, -158.5706f, 150.5246f;
						case 6:
							return -2760.098f, -160.6409f, 151.0229f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -723.5045f, -757.0285f, 49.93748f;
						case 1:
							return -717.5816f, -753.1685f, 49.79384f;
						case 2:
							return -717.0905f, -756.0546f, 49.81386f;
						case 3:
							return -718.5177f, -753.2686f, 49.80091f;
						case 4:
							return -720.2693f, -755.9547f, 49.82605f;
						case 5:
							return -722.0327f, -755.5529f, 49.87656f;
						case 6:
							return -720.4021f, -760.0595f, 49.81378f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_164(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_1432(aggregate_func_5996(), 20f, 5);
	}
	else
	{
		aggregate_func_1067(aggregate_func_5996(), 20f, 0, 0, 4);
	}
}

void func_182(var uParam0, var uParam1)
{
	aggregate_func_5611(uParam0, 0);
	aggregate_func_6001(uParam0, 0);
	aggregate_func_6009(uParam0, 1);
	aggregate_func_5529(uParam0, 1);
	aggregate_func_5528(uParam0, 1);
	aggregate_func_5632(uParam0, 1);
	aggregate_func_8076(uParam0, 1);
	aggregate_func_7753(uParam0, 1);
	aggregate_func_8915(uParam0, 1);
	aggregate_func_6002(uParam0, 1, 1, 1);
	aggregate_func_7024(uParam1);
	aggregate_func_6965(uParam1);
}

int func_192(int iParam0, bool bParam1, bool bParam2)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_21.f_7.f_9[iParam0], func_217(iParam0), func_292(iParam0), func_293(iParam0), 1, 0, bParam2, 1, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_198()
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

void func_201()
{
	if (aggregate_func_4644(536870912))
	{
		aggregate_func_4310(1);
	}
}

void func_202()
{
	if (aggregate_func_5162())
	{
		switch (aggregate_func_4995())
		{
			case 0:
			case 1:
			case 2:
				aggregate_func_4310(2);
				break;
			default:
				aggregate_func_4310(2);
				break;
		}
	}
}

void func_203()
{
	if (aggregate_func_4995() == 2)
	{
		if (aggregate_func_4644(8))
		{
			aggregate_func_4310(4);
		}
		if (aggregate_func_4644(32))
		{
			aggregate_func_4310(3);
		}
	}
}

void func_204()
{
	if (aggregate_func_4644(64) || aggregate_func_4644(128))
	{
		aggregate_func_4310(4);
	}
	if (aggregate_func_4644(16))
	{
		if (!aggregate_func_4260(&(Local_21.f_7.f_17)))
		{
			aggregate_func_4293(&(Local_21.f_7.f_17), 0);
		}
		else if (aggregate_func_1526(&(Local_21.f_7.f_17)) > 30000)
		{
			aggregate_func_4310(4);
		}
	}
}

void func_205()
{
	if (aggregate_func_5076() < 3)
	{
		aggregate_func_4271(3);
	}
}

void func_206()
{
	if (aggregate_func_5076() < 3)
	{
		aggregate_func_4271(3);
	}
}

int func_215(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -347276241;
						case 3:
							return -347276241;
						case 4:
							return -72392766;
						case 5:
							return 1061658559;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -51847185;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 161801294;
						case 6:
							return 161801294;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 284056517;
						case 3:
							return 284056517;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 284056517;
						case 3:
							return 284056517;
						case 4:
							return -72392766;
						case 5:
							return 1727249588;
						case 6:
							return 1727249588;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -347276241;
						case 3:
							return -51847185;
						case 4:
							return -72392766;
						case 5:
							return 1063637181;
						case 6:
							return 1061658559;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return 2020860041;
						case 3:
							return 2020860041;
						case 4:
							return -72392766;
						case 5:
							return 1959411711;
						case 6:
							return 1959411711;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (iParam0)
					{
						case 0:
							return joaat("s_lootablemoneybox");
						case 1:
							return joaat("p_lantern05x");
						case 2:
							return -72392766;
						case 3:
							return 1491155834;
						case 4:
							return 116449707;
						case 5:
							return 1491155834;
						case 6:
							return 116449707;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2041325498;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_218(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "script@beat@wilderness@crashedwagon@action";
				case 0:
					return "script@beat@wilderness@crashedwagon@action";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_219(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return 65;
				case 1:
					return 64;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_220(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					return "pbl_DRUNK_ACTION";
				case 0:
					return "pbl_DRUNK_IDLE_01";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_222()
{
	int iVar0;

	iVar0 = Local_21.f_7.f_12;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_0xD7F6781A0ABAF6FB(iVar0);
	}
	return 0;
}

int func_224(int iParam0, bool bParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	Local_763.f_18.f_1[iParam0] = OBJECT::CREATE_OBJECT(func_215(iParam0), func_159(iParam0), false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iParam0])))
	{
		*bParam1 = 1;
		return 0;
	}
	return 1;
}

void func_228(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate_func_428(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam4, "chest_local_only", true);
	}
}

Vector3 func_230()
{
	switch (func_232())
	{
		case -392829098: /* GXTEntry: "Cognac" */
			return -0.075f, 0f, 0.05f;
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			return -0.1f, 0f, 0.05f;
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			return -0.075f, 0f, 0.05f;
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
			return -0.125f, 0f, 0.05f;
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
			return -0.1f, 0f, 0.05f;
		case 1465762285: /* GXTEntry: "Absinthe" */
			return -0.075f, 0f, 0.05f;
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			return -0.075f, 0f, 0.05f;
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -0.06f, -0.015f, 0.065f;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 0f, 0f, 0f;
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return 0.05f, -0.01f, 0.06f;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_231()
{
	switch (func_232())
	{
		case -392829098: /* GXTEntry: "Cognac" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f);
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
		case 1465762285: /* GXTEntry: "Absinthe" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-20f, 20f);
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -10f, 72.5f, -65f;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(80f, 100f);
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return -10f, -72.5f, 65f;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_232()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					return -392829098 /* GXTEntry: "Cognac" */;
				case 1:
					return 1603716279 /* GXTEntry: "Old Tom Gin" */;
				case 2:
					return 1565126061 /* GXTEntry: "Gran Corazon Madeira" */;
				case 3:
					return 941442568 /* GXTEntry: "Tennessee Whiskey" */;
				case 4:
					return 1135560775 /* GXTEntry: "Irish Whiskey" */;
				case 5:
					return 1465762285 /* GXTEntry: "Absinthe" */;
				case 6:
					return -897008046 /* GXTEntry: "Caribbean Rum" */;
				default:
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					return -27315089 /* GXTEntry: "New Guinea Rosewood Hairbrush" */;
				case 1:
					return -1868057871 /* GXTEntry: "Tortoiseshell Comb" */;
				case 2:
					return 1742487931 /* GXTEntry: "Goat Hair Brush" */;
				case 3:
					return 147602269 /* GXTEntry: "Jade Hairpin" */;
				default:
					break;
			}
			break;
	}
	return 1465762285 /* GXTEntry: "Absinthe" */;
}

Vector3 func_234(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 90f, 90f, 90f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, -7.5f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 180f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 0f, 10f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -10f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0f, -10f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0f, 0f, 0f;
						case 1:
							return 0f, 0f, 0f;
						case 2:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 3:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 4:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 5:
							return 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						case 6:
							return 90f, 90f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f);
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		if (Local_763.f_75.f_19 >= 1)
		{
			Local_763.f_75.f_19 = 0;
		}
		iVar0 = Local_763.f_75.f_19;
		Local_763.f_75.f_19++;
		iVar7 = aggregate_func_4270(iVar0);
		iVar1 = &Local_763.f_75.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate_func_5277(iVar7, 4))
		{
			aggregate_func_325(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_58[iVar3 /*22*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_58[iVar3 /*22*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_763.f_75.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_763.f_75.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_763.f_75.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_763.f_75.f_20, iVar0))
		{
			if (bVar4 || !aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_58[iVar3 /*22*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_58[iVar3 /*22*/])->f_2.f_1), iVar0);
				}
				aggregate_func_4283(Local_763.f_75.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_58[iVar3 /*22*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate_func_4260(Local_763.f_75.f_21[iVar0 /*3*/]) || aggregate_func_4628(Local_763.f_75.f_21[iVar0 /*3*/], 0.5f))))
			{
				aggregate_func_4313(Local_763.f_75.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_58[iVar3 /*22*/])->f_2.f_1), iVar0);
			}
		}
		if (aggregate_func_5277(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (aggregate_func_4311(iVar7))
						{
							if (!aggregate_func_257(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate_func_5014(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate_func_5277(iVar7, 8))
			{
				if (!aggregate_func_4311(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_763.f_75.f_20 != 0)
	{
		if (!aggregate_func_3434(1, -1))
		{
			aggregate_func_2922(1);
		}
	}
	else if (aggregate_func_3434(1, -1))
	{
		aggregate_func_2922(1);
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_339();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_58[iVar15 /*22*/])->f_6.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_763.f_101.f_84 >= 1)
		{
			Local_763.f_101.f_84 = 0;
		}
		iVar1 = Local_763.f_101.f_84;
		Local_763.f_101.f_84++;
		iVar12++;
		iVar8 = aggregate_func_4270(iVar1);
		if (!aggregate_func_2995(iVar8))
		{
		}
		else if (aggregate_func_2418(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				aggregate_func_4239(iVar8);
				if (aggregate_func_2986(iVar8))
				{
					if (aggregate_func_2419(iVar8))
					{
						if (!aggregate_func_3527(iVar8))
						{
							aggregate_func_2411(iVar8);
						}
					}
					if (aggregate_func_2420(iVar8))
					{
						aggregate_func_2421(iVar8);
					}
				}
				else
				{
					if (aggregate_func_2995(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate_func_2422(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (aggregate_func_4484(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (aggregate_func_2148(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate_func_415(vVar5.x, vVar5.y, &(Local_763.f_101), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_763.f_101.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_763.f_101))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_763.f_101.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_763.f_101.f_1 & 256 != 0)
							{
								if ((Local_58[iVar15 /*22*/])->f_6.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_58[iVar15 /*22*/])->f_6.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_763.f_101))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_356(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
								}
								aggregate_func_1729(iVar8, 1);
								Jump @760; //curOff = 672
								if (aggregate_func_689(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_58[iVar15 /*22*/])->f_6.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_58[iVar15 /*22*/])->f_6.f_7), iVar8);
								}
								if (aggregate_func_2986(iVar8))
								{
									if (!aggregate_func_2148(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!aggregate_func_4311(iVar8))
											{
											}
											else
											{
												aggregate_func_4239(iVar8);
												aggregate_func_2136(iVar8);
												Jump @1005; //curOff = 814
												if (aggregate_func_1730(iVar8))
												{
												}
												else if (iVar13 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_763.f_101.f_86[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_763.f_101.f_86[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_763.f_101.f_86[iVar8];
																Local_763.f_101.f_86[iVar8] = &Local_763.f_101.f_86[iVar8] + 1;
															}
															iVar14++;
															if (aggregate_func_690(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!aggregate_func_3528(iVar8, iVar10))
																{
																	if (aggregate_func_2422(iVar8, iVar0))
																	{
																		if (!aggregate_func_7254(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			aggregate_func_2423(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_247()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!aggregate_func_3575(iVar1))
	{
		return;
	}
	func_370();
	if (aggregate_func_7931())
	{
		if (aggregate_func_3683(2, -1) || aggregate_func_3683(1, -1))
		{
			aggregate_func_2922(1);
			aggregate_func_2922(2);
			aggregate_func_4896(2);
			aggregate_func_4896(1);
		}
	}
	else
	{
		bVar2 = false;
		if (aggregate_func_7932() || aggregate_func_7933())
		{
			bVar2 = true;
			if (aggregate_func_7933() || (!aggregate_func_4644(8) && !aggregate_func_3683(4, iVar1)))
			{
				aggregate_func_4335(Local_763.f_198, Local_21.f_34);
				Local_763.f_198 = Local_21.f_34;
				iVar3 = 0;
				while (iVar3 < 1)
				{
					func_378(aggregate_func_4270(iVar3), Local_21.f_34);
					iVar3++;
				}
				if (aggregate_func_7934())
				{
					aggregate_func_7935(Local_763.f_198.f_3.f_1);
				}
				bVar0 = true;
				if (aggregate_func_7932())
				{
					aggregate_func_2922(4);
				}
				else
				{
					aggregate_func_2922(4);
				}
			}
			else if (!aggregate_func_4644(8))
			{
				if (!aggregate_func_4644(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_4896(8);
				}
			}
			else if (aggregate_func_4644(4))
			{
				if (aggregate_func_3683(4, iVar1))
				{
					aggregate_func_2922(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4896(4);
				aggregate_func_4896(8);
			}
		}
		else if (aggregate_func_3683(4, iVar1))
		{
			aggregate_func_2922(4);
		}
		if (!aggregate_func_4644(1))
		{
			if (aggregate_func_4644(1))
			{
				aggregate_func_4896(1);
			}
			if (aggregate_func_7934())
			{
				iVar4 = Local_763.f_198.f_3.f_1;
				if (aggregate_func_7936(iVar4))
				{
					if (bVar0)
					{
						aggregate_func_7935(iVar4);
					}
					if (aggregate_func_4240((Local_763.f_198.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!aggregate_func_2875(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || aggregate_func_4240(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (aggregate_func_4637(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								aggregate_func_4243(&(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!aggregate_func_4240(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (aggregate_func_4240(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (aggregate_func_2020() < ((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (aggregate_func_4637(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											aggregate_func_4583(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!aggregate_func_4637(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										aggregate_func_4583(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!aggregate_func_4637(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (aggregate_func_2973(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!aggregate_func_6717(iVar4, iVar5, Local_763.f_198))
								{
								}
								else
								{
									Local_763.f_198.f_7 = PLAYER::PLAYER_ID();
									Local_763.f_198.f_8 = iVar4;
									Local_763.f_198.f_9 = iVar5;
									(Local_58[iVar6 /*22*/])->f_19.f_1 = iVar4;
									(Local_58[iVar6 /*22*/])->f_19.f_2 = iVar5;
									func_388(iVar4, iVar5);
									aggregate_func_2922(1);
									aggregate_func_2922(2);
									aggregate_func_4896(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!aggregate_func_4644(2))
			{
				if (!aggregate_func_4644(1))
				{
					aggregate_func_4896(1);
					aggregate_func_4896(2);
				}
			}
			if (!aggregate_func_3683(2, -1))
			{
				if (aggregate_func_4644(2))
				{
					func_388(Local_763.f_198.f_8, Local_763.f_198.f_9);
					aggregate_func_2922(2);
				}
			}
		}
	}
}

void func_250()
{
	int iVar0;

	if (Local_763.f_18.f_54 >= 5)
	{
		if (!aggregate_func_4644(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 50f)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_763.f_18.f_1[iVar0])))
					{
						ENTITY::SET_ENTITY_ROTATION(&(Local_763.f_18.f_1[iVar0]), func_234(iVar0), 2, false);
						aggregate_func_1332(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
					}
					iVar0++;
				}
				aggregate_func_4896(2);
			}
		}
		Local_763.f_18.f_54 = 0;
	}
	else
	{
		Local_763.f_18.f_54++;
	}
	if (!aggregate_func_3816(1024, 255))
	{
		if (func_393(func_232()))
		{
			aggregate_func_4896(8);
			aggregate_func_2922(1024);
		}
	}
	if (Local_763.f_18 < 4)
	{
		func_395();
	}
}

void func_252()
{
	if (aggregate_func_4995() == 2 && !aggregate_func_5277(0, 1073741824 /* Float: 2f */))
	{
		func_397();
	}
	else
	{
		aggregate_func_2922(536870912);
	}
}

void func_253()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 50f)
	{
		if (!aggregate_func_4644(256))
		{
			aggregate_func_2922(256);
		}
		else
		{
			aggregate_func_6723();
		}
	}
}

void func_254()
{
	aggregate_func_6724();
	if (aggregate_func_4995() == 2)
	{
		func_400();
		func_401(0, 0);
		if (!aggregate_func_4644(4))
		{
			func_402(1);
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_222()) && ANIMSCENE::_0x1F0E401031E20146(func_222(), func_220(1)))
			{
				aggregate_func_2922(4);
			}
		}
		else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_222()))
		{
			aggregate_func_2922(8);
		}
		if (aggregate_func_4995() == 2 && !aggregate_func_4644(32))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(aggregate_func_4849(0), true, false)) <= 10f)
			{
				aggregate_func_2922(32);
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (50f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

void func_255()
{
	if (aggregate_func_5076() < 1)
	{
		if (aggregate_func_4644(134217728))
		{
			aggregate_func_4271(1);
		}
	}
	else if (aggregate_func_5076() < 2)
	{
		if (aggregate_func_4644(268435456))
		{
			aggregate_func_4271(2);
		}
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate_func_4849(0));
		}
	}
	else
	{
		if (aggregate_func_1727(aggregate_func_4849(0), -875674219, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(aggregate_func_4849(0), func_403(0, 1148846080 /* Float: 1000f */), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			aggregate_func_2922(16);
		}
		if (aggregate_func_4644(16))
		{
			aggregate_func_2442(0);
			if (!aggregate_func_4644(131072))
			{
				aggregate_func_3614(1, 0, 0);
				if (PED::IS_PED_FACING_PED(aggregate_func_4849(0), Global_35, 10f))
				{
					func_406(131072);
				}
			}
			if (aggregate_func_4644(131072))
			{
				if (!aggregate_func_3816(134217728, 255))
				{
					aggregate_func_2922(134217728);
				}
				else if (!aggregate_func_3816(268435456, 255) && !AUDIO::IS_ANY_SPEECH_PLAYING(aggregate_func_4849(0)))
				{
					aggregate_func_2922(268435456);
				}
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (50f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

void func_256()
{
	func_395();
	if (aggregate_func_1727(aggregate_func_4849(0), 242628503, 1, 0))
	{
		if (!aggregate_func_4644(512))
		{
			TASK::OPEN_SEQUENCE_TASK(&((Local_763.f_18.f_9[0 /*7*/])->f_2));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_407(), 1f, -1, 0.25f, true, 40000f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			aggregate_func_1004(aggregate_func_4849(0), &((Local_763.f_18.f_9[0 /*7*/])->f_2), 0, 0, 1, 1);
			aggregate_func_2922(512);
		}
	}
	else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate_func_4849(0));
		}
	}
	if (aggregate_func_3816(64, 255))
	{
		if (!aggregate_func_4644(4096))
		{
			func_406(4096);
		}
	}
	else if (aggregate_func_3816(128, 255))
	{
		if (!aggregate_func_4644(8192))
		{
			func_406(8192);
		}
	}
	else if (aggregate_func_4644(2048))
	{
		if (!aggregate_func_4644(16384))
		{
			func_406(16384);
		}
	}
	else if (!aggregate_func_4644(32))
	{
		func_406(32);
	}
	func_409();
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) > (50f * 2f))
	{
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
}

void func_257()
{
	func_410();
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate_func_4849(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate_func_4849(0));
		}
	}
	else
	{
		if (!aggregate_func_3816(67108864, 255))
		{
			if (aggregate_func_4644(4))
			{
				if (!aggregate_func_4644(256))
				{
					func_411(0, 256, 0, -417894478);
				}
				else
				{
					aggregate_func_2922(67108864);
				}
			}
			else if (!aggregate_func_4644(65536))
			{
				func_411(0, 65536, 0, -417894478);
			}
			else
			{
				aggregate_func_2922(67108864);
			}
		}
		if (!PED::IS_PED_FLEEING(aggregate_func_4849(0)))
		{
			if (Local_21.f_7.f_13 == 0)
			{
				if (aggregate_func_3816(33554432, 255))
				{
					Local_21.f_7.f_13 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
				}
			}
			else if (aggregate_func_1727(aggregate_func_4849(0), 518218985, 1, 0))
			{
				TASK::_TASK_FLEE_FROM_PED(aggregate_func_4849(0), Local_21.f_7.f_13, 0f, 0f, 0f, 100f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
	}
}

Vector3 func_292(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return aggregate_func_5996();
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_293(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 216.43f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_303(var uParam0, int iParam1, var uParam2)
{
	switch (aggregate_func_4270(uParam2))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 3:
			return 2;
	}
	return 0;
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1:
			func_411(0, iParam0->f_11, 0, -417894478);
			break;
		case 2:
			func_439();
			break;
	}
}

int func_321(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1270332421;
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return 480084174;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_324()
{
	int iVar0;

	Local_763.f_101.f_64 = 0;
	Local_763.f_101.f_63 = 0;
	Local_763.f_101.f_66 = 0;
	Local_763.f_101.f_67 = 0;
	Local_763.f_101.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_763.f_101.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_763.f_101.f_75[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_763.f_101.f_73[iVar0]);
		aggregate_func_2424(iVar0);
		iVar0++;
	}
}

void func_325()
{
	int iVar0;

	Local_763.f_198.f_5 = 0;
	Local_763.f_198.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		aggregate_func_68(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_327(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_763.f_101.f_64 = (Local_763.f_101.f_64 || (Local_58[iParam0 /*22*/])->f_6.f_1);
		Local_763.f_101.f_63 = (Local_763.f_101.f_63 || (Local_58[iParam0 /*22*/])->f_6);
		Local_763.f_101.f_66 = (Local_763.f_101.f_66 || (Local_58[iParam0 /*22*/])->f_6.f_3);
		Local_763.f_101.f_67 = (Local_763.f_101.f_67 || (Local_58[iParam0 /*22*/])->f_6.f_4);
		Local_763.f_101.f_68 = (Local_763.f_101.f_68 || (Local_58[iParam0 /*22*/])->f_6.f_5);
		Local_763.f_101.f_69 = (Local_763.f_101.f_69 || (Local_58[iParam0 /*22*/])->f_6.f_6);
		Local_763.f_101.f_82 = (Local_763.f_101.f_82 || (Local_58[iParam0 /*22*/])->f_6.f_2);
		Local_763.f_101.f_70 = (Local_763.f_101.f_70 && (Local_58[iParam0 /*22*/])->f_6.f_7);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_73[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_58[iParam0 /*22*/])->f_6.f_9[iVar0], Local_763.f_101.f_71[iVar0], Local_763.f_101.f_75[iVar0]);
			aggregate_func_691(aggregate_func_4270(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_339()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar4 = aggregate_func_4270(iVar0);
		if (!aggregate_func_2995(iVar4))
		{
		}
		else if (!aggregate_func_2148(iVar4, iVar5))
		{
			if (aggregate_func_2418(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate_func_2136(iVar4);
					aggregate_func_4239(iVar4);
				}
			}
		}
		iVar0++;
	}
}

bool func_356(int iParam0, int iParam1, int iParam2)
{
	aggregate_func_2922(33554432);
	switch (iParam1)
	{
		case 8:
			if (!aggregate_func_4644(4))
			{
				aggregate_func_4896(4);
			}
			break;
	}
	func_410();
	return true;
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_710(0, 0);
	if (iVar0 != Local_763.f_198.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_763.f_198.f_3.f_1);
				aggregate_func_7928(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < aggregate_func_4270(1))
				{
					if (iVar1 == aggregate_func_7927(iVar2))
					{
						Local_763.f_198.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_763.f_198.f_3.f_1);
				aggregate_func_7935(Local_763.f_198.f_3.f_1);
			}
		}
		else
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_763.f_198.f_3.f_1);
				aggregate_func_7928(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
		}
	}
}

void func_378(int iParam0, var uParam1)
{
	switch (aggregate_func_4270(uParam1))
	{
		case 0:
			aggregate_func_8917(iParam0, 0);
			break;
		case 1:
			func_494(iParam0, 7f);
			aggregate_func_8918(iParam0, 0, "GREET_ACC", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
			aggregate_func_8918(iParam0, 1, "INTERACT_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			aggregate_func_4271(2);
			break;
		case 2:
			aggregate_func_8917(iParam0, 1);
			aggregate_func_4011(iParam0, 0, 1, 1);
			aggregate_func_4011(iParam0, 1, 1, 1);
			if (aggregate_func_4644(64) || aggregate_func_4644(128))
			{
				aggregate_func_4271(3);
			}
			break;
		case 3:
			aggregate_func_8917(iParam0, 0);
			func_497(iParam0, 0);
			func_497(iParam0, 1);
			break;
	}
}

void func_388(int iParam0, int iParam1)
{
	func_505(0, 1);
	switch (aggregate_func_4270(aggregate_func_4942()))
	{
		case 2:
			if (aggregate_func_6711() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						aggregate_func_2922(64);
						break;
					case 1:
						aggregate_func_2922(128);
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4896(2);
			}
			break;
	}
}

bool func_393(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

void func_395()
{
	int iVar0;

	if (!aggregate_func_4644(2048))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate_func_5996()) < 15f)
		{
			if (aggregate_func_4644(8))
			{
				aggregate_func_2922(2048);
			}
			else if (aggregate_func_5337(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (func_510(Global_35) == MISC::_0xEE04C0AFD4EFAF0E(&(Local_763.f_18.f_1[iVar0])))
					{
						aggregate_func_2922(2048);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_397()
{
	if (!aggregate_func_4644(2))
	{
		func_511();
	}
	else if (!aggregate_func_5277(0, 1073741824 /* Float: 2f */))
	{
		PED::_0x406CCF555B04FAD3(aggregate_func_4849(0), 1, 1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(aggregate_func_4849(0), true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(aggregate_func_4849(0), true, true);
		func_512(0);
		aggregate_func_5014(0, 1073741824 /* Float: 2f */);
	}
}

void func_400()
{
	if (aggregate_func_4995() == 2)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(aggregate_func_4849(0)))
		{
			if (!aggregate_func_4644(1))
			{
				func_406(1);
			}
			if (aggregate_func_1526(&((Local_763.f_18.f_9[0 /*7*/])->f_4)) >= 1000)
			{
				aggregate_func_5014(0, 2);
			}
		}
		else if (!aggregate_func_5277(0, 2))
		{
			aggregate_func_1726(1891783641, aggregate_func_4849(0), 1);
			aggregate_func_5014(0, 2);
			aggregate_func_4283(&((Local_763.f_18.f_9[0 /*7*/])->f_4));
		}
	}
}

void func_401(int iParam0, int iParam1)
{
	char* sVar0;

	if (!aggregate_func_7208(255) || aggregate_func_918((Local_763.f_18.f_9[iParam0 /*7*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		aggregate_func_2442(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_763.f_18.f_9[iParam0 /*7*/])))
	{
		Local_763.f_18.f_9[iParam0 /*7*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate_func_4849(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_CRASHED_WAGON_DRIVER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_763.f_18.f_9[iParam0 /*7*/]), sVar0);
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_763.f_18.f_9[iParam0 /*7*/]), iParam1);
	}
}

void func_402(int iParam0)
{
	int iVar0;

	iVar0 = func_222();
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		if (!ANIMSCENE::_0x25557E324489393C(iVar0) || !ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
		{
			return;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar0, func_220(iParam0)))
		{
			return;
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iVar0, func_220(iParam0)))
		{
			return;
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, func_220(iParam0), true);
	}
}

int func_403(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS((Local_763.f_18.f_9[iParam0 /*7*/])->f_1, true, false));
			if (fVar1 < fParam1)
			{
				iVar4 = iVar3;
				fParam1 = fVar1;
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_406(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<15> Var2;

	if (aggregate_func_4644(iParam0))
	{
		return;
	}
	uVar0 = aggregate_func_130(ENTITY::GET_ENTITY_COORDS(aggregate_func_4849(0), true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	iVar1 = 1;
	Var2 = { aggregate_func_1739(1) };
	Var2.f_11 = iParam0;
	aggregate_func_2478(&Var2, uVar0);
}

Vector3 func_407()
{
	switch (aggregate_func_4995())
	{
		case 0:
			return -1525.73f, -558.6525f, 137.1892f;
		case 1:
			return -1773.655f, 288.0809f, 116.3698f;
		case 2:
			return -2727.401f, -266.463f, 148.4963f;
		case 3:
			return -732.9782f, -730.3648f, 49.85772f;
		case 4:
			return 982.9839f, -1284.832f, 53.40044f;
		case 5:
			return 1108.551f, -1449.591f, 52.30062f;
		case 6:
			return 1329.837f, -1607.947f, 65.025f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_409()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!aggregate_func_4260(&(Local_21.f_7.f_14)))
		{
			aggregate_func_4293(&(Local_21.f_7.f_14), 0);
		}
		else if (aggregate_func_1526(&(Local_21.f_7.f_14)) > 10000)
		{
			if (!aggregate_func_4644(32768))
			{
				func_406(32768);
			}
			else if (!aggregate_func_4644(262144))
			{
				func_406(262144);
			}
			else if (!aggregate_func_4644(524288))
			{
				func_406(524288);
			}
			else if (!aggregate_func_4644(1048576))
			{
				func_406(1048576);
			}
		}
	}
}

void func_410()
{
	if (aggregate_func_4995() == 2)
	{
		if (!aggregate_func_4644(4096))
		{
			if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(0)))
			{
				if (ENTITY::IS_ENTITY_DEAD(aggregate_func_4849(0)))
				{
					if (aggregate_func_1031(aggregate_func_4849(0), PLAYER::PLAYER_PED_ID()))
					{
						aggregate_func_1617(151445061, 1, 0);
					}
					aggregate_func_2922(4096);
				}
			}
		}
	}
}

int func_411(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!aggregate_func_402(aggregate_func_4849(iParam0), 0))
	{
		return 0;
	}
	else if (aggregate_func_4644(iParam1))
	{
		return 0;
	}
	if ((iParam1 == 131072 || iParam1 == 256) || iParam1 == 65536)
	{
		bParam2 = true;
	}
	if (!bParam2)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(aggregate_func_4849(iParam0)))
		{
			return 0;
		}
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING(aggregate_func_4849(iParam0)))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(aggregate_func_4849(iParam0), 0);
	}
	if (aggregate_func_4975(aggregate_func_4849(iParam0), func_530(aggregate_func_4995(), iParam1), iParam3, 0, 0, func_531(iParam0), func_532(iParam1), 1))
	{
		aggregate_func_4896(iParam1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (aggregate_func_1526(&(Local_21.f_7.f_14)) > 10000)
			{
				aggregate_func_4313(&(Local_21.f_7.f_14));
			}
		}
		return 1;
	}
	return 0;
}

void func_419(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 37, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

void func_439()
{
	if (!aggregate_func_4644(8))
	{
		aggregate_func_4741(func_540(), 0);
		aggregate_func_4896(8);
	}
}

void func_494(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_763.f_198.f_10[iParam0 /*29*/] = fParam1;
	}
}

void func_497(int iParam0, int iParam1)
{
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = "";
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = 1;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = 0;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = -1;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = 0;
	if (aggregate_func_7938(iParam0))
	{
		aggregate_func_2878((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
}

void func_505(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = aggregate_func_4270(iVar0);
		aggregate_func_4011(iVar1, 0, bParam0, bParam1);
		aggregate_func_4011(iVar1, 1, bParam0, bParam1);
		aggregate_func_4011(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_1741(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = aggregate_func_1741(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

void func_511()
{
	int iVar0;

	iVar0 = func_222();
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		if (!ANIMSCENE::_0x25557E324489393C(iVar0) || !ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4849(0)) || ENTITY::IS_ENTITY_DEAD(aggregate_func_4849(0)))
		{
			return;
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, func_598(), 0f, 0f, 0f, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, "male", aggregate_func_4849(0), 0);
		func_599(iVar0, func_218(0));
		aggregate_func_2922(2);
	}
}

void func_512(int iParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_531(iParam0);
	iVar1 = aggregate_func_4849(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iVar1, sVar0);
	}
}

char* func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_MTN_V2_RAMBLING_A";
				case 2:
					return "RE_CW_MTN_V2_RAMBLING_B";
				case 4:
					return "RE_CW_MTN_V2_RAMBLING_C";
				case 8:
					return "RE_CW_MTN_V2_RAMBLING_D";
				case 16:
					return "RE_CW_MTN_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_MTN_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_MTN_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_MTN_V2_AGGRO_A";
				case 256:
					return "RE_CW_MTN_V2_AGGRO_B";
				case 512:
					return "RE_CW_MTN_V2_AGGRO_C";
				case 1024:
					return "RE_CW_MTN_V2_AGGRO_D";
				case 2048:
					return "RE_CW_MTN_V2_AGGRO_E";
				case 4096:
					return "GENERIC_THANKS";
				case 8192:
					return "GENERIC_CURSE_MED";
				case 16384:
					return "RE_CW_MTN_V2_HELP_SELF";
				case 32768:
					return "RE_CW_MTN_V2_LEAVE";
				case 65536:
					return "RE_CW_MTN_V2_AGGRO";
				case 131072:
					return "RE_CW_MTN_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_MTN_V2_TASTE";
				case 524288:
					return "RE_CW_MTN_V2_TASTE_B";
				case 1048576:
					return "RE_CW_MTN_V2_TASTE_C";
				case 2097152:
					return "RE_CW_MTN_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_MTN_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_MTN_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_MTN_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_MTN_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_MTN_V2_PASS_OUT_B";
				case 134217728:
					return "IGNORING_YOU";
				case 268435456:
					return "RE_CW_MTN_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_MTN_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_MTN_V2_HOGTIE";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam1)
			{
				case 1:
					return "RE_CW_LWL_V2_RAMBLING_A";
				case 2:
					return "RE_CW_LWL_V2_RAMBLING_B";
				case 4:
					return "RE_CW_LWL_V2_RAMBLING_C";
				case 8:
					return "RE_CW_LWL_V2_RAMBLING_D";
				case 16:
					return "RE_CW_LWL_V2_LEAVE_ROCK";
				case 32:
					return "RE_CW_LWL_V2_EARLY_FINISH";
				case 64:
					return "RE_CW_LWL_V2_BOSS_HAPPY";
				case 128:
					return "RE_CW_LWL_V2_AGGRO_A";
				case 256:
					return "RE_CW_LWL_V2_AGGRO_B";
				case 512:
					return "LIARS_DICE_BULLSHIT";
				case 1024:
					return "RE_CW_LWL_V2_AGGRO_D";
				case 2048:
					return "RE_CW_LWL_V2_AGGRO_E";
				case 4096:
					return "MINIGAME_VOCALFX_EXCITED";
				case 8192:
					return "RE_CW_LWL_V2_NEGATIVE_REACT";
				case 16384:
					return "RE_CW_LWL_V2_HELP_SELF";
				case 32768:
					return "RE_CW_LWL_V2_LEAVE";
				case 65536:
					return "RE_CW_LWL_V2_AGGRO";
				case 131072:
					return "RE_CW_LWL_V2_WATCH_STUFF";
				case 262144:
					return "RE_CW_LWL_V2_TASTE";
				case 524288:
					return "RE_CW_LWL_V2_TASTE_B";
				case 1048576:
					return "RE_CW_LWL_V2_TASTE_C";
				case 2097152:
					return "RE_CW_LWL_V2_FOLLOW_A";
				case 4194304:
					return "RE_CW_LWL_V2_FOLLOW_B";
				case 8388608:
					return "RE_CW_LWL_V2_FOLLOW_A_RANDOM";
				case 16777216:
					return "RE_CW_LWL_V2_FOLLOW_B_RANDOM";
				case 33554432:
					return "RE_CW_LWL_V2_PASS_OUT_A";
				case 67108864:
					return "RE_CW_LWL_V2_PASS_OUT_B";
				case 134217728:
					return "RE_CW_LWL_V2_AGGRO_MINOR_A";
				case 268435456:
					return "RE_CW_LWL_V2_AGGRO_MINOR_B";
				case 536870912:
					return "RE_CW_LWL_V2_AGGRO_MINOR_C";
				case 1073741824:
					return "RE_CW_LWL_V2_HOGTIE";
				default:
					break;
			}
			break;
	}
	return "INVALID DIALOGUE BIT";
}

char* func_531(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					return "0283_A_M_M_NbxSlums_01_WHITE_01";
				default:
					break;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_532(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			switch (iParam0)
			{
				case 8192:
					return 2;
			}
			break;
		case 4:
		case 5:
		case 6:
			switch (iParam0)
			{
				case 512:
					return 1;
				case 4096:
					return 3;
			}
			break;
	}
	return 0;
}

int func_540()
{
	switch (aggregate_func_4995())
	{
		case 0:
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					return 505459309;
				case 1:
					return 1962033744;
				case 2:
					return -1583551360;
				case 3:
					return 1331081117;
				case 4:
					return 903574438;
				case 5:
					return 856057291;
				case 6:
					return 259513172;
				default:
					break;
			}
			break;
		case 1:
			switch (aggregate_func_4995())
			{
				case 0:
					return -364070233;
				case 1:
					return 1628530735;
				case 2:
					return 530382704;
				case 3:
					return -649069078;
				default:
					break;
			}
			break;
	}
	return 856057291;
}

bool func_543(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = aggregate_func_8219(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_598()
{
	switch (aggregate_func_4995())
	{
		case 2:
			switch (aggregate_func_4995())
			{
				case 0:
					return -1497.818f, -556.8351f, 132.8748f;
				case 1:
					return -1757.976f, 270.188f, 119.49f;
				case 2:
					return -2767f, -157.757f, 151.381f;
				case 3:
					return -719.1843f, -747.2665f, 48.8984f;
				case 4:
					return 948.085f, -1257.209f, 53.973f;
				case 5:
					return 1092.027f, -1415.588f, 55.604f;
				case 6:
					return 1297.907f, -1595.661f, 63.79068f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_599(int iParam0, char* sParam1)
{
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0))
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
}

