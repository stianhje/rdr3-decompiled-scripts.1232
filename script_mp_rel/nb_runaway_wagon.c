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
	struct<63> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 1, 0, 2, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<7> Local_78[32];
	struct<192> Local_303 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 2;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 1114636288;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 1114636288;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 2;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	var uLocal_541 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.aberdeenpigfarm.func_23();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 65, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 65, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_78, 225, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_78[0 /*7*/]), 225, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	aggregate.la_bear.func_208(&(Local_303.f_18.f_18));
	Local_303.f_18.f_16 = func_91();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::_0x9F24A34863FD35DA(1);
	NETWORK::_0xE7DDA8BD3BCF751C(2);
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate.la_alligator.func_58();
	if (aggregate.nb_animal_attack.func_161(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_147(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
	{
		AITRANSPORT::_0xBA8818212633500A(aggregate.la_alligator.func_212(0), 6, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(aggregate.la_alligator.func_212(1), false);
		}
		aggregate.nb_arrowhead_injury.func_142(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_1[iVar1])))
		{
			if (iVar1 != 0 || !PED::IS_PED_FLEEING(aggregate.la_alligator.func_212(iVar1)))
			{
				iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_1[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		aggregate.nb_arrowhead_injury.func_142(iVar3);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_4[iVar3])))
		{
			iVar4 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
}

int func_91()
{
	switch (func_175())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
	return -1;
}

bool func_106()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3])))
		{
			if (func_182(iVar3, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar3++;
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (iVar4 == 1)
				{
					switch (aggregate.fme_archery.func_268())
					{
						case 2:
						case 3:
							Jump @152; //curOff = 106
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_6[iVar4])))
						{
							if (func_184(iVar4, &bVar1) || bVar1)
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
					switch (aggregate.fme_archery.func_268())
					{
						case 0:
						case 1:
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[0])))
							{
								if (func_185(0, &bVar1) || bVar1)
								{
									iVar0 = 0;
								}
							}
							break;
						case 2:
						case 3:
							iVar2 = 0;
							while (iVar2 <= 1)
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar2])))
								{
									if (func_185(iVar2, &bVar1) || bVar1)
									{
										iVar0 = 0;
									}
									else
									{
										iVar2++;
									}
									if (bVar1)
									{
										aggregate.fm_deathmatch_controller.func_1034();
									}
									return iVar0;
								}
							}
							default:
								break;
					}
				}
			}
		}

bool func_112()
{
	if (func_190())
	{
		return true;
	}
	func_191();
	func_192();
	switch (Local_13.f_7)
	{
		case 0:
			func_193();
			break;
		case 1:
			func_194();
			break;
		case 3:
			func_195();
			break;
		case 5:
			func_196();
			break;
		case 6:
			func_197();
			break;
		case 4:
			func_198();
			break;
		case 7:
			func_199();
			break;
		case 8:
			func_200();
			break;
		case 9:
			func_201();
			break;
		case 11:
			func_202();
			break;
		case 10:
			func_203();
			break;
		case 12:
			func_204();
			break;
		case 13:
			func_205();
			break;
		case 14:
			func_206();
			break;
	}
	return false;
}

bool func_114()
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || aggregate.doc_book.func_239(iVar0, 518218985))
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
	int iVar4;
	int iVar5;

	sVar0 = "ORERW";
	iVar1 = 1;
	if (HUD::_0x2C729F2B94CEA911(sVar0))
	{
		HUD::_0xF66090013DE648D5(sVar0);
		if (!HUD::_0xD0976CC34002DB57(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!aggregate.fme_archery.func_1103(func_214(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!aggregate.fme_archery.func_1103(func_216(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!aggregate.fme_archery.func_1103(func_217(iVar4)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		STREAMING::REQUEST_ANIM_DICT(func_218(iVar5));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_218(iVar5)))
		{
			iVar1 = 0;
		}
		iVar5++;
	}
	return iVar1;
}

void func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar0])))
		{
			(Local_303.f_18.f_1[iVar0 /*4*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_1[iVar0]));
			iVar1 = aggregate.la_alligator.func_212(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (aggregate.fme_archery.func_268())
				{
					case 0:
					case 1:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
						}
						break;
					case 2:
					case 3:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
							case 1:
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iVar1, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
								break;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_6[iVar2])))
		{
			Local_303.f_18.f_13[iVar2] = NETWORK::NET_TO_OBJ(&(Local_13.f_7.f_6[iVar2]));
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar3])))
		{
			(Local_303.f_18.f_10[iVar3 /*2*/])->f_1 = NETWORK::NET_TO_VEH(&(Local_13.f_7.f_4[iVar3]));
			iVar4 = aggregate.la_alligator.func_212(iVar3);
			switch (iVar3)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
						{
							ENTITY::SET_ENTITY_HEADING(iVar4, func_222(iVar3));
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_303.f_18.f_13[0])))
							{
								func_224(&(Local_303.f_18.f_13[0]), iVar4, func_223(iVar3), 0f, 0f, 90f, 0, 1, 0);
								if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
								{
									ENTITY::_0xEBDC12861D079ABA(&(Local_303.f_18.f_13[0]), 1);
									GRAPHICS::_0x07C0F87AAC57F2E4(&(Local_303.f_18.f_13[0]), 10f);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(&(Local_303.f_18.f_13[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_303.f_18.f_13[1])))
							{
								func_224(&(Local_303.f_18.f_13[1]), iVar4, func_225(iVar3), 0f, 0f, 0f, 0, 1, 0);
							}
						}
						VEHICLE::_0xCBF88256E44D5D39(iVar4, 1);
						VEHICLE::_0xC325A6BAA62CF8A2(iVar4, 1);
						AITRANSPORT::_0x13F138225C202F66(iVar4, 3);
						AITRANSPORT::_0xBA8818212633500A(iVar4, 12, 1);
					}
					break;
			}
		}
		iVar3++;
	}
	func_226();
}

void func_135()
{
	aggregate.nb_crashed_wagon.func_249();
	func_235();
	aggregate.fme_animal_tagging.func_389(Local_13.f_7);
	func_237();
	func_238();
	switch (Local_303.f_18)
	{
		case 0:
			func_239();
			break;
		case 1:
			func_240();
			break;
		case 3:
			func_241();
			break;
		case 6:
			func_242();
			break;
		case 5:
			func_243();
			break;
		case 4:
			func_244();
			break;
		case 7:
			aggregate.aberdeenpigfarm.func_23();
			break;
		case 8:
			aggregate.aberdeenpigfarm.func_23();
			break;
		case 9:
			func_247();
			break;
		case 11:
			func_248();
			break;
		case 10:
			func_249();
			break;
		case 12:
			func_250();
			break;
		case 13:
			func_251();
			break;
		case 14:
			func_252();
			break;
	}
}

bool func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(aggregate.la_alligator.func_212(1), false);
		}
		aggregate.nb_arrowhead_injury.func_142(iVar0);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_1[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_1[iVar0])))
		{
			PED::SET_PED_KEEP_TASK(aggregate.la_alligator.func_212(iVar0), true);
			if (iVar0 != 0 || !PED::IS_PED_FLEEING(aggregate.la_alligator.func_212(iVar0)))
			{
				iVar1 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_1[iVar0]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		aggregate.nb_arrowhead_injury.func_142(iVar2);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_4[iVar2])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_4[iVar2])))
		{
			iVar3 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[iVar2]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
		}
		iVar0++;
	}
	func_147(0, 1);
	return true;
}

void func_147(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				iVar0 = 256;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iVar0, 0);
			aggregate.nb_animal_attack.func_101(1);
		}
	}
	else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
		aggregate.nb_animal_attack.func_101(1);
	}
}

