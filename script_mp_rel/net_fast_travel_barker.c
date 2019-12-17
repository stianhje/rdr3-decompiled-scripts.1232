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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&uLocal_26, iScriptParam_0);
	while (!func_2(&uLocal_26))
	{
		func_3(&uLocal_26);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_26);
}

void func_1(var uParam0, int iParam1)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate.doc_book.func_51(0);
	aggregate.fm_mission_controller.func_2782();
	aggregate.aberdeenpigfarm.func_8();
	Global_1070355->f_22101.f_2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	}
	else
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_2(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		return true;
	}
	if (*uParam0 <= 0)
	{
		return false;
	}
	if (*uParam0 == 5)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
		else if (uParam0->f_5)
		{
			if (Global_1070355->f_22101.f_2)
			{
				return true;
			}
			if (aggregate.blackwater.func_175(uParam0->f_8, Global_36) > Global_1901929->f_542.f_1)
			{
				return true;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (*uParam0)
	{
		case 0:
			func_10(uParam0);
			break;
		case 1:
			func_11(uParam0);
			break;
		case 2:
			func_12(uParam0);
			break;
		case 3:
			func_13(uParam0);
			break;
		case 4:
			func_14(uParam0);
			break;
		case 5:
			break;
	}
	if (uParam0->f_22 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - MISC::GET_FRAME_TIME());
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_15();
		aggregate.fm_deathmatch_controller.func_631();
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_23))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_23);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_24))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_24);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_24);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_25))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_25);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_25);
	}
	GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_26), 1);
	if (!aggregate.annesburg.func_237(7))
	{
		func_18();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		func_19(iVar1, 0);
	}
	func_20(uParam0);
	aggregate.aberdeenpigfarm.func_46();
}

void func_10(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	uParam0->f_4 = func_22(uParam0->f_3);
	if (uParam0->f_4 == 15)
	{
		return;
	}
	uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	fVar0 = BUILTIN::VDIST((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
	uParam0->f_2 = 1;
	if (fVar0 > 5f)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "fast_travel_camp_barker"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(uParam0->f_3, "fast_travel_camp_barker");
			if (aggregate.flow_controller.func_433(iVar1))
			{
				iVar2 = func_24(iVar1, 1);
				if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar2))
				{
					uParam0->f_11 = iVar2;
					uParam0->f_6 = fVar0;
					uParam0->f_5 = 1;
					uParam0->f_7 = BUILTIN::ROUND((fVar0 / 1000f));
					uParam0->f_12 = iVar1;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	else
	{
		iVar1 = aggregate.gfh_campworks.func_172(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (iVar1 >= 0)
		{
			uParam0->f_8 = { aggregate.gfh_campworks.func_72(iVar1) };
			fVar0 = BUILTIN::VDIST((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
			iVar2 = func_24(iVar1, 1);
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar2))
			{
				uParam0->f_11 = iVar2;
				uParam0->f_6 = fVar0;
				uParam0->f_7 = BUILTIN::ROUND((fVar0 / 1000f));
				uParam0->f_12 = iVar1;
			}
		}
	}
	uParam0->f_19 = aggregate.camera_item.func_46("NFT_MENU_OPEN", joaat("INPUT_CONTEXT_Y"), uParam0->f_3, 0, 0, 0, 1, 5, 3.5f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (!aggregate.annesburg.func_217(uParam0->f_19))
	{
		return;
	}
	aggregate.binoculars.func_25(uParam0->f_19, 13, 1, 1);
	uParam0->f_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	PATHFIND::_0x19C7567D2F2287D6(uParam0->f_24, 7);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_25, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_26 = GRAPHICS::_0xFA50F79257745E74((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 1f, 1, 4, 0);
	uParam0->f_20 = -1;
	aggregate.binoculars.func_39(uParam0, 4);
	aggregate.binoculars.func_39(uParam0, 2);
	aggregate.binoculars.func_39(uParam0, 8);
	aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
	aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
	func_18();
	func_33(uParam0, 0);
	func_34(uParam0, 1);
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1070355->f_22101.f_2)
	{
		func_34(uParam0, 5);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (aggregate.coffee_drinking.func_194(32768, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!VOLUME::_0xF256A75210C5C0EB(uParam0->f_23, ENTITY::GET_ENTITY_COORDS(iVar1, false, true)))
		{
			func_18();
		}
	}
	bVar2 = false;
	if (HUD::BUSYSPINNER_IS_ON())
	{
		aggregate.fm_deathmatch_controller.func_631();
	}
	if (!uParam0->f_2)
	{
		bVar2 = func_33(uParam0, 2);
	}
	else if (((((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || aggregate.fme_animal_tagging.func_118()) || aggregate.fme_animal_tagging_offline.func_37()) || aggregate.mp_intro.func_1362()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar2 = func_33(uParam0, 14);
	}
	else if (PED::_0xB655DB7582AEC805(iVar1))
	{
		bVar2 = func_33(uParam0, 7);
	}
	else if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		bVar2 = func_33(uParam0, 8);
	}
	else if (PED::_0xA911EE21EDF69DAF(iVar1))
	{
		bVar2 = func_33(uParam0, 9);
	}
	else if (aggregate.annesburg.func_180(255))
	{
		bVar2 = func_33(uParam0, 10);
	}
	else if (aggregate.fme_archery.func_1286(iVar0, 1, 0, 1))
	{
		bVar2 = func_33(uParam0, 5);
	}
	else if (aggregate.net_camp.func_1243())
	{
		bVar2 = func_33(uParam0, 3);
	}
	else if (aggregate.doc_book.func_11())
	{
		bVar2 = func_33(uParam0, 6);
	}
	else if (uParam0->f_5 && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_11, iVar0))
	{
		bVar2 = func_33(uParam0, 11);
	}
	else if (func_43())
	{
		bVar2 = func_33(uParam0, 4);
	}
	else if (func_44())
	{
		bVar2 = func_33(uParam0, 16);
	}
	else if (func_45())
	{
		bVar2 = func_33(uParam0, 17);
	}
	else if (func_46())
	{
		bVar2 = func_33(uParam0, 15);
	}
	else if (func_47(iVar0))
	{
		bVar2 = func_33(uParam0, 13);
	}
	else
	{
		bVar2 = func_33(uParam0, 1);
	}
	switch (uParam0->f_18)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (aggregate.blackwater.func_175((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) <= 3.5f)
				{
					func_19(iVar1, 1);
				}
				else
				{
					func_19(iVar1, 0);
				}
			}
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 1, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.fm_mission_controller.func_5040(uParam0->f_19, 1) > 0f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			}
			if (aggregate.doc_book.func_50(uParam0->f_19, 1))
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
				func_33(uParam0, 0);
				aggregate.fm_deathmatch_controller.func_1437(32);
				func_34(uParam0, 2);
			}
			break;
		case 14:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 13:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 3:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_MISSION_RUNNING");
			}
			break;
		case 4:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_HORSE_WARN");
			}
			break;
		case 17:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_WAGON_WARN");
			}
			break;
		case 16:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			}
			break;
		case 15:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_HOGTIED_HORSE_WARN");
			}
			break;
		case 5:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 1, 1);
			}
			if (aggregate.camera_item.func_4(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_WANTED");
			}
			break;
		case 6:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 7:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 9:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 8:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
		case 10:
			if (bVar2)
			{
				aggregate.binoculars.func_37(uParam0->f_19, 0, 1, 1);
				aggregate.fme_animal_tagging.func_454(uParam0->f_19, 0, 1);
			}
			break;
	}
}

