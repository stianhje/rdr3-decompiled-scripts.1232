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
	struct<4> Local_21 = { 0, 0, 0, 0 } ;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 255;
	var uLocal_41 = 0;
	var uLocal_42 = 4;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 2;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = -1;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	Local_21.f_3 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(Local_21.f_3))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_1();
	while (!aggregate.aberdeenpigfarm.func_49(1, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_21.f_3) && BRAIN::_0x6818D1A194E29983() == Local_21.f_3))
	{
		if (!func_3(&Local_21, &iScriptParam_0))
		{
			func_4(&Local_21, &iScriptParam_0);
			if (func_3(&Local_21, &iScriptParam_0))
			{
			}
			else
			{
				Jump @119; //curOff = 113
				Jump @127; //curOff = 116
				BUILTIN::WAIT(0);
			}
			func_5(&Local_21, &iScriptParam_0);
		}
	}
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
}

bool func_3(var uParam0, int* iParam1)
{
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 12))
	{
		return true;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 0))
	{
		return true;
	}
	if (!aggregate.net_stable_mount.func_6(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
		{
			func_7(uParam0, 11);
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, int* iParam1)
{
	uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	uParam0->f_19 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, iParam1);
			break;
		case 1:
			func_9(uParam0, iParam1);
			break;
		case 2:
			func_10(uParam0, iParam1);
			break;
		case 3:
			func_11(uParam0, iParam1);
			break;
		case 4:
			func_12(uParam0, iParam1);
			break;
	}
	func_13(uParam0, iParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_16));
	}
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		HUD::REMOVE_MP_GAMER_TAG(&(uParam0->f_5));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	bVar2 = true;
	if ((!&Global_1048579 || !Global_390004->f_3) || Global_390004->f_18.f_1)
	{
		bVar2 = false;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "HorseCamp"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "HorseCamp");
	}
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "bHorseHasBeenStolen"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "bHorseHasBeenStolen");
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 5))
	{
		if (TASK::_0xEFC4303DDC6E60D3(iVar1) && TASK::_0xED1F514AF4732258(iVar1) == uParam0->f_18)
		{
			TASK::_0xED27560703F37258(iVar1);
		}
		if (PED::_0x5102307CE88798EB(uParam0->f_18))
		{
			PED::_0x3088634CF8C819CF(uParam0->f_18);
		}
		if (bVar3)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 297, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 400, false);
		}
		if (PED::GET_MOUNT(iVar1) == uParam0->f_18)
		{
			bVar4 = false;
			bVar5 = false;
			if (!PLAYER::IS_PLAYER_DEAD(iVar0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(iVar0))
				{
					bVar4 = true;
				}
				if (PED::GET_PED_RESET_FLAG(iVar1, 311))
				{
					bVar5 = true;
				}
			}
			if (((aggregate.net_stable_mount.func_6(uParam0, 11) || aggregate.net_stable_mount.func_6(uParam0, 17)) || bVar4) || bVar5)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, 1);
				PED::_REMOVE_PED_FROM_MOUNT(iVar1, true, false);
			}
		}
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			iVar6 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar6))
			{
				iVar6 = uParam0->f_19;
			}
			if (NETWORK::_0x255A5EF65EDA9167(iVar6) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar6))
			{
				iVar7 = iVar0;
				iVar8 = iVar6;
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar7 /*20*/])->f_14), iVar8))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar7 /*20*/])->f_14), iVar8);
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar7 /*20*/])->f_15), iVar8))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar7 /*20*/])->f_15), iVar8);
				}
			}
		}
		if (!bVar3)
		{
			if (!aggregate.net_bounty_wagon.func_25(uParam0->f_3, uParam0->f_4, !aggregate.net_stable_mount.func_6(uParam0, 11)))
			{
			}
		}
	}
	else if (aggregate.net_stable_mount.func_6(uParam0, 6))
	{
		bVar9 = ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3);
		if (bVar9)
		{
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				iVar10 = PLAYER::_0x7C803BDC8343228D(uParam0->f_20);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar10))
				{
					iVar10 = uParam0->f_19;
				}
				if (NETWORK::_0x255A5EF65EDA9167(iVar10) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar10))
				{
					iVar11 = iVar0;
					iVar12 = iVar10;
					if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar11 /*20*/])->f_14), iVar12))
					{
						SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar11 /*20*/])->f_14), iVar12);
					}
				}
				else if (!aggregate.net_bounty_wagon.func_25(uParam0->f_3, uParam0->f_4, 0))
				{
				}
			}
		}
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 7))
	{
		if (PLAYER::_0xF49F14462F0AE27C(iVar0) == uParam0->f_18)
		{
			aggregate.net_main_offline.func_4648();
			func_16(uParam0->f_18, &(iParam1->f_7));
			func_17();
			if (!aggregate.net_stable_mount.func_6(uParam0, 11))
			{
				if (!aggregate.net_stable_mount.func_6(uParam0, 17))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
					{
						func_18(uParam0->f_18);
					}
				}
			}
			aggregate.fm_deathmatch_controller.func_156(1);
			aggregate.fm_deathmatch_controller.func_156(65536);
			aggregate.fm_deathmatch_controller.func_156(32768);
			aggregate.fm_deathmatch_controller.func_156(131072);
			aggregate.net_fast_travel_barker.func_115(0, 1);
		}
		if (iParam1->f_11 == Global_1268935->f_513.f_46)
		{
			if (PLAYER::_0xB9050A97594C8832(iVar0) == uParam0->f_20)
			{
				if (!&Global_1903928->f_485[95])
				{
					PLAYER::_0xD0E02AA618020D17(iVar0, 0);
				}
				aggregate.fm_deathmatch_controller.func_156(1);
			}
		}
	}
	if (Global_1903928->f_485[95] && PLAYER::_0xB9050A97594C8832(iVar0) == uParam0->f_20)
	{
		if (bVar3)
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 6))
	{
		iVar13 = 0;
		while (iVar13 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_21[iVar13])))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_21[iVar13])))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(uParam0->f_21[iVar13])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_21[iVar13]), true, true);
				}
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(uParam0->f_21[iVar13])))
				{
				}
				else if (aggregate.net_stable_mount.func_6(uParam0, 11))
				{
					PED::DELETE_PED(uParam0->f_21[iVar13]);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_21[iVar13]);
				}
			}
			iVar13++;
		}
	}
	if (!bVar3)
	{
		func_22(uParam0, aggregate.net_stable_mount.func_6(uParam0, 11));
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
	}
	if (!bVar3)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 5))
	{
		if (aggregate.net_stable_mount.func_6(uParam0, 2))
		{
			Global_1903928->f_129 = 0;
			Global_1903928->f_130 = 0;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		}
		func_22(uParam0, aggregate.net_stable_mount.func_6(uParam0, 11));
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, true);
		if (aggregate.net_stable_mount.func_6(uParam0, 11) || aggregate.net_stable_mount.func_6(uParam0, 17))
		{
			iVar14 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, 0);
			iVar15 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar15))
			{
				if (iVar15 == PLAYER::GET_PLAYER_PED(iVar0))
				{
					PED::_REMOVE_PED_FROM_MOUNT(iVar15, true, false);
					if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
					{
						if (bVar2)
						{
							PED::DELETE_PED(&(uParam0->f_18));
						}
						else
						{
							PED::_0x7043D0681285BA2D(&(uParam0->f_18));
						}
					}
				}
				else if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
			{
				if (bVar2)
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
				else
				{
					PED::_0x7043D0681285BA2D(&(uParam0->f_18));
				}
			}
		}
		else
		{
			bVar16 = PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true);
			bVar17 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
			PED::SET_PED_RESET_FLAG(uParam0->f_18, 105, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
			if (!bVar16 && !bVar17)
			{
				iVar18 = PLAYER::GET_PLAYER_PED(PLAYER::_0xAD03B03737CE6810(uParam0->f_18));
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar18) || ENTITY::IS_ENTITY_DEAD(iVar18)) || aggregate.annesburg.func_121(ENTITY::GET_ENTITY_COORDS(iVar18, true, false)))
				{
					iVar18 = uParam0->f_18;
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(iVar18, true, false), 4, 5767424, -1082130432 /* Float: -1f */, -1, 0);
				AITRANSPORT::_0xDD0660C997DE94FD(uParam0->f_3, 0);
			}
			if (bVar17)
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_18, 0, 0);
			}
			PED::_0x39A2FC5AF55A52B1(uParam0->f_18, -1);
			PED::_0x36E4B61DC56DE77C(uParam0->f_18, 20f, 150f, 30000, 5000);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
		}
	}
	else
	{
		VEHICLE::_0xC399CC89FBA05DA0(uParam0->f_20, 1);
		if (aggregate.net_stable_mount.func_6(uParam0, 11))
		{
			VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_20));
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_20));
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_1), iParam1);
}

