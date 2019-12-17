#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<41> Local_21 = { -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	func_233(uParam0);
	func_234();
	func_235();
	func_236();
	if (!Local_21.f_11)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar1 = ENTITY::_0x84CCF9A12942C83D(uParam0->f_1997, iVar0, 3, 1, 1463940690, 0);
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
				Local_21.f_7 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
				Local_21.f_10 = ENTITY::GET_ENTITY_HEADING(iVar3);
				Local_21.f_11 = 1;
				Local_21.f_34 = VOLUME::_0x0EB78C2B156635B1(-1612834106, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_21.f_7, Local_21.f_10, -0.75f, 0.25f, 1f), 0f, 0f, Local_21.f_10, 1f, 1f, 1f);
				VOLUME::_0xBE551C2CC421185D(Local_21.f_34, 1);
				VOLUME::_0x5B23DFF8E0948BB2(Local_21.f_34, 1);
				Jump @195; //curOff = 183
				iVar2++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
	if (FIRE::GET_CLOSEST_FIRE_POS(&vVar4, uParam0->f_2000))
	{
		if (VOLUME::_0xF256A75210C5C0EB(uParam0->f_1997, vVar4))
		{
			FIRE::_0xB7C7BDC375AEA9A4(VOLUME::_0xF70F00013A62F866(uParam0->f_1997), VOLUME::_0x18675BC914891122(uParam0->f_1997), VOLUME::_0x3E2A25B2416DD67E(uParam0->f_1997));
		}
	}
	func_237(uParam0, &(Local_21.f_21), &(Local_21.f_20), joaat("p_chair20x"));
	func_237(uParam0, &(Local_21.f_19), &(Local_21.f_18), joaat("p_phonograph01x"));
	func_237(uParam0, &(Local_21.f_23), &(Local_21.f_22), joaat("p_lantern09x"));
	func_237(uParam0, &(Local_21.f_25), &(Local_21.f_24), joaat("p_lantern05x"));
	func_237(uParam0, &(Local_21.f_27), &(Local_21.f_26), 1287159687);
}

void func_39(var uParam0)
{
	var uVar0;

	aggregate.scarletthorseshop.func_60(38, 268435456);
	aggregate.armadillo.func_115(uParam0->f_4, &uVar0, &(Local_21.f_10), &(Local_21.f_7));
	Local_21.f_11 = 0;
	func_339();
	aggregate.fm_mission_controller.func_3499(uParam0->f_1997, 1);
}

void func_41(var uParam0)
{
	func_341(uParam0, 1);
	func_341(uParam0, 2);
	func_341(uParam0, 12);
	aggregate.shop_bait.func_334(uParam0, 12, 63312);
	aggregate.shop_bait.func_334(uParam0, 2, 63377);
	aggregate.mp_intro.func_1329(uParam0, 63404);
	aggregate.mp_intro.func_1329(uParam0, 63788);
	aggregate.mp_intro.func_1329(uParam0, 63967);
	aggregate.mp_intro.func_1329(uParam0, 64205);
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 64976;
	uParam0->f_2421.f_29 = 1;
	uParam0->f_2421.f_30 = 65499;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 66142;
	uParam0->f_2421.f_37 = 1;
	uParam0->f_2421.f_38 = 66197;
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 66206;
	uParam0->f_2421.f_23 = 1;
	uParam0->f_2421.f_24 = 66383;
}

void func_122(var uParam0)
{
	aggregate.binoculars.func_16(uParam0);
	aggregate.shop_bait.func_215(&(uParam0->f_167), 0);
	aggregate.mp_intro.func_607();
	aggregate.shop_bait.func_225(&(uParam0->f_167.f_1778));
	aggregate.shop_bait.func_737(&(uParam0->f_167.f_1778), 1);
	aggregate.fme_wreckage.func_910(&(Local_21.f_40), 0);
}

void func_136(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_12))
	{
		PED::DELETE_PED(&(Local_21.f_12));
	}
	func_492();
	func_493();
	func_494();
	aggregate.net_assassination.func_103(uParam0->f_1997);
	aggregate.fme_wreckage.func_910(&(Local_21.f_40), 0);
}

void func_233(var uParam0)
{
	char* sVar0;

	switch (Local_21.f_2)
	{
		case 0:
			if (!aggregate.saloon_dining.func_261(5))
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_12))
			{
				PED::DELETE_PED(&(Local_21.f_12));
			}
			if (ANIMSCENE::_0x25557E324489393C(Local_21.f_3))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_21.f_3);
			}
			sVar0 = "script@mp@collector@MADAME_NAZAR@shop_actions";
			Local_21.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, func_638(), false, true);
			Local_21.f_12 = PED::CLONE_PED((Global_1051387->f_69[38 /*76*/])->f_20, 0f, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_21.f_12, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_21.f_12, true);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_21.f_12, false, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_21.f_12, false);
			aggregate.fme_animal_tagging.func_212(1);
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((Global_1051387->f_69[38 /*76*/])->f_20))
			{
				ENTITY::SET_ENTITY_VISIBLE((Global_1051387->f_69[38 /*76*/])->f_20, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_21.f_12, false);
				aggregate.saloon_dining.func_75(0, 1, 1, 0);
				NETWORK::_0xF3354D6CA46F419D(Global_35, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_21.f_12) || !ANIMSCENE::_0x25557E324489393C(Local_21.f_3))
			{
				aggregate.fme_animal_tagging.func_212(0);
			}
			if (!ANIMSCENE::_0x477122B8D05E7968(Local_21.f_3, 1, 0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_21.f_3);
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC(Local_21.f_3, 0))
			{
			}
			else if (Local_21.f_11)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_3, Local_21.f_7, 0f, 0f, Local_21.f_10, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_3, "collector", Local_21.f_12, 0);
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 2:
			break;
		case 3:
		case 4:
			if (ANIMSCENE::_0x25557E324489393C(Local_21.f_3) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_3, 0))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_21.f_12))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_21.f_12, true);
					ENTITY::SET_ENTITY_VISIBLE((Global_1051387->f_69[38 /*76*/])->f_20, false);
					NETWORK::_0xF3354D6CA46F419D(Global_35, 0);
					aggregate.saloon_dining.func_75(1, 0, 1, 0);
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_21.f_3, "s_idle_loop", 1) && aggregate.broom_scenario.func_29(&(Local_21.f_14)) > 0f)
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_21.f_3, Local_21.f_13);
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_21.f_3, Local_21.f_13))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_21.f_3, Local_21.f_13, true);
						func_641();
						aggregate.fme_animal_tagging.func_212(4);
					}
				}
			}
			if ((ANIMSCENE::_0xCDC5512A407CF08D(Local_21.f_3) || ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_3, 0)) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_3, 0))
			{
				aggregate.fme_animal_tagging.func_212(6);
			}
			break;
		case 5:
			if ((ANIMSCENE::_0xCDC5512A407CF08D(Local_21.f_3) || ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_3, 0)) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_3, 0))
			{
				aggregate.fme_animal_tagging.func_212(6);
			}
			break;
		case 6:
			if (ANIMSCENE::_0x25557E324489393C(Local_21.f_3))
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			else
			{
				aggregate.fme_animal_tagging.func_212(0);
			}
			break;
	}
}

