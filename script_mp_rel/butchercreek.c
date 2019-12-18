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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[5] = { 0, 0, 0, 0, 0 };
	var uLocal_37[5] = { 0, 0, 0, 0, 0 };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_49[5] = { 0, 0, 0, 0, 0 };
	int iLocal_55[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_61[5] = { NULL, NULL, NULL, NULL, NULL };
	vector3 vLocal_67[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_83[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_99[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_105 = 0;
	bool bLocal_106 = false;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_29 = joaat("p_detonator01x");
	iLocal_30 = -227367034;
	iLocal_107 = 20000;
	iLocal_110 = vScriptParam_0.x;
	iLocal_108 = vScriptParam_0.z;
	bLocal_112 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_109 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_109)
		{
			iLocal_109 = 0;
			aggregate_func_4561(iLocal_110, &iLocal_108);
			switch (iLocal_108)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_111 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_108 = 1;
					}
					else
					{
						iLocal_108 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_111 < MISC::GET_GAME_TIMER())
					{
						bLocal_112 = false;
						iLocal_108 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_110);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_110)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_110), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_110));
					Global_1896608 = -1;
					iLocal_111 = (iLocal_107 + MISC::GET_GAME_TIMER());
					iLocal_108 = 3;
					break;
				case 3:
					if (func_13() || iLocal_111 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_110);
						iLocal_111 = (iLocal_107 + MISC::GET_GAME_TIMER());
						iLocal_108 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_110) || iLocal_111 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_110);
						iLocal_111 = (MISC::GET_GAME_TIMER() + iLocal_107);
						iLocal_108 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_110) || iLocal_111 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_110);
						iLocal_111 = (iLocal_107 + MISC::GET_GAME_TIMER());
						iLocal_108 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_110)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_110), 4) && !iLocal_111 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_110) || iLocal_111 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_110, 4);
								iLocal_111 = (iLocal_107 + MISC::GET_GAME_TIMER());
								iLocal_108 = 8;
							}
							Jump @827; //curOff = 543
							aggregate_func_4245(iLocal_110);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4238();
							func_29(iLocal_110);
							aggregate_func_4762(iLocal_110);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_108 = 9;
							Jump @827; //curOff = 611
							aggregate_func_7690(iLocal_110);
							aggregate_func_2893();
							iLocal_108 = 10;
							Jump @827; //curOff = 628
							aggregate_func_4554(Global_1896662);
							aggregate_func_8695(iLocal_110, Global_1896662);
							iLocal_108 = 11;
							Jump @827; //curOff = 653
							aggregate_func_4588(iLocal_110);
							aggregate_func_4343(iLocal_110, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_108 = 12;
							Jump @827; //curOff = 703
							if (func_40(iLocal_110))
							{
								iLocal_109 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_110);
							aggregate_func_4467(iLocal_110);
							aggregate_func_4343(iLocal_110, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_110 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_110 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_110 /*36*/])->f_12);
							}
							Jump @827; //curOff = 804
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_110 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_110 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate_func_917(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate_func_4251() != -1)
						{
							aggregate_func_2819();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[87 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 22);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 2595.509f, 778.3701f, 87.90205f, 0f, 0f, 70f, 2.456799f, 2.667848f, 2.166918f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 2593.104f, 779.3081f, 87.87495f, 0f, 0f, 70.00001f, 5.401831f, 2.666181f, 2.080325f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10082);
	func_53();
	if (aggregate_func_4251() != -1)
	{
	}
	return true;
}

void func_16(int iParam0)
{
	int iVar0;

	if (aggregate_func_4251() == -1)
	{
		func_54();
		STREAMING::REQUEST_MODEL(iLocal_29, false);
		STREAMING::REQUEST_MODEL(iLocal_30, false);
		PED::_0xED9582B3DA8F02B4(5);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			STREAMING::REQUEST_MODEL(&(iLocal_55[iVar0]), false);
			iVar0++;
		}
	}
}

int func_17(int iParam0)
{
	if (aggregate_func_4251() == -1)
	{
		return func_55();
	}
	return 1;
}

void func_29(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_8095(iParam0);
	}
}

bool func_40(int iParam0)
{
	func_66();
	if (aggregate_func_6721(&bLocal_106))
	{
		if (bLocal_106)
		{
			aggregate_func_6624(1074283306, 1);
		}
	}
	return false;
}