void func_12(var uParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(1833066477))
	{
		return;
	}
	else
	{
		if (!aggregate.net_fast_travel_barker.func_53(1, 1))
		{
			return;
		}
		if (UIAPPS::_LAUNCH_APP_BY_HASH(1833066477) == 0)
		{
		}
		else
		{
			return;
		}
	}
	func_54();
	aggregate.binoculars.func_39(uParam0, 2);
	aggregate.binoculars.func_39(uParam0, 4);
	func_55(uParam0, -931758312);
	func_34(uParam0, 3);
}

void func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		aggregate.aberdeenpigfarm.func_68(uParam0, 2);
	}
	if (Global_1070355->f_22101.f_2)
	{
		aggregate.aberdeenpigfarm.func_68(uParam0, 2);
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
	if (uParam0->f_5)
	{
		if (aggregate.blackwater.func_175(uParam0->f_8, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			aggregate.aberdeenpigfarm.func_68(uParam0, 2);
		}
	}
	else
	{
		iVar2 = aggregate.gfh_campworks.func_172(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (iVar2 >= 0 && iVar2 != uParam0->f_12)
		{
			uParam0->f_8 = { aggregate.gfh_campworks.func_72(iVar2) };
			fVar3 = BUILTIN::VDIST((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
			iVar4 = func_24(iVar2, 1);
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar4))
			{
				uParam0->f_11 = iVar4;
				uParam0->f_6 = fVar3;
				uParam0->f_7 = BUILTIN::ROUND((fVar3 / 1000f));
				uParam0->f_12 = iVar2;
			}
		}
		if (aggregate.blackwater.func_175((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			aggregate.aberdeenpigfarm.func_68(uParam0, 2);
		}
	}
	iVar5 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!PED::_IS_MOUNT_SEAT_FREE(iVar5, 0))
		{
			aggregate.aberdeenpigfarm.func_68(uParam0, 2);
		}
	}
	if (func_47(iVar0))
	{
		aggregate.aberdeenpigfarm.func_68(uParam0, 2);
	}
	if (!aggregate.aberdeenpigfarm.func_61(uParam0, 2))
	{
		func_58(uParam0, &(uParam0->f_20));
		if (uParam0->f_20 == -1)
		{
			return;
		}
		if (aggregate.aberdeenpigfarm.func_61(uParam0, 8))
		{
			bVar8 = aggregate.fme_animal_tagging.func_1569(func_59(uParam0), &uVar7);
			bVar8 = (bVar8 || aggregate.fme_animal_tagging.func_1570(func_59(uParam0), &uVar7));
			if (uParam0->f_20 < 14)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = HUD::_GET_LABEL_TEXT_BY_HASH(&((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]));
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_62(&((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]))));
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(0, &(Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/]));
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_62(&(Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/]))));
				}
				else
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_20 == 15)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_MOONSHINE_DESC"));
			}
			if (uParam0->f_20 < 14)
			{
				bVar9 = func_59(uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(aggregate.fme_animal_tagging.func_1403(bVar9, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					bVar9 = func_64(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(aggregate.fme_animal_tagging.func_1403(bVar9, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", "");
					}
				}
				else
				{
					bVar9 = func_64(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(aggregate.fme_animal_tagging.func_1403(bVar9, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", "");
					}
				}
			}
			else if (uParam0->f_20 == 15)
			{
				bVar9 = func_64(0, uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(aggregate.fme_animal_tagging.func_1403(bVar9, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070355->f_22101.f_5.f_4, "subFooter", "");
				}
			}
			aggregate.binoculars.func_39(uParam0, 8);
		}
		if (aggregate.aberdeenpigfarm.func_61(uParam0, 4))
		{
			bVar10 = func_59(uParam0);
			switch (func_65(uParam0->f_20, bVar10))
			{
				case 0:
					if (aggregate.fme_animal_tagging.func_1569(bVar10, &bVar11))
					{
						uParam0->f_21 = aggregate.net_bounty_wagon.func_68(bVar10, 0, 1, 1, 1, bVar11);
					}
					else if (aggregate.fme_animal_tagging.func_1570(bVar10, &bVar11))
					{
						uParam0->f_21 = aggregate.net_bounty_wagon.func_68(bVar10, 0, 1, 1, 1, bVar11);
					}
					else
					{
						uParam0->f_21 = aggregate.net_bounty_wagon.func_68(bVar10, 0, 1, 1, 1, 59806960);
					}
					aggregate.binoculars.func_39(uParam0, 4);
					aggregate.aberdeenpigfarm.func_68(uParam0, 2);
					func_20(uParam0);
					aggregate.net_fast_travel_barker.func_67(1);
					aggregate.fme_supply_train.func_914(0, 72);
					func_34(uParam0, 4);
					return;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					func_52(uParam0, "NFT_CANT_AFFORD");
					aggregate.binoculars.func_39(uParam0, 4);
					aggregate.aberdeenpigfarm.func_68(uParam0, 2);
					func_20(uParam0);
					break;
				case 5:
					func_52(uParam0, "NFT_NO_CAMP");
					aggregate.binoculars.func_39(uParam0, 4);
					aggregate.aberdeenpigfarm.func_68(uParam0, 2);
					func_20(uParam0);
					break;
				case 6:
					func_52(uParam0, "NFT_NO_MOONSHINE");
					aggregate.binoculars.func_39(uParam0, 4);
					aggregate.aberdeenpigfarm.func_68(uParam0, 2);
					func_20(uParam0);
					break;
				case 7:
					func_52(uParam0, "NFT_POSSE_DISBAND");
					aggregate.binoculars.func_39(uParam0, 4);
					aggregate.aberdeenpigfarm.func_68(uParam0, 2);
					func_20(uParam0);
					break;
			}
		}
	}
	if (aggregate.aberdeenpigfarm.func_61(uParam0, 2))
	{
		func_19(iVar1, 0);
		aggregate.fm_deathmatch_controller.func_1437(32);
		func_20(uParam0);
		func_18();
		func_34(uParam0, 1);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = aggregate.moonshine_drink_item.func_1();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 1731288223:
				iVar2 = func_71(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
	if (iVar2 != 2 && iVar2 != 3)
	{
		iVar2 = aggregate.generic_document_inspection.func_454(uParam0->f_21);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_52(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			aggregate.fme_supply_train.func_914(1, 2);
			break;
		case 3:
			if (uParam0->f_20 < 14)
			{
				if ((MISC::_GET_SYSTEM_TIME() - uParam0->f_27) >= 1000)
				{
					if (!func_73(0, &((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]), 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (!func_73(0, &(Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/]), 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
				else if (!func_73(1, 0, 0))
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 5);
				}
			}
			else if (uParam0->f_20 == 15)
			{
				if (aggregate.net_fast_travel_barker.func_74(iVar3, 1))
				{
					if (!func_73(2, 0, 0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			aggregate.binoculars.func_39(uParam0, 4);
			break;
		case 4:
			func_52(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			break;
		case 5:
			break;
	}
}

bool func_15()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = aggregate.adlerranch.func_177();
	bVar1 = aggregate.mp_freemode_tutorial.func_379();
	bVar2 = (!CAM::IS_SCREEN_FADED_OUT() && !&Global_1048581);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 5:
			if (bVar1)
			{
				if (aggregate.fm_mission_controller.func_1278() <= 3)
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
					{
						aggregate.fme_supply_train.func_914(0, 124);
					}
					else
					{
						aggregate.fme_supply_train.func_914(0, 104);
					}
				}
				else if (aggregate.annesburg.func_236(2))
				{
					aggregate.fme_supply_train.func_914(0, 112);
				}
				else
				{
					aggregate.fme_supply_train.func_914(0, 124);
				}
			}
			else if (bVar2)
			{
				aggregate.fme_supply_train.func_914(1, 2);
			}
			else
			{
				aggregate.fme_supply_train.func_914(0, 8);
			}
			break;
		case 2:
		case 3:
			if (bVar1)
			{
				aggregate.fme_supply_train.func_914(0, 72);
			}
			else if (bVar2)
			{
				aggregate.fme_supply_train.func_914(0, 72);
			}
			else
			{
				aggregate.fme_supply_train.func_914(0, 8);
			}
			break;
		case 4:
			if (&Global_1099293 != 22)
			{
				if (bVar1)
				{
					bVar3 = &Global_1099293 <= 10;
					if (bVar2)
					{
						if (bVar3)
						{
							aggregate.fme_supply_train.func_914(0, 104);
						}
						else
						{
							aggregate.fme_supply_train.func_914(0, 124);
						}
					}
					else if (bVar3)
					{
						aggregate.fme_supply_train.func_914(0, 40);
					}
					else
					{
						aggregate.fme_supply_train.func_914(0, 60);
					}
				}
				else
				{
					bVar3 = Global_1099293->f_581;
					if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						bVar3 = true;
					}
					if ((Global_1099293->f_4[Global_1100046[2 /*2*/]] && ((*Global_1100046)[2 /*2*/])->f_1) == ((*Global_1100046)[2 /*2*/])->f_1)
					{
						bVar3 = false;
					}
					if ((((Global_1099293->f_4[Global_1100046[69 /*2*/]] && ((*Global_1100046)[69 /*2*/])->f_1) == ((*Global_1100046)[69 /*2*/])->f_1 || (Global_1099293->f_4[Global_1100046[70 /*2*/]] && ((*Global_1100046)[70 /*2*/])->f_1) == ((*Global_1100046)[70 /*2*/])->f_1) || (Global_1099293->f_4[Global_1100046[64 /*2*/]] && ((*Global_1100046)[64 /*2*/])->f_1) == ((*Global_1100046)[64 /*2*/])->f_1) || (Global_1099293->f_4[Global_1100046[65 /*2*/]] && ((*Global_1100046)[65 /*2*/])->f_1) == ((*Global_1100046)[65 /*2*/])->f_1)
					{
						if (&Global_1099293 > 10)
						{
							bVar3 = false;
						}
					}
					if (bVar2)
					{
						aggregate.fme_supply_train.func_1203(bVar3, 1, 0, bVar3, 1, 0, 0);
					}
					else
					{
						aggregate.fme_supply_train.func_1203(bVar3, 1, 0, bVar3, 0, 0, 0);
					}
				}
			}
			else if (bVar1)
			{
				if (bVar2)
				{
					aggregate.fme_supply_train.func_914(0, 124);
				}
				else
				{
					aggregate.fme_supply_train.func_914(0, 60);
				}
			}
			else if (!(Global_1099293->f_4[Global_1100046[24 /*2*/]] && ((*Global_1100046)[24 /*2*/])->f_1) == ((*Global_1100046)[24 /*2*/])->f_1)
			{
				if ((Global_1099293->f_4[Global_1100046[58 /*2*/]] && ((*Global_1100046)[58 /*2*/])->f_1) == ((*Global_1100046)[58 /*2*/])->f_1 || (Global_1099293->f_4[Global_1100046[59 /*2*/]] && ((*Global_1100046)[59 /*2*/])->f_1) == ((*Global_1100046)[59 /*2*/])->f_1)
				{
					aggregate.fme_supply_train.func_914(1, 256);
				}
				else
				{
					aggregate.fme_supply_train.func_914(1, 2);
				}
			}
			else
			{
				aggregate.fme_supply_train.func_914(0, 8);
			}
			func_80();
			break;
	}
	return ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID());
}

void func_18()
{
	aggregate.net_arrowheads.func_80(0, 4, 0);
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		aggregate.fm_deathmatch_controller.func_231(32768);
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate.net_camp.func_1244(64))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
			aggregate.fm_deathmatch_controller.func_1437(64);
		}
	}
	else if (aggregate.net_camp.func_1244(64))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
		aggregate.fm_deathmatch_controller.func_1437(64);
	}
}

void func_20(var uParam0)
{
	func_84();
	aggregate.binoculars.func_39(uParam0, 2);
	aggregate.binoculars.func_39(uParam0, 4);
}

int func_22(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar3 = 0;
	fVar4 = 1E+15f;
	fVar5 = fVar4;
	iVar6 = -1;
	iVar3 = 0;
	while (iVar3 <= 14)
	{
		fVar4 = BUILTIN::VDIST(vVar0, (Global_1070355->f_22101.f_366[iVar3 /*272*/])->f_2);
		if (fVar4 < fVar5)
		{
			fVar5 = fVar4;
			iVar6 = iVar3;
		}
		iVar3++;
	}
	return iVar6;
}

int func_24(int iParam0, bool bParam1)
{
	if (!aggregate.flow_controller.func_433(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1123778)[iParam0 /*27*/])->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1123778)[iParam0 /*27*/])->f_9);
}

int func_33(var uParam0, int iParam1)
{
	if (uParam0->f_18 != iParam1)
	{
		uParam0->f_18 = iParam1;
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_27 = MISC::_GET_SYSTEM_TIME();
}

bool func_43()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !aggregate.dynamic_craft_scenario.func_241(iVar1))
	{
		return false;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!aggregate.fm_deathmatch_controller.func_565(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		return false;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar1))
	{
		return false;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, iVar4) == iVar1)
		{
			iVar5 = 1;
		}
		iVar3++;
	}
	return iVar5;
}