void func_234()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 3;
	if (!aggregate.saloon_dining.func_261(5))
	{
		iVar0 = 2;
	}
	if (Local_21.f_39 < iVar0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_21.f_35[Local_21.f_39])))
		{
			STREAMING::REQUEST_MODEL(joaat("a_c_pigeon"), false);
			STREAMING::REQUEST_ANIM_DICT("script_mp@collector@PIGEON");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("a_c_pigeon")) && STREAMING::HAS_ANIM_DICT_LOADED("script_mp@collector@PIGEON")) && ENTITY::DOES_ENTITY_EXIST(Local_21.f_26))
			{
				Local_21.f_35[Local_21.f_39] = aggregate.butchercreek.func_91(joaat("a_c_pigeon"), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_21.f_26, true, false), ENTITY::GET_ENTITY_HEADING(Local_21.f_26), func_642(Local_21.f_39)), (func_643(Local_21.f_39) + ENTITY::GET_ENTITY_HEADING(Local_21.f_26)), 0, 1, 0, 1, 1, 1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_21.f_35[Local_21.f_39]), true);
				ENTITY::FREEZE_ENTITY_POSITION(&(Local_21.f_35[Local_21.f_39]), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_21.f_35[Local_21.f_39]), (Global_1051387->f_69[38 /*76*/])->f_22);
				TASK::TASK_PLAY_ANIM(&(Local_21.f_35[Local_21.f_39]), "script_mp@collector@PIGEON", func_645(Local_21.f_39), 1090519040 /* Float: 8f */, -8f, -1, 1, 0, 0, 0, 0, 0, 0);
				Local_21.f_39++;
			}
			return;
		}
	}
	else
	{
		bVar1 = (aggregate.doc_book.func_278(0) || ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT((Global_1051387->f_69[38 /*76*/])->f_20));
		if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(&(Local_21.f_35[0])) != bVar1)
		{
			iVar2 = 0;
			while (iVar2 < Local_21.f_39)
			{
				ENTITY::SET_ENTITY_VISIBLE(&(Local_21.f_35[iVar2]), bVar1);
				iVar2++;
			}
		}
	}
}

void func_235()
{
	switch (Local_21)
	{
		case -1:
			if ((!aggregate.blackwater.func_77(768) && aggregate.long_update.func_95(1)) && aggregate.binoculars.func_32(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
			{
				Local_21++;
				func_647(2);
				aggregate.fm_mission_controller.func_5443(Local_21);
				aggregate.fme_animal_tagging.func_684("TRAVELLING_SALESMAN_TUT_ITEMWHEEL", -1, 0, 0, 1);
			}
			break;
		case 0:
			if (aggregate.fm_race_controller.func_1959())
			{
				Local_21++;
				aggregate.fm_mission_controller.func_5443(Local_21);
				aggregate.fme_animal_tagging.func_684("TRAVELLING_SALESMAN_TUT_COLLECTORBAG", -1, 0, 0, 1);
			}
			else if (PAD::_0x6CD79468A1E595C6(0))
			{
				aggregate.fme_animal_tagging.func_684("TRAVELLING_SALESMAN_TUT_ITEMWHEEL", -1, 0, 0, 1);
			}
			break;
		case 1:
			if (UIAPPS::_IS_APP_RUNNING(-76766502))
			{
				func_651("TRAVELLING_SALESMAN_TUT_COLLECTORBAG", 1);
				func_652();
				aggregate.fm_mission_controller.func_788();
				Local_21++;
				func_654(768);
			}
			else if (PAD::_0x6CD79468A1E595C6(0))
			{
				aggregate.fme_animal_tagging.func_684("TRAVELLING_SALESMAN_TUT_COLLECTORBAG", -1, 0, 0, 1);
			}
			break;
	}
}

void func_236()
{
	struct<2> Var0;
	bool bVar2;

	func_655();
	Var0 = { aggregate.coffee_drinking.func_50(-504128452) };
	STATS::STAT_ID_GET_BOOL(&Var0, &bVar2);
	if ((bVar2 || !func_657()) || !aggregate.blackwater.func_77(768))
	{
		return;
	}
	switch (Local_21.f_1)
	{
		case 0:
			if (aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "TRAVELLING_SALESMAN_POST_COLLECTORBAG_TUT_1"), 10000, 0, 0, 0, 1) != 0)
			{
				Local_21.f_1++;
			}
			break;
		case 1:
			if (aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "TRAVELLING_SALESMAN_POST_COLLECTORBAG_TUT_2"), 10000, 0, 0, 0, 1) != 0)
			{
				Local_21.f_1++;
				STATS::STAT_ID_SET_BOOL(&Var0, true, true);
			}
			break;
	}
}

