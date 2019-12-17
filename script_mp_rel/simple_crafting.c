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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	struct<31> Local_23 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_54 = 0;
	var uLocal_55 = 1;
	var uLocal_56 = -1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 4;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 1;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (((aggregate.aberdeenpigfarm.func_125(0, 0, 1) && !aggregate.dynamic_craft_scenario.func_17()) || aggregate.doc_book.func_278(0)) || aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		Global_1913156->f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = ScriptParam_0.f_3;
	Local_23.f_25 = ScriptParam_0.f_4;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_21 = 3;
	}
	while (true)
	{
		if (func_5())
		{
			iLocal_21 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		switch (iLocal_21)
		{
			case 0:
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				Local_23.f_29 = 1;
				Local_23.f_30 = 1;
				aggregate.interactive_campfire.func_44(&Local_23, 2);
				iLocal_21 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && !aggregate.dynamic_craft_scenario.func_241(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (aggregate.dynamic_craft_scenario.func_241(Global_35))
						{
							WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
							bLocal_22 = true;
							iLocal_21 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_FOOT(Global_35))
						{
							if (bVar0)
							{
								iLocal_21 = 3;
							}
							else if (!aggregate.barcustomer_interaction.func_46(Global_35, 993674639))
							{
								bVar1 = true;
								if (func_9(0) || func_9(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_0xD65FDC686A031C83(Global_35, -1955932021, 2f);
								}
								if (PED::IS_PED_MALE(Global_35))
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_35, -1241981548, 0, 1, 254049387, -1082130432 /* Float: -1f */, 0);
								}
								else
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_35, -1241981548, 0, 1, -1451987280, -1082130432 /* Float: -1f */, 0);
								}
							}
						}
					}
				}
				else
				{
					bLocal_22 = true;
					iLocal_21 = 2;
				}
				break;
			case 2:
				func_10(&Local_23, 0);
				if (aggregate.camera_item.func_12(&Local_23) != 0)
				{
					if (aggregate.camera_item.func_12(&Local_23) != 12)
					{
					}
					else if (((!bLocal_22 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && !aggregate.dynamic_craft_scenario.func_241(Global_35))
					{
						iLocal_21 = 1;
					}
					else
					{
						bLocal_22 = true;
					}
				}
				else
				{
					iLocal_21 = 3;
				}
				break;
			case 3:
				func_12(&Local_23, 0, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_5()
{
	if (aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		return true;
	}
	if (aggregate.doc_book.func_278(0))
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_125(0, 0, 1) && !aggregate.dynamic_craft_scenario.func_17())
	{
		return true;
	}
	if (aggregate.annesburg.func_76())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::_0x3AA24CCC0D451379(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::_0x9682F850056C9ADE(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (PED::_0x1D46B417F926D34D(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_18())
		{
			return true;
		}
	}
	if (aggregate.dynamic_craft_scenario.func_124())
	{
		return true;
	}
	if (bLocal_22)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!aggregate.dynamic_craft_scenario.func_241(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
		{
			return true;
		}
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	return false;
}

int func_9(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar0, true, iParam0, false))
	{
		if (aggregate.bandana.func_30(bVar0, 0))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(bVar0) || aggregate.bandana.func_71(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_10(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1939168->f_6)
	{
		func_12(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if (aggregate.aberdeenpigfarm.func_45() != -1 && aggregate.dynamic_craft_scenario.func_28())
	{
		if (aggregate.doc_book.func_70(uParam0[0], 0))
		{
			aggregate.interactive_campfire.func_103(uParam0);
			aggregate.binoculars.func_41(uParam0);
		}
		return;
	}
	if (uParam0->f_54)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_28(uParam0);
				func_29(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			if (func_31(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (aggregate.aberdeenpigfarm.func_45() == 0 && CAM::_0x251241CAEC707106())
			{
				aggregate.interactive_campfire.func_103(uParam0);
				return;
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.binoculars.func_16(uParam0);
				if (aggregate.interactive_campfire.func_105())
				{
					func_33(0);
				}
			}
			if (((uParam0->f_30 || aggregate.binoculars.func_13(uParam0[0], 1)) || aggregate.interactive_campfire.func_54(8192)) || uParam0->f_31)
			{
				func_36(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_37(uParam0))
			{
				uParam0->f_58 = 1;
				aggregate.interactive_campfire.func_44(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_38(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_39(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_40(uParam0);
				aggregate.binoculars.func_16(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_41(uParam0, 0))
			{
				if (func_42(uParam0, 0) || (uParam0->f_25 && UIAPPS::_IS_APP_ACTIVE(-1624772174)))
				{
					aggregate.interactive_campfire.func_44(uParam0, 8);
				}
				else if (uParam0->f_28)
				{
					aggregate.interactive_campfire.func_44(uParam0, 1);
				}
				else
				{
					aggregate.interactive_campfire.func_44(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_58)
			{
				aggregate.interactive_campfire.func_44(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_43(uParam0))
			{
				func_42(uParam0, 1);
				aggregate.interactive_campfire.func_44(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(-1624772174))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(-1624772174))
				{
					Global_1913156->f_1580 = 0;
					aggregate.interactive_campfire.func_44(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_40(uParam0);
				aggregate.binoculars.func_16(uParam0);
				return;
			}
			if (func_41(uParam0, 1))
			{
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			break;
		case 10:
			func_44(0);
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_45(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			if (func_46(uParam0))
			{
				return;
			}
			if (Global_1913156->f_1580)
			{
				Global_1913156->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_47(uParam0);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_48(uParam0, 0, 0);
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
				aggregate.interactive_campfire.func_44(uParam0, 9);
			}
			else if (func_50(uParam0[2], 1) || !UIAPPS::_IS_APP_RUNNING(-1624772174))
			{
				if (uParam0->f_30)
				{
					aggregate.interactive_campfire.func_44(uParam0, 18);
				}
				else
				{
					func_51(uParam0, 0);
					aggregate.binoculars.func_22("Exit", "SSCRFT_Sounds", 1);
					if (uParam0->f_31)
					{
						uParam0->f_31 = 0;
						aggregate.interactive_campfire.func_44(uParam0, 1);
					}
					else
					{
						aggregate.interactive_campfire.func_44(uParam0, 3);
					}
				}
			}
			else if (aggregate.binoculars.func_13(uParam0[7], 1))
			{
				func_53(uParam0);
			}
			else if (aggregate.binoculars.func_13(uParam0[1], 1))
			{
				func_54(uParam0);
			}
			else if (aggregate.binoculars.func_13(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_53 = !uParam0->f_53;
				func_47(uParam0);
				aggregate.binoculars.func_22("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_48(uParam0, 0, 0);
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
				aggregate.interactive_campfire.func_44(uParam0, 9);
			}
			else if (aggregate.camera_item.func_107(uParam0[5], 0, 1))
			{
				if (uParam0->f_75)
				{
					aggregate.binoculars.func_22("Nav_Left", "SSCRFT_Sounds", 1);
					func_56(uParam0, 0);
				}
			}
			else if (aggregate.camera_item.func_107(uParam0[5], 1, 1))
			{
				if (uParam0->f_75)
				{
					aggregate.binoculars.func_22("Nav_Right", "SSCRFT_Sounds", 1);
					func_56(uParam0, 1);
				}
			}
			else if (func_50(uParam0[6], 1))
			{
				aggregate.binoculars.func_22("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_57(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_58(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_59(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_54(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_35);
			iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
			if (iVar7 == -1433449364 || iVar7 == 2058555960)
			{
				if (!PED::_0x68821369A2CEADD5(Global_35, 1335077954))
				{
					PED::_0xD65FDC686A031C83(Global_35, 1335077954, 6f);
					PED::_0x6D07B371E9439019(Global_35);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
				{
					return;
				}
				if (iVar7 == -518407211 || iVar7 == 1662215698)
				{
					if (!PED::_0x68821369A2CEADD5(Global_35, 653141085))
					{
						PED::_0xD65FDC686A031C83(Global_35, 653141085, 6f);
						PED::_0x6D07B371E9439019(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_59, 1, 0)) || (iVar8 == -1136843638 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_62, 1, 0))) || (uParam0->f_85 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_85))) || (iVar8 == -732326901 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_64, 1, 0))) || (iVar8 == 786205940 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_63, 1, 0))) || (iVar8 == -1141771998 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_65, 1, 0))) || (iVar8 == 364689687 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_66, 1, 0))) || (iVar8 == -842117252 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_67, 1, 0))) || (iVar8 == -1610298873 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_68, 1, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_61(uParam0);
					uParam0->f_60 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_61, 1, 0) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_61(uParam0);
					uParam0->f_60 = 0;
				}
				if (iVar7 != -518407211 && iVar7 != 1662215698)
				{
					if (uParam0->f_28)
					{
						if ((PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_35, 796456488))
						{
							PED::_0xD65FDC686A031C83(Global_35, 796456488, 2f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						return;
					}
				}
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
				func_62(uParam0, 0, &uVar0);
				func_61(uParam0);
				if (aggregate.annesburg.func_217(uParam0[1]))
				{
					aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
				}
				if (func_65(iVar8))
				{
					uParam0->f_49 = 250;
					(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_48(uParam0, uParam0->f_73, uParam0->f_74);
					aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
					aggregate.binoculars.func_25(uParam0[1], 10, 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
					aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				}
				else
				{
					(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[1], 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 10, 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
					aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_65(iVar8))
			{
				if (!uParam0->f_32)
				{
					if (aggregate.doc_book.func_70(uParam0[1], 0))
					{
						if (aggregate.camera_item.func_31(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_32 = 1;
							aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
							aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_85 != 0)
					{
						if ((uParam0->f_85 == 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_85 != 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_81));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (aggregate.bandana.func_11(uParam0->f_73, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(aggregate.fm_mission_controller.func_6348(uParam0->f_73, 0), 1, Global_36, 1, 1065353216 /* Float: 1f */);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_73(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
									}
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(uParam0->f_85, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_35))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_81));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_73 == 963726415)
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(400517539, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(-370340297, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(1974613782, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_73(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
								}
							}
							else
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(-655768729, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_35))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
					{
						func_74(&(uParam0->f_81), &(uParam0->f_82));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_83))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
					{
						aggregate.interactive_campfire.func_382(uParam0->f_73, uParam0->f_74, 1, func_77(), 0);
						aggregate.interactive_campfire.func_80(uParam0->f_73, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							func_74(&(uParam0->f_81), &(uParam0->f_82));
						}
					}
					uParam0->f_21++;
					uParam0->f_34++;
					if ((!aggregate.interactive_campfire.func_629(uParam0->f_73, uParam0->f_74, 0, func_77(), 0) || aggregate.interactive_campfire.func_403(uParam0->f_73, 1, 0)) || uParam0->f_21 >= uParam0->f_33)
					{
						if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
						{
							uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
							uParam0->f_34 = 0;
						}
						func_83(uParam0, iVar8, 0);
						return;
					}
				}
				if (!uParam0->f_32)
				{
					if (!(aggregate.doc_book.func_70(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 596390595))
						{
							if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
							{
								uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
								uParam0->f_34 = 0;
							}
							func_83(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_21 < (uParam0->f_33 - 1))
				{
					aggregate.binoculars.func_37(uParam0[1], 1, 1, 1);
					aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
					uParam0->f_32 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_73(uParam0, iVar8), "player"))
				{
					if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
					{
						uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
						uParam0->f_34 = 0;
					}
					func_83(uParam0, iVar8, 0);
				}
			}
			else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), (IntToFloat(uParam0->f_49) / 1000f)))
			{
				if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
				{
					if (uParam0->f_22 == -1)
					{
						uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
						if (uParam0->f_22 == -1)
						{
							func_83(uParam0, iVar8, 0);
						}
					}
					else if (aggregate.interactive_campfire.func_390(uParam0->f_22))
					{
					}
					uParam0->f_22 = -1;
				}
				else
				{
					aggregate.interactive_campfire.func_382(uParam0->f_73, uParam0->f_74, 1, func_77(), 0);
					aggregate.interactive_campfire.func_80(uParam0->f_73, 1, 1, 1, 0);
				}
				uParam0->f_33 = -1;
				uParam0->f_34 = 0;
				aggregate.interactive_campfire.func_53(131072);
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				uParam0->f_51 = 0;
				bVar9 = true;
				if (!aggregate.interactive_campfire.func_629(uParam0->f_73, uParam0->f_74, 0, func_77(), 0) || aggregate.interactive_campfire.func_403(uParam0->f_73, 1, 0))
				{
					bVar9 = false;
				}
				func_83(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (aggregate.interactive_campfire.func_105())
			{
				func_33(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					func_74(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			if (!aggregate.interactive_campfire.func_63(128))
			{
				if (!aggregate.doc_book.func_70(uParam0[2], 0))
				{
					aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
				}
				if (!aggregate.doc_book.func_70(uParam0[4], 0))
				{
					aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[4], 1, 1);
				}
			}
			if (func_50(uParam0[2], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				aggregate.interactive_campfire.func_44(uParam0, 14);
				return;
			}
			else if (aggregate.doc_book.func_50(uParam0[4], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				func_74(&(uParam0->f_79), &(uParam0->f_80));
				func_74(&(uParam0->f_83), &(uParam0->f_84));
				iVar10 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar10 != -518407211 && iVar10 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
				iVar11 = func_73(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_35);
				func_51(uParam0, 0);
				aggregate.binoculars.func_22("Exit", "SSCRFT_Sounds", 1);
				if (uParam0->f_28)
				{
					aggregate.interactive_campfire.func_44(uParam0, 1);
				}
				else
				{
					aggregate.interactive_campfire.func_44(uParam0, 0);
				}
				return;
			}
			else if (aggregate.binoculars.func_13(uParam0[1], 1))
			{
				aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
				aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
				aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
				iVar12 = func_73(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				uParam0->f_32 = 0;
				aggregate.interactive_campfire.func_44(uParam0, 12);
				return;
			}
			if (aggregate.fm_mission_controller.func_6067(uParam0[4], 1))
			{
				if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_86)))
				{
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
				}
				else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), 0.1f))
				{
					aggregate.fme_animal_tagging.func_318(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_86)))
				{
					aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				}
				aggregate.fme_animal_tagging.func_318(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_44(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					func_74(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
			iVar13 = func_73(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_0x25557E324489393C(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_74(&(uParam0->f_81), &(uParam0->f_82));
				func_74(&(uParam0->f_79), &(uParam0->f_80));
				func_74(&(uParam0->f_83), &(uParam0->f_84));
				iVar14 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar14 != -518407211 && iVar14 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_35);
				aggregate.interactive_campfire.func_44(uParam0, 15);
			}
			break;
		case 16:
			iVar15 = aggregate.interactive_campfire.func_631();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
				aggregate.interactive_campfire.func_44(uParam0, 17);
			}
			else if (NETWORK::_0x255A5EF65EDA9167(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), 5f))
			{
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			break;
		case 17:
			if (!aggregate.interactive_campfire.func_390(uParam0->f_22))
			{
				if (aggregate.generic_document_inspection.func_454(uParam0->f_22) != 3)
				{
					aggregate.interactive_campfire.func_632(0);
				}
				else
				{
					aggregate.interactive_campfire.func_633(uParam0->f_73);
					PED::_0xD65FDC686A031C83(Global_35, -752808711, 1f);
					func_98(uParam0);
					if (aggregate.bandana.func_11(uParam0->f_73, -2011345500))
					{
						aggregate.fm_mission_controller.func_743(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_27 = uParam0->f_73;
				}
				aggregate.interactive_campfire.func_44(uParam0, 15);
			}
			else
			{
				aggregate.fm_mission_controller.func_4556(1);
				HUD::_0xF1622CE88A1946FB();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (aggregate.interactive_campfire.func_105())
			{
				func_33(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				if (aggregate.annesburg.func_217(uParam0[0]))
				{
					aggregate.binoculars.func_37(uParam0[0], 0, 1, 1);
				}
				aggregate.binoculars.func_16(uParam0);
			}
			break;
		case 18:
			if (aggregate.interactive_campfire.func_105())
			{
				func_33(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (uParam0->f_25)
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			func_51(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
			Global_1913156->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_12(var uParam0, bool bParam1, bool bParam2)
{
	aggregate.interactive_campfire.func_103(uParam0);
	if (bParam2)
	{
		func_51(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
	}
	if (aggregate.interactive_campfire.func_105())
	{
		func_33(0);
	}
	if (bParam1)
	{
		func_101(uParam0);
		return;
	}
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_18)))
	{
		HUD::_0xAA03F130A637D923(&(uParam0->f_18));
	}
	if (uParam0->f_23)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_59);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_61);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_62);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_64);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_83), &(uParam0->f_84));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913156->f_1576 = 0;
	if (uParam0->f_25)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	}
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		aggregate.interactive_campfire.func_44(uParam0, 18);
	}
	else
	{
		if (uParam0->f_9 == 11)
		{
			if (uParam0->f_22 == -1)
			{
				aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
				func_102(uParam0->f_73, uParam0->f_21);
			}
		}
		if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
		{
			if (uParam0->f_34 > 0 && aggregate.bandana.func_30(uParam0->f_73, 0))
			{
				uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
				uParam0->f_34 = 0;
			}
		}
		uParam0->f_22 = -1;
		aggregate.interactive_campfire.func_44(uParam0, 0);
	}
}

bool func_18()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	return false;
}

void func_28(var uParam0)
{
	StringCopy(&(uParam0->f_18), "CAMP", 8);
}

void func_29(var uParam0)
{
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_18)))
	{
		HUD::_0xF66090013DE648D5(&(uParam0->f_18));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_25)
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(809653548, false);
	STREAMING::REQUEST_MODEL(975914773, false);
	STREAMING::REQUEST_MODEL(1537403900, false);
	STREAMING::REQUEST_MODEL(-236347221, false);
	STREAMING::REQUEST_MODEL(-91245513, false);
	STREAMING::REQUEST_MODEL(-655768729, false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_tomahawk01"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_knife05"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_rag01x"), false);
	STREAMING::REQUEST_MODEL(-467664954, false);
	STREAMING::REQUEST_MODEL(-856043142, false);
	STREAMING::REQUEST_MODEL(-370340297, false);
	STREAMING::REQUEST_MODEL(1974613782, false);
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(-1906499827, false);
	func_106(uParam0);
	if (uParam0->f_28)
	{
		STREAMING::REQUEST_MODEL(-194504515, false);
		STREAMING::REQUEST_MODEL(-2049449981, false);
		STREAMING::REQUEST_MODEL(-1172163183, false);
		STREAMING::REQUEST_MODEL(222541312, false);
		STREAMING::REQUEST_MODEL(1289914954, false);
	}
}

bool func_31(var uParam0)
{
	if (aggregate.interactive_campfire.func_581(&(uParam0->f_18)))
	{
		if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_18)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (uParam0->f_25)
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_59)))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_61)))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_62)))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_64)))
	{
		return false;
	}
	if (!func_108(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(809653548))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(975914773))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1537403900))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-236347221))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-655768729))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_tomahawk01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_knife05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-91245513))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-370340297))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-467664954))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-856043142))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1974613782))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(400517539))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1906499827))
	{
		return false;
	}
	if (uParam0->f_28)
	{
		if (!STREAMING::HAS_MODEL_LOADED(-194504515))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-2049449981))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-1172163183))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(222541312))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(1289914954))
		{
			return false;
		}
	}
	return true;
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913156->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

