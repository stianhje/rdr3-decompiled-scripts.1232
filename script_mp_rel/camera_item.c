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
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[32] = "";
	char cLocal_37[32] = "";
	char* sLocal_41 = NULL;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	struct<94> Local_53 = { 1, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_147 = 0f;
	int iLocal_148 = 0;
	float fLocal_149 = 0f;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	vector3 vLocal_152 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	bool bLocal_168 = false;
	int iLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = false;
	char* sLocal_178[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	bool bLocal_201 = false;
	float fLocal_202 = 0f;
	float fLocal_203 = 0f;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_17 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_18 = "facials@gen_male@portrait";
	StringCopy(&cLocal_33, "", 32);
	StringCopy(&cLocal_37, "", 32);
	sLocal_41 = "CameraViewfinder";
	sLocal_42 = "CameraTakePicture";
	sLocal_43 = "CameraTransitionBlink";
	bLocal_52 = true;
	fLocal_164 = 0f;
	fLocal_203 = 0.5f;
	iLocal_205 = 4;
	iLocal_206 = -1534086282;
	iLocal_208 = -193491261;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_53, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_52)
	{
		if (iLocal_23 == 1)
		{
			func_3();
		}
		if (aggregate.camera_item.func_4(&(Local_53.f_1[2]), 1))
		{
			if (MISC::IS_BIT_SET(&Global_1956177, 5))
			{
				aggregate.binoculars.func_37(&(Local_53.f_1[2]), 0, 1, 1);
			}
			else
			{
				aggregate.binoculars.func_37(&(Local_53.f_1[2]), 1, 1, 1);
			}
		}
		if (aggregate.camera_item.func_4(&(Local_53.f_1[8]), 1))
		{
			if (bLocal_201)
			{
				aggregate.binoculars.func_37(&(Local_53.f_1[8]), 0, 1, 1);
			}
			else
			{
				aggregate.binoculars.func_37(&(Local_53.f_1[8]), 1, 1, 1);
			}
		}
		aggregate.camera_item.func_6(2);
		aggregate.camera_item.func_6(4);
		aggregate.camera_item.func_6(8);
		aggregate.camera_item.func_6(16);
		aggregate.camera_item.func_6(32);
		aggregate.camera_item.func_6(32768);
		aggregate.camera_item.func_6(128);
		aggregate.camera_item.func_6(256);
		aggregate.camera_item.func_6(512);
		aggregate.camera_item.func_6(1024);
		aggregate.camera_item.func_6(2048);
		aggregate.camera_item.func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_52)
		{
			if (func_7(&Local_53))
			{
				bLocal_52 = true;
			}
			else
			{
				bLocal_52 = false;
			}
		}
		func_8(Local_53);
		func_9(&Local_53);
		aggregate.camera_item.func_10(&(Local_53.f_71), &(Local_53.f_72), &(Local_53.f_75), &(Local_53.f_76), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (aggregate.binoculars.func_13(&(Local_53.f_1[2]), 1) || aggregate.binoculars.func_13(&(Local_53.f_1[7]), 1))
		{
			iLocal_44 = 1;
			if (aggregate.camera_item.func_12(&Local_53) == 3)
			{
				aggregate.camera_item.func_13(&Local_53, 12);
			}
			else if (aggregate.camera_item.func_12(&Local_53) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_176 = MISC::GET_GAME_TIMER();
				bLocal_177 = true;
				func_15();
				Global_1956174 = 0;
				aggregate.camera_item.func_13(&Local_53, 4);
			}
		}
		func_16(&Local_53);
		iVar0 = aggregate.camera_item.func_12(&Local_53);
		if (func_17())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_18())
				{
					iLocal_23 = 0;
					uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "Disabled");
					func_19();
					aggregate.camera_item.func_13(&Local_53, 1);
				}
				else
				{
					if (aggregate.camera_item.func_20(&Local_53))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_23 = 1;
						aggregate.camera_item.func_21(&Local_53);
					}
					aggregate.camera_item.func_13(&Local_53, 1);
				}
				break;
			case 1:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				func_22();
				iLocal_19 = MISC::GET_GAME_TIMER();
				aggregate.camera_item.func_13(&Local_53, 2);
				break;
			case 2:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				if (func_23(iLocal_19) && aggregate.binoculars.func_8(Global_35, 1, 0, 0) == joaat("weapon_kit_camera"))
				{
					aggregate.camera_item.func_13(&Local_53, 3);
				}
				break;
			case 4:
				func_9(&Local_53);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				if (bLocal_177)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_176) > 500)
					{
						HUD::_0x8BC7C1F929D07BF3(959420967);
						CAM::SET_CAM_ACTIVE(Local_53.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_53.f_14);
						CAM::DESTROY_CAM(Local_53.f_14, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						aggregate.camera_item.func_13(&Local_53, 3);
						func_25();
						bLocal_177 = false;
						func_26();
					}
				}
				break;
			case 3:
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_169) > 100)
				{
					func_27();
					iLocal_169 = MISC::GET_GAME_TIMER();
				}
				if (aggregate.camera_item.func_20(&Local_53))
				{
					func_28(&Local_53);
					func_29(3);
					aggregate.binoculars.func_17(1);
					aggregate.camera_item.func_21(&Local_53);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
				if (iLocal_44 == 1 && &Global_1956175 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_44 = 0;
					}
					else
					{
						iLocal_44 = 1;
					}
				}
				if (&Global_1956175 != 1)
				{
				}
				else
				{
					iLocal_44 = 0;
				}
				if (bLocal_168 && iLocal_44 == 0)
				{
					aggregate.binoculars.func_37(&(Local_53.f_1[0]), 1, 1, 1);
					if (aggregate.camera_item.func_31(&(Local_53.f_1[0]), 1) || &Global_1956175 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (&Global_1956175 == 1)
						{
							Global_1956175 = 0;
						}
						Global_1956174 = 1;
						func_15();
						HUD::_0x4CC5F2FC1332577F(959420967);
						func_32();
						iLocal_148 = MISC::GET_GAME_TIMER();
						aggregate.camera_item.func_13(&Local_53, 5);
					}
				}
				else
				{
					aggregate.binoculars.func_37(&(Local_53.f_1[0]), 0, 1, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_151) > 600)
				{
					func_33();
					iLocal_151 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_150)
				{
					aggregate.binoculars.func_37(&(Local_53.f_1[1]), 1, 1, 1);
					if (aggregate.camera_item.func_31(&(Local_53.f_1[1]), 1))
					{
						if (aggregate.camera_item.func_34(Global_35, 0))
						{
						}
						else
						{
							iLocal_173 = 0;
							iLocal_175 = 0;
							func_15();
							aggregate.camera_item.func_13(&Local_53, 8);
							if (!aggregate.barcustomer_interaction.func_42(&uLocal_170))
							{
								aggregate.barcustomer_interaction.func_25(&uLocal_170, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_0x6FB1DA3CA9DA7D90("Place_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
							}
						}
					}
				}
				else
				{
					aggregate.binoculars.func_37(&(Local_53.f_1[1]), 0, 1, 1);
				}
				break;
			case 5:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				if (func_37() && (MISC::GET_GAME_TIMER() - iLocal_148) > 500)
				{
					func_38();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
					Local_53.f_50 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_53.f_53 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_53.f_65 = { Local_53.f_53, Local_53.f_53.f_1, Local_53.f_53.f_2 };
					Local_53.f_59 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_53.f_50, Local_53.f_53.f_2, 0f, 0.3f, 0.5f) };
					Local_53.f_91 = 0;
					Local_53.f_65 = { 0f, 0f, 0f };
					Local_53.f_64 = 0f;
					Local_53.f_63 = 0f;
					Local_53.f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_53.f_59, Local_53.f_65, 65f, false, 2);
					fLocal_147 = Local_53.f_53.f_2;
					if (aggregate.aberdeenpigfarm.func_45() != 0)
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_53.f_14, Global_35, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_53.f_14, Global_35, 21030, 0f, 0.6f, 0f, true);
					}
					CAM::SET_CAM_NEAR_CLIP(Local_53.f_14, 0.25f);
					Local_53.f_15 = 5f;
					Local_53.f_15.f_1 = 2f;
					Local_53.f_15.f_2 = 128f;
					Local_53.f_15.f_3 = 25f;
					Local_53.f_15.f_4 = 25f;
					Local_53.f_15.f_5 = 60f;
					Local_53.f_15.f_6 = 1;
					Local_53.f_15.f_7 = 0;
					Local_53.f_15.f_8 = 1;
					Local_53.f_15.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_53.f_14, &(Local_53.f_15));
					CAM::_0x9F97E85EC142255E(Local_53.f_14, Local_53.f_91);
					CAM::_0x42ED56B02E05D109(Local_53.f_14, false);
					CAM::SET_CAM_ACTIVE(Local_53.f_14, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Expand_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_33();
					iLocal_151 = MISC::GET_GAME_TIMER();
					func_26();
					aggregate.camera_item.func_13(&Local_53, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				if (iLocal_45 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1956176 = 1;
					iLocal_45 = 1;
				}
				if (MISC::IS_BIT_SET(&Global_1956177, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (aggregate.camera_item.func_20(&Local_53))
				{
					func_29(6);
					aggregate.camera_item.func_21(&Local_53);
				}
				func_40(&Local_53);
				if (iLocal_48 != 0)
				{
				}
				else
				{
					if (func_41(&(Local_53.f_1[6])) && !aggregate.aberdeenpigfarm.func_61(&Local_53, 32))
					{
						func_28(&Local_53);
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_0x6FB1DA3CA9DA7D90("Take_Photo", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
						}
						func_43(1);
						aggregate.aberdeenpigfarm.func_68(&Local_53, 32);
					}
					if (!aggregate.aberdeenpigfarm.func_61(&Local_53, 32))
					{
						if (func_41(&(Local_53.f_1[5])))
						{
							func_45();
						}
					}
				}
				break;
			case 11:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					Local_53.f_1[6] = aggregate.camera_item.func_46("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					aggregate.binoculars.func_17(1);
					func_47("CAM_SNAP", 0, 0, 1);
					aggregate.camera_item.func_21(&Local_53);
				}
				if (func_48())
				{
					if (!aggregate.aberdeenpigfarm.func_61(&Local_53, 16))
					{
						aggregate.camera_item.func_13(&Local_53, 3);
					}
					else
					{
						aggregate.camera_item.func_13(&Local_53, 13);
					}
				}
				else
				{
					func_49(&Local_53);
				}
				break;
			case 10:
				func_50(&Local_53);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				iLocal_44 = 1;
				if (iLocal_174 != 0)
				{
				}
				else if (aggregate.camera_item.func_51(&uLocal_170) > 500)
				{
					if (CAM::DOES_CAM_EXIST(Local_53.f_14))
					{
						CAM::SET_CAM_ACTIVE(Local_53.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(Local_53.f_14, false);
					}
					if (func_52())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_202);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_25();
					iLocal_174 = 1;
				}
				if (aggregate.camera_item.func_51(&uLocal_170) > 1000)
				{
					HUD::_0x8BC7C1F929D07BF3(959420967);
					func_26();
					aggregate.barcustomer_interaction.func_50(&uLocal_170);
					func_14();
					aggregate.camera_item.func_13(&Local_53, 3);
				}
				break;
			case 8:
				func_50(&Local_53);
				if (iLocal_173 == 0)
				{
					if (aggregate.camera_item.func_51(&uLocal_170) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_152, fLocal_163, 1, 0, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						func_38();
						bLocal_201 = false;
						iLocal_173 = 1;
					}
				}
				if (iLocal_173 != 1)
				{
				}
				else if (iLocal_175 == 0)
				{
					if (aggregate.camera_item.func_51(&uLocal_170) > 300)
					{
						iLocal_175 = 1;
						func_54(&Local_53);
					}
				}
				else if (aggregate.camera_item.func_51(&uLocal_170) > 1000)
				{
					aggregate.barcustomer_interaction.func_50(&uLocal_170);
					func_55(&Local_53);
					func_26();
					aggregate.camera_item.func_13(&Local_53, 9);
				}
				break;
			case 9:
				func_50(&Local_53);
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				func_55(&Local_53);
				if (aggregate.camera_item.func_31(&(Local_53.f_1[6]), 1) && !aggregate.aberdeenpigfarm.func_61(&Local_53, 32))
				{
					func_28(&Local_53);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Take_Photo", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					func_43(1);
					aggregate.aberdeenpigfarm.func_68(&Local_53, 32);
				}
				else if (aggregate.camera_item.func_31(&(Local_53.f_1[1]), 1))
				{
					aggregate.camera_item.func_13(&Local_53, 8);
				}
				if (!aggregate.aberdeenpigfarm.func_61(&Local_53, 32))
				{
					if (func_41(&(Local_53.f_1[5])))
					{
						func_45();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				func_28(&Local_53);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				aggregate.camera_item.func_13(&Local_53, 13);
				break;
			case 13:
				if (aggregate.camera_item.func_20(&Local_53))
				{
					aggregate.camera_item.func_21(&Local_53);
				}
				func_2();
				func_1(&Local_53, 1);
				if (PED::_0xD5FE956C70FF370B(Global_35))
				{
				}
				else if (func_52())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_56())
		{
			if (aggregate.broom_scenario.func_29(&uLocal_187) > 1f)
			{
				func_58();
			}
		}
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
	}
	else if (func_52())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	func_2();
	func_1(&Local_53, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_0x8BC7C1F929D07BF3(959420967);
	Global_1956174 = 0;
	Global_1956175 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	STREAMING::REMOVE_CLIP_SET(sLocal_18);
	STREAMING::REMOVE_ANIM_DICT(sLocal_17);
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_28(uParam0);
	aggregate.binoculars.func_17(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_0xAA03F130A637D923("CAMERA");
}

void func_2()
{
	if (iLocal_21 == 1)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_47);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_31);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_207))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_207);
	}
	iLocal_207 = 0;
	func_25();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_43);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	func_14();
	if (TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
	}
}

