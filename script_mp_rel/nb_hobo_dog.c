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
	var uLocal_22 = 3;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1;
	var uLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	vector3 vLocal_35[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<175> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_307 = 1;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	var uLocal_322 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.aberdeenpigfarm.func_23();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 22, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 22, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_35, 97, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(vLocal_35[0 /*3*/]), 97, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	aggregate.la_bear.func_208(&(Local_132.f_18.f_18));
	aggregate.la_bear.func_287(&(Local_132.f_18.f_18), 0);
	aggregate.la_bear.func_211(&(Local_132.f_18.f_18), 1);
	func_90();
	PED::ADD_RELATIONSHIP_GROUP("relGroupHoboDog", &(Local_132.f_18.f_155));
}

void func_35()
{
	int iVar0;

	if (func_91() == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_13.f_7.f_12 = iVar0;
	}
}

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate.la_alligator.func_58();
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_132.f_18.f_2[iVar3 /*4*/])->f_1))
		{
			aggregate.nb_arrowhead_injury.func_142(iVar3);
			if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_2[iVar3])))
			{
				iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar3]));
				if (PED::IS_PED_FLEEING((Local_132.f_18.f_2[iVar3 /*4*/])->f_1) || PED::IS_PED_IN_COMBAT((Local_132.f_18.f_2[iVar3 /*4*/])->f_1, 0))
				{
					PED::SET_PED_KEEP_TASK((Local_132.f_18.f_2[iVar3 /*4*/])->f_1, true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		if (iVar4 == 0 && !func_149(aggregate.la_alligator.func_212(0)))
		{
			_NAMESPACE49::_0x9D16896F0DBE78A2(func_150(0), 2f);
		}
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar4]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_9[iVar4])))
		{
			iVar2 = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_9[iVar4]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar4++;
	}
}

void func_90()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			aggregate.nb_animal_attack.func_201(0, 0, -45.1f, -20.94f, 4.34f, 2f, 260, 1);
			break;
		default:
			aggregate.nb_animal_attack.func_201(0, 0, -45.1f, -20.94f, 4.34f, 2f, 260, 1);
			break;
	}
}

int func_91()
{
	if (Local_13.f_7.f_11 > -1)
	{
		return Local_13.f_7.f_11;
	}
	return aggregate.fme_supply_train.func_900();
}

bool func_106()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (func_182(iVar2, aggregate.fme_supply_train.func_900()) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar2])))
		{
			if (func_183(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 <= 0)
			{
				if (func_184(iVar3, aggregate.fme_supply_train.func_900()) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar3])))
				{
					if (aggregate.nb_crashed_wagon.func_190(iVar3, &bVar1) || bVar1)
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
}

void func_108()
{
	Local_13.f_7.f_11 = aggregate.fme_supply_train.func_900();
}

bool func_112()
{
	if (func_189())
	{
		return true;
	}
	func_190();
	switch (Local_13.f_7)
	{
		case 0:
			func_191();
			break;
		case 1:
			func_192();
			break;
		case 2:
			func_193();
			break;
		case 3:
			func_194();
			break;
		case 4:
			func_195();
			break;
		case 7:
			func_196();
			break;
		case 5:
			func_197();
			break;
	}
	return false;
}

bool func_114()
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || aggregate.doc_book.func_239(iVar0, 518218985)) || aggregate.nb_animal_attack.func_161(4))
	{
		return true;
	}
	return false;
}

bool func_120()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = "HDOG";
	switch (Local_132.f_18)
	{
		case 0:
			if (HUD::_0x2C729F2B94CEA911(sVar0))
			{
				HUD::_0xF66090013DE648D5(sVar0);
				if (HUD::_0xD0976CC34002DB57(sVar0))
				{
					Local_132.f_18 = 1;
				}
			}
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (aggregate.fme_archery.func_1103(func_206(iVar2)))
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 0;
				}
				iVar2++;
			}
			if (aggregate.fme_archery.func_1103(func_208(0)))
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 0;
			}
			if (iVar1 == 1)
			{
				Local_132.f_18 = 2;
			}
			break;
		case 2:
			iVar3 = 0;
			while (iVar3 <= 0)
			{
				STREAMING::REQUEST_ANIM_DICT(func_209(iVar3));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_209(iVar3)))
				{
					return false;
				}
				if (func_91() != 0)
				{
					return true;
				}
				STREAMING::REQUEST_ANIM_DICT("script_re@savage_aftermath@weeping_dog");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("script_re@savage_aftermath@weeping_dog"))
				{
					return false;
				}
				STREAMING::REQUEST_ANIM_DICT("amb_creature_mammal@world_dog_resting@stand_enter");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("amb_creature_mammal@world_dog_resting@stand_enter"))
				{
					return false;
				}
				STREAMING::REQUEST_ANIM_DICT("amb_creature_mammal@world_dog_resting@trans");
				if (!STREAMING::HAS_ANIM_DICT_LOADED("amb_creature_mammal@world_dog_resting@trans"))
				{
					return false;
				}
				return true;
				iVar3++;
			}
			break;
		case 3:
			break;
	}
	return false;
}

void func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])))
		{
			(Local_132.f_18.f_2[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar0]));
			iVar1 = aggregate.la_alligator.func_212(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, Local_132.f_18.f_155);
						break;
					case 1:
						aggregate.nb_crashed_wagon.func_237(1);
						PED::_0x6569F31A01B4C097(iVar1, 4, false);
						ENTITY::_0x8C03CD6B5E0E85E8(iVar1, 2102333076);
						aggregate.butchercreek.func_92(iVar1, 1, 1);
						break;
					case 2:
						aggregate.nb_crashed_wagon.func_237(2);
						aggregate.fm_mission_controller.func_6958(iVar1, -1101297303, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
						PED::_0x7DE9692C6F64CFE8(iVar1, true, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1, 1269650476);
						PED::SET_PED_CONFIG_FLAG(iVar1, 467, true);
						aggregate.fme_escaped_convicts.func_1516(&(Local_132.f_18.f_53), iVar1, func_215(2), 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, Local_132.f_18.f_155);
						ENTITY::_0x8C03CD6B5E0E85E8(iVar1, 2102333076);
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (func_184(iVar2, aggregate.fme_supply_train.func_900()))
		{
			(Local_132.f_18.f_15[iVar2 /*2*/])->f_1 = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_9[iVar2]));
			iVar3 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_9[iVar2]));
			switch (iVar2)
			{
				case 0:
					if (func_149(iVar3))
					{
						func_217(OBJECT::_0x250EBB11E81A10BE(iVar3));
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, false);
						ENTITY::SET_ENTITY_HEADING(iVar3, func_218(0));
					}
					_NAMESPACE49::_0x9D16896F0DBE78A2(func_150(0), 2f);
					aggregate.fm_mission_controller.func_6275(func_208(0), func_150(0), -0.075f, 0f, 0.05f, 90f, 90f, 0f, &((Local_132.f_18.f_15[iVar2 /*2*/])->f_1), 1465762285 /* GXTEntry: "Absinthe" */, 1, 0, 0, 0, -1);
					break;
			}
		}
		iVar2++;
	}
}

