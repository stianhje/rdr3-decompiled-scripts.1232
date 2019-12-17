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
	struct<8> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == net_arrowheads.__EntryFunction__

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::_0xE7DDA8BD3BCF751C(3);
	*uParam0 = 6;
	uParam0->f_1 = func_9(vParam1);
	func_10(uParam0);
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		uParam0->f_16 = aggregate.net_arrowheads.func_11(uParam0->f_1);
	}
	if (uParam0->f_1 <= 80)
	{
		if (!aggregate.fishing_core.func_34(uParam0, 8))
		{
			aggregate.net_arrowheads.func_10(uParam0, 8);
		}
	}
	if (aggregate.fishing_core.func_34(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = func_14();
		uParam0->f_14 = func_15(0);
		uParam0->f_15 = func_16();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}
	uParam0->f_2 = 0;
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		uParam0->f_19 = -990197142;
	}
	else
	{
		uParam0->f_19 = -795783582;
	}
	uParam0->f_8 = vParam1.x;
	uParam0->f_7 = vParam1.y;
	uParam0->f_4 = { TASK::_0xA8452DD321607029(uParam0->f_7, 1) };
	aggregate.net_arrowheads.func_17(&(uParam0->f_30), uParam0->f_4);
	aggregate.net_arrowheads.func_18(*uParam0, uParam0->f_1);
	func_19();
	if (aggregate.net_arrowheads.func_42(uParam0->f_4))
	{
		if (aggregate.fishing_core.func_34(uParam0, 8))
		{
			if (aggregate.net_arrowheads.func_62())
			{
				if (!aggregate.fishing_core.func_34(uParam0, 16))
				{
					aggregate.net_arrowheads.func_10(uParam0, 16);
				}
			}
		}
	}
}