void func_3()
{
	Local_53.f_87 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_53.f_87 == 1)
	{
	}
	if (Local_53.f_87 == 0)
	{
		bLocal_22 = false;
		iLocal_24 = GRAPHICS::_0x78C56B8A7B1D000C();
		iLocal_25 = GRAPHICS::_0x8E587FCD30E05592();
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_59();
		iLocal_23 = 0;
		bLocal_27 = true;
		iLocal_28 = MISC::GET_GAME_TIMER();
	}
	else if (Local_53.f_87 == 2)
	{
		bLocal_22 = true;
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_23 = 0;
		bLocal_27 = false;
	}
}

bool func_7(var uParam0)
{
	if (&Global_1956176 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1956176 = 0;
		return false;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return false;
		}
		if (PED::_0x7FC84E85D98F063D(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return false;
		}
		if (PED::_0x9682F850056C9ADE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return false;
		}
	}
	if (aggregate.camera_item.func_66())
	{
		if (func_67(16) || func_68(Global_1915170->f_19742.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return false;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (!aggregate.barcustomer_interaction.func_12(Global_35, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (!aggregate.binoculars.func_32(joaat("weapon_kit_camera"), 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (aggregate.camera_item.func_12(uParam0) == 8)
	{
	}
	if ((aggregate.camera_item.func_12(uParam0) != 8 && aggregate.camera_item.func_12(uParam0) != 9) && aggregate.camera_item.func_12(uParam0) != 10)
	{
		if (aggregate.binoculars.func_8(Global_35, 1, 0, 1) != joaat("weapon_kit_camera"))
		{
			if (aggregate.camera_item.func_12(uParam0) == 0)
			{
				return false;
			}
		}
	}
	if (aggregate.binoculars.func_33())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
	{
		aggregate.camera_item.func_73("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	if (Global_1939168->f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return false;
	}
	return true;
}

void func_8(struct<89> Param0, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173, true);
	if (Param0.f_88 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!Param0.f_88 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (aggregate.camera_item.func_74(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((aggregate.camera_item.func_12(uParam0) == 8 || aggregate.camera_item.func_12(uParam0) == 9) || aggregate.camera_item.func_12(uParam0) == 10) || aggregate.camera_item.func_12(uParam0) == 5) || aggregate.camera_item.func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_88 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		aggregate.camera_item.func_75(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_13) && CAM::IS_CAM_ACTIVE(uParam0->f_13))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_14()
{
	AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_43);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (aggregate.camera_item.func_4(&(uParam0->f_1[6]), 1))
	{
		if (uParam0->f_89 == 0 && iLocal_23 == 0)
		{
			aggregate.binoculars.func_37(&(uParam0->f_1[6]), 1, 1, 1);
			if (bLocal_27)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_28) > 2500)
				{
					iLocal_24 = GRAPHICS::_0x78C56B8A7B1D000C();
					func_59();
					iLocal_28 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			aggregate.binoculars.func_37(&(uParam0->f_1[6]), 0, 1, 1);
		}
	}
	switch (uParam0->f_89)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_47);
				bLocal_22 = true;
				aggregate.camera_item.func_77(uParam0, 2);
				iLocal_21 = 0;
			}
			break;
		case 0:
			if (aggregate.aberdeenpigfarm.func_61(uParam0, 32))
			{
				func_28(uParam0);
				if (func_18() || bLocal_22)
				{
					aggregate.camera_item.func_77(uParam0, 2);
				}
				else if (iLocal_24 == iLocal_25)
				{
					if (iLocal_47 == 0)
					{
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_47 = aggregate.camera_item.func_78(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						aggregate.camera_item.func_77(uParam0, 1);
						iLocal_21 = 1;
					}
					else
					{
						bLocal_22 = true;
						aggregate.camera_item.func_77(uParam0, 2);
					}
				}
				else
				{
					aggregate.camera_item.func_77(uParam0, 2);
				}
			}
			if (aggregate.aberdeenpigfarm.func_61(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				aggregate.camera_item.func_77(uParam0, 7);
			}
			break;
		case 2:
			Local_53.f_93 = 0;
			func_43(0);
			aggregate.camera_item.func_77(uParam0, 3);
			iLocal_51 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_51) > 0)
			{
				iLocal_51 = MISC::GET_GAME_TIMER();
				func_79();
				if (func_18() || bLocal_22)
				{
					aggregate.camera_item.func_77(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_24++;
					func_59();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					aggregate.camera_item.func_77(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_87 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_87 == 1)
			{
			}
			if (uParam0->f_87 == 0)
			{
				if (aggregate.camera_item.func_12(uParam0) == 8 || aggregate.camera_item.func_12(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = aggregate.annesburg.func_122();
				if (aggregate.aberdeenpigfarm.func_58(iVar23))
				{
					MemCopy(&cVar19, {func_82(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = aggregate.camera_item.func_83();
					StringCopy(&cVar19, func_84(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = aggregate.aberdeenpigfarm.func_66();
				if (aggregate.aberdeenpigfarm.func_10(iVar29))
				{
					StringCopy(&cVar25, func_87(iVar29), 16);
					StringCopy(&cVar27, func_88(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_26 = 0;
				aggregate.camera_item.func_77(uParam0, 6);
			}
			else if (uParam0->f_87 == 2)
			{
				aggregate.camera_item.func_77(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_26 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_38();
				func_29(aggregate.camera_item.func_12(uParam0));
				aggregate.binoculars.func_37(&(uParam0->f_1[6]), 0, 1, 1);
				aggregate.binoculars.func_18(689, 0);
				iLocal_26 = 1;
			}
			uParam0->f_87 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_87 == 0)
			{
				Local_53.f_93 = 1;
				aggregate.binoculars.func_39(uParam0, 32);
				aggregate.camera_item.func_77(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
			}
			else if (uParam0->f_87 == 2)
			{
				Local_53.f_93 = 1;
				aggregate.binoculars.func_39(uParam0, 32);
				aggregate.camera_item.func_77(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_51) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				aggregate.binoculars.func_39(uParam0, 32);
				aggregate.camera_item.func_77(uParam0, 0);
				func_38();
				func_29(aggregate.camera_item.func_12(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				aggregate.binoculars.func_18(689, 0);
			}
			break;
		case 7:
			uParam0->f_87 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_87 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				aggregate.aberdeenpigfarm.func_68(uParam0, 256);
				aggregate.binoculars.func_39(uParam0, 128);
				aggregate.camera_item.func_77(uParam0, 0);
			}
			else if (uParam0->f_87 == 2)
			{
				aggregate.binoculars.func_39(uParam0, 128);
				aggregate.camera_item.func_77(uParam0, 0);
			}
			break;
	}
}

bool func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

bool func_18()
{
	return &Global_1956173;
}

void func_19()
{
	StringCopy(&cLocal_33, "-", 32);
	StringConCat(&cLocal_33, " / ", 32);
	StringCopy(&cLocal_37, "-", 32);
	StringConCat(&cLocal_33, &cLocal_37, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_32, &cLocal_33);
}

void func_22()
{
	HUD::_0xF66090013DE648D5("CAMERA");
	STREAMING::REQUEST_ANIM_DICT(sLocal_17);
	STREAMING::REQUEST_CLIP_SET(sLocal_18);
	GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
	{
		iVar0 = 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
	{
		iVar0 = 0;
	}
	if (!HUD::_0xD0976CC34002DB57("CAMERA"))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_18))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_17))
	{
		iVar0 = 0;
	}
	if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
	{
		if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_25()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_41);
	}
}

void func_26()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_43);
	}
}

void func_27()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0.75f, 0f, 0f) };
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		bLocal_168 = false;
		return;
	}
	if ((ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar4.x, vVar4.y, vVar4.z, 3167)) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_168 = true;
	}
	else
	{
		bLocal_168 = false;
	}
}

void func_28(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_1[iVar0])))
		{
			aggregate.annesburg.func_218(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_29(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_92(6, 0);
			func_92(3, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			func_92(4, 0);
			func_92(5, 0);
			func_92(0, 1);
			func_92(1, 1);
			func_92(2, 1);
			break;
		case 6:
			func_92(0, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 8:
			func_92(0, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(8, 1);
			func_92(9, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 9:
			func_92(0, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(8, 1);
			func_92(9, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 10:
			func_92(2, 0);
			func_92(0, 0);
			func_92(3, 0);
			func_92(1, 0);
			func_92(5, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			func_92(6, 0);
			func_92(9, 0);
			func_92(4, 0);
			break;
		case 7:
			func_92(2, 0);
			func_92(0, 0);
			func_92(6, 0);
			func_92(4, 0);
			func_92(5, 0);
			func_92(1, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			break;
	}
}

void func_32()
{
	if (iLocal_205 == 0)
	{
		iLocal_205 = 1;
	}
}

void func_33()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, 0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_155, &uVar5, 0);
	if ((vLocal_155.z - fVar4) > 3f)
	{
		bLocal_150 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_150 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_155, 2f) > 0)
	{
		bLocal_150 = false;
		return;
	}
	if ((fVar4 - vLocal_155.z) > 1f)
	{
		bLocal_150 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_150 = false;
		return;
	}
	if (aggregate.camera_item.func_34(Global_35, 0))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		bLocal_150 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_150 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_150 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_150 = true;
	}
	else
	{
		bLocal_150 = false;
	}
	if (bLocal_150)
	{
		vLocal_152 = { vLocal_155.x, vLocal_155.y, (vLocal_155.z - 1f) };
		fLocal_163 = fVar0;
		vLocal_158 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_37()
{
	switch (iLocal_205)
	{
		case 0:
			if (iLocal_206 == iLocal_208)
			{
			}
			break;
		case 1:
			iLocal_207 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_206);
			iLocal_205 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_207))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_207, iLocal_208);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_207);
				iLocal_205 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_38()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_41);
	}
}

void func_40(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;

	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 1, 0, -1, 0);
	if (uParam0->f_71 > 0 && IntToFloat(uParam0->f_71) > 89f)
	{
		uParam0->f_71 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_71 < 0 && IntToFloat(uParam0->f_71) < -89f)
	{
		uParam0->f_71 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_72 > 0 && IntToFloat(uParam0->f_72) > 89f)
	{
		uParam0->f_72 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_72 < 0 && IntToFloat(uParam0->f_72) < -89f)
	{
		uParam0->f_72 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_71 != uParam0->f_73)
	{
		uParam0->f_73 = uParam0->f_71;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_71) - -89f) / (89f - -89f));
		uParam0->f_79 = fVar0;
	}
	else
	{
		uParam0->f_83 = 0f;
	}
	if (uParam0->f_72 != uParam0->f_74)
	{
		uParam0->f_74 = uParam0->f_72;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_72) - -89f) / (89f - -89f));
		uParam0->f_80 = fVar1;
	}
	else
	{
		uParam0->f_84 = 0f;
	}
	fVar4 = 50f;
	fVar5 = -25f;
	fVar2 = 68f;
	fVar3 = -85f;
	fVar9 = uParam0->f_63;
	fVar10 = uParam0->f_64;
	fVar8 = -1f;
	if (uParam0->f_75 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_75 = MISC::ABSI(uParam0->f_75);
	}
	fVar6 = ((BUILTIN::TO_FLOAT(uParam0->f_75) - 0f) / (89f - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_63 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_76 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_76 = MISC::ABSI(uParam0->f_76);
	}
	fVar7 = ((BUILTIN::TO_FLOAT(uParam0->f_76) - 0f) / (89f - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_64 = fVar10;
	uParam0->f_65 = { Vector(fLocal_147, 0f, 0f) + Vector(uParam0->f_63, 0f, uParam0->f_64) };
	func_95(uParam0);
	func_96(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_59, uParam0->f_65, 50f, 0, 1, 1, 2, 0, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_169) > 100)
	{
		if (iLocal_46 == 0)
		{
			fVar11 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar11, 0f, 0.25f, 0f) };
			func_27();
			if ((!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar12.x, vVar12.y, vVar12.z, 3167) || !ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, uParam0->f_59, 3167)) || bLocal_168 == 0)
			{
				if (aggregate.aberdeenpigfarm.func_45() == 0 && PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				{
				}
				else if (PED::IS_PED_IN_ANY_BOAT(Global_35))
				{
				}
				else
				{
					Global_1956176 = 1;
					iLocal_46 = 1;
				}
			}
		}
		iLocal_169 = MISC::GET_GAME_TIMER();
	}
}