void func_135()
{
	func_226();
	func_227(Local_13.f_7);
	func_228();
	switch (Local_132.f_18.f_1)
	{
		case 0:
			func_229();
			break;
		case 1:
			func_230();
			break;
		case 2:
			func_231();
			break;
		case 3:
			func_232();
			break;
		case 4:
			func_233();
			break;
		case 7:
			func_234();
			break;
		case 5:
			func_235();
			break;
	}
}

bool func_138()
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(0);
	if (aggregate.fme_supply_train.func_928(iVar0, 518218985, 1, 0) && !aggregate.nb_animal_attack.func_161(4))
	{
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
	return true;
}

bool func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

Vector3 func_150(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_supply_train.func_900();
	switch (iVar0)
	{
		case 0:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2655.889f, 426.5762f, 86.09268f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1466.28f, -1722.796f, 61.22633f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2456.187f, -871.741f, 40.64661f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2892.756f, 1513.459f, 63.6287f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1243.229f, 523.0437f, 87.8446f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 56.05267f, 1122.284f, 183.8764f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -477.1373f, -247.0886f, 60.28728f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1531.419f, 440.9065f, 105.2912f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1548.247f, -788.1805f, 107.1712f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1283.136f, -1967.281f, 45.63014f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -2601.44f, -2344.027f, 70.08153f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3200.852f, -3209.044f, -10.17803f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -3746.361f, -2859.919f, -15.15007f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -4616.859f, -3670.302f, 12.47568f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -5213.531f, -2974.73f, 9.11798f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_182(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1;
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return true;
				case 1:
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return true;
				case 1:
					return true;
				case 2:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_183(int iParam0, var uParam1)
{
	bool bVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	bVar0 = iParam0 == false;
	if (!aggregate.fme_challenges.func_1263(Local_13.f_7.f_2[iParam0], func_206(iParam0), func_248(iParam0), func_249(iParam0), 1, 0, bVar0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_184(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	switch (iVar0)
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_189()
{
	int iVar0;

	if (Local_13.f_7 == 6)
	{
		return true;
	}
	iVar0 = aggregate.la_alligator.func_212(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (func_91() == 2 && Local_13.f_7 < 2)
	{
		if (aggregate.nb_hobo_dog.func_252())
		{
			if (func_253(func_208(0), func_150(0), &((Local_132.f_18.f_15[0 /*2*/])->f_1), 0, 0, 0, 0))
			{
				aggregate.nb_animal_attack.func_358();
				aggregate.nb_animal_attack.func_446();
				return true;
			}
		}
	}
	if (func_91() != 2 && Local_13.f_7 < 2)
	{
		if (func_256(Global_35, aggregate.la_alligator.func_212(1)))
		{
			aggregate.nb_animal_attack.func_358();
			aggregate.nb_animal_attack.func_446();
			return true;
		}
		else if (ENTITY::_0x8DE41E9902E85756(aggregate.la_alligator.func_212(1)))
		{
			aggregate.nb_animal_attack.func_358();
			aggregate.nb_animal_attack.func_446();
			return true;
		}
	}
	return false;
}

void func_190()
{
	if (aggregate.nb_animal_attack.func_565())
	{
		aggregate.fme_animal_tagging.func_389(5);
	}
}

void func_191()
{
	if (aggregate.la_alligator.func_184())
	{
		aggregate.barcustomer_interaction.func_25(&(Local_13.f_7.f_6), 0);
		aggregate.fme_animal_tagging.func_389(1);
	}
}

void func_192()
{
	if (aggregate.nb_animal_attack.func_161(8))
	{
		aggregate.fme_animal_tagging.func_389(2);
	}
	else if (aggregate.nb_animal_attack.func_161(32))
	{
		aggregate.fme_animal_tagging.func_389(7);
	}
}

void func_193()
{
	if (aggregate.nb_animal_attack.func_161(64))
	{
		aggregate.fme_animal_tagging.func_389(3);
	}
	else if (aggregate.nb_animal_attack.func_161(16))
	{
		aggregate.fme_animal_tagging.func_389(4);
	}
}

void func_194()
{
	if (!aggregate.nb_animal_attack.func_161(64))
	{
		aggregate.fme_animal_tagging.func_389(2);
	}
}

void func_195()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(1);
	switch (func_91())
	{
		case 0:
		case 1:
			if (aggregate.nb_animal_attack.func_161(4) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 7.5f)
			{
				aggregate.fme_animal_tagging.func_389(6);
			}
			break;
		case 2:
			if (aggregate.nb_animal_attack.func_161(4))
			{
				aggregate.fme_animal_tagging.func_389(6);
			}
			break;
	}
}

void func_196()
{
	if (aggregate.nb_animal_attack.func_161(32))
	{
		aggregate.fme_animal_tagging.func_389(6);
	}
}

void func_197()
{
	if (aggregate.nb_animal_attack.func_161(256))
	{
		aggregate.fme_animal_tagging.func_389(6);
	}
}

int func_206(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return joaat("a_c_dogstreet_01");
		case 1:
			if (Local_13.f_7.f_13 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				switch (iVar0)
				{
					case 1:
						Local_13.f_7.f_13 = -2105110696;
						break;
					case 2:
						Local_13.f_7.f_13 = 937367983;
						break;
					default:
						Local_13.f_7.f_13 = -2105110696;
						break;
				}
			}
			return Local_13.f_7.f_13;
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					return 1075605185;
				case 1:
					return 1075605185;
				case 2:
					return 641402963;
				default:
					break;
			}
			return 1075605185;
			return 0;
		}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_lootablemoneybox");
		default:
			break;
	}
	return 0;
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "amb_creature_mammal@world_dog_barking_up@base";
		case 1:
			return "script_re@hobo_dog";
		default:
			break;
	}
	return "";
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					return "RE005_MALE2";
				case 1:
					return "RE005_MALE3";
				case 2:
					return "RE005_FEMALE4";
				default:
					break;
			}
			return "RE005_MALE2";
	}
	return "";
}

void func_217(int iParam0)
{
	func_271(OBJECT::_0x08C5825A2932EA7B(iParam0));
}

float func_218(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_supply_train.func_900();
	switch (iVar0)
	{
		case 0:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 70.465f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 54.12f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -84.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 111.63f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 128.38f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 49.57f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 87.7f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -82.25f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -8.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 63.07f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -34.4f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 161.19f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return -56.3f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 98.58f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (func_91())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 135.41f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_226()
{
	if (aggregate.nb_animal_attack.func_565())
	{
		return;
	}
	if (func_91() == 1 && Local_13.f_7 >= 4)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
	{
		if (aggregate.fme_condor_egg.func_1292(aggregate.la_alligator.func_212(0), 0, &(Local_132.f_18.f_18), &(Local_132.f_18.f_49), 0, 0))
		{
			aggregate.nb_animal_attack.func_566(0);
		}
		if (ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(0)))
		{
			if (aggregate.nb_arrowhead_injury.func_248(aggregate.la_alligator.func_212(0), PLAYER::PLAYER_PED_ID()))
			{
				aggregate.fme_challenges.func_1108(-985005225, 1, 0);
			}
			aggregate.nb_animal_attack.func_566(0);
		}
	}
}

void func_227(int iParam0)
{
	if (Local_132.f_18.f_1 != iParam0)
	{
		Local_132.f_18.f_1 = iParam0;
	}
}

void func_228()
{
	int iVar0;

	Local_132.f_18.f_50 = -1;
	Local_132.f_18.f_51 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_132.f_18.f_51 = (Local_132.f_18.f_51 || (vLocal_35[iVar0 /*3*/])->f_1);
			Local_132.f_18.f_50 = (Local_132.f_18.f_50 && (vLocal_35[iVar0 /*3*/])->f_1);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if ((vLocal_35[iVar0 /*3*/])->f_1.f_1 != 0)
				{
					Local_13.f_7.f_14 = (vLocal_35[iVar0 /*3*/])->f_1.f_1;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 55f && aggregate.fme_round_up.func_1361(iVar0, iVar1, 1, 1114636288 /* Float: 60f */, 0))
		{
			aggregate.nb_animal_attack.func_358();
		}
		func_283(iVar1, iVar0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(aggregate.la_alligator.func_212(1)))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(1), true, false) };
		if (!aggregate.nb_crashed_wagon.func_392(16384, 255))
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &fVar5, 0) && vVar2.z != fVar5)
			{
				ENTITY::SET_ENTITY_COORDS(aggregate.la_alligator.func_212(1), func_248(1), true, false, true, true);
				ENTITY::_0x9587913B9E772D29(aggregate.la_alligator.func_212(1), 0);
			}
			if (!ENTITY::GET_ENTITY_HEADING(aggregate.la_alligator.func_212(1)) == func_249(1))
			{
				ENTITY::SET_ENTITY_HEADING(aggregate.la_alligator.func_212(1), func_249(1));
				ENTITY::_0x9587913B9E772D29(aggregate.la_alligator.func_212(1), 0);
			}
			aggregate.la_alligator.func_227(16384);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(aggregate.la_alligator.func_212(0)))
	{
		vVar6 = { ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), true, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &fVar9, 0) && vVar6.z != fVar9)
		{
			ENTITY::SET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), func_150(0), true, false, true, true);
			ENTITY::_0x9587913B9E772D29(aggregate.la_alligator.func_212(0), 0);
		}
		if (!ENTITY::GET_ENTITY_HEADING(aggregate.la_alligator.func_212(0)) == func_218(0))
		{
			ENTITY::SET_ENTITY_HEADING(aggregate.la_alligator.func_212(0), func_218(0));
			ENTITY::_0x9587913B9E772D29(aggregate.la_alligator.func_212(0), 0);
		}
	}
}

