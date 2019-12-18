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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = -1;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1352

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::_0xE7DDA8BD3BCF751C(3);
	if (vParam1.z == 1260056893)
	{
		if (!aggregate_func_4278(uParam0, 4))
		{
			uParam0->f_16 = vParam1.x;
			vParam1.x = 0;
			aggregate_func_7269(uParam0, 4);
			if (MISC::ABSI(uParam0->f_16) <= 50)
			{
				uParam0->f_19 = aggregate_func_7952(MISC::ABSI(uParam0->f_16));
				aggregate_func_7269(uParam0, 1);
			}
			else
			{
				aggregate_func_7269(uParam0, 2);
			}
		}
	}
	*uParam0 = 3;
	uParam0->f_1 = func_12(vParam1, uParam0);
	if (!aggregate_func_4278(uParam0, 4))
	{
		uParam0->f_19 = func_13(uParam0);
		func_14(uParam0);
	}
	uParam0->f_20 = aggregate_func_4032();
	uParam0->f_12 = "script@mech@treasure_hunting@chest";
	uParam0->f_13 = "PBL_CHEST_01";
	if (!aggregate_func_4278(uParam0, 16))
	{
		aggregate_func_7269(uParam0, 16);
	}
	uParam0->f_2 = 0;
	uParam0->f_22 = func_16(uParam0);
	uParam0->f_5 = aggregate_func_8282(uParam0->f_22);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_0xA8452DD321607029(uParam0->f_9, 1) };
	aggregate_func_1694(&(uParam0->f_34), uParam0->f_6);
	aggregate_func_3743(*uParam0, uParam0->f_1);
	uParam0->f_17 = aggregate_func_4033(0);
	uParam0->f_18 = aggregate_func_4034();
	if (aggregate_func_3745(uParam0->f_6))
	{
		if (aggregate_func_4278(uParam0, 16))
		{
			if (aggregate_func_1321())
			{
				if (!aggregate_func_4278(uParam0, 64))
				{
					aggregate_func_7269(uParam0, 64);
				}
			}
		}
	}
}