void func_53()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 50.23434f, 27.58518f, 8.132094f, "Butcher Creek - m_volFarmerRegistration");
		iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_26, 2696.193f, 704.9335f, 76.68376f, 0f, 0f, 88.96565f, 4.466922f, 1.336465f, 4.423785f);
		VOLUME::_0x39816F6F94F385AD(iLocal_26, 2698.47f, 703.6447f, 76.68376f, 0f, 0f, -30.46352f, 4.936317f, 2.843117f, 4.423785f);
		VOLUME::_0x39816F6F94F385AD(iLocal_26, 2717.371f, 710.274f, 77.27374f, 0f, 0f, 178.9532f, 3.930448f, 4.35889f, 8.132094f);
		iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_25, iLocal_26);
		VOLUME::_0xBCE668AAF83608BE(iLocal_25, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 34.23434f, 22.58518f, 8.132094f);
		iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Butcher Creek - m_volFarmerWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_27, iLocal_25);
		VOLUME::_0xBCE668AAF83608BE(iLocal_27, 2711.161f, 710.3177f, 77.27374f, 0f, 0f, -151.2205f, 46.23434f, 26.58518f, 8.132094f);
		sLocal_23 = "BUTCHER_CREEK";
		LAW::_CREATE_GUARD_ZONE(sLocal_23);
		LAW::_0x8C598A930F471938(sLocal_23, iLocal_24);
		LAW::_0xA1B0E6301E2E02A6(sLocal_23, iLocal_26);
		LAW::_0x35815F372D43E1E5(sLocal_23, iLocal_25);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_23, iLocal_27);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_23, 2717.486f, 709.7006f, 79.6157f);
		LAW::_0xA8A74AA79FB67159(sLocal_23, iLocal_24);
	}
}

void func_54()
{
	*(vLocal_83[0 /*3*/]) = { 2560.689f, 839.585f, 79.692f };
	*(vLocal_83[1 /*3*/]) = { 2559.719f, 839.916f, 79.91f };
	*(vLocal_83[2 /*3*/]) = { 2558.63f, 840.218f, 80.152f };
	*(vLocal_83[3 /*3*/]) = { 2557.29f, 840.682f, 80.418f };
	*(vLocal_83[4 /*3*/]) = { 2556.515f, 840.907f, 80.583f };
	*(vLocal_67[0 /*3*/]) = { 2560.689f, 839.58f, 78.982f };
	*(vLocal_67[1 /*3*/]) = { 2559.713f, 839.932f, 79.232f };
	*(vLocal_67[2 /*3*/]) = { 2558.51f, 840.135f, 79.377f };
	*(vLocal_67[3 /*3*/]) = { 2557.239f, 840.718f, 79.394f };
	*(vLocal_67[4 /*3*/]) = { 2556.603f, 840.876f, 79.74f };
	fLocal_99[0] = 0.3f;
	fLocal_99[1] = 0.4f;
	fLocal_99[2] = 0.4f;
	fLocal_99[3] = 0.6f;
	fLocal_99[4] = 0.8f;
	iLocal_55[0] = joaat("a_c_rabbit_01");
	iLocal_55[1] = joaat("a_c_coyote_01");
	iLocal_55[2] = joaat("a_c_coyote_01");
	iLocal_55[3] = joaat("a_c_rabbit_01");
	iLocal_55[4] = joaat("a_c_rabbit_01");
	sLocal_61[0] = "PD_Ex_Small_aged_carcass_Hvy";
	sLocal_61[1] = "PD_Small_aged_carcass_Hvy";
	sLocal_61[2] = "PD_Small_aged_carcass_Hvy";
	sLocal_61[3] = "PD_Ex_Small_aged_carcass_Hvy";
	sLocal_61[4] = "PD_Ex_Small_aged_carcass_Hvy";
}

int func_55()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = true;
	switch (iLocal_28)
	{
		case 0:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_29))
			{
				bVar1 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_30))
			{
				bVar1 = false;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!STREAMING::HAS_MODEL_LOADED(&(iLocal_55[iVar0])))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (!bVar1)
			{
				return 0;
			}
			if (PED::_0x5C16855277819BBF() < 5)
			{
				return 0;
			}
			iLocal_28 = 1;
		case 1:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_43[iVar0])))
				{
					iLocal_43[iVar0] = OBJECT::CREATE_OBJECT(iLocal_29, *(vLocal_83[iVar0 /*3*/]), true, true, false, false, false);
					ENTITY::SET_ENTITY_VISIBLE(&(iLocal_43[iVar0]), false);
					ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_43[iVar0]), true);
					iLocal_49[iVar0] = OBJECT::CREATE_OBJECT(iLocal_30, *(vLocal_83[iVar0 /*3*/]) - Vector(0.3f, 0f, 0f), true, true, false, false, false);
				}
				iVar0++;
			}
			iLocal_28 = 2;
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_31[iVar0])))
				{
					iLocal_31[iVar0] = aggregate_func_2073(&(iLocal_55[iVar0]), *(vLocal_67[iVar0 /*3*/]), 0, 1, 1, 0, 1, 1, 1, 0, 0);
					PED::_SET_PED_SCALE(&(iLocal_31[iVar0]), 1f);
					ENTITY::SET_ENTITY_COORDS(&(iLocal_31[iVar0]), *(vLocal_67[iVar0 /*3*/]), false, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_31[iVar0]), true);
					return 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				aggregate_func_1172(&(iLocal_31[iVar0]), 0, 0);
				iVar0++;
			}
			iLocal_28 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_31[iVar0])))
				{
					return 0;
				}
				iVar0++;
			}
			iLocal_28 = 4;
			break;
		case 4:
			if ((MISC::GET_FRAME_COUNT() % 15) == 0)
			{
				if (iLocal_105 < 5)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iLocal_55[iLocal_105]));
					func_93(iLocal_105);
					iLocal_105++;
				}
			}
			if (iLocal_105 == 5)
			{
				iLocal_28 = 5;
			}
			break;
		case 5:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_31[iVar0])) && !MISC::_0x5170DDA6D63ACAAA(&(iLocal_31[iVar0])))
				{
					if (ENTITY::IS_ENTITY_DEAD(&(iLocal_31[iVar0])))
					{
						PED::APPLY_PED_DAMAGE_PACK(&(iLocal_31[iVar0]), &(sLocal_61[iVar0]), 0f, 1f);
						MISC::_0x674B90BE1115846D(&(iLocal_31[iVar0]), 1);
					}
					else
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				return 1;
			}
			return 0;
	}
	return 0;
}