void func_230()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_283(iVar1, iVar0, 1);
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 6f)
		{
			if (!aggregate.nb_crashed_wagon.func_392(32, 255) && aggregate.fme_animal_tagging.func_181(&(Local_13.f_7.f_6)) > 300000)
			{
				aggregate.la_alligator.func_227(32);
			}
		}
		else if (!aggregate.nb_crashed_wagon.func_392(8, 255))
		{
			aggregate.nb_animal_attack.func_446();
			if (!aggregate.nb_crashed_wagon.func_392(8, 255))
			{
				aggregate.barcustomer_interaction.func_43(&(Local_132.f_18.f_151));
				aggregate.la_alligator.func_227(8);
			}
		}
	}
	func_288(0, -89429847, 0);
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(0);
	iVar2 = aggregate.la_alligator.func_212(1);
	fVar5 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false));
	vVar6 = { aggregate.gfh_campworks.func_184(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), iVar1, 1.75f) };
	func_288(0, -89429847, 0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, func_290());
	}
	switch (func_91())
	{
		case 0:
		case 1:
			fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar2, false, false));
			fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar2, false, false));
			if (fVar5 < 30f)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar1, vVar6, 0.5f, 0.5f, 2f, false, true, 0))
				{
					if (aggregate.fme_supply_train.func_928(iVar1, 242628503, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[1 /*4*/])->f_2));
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 3f, -1, 0.75f, false, aggregate.fishing_core.func_492(vVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 1));
						aggregate.fme_condor_egg.func_1296(iVar1, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
					}
				}
			}
			else if (fVar3 < fVar4)
			{
				if (!aggregate.nb_crashed_wagon.func_392(64, 255))
				{
					aggregate.la_alligator.func_227(64);
				}
			}
			if (fVar4 < 10f)
			{
				aggregate.fme_animal_tagging.func_1407(&(Local_13.f_7.f_6));
				aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1892463704, -1244015106), 1);
				aggregate.nb_animal_attack.func_446();
				aggregate.la_alligator.func_227(16);
			}
			break;
		case 2:
			fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), func_296());
			fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296());
			if (fVar5 < 30f)
			{
				if (fVar3 > 2.5f)
				{
					if (aggregate.fme_supply_train.func_928(iVar1, 713668775, 1, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, func_296(), 3f, -1, 0.25f, false, aggregate.fishing_core.func_492(vVar6, func_150(0), 1));
					}
				}
				else if (aggregate.fme_supply_train.func_928(iVar1, 242628503, 1, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_150(0), 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, -904105760, -1, 1, 0, -1082130432 /* Float: -1f */, 0);
					aggregate.fme_condor_egg.func_1296(iVar1, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
				}
			}
			else if (fVar3 < fVar4)
			{
				if (!aggregate.nb_crashed_wagon.func_392(64, 255))
				{
					aggregate.la_alligator.func_227(64);
				}
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296()) < 10f && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), func_296()) < 10f)
			{
				aggregate.fme_animal_tagging.func_1407(&(Local_13.f_7.f_6));
				aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1892463704, -1244015106), 1);
				aggregate.nb_animal_attack.func_446();
				aggregate.la_alligator.func_227(16);
			}
			break;
	}
}