void func_8(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_7(uParam0, 0);
		return;
	}
	if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_28)))
	{
		aggregate.barcustomer_interaction.func_50(&(uParam0->f_28));
	}
	iVar1 = aggregate.fm_mission_controller.func_3426(iVar0);
	if (iVar1 == -1)
	{
		if (STREAMING::IS_MODEL_A_PED(iVar0))
		{
			iVar1 = 0;
		}
		else if (STREAMING::IS_MODEL_A_VEHICLE(iVar0))
		{
			iVar1 = 2;
		}
		else
		{
			func_7(uParam0, 0);
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_4 = iVar1;
	iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	uParam0->f_19 = iVar3;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(iParam1->f_7)))
	{
		func_7(uParam0, 1);
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	if ((!NETWORK::_0x255A5EF65EDA9167(iVar3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar3)) || iVar3 != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_4)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
				if (MISC::COMPARE_STRINGS(&(iParam1->f_12), aggregate.medium_update.func_431(), false, -1) == 0)
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, aggregate.mp_intro.func_2948(aggregate.fme_animal_tagging.func_1309(iVar0))));
				}
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(iParam1->f_12)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(iParam1))
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(iParam1->f_12));
				}
				else if (iVar0 == aggregate.fm_deathmatch_controller.func_2412())
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, aggregate.mp_intro.func_2948(aggregate.fm_deathmatch_controller.func_2835())));
				}
				func_7(uParam0, 21);
				break;
			case 2:
				func_7(uParam0, 6);
				func_32(uParam0, iVar2, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1));
				break;
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
			default:
				func_7(uParam0, 21);
				break;
		}
		aggregate.coffee_drinking.func_5(uParam0, 4);
		return;
	}
	if (!aggregate.net_main_offline.func_5758(&(iParam1->f_7), &uVar4))
	{
		if (aggregate.net_main_offline.func_5789(&(iParam1->f_7)))
		{
			aggregate.dynamic_craft_scenario.func_280(0, 1);
		}
	}
	if (!aggregate.net_stable_mount.func_6(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!aggregate.fme_animal_tagging.func_838(&(iParam1->f_7), uParam0->f_4, 1, 1))
			{
				func_7(uParam0, 0);
				return;
			}
		}
		iParam1->f_7 = { *Global_1903928 };
		uParam0->f_4 = Global_1903928->f_10;
		Global_1268935->f_11.f_457 = { aggregate.mp_intro.func_2565(Global_1903928, 1) };
	}
	if (uParam0->f_4 == -1)
	{
		func_7(uParam0, 0);
		return;
	}
	func_7(uParam0, 2);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		func_39(uParam0, 23);
	}
	uParam0->f_17 = func_40(uParam0->f_4);
	if (aggregate.net_stable_mount.func_6(uParam0, 1))
	{
		uParam0->f_17 = -1230993421;
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			func_7(uParam0, 21);
			if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 1661175588) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 1661175588))
			{
				if (aggregate.net_stable_mount.func_6(uParam0, 1))
				{
					iVar5 = 1;
				}
				else
				{
					aggregate.fm_deathmatch_controller.func_2839(uParam0->f_18, Global_1903928->f_27);
					iVar5 = aggregate.mp_intro.func_3344(uParam0->f_18);
				}
				PED::_0xA69899995997A63B(uParam0->f_18, iVar5);
			}
			uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			aggregate.bandana.func_26(uParam0->f_3, 0);
			func_7(uParam0, 5);
			aggregate.coffee_drinking.func_5(uParam0, 1);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1268935->f_11.f_457)) > 0)
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, &(Global_1268935->f_11.f_457), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1268935->f_11.f_457));
			}
			else if (iVar0 == aggregate.fm_deathmatch_controller.func_2412())
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, aggregate.mp_intro.func_2948(aggregate.fm_deathmatch_controller.func_2835())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, aggregate.mp_intro.func_2948(aggregate.fm_deathmatch_controller.func_2835())));
			}
			else
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, "HORSE", true, false, "", 0);
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 1))
			{
				HUD::_0x5F57522BC1EB9D9D(uParam0->f_5, -847116890);
			}
			else
			{
				HUD::_0x5F57522BC1EB9D9D(uParam0->f_5, 130495496);
			}
			HUD::_0x84BD27DDF9575816(uParam0->f_5, 830499243);
			HUD::_0x93171DDDAB274EB8(uParam0->f_5, uParam0->f_6);
			if (aggregate.fme_animal_tagging.func_838(&(iParam1->f_7), uParam0->f_4, 0, 0))
			{
				if (!func_44(Global_1903928, &(uParam0->f_33)))
				{
				}
			}
			aggregate.net_main_offline.func_5317();
			break;
		case 2:
			func_32(uParam0, iVar2, PLAYER::PLAYER_ID());
			func_7(uParam0, 6);
			aggregate.coffee_drinking.func_5(uParam0, 2);
			break;
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			aggregate.coffee_drinking.func_5(uParam0, 3);
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
}