int func_175()
{
	var uVar0;

	uVar0 = aggregate.fme_animal_tagging.func_505();
	return uVar0;
}

int func_182(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!aggregate.fme_condor_egg.func_999(Local_13.f_7.f_4[iParam0], func_216(iParam0), func_267(iParam0), func_222(iParam0), 1, 0, 0, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_184(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!aggregate.fme_archery.func_922(Local_13.f_7.f_6[iParam0], func_217(iParam0), func_267(0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_185(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!aggregate.fme_challenges.func_1263(Local_13.f_7.f_1[iParam0], func_214(iParam0), func_271(iParam0), func_272(iParam0), 1, 0, 0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_190()
{
	if (Local_13.f_7 == 15)
	{
		return true;
	}
	return false;
}

void func_191()
{
	if (aggregate.nb_animal_attack.func_565())
	{
		if (Local_13.f_7 != 14)
		{
			AUDIO::_0x36559148B78853B3(1, false, 0);
			aggregate.fme_animal_tagging.func_389(14);
		}
	}
	if (aggregate.nb_animal_attack.func_161(4096))
	{
		aggregate.fme_animal_tagging.func_389(14);
	}
}

void func_192()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	func_279(vVar1);
}

void func_193()
{
	if (aggregate.la_alligator.func_184())
	{
		switch (aggregate.fme_archery.func_268())
		{
			case 0:
			case 1:
				aggregate.fme_animal_tagging.func_389(1);
				break;
			case 2:
			case 3:
				aggregate.fme_animal_tagging.func_389(1);
				break;
			default:
				aggregate.fme_animal_tagging.func_389(12);
				break;
		}
	}
}

void func_194()
{
	if (aggregate.nb_animal_attack.func_161(1) || aggregate.nb_animal_attack.func_161(2))
	{
		aggregate.fme_animal_tagging.func_389(3);
	}
	if (aggregate.nb_animal_attack.func_161(16))
	{
		aggregate.fme_animal_tagging.func_389(4);
	}
}

void func_195()
{
	func_280();
	func_281(0, aggregate.la_alligator.func_212(0), 10f, 1, 0);
	if (!aggregate.nb_animal_attack.func_161(16))
	{
		if (aggregate.nb_animal_attack.func_161(2))
		{
			if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
			{
				aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_54));
			}
			if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
			{
				aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
			}
			aggregate.fme_animal_tagging.func_389(5);
		}
	}
	else
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_54));
		}
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
		}
		aggregate.fme_animal_tagging.func_389(4);
	}
}

void func_196()
{
	func_281(0, aggregate.la_alligator.func_212(0), 10f, 1, 0);
	if (!aggregate.nb_animal_attack.func_161(16))
	{
		if (aggregate.nb_animal_attack.func_161(4))
		{
			aggregate.fme_animal_tagging.func_389(6);
		}
	}
	else
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_54));
		}
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
		}
		aggregate.fme_animal_tagging.func_389(4);
	}
}

void func_197()
{
	if (Local_303.f_18.f_164 < 30f)
	{
		aggregate.fme_animal_tagging.func_389(7);
	}
	if (aggregate.nb_animal_attack.func_161(8))
	{
		aggregate.fme_animal_tagging.func_389(14);
	}
	if (aggregate.nb_animal_attack.func_161(16))
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_54));
		}
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
		{
			aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
		}
		aggregate.fme_animal_tagging.func_389(4);
	}
}

void func_198()
{
	if (aggregate.nb_animal_attack.func_161(32768))
	{
		aggregate.fme_animal_tagging.func_389(10);
	}
}

void func_199()
{
	aggregate.fme_animal_tagging.func_389(9);
}

void func_200()
{
	aggregate.fme_animal_tagging.func_389(12);
}

void func_201()
{
	if (aggregate.nb_animal_attack.func_161(65536) || PED::IS_PED_IN_VEHICLE(aggregate.la_alligator.func_212(0), aggregate.la_alligator.func_212(0), false))
	{
		aggregate.fme_animal_tagging.func_389(11);
	}
}

void func_202()
{
	if ((aggregate.nb_animal_attack.func_161(32) && aggregate.nb_animal_attack.func_161(512)) && aggregate.nb_animal_attack.func_161(256))
	{
		func_147(0, 1);
		aggregate.fme_animal_tagging.func_389(12);
	}
}

void func_203()
{
	if (aggregate.nb_animal_attack.func_161(128))
	{
		aggregate.fme_animal_tagging.func_389(13);
	}
}

void func_204()
{
	if (aggregate.nb_animal_attack.func_161(8192))
	{
		aggregate.fme_animal_tagging.func_389(13);
	}
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(0);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false) && !aggregate.barcustomer_interaction.func_46(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
	{
		func_147(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				aggregate.fme_animal_tagging.func_389(12);
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_389(13);
		}
	}
	if (aggregate.nb_animal_attack.func_161(4096))
	{
		aggregate.fme_animal_tagging.func_389(14);
	}
	if (aggregate.nb_animal_attack.func_161(1024))
	{
		aggregate.fme_animal_tagging.func_389(15);
	}
}

void func_206()
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && aggregate.nb_animal_attack.func_161(4194304))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(1)))
		{
			aggregate.fme_animal_tagging.func_389(15);
		}
		else if (ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(1)) && aggregate.nb_animal_attack.func_161(8388608))
		{
			aggregate.fme_animal_tagging.func_389(15);
		}
	}
}

int func_214(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -99878679;
				case 1:
					return -644062535;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -644062535;
				case 1:
					return -99878679;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("cart03");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("wagon05x");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("coach4");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("coach3");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1588362795;
		case 1:
			switch (func_216(0))
			{
				case joaat("cart03"):
					return -779334476;
				case joaat("wagon05x"):
					return 840935990;
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
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script_re@arms_deal";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "AMB_REST_SIT@WORLD_HUMAN_SIT_GROUND@FALL_ASLEEP@FEMALE_A@SLEEPING@base";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "AMB_MISC@WORLD_HUMAN_pee@MALE_A@idle_a";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
	}
	return "";
}

float func_222(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 152.1574f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 118.12f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 102.59f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -100.96f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -81.13f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 77.44f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -87.79f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_223(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (func_216(iParam0))
			{
				case joaat("wagon05x"):
					return -0.85f, 0.9f, 1.4f;
				case joaat("cart03"):
					return 0.6f, 0.7f, 0.65f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_224(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				if (PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					PED::_REMOVE_PED_FROM_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, vParam2, vParam5, iParam8, iParam10, 0, 0, 2, 1, iParam9, 0);
			}
		}
	}
}

Vector3 func_225(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (func_216(iParam0))
			{
				case joaat("wagon05x"):
					return 0f, -0.2f, 0.2f;
				case joaat("cart03"):
					return 0f, 0f, 0.1f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_226()
{
	aggregate.nb_crashed_wagon.func_237(0);
	func_293(0, func_292(0));
	if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
	{
		aggregate.nb_crashed_wagon.func_237(1);
		func_293(1, func_292(1));
	}
	if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
	{
		func_293(1, func_292(1));
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(aggregate.la_alligator.func_212(0), func_294(0)), true, true, true, false);
	}
}

void func_235()
{
	if (aggregate.nb_animal_attack.func_565())
	{
		return;
	}
	if (aggregate.fme_condor_egg.func_1292(aggregate.la_alligator.func_212(0), 0, &(Local_303.f_18.f_18), &(Local_303.f_18.f_49), 0, 0))
	{
		aggregate.nb_animal_attack.func_566(0);
	}
	func_309();
}

void func_237()
{
	Local_303.f_18.f_164 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[0 /*4*/])->f_1, false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_10[0 /*2*/])->f_1, false, false));
	Local_303.f_18.f_165 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[0 /*4*/])->f_1, false, false));
	if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
	{
		Local_303.f_18.f_166 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_1[1 /*4*/])->f_1, false, false), ENTITY::GET_ENTITY_COORDS((Local_303.f_18.f_10[0 /*2*/])->f_1, false, false));
	}
}