void func_232()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(0);
	func_288(0, -89429847, 0);
	if (aggregate.fme_supply_train.func_928(iVar1, -1162159953, 1, 0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 6f)
		{
			if (aggregate.nb_crashed_wagon.func_392(64, 255))
			{
				aggregate.la_alligator.func_227(64);
			}
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_209(0), func_298(0), iVar0, func_299(func_209(0), func_298(0)), 8f, -8f, 0, 0, 0, 0, 90f, 0, 262144, -1082130432 /* Float: -1f */);
		}
	}
}

void func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(1);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (aggregate.fme_animal_tagging.func_181(&(Local_13.f_7.f_6)) < 300000 && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		switch (func_91())
		{
			case 0:
				aggregate.nb_arrowhead_injury.func_142(0);
				PED::_0x6569F31A01B4C097(iVar1, 4, true);
				if (!aggregate.nb_animal_attack.func_161(256))
				{
					if (func_256(iVar2, iVar1))
					{
						func_300(3);
					}
					else if (ENTITY::_0xEF2D9ED7CE684F08(iVar1) == iVar2)
					{
						if (!aggregate.nb_crashed_wagon.func_392(8192, 255))
						{
							if (aggregate.dynamic_craft_scenario.func_318(iVar2) == aggregate.annesburg.func_253(iVar1))
							{
								aggregate.fme_challenges.func_1108(-1648877470, 1, 0);
								aggregate.la_alligator.func_227(8192);
							}
						}
					}
					else if (ENTITY::_0x8DE41E9902E85756(iVar1))
					{
						if (func_303())
						{
							aggregate.nb_animal_attack.func_598();
							aggregate.la_alligator.func_227(4);
						}
						func_300(2);
					}
					else
					{
						func_300(1);
					}
				}
				break;
			case 1:
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), func_296()) < 7.5f || aggregate.la_bear.func_250(1))
				{
					func_306(1);
					if (!PED::IS_PED_IN_COMBAT(aggregate.la_alligator.func_212(2), 0))
					{
						if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(2), -2117564886, 1, 0) && aggregate.nb_animal_attack.func_161(2048))
						{
							PED::_0x7DE9692C6F64CFE8(aggregate.la_alligator.func_212(2), false, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(aggregate.la_alligator.func_212(2), func_248(1), 30f, 0, 0);
						}
					}
					if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
					{
						if (aggregate.fme_supply_train.func_928(iVar0, -2117564886, 1, 0) && aggregate.nb_animal_attack.func_161(2048))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
							PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
							LAW::_0xFFEBE5AA96BC2E4E(iVar0, 1224055398 /* GXTEntry: "Animal Cruelty" */, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
							PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
							FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
							FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
							TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1082130432 /* Float: -1f */);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(2)))
				{
					if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
					{
						if (!aggregate.la_bear.func_250(0))
						{
							func_307(aggregate.la_alligator.func_212(2), iVar2, 0, 291934926, 0);
						}
						else if (!aggregate.la_bear.func_250(1))
						{
							func_307(aggregate.la_alligator.func_212(2), iVar2, 1, 291934926, 0);
						}
					}
					if (ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (!aggregate.la_bear.func_250(2))
						{
							aggregate.nb_arrowhead_injury.func_142(0);
							AUDIO::_0x36559148B78853B3(1, false, 0);
							func_307(aggregate.la_alligator.func_212(2), iVar2, 2, 291934926, 0);
						}
					}
				}
				else
				{
					func_308();
					aggregate.nb_arrowhead_injury.func_142(2);
				}
				if (!aggregate.nb_animal_attack.func_161(4))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(2)))
					{
						if (ENTITY::_0x8DE41E9902E85756(iVar1))
						{
							aggregate.nb_animal_attack.func_598();
							aggregate.la_alligator.func_227(4);
						}
					}
				}
				if (ENTITY::_0x8DE41E9902E85756(iVar1))
				{
					func_303();
				}
				break;
			case 2:
				if (aggregate.fme_supply_train.func_928(iVar0, 242628503, 1, 0) && !aggregate.nb_crashed_wagon.func_392(4, 255))
				{
					TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[1 /*4*/])->f_2));
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_296()) > 1f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(), 1.5f, -1, 0.25f, false, 40000f);
					}
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_150(0), 0);
					TASK::_TASK_START_SCENARIO_IN_PLACE(0, -904105760, -1, 1, 0, -1082130432 /* Float: -1f */, 0);
					aggregate.fme_condor_egg.func_1296(iVar0, &((Local_132.f_18.f_2[1 /*4*/])->f_2), 0, 0, 1, 1);
				}
				if (aggregate.nb_hobo_dog.func_252())
				{
					if (!aggregate.fme_animal_tagging.func_134(8))
					{
						aggregate.nb_animal_attack.func_446();
					}
					if (func_303())
					{
						aggregate.nb_arrowhead_injury.func_142(0);
					}
					if (!aggregate.nb_crashed_wagon.func_392(4, 255))
					{
						if (func_253(func_208(0), func_150(0), &((Local_132.f_18.f_15[0 /*2*/])->f_1), 0, 0, 0, 0))
						{
							aggregate.nb_animal_attack.func_598();
							aggregate.la_alligator.func_227(4);
						}
					}
					else
					{
						if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2)) != 2)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
							func_309(iVar0, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
						}
						if (aggregate.fme_supply_train.func_928(iVar0, -391815063, 1, 0))
						{
							TASK::TASK_WALK_AWAY(iVar0, aggregate.la_alligator.func_212(0));
						}
					}
				}
				break;
		}
	}
}