void func_9(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_46(uParam0);
		return;
	}
	func_47(uParam0);
	if (PLAYER::_0xF49F14462F0AE27C(iVar0) == uParam0->f_18)
	{
		func_7(uParam0, 7);
		if (!aggregate.net_stable_mount.func_6(uParam0, 22))
		{
			func_48();
			if (!func_49())
			{
			}
			else
			{
				func_50(&(Global_1903928->f_131));
				Global_1903928->f_129 = 1;
				Global_1903928->f_130 = 0;
				func_7(uParam0, 22);
			}
		}
		if (&Global_1903928->f_485[43])
		{
			func_39(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (aggregate.fm_mission_controller.func_3456(2, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_39(uParam0, 8);
		}
		((*Global_1268274)[iVar1 /*20*/])->f_1 |= 1;
		if (aggregate.net_stable_mount.func_6(uParam0, 20))
		{
			aggregate.fme_animal_tagging.func_838(&(iParam1->f_7), 0, 0, 0);
			sVar2 = aggregate.blackwater.func_268(aggregate.mp_intro.func_2565(Global_1903928, 1));
			if (MISC::COMPARE_STRINGS(sVar2, &(Global_1268935->f_11.f_457), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_5, &(Global_1903928->f_12));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1903928->f_12));
				Global_1268935->f_11.f_457 = { Global_1903928->f_12 };
				func_39(uParam0, 20);
			}
		}
		if (aggregate.fm_mission_controller.func_3456(4096, 255))
		{
			aggregate.fm_deathmatch_controller.func_156(4096);
			func_7(uParam0, 20);
		}
		func_53(uParam0);
		func_54(uParam0);
		func_55(uParam0, iParam1);
		func_57(uParam0, uParam0->f_18, 8192, 16384, aggregate.fm_deathmatch_controller.func_318(92));
	}
	else
	{
		func_39(uParam0, 7);
		func_39(uParam0, 8);
		if (aggregate.net_stable_mount.func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_39(uParam0, 4);
		}
	}
	func_58(uParam0, iParam1);
	func_59(uParam0);
	func_60(uParam0);
	func_61(uParam0);
	func_62(uParam0, iVar1);
	func_63(uParam0, iVar1);
	func_64(uParam0, iVar1);
	func_65(uParam0, iParam1, iVar1);
	func_66(uParam0, iParam1, iVar1);
	func_67(uParam0, iVar1);
	func_68(uParam0);
}

void func_10(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iParam1->f_11 == Global_1268935->f_513.f_46)
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_20);
		if (&Global_1903928->f_485[95])
		{
			BRAIN::_0xA6AC35DB4A7957A8(99999);
		}
		else
		{
			BRAIN::_0xA6AC35DB4A7957A8(250);
		}
		func_7(uParam0, 7);
		if (&Global_1903928->f_485[91])
		{
			func_39(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (aggregate.fm_mission_controller.func_3456(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_39(uParam0, 8);
		}
		((*Global_1268274)[iVar1 /*20*/])->f_2 |= 1;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_20))
		{
			VEHICLE::_0x226C6A4E3346D288(uParam0->f_20, &(Global_1903928->f_485[97]));
			VEHICLE::_0x6090A031C69F384E(uParam0->f_20, &(Global_1903928->f_485[97]));
		}
		func_57(uParam0, uParam0->f_20, 32768, 65536, aggregate.fm_deathmatch_controller.func_318(92));
	}
	else
	{
		func_39(uParam0, 7);
		func_39(uParam0, 8);
		if (aggregate.net_stable_mount.func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_39(uParam0, 4);
		}
	}
	func_70(uParam0);
	func_32(uParam0, iVar0, PLAYER::PLAYER_ID());
	func_61(uParam0);
	func_65(uParam0, iParam1, iVar1);
	func_66(uParam0, iParam1, iVar1);
	func_71(uParam0);
}

void func_11(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iParam1->f_11 == Global_1268935->f_513.f_46)
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_20);
		func_7(uParam0, 7);
		if (&Global_1903928->f_485[91])
		{
			func_39(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (aggregate.fm_mission_controller.func_3456(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_39(uParam0, 8);
		}
		((*Global_1268274)[iVar0 /*20*/])->f_2 |= 1;
		func_57(uParam0, uParam0->f_20, 32768, 65536, aggregate.fm_deathmatch_controller.func_318(92));
	}
	else
	{
		func_39(uParam0, 7);
		func_39(uParam0, 8);
		if (aggregate.net_stable_mount.func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_39(uParam0, 4);
		}
	}
	func_61(uParam0);
	func_65(uParam0, iParam1, iVar0);
	func_66(uParam0, iParam1, iVar0);
	func_72(uParam0);
}

void func_12(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (aggregate.net_stable_mount.func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_19)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	switch (func_73(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			func_7(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1070355->f_5)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (uParam0->f_4 == 2)
	{
		func_32(uParam0, PLAYER::PLAYER_PED_ID(), iVar0);
	}
	func_62(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_63(uParam0, iVar1);
	func_65(uParam0, iParam1, iVar1);
	func_66(uParam0, iParam1, iVar1);
	func_67(uParam0, iVar1);
	if (!aggregate.net_stable_mount.func_6(uParam0, 18))
	{
		if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(iVar0))
		{
			if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_10)))
			{
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_10));
			}
			fVar2 = aggregate.broom_scenario.func_29(&(uParam0->f_10));
			if (fVar2 > 5f)
			{
				func_7(uParam0, 18);
			}
		}
		else if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_10)))
		{
			aggregate.barcustomer_interaction.func_50(&(uParam0->f_10));
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (uParam0->f_18 == PLAYER::_0xF49F14462F0AE27C(iVar0))
			{
				func_58(uParam0, iParam1);
				func_59(uParam0);
			}
			else if (aggregate.net_stable_mount.func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
			{
				uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (aggregate.fm_mission_controller.func_3456(1, iVar1) && ((*Global_1268274)[iVar1 /*20*/])->f_5 == iParam1->f_11)
			{
			}
			else if (aggregate.net_stable_mount.func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			func_70(uParam0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
			{
				uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (aggregate.fm_mission_controller.func_3456(1, iVar1) && ((*Global_1268274)[iVar1 /*20*/])->f_5 == iParam1->f_11)
			{
			}
			else if (aggregate.net_stable_mount.func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
}

void func_13(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				func_76(uParam0, iParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (aggregate.fme_animal_tagging.func_16(aggregate.flow_controller.func_181(), 0, 0))
	{
		return;
	}
	if (!aggregate.fm_deathmatch_controller.func_565(iParam0))
	{
		return;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xAD03B03737CE6810(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (iVar0 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (&Global_1903928->f_485[8])
	{
		return;
	}
	aggregate.butchercreek.func_92(iParam0, 0, 0);
	if (!aggregate.fme_animal_tagging.func_838(iParam1, 0, 0, 0))
	{
		return;
	}
	func_81(Global_1903928, 0, 1);
	func_82();
	iVar1 = aggregate.fme_animal_tagging.func_1768(iParam1, -1585141069, 0);
	bVar2 = iVar1 > 0;
	if (bVar2)
	{
		aggregate.bandana.func_26(18, 0);
		func_85(*iParam1, 0, 0);
	}
	else
	{
		aggregate.bandana.func_26(17, 0);
	}
}

void func_17()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iVar0)))
	{
		return;
	}
	PLAYER::_0xE6D4E435B56D5BD0(iVar0, 0);
}

void func_18(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1268935->f_11.f_195))
	{
		Global_1268935->f_11.f_196 = Global_1268935->f_11.f_195;
	}
	Global_1268935->f_11.f_195 = iParam0;
	Global_1268935->f_11.f_197 = Global_1273882->f_21 + 35;
}

void func_22(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2825(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (aggregate.net_stable_mount.func_6(uParam0, 2))
			{
				if (func_87(Var2.f_3))
				{
					func_88(iVar0);
				}
			}
			func_89(Var2.f_3, iVar0, bParam1);
		}
		else if (aggregate.net_stable_mount.func_6(uParam0, 2))
		{
			if (func_90(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST((Global_1268935->f_906.f_245[iVar0 /*4*/])->f_3))
				{
					func_89((Global_1268935->f_906.f_245[iVar0 /*4*/])->f_3, iVar0, bParam1);
				}
				func_88(iVar0);
			}
		}
		iVar0++;
	}
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_21[iVar0])))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_21[iVar0]), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		iVar0++;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 21))
	{
		return;
	}
	uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	if (!VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_20))
	{
		uParam0->f_31++;
		return;
	}
	VEHICLE::_0xA19447D83294E29F(uParam0->f_20, &iVar4, &iVar3);
	if (iVar4 == 0)
	{
		if (iVar3 == 0)
		{
			uParam0->f_31++;
			if (uParam0->f_31 > 90)
			{
				func_7(uParam0, 0);
			}
			return;
		}
	}
	if (iVar3 >= iVar4)
	{
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_20, iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
			}
			else
			{
				if (iVar2 >= 4)
				{
				}
				else
				{
					uParam0->f_21[iVar2] = iVar5;
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(uParam0->f_21[iVar2])) || !ENTITY::_0x88AD6CC10D8D35B2(&(uParam0->f_21[iVar2])))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_21[iVar2]), true, true);
					}
					PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(iParam2), &(uParam0->f_21[iVar2]), 0);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 208, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 209, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 277, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 467, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_21[iVar2]), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @424; //curOff = 392
				uParam0->f_31++;
				if (uParam0->f_31 > 90)
				{
					func_7(uParam0, 0);
				}
				return;
				uParam0->f_26 = iVar2;
				func_7(uParam0, 21);
			}
		}
	}
}

