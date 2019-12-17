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
	struct<10> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == net_arrowheads.__EntryFunction__

void func_1(var uParam0, vector3 vParam1)
{
	if (vParam1.z == 1260056893)
	{
		if (!aggregate.fishing_core.func_34(uParam0, 32))
		{
			uParam0->f_16 = vParam1.x;
			vParam1.x = 0;
			aggregate.net_arrowheads.func_10(uParam0, 32);
			if (MISC::ABSI(uParam0->f_16) <= 50)
			{
				uParam0->f_26 = aggregate.net_arrowheads.func_11(MISC::ABSI(uParam0->f_16));
				aggregate.net_arrowheads.func_10(uParam0, 1);
			}
			else
			{
				aggregate.net_arrowheads.func_10(uParam0, 2);
			}
		}
	}
	NETWORK::_0xE7DDA8BD3BCF751C(3);
	*uParam0 = 2;
	uParam0->f_1 = func_12(vParam1, uParam0);
	if (!aggregate.fishing_core.func_34(uParam0, 32))
	{
		uParam0->f_26 = func_13(uParam0);
		func_14(uParam0);
	}
	uParam0->f_27 = func_15();
	if (uParam0->f_1 == 211)
	{
		uParam0->f_12 = "script@mech@treasure_hunting@nothing";
		uParam0->f_13 = "PBL_NOTHING_01";
	}
	else
	{
		uParam0->f_12 = "script@mech@treasure_hunting@chest";
		uParam0->f_13 = "PBL_CHEST_01";
		if (!aggregate.fishing_core.func_34(uParam0, 4))
		{
			aggregate.net_arrowheads.func_10(uParam0, 4);
		}
	}
	uParam0->f_2 = 0;
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_0xA8452DD321607029(uParam0->f_9, 1) };
	aggregate.net_arrowheads.func_17(&(uParam0->f_30), uParam0->f_6);
	aggregate.net_arrowheads.func_18(*uParam0, uParam0->f_1);
	uParam0->f_28 = func_18(uParam0);
	uParam0->f_5 = aggregate.net_arrowheads.func_16(uParam0->f_28);
	uParam0->f_23 = func_20(0);
	uParam0->f_24 = func_21();
	if (aggregate.net_arrowheads.func_42(uParam0->f_6))
	{
		if (aggregate.fishing_core.func_34(uParam0, 4))
		{
			if (aggregate.net_arrowheads.func_62())
			{
				if (!aggregate.fishing_core.func_34(uParam0, 64))
				{
					aggregate.net_arrowheads.func_10(uParam0, 64);
				}
			}
		}
	}
}