void func_234()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (aggregate.fme_supply_train.func_928(iVar0, 518218985, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > 200f)
	{
		aggregate.la_alligator.func_227(32);
	}
}

void func_235()
{
	aggregate.la_alligator.func_64();
	if (!aggregate.nb_animal_attack.func_161(256))
	{
		if (aggregate.nb_animal_attack.func_161(128))
		{
			func_300(4);
		}
		else if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(0), 518218985, 1, 0))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(aggregate.la_alligator.func_212(0), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(0), true);
			if ((ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(2)) && aggregate.camera_item.func_12(&(Local_132.f_18.f_18)) != aggregate.la_alligator.func_212(2)) && !PED::IS_PED_IN_COMBAT(aggregate.la_alligator.func_212(2), 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(aggregate.la_alligator.func_212(2), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			aggregate.la_alligator.func_227(256);
		}
	}
}

Vector3 func_248(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_supply_train.func_900();
	switch (iVar0)
	{
		case 0:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						case 1:
							return 2657.49f, 425.1187f, 85.5826f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						case 1:
							return 2657.49f, 425.1187f, 85.5826f;
						case 2:
							return 2651.942f, 427.2648f, 86.7972f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2774.431f, 463.4135f, 64.40166f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						case 1:
							return 1466.28f, -1722.796f, 61.22633f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						case 1:
							return 1466.28f, -1722.796f, 61.22633f;
						case 2:
							return 1464.552f, -1720.882f, 61.4095f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1428.817f, -1812.995f, 57.37384f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						case 1:
							return 2455.373f, -871.7141f, 40.70958f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						case 1:
							return 2455.373f, -871.7141f, 40.70958f;
						case 2:
							return 2434.231f, -862.5032f, 40.75406f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2578.893f, -852.3694f, 41.3078f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						case 1:
							return 2894.529f, 1513.545f, 63.47701f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						case 1:
							return 2894.529f, 1513.545f, 63.47701f;
						case 2:
							return 2890.523f, 1472.245f, 59.16743f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 2798.119f, 1432.187f, 77.71185f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						case 1:
							return 1245.06f, 524.1508f, 87.54594f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						case 1:
							return 1245.06f, 524.1508f, 87.54594f;
						case 2:
							return 1288.344f, 527.3176f, 86.53186f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1212.513f, 423.0333f, 90.69851f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						case 1:
							return 57.35834f, 1120.588f, 183.4017f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						case 1:
							return 57.35834f, 1120.588f, 183.4017f;
						case 2:
							return 74.25232f, 1130.604f, 186.8596f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -28.69774f, 1111.23f, 167.9945f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						case 1:
							return -473.0372f, -247.8413f, 61.17145f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						case 1:
							return -473.0372f, -247.8413f, 61.17145f;
						case 2:
							return -448.8038f, -215.7537f, 57.9648f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -546.6091f, -298.2057f, 52.56811f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
						case 1:
							return -1533.494f, 441.2002f, 105.3608f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
						case 1:
							return -1533.494f, 441.2002f, 105.3608f;
						case 2:
							return -1555.162f, 438.5677f, 106.5573f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1403.688f, 383.7506f, 102.2472f;
							Jump @3234; //curOff = 1775
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										case 1:
											return -1548.697f, -789.7269f, 106.8148f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										case 1:
											return -1548.697f, -789.7269f, 106.8148f;
										case 2:
											return -1521.302f, -758.5893f, 108.832f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -1510.116f, -883.8221f, 88.72778f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 1983
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										case 1:
											return -1281.514f, -1968.428f, 45.10072f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										case 1:
											return -1281.514f, -1968.428f, 45.10072f;
										case 2:
											return -1282.607f, -1986.83f, 42.87173f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -1459.752f, -1915.602f, 50.93545f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 2191
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										case 1:
											return -2602.479f, -2345.139f, 70.25112f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										case 1:
											return -2602.479f, -2345.139f, 70.25112f;
										case 2:
											return -2562.39f, -2326.724f, 69.35632f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -2470.018f, -2426.993f, 59.1458f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 2399
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										case 1:
											return -3200.87f, -3208.638f, -10.25622f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										case 1:
											return -3200.87f, -3208.638f, -10.25622f;
										case 2:
											return -3208.022f, -3231.347f, -2.59133f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -3092.935f, -3166.527f, -1.36638f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 2607
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										case 1:
											return -3746.965f, -2860.01f, -15.17363f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										case 1:
											return -3746.965f, -2860.01f, -15.17363f;
										case 2:
											return -3789.804f, -2888.626f, -13.78955f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -3685.624f, -2769.247f, -15.14988f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 2815
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										case 1:
											return -4615.281f, -3670.614f, 12.45782f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										case 1:
											return -4615.281f, -3670.614f, 12.45782f;
										case 2:
											return -4628.914f, -3659.899f, 12.13649f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -4668.993f, -3706.819f, 12.54352f;
										default:
											break;
									}
									break;
							}
							Jump @3234; //curOff = 3023
							switch (aggregate.fme_supply_train.func_900())
							{
								case 0:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										case 1:
											return -5213.167f, -2971.82f, 9.00706f;
										default:
											break;
									}
									break;
								case 1:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										case 1:
											return -5213.167f, -2971.82f, 9.00706f;
										case 2:
											return -5189.956f, -3002.793f, 9.2269f;
										default:
											break;
									}
									break;
								case 2:
									switch (iParam0)
									{
										case 0:
											return -5194.483f, -2883.913f, 2.32447f;
										default:
											break;
									}
									break;
							}
							return 0f, 0f, 0f;
						}