void func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	iVar0 = aggregate_func_1988(673);
	iVar1 = aggregate_func_1988(674);
	iVar2 = aggregate_func_1988(675);
	if (aggregate_func_402(iVar0, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73, 0.15f);
	}
	if (aggregate_func_402(iVar1, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73, 0.15f);
	}
	if (aggregate_func_402(iVar2, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73) != 0.15f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73, 0.15f);
	}
}

void func_85(int iParam0)
{
	int iVar0;

	if (aggregate_func_4251() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_31[iVar0])))
			{
				PED::DELETE_PED(iLocal_31[iVar0]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_43[iVar0])))
			{
				ENTITY::DELETE_ENTITY(iLocal_43[iVar0]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_49[iVar0])))
			{
				OBJECT::DELETE_OBJECT(iLocal_49[iVar0]);
			}
			if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_37[iVar0])))
			{
				PHYSICS::DELETE_ROPE(uLocal_37[iVar0]);
			}
			iVar0++;
		}
	}
	LAW::_REMOVE_GUARD_ZONE(sLocal_23);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_25))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_25);
	}
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
}

int func_93(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_43[iParam0])))
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(&(iLocal_49[iParam0])))
		{
			OBJECT::_0xB6CBD40F8EA69E8A(&(iLocal_49[iParam0]));
			iVar9 = 33646;
			switch (&iLocal_55[iParam0])
			{
				case joaat("a_c_coyote_01"):
					vVar6 = { 0f, -0.005f, -0.025f };
					vVar0 = { 0f, 90f, 0f };
					break;
				case joaat("a_c_rabbit_01"):
					vVar6 = { -0.0125f, 0f, -0.025f };
					vVar0 = { 0f, 90f, 0f };
					break;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(&(iLocal_49[iParam0]), &(iLocal_31[iParam0]), 4, PED::GET_PED_BONE_INDEX(&(iLocal_31[iParam0]), iVar9), vVar3, vVar6, vVar0, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			uLocal_37[iParam0] = PHYSICS::_0xE9C59F6809373A99(*(vLocal_83[iParam0 /*3*/]), 0f, 0f, 0f, &(fLocal_99[iParam0]), 1, 1, -1, -1082130432 /* Float: -1f */);
			ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_31[iParam0]), false);
			PHYSICS::_0x462FF2A432733A44(&(uLocal_37[iParam0]), &(iLocal_43[iParam0]), &(iLocal_49[iParam0]), 0f, 0f, 0f, 0f, 0f, 0f, 0, "p_carcassHangMED_Bone2");
			PHYSICS::_0x3C6490D940FF5D0B(&(uLocal_37[iParam0]), 0, 0, &(fLocal_99[iParam0]), 1);
			AUDIO::_0xF092B6030D6FD49C(&(uLocal_37[iParam0]), "ROPE_SETTINGS_DEFAULT");
			PHYSICS::_0x7A54D82227A139DB(uLocal_37[iParam0], 1);
			PHYSICS::_0x76BAD9D538BCA1AA(&(uLocal_37[iParam0]), 0f);
			PHYSICS::_0xB40EA9E0D2E2F7F3(&(uLocal_37[iParam0]), 0.5f);
			PHYSICS::_0xDEDE679ED29DD4E7(&(uLocal_37[iParam0]), 1);
			PHYSICS::_0xF1EA2A881EB7F2CD(&(uLocal_37[iParam0]), 1);
			PHYSICS::_0x522FA3F490E2F7AC(&(uLocal_37[iParam0]), 1, 1);
			AUDIO::_0x2651DDC0EA269073(&(uLocal_37[iParam0]), 1f);
			PED::SET_PED_TO_RAGDOLL(&(iLocal_31[iParam0]), 1000, 60000, 0, false, true, false);
			return 1;
		}
	}
	return 0;
}

