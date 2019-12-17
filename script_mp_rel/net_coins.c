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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == net_arrowheads.__EntryFunction__

void func_1(var uParam0, vector3 vParam1)
{
	if (vParam1.z == 1260056893)
	{
		if (!aggregate.fishing_core.func_34(uParam0, 4))
		{
			uParam0->f_16 = vParam1.x;
			vParam1.x = 0;
			aggregate.net_arrowheads.func_10(uParam0, 4);
			if (MISC::ABSI(uParam0->f_16) <= 50)
			{
				uParam0->f_21 = aggregate.net_arrowheads.func_11(MISC::ABSI(uParam0->f_16));
				aggregate.net_arrowheads.func_10(uParam0, 1);
			}
			else
			{
				aggregate.net_arrowheads.func_10(uParam0, 2);
			}
		}
	}
	*uParam0 = 4;
	uParam0->f_1 = func_12(vParam1, uParam0);
	aggregate.net_arrowheads.func_10(uParam0, 2);
	uParam0->f_12 = "script@mech@treasure_hunting@grab";
	uParam0->f_13 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_13(uParam0);
	uParam0->f_5 = aggregate.net_arrowheads.func_16(uParam0->f_22);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_0xA8452DD321607029(uParam0->f_9, 1) };
	aggregate.net_arrowheads.func_17(&(uParam0->f_27), uParam0->f_6);
	aggregate.net_arrowheads.func_18(*uParam0, uParam0->f_1);
}