float func_249(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_supply_train.func_900();
	switch (iVar0)
	{
		case 0:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						case 1:
							return 179.53f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						case 1:
							return 297.9582f;
						case 2:
							return 314.5825f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 341.8879f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						case 1:
							return -126.9f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						case 1:
							return -126.9f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 89.54f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -109.63f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 172.69f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 42.13f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 157.51f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 91.59f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -106.5f;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -159.35f;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 79.03f;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -101.34f;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -34.96f;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -19.7f;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 28.35f;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						case 1:
							return 96.13f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						case 1:
							return 96.13f;
						case 2:
							return 158.4f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -15.75f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

bool func_253(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate.fm_mission_controller.func_6821(iParam0, vParam1, iParam5, iParam6);
	}
	iVar1 = 1;
	iVar0 = 1;
	if (bParam7)
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iParam8))
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		iVar0 = func_318(iParam4, 1);
	}
	return (iVar1 && iVar0);
}

bool func_256(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

void func_263(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1412485432:
			func_326(iParam0->f_11, 2);
			break;
	}
}

int func_264(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			switch (Local_13.f_7.f_13)
			{
				case -2105110696:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
					switch (iVar0)
					{
						case 1:
							return 2086728021;
						case 2:
							return 234787986;
						case 3:
							return 684575280;
						case 4:
							return 986148387;
						default:
							break;
					}
					return 2086728021;
				case 937367983:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
					switch (iVar0)
					{
						case 1:
							return -879226938;
						case 2:
							return -720821592;
						default:
							break;
					}
					return -879226938;
			}
			break;
		case 2:
			switch (Local_13.f_7.f_12)
			{
				case 0:
					if (func_327())
					{
						return 914211621;
					}
					else
					{
						return -1894771355;
					}
					break;
				case 1:
					if (func_327())
					{
						return 684074934;
					}
					else
					{
						return -1445377289;
					}
					break;
				case 2:
					if (func_327())
					{
						return -206652020;
					}
					else
					{
						return -1147539848;
					}
					break;
				default:
					if (func_327())
					{
						return 914211621;
					}
					else
					{
						return -1894771355;
					}
					break;
			}
			break;
	}
	return 41788943;
}

void func_271(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "chest_open");
		}
	}
}

void func_283(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (fVar0 <= 15f)
	{
		if (aggregate.fme_supply_train.func_928(iParam0, -1162159953, 1, 0))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, func_209(0), func_298(0), iParam1, -1, 8f, -8f, 1, 0, 0, 0, 90f, 0, 262144, -1082130432 /* Float: -1f */);
		}
	}
	else if (aggregate.fme_supply_train.func_928(iParam0, -2017877118, 1, 0))
	{
		TASK::TASK_PLAY_ANIM(iParam0, func_209(0), func_298(0), 1090519040 /* Float: 8f */, -8f, -1, 0, 0, 0, 0, 0, 0, 0);
	}
	if (bParam2)
	{
		if (fVar0 <= 150f)
		{
			fVar1 = ENTITY::_0x627520389E288A73(iParam0, func_209(0), func_298(0));
			if ((((fVar1 >= 0.214f && fVar1 <= 0.263f) || (fVar1 >= 0.669f && fVar1 <= 0.707f)) || (fVar1 >= 0.77f && fVar1 <= 0.8f)) || (fVar1 >= 0.917f && fVar1 <= 0.952f))
			{
				if (!aggregate.nb_crashed_wagon.func_392(1024, 255))
				{
					MAP::ALLOW_SONAR_BLIPS(true);
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::_0x0C7A2289A5C4D7C9(46165686, iParam0);
				}
			}
			else if (aggregate.nb_crashed_wagon.func_392(1024, 255))
			{
				aggregate.la_alligator.func_227(1024);
			}
		}
	}
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (!aggregate.nb_crashed_wagon.func_522(255) || aggregate.dynamic_craft_scenario.func_370((Local_132.f_18.f_2[iParam0 /*4*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		aggregate.nb_arrowhead_injury.func_142(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_132.f_18.f_2[iParam0 /*4*/])))
	{
		Local_132.f_18.f_2[iParam0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(iParam1, aggregate.la_alligator.func_212(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_HDOG_BLIP_NAME";
				break;
			case 1:
				sVar0 = "NB_HDOG_TREASURE_BLIP";
				break;
			case 2:
				sVar0 = "NB_HDOG_AMBUSHER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_132.f_18.f_2[iParam0 /*4*/]), sVar0);
	}
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_132.f_18.f_2[iParam0 /*4*/]), iParam2);
	}
}

float func_290()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(1), false, false) };
	fVar3 = aggregate.fishing_core.func_39(aggregate.la_alligator.func_212(0), vVar0, 1);
	fVar4 = (fVar3 / 15f);
	if (fVar4 > 1f)
	{
		fVar4 = 1f;
	}
	return aggregate.electric_lantern.func_8(0.5f, 2f, fVar4);
}