void func_36(var uParam0)
{
	func_33(1);
	aggregate.interactive_campfire.func_44(uParam0, 4);
}

bool func_37(var uParam0)
{
	int iVar0;

	if (uParam0->f_25)
	{
		Global_1913156->f_1576 = 0;
		uParam0->f_51 = 0;
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[0 /*9*/])->f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[0 /*9*/])->f_1);
		}
		uParam0->f_26 = aggregate.interactive_campfire.func_779(iVar0);
		uParam0->f_27 = aggregate.gfh_campworks.func_155(iVar0);
		func_112(uParam0, uParam0->f_26, 1472825031);
		func_112(uParam0, -1171462349, 1472825031);
		func_112(uParam0, 1689071181, 1472825031);
		func_112(uParam0, -1612693182, 1472825031);
		func_112(uParam0, 1856073229, 1472825031);
		return true;
	}
	if (uParam0->f_50 == 0)
	{
		Global_1913156->f_1576 = 0;
		uParam0->f_51 = 0;
		func_113(uParam0, 600942249);
		uParam0->f_50++;
		return false;
	}
	else if (uParam0->f_50 == 1)
	{
		func_113(uParam0, -257768755);
		uParam0->f_50++;
		return false;
	}
	else
	{
		func_113(uParam0, -214678071);
		uParam0->f_50 = 0;
	}
	uParam0->f_51 = 0;
	return true;
}