void func_39(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
}

int func_40(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	aggregate.fme_animal_tagging.func_1310();
	Global_1903928->f_124.f_2 = 116835447;
	Global_1903928->f_124.f_3 = aggregate.fme_animal_tagging.func_1311(iParam0);
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1903928->f_124)))
	{
		return -1925605092;
	}
	uVar1 = uVar0;
	return uVar1;
}

bool func_44(var uParam0, var uParam1)
{
	if (aggregate.mp_freemode_tutorial.func_845(uParam0, -2147483648))
	{
		*uParam1 = 4;
	}
	else if (aggregate.mp_freemode_tutorial.func_845(uParam0, 1073741824 /* Float: 2f */))
	{
		*uParam1 = 3;
	}
	else if (aggregate.mp_freemode_tutorial.func_845(uParam0, 536870912))
	{
		*uParam1 = 2;
	}
	else if (aggregate.mp_freemode_tutorial.func_845(uParam0, 268435456))
	{
		*uParam1 = 1;
	}
	else if (aggregate.mp_freemode_tutorial.func_845(uParam0, 134217728))
	{
		*uParam1 = 0;
	}
	else
	{
		return false;
	}
	return true;
}

void func_46(var uParam0)
{
	if (!aggregate.net_stable_mount.func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		aggregate.fm_mission_controller.func_2352();
	}
}

void func_47(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
	if (iVar0 == PLAYER::PLAYER_PED_ID() && aggregate.net_stable_mount.func_6(uParam0, 2))
	{
		if (!aggregate.net_stable_mount.func_6(uParam0, 23))
		{
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (aggregate.net_stable_mount.func_6(uParam0, 23))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		func_39(uParam0, 23);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1903928->f_131[iVar1 /*95*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_49()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1903928->f_131[iVar1 /*95*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_112(iVar0, (*uParam0)[iVar1 /*95*/], iVar1);
		iVar1++;
	}
}

void func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PED::_0xF103823FFE72BB49(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::_0x931B241409216C1F(iVar1, uParam0->f_18, 0);
}

void func_54(var uParam0)
{
	if (!aggregate.net_stable_mount.func_6(uParam0, 5))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!aggregate.net_stable_mount.func_6(uParam0, 27))
	{
		if (func_113())
		{
			if (BUILTIN::VDIST(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) > 2.7f)
			{
				aggregate.net_stable_mount.func_115(512);
				func_7(uParam0, 27);
			}
		}
	}
	else if (!func_113())
	{
		if (BUILTIN::VDIST(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) <= 2.7f)
		{
			func_39(uParam0, 27);
		}
	}
}

void func_55(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(uParam0->f_18, 13);
				if (iVar0 < 10)
				{
					iVar1 = 0;
				}
				else if (iVar0 < 30)
				{
					iVar1 = 1;
				}
				else if (iVar0 < 70)
				{
					iVar1 = 2;
				}
				else if (iVar0 < 90)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 4;
				}
				if (iVar1 != uParam0->f_33)
				{
					if (func_116(&(uParam1->f_7), uParam0->f_4, iVar1, 0))
					{
						uParam0->f_33 = iVar1;
					}
				}
			}
			break;
	}
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		return;
	}
	iVar0 = aggregate.fme_dead_drop.func_1211(&(uParam0->f_5), iParam1);
	iVar0 = iVar0;
	bVar1 = aggregate.net_main_offline.func_2887(iParam2);
	bVar2 = aggregate.net_main_offline.func_2887(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (AITRANSPORT::_0x159EF5B6EDCE00E8(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		iVar3 = 0;
	}
	else if (bVar1 || bVar2)
	{
		bVar4 = func_119(uParam0);
		if (bVar4)
		{
			iVar3 = aggregate.fme_dead_drop.func_1053(iParam1, 0, &(uParam0->f_14), -1, -1, 1277358601, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_32;
		}
	}
	uParam0->f_32 = iVar3;
	if (uParam0->f_6 != iVar3)
	{
		HUD::_0x93171DDDAB274EB8(uParam0->f_5, iVar3);
		uParam0->f_6 = iVar3;
	}
}

void func_58(var uParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = PLAYER::IS_PLAYER_DEAD(uParam0->f_19);
	bVar1 = aggregate.net_fast_travel_barker.func_114(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1), 1, 0);
	if (aggregate.net_stable_mount.func_6(uParam0, 2))
	{
		if (bVar1 || bVar0)
		{
			if (!aggregate.barcustomer_interaction.func_42(&(Global_1268935->f_11.f_498)))
			{
				aggregate.barcustomer_interaction.func_43(&(Global_1268935->f_11.f_498));
			}
			if (!aggregate.net_fast_travel_barker.func_114(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (func_123(uParam0))
				{
					func_124(1, 1);
				}
			}
			else
			{
				func_123(uParam0);
			}
		}
		else
		{
			if (aggregate.barcustomer_interaction.func_42(&(Global_1268935->f_11.f_498)))
			{
				aggregate.barcustomer_interaction.func_50(&(Global_1268935->f_11.f_498));
			}
			if (!aggregate.net_fast_travel_barker.func_114(PLAYER::PLAYER_ID(), 1, 0))
			{
				func_124(0, 1);
			}
			if (ENTITY::_0x808077647856DE62(uParam0->f_18, 33))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, false);
			}
		}
	}
	else if (bVar1 || bVar0)
	{
		if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 33))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, true);
		}
	}
	else if (ENTITY::_0x808077647856DE62(uParam0->f_18, 33))
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, false);
	}
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	iVar4 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
		iVar4 = uParam0->f_19;
	}
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar6 = iVar4;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6);
		}
	}
	else
	{
		iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 5, &uVar0, 4, 2);
		if (iVar7 == 0)
		{
			iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 7, &uVar0, 4, 2);
		}
		if (iVar7 != 0)
		{
			if (func_125(uParam0, &uVar0))
			{
				if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6))
				{
					SCRIPTS::_0x31010318BA9897AC(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6);
				}
			}
			else if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6))
			{
				SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6);
		}
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 2))
	{
		bVar9 = false;
		iVar8 = 0;
		while (iVar8 < 32)
		{
			if (!bVar9)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar8 /*20*/])->f_15), iVar5))
				{
					bVar9 = true;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar8))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(PLAYER::INT_TO_PLAYERINDEX(iVar8)))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1268274)[iVar5 /*20*/])->f_15), iVar6);
				}
			}
			iVar8++;
		}
		if (bVar9)
		{
			if (!aggregate.aberdeenpigfarm.func_175(((*Global_1268274)[iVar5 /*20*/])->f_1, 65536))
			{
				aggregate.aberdeenpigfarm.func_106(&(((*Global_1268274)[iVar5 /*20*/])->f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 1);
		}
		else
		{
			if (aggregate.aberdeenpigfarm.func_175(((*Global_1268274)[iVar5 /*20*/])->f_1, 65536))
			{
				aggregate.aberdeenpigfarm.func_163(&(((*Global_1268274)[iVar5 /*20*/])->f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 0);
		}
	}
}

void func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18, iVar1);
}