bool func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !aggregate.dynamic_craft_scenario.func_241(iVar1))
	{
		return false;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_46()
{
	int iVar0;

	iVar0 = func_102(Global_1273882->f_8);
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::IS_PLAYER_DEAD(iParam0))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (TASK::_0x038B1F1674F0E242(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (aggregate.net_camp.func_952())
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_57(aggregate.aberdeenpigfarm.func_56(0)) == 7)
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_156())
	{
		return true;
	}
	if (aggregate.annesburg.func_180(255))
	{
		return true;
	}
	if (!func_106(0, 0, 0, 1, 0, 0, 0, 1, 1))
	{
		return true;
	}
	if (aggregate.dynamic_craft_scenario.func_28())
	{
		return true;
	}
	if (aggregate.binoculars.func_33())
	{
		return true;
	}
	if (func_109())
	{
		return true;
	}
	if (Global_1901929->f_637.f_33)
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!aggregate.bandana.func_30((Global_1903928->f_131[iVar1 /*95*/])->f_1, 0))
				{
				}
				else
				{
					aggregate.binoculars.func_18(68, 0);
					return true;
				}
				iVar1++;
			}
		}
	}
	return false;
}

void func_52(var uParam0, char* sParam1)
{
	if (uParam0->f_22 > 0f)
	{
		return;
	}
	aggregate.camera_item.func_73(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_22 = 20f;
}

void func_54()
{
	aggregate.net_arrowheads.func_79(0, 4);
	aggregate.fm_deathmatch_controller.func_300(32768);
}

int func_55(var uParam0, int iParam1)
{
	Global_1070355->f_22101.f_3 = iParam1;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070355->f_22101.f_5.f_3, MISC::_CREATE_VAR_STRING(2, func_119(iParam1)));
	func_120(uParam0);
	return 1;
}

