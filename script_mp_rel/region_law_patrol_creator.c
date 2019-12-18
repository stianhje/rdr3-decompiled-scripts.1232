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
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	struct<4> Local_19 = { 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37[5] = { 0, 0, 0, 0, 0 };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_18 = 1;
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (((((!aggregate_func_246(PLAYER::PLAYER_ID(), 0, 0, 1) && aggregate_func_4112()) && iLocal_18 < 7) && !aggregate_func_4946()) && !aggregate_func_7123()) && !(aggregate_func_4371() == 8 && (aggregate_func_1135(0, 0, 1) || aggregate_func_4314() == 64)))
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	func_1();
	if (aggregate_func_8652() == 5)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	}
	else if (aggregate_func_8652() >= 3)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);
	}
	Global_1938075->f_2 = iVar0;
	Global_1938075->f_1 = MISC::GET_GAME_TIMER();
}

void func_1()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_37)
	{
		if (aggregate_func_402(&(iLocal_37[iVar0]), 0))
		{
			aggregate_func_501(iLocal_37[iVar0], 1, 1, 1);
			aggregate_func_501(iLocal_43[iVar0], 1, 1, 1);
		}
		iVar0++;
	}
	aggregate_func_2017(iLocal_50);
}

void func_9()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	int iVar9;

	if (aggregate_func_4850(&uLocal_34) > 15f && iLocal_18 <= 4)
	{
		iLocal_18 = 6;
	}
	func_26();
	switch (iLocal_18)
	{
		case 1:
			aggregate_func_4283(&uLocal_34);
			PED::_0xED9582B3DA8F02B4(10);
			iLocal_28 = (BUILTIN::CEIL((BUILTIN::TO_FLOAT(aggregate_func_8652()) / 2f)) + MISC::GET_RANDOM_INT_IN_RANGE(0, 2));
			if (iLocal_28 > 5)
			{
				iLocal_28 = 5;
			}
			else if (iLocal_28 <= 0)
			{
				iLocal_28 = 1;
			}
			iVar0 = aggregate_func_6596();
			switch (iVar0)
			{
				case 0:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 1:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 2:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 3:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 5:
					iLocal_32 = joaat("s_m_m_fussarhenchman_01");
					break;
				default:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
			}
			iLocal_33 = -1038436471;
			iLocal_18 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_32, false);
			STREAMING::REQUEST_MODEL(iLocal_33, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_32) && STREAMING::HAS_MODEL_LOADED(iLocal_33)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_18 = 3;
			}
			break;
		case 3:
			if (aggregate_func_8612())
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 14;
			}
			if (aggregate_func_695(Global_36, &Local_19, &bVar1, iVar2, 1, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, 80f, 120f, 0))
			{
				if (!func_29(Local_19.f_3, 0, 0, 0) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_19.f_3, 0, &(Local_19.f_3.f_2)) != 1)
				{
					iLocal_18 = 4;
				}
			}
			else if (bVar1)
			{
				aggregate_func_2530(&Local_19, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_30 && !bLocal_31)
			{
				func_31();
			}
			else if (bLocal_30 && (!bLocal_31 && aggregate_func_4371() != 8))
			{
				func_32();
			}
			else
			{
				iVar4 = 0;
				while (iVar4 < iLocal_37)
				{
					aggregate_func_1066(&(iLocal_37[iVar4]), &(iLocal_43[iVar4]), 0, -1, 1);
					bVar5 = false;
					if (iVar4 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_49))
						{
							iLocal_49 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_49, 9);
						}
						bVar5 = true;
					}
					if (aggregate_func_402(&(iLocal_37[iVar4]), 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						if (aggregate_func_8612())
						{
							iVar0 = aggregate_func_6596();
							if (aggregate_func_4324(iVar0))
							{
								vVar6 = { aggregate_func_1228((Global_40.f_186[iVar0 /*12*/])->f_1, ((Global_40.f_186[iVar0 /*12*/])->f_4 - 3f), 10f) };
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1.75f, -1, 0.25f, 7602180, 40000f);
							}
							TASK::TASK_STAND_STILL(0, 3000);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_POLICE(&(iLocal_37[iVar4]), 1);
						TASK::TASK_PERFORM_SEQUENCE(&(iLocal_37[iVar4]), iVar3);
						func_36(iLocal_37[iVar4], &iLocal_49, bVar5, 1, 1, 1, 0);
					}
					iVar4++;
				}
				iLocal_18 = 5;
			}
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < iLocal_37)
			{
				if (aggregate_func_402(&(iLocal_37[iVar9]), 0) && aggregate_func_402(Global_35, 0))
				{
					if (aggregate_func_918(Global_35, &(iLocal_37[iVar9]), 1, 1) > 220f)
					{
						iLocal_18 = 6;
						return;
					}
				}
				iVar9++;
			}
			break;
		case 6:
			func_1();
			iLocal_18 = 7;
			break;
	}
}

void func_26()
{
	vector3 vVar0;
	struct<13> Var3;

	if (aggregate_func_4371() == 8)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_50))
		{
			iLocal_50 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x5B7D7BF36D2DE18B(iLocal_50, 1468.909f, -7225.962f, 86.862f, 0f, 0f, 18f, 748f, 853f, 473f);
		}
		else if (aggregate_func_402(Global_35, 0))
		{
			if (!aggregate_func_1520(Global_35, iLocal_50, 1, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_51) > 5000)
				{
					iLocal_51 = MISC::GET_GAME_TIMER();
					vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
					Var3.f_8 = -1082130432;
					Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar0.z, 0f, -1f, 0f) };
					Var3.f_3 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f) };
					Var3.f_7 = 1000f;
					Var3.f_12 = 1;
					Var3.f_6 = joaat("weapon_sniperrifle_carcano");
					MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var3);
				}
			}
		}
	}
}

bool func_29(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (aggregate_func_4268(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

void func_31()
{
	iLocal_37[iLocal_29] = aggregate_func_2073(iLocal_32, Local_19.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0);
	func_61(&(iLocal_37[iLocal_29]));
	iLocal_29++;
	if (iLocal_29 >= iLocal_28)
	{
		iLocal_29 = 0;
		bLocal_30 = true;
	}
}

void func_32()
{
	iLocal_43[iLocal_29] = aggregate_func_2073(iLocal_33, Local_19.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0);
	iLocal_29++;
	if (iLocal_29 >= iLocal_28)
	{
		bLocal_31 = true;
	}
}

void func_36(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, 0);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, iParam5);
	}
	PED::_0x97C475212B327666(*iParam1, iParam6);
}

void func_61(int iParam0)
{
	LAW::_0x819ADD5EF1742F47(iParam0, 2);
	LAW::_0x819ADD5EF1742F47(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::_0xBD75500141E4725C(iParam0, joaat("law"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_0x9DE63896B176EA94(iParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, -1101297303, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("group_sniper"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