void func_238()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_310(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_239()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = aggregate.la_alligator.func_212(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		fVar2 = Local_303.f_18.f_165;
		if (fVar2 < 125f)
		{
			func_311();
		}
		if (fVar2 < 45f)
		{
			aggregate.nb_animal_attack.func_358();
		}
		if (fVar2 < 45f)
		{
			aggregate.nb_animal_attack.func_358();
		}
		switch (aggregate.fme_archery.func_268())
		{
			case 2:
			case 3:
				iVar0 = aggregate.la_alligator.func_212(1);
				if (!PED::IS_PED_IN_VEHICLE(iVar0, aggregate.la_alligator.func_212(0), false))
				{
					PED::SET_PED_INTO_VEHICLE(iVar0, aggregate.la_alligator.func_212(0), 1);
				}
				break;
			case 0:
			case 1:
				ENTITY::SET_ENTITY_HEADING(iVar1, func_222(0));
				break;
		}
		if (aggregate.fme_supply_train.func_928(iVar1, -2017877118, 1, 0))
		{
			TASK::TASK_PLAY_ANIM(iVar1, func_218(0), func_314(0), 1000f, -8f, -1, 1, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_240()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = aggregate.la_alligator.func_212(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		fVar3 = ENTITY::GET_ENTITY_SPEED(iVar2);
		if (fVar3 > 1f)
		{
			func_280();
			func_315(0, 0);
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				aggregate.la_alligator.func_227(2);
			}
			if (!aggregate.nb_animal_attack.func_161(1))
			{
				if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
				{
					func_317(aggregate.la_alligator.func_212(1), 5, 1);
				}
				if (func_281(0, iVar2, 8f, 1, 0))
				{
					aggregate.la_alligator.func_227(1);
				}
			}
			if (func_318(0, 0))
			{
				aggregate.la_alligator.func_227(16);
			}
		}
		else if (fVar3 <= 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 1, 1))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(iVar2, func_319(0), func_320(), 0.25f, 0);
				Local_303.f_18.f_162 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1271374678, iVar2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
			}
		}
	}
}

void func_241()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = aggregate.la_alligator.func_212(0);
	func_280();
	aggregate.nb_arrowhead_injury.func_142(0);
	func_315(0, 0);
	if (!aggregate.nb_crashed_wagon.func_392(4, 255))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			if (aggregate.nb_animal_attack.func_161(2))
			{
				func_322();
			}
			if (!func_318(0, 0) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (!aggregate.nb_crashed_wagon.func_392(2, 255))
				{
					aggregate.la_alligator.func_227(2);
				}
			}
			if (Local_303.f_18.f_165 > 20f && !aggregate.nb_crashed_wagon.func_392(16384, 255))
			{
				aggregate.la_alligator.func_227(16384);
			}
		}
		else
		{
			func_322();
			aggregate.la_alligator.func_227(16);
		}
	}
}