void func_61(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::_0x083D497D57B7400F(uParam0->f_3) || !aggregate.net_stable_mount.func_6(uParam0, 4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_16));
			}
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_WHISTLE")))
		{
			uParam0->f_13 = Global_1273882->f_21 + 15;
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, -272772079);
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, -272772079);
		}
		if (Global_1273882->f_21 > uParam0->f_13)
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, -272772079);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, -272772079);
		}
		if (TASK::IS_PED_IN_WRITHE(uParam0->f_18))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, 430539302);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, 430539302);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, 453356795);
			return;
		}
		if (aggregate.fme_animal_tagging.func_727(iVar1, 0))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, 453356795);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_16, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_16 = MAP::_0x23F74C2FDA6E7C61(uParam0->f_17, uParam0->f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1268935->f_11.f_457)))
	{
		MAP::_0x9CB1A1623062F402(uParam0->f_16, &(Global_1268935->f_11.f_457));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_16, aggregate.net_bounty_wagon.func_161(uParam0->f_4));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_16, 580546400);
}

void func_62(var uParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	bVar0 = !aggregate.fm_mission_controller.func_3456(8192, iParam1);
	if (bVar0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 197, bVar0);
	}
	if (aggregate.fm_mission_controller.func_3456(2048, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 306, true);
	}
	if (aggregate.fm_mission_controller.func_3456(512, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 360, true);
	}
}

void func_63(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		func_39(uParam0, 25);
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	if (aggregate.fm_deathmatch_controller.func_2043(255) == 1)
	{
		bVar0 = ENTITY::_0x75DF9E73F2F005FD(uParam0->f_18);
		bVar1 = aggregate.net_stable_mount.func_6(uParam0, 15);
		if (aggregate.fm_mission_controller.func_3456(8, iParam1))
		{
			if (!bVar1 || bVar0)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, false);
				func_7(uParam0, 15);
			}
		}
		else if (bVar1 || !bVar0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, true);
			func_39(uParam0, 15);
		}
	}
	else
	{
		func_39(uParam0, 15);
	}
	if (aggregate.fm_deathmatch_controller.func_2043(255) == 1)
	{
		if (aggregate.fm_mission_controller.func_3456(16384, iParam1))
		{
			if (!aggregate.net_stable_mount.func_6(uParam0, 16))
			{
				NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				func_7(uParam0, 16);
			}
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (aggregate.net_stable_mount.func_6(uParam0, 16))
		{
			NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			func_39(uParam0, 16);
		}
	}
	else
	{
		func_39(uParam0, 16);
	}
	if (aggregate.fm_mission_controller.func_3456(16, iParam1))
	{
		if (!aggregate.net_stable_mount.func_6(uParam0, 17))
		{
			func_7(uParam0, 17);
		}
	}
	else if (aggregate.net_stable_mount.func_6(uParam0, 17))
	{
		func_39(uParam0, 17);
	}
	bVar2 = aggregate.fm_mission_controller.func_3456(262144, iParam1);
	if (!aggregate.net_stable_mount.func_6(uParam0, 25) || aggregate.net_stable_mount.func_6(uParam0, 26) != bVar2)
	{
		iVar3 = NETWORK::PED_TO_NET(uParam0->f_18);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
			{
			}
			else
			{
				NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar3, iVar5, bVar2);
			}
			iVar4++;
		}
		func_7(uParam0, 25);
		if (bVar2)
		{
			func_7(uParam0, 26);
		}
		else
		{
			func_39(uParam0, 26);
		}
	}
	bVar6 = aggregate.fm_mission_controller.func_3456(64, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 388, true) != bVar6)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 388, bVar6);
	}
	bVar7 = !aggregate.fm_mission_controller.func_3456(32, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 319, true) != bVar7)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 319, bVar7);
	}
	bVar8 = aggregate.fm_mission_controller.func_3456(256, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 312, true) != bVar8)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 312, bVar8);
	}
	bVar9 = !aggregate.fm_mission_controller.func_3456(128, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 211, true) != bVar9)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, bVar9);
	}
	bVar10 = aggregate.fm_mission_controller.func_3456(1024, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 412, true) != bVar10)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 412, bVar10);
	}
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (&Global_1903928->f_485[64])
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, false);
	}
	if (&Global_1903928->f_485[61])
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, false);
	}
	if (&Global_1903928->f_485[62])
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, false);
	}
	if (&Global_1903928->f_485[63])
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, false);
	}
}

