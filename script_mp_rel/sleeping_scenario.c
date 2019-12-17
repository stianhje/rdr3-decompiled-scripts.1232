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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	struct<30> Local_23 = { 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == armoire_corpse_scenario.__EntryFunction__

void func_6()
{
	if ((PED::IS_PED_INJURED(Global_35) || aggregate.aberdeenpigfarm.func_175(&Global_1939168, 262144)) || SCRIPTS::_0x9E4EF615E307FBBE())
	{
		iLocal_13 = 0;
		return;
	}
	func_13(&Local_23);
}

void func_7()
{
	HUD::_0x8BC7C1F929D07BF3(2011163970);
	if (func_14())
	{
		func_15(0);
	}
	if (aggregate.aberdeenpigfarm.func_45() != 0)
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_23.f_18)) || Local_23.f_21)
		{
			GRAPHICS::_0xBB6C707F20D955D4(15f);
			aggregate.barcustomer_interaction.func_50(&(Local_23.f_18));
			Local_23.f_21 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_23.f_22))
	{
		CAM::DESTROY_CAM(Local_23.f_22, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_23.f_23))
	{
		CAM::DESTROY_CAM(Local_23.f_23, false);
	}
	aggregate.interactive_campfire.func_103(&Local_23);
	if (Local_23.f_29)
	{
		func_20(0);
		Local_23.f_29 = 0;
	}
}