void func_237(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (*uParam1 == 0)
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = ENTITY::_0x84CCF9A12942C83D(uParam0->f_1997, iVar0, 3, 1, iParam3, 0);
			if (iVar1 > 0)
			{
				*uParam1 = ENTITY::_0xAAACB74442C1BED3(MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar0)));
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
		else if (ENTITY::_0x1FF441D7954F8709(*uParam1))
		{
			*uParam2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam1));
			ENTITY::FREEZE_ENTITY_POSITION(*uParam2, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*uParam2, false);
			ENTITY::SET_ENTITY_PROOFS(*uParam2, -1, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam2, true);
		}
	}
}

bool func_321(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate.annesburg.func_121(vParam3))
	{
		return false;
	}
	if (aggregate.annesburg.func_121(vParam6))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iParam11))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam9))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1748) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1748, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1748, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1748, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1749) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1749, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1749, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1749, 0);
	}
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate.shop_bait.func_724(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate.mp_intro.func_1946(aggregate.shop_bait.func_725(iParam2)))
	{
		if (!func_772(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_773(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 142702);
	aggregate.camera_item.func_77(&(uParam0->f_4), 142739);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 142767);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 143302);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate.interactive_campfire.func_44(uParam0, 1);
	return true;
}

void func_339()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_1424();
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -989642646, iVar0);
}

int func_341(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate.shop_bait.func_749(uParam0, iParam1, 144144, 144175, 144262, 145860);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate.mp_intro.func_2206(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate.shop_bait.func_749(uParam0, iParam1, 146158, 146210, 133857, 31186);
	}
	return 0;
}

int func_342(var uParam0)
{
	return func_802();
}