void func_58(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1833066477))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1833066477, &Var0))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "locationArrayIndex");
			switch (Var0)
			{
				case -1203660660:
					switch (Var0.f_2)
					{
						case -997855324:
							aggregate.aberdeenpigfarm.func_68(uParam0, 2);
							break;
						case 42753526:
							aggregate.aberdeenpigfarm.func_68(uParam0, 4);
							*uParam1 = iVar4;
							break;
					}
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case 42753526:
							aggregate.aberdeenpigfarm.func_68(uParam0, 8);
							*uParam1 = iVar4;
							break;
					}
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_121(uParam0, 1);
							break;
					}
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_121(uParam0, 0);
							break;
					}
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1833066477);
		}
	}
}

bool func_59(var uParam0)
{
	int iVar0;

	if (uParam0->f_20 < 14)
	{
		iVar0 = ((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/])->f_17;
	}
	else if (uParam0->f_20 == 14)
	{
		if (uParam0->f_5)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_20 == 15)
	{
		iVar0 = func_122(uParam0);
	}
	return func_64(iVar0, uParam0);
}

char* func_62(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	switch (iVar0)
	{
		case -2040555425: /* GXTEntry: "Blackwater" */
			return "NFT_BLACKWATER_DESC";
		case 1048602539: /* GXTEntry: "Manzanita Post" */
			return "NFT_MANZANITA_DESC";
		case 1736907121: /* GXTEntry: "Strawberry" */
			return "NFT_STRAWBERRY_DESC";
		case -1067122960: /* GXTEntry: "Colter" */
			return "NFT_COLTER_DESC";
		case -1734290691: /* GXTEntry: "Wapiti" */
			return "NFT_WAPITI_DESC";
		case 792805517: /* GXTEntry: "Valentine" */
			return "NFT_VALENTINE_DESC";
		case -1805494951: /* GXTEntry: "Van Horn" */
			return "NFT_VAN_HORN_DESC";
		case -1934798422: /* GXTEntry: "Annesburg" */
			return "NFT_ANNESBERG_DESC";
		case -200062769: /* GXTEntry: "Emerald Station" */
			return "NFT_EMERALD_DESC";
		case 1426955875: /* GXTEntry: "Rhodes" */
			return "NFT_RHODES_DESC";
		case -423969023: /* GXTEntry: "Lagras" */
			return "NFT_LAGRAS_DESC";
		case 802776412: /* GXTEntry: "Tumbleweed" */
			return "NFT_TUMBLEWEED_DESC";
		case 1158633383: /* GXTEntry: "MacFarlane\'s Ranch" */
			return "NFT_MACFARLANES_DESC";
		case -1792739478: /* GXTEntry: "Armadillo" */
			return "NFT_ARMADILLO_DESC";
		case 1525531195: /* GXTEntry: "Saint Denis" */
			return "NFT_SAINT_DENIS_DESC";
	}
	return "";
}

