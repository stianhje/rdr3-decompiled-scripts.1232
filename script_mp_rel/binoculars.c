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
	struct<19> Local_13 = { 0, 0, 2514129, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 0 } ;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
#endregion

void __EntryFunction__()
{
	Local_13.f_3 = "mech_inventory@binoculars";
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		Local_13.f_8 = PED::IS_PED_ON_MOUNT(Global_35);
	}
	func_1();
	if (aggregate_func_3080(505))
	{
		aggregate_func_7858(505);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&Local_13);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_5(&Local_13))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_13);
		}
		if (!WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 1)))
		{
			func_9(&(Local_13.f_13), &(Local_13.f_14), &(Local_13.f_15), &(Local_13.f_16));
			if (Local_13.f_15 != 0 || Local_13.f_16 != 0)
			{
				aggregate_func_4283(&(Local_13.f_18));
			}
		}
		if (func_6() > 0 && !WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 1)))
		{
			func_11(&Local_13, 8);
		}
		if (aggregate_func_2875(&(Local_13.f_4[0])) && aggregate_func_2927(&(Local_13.f_4[0]), 1))
		{
			func_11(&Local_13, 6);
		}
		func_14(&Local_13);
		switch (func_6())
		{
			case 0:
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
				}
				func_11(&Local_13, 1);
				break;
			case 1:
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
				}
				func_11(&Local_13, 2);
				break;
			case 2:
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
				}
				if (WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 0)))
				{
					aggregate_func_2985(1);
					aggregate_func_4322(506, 0);
					func_19(&Local_13);
					Local_13.f_4[0] = aggregate_func_2385("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_11(&Local_13, 4);
				}
				break;
			case 4:
				PAD::_0x2804658EB7D8A50B(5, -490854963);
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
				}
				if (func_21())
				{
					aggregate_func_2112("enter", "Binoculars_Sounds", 1);
					iLocal_50 = 0;
					func_11(&Local_13, 5);
				}
				break;
			case 5:
				PAD::_0x2804658EB7D8A50B(5, 711586536);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_SNIPER_ZOOM_IN_ONLY")))
				{
					if (iLocal_50 < 2)
					{
						aggregate_func_2112("zoom_in", "Binoculars_Sounds", 1);
						iLocal_50 = (1 + iLocal_50);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_SNIPER_ZOOM_OUT_ONLY")))
				{
					if (iLocal_50 > 0)
					{
						aggregate_func_2112("zoom_out", "Binoculars_Sounds", 1);
						iLocal_50 = (iLocal_50 - 1);
					}
				}
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
					aggregate_func_2985(1);
					aggregate_func_2878(Local_13.f_4[2], 1, 1);
					Local_13.f_4[2] = aggregate_func_2045("IB_ZOOM", joaat("INPUT_SNIPER_ZOOM"), 17, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate_func_2057(&(Local_13.f_4[2]), 11, 1, 1);
					aggregate_func_2057(&(Local_13.f_4[2]), 17, 1, 1);
					aggregate_func_2516(&(Local_13.f_4[2]), joaat("INPUT_SNIPER_ZOOM"));
				}
				if (func_27())
				{
					aggregate_func_2985(1);
					aggregate_func_2878(Local_13.f_4[2], 1, 1);
					aggregate_func_2112("exit", "Binoculars_Sounds", 1);
					func_11(&Local_13, 4);
				}
				break;
			case 6:
				if (aggregate_func_4287(&Local_13))
				{
					func_19(&Local_13);
					aggregate_func_4285(&Local_13);
				}
				func_11(&Local_13, 7);
				break;
			case 7:
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_4285(&Local_13);
				}
				func_11(&Local_13, 8);
				if (WEAPON::_0xC853230E76A152DF(aggregate_func_3066(Global_35, 0)))
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				break;
			case 8:
				if (aggregate_func_4287(&Local_13))
				{
					aggregate_func_2985(1);
					aggregate_func_4285(&Local_13);
				}
				func_4(&Local_13);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1912862 = 0;
}