bool func_38(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	if (uParam0->f_25 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_35))
	{
		return true;
	}
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "filter", aggregate.blackwater.func_292(uParam0->f_25, -583079595, func_114(uParam0->f_48)));
	if (uParam0->f_25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", true);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", uParam0->f_48);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "tipText", "");
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantCount", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantIndex", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "RPGDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_116(uParam0->f_37[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_42[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_35, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_42[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_42[iVar0]), &cVar1, false);
		iVar0++;
	}
	return true;
}

bool func_39(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_77();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913156->f_1576 - 1))
	{
		if (aggregate.bandana.func_30(((*Global_1913156)[bVar0 /*9*/])->f_6, 0))
		{
			func_117(uParam0, 0, bVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_51 = bVar0 + 1;
				return false;
			}
			iVar1++;
		}
		bVar0++;
	}
	uParam0->f_51 = 0;
	if (uParam0->f_56 == 0)
	{
		uParam0->f_53 = 0;
	}
	uParam0->f_52 = 0;
	return true;
}

void func_40(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_36))
	{
		uParam0->f_36 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_36);
	}
	uParam0->f_72 = 600942249;
	uParam0->f_71 = 0;
	uParam0->f_70 = 0;
}

bool func_41(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_77();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913156->f_1576 - 1))
	{
		if ((uParam0->f_53 && ((*Global_1913156)[bVar0 /*9*/])->f_2) || !uParam0->f_53)
		{
			if (Global_1913156->f_1585 != 0)
			{
				bVar3 = aggregate.bandana.func_11(((*Global_1913156)[bVar0 /*9*/])->f_6, Global_1913156->f_1585);
				if (uParam0->f_77 == bVar3)
				{
				}
				else
				{
					func_117(uParam0, 1, bVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_51 = bVar0 + 1;
						return false;
					}
					iVar1++;
				}
				bVar0++;
				uParam0->f_51 = 0;
				if (!uParam0->f_77 && Global_1913156->f_1585 != 0)
				{
					uParam0->f_77 = 1;
					return false;
				}
				uParam0->f_52 = 0;
				uParam0->f_77 = 0;
				return true;
			}
		}
	}
}