bool func_64(int iParam0, var uParam1)
{
	if (uParam1->f_5 || (uParam1->f_7 != 0 && iParam0 == 0))
	{
		iParam0 = (iParam0 + uParam1->f_7);
	}
	switch (iParam0)
	{
		case 1:
			return -1224135119;
		case 2:
			return -1540978580;
		case 3:
			return -1837275878;
		case 4:
			return 307422403;
		case 5:
			return 5849296;
		case 6:
			return -316007822;
		case 7:
			return -605358092;
		case 8:
			return 455865965;
		case 9:
			return 158356214;
		case 10:
			return -1476715399;
		case 11:
			return -1297534507;
		case 12:
			return 1282532708;
		case 13:
			return 482346497;
		case 14:
			return 1858054659;
		case 15:
			return 1100140454;
		case 16:
			return 1100140454;
		default:
			break;
	}
	if (iParam0 <= 0)
	{
		return -1224135119;
	}
	return 1100140454;
}

int func_65(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		return 1;
	}
	if (aggregate.bandana.func_10(bParam1) != 1388422710)
	{
		return 2;
	}
	if (!aggregate.fme_animal_tagging.func_1569(bParam1, &uVar0))
	{
		iVar1 = aggregate.fme_animal_tagging.func_1403(bParam1, 59806960, 1, 0, 1, 0);
		if (iVar1 <= 0)
		{
			return 3;
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar1, 0))
		{
			return 4;
		}
	}
	if (iParam0 == 14)
	{
		if (!aggregate.gfh_campworks.func_172(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
		{
			return 5;
		}
	}
	if (iParam0 == 15)
	{
		iVar2 = aggregate.moonshine_drink_item.func_1();
		if (!aggregate.net_fast_travel_barker.func_74(iVar2, 1))
		{
			return 6;
		}
	}
	return 0;
}

int func_71(int iParam0, var uParam1)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	struct<10> Var8;
	int iVar22;

	iVar6 = SCRIPTS::GET_EVENT_AT_INDEX(1, iParam0);
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return 1;
	}
	Var8.f_9 = -1591664384;
	iVar22 = Var0.f_5;
	if (iVar6 != 1731288223)
	{
		return 1;
	}
	if (Var0 != uParam1->f_21)
	{
		return 1;
	}
	if (Var0.f_2 == 1)
	{
		return 2;
	}
	iVar7 = 0;
	while (iVar7 < Var0.f_4)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(Var0, iVar7, &Var8))
		{
			if (!aggregate.bandana.func_30(Var8.f_8, 0))
			{
			}
			else
			{
				if (iVar22 == joaat("use"))
				{
					return 3;
				}
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_73(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	bool bVar11;
	int iVar12;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (aggregate.net_camp.func_952())
	{
		if (bParam2)
		{
		}
		else
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 0:
			iVar10 = func_141(iParam1);
			if (iVar10 < 0)
			{
				return false;
			}
			aggregate.fme_king_of_the_castle.func_603();
			aggregate.net_fast_travel_barker.func_143();
			bVar11 = true;
			if (aggregate.net_fast_travel_barker.func_144(0) && aggregate.net_fast_travel_barker.func_144(0))
			{
				bVar11 = false;
			}
			if (bVar11)
			{
				if (func_146(iVar1))
				{
					func_147(0, 1, 1);
				}
				else if (func_148(iVar0))
				{
					func_147(0, 1, 1);
				}
				else if (func_149())
				{
					aggregate.fm_mission_controller.func_4244();
				}
				else if (aggregate.dynamic_craft_scenario.func_241(iVar1))
				{
					aggregate.fme_animal_tagging.func_444(1, 1);
				}
				else
				{
					iVar12 = PLAYER::_0xF49F14462F0AE27C(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar12, false, false)) < 15f)
						{
							aggregate.fm_mission_controller.func_3434(1, 1);
						}
					}
				}
			}
			if (func_153())
			{
				iVar2 = 954940763;
			}
			else
			{
				iVar2 = aggregate.aberdeenpigfarm.func_73(aggregate.annesburg.func_122(), 0);
			}
			aggregate.fishing_core.func_15(&(Global_1070355->f_22101.f_366[iVar10 /*272*/]));
			aggregate.dynamic_craft_scenario.func_385(0, 1017438712);
			TELEMETRY::_0x7CEF4AC79F7E7FAD(iVar2, aggregate.aberdeenpigfarm.func_73(aggregate.fm_mission_controller.func_726((Global_1070355->f_22101.f_366[iVar10 /*272*/])->f_2, 1), 0), (Global_1070355->f_22101.f_366[iVar10 /*272*/])->f_2);
			return true;
		case 1:
			if (!aggregate.mp_freemode_tutorial.func_124(iVar0, 0))
			{
				return false;
			}
			aggregate.fme_king_of_the_castle.func_603();
			aggregate.net_fast_travel_barker.func_143();
			if (func_146(iVar1))
			{
				func_147(0, 1, 1);
			}
			else if (func_148(iVar0))
			{
				func_147(0, 1, 1);
			}
			else if (func_149())
			{
				aggregate.fm_mission_controller.func_4244();
			}
			aggregate.fm_mission_controller.func_2352();
			aggregate.net_fast_travel_barker.func_161();
			aggregate.dynamic_craft_scenario.func_385(0, 1017438712);
			iVar2 = 954940763;
			TELEMETRY::_0x7CEF4AC79F7E7FAD(aggregate.aberdeenpigfarm.func_73(aggregate.annesburg.func_122(), 0), iVar2, aggregate.gfh_campworks.func_72(aggregate.dynamic_craft_scenario.func_191(PLAYER::PLAYER_ID())));
			return true;
		case 2:
			iVar3 = aggregate.moonshine_drink_item.func_1();
			if (!aggregate.net_fast_travel_barker.func_74(iVar3, 1))
			{
				return false;
			}
			iVar4 = aggregate.medium_update.func_397(iVar3, 1);
			iVar5 = 1;
			if (iVar3 == iVar0)
			{
				iVar5 = 0;
			}
			vVar6 = { aggregate.net_fast_travel_barker.func_163(iVar4, iVar5) };
			fVar9 = aggregate.net_fast_travel_barker.func_164(iVar4, iVar5);
			aggregate.fm_mission_controller.func_192(vVar6, fVar9, 2f, 25f, 1, 1, 1);
			aggregate.fm_mission_controller.func_2352();
			aggregate.dynamic_craft_scenario.func_385(0, 1017438712);
			iVar2 = -1840671857;
			TELEMETRY::_0x7CEF4AC79F7E7FAD(aggregate.aberdeenpigfarm.func_73(aggregate.annesburg.func_122(), 0), iVar2, vVar6);
			return true;
	}
	return true;
}