void func_242()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(aggregate.la_alligator.func_212(0), 1, 1))
	{
		func_323(0, 0);
		aggregate.nb_arrowhead_injury.func_142(0);
		if (!aggregate.nb_animal_attack.func_161(4))
		{
			func_318(0, 0);
		}
		else if (aggregate.nb_animal_attack.func_161(4))
		{
			if (!aggregate.nb_animal_attack.func_161(8))
			{
				aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1892463704, -400839231), 1);
				aggregate.nb_animal_attack.func_101(8);
			}
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(16))
	{
		func_322();
		aggregate.la_alligator.func_227(16);
	}
	if (!aggregate.nb_crashed_wagon.func_392(2048, 255) && PED::IS_PED_IN_VEHICLE(iVar1, aggregate.la_alligator.func_212(0), false))
	{
		switch (aggregate.fme_archery.func_268())
		{
			case 0:
			case 1:
				Local_303.f_18.f_163 = aggregate.camera_item.func_73("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
			case 2:
			case 3:
				Local_303.f_18.f_163 = aggregate.camera_item.func_73("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_COACH", 10000, 0, 0, 0, 1);
				break;
			default:
				Local_303.f_18.f_163 = aggregate.camera_item.func_73("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
		}
		aggregate.la_alligator.func_227(2048);
	}
	if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)) && (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_57)) > 15000 || (!func_328(18) && aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_57)) > 2000)))
		{
			if (!aggregate.fm_mission_controller.func_4265(1))
			{
				if (!func_328(18))
				{
					if (func_330(iVar0, iVar1, 18, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(19))
				{
					if (func_330(iVar0, iVar1, 19, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(20))
				{
					if (func_330(iVar0, iVar1, 20, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(21))
				{
					if (func_330(iVar0, iVar1, 21, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(22))
				{
					if (func_330(iVar0, iVar1, 22, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(23))
				{
					if (func_330(iVar0, iVar1, 23, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(24))
				{
					if (func_330(iVar0, iVar1, 24, 291934926, 0))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
					}
				}
				else if (!func_328(25))
				{
					func_330(iVar0, iVar1, 25, 291934926, 0);
				}
			}
			if (func_328(25) && aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_57)) > 17500)
			{
				if (!aggregate.nb_crashed_wagon.func_392(8, 255))
				{
					aggregate.la_alligator.func_227(8);
					aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
				}
			}
		}
		else if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
		{
			aggregate.barcustomer_interaction.func_25(&(Local_303.f_18.f_57), 0);
		}
	}
}

void func_243()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.la_alligator.func_212(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = aggregate.la_alligator.func_212(0);
	func_280();
	if (!aggregate.nb_crashed_wagon.func_392(4, 255))
	{
		if (!func_328(15))
		{
			AUDIO::_0x36559148B78853B3(1, false, 0);
			if (func_330(iVar0, iVar1, 15, 291934926, 0))
			{
				aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 1, 1))
		{
			if (!aggregate.nb_animal_attack.func_161(4))
			{
				func_318(0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1) == iVar1 && !aggregate.nb_crashed_wagon.func_392(4, 255))
				{
					aggregate.la_alligator.func_227(4);
				}
			}
		}
		else
		{
			func_322();
			aggregate.la_alligator.func_227(16);
		}
	}
}

void func_244()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_318(0, 1);
	func_332();
	aggregate.la_alligator.func_64();
	if (Local_303.f_18.f_164 < 45f)
	{
		if (aggregate.fme_supply_train.func_928(iVar0, -2017877118, 1, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_218(4), func_314(4), 1))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_218(4), func_314(4), iVar1, -1, 1090519040 /* Float: 8f */, -8f, 1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	aggregate.nb_arrowhead_injury.func_142(0);
	aggregate.nb_arrowhead_injury.func_142(0);
	if (Local_303.f_18.f_165 < 30f && !aggregate.nb_crashed_wagon.func_392(32768, 255))
	{
		aggregate.la_alligator.func_227(32768);
	}
	switch (aggregate.fme_archery.func_268())
	{
		case 2:
		case 3:
			iVar2 = aggregate.la_alligator.func_212(1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !VEHICLE::IS_VEHICLE_DRIVEABLE(aggregate.la_alligator.func_212(0), 0, 0))
			{
				switch (func_175())
				{
					case 7:
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							aggregate.butchercreek.func_92(iVar2, 0, 0);
						}
						break;
					default:
						if (aggregate.fme_supply_train.func_928(iVar2, 242628503, 1, 0) && !aggregate.fm_mission_controller.func_4265(1))
						{
							func_330(iVar2, iVar0, 36, 291934926, 0);
							TASK::OPEN_SEQUENCE_TASK(&((Local_303.f_18.f_1[1 /*4*/])->f_2));
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
							TASK::TASK_WALK_AWAY(0, iVar0);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
							aggregate.fme_condor_egg.func_1296(iVar2, &((Local_303.f_18.f_1[1 /*4*/])->f_2), 0, 0, 1, 1);
							if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)))
							{
								aggregate.barcustomer_interaction.func_25(&(Local_303.f_18.f_170), 0);
							}
						}
						break;
				}
			}
			break;
	}
}

void func_247()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(0);
	aggregate.nb_arrowhead_injury.func_142(0);
	if (!func_328(8))
	{
		AUDIO::_0x36559148B78853B3(1, false, 0);
		func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 8, 291934926, 0);
	}
	if (!aggregate.nb_animal_attack.func_161(65536))
	{
		if (aggregate.fme_archery.func_268() != 0)
		{
			if (aggregate.fme_supply_train.func_928(iVar0, -1794415470, 1, 0))
			{
				TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
				aggregate.la_alligator.func_227(65536);
			}
		}
		else if (aggregate.fme_supply_train.func_928(iVar0, -2015108952, 1, 0))
		{
			TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, iVar1, -1, 0.5f, 0f, 1.5f, 0);
			aggregate.la_alligator.func_227(65536);
		}
	}
	switch (aggregate.fme_archery.func_268())
	{
		case 2:
		case 3:
			if ((!ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(1)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0)) && ENTITY::GET_ENTITY_SPEED(iVar1) <= 0f)
			{
				if (!aggregate.nb_animal_attack.func_161(131072))
				{
					if (aggregate.fme_supply_train.func_928(aggregate.la_alligator.func_212(1), 242628503, 1, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&((Local_303.f_18.f_1[1 /*4*/])->f_2));
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						TASK::TASK_WALK_AWAY(0, iVar0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						aggregate.fme_condor_egg.func_1296(aggregate.la_alligator.func_212(1), &((Local_303.f_18.f_1[1 /*4*/])->f_2), 0, 0, 1, 1);
						func_330(aggregate.la_alligator.func_212(1), iVar0, 36, 291934926, 0);
						aggregate.la_alligator.func_227(131072);
					}
				}
			}
			break;
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(0);
	iVar2 = aggregate.la_alligator.func_212(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	aggregate.nb_arrowhead_injury.func_142(0);
	if (!PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false) && !aggregate.barcustomer_interaction.func_46(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
	{
		func_147(0, 1);
	}
	if (aggregate.nb_animal_attack.func_161(32))
	{
		func_335();
		aggregate.la_alligator.func_64();
	}
	if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		aggregate.nb_arrowhead_injury.func_142(0);
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			func_147(1, 1);
			if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
			{
				aggregate.barcustomer_interaction.func_25(&(Local_303.f_18.f_54), 0);
			}
			else if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_54)) >= 2000)
			{
				if (!aggregate.nb_crashed_wagon.func_392(256, 255))
				{
					if (aggregate.fme_supply_train.func_928(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 1, 0);
						aggregate.la_alligator.func_227(256);
					}
				}
				else if (!aggregate.nb_crashed_wagon.func_392(32, 255))
				{
					func_336();
				}
			}
		}
		else
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
			{
				if (aggregate.fme_supply_train.func_928(iVar0, 355471868, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (!aggregate.nb_crashed_wagon.func_392(32, 255))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar1, 6, 0);
				func_336();
			}
			aggregate.la_alligator.func_227(256);
		}
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar3));
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) <= 0.1f && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0) == iVar3) && aggregate.barcustomer_interaction.func_46(iVar0, -1794415470))
		{
			if (!AITRANSPORT::_0x660639BC60157048(iVar3, iVar1) && !aggregate.barcustomer_interaction.func_46(iVar3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_147(1, 1);
				}
				else
				{
					TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
				}
			}
		}
		if (aggregate.fme_archery.func_268() == 0)
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar1) <= 0.1f && aggregate.fme_condor_egg.func_831(iVar3, iVar0, 5f, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_147(1, 1);
						aggregate.la_alligator.func_227(256);
					}
					else if (!aggregate.nb_crashed_wagon.func_392(256, 255))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
						aggregate.la_alligator.func_227(256);
					}
				}
				else
				{
					AITRANSPORT::_0xBA8818212633500A(iVar1, 6, 1);
					if (aggregate.fme_supply_train.func_928(iVar0, -1794415470, 1, 0))
					{
						TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, -1, 1.5f, 8388673, 0);
					}
				}
			}
		}
		else if (aggregate.fme_supply_train.func_928(iVar0, -1794415470, 1, 0))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
		}
	}
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !aggregate.nb_animal_attack.func_161(512))
			{
				if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
				{
					func_330(iVar0, iVar3, 33, 291934926, 0);
					aggregate.la_alligator.func_227(512);
				}
			}
			break;
		case 2:
		case 3:
			if (!aggregate.fm_mission_controller.func_4265(1))
			{
				if (!func_328(26))
				{
					func_330(iVar2, iVar0, 26, 291934926, 0);
				}
				else if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !aggregate.nb_crashed_wagon.func_392(512, 255))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
					{
						func_330(iVar0, iVar3, 33, 291934926, 0);
						aggregate.la_alligator.func_227(512);
					}
				}
			}
			break;
	}
}

void func_249()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_10[0 /*2*/])))
	{
		MAP::REMOVE_BLIP(Local_303.f_18.f_10[0 /*2*/]);
	}
	func_332();
	if (Local_303.f_18.f_165 <= 20f)
	{
		if (!aggregate.nb_animal_attack.func_161(128))
		{
			if (!aggregate.fm_mission_controller.func_4265(1))
			{
				if (aggregate.nb_crashed_wagon.func_392(16384, 255))
				{
					func_330(iVar0, iVar1, 11, 291934926, 0);
				}
				else
				{
					func_330(iVar0, iVar1, 41, 291934926, 0);
				}
				aggregate.la_alligator.func_227(128);
			}
		}
	}
	else if (aggregate.nb_animal_attack.func_161(128))
	{
		if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
		{
			aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
		}
		else if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_54)) > 20000)
		{
			aggregate.la_alligator.func_227(128);
		}
	}
}

void func_250()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(0);
	if (aggregate.nb_animal_attack.func_161(1))
	{
		func_147(0, 1);
	}
	if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		if ((aggregate.fme_supply_train.func_928(iVar0, -1794415470, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, 20000, -1, 2f, 1, 0);
		}
	}
	else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
	{
		if (aggregate.fme_supply_train.func_928(iVar0, 355471868, 1, 0))
		{
			TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
		}
	}
	else if (!aggregate.nb_crashed_wagon.func_392(8192, 255))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar1, false))
		{
			if (!aggregate.fm_mission_controller.func_4265(1))
			{
				if (!func_328(9))
				{
					func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 9, 291934926, 0);
				}
				aggregate.la_alligator.func_227(8192);
			}
		}
	}
}