int func_344(var uParam0)
{
	if (!aggregate.binoculars.func_32(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return 0;
	}
	return 1;
}

void func_345(var uParam0, var uParam1, var uParam2)
{
	if (((aggregate.net_camp.func_1061(uParam0) == -118186281 || aggregate.net_camp.func_1061(uParam0) == -912308490) || aggregate.generic_shop_ui_events.func_11() == -348190488) || aggregate.generic_shop_ui_events.func_11() == -853534656)
	{
		if (!CAM::IS_CAM_ACTIVE(uParam0->f_167.f_1778.f_28))
		{
			aggregate.mp_intro.func_1425(uParam0);
			aggregate.shop_doctor.func_1747(&(uParam0->f_167));
			aggregate.shop_bait.func_543(&(uParam0->f_167.f_1778), 1);
		}
		else if (aggregate.mp_intro.func_1354(uParam0) == 716008279)
		{
			if ((Local_21.f_33 != 716008279 && Local_21.f_33 != 2060555271) && Local_21.f_33 != joaat("root"))
			{
				aggregate.mp_intro.func_1105();
				aggregate.binoculars.func_16(uParam0);
				if (Local_21.f_32 != -1)
				{
					aggregate.gfh_campworks.func_61(uParam0, Local_21.f_32);
				}
			}
			else if (aggregate.net_camp.func_1061(uParam0) == -118186281)
			{
				Local_21.f_32 = 6;
			}
			else if (aggregate.net_camp.func_1061(uParam0) == -912308490)
			{
				Local_21.f_32 = 7;
			}
			else
			{
				Local_21.f_32 = -1;
			}
		}
	}
	else if (aggregate.mp_intro.func_1354(uParam0) == 716008279 && aggregate.generic_shop_ui_events.func_11() != 0)
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_167.f_1778.f_28))
		{
			aggregate.mp_intro.func_607();
			aggregate.binoculars.func_16(uParam0);
			aggregate.shop_bait.func_543(&(uParam0->f_167.f_1778), 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_167.f_1778.f_28, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	Local_21.f_33 = aggregate.mp_intro.func_1354(uParam0);
}

int func_358(var uParam0)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
	{
		switch (uParam0->f_49)
		{
			case 0:
				uParam0->f_49++;
				switch (uParam0->f_1)
				{
					case 135:
						uParam0->f_44 = func_836(7);
						return 1;
					case 136:
						uParam0->f_44 = func_836(8);
						return 1;
					case 137:
						uParam0->f_44 = func_836(9);
						return 1;
					case 138:
						uParam0->f_44 = func_836(10);
						return 1;
					case 139:
						uParam0->f_44 = func_836(11);
						return 1;
					case 141:
						uParam0->f_44 = func_836(12);
						return 1;
					case 140:
						uParam0->f_44 = func_836(13);
						return 1;
					case 142:
						uParam0->f_44 = func_836(14);
						return 1;
					case 143:
						uParam0->f_44 = func_836(15);
						return 1;
					case 144:
						uParam0->f_44 = func_836(16);
						return 1;
					case 145:
						uParam0->f_44 = func_836(17);
						return 1;
					case 146:
						uParam0->f_44 = func_836(18);
						return 1;
					default:
						break;
				}
				break;
			case 1:
				uParam0->f_44 = func_836(19);
				uParam0->f_49++;
				return 1;
			case 2:
				uParam0->f_44 = func_836(20);
				uParam0->f_49++;
				return 1;
			case 3:
				uParam0->f_44 = func_836(25);
				uParam0->f_49++;
				return 1;
			case 4:
				uParam0->f_49++;
				if (func_837())
				{
					uParam0->f_44 = func_836(23);
					return 1;
				}
				break;
			case 5:
				uParam0->f_49++;
				if (func_838())
				{
					uParam0->f_44 = func_836(24);
					return 1;
				}
				break;
			case 6:
				uParam0->f_49++;
				if (func_839(uParam0->f_1))
				{
					uParam0->f_44 = func_836(22);
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_359(var uParam0)
{
	int iVar0;

	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		switch (uParam0->f_2)
		{
			case 1:
				if (uParam0->f_13 == -1733092640)
				{
					uParam0->f_44 = func_836(53);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, -1274632976))
				{
					uParam0->f_44 = func_836(54);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 474910316))
				{
					uParam0->f_44 = func_836(55);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 765268565))
				{
					uParam0->f_44 = func_836(56);
					return 1;
				}
				break;
			case 2:
				if (aggregate.bandana.func_30(uParam0->f_13, 0))
				{
					switch (uParam0->f_13)
					{
						case -1513842258: /* GXTEntry: "Condor Egg" */
							uParam0->f_44 = func_836(51);
							return 1;
						default:
							break;
					}
				}
				else
				{
					iVar0 = uParam0->f_13;
					if (aggregate.aberdeenpigfarm.func_165(iVar0))
					{
						switch (iVar0)
						{
							case -37008689: /* GXTEntry: "Antique Alcohol Bottles Collection" */
								uParam0->f_44 = func_841(43);
								return 1;
							case 495094031: /* GXTEntry: "Arrowheads Collection" */
								uParam0->f_44 = func_841(45);
								return 1;
							case 1260525497: /* GXTEntry: "Bird Eggs Collection" */
								uParam0->f_44 = func_841(44);
								return 1;
							case -1270627655: /* GXTEntry: "Coins Collection" */
								uParam0->f_44 = func_841(47);
								return 1;
							case -2003834656: /* GXTEntry: "American Wild Flowers Collection" */
								uParam0->f_44 = func_841(32);
								return 1;
							case 1974479951: /* GXTEntry: "Family Heirlooms Collection" */
								uParam0->f_44 = func_841(46);
								return 1;
							case -2069092432: /* GXTEntry: "Lost Jewelry Bracelets Collection" */
								uParam0->f_44 = func_841(41);
								return 1;
							case 1845797755: /* GXTEntry: "Lost Jewelry Earrings Collection" */
								uParam0->f_44 = func_841(40);
								return 1;
							case 232273114: /* GXTEntry: "Lost Jewelry Necklaces Collection" */
								uParam0->f_44 = func_841(42);
								return 1;
							case -94561216: /* GXTEntry: "Lost Jewelry Rings Collection" */
								uParam0->f_44 = func_841(39);
								return 1;
							case -1916716020: /* GXTEntry: "Cups Tarot Card Set" */
								uParam0->f_44 = func_841(33);
								return 1;
							case -39474347: /* GXTEntry: "Pentacles Tarot Card Set" */
								uParam0->f_44 = func_841(35);
								return 1;
							case 516381039: /* GXTEntry: "Swords Tarot Card Set" */
								uParam0->f_44 = func_841(36);
								return 1;
							case -1742904878: /* GXTEntry: "Wands Tarot Card Set" */
								uParam0->f_44 = func_841(34);
								return 1;
							default:
								break;
						}
					}
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 474910316) && aggregate.fme_escaped_convicts.func_724())
				{
					uParam0->f_44 = func_836(52);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, -283942357))
				{
					uParam0->f_44 = func_836(50);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 683680997))
				{
					uParam0->f_44 = func_836(49);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 1307628809))
				{
					uParam0->f_44 = func_836(48);
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_360(var uParam0)
{
	if (aggregate.fme_escaped_convicts.func_724())
	{
		uParam0->f_44 = func_836(57);
		return 1;
	}
	if (aggregate.shop_bait.func_1766(uParam0->f_1))
	{
		uParam0->f_44 = func_836(58);
		return 1;
	}
	return 0;
}

int func_362(var uParam0, int iParam1, var uParam2)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		if (iParam1 == 85134332)
		{
			uParam0->f_44 = func_836(28);
			return 1;
		}
		if (iParam1 == -1733092640)
		{
			uParam0->f_44 = func_836(27);
			return 1;
		}
		if (iParam1 == 1652431022)
		{
			uParam0->f_44 = func_836(29);
			return 1;
		}
		if (iParam1 == -862059856)
		{
			uParam0->f_44 = func_836(26);
			return 1;
		}
		if (aggregate.bandana.func_11(uParam0->f_13, -1274632976))
		{
			uParam0->f_44 = func_836(30);
			return 1;
		}
		if (aggregate.bandana.func_11(uParam0->f_13, -919117092))
		{
			uParam0->f_44 = func_836(21);
			return 1;
		}
	}
	return 0;
}

int func_363(var uParam0)
{
	var uVar0;

	if ((aggregate.bandana.func_23(&uVar0) && (uParam0->f_43 == 0 || uParam0->f_43 >= 3)) && MISC::GET_RANDOM_INT_IN_RANGE(0, 4) != 0)
	{
		uParam0->f_44 = func_836(6);
		return 1;
	}
	if (aggregate.fme_escaped_convicts.func_724())
	{
		if (aggregate.generic_document_inspection.func_420(12) >= 10)
		{
			uParam0->f_44 = func_836(1);
			return 1;
		}
		else if (aggregate.generic_document_inspection.func_420(12) >= 5)
		{
			uParam0->f_44 = func_836(0);
			return 1;
		}
	}
	if (aggregate.fme_escaped_convicts.func_724())
	{
		if (func_845(aggregate.flow_controller.func_219(255)))
		{
			uParam0->f_44 = func_836(3);
			return 1;
		}
		else
		{
			uParam0->f_44 = func_836(4);
			return 1;
		}
	}
	if (Global_1051387->f_4545.f_8)
	{
		Global_1051387->f_4545.f_8 = 0;
		uParam0->f_44 = func_836(2);
		return 1;
	}
	if (Global_1051387->f_4545.f_7)
	{
		Global_1051387->f_4545.f_7 = 0;
		uParam0->f_44 = func_836(5);
		return 1;
	}
	return 0;
}