void func_80()
{
	int iVar0;

	if (aggregate.annesburg.func_237(35))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(iVar0, Global_1099293->f_564, false, false, true, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
		ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 417, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 394, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
}

void func_84()
{
	if (aggregate.net_fast_travel_barker.func_114(PLAYER::PLAYER_ID(), 1, 1))
	{
		aggregate.net_fast_travel_barker.func_115(0, 1);
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1833066477);
}

int func_102(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_175(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = func_175(PED::GET_MOUNT(iParam0));
		}
	}
	return iVar0;
}

bool func_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return false;
	}
	iVar0 = &Global_1273882->f_154[&Global_1273882];
	iVar1 = Global_1273882->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return false;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_35))
			{
				return false;
			}
			if (PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
			{
				return false;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099293->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915170->f_20136 || Global_1915170->f_21989.f_1)
		{
			return false;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
		{
			return false;
		}
	}
	if (aggregate.annesburg.func_76())
	{
		return false;
	}
	if (Global_15)
	{
		return false;
	}
	if (!bParam2 && (((Global_1939057->f_10 || Global_1939057->f_11) || Global_1939057->f_12) || Global_1939057->f_13))
	{
		return false;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1223462->f_9330 != -1)
		{
			return false;
		}
		if (((*Global_1121338)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1121338)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return false;
		}
		if (Global_1123331->f_293)
		{
			return false;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return false;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return false;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return false;
			}
			if (&Global_1048581)
			{
				return false;
			}
			if (&Global_1048585)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_109()
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

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case -2021996203:
			return "TITHE_AMBARINO";
		case -1898198457:
			return "TITHE_LEMOYNE";
		case 1316689641:
			return "TITHE_WEST_ELIZABETH";
		case 147265738:
			return "TITHE_NEW_HANOVER";
		case -793104390:
			return "TITHE_NEW_AUSTIN";
	}
	return "ALL";
}