Vector3 func_296()
{
	int iVar0;

	iVar0 = aggregate.fme_supply_train.func_900();
	switch (iVar0)
	{
		case 0:
			return 2657.878f, 425.9268f, 85.59921f;
		case 1:
			return 1468.795f, -1725.203f, 60.9824f;
		case 2:
			return 2452.772f, -872.9363f, 40.87089f;
		case 3:
			return 2893.27f, 1507.954f, 62.78511f;
		case 4:
			return 1245.028f, 524.1393f, 87.54836f;
		case 5:
			return 53.54184f, 1120.06f, 182.9689f;
		case 6:
			return -473.0888f, -251.5934f, 60.9299f;
		case 7:
			return -1532.264f, 438.3797f, 105.1653f;
		case 8:
			return -1546.588f, -792.2271f, 105.9821f;
		case 9:
			return -1280.21f, -1964.338f, 45.2809f;
		case 10:
			return -2601.117f, -2346.868f, 70.04795f;
		case 11:
			return -3198.064f, -3208.307f, -10.45329f;
		case 12:
			return -3745.8f, -2862.263f, -14.73483f;
		case 13:
			return -4612.711f, -3670.565f, 12.61444f;
		case 14:
			return -5211.202f, -2971.015f, 9.10262f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_298(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "indicate";
		default:
			break;
	}
	return "";
}

int func_299(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_300(int iParam0)
{
	if ((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 == 0)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(aggregate.la_alligator.func_212(0)) && !aggregate.nb_animal_attack.func_161(256))
		{
			if (Local_13.f_7.f_14 != iParam0)
			{
				switch (iParam0)
				{
					case 1:
						if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(0), 242628503, 1, 0))
						{
							aggregate.la_alligator.func_227(128);
							func_388(aggregate.la_alligator.func_212(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_resting@stand_enter", "enter_front", 1090519040 /* Float: 8f */, -8f, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_resting@trans", "resting_trans_sleeping", 1090519040 /* Float: 8f */, -8f, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 2f, -8f, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "scratch_v2_dog", 1090519040 /* Float: 8f */, -8f, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 1090519040 /* Float: 8f */, -8f, -1, 16389, 0, 0, 0, 0, 0, 0);
							aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 2:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(aggregate.la_alligator.func_212(0), "script_re@savage_aftermath@weeping_dog", "idle_dog", 1))
						{
							func_388(aggregate.la_alligator.func_212(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "scratch_dog", 1090519040 /* Float: 8f */, -8f, -1, 16388, 0, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "idle_dog", 1090519040 /* Float: 8f */, -8f, -1, 16389, 0, 0, 0, 0, 0, 0);
							aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 3:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(aggregate.la_alligator.func_212(0), "script_re@savage_aftermath@weeping_dog", "idle_dog", 1))
						{
							func_388(aggregate.la_alligator.func_212(0), 4);
							TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
							TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "getup_right_dog", 1090519040 /* Float: 8f */, -2f, -1, 16388, 0, 0, 0, 0, 0, 0);
							aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
							(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						}
						break;
					case 4:
						func_388(aggregate.la_alligator.func_212(0), 12);
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_PLAY_ANIM(0, "script_re@savage_aftermath@weeping_dog", "getup_right_quick_dog", 1090519040 /* Float: 8f */, -2f, -1, 16388, 0, 0, 0, 0, 0, 0);
						aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = iParam0;
						break;
				}
			}
			switch (Local_13.f_7.f_14)
			{
				case 3:
					if (ENTITY::_0x627520389E288A73(aggregate.la_alligator.func_212(0), "script_re@savage_aftermath@weeping_dog", "getup_right_dog") > 0.61f)
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("motionstate_walk"), false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 1, 0, -1082130432 /* Float: -1f */, -1, 0);
						aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(0), true);
						aggregate.la_alligator.func_227(256);
					}
					break;
				case 4:
					if (ENTITY::_0x627520389E288A73(aggregate.la_alligator.func_212(0), "script_re@savage_aftermath@weeping_dog", "getup_right_quick_dog") > 0.58f)
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_132.f_18.f_2[0 /*4*/])->f_2));
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("motionstate_run"), false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(0), &((Local_132.f_18.f_2[0 /*4*/])->f_2), 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(0), true);
						aggregate.la_alligator.func_227(256);
					}
					break;
			}
		}
	}
	else if ((vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 == Local_13.f_7.f_14)
	{
		(vLocal_35[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1.f_1 = 0;
	}
}

bool func_303()
{
	var uVar0;
	struct<2> Var4;
	int iVar17;

	if (!aggregate.nb_animal_attack.func_161(512))
	{
		Var4.f_1 = 11;
		iVar17 = aggregate.barcustomer_interaction.func_54(&(Local_132.f_18.f_151));
		if (iVar17 < 60001)
		{
			iVar17 = 60001;
		}
		func_390(&uVar0, &Var4, 1891766540, 1038512660, 1, 1, 1, 1, iVar17, Local_132.f_9);
		aggregate.la_alligator.func_227(512);
	}
	else
	{
		return true;
	}
	return false;
}

void func_306(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!aggregate.nb_crashed_wagon.func_392(2048, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(2)) && !PED::IS_PED_DEAD_OR_DYING(aggregate.la_alligator.func_212(2), true))
		{
			if (bParam0)
			{
				func_288(2, joaat("BLIP_STYLE_ENEMY"), 0);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(2)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(2)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(0)));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)) && !PED::IS_PED_DEAD_OR_DYING(aggregate.la_alligator.func_212(0), true))
		{
			if (bParam0)
			{
				aggregate.nb_arrowhead_injury.func_142(0);
				func_288(0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(aggregate.la_alligator.func_212(2)));
			}
		}
		aggregate.la_alligator.func_227(2048);
	}
}

int func_307(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4 && !NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	func_391(iParam2);
	return 1;
}

void func_308()
{
	int iVar0;
	int iVar1;

	if (!aggregate.nb_crashed_wagon.func_392(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(2)))
		{
			if (ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(2)))
			{
				iVar1 = 2102333076;
				if (!ENTITY::_0x1E804EA9B12030A4(aggregate.la_alligator.func_212(2), &iVar0))
				{
					ENTITY::_0x8C03CD6B5E0E85E8(aggregate.la_alligator.func_212(2), iVar1);
				}
				else if (iVar0 == iVar1)
				{
					aggregate.la_alligator.func_227(4096);
				}
				else
				{
					ENTITY::_0x8C03CD6B5E0E85E8(aggregate.la_alligator.func_212(2), 2102333076);
				}
			}
		}
	}
}

void func_309(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
		}
	}
}

void func_316(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 12, &(Global_1051202->f_16[15]));
	aggregate.bigvalleyomj.func_36(uParam0, uParam0->f_1);
}