void func_65(var uParam0, int* iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(uParam0->f_3);
	if (bVar0)
	{
		if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_20, 0, 0))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	iVar2 = 0;
	if (func_132(iVar1))
	{
		iVar2 = 1;
	}
	AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 0, iVar2);
	iVar4 = 0;
	AITRANSPORT::_0xE195C5A82156321D(uParam0->f_3, &iVar3);
	if (Global_1268274[iParam2 /*20*/] & 1 != 0)
	{
		if (!aggregate.aberdeenpigfarm.func_175(iVar3, 1))
		{
			iVar4 = 1;
		}
		if (Global_1268274[iParam2 /*20*/] & 32 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 32))
			{
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1268274[iParam2 /*20*/] & 2 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 2))
			{
				iVar4 |= 2;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 4 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 4))
			{
				iVar4 |= 4;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 8 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 8))
			{
				iVar4 |= 8;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 64 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 64))
			{
				iVar4 |= 64;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 128 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 128))
			{
				iVar4 |= 128;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 256 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 256))
			{
				iVar4 |= 256;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 16 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 16))
			{
				iVar4 = 16;
			}
		}
		if (Global_1268274[iParam2 /*20*/] & 512 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 512))
			{
				iVar4 |= 512;
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(iVar3, 1024))
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar3, 1024))
			{
				iVar4 |= 1024;
			}
		}
	}
	if (iVar4 != 0)
	{
		AITRANSPORT::_0xE2487779957FE897(uParam0->f_3, iVar4);
	}
}

void func_66(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(uParam0, iParam1, iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3))
	{
		if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_135(uParam0->f_18);
		}
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		if (uParam0->f_15 >= Global_1273882->f_21)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return;
		}
		iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			return;
		}
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
		if (func_132(iVar2))
		{
			aggregate.bandana.func_26(15, 1);
		}
		else if (Global_1268274[iParam2 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
		{
			aggregate.bandana.func_26(16, 1);
		}
		else
		{
			aggregate.bandana.func_26(14, 1);
		}
		TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
		uParam0->f_15 = Global_1273882->f_21 + 3;
	}
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	if (!Global_1903928->f_129)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar1 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar0);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (&((*Global_1268274)[iParam1 /*20*/])->f_16[iVar0] != bVar1)
			{
				((*Global_1268274)[iParam1 /*20*/])->f_16[iVar0] = bVar1;
			}
		}
		else if (&((*Global_1268274)[iParam1 /*20*/])->f_16[iVar0] != bVar1)
		{
			if (&((*Global_1268274)[iParam1 /*20*/])->f_16[iVar0] == 0)
			{
				PED::_0x627F7F3A0C4C51FF(uParam0->f_18, bVar1);
			}
			else if (bVar1 == 0)
			{
				PED::_0xA73F50E8796150D5(uParam0->f_18, &(((*Global_1268274)[iParam1 /*20*/])->f_16[iVar0]));
			}
			else
			{
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					PED::_0xA73F50E8796150D5(uParam0->f_18, &(((*Global_1268274)[iParam1 /*20*/])->f_16[iVar2]));
					iVar2++;
				}
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_68(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (aggregate.net_stable_mount.func_6(uParam0, 11))
	{
		Global_1903928->f_129 = 0;
		Global_1903928->f_130 = 0;
		func_7(uParam0, 0);
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 0))
	{
		return;
	}
	switch (func_73(uParam0, 0))
	{
		case 1:
			return;
		case 2:
			func_46(uParam0);
			return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_7)))
		{
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_7));
		}
		fVar0 = aggregate.broom_scenario.func_29(&(uParam0->f_7));
		if (fVar0 > 4f)
		{
			aggregate.barcustomer_interaction.func_50(&(uParam0->f_7));
			func_7(uParam0, 12);
		}
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 8))
	{
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 7))
	{
		if (&Global_1903928->f_485[45])
		{
			return;
		}
		if (aggregate.blackwater.func_175(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) < 250f)
		{
			return;
		}
		iVar1 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar2))
				{
					return;
				}
			}
		}
	}
	func_46(uParam0);
}

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	bool bVar7;

	if (!aggregate.net_stable_mount.func_6(uParam0, 19))
	{
		return;
	}
	iVar0 = PLAYER::_0x7C803BDC8343228D(uParam0->f_20);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_39(uParam0, 19);
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_ON_VEHICLE(iVar1, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar1, true) == uParam0->f_20)
		{
			func_39(uParam0, 19);
			return;
		}
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(aggregate.camera_item.func_108(iVar0), &vVar2, &uVar5, 1, 3f, 0);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	bVar7 = ENTITY::IS_ENTITY_DEAD(uParam0->f_20);
	if (aggregate.dynamic_craft_scenario.func_370(iVar1, uParam0->f_20, 1, 1) < 12f)
	{
		func_39(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_20, vVar2))
	{
		return;
	}
	if (!aggregate.net_stable_mount.func_6(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_20);
		return;
	}
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_20, vVar2, 6f, 1078722947, 2, 8f, 3f);
}

void func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (aggregate.net_stable_mount.func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (&Global_1903928->f_485[95])
	{
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_0x083D497D57B7400F(uParam0->f_20))
	{
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 7))
	{
		if (&Global_1903928->f_485[93])
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false) };
		if (aggregate.blackwater.func_175(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = aggregate.fme_treasure_hunt.func_1508(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (aggregate.blackwater.func_175(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

void func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (aggregate.net_stable_mount.func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_0x083D497D57B7400F(uParam0->f_20))
	{
		return;
	}
	if (aggregate.net_stable_mount.func_6(uParam0, 7))
	{
		if (&Global_1903928->f_485[93])
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false) };
		if (aggregate.blackwater.func_175(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = aggregate.fme_treasure_hunt.func_1508(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (aggregate.blackwater.func_175(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!aggregate.net_stable_mount.func_6(uParam0, 10))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return 2;
	}
	iVar0 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return 2;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
	}
	func_139(uParam0);
	func_140(uParam0, iVar1);
	return 2;
}

void func_76(var uParam0, int* iParam1, int iParam2)
{
	struct<6> Var0;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam2, &Var0, 6))
	{
		return;
	}
	if (Var0 != 47)
	{
		return;
	}
	if (!func_144(uParam0, iParam1, Var0.f_4, Var0.f_5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 3:
			if (aggregate.net_stable_mount.func_6(uParam0, 11))
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 5))
			{
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else if (aggregate.net_stable_mount.func_6(uParam0, 6))
			{
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 2))
			{
				aggregate.net_bounty_wagon.func_168(131072);
			}
			func_7(uParam0, 10);
			break;
		case 0:
			if (aggregate.net_stable_mount.func_6(uParam0, 11))
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 8))
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 2))
			{
				aggregate.net_bounty_wagon.func_168(131072);
			}
			func_7(uParam0, 10);
			break;
		case 2:
			if (aggregate.net_stable_mount.func_6(uParam0, 5))
			{
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else if (aggregate.net_stable_mount.func_6(uParam0, 6))
			{
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 2))
			{
				aggregate.net_bounty_wagon.func_168(131072);
			}
			func_39(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 1:
			if (aggregate.net_stable_mount.func_6(uParam0, 8))
			{
				return;
			}
			if (aggregate.net_stable_mount.func_6(uParam0, 2))
			{
				aggregate.net_bounty_wagon.func_168(131072);
			}
			func_39(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 4:
			func_7(uParam0, 8);
			break;
		case 5:
			func_39(uParam0, 8);
			break;
		case 6:
			func_7(uParam0, 19);
			break;
		case 9:
			func_146(uParam0, &Var0, 0);
			break;
		case 10:
			func_146(uParam0, &Var0, 1);
			break;
		case 11:
			func_147(uParam0, &Var0);
			break;
		case 7:
			func_148(uParam0, &Var0);
			break;
		case 8:
			func_149(uParam0, &Var0);
			break;
	}
}

