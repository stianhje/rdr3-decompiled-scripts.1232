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

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.ambient_fishing_scenario.func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_21, 37, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_21), 37, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_58, 705, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_58[0 /*22*/]), 705, "m_clientData");
	aggregate.flow_controller.func_13(0);
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
	aggregate.nb_beggar.func_174(17921);
}

void func_36()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(7);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_37()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_27[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_21.f_27[iVar1]));
				aggregate.la_alligator.func_141(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = aggregate.nb_beggar.func_150(aggregate.annesburg.func_253(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		aggregate.nb_beggar.func_151(aggregate.annesburg.func_253(iVar0));
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

	bVar0 = aggregate.la_alligator.func_58();
	if (bVar0)
	{
		aggregate.blackwater.func_88(func_157());
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
			if (!PED::IS_PED_FLEEING(aggregate.la_alligator.func_212(iVar3)) && !aggregate.barcustomer_interaction.func_46(aggregate.la_alligator.func_212(iVar3), 242628503))
			{
				if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(iVar3), -1146898486, 1, 0))
				{
					TASK::TASK_WANDER_STANDARD(aggregate.la_alligator.func_212(iVar3), 40000f, 1);
				}
			}
			aggregate.nb_arrowhead_injury.func_142(iVar3);
			PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(iVar3), true);
			iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
	func_164(1);
}

void func_92()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			(Local_58[iVar1 /*22*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_93()
{
	aggregate.nb_beggar.func_174(25252);
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			aggregate.nb_animal_attack.func_201(0, 0, 0.001f, 0f, 0f, 10f, -1, 3);
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
			if (aggregate.nb_crashed_wagon.func_190(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (aggregate.fme_archery.func_268() == 2)
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
					aggregate.fm_deathmatch_controller.func_1034();
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
	if (aggregate.nb_animal_attack.func_161(33554432) && Local_21.f_7 != 5)
	{
		aggregate.fme_animal_tagging.func_389(5);
	}
	if (aggregate.nb_animal_attack.func_161(2048) && Local_21.f_7 < 4)
	{
		aggregate.fme_animal_tagging.func_389(4);
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
		if (ENTITY::DOES_ENTITY_EXIST(aggregate.nb_crashed_wagon.func_207(iVar1)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(aggregate.nb_crashed_wagon.func_207(iVar1), true))
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
	if (HUD::_0x2C729F2B94CEA911(sVar0))
	{
		HUD::_0xF66090013DE648D5(sVar0);
		if (!HUD::_0xD0976CC34002DB57(sVar0))
		{
			bVar1 = false;
		}
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(func_157()))
	{
		aggregate.blackwater.func_87(func_157());
		bVar1 = false;
	}
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		if (!aggregate.fme_archery.func_1103(func_215(iVar2)))
		{
			bVar1 = false;
		}
		iVar2++;
	}
	if (aggregate.fme_archery.func_268() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (!aggregate.fme_archery.func_1103(func_217(iVar3)))
			{
				bVar1 = false;
			}
			iVar3++;
		}
		if (!aggregate.nb_crashed_wagon.func_221(func_218(0), &(Local_763.f_18.f_53), &(Local_21.f_7.f_12), func_219(0), func_220(0)))
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
					func_229(&(Local_763.f_18.f_1[iVar0]));
					aggregate.fm_mission_controller.func_6275(func_215(0), func_159(0), func_230(), func_231(), Local_763.f_18.f_1[iVar0], func_232(), 1, 0, 0, 0, -1);
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
				aggregate.fm_deathmatch_controller.func_1460(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
			}
		}
		iVar0++;
	}
	if (aggregate.fme_archery.func_268() == 2)
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar1])))
			{
				(Local_763.f_18.f_9[iVar1 /*7*/])->f_1 = NETWORK::NET_TO_PED(&(Local_21.f_7.f_9[iVar1]));
				aggregate.fm_deathmatch_controller.func_2592(iVar1, (Local_763.f_18.f_9[iVar1 /*7*/])->f_1);
				aggregate.nb_crashed_wagon.func_237(iVar1);
			}
			iVar1++;
		}
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RECW_Area", true, false);
	AUDIO::_0x3743CE6948194349("AZ_RECW_Area", aggregate.fme_challenges.func_1469(), 0f);
	func_164(0);
}