void func_13(var uParam0)
{
	int iVar0;

	if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_18), 3.5f) && uParam0->f_21)
	{
		GRAPHICS::_0xBB6C707F20D955D4(15f);
		uParam0->f_21 = 0;
	}
	if (TASK::_0xDF7993356F52359A(Global_35, 1) == iLocal_16)
	{
		aggregate.camera_item.func_6(32);
		aggregate.camera_item.func_6(64);
		if (!uParam0->f_29)
		{
			func_20(1);
			uParam0->f_29 = 1;
		}
		if (iLocal_17 == -2016812721 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0)))
		{
			CAM::_0x8370D34BD2E60B73();
			CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-35f, 15f);
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			}
		}
	}
	else if (uParam0->f_29)
	{
		func_20(0);
		uParam0->f_29 = 0;
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (iLocal_17 == -2016812721)
			{
				STREAMING::_0x19A6BE7D9C6884D3(iLocal_17, 15, 0, 0);
			}
			func_26(uParam0, 1);
			break;
		case 1:
			if (iLocal_17 == -2016812721)
			{
				if (!STREAMING::_0x9427C94D2E4094A4(iLocal_17, 0))
				{
					return;
				}
			}
			func_26(uParam0, 2);
			break;
		case 2:
			func_27(uParam0);
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_28(uParam0))
			{
				(*uParam0)[4] = aggregate.fm_deathmatch_controller.func_2631("SLEEP", joaat("INPUT_CONTEXT_Y"), func_29(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate.camera_item.func_130(uParam0[4], 1057677739, 0, 1);
				if (aggregate.aberdeenpigfarm.func_45() != 0)
				{
					if (iLocal_17 == -2016812721)
					{
						(*uParam0)[7] = aggregate.fm_deathmatch_controller.func_2631("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_29(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						aggregate.camera_item.func_130(uParam0[7], 1057677739, 0, 1);
					}
					else if (iLocal_17 == -1054012177)
					{
						(*uParam0)[7] = aggregate.fm_deathmatch_controller.func_2631("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_29(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						aggregate.camera_item.func_130(uParam0[7], 1057677739, 0, 1);
					}
				}
				func_26(uParam0, 3);
			}
			else if ((TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_16 && !TASK::_0x0C3CB2E600C8977D(Global_35, 1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				uParam0->f_12 = func_32();
				func_26(uParam0, 5);
			}
			break;
		case 3:
			if (!func_28(uParam0))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
				return;
			}
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_33(), 2);
			if (func_34(uParam0))
			{
			}
			if (!aggregate.annesburg.func_217(uParam0[4]))
			{
				(*uParam0)[4] = aggregate.fm_deathmatch_controller.func_2631("SLEEP", joaat("INPUT_CONTEXT_Y"), func_29(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate.camera_item.func_130(uParam0[4], 1057677739, 0, 1);
			}
			else if (aggregate.doc_book.func_50(uParam0[4], 1))
			{
				if (aggregate.interactive_campfire.func_54(8388608))
				{
					func_38(4);
				}
				aggregate.interactive_campfire.func_53(16777216);
				aggregate.annesburg.func_218((*uParam0)[4], 1, 1);
				aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
				(*uParam0)[5] = aggregate.binoculars.func_20("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate.camera_item.func_130(uParam0[5], 1323335645, 0, 1);
				uParam0->f_12 = func_32();
				func_26(uParam0, 4);
				return;
			}
			if ((iLocal_17 == -2016812721 || iLocal_17 == -1054012177) && aggregate.aberdeenpigfarm.func_45() != 0)
			{
				if (!aggregate.annesburg.func_217(uParam0[7]))
				{
					if (iLocal_17 == -2016812721)
					{
						(*uParam0)[7] = aggregate.fm_deathmatch_controller.func_2631("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_29(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						aggregate.camera_item.func_130(uParam0[7], 1057677739, 0, 1);
					}
					else if (iLocal_17 == -1054012177)
					{
						(*uParam0)[7] = aggregate.fm_deathmatch_controller.func_2631("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_29(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						aggregate.camera_item.func_130(uParam0[7], 1057677739, 0, 1);
					}
				}
				else if (aggregate.doc_book.func_50(uParam0[7], 1))
				{
					aggregate.interactive_campfire.func_53(16777216);
					aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
					aggregate.annesburg.func_218((*uParam0)[4], 1, 1);
					uParam0->f_12 = func_32();
					if (iLocal_17 == -2016812721)
					{
						func_42(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, iLocal_17, false, -1082130432 /* Float: -1f */, 0);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					func_26(uParam0, 5);
					return;
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_16)
				{
					uParam0->f_12 = func_32();
					aggregate.annesburg.func_218((*uParam0)[4], 1, 1);
					aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
					func_26(uParam0, 5);
				}
				else
				{
					aggregate.annesburg.func_218((*uParam0)[4], 1, 1);
					aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
					func_26(uParam0, 2);
				}
			}
			break;
		case 4:
			func_43(uParam0, 1);
			break;
		case 5:
			if (func_34(uParam0))
			{
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (iLocal_17 == -2016812721)
			{
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_22) && CAM::IS_CAM_ACTIVE(uParam0->f_22))
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			if (!aggregate.barcustomer_interaction.func_46(Global_35, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_16))
			{
				func_26(uParam0, 2);
				return;
			}
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.dynamic_craft_scenario.func_69())
				{
					HUD::_0x4CC5F2FC1332577F(2011163970);
				}
			}
			if (TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_16)
			{
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				func_46(uParam0);
				func_26(uParam0, 6);
			}
			break;
		case 6:
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_33(), 0);
			if (func_34(uParam0))
			{
				MISC::SET_BIT(&(Global_1956121->f_1), 2);
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 3);
				func_47();
				if (iLocal_17 == -2016812721 && !CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			iVar0 = PED::_0x569F1E1237508DEB(Global_35);
			if (((((iVar0 != 200520348 && iVar0 != -296197310) && iVar0 != -1888446106) && iVar0 != 665598855) && iVar0 != -229964281) || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			else if (uParam0->f_28)
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				uParam0->f_28 = 0;
			}
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (aggregate.binoculars.func_13(uParam0[4], 1))
				{
					aggregate.interactive_campfire.func_103(uParam0);
					(*uParam0)[5] = aggregate.binoculars.func_20("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate.camera_item.func_130(uParam0[5], 1323335645, 0, 1);
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					func_26(uParam0, 7);
				}
				else if (aggregate.binoculars.func_13(uParam0[6], 1))
				{
					aggregate.interactive_campfire.func_46(16777216);
					aggregate.interactive_campfire.func_103(uParam0);
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_26(uParam0, 15);
				}
				else if (aggregate.binoculars.func_13(uParam0[8], 1))
				{
					aggregate.interactive_campfire.func_103(uParam0);
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_28 = 1;
				}
			}
			else if (aggregate.binoculars.func_13(uParam0[4], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				(*uParam0)[5] = aggregate.binoculars.func_20("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				func_26(uParam0, 7);
			}
			else if (aggregate.binoculars.func_13(uParam0[5], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 3);
			}
			if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_16)
			{
				if (TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_16)
				{
					func_50(uParam0);
				}
				else
				{
					func_51(uParam0);
				}
				HUD::_0x8BC7C1F929D07BF3(2011163970);
				uParam0->f_28 = 0;
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
			}
			break;
		case 7:
			func_43(uParam0, 0);
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.dynamic_craft_scenario.func_69())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
					{
						MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
						aggregate.interactive_campfire.func_103(uParam0);
						func_26(uParam0, 2);
					}
				}
			}
			break;
		case 8:
			if (TASK::_0xDF7993356F52359A(Global_35, 1) == iLocal_16 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1652513209)))
			{
				func_26(uParam0, 9);
			}
			break;
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			if (func_34(uParam0))
			{
				if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_16, 1, 0) || ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_16, 0))) || iLocal_17 != -1054012177)
				{
					if (iLocal_17 == -1054012177)
					{
						if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_16, 0) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_16, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
						{
							uParam0->f_11 = 1;
							uParam0->f_13 = MISC::GET_GAME_TIMER();
						}
						if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_16, 0) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							uParam0->f_17 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
							func_52(4);
							func_26(uParam0, 2);
						}
					}
					if ((MISC::GET_GAME_TIMER() - uParam0->f_13) > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_11 = 1;
					}
				}
				else
				{
					uParam0->f_13 = MISC::GET_GAME_TIMER();
					uParam0->f_11 = 1;
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
				if (iLocal_17 == -1054012177)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				else if (iLocal_17 == 1097070152)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, 0, 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				func_26(uParam0, 10);
			}
			break;
		case 10:
			if (aggregate.aberdeenpigfarm.func_45() == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				if (func_34(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_11 = 1;
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					aggregate.interactive_campfire.func_103(uParam0);
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					func_26(uParam0, 2);
					return;
				}
				if (MISC::GET_GAME_TIMER() > uParam0->f_13 + 2500)
				{
					func_26(uParam0, 6);
				}
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				if (func_34(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (iLocal_17 == -2016812721)
						{
							PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), -261921482, 3f);
						}
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_11 = 1;
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					func_26(uParam0, 2);
					return;
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_54(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), 5000f, 0, 0);
					func_55(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), 5000f, 0, 0, 0, 0, 0);
					if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
					{
						if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_15, 1, 0))
						{
							if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_15, 1))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
							}
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_13 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
							func_52(4);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_12, 0, 0);
							if (!aggregate.aberdeenpigfarm.func_125(0, 0, 1))
							{
								MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							}
							func_54(Global_36, 100f, 0, 0);
							func_57();
							func_47();
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_13 = MISC::GET_GAME_TIMER();
							func_26(uParam0, 11);
						}
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_34(uParam0))
			{
				if (aggregate.aberdeenpigfarm.func_45() != 0)
				{
					PED::_0x4759CC730F947C81();
					if (!func_14())
					{
						func_15(1);
					}
					func_58(Global_36);
					Global_40.f_9 = 0;
					aggregate.dynamic_craft_scenario.func_333(0, 7);
				}
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && (MISC::GET_GAME_TIMER() - uParam0->f_13) > 250)
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (aggregate.aberdeenpigfarm.func_45() != 0)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_0x8910C24B7E0046EC();
				MISC::_0xA3A8926951471C82();
				if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_15, 0) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_15))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
					if (iLocal_17 == -1054012177)
					{
						HUD::_0x8BC7C1F929D07BF3(2011163970);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_14, TASK::_0xA8452DD321607029(iLocal_16, 1), 0f, 0f, (TASK::_0xB93EA7184BAA85C3(iLocal_16, 1) + 90f), 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_14);
					}
					else if (iLocal_17 == 1097070152)
					{
						aggregate.fme_escaped_convicts.func_913(98.2971f, -4.2336f);
						HUD::_0x8BC7C1F929D07BF3(2011163970);
						PED::_0xEC6935EBE0847B90(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(iLocal_16, 1), TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
					if (iLocal_17 != 1097070152)
					{
						aggregate.fme_escaped_convicts.func_913(0, 0);
					}
					aggregate.coffee_drinking.func_86(-1);
					aggregate.coffee_drinking.func_89(-1, 0);
					uParam0->f_13 = MISC::GET_GAME_TIMER();
					func_26(uParam0, 12);
				}
			}
			else
			{
				func_26(uParam0, 12);
			}
			break;
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (aggregate.aberdeenpigfarm.func_45() != 0)
			{
				if (func_34(uParam0))
				{
					if (func_14())
					{
						func_15(0);
					}
					Global_1956162->f_7 = aggregate.aberdeenpigfarm.func_99();
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				func_64(1);
			}
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), -1961588683, 6f);
				func_26(uParam0, 5);
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_13) > 500)
			{
				if (uParam0->f_21)
				{
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_18));
				}
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_34(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != -490123391 && iLocal_17 == 1097070152))
				{
					uParam0->f_11 = 1;
					return;
				}
				else
				{
					uParam0->f_13 = MISC::GET_GAME_TIMER();
					if (INVENTORY::_0x3D10D7179D7034AF(aggregate.bandana.func_72(0), -569063887, 0))
					{
						INVENTORY::_0x6A564540FAC12211(aggregate.bandana.func_72(0), -569063887);
					}
					func_67(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_13) > 1000)
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), 111553404, 3f);
				func_26(uParam0, 5);
			}
			break;
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_16)
			{
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			break;
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				aggregate.interactive_campfire.func_103(uParam0);
				func_26(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_34(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != -490123391 && iLocal_17 == 1097070152))
				{
					uParam0->f_11 = 1;
					return;
				}
				else
				{
					func_67(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if (!aggregate.doc_book.func_11())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), 111553404, 3f);
				func_26(uParam0, 5);
			}
			break;
		case 16:
			if (func_34(uParam0))
			{
				if (!aggregate.dynamic_craft_scenario.func_69())
				{
					HUD::_0x8BC7C1F929D07BF3(2011163970);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_14))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				aggregate.interactive_campfire.func_103(uParam0);
			}
			break;
	}
}