int func_81(int iParam0, int iParam1, bool bParam2)
{
	aggregate.hub_offers.func_26(iParam0, 2, bParam2);
	if (!aggregate.mp_freemode_tutorial.func_574(iParam0))
	{
		return 0;
	}
	aggregate.net_main_offline.func_4164(iParam0, iParam1, bParam2);
	return 1;
}

void func_82()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 == 2)
		{
			*(Global_1268935->f_11.f_200[iVar0 /*7*/]) = { aggregate.bandana.func_73() };
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_5 = 0;
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 = -1;
		}
		iVar0++;
	}
}

int func_85(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (aggregate.net_main_offline.func_4166(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { aggregate.bandana.func_73() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar4 /*7*/], &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar4 /*7*/], &Var0))
		{
		}
		else
		{
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_5 = Global_1273882->f_21 + 120;
			*(Global_1268935->f_11.f_200[iVar4 /*7*/]) = { Param0 };
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_4 = iParam4;
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_87(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::_0x61914209C36EFDDB(iParam0) != 7)
		{
			return true;
		}
		iVar0 = ENTITY::_0x9A87FF82FD35822F(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0x37056BA2A3FEFB31(iVar0, iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_88(int iParam0)
{
	struct<11> Var0;
	var uVar95;

	Var0.f_10 = 10;
	MISC::_COPY_MEMORY(Global_1903928->f_131[iParam0 /*95*/], &Var0, 95);
	MISC::_COPY_MEMORY(Global_1268935->f_906.f_245[iParam0 /*4*/], &uVar95, 4);
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::_0x8D9BFCE3352DE47F(iVar1))
			{
				return;
			}
			if (PED::IS_PED_A_PLAYER(iVar1) || PED::IS_PED_HUMAN(iVar1))
			{
				bVar0 = true;
			}
		}
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		ENTITY::_0x18FF3110CF47115D(iParam0, 2, false);
		ENTITY::_0x18FF3110CF47115D(iParam0, 27, true);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
	}
	else if (bVar0)
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
	}
	else if (bParam2)
	{
		ENTITY::_0x0D0DB2B6AF19A987(&iParam0);
	}
}

bool func_90(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((Global_1268935->f_906.f_245[iParam0 /*4*/])->f_3))
	{
		return true;
	}
	if (aggregate.bandana.func_30((Global_1903928->f_131[iParam0 /*95*/])->f_1, 0))
	{
		return true;
	}
	return false;
}

void func_112(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;

	Global_1268935->f_906.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar0 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar0 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar0 = { 1f, 0f, 0f };
			break;
	}
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	if (STREAMING::_0x274EE1B90CFA669E(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar3, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar7 = func_175(iParam2);
		TASK::_0xF0B4F759F35CC7F5(iVar6, uParam1->f_3, iParam0, iVar7, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		iVar8 = func_176(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar9 = aggregate.butchercreek.func_91(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_0x1902C4CFCC5BE57C(iVar9, uParam1->f_8);
		}
		iVar18 = 0;
		while (iVar18 < uParam1->f_9)
		{
			uVar10 = &uParam1->f_10[iVar18 /*8*/];
			uVar11 = (uParam1->f_10[iVar18 /*8*/])->f_1;
			uVar12 = (uParam1->f_10[iVar18 /*8*/])->f_2;
			uVar13 = (uParam1->f_10[iVar18 /*8*/])->f_3;
			uVar14 = (uParam1->f_10[iVar18 /*8*/])->f_4;
			uVar15 = (uParam1->f_10[iVar18 /*8*/])->f_5;
			uVar16 = (uParam1->f_10[iVar18 /*8*/])->f_6;
			uVar17 = (uParam1->f_10[iVar18 /*8*/])->f_7;
			PED::_0xBC6DF00D7A4A6819(iVar9, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17);
			iVar18++;
		}
		PED::_0xCC8CA3E88256E58F(iVar9, 0, 1, 1, 1, false);
		if (uParam1->f_2 == 2)
		{
			ENTITY::_SET_ENTITY_HEALTH(iVar9, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar9, 517, true);
			_NAMESPACE49::_0xF5622FA6ACFCA7DB(iVar9, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar9))
		{
			PED::_0xCE6B874286D640BB(iVar9, uParam1->f_4);
			FLOCK::_0x8B6F0F59B1B99801(iVar9, uParam1->f_5);
			PED::_0x7528720101A807A5(iVar9, uParam1->f_6);
			PED::_0xDACE03C65C6666DB(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			PED::_0x6569F31A01B4C097(iVar9, 0, false);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar9, 1);
		}
		iVar19 = func_175(iParam2);
		TASK::_0xF0B4F759F35CC7F5(iVar9, uParam1->f_3, iParam0, iVar19, 256);
		ENTITY::_0x399657ED871B3A6C(iVar9, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar9, true);
			FIRE::START_ENTITY_FIRE(iVar9, 0f, -1, 8);
		}
		iVar20 = aggregate.annesburg.func_253(iVar9);
		bVar21 = aggregate.generic_document_inspection.func_448(iVar20);
		if (aggregate.bandana.func_30(bVar21, 0))
		{
			if (bVar21 != uParam1->f_1)
			{
				uParam1->f_1 = bVar21;
			}
		}
		iVar22 = func_176(iParam0, iVar9);
	}
}

bool func_113()
{
	if (aggregate.doc_book.func_11() && !aggregate.doc_book.func_278(0))
	{
		if (aggregate.net_hunting_wagon.func_105(-283002878))
		{
			if (func_183(-283002878))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_116(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!aggregate.fme_animal_tagging.func_838(iParam0, iParam1, 1, 1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_839(Global_1903928))
	{
		return false;
	}
	aggregate.fme_animal_tagging.func_1147(Global_1903928, 536870912);
	aggregate.fme_animal_tagging.func_1147(Global_1903928, 268435456);
	aggregate.fme_animal_tagging.func_1147(Global_1903928, -2147483648);
	aggregate.fme_animal_tagging.func_1147(Global_1903928, 1073741824 /* Float: 2f */);
	aggregate.fme_animal_tagging.func_1147(Global_1903928, 134217728);
	switch (iParam2)
	{
		case 0:
			aggregate.fme_animal_tagging.func_1147(Global_1903928, 134217728);
			break;
		case 1:
			aggregate.fme_animal_tagging.func_1147(Global_1903928, 268435456);
			break;
		case 2:
			aggregate.fme_animal_tagging.func_1147(Global_1903928, 536870912);
			break;
		case 3:
			aggregate.fme_animal_tagging.func_1147(Global_1903928, 1073741824 /* Float: 2f */);
			break;
		case 4:
			aggregate.fme_animal_tagging.func_1147(Global_1903928, -2147483648);
			break;
	}
	if (!aggregate.mp_freemode_tutorial.func_574(Global_1903928))
	{
		return false;
	}
	if (bParam3)
	{
		aggregate.mp_freemode_tutorial.func_575();
	}
	return true;
}

int func_119(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_19;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1268935->f_1400.f_1)
	{
		return 0;
	}
	return 1;
}

bool func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;

	bVar6 = true;
	if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 33))
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, true);
	}
	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_18, PLAYER::PLAYER_PED_ID()))
	{
		bVar6 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2825(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (!ENTITY::_0x188736456D1DEDE6(Var2.f_3, PLAYER::PLAYER_PED_ID()))
			{
				bVar6 = false;
			}
		}
		iVar0++;
	}
	if (func_197())
	{
		bVar6 = false;
	}
	if (!bVar6)
	{
		if (aggregate.broom_scenario.func_18(&(Global_1268935->f_11.f_498), 5f))
		{
			return true;
		}
	}
	return bVar6;
}