void func_141()
{
	aggregate.nb_crashed_wagon.func_249();
	func_250();
	aggregate.fme_animal_tagging.func_389(Local_21.f_7);
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
	aggregate.blackwater.func_88(func_157());
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
	if (aggregate.fme_archery.func_268() == 2)
	{
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_21.f_7.f_9[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_21.f_7.f_9[iVar3])))
			{
				iVar4 = NETWORK::NET_TO_ENT(&(Local_21.f_7.f_9[iVar3]));
				aggregate.nb_arrowhead_injury.func_142(iVar3);
				PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(iVar3), true);
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
		func_270(aggregate.fme_challenges.func_1469(), 20f, 5);
	}
	else
	{
		aggregate.blackwater.func_58(aggregate.fme_challenges.func_1469(), 20f, 0, 0, 4);
	}
}

void func_182(var uParam0, var uParam1)
{
	aggregate.fme_condor_egg.func_809(uParam0, 0);
	aggregate.fme_condor_egg.func_811(uParam0, 0);
	aggregate.la_bear.func_289(uParam0, 1);
	aggregate.fme_condor_egg.func_810(uParam0, 1);
	aggregate.fme_condor_egg.func_519(uParam0, 1);
	aggregate.la_bear.func_287(uParam0, 1);
	aggregate.fme_condor_egg.func_518(uParam0, 1);
	aggregate.nb_crashed_wagon.func_283(uParam0, 1);
	func_284(uParam0, 1);
	aggregate.fme_condor_egg.func_812(uParam0, 1, 1, 1);
	aggregate.la_bear.func_212(uParam1);
	aggregate.la_bear.func_213(uParam1);
}

int func_192(int iParam0, var uParam1, bool bParam2)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!aggregate.fme_challenges.func_1263(Local_21.f_7.f_9[iParam0], func_217(iParam0), func_292(iParam0), func_293(iParam0), 1, 0, bParam2, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_194(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (aggregate.la_alligator.func_203(iVar2, 4))
		{
		}
		else if (!aggregate.la_alligator.func_204(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return false;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return false;
			}
			return true;
		}
	}
}

bool func_198()
{
	if (Local_21.f_7 == 6)
	{
		return true;
	}
	if (aggregate.nb_animal_attack.func_161(1073741824 /* Float: 2f */))
	{
		aggregate.fme_animal_tagging.func_389(6);
	}
	return false;
}

void func_201()
{
	if (aggregate.nb_animal_attack.func_161(536870912))
	{
		aggregate.fme_animal_tagging.func_389(1);
	}
}

void func_202()
{
	if (aggregate.la_alligator.func_184())
	{
		switch (aggregate.fme_archery.func_268())
		{
			case 0:
			case 1:
			case 2:
				aggregate.fme_animal_tagging.func_389(2);
				break;
			default:
				aggregate.fme_animal_tagging.func_389(2);
				break;
		}
	}
}

void func_203()
{
	if (aggregate.fme_archery.func_268() == 2)
	{
		if (aggregate.nb_animal_attack.func_161(8))
		{
			aggregate.fme_animal_tagging.func_389(4);
		}
		if (aggregate.nb_animal_attack.func_161(32))
		{
			aggregate.fme_animal_tagging.func_389(3);
		}
	}
}

void func_204()
{
	if (aggregate.nb_animal_attack.func_161(64) || aggregate.nb_animal_attack.func_161(128))
	{
		aggregate.fme_animal_tagging.func_389(4);
	}
	if (aggregate.nb_animal_attack.func_161(16))
	{
		if (!aggregate.barcustomer_interaction.func_42(&(Local_21.f_7.f_17)))
		{
			aggregate.barcustomer_interaction.func_25(&(Local_21.f_7.f_17), 0);
		}
		else if (aggregate.barcustomer_interaction.func_54(&(Local_21.f_7.f_17)) > 30000)
		{
			aggregate.fme_animal_tagging.func_389(4);
		}
	}
}

void func_205()
{
	if (aggregate.fme_supply_train.func_900() < 3)
	{
		aggregate.dynamic_craft_scenario.func_156(3);
	}
}

void func_206()
{
	if (aggregate.fme_supply_train.func_900() < 3)
	{
		aggregate.dynamic_craft_scenario.func_156(3);
	}
}