bool func_14()
{
	return Global_1956162->f_6;
}

void func_15(int iParam0)
{
	Global_1956162->f_6 = iParam0;
}

void func_20(int iParam0)
{
	Global_1938998->f_28.f_2 = iParam0;
}

void func_26(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 1;
}

void func_27(var uParam0)
{
	if (iLocal_17 != -2016812721)
	{
		return;
	}
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		if (!uParam0->f_27)
		{
			if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_24), 2.5f))
			{
				func_72(uParam0);
			}
		}
	}
	else if (!uParam0->f_27 && !PED::_0x9C54041BB66BCF9E(Global_35, iLocal_16))
	{
		func_51(uParam0);
	}
	if (uParam0->f_27)
	{
		if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_24), 2.1f))
		{
			CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
			CAM::DETACH_CAM(uParam0->f_22);
		}
	}
}

bool func_28(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!aggregate.interactive_campfire.func_54(128))
	{
		if (aggregate.hanging_carcass.func_9())
		{
			return false;
		}
	}
	if (aggregate.shop_bait.func_97() >= 1f)
	{
		return false;
	}
	if (aggregate.interactive_campfire.func_54(1073741824 /* Float: 2f */) || aggregate.interactive_campfire.func_54(16777216))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return false;
	}
	iVar0 = TASK::_0x5BA659955369B0E2(iLocal_16);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (iVar0 != Global_35)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
			{
				return false;
			}
		}
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return false;
	}
	if (aggregate.camera_item.func_106(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	if (func_76(TASK::_0xA8452DD321607029(iLocal_16, 1) + Vector(0.5f, 0f, 0f), 1f, 1, Global_35, 0, 0))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_14))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_14, 0))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			return false;
		}
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_16)
	{
		return false;
	}
	if (TASK::_0x8569C38D2FB80650(iLocal_16, 8))
	{
		return false;
	}
	fVar1 = aggregate.fm_mission_controller.func_3321(Global_35, func_29(), 1);
	if (fVar1 > 1f)
	{
		return false;
	}
	if (!aggregate.fme_condor_egg.func_1827(Global_35, func_29(), 0) && fVar1 > func_79())
	{
		return false;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), TASK::_0xA8452DD321607029(iLocal_16, 1), 2f))
	{
		return false;
	}
	iVar2 = TASK::_0x7467165EE97D3C68(iLocal_16);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iVar2))
		{
			return false;
		}
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_0xA8452DD321607029(iLocal_16, 1), 1f) > 0)
	{
		return false;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return false;
	}
	return true;
}