void func_4(int* iParam0)
{
	if (aggregate_func_3080(507))
	{
		aggregate_func_7858(507);
	}
	if (aggregate_func_3080(506))
	{
		aggregate_func_7858(506);
	}
	func_19(iParam0);
	func_1();
	Global_1912863 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (aggregate_func_4250(iParam0, 64))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
	}
	MAP::DISPLAY_RADAR(true);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
		CAM::DESTROY_CAM(iParam0->f_1, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, 0);
	aggregate_func_2985(1);
	HUD::_0xAA03F130A637D923("BINO");
}

bool func_5(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_30())
	{
		aggregate_func_4254(iParam0, 8);
		aggregate_func_4254(iParam0, 16);
		aggregate_func_4254(iParam0, 64);
	}
	if (aggregate_func_4250(iParam0, 8) || aggregate_func_4250(iParam0, 16))
	{
		return false;
	}
	if ((!aggregate_func_2850(joaat("weapon_kit_binoculars"), 1) && !aggregate_func_2850(1652431022 /* GXTEntry: "Refined Binoculars" */, 1)) && !WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 1)))
	{
		return false;
	}
	if (aggregate_func_4866())
	{
		return false;
	}
	if (aggregate_func_1815(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

int func_6()
{
	return &Global_1912863;
}

void func_7(int* iParam0)
{
	if (func_35(1))
	{
		if (!aggregate_func_4250(iParam0, 16))
		{
			if (func_6() == 5)
			{
				aggregate_func_4254(iParam0, 8);
				aggregate_func_4254(iParam0, 16);
			}
			else
			{
				func_11(iParam0, 6);
			}
		}
		func_36(1);
	}
	if (func_35(2))
	{
		if (!aggregate_func_4250(iParam0, 8))
		{
			if (func_6() == 5)
			{
				aggregate_func_4254(iParam0, 8);
			}
		}
		func_36(2);
	}
	if (func_35(4))
	{
		if (aggregate_func_2875(&(iParam0->f_4[0])))
		{
			aggregate_func_4583(&(iParam0->f_4[0]), 0, 1, 1);
		}
		func_36(4);
	}
	else if (aggregate_func_2875(&(iParam0->f_4[0])) && aggregate_func_8656(&(iParam0->f_4[0]), 1))
	{
		aggregate_func_4583(&(iParam0->f_4[0]), 1, 1, 1);
	}
	if (func_35(8))
	{
		if (!aggregate_func_4250(iParam0, 32))
		{
			aggregate_func_4254(iParam0, 32);
		}
		func_36(8);
	}
	if (func_35(16))
	{
		if (aggregate_func_4250(iParam0, 32))
		{
			aggregate_func_6662(iParam0, 32);
		}
		func_36(16);
	}
}

void func_9(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f));
}

void func_11(int* iParam0, int iParam1)
{
	Global_1912863 = iParam1;
	aggregate_func_4489(iParam0);
}

void func_14(int iParam0)
{
	if (!WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 1)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1) && CAM::IS_CAM_ACTIVE(iParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
}

void func_19(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (aggregate_func_2875(&(iParam0->f_4[iVar0])))
		{
			aggregate_func_2878(iParam0->f_4[iVar0], 1, 1);
		}
		iVar0++;
	}
}

bool func_21()
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 1)))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 2048, 0);
		}
		return true;
	}
	return false;
}

bool func_27()
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, 0);
		return true;
	}
	return false;
}

bool func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("event_damage"):
			case 402722103:
				if (func_49(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return true;
	}
	return false;
}

bool func_35(int iParam0)
{
	return (Global_1912862 && iParam0) != 0;
}

void func_36(int iParam0)
{
	Global_1912862 = (&Global_1912862 - (Global_1912862 && iParam0));
}

bool func_49(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return false;
		}
		if (!PED::IS_PED_A_PLAYER(iVar9))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10) || iVar10 == Global_35)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (Var0.f_4 <= 1f)
		{
			return false;
		}
		iVar11 = WEAPON::GET_WEAPONTYPE_GROUP(Var0.f_2);
		if (iVar11 != joaat("group_melee") && iVar11 != joaat("group_unarmed"))
		{
			return false;
		}
	}
	return false;
}