void func_120(var uParam0)
{
	int iVar0;
	struct<19> Var1;
	bool bVar20;
	int iVar21;
	bool bVar22;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1070355->f_22101.f_5.f_5);
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = joaat("COLOR_WHITE");
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_184(&((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/])))
		{
			bVar20 = func_64(((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/])->f_17, uParam0);
			if (aggregate.fme_animal_tagging.func_1569(bVar20, &bVar22))
			{
				iVar21 = 0;
				Var1 = 1;
			}
			else if (aggregate.fme_animal_tagging.func_1570(bVar20, &bVar22))
			{
				iVar21 = aggregate.fme_animal_tagging.func_1403(bVar20, bVar22, 1, 0, 1, 0);
				Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
			}
			else
			{
				iVar21 = aggregate.fme_animal_tagging.func_1403(bVar20, 59806960, 1, 0, 1, 0);
				Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
			}
			Var1.f_16 = MISC::_CREATE_VAR_STRING(0, &((Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/]));
			Var1.f_1 = 1;
			Var1.f_2 = joaat("COLOR_WHITE");
			Var1.f_3 = 0;
			Var1.f_17 = iVar21;
			Var1.f_18 = iVar21;
			Var1.f_6 = 42753526;
			Var1.f_5 = 42753526;
			Var1.f_4 = 1833066477;
			func_185(Global_1070355->f_22101.f_5.f_7[iVar0 /*21*/], Var1, iVar0);
		}
		iVar0++;
	}
	func_186(uParam0);
	func_187(uParam0);
}

void func_121(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_188();
	iVar1 = aggregate.blackwater.func_292(bParam1, 1, -1);
	iVar2 = (func_190(iVar0, 1) + iVar1);
	if (iVar2 < 1)
	{
		iVar2 = 6;
	}
	else if (iVar2 > 6)
	{
		iVar2 = 1;
	}
	iVar0 = func_191(iVar2, 1);
	func_55(uParam0, iVar0);
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar1 = aggregate.moonshine_drink_item.func_1();
	if (!aggregate.net_fast_travel_barker.func_74(iVar1, 1))
	{
		iVar0 = 1;
		return iVar0;
	}
	iVar2 = aggregate.medium_update.func_397(iVar1, 1);
	vVar3 = { aggregate.net_fast_travel_barker.func_163(iVar2, 1) };
	fVar6 = aggregate.blackwater.func_175(vVar3, Global_36);
	uParam0->f_16 = BUILTIN::ROUND((fVar6 / 1000f));
	if (uParam0->f_16 == 0)
	{
		uParam0->f_16 = 1;
	}
	return (iVar0 + uParam0->f_16);
}

int func_141(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (&Global_1070355->f_22101.f_366[iVar0 /*272*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iParam0)
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		return false;
	}
	iVar2 = PLAYER::_0xB9050A97594C8832(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (iVar0 != iVar2)
	{
		return false;
	}
	return true;
}

void func_147(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		aggregate.annesburg.func_182(73);
		if (bParam2)
		{
			aggregate.annesburg.func_182(71);
		}
		Global_1099293->f_469 = iParam0;
	}
	else
	{
		aggregate.annesburg.func_182(73);
		aggregate.annesburg.func_182(71);
	}
}

bool func_148(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_370(iVar1, iVar0, 1, 1) > 25f)
	{
		return false;
	}
	return true;
}

bool func_149()
{
	int iVar0;

	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
	{
		return false;
	}
	return true;
}

bool func_153()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (aggregate.barcustomer_interaction.func_13(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_175(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fm_mission_controller.func_5973(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_184(var uParam0)
{
	int iVar0;

	iVar0 = func_188();
	if (iVar0 == -931758312)
	{
		return true;
	}
	return func_247(uParam0) == iVar0;
}

void func_185(var uParam0, struct<19> Param1, bool bParam20)
{
	func_248(uParam0, Param1, bParam20);
	Global_1070355->f_22101.f_5.f_302[bParam20] = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1070355->f_22101.f_5.f_7[bParam20 /*21*/]), "locationArrayIndex", bParam20);
}