void func_251()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(0);
	iVar2 = aggregate.la_alligator.func_212(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (aggregate.nb_animal_attack.func_161(1))
	{
		func_147(0, 1);
	}
	func_332();
	if (!aggregate.nb_crashed_wagon.func_392(4096, 255))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			if (!aggregate.fm_mission_controller.func_4265(1))
			{
				func_330(iVar0, iVar3, 37, 291934926, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					func_330(iVar2, iVar3, 38, 291934926, 0);
				}
				aggregate.la_alligator.func_227(4096);
			}
			else
			{
				AUDIO::_0x36559148B78853B3(1, false, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1)) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == iVar0)
				{
					if (aggregate.fme_supply_train.func_928(iVar0, -258271821, 1, 0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, -1976316465);
						aggregate.nb_arrowhead_injury.func_142(0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iVar1, 3f, 67633287);
					}
					if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						aggregate.barcustomer_interaction.func_25(&(Local_303.f_18.f_170), 0);
					}
				}
				else if (aggregate.fme_supply_train.func_928(iVar0, 355471868, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (aggregate.fme_supply_train.func_928(iVar0, -1146898486, 1, 0) && !aggregate.fm_mission_controller.func_4265(1))
			{
				if (!func_328(12))
				{
					func_330(iVar0, iVar3, 12, 291934926, 0);
				}
				aggregate.nb_arrowhead_injury.func_142(0);
				if (!aggregate.fm_mission_controller.func_4265(1) || func_328(12))
				{
					TASK::TASK_WANDER_STANDARD(iVar0, 40000f, 0);
					if (!aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						aggregate.barcustomer_interaction.func_25(&(Local_303.f_18.f_170), 0);
					}
				}
			}
		}
		switch (aggregate.fme_archery.func_268())
		{
			case 0:
			case 1:
				if (aggregate.barcustomer_interaction.func_46(iVar0, -258271821))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
						{
							if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)))
							{
								if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_170)) >= 15000)
								{
									if (!func_328(13))
									{
										func_330(iVar0, iVar3, 13, 291934926, 0);
										aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_170));
									}
									else
									{
										aggregate.la_alligator.func_227(4096);
									}
								}
							}
						}
					}
					else if (!aggregate.nb_crashed_wagon.func_392(1024, 255))
					{
						aggregate.la_alligator.func_227(1024);
					}
				}
				break;
			case 2:
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 1, 1))
				{
					if (!aggregate.fm_mission_controller.func_4265(1))
					{
						func_330(iVar2, iVar0, 35, 291934926, 0);
						if (!aggregate.fm_mission_controller.func_4265(1))
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
							{
								if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
								{
									if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)))
									{
										if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_170)) >= 15000)
										{
											if (!func_328(13))
											{
												func_330(iVar0, iVar3, 13, 291934926, 0);
												aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_170));
											}
											else
											{
												aggregate.la_alligator.func_227(4096);
											}
										}
									}
								}
							}
							else if (!aggregate.nb_crashed_wagon.func_392(1024, 255))
							{
								aggregate.la_alligator.func_227(1024);
							}
						}
					}
				}
				break;
		}
	}
}

void func_252()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(1);
	aggregate.la_alligator.func_64();
	func_309();
	if (ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(0)))
	{
		AITRANSPORT::_0xBA8818212633500A(aggregate.la_alligator.func_212(0), 6, 0);
	}
	if (aggregate.nb_animal_attack.func_161(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_147(0, 1);
	}
	aggregate.nb_arrowhead_injury.func_142(0);
	if (!aggregate.nb_animal_attack.func_161(64))
	{
		if (aggregate.la_alligator.func_104(64, 255))
		{
			if (aggregate.nb_animal_attack.func_161(32))
			{
				aggregate.fme_challenges.func_1108(-1315007749, 1, 0);
			}
			aggregate.fme_challenges.func_1108(-1315007749, 1, 0);
			aggregate.la_alligator.func_227(64);
		}
	}
	if (!aggregate.nb_animal_attack.func_161(262144) && AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, false, 0);
	}
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			aggregate.nb_arrowhead_injury.func_142(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (aggregate.camera_item.func_12(&(Local_303.f_18.f_18)) == iVar1 || aggregate.nb_crashed_wagon.func_392(16, 255))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar1, aggregate.la_alligator.func_212(0), false))
					{
						func_330(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 40, 291934926, 0);
					}
					else
					{
						func_330(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 39, 291934926, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iVar1, aggregate.la_alligator.func_212(0), false))
				{
					if (aggregate.fme_supply_train.func_928(iVar1, -828834893, 1, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 64);
					}
				}
				else if (aggregate.fme_supply_train.func_928(iVar1, 518218985, 1, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 131072, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar1, true);
				}
			}
			if (!aggregate.nb_animal_attack.func_161(262144))
			{
				if ((!aggregate.nb_crashed_wagon.func_392(262144, 255) && aggregate.nb_animal_attack.func_161(2097152)) && ENTITY::DOES_ENTITY_EXIST(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4)))
				{
					if (ENTITY::IS_ENTITY_DEAD(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4)) && aggregate.nb_arrowhead_injury.func_248(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4), PLAYER::PLAYER_PED_ID()))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
					if (!aggregate.nb_crashed_wagon.func_392(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
				}
				if ((!aggregate.nb_crashed_wagon.func_392(262144, 255) && aggregate.nb_animal_attack.func_161(2097152)) && ENTITY::DOES_ENTITY_EXIST(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5)))
				{
					if (ENTITY::IS_ENTITY_DEAD(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5)) && aggregate.nb_arrowhead_injury.func_248(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5), PLAYER::PLAYER_PED_ID()))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
					if (!aggregate.nb_crashed_wagon.func_392(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
				}
				if (aggregate.nb_animal_attack.func_161(1048576))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(aggregate.la_alligator.func_212(0), 0, 0))
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 29, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
					else
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 30, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
				}
				if (!aggregate.nb_crashed_wagon.func_392(262144, 255))
				{
					if (Local_303.f_18.f_49 == 4 && PED::IS_PED_IN_VEHICLE(iVar0, aggregate.la_alligator.func_212(0), false))
					{
					}
					else
					{
						func_330(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 28, 291934926, 0);
						aggregate.la_alligator.func_227(262144);
					}
				}
			}
			if (aggregate.fme_supply_train.func_928(iVar0, 518218985, 1, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iVar0, true);
			}
			break;
		default:
			func_323(0, 942020339);
			if (aggregate.fme_supply_train.func_928(iVar0, -2117564886, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1082130432 /* Float: -1f */);
			}
			break;
	}
}