void func_5(var uParam0)
{
	aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
	aggregate.net_arrowheads.func_20(uParam0);
	aggregate.net_arrowheads.func_21(uParam0->f_6);
	aggregate.net_arrowheads.func_22(*uParam0, uParam0->f_1, 1);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
	aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
	aggregate.net_arrowheads.func_24();
	aggregate.net_arrowheads.func_25();
	aggregate.fme_wreckage.func_632(&(uParam0->f_27));
	aggregate.net_arrowheads.func_27(0);
	aggregate.net_arrowheads.func_28(&(uParam0->f_27));
	if (!aggregate.fishing_core.func_34(uParam0, 4))
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

	if (aggregate.fishing_core.func_34(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && aggregate.fme_condor_egg.func_1287(Global_35, uParam0->f_6, 3f, 1, 1))
		{
			if (!func_28(uParam0))
			{
				aggregate.net_arrowheads.func_18(*uParam0, uParam0->f_1);
				((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = uParam0->f_1;
			}
		}
	}
	if (aggregate.camera_item.func_12(uParam0) < 10)
	{
		if (aggregate.net_arrowheads.func_32(*uParam0) && func_28(uParam0))
		{
			aggregate.camera_item.func_77(uParam0, 11);
			if (aggregate.annesburg.func_217(uParam0->f_14))
			{
				aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
			}
			aggregate.net_arrowheads.func_25();
		}
	}
	bVar1 = (aggregate.camera_item.func_12(uParam0) <= 6 && !aggregate.camera_item.func_4(uParam0->f_14, 1));
	bVar2 = !aggregate.fishing_core.func_34(uParam0, 32);
	if (aggregate.net_arrowheads.func_36(aggregate.fishing_core.func_34(uParam0, 2)))
	{
		if (aggregate.fishing_core.func_34(uParam0, 2))
		{
			aggregate.net_arrowheads.func_37(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			aggregate.fme_condor_egg.func_830(&(uParam0->f_27), uParam0->f_6, bVar1, bVar2, 1);
		}
	}
	aggregate.net_arrowheads.func_39(uParam0->f_14);
	aggregate.net_arrowheads.func_40(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(-1456904552, false);
			if (aggregate.fishing_core.func_34(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			aggregate.fme_king_of_the_castle.func_989(&(uParam0->f_27.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (aggregate.fishing_core.func_34(uParam0, 32))
			{
				aggregate.camera_item.func_77(uParam0, 1);
			}
			else if (!aggregate.net_arrowheads.func_42(uParam0->f_6))
			{
				aggregate.camera_item.func_77(uParam0, 12);
			}
			else
			{
				aggregate.camera_item.func_77(uParam0, 1);
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(-1456904552))
			{
				if (aggregate.fishing_core.func_34(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
					{
						return false;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						return false;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_26), &(uParam0->f_23)))
					{
						return false;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, aggregate.net_arrowheads.func_43(uParam0->f_23, 0), 2, true);
					}
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
			if (func_43(uParam0, 1097859072 /* Float: 15f */))
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
				if (!aggregate.fishing_core.func_34(uParam0, 32))
				{
					aggregate.net_arrowheads.func_49(uParam0->f_14, &(uParam0->f_27.f_6));
				}
				if (aggregate.doc_book.func_50(uParam0->f_14, 1))
				{
					if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 32))
					{
						aggregate.net_arrowheads.func_27(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						aggregate.annesburg.func_218(&(uParam0->f_14), 1, 1);
						aggregate.fme_escaped_convicts.func_351(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 32);
						aggregate.camera_item.func_77(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
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
			aggregate.camera_item.func_77(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				aggregate.camera_item.func_77(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_11, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				if (!func_57(uParam0))
				{
					return false;
				}
				aggregate.net_arrowheads.func_60(uParam0->f_9);
				aggregate.net_arrowheads.func_61(aggregate.fishing_core.func_34(uParam0, 1), aggregate.fishing_core.func_34(uParam0, 2));
				aggregate.net_arrowheads.func_27(0);
				aggregate.net_arrowheads.func_28(&(uParam0->f_27));
				aggregate.net_arrowheads.func_21(uParam0->f_6);
				aggregate.net_arrowheads.func_60(uParam0->f_9);
				aggregate.net_arrowheads.func_25();
				if (aggregate.fishing_core.func_34(uParam0, 2) && aggregate.fishing_core.func_34(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856 /* GXTEntry: "Metal Detector" */, false, 0, false, false);
				}
				aggregate.camera_item.func_77(uParam0, 12);
			}
			break;
		case 11:
			if (aggregate.net_arrowheads.func_62())
			{
			}
			if (aggregate.net_arrowheads.func_51(*uParam0, uParam0->f_1, 1))
			{
				if (!aggregate.net_arrowheads.func_32(*uParam0))
				{
					if (aggregate.fishing_core.func_34(uParam0, 4))
					{
						bVar0 = aggregate.net_arrowheads.func_63();
						if (!aggregate.bandana.func_30(bVar0, 0))
						{
							return false;
						}
						uParam0->f_5 = bVar0;
						uParam0->f_22 = aggregate.net_arrowheads.func_65(uParam0->f_5);
						if (!aggregate.fishing_core.func_34(uParam0, 8))
						{
							aggregate.net_arrowheads.func_10(uParam0, 8);
						}
					}
					aggregate.camera_item.func_77(uParam0, 4);
					aggregate.net_arrowheads.func_23(*uParam0, uParam0->f_1, 1);
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
		if (aggregate.fishing_core.func_34(uParam3, 4))
		{
			iVar1 = ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2;
		}
		else if (bVar3)
		{
			aggregate.net_arrowheads.func_10(uParam3, 32);
		}
		((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar1;
	}
	switch (iVar1)
	{
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
		case 0:
		case 1:
		case 2:
		case 45:
		case 46:
		case 47:
			iVar0 = -2132348472;
			break;
		case 3:
		case 4:
		case 5:
		case 48:
		case 49:
		case 50:
			iVar0 = -1400928817;
			break;
		case 6:
		case 7:
		case 8:
		case 51:
		case 52:
		case 53:
			iVar0 = 1524848772;
			break;
		case 9:
		case 10:
		case 11:
		case 54:
		case 55:
		case 56:
			iVar0 = -1843094784;
			break;
		case 12:
		case 13:
		case 14:
		case 57:
		case 58:
		case 59:
			iVar0 = -71915978;
			break;
		case 15:
		case 16:
		case 17:
		case 60:
		case 61:
		case 62:
			iVar0 = 1531432272;
			break;
		case 18:
		case 19:
		case 20:
		case 63:
		case 64:
		case 65:
			iVar0 = -2063569423;
			break;
		case 21:
		case 22:
		case 23:
		case 66:
		case 67:
		case 68:
			iVar0 = -1787268311;
			break;
		case 24:
		case 25:
		case 26:
		case 69:
		case 70:
		case 71:
			iVar0 = -1914323519;
			break;
		case 27:
		case 28:
		case 29:
		case 72:
		case 73:
		case 74:
			iVar0 = 1659722492;
			break;
		case 30:
		case 31:
		case 32:
		case 75:
		case 76:
		case 77:
			iVar0 = 897707862;
			break;
		case 33:
		case 34:
		case 35:
		case 78:
		case 79:
		case 80:
			iVar0 = 1789589305;
			break;
		case 36:
		case 37:
		case 38:
		case 81:
		case 82:
		case 83:
			iVar0 = -1678406212;
			break;
		case 39:
		case 40:
		case 41:
		case 84:
		case 85:
		case 86:
			iVar0 = -702109507;
			break;
		case 42:
		case 43:
		case 44:
		case 87:
		case 88:
		case 89:
			iVar0 = 395137059;
			break;
	}
	return iVar0;
}

bool func_28(var uParam0)
{
	if (!aggregate.fishing_core.func_34(uParam0, 32))
	{
		return ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
	}
	return (((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0 && ((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_2 == uParam0->f_1);
}

bool func_43(var uParam0, float fParam1)
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
		if (aggregate.fishing_core.func_34(uParam0, 4))
		{
			if ((aggregate.fishing_core.func_34(uParam0, 2) && aggregate.fishing_core.func_34(uParam0, 1)) && aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return true;
			}
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

bool func_57(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	if (!aggregate.fishing_core.func_34(uParam0, 8))
	{
		if (aggregate.fishing_core.func_34(uParam0, 4))
		{
			((*Global_1199220)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
			if (aggregate.fishing_core.func_34(uParam0, 1))
			{
				uParam0->f_22 = -990197142;
			}
			else
			{
				uParam0->f_22 = -795783582;
			}
		}
	}
	while (!aggregate.net_arrowheads.func_104(uParam0->f_22, &uVar0))
	{
		return false;
	}
	iVar5 = aggregate.net_arrowheads.func_16(uParam0->f_22);
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