bool func_42(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_54 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(-1624772174))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1014850361))
		{
			aggregate.interactive_campfire.func_46(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(-1624772174);
		if (iVar0 == 0)
		{
			aggregate.interactive_campfire.func_46(8);
			return true;
		}
	}
	return false;
}

bool func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_77();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913156->f_1576 - 1))
	{
		func_119(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_51 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_57 = 0;
	uParam0->f_51 = 0;
	return true;
}

void func_44(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = aggregate.fme_escaped_convicts.func_1485(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_45(var uParam0)
{
	int iVar0;

	aggregate.interactive_campfire.func_103(uParam0);
	func_121(uParam0, 1);
	(*uParam0)[2] = aggregate.binoculars.func_20("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (aggregate.interactive_campfire.func_63(32))
	{
		aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
	}
	else
	{
		aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
	}
	(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_25)
	{
		if (aggregate.bandana.func_30(uParam0->f_71, 0))
		{
			uParam0->f_73 = uParam0->f_71;
			uParam0->f_74 = uParam0->f_72;
			func_122(uParam0, &(uParam0->f_70));
		}
		else
		{
			uParam0->f_73 = 0;
		}
		if (aggregate.bandana.func_30(uParam0->f_71, 0))
		{
			if (aggregate.interactive_campfire.func_234(uParam0->f_71))
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_COOK", 1);
			}
			else if (aggregate.coffee_drinking.func_101(uParam0->f_71, -1636519629) == -701492487)
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_MAKE", 1);
			}
		}
		(*uParam0)[3] = aggregate.binoculars.func_20(func_124(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		(*uParam0)[7] = aggregate.binoculars.func_20("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	(*uParam0)[5] = aggregate.camera_item.func_126("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	aggregate.binoculars.func_26(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
	aggregate.binoculars.func_26(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
	}
	if (iVar0 > 1 && aggregate.bandana.func_30(uParam0->f_73, 0))
	{
		aggregate.binoculars.func_37(uParam0[5], 1, 1, 1);
	}
	else
	{
		aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
	}
	(*uParam0)[6] = aggregate.binoculars.func_20("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_78)
	{
		aggregate.fme_animal_tagging.func_318(uParam0[6], "INFO", 1);
	}
	else
	{
		aggregate.fme_animal_tagging.func_318(uParam0[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_36) == 0)
	{
		func_47(uParam0);
		aggregate.binoculars.func_37(uParam0[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_48(uParam0, uParam0->f_73, uParam0->f_74);
}

bool func_46(var uParam0)
{
	int iVar0;

	if (!uParam0->f_25)
	{
		return false;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_27 != aggregate.gfh_campworks.func_155(iVar0))
	{
		uParam0->f_27 = aggregate.gfh_campworks.func_155(iVar0);
		aggregate.interactive_campfire.func_44(uParam0, 15);
		return true;
	}
	if (uParam0->f_26 != aggregate.interactive_campfire.func_779(iVar0))
	{
		aggregate.interactive_campfire.func_44(uParam0, 4);
		return true;
	}
	return false;
}

void func_47(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_47);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "inUse", false);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
}

void func_48(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		if (aggregate.annesburg.func_217(uParam0[1]))
		{
			aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_77();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_128(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || aggregate.interactive_campfire.func_390(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !func_129(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != -1199896558 && aggregate.interactive_campfire.func_403(bParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || bParam2 == -214678071) || bParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			bVar6 = aggregate.net_fetch.func_5054(bParam1, 0, 0, 0);
			iVar7 = aggregate.fishing_core.func_521(bParam1, 0);
			iVar8 = func_133(bParam1, bParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - bVar6);
			}
			uParam0->f_33 = aggregate.net_camp.func_2390(iVar7, iVar8);
		}
	}
	if (aggregate.annesburg.func_217(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "DONATE_ING", 1);
		}
		else if (aggregate.interactive_campfire.func_234(bParam1))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (aggregate.coffee_drinking.func_101(bParam1, -1636519629) == -701492487)
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		aggregate.binoculars.func_37(uParam0[1], bVar3, 1, 1);
	}
	func_135(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (aggregate.annesburg.func_217(uParam0[6]))
	{
		aggregate.binoculars.func_37(uParam0[6], !bVar4, 1, 1);
	}
	func_136(uParam0);
}

bool func_50(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !aggregate.annesburg.func_217(iParam0))
	{
		return false;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
	}
	uParam0->f_54 = 0;
	aggregate.interactive_campfire.func_53(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_53(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	bool bVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (aggregate.bandana.func_30(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_36, uParam0->f_73, -2136842124 /* GXTEntry: "Cripps makes a special stew every 3 days. Collect the required ingredients and dr" +
    "op them off at your Camp." */, 0);
		aggregate.fme_animal_tagging.func_1529(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, false, "CAMP_RECIPE_LOG_ALL_OBJ", false, 1, 0);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = &Var1[iVar33 /*2*/];
				if (aggregate.bandana.func_30(bVar34, 0))
				{
					bVar36 = aggregate.net_fetch.func_5054(bVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", bVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, bVar34));
					bVar37 = aggregate.binoculars.func_32(bVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, bVar34, sVar35, bVar37, 1, 1);
				}
				iVar33++;
			}
		}
		if (aggregate.doc_book.func_130(uParam0->f_73, &Var38, joaat("inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1129497->f_339.f_16 = uParam0->f_73;
		Global_1129497->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	func_136(uParam0);
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.doc_book.func_70(uParam0[1], 0))
	{
		return;
	}
	if (uParam0->f_25)
	{
		if (aggregate.bandana.func_30(uParam0->f_73, 0))
		{
			aggregate.interactive_campfire.func_632(1);
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
			aggregate.interactive_campfire.func_44(uParam0, 16);
		}
		return;
	}
	func_51(uParam0, 1);
	aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[5], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[6], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[3], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
	uParam0->f_32 = 1;
	if (!uParam0->f_76 && !aggregate.interactive_campfire.func_234(uParam0->f_73))
	{
		aggregate.interactive_campfire.func_46(131072);
		iVar0 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
		iVar1 = func_73(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_32 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_85 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_73 == 963726415)
					{
						uParam0->f_85 = -1906499827;
					}
					else
					{
						uParam0->f_85 = -467664954;
					}
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1588156645))
				{
					uParam0->f_85 = aggregate.interactive_campfire.func_586(aggregate.fm_mission_controller.func_6348(uParam0->f_73, 0));
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, 457423347))
				{
					uParam0->f_85 = -193645029;
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1846429632))
				{
					uParam0->f_85 = 2132464141;
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1067199465))
				{
					uParam0->f_85 = 1186037675;
				}
				else
				{
					uParam0->f_85 = aggregate.interactive_campfire.func_586(uParam0->f_73);
				}
			}
			if (uParam0->f_85 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_85, false);
			}
		}
		aggregate.fme_animal_tagging.func_318(uParam0[2], "CAMP_REC_BACK", 1);
		aggregate.camera_item.func_130(uParam0[2], -1067771379, 0, 1);
		aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
		aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
		(*uParam0)[4] = aggregate.binoculars.func_20("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_145((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		aggregate.camera_item.func_130(uParam0[4], -1067771379, 0, 1);
		aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 19, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 20, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 13, 1, 1);
		aggregate.binoculars.func_25(uParam0[2], 13, 1, 1);
		if (aggregate.annesburg.func_217(uParam0[2]))
		{
			aggregate.camera_item.func_130(uParam0[2], -1067771379, 0, 1);
		}
		uParam0->f_34 = 0;
		aggregate.interactive_campfire.func_44(uParam0, 12);
	}
	else
	{
		aggregate.interactive_campfire.func_44(uParam0, 11);
	}
}

void func_56(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		bVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_74 == -214678071 || uParam0->f_74 == 278772510)
		{
			if (bParam1)
			{
				bVar0++;
			}
			else
			{
				bVar0 = (bVar0 - 1);
			}
			if (bVar0 < 0)
			{
				bVar0 = (iVar1 - 1);
			}
			else if (bVar0 >= iVar1)
			{
				bVar0 = false;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (bVar0 == 0)
			{
				Var5 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, aggregate.coffee_drinking.func_101(uParam0->f_73, 1697966752), 0) };
				if (aggregate.fm_mission_controller.func_6850(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_74 = -214678071;
						uParam0->f_73 = aggregate.fm_mission_controller.func_6851(0, iVar3);
						bVar2 = true;
					}
					aggregate.fm_mission_controller.func_6855(iVar3);
				}
			}
			else
			{
				Var5 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, aggregate.coffee_drinking.func_101(uParam0->f_73, 1697966752), 0) };
				if (aggregate.fm_mission_controller.func_6850(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (bVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (bVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (bVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = aggregate.fm_mission_controller.func_6851(iVar16, iVar3);
							if (aggregate.bandana.func_11(bVar17, iVar15))
							{
								uParam0->f_74 = 278772510;
								uParam0->f_73 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					aggregate.fm_mission_controller.func_6855(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_73);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 1644203656 || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(uParam0->f_73, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					bVar0++;
				}
				else
				{
					bVar0 = (bVar0 - 1);
				}
				if (bVar0 < 0)
				{
					bVar0 = (iVar18 - 1);
				}
				else if (bVar0 >= iVar18)
				{
					bVar0 = false;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_73, bVar0, &Var19))
				{
				}
			}
			uParam0->f_74 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eCost", uParam0->f_74);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eOutputItem", uParam0->f_73);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913156)
		{
			iVar68 = ((*Global_1913156)[iVar67 /*9*/])->f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant", bVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (bVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_150(uParam0->f_73));
		func_119(uParam0, -1, func_77(), uParam0->f_69, 0, bVar2, 0);
		func_48(uParam0, uParam0->f_73, uParam0->f_74);
	}
}

void func_57(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_78 = !uParam0->f_78;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", uParam0->f_78);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", !uParam0->f_78);
	if (!uParam0->f_78)
	{
		if (aggregate.annesburg.func_217(uParam0[6]))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_151(uParam0);
	}
	else
	{
		if (aggregate.annesburg.func_217(uParam0[6]))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[6], "INGREDIENTS", 1);
		}
		func_152(uParam0);
	}
	if (uParam0->f_74 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants") <= 1 && uParam0->f_78)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_133(uParam0->f_73, uParam0->f_74, func_77());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_58(var uParam0)
{
	if (uParam0->f_25)
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_153(uParam0);
	func_47(uParam0);
	func_151(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", false);
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	func_48(uParam0, 0, 0);
	aggregate.interactive_campfire.func_44(uParam0, 9);
}

void func_59(var uParam0, int iParam1)
{
	func_47(uParam0);
	func_151(uParam0);
	func_122(uParam0, &(iParam1->f_3));
}

void func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar1 = func_154(uParam0->f_73);
			if (iVar1 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_59, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_59);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_59, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "arrow", uParam0->f_81, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_62);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_62, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar2 = func_154(uParam0->f_73);
			if (iVar2 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_155(uParam0->f_73), 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "bullet", uParam0->f_79, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_61);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_61, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_64, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_64);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_64, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
		{
			uParam0->f_83 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_83, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "RAG", uParam0->f_83, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else
	{
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_156(uParam0->f_73), func_157(uParam0->f_73)) * 1000f));
		aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
		TASK::TASK_PLAY_ANIM(Global_35, func_156(uParam0->f_73), func_157(uParam0->f_73), 1090519040 /* Float: 8f */, -8f, -1, 67108880, 0, 0, 4096, 0, "Satchel_Only_filter", 0);
	}
}

void func_62(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (aggregate.annesburg.func_217(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (aggregate.annesburg.func_217(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			aggregate.binoculars.func_37(uParam0[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_65(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_61;
		case -732326901:
			return uParam0->f_64;
		case -1136843638:
			return uParam0->f_62;
		case 786205940:
			return uParam0->f_63;
		case -1141771998:
			return uParam0->f_65;
		case 364689687:
			return uParam0->f_66;
		case 414472632:
			return uParam0->f_59;
		case -842117252:
			return uParam0->f_67;
		case -1610298873:
			return uParam0->f_68;
		default:
			break;
	}
	return 0;
}

int func_74(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return 1;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return 0;
}

bool func_77()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.dynamic_craft_scenario.func_85(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (aggregate.broom_scenario.func_14(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_83(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_51 = 0;
	aggregate.interactive_campfire.func_46(262144);
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	iVar0 = func_73(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!aggregate.interactive_campfire.func_63(128))
	{
		aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
		aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
	}
	aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
	aggregate.fme_animal_tagging.func_454(uParam0[4], 1, 1);
	aggregate.interactive_campfire.func_402(uParam0[1], 1);
	aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
	(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
	aggregate.binoculars.func_25(uParam0[1], 19, 1, 1);
	aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
	aggregate.binoculars.func_37(uParam0[1], bParam2, 1, 1);
	aggregate.interactive_campfire.func_44(uParam0, 13);
}

void func_98(var uParam0)
{
	var uVar0;
	vector3 vVar4;

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_22, &uVar0))
	{
		vVar4 = { aggregate.flow_controller.func_161(&Global_1273882) };
		TELEMETRY::_0xDF516E598D966D06(&uVar0, 0, vVar4.z, 0, 1, 1084182731, 531932013 /* GXTEntry: "Stew Pot" */, uParam0->f_73, aggregate.bandana.func_11(uParam0->f_73, -2011345500));
	}
}

void func_101(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_59, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_61, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_62, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_64, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	func_74(&(uParam0->f_79), &(uParam0->f_80));
	func_74(&(uParam0->f_81), &(uParam0->f_82));
	func_74(&(uParam0->f_83), &(uParam0->f_84));
}

void func_102(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		aggregate.fme_challenges.func_1097(11, 1, 0);
		iVar0++;
	}
	if (aggregate.interactive_campfire.func_225(bParam0, 0))
	{
		aggregate.fishing_core.func_524(40);
	}
	else
	{
		aggregate.fishing_core.func_524(39);
	}
}

void func_106(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_59);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_61);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_62);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_64);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
}

bool func_108(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
			if (ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 1))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_106(uParam0);
		return false;
	}
	return true;
}

void func_112(var uParam0, bool bParam1, int iParam2)
{
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_5 = iParam2;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_6 = bParam1;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_7 = 1;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_8 = 0;
	Global_1913156->f_1576++;
	uParam0->f_51++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_200(uParam0, bParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_201(uParam0, bParam1);
	}
}

int func_113(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	Var0 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913156->f_1584, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = aggregate.fm_mission_controller.func_6851(iVar12, iVar10);
			if (aggregate.bandana.func_30(bVar13, 0))
			{
				if (uParam0->f_51 >= 175)
				{
				}
				else
				{
					if (Global_1913156->f_1584 == 0 && aggregate.bandana.func_11(bVar13, 302810039))
					{
						if (!(Global_1913156->f_1585 != 0 && aggregate.bandana.func_11(bVar13, Global_1913156->f_1585)))
						{
						}
						else if (aggregate.bandana.func_11(bVar13, 266762988))
						{
						}
						else
						{
							func_112(uParam0, bVar13, iParam1);
							func_202(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_203(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_116(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_35, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_117(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = ((*Global_1913156)[bParam2 /*9*/])->f_6;
	if ((iParam4 || uParam0->f_25) || aggregate.interactive_campfire.func_225(bVar0, uParam0->f_48))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_119(uParam0, -1, bParam3, ((*Global_1913156)[bParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, uParam0->f_52, -2047994727, ((*Global_1913156)[bParam2 /*9*/])->f_1);
			}
			else
			{
				func_204(uParam0, bParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[bParam2 /*9*/])->f_1);
			}
			func_204(uParam0, bParam2, 0, bParam3);
		}
		if (uParam0->f_52 == 0)
		{
			uParam0->f_71 = ((*Global_1913156)[bParam2 /*9*/])->f_6;
			uParam0->f_72 = ((*Global_1913156)[bParam2 /*9*/])->f_5;
			uParam0->f_70 = ((*Global_1913156)[bParam2 /*9*/])->f_1;
		}
		uParam0->f_52++;
	}
}

void func_119(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	char[] cVar8[8];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	bool bVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = ((*Global_1913156)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = func_133(bVar3, bVar4, bParam2);
	bVar6 = aggregate.net_fetch.func_5054(bVar3, 0, 0, 0);
	iVar7 = aggregate.fishing_core.func_521(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - bVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, aggregate.net_camp.func_2390(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (uParam0->f_25)
	{
		bVar9 = aggregate.blackwater.func_292((iVar5 > 0 && func_129(bVar3)), 1, 0);
	}
	else
	{
		bVar9 = aggregate.blackwater.func_292((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (bVar9 == 0 && func_205(bVar3))
	{
		if (func_206(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &bVar13))
		{
			bVar9 = true;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", bVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_28)
	{
		if ((bVar4 == -214678071 || bVar4 == 278772510) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar3, bVar4, 1))
	{
		bVar9 = false;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (bVar9 == 1)
	{
		if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bVar3, -1636519629) == -701492487)
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
			bVar9 = false;
		}
		else
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && bVar9 == 0) && ((*Global_1913156)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (aggregate.doc_book.func_205(bVar3, &Var15, joaat("inventory"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", false);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
				{
					bVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", bVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", bVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", bVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", bVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", bVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", bVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", bVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", bVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", bVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_28)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (bVar10 && !bParam6)
	{
		bVar9 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", bVar9);
}

void func_121(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_0x841475AC96E794D1(uParam0->f_10))
	{
		iVar0 = TASK::_0x7467165EE97D3C68(uParam0->f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_122(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (aggregate.bandana.func_30(bVar2, 0) && (uParam0->f_25 || aggregate.interactive_campfire.func_225(bVar2, uParam0->f_48)))
	{
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		uParam0->f_73 = bVar2;
		uParam0->f_74 = iVar1;
		aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
		bVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (bVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", true);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantCount", bVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913156)
			{
				iVar6 = ((*Global_1913156)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_75 = 1;
			if (aggregate.annesburg.func_217(uParam0[5]))
			{
				aggregate.binoculars.func_37(uParam0[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
			uParam0->f_75 = 0;
			if (aggregate.annesburg.func_217(uParam0[5]))
			{
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
			}
		}
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_156(uParam0->f_73), func_157(uParam0->f_73)) * 1000f));
		uParam0->f_76 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_69 = *uParam1;
		(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_48(uParam0, uParam0->f_73, uParam0->f_74);
		aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
		if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(uParam0->f_73, uParam0->f_74, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_150(bVar2));
			func_57(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", false);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(uParam0->f_73, uParam0->f_74, 1))
			{
				func_152(uParam0);
			}
		}
	}
}

char* func_124(var uParam0)
{
	if (uParam0->f_53)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

bool func_128(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if ((!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam0, bParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_213(bParam0, 1, bParam1, &Var0, iParam4, bParam6, iParam7))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

bool func_129(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_215(func_214());
	iVar1 = func_215(bParam0);
	return iVar1 > iVar0;
}

int func_133(bool bParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117());
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @268; //curOff = 73
		}
		else
		{
			iVar35 = aggregate.net_fetch.func_5054(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (aggregate.fm_mission_controller.func_6324(&(Var0[iVar32 /*2*/])) || aggregate.fm_mission_controller.func_6325(&(Var0[iVar32 /*2*/])))
				{
					iVar35 = (iVar35 + aggregate.fm_mission_controller.func_6327(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + aggregate.fm_mission_controller.func_6326(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (aggregate.fm_mission_controller.func_6328(7, &(Var0[iVar32 /*2*/])) + aggregate.fm_mission_controller.func_6329(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (iVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

bool func_135(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	bool bVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_47);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_47, &(uParam2->f_42[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", false);
		iVar33++;
	}
	if (!bParam4 && aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = &Var0[iVar33 /*2*/];
				if (aggregate.bandana.func_30(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", true);
					if (aggregate.doc_book.func_205(bVar31, &Var35, joaat("inventory"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					bVar38 = aggregate.net_fetch.func_5054(bVar31, 0, 0, 0);
					bVar39 = bVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", bVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", aggregate.blackwater.func_292(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, aggregate.blackwater.func_292(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, 309940639, &(uParam2->f_42[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
		{
			bVar34 = false;
			if (aggregate.interactive_campfire.func_234(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = aggregate.net_fetch.func_5054(bParam0, 0, 0, 0);
			iVar44 = aggregate.fishing_core.func_521(bParam0, 0);
			if (uParam2->f_25 && !func_129(bParam0))
			{
				bVar34 = false;
				bVar45 = func_214();
				if (bParam0 == bVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = aggregate.coffee_drinking.func_101(bParam0, -1636519629);
				if (!aggregate.doc_book.func_134(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_133(bParam0, uParam2->f_74, func_77());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, func_228(bParam0)));
					}
					else if (uParam2->f_74 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_69, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_35, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_74 == 278772510)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
	{
		bVar34 = false;
		if (aggregate.interactive_campfire.func_234(bParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !func_129(bParam0))
	{
		bVar49 = func_214();
		if (bParam0 == bVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_136(var uParam0)
{
	if (uParam0->f_25)
	{
		if (!aggregate.bandana.func_11(uParam0->f_73, -2011345500))
		{
			aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
			return;
		}
		if (!aggregate.annesburg.func_217(uParam0[7]))
		{
			(*uParam0)[7] = aggregate.binoculars.func_20("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_33 > 0 || uParam0->f_73 == Global_1129497->f_339.f_16) || !func_129(uParam0->f_73))
		{
			aggregate.binoculars.func_37(uParam0[7], 0, 1, 1);
		}
		else
		{
			aggregate.binoculars.func_37(uParam0[7], 1, 1, 1);
		}
	}
}

void func_145(var uParam0, char* sParam1)
{
	int iVar0;

	if (aggregate.annesburg.func_217(*uParam0))
	{
		iVar0 = aggregate.annesburg.func_253(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1949749)[iVar0 /*23*/])->f_3, sParam1);
		}
	}
}

int func_150(bool bParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_151(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
}

void func_152(var uParam0)
{
	if ((aggregate.bandana.func_11(uParam0->f_73, 1147021565) || uParam0->f_25) && !aggregate.bandana.func_11(uParam0->f_73, 1919582297))
	{
		if (aggregate.interactive_campfire.func_225(uParam0->f_73, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
	}
}

void func_153(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_35, "filterIndex");
	uParam0->f_48 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "filter", func_114(uParam0->f_48));
}

int func_154(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return -236347221;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return 1537403900;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return 809653548;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return 975914773;
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_155(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_156(var uParam0)
{
	if (PED::IS_PED_MALE(Global_35))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_157(var uParam0)
{
	return "craft_trans_stow";
}

void func_200(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	bool bVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	bVar48 = false;
	while (bVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam1, bVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 1644203656 && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bParam1, Var1, 1)))
				{
					((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_8 = bVar48;
			}
		}
		bVar48++;
	}
}

void func_201(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = aggregate.coffee_drinking.func_101(bParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
			if (aggregate.bandana.func_30(bVar14, 0))
			{
				if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bVar14, 278772510, 1))
				{
					((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		aggregate.fm_mission_controller.func_6855(iVar0);
	}
}

void func_202(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = aggregate.coffee_drinking.func_101(bParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_51 >= 175)
			{
			}
			else
			{
				bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
				if (aggregate.bandana.func_30(bVar14, 0) && bVar14 != bParam1)
				{
					func_112(uParam0, bVar14, iParam2);
				}
				iVar13++;
			}
		}
		aggregate.fm_mission_controller.func_6855(iVar0);
	}
}

void func_203(int iParam0)
{
	aggregate.fm_mission_controller.func_6855(*iParam0);
	*iParam0 = -1;
}

void func_204(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	bool bVar51;

	bVar0 = ((*Global_1913156)[bParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, bParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[bParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913156)[bParam1 /*9*/])->f_1 = iVar5;
	bVar6 = ((*Global_1913156)[bParam1 /*9*/])->f_5;
	iVar7 = func_133(bVar0, bVar6, bParam3);
	bVar8 = aggregate.net_fetch.func_5054(bVar0, 0, 0, 0);
	iVar9 = aggregate.fishing_core.func_521(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - bVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", bParam1);
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar0, bVar6, 1))
	{
		bVar10 = true;
		((*Global_1913156)[bParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913156)[bParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913156)[bParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -257768755);
	StringIntConCat(&cVar11, aggregate.net_camp.func_2390(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		bVar12 = aggregate.blackwater.func_292(((iVar7 > 0 && func_129(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		bVar12 = aggregate.blackwater.func_292(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (bVar12 == 0 && func_205(bVar0))
	{
		if (func_206(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &bVar16))
		{
			bVar12 = true;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", bVar16);
		}
	}
	if (aggregate.doc_book.func_205(bVar0, &Var17, joaat("inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((bVar6 == -214678071 || bVar6 == 278772510) || bVar6 == -257768755)
		{
			bVar12 = false;
		}
	}
	if (bVar12 == 1)
	{
		if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bVar0, -1636519629) == -701492487)
		{
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
			bVar12 = false;
		}
		else
		{
			uParam0->f_55++;
			if (aggregate.interactive_campfire.func_225(bVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", bVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", false);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
			{
				bVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", bVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", bVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", bVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", bVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", bVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", bVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", bVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", bVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", bVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, -2047994727, iVar5);
	}
}

bool func_205(bool bParam0)
{
	if (aggregate.interactive_campfire.func_54(4096))
	{
		if (aggregate.coffee_drinking.func_101(bParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (aggregate.interactive_campfire.func_54(8192))
	{
		if (bParam0 != 1831763320)
		{
			return false;
		}
	}
	return true;
}

bool func_206(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> Var18;
	bool bVar65;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam0, bParam1, 1))
	{
		return false;
	}
	if (uParam2->f_25 && !func_129(bParam0))
	{
		return false;
	}
	if (bParam1 == -214678071 || bParam1 == 278772510)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = aggregate.coffee_drinking.func_101(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
		if (aggregate.fm_mission_controller.func_6850(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
				if (bParam0 == bVar14)
				{
				}
				else if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar14, 278772510, 1))
				{
				}
				else if (aggregate.interactive_campfire.func_629(bVar14, 278772510, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bVar14, 1, 0))
				{
					aggregate.fm_mission_controller.func_6855(iVar0);
					*bParam4 = bVar14;
					*bParam5 = 278772510;
					*bParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			aggregate.fm_mission_controller.func_6855(iVar0);
		}
		if (bParam1 == 278772510)
		{
			Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (aggregate.fm_mission_controller.func_6850(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = aggregate.fm_mission_controller.func_6851(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar16, -214678071, 1))
					{
					}
					else if (aggregate.interactive_campfire.func_629(bVar16, -214678071, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bVar16, 1, 0))
					{
						aggregate.fm_mission_controller.func_6855(iVar0);
						*bParam4 = bVar16;
						*bParam5 = -214678071;
						*bParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				aggregate.fm_mission_controller.func_6855(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		bVar65 = false;
		while (bVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, bVar65, &Var18))
			{
				if (Var18.f_2 == 1644203656)
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bParam0, Var18, 1)))
					{
						if (aggregate.interactive_campfire.func_629(bParam0, Var18, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*bParam5 = Var18;
							*bParam6 = bVar65;
							return true;
						}
					}
				}
			}
			bVar65++;
		}
	}
	return false;
}

int func_213(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (aggregate.fme_animal_tagging.func_1526(bParam0))
	{
		return aggregate.fm_mission_controller.func_6320(aggregate.saloon_dining.func_494(bParam0, 1), bParam2, uParam3);
	}
	if (!aggregate.fme_animal_tagging.func_1529(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117());
	if (iParam6 != 0)
	{
		if (aggregate.aberdeenpigfarm.func_45() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && aggregate.fme_animal_tagging.func_1400(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && aggregate.fme_animal_tagging.func_1676(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					bVar33 = aggregate.fm_mission_controller.func_6323(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					bVar33 = aggregate.net_fetch.func_5054(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (bVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (aggregate.fm_mission_controller.func_6324(&(Var0[iVar34 /*2*/])) || aggregate.fm_mission_controller.func_6325(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = aggregate.fm_mission_controller.func_6326(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = aggregate.fm_mission_controller.func_6327(&(Var0[iVar34 /*2*/]), iParam6);
						if (((bVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((bVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((bVar33 + aggregate.fm_mission_controller.func_6328(7, &(Var0[iVar34 /*2*/]))) + aggregate.fm_mission_controller.func_6329(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}
}

int func_214()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return aggregate.gfh_campworks.func_155(iVar0);
}

int func_215(bool bParam0)
{
	switch (bParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (aggregate.bandana.func_11(bParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_228(bool bParam0)
{
	switch (func_215(bParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

bool func_252(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (!aggregate.net_camp_manager.func_411(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { aggregate.fm_deathmatch_controller.func_2842() };
	Var14 = { aggregate.bandana.func_59(bParam0, Var10, iVar9, 0) };
	if (aggregate.dynamic_craft_scenario.func_292(Var14, iParam1))
	{
		if (aggregate.interactive_campfire.func_640(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar18))
			{
				if (func_252(bVar18, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_642(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar19))
			{
				if (func_252(bVar19, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-1189569496, &bVar20))
			{
				if (func_252(bVar20, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_643(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar21))
			{
				if (func_252(bVar21, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-1189569496, &bVar22))
			{
				if (func_252(bVar22, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-997150586, &bVar23))
			{
				if (func_252(bVar23, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_415(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar24))
			{
				if (func_252(bVar24, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(986998820, &bVar25))
			{
				if (func_252(bVar25, 0))
				{
				}
			}
			bVar26 = aggregate.interactive_campfire.func_416(bParam0);
			if (aggregate.bandana.func_30(bVar26, 0))
			{
				if (func_252(bVar26, 1))
				{
				}
			}
		}
		func_255();
		return true;
	}
	return false;
}

int func_255()
{
	struct<5> Var0;
	struct<4> Var5;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { aggregate.bandana.func_41(856287005, 0, 0) };
	Var5 = { aggregate.bandana.func_59(856287005, Var0, Var0.f_4, 0) };
	iVar10 = aggregate.bandana.func_10(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &iVar11))
	{
		bVar14 = aggregate.bandana.func_81(Var5, -415648720, 0, -1);
	}
	if (!aggregate.bandana.func_30(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = aggregate.fm_deathmatch_controller.func_3052(856287005);
	bVar9 = false;
	while (bVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, bVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = aggregate.bandana.func_81(Var5, iVar11, 0, -1);
			if (!aggregate.bandana.func_30(bVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((aggregate.interactive_campfire.func_415(bVar14) || aggregate.interactive_campfire.func_640(bVar14)) || aggregate.interactive_campfire.func_642(bVar14)) || aggregate.interactive_campfire.func_643(bVar14))
					{
					}
					else
					{
						Jump @308; //curOff = 221
						if (iVar11 == -1189569496)
						{
							if (aggregate.interactive_campfire.func_642(bVar14) || aggregate.interactive_campfire.func_643(bVar14))
							{
							}
							else
							{
								Jump @308; //curOff = 258
								if (iVar11 == -997150586)
								{
									if (aggregate.interactive_campfire.func_643(bVar14))
									{
									}
									else
									{
										Jump @308; //curOff = 283
										if (iVar11 == 986998820)
										{
											if (aggregate.interactive_campfire.func_415(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @348; //curOff = 311
												if (iVar11 == -1189569496)
												{
													if (!aggregate.interactive_campfire.func_415(bVar14) && aggregate.interactive_campfire.func_644(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (aggregate.net_camp.func_2531(iVar11, &Var16, 1))
													{
														if (!aggregate.dynamic_craft_scenario.func_292(Var16, 1))
														{
														}
													}
												}
											}
											bVar9++;
											return 1;
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

bool func_336(int iParam0)
{
	if (!aggregate.fme_challenges.func_1327(iParam0))
	{
		return false;
	}
	return (Global_1131373->f_11[iParam0 /*3*/])->f_2;
}

bool func_340(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return false;
}

bool func_452(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = aggregate.bandana.func_10(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = aggregate.fm_deathmatch_controller.func_3052(bParam0);
			bVar0 = false;
			while (bVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, bVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				bVar0++;
			}
		}
	}
	return false;
}