Vector3 func_267(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1005.419f, 394.8897f, 106.023f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1465.514f, -821.0334f, 50.2372f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1064.807f, -666.0024f, 72.54981f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1462.952f, -1929.859f, 48.4187f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4988.295f, -3902.346f, -0.03286f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2770.473f, -2936.506f, 64.84297f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1209.61f, -1812.165f, 61.23543f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1706.993f, -580.9286f, 149.93f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 803.0057f, -584.7925f, 79.32288f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1778.236f, -1731.359f, 48.27552f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_271(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(aggregate.la_alligator.func_212(0), func_294(0));
				default:
					break;
			}
			break;
		case 2:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.194f, 416.5319f, 107.9176f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1459.162f, -816.478f, 50.8f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1067.848f, -660.8389f, 73.9091f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1478.645f, -1927.927f, 50.5109f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4978.948f, -3935.828f, -1.20681f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2792.854f, -2917.176f, 64.91064f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.247f, -1835.006f, 60.02811f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.842f, -567.6793f, 151.3843f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 779.8277f, -555.053f, 81.8032f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1789.877f, -1720.11f, 47.22703f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1000.25f, 416.0489f, 107.922f;
						case 1:
							return 1007.829f, 394.7444f, 105.9673f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1457.417f, -815.7565f, 51.4422f;
						case 1:
							return 1464.491f, -818.6865f, 50.3422f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1069.886f, -700.0854f, 69.16559f;
						case 1:
							return -1080.563f, -694.8763f, 70.716f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1481.92f, -1931.187f, 50.5561f;
						case 1:
							return -1404.974f, -1974.068f, 43.4572f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -4973.871f, -3908.567f, -0.00444f;
						case 1:
							return -4970.921f, -3904.763f, 0.23977f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2794.634f, -2913.186f, 64.5452f;
						case 1:
							return -2789.23f, -2916.685f, 64.88538f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1205.337f, -1834.095f, 60.10693f;
						case 1:
							return -1203.489f, -1834.47f, 60.01749f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1703.747f, -568.5468f, 151.2257f;
						case 1:
							return -1696.972f, -570.4977f, 150.1555f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 788.1982f, -572.1707f, 76.62916f;
						case 1:
							return 792.2842f, -571.7909f, 76.54204f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1791.243f, -1721.538f, 46.98846f;
						case 1:
							return 1793.195f, -1721.64f, 46.91535f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_272(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 88.6731f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 185.2506f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 354.0873f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 345.4393f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 349.1927f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 314.2285f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 293.9746f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 330.3398f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 230.5268f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 193.5557f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 94.6824f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 8.2937f;
						case 1:
							return 78.3595f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 267.2346f;
						case 1:
							return 205.9675f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 138.5708f;
						case 1:
							return 138.5708f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 331.738f;
						case 1:
							return 224.5939f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 93.08f;
						case 1:
							return 93.08f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -17.49f;
						case 1:
							return -17.49f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 179.9f;
						case 1:
							return 179.9f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 14.07f;
						case 1:
							return -149.83f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 36.91f;
						case 1:
							return 36.91f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 2.27f;
						case 1:
							return -127.45f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_279(vector3 vParam0)
{
	if (!aggregate.aberdeenpigfarm.func_165(Local_303.f_13))
	{
		aggregate.la_alligator.func_102(&(Local_303.f_13));
	}
	if (aggregate.la_alligator.func_103(Local_303.f_13) < Global_1901929->f_230.f_64)
	{
		return;
	}
	func_356(Local_303.f_9, vParam0, 0, Local_303.f_12);
	aggregate.camera_item.func_21(&(Local_303.f_13));
}

void func_280()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = Local_303.f_18.f_165;
	if (fVar3 < 45f || !func_328(5))
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_54)))
		{
			if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
			{
				if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_54)) > 4000 || !func_328(5))
				{
					if (!func_328(0))
					{
						if (func_330(aggregate.la_alligator.func_212(0), iVar2, 0, 291934926, 0))
						{
							aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
						}
					}
					else if (!func_328(5))
					{
						if (func_317(iVar0, 2, 0))
						{
							if (func_330(iVar0, iVar2, 5, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (!func_328(6))
					{
						if (func_317(iVar0, 3, 0))
						{
							if (func_330(iVar0, iVar2, 6, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (!func_328(7))
					{
						if (func_317(iVar0, 3, 0))
						{
							if (func_330(iVar0, iVar2, 7, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
							}
						}
					}
					else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 20f)
					{
						if (!func_328(34))
						{
							if (func_330(iVar0, iVar2, 34, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_54));
							}
						}
					}
				}
			}
		}
		else
		{
			aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_54));
		}
	}
	if (aggregate.fme_archery.func_268() == 2 || aggregate.fme_archery.func_268() == 3)
	{
		iVar1 = aggregate.la_alligator.func_212(1);
		fVar3 = Local_303.f_18.f_166;
		if (fVar3 < 45f)
		{
			if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_57)))
			{
				if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_57)) > 4000 || (!func_328(2) && aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_57)) > 1000))
				{
					if (!AUDIO::_0x54B187F111D9C6F8(iVar1, 1))
					{
						if (!aggregate.nb_animal_attack.func_161(1))
						{
							if (!func_328(1))
							{
								if (func_330(iVar1, iVar2, 1, 291934926, 0))
								{
									aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
								}
							}
						}
						else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), false, false), func_319(0)) < 15f)
						{
							if (!func_328(17))
							{
								func_330(iVar1, iVar2, 17, 1744022339, 1);
							}
						}
						else if (!func_328(2))
						{
							if (func_330(iVar1, iVar2, 2, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
							}
						}
						else if (!func_328(3))
						{
							if (func_330(iVar1, iVar2, 3, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
							}
						}
						else if (!func_328(4))
						{
							if (func_330(iVar1, iVar2, 4, 1744022339, 1))
							{
								aggregate.barcustomer_interaction.func_50(&(Local_303.f_18.f_57));
							}
						}
					}
				}
			}
			else
			{
				aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_57));
			}
		}
	}
}

bool func_281(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(iParam0);
	if (!aggregate.nb_animal_attack.func_161(1))
	{
		if (aggregate.fme_condor_egg.func_1287(iVar0, func_271(iParam0), fParam2, 1, 1))
		{
			if (aggregate.fme_supply_train.func_928(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iParam1, -1, 0.01f, 3f, 0.1f, 0);
			}
		}
		else if (bParam4 || func_317(iVar0, iParam3, 0))
		{
			aggregate.la_alligator.func_227(1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_288(int iParam0)
{
	int iVar0;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case 1146780397:
			func_359(iParam0->f_11);
			break;
	}
}

char* func_292(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE4";
				case 1:
					return "RE005_MALE5";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE4";
				case 1:
					return "RE005_FEMALE6";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_293(int iParam0, char* sParam1)
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		aggregate.fme_escaped_convicts.func_1516(&(Local_303.f_18.f_60), iVar0, sParam1, 1);
	}
}

Vector3 func_294(int iParam0)
{
	int iVar0;

	iVar0 = func_216(iParam0);
	switch (iVar0)
	{
		case joaat("wagon05x"):
			return 0.1f, -2.65f, 0f;
		case joaat("cart03"):
			return 0f, -2.7f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_309()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.la_alligator.func_212(0);
	iVar1 = aggregate.la_alligator.func_212(1);
	if (!aggregate.nb_crashed_wagon.func_392(4194304, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (aggregate.nb_arrowhead_injury.func_248(iVar0, PLAYER::PLAYER_PED_ID()))
				{
					aggregate.fme_challenges.func_1108(151445061, 1, 0);
				}
				aggregate.la_alligator.func_227(4194304);
			}
		}
		else
		{
			aggregate.la_alligator.func_227(4194304);
		}
	}
	if (!aggregate.nb_crashed_wagon.func_392(8388608, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (aggregate.nb_arrowhead_injury.func_248(iVar1, PLAYER::PLAYER_PED_ID()))
				{
					aggregate.fme_challenges.func_1108(151445061, 1, 0);
				}
				aggregate.la_alligator.func_227(8388608);
			}
		}
		else
		{
			aggregate.la_alligator.func_227(8388608);
		}
	}
}

void func_310(int iParam0)
{
	struct<2> Var0;
	struct<6> Var31;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	Var31.f_3 = 255;
	Var31.f_4 = -1;
	Var31.f_5 = 623901053;
	if (!aggregate.fme_treasure_hunt.func_1345(Var0.f_1, &Var31))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
	{
		if (NETWORK::NET_TO_ENT(&(Local_13.f_7.f_4[0])) == Var0)
		{
			if (Var31.f_3 == PLAYER::PLAYER_ID())
			{
				if (!aggregate.nb_crashed_wagon.func_392(1048576, 255))
				{
					aggregate.la_alligator.func_227(1048576);
				}
			}
		}
	}
	else if (aggregate.fm_deathmatch_controller.func_565(Var0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4)) && aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 4) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)) || (ENTITY::DOES_ENTITY_EXIST(aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5)) && aggregate.nb_runaway_wagon.func_341(aggregate.la_alligator.func_212(0), 5) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)))
		{
			if (Var31.f_3 == PLAYER::PLAYER_ID())
			{
				if (!aggregate.nb_crashed_wagon.func_392(2097152, 255))
				{
					aggregate.la_alligator.func_227(2097152);
				}
			}
		}
	}
}

void func_311()
{
	if (!aggregate.nb_crashed_wagon.func_522(255))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_18.f_161))
	{
		Local_303.f_18.f_161 = MAP::_0x554D9D53F696D002(1260140857, func_267(0));
	}
}

char* func_314(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "base_b_con01";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "base";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "idle_a";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
	}
	return "";
}