void func_186(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	bool bVar21;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	if (uParam0->f_5)
	{
		if (aggregate.fme_animal_tagging.func_1569(func_64(0, uParam0), &bVar21))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (aggregate.fme_animal_tagging.func_1570(func_64(0, uParam0), &bVar21))
		{
			iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), bVar21, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = joaat("COLOR_WHITE");
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::_CREATE_VAR_STRING(0, &(Global_1070355->f_22101.f_366[uParam0->f_4 /*272*/]));
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = 1833066477;
		func_249(&(Global_1070355->f_22101.f_5.f_317), Var0, 14);
		return;
	}
	else if (!aggregate.gfh_campworks.func_172(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
	{
		bVar19 = false;
	}
	if (aggregate.fme_animal_tagging.func_1569(func_64(0, uParam0), &bVar21))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (aggregate.fme_animal_tagging.func_1570(func_64(0, uParam0), &bVar21))
	{
		iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), bVar21, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	else
	{
		iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = 1833066477;
	func_249(&(Global_1070355->f_22101.f_5.f_317), Var0, 14);
}

void func_187(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	int iVar23;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	iVar23 = aggregate.moonshine_drink_item.func_1();
	if (aggregate.net_fast_travel_barker.func_74(iVar23, 1))
	{
		iVar21 = func_122(uParam0);
		if (aggregate.fme_animal_tagging.func_1569(func_64(0, uParam0), &bVar22))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (aggregate.fme_animal_tagging.func_1570(func_64(0, uParam0), &bVar22))
		{
			iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(iVar21, uParam0), bVar22, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(iVar21, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = joaat("COLOR_WHITE");
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = 1833066477;
		func_250(&(Global_1070355->f_22101.f_5.f_339), Var0, 15);
		return;
	}
	else
	{
		bVar19 = false;
	}
	if (aggregate.fme_animal_tagging.func_1569(func_64(0, uParam0), &bVar22))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (aggregate.fme_animal_tagging.func_1570(func_64(0, uParam0), &bVar22))
	{
		iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), bVar22, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	else
	{
		iVar20 = aggregate.fme_animal_tagging.func_1403(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = 1833066477;
	func_250(&(Global_1070355->f_22101.f_5.f_339), Var0, 15);
}

var func_188()
{
	return Global_1070355->f_22101.f_3;
}

int func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2021996203:
			return 2;
		case -1898198457:
			return 3;
		case -931758312:
			return 1;
		case -793104390:
			return 6;
		case 0:
			return 0;
		case 147265738:
			return 5;
		case 1316689641:
			return 4;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -931758312;
		case 2:
			return -2021996203;
		case 3:
			return -1898198457;
		case 4:
			return 1316689641;
		case 5:
			return 147265738;
		case 6:
			return -793104390;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_225(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!bParam1)
	{
		aggregate.annesburg.func_182(7);
	}
	else
	{
		if (aggregate.annesburg.func_181(255) == 4)
		{
			return;
		}
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			if (&Global_1070355->f_22101.f_366[iVar1 /*272*/] == iParam0)
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 < 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
			iParam0 = &Global_1070355->f_22101.f_366[iVar0 /*272*/];
		}
		Global_1099293->f_582 = iParam0;
		aggregate.annesburg.func_185(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { (Global_1070355->f_22101.f_366[iVar0 /*272*/])->f_2 };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		aggregate.annesburg.func_186(&(Global_1099293->f_555));
		iVar2 = aggregate.fm_deathmatch_controller.func_1258(iParam0);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (aggregate.fm_deathmatch_controller.func_1259(iParam0, iVar3, &(Global_1099293->f_555.f_6), &(Global_1099293->f_555)))
		{
			Global_1099293->f_555.f_5 = 1;
		}
		aggregate.annesburg.func_182(7);
		aggregate.annesburg.func_182(0);
	}
}

int func_247(var uParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = Global_1070355->f_22101.f_366.f_4357;
	Var0.f_2 = 724817478;
	Var0.f_3 = uParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 355943382;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
		return uVar5;
	}
	return -931758312;
}

void func_248(var uParam0, struct<19> Param1, bool bParam20)
{
	char cVar0[64];

	StringCopy(&cVar0, "Fast_Travel_Location_", 64);
	StringIntConCat(&cVar0, bParam20, 64);
	Param1.f_7 = 1993479432; /* GXTEntry: "Travel" */
	func_296(uParam0, Global_1070355->f_22101.f_5.f_4, cVar0, Param1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1070355->f_22101.f_5.f_5, bParam20, "ft_dynamic_text_and_price", *uParam0);
}

void func_249(var uParam0, struct<19> Param1, bool bParam20)
{
	func_248(uParam0, Param1, bParam20);
	Global_1070355->f_22101.f_5.f_338 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1070355->f_22101.f_5.f_317, "locationArrayIndex", 14);
}

void func_250(var uParam0, struct<19> Param1, bool bParam20)
{
	func_248(uParam0, Param1, bParam20);
	Global_1070355->f_22101.f_5.f_360 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1070355->f_22101.f_5.f_339, "locationArrayIndex", 15);
}

void func_296(var uParam0, int iParam1, char[32] cParam2, struct<19> Param10)
{
	aggregate.fme_animal_tagging.func_1236(uParam0, iParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, aggregate.fme_animal_tagging.func_979(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, aggregate.fme_animal_tagging.func_979(50), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, aggregate.fme_animal_tagging.func_979(51), Param10.f_18);
}