int func_422(var uParam0)
{
	if (Local_21.f_2 == 2)
	{
		func_877(uParam0);
	}
	else if (ANIMSCENE::_0x25557E324489393C(Local_21.f_3) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_3, 0))
	{
		Local_21.f_33 = 0;
		uParam0->f_167.f_1757 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_21.f_7, Local_21.f_10, 1.705f, -5.63f, 0f) };
		uParam0->f_167.f_1760 = (Local_21.f_10 + 40f);
		uParam0->f_167.f_1761 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_21.f_7, Local_21.f_10, 0.713f, -3.894f, 0.9f) };
		uParam0->f_167.f_1764 = { 0f, 0f, (uParam0->f_167.f_1760 + 180f) };
		aggregate.shop_bait.func_794(&(uParam0->f_167.f_1778), uParam0->f_167.f_1757, uParam0->f_167.f_1760, 38);
		aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
		aggregate.fme_king_of_the_castle.func_989(&(Local_21.f_40), uParam0->f_167.f_1757, 2f, 1, 316, 0);
		return 1;
	}
	return 0;
}

void func_425(var uParam0)
{
	HUD::_0xC9CAEAEEC1256E54(1163138879);
	if (CAM::IS_CAM_ACTIVE(uParam0->f_167.f_1778.f_28))
	{
		aggregate.shop_bait.func_597(&(uParam0->f_167.f_1778));
		aggregate.mp_intro.func_1745(&(uParam0->f_167.f_1778.f_28));
	}
}

bool func_437(var uParam0)
{
	func_881();
	if (!aggregate.barcustomer_interaction.func_42(&(Local_21.f_4)))
	{
		aggregate.mp_intro.func_607();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		aggregate.barcustomer_interaction.func_25(&(Local_21.f_4), 0);
	}
	if (aggregate.barcustomer_interaction.func_54(&(Local_21.f_4)) > 2000 || Local_21.f_2 == 6)
	{
		func_883(uParam0);
		aggregate.barcustomer_interaction.func_50(&(Local_21.f_4));
		return true;
	}
	return false;
}

void func_492()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_1424();
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(2, -989642646, iVar0);
}

void func_493()
{
	while (Local_21.f_39 > 0)
	{
		Local_21.f_39 = (Local_21.f_39 - 1);
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_21.f_35[Local_21.f_39])))
		{
			PED::DELETE_PED(Local_21.f_35[Local_21.f_39]);
		}
	}
}

void func_494()
{
	switch (Local_21)
	{
		case 0:
			func_651("TRAVELLING_SALESMAN_TUT_ITEMWHEEL", 1);
			func_652();
			aggregate.fm_mission_controller.func_788();
			break;
		case 1:
			func_651("TRAVELLING_SALESMAN_TUT_COLLECTORBAG", 1);
			func_652();
			aggregate.fm_mission_controller.func_788();
			break;
	}
	Local_21 = -1;
}

char* func_638()
{
	if ((Global_1051387->f_69[38 /*76*/])->f_8 == 1253642035 || (Global_1051387->f_69[38 /*76*/])->f_8 == -1823109923)
	{
		return "pl_enter_right";
	}
	return "pl_enter_left";
}

void func_641()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			Local_21.f_13 = "pl_idle_variation_a";
			break;
		case 1:
			Local_21.f_13 = "pl_idle_variation_b";
			break;
		case 2:
			Local_21.f_13 = "pl_idle_variation_c";
			break;
		case 3:
			Local_21.f_13 = "pl_idle_variation_d";
			break;
	}
	aggregate.fme_challenges.func_1111(&(Local_21.f_14), -MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 55f), 1);
}

Vector3 func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.12f, 0.1f, 0.42f;
		case 1:
			return -0.12f, -0.1f, 0.08f;
		case 2:
			return 0f, 0f, 0.29f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 110f;
		case 1:
			return -50f;
		case 2:
			return 65f;
		default:
			break;
	}
	return 0f;
}

char* func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDLE_PERCH_01";
		case 1:
			return "IDLE_STANDING_01";
		case 2:
			return "IDLE_PERCH_02";
		default:
			break;
	}
	return "";
}

void func_647(int iParam0)
{
	int iVar0;
	char cVar1[32];
	bool bVar5;

	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1912837 != 0)
	{
		aggregate.fm_mission_controller.func_788();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1912837->f_3, true);
	Global_1912837 = iParam0;
	Global_1912837->f_1 = 0;
	bVar5 = false;
	while (bVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, bVar5, 32);
		iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1912837->f_2, &cVar1);
		Global_1912837->f_5[bVar5 /*3*/] = iVar0;
		(Global_1912837->f_5[bVar5 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "IsCurrent", false);
		(Global_1912837->f_5[bVar5 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Failed", false);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1912837->f_4, bVar5, "objective_breadcrumb", iVar0);
		bVar5++;
	}
}

void func_651(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (aggregate.aberdeenpigfarm.func_165(iVar2))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar2, 0);
	}
}

void func_652()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_654(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 <= -1 || iParam0 >= 906)
	{
		return;
	}
	aggregate.binoculars.func_43(iParam0, &uVar0, &uVar1);
	func_1073(&uVar0, &uVar1);
}

void func_655()
{
	bool bVar0;
	struct<2> Var1;

	if (!aggregate.saloon_dining.func_261(5))
	{
		return;
	}
	Var1 = { aggregate.coffee_drinking.func_50(1191928029) };
	STATS::STAT_ID_GET_BOOL(&Var1, &bVar0);
	if (bVar0 || !func_657())
	{
		return;
	}
	if (aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "TRAVELLING_SALESMAN_TUT_POST_INTRO_CUTSCENE"), 10000, 0, 0, 0, 1) != 0)
	{
		STATS::STAT_ID_SET_BOOL(&Var1, true, true);
	}
}