int func_318(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x640A602946A8C972(*iParam0);
	iVar1 = TASK::_0x849791EBBDBA0362(*iParam0);
	iVar2 = TASK::_0x01AF8A3729231A43(*iParam0);
	if (iVar2 <= 0)
	{
		if (bParam1)
		{
			if (iVar1 >= iVar0)
			{
				return 1;
			}
		}
		else if (iVar1 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_326(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_132.f_18.f_52, iParam0))
	{
		return;
	}
	aggregate.fme_escaped_convicts.func_1516(&(Local_132.f_18.f_53), (Local_132.f_18.f_2[iParam1 /*4*/])->f_1, func_215(iParam1), 0);
	if ((Local_132.f_18.f_2[iParam1 /*4*/])->f_3 != -1 && aggregate.fm_mission_controller.func_3723(func_402((Local_132.f_18.f_2[iParam1 /*4*/])->f_3)))
	{
		return;
	}
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_132.f_18.f_53), aggregate.fme_escaped_convicts.func_1689(func_402(iParam0)), 0, -1, 0, 0))
	{
		(Local_132.f_18.f_2[iParam1 /*4*/])->f_3 = iParam0;
		MISC::SET_BIT(&(Local_132.f_18.f_52), iParam0);
	}
}

bool func_327()
{
	var uVar0;
	var uVar1;

	func_406(&uVar0, &uVar1);
	return uVar0;
}

Vector3 func_384(vector3 vParam0, int iParam3, float fParam4)
{
	return aggregate.fme_escaped_convicts.func_1684(vParam0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false), fParam4);
}

void func_388(int iParam0, int iParam1)
{
	char* sVar0;

	switch (iParam1)
	{
		case 0:
			sVar0 = "PAIN_DEATH";
			break;
		case 1:
			sVar0 = "BARK";
			break;
		case 2:
			sVar0 = "BARK_FAR";
			break;
		case 11:
			sVar0 = "BARK_SEQ";
			break;
		case 3:
			sVar0 = "PLAYFUL";
			break;
		case 4:
			sVar0 = "WHINE";
			break;
		case 5:
			sVar0 = "SNIFF";
			break;
		case 6:
			sVar0 = "SNIFF_END";
			break;
		case 7:
			sVar0 = "SNEEZE";
			break;
		case 8:
			sVar0 = "LICK";
			break;
		case 9:
			sVar0 = "EXCITED";
			break;
		case 10:
			sVar0 = "BEG";
			break;
		case 12:
			sVar0 = "INJURED_FIDGET";
			break;
		case 13:
			sVar0 = "INJURED_WHIMPER";
			break;
		case 14:
			sVar0 = "ATTACK";
			break;
		case 15:
			sVar0 = "GROWL";
			break;
		case 16:
			sVar0 = "HOWL";
			break;
		case 17:
			sVar0 = "BARK_HAPPY";
			break;
	}
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0, sVar0, 0);
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, struct<2> Param9)
{
	float fVar0;
	var uVar1;
	var uVar2;

	if (iParam6 == 0)
	{
		return;
	}
	fVar0 = aggregate.coffee_drinking.func_45(((BUILTIN::TO_FLOAT(iParam8) / 1000f) / 60f), 0.5f, 30f);
	func_477(iParam1, &uVar1, &uVar2, 0, fVar0);
	aggregate.nb_hobo_dog.func_478(iParam1, &uVar2, 0, iParam2, iParam6, iParam7, bParam4);
	aggregate.nb_hobo_dog.func_479(iParam1, 0, iParam3);
	aggregate.nb_hobo_dog.func_480(iParam1, &uVar2, 0, bParam5);
	aggregate.nb_hobo_dog.func_481(iParam1, 0, Param9);
	aggregate.fme_animal_tagging.func_752(1149539403, uParam0, iParam1, 0, 255, 0, 1);
}

void func_391(int iParam0)
{
	struct<15> Var0;

	Var0 = { aggregate.nb_animal_attack.func_497(1412485432) };
	Var0.f_11 = iParam0;
	aggregate.nb_animal_attack.func_563(&Var0);
}

char* func_402(int iParam0)
{
	switch (Local_13.f_7.f_12)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "NBHD_1_LEAD";
				case 1:
					return "NBHD_1_ATTACK";
				case 2:
					return "NBHD_1_KILLDOG";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "NBHD_2_LEAD";
				case 1:
					return "NBHD_2_ATTACK";
				case 2:
					return "NBHD_2_KILLDOG";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "NBHD_3_LEAD";
				case 1:
					return "NBHD_3_ATTACK";
				case 2:
					return "NBHD_3_KILLDOG";
				default:
					break;
			}
			break;
		default:
			switch (iParam0)
			{
				case 0:
					return "NBHD_1_LEAD";
				case 1:
					return "NBHD_1_ATTACK";
				case 2:
					return "NBHD_1_KILLDOG";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_406(var uParam0, var uParam1)
{
	float fVar0;

	fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	*uParam0 = 0;
	*uParam1 = 0;
	if (fVar0 >= 24f)
	{
		*uParam1 = 1;
	}
	else if (fVar0 <= 0f)
	{
		*uParam0 = 1;
	}
	if (func_488())
	{
		*uParam0 = 0;
	}
}

void func_477(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	aggregate.fishing_core.func_224(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				aggregate.doc_book.func_292(iParam0, 1628925866);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1295140836);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1526522745);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1901367336);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -2012562028);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1811294830);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1580699377);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -529994165);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1356198962);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 592638986);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -71665830);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -369634347);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 523648593);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 224041626);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1119225168);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 820076967);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1790072136);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1490530707);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1908007825);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 2085779592);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -169152669);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -544685409);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -649710054);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1023735420);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1126990539);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1501736823);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1614824464);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1845287019);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1073415046);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1906960099);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -2023453588);
					break;
				case 1:
					*uParam1 = -1520125470;
					break;
			}
			break;
	}
}

bool func_488()
{
	vector3 vVar0;

	if (FIRE::GET_CLOSEST_FIRE_POS(&vVar0, Global_36))
	{
		if (BUILTIN::VDIST(vVar0, Global_36) < 5f)
		{
			return true;
		}
	}
	return false;
}

void func_523(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 9, &uParam1);
}

