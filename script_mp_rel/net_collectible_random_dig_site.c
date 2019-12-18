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

// __EntryFunction__ == aggregate_func_1352

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::_0xE7DDA8BD3BCF751C(3);
	*uParam0 = 6;
	uParam0->f_1 = func_9(vParam1);
	func_10(uParam0);
	if (aggregate_func_4278(uParam0, 1))
	{
		uParam0->f_16 = aggregate_func_7952(uParam0->f_1);
	}
	if (uParam0->f_1 <= 80)
	{
		if (!aggregate_func_4278(uParam0, 8))
		{
			aggregate_func_7269(uParam0, 8);
		}
	}
	if (aggregate_func_4278(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = aggregate_func_4032();
		uParam0->f_14 = aggregate_func_4033(0);
		uParam0->f_15 = aggregate_func_4034();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}
	uParam0->f_2 = 0;
	if (aggregate_func_4278(uParam0, 1))
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
	aggregate_func_1694(&(uParam0->f_30), uParam0->f_4);
	aggregate_func_3743(*uParam0, uParam0->f_1);
	func_19();
	if (aggregate_func_3745(uParam0->f_4))
	{
		if (aggregate_func_4278(uParam0, 8))
		{
			if (aggregate_func_1321())
			{
				if (!aggregate_func_4278(uParam0, 16))
				{
					aggregate_func_7269(uParam0, 16);
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
	aggregate_func_2878(&(uParam0->f_12), 1, 1);
	aggregate_func_3744(uParam0);
	if (aggregate_func_4278(uParam0, 2))
	{
		aggregate_func_7953(uParam0->f_4);
	}
	aggregate_func_7534(*uParam0, uParam0->f_1, 1);
	aggregate_func_7534(*uParam0, uParam0->f_1, 16);
	aggregate_func_7534(*uParam0, uParam0->f_1, 32);
	aggregate_func_1353();
	aggregate_func_1354();
	aggregate_func_4620(&(uParam0->f_30));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_25))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);
	}
	aggregate_func_6638(0);
	aggregate_func_2380(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (aggregate_func_4249(uParam0) < 10)
	{
		if (aggregate_func_4278(uParam0, 8))
		{
			if (!aggregate_func_7955(*uParam0, uParam0->f_1, 16))
			{
				if (aggregate_func_731(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), aggregate_func_4278(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					aggregate_func_7534(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (aggregate_func_1355(*uParam0) && func_36(uParam0))
		{
			aggregate_func_4242(uParam0, 11);
			if (aggregate_func_2875(uParam0->f_12))
			{
				aggregate_func_2878(&(uParam0->f_12), 1, 1);
			}
			aggregate_func_1354();
		}
		else if (aggregate_func_4249(uParam0) <= 6 && aggregate_func_4249(uParam0) > 1)
		{
			if (aggregate_func_7955(*uParam0, uParam0->f_1, 16))
			{
				aggregate_func_4242(uParam0, 12);
			}
		}
		bVar1 = (aggregate_func_4249(uParam0) <= 6 && !aggregate_func_3539(uParam0->f_12, 1));
		if (aggregate_func_7954(aggregate_func_4278(uParam0, 2)))
		{
			if (aggregate_func_4278(uParam0, 2))
			{
				aggregate_func_2549(uParam0->f_12, uParam0->f_4);
			}
			else
			{
				aggregate_func_204(&(uParam0->f_30), uParam0->f_4, bVar1, 1, 1);
			}
		}
		aggregate_func_2550(uParam0->f_12);
		aggregate_func_847(uParam0->f_4, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	}
	switch (aggregate_func_4249(uParam0))
	{
		case 0:
			if (aggregate_func_4278(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
			if (aggregate_func_4278(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
			}
			aggregate_func_2904(&(uParam0->f_30.f_7), uParam0->f_4, 1.5f, 1, 319, 0);
			if (aggregate_func_7955(*uParam0, uParam0->f_1, 16))
			{
				if (aggregate_func_53(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, aggregate_func_4278(uParam0, 1)))
				{
					if (Global_1199513->f_13366 != *uParam0)
					{
						aggregate_func_4242(uParam0, 12);
					}
					else
					{
						aggregate_func_4242(uParam0, 15);
					}
				}
			}
			else if (!aggregate_func_3745(uParam0->f_4))
			{
				aggregate_func_4242(uParam0, 15);
			}
			else if (!aggregate_func_4278(uParam0, 16))
			{
				aggregate_func_4242(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate_func_4278(uParam0, 8))
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
			if (aggregate_func_4278(uParam0, 1))
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
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, aggregate_func_840(uParam0->f_26, 0), 2, true);
				}
			}
			aggregate_func_4242(uParam0, 2);
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
			aggregate_func_4242(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_9, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (aggregate_func_4278(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
				if (aggregate_func_4278(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
					}
				}
				aggregate_func_4242(uParam0, 4);
			}
			break;
		case 4:
			if (aggregate_func_7954(aggregate_func_4278(uParam0, 2)))
			{
				if (aggregate_func_4278(uParam0, 1))
				{
					aggregate_func_421(uParam0->f_22, uParam0->f_22, 0);
					aggregate_func_4242(uParam0, 5);
				}
				else
				{
					aggregate_func_4242(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_49(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!aggregate_func_2875(uParam0->f_12))
				{
					uParam0->f_12 = aggregate_func_2087("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_4, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				aggregate_func_4242(uParam0, 6);
			}
			break;
		case 6:
			if (aggregate_func_2875(uParam0->f_12))
			{
				if (Global_1099293->f_331)
				{
					if (aggregate_func_4637(uParam0->f_12, 0))
					{
						aggregate_func_4583(uParam0->f_12, 0, 1, 1);
					}
				}
				else if (!aggregate_func_4637(uParam0->f_12, 0))
				{
					aggregate_func_4583(uParam0->f_12, 1, 1, 1);
				}
				aggregate_func_2551(uParam0->f_12, &(uParam0->f_30.f_6));
				if (aggregate_func_455(uParam0->f_12, 1))
				{
					if (aggregate_func_7955(*uParam0, uParam0->f_1, 32))
					{
						aggregate_func_6638(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						aggregate_func_2878(&(uParam0->f_12), 1, 1);
						aggregate_func_843(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						aggregate_func_7534(*uParam0, uParam0->f_1, 32);
						aggregate_func_4242(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (aggregate_func_1702(uParam0->f_12, 1) > 0f)
					{
						aggregate_func_1356(aggregate_func_1501(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1));
					}
					else if (aggregate_func_1702(uParam0->f_12, 1) == 0f)
					{
						aggregate_func_1354();
					}
				}
			}
			break;
		case 7:
			if (((aggregate_func_1979(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("weapon_unarmed") && aggregate_func_1979(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("weapon_unarmed")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_0xA911EE21EDF69DAF(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				aggregate_func_3744(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, aggregate_func_3018(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				aggregate_func_4242(uParam0, 8);
			}
			break;
		case 8:
			aggregate_func_2552();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1069379748 /* Float: 1.48f */, true, 128, 20000, -1082130432 /* Float: -1f */);
			uParam0->f_25 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			aggregate_func_4242(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_9, 0))
			{
				aggregate_func_4242(uParam0, 10);
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
				aggregate_func_3746(uParam0->f_7);
				aggregate_func_7956(aggregate_func_4278(uParam0, 1), aggregate_func_4278(uParam0, 2));
				aggregate_func_6638(0);
				aggregate_func_2380(&(uParam0->f_30));
				if (aggregate_func_4278(uParam0, 2))
				{
					aggregate_func_7953(uParam0->f_4);
				}
				if (aggregate_func_4278(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_20, 1);
					aggregate_func_7534(*uParam0, uParam0->f_1, 16);
				}
				aggregate_func_3746(uParam0->f_7);
				aggregate_func_1354();
				if (aggregate_func_4278(uParam0, 2))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856 /* GXTEntry: "Metal Detector" */, false, 0, false, false);
				}
				aggregate_func_4242(uParam0, 15);
			}
			break;
		case 11:
			if (aggregate_func_7955(*uParam0, uParam0->f_1, 1))
			{
				if (aggregate_func_1321())
				{
					aggregate_func_7534(*uParam0, uParam0->f_1, 1);
					aggregate_func_4242(uParam0, 12);
				}
				else if (!aggregate_func_1355(*uParam0))
				{
					aggregate_func_4242(uParam0, 4);
					aggregate_func_7534(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (aggregate_func_2875(uParam0->f_12))
			{
				aggregate_func_2878(&(uParam0->f_12), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_9))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
			bVar0 = aggregate_func_1357();
			if (!aggregate_func_2823(bVar0, 0))
			{
				return false;
			}
			uParam0->f_3 = bVar0;
			uParam0->f_19 = aggregate_func_8283(uParam0->f_3);
			if (!aggregate_func_4278(uParam0, 4))
			{
				aggregate_func_7269(uParam0, 4);
			}
			if (aggregate_func_4278(uParam0, 8))
			{
				uParam0->f_18 = aggregate_func_3032(uParam0->f_3);
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			aggregate_func_7534(*uParam0, uParam0->f_1, 1);
			if (aggregate_func_4278(uParam0, 8))
			{
				aggregate_func_4242(uParam0, 13);
			}
			else
			{
				aggregate_func_4242(uParam0, 4);
			}
			break;
		case 13:
			if (!aggregate_func_1355(*uParam0))
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
					aggregate_func_4242(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				uParam0->f_24 = 0;
				aggregate_func_4242(uParam0, 13);
				return false;
			}
			if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_4, true) < 1.5f)
				{
					aggregate_func_3746(uParam0->f_7);
					Global_1199513->f_13366 = *uParam0;
					aggregate_func_4242(uParam0, 15);
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
		aggregate_func_7269(uParam0, 1);
	}
	else
	{
		aggregate_func_7269(uParam0, 2);
	}
}

void func_19()
{
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_3 = 0;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_6 = 0;
	((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 0;
}

bool func_36(var uParam0)
{
	return ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
}

bool func_49(var uParam0, float fParam1)
{
	if (aggregate_func_2850(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (Global_1099293->f_331)
		{
			return false;
		}
		if (aggregate_func_1501(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) > fParam1)
		{
			return false;
		}
		if (aggregate_func_4278(uParam0, 2))
		{
			if (aggregate_func_1979(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -862059856 && aggregate_func_1501(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) <= 1.6f)
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
	while (!aggregate_func_7957(uParam0->f_19, &uVar0))
	{
		return false;
	}
	aggregate_func_1962(aggregate_func_4257(-1113216174, -445015182), 1);
	if (aggregate_func_4278(uParam0, 2))
	{
		aggregate_func_1962(aggregate_func_4257(-1113216174, 99337762), 1);
	}
	return true;
}