void func_124(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (((*Global_1268274)[iVar1 /*20*/])->f_6 == 1 && ((*Global_1268274)[iVar1 /*20*/])->f_7 != iParam0)
	{
		((*Global_1268274)[iVar1 /*20*/])->f_7 = iParam0;
	}
}

bool func_125(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
	{
		if (uParam0->f_18 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_132(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (Global_1102098->f_34[iVar0 /*11*/])->f_6;
}

bool func_134(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_18))
	{
		iVar1 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
	}
	else
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_20, -1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
	{
		return true;
	}
	if (iVar2 == iVar0)
	{
		return false;
	}
	if (func_132(iVar0))
	{
		return true;
	}
	iVar3 = aggregate.net_bounty_wagon.func_162(iParam2);
	iVar4 = aggregate.annesburg.func_114(iVar3, 10);
	if (iVar4 != -1)
	{
		if (aggregate.net_bounty_wagon.func_164(iParam2, iVar4, 2) && aggregate.net_stable_mount.func_203(iVar4, uParam0->f_18))
		{
			return true;
		}
	}
	if (Global_1268274[iParam2 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
	{
		return false;
	}
	if (Global_1268274[iParam2 /*20*/] & 2 != 0 || Global_1268273 & 4 != 0)
	{
		if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar2) == _NAMESPACE26::_0x901E0DC25080C8B9(iVar0))
		{
			return false;
		}
	}
	Var5 = { aggregate.aberdeenpigfarm.func_131(iVar2) };
	if (Global_1268274[iParam2 /*20*/] & 4 != 0 || Global_1268273 & 8 != 0)
	{
		if (aggregate.net_bounty_wagon.func_167(Var5, *iParam1))
		{
			return false;
		}
	}
	if (Global_1268274[iParam2 /*20*/] & 8 != 0 || Global_1268273 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(iParam1))
		{
			return false;
		}
	}
	return true;
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iVar1))
	{
		return;
	}
	if (bVar0)
	{
		if (PED::GET_MOUNT(iVar1) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))
		{
			return;
		}
	}
	else if (AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, -1) == iVar1)
	{
		return;
	}
	if (AITRANSPORT::_0x660639BC60157048(iVar1, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar1;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_139(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_18, false);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 33, true);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 4, false);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 0, false);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 1, false);
}

void func_140(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_206(uParam0))
	{
		TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_SMART_FLEE_PED(0, iParam1, 1000f, -1, 540928, 3f, 0);
	}
	else
	{
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false), 1000f, -1, 540928, 3f);
	}
	TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	aggregate.fme_condor_egg.func_1296(uParam0->f_18, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_18, true);
}

bool func_144(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return aggregate.net_stable_mount.func_6(uParam0, 5);
			}
			return (aggregate.net_stable_mount.func_6(uParam0, 5) && !aggregate.net_stable_mount.func_6(uParam0, 7));
		case 1:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return aggregate.net_stable_mount.func_6(uParam0, 6);
			}
			return (aggregate.net_stable_mount.func_6(uParam0, 6) && !aggregate.net_stable_mount.func_6(uParam0, 7));
		case 2:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return aggregate.net_stable_mount.func_6(uParam0, 5);
			}
			return (aggregate.net_stable_mount.func_6(uParam0, 5) && aggregate.net_stable_mount.func_6(uParam0, 7));
		case 3:
			if (((iParam2 == 1 || iParam2 == 2) || iParam2 == 3) || iParam2 == 6)
			{
				return aggregate.net_stable_mount.func_6(uParam0, 6);
			}
			return (aggregate.net_stable_mount.func_6(uParam0, 6) && aggregate.net_stable_mount.func_6(uParam0, 7));
		case 4:
			return aggregate.net_stable_mount.func_6(uParam0, 5);
		case 5:
			return aggregate.net_stable_mount.func_6(uParam0, 6);
		case 6:
			return true;
		default:
			break;
	}
	return iParam1->f_11 == iParam3;
}

void func_146(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		return;
	}
	iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 1);
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(uParam1->f_1);
	if (PED::GET_MOUNT(iVar2) == uParam0->f_18)
	{
		if (iVar1 != iVar2 && PED::GET_MOUNT(iVar1) == uParam0->f_18)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
			aggregate.bandana.func_26(16, 1);
		}
		if (bParam2 && iVar1 == iVar2)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
	if (iVar0 == iVar1)
	{
		aggregate.bandana.func_26(16, 1);
	}
}

void func_147(var uParam0, var uParam1)
{
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -2) == aggregate.fm_deathmatch_controller.func_134())
	{
		return;
	}
	func_135(uParam0->f_18);
}

void func_148(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (!func_211(uParam1, uParam0->f_18))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_18, 1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1082130432 /* Float: -1f */, -1, 0);
}

void func_149(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (!func_211(uParam1, uParam0->f_18))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_18, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(uParam0->f_18)))
		{
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
		}
		TASK::TASK_STAND_STILL(uParam0->f_18, -1);
	}
}

void func_159(int iParam0, bool bParam1)
{
	if (aggregate.net_bounty_wagon.func_138(iParam0) && !bParam1)
	{
		return;
	}
	Global_1268935->f_11.f_465[iParam0] = aggregate.net_main_offline.func_312(aggregate.net_bounty_wagon.func_137(iParam0), 10000, 0, 0, 0, 1);
}

int func_161(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = aggregate.bandana.func_72(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	bVar1 = aggregate.generic_document_inspection.func_448(iParam1);
	iVar2 = aggregate.net_main_offline.func_5803(iVar0, bVar1, 1);
	return iVar2;
}

bool func_183(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939221->f_10454[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_197()
{
	int iVar0;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (aggregate.fm_mission_controller.func_3456(65536, 255))
		{
			aggregate.fm_deathmatch_controller.func_156(65536);
		}
		return false;
	}
	if (aggregate.fm_mission_controller.func_3456(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_206(var uParam0)
{
	struct<4> Var0;

	if ((!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, 0)) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -2))
	{
		return true;
	}
	if (!PED::_0x608BC6A6AACD5036(&Var0, uParam0->f_18, 4, 2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return false;
	}
	return true;
}

bool func_211(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_370(iVar0, iParam1, 1, 1) > 40f)
	{
		return false;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iParam1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