void func_5(var uParam0)
{
	aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
	aggregate.net_arrowheads.func_20(uParam0);
	if (aggregate.fishing_core.func_34(uParam0, 2))
	{
		aggregate.net_arrowheads.func_21(uParam0->f_6);
	}
	aggregate.net_arrowheads.func_22(*uParam0, uParam0->f_1, 1);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
	aggregate.net_arrowheads.func_24();
	aggregate.net_arrowheads.func_25();
	aggregate.fme_wreckage.func_632(&(uParam0->f_30));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_39))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_39, false);
	}
	aggregate.net_arrowheads.func_27(0);
	aggregate.net_arrowheads.func_28(&(uParam0->f_30));
	if (!aggregate.fishing_core.func_34(uParam0, 32))
	{
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (aggregate.fishing_core.func_34(uParam0, 16) && aggregate.fishing_core.func_34(uParam0, 8))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && aggregate.fme_condor_egg.func_1287(Global_35, uParam0->f_6, 3f, 1, 1))
		{
			if (!func_35(uParam0))
			{
				aggregate.net_arrowheads.func_18(*uParam0, uParam0->f_1);
				((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = uParam0->f_1;
			}
		}
	}
	if (aggregate.camera_item.func_12(uParam0) < 10)
	{
		if (aggregate.fishing_core.func_34(uParam0, 4))
		{
			if (!aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 16))
			{
				if (func_38(uParam0->f_6, &(uParam0->f_20), &(uParam0->f_18), &(uParam0->f_19), aggregate.fishing_core.func_34(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (aggregate.net_arrowheads.func_32(*uParam0) && func_35(uParam0))
		{
			aggregate.camera_item.func_77(uParam0, 11);
			if (aggregate.annesburg.func_217(uParam0->f_14))
			{
				aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
			}
			aggregate.net_arrowheads.func_25();
		}
		else if (aggregate.camera_item.func_12(uParam0) <= 6 && aggregate.camera_item.func_12(uParam0) > 1)
		{
			if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 16))
			{
				aggregate.camera_item.func_77(uParam0, 12);
			}
		}
	}
	bVar1 = (aggregate.camera_item.func_12(uParam0) <= 6 && !aggregate.camera_item.func_4(uParam0->f_14, 1));
	bVar2 = !aggregate.fishing_core.func_34(uParam0, 16);
	if (aggregate.net_arrowheads.func_36(aggregate.fishing_core.func_34(uParam0, 2)))
	{
		if (aggregate.fishing_core.func_34(uParam0, 2))
		{
			aggregate.net_arrowheads.func_37(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			aggregate.fme_condor_egg.func_830(&(uParam0->f_30), uParam0->f_6, bVar1, bVar2, 1);
		}
	}
	aggregate.net_arrowheads.func_39(uParam0->f_14);
	aggregate.net_arrowheads.func_40(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_23, false);
			STREAMING::REQUEST_MODEL(uParam0->f_27, false);
			STREAMING::REQUEST_MODEL(uParam0->f_24, false);
			if (aggregate.fishing_core.func_34(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_26, false);
			}
			STREAMING::REQUEST_MODEL(-1456904552, false);
			aggregate.fme_king_of_the_castle.func_989(&(uParam0->f_30.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (aggregate.fishing_core.func_34(uParam0, 16))
			{
				if (!aggregate.aberdeenpigfarm.func_175((*Global_1199513)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
				{
					aggregate.camera_item.func_77(uParam0, 1);
				}
				else if (func_51(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_20, uParam0->f_26, uParam0->f_18, uParam0->f_23, uParam0->f_19, uParam0->f_27, aggregate.fishing_core.func_34(uParam0, 1)))
				{
					aggregate.camera_item.func_77(uParam0, 12);
				}
			}
			else if (aggregate.aberdeenpigfarm.func_175((*Global_1199513)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
			{
				if (func_51(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_20, uParam0->f_26, uParam0->f_18, uParam0->f_23, uParam0->f_19, uParam0->f_27, aggregate.fishing_core.func_34(uParam0, 1)))
				{
					if (Global_1199513->f_13364 != uParam0->f_1)
					{
						aggregate.camera_item.func_77(uParam0, 12);
					}
					else
					{
						aggregate.camera_item.func_77(uParam0, 15);
					}
				}
			}
			else if (!aggregate.net_arrowheads.func_42(uParam0->f_6))
			{
				aggregate.camera_item.func_77(uParam0, 15);
			}
			else if (!aggregate.fishing_core.func_34(uParam0, 64))
			{
				aggregate.camera_item.func_77(uParam0, 1);
			}
			break;
		case 1:
			if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_23) && STREAMING::HAS_MODEL_LOADED(uParam0->f_27)) && STREAMING::HAS_MODEL_LOADED(-1456904552)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_24))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
				{
					uParam0->f_18 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_23, uParam0->f_6 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_26))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_26, uParam0->f_6, true, true, false, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
				{
					uParam0->f_19 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_27, uParam0->f_6 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_24, uParam0->f_6 + Vector(-15f, 0f, 0f), false, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
				{
					return false;
				}
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_43), &(uParam0->f_40)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, aggregate.net_arrowheads.func_43(uParam0->f_40, 0), 2, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					return false;
				}
				aggregate.camera_item.func_77(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_12, 64, uParam0->f_13, true, true);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			aggregate.camera_item.func_77(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "CHEST", uParam0->f_18, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_21, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "DRESSING", uParam0->f_19, 0);
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_20, 0);
					}
				}
				aggregate.camera_item.func_77(uParam0, 4);
			}
			break;
		case 4:
			if (aggregate.net_arrowheads.func_36(aggregate.fishing_core.func_34(uParam0, 2)))
			{
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					aggregate.net_arrowheads.func_44(uParam0->f_20, uParam0->f_20, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_20, 187984275);
					aggregate.camera_item.func_77(uParam0, 5);
				}
				else
				{
					aggregate.camera_item.func_77(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_54(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!aggregate.annesburg.func_217(uParam0->f_14))
				{
					uParam0->f_14 = aggregate.fm_deathmatch_controller.func_2631("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				aggregate.camera_item.func_77(uParam0, 6);
			}
			break;
		case 6:
			if (aggregate.annesburg.func_217(uParam0->f_14))
			{
				if (Global_1099293->f_331)
				{
					if (aggregate.doc_book.func_70(uParam0->f_14, 0))
					{
						aggregate.binoculars.func_37(uParam0->f_14, 0, 1, 1);
					}
				}
				else if (!aggregate.doc_book.func_70(uParam0->f_14, 0))
				{
					aggregate.binoculars.func_37(uParam0->f_14, 1, 1, 1);
				}
				if (!aggregate.fishing_core.func_34(uParam0, 16))
				{
					aggregate.net_arrowheads.func_49(uParam0->f_14, &(uParam0->f_30.f_6));
				}
				if (aggregate.doc_book.func_50(uParam0->f_14, 1))
				{
					if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 32))
					{
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
						aggregate.fme_escaped_convicts.func_351(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						aggregate.net_arrowheads.func_27(1);
						aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
						aggregate.camera_item.func_77(uParam0, 7);
					}
				}
				else if (func_35(uParam0))
				{
					if (aggregate.fm_mission_controller.func_5040(uParam0->f_14, 1) > 0f)
					{
						aggregate.net_arrowheads.func_55(aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (aggregate.fm_mission_controller.func_5040(uParam0->f_14, 1) == 0f)
					{
						aggregate.net_arrowheads.func_25();
					}
				}
			}
			break;
		case 7:
			if (((aggregate.doc_book.func_185(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("weapon_unarmed") && aggregate.doc_book.func_185(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("weapon_unarmed")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_0xA911EE21EDF69DAF(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				aggregate.net_arrowheads.func_20(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, aggregate.fishing_core.func_492(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				aggregate.camera_item.func_77(uParam0, 8);
			}
			break;
		case 8:
			aggregate.net_arrowheads.func_58();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1069379748 /* Float: 1.48f */, true, 128, 20000, -1082130432 /* Float: -1f */);
			uParam0->f_39 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_6, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			aggregate.camera_item.func_77(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				aggregate.camera_item.func_77(uParam0, 10);
			}
			break;
		case 10:
			if ((ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_11, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@chest_01", "exit", 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_21, false);
				}
				if (!func_67(uParam0))
				{
					return false;
				}
				aggregate.net_arrowheads.func_60(uParam0->f_9);
				aggregate.net_arrowheads.func_61(aggregate.fishing_core.func_34(uParam0, 1), aggregate.fishing_core.func_34(uParam0, 2));
				aggregate.net_arrowheads.func_27(0);
				aggregate.net_arrowheads.func_28(&(uParam0->f_30));
				if (aggregate.fishing_core.func_34(uParam0, 2))
				{
					aggregate.net_arrowheads.func_21(uParam0->f_6);
				}
				if (aggregate.fishing_core.func_34(uParam0, 4))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_18, "ChestDugUp", true);
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
				}
				aggregate.net_arrowheads.func_60(uParam0->f_9);
				aggregate.net_arrowheads.func_25();
				if (aggregate.fishing_core.func_34(uParam0, 2) && aggregate.fishing_core.func_34(uParam0, 16))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856 /* GXTEntry: "Metal Detector" */, false, 0, false, false);
				}
				TASK::_0x188F8071F244B9B8(uParam0->f_18, 1);
				aggregate.camera_item.func_77(uParam0, 15);
			}
			break;
		case 11:
			if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 1))
			{
				if (aggregate.net_arrowheads.func_62())
				{
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
					aggregate.camera_item.func_77(uParam0, 12);
				}
				else if (!aggregate.net_arrowheads.func_32(*uParam0))
				{
					aggregate.camera_item.func_77(uParam0, 4);
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (aggregate.annesburg.func_217(uParam0->f_14))
			{
				aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_21);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_21));
			}
			if (aggregate.fishing_core.func_34(uParam0, 4))
			{
				if (aggregate.fishing_core.func_34(uParam0, 32))
				{
					bVar0 = aggregate.net_arrowheads.func_63();
					if (!aggregate.bandana.func_30(bVar0, 0))
					{
						return false;
					}
					uParam0->f_5 = bVar0;
				}
				uParam0->f_25 = aggregate.interactive_campfire.func_586(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_25, false);
			}
			aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
			aggregate.camera_item.func_77(uParam0, 13);
			break;
		case 13:
			if (!aggregate.net_arrowheads.func_32(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_25))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_25, uParam0->f_6 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						return false;
					}
					MAP::_0x1726963E6049DB53(uParam0->f_22);
					aggregate.camera_item.func_77(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_22) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_22))
			{
				uParam0->f_22 = 0;
				aggregate.camera_item.func_77(uParam0, 13);
				return false;
			}
			if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_6, true) < 1.5f)
				{
					aggregate.net_arrowheads.func_60(uParam0->f_9);
					Global_1199513->f_13364 = uParam0->f_1;
					aggregate.camera_item.func_77(uParam0, 15);
				}
			}
			break;
	}
	return false;
}