Vector3 func_29()
{
	vector3 vVar0;

	switch (iLocal_17)
	{
		case -2016812721:
			vVar0 = { 0.29f, 1.5f, 1f };
			break;
		case -1054012177:
			vVar0 = { 0f, 0.5f, 0f };
			break;
		default:
			vVar0 = { 0f, 0f, 0.5f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(iLocal_16, 1), TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), vVar0);
}

int func_32()
{
	if (func_85(1))
	{
		return 12;
	}
	else if (func_85(2))
	{
		return 18;
	}
	return 6;
}

char* func_33()
{
	switch (iLocal_17)
	{
		case -2016812721:
		case 1690225020:
			return "CMP_SLP_TNT";
		case -1689755873:
		case 1097070152:
			return "CMP_SLP_GND";
		case -1054012177:
			return "CMP_SLP_BED";
	}
	return "CMP_SLP_BED";
}

bool func_34(var uParam0)
{
	if (uParam0->f_11)
	{
		uParam0->f_11 = 0;
		return true;
	}
	return false;
}

void func_38(int iParam0)
{
	if (!aggregate.interactive_campfire.func_63(iParam0))
	{
		Global_1956162->f_1 = (Global_1956162->f_1 || iParam0);
	}
}

void func_42(var uParam0)
{
	vector3 vVar0;

	if (iLocal_17 != -2016812721)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
	{
		CAM::DESTROY_CAM(uParam0->f_22, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(iLocal_16, 1), TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), 0.5f, -1.25f, 0.75f) };
	uParam0->f_22 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), 51.28f, false, 2);
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), 61.28f, false, 2);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_22, uParam0->f_23, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_43(var uParam0, bool bParam1)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	aggregate.fme_animal_tagging.func_208(1);
	aggregate.camera_item.func_75(1);
	if (!TASK::_0x02EBBB3989B7E695(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		uParam0->f_13 = MISC::GET_GAME_TIMER();
		if (bParam1)
		{
			if (iLocal_17 == -2016812721)
			{
				func_42(uParam0);
				sVar0 = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, sVar0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
		}
		func_26(uParam0, 10);
	}
	else
	{
		func_90(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar1 = false;
		if (aggregate.binoculars.func_13(uParam0[0], 1))
		{
			bVar1 = true;
			uParam0->f_12 = 6;
		}
		else if (aggregate.binoculars.func_13(uParam0[1], 1))
		{
			bVar1 = true;
			uParam0->f_12 = 12;
		}
		else if (aggregate.binoculars.func_13(uParam0[2], 1))
		{
			bVar1 = true;
			uParam0->f_12 = 18;
		}
		else if (aggregate.binoculars.func_13(uParam0[3], 1))
		{
			bVar1 = true;
			uParam0->f_12 = 0;
		}
		if (bVar1)
		{
			uParam0->f_17 = -1;
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
			}
			uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE(func_91(uParam0->f_12), 0, 0, false, true);
			uParam0->f_13 = MISC::GET_GAME_TIMER();
			aggregate.interactive_campfire.func_103(uParam0);
			if (bParam1)
			{
				if (iLocal_17 == -1054012177)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_16, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
			}
			if (Global_1956162->f_7 == -15)
			{
				Global_1956162->f_7 = aggregate.aberdeenpigfarm.func_99();
			}
			iVar2 = Global_1956162->f_7;
			aggregate.coffee_drinking.func_44(&iVar2, 0, 0, 3, 0, 0, 0, 0);
			if (!aggregate.net_ambient_content_evaluator.func_164(iVar2))
			{
				Global_1956162->f_8++;
			}
			else
			{
				Global_1956162->f_8 = 0;
			}
			if (iLocal_17 == -1054012177)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_14))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				if (aggregate.dynamic_craft_scenario.func_134(&Global_35) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					uParam0->f_14 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				}
				else
				{
					uParam0->f_14 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
				}
				uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_16, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_14);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_14, "player", Global_35, 0);
				func_26(uParam0, 9);
			}
			else
			{
				func_26(uParam0, 9);
			}
		}
		else if (aggregate.binoculars.func_13(uParam0[5], 1))
		{
			uParam0->f_17 = -1;
			func_52(4);
			aggregate.interactive_campfire.func_103(uParam0);
			if (uParam0->f_10 == 7)
			{
				func_26(uParam0, 5);
			}
			else
			{
				func_26(uParam0, 2);
			}
		}
	}
}