void func_315(int iParam0, int iParam1)
{
	if (!aggregate.nb_crashed_wagon.func_522(255) || aggregate.dynamic_craft_scenario.func_370((Local_303.f_18.f_10[iParam0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		aggregate.nb_arrowhead_injury.func_142(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_10[iParam0 /*2*/])))
	{
		Local_303.f_18.f_10[iParam0 /*2*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate.la_alligator.func_212(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_303.f_18.f_10[iParam0 /*2*/]), "NB_RUNAWAY_WAGON_WAGON_BLIP");
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_303.f_18.f_10[iParam0 /*2*/]), 942020339);
	}
}

bool func_317(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_218(iParam1), func_314(iParam1), 1))
	{
		if (aggregate.fme_supply_train.func_928(iParam0, -2017877118, 1, 1))
		{
			TASK::TASK_PLAY_ANIM(iParam0, func_218(iParam1), func_314(iParam1), 8f, -8f, -1, iParam2, 0, 0, 0, 0, 0, 0);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_318(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = aggregate.la_alligator.func_212(iParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 1, 1))
	{
		if (((bParam1 || aggregate.fme_condor_egg.func_1287(iVar0, func_319(0), 5f, 1, 1)) || (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0f && VEHICLE::_0x2963B5C1637E8A27(iVar0) == 0)) || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && ENTITY::_0x6D58167F62238284(iVar0) > 1300f))
		{
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 0, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 1, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 4, 100f);
			VEHICLE::_0xC372B6A88F6E4AD8(iVar0, 5, 100f);
		}
	}
	else
	{
		if (aggregate.nb_crashed_wagon.func_392(2048, 255))
		{
			_NAMESPACE71::_0x2F901291EF177B02(Local_303.f_18.f_163, 0);
		}
		return true;
	}
	return false;
}

Vector3 func_319(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
		case 1:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1597f, 399.2163f, 115.4505f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1518.894f, -918.9427f, 46.80691f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_175())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 821.1113f, 398.5637f, 115.5872f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1520.362f, -922.1479f, 43.6722f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1156.839f, -815.8845f, 55.74f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -1340.115f, -2030.458f, 40.5f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -5173.292f, -4038.162f, -3.71893f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -2951.436f, -2963.278f, 64.43025f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1089.897f, -1862.488f, 54.81799f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1633.095f, -568.5085f, 136.6335f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 673.0834f, -555.8438f, 72.57526f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1883.51f, -1727.298f, 41.46875f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_320()
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			return 8f;
		case 1:
			return 8f;
		case 2:
			return 8f;
		case 3:
			return 8f;
		default:
			break;
	}
	return 3f;
}

void func_322()
{
	if (!aggregate.nb_crashed_wagon.func_392(524288, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(0), true, false)) <= 15f)
		{
			aggregate.nb_animal_attack.func_101(4);
		}
		aggregate.nb_animal_attack.func_446();
		aggregate.la_alligator.func_227(524288);
	}
}

void func_323(int iParam0, int iParam1)
{
	char* sVar0;

	if (!aggregate.nb_crashed_wagon.func_522(255) || aggregate.dynamic_craft_scenario.func_370((Local_303.f_18.f_1[iParam0 /*4*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 150f)
	{
		aggregate.nb_arrowhead_injury.func_142(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_303.f_18.f_1[iParam0 /*4*/])))
	{
		Local_303.f_18.f_1[iParam0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate.la_alligator.func_212(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_RUNAWAY_WAGON_DRIVER_BLIP";
				break;
			case 1:
				sVar0 = "NB_RUNAWAY_WAGON_PASSENGER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_303.f_18.f_1[iParam0 /*4*/]), sVar0);
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_303.f_18.f_1[iParam0 /*4*/]), 942020339);
	}
}

bool func_328(int iParam0)
{
	return aggregate.annesburg.func_264(&(Local_303.f_18.f_50), iParam0, 2);
}

bool func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	func_416(iParam0, iParam2);
	return true;
}

void func_332()
{
	if (((aggregate.nb_animal_attack.func_161(16) && !aggregate.nb_animal_attack.func_161(4096)) && ENTITY::DOES_ENTITY_EXIST(aggregate.la_alligator.func_212(1))) && !ENTITY::IS_ENTITY_DEAD(aggregate.la_alligator.func_212(1)))
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_303.f_18.f_170)))
		{
			if (aggregate.barcustomer_interaction.func_54(&(Local_303.f_18.f_170)) >= 15000 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(aggregate.la_alligator.func_212(1), true, false)) < 20f)
			{
				if (!func_328(14))
				{
					func_330(aggregate.la_alligator.func_212(1), PLAYER::PLAYER_PED_ID(), 14, 291934926, 0);
					aggregate.barcustomer_interaction.func_43(&(Local_303.f_18.f_170));
				}
				else
				{
					aggregate.la_alligator.func_227(4096);
				}
			}
		}
	}
}

void func_335()
{
	if (!aggregate.nb_animal_attack.func_161(2))
	{
		if (aggregate.nb_animal_attack.func_161(4))
		{
			aggregate.fme_challenges.func_1108(-326224139, 0, 0);
		}
		aggregate.nb_animal_attack.func_598();
		aggregate.nb_animal_attack.func_101(2);
	}
}

int func_336()
{
	if (!aggregate.nb_crashed_wagon.func_392(32, 255) && aggregate.nb_animal_attack.func_161(4))
	{
		aggregate.doc_book.func_171(-419165566, 0, 255, 0, 0);
		aggregate.la_alligator.func_227(32);
		func_419();
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_348(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 26, &(Global_1051202->f_16[15]));
	aggregate.bigvalleyomj.func_36(uParam0, uParam0->f_1);
}

void func_356(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (aggregate.annesburg.func_121(vParam2))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_20 = 255;
	Var0.f_5 = { Param0 };
	Var0.f_17 = { vParam2 };
	Var0.f_15 = uParam6;
	Var0.f_16 = iParam5;
	Var0.f_4 = 0;
	func_427(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
}

void func_359(int iParam0)
{
	int iVar0;

	if (aggregate.annesburg.func_264(&(Local_303.f_18.f_50), iParam0, 2))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if ((Local_303.f_18.f_1[iVar0 /*4*/])->f_3 != -1 && aggregate.fm_mission_controller.func_3723(func_430((Local_303.f_18.f_1[0 /*4*/])->f_3)))
	{
		return;
	}
	func_432(iParam0);
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_303.f_18.f_60), aggregate.fme_escaped_convicts.func_1689(func_430(iParam0)), 0, -1, 0, 0))
	{
		aggregate.annesburg.func_240(&(Local_303.f_18.f_50), iParam0, 2);
	}
}

int func_364(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2051247205;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -479904964;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -509232723;
				case 1:
					return 149367980;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -490827428;
				case 1:
					return -1747475060;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_416(int iParam0, int iParam1)
{
	var uVar0;
	struct<15> Var1;

	if (aggregate.annesburg.func_264(&(Local_303.f_18.f_50), iParam1, 2))
	{
		return;
	}
	if (AUDIO::_0x54B187F111D9C6F8(iParam0, 1))
	{
		return;
	}
	uVar0 = aggregate.dynamic_craft_scenario.func_297(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 30f, 30f, 20f, 665633627, 0, 8);
	Var1 = { aggregate.nb_animal_attack.func_497(1146780397) };
	Var1.f_11 = iParam1;
	func_495(&Var1, uVar0);
}

void func_419()
{
	if (!aggregate.nb_animal_attack.func_161(2))
	{
		aggregate.fme_challenges.func_1108(-326224139, 0, 0);
		aggregate.nb_animal_attack.func_598();
		aggregate.nb_animal_attack.func_101(2);
	}
}

void func_427(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 30, &uParam1);
}