int func_215(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
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

bool func_223()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (MISC::IS_BIT_SET(Local_763.f_75.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate.la_alligator.func_212(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_763.f_75.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_763.f_75.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_763.f_75.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

int func_224(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	Local_763.f_18.f_1[iParam0] = OBJECT::CREATE_OBJECT(func_215(iParam0), func_159(iParam0), false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_763.f_18.f_1[iParam0])))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_226()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_228(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate.fm_mission_controller.func_6821(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam4, "chest_local_only", true);
	}
}

void func_229(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("empty"));
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_763.f_75.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
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
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_763.f_75.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
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
				aggregate.barcustomer_interaction.func_43(Local_763.f_75.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_58[iVar3 /*22*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_763.f_75.f_21[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_763.f_75.f_21[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_763.f_75.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_58[iVar3 /*22*/])->f_2.f_1), iVar0);
			}
		}
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (aggregate.benedictpoint.func_17(iVar7))
						{
							if (!aggregate.la_alligator.func_204(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate.la_alligator.func_225(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate.la_alligator.func_203(iVar7, 8))
			{
				if (!aggregate.benedictpoint.func_17(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_763.f_75.f_20 != 0)
	{
		if (!aggregate.la_alligator.func_226(1, -1))
		{
			aggregate.la_alligator.func_227(1);
		}
	}
	else if (aggregate.la_alligator.func_226(1, -1))
	{
		aggregate.la_alligator.func_227(1);
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
		iVar8 = aggregate.annesburg.func_253(iVar1);
		if (!aggregate.la_bear.func_247(iVar8))
		{
		}
		else if (aggregate.la_bear.func_248(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				aggregate.aberdeenpigfarm.func_154(iVar8);
				if (aggregate.la_bear.func_250(iVar8))
				{
					if (aggregate.la_bear.func_251(iVar8))
					{
						if (!aggregate.la_bear.func_252(iVar8))
						{
							aggregate.la_bear.func_253(iVar8);
						}
					}
					if (aggregate.la_bear.func_254(iVar8))
					{
						aggregate.la_bear.func_255(iVar8);
					}
				}
				else
				{
					if (aggregate.la_bear.func_247(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate.la_bear.func_257(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (aggregate.angryisolationist.func_40(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (aggregate.la_bear.func_259(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate.fme_condor_egg.func_1292(vVar5.x, vVar5.y, &(Local_763.f_101), &iVar4, 0, vVar5.z))
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
													if (vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_763.f_101))))
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
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_763.f_101))))
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
								aggregate.la_bear.func_263(iVar8, 1);
								Jump @760; //curOff = 672
								if (aggregate.la_bear.func_264(&vVar5, iVar8))
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
								if (aggregate.la_bear.func_250(iVar8))
								{
									if (!aggregate.la_bear.func_259(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!aggregate.benedictpoint.func_17(iVar8))
											{
											}
											else
											{
												aggregate.aberdeenpigfarm.func_154(iVar8);
												aggregate.la_bear.func_269(iVar8);
												Jump @1005; //curOff = 814
												if (aggregate.la_bear.func_270(iVar8))
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
															if (aggregate.la_bear.func_271(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!aggregate.la_bear.func_272(iVar8, iVar10))
																{
																	if (aggregate.la_bear.func_257(iVar8, iVar0))
																	{
																		if (!aggregate.la_bear.func_273(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			aggregate.la_bear.func_274(iVar8, iVar10);
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
	if (!aggregate.fm_mission_controller.func_4946(iVar1))
	{
		return;
	}
	func_370();
	if (aggregate.nb_beggar.func_241())
	{
		if (aggregate.nb_beggar.func_308(2, -1) || aggregate.nb_beggar.func_308(1, -1))
		{
			aggregate.la_alligator.func_227(1);
			aggregate.la_alligator.func_227(2);
			aggregate.nb_animal_attack.func_101(2);
			aggregate.nb_animal_attack.func_101(1);
		}
	}
	else
	{
		bVar2 = false;
		if (aggregate.nb_beggar.func_311() || aggregate.nb_beggar.func_312())
		{
			bVar2 = true;
			if (aggregate.nb_beggar.func_312() || (!aggregate.nb_animal_attack.func_161(8) && !aggregate.nb_beggar.func_308(4, iVar1)))
			{
				aggregate.bigvalleyomj.func_36(Local_763.f_198, Local_21.f_34);
				Local_763.f_198 = Local_21.f_34;
				iVar3 = 0;
				while (iVar3 < 1)
				{
					func_378(aggregate.annesburg.func_253(iVar3), Local_21.f_34);
					iVar3++;
				}
				if (aggregate.nb_beggar.func_316())
				{
					aggregate.nb_beggar.func_317(Local_763.f_198.f_3.f_1);
				}
				bVar0 = true;
				if (aggregate.nb_beggar.func_311())
				{
					aggregate.la_alligator.func_227(4);
				}
				else
				{
					aggregate.la_alligator.func_227(4);
				}
			}
			else if (!aggregate.nb_animal_attack.func_161(8))
			{
				if (!aggregate.nb_animal_attack.func_161(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate.nb_animal_attack.func_101(8);
				}
			}
			else if (aggregate.nb_animal_attack.func_161(4))
			{
				if (aggregate.nb_beggar.func_308(4, iVar1))
				{
					aggregate.la_alligator.func_227(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate.nb_animal_attack.func_101(4);
				aggregate.nb_animal_attack.func_101(8);
			}
		}
		else if (aggregate.nb_beggar.func_308(4, iVar1))
		{
			aggregate.la_alligator.func_227(4);
		}
		if (!aggregate.nb_animal_attack.func_161(1))
		{
			if (aggregate.nb_animal_attack.func_161(1))
			{
				aggregate.nb_animal_attack.func_101(1);
			}
			if (aggregate.nb_beggar.func_316())
			{
				iVar4 = Local_763.f_198.f_3.f_1;
				if (aggregate.nb_beggar.func_319(iVar4))
				{
					if (bVar0)
					{
						aggregate.nb_beggar.func_317(iVar4);
					}
					if (aggregate.aberdeenpigfarm.func_175((Local_763.f_198.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!aggregate.annesburg.func_217(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || aggregate.aberdeenpigfarm.func_175(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (aggregate.doc_book.func_70(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate.binoculars.func_37(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								aggregate.aberdeenpigfarm.func_163(&(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!aggregate.aberdeenpigfarm.func_175(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (aggregate.aberdeenpigfarm.func_175(((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (aggregate.fme_animal_tagging.func_1524() < ((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (aggregate.doc_book.func_70(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											aggregate.binoculars.func_37(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!aggregate.doc_book.func_70(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										aggregate.binoculars.func_37(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!aggregate.doc_book.func_70(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate.binoculars.func_37(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (aggregate.camera_item.func_31(&((Local_763.f_198.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!aggregate.la_bear.func_262(iVar4, iVar5, Local_763.f_198))
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
									aggregate.la_alligator.func_227(1);
									aggregate.la_alligator.func_227(2);
									aggregate.nb_animal_attack.func_101(2);
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
			if (!aggregate.nb_animal_attack.func_161(2))
			{
				if (!aggregate.nb_animal_attack.func_161(1))
				{
					aggregate.nb_animal_attack.func_101(1);
					aggregate.nb_animal_attack.func_101(2);
				}
			}
			if (!aggregate.nb_beggar.func_308(2, -1))
			{
				if (aggregate.nb_animal_attack.func_161(2))
				{
					func_388(Local_763.f_198.f_8, Local_763.f_198.f_9);
					aggregate.la_alligator.func_227(2);
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
		if (!aggregate.nb_animal_attack.func_161(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) < 50f)
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_763.f_18.f_1[iVar0])))
					{
						ENTITY::SET_ENTITY_ROTATION(&(Local_763.f_18.f_1[iVar0]), func_234(iVar0), 2, false);
						aggregate.fm_deathmatch_controller.func_1460(&(Local_763.f_18.f_1[iVar0]), ENTITY::GET_ENTITY_COORDS(&(Local_763.f_18.f_1[iVar0]), true, false));
					}
					iVar0++;
				}
				aggregate.nb_animal_attack.func_101(2);
			}
		}
		Local_763.f_18.f_54 = 0;
	}
	else
	{
		Local_763.f_18.f_54++;
	}
	if (!aggregate.nb_crashed_wagon.func_392(1024, 255))
	{
		if (func_393(func_232()))
		{
			aggregate.nb_animal_attack.func_101(8);
			aggregate.la_alligator.func_227(1024);
		}
	}
	if (Local_763.f_18 < 4)
	{
		func_395();
	}
}

void func_252()
{
	if (aggregate.fme_archery.func_268() == 2 && !aggregate.la_alligator.func_203(0, 1073741824 /* Float: 2f */))
	{
		func_397();
	}
	else
	{
		aggregate.la_alligator.func_227(536870912);
	}
}

void func_253()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) < 50f)
	{
		if (!aggregate.nb_animal_attack.func_161(256))
		{
			aggregate.la_alligator.func_227(256);
		}
		else
		{
			aggregate.nb_animal_attack.func_358();
		}
	}
}

void func_254()
{
	aggregate.nb_animal_attack.func_446();
	if (aggregate.fme_archery.func_268() == 2)
	{
		func_400();
		func_401(0, 0);
		if (!aggregate.nb_animal_attack.func_161(4))
		{
			func_402(1);
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.la_alligator.func_212(0), func_222()) && ANIMSCENE::_0x1F0E401031E20146(func_222(), func_220(1)))
			{
				aggregate.la_alligator.func_227(4);
			}
		}
		else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.la_alligator.func_212(0), func_222()))
		{
			aggregate.la_alligator.func_227(8);
		}
		if (aggregate.fme_archery.func_268() == 2 && !aggregate.nb_animal_attack.func_161(32))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), true, false)) <= 10f)
			{
				aggregate.la_alligator.func_227(32);
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) > (50f * 2f))
	{
		aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
	}
}

void func_255()
{
	if (aggregate.fme_supply_train.func_900() < 1)
	{
		if (aggregate.nb_animal_attack.func_161(134217728))
		{
			aggregate.dynamic_craft_scenario.func_156(1);
		}
	}
	else if (aggregate.fme_supply_train.func_900() < 2)
	{
		if (aggregate.nb_animal_attack.func_161(268435456))
		{
			aggregate.dynamic_craft_scenario.func_156(2);
		}
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.la_alligator.func_212(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate.la_alligator.func_212(0));
		}
	}
	else
	{
		if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(0), -875674219, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(aggregate.la_alligator.func_212(0), func_403(0, 1148846080 /* Float: 1000f */), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			aggregate.la_alligator.func_227(16);
		}
		if (aggregate.nb_animal_attack.func_161(16))
		{
			aggregate.nb_arrowhead_injury.func_142(0);
			if (!aggregate.nb_animal_attack.func_161(131072))
			{
				aggregate.fm_mission_controller.func_2301(1, 0, 0);
				if (PED::IS_PED_FACING_PED(aggregate.la_alligator.func_212(0), Global_35, 10f))
				{
					func_406(131072);
				}
			}
			if (aggregate.nb_animal_attack.func_161(131072))
			{
				if (!aggregate.nb_crashed_wagon.func_392(134217728, 255))
				{
					aggregate.la_alligator.func_227(134217728);
				}
				else if (!aggregate.nb_crashed_wagon.func_392(268435456, 255) && !AUDIO::IS_ANY_SPEECH_PLAYING(aggregate.la_alligator.func_212(0)))
				{
					aggregate.la_alligator.func_227(268435456);
				}
			}
		}
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) > (50f * 2f))
	{
		aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
	}
}

void func_256()
{
	func_395();
	if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(0), 242628503, 1, 0))
	{
		if (!aggregate.nb_animal_attack.func_161(512))
		{
			TASK::OPEN_SEQUENCE_TASK(&((Local_763.f_18.f_9[0 /*7*/])->f_2));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_407(), 1f, -1, 0.25f, true, 40000f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_763.f_18.f_9[0 /*7*/])->f_2), 0, 0, 1, 1);
			aggregate.la_alligator.func_227(512);
		}
	}
	else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.la_alligator.func_212(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate.la_alligator.func_212(0));
		}
	}
	if (aggregate.nb_crashed_wagon.func_392(64, 255))
	{
		if (!aggregate.nb_animal_attack.func_161(4096))
		{
			func_406(4096);
		}
	}
	else if (aggregate.nb_crashed_wagon.func_392(128, 255))
	{
		if (!aggregate.nb_animal_attack.func_161(8192))
		{
			func_406(8192);
		}
	}
	else if (aggregate.nb_animal_attack.func_161(2048))
	{
		if (!aggregate.nb_animal_attack.func_161(16384))
		{
			func_406(16384);
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(32))
	{
		func_406(32);
	}
	func_409();
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) > (50f * 2f))
	{
		aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
	}
}

void func_257()
{
	func_410();
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.la_alligator.func_212(0), func_222()))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_222()))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(func_222(), "male", aggregate.la_alligator.func_212(0));
		}
	}
	else
	{
		if (!aggregate.nb_crashed_wagon.func_392(67108864, 255))
		{
			if (aggregate.nb_animal_attack.func_161(4))
			{
				if (!aggregate.nb_animal_attack.func_161(256))
				{
					func_411(0, 256, 0, -417894478);
				}
				else
				{
					aggregate.la_alligator.func_227(67108864);
				}
			}
			else if (!aggregate.nb_animal_attack.func_161(65536))
			{
				func_411(0, 65536, 0, -417894478);
			}
			else
			{
				aggregate.la_alligator.func_227(67108864);
			}
		}
		if (!PED::IS_PED_FLEEING(aggregate.la_alligator.func_212(0)))
		{
			if (Local_21.f_7.f_13 == 0)
			{
				if (aggregate.nb_crashed_wagon.func_392(33554432, 255))
				{
					Local_21.f_7.f_13 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
				}
			}
			else if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(0), 518218985, 1, 0))
			{
				TASK::_TASK_FLEE_FROM_PED(aggregate.la_alligator.func_212(0), Local_21.f_7.f_13, 0f, 0f, 0f, 100f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
	}
}

void func_270(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { aggregate.blackwater.func_125(vVar0, vVar3, 0f) };
	vVar9 = { aggregate.blackwater.func_126(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_284(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 128);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 128);
	}
}

Vector3 func_292(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
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
					return aggregate.fme_challenges.func_1469();
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_293(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.annesburg.func_253(uParam2))
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
	switch (aggregate.fme_archery.func_268())
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
		aggregate.la_bear.func_309(iVar0);
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
		aggregate.nb_beggar.func_360(aggregate.annesburg.func_253(iVar0));
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
			aggregate.la_bear.func_310(aggregate.annesburg.func_253(iVar0), iParam0);
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
		iVar4 = aggregate.annesburg.func_253(iVar0);
		if (!aggregate.la_bear.func_247(iVar4))
		{
		}
		else if (!aggregate.la_bear.func_259(iVar4, iVar5))
		{
			if (aggregate.la_bear.func_248(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate.la_bear.func_269(iVar4);
					aggregate.aberdeenpigfarm.func_154(iVar4);
				}
			}
		}
		iVar0++;
	}
}

bool func_356(int iParam0, int iParam1, int iParam2)
{
	aggregate.la_alligator.func_227(33554432);
	switch (iParam1)
	{
		case 8:
			if (!aggregate.nb_animal_attack.func_161(4))
			{
				aggregate.nb_animal_attack.func_101(4);
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

	iVar0 = aggregate.nb_beggar.func_406(0, 0);
	if (iVar0 != Local_763.f_198.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_763.f_198.f_3.f_1);
				aggregate.nb_beggar.func_151(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < aggregate.annesburg.func_253(1))
				{
					if (iVar1 == aggregate.nb_beggar.func_150(iVar2))
					{
						Local_763.f_198.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_763.f_198.f_3.f_1);
				aggregate.nb_beggar.func_317(Local_763.f_198.f_3.f_1);
			}
		}
		else
		{
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_763.f_198.f_3.f_1);
				aggregate.nb_beggar.func_151(Local_763.f_198.f_3.f_1);
			}
			Local_763.f_198.f_3 = iVar0;
			Local_763.f_198.f_3.f_1 = -1;
		}
	}
}

void func_378(int iParam0, var uParam1)
{
	switch (aggregate.annesburg.func_253(uParam1))
	{
		case 0:
			func_493(iParam0, 0);
			break;
		case 1:
			func_494(iParam0, 7f);
			func_495(iParam0, 0, "GREET_ACC", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
			func_495(iParam0, 1, "INTERACT_DECLINE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			aggregate.dynamic_craft_scenario.func_156(2);
			break;
		case 2:
			func_493(iParam0, 1);
			func_496(iParam0, 0, 1, 1);
			func_496(iParam0, 1, 1, 1);
			if (aggregate.nb_animal_attack.func_161(64) || aggregate.nb_animal_attack.func_161(128))
			{
				aggregate.dynamic_craft_scenario.func_156(3);
			}
			break;
		case 3:
			func_493(iParam0, 0);
			func_497(iParam0, 0);
			func_497(iParam0, 1);
			break;
	}
}

void func_388(int iParam0, int iParam1)
{
	func_505(0, 1);
	switch (aggregate.annesburg.func_253(aggregate.fme_animal_tagging.func_505()))
	{
		case 2:
			if (aggregate.fm_deathmatch_controller.func_962() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						aggregate.la_alligator.func_227(64);
						break;
					case 1:
						aggregate.la_alligator.func_227(128);
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate.nb_animal_attack.func_101(2);
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

	if (!aggregate.nb_animal_attack.func_161(2048))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), aggregate.fme_challenges.func_1469()) < 15f)
		{
			if (aggregate.nb_animal_attack.func_161(8))
			{
				aggregate.la_alligator.func_227(2048);
			}
			else if (aggregate.mp_intro.func_1324(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 6)
				{
					if (func_510(Global_35) == MISC::_0xEE04C0AFD4EFAF0E(&(Local_763.f_18.f_1[iVar0])))
					{
						aggregate.la_alligator.func_227(2048);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_397()
{
	if (!aggregate.nb_animal_attack.func_161(2))
	{
		func_511();
	}
	else if (!aggregate.la_alligator.func_203(0, 1073741824 /* Float: 2f */))
	{
		PED::_0x406CCF555B04FAD3(aggregate.la_alligator.func_212(0), 1, 1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(aggregate.la_alligator.func_212(0), true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(aggregate.la_alligator.func_212(0), true, true);
		func_512(0);
		aggregate.la_alligator.func_225(0, 1073741824 /* Float: 2f */);
	}
}

void func_400()
{
	if (aggregate.fme_archery.func_268() == 2)
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(aggregate.la_alligator.func_212(0)))
		{
			if (!aggregate.nb_animal_attack.func_161(1))
			{
				func_406(1);
			}
			if (aggregate.barcustomer_interaction.func_54(&((Local_763.f_18.f_9[0 /*7*/])->f_4)) >= 1000)
			{
				aggregate.la_alligator.func_225(0, 2);
			}
		}
		else if (!aggregate.la_alligator.func_203(0, 2))
		{
			aggregate.nb_animal_attack.func_589(1891783641, aggregate.la_alligator.func_212(0), 1);
			aggregate.la_alligator.func_225(0, 2);
			aggregate.barcustomer_interaction.func_43(&((Local_763.f_18.f_9[0 /*7*/])->f_4));
		}
	}
}

void func_401(int iParam0, int iParam1)
{
	char* sVar0;

	if (!aggregate.nb_crashed_wagon.func_522(255) || aggregate.dynamic_craft_scenario.func_370((Local_763.f_18.f_9[iParam0 /*7*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		aggregate.nb_arrowhead_injury.func_142(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_763.f_18.f_9[iParam0 /*7*/])))
	{
		Local_763.f_18.f_9[iParam0 /*7*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate.la_alligator.func_212(iParam0));
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

	if (aggregate.nb_animal_attack.func_161(iParam0))
	{
		return;
	}
	uVar0 = aggregate.dynamic_craft_scenario.func_297(ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	iVar1 = 1;
	Var2 = { aggregate.nb_animal_attack.func_497(1) };
	Var2.f_11 = iParam0;
	aggregate.nb_animal_attack.func_613(&Var2, uVar0);
}

Vector3 func_407()
{
	switch (aggregate.fme_archery.func_268())
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
		if (!aggregate.barcustomer_interaction.func_42(&(Local_21.f_7.f_14)))
		{
			aggregate.barcustomer_interaction.func_25(&(Local_21.f_7.f_14), 0);
		}
		else if (aggregate.barcustomer_interaction.func_54(&(Local_21.f_7.f_14)) > 10000)
		{
			if (!aggregate.nb_animal_attack.func_161(32768))
			{
				func_406(32768);
			}
			else if (!aggregate.nb_animal_attack.func_161(262144))
			{
				func_406(262144);
			}
			else if (!aggregate.nb_animal_attack.func_161(524288))
			{
				func_406(524288);
			}
			else if (!aggregate.nb_animal_attack.func_161(1048576))
			{
				func_406(1048576);
			}
		}
	}
}

void func_410()
{
	if (aggregate.fme_archery.func_268() == 2)
	{
		if (!aggregate.nb_animal_attack.func_161(4096))
		{
			if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
			{
				if (ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(0)))
				{
					if (aggregate.nb_arrowhead_injury.func_248(aggregate.la_alligator.func_212(0), PLAYER::PLAYER_PED_ID()))
					{
						aggregate.fme_challenges.func_1108(151445061, 1, 0);
					}
					aggregate.la_alligator.func_227(4096);
				}
			}
		}
	}
}

int func_411(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!aggregate.barcustomer_interaction.func_12(aggregate.la_alligator.func_212(iParam0), 0))
	{
		return 0;
	}
	else if (aggregate.nb_animal_attack.func_161(iParam1))
	{
		return 0;
	}
	if ((iParam1 == 131072 || iParam1 == 256) || iParam1 == 65536)
	{
		bParam2 = true;
	}
	if (!bParam2)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(aggregate.la_alligator.func_212(iParam0)))
		{
			return 0;
		}
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING(aggregate.la_alligator.func_212(iParam0)))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(aggregate.la_alligator.func_212(iParam0), 0);
	}
	if (aggregate.fme_condor_egg.func_1100(aggregate.la_alligator.func_212(iParam0), func_530(aggregate.fme_archery.func_268(), iParam1), iParam3, 0, 0, func_531(iParam0), func_532(iParam1), 1))
	{
		aggregate.nb_animal_attack.func_101(iParam1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (aggregate.barcustomer_interaction.func_54(&(Local_21.f_7.f_14)) > 10000)
			{
				aggregate.barcustomer_interaction.func_50(&(Local_21.f_7.f_14));
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
	aggregate.bigvalleyomj.func_36(uParam0, uParam0->f_1);
}

int func_438(int iParam0)
{
	if (aggregate.nb_beggar.func_241())
	{
		return 0;
	}
	if (aggregate.nb_beggar.func_311())
	{
		return 0;
	}
	Local_21.f_34 = iParam0;
	aggregate.aberdeenpigfarm.func_106(&(Local_21.f_34.f_2), 4);
	return 1;
}

void func_439()
{
	if (!aggregate.nb_animal_attack.func_161(8))
	{
		aggregate.doc_book.func_118(func_540(), 0);
		aggregate.nb_animal_attack.func_101(8);
	}
}

void func_493(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!aggregate.aberdeenpigfarm.func_175((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 4))
		{
			aggregate.aberdeenpigfarm.func_106(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), 4);
		}
	}
	else if (aggregate.aberdeenpigfarm.func_175((Local_763.f_198.f_10[iParam0 /*29*/])->f_3, 4))
	{
		aggregate.aberdeenpigfarm.func_163(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_3), 4);
	}
}

void func_494(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_763.f_198.f_10[iParam0 /*29*/] = fParam1;
	}
}

void func_495(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = sParam2;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = iParam3;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = iParam4;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = iParam5;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = iParam6;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = iParam7;
	((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = iParam8;
	if (aggregate.nb_beggar.func_425(iParam0))
	{
		aggregate.nb_beggar.func_409(iParam0, iParam1, 1);
	}
}

void func_496(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_0x375F5870A7B8BEC1(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		aggregate.aberdeenpigfarm.func_106(&(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(&(((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	if (bParam3 && aggregate.nb_beggar.func_425(iParam0))
	{
		aggregate.binoculars.func_37(&((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), bParam2, 1, 1);
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
	if (aggregate.nb_beggar.func_425(iParam0))
	{
		aggregate.annesburg.func_218((Local_763.f_198.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
}

void func_505(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = aggregate.annesburg.func_253(iVar0);
		func_496(iVar1, 0, bParam0, bParam1);
		func_496(iVar1, 1, bParam0, bParam1);
		func_496(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fme_condor_egg.func_555(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = aggregate.fme_condor_egg.func_555(iParam0, 5);
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
		if (!ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)) || ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(0)))
		{
			return;
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, func_598(), 0f, 0f, 0f, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, "male", aggregate.la_alligator.func_212(0), 0);
		func_599(iVar0, func_218(0));
		aggregate.la_alligator.func_227(2);
	}
}

void func_512(int iParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_531(iParam0);
	iVar1 = aggregate.la_alligator.func_212(iParam0);
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
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
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
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 2:
			switch (aggregate.fme_archery.func_268())
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
			switch (aggregate.fme_archery.func_268())
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
	*uParam1 = aggregate.nb_crashed_wagon.func_207(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_598()
{
	switch (aggregate.fme_archery.func_268())
	{
		case 2:
			switch (aggregate.fme_archery.func_268())
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