void func_46(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != 0 && iLocal_17 != -1085971095)
	{
		(*uParam0)[4] = aggregate.camera_item.func_46("SLEEP", joaat("INPUT_CONTEXT_Y"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		aggregate.camera_item.func_130(uParam0[4], 1057677739, 0, 1);
		if (aggregate.interactive_campfire.func_54(8388608) && !aggregate.interactive_campfire.func_63(1024))
		{
			(*uParam0)[6] = aggregate.camera_item.func_46("CAMP_RECIPE", joaat("INPUT_CONTEXT_X"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			aggregate.camera_item.func_130(uParam0[6], 1057677739, 0, 1);
		}
		(*uParam0)[8] = aggregate.camera_item.func_46("LEAVE", joaat("INPUT_CONTEXT_B"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		aggregate.camera_item.func_130(uParam0[8], 1057677739, 0, 1);
	}
}

void func_47()
{
	func_96(joaat("weapon_melee_ancient_hatchet"));
	func_96(joaat("weapon_melee_hatchet_double_bit"));
	func_96(joaat("weapon_melee_hatchet_double_bit_rusted"));
	func_96(joaat("weapon_melee_hatchet_hewing"));
	func_96(joaat("weapon_melee_hatchet_viking"));
	func_96(joaat("weapon_melee_hatchet_hunter_rusted"));
}

void func_50(var uParam0)
{
	if (iLocal_17 != -2016812721)
	{
		return;
	}
	aggregate.barcustomer_interaction.func_43(&(uParam0->f_24));
	uParam0->f_27 = 0;
}

void func_51(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
	{
		CAM::DESTROY_CAM(uParam0->f_22, false);
	}
}

void func_52(int iParam0)
{
	if (aggregate.interactive_campfire.func_63(iParam0))
	{
		Global_1956162->f_1 = (Global_1956162->f_1 - (Global_1956162->f_1 && iParam0));
	}
}

void func_54(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_55(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_57()
{
	if (aggregate.fm_deathmatch_controller.func_1992(0))
	{
		aggregate.net_main_offline.func_6928(0, 0, 100);
		aggregate.net_main_offline.func_6928(0, 1, 100);
	}
	if (aggregate.fm_deathmatch_controller.func_1992(1))
	{
		aggregate.net_main_offline.func_6928(1, 0, 100);
		aggregate.net_main_offline.func_6928(1, 1, 100);
	}
}

void func_58(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_64(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1878407->f_7160)
	{
		if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar1 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar1 /*4*/]), 1))
			{
				switch (&Global_1878407->f_1805[(Global_1878407->f_7161.f_1[iVar1 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = (Global_1878407->f_1805[(Global_1878407->f_7161.f_1[iVar1 /*4*/])->f_1 /*3*/])->f_2;
						if (aggregate.flow_controller.func_34(iVar0))
						{
							if (func_110(iVar0))
							{
								aggregate.net_main_offline.func_883(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_67(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (aggregate.dynamic_craft_scenario.func_58())
	{
		Global_1939221->f_10479 = bParam0;
		aggregate.dynamic_craft_scenario.func_59(bParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!aggregate.dynamic_craft_scenario.func_60(bParam0, bParam4))
	{
		return 0;
	}
	if (aggregate.dynamic_craft_scenario.func_61(bParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (aggregate.bandana.func_11(bParam0, -2081717885))
	{
		aggregate.dynamic_craft_scenario.func_63(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(bParam0, -1909684001))
	{
		aggregate.dynamic_craft_scenario.func_64(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(bParam0, 587975446))
	{
		aggregate.dynamic_craft_scenario.func_65(bParam0, Var10);
	}
	else if (aggregate.bandana.func_11(bParam0, 566155764))
	{
		if (!aggregate.dynamic_craft_scenario.func_66(bParam0))
		{
			return 0;
		}
	}
	if (aggregate.dynamic_craft_scenario.func_67(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = bParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (aggregate.bandana.func_11(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((aggregate.bandana.func_11(bParam0, -1472964441) || aggregate.bandana.func_11(bParam0, -228153877)) || aggregate.bandana.func_11(bParam0, 566155764))
	{
	}
	else if (aggregate.bandana.func_11(bParam0, 1919582297))
	{
		if (((aggregate.dynamic_craft_scenario.func_69() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (bParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		bVar28 = false;
	}
	else if (aggregate.dynamic_craft_scenario.func_70(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = aggregate.dynamic_craft_scenario.func_156(Global_1070355->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		iVar29 = 1;
	}
	else if (aggregate.bandana.func_58(bParam0) == joaat("clothing"))
	{
		if (!aggregate.dynamic_craft_scenario.func_72(bParam0))
		{
			aggregate.net_main_offline.func_312("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = aggregate.bandana.func_10(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = aggregate.dynamic_craft_scenario.func_75();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (aggregate.dynamic_craft_scenario.func_76(PLAYER::PLAYER_ID()))
			{
				aggregate.net_main_offline.func_312("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate.net_main_offline.func_312("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951131->f_1657 != bParam0)
			{
				aggregate.bandana.func_28(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					aggregate.dynamic_craft_scenario.func_78(bParam0, 0);
					return iVar29;
				case -2061583405:
					aggregate.interactive_campfire.func_167(bParam0);
					aggregate.bandana.func_28(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						aggregate.dynamic_craft_scenario.func_80(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(bParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(bParam0, 1);
					}
					break;
				default:
					if (!aggregate.bandana.func_11(bParam0, -1348134986))
					{
					}
					else
					{
						aggregate.dynamic_craft_scenario.func_78(bParam0, 0);
					}
					break;
			}
			aggregate.dynamic_craft_scenario.func_80(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				aggregate.doc_book.func_51(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (aggregate.aberdeenpigfarm.func_45() != -1)
				{
				}
				else if (!aggregate.dynamic_craft_scenario.func_72(bParam0))
				{
					aggregate.net_main_offline.func_312("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = aggregate.dynamic_craft_scenario.func_83(7, bParam0);
					bVar31 = aggregate.dynamic_craft_scenario.func_83(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17095))
						{
							MAP::REMOVE_BLIP(&Global_17095);
						}
						Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
						aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17095), 10000, 0, 0, 0, 1);
					}
					else if (!aggregate.dynamic_craft_scenario.func_84(7))
					{
						aggregate.net_main_offline.func_312("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (aggregate.dynamic_craft_scenario.func_86(Global_35, aggregate.dynamic_craft_scenario.func_85(7), 0))
						{
							aggregate.net_main_offline.func_312("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17095))
							{
								MAP::REMOVE_BLIP(&Global_17095);
							}
							Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
							aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17095), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						Jump @2071; //curOff = 1568
						aggregate.dynamic_craft_scenario.func_87();
						Jump @2071; //curOff = 1575
						if (!aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 1) || aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 512))
						{
							if (aggregate.dynamic_craft_scenario.func_72(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (aggregate.dynamic_craft_scenario.func_88(1, 1))
								{
									aggregate.dynamic_craft_scenario.func_89(2, 1);
								}
								else if (aggregate.dynamic_craft_scenario.func_90(1))
								{
									aggregate.net_main_offline.func_312("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (aggregate.dynamic_craft_scenario.func_91())
								{
									aggregate.net_main_offline.func_312("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										aggregate.dynamic_craft_scenario.func_92();
									}
									else
									{
										aggregate.net_main_offline.func_312("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								aggregate.net_main_offline.func_312("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (aggregate.dynamic_craft_scenario.func_91())
							{
								aggregate.net_main_offline.func_312("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								aggregate.net_main_offline.func_312("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956162->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2071; //curOff = 1850
						if (!WEAPON::_0xC853230E76A152DF(aggregate.binoculars.func_8(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bParam0, true, 0, false, false);
						}
						return 1;
						Jump @2071; //curOff = 1888
						if (aggregate.binoculars.func_8(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2071; //curOff = 1929
						Jump @2071; //curOff = 1932
						aggregate.binoculars.func_18(533, 1);
						Jump @2071; //curOff = 1943
						aggregate.dynamic_craft_scenario.func_30(1);
						Jump @2071; //curOff = 1951
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return 1;
						Jump @2071; //curOff = 1986
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						return 1;
						Jump @2071; //curOff = 2062
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

void func_72(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iLocal_17 != -2016812721)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
	{
		CAM::DESTROY_CAM(uParam0->f_22, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(iLocal_16, 1), TASK::_0xB93EA7184BAA85C3(iLocal_16, 1), 2f, 3.25f, 0.75f) };
	uParam0->f_22 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, (TASK::_0xB93EA7184BAA85C3(iLocal_16, 1) + 125f), 51.28f, false, 2);
	vVar3 = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_22, Global_35, vVar3, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_22, Global_35, -0.7722f, -0.593f, 0.2919f, true);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_22, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		aggregate.fme_escaped_convicts.func_913(130.648f, 1.3841f);
	}
	aggregate.barcustomer_interaction.func_43(&(uParam0->f_24));
	uParam0->f_27 = 1;
}

bool func_76(vector3 vParam0, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!MISC::_0xBDC6E364C9C78178(Global_26103))
	{
		Global_26103 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_0x20A4BF0E09BEE146(Global_26103);
	iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam0, bParam3, Global_26103, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_26103);
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(iVar2);
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

float func_79()
{
	switch (iLocal_17)
	{
		case 1097070152:
			return 0.5625f;
	}
	return 0.25f;
}

bool func_85(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99());
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_90(var uParam0)
{
	int iVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_17 != iVar0)
	{
		if (uParam0->f_17 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_17 = iVar0;
		if (!func_162(uParam0) && bVar1)
		{
			aggregate.net_main_offline.func_312("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

char* func_91(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = aggregate.blackwater.func_268(aggregate.fm_mission_controller.func_5684(func_163(iParam0), func_164(), 1, 63));
	sVar2 = aggregate.blackwater.func_268(aggregate.fm_mission_controller.func_5684(sVar0, sVar1, 1, 63));
	return sVar2;
}

void func_96(bool bParam0)
{
	if (aggregate.doc_book.func_173(bParam0))
	{
		if (!aggregate.binoculars.func_32(bParam0, 1))
		{
			aggregate.net_coach_holdup.func_1251(bParam0, 1, 0, 0, 0, 0, 752097756, 0);
		}
	}
}

bool func_110(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_58 & 64512 != 0;
}

bool func_162(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		aggregate.annesburg.func_218((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_17 > 3 && uParam0->f_17 <= 9)
	{
		(*uParam0)[1] = aggregate.binoculars.func_20("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = aggregate.binoculars.func_20("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = aggregate.binoculars.func_20("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_17 > 9 && uParam0->f_17 <= 15)
	{
		(*uParam0)[2] = aggregate.binoculars.func_20("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = aggregate.binoculars.func_20("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = aggregate.binoculars.func_20("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_17 > 15 && uParam0->f_17 <= 21)
	{
		(*uParam0)[3] = aggregate.binoculars.func_20("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = aggregate.binoculars.func_20("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = aggregate.binoculars.func_20("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_17 > 21 || uParam0->f_17 <= 3)
	{
		(*uParam0)[0] = aggregate.binoculars.func_20("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = aggregate.binoculars.func_20("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = aggregate.binoculars.func_20("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	bVar2 = true;
	if (Global_1956162->f_7 == -15)
	{
		Global_1956162->f_7 = aggregate.aberdeenpigfarm.func_99();
	}
	iVar3 = Global_1956162->f_7;
	aggregate.coffee_drinking.func_44(&iVar3, 0, 0, 3, 0, 0, 0, 0);
	if (!aggregate.net_ambient_content_evaluator.func_164(iVar3))
	{
		if (Global_1956162->f_8 > 1)
		{
			bVar2 = false;
		}
	}
	else
	{
		Global_1956162->f_8 = 0;
	}
	if (aggregate.annesburg.func_217(uParam0[0]))
	{
		if (uParam0->f_17 < 6)
		{
			iVar1 = (6 - uParam0->f_17);
		}
		else
		{
			iVar1 = (24 - uParam0->f_17) + 6;
		}
		aggregate.fm_mission_controller.func_7013(uParam0[0], "CMP_SLP_MRN", iVar1, 1);
		aggregate.camera_item.func_130(uParam0[0], 1323335645, 0, 1);
		aggregate.binoculars.func_37(uParam0[0], bVar2, 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0[1]))
	{
		if (uParam0->f_17 < 12)
		{
			iVar1 = (12 - uParam0->f_17);
		}
		else
		{
			iVar1 = (24 - uParam0->f_17) + 12;
		}
		aggregate.fm_mission_controller.func_7013(uParam0[1], "CMP_SLP_NOON", iVar1, 1);
		aggregate.camera_item.func_130(uParam0[1], 1323335645, 0, 1);
		aggregate.binoculars.func_37(uParam0[1], bVar2, 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0[2]))
	{
		if (uParam0->f_17 < 18)
		{
			iVar1 = (18 - uParam0->f_17);
		}
		else
		{
			iVar1 = (24 - uParam0->f_17) + 18;
		}
		aggregate.fm_mission_controller.func_7013(uParam0[2], "CMP_SLP_EVE", iVar1, 1);
		aggregate.camera_item.func_130(uParam0[2], 1323335645, 0, 1);
		aggregate.binoculars.func_37(uParam0[2], bVar2, 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0[3]))
	{
		iVar1 = (24 - uParam0->f_17);
		aggregate.fm_mission_controller.func_7013(uParam0[3], "CMP_SLP_MDN", iVar1, 1);
		aggregate.camera_item.func_130(uParam0[3], 1323335645, 0, 1);
		aggregate.binoculars.func_37(uParam0[3], bVar2, 1, 1);
	}
	return bVar2;
}

char* func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (aggregate.fme_escaped_convicts.func_724())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (aggregate.fme_escaped_convicts.func_724())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (aggregate.fme_escaped_convicts.func_724())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (aggregate.fme_escaped_convicts.func_724())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_164()
{
	int iVar0;

	iVar0 = func_281();
	switch (iVar0)
	{
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("blizzard"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
		case joaat("groundblizzard"):
			return "04Storm";
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("overcast"):
		case joaat("fog"):
		case joaat("shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("snowlight"):
			return "03Clouds";
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("misty"):
		case joaat("sunny"):
		case joaat("snowclearing"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

var func_201(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

var func_281()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