bool func_657()
{
	if (((aggregate.fme_dead_drop.func_811() || CAM::IS_SCREEN_FADED_OUT()) || aggregate.fme_animal_tagging.func_199()) || UIAPPS::_IS_APP_RUNNING(-76766502))
	{
		return false;
	}
	return true;
}

void func_742(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1127(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 205153);
			aggregate.mp_intro.func_1329(uParam0, 206048);
			aggregate.mp_intro.func_1329(uParam0, 206623);
			aggregate.mp_intro.func_1329(uParam0, 206892);
			aggregate.mp_intro.func_1329(uParam0, 207070);
			aggregate.camera_item.func_77(uParam0, uParam0->f_2371.f_10);
			aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate.mp_intro.func_1341(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

int func_755(var uParam0)
{
	if (!aggregate.saloon_dining.func_261(5))
	{
		return 0;
	}
	if (!Local_21.f_11)
	{
		return 0;
	}
	return 1;
}

bool func_772(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<173> Var0;
	int iVar189;

	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3 = -1;
	Var0.f_136.f_1.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_153 = -1;
	Var0.f_154 = -1;
	Var0.f_155 = 16;
	Var0.f_172 = 16;
	iVar189 = 0;
	iVar189 = 0;
	while (iVar189 < 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_436[iVar189 /*189*/], &Var0, 189);
		iVar189++;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam4;
	if (!aggregate.mp_intro.func_1707(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 228863;
	uParam0->f_1280 = 228872;
	uParam0->f_1281 = 228881;
	uParam0->f_1282 = 228881;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_773(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam3;
	if (!aggregate.mp_intro.func_1705(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 228863;
	uParam0->f_1280 = 228872;
	uParam0->f_1281 = 228881;
	uParam0->f_1282 = 228881;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

int func_802()
{
	if ((((((((((((((aggregate.satchel_ui_event_handler.func_174(56759509) || aggregate.satchel_ui_event_handler.func_174(2145533727)) || aggregate.satchel_ui_event_handler.func_174(1632674359)) || aggregate.satchel_ui_event_handler.func_174(332438661)) || aggregate.satchel_ui_event_handler.func_174(-1452445456)) || aggregate.satchel_ui_event_handler.func_174(-1874365462)) || aggregate.satchel_ui_event_handler.func_174(-1658668866)) || aggregate.satchel_ui_event_handler.func_174(1997097980)) || aggregate.satchel_ui_event_handler.func_174(90781239)) || aggregate.satchel_ui_event_handler.func_174(920487791)) || aggregate.satchel_ui_event_handler.func_174(-668555046)) || aggregate.satchel_ui_event_handler.func_174(-839148413)) || aggregate.satchel_ui_event_handler.func_174(10424351)) || aggregate.satchel_ui_event_handler.func_174(-623226361)) || aggregate.satchel_ui_event_handler.func_172(0))
	{
		return 1;
	}
	return 0;
}

char* func_836(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WELCOME_ESTABLISHED_COLLECTOR";
		case 1:
			return "WELCOME_FAMOUS_COLLECTOR";
		case 2:
			return "WELCOME_RECIEVED_MAIL";
		case 3:
			return "WELCOME_HIGH_HONOR";
		case 4:
			return "WELCOME_LOW_HONOR";
		case 5:
			return "WELCOME_FOUND_WAGON";
		case 6:
			return "GREET_PLAYER_MASK";
		case 7:
			return "COMMENT_LOCATION_RIO_BRAVO";
		case 8:
			return "COMMENT_LOCATION_CHOLLA_SPRINGS";
		case 9:
			return "COMMENT_LOCATION_HENNIGANS";
		case 10:
			return "COMMENT_LOCATION_TALL_TREES";
		case 11:
			return "COMMENT_LOCATION_BIG_VALLEY";
		case 12:
			return "COMMENT_LOCATION_HEARTLANDS_1";
		case 13:
			return "COMMENT_LOCATION_HEARTLANDS_2";
		case 14:
			return "COMMENT_LOCATION_GRIZZLIES";
		case 15:
			return "COMMENT_LOCATION_SCARLETT_MEADOWS";
		case 16:
			return "COMMENT_LOCATION_BLUEWATER";
		case 17:
			return "COMMENT_LOCATION_WINDOW_ROCK";
		case 18:
			return "COMMENT_LOCATION_BLACK_BALSAM";
		case 19:
			return "CHAT_SHOPPING_LIST";
		case 20:
			return "CHAT_SHOPPING_LIST_DELIVERIES";
		case 21:
			return "CHAT_TIME_LIMITED_ITEM";
		case 22:
			return "CHAT_SHOPKEEPER_NEW_STOCK";
		case 23:
			return "CHAT_LETTER_SENT";
		case 24:
			return "CHAT_LETTER_REMINDER";
		case 25:
			return "CHAT_EVENT_REMINDER";
		case 26:
			return "SALES_PITCH_METAL_DETECTOR";
		case 27:
			return "SALES_PITCH_COLLECTORS_BAG";
		case 28:
			return "SALES_PITCH_COLLECTORS_SHOVEL";
		case 29:
			return "SALES_PITCH_COLLECTORS_BINOCULARS";
		case 30:
			return "SALES_PITCH_COLLECTORS_MAP";
		case 31:
			return "BUY_COLLECTIBLE_GENERIC_SET";
		case 32:
			return "BUY_COLLECTIBLE_FLOWERS_SET";
		case 33:
			return "BUY_COLLECTIBLE_TAROT_CARD_CUPS_SET";
		case 34:
			return "BUY_COLLECTIBLE_TAROT_CARD_WANDS_SET";
		case 35:
			return "BUY_COLLECTIBLE_TAROT_CARD_PENTACLES_SET";
		case 36:
			return "BUY_COLLECTIBLE_TAROT_CARD_SWORDS_SET";
		case 37:
			return "BUY_COLLECTIBLE_TAROT_CARD_SET";
		case 38:
			return "BUY_COLLECTIBLE_JEWELLERY_SET";
		case 39:
			return "BUY_COLLECTIBLE_JEWELLERY_RINGS_SET";
		case 40:
			return "BUY_COLLECTIBLE_JEWELLERY_EARRINGS_SET";
		case 41:
			return "BUY_COLLECTIBLE_JEWELLERY_BRACELETS_SET";
		case 42:
			return "BUY_COLLECTIBLE_JEWELLERY_NECKLACES_SET";
		case 43:
			return "BUY_COLLECTIBLE_ANTIQUE_BOTTLE_SET";
		case 44:
			return "BUY_COLLECTIBLE_BIRD_EGG_SET";
		case 45:
			return "BUY_COLLECTIBLE_ARROW_HEAD_SET";
		case 46:
			return "BUY_COLLECTIBLE_HEIRLOOM_SET";
		case 47:
			return "BUY_COLLECTIBLE_COIN_SET";
		case 48:
			return "BUY_COLLECTIBLE_ONE_STAR";
		case 49:
			return "BUY_COLLECTIBLE_TWO_STAR";
		case 50:
			return "BUY_COLLECTIBLE_THREE_STAR";
		case 51:
			return "BUY_COLLECTIBLE_CONDOR_EGG";
		case 52:
			return "BUY_COLLECTIBLE_SINGULAR";
		case 53:
			return "SELL_COLLECTORS_BAG";
		case 54:
			return "SELL_COLLECTORS_MAP";
		case 55:
			return "SELL_COLLECTIBLE";
		case 56:
			return "SELL_ILLICIT_ITEM";
		case 58:
			return "FAREWELL_PLAYER_KEPT_COLLECTIBLES";
		default:
			break;
	}
	return "";
}

bool func_837()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = { aggregate.binoculars.func_85(0, 348853959, -1591664384, -1591664384, 0, 630028090, 0) };
	aggregate.binoculars.func_87(&Var2, aggregate.bandana.func_59(-1268909760, aggregate.bandana.func_57(1), 359221401, 1));
	if (aggregate.binoculars.func_88(&Var2, &iVar0, &iVar1, 1))
	{
		aggregate.binoculars.func_73(iVar0);
		if (iVar1 > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_838()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;

	Var3.f_9 = -1591664384;
	Var17 = { aggregate.binoculars.func_85(0, 1084182731, -1591664384, -1591664384, 0, 630028090, 0) };
	if (aggregate.binoculars.func_88(&Var17, &iVar0, &iVar1, 1))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (aggregate.binoculars.func_71(&Var3, bVar2, iVar0, iVar1))
			{
				if (aggregate.hub.func_87(Var3.f_4))
				{
					aggregate.binoculars.func_73(iVar0);
					return true;
				}
			}
			bVar2++;
		}
		aggregate.binoculars.func_73(iVar0);
	}
	return false;
}

bool func_839(int iParam0)
{
	struct<5> Var0;
	bool bVar15;

	Var0.f_4 = 5;
	func_1332(iParam0, &Var0);
	while (func_1333(&Var0, &bVar15))
	{
		if (aggregate.bandana.func_11(bVar15, -919117092))
		{
			return true;
		}
	}
	return false;
}

char* func_841(int iParam0)
{
	if (aggregate.fme_escaped_convicts.func_724())
	{
		switch (iParam0)
		{
			case 33:
			case 34:
			case 35:
			case 36:
				return func_836(37);
			case 39:
			case 40:
			case 41:
			case 42:
				return func_836(38);
			default:
				break;
		}
		return func_836(31);
	}
	return func_836(iParam0);
}

bool func_845(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 16)
	{
		return false;
	}
	return aggregate.aberdeenpigfarm.func_61(Global_1131373->f_11.f_3216.f_1091[iParam0 /*4*/], 1);
}

void func_877(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Local_21.f_3) && Local_21.f_2 == 2)
	{
		ANIMSCENE::START_ANIM_SCENE(Local_21.f_3);
		uParam0->f_2421.f_4 = Local_21.f_12;
		func_641();
		aggregate.fme_animal_tagging.func_212(3);
	}
}

void func_881()
{
	if ((ANIMSCENE::_0x25557E324489393C(Local_21.f_3) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_3, 0)) && (Local_21.f_2 == 3 || Local_21.f_2 == 4))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_21.f_3, func_1369());
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_21.f_3, func_1369()))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_21.f_3, func_1369(), true);
			aggregate.fme_animal_tagging.func_212(5);
		}
	}
}