int func_12(struct<2> Param0, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(iVar2))
	{
		iVar1 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar2));
		iVar0 = BUILTIN::ROUND(TASK::_0xB93EA7184BAA85C3(iVar2, 1));
		bVar3 = iVar0 == 99;
		if (aggregate.fishing_core.func_34(uParam3, 32))
		{
			iVar1 = ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2;
		}
		else if ((iVar1 >= 200 || iVar1 == 0) || bVar3)
		{
			aggregate.net_arrowheads.func_10(uParam3, 16);
			if (bVar3)
			{
				aggregate.net_arrowheads.func_10(uParam3, 8);
			}
		}
		((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 0:
			return 211;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		case 17:
			return 16;
		case 18:
			return 17;
		case 19:
			return 18;
		case 20:
			return 19;
		case 21:
			return 20;
		case 22:
			return 21;
		case 23:
			return 22;
		case 24:
			return 23;
		case 25:
			return 24;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 27;
		case 29:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 33:
			return 32;
		case 34:
			return 33;
		case 35:
			return 34;
		case 36:
			return 35;
		case 37:
			return 36;
		case 38:
			return 37;
		case 39:
			return 38;
		case 40:
			return 39;
		case 41:
			return 40;
		case 42:
			return 41;
		case 43:
			return 42;
		case 44:
			return 43;
		case 45:
			return 44;
		case 46:
			return 45;
		case 47:
			return 46;
		case 48:
			return 47;
		case 49:
			return 48;
		case 50:
			return 49;
		case 51:
			return 50;
		case 52:
			return 51;
		case 53:
			return 52;
		case 54:
			return 53;
		case 55:
			return 54;
		case 56:
			return 55;
		case 57:
			return 56;
		case 58:
			return 57;
		case 59:
			return 58;
		case 60:
			return 59;
		case 61:
			return 60;
		case 62:
			return 61;
		case 63:
			return 62;
		case 64:
			return 63;
		case 65:
			return 64;
		case 66:
			return 65;
		case 67:
			return 66;
		case 68:
			return 67;
		case 69:
			return 68;
		case 70:
			return 69;
		case 71:
			return 70;
		case 72:
			return 71;
		case 73:
			return 72;
		case 74:
			return 73;
		case 75:
			return 74;
		case 76:
			return 75;
		case 77:
			return 76;
		case 78:
			return 77;
		case 79:
			return 78;
		case 80:
			return 79;
		case 81:
			return 80;
		case 82:
			return 81;
		case 83:
			return 82;
		case 84:
			return 83;
		case 85:
			return 84;
		case 86:
			return 85;
		case 87:
			return 86;
		case 88:
			return 87;
		case 89:
			return 88;
		case 90:
			return 89;
		case 91:
			return 90;
		case 92:
			return 91;
		case 93:
			return 92;
		case 94:
			return 93;
		case 95:
			return 94;
		case 96:
			return 95;
		case 97:
			return 96;
		case 98:
			return 97;
		case 99:
			return 98;
		case 100:
			return 99;
		case 101:
			return 100;
		case 102:
			return 101;
		case 103:
			return 102;
		case 104:
			return 103;
		case 105:
			return 104;
		case 106:
			return 105;
		case 107:
			return 106;
		case 108:
			return 107;
		case 109:
			return 108;
		case 110:
			return 109;
		case 111:
			return 110;
		case 112:
			return 111;
		case 113:
			return 112;
		case 114:
			return 113;
		case 115:
			return 114;
		case 116:
			return 115;
		case 117:
			return 116;
		case 118:
			return 117;
		case 119:
			return 118;
		case 120:
			return 119;
		case 121:
			return 120;
		case 122:
			return 121;
		case 123:
			return 122;
		case 124:
			return 123;
		case 125:
			return 124;
		case 126:
			return 125;
		case 127:
			return 126;
		case 128:
			return 127;
		case 129:
			return 128;
		case 130:
			return 129;
		case 131:
			return 130;
		case 132:
			return 131;
		case 133:
			return 132;
		case 134:
			return 133;
		case 135:
			return 134;
		case 136:
			return 135;
		case 137:
			return 136;
		case 138:
			return 137;
		case 139:
			return 138;
		case 140:
			return 139;
		case 141:
			return 140;
		case 142:
			return 141;
		case 143:
			return 142;
		case 144:
			return 143;
		case 145:
			return 144;
		case 146:
			return 145;
		case 147:
			return 146;
		case 148:
			return 147;
		case 149:
			return 148;
		case 150:
			return 149;
		case 151:
			return 150;
		case 152:
			return 151;
		case 153:
			return 152;
		case 154:
			return 153;
		case 155:
			return 154;
		case 156:
			return 155;
		case 157:
			return 156;
		case 158:
			return 157;
		case 159:
			return 158;
		case 160:
			return 159;
		case 161:
			return 160;
		case 162:
			return 161;
		case 200:
			return 162;
		case 201:
			return 163;
		case 202:
			return 164;
		case 203:
			return 165;
		case 204:
			return 166;
		case 205:
			return 167;
		case 206:
			return 168;
		case 207:
			return 169;
		case 208:
			return 170;
		case 209:
			return 171;
		case 210:
			return 172;
		case 211:
			return 173;
		case 212:
			return 174;
		case 213:
			return 175;
		case 214:
			return 176;
		case 215:
			return 177;
		case 216:
			return 178;
		case 217:
			return 179;
		case 218:
			return 180;
		case 219:
			return 181;
		case 220:
			return 182;
		case 221:
			return 183;
		case 222:
			return 184;
		case 223:
			return 185;
		case 224:
			return 186;
		case 225:
			return 187;
		case 226:
			return 188;
		case 227:
			return 189;
		case 228:
			return 190;
		case 229:
			return 191;
		case 230:
			return 192;
		case 231:
			return 193;
		case 232:
			return 194;
		case 233:
			return 195;
		case 234:
			return 196;
		case 235:
			return 197;
		case 236:
			return 198;
		case 237:
			return 199;
		case 238:
			return 200;
		case 239:
			return 201;
		case 240:
			return 202;
		case 241:
			return 203;
		case 242:
			return 204;
		case 243:
			return 205;
		case 244:
			return 206;
		case 245:
			return 207;
		case 246:
			return 208;
		case 247:
			return 209;
		case 248:
			return 210;
		default:
			break;
	}
	return 67;
}