int func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 35:
		case 36:
		case 38:
			return 1;
	}
	return 2;
}

char* func_430(int iParam0)
{
	switch (aggregate.fme_archery.func_268())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTS_WSD1";
				case 5:
					return "ORERW_CTS_HLP1";
				case 6:
					return "ORERW_CTS_HLP2";
				case 7:
					return "ORERW_CTS_HLP3";
				case 8:
					return "ORERW_CTS_THK1";
				case 9:
					return "ORERW_CTS_BYE1";
				case 10:
					return "ORERW_CTS_STAY";
				case 11:
					return "ORERW_CTS_FAIL";
				case 12:
					return "ORERW_CTS_BYEF";
				case 13:
					return "ORERW_CTS_FOLW1";
				case 28:
					return "ORERW_CTS_AGGD";
				case 29:
					return "ORERW_CTS_AGGW";
				case 30:
					return "ORERW_CTS_DESW";
				case 32:
					return "ORERW_CTS_DESH";
				case 31:
					return "ORERW_CTS_AGGH";
				case 33:
					return "ORERW_CTS_TAKE";
				case 34:
					return "ORERW_CTS_STAY";
				case 37:
					return "ORERW_CTS_HOP";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTL_WSD1";
				case 5:
					return "ORERW_CTL_HLP1";
				case 6:
					return "ORERW_CTL_HLP2";
				case 7:
					return "ORERW_CTL_HLP3";
				case 8:
					return "ORERW_CTL_THK1";
				case 9:
					return "ORERW_CTL_BYE1";
				case 10:
					return "ORERW_CTL_STAY";
				case 11:
					return "ORERW_CTL_FAIL";
				case 12:
					return "ORERW_CTL_BYEF";
				case 13:
					return "ORERW_CTL_FOLW1";
				case 28:
					return "ORERW_CTL_AGGD";
				case 29:
					return "ORERW_CTL_AGGW";
				case 30:
					return "ORERW_CTL_DESW";
				case 32:
					return "ORERW_CTL_DESH";
				case 31:
					return "ORERW_CTL_AGGH";
				case 33:
					return "ORERW_CTL_TAKE";
				case 34:
					return "ORERW_CTL_STAY";
				case 37:
					return "ORERW_CTL_HOP";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHS_WSP";
				case 0:
					return "ORERW_CHS_WSD";
				case 5:
					return "ORERW_CHS_HLP1";
				case 6:
					return "ORERW_CHS_HLP2";
				case 7:
					return "ORERW_CHS_HLP3";
				case 2:
					return "ORERW_CHS_HPP1";
				case 3:
					return "ORERW_CHS_HPP2";
				case 4:
					return "ORERW_CHS_HPP3";
				case 15:
					return "ORERW_CHS_ONW";
				case 16:
					return "ORERW_CHS_ONWB";
				case 17:
					return "ORERW_CHS_DEAD";
				case 36:
					return "ORERW_CHS_CRSH";
				case 41:
					return "ORERW_CHS_CRSB";
				case 13:
					return "ORERW_CHS_FOLW1";
				case 14:
					return "ORERW_CHS_FOLP";
				case 18:
					return "ORERW_CHS_BCK1";
				case 19:
					return "ORERW_CHS_BCK2";
				case 20:
					return "ORERW_CHS_BCK3";
				case 21:
					return "ORERW_CHS_BCK4";
				case 22:
					return "ORERW_CHS_BCK5";
				case 23:
					return "ORERW_CHS_BCK6";
				case 24:
					return "ORERW_CHS_BCK7";
				case 25:
					return "ORERW_CHS_BCK8";
				case 8:
					return "ORERW_CHS_THK1";
				case 26:
					return "ORERW_CHS_SCLD";
				case 33:
					return "ORERW_CHS_TAKE";
				case 35:
					return "ORERW_CHS_BNTP1";
				case 31:
					return "ORERW_CHS_AGGH";
				case 9:
					return "ORERW_CHS_BYE1";
				case 11:
					return "ORERW_CHS_FAIL";
				case 12:
					return "ORERW_CHS_BYEF";
				case 28:
					return "ORERW_CHS_AGGD";
				case 29:
					return "ORERW_CHS_AGGW";
				case 30:
					return "ORERW_CHS_DESW";
				case 32:
					return "ORERW_CHS_DESH";
				case 37:
					return "ORERW_CHS_HOPD";
				case 38:
					return "ORERW_CHS_HOPP";
				case 39:
					return "ORERW_CHS_AGGP";
				case 40:
					return "ORERW_CHS_AGPW";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHL_WSP";
				case 0:
					return "ORERW_CHL_WSD";
				case 5:
					return "ORERW_CHL_HLP1";
				case 6:
					return "ORERW_CHL_HLP2";
				case 7:
					return "ORERW_CHL_HLP3";
				case 2:
					return "ORERW_CHL_HPP1";
				case 3:
					return "ORERW_CHL_HPP2";
				case 4:
					return "ORERW_CHL_HPP3";
				case 15:
					return "ORERW_CHL_ONW";
				case 16:
					return "ORERW_CHL_ONWB";
				case 17:
					return "ORERW_CHL_DEAD";
				case 36:
					return "ORERW_CHL_CRSH";
				case 41:
					return "ORERW_CHL_CRSB";
				case 13:
					return "ORERW_CHL_FOLW1";
				case 14:
					return "ORERW_CHL_FOLP";
				case 18:
					return "ORERW_CHL_BCK1";
				case 19:
					return "ORERW_CHL_BCK2";
				case 20:
					return "ORERW_CHL_BCK3";
				case 21:
					return "ORERW_CHL_BCK4";
				case 22:
					return "ORERW_CHL_BCK5";
				case 23:
					return "ORERW_CHL_BCK6";
				case 24:
					return "ORERW_CHL_BCK7";
				case 25:
					return "ORERW_CHL_BCK8";
				case 8:
					return "ORERW_CHL_THK1";
				case 26:
					return "ORERW_CHL_SCLD";
				case 33:
					return "ORERW_CHL_TAKE";
				case 35:
					return "ORERW_CHL_BNTP1";
				case 31:
					return "ORERW_CHL_AGGH";
				case 9:
					return "ORERW_CHL_BYE1";
				case 11:
					return "ORERW_CHK_FAIL";
				case 12:
					return "ORERW_CHL_BYEF";
				case 28:
					return "ORERW_CHL_AGGD";
				case 29:
					return "ORERW_CHL_AGGW";
				case 30:
					return "ORERW_CHL_DESW";
				case 32:
					return "ORERW_CHL_DESH";
				case 37:
					return "ORERW_CHL_HOPD";
				case 38:
					return "ORERW_CHL_HOPP";
				case 39:
					return "ORERW_CHL_AGGP";
				case 40:
					return "ORERW_CHL_AGPW";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			aggregate.fme_escaped_convicts.func_1516(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[0 /*4*/])->f_1, func_292(0), 0);
			(Local_303.f_18.f_1[0 /*4*/])->f_3 = iParam0;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 36:
		case 38:
			aggregate.fme_escaped_convicts.func_1516(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[1 /*4*/])->f_1, func_292(1), 0);
			(Local_303.f_18.f_1[1 /*4*/])->f_3 = iParam0;
			break;
		case 26:
		case 35:
			aggregate.fme_escaped_convicts.func_1516(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[0 /*4*/])->f_1, func_292(0), 0);
			aggregate.fme_escaped_convicts.func_1516(&(Local_303.f_18.f_60), (Local_303.f_18.f_1[1 /*4*/])->f_1, func_292(1), 0);
			(Local_303.f_18.f_1[0 /*4*/])->f_3 = iParam0;
			(Local_303.f_18.f_1[1 /*4*/])->f_3 = iParam0;
			break;
	}
}

void func_495(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 9, &uParam1);
}