void func_883(var uParam0)
{
	ANIMSCENE::RESET_ANIM_SCENE(Local_21.f_3, func_638());
	uParam0->f_2421.f_4 = (Global_1051387->f_69[38 /*76*/])->f_20;
	aggregate.fme_animal_tagging.func_212(6);
}

void func_1073(var uParam0, var uParam1)
{
	var uVar0;

	uVar0 = &Global_17173.f_2563[*uParam0];
	MISC::SET_BIT(&uVar0, *uParam1);
	Global_17173.f_2563[*uParam0] = uVar0;
}

bool func_1127(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate.mp_intro.func_1705(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
		{
			if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.net_camp.func_1328(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate.binoculars.func_15(&(uParam0->f_2094));
	uParam0->f_2094.f_73 = 0;
	uParam0->f_2094.f_75 = 0;
	uParam0->f_2094.f_76 = 0;
	uParam0->f_2094.f_68 = 0;
	uParam0->f_2094.f_48 = 0;
	uParam0->f_2094.f_121 = 0;
	uParam0->f_2094.f_122 = -1;
	uParam0->f_2094.f_123 = -1;
	uParam0->f_2094.f_81 = 0;
	uParam0->f_2094.f_83 = 0;
	uParam0->f_2094.f_118 = 0;
	aggregate.mp_intro.func_1710(uParam0);
	aggregate.mp_intro.func_1105();
	aggregate.binoculars.func_16(uParam0);
	aggregate.generic_shop_ui_events.func_27();
	aggregate.mp_intro.func_1713(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate.mp_intro.func_1714(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate.mp_intro.func_1715(uParam0, 6, joaat("IB_EXIT"));
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1717(uParam0, 6, 0);
	aggregate.mp_intro.func_1715(uParam0, 1, joaat("ib_select"));
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1717(uParam0, 1, 0);
	aggregate.mp_intro.func_1715(uParam0, 2, 1891107858);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	aggregate.mp_intro.func_1715(uParam0, 3, -405106071);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2094.f_133 = 0;
		uParam0->f_2094.f_135 = 0;
		uParam0->f_2094.f_131 = 0;
		uParam0->f_2094.f_137 = 0;
		uParam0->f_2094.f_143 = 0;
		uParam0->f_2094.f_139 = 0;
		uParam0->f_2094.f_145 = 0;
		uParam0->f_2094.f_147 = 0;
	}
	uParam0->f_2094.f_149 = 268262;
	uParam0->f_2094.f_150 = 269146;
	uParam0->f_2094.f_151 = 269942;
	uParam0->f_2094.f_152 = 270061;
	uParam0->f_2094.f_46 = 1;
	return true;
}

int func_1332(int iParam0, var uParam1)
{
	*uParam1 = 8;
	return func_1933(iParam0, uParam1);
}

bool func_1333(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	bool bVar6;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_1934(uParam0))
	{
		return false;
	}
	if (uParam0->f_3 >= uParam0->f_1 || uParam0->f_3 < 0)
	{
		return false;
	}
	if (uParam0->f_10 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		iVar0 = uParam0->f_3;
		while (iVar0 <= (uParam0->f_1 - 1))
		{
			Var1 = { *(Global_1915170->f_20144.f_1[iVar0 /*5*/]) };
			if (Var1 != 0)
			{
				*uParam1 = Var1;
				if (func_1935(uParam0, *uParam1))
				{
					uParam1->f_3 = Var1.f_1;
					uParam0->f_3 = iVar0 + 1;
					uParam0->f_2++;
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		bVar9 = aggregate.doc_book.func_344(uParam0->f_10);
		iVar0 = uParam0->f_3;
		while (iVar0 <= (uParam0->f_1 - 1))
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(bVar9, iVar0, &bVar6))
			{
			}
			else
			{
				iVar10 = aggregate.bandana.func_10(bVar6);
				if (iVar10 == -2014019346)
				{
				}
				else if (!func_1935(uParam0, bVar6))
				{
				}
				else
				{
					iVar11 = 0;
					if (!aggregate.shop_doctor.func_1009(uParam0->f_11, &bVar6, uParam1, &iVar11))
					{
					}
					else
					{
						uParam0->f_3 = iVar0 + 1;
						uParam0->f_2++;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1369()
{
	if ((Global_1051387->f_69[38 /*76*/])->f_8 == 1253642035 || (Global_1051387->f_69[38 /*76*/])->f_8 == -1823109923)
	{
		return "pl_exit_right";
	}
	return "pl_exit_left";
}

int func_1933(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
	}
	if (*uParam1 == 0)
	{
		return 0;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_180(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!aggregate.shop_bait.func_1170(iVar0))
	{
		return 0;
	}
	if (iParam0 == 119)
	{
		iVar1 = 200;
	}
	else
	{
		bVar2 = aggregate.doc_book.func_344(iVar0);
		if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(bVar2))
		{
			return 0;
		}
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(bVar2);
		if (iVar1 <= 0)
		{
			return 0;
		}
	}
	uParam1->f_10 = iVar0;
	uParam1->f_11 = iParam0;
	uParam1->f_3 = 0;
	uParam1->f_1 = iVar1;
	return 1;
}

bool func_1934(var uParam0)
{
	if (uParam0->f_1 <= 0)
	{
		return false;
	}
	if (uParam0->f_11 == -1)
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	switch (*uParam0)
	{
		case 0:
			return false;
		case 2:
			if (uParam0->f_13 == 0)
			{
				return false;
			}
			break;
		case 3:
			if (uParam0->f_14 == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1935(var uParam0, bool bParam1)
{
	int iVar0;

	switch (*uParam0)
	{
		case 1:
			return true;
		case 2:
			if (aggregate.bandana.func_10(bParam1) == uParam0->f_13)
			{
				return true;
			}
			break;
		case 3:
			if (aggregate.bandana.func_58(bParam1) == uParam0->f_14)
			{
				return true;
			}
			break;
		case 4:
			iVar0 = aggregate.bandana.func_58(bParam1);
			if (iVar0 != joaat("weapon") || iVar0 != joaat("clothing"))
			{
				return true;
			}
			break;
		case 7:
			if (aggregate.mp_intro.func_1411(bParam1))
			{
				return true;
			}
			break;
		case 5:
			if (aggregate.bandana.func_58(bParam1) == 2085633299)
			{
				return true;
			}
			break;
		case 6:
			if (aggregate.bandana.func_58(bParam1) == joaat("weapon"))
			{
				return true;
			}
			break;
		case 8:
			if (aggregate.bandana.func_58(bParam1) == joaat("clothing"))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_3103(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && bParam1 > 0)
	{
		bParam1 = false;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { aggregate.bandana.func_41(bParam0, 0, 1) };
		if (aggregate.bandana.func_62(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (aggregate.bandana.func_63(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { aggregate.bandana.func_59(bParam0, Var0, Var0.f_4, 0) };
				aggregate.doc_book.func_177(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (aggregate.doc_book.func_93(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
		{
			return false;
		}
		aggregate.doc_book.func_95(WEAPON::_0x5C2EA6C44F515F34(bParam0), bParam1, iParam6);
		aggregate.net_coach_holdup.func_1336(bParam0, bParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		return false;
	}
	if (bParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