int func_13(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 1:
			iVar0 = -1937147713;
			break;
		case 3:
			iVar0 = 1627076851;
			break;
		case 6:
			iVar0 = -1160940577;
			break;
		case 8:
			iVar0 = 1627076851;
			break;
		case 15:
			iVar0 = -599228492;
			break;
		case 16:
			iVar0 = -672936509;
			break;
		case 18:
			iVar0 = -1160940577;
			break;
		case 20:
			iVar0 = -1010154358;
			break;
		case 31:
			iVar0 = 1627076851;
			break;
		case 33:
			iVar0 = -1160940577;
			break;
		case 39:
			iVar0 = 1131991595;
			break;
		case 45:
			iVar0 = 2129417429;
			break;
		case 211:
			iVar0 = -1010154358;
			break;
	}
	return iVar0;
}

void func_14(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
		case 3:
		case 6:
		case 8:
		case 15:
		case 16:
		case 18:
		case 20:
		case 31:
		case 33:
		case 39:
		case 45:
			aggregate.net_arrowheads.func_10(uParam0, 1);
			break;
		case 211:
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				aggregate.net_arrowheads.func_10(uParam0, 1);
			}
			break;
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			break;
		default:
			aggregate.net_arrowheads.func_10(uParam0, 2);
			break;
	}
}