void func_5(var uParam0)
{
	aggregate_func_2878(&(uParam0->f_14), 1, 1);
	aggregate_func_3744(uParam0);
	if (aggregate_func_4278(uParam0, 2))
	{
		aggregate_func_7953(uParam0->f_6);
	}
	aggregate_func_858(*uParam0, uParam0->f_1, 1);
	aggregate_func_7534(*uParam0, uParam0->f_1, 1);
	aggregate_func_7534(*uParam0, uParam0->f_1, 16);
	aggregate_func_7534(*uParam0, uParam0->f_1, 32);
	aggregate_func_1353();
	aggregate_func_1354();
	aggregate_func_4620(&(uParam0->f_34));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_29))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_29, false);
	}
	aggregate_func_6638(0);
	aggregate_func_2380(&(uParam0->f_34));
	if (!aggregate_func_4278(uParam0, 4))
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

	if (aggregate_func_4278(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && aggregate_func_1279(Global_35, uParam0->f_6, 3f, 1, 1))
		{
			if (!aggregate_func_1891(uParam0))
			{
				aggregate_func_3743(*uParam0, uParam0->f_1);
				((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = uParam0->f_1;
			}
		}
	}
	if (aggregate_func_4249(uParam0) < 10)
	{
		if (aggregate_func_4278(uParam0, 16))
		{
			if (!aggregate_func_7955(*uParam0, uParam0->f_1, 16))
			{
				if (aggregate_func_731(uParam0->f_6, &(uParam0->f_26), &(uParam0->f_24), &(uParam0->f_25), aggregate_func_4278(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					aggregate_func_7534(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (aggregate_func_1355(*uParam0) && aggregate_func_1891(uParam0))
		{
			aggregate_func_4242(uParam0, 11);
			if (aggregate_func_2875(uParam0->f_14))
			{
				aggregate_func_2878(&(uParam0->f_14), 1, 1);
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
	}
	bVar1 = (aggregate_func_4249(uParam0) <= 6 && !aggregate_func_3539(uParam0->f_14, 1));
	bVar2 = !aggregate_func_4278(uParam0, 32);
	if (aggregate_func_7954(aggregate_func_4278(uParam0, 2)))
	{
		if (aggregate_func_4278(uParam0, 2))
		{
			aggregate_func_2549(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			aggregate_func_204(&(uParam0->f_34), uParam0->f_6, bVar1, bVar2, 1);
		}
	}
	aggregate_func_2550(uParam0->f_14);
	aggregate_func_847(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	switch (aggregate_func_4249(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_17, false);
			STREAMING::REQUEST_MODEL(uParam0->f_20, false);
			STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			if (aggregate_func_4278(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_19, false);
			}
			aggregate_func_2904(&(uParam0->f_34.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (aggregate_func_4278(uParam0, 32))
			{
				if (!aggregate_func_4240((*Global_1199513)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
				{
					aggregate_func_4242(uParam0, 1);
				}
				else if (aggregate_func_53(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, aggregate_func_4278(uParam0, 1)))
				{
					aggregate_func_4242(uParam0, 12);
				}
			}
			else if (aggregate_func_4240((*Global_1199513)[*uParam0 /*1909*/][uParam0->f_1 /*9*/], 16))
			{
				if (aggregate_func_53(&(uParam0->f_11), uParam0->f_12, "PBL_LOOTED", uParam0->f_6, uParam0->f_26, uParam0->f_19, uParam0->f_24, uParam0->f_17, uParam0->f_25, uParam0->f_20, aggregate_func_4278(uParam0, 1)))
				{
					if (Global_1199513->f_13365 != uParam0->f_1)
					{
						aggregate_func_4242(uParam0, 12);
					}
					else
					{
						aggregate_func_4242(uParam0, 15);
					}
				}
			}
			else if (!aggregate_func_3745(uParam0->f_6))
			{
				aggregate_func_4242(uParam0, 15);
			}
			else if (!aggregate_func_4278(uParam0, 64))
			{
				aggregate_func_4242(uParam0, 1);
			}
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(uParam0->f_17) && STREAMING::HAS_MODEL_LOADED(uParam0->f_20)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
			{
				if (aggregate_func_4278(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						uParam0->f_26 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_19, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_33), &(uParam0->f_30)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_26, aggregate_func_840(uParam0->f_30, 0), 2, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_6 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					uParam0->f_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_20, uParam0->f_6 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					uParam0->f_27 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_6 + Vector(-15f, 0f, 0f), false, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					return false;
				}
				aggregate_func_4242(uParam0, 2);
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
			aggregate_func_4242(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "CHEST", uParam0->f_24, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_27, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "DRESSING", uParam0->f_25, 0);
				if (aggregate_func_4278(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_26, 0);
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
					aggregate_func_421(uParam0->f_26, uParam0->f_26, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_26, 187984275);
					aggregate_func_4242(uParam0, 5);
				}
				else
				{
					aggregate_func_4242(uParam0, 5);
				}
			}
			break;
		case 5:
			if (aggregate_func_874(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!aggregate_func_2875(uParam0->f_14))
				{
					uParam0->f_14 = aggregate_func_2087("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				aggregate_func_4242(uParam0, 6);
			}
			break;
		case 6:
			if (aggregate_func_2875(uParam0->f_14))
			{
				if (Global_1099293->f_331)
				{
					if (aggregate_func_4637(uParam0->f_14, 0))
					{
						aggregate_func_4583(uParam0->f_14, 0, 1, 1);
					}
				}
				else if (!aggregate_func_4637(uParam0->f_14, 0))
				{
					aggregate_func_4583(uParam0->f_14, 1, 1, 1);
				}
				if (!aggregate_func_4278(uParam0, 32))
				{
					aggregate_func_2551(uParam0->f_14, &(uParam0->f_34.f_6));
				}
				if (aggregate_func_455(uParam0->f_14, 1))
				{
					if (aggregate_func_7955(*uParam0, uParam0->f_1, 32))
					{
						aggregate_func_6638(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						aggregate_func_2878(&(uParam0->f_14), 1, 1);
						aggregate_func_843(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						aggregate_func_7534(*uParam0, uParam0->f_1, 32);
						aggregate_func_4242(uParam0, 7);
					}
				}
				else if (aggregate_func_1891(uParam0))
				{
					if (aggregate_func_1702(uParam0->f_14, 1) > 0f)
					{
						aggregate_func_1356(aggregate_func_1501(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (aggregate_func_1702(uParam0->f_14, 1) == 0f)
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
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, aggregate_func_3018(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				aggregate_func_4242(uParam0, 8);
			}
			break;
		case 8:
			aggregate_func_2552();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1069379748 /* Float: 1.48f */, true, 128, 20000, -1082130432 /* Float: -1f */);
			uParam0->f_29 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_6, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			aggregate_func_4242(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				aggregate_func_4242(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_11, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_27, false);
				}
				if (!aggregate_func_4019(uParam0))
				{
					return false;
				}
				aggregate_func_3746(uParam0->f_9);
				aggregate_func_7956(aggregate_func_4278(uParam0, 1), aggregate_func_4278(uParam0, 2));
				aggregate_func_6638(0);
				aggregate_func_2380(&(uParam0->f_34));
				if (aggregate_func_4278(uParam0, 2))
				{
					aggregate_func_7953(uParam0->f_6);
				}
				if (aggregate_func_4278(uParam0, 16))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_24, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_24, 1);
					aggregate_func_7534(*uParam0, uParam0->f_1, 16);
				}
				aggregate_func_3746(uParam0->f_9);
				aggregate_func_1354();
				if (aggregate_func_4278(uParam0, 2) && aggregate_func_4278(uParam0, 32))
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
			if (aggregate_func_2875(uParam0->f_14))
			{
				aggregate_func_2878(&(uParam0->f_14), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_11, "LOOT", uParam0->f_27);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_27));
			}
			if (aggregate_func_4278(uParam0, 4))
			{
				bVar0 = aggregate_func_1357();
				if (!aggregate_func_2823(bVar0, 0))
				{
					return false;
				}
				uParam0->f_5 = bVar0;
				uParam0->f_22 = aggregate_func_8283(uParam0->f_5);
				if (!aggregate_func_4278(uParam0, 8))
				{
					aggregate_func_7269(uParam0, 8);
				}
			}
			if (aggregate_func_4278(uParam0, 16))
			{
				uParam0->f_21 = aggregate_func_3032(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			aggregate_func_7534(*uParam0, uParam0->f_1, 1);
			aggregate_func_4242(uParam0, 13);
			break;
		case 13:
			if (!aggregate_func_1355(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						uParam0->f_28 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
					{
						return false;
					}
					MAP::_0x1726963E6049DB53(uParam0->f_28);
					aggregate_func_4242(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_28) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_28))
			{
				uParam0->f_28 = 0;
				aggregate_func_4242(uParam0, 13);
				return false;
			}
			if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_6, true) < 1.5f)
				{
					aggregate_func_3746(uParam0->f_9);
					Global_1199513->f_13365 = uParam0->f_1;
					aggregate_func_4242(uParam0, 15);
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
		if (aggregate_func_4278(uParam3, 4))
		{
			iVar1 = ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2;
		}
		else if (bVar3)
		{
			aggregate_func_7269(uParam3, 32);
		}
		((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 200:
			return 0;
		case 201:
			return 1;
		case 202:
			return 2;
		case 203:
			return 3;
		case 204:
			return 4;
		case 205:
			return 5;
		case 206:
			return 6;
		case 207:
			return 7;
		case 208:
			return 8;
		case 209:
			return 9;
		case 210:
			return 10;
		case 211:
			return 11;
		case 212:
			return 12;
		case 213:
			return 13;
		case 214:
			return 14;
		case 215:
			return 15;
		case 216:
			return 16;
		case 217:
			return 17;
		case 218:
			return 18;
		case 219:
			return 19;
		case 220:
			return 20;
		case 221:
			return 21;
		case 222:
			return 22;
		case 223:
			return 23;
		case 224:
			return 24;
		case 225:
			return 25;
		case 226:
			return 26;
		case 227:
			return 27;
		case 228:
			return 28;
		case 229:
			return 29;
		case 4:
			return 30;
		case 230:
			return 31;
		case 5:
			return 32;
		case 231:
			return 33;
		case 9:
			return 34;
		case 232:
			return 35;
		case 10:
			return 36;
		case 11:
			return 37;
		case 233:
			return 38;
		case 6:
			return 39;
		case 7:
			return 40;
		case 8:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		case 3:
			return 44;
		case 12:
			return 45;
		case 13:
			return 46;
		case 14:
			return 47;
		case 15:
			return 48;
		case 16:
			return 49;
		case 17:
			return 50;
		case 18:
			return 51;
		case 19:
			return 52;
		case 20:
			return 53;
		case 21:
			return 54;
		case 22:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_13(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 42:
			iVar0 = 1197559327;
			break;
		case 43:
			iVar0 = -1937147713;
			break;
		case 44:
			iVar0 = 1627076851;
			break;
		case 30:
			iVar0 = -672936509;
			break;
		case 32:
			iVar0 = 1465650316;
			break;
		case 39:
			iVar0 = -1160940577;
			break;
		case 40:
			iVar0 = -1996174505;
			break;
		case 41:
			iVar0 = 1131991595;
			break;
		case 34:
			iVar0 = 1131991595;
			break;
		case 36:
			iVar0 = -1996174505;
			break;
		case 37:
			iVar0 = -1160940577;
			break;
	}
	return iVar0;
}

void func_14(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 30:
		case 32:
		case 34:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			aggregate_func_7269(uParam0, 1);
			break;
		default:
			aggregate_func_7269(uParam0, 2);
			break;
	}
}

int func_16(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -1132845243;
			break;
		case 3:
		case 4:
		case 5:
			iVar0 = 1606281828;
			break;
		case 6:
		case 7:
		case 8:
			iVar0 = 530382704;
			break;
		case 9:
		case 10:
		case 11:
			iVar0 = -1519010704;
			break;
		case 12:
		case 13:
		case 14:
			iVar0 = 520232109;
			break;
		case 15:
		case 16:
		case 17:
			iVar0 = -364070233;
			break;
		case 18:
		case 19:
		case 20:
			iVar0 = -1296260337;
			break;
		case 21:
		case 22:
		case 23:
			iVar0 = 127681874;
			break;
		case 24:
		case 25:
		case 26:
			iVar0 = 1290286961;
			break;
		case 27:
		case 28:
		case 29:
			iVar0 = 1628530735;
			break;
		case 30:
		case 31:
		case 32:
		case 48:
		case 49:
			iVar0 = 530930425;
			break;
		case 33:
		case 34:
		case 35:
		case 53:
			iVar0 = -581360339;
			break;
		case 36:
		case 37:
		case 38:
		case 54:
		case 55:
			iVar0 = -649069078;
			break;
		case 39:
		case 40:
		case 41:
		case 50:
		case 51:
		case 52:
			iVar0 = -180052139;
			break;
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			iVar0 = -1597269158;
			break;
	}
	return iVar0;
}