void func_5(var uParam0)
{
	(*Global_1199220)[PLAYER::PLAYER_ID() /*9*/] = -1;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 = -1;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = -1;
	aggregate.annesburg.func_218(&(uParam0->f_12), 1, 1);
	aggregate.net_arrowheads.func_20(uParam0);
	if (aggregate.fishing_core.func_34(uParam0, 2))
	{
		aggregate.net_arrowheads.func_21(uParam0->f_4);
	}
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
	aggregate.net_arrowheads.func_24();
	aggregate.net_arrowheads.func_25();
	aggregate.fme_wreckage.func_632(&(uParam0->f_30));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_25))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);
	}
	aggregate.net_arrowheads.func_27(0);
	aggregate.net_arrowheads.func_28(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (aggregate.camera_item.func_12(uParam0) < 10)
	{
		if (aggregate.fishing_core.func_34(uParam0, 8))
		{
			if (!aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 16))
			{
				if (func_33(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), aggregate.fishing_core.func_34(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (aggregate.net_arrowheads.func_32(*uParam0) && func_36(uParam0))
		{
			aggregate.camera_item.func_77(uParam0, 11);
			if (aggregate.annesburg.func_217(uParam0->f_12))
			{
				aggregate.annesburg.func_218(&(uParam0->f_12), 1, 1);
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
		bVar1 = (aggregate.camera_item.func_12(uParam0) <= 6 && !aggregate.camera_item.func_4(uParam0->f_12, 1));
		if (aggregate.net_arrowheads.func_36(aggregate.fishing_core.func_34(uParam0, 2)))
		{
			if (aggregate.fishing_core.func_34(uParam0, 2))
			{
				aggregate.net_arrowheads.func_37(uParam0->f_12, uParam0->f_4);
			}
			else
			{
				aggregate.fme_condor_egg.func_830(&(uParam0->f_30), uParam0->f_4, bVar1, 1, 1);
			}
		}
		aggregate.net_arrowheads.func_39(uParam0->f_12);
		aggregate.net_arrowheads.func_40(uParam0->f_4, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	}
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
			if (aggregate.fishing_core.func_34(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
			}
			aggregate.fme_king_of_the_castle.func_989(&(uParam0->f_30.f_7), uParam0->f_4, 1.5f, 1, 319, 0);
			if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 16))
			{
				if (func_46(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, aggregate.fishing_core.func_34(uParam0, 1)))
				{
					if (Global_1199513->f_13366 != *uParam0)
					{
						aggregate.camera_item.func_77(uParam0, 12);
					}
					else
					{
						aggregate.camera_item.func_77(uParam0, 15);
					}
				}
			}
			else if (!aggregate.net_arrowheads.func_42(uParam0->f_4))
			{
				aggregate.camera_item.func_77(uParam0, 15);
			}
			else if (!aggregate.fishing_core.func_34(uParam0, 16))
			{
				aggregate.camera_item.func_77(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
				{
					return false;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_14, uParam0->f_4 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_4 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					uParam0->f_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_15, uParam0->f_4 + Vector(-15f, 0f, 0f), false, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					return false;
				}
			}
			if (aggregate.fishing_core.func_34(uParam0, 1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_16, uParam0->f_4, true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					return false;
				}
				if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_4 + Vector(1f, 0f, 0f), &(uParam0->f_29), &(uParam0->f_26)))
				{
					return false;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, aggregate.net_arrowheads.func_43(uParam0->f_26, 0), 2, true);
				}
			}
			aggregate.camera_item.func_77(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_10, 64, uParam0->f_11, true, true);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
			{
				return false;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
			aggregate.camera_item.func_77(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_9, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (aggregate.fishing_core.func_34(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
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
					aggregate.net_arrowheads.func_44(uParam0->f_22, uParam0->f_22, 0);
					aggregate.camera_item.func_77(uParam0, 5);
				}
				else
				{
					aggregate.camera_item.func_77(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_49(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!aggregate.annesburg.func_217(uParam0->f_12))
				{
					uParam0->f_12 = aggregate.fm_deathmatch_controller.func_2631("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_4, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				aggregate.camera_item.func_77(uParam0, 6);
			}
			break;
		case 6:
			if (aggregate.annesburg.func_217(uParam0->f_12))
			{
				if (Global_1099293->f_331)
				{
					if (aggregate.doc_book.func_70(uParam0->f_12, 0))
					{
						aggregate.binoculars.func_37(uParam0->f_12, 0, 1, 1);
					}
				}
				else if (!aggregate.doc_book.func_70(uParam0->f_12, 0))
				{
					aggregate.binoculars.func_37(uParam0->f_12, 1, 1, 1);
				}
				aggregate.net_arrowheads.func_49(uParam0->f_12, &(uParam0->f_30.f_6));
				if (aggregate.doc_book.func_50(uParam0->f_12, 1))
				{
					if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 32))
					{
						aggregate.net_arrowheads.func_27(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						aggregate.annesburg.func_218(&(uParam0->f_12), 1, 1);
						aggregate.fme_escaped_convicts.func_351(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
						aggregate.camera_item.func_77(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (aggregate.fm_mission_controller.func_5040(uParam0->f_12, 1) > 0f)
					{
						aggregate.net_arrowheads.func_55(aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1));
					}
					else if (aggregate.fm_mission_controller.func_5040(uParam0->f_12, 1) == 0f)
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
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, aggregate.fishing_core.func_492(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				aggregate.camera_item.func_77(uParam0, 8);
			}
			break;
		case 8:
			aggregate.net_arrowheads.func_58();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1069379748 /* Float: 1.48f */, true, 128, 20000, -1082130432 /* Float: -1f */);
			uParam0->f_25 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			aggregate.camera_item.func_77(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_9, 0))
			{
				aggregate.camera_item.func_77(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_9, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_9, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_23, false);
				}
				if (!func_62(uParam0))
				{
					return false;
				}
				aggregate.net_arrowheads.func_60(uParam0->f_7);
				aggregate.net_arrowheads.func_61(aggregate.fishing_core.func_34(uParam0, 1), aggregate.fishing_core.func_34(uParam0, 2));
				aggregate.net_arrowheads.func_27(0);
				aggregate.net_arrowheads.func_28(&(uParam0->f_30));
				if (aggregate.fishing_core.func_34(uParam0, 2))
				{
					aggregate.net_arrowheads.func_21(uParam0->f_4);
				}
				if (aggregate.fishing_core.func_34(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_20, 1);
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 16);
				}
				aggregate.net_arrowheads.func_60(uParam0->f_7);
				aggregate.net_arrowheads.func_25();
				if (aggregate.fishing_core.func_34(uParam0, 2))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856 /* GXTEntry: "Metal Detector" */, false, 0, false, false);
				}
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
			if (aggregate.annesburg.func_217(uParam0->f_12))
			{
				aggregate.annesburg.func_218(&(uParam0->f_12), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
			bVar0 = aggregate.net_arrowheads.func_63();
			if (!aggregate.bandana.func_30(bVar0, 0))
			{
				return false;
			}
			uParam0->f_3 = bVar0;
			uParam0->f_19 = aggregate.net_arrowheads.func_65(uParam0->f_3);
			if (!aggregate.fishing_core.func_34(uParam0, 4))
			{
				aggregate.net_arrowheads.func_10(uParam0, 4);
			}
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				uParam0->f_18 = aggregate.interactive_campfire.func_586(uParam0->f_3);
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				aggregate.camera_item.func_77(uParam0, 13);
			}
			else
			{
				aggregate.camera_item.func_77(uParam0, 4);
			}
			break;
		case 13:
			if (!aggregate.net_arrowheads.func_32(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_4 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						return false;
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_24, true, true);
					MAP::_0x1726963E6049DB53(uParam0->f_24);
					aggregate.camera_item.func_77(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				uParam0->f_24 = 0;
				aggregate.camera_item.func_77(uParam0, 13);
				return false;
			}
			if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_4, true) < 1.5f)
				{
					aggregate.net_arrowheads.func_60(uParam0->f_7);
					Global_1199513->f_13366 = *uParam0;
					aggregate.camera_item.func_77(uParam0, 15);
				}
			}
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar0;
	}
	return iVar0;
}

void func_10(var uParam0)
{
	if (uParam0->f_1 <= 50)
	{
		aggregate.net_arrowheads.func_10(uParam0, 1);
	}
	else
	{
		aggregate.net_arrowheads.func_10(uParam0, 2);
	}
}

int func_14()
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

int func_15(bool bParam0)
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

int func_16()
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

void func_19()
{
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_3 = 0;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_6 = 0;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 0;
}

bool func_33(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
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

bool func_36(var uParam0)
{
	return ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
}

bool func_46(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
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

bool func_49(var uParam0, float fParam1)
{
	if (aggregate.binoculars.func_32(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (Global_1099293->f_331)
		{
			return false;
		}
		if (aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) > fParam1)
		{
			return false;
		}
		if (aggregate.fishing_core.func_34(uParam0, 2))
		{
			if (aggregate.doc_book.func_185(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -862059856 && aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) <= 1.6f)
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

bool func_62(var uParam0)
{
	var uVar0;

	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
	while (!aggregate.net_arrowheads.func_104(uParam0->f_19, &uVar0))
	{
		return false;
	}
	aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1113216174, -445015182), 1);
	if (aggregate.fishing_core.func_34(uParam0, 2))
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1113216174, 99337762), 1);
	}
	return true;
}