int func_15()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);
	if (iVar0 > 30000)
	{
		return 1998828269;
	}
	else if (iVar0 > 20000)
	{
		return -627187884;
	}
	else if (iVar0 > 10000)
	{
		return -114288404;
	}
	return -1420165463;
}

int func_18(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 0:
			iVar0 = -1914990977;
			break;
		case 1:
			iVar0 = -1914990977;
			break;
		case 2:
			iVar0 = -1647261494;
			break;
		case 3:
			iVar0 = 746055788;
			break;
		case 4:
			iVar0 = 746055788;
			break;
		case 5:
			iVar0 = -256638116;
			break;
		case 6:
			iVar0 = -37487183;
			break;
		case 7:
			iVar0 = -37487183;
			break;
		case 8:
			iVar0 = 1904567340;
			break;
		case 9:
			iVar0 = 371926572;
			break;
		case 10:
			iVar0 = 700547967;
			break;
		case 11:
			iVar0 = 700547967;
			break;
		case 12:
			iVar0 = -1479457955;
			break;
		case 13:
			iVar0 = -1479457955;
			break;
		case 14:
			iVar0 = -1479457955;
			break;
		case 15:
			iVar0 = -253293041;
			break;
		case 16:
			iVar0 = -373311654;
			break;
		case 17:
			iVar0 = -373311654;
			break;
		case 18:
			iVar0 = -901049146;
			break;
		case 19:
			iVar0 = -901049146;
			break;
		case 20:
			iVar0 = -1538719578;
			break;
		case 21:
			iVar0 = -1538719578;
			break;
		case 22:
			iVar0 = -1538719578;
			break;
		case 23:
			iVar0 = 2079959006;
			break;
		case 24:
			iVar0 = 2079959006;
			break;
		case 25:
			iVar0 = 2079959006;
			break;
		case 26:
			iVar0 = -1949131163;
			break;
		case 27:
			iVar0 = -1949131163;
			break;
		case 28:
			iVar0 = -1949131163;
			break;
		case 29:
			iVar0 = -1845614766;
			break;
		case 30:
			iVar0 = -1845614766;
			break;
		case 31:
			iVar0 = -1845614766;
			break;
		case 32:
			iVar0 = -1750110910;
			break;
		case 33:
			iVar0 = -1750110910;
			break;
		case 34:
			iVar0 = -1750110910;
			break;
		case 35:
			iVar0 = -834041111;
			break;
		case 36:
			iVar0 = -834041111;
			break;
		case 37:
			iVar0 = 1216475110;
			break;
		case 38:
			iVar0 = 1216475110;
			break;
		case 39:
			iVar0 = 1216475110;
			break;
		case 40:
			iVar0 = 1465764690;
			break;
		case 41:
			iVar0 = 1465764690;
			break;
		case 42:
			iVar0 = -115477556;
			break;
		case 43:
			iVar0 = -115477556;
			break;
		case 44:
			iVar0 = -115477556;
			break;
		case 45:
			iVar0 = 604651083;
			break;
		case 46:
			iVar0 = 604651083;
			break;
		case 47:
			iVar0 = 544784227;
			break;
		case 48:
			iVar0 = 544784227;
			break;
		case 49:
			iVar0 = 544784227;
			break;
		case 50:
			iVar0 = -1298419407;
			break;
		case 51:
			iVar0 = -599044012;
			break;
		case 52:
			iVar0 = 726047816;
			break;
		case 53:
			iVar0 = 726047816;
			break;
		case 54:
			iVar0 = -605903845;
			break;
		case 55:
			iVar0 = -605903845;
			break;
		case 56:
			iVar0 = 309566985;
			break;
		case 57:
			iVar0 = -2098248158;
			break;
		case 58:
			iVar0 = -2098248158;
			break;
		case 59:
			iVar0 = -32321552;
			break;
		case 60:
			iVar0 = -32321552;
			break;
		case 61:
			iVar0 = 527426268;
			break;
		case 62:
			iVar0 = 527426268;
			break;
		case 63:
			iVar0 = -330620837;
			break;
		case 64:
			iVar0 = 536987249;
			break;
		case 65:
			iVar0 = -883489996;
			break;
		case 66:
			iVar0 = 1357570735;
			break;
		case 67:
			iVar0 = 1357570735;
			break;
		case 68:
			iVar0 = -1914990977;
			break;
		case 69:
			iVar0 = -1914990977;
			break;
		case 70:
			iVar0 = -1647261494;
			break;
		case 71:
			iVar0 = -1647261494;
			break;
		case 72:
			iVar0 = 746055788;
			break;
		case 73:
			iVar0 = 746055788;
			break;
		case 74:
			iVar0 = -256638116;
			break;
		case 75:
			iVar0 = -256638116;
			break;
		case 76:
			iVar0 = -37487183;
			break;
		case 77:
			iVar0 = -37487183;
			break;
		case 78:
			iVar0 = 1904567340;
			break;
		case 79:
			iVar0 = 371926572;
			break;
		case 80:
			iVar0 = 371926572;
			break;
		case 81:
			iVar0 = 700547967;
			break;
		case 82:
			iVar0 = 700547967;
			break;
		case 83:
			iVar0 = -1479457955;
			break;
		case 84:
			iVar0 = -1479457955;
			break;
		case 85:
			iVar0 = -1479457955;
			break;
		case 86:
			iVar0 = -253293041;
			break;
		case 87:
			iVar0 = -253293041;
			break;
		case 88:
			iVar0 = -373311654;
			break;
		case 89:
			iVar0 = -373311654;
			break;
		case 90:
			iVar0 = -373311654;
			break;
		case 91:
			iVar0 = -901049146;
			break;
		case 92:
			iVar0 = -901049146;
			break;
		case 93:
			iVar0 = -901049146;
			break;
		case 94:
			iVar0 = -1538719578;
			break;
		case 95:
			iVar0 = -1538719578;
			break;
		case 96:
			iVar0 = -1538719578;
			break;
		case 97:
			iVar0 = 2079959006;
			break;
		case 98:
			iVar0 = 2079959006;
			break;
		case 99:
			iVar0 = 2079959006;
			break;
		case 100:
			iVar0 = -1949131163;
			break;
		case 101:
			iVar0 = -1949131163;
			break;
		case 102:
			iVar0 = -1949131163;
			break;
		case 103:
			iVar0 = -1845614766;
			break;
		case 104:
			iVar0 = -1845614766;
			break;
		case 105:
			iVar0 = -1845614766;
			break;
		case 106:
			iVar0 = -1750110910;
			break;
		case 107:
			iVar0 = -1750110910;
			break;
		case 108:
			iVar0 = -1750110910;
			break;
		case 109:
			iVar0 = -834041111;
			break;
		case 110:
			iVar0 = -834041111;
			break;
		case 111:
			iVar0 = 1216475110;
			break;
		case 112:
			iVar0 = 1216475110;
			break;
		case 113:
			iVar0 = 1216475110;
			break;
		case 114:
			iVar0 = 1465764690;
			break;
		case 115:
			iVar0 = 1465764690;
			break;
		case 116:
			iVar0 = 1465764690;
			break;
		case 117:
			iVar0 = -115477556;
			break;
		case 118:
			iVar0 = -115477556;
			break;
		case 119:
			iVar0 = -115477556;
			break;
		case 120:
			iVar0 = 604651083;
			break;
		case 121:
			iVar0 = 604651083;
			break;
		case 122:
			iVar0 = 544784227;
			break;
		case 123:
			iVar0 = 544784227;
			break;
		case 124:
			iVar0 = 544784227;
			break;
		case 125:
			iVar0 = -1298419407;
			break;
		case 126:
			iVar0 = -1298419407;
			break;
		case 127:
			iVar0 = -1434735180;
			break;
		case 128:
			iVar0 = -1434735180;
			break;
		case 129:
			iVar0 = -599044012;
			break;
		case 130:
			iVar0 = -599044012;
			break;
		case 131:
			iVar0 = -599044012;
			break;
		case 132:
			iVar0 = 726047816;
			break;
		case 133:
			iVar0 = 726047816;
			break;
		case 134:
			iVar0 = 726047816;
			break;
		case 135:
			iVar0 = 574670748;
			break;
		case 136:
			iVar0 = 574670748;
			break;
		case 137:
			iVar0 = 574670748;
			break;
		case 138:
			iVar0 = -605903845;
			break;
		case 139:
			iVar0 = -605903845;
			break;
		case 140:
			iVar0 = 309566985;
			break;
		case 141:
			iVar0 = 309566985;
			break;
		case 142:
			iVar0 = -2098248158;
			break;
		case 143:
			iVar0 = -2098248158;
			break;
		case 144:
			iVar0 = -2098248158;
			break;
		case 145:
			iVar0 = -32321552;
			break;
		case 146:
			iVar0 = -32321552;
			break;
		case 147:
			iVar0 = 527426268;
			break;
		case 148:
			iVar0 = 527426268;
			break;
		case 149:
			iVar0 = -330620837;
			break;
		case 150:
			iVar0 = -330620837;
			break;
		case 151:
			iVar0 = -77692146;
			break;
		case 152:
			iVar0 = -77692146;
			break;
		case 153:
			iVar0 = -77692146;
			break;
		case 154:
			iVar0 = 536987249;
			break;
		case 155:
			iVar0 = 536987249;
			break;
		case 156:
			iVar0 = 967176349;
			break;
		case 157:
			iVar0 = 967176349;
			break;
		case 158:
			iVar0 = -883489996;
			break;
		case 159:
			iVar0 = -883489996;
			break;
		case 160:
			iVar0 = 1357570735;
			break;
		case 161:
			iVar0 = 1357570735;
			break;
		case 162:
			iVar0 = -1914990977;
			break;
		case 163:
			iVar0 = -1647261494;
			break;
		case 164:
			iVar0 = 746055788;
			break;
		case 165:
			iVar0 = -256638116;
			break;
		case 166:
			iVar0 = -37487183;
			break;
		case 167:
			iVar0 = 1904567340;
			break;
		case 168:
			iVar0 = 371926572;
			break;
		case 169:
			iVar0 = 700547967;
			break;
		case 170:
			iVar0 = -1479457955;
			break;
		case 171:
			iVar0 = -253293041;
			break;
		case 172:
			iVar0 = -373311654;
			break;
		case 173:
			iVar0 = -901049146;
			break;
		case 174:
			iVar0 = -1538719578;
			break;
		case 175:
			iVar0 = 2079959006;
			break;
		case 176:
			iVar0 = -1949131163;
			break;
		case 177:
			iVar0 = -1845614766;
			break;
		case 178:
			iVar0 = -1750110910;
			break;
		case 179:
			iVar0 = -834041111;
			break;
		case 180:
			iVar0 = 1216475110;
			break;
		case 181:
			iVar0 = 1465764690;
			break;
		case 182:
			iVar0 = -115477556;
			break;
		case 183:
			iVar0 = 604651083;
			break;
		case 184:
			iVar0 = 544784227;
			break;
		case 185:
			iVar0 = -1298419407;
			break;
		case 186:
			iVar0 = -1434735180;
			break;
		case 187:
			iVar0 = -599044012;
			break;
		case 188:
			iVar0 = 726047816;
			break;
		case 189:
			iVar0 = 574670748;
			break;
		case 190:
			iVar0 = -605903845;
			break;
		case 191:
			iVar0 = 309566985;
			break;
		case 192:
			iVar0 = -2098248158;
			break;
		case 193:
			iVar0 = -32321552;
			break;
		case 194:
			iVar0 = 527426268;
			break;
		case 195:
			iVar0 = -330620837;
			break;
		case 196:
			iVar0 = -77692146;
			break;
		case 197:
			iVar0 = 536987249;
			break;
		case 198:
			iVar0 = 967176349;
			break;
		case 199:
			iVar0 = -883489996;
			break;
		case 200:
			iVar0 = 1357570735;
			break;
		case 201:
			iVar0 = 1531432272;
			break;
		case 202:
			iVar0 = -2063569423;
			break;
		case 203:
			iVar0 = 1659722492;
			break;
		case 204:
			iVar0 = -1914323519;
			break;
		case 205:
			iVar0 = -1787268311;
			break;
		case 206:
			iVar0 = -2132348472;
			break;
		case 207:
			iVar0 = -1400928817;
			break;
		case 208:
			iVar0 = 1524848772;
			break;
		case 209:
			iVar0 = -1843094784;
			break;
		case 210:
			iVar0 = -71915978;
			break;
	}
	return iVar0;
}