bool func_41(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.annesburg.func_253(iParam0);
	iVar1 = ((*Global_1949749)[iVar0 /*23*/])->f_4;
	return (aggregate.camera_item.func_31(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

void func_43(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_45()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

var func_47(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return aggregate.camera_item.func_73(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_48()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_49(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !aggregate.aberdeenpigfarm.func_61(uParam0, 32))
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("CLICK", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		func_43(1);
		aggregate.aberdeenpigfarm.func_68(uParam0, 32);
	}
	return 1;
}

void func_50(var uParam0)
{
	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (!PED::_0x9682F850056C9ADE(Global_35))
	{
		if (aggregate.aberdeenpigfarm.func_45() == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 20f)
			{
				Global_1956176 = 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 3f)
			{
				Global_1956176 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 3f)
		{
			ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_152, fLocal_163, 1, 0, 1);
			ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

bool func_52()
{
	if (PED::_0x3BDFCF25B58B0415(Global_35) == 0 && PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		return true;
	}
	return false;
}

void func_54(var uParam0)
{
	if (aggregate.camera_item.func_20(uParam0))
	{
		func_29(8);
		aggregate.camera_item.func_21(uParam0);
	}
	func_101(uParam0);
	func_102();
	func_103();
	uParam0->f_70 = 0;
	iLocal_199 = 0;
	bLocal_161 = true;
	bLocal_162 = false;
	HUD::_0x4CC5F2FC1332577F(959420967);
}

void func_55(var uParam0)
{
	func_104(uParam0);
	if (uParam0->f_75 > 16)
	{
		if ((fLocal_164 - 0.07f) > -10f)
		{
			if (uParam0->f_75 > 100)
			{
				vLocal_165.f_2 = (vLocal_165.z - 0.6f);
				fLocal_164 = (fLocal_164 - (0.07f * 3f));
			}
			else
			{
				vLocal_165.f_2 = (vLocal_165.z - 0.2f);
				fLocal_164 = (fLocal_164 - 0.07f);
			}
		}
	}
	if (uParam0->f_75 < -16)
	{
		if ((fLocal_164 + 0.07f) < 10f)
		{
			if (uParam0->f_75 < -100)
			{
				vLocal_165.f_2 = (vLocal_165.z + 0.6f);
				fLocal_164 = (fLocal_164 + (0.07f * 3f));
			}
			else
			{
				vLocal_165.f_2 = (vLocal_165.z + 0.2f);
				fLocal_164 = (fLocal_164 + 0.07f);
			}
		}
	}
	if (uParam0->f_76 > 16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_203 - 0.07f) > -10f)
		{
			if (uParam0->f_76 > 100)
			{
				vLocal_165.x = (vLocal_165.x - 0.6f);
				fLocal_203 = (fLocal_203 - (0.07f * 3f));
			}
			else
			{
				vLocal_165.x = (vLocal_165.x - 0.2f);
				fLocal_203 = (fLocal_203 - 0.07f);
			}
		}
	}
	if (uParam0->f_76 < -16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_203 + 0.07f) < 10f)
		{
			if (uParam0->f_76 < -100)
			{
				vLocal_165.x = (vLocal_165.x + 0.6f);
				fLocal_203 = (fLocal_203 + (0.07f * 3f));
			}
			else
			{
				vLocal_165.x = (vLocal_165.x + 0.2f);
				fLocal_203 = (fLocal_203 + 0.07f);
			}
		}
	}
	if (bLocal_161)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_158, 3167))
		{
			bLocal_162 = false;
		}
		else
		{
			bLocal_162 = true;
		}
		bLocal_161 = false;
	}
	if ((aggregate.camera_item.func_31(&(uParam0->f_1[7]), 1) || aggregate.camera_item.func_34(Global_35, 0)) || bLocal_162)
	{
		if (aggregate.camera_item.func_34(Global_35, 0))
		{
			if (aggregate.barcustomer_interaction.func_46(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
		}
		else if (aggregate.camera_item.func_106(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_0x6FB1DA3CA9DA7D90("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		}
		iLocal_174 = 0;
		func_28(uParam0);
		aggregate.camera_item.func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", sLocal_17);
		if (!aggregate.barcustomer_interaction.func_42(&uLocal_170))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			aggregate.barcustomer_interaction.func_25(&uLocal_170, 1);
		}
	}
	if (aggregate.camera_item.func_107(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_190 == 0)
		{
			uParam0->f_69++;
			if (uParam0->f_69 == 8)
			{
				uParam0->f_69 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("Change_Expression", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_178[uParam0->f_69]), sLocal_17);
		}
	}
	if (aggregate.camera_item.func_107(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_190 == 0)
		{
			uParam0->f_69 = (uParam0->f_69 - 1);
			if (uParam0->f_69 < 0)
			{
				uParam0->f_69 = 7;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("Change_Expression", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_178[uParam0->f_69]), sLocal_17);
		}
	}
	uParam0->f_25 = { aggregate.camera_item.func_108(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_25));
	if (bLocal_201 == 0)
	{
		if (aggregate.camera_item.func_107(&(uParam0->f_1[8]), 1, 1))
		{
			bLocal_201 = true;
			uParam0->f_70++;
			if (uParam0->f_70 == 7)
			{
				uParam0->f_70 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("Change_Pose", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			func_109();
		}
	}
	if (bLocal_201 == 0)
	{
		if (aggregate.camera_item.func_107(&(uParam0->f_1[8]), 0, 1))
		{
			bLocal_201 = true;
			uParam0->f_70 = (uParam0->f_70 - 1);
			if (uParam0->f_70 < 0)
			{
				uParam0->f_70 = 6;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("Change_Pose", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			func_109();
		}
	}
	if (bLocal_201)
	{
		switch (iLocal_199)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 200)
				{
					iLocal_199 = 2;
				}
				break;
			case 2:
				func_110(uParam0);
				iLocal_199 = 3;
				iLocal_200 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 500)
				{
					iLocal_199 = 4;
					iLocal_200 = MISC::GET_GAME_TIMER();
					func_26();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 700)
				{
					iLocal_199 = 0;
					bLocal_201 = false;
				}
				break;
			default:
				break;
		}
	}
	func_96(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_59, vLocal_165, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_56()
{
	return iLocal_190;
}

void func_58()
{
	aggregate.barcustomer_interaction.func_50(&uLocal_187);
	iLocal_190 = 0;
}

void func_59()
{
	StringCopy(&cLocal_33, "", 32);
	MISC::_INT_TO_STRING(iLocal_24, "%i", &cLocal_33);
	StringConCat(&cLocal_33, " / ", 32);
	StringCopy(&cLocal_37, "", 32);
	MISC::_INT_TO_STRING(iLocal_25, "%i", &cLocal_37);
	StringConCat(&cLocal_33, &cLocal_37, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_32, &cLocal_33);
}

int func_67(int iParam0)
{
	if (aggregate.camera_item.func_66())
	{
		if (Global_1915170->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0)
{
	int iVar0;

	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_180(iParam0);
	if ((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0)
{
	*uParam0 = 1;
}

void func_79()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_42))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_42);
	}
}

char[] func_82(int iParam0)
{
	char[] cVar0[8];

	if (!aggregate.aberdeenpigfarm.func_58(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_23;
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return "WATER_AURORA_BASIN";
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return "WATER_BARROW_LAGOON";
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return "WATER_BAYOU_NWA";
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return "WATER_BEARTOOTH_BECK";
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007: /* GXTEntry: "Dakota River" */
			return "WATER_DAKOTA_RIVER";
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return "WATER_DEADBOOT_CREEK";
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return "WATER_DEWBERRY_CREEK";
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return "WATER_HOT_SPRINGS";
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return "WATER_KAMASSA_RIVER";
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return "WATER_LAKE_DON_JULIO";
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return "WATER_MATTLOCK_POND";
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193: /* GXTEntry: "Owanjila" */
			return "WATER_OWANJILA";
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return "WATER_RINGNECK_CREEK";
		case -1504425495: /* GXTEntry: "San Luis River" */
			return "WATER_SAN_LUIS_RIVER";
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return "WATER_SEA_OF_CORONADO";
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return "WATER_SPIDER_GORGE";
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return "WATER_STILLWATER_CREEK";
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_92(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!aggregate.annesburg.func_217(&(Local_53.f_1[iParam0])))
		{
			if (iParam0 == 9)
			{
				Local_53.f_1[iParam0] = aggregate.camera_item.func_126(func_125(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				Local_53.f_1[iParam0] = aggregate.camera_item.func_126(func_125(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_53.f_91 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_53.f_1[iParam0] = aggregate.binoculars.func_20(sVar0, func_127(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_53.f_1[iParam0] = aggregate.binoculars.func_20(func_125(iParam0), func_127(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				aggregate.binoculars.func_25(&(Local_53.f_1[iParam0]), 11, 1, 1);
			}
			aggregate.camera_item.func_130(&(Local_53.f_1[iParam0]), -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[&Local_53.f_1[iParam0] /*23*/])->f_3, true);
		}
	}
	else if (aggregate.annesburg.func_217(&(Local_53.f_1[iParam0])))
	{
		aggregate.annesburg.func_218(Local_53.f_1[iParam0], 1, 1);
	}
}

void func_95(var uParam0)
{
	fLocal_149 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_149 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 60f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
	if (fLocal_149 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 25f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_30)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_30 = true;
			}
		}
		else if (bLocal_30)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_30 = false;
		}
	}
	else if (bLocal_30)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_30 = false;
	}
}

void func_96(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_48 == 0)
	{
		if (func_41(&(uParam0->f_1[3])))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("DOF_Change", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			iLocal_49 = MISC::GET_GAME_TIMER();
			iLocal_48 = 1;
			iLocal_50 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_49) > 300 && iLocal_50 == 0)
	{
		if (uParam0->f_91 == 0)
		{
			uParam0->f_91 = 1;
			iVar0 = aggregate.annesburg.func_253(&(Local_53.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_91 = 0;
			iVar1 = aggregate.annesburg.func_253(&(Local_53.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar1 /*23*/])->f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_91);
		iLocal_50 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 850)
		{
			iLocal_48 = 0;
			iLocal_50 = 0;
		}
	}
}

void func_101(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_14, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	fLocal_202 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_50 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_53 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_65 = { uParam0->f_53, uParam0->f_53.f_1, (uParam0->f_53.f_2 - 180f) };
	uParam0->f_59 = { vLocal_158 };
	uParam0->f_91 = 0;
	fLocal_164 = 0f;
	fLocal_203 = 0.5f;
	vLocal_165 = { uParam0->f_65 };
	vLocal_165.x = (vLocal_165.x + 1f);
	uParam0->f_25.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_25.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		fVar0 = 50f;
		uParam0->f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_59, uParam0->f_65, fVar0, true, 2);
	}
	uParam0->f_15 = 25f;
	uParam0->f_15.f_1 = 2f;
	uParam0->f_15.f_2 = 128f;
	uParam0->f_15.f_3 = 30f;
	uParam0->f_15.f_4 = 30f;
	uParam0->f_15.f_5 = 90f;
	uParam0->f_15.f_6 = 1;
	uParam0->f_15.f_7 = 0;
	uParam0->f_15.f_8 = 1;
	uParam0->f_15.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
	CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_91);
	CAM::_0x42ED56B02E05D109(uParam0->f_14, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_102()
{
	sLocal_178[0] = "portrait_normal";
	sLocal_178[1] = "portrait_happy";
	sLocal_178[2] = "portrait_pensive";
	sLocal_178[3] = "portrait_pensive_2";
	sLocal_178[4] = "portrait_relaxed";
	sLocal_178[5] = "portrait_angry";
	sLocal_178[6] = "portrait_angry_2";
	sLocal_178[7] = "portrait_annoyed";
}

void func_103()
{
	iLocal_191[0] = 0;
	iLocal_191[1] = 1;
	iLocal_191[2] = 2;
	iLocal_191[3] = 3;
	iLocal_191[4] = 4;
	iLocal_191[5] = 5;
	iLocal_191[6] = 6;
}

void func_104(var uParam0)
{
	fLocal_149 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_149 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 90f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
	if (fLocal_149 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 30f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_30)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_30 = true;
			}
		}
		else if (bLocal_30)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_30 = false;
		}
	}
	else if (bLocal_30)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_30 = false;
	}
}

void func_109()
{
	bLocal_201 = true;
	iLocal_200 = MISC::GET_GAME_TIMER();
	iLocal_199 = 1;
	func_15();
}

void func_110(var uParam0)
{
	func_133(uParam0);
	switch (&iLocal_191[uParam0->f_70])
	{
		case 0:
			break;
		case 1:
			func_134(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A", 333292554);
			break;
		case 2:
			func_134(1904532698, "WORLD_HUMAN_STERNGUY", -730803145);
			break;
		case 3:
			break;
		case 4:
			func_134(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", -571916863);
			break;
		case 5:
			break;
		case 6:
			func_134(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", 710326353);
			break;
	}
}

char* func_125(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 6:
			return "CAM_TAKE_PHOTO";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	return "INVALID_USE_CONTEXT";
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_CAMERA_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		default:
			break;
	}
	return 0;
}

void func_133(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
	if (func_52())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_202);
}

void func_134(int iParam0, char* sParam1, int iParam2)
{
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		if (iParam0 == 0)
		{
			return;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return;
		}
		if (iParam2 == 0)
		{
			return;
		}
		if (!aggregate.barcustomer_interaction.func_46(Global_35, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_20);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, iParam0, 0, 1, 0, -1082130432 /* Float: -1f */, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_20);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_20);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_20);
		}
	}
	else
	{
		uLocal_204 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_152, fLocal_202, 0, 0, 1);
		TASK::_0x5AF19B6CC2115D34(uLocal_204, 25, 1);
		TASK::_0x5AF19B6CC2115D34(uLocal_204, 23, 1);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_20);
		TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_204, sParam1, -1, false, true, 0, false, 0f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_20);
	}
}