int func_20(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (bParam0)
	{
		return joaat("p_strongbox_snow_01x");
	}
	switch (iVar1)
	{
		case 0:
			return joaat("p_strongbox_muddy_01x");
		case 1:
			return joaat("p_strongbox_snow_01x");
		case 2:
			return joaat("p_strongbox_waterlogged_01x");
		case 3:
			return joaat("p_strongbox_rusted_01x");
		default:
			break;
	}
	return joaat("p_strongbox_muddy_01x");
}

int func_21()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iVar1)
	{
		case 0:
			return -1271488117;
		case 1:
			return -908375120;
		case 2:
			return 1594937960;
		case 3:
			return 1785268684;
		case 4:
			return 1606857604;
		case 5:
			return -2135373529;
		default:
			break;
	}
	return 1606857604;
}

bool func_35(var uParam0)
{
	if (!aggregate.fishing_core.func_34(uParam0, 16))
	{
		return ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
	}
	return (((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0 && ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 == uParam0->f_1);
}

bool func_38(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0[1];
	var uVar2[1];
	var uVar4[1];
	int iVar6[4];
	int iVar11[4];
	int iVar16[30];

	iVar6[0] = joaat("p_strongbox_muddy_01x");
	iVar6[1] = joaat("p_strongbox_snow_01x");
	iVar6[2] = joaat("p_strongbox_waterlogged_01x");
	iVar6[3] = joaat("p_strongbox_rusted_01x");
	iVar11[0] = 1998828269;
	iVar11[1] = -627187884;
	iVar11[2] = -114288404;
	iVar11[3] = -1420165463;
	if (bParam6)
	{
		iVar16[0] = -1160940577;
		iVar16[1] = 1627076851;
		iVar16[2] = 1465650316;
		iVar16[3] = -1996174505;
		iVar16[4] = -17398012;
		iVar16[5] = -672936509;
		iVar16[6] = -754270386;
		iVar16[7] = 1189886733;
		iVar16[8] = 553886790;
		iVar16[9] = 1197559327;
		iVar16[10] = -1015852380;
		iVar16[11] = -1937147713;
		iVar16[12] = 1873076364;
		iVar16[13] = 369612903;
		iVar16[14] = -1838004738;
		iVar16[15] = 1554010903;
		iVar16[16] = -1831561045;
		iVar16[17] = -37640047;
		iVar16[18] = -1366179602;
		iVar16[19] = -599228492;
		iVar16[20] = -1163831424;
		iVar16[21] = 1131991595;
		iVar16[22] = 1778997707;
		iVar16[23] = -397099226;
		iVar16[24] = 972123551;
		iVar16[25] = 2129417429;
		iVar16[26] = -503751164;
		iVar16[27] = 281101495;
		iVar16[28] = -1010154358;
		iVar16[29] = 1407427711;
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (aggregate.gunfight.func_83(&uVar0, &iVar16, 1, vParam0, iParam7) > 0)
			{
				*uParam3 = &uVar0[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		if (aggregate.gunfight.func_83(&uVar4, &iVar11, 1, vParam0, iParam7) > 0)
		{
			*iParam5 = &uVar4[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam4))
	{
		if (aggregate.gunfight.func_83(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
			{
				*bParam4 = &uVar2[0];
				return true;
			}
		}
	}
	else if (aggregate.gunfight.func_83(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
		{
			*bParam4 = &uVar2[0];
			return true;
		}
	}
	return false;
}

bool func_51(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam7))
		{
			STREAMING::REQUEST_MODEL(iParam7, false);
			return false;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam9))
	{
		STREAMING::REQUEST_MODEL(iParam9, false);
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam11))
	{
		STREAMING::REQUEST_MODEL(iParam11, false);
		return false;
	}
	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			iParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam7, vParam3, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		iParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam9, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		bParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam11, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		return false;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1) && !ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", iParam6, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", iParam8, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", bParam10, 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_35)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_35);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return true;
	}
	return false;
}

bool func_54(var uParam0, float fParam1)
{
	if (aggregate.binoculars.func_32(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (Global_1099293->f_331)
		{
			return false;
		}
		if (aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return false;
		}
		if (aggregate.net_arrowheads.func_96(uParam0->f_5))
		{
			return false;
		}
		if (aggregate.fishing_core.func_34(uParam0, 2))
		{
			if (aggregate.doc_book.func_185(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -862059856 && aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_67(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	if (aggregate.fishing_core.func_34(uParam0, 32))
	{
		((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
		if (aggregate.fishing_core.func_34(uParam0, 1))
		{
			uParam0->f_28 = -990197142;
		}
		else
		{
			uParam0->f_28 = -795783582;
		}
	}
	while (!aggregate.net_arrowheads.func_104(uParam0->f_28, &uVar0))
	{
		return false;
	}
	iVar5 = aggregate.net_arrowheads.func_16(uParam0->f_28);
	iVar4 = 0;
	while (iVar4 < Global_17173.f_2954.f_1)
	{
		if (iVar5 == (Global_17173.f_2954.f_1[iVar4 /*5*/])->f_4)
		{
			Global_17173.f_2954.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1113216174, -445015182), 1);
	if (aggregate.fishing_core.func_34(uParam0, 2))
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1113216174, 99337762), 1);
	}
	return true;
}

