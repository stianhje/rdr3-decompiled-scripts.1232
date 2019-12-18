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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	struct<138> Local_26 = { 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 1036831949, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	struct<7> Local_169[15];
	struct<7> Local_275[4];
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	BUILTIN::_SET_THREAD_PRIORITY(0);
	aggregate_func_7907(16);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_2();
	while (!aggregate_func_7514(512))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
	while (!aggregate_func_7514(512))
	{
		BUILTIN::WAIT(0);
	}
	func_6();
	aggregate_func_7908(16);
	while (Global_1572887->f_9)
	{
		BUILTIN::WAIT(0);
	}
	while (!aggregate_func_7514(256))
	{
		BUILTIN::WAIT(0);
	}
	NETWORK::_0x7AC752103856FB20(true);
	aggregate_func_7908(2);
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_8();
		Global_1954458->f_1 = (1 + Global_1954458->f_1);
		Global_1954458->f_2 = (MISC::GET_FRAME_TIME() + Global_1954458->f_2);
		if ((&Global_1954458 - MISC::GET_GAME_TIMER()) > 500)
		{
			Global_1954458->f_3 = (1f / (Global_1954458->f_2 / BUILTIN::TO_FLOAT(Global_1954458->f_1)));
			Global_1954458->f_1 = 0;
			Global_1954458->f_2 = 0f;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Call_Loc((Local_169[iVar0 /*7*/])->f_1);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Call_Loc((Local_275[iVar1 /*7*/])->f_1);
			iVar1++;
		}
		BUILTIN::WAIT(0);
	}
	func_9();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_169[iVar0 /*7*/] = 982;
		(Local_169[iVar0 /*7*/])->f_1 = 990;
		(Local_169[iVar0 /*7*/])->f_2 = 982;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_275[iVar0 /*7*/] = 982;
		(Local_275[iVar0 /*7*/])->f_1 = 990;
		(Local_275[iVar0 /*7*/])->f_2 = 982;
		iVar0++;
	}
}

void func_4()
{
	func_14(1001, 1009, 982, 0, "PLAYER(S)");
	func_14(1082, 1218, 1457, 1, "DISTRICT");
	func_14(982, 1542, 982, 2, "UID LAUNCHER");
	func_14(1648, 1660, 982, 3, "EVENT MONITOR");
	func_14(1988, 2004, 982, 4, "LAW(S)");
	func_14(982, 2165, 982, 5, "SATCHEL");
	func_14(2756, 2768, 2964, 6, "PLAYER_MENU_");
	func_14(2972, 3059, 4532, 7, "HUD");
	func_14(4555, 4569, 4838, 8, "SKINNING");
	func_14(982, 4853, 982, 10, "FOCUS_VOLUME");
	func_14(982, 5119, 5203, 11, "MISSION HANDLER(S)");
	func_14(982, 990, 5241, 12, "UI CLEANUP");
	func_14(982, 5261, 982, 13, "WORLD STATE SHORT");
	func_14(982, 5320, 982, 14, "FLOW CONTROLLER");
}

void func_5()
{
	func_42(5440, 5508, 5913, 0, "NET_SHOPS");
	func_42(982, 5977, 982, 1, "UGCGLOBALLOADER");
	func_42(5989, 6244, 6252, 2, "AUTHORED SPAWNS");
	func_42(6273, 6290, 6690, 3, "ONSCREEN_KEYBOARD");
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Call_Loc(&Local_169[iVar0 /*7*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc(&Local_275[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_8()
{
	Global_19 = 0;
}

void func_9()
{
	func_50();
	NETWORK::_0x7AC752103856FB20(false);
	if (Global_1939168->f_2 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939168->f_2);
	}
}

void func_13()
{
	func_51();
	func_52();
	Global_1915117 = 0;
	func_53();
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_169[iParam3 /*7*/] = iParam0;
	(Local_169[iParam3 /*7*/])->f_1 = iParam1;
	(Local_169[iParam3 /*7*/])->f_2 = iParam2;
	StringCopy(&((Local_169[iParam3 /*7*/])->f_3), sParam4, 24);
}

void func_15()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(Global_1896610->f_38))
	{
		Global_1896610->f_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 279f, 400f, 91f, "siska Inner");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Global_1896610->f_39))
	{
		Global_1896610->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3267.312f, -619.652f, 80.27f, 0f, 0f, 24f, 300f, 421f, 91f, "siska Outer");
	}
}

void func_16()
{
	bool bVar0;
	int iVar1;

	if (aggregate_func_4248())
	{
		return;
	}
	aggregate_func_5517(8);
	func_56(Global_1896610->f_35);
	func_57(Global_1896610->f_35);
	func_58();
	Global_1896610->f_35++;
	if (Global_1896610->f_35 >= 17)
	{
		Global_1896610->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1896610->f_36 != -1)
	{
		if (Global_1896610->f_36 != aggregate_func_4371())
		{
			func_60(Global_1896610->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = aggregate_func_3311(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (aggregate_func_4371() != iVar1)
		{
			Global_1896610->f_37 = 1;
			if (func_60(iVar1))
			{
				return;
			}
		}
		if ((!Global_1896610->f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1896610->f_42, false)) && aggregate_func_4371() != -1)
		{
			func_60(aggregate_func_4371());
		}
		Global_1896610->f_37 = 0;
	}
}

void func_17()
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < 17)
	{
		StringCopy(&cVar1, func_62(iVar0), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&cVar1)) > 0)
		{
			SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&cVar1));
		}
		iVar0++;
	}
	func_63();
	Global_1896610->f_41 = -1;
}

void func_18()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = aggregate_func_4251();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	aggregate_func_8170();
	Var1 = { aggregate_func_4259(0) };
	if (aggregate_func_4521(Var1))
	{
		switch (aggregate_func_4263(aggregate_func_4259(0)))
		{
			case 2:
			case 7:
				if (func_69(12288))
				{
					aggregate_func_1092(0, 0, 0, 0);
				}
				return;
			default:
				break;
		}
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_72();
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		Global_1949739->f_8 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_73(iVar0);
			func_74(iVar0);
			func_75(iVar0);
			func_76(iVar0);
			func_77(iVar0);
			func_78(iVar0);
			func_79(iVar0);
			func_80(iVar0);
			func_81(iVar0);
			func_82(iVar0);
			iVar2 = SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0);
			switch (iVar2)
			{
				case -140551285:
					func_83(iVar0);
					break;
				case -2091944374:
				case -1511724297:
				case -1312424871:
				case -369170747:
					func_84(iVar0);
					break;
				case 1376140891:
					func_85(iVar0);
					break;
				case 1387172233:
					func_86(iVar0);
					func_87(iVar0);
					break;
				case 735942751:
					func_88(iVar0);
					break;
				case -1816722641:
					func_89(iVar0);
					break;
				case -1241852893:
					func_90(iVar0);
					break;
				case 867155253:
					func_91(iVar0);
					break;
				case -582361627:
					func_92(iVar0);
					break;
			}
			iVar0++;
		}
	}
	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(3);
	if (iVar1 > 0)
	{
		iVar3 = 0;
		while (iVar3 < SCRIPTS::GET_NUMBER_OF_EVENTS(3))
		{
			func_93(iVar3);
			iVar3++;
		}
	}
}

void func_22()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<7> Var3;
	int iVar10;
	int iVar12;
	int iVar13;

	bVar0 = aggregate_func_4946();
	bVar1 = aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1);
	bVar2 = aggregate_func_245(PLAYER::PLAYER_ID(), 0, 0, 1);
	if (!bVar0)
	{
		func_98(bVar1);
		func_99();
		Var3 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
		BOUNTY::_0x4EF23E04A0C8FF51(&Var3, &iVar10);
		iVar12 = iVar10;
		iVar13 = aggregate_func_4251();
		if (iVar13 == -1)
		{
			iVar12 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
		}
		else if (iVar13 == 0)
		{
			func_101();
		}
		if (aggregate_func_4704(aggregate_func_4314()))
		{
			if (!CAM::IS_SCREEN_FADED_OUT() && iVar12 > Global_1939168->f_11)
			{
				LAW::_0xC310239ACCCF5579();
			}
		}
	}
	func_104(bVar2, bVar0);
}

void func_23()
{
	bool bVar0;
	bool bVar1;

	func_105();
	func_106();
	func_107();
	if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38) && WEAPON::_0xC853230E76A152DF(Global_1939168->f_38))
	{
		if (Global_1939168->f_38 == 1652431022)
		{
			if (Global_1939221->f_13)
			{
				Global_1939221->f_13 = 0;
			}
			else if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 57, 1);
			}
		}
		if (!func_108())
		{
			if (!aggregate_func_3514("binoculars"))
			{
				func_110();
			}
		}
	}
	func_111();
	func_112();
	if (Global_1939168->f_38 == joaat("weapon_kit_camera"))
	{
		if (!func_113())
		{
			if (!aggregate_func_3514("camera_item"))
			{
				func_114();
			}
		}
	}
	if (Global_1939168->f_38 == joaat("weapon_melee_lantern_electric"))
	{
		if (aggregate_func_4251() == -1)
		{
			if (!func_115())
			{
				if (!aggregate_func_3514("electric_lantern"))
				{
					func_116();
				}
			}
		}
	}
	if (func_117())
	{
		if (!func_118())
		{
			if (!aggregate_func_3514("metal_detector"))
			{
				func_119();
			}
		}
	}
	bVar0 = false;
	if (aggregate_func_4251() == 0 && aggregate_func_1980(2048, 255))
	{
		bVar0 = true;
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (Global_1939168->f_38 == joaat("weapon_fishingrod"))
		{
			if (!aggregate_func_927(Global_35, 716706914))
			{
				if (func_122(bVar0))
				{
					func_123();
				}
			}
			if (!HUD::IS_PAUSE_MENU_ACTIVE() && aggregate_func_1685())
			{
				PAD::_0x2804658EB7D8A50B(1, -517219045);
			}
		}
		else if (aggregate_func_8210(1))
		{
			if (func_122(bVar0))
			{
				func_123();
			}
		}
	}
	if (!func_126())
	{
		Global_1939221->f_36 = 0;
		return;
	}
	bVar1 = &Global_1939221 == true;
	if (!bVar1)
	{
		if (aggregate_func_455(&(Global_1939057->f_83[2]), 1))
		{
			bVar1 = true;
		}
	}
	if (bVar1 && !Global_1939221->f_1)
	{
		if (aggregate_func_4263(aggregate_func_4259(0)) != 5)
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1939221->f_32, false))
			{
				SCRIPTS::REQUEST_SCRIPT("satchel");
				Global_1939221->f_1 = 1;
				Global_1939221 = 0;
			}
		}
		else if (&Global_1939221 == 1)
		{
			Global_1939221 = 0;
		}
	}
	else if (Global_1939221->f_1 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1939221->f_32, false))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED("satchel"))
		{
			if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
			{
				Global_1939221->f_32 = SCRIPTS::START_NEW_SCRIPT("satchel", 1024);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("satchel");
			}
		}
	}
}

void func_25()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	MISC::_0x0A487CC74A517FB5(1);
	func_129();
	func_130();
	if (!func_131())
	{
		aggregate_func_5048(0);
		Global_1896726->f_386 = 0;
		return;
	}
	bVar0 = func_133();
	bVar1 = aggregate_func_4625();
	bVar2 = (((Global_1896726->f_386 || bVar0) && Global_1896726->f_384) || Global_1896726->f_387);
	bVar3 = ((Global_1915170->f_20136 || Global_1915170->f_21989.f_1) || func_135());
	if (func_136(!bVar3, 1, 1, 0, 1, 1, 1, 1, 0))
	{
		_NAMESPACE79::_0x1C38C3577901AF1F();
	}
	if ((UIAPPS::_IS_APP_ACTIVE(1433015236) || bVar2) || bVar1)
	{
		if (bVar0)
		{
			func_137();
		}
		func_138();
	}
}

void func_27()
{
	Global_1939057->f_91 = aggregate_func_1361(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0) >= 1;
	Global_1939057->f_92 = aggregate_func_1361(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0) >= 1;
	func_140();
	func_141();
	aggregate_func_4238();
	func_143();
	func_144();
	func_145();
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	aggregate_func_4238();
}

void func_28()
{
	var uVar0;
	var uVar4;
	int iVar8;
	vector3 vVar9;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;

	aggregate_func_388();
	if (Global_26387)
	{
		HUD::_0xC9CAEAEEC1256E54(1023137905);
	}
	Global_1939057->f_25 = 0;
	if (Global_1939168->f_6)
	{
		if (aggregate_func_2875(Global_1939057->f_82))
		{
			aggregate_func_2878(&(Global_1939057->f_82), 1, 1);
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (aggregate_func_4251() == -1)
		{
			Global_1939057->f_91 = aggregate_func_1361(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0) >= 1;
			Global_1939057->f_92 = aggregate_func_1361(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0) >= 1;
		}
		else
		{
			WEAPON::_0xB7E52A058B07C7E2(Global_35, &uVar0, &uVar4);
			if ((aggregate_func_4349(&uVar0) && !Global_1939057->f_36) && Global_1939057->f_37)
			{
				aggregate_func_4322(870, 0);
				Global_1939057->f_36 = 1;
			}
			Global_1939057->f_91 = 0;
			Global_1939057->f_92 = 1;
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		func_152(0);
		func_153();
	}
	func_154();
	if (Global_1939057->f_19)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 103, true);
	}
	iVar8 = Global_1939057->f_40;
	Global_1939057->f_40 = HUD::_0x9C409BBC492CB5B1();
	if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(746131100) && UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(746131100, &vVar9))
	{
		if (vVar9.x == -1740156697)
		{
			func_155(&(Global_1939057->f_50.f_10));
			bVar13 = true;
		}
	}
	bVar14 = false;
	if ((Global_1939057->f_10 || Global_1939057->f_11) || Global_1939057->f_12)
	{
		bVar14 = true;
	}
	if (bVar14)
	{
		if (aggregate_func_2875(Global_1939057->f_82))
		{
			aggregate_func_2878(&(Global_1939057->f_82), 1, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		if (!Global_1939057->f_18)
		{
			Global_1939057->f_18 = 1;
			func_156();
		}
		if (!Global_1951131->f_926)
		{
			aggregate_func_4733(37, 0, 0, 0, 0);
			Global_1951131->f_926 = 1;
		}
	}
	else
	{
		if (Global_1951131->f_926)
		{
			aggregate_func_4733(38, 0, 0, 0, 0);
			Global_1951131->f_926 = 0;
		}
		if (Global_1939057->f_18)
		{
			Global_1939057->f_18 = 0;
		}
	}
	if (bVar14 || bVar13)
	{
		if (((((!Global_1939057->f_15 && TASK::_0x2D19BC4DF626CBE7(Global_35, false, 1615635273, 0)) && aggregate_func_1769(0, 32761984)) && !func_159(Global_35)) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && !aggregate_func_8171())
		{
			if (!Global_1939057->f_16 || bVar13)
			{
				func_161(1);
			}
		}
		else if (Global_1939057->f_16 || bVar13)
		{
			func_161(0);
		}
	}
	if (func_162())
	{
		return;
	}
	if (!Global_1939057->f_10 && (Global_1939057->f_11 || Global_1939057->f_12))
	{
		if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
		{
			Global_1939057->f_8 = 0;
		}
	}
	if (iVar8 != Global_1939057->f_40)
	{
		if (aggregate_func_2823(Global_1939057->f_40, 0))
		{
			if (aggregate_func_2830(Global_1939057->f_40) == 2085633299 && func_165(Global_1939057->f_40))
			{
				if (Global_1939057->f_12)
				{
				}
				else
				{
					aggregate_func_39(Global_1939057->f_40, 1, 0, 0, 1, 1, 0);
				}
			}
		}
	}
	func_167();
	aggregate_func_4238();
	func_169();
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(746131100))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(746131100, &vVar9))
		{
			switch (vVar9.x)
			{
				case -1740156697:
					switch (vVar9.z)
					{
						case 813560150:
							if (!Global_1939057->f_10)
							{
								func_170();
							}
							if (Global_1939057->f_15 || !aggregate_func_6547())
							{
								func_161(0);
							}
							Global_1939057->f_10 = 1;
							if (!Global_1939057->f_37)
							{
								aggregate_func_4322(869, 0);
								Global_1939057->f_37 = 1;
							}
							break;
						case -414255251:
							aggregate_func_7226();
							func_173(0);
							Global_1939057->f_11 = 1;
							break;
						case -1472057397:
							Global_1939057->f_12 = 1;
							break;
						case -1992626253:
							Global_1939057->f_13 = 1;
							break;
						default:
							break;
					}
					break;
				case -632467210:
					switch (vVar9.z)
					{
						case 813560150:
							Global_1939057->f_10 = 0;
							break;
						case -414255251:
							Global_1939057->f_11 = 0;
							break;
						case -1472057397:
							Global_1939057->f_12 = 0;
							break;
						case -1992626253:
							Global_1939057->f_13 = 0;
							break;
						default:
							break;
					}
					break;
				case -1203660660:
					switch (vVar9.z)
					{
						case -445375936:
							aggregate_func_7226();
							func_152(1);
							func_174();
							break;
						case -1472057397:
							func_175(vVar9.z, 0);
							break;
						case 545934563:
							Global_1939057->f_25 = 1;
							break;
						default:
							func_176(vVar9.z, 0);
							break;
					}
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(746131100);
		}
	else
	{
		}
	else
	{
		}
	}
	bVar15 = PLAYER::_0x51BEA356B1C60225(PLAYER::GET_PLAYER_INDEX(), 35);
	if (bVar15)
	{
		iVar16 = func_177();
		if (iVar16 != 0 && iVar16 != Global_1939057->f_65)
		{
			Global_1939057->f_65 = iVar16;
			if (ENTITY::DOES_ENTITY_EXIST(iVar16) && ENTITY::IS_ENTITY_A_PED(iVar16))
			{
				iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar16);
				func_178(iVar17, ENTITY::_0x964000D355219FC0(iVar17), 1, 0);
			}
		}
	}
	else if (Global_1939057->f_65 == 0)
	{
	}
	if (Global_1939057->f_23 && bVar15)
	{
		if (!aggregate_func_4287(&(Global_1939057->f_50)))
		{
			func_180(&(Global_1939057->f_50));
		}
		if (func_181(&(Global_1939057->f_50)))
		{
			if (func_182(&(Global_1939057->f_50)))
			{
				func_183(&(Global_1939057->f_50));
			}
		}
	}
	else if ((!bVar15 || !Global_1939057->f_23) && Global_1939057->f_6 != MISC::GET_GAME_TIMER())
	{
		if (aggregate_func_4287(&(Global_1939057->f_50)))
		{
			func_184(&(Global_1939057->f_50));
		}
		Global_1939057->f_23 = 0;
		PLAYER::_0xDC68829BB3F37023(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (Global_1939057->f_23)
	{
		HUD::_0xC9CAEAEEC1256E54(474191950);
	}
}

void func_29()
{
	if (HUD::BUSYSPINNER_IS_ON())
	{
		HUD::BUSYSPINNER_OFF();
	}
	func_185();
}

void func_31()
{
	switch (aggregate_func_4641(&Local_26))
	{
		case 0:
			if (Local_26.f_135)
			{
				func_188(&Local_26);
			}
			else if (Local_26.f_136 != -1 && aggregate_func_3733(&(Global_1915170->f_17805[Local_26.f_136 /*11*/])))
			{
				if ((MISC::GET_GAME_TIMER() - Local_26.f_137) > 40000)
				{
					aggregate_func_2579(aggregate_func_5278(Local_26.f_136), func_192(aggregate_func_4369(Local_26.f_136)), 580546400);
					aggregate_func_2579(aggregate_func_5278(Local_26.f_136), func_192(aggregate_func_4369(Local_26.f_136)), 847579139);
					Local_26.f_136 = -1;
				}
			}
			func_194(&Local_26);
			break;
		case 1:
			func_195(&Local_26);
			break;
		case 2:
			func_196(&Local_26);
			break;
		case 3:
			func_197(&Local_26);
			break;
		case 4:
			func_198(&Local_26);
			break;
		case 5:
			func_199(&Local_26);
			break;
		case 6:
			func_200(&Local_26, 0);
			break;
		case 7:
		default:
			break;
	}
	func_201(&Local_26);
}

void func_32()
{
	func_200(&Local_26, 1);
}

void func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_2667();
	iVar1 = 0;
	iVar2 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar2 = aggregate_func_3974(0, 0);
		if (aggregate_func_2668(iVar2, 1, 1))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
			if (!aggregate_func_8852(iVar2, 2, 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1.25f);
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 188, true);
			if (!aggregate_func_8852(iVar2, 4, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			}
			if (aggregate_func_8852(iVar2, 256, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			}
			if (aggregate_func_8852(iVar2, 2048, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
			}
			if (aggregate_func_8852(iVar2, 1024, 1) || aggregate_func_8852(iVar2, 512, 1))
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			}
		}
	}
}

void func_34()
{
	int iVar0;

	iVar0 = &Global_1878313 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1878313 = iVar0;
	if (((*Global_1835011)[&Global_1878313 /*72*/])->f_8 != 0 && !SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[&Global_1878313 /*72*/])->f_8))
	{
		((*Global_1835011)[&Global_1878313 /*72*/])->f_8 = 0;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 80)
	{
		((*Global_1835011)[iVar0 /*72*/])->f_8 = 0;
		iVar0++;
	}
}

void func_36()
{
	if (!REPLAY::_0x9EEB007317FA3B9C())
	{
		UIAPPS::_CLOSE_ALL_APPS();
	}
}

void func_37()
{
	if (aggregate_func_4248())
	{
		return;
	}
	if (TASK::_0x841475AC96E794D1(&Global_1915118))
	{
		TASK::_0x5A40040BB5AE3EA2(&Global_1915118);
	}
	Global_1915118 = 0;
	if (Global_1938569->f_290)
	{
		return;
	}
	func_206();
}

void func_38()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_20[4]), false))
	{
		return;
	}
	if ((aggregate_func_578(0, 0) || Global_1572887->f_9) || func_208())
	{
		return;
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
	{
		Global_20[4] = SCRIPTS::START_NEW_SCRIPT("flow_controller", 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	}
	else
	{
		SCRIPTS::REQUEST_SCRIPT("flow_controller");
	}
}

void func_39()
{
	aggregate_func_4895(0);
	aggregate_func_7891();
	func_211();
	(*Global_1051387)[Global_1051387->f_40] = 34;
	Global_1051387->f_40++;
	aggregate_func_6609(34, 32768);
	aggregate_func_6609(34, 16384);
}

void func_40()
{
	int iVar0;
	int iVar1;

	if ((Global_1572887->f_9 || aggregate_func_4297(4)) || aggregate_func_7729() != aggregate_func_7529())
	{
		return;
	}
	if (func_216())
	{
		aggregate_func_2484();
	}
	func_218();
	func_219();
	func_220();
	func_221();
	if (Global_1915170->f_17791 != -1)
	{
		if (Global_1915170->f_17791 != Global_1051387->f_3691)
		{
			func_222(Global_1915170->f_17791, aggregate_func_5278(Global_1915170->f_17791));
		}
		Global_1915170->f_17791 = -1;
	}
	func_222(Global_1051387->f_3691, aggregate_func_5278(Global_1051387->f_3691));
	func_223();
	func_224();
	func_225(&(Global_1915170->f_19844));
	if (!func_226(&iVar0))
	{
		return;
	}
	if (iVar0 <= -1 || iVar0 >= 39)
	{
		return;
	}
	if (iVar0 != 34)
	{
		func_228(aggregate_func_7252());
	}
	switch (iVar0)
	{
		case 34:
			func_229();
			break;
		case 30:
			func_230();
			break;
		case 36:
			func_231();
			break;
		case 32:
			func_232();
			break;
		default:
			if (&Global_1051387->f_69[iVar0 /*76*/] == -1)
			{
				return;
			}
			iVar1 = (Global_1051387->f_69[iVar0 /*76*/])->f_18;
			if (iVar1 <= -1 || iVar1 >= 176)
			{
				return;
			}
			if (!func_233(iVar0))
			{
				func_234(iVar0);
			}
			switch (&Global_1051387->f_69[iVar0 /*76*/])
			{
				case 0:
					func_235(iVar0, iVar1);
					break;
				case 2:
					func_236(iVar0, iVar1);
					break;
			}
			break;
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	Local_275[iParam3 /*7*/] = iParam0;
	(Local_275[iParam3 /*7*/])->f_1 = iParam1;
	(Local_275[iParam3 /*7*/])->f_2 = iParam2;
	StringCopy(&((Local_275[iParam3 /*7*/])->f_3), sParam4, 24);
}

void func_44()
{
	if (!aggregate_func_1649(1668953026, Global_1915119, 600, -1, 1, 1))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -780621134, "SPAWN_DATA/REGION(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 2126283924, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1661768221, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1500437351, "POINT_COLLECTION(type=%x)/SPAWN_POINT(%i):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1364851805, "SPAWN_DATA/REGION(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -1881300037, "SPAWN_DATA/REGION(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1711937246, "POINT_COLLECTION(%i):type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1538476019, "SPAWN_DATA/REGION(%i)/POINT_COLLECTION(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, 1608076257, "POINT_COLLECTION(%i)/SPAWN_POINT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -2021516177, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -1469979977, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&Global_1915119, -514416884, "POINT_COLLECTION(%i)/SPAWN_POINT(%i):heading");
	func_239(1);
}

void func_46()
{
	DATAFILE::_DATAFILE_UNLOAD(&Global_1915119);
	func_240(1);
}

void func_48()
{
	switch (func_243())
	{
		case 0:
			if (!func_244())
			{
				return;
			}
			aggregate_func_8074(1);
		case 1:
			Global_1958224->f_53 = 0;
			StringCopy(&(Global_1958224->f_56), "", 128);
			aggregate_func_8074(2);
		case 2:
			MISC::_0x5CB71EAA1429A358(Global_1958224->f_50);
			MISC::DISPLAY_ONSCREEN_KEYBOARD(&Global_1958224, &(Global_1958224->f_1), &(Global_1958224->f_17), &(Global_1958224->f_33), "", "", "", Global_1958224->f_49);
			aggregate_func_8074(3);
		case 3:
			switch (MISC::UPDATE_ONSCREEN_KEYBOARD())
			{
				case 1:
					if (MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
					{
						aggregate_func_8074(8);
						return;
					}
					else
					{
						aggregate_func_8074(4);
						return;
					}
					break;
				case 0:
					return;
				default:
					aggregate_func_8074(8);
					return;
			}
			break;
		case 4:
			switch (SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(Global_1958224->f_53))
			{
				case 3:
					if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), &(Global_1958224->f_53)))
					{
					}
					break;
				case 2:
					aggregate_func_4996(0);
					break;
				case 0:
					aggregate_func_8074(6);
					break;
				case 1:
				case 4:
					func_246(1);
					break;
				default:
					func_246(0);
					break;
			}
			break;
		case 5:
			func_247();
			break;
		case 6:
			func_248(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
			aggregate_func_8074(1);
			aggregate_func_8074(7);
		case 7:
			aggregate_func_8074(func_250());
			aggregate_func_8074(8);
			return;
		case 8:
			func_241();
			aggregate_func_8074(0);
			break;
	}
}

void func_50()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Call_Loc((Local_169[iVar0 /*7*/])->f_2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Call_Loc((Local_275[iVar0 /*7*/])->f_2);
		iVar0++;
	}
}

void func_51()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar19;
	struct<11> Var20;
	int iVar37;

	iVar0 = func_252();
	bVar1 = (!aggregate_func_4240(&Global_1939168, 8388608) || Global_1939168->f_11 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1939168->f_7 = (LAW::_0x69E181772886F48B(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1939168->f_9 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1939168->f_8 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1939168->f_10 = LAW::_0xF46108C50A22B029();
			Global_1939168->f_11 = LAW::_0xDD5FD601481F648B(iVar0);
			Global_1939168->f_20 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1939168->f_15 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1939168->f_12 = LAW::_0xAD401C63158ACBAA(iVar0);
			if (Global_1939168->f_12)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1939168->f_13 = Var2.f_10;
				Global_1939168->f_17 = Var2.f_11 == 6;
			}
			Global_1939168->f_14 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::_0x532C5FDDB986EE5C(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1939168->f_14)
						{
							Global_1939168->f_14 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_254();
		}
	}
	if (Global_1939168->f_34 != 0)
	{
		Global_1939168->f_35 = Global_1939168->f_34;
	}
	Global_1939168->f_16 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1939168->f_6 = ENTITY::IS_ENTITY_DEAD(Global_35);
	Global_1939168->f_52 = FIRE::_0xAB7993BA61A4674F(Global_35, 1);
	if (!Global_1939168->f_6)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1939168->f_38), false, 0, false);
		Global_1939168->f_34 = PED::GET_MOUNT(Global_35);
		if (Global_1572887->f_13 == -1 && Global_1939168 & 524288 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887->f_13 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1939168 & 131072 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
	}
	else
	{
		if (aggregate_func_4251() == -1 && CAM::_0x139EFB0A71DD9011())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1939168->f_38 = 0;
		Global_1939168->f_34 = 0;
	}
}

void func_52()
{
	if (!aggregate_func_4734(8))
	{
		return;
	}
	if (Global_1951131->f_918 > 0)
	{
		func_256(&(Global_1951131->f_835));
	}
	if (Global_1951131->f_916 > 0 && !aggregate_func_4734(16384))
	{
		func_257(&(Global_1951131->f_734));
	}
	else if (Global_1951131->f_917 > 0)
	{
		func_258(&(Global_1951131->f_633));
	}
	if (aggregate_func_4734(16384))
	{
		aggregate_func_4782(16384);
	}
	if ((((Global_1951131->f_917 <= 0 && Global_1951131->f_916 <= 0) && Global_1951131->f_918 <= 0) && !aggregate_func_4337(0)) && !Global_1954385->f_1)
	{
		if (aggregate_func_4734(512))
		{
			if (aggregate_func_4251() == -1)
			{
				aggregate_func_2895(0, 4);
			}
			else
			{
				aggregate_func_2853(0, 1280353230);
			}
			aggregate_func_4782(512);
			aggregate_func_4782(16);
		}
		if (aggregate_func_4734(16))
		{
			if (aggregate_func_4251() == -1)
			{
				aggregate_func_2895(0, 4);
			}
			else
			{
				aggregate_func_2853(0, -1343026476);
			}
			aggregate_func_4782(16);
		}
		aggregate_func_4782(8);
	}
}

void func_53()
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;

	if (Global_1938998->f_9 > 0f)
	{
		bVar0 = false;
		fVar1 = 0.01f;
		iVar2 = 30000;
		if (Global_1938998->f_14)
		{
			fVar1 = 0.004f;
			iVar2 = 30000;
		}
		if (Global_1938998->f_1 != -1 && Global_1938998->f_1 < &Global_1938998)
		{
			bVar0 = true;
			fVar1 = 0.25f;
		}
		if ((MISC::GET_GAME_TIMER() >= (Global_1938998->f_3 + iVar2) && !Global_1938998->f_10) || bVar0)
		{
			if ((((MISC::GET_GAME_TIMER() >= Global_1938998->f_4 || bVar0) && (Global_1938998->f_9 < 1f || bVar0)) && (Global_1938998->f_9 >= func_263() || Global_1938998->f_15.f_1 == 0f)) && !func_264())
			{
				Global_1938998->f_9 = (Global_1938998->f_9 - (fVar1 * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_9 < 0f)
				{
					Global_1938998->f_9 = 0f;
				}
			}
		}
		PED::_0x06D26A96CA1BCA75(Global_35, 10, Global_1938998->f_9, 0);
	}
	if (aggregate_func_4934())
	{
		if (&Global_1938998 >= 2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		PED::_0x406CCF555B04FAD3(Global_35, 1, Global_1938998->f_9);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false);
		if (iVar3 != joaat("weapon_unarmed") && iVar3 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 1, true);
		}
		if (Global_1938998->f_9 >= 1f)
		{
			Global_1938998->f_8 = (Global_1938998->f_8 + (1f * BUILTIN::TIMESTEP()));
		}
		else
		{
			Global_1938998->f_8 = 0f;
		}
		if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::_0x190F7DA1AC09A8EF())
		{
			if (Global_1938998->f_15.f_1 > 0f)
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					bVar4 = false;
					switch (Global_1938998->f_15.f_12)
					{
						case 2:
							if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (!CAM::_0xA24C1D341C6E0D53(1, 0, 1) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (CAM::_0xA24C1D341C6E0D53(1, 0, 1))
							{
								bVar4 = true;
							}
							break;
					}
					if (bVar4)
					{
						CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
					}
				}
				if (Global_1938998->f_15.f_9 != Global_1938998->f_15.f_1 || !CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					sVar5 = "";
					if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						sVar5 = "POV_AIM_DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 2;
					}
					else if (CAM::_0xA24C1D341C6E0D53(1, 0, 1))
					{
						sVar5 = "POV_DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 1;
					}
					else
					{
						sVar5 = "DRUNK_SHAKE";
						Global_1938998->f_15.f_12 = 0;
					}
					if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
					{
						CAM::SHAKE_GAMEPLAY_CAM(sVar5, func_266());
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(func_266());
					}
					Global_1938998->f_15.f_9 = Global_1938998->f_15.f_1;
				}
			}
			else if (CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
			}
		}
		if (Global_1938998->f_9 >= func_263())
		{
			fVar6 = ((0.2f * BUILTIN::POW(260f, ((Global_1938998->f_9 - func_263()) - 0.25f))) + 0.1f);
			if (&Global_1938998 >= 2)
			{
				fVar6 = (fVar6 + 0.15f);
			}
			if (fVar6 > 1f)
			{
				fVar6 = 1f;
			}
			else if (fVar6 < 0f)
			{
				fVar6 = 0f;
			}
		}
		else
		{
			fVar6 = 0f;
		}
		if (fVar6 > Global_1938998->f_15.f_1)
		{
			if (MISC::GET_GAME_TIMER() >= Global_1938998->f_3 + 1500)
			{
				Global_1938998->f_15.f_1 = (Global_1938998->f_15.f_1 + (0.18f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_1 > fVar6)
				{
					Global_1938998->f_15.f_1 = fVar6;
				}
			}
		}
		else if (fVar6 < Global_1938998->f_15.f_1)
		{
			Global_1938998->f_15.f_1 = (Global_1938998->f_15.f_1 - (0.18f * BUILTIN::TIMESTEP()));
			if (Global_1938998->f_15.f_1 < fVar6)
			{
				Global_1938998->f_15.f_1 = fVar6;
			}
		}
		bVar7 = GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01");
		if (((Global_1938998->f_15.f_1 > 0f && !bVar7) || (Global_1938998->f_15.f_1 <= 0f && bVar7)) || Global_1938998->f_15 != Global_1938998->f_15.f_1)
		{
			if (!bVar7)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");
			}
			GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_267());
			Global_1938998->f_15 = Global_1938998->f_15.f_1;
		}
		if (bVar7)
		{
			fVar8 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR"));
			if (fVar8 < 0f)
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar9 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD"));
			if (fVar9 < 0f)
			{
				fVar9 = (fVar9 * -1f);
			}
			if (fVar8 > fVar9)
			{
				fVar10 = fVar8;
			}
			else
			{
				fVar10 = fVar9;
			}
			fVar11 = fVar10;
			if (fVar11 > Global_1938998->f_15.f_8)
			{
				Global_1938998->f_15.f_8 = (Global_1938998->f_15.f_8 + (0.8f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_8 > fVar11)
				{
					Global_1938998->f_15.f_8 = fVar11;
				}
			}
			else if (fVar11 < Global_1938998->f_15.f_8)
			{
				Global_1938998->f_15.f_8 = (Global_1938998->f_15.f_8 - (0.8f * BUILTIN::TIMESTEP()));
				if (Global_1938998->f_15.f_8 < fVar11)
				{
					Global_1938998->f_15.f_8 = fVar11;
				}
			}
			GRAPHICS::_0xF972F0AB16DC5260("PlayerDrunk01", 1, Global_1938998->f_15.f_8);
		}
	}
	if (func_268())
	{
		func_269();
	}
}

void func_56(int iParam0)
{
	int iVar0;

	if (aggregate_func_4544(iParam0, 1) || aggregate_func_4544(iParam0, 2))
	{
		iVar0 = func_271(iParam0);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			if (aggregate_func_4544(iParam0, 1))
			{
				aggregate_func_3685(iVar0, 0);
				aggregate_func_1307(iVar0);
				func_274(iParam0, 1);
			}
			if (aggregate_func_4544(iParam0, 2))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				VOLUME::_0x43F867EF5C463A53(iVar0);
				func_274(iParam0, 2);
			}
		}
	}
}

void func_57(int iParam0)
{
	if (aggregate_func_4544(iParam0, 4))
	{
		func_275(iParam0);
		func_274(iParam0, 4);
	}
	if (aggregate_func_4544(iParam0, 8))
	{
		func_276(iParam0);
		func_274(iParam0, 8);
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (aggregate_func_7305() && aggregate_func_4790(68))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (aggregate_func_1520(iVar0, Global_1896610->f_39, 1, 0) && !aggregate_func_1520(iVar0, Global_1896610->f_38, 1, 0))
		{
			if (!Global_1896610->f_40)
			{
				if (PED::IS_PED_IN_ANY_BOAT(iVar0))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
					iVar2 = aggregate_func_4270(iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, false, false);
						VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(iVar1, true);
						VEHICLE::EXPLODE_VEHICLE(iVar1, false, false, 0);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
					}
				}
				if (PED::IS_PED_ON_MOUNT(iVar0))
				{
					iVar3 = PED::GET_MOUNT(iVar0);
					aggregate_func_1172(iVar3, 0, 0);
				}
				if (aggregate_func_7305() && aggregate_func_4790(82))
				{
					aggregate_func_375(PLAYER::PLAYER_PED_ID(), joaat("weapon_drowning"), 0, 0);
				}
				else
				{
					aggregate_func_2435(5, 0);
				}
				Global_1896610->f_40 = 1;
			}
		}
	}
	else if (Global_1896610->f_40)
	{
		PED::_0x8D9DB115FBA8E23D(iVar0);
		PED::_0xE4EF4382E22C780C(iVar0);
		Global_1896610->f_40 = 0;
	}
}

bool func_60(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_62(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) > 0)
	{
		if (aggregate_func_4251() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1896610->f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1896610->f_42, 523);
				return true;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_284(sVar0);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1896610->f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1896610->f_43), Global_1896610->f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1896610->f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return false;
		}
		Global_1896610->f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1896610->f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		if (aggregate_func_4336(iParam0) != aggregate_func_4336(aggregate_func_4371()) || aggregate_func_4672(iParam0))
		{
			func_287(aggregate_func_4371(), 0);
			iVar1 = aggregate_func_3339(Global_36, 1);
			if (!aggregate_func_4526(iVar1))
			{
				if (!aggregate_func_4240(&Global_1939168, 32768) && !aggregate_func_4506())
				{
					if (aggregate_func_1987(aggregate_func_4336(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						aggregate_func_183(-1, -1, -1, 0, aggregate_func_4336(iParam0), 0);
					}
					else if (aggregate_func_4672(iParam0))
					{
						aggregate_func_183(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_293(iParam0);
			}
			else
			{
				func_287(iParam0, 1);
			}
		}
		if (aggregate_func_4371() != -1)
		{
			func_294(aggregate_func_4371());
			func_275(aggregate_func_4371());
		}
		aggregate_func_9289(iParam0);
		PLAYER::_0x14E57F88BA0A07FC(func_296(iParam0));
		func_297(iParam0);
		func_298(iParam0);
		iVar2 = -1000;
		if (aggregate_func_4301(aggregate_func_4314()))
		{
			iVar2 = ((*Global_1887327)[aggregate_func_4314() /*36*/])->f_2;
		}
		if (iVar2 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar3 = aggregate_func_3339(Global_36, 1);
			if (aggregate_func_4662(iVar3, 1, 0) == 0)
			{
				aggregate_func_8686(aggregate_func_4664(iParam0, 1), aggregate_func_4336(iParam0));
			}
			aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
			func_276(iParam0);
		}
		if (8 == iParam0 != aggregate_func_1518(373691918))
		{
			func_305(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4251() != -1)
	{
		return;
	}
	iVar1 = 926;
	iVar2 = 946;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		aggregate_func_1999((iVar1 + iVar0), 0);
		iVar0++;
	}
}

bool func_69(int iParam0)
{
	return (Global_1939168 && (-1 - iParam0) & 81919) != 0;
}

void func_71()
{
	EVENT::_0x608AD36A644A97FE(joaat("p_register05x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("p_register06x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("p_register03x"), 1, 0);
	EVENT::_0x608AD36A644A97FE(joaat("player_zero"), 1, 0);
	EVENT::_0x608AD36A644A97FE(11966224, 1, 0);
	EVENT::_0x608AD36A644A97FE(-1038436471, 1, 0);
}

void func_72()
{
	bool bVar0;
	float fVar1;

	if (!aggregate_func_4492())
	{
		Global_1949739->f_7 = 0;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1949739->f_7))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_1949739->f_7, &bVar0, false, 3, false);
		if (aggregate_func_2841(bVar0))
		{
			if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
			{
				if (!aggregate_func_4301(Global_1893575->f_2) || Global_1893575->f_2 != 5)
				{
					fVar1 = WEAPON::_0xD56E5F336C675EFA(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1949739->f_7, 3)));
					WEAPON::REMOVE_WEAPON_FROM_PED(Global_1949739->f_7, bVar0, true, -142743235);
					bVar0 = WEAPON::_0xF8204EF17410BF43(-1101297303, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_1949739->f_7, bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0), true, false, 3, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		WEAPON::GET_CURRENT_PED_WEAPON(Global_1949739->f_7, &bVar0, false, 2, false);
		if (aggregate_func_2841(bVar0))
		{
			if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
			{
				if (!aggregate_func_4301(Global_1893575->f_2) || Global_1893575->f_2 != 5)
				{
					fVar1 = WEAPON::_0xD56E5F336C675EFA(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_1949739->f_7, 2)));
					WEAPON::REMOVE_WEAPON_FROM_PED(Global_1949739->f_7, bVar0, true, -142743235);
					bVar0 = WEAPON::_0xF8204EF17410BF43(-1101297303, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_1949739->f_7, bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0), true, false, 2, false, 0.5f, 1f, 752097756, false, fVar1, false);
				}
			}
		}
		Global_1949739->f_7 = 0;
	}
}

void func_73(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("event_damage"):
		case 402722103:
			func_323(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			if (aggregate_func_4251() == -1)
			{
				func_324(iParam0);
			}
			break;
		case -1682387274:
			break;
	}
}

void func_74(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1924269094:
			func_325(iParam0);
			break;
	}
}

void func_75(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("event_damage"):
		case 402722103:
			aggregate_func_4239(iParam0);
			break;
		case -1360035949:
		case 2145012826:
			aggregate_func_4239(iParam0);
			break;
	}
}

void func_76(int iParam0)
{
	if (aggregate_func_4251() != 0)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1327216456:
			func_328(iParam0);
			break;
		case -1651585854:
			func_329(iParam0);
			break;
		case -1985279805:
			func_330(iParam0);
			break;
		case 218595333:
			func_331(iParam0);
			break;
		case 1553659161:
			func_332(iParam0);
			break;
		case 1784289253:
			func_333(iParam0);
			break;
		case 1387172233:
			func_334(iParam0);
			break;
		case 1082572570:
			func_335(iParam0);
			func_336(iParam0);
			break;
		case -687266558:
			func_337(iParam0);
			func_338(iParam0);
			func_339(iParam0);
			break;
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<4> Var5;
	struct<10> Var10;
	var uVar20;
	int iVar22;
	int iVar23;

	iVar22 = SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0);
	iVar23 = 10;
	switch (iVar22)
	{
		case 1165534493:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &uVar20, 2))
			{
				return;
			}
			func_340(&uVar20);
			break;
		case -1286831256:
			if (aggregate_func_4734(128))
			{
				aggregate_func_4782(128);
				return;
			}
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var5, 5))
			{
				return;
			}
			if (aggregate_func_4734(262144) && !Var5.f_3)
			{
				return;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var5);
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2) != PLAYER::PLAYER_ID())
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Var5.f_2))
			{
				ENTITY::_0x18FF3110CF47115D(Var5.f_2, 10, false);
				bVar0 = PED::_0x7E02E4218D916B94(Var5.f_2, PED::_GET_METAPED_TYPE(iVar2), 1);
				if (bVar0 == 0)
				{
					ENTITY::_0xA48E4801DEBDF7E4(Var5.f_2, 0);
				}
				else if (!aggregate_func_2850(bVar0, 1))
				{
					ENTITY::_0xA48E4801DEBDF7E4(Var5.f_2, 0);
				}
			}
			if (func_342())
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				return;
			}
			Global_1951131->f_3250 = PED::_0x1F714E7A9DADFC42(iVar2);
			if (&Global_1951131->f_1657.f_1[iVar23 /*3*/] != &Global_1951131->f_81[iVar23 /*12*/])
			{
				aggregate_func_3040(&(Global_1951131->f_1657.f_1[iVar23 /*3*/]), 0);
			}
			if (aggregate_func_4734(32768))
			{
				aggregate_func_2938();
			}
			else
			{
				aggregate_func_1559(iVar2, &(Global_1951131->f_81[10 /*12*/]), 0, 1108822547, 1, 1, 0, 1, 0, 1, 1);
			}
			break;
		case -369170747:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var10, 10))
			{
				return;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var10));
			if (iVar1 != PLAYER::PLAYER_ID())
			{
			}
			else
			{
				aggregate_func_1962(aggregate_func_4354(1829295266), 1);
				if (&Global_1951131->f_1657.f_1[iVar23 /*3*/] != &Global_1951131->f_81[iVar23 /*12*/])
				{
					aggregate_func_3040(&(Global_1951131->f_1657.f_1[iVar23 /*3*/]), 0);
				}
				bVar0 = PED::_0x7E02E4218D916B94(Var10.f_1, PED::_GET_METAPED_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var10)), 1);
				bVar3 = bVar0;
				if (aggregate_func_2850(bVar3, 1))
				{
					if (aggregate_func_4734(32768))
					{
						aggregate_func_2938();
					}
					iVar4 = aggregate_func_2827(bVar3);
					if (iVar4 != -2061583405 && iVar4 != -525676072)
					{
						return;
					}
					if (iVar4 == -525676072)
					{
						PED::_0xC494C76A34266E82(Global_35, 0);
						if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, Global_35, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1) > 0)
						{
						}
					}
					func_349(bVar3);
					aggregate_func_1559(PLAYER::PLAYER_PED_ID(), bVar0, 0, aggregate_func_8803(bVar3), 1, 1, 0, 1, 0, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Global_1951131->f_3250))
					{
						ENTITY::_0x18FF3110CF47115D(Global_1951131->f_3250, 10, false);
					}
				}
				else
				{
					aggregate_func_4322(87, 0);
					aggregate_func_1559(PLAYER::PLAYER_PED_ID(), &(Global_1951131->f_81[10 /*12*/]), 0, 1108822547, 0, 1, 0, 0, 1, 0, 1);
					func_351(Var10.f_2, Var10.f_3, Var10.f_4, Var10.f_5, Var10.f_6, Var10.f_7, Var10.f_8, Var10.f_9);
				}
			}
	}
}

void func_78(int iParam0)
{
	struct<2> Var0;

	if (aggregate_func_4251() != -1)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 2030961287:
			if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
			{
				return;
			}
			if (Var0 == aggregate_func_4270(Global_35))
			{
				return;
			}
			if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("cs_bronte"))
			{
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 10, false);
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 2, false);
				return;
			}
			if (ENTITY::IS_ENTITY_A_PED(Var0) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)) == 1030835986)
			{
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 10, false);
				ENTITY::_0x18FF3110CF47115D(Var0.f_1, 2, false);
				return;
			}
			if (PED::_0x7E02E4218D916B94(Var0.f_1, 0, 0) != 0)
			{
				ENTITY::_0xA48E4801DEBDF7E4(Var0.f_1, 1);
			}
			break;
	}
}

void func_79(int iParam0)
{
	if (aggregate_func_4251() == 0)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -1863021589:
			func_352(iParam0);
			break;
		case -1231347001:
			func_353(iParam0);
			break;
	}
}

void func_80(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 1794914733:
			func_354(iParam0);
			break;
		case 353377915:
			func_355(iParam0);
			break;
		case 1208357138:
			func_356(iParam0, 0, 0);
			break;
		case 1081092949:
			func_357(iParam0);
			break;
		case 1505348054:
			func_358(iParam0);
			break;
	}
}

void func_81(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -178091376:
			func_359(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	struct<2> Var0;
	struct<7> Var2;
	char* sVar14;
	bool bVar15;
	var uVar16;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 2099179610)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (func_360(Var0.f_1))
	{
		return;
	}
	Var2.f_6 = 3;
	Var2 = Var0;
	Var2.f_1 = Var0.f_1;
	Var2.f_2 = Var0.f_1;
	sVar14 = func_361(Var0.f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
	{
		Var2.f_3 = sVar14;
	}
	if (aggregate_func_2823(Var0.f_1, 0))
	{
		bVar15 = aggregate_func_1502(Var0.f_1, 1);
		if (bVar15 != 0)
		{
			Var2.f_2 = bVar15;
		}
		else
		{
			uVar16 = Var0.f_1;
			if (aggregate_func_5552(&uVar16))
			{
				Var2.f_2 = uVar16;
			}
		}
		INVENTORY::_0xFD41D1D4350F6413(&Var2);
	}
	else
	{
		INVENTORY::_0xFD41D1D4350F6413(&Var2);
	}
}

void func_83(int iParam0)
{
	var uVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &uVar0, 6))
	{
		MISC::_COPY_MEMORY(Global_1949739, &uVar0, 6);
		Global_1949739->f_6 = MISC::GET_GAME_TIMER();
	}
}

void func_84(int iParam0)
{
	if (aggregate_func_4248())
	{
		return;
	}
	if (Global_1572887->f_9)
	{
		return;
	}
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case -2091944374:
			func_364(iParam0);
			break;
		case -1511724297:
			func_365(iParam0);
			break;
		case -369170747:
			func_366(iParam0);
			break;
	}
}

void func_85(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 3);
	if (aggregate_func_4251() == 0)
	{
	}
	if (iVar0 == Global_35)
	{
		Global_1184669 = 1;
	}
}

void func_86(int iParam0)
{
	struct<8> Var0;
	int iVar10;
	int iVar11;
	int iVar12;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 10);
	iVar10 = Var0;
	iVar11 = Var0.f_7;
	switch (iVar10)
	{
		case 30:
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_2))
			{
				if (!PLAYER::_0x354F689C4FFAAB37(Var0.f_3))
				{
					PLAYER::_0x7C32191D9FB2BDEA(Var0.f_3);
				}
				switch (iVar11)
				{
					case 0:
						break;
					case 1:
						if (aggregate_func_4251() == 0)
						{
						}
						else
						{
							iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(Var0.f_2));
							func_178(iVar12, ENTITY::_0x964000D355219FC0(iVar12), 1, 0);
							Jump @203; //curOff = 191
							Jump @203; //curOff = 194
						}
					}
					break;
				case 35:
					Global_1939057->f_23 = !Global_1939057->f_23;
					Global_1939057->f_6 = MISC::GET_GAME_TIMER();
					PLAYER::_0xDC68829BB3F37023(PLAYER::GET_PLAYER_INDEX(), Global_1939057->f_23);
					break;
				case 26:
					break;
				case 55:
					Global_1070355->f_26843.f_89 = 1;
					break;
				case 37:
				case 38:
				case 39:
				case 40:
					break;
				default:
					break;
			}
		}

void func_87(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_9 == -2106738342)
	{
		Global_1939168->f_49 = MISC::GET_GAME_TIMER();
		Global_1939168->f_50 = 1;
	}
}

void func_88(int iParam0)
{
	int iVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::IS_PED_HUMAN(iVar0)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			Global_1949739->f_7 = iVar0;
		}
	}
}

void func_89(int iParam0)
{
	int iVar0;

	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 2))
	{
		if (Global_35 == iVar0)
		{
			aggregate_func_1617(-1315007749, 0, 0);
		}
	}
}

void func_90(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 5))
	{
		return;
	}
	if (!func_368(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(vVar0.z)))
	{
		return;
	}
	Global_17096.f_17 = 0;
	Global_1268935->f_513.f_318 = aggregate_func_1522(vVar0.y);
	Global_1268935->f_513.f_317 = ENTITY::GET_ENTITY_MODEL(vVar0.y);
}

void func_91(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 4))
	{
		return;
	}
	if (!func_368(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(vVar0.y)))
	{
		return;
	}
	if (Global_1268935->f_513.f_318 != 0)
	{
		if (vVar0.z == 1)
		{
		}
		else if (!func_370(Global_1268935->f_513.f_318, 1))
		{
			aggregate_func_2513(PLAYER::_0x5CA6BBD4A7D8145E(PLAYER::PLAYER_ID()), 0, 1);
		}
		Global_17096.f_17 = 0;
		Global_1268935->f_513.f_318 = 0;
		Global_1268935->f_513.f_317 = 0;
	}
}

void func_92(int iParam0)
{
	if (!func_372(iParam0))
	{
	}
}

void func_93(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(3, iParam0))
	{
		case -1267317510:
			if (func_373())
			{
				func_374(iParam0);
			}
			SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(3, iParam0, 1);
			break;
		case -346212524:
			func_375(iParam0);
			SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(3, iParam0, 1);
			break;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 138)
	{
		if (aggregate_func_4301(iVar0))
		{
			if (aggregate_func_4330(iVar0))
			{
				aggregate_func_921(iVar0, 1, 350);
			}
			else
			{
				aggregate_func_921(iVar0, 0, 350);
			}
			if (aggregate_func_4704(iVar0))
			{
				aggregate_func_4694(iVar0, 1);
			}
			else
			{
				aggregate_func_4694(iVar0, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (aggregate_func_4326(iVar1))
		{
			if (aggregate_func_8611(iVar1, 0))
			{
				aggregate_func_4695(iVar1, 1);
			}
			else
			{
				aggregate_func_4695(iVar1, 0);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (aggregate_func_4324(iVar2))
		{
			if (aggregate_func_8610(iVar2, 1))
			{
				aggregate_func_4693(iVar2, 1);
			}
			else
			{
				aggregate_func_4693(iVar2, 0);
			}
			if (aggregate_func_4331(iVar2, 4))
			{
				aggregate_func_5467(iVar2, 1);
			}
			else
			{
				aggregate_func_5467(iVar2, 0);
			}
		}
		iVar2++;
	}
}

void func_98(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!bParam0)
	{
		if (func_390())
		{
			iVar0 = aggregate_func_4336(aggregate_func_4371());
			if (aggregate_func_4324(iVar0) && func_391(iVar0))
			{
				func_392(iVar0);
				aggregate_func_765(iVar0, aggregate_func_1987(iVar0));
				func_394(iVar0, 0);
			}
		}
	}
	else
	{
		if (aggregate_func_4251() == -1)
		{
			iVar1 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
		}
		else
		{
			Var2 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
			BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar9);
			iVar1 = iVar9;
		}
		aggregate_func_765(func_395(), iVar1);
	}
}

void func_99()
{
	if (aggregate_func_4251() == -1)
	{
		if (aggregate_func_245(PLAYER::PLAYER_ID(), 1, 1, 1))
		{
			if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				if (!aggregate_func_4704(aggregate_func_4314()))
				{
					aggregate_func_4694(aggregate_func_4314(), 1);
				}
			}
		}
		else if (aggregate_func_4704(aggregate_func_4314()))
		{
			if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0 || aggregate_func_631(func_396(aggregate_func_4314())) >= 4320)
			{
				aggregate_func_4694(aggregate_func_4314(), 0);
			}
		}
	}
}

void func_101()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1273874->f_2.f_1 == 1)
		{
			NETWORK::_0x236905C700FDB54D();
			if (func_398("net_jail", 1024, &(Global_1273874->f_2)))
			{
				Global_1273874->f_2.f_1 = 2;
			}
		}
	}
}

void func_104(bool bParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	struct<17> Var6;
	int iVar23;
	var uVar24;
	float fVar41;
	int iVar42;
	int iVar43;

	iVar0 = aggregate_func_6596();
	bVar1 = false;
	bVar2 = Global_1939168->f_7;
	bVar3 = true;
	bVar4 = false;
	if ((iVar0 == 5 || bParam1) || CAM::_0x139EFB0A71DD9011())
	{
		if (Global_1938075->f_75.f_59 != 0)
		{
			func_401(0);
		}
	}
	else if ((!bVar2 && !bParam0) && Global_1938075->f_75.f_62 == -1)
	{
		if (Global_1938075->f_75.f_59 != 0)
		{
			if (Global_1938075->f_75.f_59 != 9)
			{
				func_401(0);
			}
		}
	}
	else if (bParam0)
	{
		bVar1 = func_402(PLAYER::PLAYER_ID());
	}
	if (Global_1938075->f_75.f_62 != -1)
	{
		if (Global_1938075->f_75.f_59 != Global_1938075->f_75.f_62)
		{
			func_401(Global_1938075->f_75.f_62);
		}
	}
	switch (Global_1938075->f_75.f_59)
	{
		case 0:
			if (iVar0 != 5)
			{
				if (func_403(PLAYER::PLAYER_ID(), 0, 0, 1))
				{
					func_404(bVar1);
					return;
				}
				else if (bVar2)
				{
					if (func_401(1))
					{
						return;
					}
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_406();
					func_407(-1);
					AUDIO::_0x3E98AC9D8C56C62C(0);
					if (aggregate_func_5980(4))
					{
						aggregate_func_4643(0);
					}
					func_410(2);
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_2, "LAW_UI_WITNESS");
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, true);
					func_411();
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Witness", "HUD_Wanted_Sounds", true, 0);
					}
					if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
					{
						Global_1938075->f_6 = LAW::_GET_HUD_PLAYER_CRIME_TYPE(PLAYER::PLAYER_ID());
						sVar5 = func_413(Global_1938075->f_6);
						if (Global_1938075->f_6 == -1361146315)
						{
							if (!aggregate_func_3014(299))
							{
								if (!aggregate_func_6957() && !aggregate_func_2056())
								{
									aggregate_func_4322(299, 0);
								}
							}
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, true);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_5, sVar5);
						func_410(2);
					}
					else
					{
						if ((!aggregate_func_6957() && !aggregate_func_3014(288)) && !aggregate_func_2056())
						{
							aggregate_func_4322(288, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, false);
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_3, false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_4, "LAW_UI_INVESTIGATING");
						func_410(1);
					}
					break;
				case 1:
					if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()) || bParam0)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_12, true);
						func_410(2);
					}
					break;
				case 2:
					iVar23 = LAW::_GET_HUD_PLAYER_CRIME_TYPE(PLAYER::PLAYER_ID());
					if (LAW::_0xDAEFDFDB2AEECE37(iVar23, 0) >= LAW::_0xDAEFDFDB2AEECE37(Global_1938075->f_6, 0))
					{
						Global_1938075->f_6 = iVar23;
					}
					sVar5 = func_413(Global_1938075->f_6);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_1.f_5, sVar5);
					if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_1.f_3) != 1)
					{
						if ((!aggregate_func_6957() && !aggregate_func_3014(290)) && !aggregate_func_2056())
						{
							aggregate_func_4322(290, 0);
						}
						func_411();
					}
					else if ((!aggregate_func_6957() && !aggregate_func_3014(289)) && !aggregate_func_2056())
					{
						aggregate_func_4322(289, 0);
					}
					func_417();
					if (bParam0 && Global_1939168->f_9 != 1370593166)
					{
						func_404(bVar1);
						return;
					}
					break;
			}
			break;
		case 2:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_411();
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_CRIME_REPORTED");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					if (Global_1939168->f_12)
					{
						LAW::_0x9C5BD8C562565CE6(&Var6);
						if (Var6.f_16)
						{
							func_419();
							func_411();
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
						}
						else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
					}
					func_417();
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (Global_1939168->f_12)
					{
						LAW::_0x9C5BD8C562565CE6(&Var6);
					}
					if (((aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 4000 && LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID())) || Var6.f_12 == 5) || Var6.f_12 == 3)
					{
						if (aggregate_func_8612())
						{
							AUDIO::_0x3E98AC9D8C56C62C(1);
						}
						if (func_401(3))
						{
							return;
						}
					}
					break;
			}
			break;
		case 3:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			else
			{
				if (!aggregate_func_8612() || !Global_1939168->f_12)
				{
					if (func_401(8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
						return;
					}
				}
				if (func_422())
				{
					if (func_401(4))
					{
						return;
					}
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 2000)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, true);
						if (Global_1939168->f_12)
						{
							LAW::_0x9C5BD8C562565CE6(&Var6);
						}
						if (Var6.f_16)
						{
							if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, false);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, true);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_5, func_423());
						}
						else
						{
							if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
								DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, false);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_5, "LAW_UI_UNKNOWN_SUSPECT");
						}
						aggregate_func_4480(&(Global_1938075->f_75.f_56));
						func_410(2);
					}
					break;
				case 2:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 2000)
					{
						aggregate_func_4480(&(Global_1938075->f_75.f_56));
						if (Global_1939168->f_12)
						{
							LAW::_0x9C5BD8C562565CE6(&Var6);
						}
						if (Var6.f_12 == 3)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_MOVE_ALONG");
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INVESTIGATING");
						}
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
						func_410(1);
					}
					break;
			}
			break;
		case 4:
			bVar4 = true;
			if (func_418())
			{
				if (func_401(5))
				{
					return;
				}
			}
			else if (!func_422())
			{
				if (func_401(3))
				{
					return;
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, true);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_19.f_4, "LAW_UI_INTERROGATING");
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_12, false);
					if ((!aggregate_func_6957() && !aggregate_func_3014(300)) && !aggregate_func_2056())
					{
						aggregate_func_4322(300, 0);
					}
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 2000)
					{
						aggregate_func_4480(&(Global_1938075->f_75.f_56));
					}
					break;
				case 2:
					break;
			}
			break;
		case 5:
			func_407(aggregate_func_6596());
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					func_411();
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, false);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, "");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, func_423());
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, false);
					if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Wanted_Spotted", "HUD_Wanted_Sounds", true, 0);
					}
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 4000)
					{
						if (Global_1938075->f_6 == 0)
						{
							LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &uVar24, 1);
							Global_1938075->f_6 = uVar24;
						}
						sVar5 = func_413(Global_1938075->f_6);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_5, sVar5);
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, true);
						aggregate_func_4480(&(Global_1938075->f_75.f_56));
						func_410(2);
					}
					break;
				case 2:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 4000)
					{
						if (func_401(6))
						{
							return;
						}
					}
					break;
			}
			break;
		case 6:
			func_419();
			if (Global_1939168->f_12)
			{
				LAW::_0x9C5BD8C562565CE6(&Var6);
				if (Var6.f_16)
				{
					func_407(aggregate_func_6596());
				}
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					aggregate_func_6049(3);
					AUDIO::_0x3E98AC9D8C56C62C(1);
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					func_411();
					if (LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID()) > 0f)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_15, false);
					}
					func_410(2);
					break;
				case 2:
					if (LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID()) > 1f)
					{
						if (!aggregate_func_8612())
						{
							if (func_401(8))
							{
								return;
							}
						}
						else if (func_401(7))
						{
							return;
						}
					}
					break;
			}
			break;
		case 7:
			bVar4 = true;
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_405();
					AUDIO::_0x3E98AC9D8C56C62C(1);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, true);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_13, true);
					DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_12, true);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_5, "LAW_UI_LAW_SEARCHING");
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(2);
					break;
				case 2:
					fVar41 = LAW::_0x717DA2281DF90855(PLAYER::PLAYER_ID());
					if (fVar41 <= 0f && LAW::_0x9945A3E2528A02E8(PLAYER::PLAYER_ID()))
					{
						if (bVar1)
						{
							if (func_401(10))
							{
								return;
							}
						}
						else if (func_401(6))
						{
							return;
						}
					}
					if (!aggregate_func_8612() || !Global_1939168->f_12)
					{
						if (func_401(8))
						{
							return;
						}
					}
					Global_1938075->f_75.f_61 = fVar41;
					break;
			}
			break;
		case 8:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					AUDIO::_0x3E98AC9D8C56C62C(0);
					if (!Global_1939168->f_12)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_16, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_16, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_16, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_17, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_17, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_17, true);
						if ((!aggregate_func_6957() && !aggregate_func_3014(296)) && !aggregate_func_2056())
						{
							aggregate_func_4322(296, 0);
						}
					}
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(2);
					break;
				case 2:
					if (aggregate_func_8612() && Global_1939168->f_12)
					{
						func_404(bVar1);
						if (aggregate_func_3080(296))
						{
							aggregate_func_7858(296);
						}
						return;
					}
					if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_16))
					{
						iVar42 = 10000;
					}
					else
					{
						iVar42 = 35000;
					}
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > iVar42)
					{
						if (aggregate_func_3080(296))
						{
							aggregate_func_7858(296);
						}
						if (!Global_1939168->f_12)
						{
							if (func_401(9))
							{
								return;
							}
						}
						else if (func_427())
						{
							return;
						}
					}
					break;
			}
			break;
		case 9:
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					func_406();
					aggregate_func_4480(&(Global_1938075->f_75.f_56));
					func_410(1);
					break;
				case 1:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 1000)
					{
						if (aggregate_func_4324(func_395()))
						{
							iVar43 = aggregate_func_8925(func_395());
							if (iVar43 > 0)
							{
								aggregate_func_183(-1, -1, -1, 0, func_395(), 0);
							}
						}
						func_410(2);
					}
					break;
				case 2:
					func_401(0);
					break;
			}
			break;
		case 10:
			bVar3 = false;
			if (!bVar1)
			{
				func_404(bVar1);
				return;
			}
			switch (Global_1938075->f_75.f_60)
			{
				case 0:
					if (LAW::_0x9945A3E2528A02E8(PLAYER::PLAYER_ID()))
					{
						func_405();
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, true);
						aggregate_func_4480(&(Global_1938075->f_75.f_56));
						func_410(1);
					}
					break;
				case 1:
					if (aggregate_func_7453(&(Global_1938075->f_75.f_56)) > 4000)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, false);
						func_410(2);
					}
					break;
			}
			break;
	}
	func_429(bVar3, bVar4);
}

void func_105()
{
	Global_1939221->f_14.f_17++;
	if (Global_1939221->f_14.f_17 >= Global_1939221->f_14.f_16)
	{
		Global_1939221->f_14.f_17 = 0;
	}
	if (Global_1939221->f_14.f_17 >= Global_1939221->f_14.f_16)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE((Global_1939221->f_14[Global_1939221->f_14.f_17 /*3*/])->f_2, false))
	{
		return;
	}
	func_430(Global_1939221->f_14.f_17);
}

void func_106()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 <= Global_17169)
	{
		aggregate_func_3038(1);
	}
	if (iVar0 <= Global_17156)
	{
		func_432();
	}
	switch (Global_17157)
	{
		case 1:
			if (!Global_17170)
			{
				if (!aggregate_func_2875(&(Global_17158[1])))
				{
					Global_17158[1] = aggregate_func_1523("DOCUMENT_INSPECTION_PREV_DOC", joaat("INPUT_DOCUMENT_PAGE_PREV"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					aggregate_func_4583(&(Global_17158[1]), &(Global_17163[1]), 1, 1);
					aggregate_func_2079(&(Global_17158[1]), 1310260484, 0, 1);
				}
				if (!aggregate_func_2875(&(Global_17158[0])))
				{
					Global_17158[0] = aggregate_func_1523("DOCUMENT_INSPECTION_NEXT_DOC", joaat("INPUT_DOCUMENT_PAGE_NEXT"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					aggregate_func_4583(&(Global_17158[0]), &(Global_17163[0]), 1, 1);
					aggregate_func_2079(&(Global_17158[0]), 1310260484, 0, 1);
				}
			}
			if (!Global_17171)
			{
				if (!aggregate_func_2875(&(Global_17158[2])))
				{
					Global_17158[2] = aggregate_func_1523("HUD_SATCHEL", joaat("INPUT_INSPECT_OPEN_SATCHEL"), Global_35, 2, 0, 0, 1, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
					aggregate_func_2079(&(Global_17158[2]), 1310260484, 0, 1);
				}
			}
			if (!aggregate_func_2875(&(Global_17158[3])))
			{
				Global_17158[3] = aggregate_func_1523("VI_READ", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				aggregate_func_4583(&(Global_17158[3]), &(Global_17163[3]), 1, 1);
				if (!Global_17172)
				{
					aggregate_func_2079(&(Global_17158[3]), 1310260484, 0, 1);
				}
			}
			Global_17172 = 0;
			if ((((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(195871429) == 0 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2006217472) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-704221704) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-369505775) == 0) && MISC::GET_GAME_TIMER() >= Global_17168)
			{
				Global_17157 = 2;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (aggregate_func_2875(&(Global_17158[iVar1])))
				{
					aggregate_func_2878(Global_17158[iVar1], 0, 1);
				}
				iVar1++;
			}
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
			Global_17157 = 0;
			break;
	}
}

void func_107()
{
	int iVar0;
	bool bVar1;
	int iVar4;
	bool bVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (((*Global_1913136)[iVar0 /*6*/])->f_1)
		{
			case 4:
				if (!TASK::_0x038B1F1674F0E242(Global_35))
				{
					aggregate_func_8137(iVar0);
				}
				break;
			case 3:
				if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					if (((*Global_1913136)[iVar0 /*6*/])->f_2 != 0)
					{
						TXD::_0x8232F37DF762ACB2(((*Global_1913136)[iVar0 /*6*/])->f_2);
						((*Global_1913136)[iVar0 /*6*/])->f_2 = 0;
					}
				}
				else if (((*Global_1913136)[iVar0 /*6*/])->f_3 != 0)
				{
					HUD::_0xF1E6979C0B779985(&(((*Global_1913136)[iVar0 /*6*/])->f_3));
					((*Global_1913136)[iVar0 /*6*/])->f_3 = 0;
				}
				((*Global_1913136)[iVar0 /*6*/])->f_1 = 0;
				break;
			case 0:
				if (Global_1913136[iVar0 /*6*/] != 0)
				{
					((*Global_1913136)[iVar0 /*6*/])->f_4 = func_438(aggregate_func_2900(Global_1913136[iVar0 /*6*/], -949239683));
					if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
					{
						if (aggregate_func_924(Global_1913136[iVar0 /*6*/], &bVar1, joaat("inventory"), -401018458, 0, 0))
						{
							if (TXD::_0xBA0163B277C2D2D0(bVar1))
							{
								TXD::_0xDB1BD07FB464584D(bVar1, 0);
								((*Global_1913136)[iVar0 /*6*/])->f_2 = bVar1;
							}
						}
					}
					else
					{
						iVar4 = func_440(Global_1913136[iVar0 /*6*/]);
						((*Global_1913136)[iVar0 /*6*/])->f_3 = HUD::_0xB6857100F8FD433C(iVar4, -2);
					}
					((*Global_1913136)[iVar0 /*6*/])->f_1 = 1;
				}
				break;
			case 1:
				if (!((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					if (((*Global_1913136)[iVar0 /*6*/])->f_2 != 0)
					{
						if (TXD::_0xBE72591D1509FFE4(((*Global_1913136)[iVar0 /*6*/])->f_2))
						{
							((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
						}
					}
					else
					{
						((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
					}
				}
				else
				{
					((*Global_1913136)[iVar0 /*6*/])->f_1 = 2;
				}
				break;
			case 2:
				if (((*Global_1913136)[iVar0 /*6*/])->f_4)
				{
					bVar5 = TASK::_0x038B1F1674F0E242(Global_35);
					if (iVar0 == 0)
					{
						if (!bVar5 || !((*Global_1913136)[iVar0 /*6*/])->f_5)
						{
							iVar6 = HUD::_0xBE1067CD1C9570F6(((*Global_1913136)[iVar0 /*6*/])->f_3);
							if (iVar6 != 0)
							{
								HUD::_0x51DE09A2196BD951(iVar6, joaat("p_cs_newspaper_02x"));
								if (bVar5)
								{
									((*Global_1913136)[iVar0 /*6*/])->f_5 = 1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
}

bool func_108()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("binoculars")) > 0;
}

void func_110()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "binoculars", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	aggregate_func_1292(Var10, 0);
}

void func_111()
{
	if (MISC::IS_BIT_SET(&Global_1956177, 0))
	{
		MISC::SET_BIT(Global_1956177, 1);
		MISC::CLEAR_BIT(Global_1956177, 0);
		return;
	}
	if (!MISC::IS_BIT_SET(&Global_1956177, 0))
	{
		MISC::CLEAR_BIT(Global_1956177, 1);
		return;
	}
}

void func_112()
{
	if (!MISC::IS_BIT_SET(&Global_1956177, 4))
	{
		if (MISC::IS_BIT_SET(&Global_1956177, 1))
		{
			aggregate_func_7381(64);
		}
	}
}

bool func_113()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0;
}

void func_114()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "camera_item", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	aggregate_func_1292(Var10, 0);
}

bool func_115()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-458977373) > 0;
}

void func_116()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "electric_lantern", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	aggregate_func_1292(Var10, 0);
}

bool func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (Global_1939168->f_38 == -862059856)
	{
		return true;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false) && iVar0 == -862059856)
	{
		return true;
	}
	if (Global_1273882->f_22[Global_1199509->f_3] && !&Global_1273882->f_88[Global_1199509->f_3])
	{
		iVar1 = &Global_1273882->f_154[Global_1199509->f_3];
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (iVar2 != PLAYER::PLAYER_PED_ID())
		{
			if (BUILTIN::VDIST2(Global_1273882->f_17, ENTITY::GET_ENTITY_COORDS(iVar2, true, false)) < 2500f)
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar2, "DigSiteX"))
				{
					return true;
				}
			}
		}
	}
	Global_1199509->f_3++;
	if (Global_1199509->f_3 >= 32)
	{
		Global_1199509->f_3 = 0;
	}
	return false;
}

bool func_118()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-689602647) > 0;
}

void func_119()
{
	struct<10> Var0;
	struct<16> Var10;

	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "metal_detector", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	aggregate_func_1292(Var10, 0);
}

bool func_122(bool bParam0)
{
	return ((!bParam0 && !aggregate_func_1685()) && (CAM::IS_SCREEN_FADED_IN() || aggregate_func_8210(1)));
}

void func_123()
{
	if (func_398("fishing_core", 5505, Global_1902941))
	{
	}
}

bool func_126()
{
	bool bVar0;
	bool bVar1;

	bVar0 = true;
	if (Global_1915170->f_20136 || Global_1939221->f_8)
	{
		bVar0 = false;
	}
	if (!func_136(bVar0, 1, 0, 1, 0, 0, 0, 0, 1))
	{
		if (&Global_1939221 == 1)
		{
		}
		return false;
	}
	if (!Global_1939221->f_2)
	{
		if (&Global_1939221 == 1)
		{
		}
		return false;
	}
	bVar1 = Global_1939221->f_5;
	Global_1939221->f_5 = 0;
	if (bVar1)
	{
		if (&Global_1939221 == 1)
		{
		}
		return false;
	}
	if (aggregate_func_4625())
	{
		if (&Global_1939221 == 1)
		{
		}
		return false;
	}
	return true;
}

void func_129()
{
	struct<4> Var0;
	int iVar4;

	if (aggregate_func_4625())
	{
		return;
	}
	iVar4 = 1433015236;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1340543710:
					aggregate_func_342(Var0, Var0.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 290710310:
							aggregate_func_270(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

void func_130()
{
	bool bVar0;

	bVar0 = aggregate_func_6634(0, 0, 1);
	Global_1896726->f_384 = bVar0;
}

bool func_131()
{
	if (!Global_1896726->f_383)
	{
		return false;
	}
	return true;
}

int func_133()
{
	if (aggregate_func_2927(&(Global_1939057->f_83[3]), 1))
	{
		return 1;
	}
	return 0;
}

var func_135()
{
	return Global_1954385->f_1;
}

bool func_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (aggregate_func_2059())
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

void func_137()
{
	if (aggregate_func_4240(Global_1130954->f_137.f_1, 2))
	{
		aggregate_func_5470(8);
	}
	else
	{
		aggregate_func_5470(0);
	}
}

void func_138()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1896726->f_388, false))
	{
		return;
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("player_menu") && aggregate_func_4625())
	{
		Global_1896726->f_388 = SCRIPTS::START_NEW_SCRIPT("player_menu", 1400);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_menu");
		Global_1896726->f_387 = 0;
	}
	else
	{
		SCRIPTS::REQUEST_SCRIPT("player_menu");
		aggregate_func_5048(1);
	}
}

void func_140()
{
	Global_1939057->f_21 = 0;
}

void func_141()
{
	if (Global_1939057->f_92)
	{
		Global_1939057->f_43 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select_satchel_shortcut");
		Global_1939057->f_43.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1939057->f_43, "isAccessible", true);
	}
}

void func_143()
{
	if (aggregate_func_4251() == -1)
	{
		Global_1939057->f_47 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select_crafting_menu_shortcut");
		Global_1939057->f_47.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1939057->f_47, "isAccessible", true);
	}
}

void func_144()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		aggregate_func_2878(Global_1939057->f_83[iVar1], 1, 1);
		iVar0++;
	}
	Global_1939057->f_21 = 0;
}

void func_145()
{
	int iVar0;

	iVar0 = aggregate_func_1499(0);
	func_455(iVar0, 1, 0, 0);
	func_456(iVar0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_463();
	bVar0 = aggregate_func_4505(1);
	if (func_466(1, 92296) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = aggregate_func_4505(2);
	if (func_466(2, 92374) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = (aggregate_func_4505(4) || aggregate_func_4505(8));
	if (!aggregate_func_7004())
	{
		func_469(4);
		func_469(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (aggregate_func_4988(81053684) || func_471(4))
		{
			func_469(4);
		}
		else
		{
			bVar1 = true;
		}
		if (aggregate_func_4988(-525676072) || func_471(8))
		{
			func_469(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (aggregate_func_1769(0, aggregate_func_4995()))
			{
				if (!bVar0)
				{
					Global_1939057->f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_473(4);
				}
				if (bVar2)
				{
					func_473(8);
				}
			}
			else
			{
				func_469(4);
				func_469(8);
				if (bVar0)
				{
					Global_1939057->f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = aggregate_func_4505(16);
	if (func_466(16, 92488) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = aggregate_func_4505(256);
	if (func_466(256, 92501) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = aggregate_func_4505(512);
	if (func_466(512, 92514) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	bVar0 = aggregate_func_4505(1024);
	if (func_466(1024, 92527) != bVar0)
	{
		if (!Global_1939057->f_80.f_1)
		{
			Global_1939057->f_80.f_1 = 1;
		}
	}
	if (((((func_478() || func_479()) || func_480()) || func_481()) || aggregate_func_5062()) || bParam0)
	{
		bVar0 = aggregate_func_4505(8192);
		if (func_466(8192, 92622) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(64);
		if (func_466(64, 92635) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(32);
		if (func_466(32, 92648) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(128);
		if (func_466(128, 92661) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(2048);
		if (func_466(2048, 92673) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(32768);
		if (func_466(32768, 92686) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
		bVar0 = aggregate_func_4505(4096);
		if (func_466(4096, 92699) != bVar0)
		{
			if (!Global_1939057->f_80.f_1)
			{
				Global_1939057->f_80.f_1 = 1;
			}
		}
	}
	func_490();
}

void func_153()
{
	if (aggregate_func_5062() || (((func_478() || func_479()) || func_480()) || func_481()))
	{
		Global_1939057->f_80 = 1;
		func_174();
		if (Global_1939057->f_80.f_1)
		{
			aggregate_func_4918(1, 1, 0);
		}
		Global_1939057->f_80.f_1 = 0;
	}
	else if (Global_1939057->f_80)
	{
		func_145();
		Global_1939057->f_80 = 0;
		Global_1939057->f_80.f_1 = 0;
	}
}

void func_154()
{
	func_492();
	func_493();
	if (Global_1939057->f_20)
	{
		Global_1939057->f_20 = 0;
	}
	if ((Global_1939057->f_22 && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE"))) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
	{
		Global_1939057->f_22 = 0;
	}
	func_494();
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
	{
		if (Global_1939057->f_109)
		{
			func_495(1);
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
	{
		func_495(0);
	}
	else if (func_496())
	{
		if (Global_1939057->f_109)
		{
			func_495(1);
		}
	}
	else if (aggregate_func_2927(&(Global_1939057->f_83[5]), 1))
	{
		aggregate_func_39(Global_1939057->f_77.f_2, 1, 0, 0, 1, 0, 0);
		func_185();
	}
	else if (aggregate_func_2927(&(Global_1939057->f_83[6]), 1))
	{
		Global_1939057->f_70.f_2 = MISC::GET_GAME_TIMER();
		aggregate_func_39(Global_1939057->f_70.f_1, 0, 0, 0, 1, 0, 0);
		func_497();
	}
}

void func_155(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char cVar6[64];
	bool bVar14;
	int iVar15;
	char* sVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	char* sVar28;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "quick_select");
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "target_horse_info");
	}
	bVar0 = true;
	if (!func_498())
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "visible", bVar0);
	if (!bVar0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseName", "");
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "bondingRankTexture", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseCoat", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMinValue", false);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseHandling", "");
		return;
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	iVar2 = -1;
	if (aggregate_func_1794(iVar1))
	{
		iVar2 = aggregate_func_3078(iVar1);
	}
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar1);
	iVar4 = aggregate_func_4791(iVar3);
	sVar5 = "";
	StringCopy(&cVar6, aggregate_func_5516(iVar4), 64);
	sVar5 = aggregate_func_4984(&cVar6);
	bVar14 = false;
	iVar15 = aggregate_func_1171(iVar1);
	if (iVar2 == 0)
	{
		if (iVar15 == 0)
		{
			bVar14 = -217389439;
		}
		else if (iVar15 == 1)
		{
			bVar14 = 13992470;
		}
		else if (iVar15 == 2)
		{
			bVar14 = 396341162;
		}
		else if (iVar15 == 3)
		{
			bVar14 = 623069873;
		}
		else if (iVar15 == 4)
		{
			bVar14 = -637422489;
		}
	}
	else if (iVar15 == 0)
	{
		bVar14 = 937553910;
	}
	else if (iVar15 == 1)
	{
		bVar14 = 489732756;
	}
	else if (iVar15 == 2)
	{
		bVar14 = 195204984;
	}
	else if (iVar15 == 3)
	{
		bVar14 = -103418913;
	}
	else if (iVar15 == 4)
	{
		bVar14 = -815685893;
	}
	sVar16 = aggregate_func_5165(iVar4);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseName", HUD::_GET_LABEL_TEXT_2(sVar5));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "bondingRankTexture", bVar14);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseCoat", sVar16);
	iVar17 = aggregate_func_1535(iVar1);
	bVar18 = iVar17 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedValue", bVar18);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedMaxValue", 10);
	iVar19 = func_507(iVar1);
	bVar20 = (bVar18 + iVar19);
	bVar20 = aggregate_func_5207(bVar20, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentValue", bVar20);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedEquipmentMaxValue", 10);
	bVar21 = bVar18 + 2;
	bVar21 = aggregate_func_5207(bVar21, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityValue", bVar21);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseSpeedCapacityMaxValue", 10);
	iVar22 = aggregate_func_1535(iVar1);
	bVar23 = iVar22 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccValue", bVar23);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccMaxValue", 10);
	iVar24 = func_510(iVar1);
	bVar25 = (bVar23 + iVar24);
	bVar25 = aggregate_func_5207(bVar25, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentValue", bVar25);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccEquipmentMaxValue", 10);
	bVar26 = bVar23 + 2;
	bVar26 = aggregate_func_5207(bVar26, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityValue", bVar26);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "horseAccCapacityMaxValue", 10);
	iVar27 = func_511(iVar1);
	sVar28 = aggregate_func_5253(iVar27);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseHandling", sVar28);
}

void func_156()
{
	int iVar0;
	bool bVar1;

	if (aggregate_func_4636())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
		if (TASK::_0x841475AC96E794D1(iVar0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, true);
		}
	}
	else
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_43.f_1) && !Global_1939057->f_92)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, false);
		}
		else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_43.f_1) && Global_1939057->f_92)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_43.f_1, true);
		}
		if (aggregate_func_4251() == -1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_45.f_1) && !Global_1939057->f_91)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, false);
			}
			else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_45.f_1) && Global_1939057->f_91)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_45.f_1, true);
			}
		}
	}
	if (aggregate_func_4251() == -1)
	{
		bVar1 = -1448210800; /* GXTEntry: "Crafting Tools" */
	}
	else
	{
		bVar1 = -2035110427; /* GXTEntry: "Mortar and Pestle" */
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_47.f_1) && !aggregate_func_2850(bVar1, 1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_47.f_1, false);
	}
	else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939057->f_47.f_1) && aggregate_func_2850(bVar1, 1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939057->f_47.f_1, true);
	}
}

bool func_159(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			if (PED::_0x4E76CB57222A00E5(iParam0) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	struct<18> Var17;

	if (Global_1939057->f_16 == iParam0 && !Global_1939057->f_17)
	{
		return;
	}
	Global_1939057->f_16 = iParam0;
	Global_1939057->f_17 = 0;
	Var3.f_9 = -1591664384;
	if (aggregate_func_2842("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (!aggregate_func_2840(&Var3, bVar2, iVar0, iVar1))
			{
			}
			else if (!aggregate_func_2841(Var3.f_4))
			{
			}
			else if (!aggregate_func_2959(Var3.f_4, 1194584906) && INVENTORY::_0x0C093C1787F18519(Var3.f_4, &Var17))
			{
				INVENTORY::_0x227522FD59DDB7E8(aggregate_func_1499(0), &Var3, iParam0);
			}
			bVar2++;
		}
		aggregate_func_2837(iVar0);
	}
}

bool func_162()
{
	if (Global_1913156->f_1581)
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		if (aggregate_func_882("simple_crafting", 1024))
		{
			Global_1913156->f_1581 = 0;
			Global_1913156->f_1582 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - Global_1913156->f_1583) > 1000)
		{
			Global_1913156->f_1581 = 0;
		}
		return false;
	}
	if (aggregate_func_4251() == 0)
	{
		return false;
	}
	return false;
}

bool func_165(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_2900(bParam0, -949239683);
	switch (iVar0)
	{
		case -1919515848:
		case -1915958659:
		case -1337515701:
		case -809056541:
		case -273840653:
		case -262371497:
		case 89124942:
		case 238865292:
		case 845883585:
		case 999632878:
		case 1130235258:
		case 1177617310:
		case 1443104131:
		case 1451036371:
		case 1859991422:
		case 1891031775:
			return false;
		default:
			break;
	}
	if (aggregate_func_2959(Global_1939057->f_40, 791664616))
	{
		return false;
	}
	return true;
}

void func_167()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if (!aggregate_func_4378())
	{
		if (Global_1912968->f_2 > 0)
		{
			if ((iVar0 - Global_1912968->f_1) > Global_1912968->f_2)
			{
				aggregate_func_8566();
				Global_1912968->f_2 = 0;
			}
		}
		else
		{
			return;
		}
	}
	else if (!func_562())
	{
		iVar1 = 0;
		while (iVar1 < Global_1912968->f_3)
		{
			aggregate_func_398(&(Global_1912968->f_4[iVar1 /*6*/]), (Global_1912968->f_4[iVar1 /*6*/])->f_1, (Global_1912968->f_4[iVar1 /*6*/])->f_2, (Global_1912968->f_4[iVar1 /*6*/])->f_4, (Global_1912968->f_4[iVar1 /*6*/])->f_3, (Global_1912968->f_4[iVar1 /*6*/])->f_5, 0);
			Global_1912968->f_4[iVar1 /*6*/] = 0;
			iVar1++;
		}
		func_564();
	}
	if (!aggregate_func_4742())
	{
		if ((iVar0 - Global_1912968->f_125) > Global_1912968->f_126)
		{
			aggregate_func_2036(Global_1912968->f_127, 0, 0, 0);
			aggregate_func_9368();
		}
	}
	if (!func_568())
	{
		if ((iVar0 - Global_1912968->f_128) > Global_1912968->f_129)
		{
			aggregate_func_739(184, Global_1912968->f_130, 255, 0);
			aggregate_func_9368();
		}
	}
	if (!aggregate_func_9231())
	{
		if ((iVar0 - Global_1912968->f_131) > Global_1912968->f_132)
		{
			aggregate_func_4074(0);
			aggregate_func_9368();
		}
	}
}

void func_169()
{
	struct<4> Var0;

	if (Global_1956121->f_2 != -1 && !Global_1939057->f_8)
	{
		func_574(1, Global_1956121->f_2, Var0);
	}
}

void func_170()
{
	Global_1939057->f_17 = 1;
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;

	Var3.f_9 = -1591664384;
	if (aggregate_func_2842("ALL", &iVar0, &iVar1, -1591664384, 0))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (!aggregate_func_2840(&Var3, bVar2, iVar0, iVar1))
			{
			}
			else if ((((WEAPON::IS_WEAPON_VALID(Var3.f_4) && WEAPON::_0xC853230E76A152DF(Var3.f_4)) || Var3.f_4 == joaat("weapon_kit_camera")) || Var3.f_4 == -1838434463) || Var3.f_4 == 2019377485)
			{
				INVENTORY::_0x227522FD59DDB7E8(aggregate_func_1499(0), &Var3, iParam0);
			}
			bVar2++;
		}
		aggregate_func_2837(iVar0);
	}
}

void func_174()
{
	int iVar0;

	if (!aggregate_func_4337(0) && !aggregate_func_7225())
	{
		iVar0 = aggregate_func_1499(0);
		func_455(iVar0, 0, 0, 0);
		func_456(iVar0);
	}
}

void func_175(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = bParam0;
	if (INVENTORY::_0x3D10D7179D7034AF(aggregate_func_1499(0), bVar0, 1))
	{
		return;
	}
	iVar1 = aggregate_func_2830(bVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iVar1 != joaat("clothing"))
	{
		func_579(bVar0, iParam1);
	}
	else
	{
		aggregate_func_39(bVar0, 0, 0, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1939057->f_41 = bVar0;
	}
	else
	{
		Global_1939057->f_42 = bVar0;
	}
}

void func_176(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = bParam0;
	if (INVENTORY::_0x3D10D7179D7034AF(aggregate_func_1499(0), bVar0, 1))
	{
		return;
	}
	iVar1 = aggregate_func_2830(bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
	}
	if ((iVar1 != 2085633299 || Global_1939057->f_40 != bVar0) || !func_165(bVar0))
	{
		aggregate_func_39(bVar0, 1, iParam1, 0, 1, 0, 0);
	}
	if (iVar1 == 2085633299)
	{
		Global_1939057->f_41 = bVar0;
	}
	else
	{
		Global_1939057->f_42 = bVar0;
	}
	iVar2 = aggregate_func_1499(0);
	if (!INVENTORY::_0x3D10D7179D7034AF(iVar2, bVar0, 0))
	{
		Global_1902941->f_36 = bVar0;
	}
}

int func_177()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, true, false))
	{
		return uVar1;
	}
	if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &uVar1) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

void func_178(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		iVar2 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar1);
		if (iVar2 == 0)
		{
			return;
		}
		if (!PLAYER::_0x354F689C4FFAAB37(iVar2))
		{
			return;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	func_580(iParam1, iVar0, vVar3, bParam2, iParam3);
	if (bParam2 && -153407852 == iParam1)
	{
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(iParam0, iParam3);
	}
}

void func_180(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	uParam0->f_12 = func_177();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		if (aggregate_func_1556(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_12);
			if (!aggregate_func_8555(iVar2) && !aggregate_func_8554(iVar2))
			{
				bVar0 = true;
			}
		}
	}
	bVar3 = false;
	if (bVar0)
	{
		if (func_584(uParam0))
		{
			bVar3 = true;
		}
	}
	else if (func_585(uParam0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		uParam0->f_13 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("show_info", "Study_Sounds", true, 0);
	}
}

bool func_181(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		if (aggregate_func_1556(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_12);
			if (!aggregate_func_8555(iVar1) && !aggregate_func_8554(iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_182(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
	iVar1 = aggregate_func_1171(iVar0);
	if (uParam0->f_14 != iVar1)
	{
		return true;
	}
	return false;
}

void func_183(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
	bVar2 = false;
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		bVar2 = true;
	}
	bVar3 = 937553910;
	iVar4 = aggregate_func_1171(iVar1);
	if (bVar2)
	{
		if (iVar4 == 0)
		{
			bVar3 = -217389439;
		}
		else if (iVar4 == 1)
		{
			bVar3 = 13992470;
		}
		else if (iVar4 == 2)
		{
			bVar3 = 396341162;
		}
		else if (iVar4 == 3)
		{
			bVar3 = 623069873;
		}
		else if (iVar4 == 4)
		{
			bVar3 = -637422489;
		}
	}
	else if (iVar4 == 0)
	{
		bVar3 = 937553910;
	}
	else if (iVar4 == 1)
	{
		bVar3 = 489732756;
	}
	else if (iVar4 == 2)
	{
		bVar3 = 195204984;
	}
	else if (iVar4 == 3)
	{
		bVar3 = -103418913;
	}
	else if (iVar4 == 4)
	{
		bVar3 = -815685893;
	}
	uParam0->f_2.f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, "bonding");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2.f_7, "bondingRankTexture", bVar3);
}

void func_184(int iParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*iParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(304478236);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	*iParam0 = 0;
	if (*iParam0 != 0)
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_1);
	}
	if (iParam0->f_13)
	{
		AUDIO::PLAY_SOUND_FRONTEND("hide_info", "Study_Sounds", true, 0);
	}
	iParam0->f_12 = 0;
	iParam0->f_13 = 0;
}

void func_185()
{
	aggregate_func_2878(Global_1939057->f_83[5], 1, 1);
	Global_1939057->f_77 = 0;
	Global_1939057->f_77.f_1 = 0;
	Global_1939057->f_77.f_2 = 0;
}

void func_186(var uParam0)
{
	int iVar0;
	var uVar1;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_26 = 0f;
	func_586(uParam0, 0);
	func_587(uParam0, 1);
	Global_17096 = 0;
	Global_17096.f_1 = 0;
	Global_17096.f_2 = 3;
	func_588();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17096.f_4[iVar0 /*2*/] = 0;
		(Global_17096.f_4[iVar0 /*2*/])->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_589(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	uParam0->f_46.f_37 = 0;
	StringCopy(&(uParam0->f_84), "default_inspection_settings", 64);
	StringCopy(&(uParam0->f_84.f_8), "DEFAULT_INSPECTION_REQUEST", 64);
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
}

void func_188(var uParam0)
{
	vector3 vVar0;

	if (aggregate_func_3014(496))
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	if (aggregate_func_6957())
	{
		return;
	}
	if (aggregate_func_2090())
	{
		return;
	}
	aggregate_func_4322(496, 0);
	uParam0->f_136 = func_592(15, 0, 0, 0);
	if (!aggregate_func_4375(uParam0->f_136))
	{
		return;
	}
	vVar0 = { aggregate_func_6004(uParam0->f_136) };
	if (aggregate_func_4268(vVar0))
	{
		return;
	}
	if (!aggregate_func_3733(&(Global_1915170->f_17805[uParam0->f_136 /*11*/])))
	{
		Global_1915170->f_17805[uParam0->f_136 /*11*/] = aggregate_func_3637(aggregate_func_5278(uParam0->f_136), func_192(aggregate_func_4369(uParam0->f_136)), vVar0, -1);
	}
	if (&Global_1915170->f_17805[uParam0->f_136 /*11*/] == -1)
	{
		return;
	}
	aggregate_func_2578(aggregate_func_5278(uParam0->f_136), func_192(aggregate_func_4369(uParam0->f_136)), 580546400);
	aggregate_func_2578(aggregate_func_5278(uParam0->f_136), func_192(aggregate_func_4369(uParam0->f_136)), 847579139);
	uParam0->f_137 = MISC::GET_GAME_TIMER();
	uParam0->f_135 = 0;
}

int func_192(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4321(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 14:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 30:
			iVar0 = 27;
			break;
		case 15:
			iVar0 = 36;
			break;
		case 16:
			iVar0 = 36;
			break;
		case 17:
			iVar0 = 40;
			break;
		case 12:
			iVar0 = 15;
			break;
		case 18:
			iVar0 = 41;
			break;
		case 27:
			iVar0 = 22;
			break;
		case 25:
			iVar0 = 42;
			break;
		case 28:
			iVar0 = 43;
			break;
		case 29:
			iVar0 = 44;
			break;
		case 35:
			iVar0 = 45;
			break;
		case 36:
			iVar0 = 46;
			break;
		case 38:
			iVar0 = 48;
			break;
		case 11:
			iVar0 = aggregate_func_8843(Global_1915170->f_20144.f_1009);
			break;
	}
	return iVar0;
}

void func_194(var uParam0)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	if (aggregate_func_755(Global_35))
	{
		aggregate_func_4252(uParam0, 1);
	}
	else if (aggregate_func_1912(&Var0))
	{
		switch (Var0)
		{
			case 2:
				iVar3 = ENTITY::GET_ENTITY_TYPE(Var0.f_1);
				switch (iVar3)
				{
					case 1:
						if (!aggregate_func_7191())
						{
							aggregate_func_4322(580, 1);
						}
						break;
					case 3:
						break;
				}
				break;
			case 4:
				if (aggregate_func_6559(10))
				{
					return;
				}
				bVar2 = aggregate_func_7515(aggregate_func_4764(func_607(10f)));
				if (aggregate_func_2823(bVar2, 0))
				{
					aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "HELP_QUANTITY_MAXED", MISC::_CREATE_VAR_STRING(0, bVar2)), 10000, 0, 0, 0, 1);
				}
				else
				{
					aggregate_func_2975("HELP_QUANTITY_MAXED_GENERIC", 10000, 0, 0, 0, 1);
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
						{
							aggregate_func_4322(222, 1);
						}
					}
				}
				break;
		}
	}
}

void func_195(var uParam0)
{
	int iVar0;

	iVar0 = func_610(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
		{
			aggregate_func_4242(uParam0, iVar0);
			aggregate_func_4252(uParam0, 2);
		}
		else
		{
			aggregate_func_4252(uParam0, 6);
		}
	}
}

void func_196(var uParam0)
{
	func_612(uParam0);
	if (uParam0->f_25 == 0)
	{
		aggregate_func_4252(uParam0, 4);
		return;
	}
	func_613(uParam0);
	aggregate_func_4242(uParam0, 1);
	aggregate_func_8312();
	CAM::_0x6A4D224FC7643941(&(uParam0->f_84));
	aggregate_func_4252(uParam0, 3);
}

void func_197(var uParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4249(uParam0);
	aggregate_func_3038(0);
	if (aggregate_func_4227(uParam0))
	{
		func_618(&(uParam0->f_84), uParam0->f_84.f_43, uParam0->f_84.f_44, uParam0->f_84.f_45);
		if (MISC::_0x38C2BF94D15F464D(Global_35))
		{
			func_586(uParam0, 1);
			func_619(uParam0, iVar0);
		}
		else if (func_620(uParam0))
		{
			func_613(uParam0);
			aggregate_func_4242(uParam0, iVar0 + 1);
		}
		if (iVar0 >= aggregate_func_4249(uParam0))
		{
			if (uParam0->f_84.f_47 != -1)
			{
				aggregate_func_4293(&(uParam0->f_84.f_48), 0);
			}
			aggregate_func_4252(uParam0, 4);
		}
	}
	else
	{
		aggregate_func_4252(uParam0, 4);
	}
	if (!aggregate_func_755(Global_35))
	{
		aggregate_func_4252(uParam0, 6);
	}
}

void func_198(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (uParam0->f_25 > 0 || (uParam0->f_25 >= 0 && !bVar0))
	{
		func_624(uParam0);
	}
}

void func_199(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19[10];
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	var uVar36;
	int iVar37;

	if (aggregate_func_4226(uParam0))
	{
		iVar0 = aggregate_func_4249(uParam0);
		TELEMETRY::_0x7581972ADF5D699A(uParam0->f_15, &(uParam0->f_33));
		bVar1 = func_627(iVar0);
		iVar2 = uParam0->f_15;
		func_178(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar2, 0, 1);
		if (func_628(iVar0))
		{
			aggregate_func_4322(498, 0);
		}
		STATS::_0xD64DBC8B0424135F(iVar0, iVar2);
		if (!aggregate_func_2892(0) || aggregate_func_1519())
		{
			iVar3 = func_631(iVar0);
			Var4.f_1 = 10;
			aggregate_func_5242(uParam0->f_44, uParam0->f_45, &Var4, 0);
			aggregate_func_5243(iVar3, &Var4, 0);
			iVar16 = 0;
			while (iVar16 < uParam0->f_33)
			{
				if ((!aggregate_func_3033(&(uParam0->f_33[iVar16])) && !aggregate_func_5236(&(uParam0->f_33[iVar16]))) && !aggregate_func_2959(&(uParam0->f_33[iVar16]), -887064662))
				{
					aggregate_func_4322(499, 0);
				}
				iVar16++;
			}
			if (!bVar1)
			{
				iVar17 = 0;
				while (iVar17 < uParam0->f_33)
				{
					aggregate_func_9369(&(uParam0->f_33[iVar17]), 1, 0);
					iVar17++;
				}
			}
		}
		else
		{
			iVar18 = 0;
			iVar30 = 0;
			while (iVar30 < uParam0->f_33)
			{
				if (!aggregate_func_2823(&(uParam0->f_33[iVar30]), 0))
				{
				}
				else
				{
					bVar32 = false;
					iVar31 = 0;
					while (iVar31 < uParam0->f_33)
					{
						if (&uParam0->f_33[iVar30] == &uVar19[iVar31])
						{
							bVar32 = true;
						}
						iVar31++;
					}
					if (bVar32)
					{
					}
					else
					{
						uVar19[iVar18] = &uParam0->f_33[iVar30];
						iVar18++;
						bVar34 = false;
						iVar33 = 0;
						while (iVar33 < uParam0->f_33)
						{
							if (&uParam0->f_33[iVar30] == &uParam0->f_33[iVar33])
							{
								bVar34++;
							}
							iVar33++;
						}
						if (bVar34 > 0)
						{
							func_637(&(uParam0->f_33[iVar30]));
							aggregate_func_9369(&(uParam0->f_33[iVar30]), bVar34, bVar1);
							if (bVar1 || !INVENTORY::_0x4AEF1FB5B9011D75(&(uParam0->f_33[iVar30])))
							{
								aggregate_func_220(&(uParam0->f_33[iVar30]), bVar34, 0, 0, 0, -897553835, 0, 0, 0, 0);
								uParam0->f_33[iVar30] = 0;
							}
						}
					}
				}
				iVar30++;
			}
			func_638();
		}
		iVar35 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		aggregate_func_1909(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar36, &iVar37);
		aggregate_func_3628(iVar37, 0, 0);
		aggregate_func_3641(func_641(iVar35));
		aggregate_func_2712(5);
		aggregate_func_4252(uParam0, 6);
	}
	else if (Global_17096.f_18)
	{
		Global_17096.f_18 = 0;
		aggregate_func_4252(uParam0, 6);
	}
}

void func_200(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (aggregate_func_4260(&(uParam0->f_84.f_48)) && aggregate_func_1526(&(uParam0->f_84.f_48)) >= uParam0->f_84.f_47)
	{
		aggregate_func_4313(&(uParam0->f_84.f_48));
		func_647(&(uParam0->f_84), 0);
	}
	if (!aggregate_func_755(Global_35) || bParam1)
	{
		aggregate_func_7528();
		aggregate_func_4242(uParam0, 0);
		func_649(*uParam0);
		func_647(&(uParam0->f_84), 1);
		func_650(uParam0);
		iVar0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			bVar1 = ENTITY::_0x31FEF6A20F00B963(iVar0);
			if (aggregate_func_3033(bVar1) && func_651(bVar1))
			{
				if (!aggregate_func_3014(496))
				{
					uParam0->f_135 = 1;
				}
				else
				{
					uParam0->f_135 = 0;
				}
				Global_17096.f_15 = 1;
				Global_17096.f_16 = iVar0;
			}
		}
		aggregate_func_4252(uParam0, 0);
	}
}

void func_201(var uParam0)
{
	Global_17096 = aggregate_func_4641(uParam0);
	Global_17096.f_1 = aggregate_func_4249(uParam0);
	if (uParam0->f_17)
	{
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
	}
	func_652(uParam0);
}

void func_206()
{
	int iVar0;

	iVar0 = aggregate_func_4314();
	while (true)
	{
		switch (iVar0)
		{
			case 9:
				func_653(&Global_17138);
				break;
			case 84:
				func_654(&Global_17138);
				break;
			case 5:
				func_655(&Global_17138);
				break;
			case 4:
				func_656(&Global_17138);
				break;
			case 38:
				func_657(&Global_17138);
				break;
			case 59:
				func_658(&Global_17138);
				break;
			case 111:
				func_659(&Global_17138);
				break;
			case 39:
				func_660(&Global_17138);
				break;
			case 21:
				func_661(&Global_17138);
				break;
			case 22:
				func_662(&Global_17138);
				break;
			case 81:
				func_663(&Global_17138);
				break;
			case 8:
				func_664(&Global_17138);
				break;
			case 45:
				break;
			case 70:
				func_665(&Global_17138);
				break;
			case 73:
				func_666(&Global_17138);
				break;
			case 74:
				func_667(&Global_17138);
				break;
			case 16:
				func_668(&Global_17138);
				break;
			case 42:
				func_669(&Global_17138);
				break;
			case 47:
				func_670(&Global_17138);
				break;
			case 50:
				func_671(&Global_17138);
				break;
			case 12:
				func_672(&Global_17138);
				break;
			case 101:
				func_669(&Global_17138);
				break;
			case 26:
				func_673(&Global_17138);
				break;
			case 83:
				func_674(&Global_17138);
				break;
			case 121:
				func_675(&Global_17138);
				break;
			case 80:
				func_676(&Global_17138);
				break;
			case 129:
				func_677(&Global_17138);
				break;
			case 99:
				func_678(&Global_17138);
				break;
			case 85:
				func_679(&Global_17138);
				break;
			case 89:
				func_680(&Global_17138);
				break;
			case 40:
				func_681(&Global_17138);
				break;
			case 44:
				func_682(&Global_17138);
				break;
			case -1:
				func_683(&Global_17138);
				break;
			default:
				Global_17138 = 0;
				break;
		}
		if (!func_684())
		{
		}
	else
	{
		}
	}
	if (iVar0 == 45)
	{
		func_685();
	}
}

var func_208()
{
	return Global_1051202->f_8;
}

void func_211()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		switch (iVar0)
		{
			case 34:
				break;
			case 30:
				aggregate_func_228();
				break;
			case 32:
				aggregate_func_2005();
				break;
			default:
				aggregate_func_69(iVar0);
				func_689(iVar0);
				break;
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_216()
{
	if (aggregate_func_455(&(Global_1939057->f_83[4]), 1))
	{
		return true;
	}
	if (Global_1051387->f_3577)
	{
		if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
		{
			if (!aggregate_func_4260(&(Global_1051387->f_3579)))
			{
				aggregate_func_4293(&(Global_1051387->f_3579), 0);
			}
			if (aggregate_func_4298(&(Global_1051387->f_3579)) > 10000f)
			{
				Global_1051387->f_3577 = 0;
				aggregate_func_5003(0);
				aggregate_func_4313(&(Global_1051387->f_3579));
			}
			if (aggregate_func_7252())
			{
				Global_1915170->f_21989.f_1 = 0;
			}
			return false;
		}
		return true;
	}
	return false;
}

void func_218()
{
	bool bVar0;

	if (!aggregate_func_4636())
	{
		return;
	}
	bVar0 = true;
	if (aggregate_func_4337(1))
	{
		bVar0 = false;
	}
	if (Global_1051387->f_3673 && (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) == 1 || !aggregate_func_1683(Global_1273882->f_15)))
	{
		bVar0 = false;
	}
	if (Global_1051387->f_3666 != 0)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		NETWORK::_0x236905C700FDB54D();
	}
}

void func_219()
{
	if (func_697())
	{
		return;
	}
	if (!Global_1051387->f_3211)
	{
		if (((Global_1915170->f_20135 || Global_1915170->f_21989.f_2) && !Global_1939168->f_6) && !Global_13)
		{
			if (!aggregate_func_4894() == 9 || Global_1915170->f_20143)
			{
				if (func_699(Global_1915170->f_19742) || aggregate_func_5999(Global_1915170->f_19742))
				{
					HUD::_0x4CC5F2FC1332577F(1422092402);
				}
				HUD::_0x4CC5F2FC1332577F(-1347445791);
				aggregate_func_2285(1);
				Global_1051387->f_3211 = 1;
			}
		}
	}
	else if (((!(Global_1915170->f_20135 || Global_1915170->f_21989.f_2) || Global_1939168->f_6) || Global_13) || (aggregate_func_4894() == 9 && !Global_1915170->f_20143))
	{
		HUD::_0x8BC7C1F929D07BF3(1422092402);
		HUD::_0x8BC7C1F929D07BF3(-1347445791);
		aggregate_func_2285(0);
		Global_1051387->f_3211 = 0;
	}
}

void func_220()
{
	int iVar0;

	if (func_702())
	{
		if (!func_703(iLocal_24, &iVar0))
		{
			func_704();
			return;
		}
		if (aggregate_func_1231(iVar0))
		{
			return;
		}
		switch (iLocal_24)
		{
			case 10:
				func_706(iVar0, "CALL_OUT_GENERAL");
				break;
			case 38:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
					case 1:
						func_706(iVar0, "CALL_OUT_GENERAL");
						break;
					case 2:
						if (PED::IS_PED_MALE(Global_35))
						{
							func_706(iVar0, "CALL_OUT_MALE");
						}
						else
						{
							func_706(iVar0, "CALL_OUT_FEMALE");
						}
						break;
				}
				break;
			case 15:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
				{
					case 0:
						func_706(iVar0, "CALL_OUT_MARKET_GARMENT");
						break;
					case 1:
						func_706(iVar0, "CALL_OUT_MARKET_EQUIPMENT");
						break;
					case 2:
						func_706(iVar0, "CALL_OUT_MARKET_CLOTHING");
						break;
					case 3:
						func_706(iVar0, "CALL_OUT_MARKET_SADDLE");
						break;
					case 4:
						func_706(iVar0, "CALL_OUT_MARKET_ITEMS");
						break;
				}
				break;
			case 14:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						func_706(iVar0, "CALL_OUT_BAIT");
						break;
					case 1:
						func_706(iVar0, "CALL_OUT_FISHING_EQUIPMENT");
						break;
					case 2:
						func_706(iVar0, "CALL_OUT_NEUTRAL");
						break;
					case 3:
						if (PED::IS_PED_MALE(Global_35))
						{
							func_706(iVar0, "CALL_OUT_MALE");
						}
						else
						{
							func_706(iVar0, "CALL_OUT_NEUTRAL");
						}
						break;
				}
				break;
		}
		func_704();
	}
}

void func_221()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	if (Global_1051387->f_3691 == -1)
	{
		Global_1051387->f_3691 = 0;
	}
	else
	{
		Global_1051387->f_3691++;
		if (Global_1051387->f_3691 == 176)
		{
			Global_1051387->f_3691 = 0;
		}
	}
	iVar0 = aggregate_func_4369(Global_1051387->f_3691);
	if (iVar0 == -1)
	{
		return;
	}
	func_707(Global_1051387->f_3691, iVar0);
	bVar1 = ((aggregate_func_3792(iVar0) || aggregate_func_3730(aggregate_func_5278(Global_1051387->f_3691), 255)) || aggregate_func_1618(Global_1051387->f_3691) == 1);
	iVar2 = aggregate_func_5121(Global_1051387->f_3691);
	bVar1 = ((bVar1 || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2)) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar2));
	if (bVar1)
	{
		if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
		{
			func_712(Global_1051387->f_3693[iVar0 /*16*/]);
			func_713(Global_1051387->f_3693[iVar0 /*16*/]);
		}
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
		if (aggregate_func_5595(Global_1051387->f_3691, &uVar7, &uVar6, &vVar3) && !aggregate_func_4268(vVar3))
		{
			if (&Global_1051387->f_3693[iVar0 /*16*/] == -1 || aggregate_func_4369(&(Global_1051387->f_3693[iVar0 /*16*/])) != iVar0)
			{
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
			else if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
			{
			}
			else if (BUILTIN::VDIST(Global_36, vVar3) < BUILTIN::VDIST(Global_36, (Global_1051387->f_3693[iVar0 /*16*/])->f_1))
			{
				func_712(Global_1051387->f_3693[iVar0 /*16*/]);
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
		}
	}
	if (Global_1051387->f_3692 == -1)
	{
		Global_1051387->f_3692 = 0;
	}
	iVar8 = Global_1051387->f_3692 + 1;
	if (iVar8 == 39 || iVar8 == -1)
	{
		iVar8 = 0;
	}
	while (iVar8 != Global_1051387->f_3692)
	{
		if (BUILTIN::VDIST2((Global_1051387->f_3693[iVar8 /*16*/])->f_1, Global_36) < func_715(iVar8, 1))
		{
			Global_1051387->f_3692 = iVar8;
		}
		else
		{
			iVar8++;
			if (iVar8 == 39)
			{
				iVar8 = 0;
			}
		}
	}
	func_716(Global_1051387->f_3693[Global_1051387->f_3692 /*16*/], Global_1051387->f_3692);
	func_717(Global_1051387->f_3692);
	if (Global_1051387->f_3666.f_1 != -1)
	{
		func_718(&(Global_1051387->f_3693[Global_1051387->f_3666.f_1 /*16*/]));
	}
	else if (aggregate_func_2627())
	{
		iVar9 = 0;
		while (iVar9 < 39)
		{
			func_718(&(Global_1051387->f_3693[iVar9 /*16*/]));
			if (Global_1051387->f_3666.f_1 != -1)
			{
			}
			else
			{
				iVar9++;
			}
		}
	}
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = aggregate_func_4369(iParam0);
	if (!func_720(iParam0, iVar0) || func_722(iParam0, iVar0, ((iParam1 == -1 || iParam1 != aggregate_func_4314()) || !aggregate_func_4461(aggregate_func_4314()))))
	{
		if (func_723(iParam0))
		{
			aggregate_func_1801(Global_1915170->f_17805[iParam0 /*11*/], 0);
			(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 0;
		}
		return 0;
	}
	bVar1 = false;
	if (!func_723(iParam0))
	{
		Global_1915170->f_17805[iParam0 /*11*/] = func_725(iVar0, iParam0, iParam1);
		if (&Global_1915170->f_17805[iParam0 /*11*/] != -1)
		{
			iVar2 = func_192(iVar0);
			if (iVar0 == 9)
			{
				iVar2 = func_726(iParam0, iVar0);
			}
			if (iVar2 != 0)
			{
				(Global_1915170->f_17805[iParam0 /*11*/])->f_1 = iVar2;
				func_728(&(Global_1915170->f_17805[iParam0 /*11*/]), aggregate_func_7599(iVar2));
			}
			bVar1 = true;
		}
		aggregate_func_4456(iParam0, 16);
		aggregate_func_4456(iParam0, 64);
		aggregate_func_4456(iParam0, 128);
		aggregate_func_4456(iParam0, -2147483648);
	}
	else
	{
		bVar1 = true;
	}
	func_730(iParam0);
	if (bVar1)
	{
		if (func_731(&(Global_1915170->f_17805[iParam0 /*11*/])) && !(Global_1915170->f_17805[iParam0 /*11*/])->f_5)
		{
			if (!((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -1 && !(Global_1915170->f_17805[iParam0 /*11*/])->f_8) && !aggregate_func_5362(iParam0, 8))
			{
				if (iParam1 == aggregate_func_5278(iParam0) && func_733(&(Global_1915170->f_17805[iParam0 /*11*/]), iParam1))
				{
					(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 1;
				}
			}
		}
		func_734(iParam0, iVar0);
	}
	return 1;
}

void func_223()
{
	int iVar0;
	struct<8> Var1;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;

	iVar0 = joaat("store");
	if (Global_1051387->f_4354.f_5 == -1)
	{
		if (!aggregate_func_2823(Global_1051387->f_4354.f_3, 0) && Global_1051387->f_4354.f_4 == 0)
		{
			aggregate_func_5003(0);
			return;
		}
	}
	if (!aggregate_func_3156())
	{
		aggregate_func_5003(0);
		return;
	}
	if (!func_737())
	{
		func_738(0);
		return;
	}
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iVar0))
	{
		return;
	}
	if (Global_1051387->f_4354.f_1 && !UIAPPS::_IS_APP_RUNNING(iVar0))
	{
		func_738(1);
		return;
	}
	else
	{
		if (Global_1051387->f_4354.f_2 == 0)
		{
			Var1.f_2 = 0;
			Var1.f_3 = MISC::GET_HASH_KEY("SHOP_YES");
			Var1.f_7 = MISC::GET_HASH_KEY("SHOP_NO");
			Var1.f_3.f_3 = 0;
			aggregate_func_4239(&Var1);
			if (Global_1051387->f_4354.f_5 != -1)
			{
				iVar20 = Global_1051387->f_4354.f_5;
			}
			else if (Global_1051387->f_4354.f_3 != 0)
			{
				iVar20 = func_741(Global_1051387->f_4354.f_3, func_740(Global_1051387->f_4354.f_3), 1, 0, 1);
			}
			else
			{
				iVar20 = aggregate_func_4944(aggregate_func_4660(Global_1051387->f_4354.f_4, -570078785, 0, 1));
			}
			if (iVar20 == 1)
			{
				Global_1051387->f_4354.f_2 = aggregate_func_3170(&Var1, "GLOBAL_ALERT_ALT", MISC::_CREATE_VAR_STRING(2, "SHOP_GOLD_STORE_ALERT_S", iVar20), 0, 1);
			}
			else
			{
				Global_1051387->f_4354.f_2 = aggregate_func_3170(&Var1, "GLOBAL_ALERT_ALT", MISC::_CREATE_VAR_STRING(2, "SHOP_GOLD_STORE_ALERT", iVar20), 0, 1);
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT")))
		{
			_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1051387->f_4354.f_2);
			Global_1051387->f_4354.f_2 = 0;
			iVar21 = UIAPPS::_LAUNCH_APP_BY_HASH(iVar0);
			if (iVar21 == 1 || iVar21 == 2)
			{
				return;
			}
			else
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(true);
				CAM::DO_SCREEN_FADE_OUT(0);
				Global_1051387->f_4354.f_1 = 1;
			}
			iVar22 = func_745();
			iVar23 = aggregate_func_5341();
			bVar24 = aggregate_func_2972(Global_1051387->f_4354.f_3, 1) > NETWORK::_0x32C90CDFAF40514C();
			if (iVar22 != 0 && iVar23 != 0)
			{
				TELEMETRY::_0x536B6025E94AC48F(iVar22, iVar23, Global_1051387->f_4354.f_3, bVar24);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
		{
			_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1051387->f_4354.f_2);
			Global_1051387->f_4354.f_2 = 0;
			aggregate_func_5003(0);
			return;
		}
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = aggregate_func_4369(Global_1051387->f_4558);
	if (Global_1051387->f_4558 != -1)
	{
		if ((((Global_1051387->f_69[iVar0 /*76*/])->f_18 != Global_1051387->f_4558 || aggregate_func_5362(Global_1051387->f_4558, 1)) || aggregate_func_2627()) || aggregate_func_4298(&(Global_1051387->f_4559)) > 20f)
		{
			Global_1051387->f_4558 = -1;
			aggregate_func_4313(&(Global_1051387->f_4559));
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		else if (Global_1915170->f_19742.f_1 != Global_1051387->f_4558)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 295, true);
			if (aggregate_func_4625())
			{
				aggregate_func_4580();
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				UIAPPS::_CLOSE_APP_BY_HASH(29649618);
				return;
			}
			if (aggregate_func_5062())
			{
				aggregate_func_5263();
				return;
			}
			if (PED::_0xA911EE21EDF69DAF(Global_35) || aggregate_func_5337(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0xED00D72F81CF7278(iVar1, 0, 0);
				}
				return;
			}
			if (aggregate_func_755(Global_35))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (!aggregate_func_2905(Global_35, -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				}
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!aggregate_func_2905(Global_35, 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				}
				return;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_752(Global_1051387->f_4558, &vVar2))
				{
					aggregate_func_30(Global_35, vVar2, 0f, 2, 1073741824 /* Float: 2f */);
				}
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
				CAM::DO_SCREEN_FADE_OUT(500);
			}
		}
	}
}

void func_225(var uParam0)
{
	var uVar0;

	if (Global_1051387->f_3218 <= 12)
	{
		if ((Global_1051387->f_3218 % 4) == 0)
		{
			if (((((((UNLOCK::_UNLOCK_IS_UNLOCKED(aggregate_func_5121(Global_1915170->f_19742.f_1)) && WEAPON::_0xCB690F680A3EA971(Global_35, 7)) && Global_1915170->f_19742 != 9) && Global_1915170->f_19742 != 18) && Global_1915170->f_19742 != 28) && Global_1915170->f_19742 != 14) && Global_1915170->f_19742 != 29) && Global_1915170->f_19742 != 27)
			{
				*uParam0 |= 1024;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 1024);
			}
		}
	}
	else
	{
		Global_1051387->f_3218 = 0;
		if (&Global_1273882->f_88[&Global_1273882])
		{
			*uParam0 |= 8;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8);
		}
		if (aggregate_func_245(Global_1273882->f_10, 1, 0, 1) && Global_1915170->f_19742 != 37)
		{
			*uParam0 |= 4;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4);
		}
		if (((aggregate_func_5073(&uVar0) && !aggregate_func_5563(Global_1915170->f_19742)) && !func_756(Global_1915170->f_19742)) && !Global_1954385->f_1)
		{
			*uParam0 |= 16384;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 16384);
		}
		if (Global_1915170->f_19742 == 29)
		{
			if (WEAPON::_0x0DE0944ECCB3DF5D(Global_35) || FIRE::IS_EXPLOSION_IN_SPHERE(35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5f))
			{
				*uParam0 |= 32768;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 32768);
			}
		}
		if (func_757(Global_1273882->f_10, 10000) && Global_1915170->f_19742 != 37)
		{
			*uParam0 |= 256;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 256);
		}
		if (aggregate_func_3638() || (Global_1915170->f_19742 == 37 && aggregate_func_4255(aggregate_func_4320())))
		{
			*uParam0 |= 4096;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 4096);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1273882->f_8))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1273882->f_8))
			{
				*uParam0 |= 64;
			}
			else
			{
				*uParam0 = (*uParam0 - *uParam0 & 64);
			}
		}
		if (func_760())
		{
			*uParam0 |= 8192;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 8192);
		}
		if (PED::_0xA911EE21EDF69DAF(Global_1273882->f_8))
		{
			*uParam0 |= 128;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 128);
		}
		if (aggregate_func_6229() && !aggregate_func_5600())
		{
			*uParam0 |= 2048;
		}
		else
		{
			*uParam0 = (*uParam0 - *uParam0 & 2048);
		}
	}
	Global_1051387->f_3218++;
}

bool func_226(int iParam0)
{
	if (Global_1051387->f_40 < 1)
	{
		*iParam0 = -1;
		return false;
	}
	*iParam0 = Global_1051387[Global_1051387->f_41];
	Global_1051387->f_41++;
	if (Global_1051387->f_41 >= Global_1051387->f_40)
	{
		Global_1051387->f_41 = 0;
	}
	return true;
}

void func_228(bool bParam0)
{
	if (!(bParam0 && Global_1915170->f_21989))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, 1807503187);
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, 1807503187, 0);
		}
	}
	Global_1915170->f_21989 = bParam0;
}

void func_229()
{
	if (!aggregate_func_3363(34))
	{
		func_228(0);
		if (func_764())
		{
			if (!func_765(34))
			{
			}
		}
	}
	else if (func_766())
	{
		func_228(1);
	}
	else
	{
		func_228(0);
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1051387->f_3659 < 0 || Global_1051387->f_3659 == 4) || &Global_1051387->f_3582[Global_1051387->f_3659 /*19*/] == -1)
	{
		Global_1051387->f_3659 = 0;
	}
	iVar3 = Global_1051387->f_3659;
	if (&Global_1051387->f_3582[iVar3 /*19*/] != -1)
	{
		func_707(&(Global_1051387->f_3582[iVar3 /*19*/]), 30);
		switch ((Global_1051387->f_3582[iVar3 /*19*/])->f_1)
		{
			case 0:
				func_767(iVar3, 1);
				break;
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_8) || !ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_7))
				{
					if (&Global_1051387->f_3693[30 /*16*/] != &Global_1051387->f_3582[iVar3 /*19*/])
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[30 /*16*/])->f_4))
					{
					}
					else
					{
						(Global_1051387->f_3582[iVar3 /*19*/])->f_7 = (Global_1051387->f_3693[30 /*16*/])->f_4;
						(Global_1051387->f_3582[iVar3 /*19*/])->f_8 = (Global_1051387->f_3693[30 /*16*/])->f_5;
					}
				}
				else
				{
					iVar0 = (Global_1051387->f_3582[iVar3 /*19*/])->f_8;
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar3 /*19*/])->f_7))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_7, true, false);
					}
					func_767(iVar3, 2);
				}
				break;
			case 2:
				if ((Global_1051387->f_3582[iVar3 /*19*/])->f_9 == -1)
				{
					func_767(iVar3, 3);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_15) || !ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_14))
				{
					iVar2 = aggregate_func_5121((Global_1051387->f_3582[iVar3 /*19*/])->f_9);
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar2))
					{
						func_767(iVar3, 3);
					}
					else if (&Global_1051387->f_3693[31 /*16*/] != (Global_1051387->f_3582[iVar3 /*19*/])->f_9)
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[31 /*16*/])->f_4))
					{
					}
					else
					{
						(Global_1051387->f_3582[iVar3 /*19*/])->f_14 = (Global_1051387->f_3693[31 /*16*/])->f_4;
						(Global_1051387->f_3582[iVar3 /*19*/])->f_15 = (Global_1051387->f_3693[31 /*16*/])->f_5;
					}
				}
				else
				{
					iVar0 = (Global_1051387->f_3582[iVar3 /*19*/])->f_15;
					ENTITY::SET_ENTITY_INVINCIBLE((Global_1051387->f_3582[iVar3 /*19*/])->f_15, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar3 /*19*/])->f_15))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar3 /*19*/])->f_15, true, false);
					}
					ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
					PED::SET_PED_CAN_RAGDOLL(iVar0, false);
					PED::_0xAE6004120C18DF97(iVar0, 0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 376, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 44, true);
					(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 0;
					func_767(iVar3, 3);
				}
				break;
			case 3:
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_8))
				{
					func_767(iVar3, 0);
					Jump @1289; //curOff = 801
				}
				else if (!Global_1938932->f_51)
				{
					if (!TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar3 /*19*/])->f_6))
					{
					}
					else if (PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar3 /*19*/])->f_8, (Global_1051387->f_3582[iVar3 /*19*/])->f_6))
					{
					}
					else if (aggregate_func_4459(30, 1))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS((Global_1051387->f_3582[iVar3 /*19*/])->f_8, 1, 0);
						TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar3 /*19*/])->f_8, (Global_1051387->f_3582[iVar3 /*19*/])->f_6, 0, 0, false, true, 1778448947, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar3 /*19*/])->f_15))
				{
					if ((Global_1051387->f_3582[iVar3 /*19*/])->f_9 != -1)
					{
						func_767(iVar3, 2);
					}
					else
					{
						Jump @1286; //curOff = 1006
						if (TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar3 /*19*/])->f_13) && !PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar3 /*19*/])->f_15, (Global_1051387->f_3582[iVar3 /*19*/])->f_13))
						{
							TASK::CLEAR_PED_TASKS((Global_1051387->f_3582[iVar3 /*19*/])->f_15, 1, 0);
							TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar3 /*19*/])->f_15, (Global_1051387->f_3582[iVar3 /*19*/])->f_13, 0, 0, false, true, 1595886358, false, -1082130432 /* Float: -1f */, 0);
							(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 0;
						}
						else if (!(Global_1051387->f_3582[iVar3 /*19*/])->f_16)
						{
							if (AUDIO::_0xBE28DB99556FF8D9((Global_1051387->f_3582[iVar3 /*19*/])->f_15) != 0 && !aggregate_func_7125())
							{
								iVar1 = func_770(&(Global_1051387->f_3582[iVar3 /*19*/]));
								if (iVar1 != 0)
								{
									AUDIO::_0x8E901B65206C2D3E((Global_1051387->f_3582[iVar3 /*19*/])->f_15);
									AUDIO::_0xB93A769B8B726950((Global_1051387->f_3582[iVar3 /*19*/])->f_15, iVar1);
									AUDIO::_0xC4CFCE4C656EF480((Global_1051387->f_3582[iVar3 /*19*/])->f_15);
								}
							}
							(Global_1051387->f_3582[iVar3 /*19*/])->f_16 = 1;
						}
					}
					Global_1051387->f_3659++;
				}
				default:
					break;
		}
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = aggregate_func_4314();
	if (!func_771(iVar0))
	{
		return;
	}
	Global_1268116->f_45 = (Global_1268116->f_45 + 1 % 2);
	iVar1 = Global_1268116->f_45;
	if (!func_772(iVar0, iVar1))
	{
		return;
	}
	(Global_1051387->f_69[36 /*76*/])->f_10 = 50f;
	if (SCRIPTS::IS_THREAD_ACTIVE((Global_1051387->f_69[36 /*76*/])->f_9, false))
	{
		return;
	}
	if (BUILTIN::VDIST((Global_1268116->f_32[Global_1268116->f_45 /*6*/])->f_1, Global_36) < (Global_1051387->f_69[36 /*76*/])->f_10)
	{
		Global_1051387->f_69[36 /*76*/] = 0;
		(Global_1051387->f_69[36 /*76*/])->f_18 = func_773(iVar0, iVar1);
		(Global_1051387->f_69[36 /*76*/])->f_25 = &Global_1268116->f_47[Global_1268116->f_45];
		(Global_1051387->f_69[36 /*76*/])->f_3 = { func_775(aggregate_func_9357(iVar0, iVar1)) };
		(Global_1051387->f_69[36 /*76*/])->f_26 = &Global_1268116->f_50[Global_1268116->f_45];
		(Global_1051387->f_69[36 /*76*/])->f_2 = iVar0;
		(Global_1051387->f_69[36 /*76*/])->f_64 = aggregate_func_5121((Global_1051387->f_69[36 /*76*/])->f_18);
		if (func_776(36))
		{
			if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6005) > 0)
			{
				Var2 = 36;
				Var2.f_2 = (Global_1051387->f_69[36 /*76*/])->f_25;
				Var2.f_3 = (Global_1051387->f_69[36 /*76*/])->f_26;
				Var2.f_1 = iVar0;
				Var2.f_4 = { (Global_1051387->f_69[36 /*76*/])->f_3 };
				(Global_1051387->f_69[36 /*76*/])->f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_777(36), &Var2, 7, 6005);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_777(36));
				aggregate_func_4449(36, 2);
				aggregate_func_6609(36, 8);
			}
		}
		else if (!aggregate_func_4429(36, 2))
		{
			func_780(36);
		}
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1051387->f_4348 < 0 || Global_1051387->f_4348 == 4)
	{
		Global_1051387->f_4348 = 0;
	}
	iVar1 = Global_1051387->f_4348;
	iVar2 = &Global_1051387->f_4319[iVar1 /*7*/];
	if (iVar2 != -1)
	{
		func_707(iVar2, 32);
		if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_4319[iVar1 /*7*/])->f_1))
		{
			if (&Global_1051387->f_3693[32 /*16*/] != iVar2)
			{
			}
			else if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[32 /*16*/])->f_4))
			{
			}
			else
			{
				(Global_1051387->f_4319[iVar1 /*7*/])->f_1 = (Global_1051387->f_3693[32 /*16*/])->f_4;
				(Global_1051387->f_4319[iVar1 /*7*/])->f_2 = (Global_1051387->f_3693[32 /*16*/])->f_5;
			}
		}
		else
		{
			iVar0 = (Global_1051387->f_4319[iVar1 /*7*/])->f_2;
			if (!TASK::_0x841475AC96E794D1((Global_1051387->f_4319[iVar1 /*7*/])->f_6))
			{
			}
			else if (PED::_0x9C54041BB66BCF9E(iVar0, (Global_1051387->f_4319[iVar1 /*7*/])->f_6))
			{
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3((Global_1051387->f_4319[iVar1 /*7*/])->f_5, 8207, 0, 0);
				if (STREAMING::_0x9427C94D2E4094A4((Global_1051387->f_4319[iVar1 /*7*/])->f_5, 0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					TASK::_TASK_USE_SCENARIO_POINT(iVar0, (Global_1051387->f_4319[iVar1 /*7*/])->f_6, 0, 0, true, false, (Global_1051387->f_4319[iVar1 /*7*/])->f_5, false, -1082130432 /* Float: -1f */, 0);
				}
			}
		}
	}
	Global_1051387->f_4348++;
}

bool func_233(int iParam0)
{
	return aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 8);
	return false;
}

int func_234(int iParam0)
{
	if (!func_781(iParam0))
	{
		if (!func_782(iParam0))
		{
			return 0;
		}
	}
	else
	{
		if (aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 1))
		{
			aggregate_func_4243(Global_1915170->f_19887[iParam0], 1);
		}
		if (!func_784(iParam0))
		{
			return 0;
		}
		else
		{
			aggregate_func_4241(Global_1915170->f_19887[iParam0], 8);
		}
	}
	return 1;
}

void func_235(int iParam0, int iParam1)
{
	aggregate_func_4239(iParam0);
	if (STREAMING::IS_MODEL_VALID((Global_1051387->f_69[iParam0 /*76*/])->f_19))
	{
		STREAMING::REQUEST_MODEL((Global_1051387->f_69[iParam0 /*76*/])->f_19, false);
	}
	aggregate_func_7103(Global_1051387->f_69[iParam0 /*76*/], 2, iParam0);
}

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (((Global_1051387->f_3220 != -1 && Global_1051387->f_3221 != 0) && _NAMESPACE71::_0x59FA676177DBE4C9(Global_1051387->f_3221) > 5) && !Global_1915170->f_20135)
	{
		Global_1051387->f_3221 = 0;
		Global_1051387->f_3220 = -1;
	}
	func_707(iParam1, iParam0);
	func_787(iParam0);
	if (aggregate_func_3363(iParam0))
	{
		aggregate_func_4239(iParam0);
	}
	else if (BUILTIN::VDIST(Global_1273882->f_17, (Global_1051387->f_69[iParam0 /*76*/])->f_3) < (Global_1051387->f_69[iParam0 /*76*/])->f_10)
	{
		if (!func_765(iParam0))
		{
		}
	}
	if (!aggregate_func_5999(iParam0) && VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		if (aggregate_func_5362(iParam1, 1))
		{
			if (aggregate_func_4459(iParam0, 2))
			{
				VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
				PATHFIND::_0x2C87C3E1C7B96EE2((Global_1051387->f_69[iParam0 /*76*/])->f_25);
				aggregate_func_4916(iParam0, 2);
			}
		}
		else if (!aggregate_func_4459(iParam0, 2))
		{
			iVar0 = 0;
			iVar1 = 0;
			fVar3 = 0f;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				if (aggregate_func_4459(iVar1, 2))
				{
					fVar4 = BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar1 /*76*/])->f_3);
					if (fVar4 > fVar3)
					{
						fVar3 = fVar4;
						iVar2 = iVar1;
					}
					iVar0++;
					if (iVar0 == 4)
					{
					}
					else
					{
						iVar1++;
					}
					if (iVar0 == 4)
					{
						if (BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iParam0 /*76*/])->f_3) < fVar3)
						{
							VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iVar2 /*76*/])->f_25, 623901053);
							PATHFIND::_0x2C87C3E1C7B96EE2((Global_1051387->f_69[iVar2 /*76*/])->f_25);
							aggregate_func_4916(iVar2, 2);
							iVar0 = (iVar0 - 1);
						}
					}
					if (iVar0 < 4)
					{
						VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iParam0 /*76*/])->f_25, aggregate_func_2436());
						PATHFIND::_0x19C7567D2F2287D6((Global_1051387->f_69[iParam0 /*76*/])->f_25, 16);
						aggregate_func_4916(iParam0, 2);
					}
					if (aggregate_func_4429(iParam0, 512))
					{
						if (Global_1051387->f_3221 != 0 && iParam0 == Global_1915170->f_19742)
						{
							aggregate_func_2985(1);
							Global_1051387->f_3221 = 0;
							Global_1051387->f_3220 = -1;
						}
						if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && (Global_1051387->f_69[iParam0 /*76*/])->f_50 & 134217728 != 0)
						{
							func_793(iParam0);
						}
						if (func_794(iParam0) || (Global_1051387->f_69[iParam0 /*76*/])->f_50 & 268435456 != 0)
						{
							func_795(iParam0, iParam1);
						}
						else
						{
							func_796(iParam0);
						}
					}
					else
					{
						if (func_794(iParam0))
						{
							if (func_797(iParam0))
							{
								func_798(iParam0);
							}
							if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && !aggregate_func_4429(iParam0, 65536))
							{
								aggregate_func_4789(iParam0, 65536);
							}
						}
						if (func_800(iParam0))
						{
							func_801();
						}
						if (iParam0 != 9)
						{
							if ((Global_1051387->f_69[iParam0 /*76*/])->f_50 & 1 != 0 && !(Global_1051387->f_69[iParam0 /*76*/])->f_50 & 134217728 != 0)
							{
								func_802(iParam0, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_237()
{
	char* sVar0;
	int iVar1;

	sVar0 = "net_ugc_end_flow";
	if (!aggregate_func_5349(4))
	{
		return;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar1) != 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, -1, true, 0))
	{
		return;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		Global_265331->f_124672 = SCRIPTS::START_NEW_SCRIPT(sVar0, 6000);
		aggregate_func_7454(4);
	}
}

void func_239(int iParam0)
{
	aggregate_func_4241(&(Global_1915119->f_1), iParam0);
}

void func_240(int iParam0)
{
	aggregate_func_4243(&(Global_1915119->f_1), iParam0);
}

void func_241()
{
	struct<51> Var0;

	MISC::_CANCEL_ONSCREEN_KEYBOARD();
	func_806();
	aggregate_func_8074(0);
	Global_1958224->f_53 = 0;
	Global_1958224->f_52 = 0;
	StringCopy(&(Global_1958224->f_56), "", 128);
	Var0.f_50 = 256;
	MISC::_COPY_MEMORY(Global_1958224, &Var0, 51);
}

int func_243()
{
	return Global_1958224->f_51;
}

bool func_244()
{
	int iVar0;

	if (func_807() == 0)
	{
		return false;
	}
	iVar0 = func_808();
	if (iVar0 != -1)
	{
		func_246(iVar0);
		return false;
	}
	return true;
}

void func_246(int iParam0)
{
	aggregate_func_8074(5);
	aggregate_func_8074(iParam0);
}

void func_247()
{
	struct<4> Var0;
	char* sVar19;

	if (Global_1958224->f_52 == 0)
	{
		Var0.f_2 = 0;
		Var0.f_3 = 1330277134; /* GXTEntry: "Accept" */
		Var0.f_3.f_3 = 0;
		sVar19 = "";
		switch (func_810())
		{
			case -1:
				aggregate_func_8074(8);
				return;
			case 0:
				aggregate_func_8074(4);
				sVar19 = "ERROR_PROFANITY_SERVICE_DOWN";
				break;
			case 1:
				aggregate_func_8074(5);
				sVar19 = "ERROR_FAILEDPROFANITY";
				break;
			case 2:
				sVar19 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
				break;
			case 3:
				sVar19 = "NM_GC_UGC_RESTRICT";
				break;
		}
		if (func_811(&Var0, "GLOBAL_ALERT_ALT", sVar19, 0, 0, 1))
		{
		}
		else
		{
			aggregate_func_8074(3);
			aggregate_func_8074(7);
			return;
		}
	}
	if (aggregate_func_1471() != -1577439368)
	{
		func_813();
		aggregate_func_8074(7);
	}
}

void func_248(char* sParam0)
{
	StringCopy(&(Global_1958224->f_56), sParam0, 128);
}

int func_250()
{
	return Global_1958224->f_54;
}

int func_252()
{
	if (Global_1572887->f_13 != -1)
	{
		Global_35 = Global_1273882->f_8;
		Global_36 = { Global_1273882->f_17 };
		return Global_1273882->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_254()
{
	Global_1939168->f_7 = 0;
	Global_1939168->f_8 = 0;
	Global_1939168->f_20 = 0;
	Global_1939168->f_9 = 0;
	Global_1939168->f_10 = 0;
	Global_1939168->f_11 = 0;
	Global_1939168->f_12 = 0;
	Global_1939168->f_13 = -1;
	Global_1939168->f_14 = -1;
	Global_1939168->f_15 = -1;
	Global_1939168->f_17 = 0;
}

void func_256(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = Global_1951131->f_919;
	switch (uParam0[iVar0 /*4*/])
	{
		case 26:
			func_814(((*uParam0)[iVar0 /*4*/])->f_1);
			break;
		case 27:
			if (aggregate_func_4734(32))
			{
				func_815(&(Global_1951131->f_2228));
				func_817(Global_1951131->f_2228, func_816(*((*uParam0)[iVar0 /*4*/]), 2));
			}
			else
			{
				func_815(&(Global_1951131->f_1657));
				func_817(Global_1951131->f_1657, func_816(*((*uParam0)[iVar0 /*4*/]), 2));
			}
			func_818();
			break;
		case 35:
			func_819(&(Global_1951131->f_1657));
			break;
		case 28:
			bVar2 = ((*uParam0)[iVar0 /*4*/])->f_1;
			if (aggregate_func_2827(bVar2) != -999503751)
			{
				bVar3 = aggregate_func_8803(bVar2);
				if (bVar3 == -358215195)
				{
				}
				else
				{
					bVar1 = bVar2 == &Global_1951131->f_1657.f_1[aggregate_func_4716(bVar3, 1) /*3*/];
					Jump @305; //curOff = 290
					bVar1 = bVar2 == Global_1951131->f_1657;
					aggregate_func_3041(bVar2, 1, 1, bVar1);
					Jump @498; //curOff = 315
					bVar2 = ((*uParam0)[iVar0 /*4*/])->f_1;
					aggregate_func_5195(bVar2, 1, 1);
					Jump @498; //curOff = 336
					func_817(Global_1951131->f_1657, 0);
					Jump @498; //curOff = 351
					func_817(Global_1951131->f_1657, 0);
					Jump @498; //curOff = 366
					func_823(((*uParam0)[iVar0 /*4*/])->f_1);
					Jump @498; //curOff = 381
					func_824(((*uParam0)[iVar0 /*4*/])->f_1);
					Jump @498; //curOff = 396
					if (aggregate_func_4734(32))
					{
						func_825(&(Global_1951131->f_2228));
					}
					else
					{
						func_825(&(Global_1951131->f_1657));
					}
					Jump @498; //curOff = 433
					func_826(&(Global_1951131->f_1055.f_9), Global_1951131->f_1055.f_6);
					Jump @498; //curOff = 458
					func_827();
					Jump @498; //curOff = 465
					if (Global_1951131->f_926)
					{
					}
					else
					{
						if (aggregate_func_6997())
						{
							return;
						}
						aggregate_func_9159();
					}
				}
				func_830(uParam0[iVar0 /*4*/]);
				iVar0 = (iVar0 + 1 % 20);
				Global_1951131->f_919 = iVar0;
				Global_1951131->f_918 = (Global_1951131->f_918 - 1);
			}
			default:
				break;
	}
}

void func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = Global_1951131->f_921;
	if (((*uParam0)[iVar1 /*4*/])->f_3 != 0)
	{
		iVar0 = ((*uParam0)[iVar1 /*4*/])->f_3;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	}
	if (!func_831(iVar0, &iVar3))
	{
		return;
	}
	if (iVar3 == 0)
	{
		switch (uParam0[iVar1 /*4*/])
		{
			case 5:
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 4096))
				{
					PED::_0x314C5465195F3B30(iVar0, Global_17173.f_54.f_644.f_1775);
				}
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 16384))
				{
					PED::_0x283978A15512B2FE(iVar0, 1);
				}
				PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 0, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
				break;
			case 13:
				func_832(&(Global_1951131->f_1055));
				break;
			case 3:
				if (Global_1951131->f_1055.f_1 == 0)
				{
				}
				else
				{
					if (!aggregate_func_1840(&(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9)))
					{
						return;
					}
					Jump @1576; //curOff = 358
					if (!func_834(iVar0, &(Global_1951131->f_1055)))
					{
						return;
					}
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 16))
					{
						PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, false);
					}
					Jump @1576; //curOff = 409
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					aggregate_func_525(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 508
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					aggregate_func_525(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 607
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					aggregate_func_525(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 706
					if (func_816(*((*uParam0)[iVar1 /*4*/]), 2048))
					{
						if (!func_834(iVar0, &(Global_1951131->f_1055)))
						{
							return;
						}
					}
					aggregate_func_525(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), 64, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), 1, 1);
					Jump @1576; //curOff = 805
					aggregate_func_4238();
					Jump @1576; //curOff = 812
					func_837(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 64), func_816(*((*uParam0)[iVar1 /*4*/]), 128));
					Jump @1576; //curOff = 897
					func_837(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 64), func_816(*((*uParam0)[iVar1 /*4*/]), 128));
					Jump @1576; //curOff = 982
					iVar4 = -1;
					if (((*uParam0)[iVar1 /*4*/])->f_1 != 0)
					{
						iVar4 = ((*uParam0)[iVar1 /*4*/])->f_1;
					}
					aggregate_func_525(&(Global_1951131->f_1538), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), iVar4, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), !func_816(*((*uParam0)[iVar1 /*4*/]), 1024), 1);
					Jump @1576; //curOff = 1083
					iVar4 = -1;
					if (((*uParam0)[iVar1 /*4*/])->f_1 != 0)
					{
						iVar4 = ((*uParam0)[iVar1 /*4*/])->f_1;
					}
					aggregate_func_525(&(Global_1951131->f_1657), iVar0, func_816(*((*uParam0)[iVar1 /*4*/]), 2), iVar4, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16), !func_816(*((*uParam0)[iVar1 /*4*/]), 1024), 1);
					Jump @1576; //curOff = 1184
					iVar2 = aggregate_func_4716(((*uParam0)[iVar1 /*4*/])->f_1, 1);
					aggregate_func_2100(iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 256));
					PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1250
					iVar2 = aggregate_func_4716((Global_1951131->f_734[iVar1 /*4*/])->f_1, 1);
					func_839(&(Global_1951131->f_1657), iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1316
					iVar2 = aggregate_func_4716((Global_1951131->f_734[iVar1 /*4*/])->f_1, 1);
					func_839(&(Global_1951131->f_1538), iVar0, iVar2, !func_816(*((*uParam0)[iVar1 /*4*/]), 4), func_816(*((*uParam0)[iVar1 /*4*/]), 16));
					Jump @1576; //curOff = 1382
					func_840(iVar0, 1);
					Jump @1576; //curOff = 1392
					if (!func_841(2))
					{
					}
					else
					{
						if (!func_843(iVar0, func_842(255), ((*uParam0)[iVar1 /*4*/])->f_1))
						{
						}
						PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
						Jump @1576; //curOff = 1455
						PED::_0xD710A5007C2AC539(iVar0, -668168749, 0);
						Jump @1576; //curOff = 1470
						if (!func_844(*((*uParam0)[iVar1 /*4*/])))
						{
							return;
						}
						Jump @1576; //curOff = 1492
						aggregate_func_3108(iVar0, ((*uParam0)[iVar1 /*4*/])->f_1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16));
						Jump @1576; //curOff = 1525
						aggregate_func_3109(iVar0, ((*uParam0)[iVar1 /*4*/])->f_1, 1, func_816(*((*uParam0)[iVar1 /*4*/]), 16), func_816(*((*uParam0)[iVar1 /*4*/]), 8192));
					}
				}
				if (func_816(*((*uParam0)[iVar1 /*4*/]), 32))
				{
				}
				func_830(uParam0[iVar1 /*4*/]);
				iVar1 = (iVar1 + 1 % 25);
				Global_1951131->f_921 = iVar1;
				Global_1951131->f_916 = (Global_1951131->f_916 - 1);
				default:
					break;
		}
	}
}

void func_258(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_917)
	{
		if (((*uParam0)[iVar0 /*4*/])->f_3 != 0)
		{
			iVar2 = ((*uParam0)[iVar0 /*4*/])->f_3;
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		}
		if (!func_831(iVar2, &iVar3))
		{
			return;
		}
		if (iVar3 == 0)
		{
			switch (uParam0[iVar0 /*4*/])
			{
				case 23:
					PED::_APPLY_PED_METAPED_OUTFIT(((*uParam0)[iVar0 /*4*/])->f_1, iVar2, true, false);
					bVar1 = true;
					break;
				case 24:
					func_847(iVar2, ((*uParam0)[iVar0 /*4*/])->f_1);
					bVar1 = true;
				case 25:
					PED::_0x1902C4CFCC5BE57C(iVar2, ((*uParam0)[iVar0 /*4*/])->f_1);
					bVar1 = true;
					break;
			}
		}
		func_830(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	if (bVar1)
	{
		PED::_0xCC8CA3E88256E58F(iVar2, 0, 1, 1, 1, func_816(*((*uParam0)[iVar0 /*4*/]), 16));
	}
	Global_1951131->f_917 = 0;
}

float func_263()
{
	return 0.5f;
}

bool func_264()
{
	return Global_1938998->f_13;
}

float func_266()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1938998->f_15.f_1 - func_263()) * (1f / (1f - func_263())));
	fVar1 = ((Global_1938998->f_15.f_5 * fVar0) + (Global_1938998->f_15.f_4 * (1f - fVar0)));
	return (fVar1 * Global_1938998->f_15.f_2);
}

float func_267()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1938998->f_15.f_1 - func_263()) * (1f / (1f - func_263())));
	fVar1 = ((Global_1938998->f_15.f_7 * fVar0) + (Global_1938998->f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1938998->f_15.f_3);
}

bool func_268()
{
	if (Global_1938998->f_14)
	{
		return false;
	}
	if (Global_1938998->f_28.f_1)
	{
		return true;
	}
	if (Global_1938998->f_9 >= 1f && func_853())
	{
		func_854();
		return true;
	}
	return false;
}

void func_269()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		aggregate_func_459(1);
		aggregate_func_8831();
	}
	vVar2 = { 1f, 1f, 1f };
	switch (Global_1938998->f_28.f_8)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
			aggregate_func_8832(1);
			Global_1938998->f_28.f_3 = 0;
			break;
		case 1:
			if (!Global_1938998->f_28.f_3)
			{
				STREAMING::REQUEST_ANIM_DICT(func_858());
				Global_1938998->f_28.f_3 = 1;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_858()))
			{
				aggregate_func_8832(2);
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_OUT(5000);
			Global_1938998->f_28.f_4 = MISC::GET_GAME_TIMER();
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				aggregate_func_8832(3);
			}
			else
			{
				aggregate_func_8832(4);
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar1, Global_36 + vVar2, 1073741824 /* Float: 2f */, 0);
				aggregate_func_8832(5);
			}
			break;
		case 4:
			if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
			{
				bVar0 = true;
			}
			if (func_859(Global_35))
			{
				bVar0 = false;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_0x2D0571BB55879DA2(Global_35) == -1241981548)
			{
				bVar0 = false;
			}
			if (Global_1938998->f_28.f_4 > 8000)
			{
				if (bVar0 && !Global_1938998->f_28)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_858(), func_860(), 4f, -2f, 5000, 0, 0, 0, 0, 0, 0, 0);
					Global_1938998->f_28 = 1;
				}
				if (Global_1938998->f_28.f_3)
				{
					STREAMING::REMOVE_ANIM_DICT(func_858());
					Global_1938998->f_28.f_3 = 0;
				}
				aggregate_func_8832(5);
			}
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT() && !PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					aggregate_func_375(Global_35, 357427886, 1, 1);
				}
			}
			break;
		case 6:
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(5000);
			}
			aggregate_func_459(1);
			aggregate_func_8831();
			break;
	}
}

int func_271(int iParam0)
{
	int iVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1896610)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1896610)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1896610)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1896610)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1896610)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1896610)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	((*Global_1896610)[iParam0 /*2*/])->f_1 = iVar0;
	return iVar0;
}

void func_274(int iParam0, int iParam1)
{
	(*Global_1896610)[iParam0 /*2*/] = (Global_1896610[iParam0 /*2*/] - (Global_1896610[iParam0 /*2*/] && iParam1));
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_861(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			aggregate_func_1999((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4251() != -1)
	{
		return;
	}
	if (func_861(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			aggregate_func_629((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

void func_284(char* sParam0)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar1 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar1 != 0)
		{
			if (iVar0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar1))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar1, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar1, 523);
				}
			}
			iVar1 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	if (!aggregate_func_4326(iParam0))
	{
		return;
	}
	func_394(aggregate_func_4336(iParam0), iParam1);
}

void func_293(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4326(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4336(iParam0);
	func_392(iVar0);
	aggregate_func_765(iVar0, aggregate_func_1987(iVar0));
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_885(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			aggregate_func_1999((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4251() != -1)
	{
		return;
	}
	if (func_885(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_886((iVar1 + iVar0)))
			{
				aggregate_func_629((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_298(int iParam0)
{
	if (!aggregate_func_4326(iParam0))
	{
		return;
	}
	func_887();
	switch (iParam0)
	{
		case 0:
			func_888(5, joaat("ANIMALS_ALLIGATOR"));
			func_888(10, -530650579);
			func_888(11, joaat("ANIMALS_ALLIGATOR"));
			func_888(12, -79992523);
			func_888(13, -1608748833);
			func_888(7, -1243003160);
			break;
		case 1:
			func_888(5, -431794078);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			break;
		case 2:
			func_888(5, -715307145);
			func_888(10, 1784992423);
			func_888(11, joaat("ANIMALS_ALLIGATOR"));
			func_888(12, 1784992423);
			func_888(13, -1608748833);
			func_888(7, 486487548);
			break;
		case 3:
			func_888(5, -2064541187);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, 506825778);
			break;
		case 4:
			func_888(5, -530650579);
			func_888(10, -530650579);
			func_888(11, 2024364203);
			func_888(12, -1897088481);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			func_888(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_888(5, -530650579);
			func_888(10, -1608748833);
			func_888(11, 1455354960);
			func_888(12, -530650579);
			func_888(13, -1608748833);
			func_888(7, 188176855);
			break;
		case 8:
			func_888(5, -79992523);
			func_888(10, -79992523);
			func_888(11, 796850253);
			func_888(12, joaat("animal_hen"));
			func_888(13, -79992523);
			func_888(7, -1063650279);
			break;
		case 9:
			func_888(5, -530650579);
			func_888(10, -530650579);
			func_888(11, 1455354960);
			func_888(12, -79992523);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			func_888(8, 239028334);
			break;
		case 10:
			func_888(5, -2064541187);
			func_888(10, -530650579);
			func_888(11, 1455354960);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, -604466256);
			break;
		case 11:
			func_888(5, -530650579);
			func_888(10, -1074047115);
			func_888(11, -1608748833);
			func_888(12, -1897088481);
			func_888(13, -1608748833);
			func_888(7, 662736559);
			break;
		case 12:
			func_888(5, -530650579);
			func_888(10, -1608748833);
			func_888(11, -1504621559);
			func_888(12, 1131021608);
			func_888(13, -2064541187);
			func_888(7, 486487548);
			break;
	}
}

void func_305(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			aggregate_func_3414(1497516462);
			aggregate_func_3010(2016141805);
			aggregate_func_3010(1010885152);
			aggregate_func_3010(-502324015);
			break;
		case 2016141805:
			aggregate_func_3010(1497516462);
			aggregate_func_3414(2016141805);
			aggregate_func_3010(1010885152);
			aggregate_func_3010(-502324015);
			break;
		case 1010885152:
			aggregate_func_3010(1497516462);
			aggregate_func_3010(2016141805);
			aggregate_func_3414(1010885152);
			aggregate_func_3010(-502324015);
			break;
		case -502324015:
			aggregate_func_3010(1497516462);
			aggregate_func_3010(2016141805);
			aggregate_func_3010(1010885152);
			aggregate_func_3414(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			aggregate_func_3010(-538889627);
			aggregate_func_3010(-538880323);
			aggregate_func_3010(-1056767524);
			aggregate_func_3414(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			aggregate_func_7069();
			aggregate_func_3414(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			aggregate_func_7070();
			aggregate_func_3414(iParam0);
			break;
		case 2019386373:
			aggregate_func_3010(-664252410);
			aggregate_func_3010(2109952320);
			aggregate_func_3414(2019386373);
			break;
		case -664252410:
			aggregate_func_3010(2019386373);
			aggregate_func_3010(2109952320);
			aggregate_func_3414(-664252410);
			break;
		case 2109952320:
			aggregate_func_3010(2019386373);
			aggregate_func_3010(-664252410);
			aggregate_func_3414(2109952320);
			break;
		case -1674179981:
			aggregate_func_3010(-1835851517);
			aggregate_func_3010(-1838352012);
			aggregate_func_3414(-1674179981);
			break;
		case -1835851517:
			aggregate_func_3010(-1674179981);
			aggregate_func_3010(-1838352012);
			aggregate_func_3414(-1835851517);
			break;
		case -1838352012:
			aggregate_func_3010(-1674179981);
			aggregate_func_3010(-1835851517);
			aggregate_func_3414(-1838352012);
			break;
		case -1717960576:
			aggregate_func_3010(210001842);
			aggregate_func_3414(-1717960576);
			break;
		case 210001842:
			aggregate_func_3010(-1717960576);
			aggregate_func_3414(210001842);
			break;
		case -150493654:
			aggregate_func_3010(-1271608261);
			aggregate_func_3010(1846061697);
			aggregate_func_3010(-1145519186);
			aggregate_func_3414(-150493654);
			break;
		case -1271608261:
			aggregate_func_3010(-150493654);
			aggregate_func_3010(1846061697);
			aggregate_func_3010(-1145519186);
			aggregate_func_3414(-1271608261);
			break;
		case 1846061697:
			aggregate_func_3010(-150493654);
			aggregate_func_3010(-1271608261);
			aggregate_func_3010(-1145519186);
			aggregate_func_3414(1846061697);
			Jump @2886; //curOff = 1081
			aggregate_func_3010(-150493654);
			aggregate_func_3010(-1271608261);
			aggregate_func_3010(1846061697);
			aggregate_func_3414(-1145519186);
			Jump @2886; //curOff = 1120
			aggregate_func_3010(280705402);
			aggregate_func_3010(1926308480);
			aggregate_func_3414(1766284049);
			Jump @2886; //curOff = 1150
			aggregate_func_3010(1766284049);
			aggregate_func_3010(1926308480);
			aggregate_func_3414(280705402);
			Jump @2886; //curOff = 1180
			aggregate_func_3010(1766284049);
			aggregate_func_3010(280705402);
			aggregate_func_3414(1926308480);
			Jump @2886; //curOff = 1210
			if (bParam1)
			{
				aggregate_func_3010(439465264);
				aggregate_func_3414(1609506757);
			}
			else
			{
				aggregate_func_3010(1609506757);
				aggregate_func_3010(439465264);
			}
			Jump @2886; //curOff = 1257
			if (aggregate_func_1518(1609506757))
			{
				if (bParam1)
				{
					aggregate_func_3414(439465264);
				}
				else
				{
					aggregate_func_3010(439465264);
				}
			}
			Jump @2886; //curOff = 1298
			aggregate_func_3010(-1612662716);
			aggregate_func_3414(1822001510);
			Jump @2886; //curOff = 1319
			aggregate_func_3010(1822001510);
			aggregate_func_3414(-1612662716);
			Jump @2886; //curOff = 1340
			aggregate_func_3010(1952610440);
			aggregate_func_3010(-223469678);
			aggregate_func_3010(-404698347);
			aggregate_func_3010(1517904467);
			aggregate_func_3414(1306158345);
			Jump @2886; //curOff = 1388
			aggregate_func_3010(1306158345);
			aggregate_func_3010(-223469678);
			aggregate_func_3010(-404698347);
			aggregate_func_3010(1517904467);
			aggregate_func_3414(1952610440);
			Jump @2886; //curOff = 1436
			aggregate_func_3010(1306158345);
			aggregate_func_3010(1952610440);
			aggregate_func_3010(-404698347);
			aggregate_func_3010(1517904467);
			aggregate_func_3414(-223469678);
			Jump @2886; //curOff = 1484
			aggregate_func_3010(1306158345);
			aggregate_func_3010(1952610440);
			aggregate_func_3010(-223469678);
			aggregate_func_3010(1517904467);
			aggregate_func_3414(-404698347);
			Jump @2886; //curOff = 1532
			aggregate_func_3010(1306158345);
			aggregate_func_3010(1952610440);
			aggregate_func_3010(-223469678);
			aggregate_func_3010(-404698347);
			aggregate_func_3414(1517904467);
			Jump @2886; //curOff = 1580
			aggregate_func_3010(931649776);
			aggregate_func_3010(-434590080);
			aggregate_func_3010(1743048395);
			aggregate_func_3010(449774763);
			aggregate_func_3414(1376646519);
			Jump @2886; //curOff = 1628
			aggregate_func_3010(1376646519);
			aggregate_func_3010(-434590080);
			aggregate_func_3010(1743048395);
			aggregate_func_3010(449774763);
			aggregate_func_3414(931649776);
			Jump @2886; //curOff = 1676
			aggregate_func_3010(1376646519);
			aggregate_func_3010(931649776);
			aggregate_func_3010(1743048395);
			aggregate_func_3010(449774763);
			aggregate_func_3414(-434590080);
			Jump @2886; //curOff = 1724
			aggregate_func_3010(1376646519);
			aggregate_func_3010(931649776);
			aggregate_func_3010(-434590080);
			aggregate_func_3010(449774763);
			aggregate_func_3414(1743048395);
			Jump @2886; //curOff = 1772
			aggregate_func_3010(1376646519);
			aggregate_func_3010(931649776);
			aggregate_func_3010(-434590080);
			aggregate_func_3010(1743048395);
			aggregate_func_3414(449774763);
			Jump @2886; //curOff = 1820
			aggregate_func_3010(38162571);
			aggregate_func_3010(1350391819);
			aggregate_func_3010(54073871);
			aggregate_func_3414(-1414537028);
			Jump @2886; //curOff = 1859
			aggregate_func_3010(-1414537028);
			aggregate_func_3010(1350391819);
			aggregate_func_3010(54073871);
			aggregate_func_3414(38162571);
			Jump @2886; //curOff = 1898
			aggregate_func_3010(-1414537028);
			aggregate_func_3010(38162571);
			aggregate_func_3010(54073871);
			aggregate_func_3414(1350391819);
			Jump @2886; //curOff = 1937
			aggregate_func_3010(-1414537028);
			aggregate_func_3010(38162571);
			aggregate_func_3010(1350391819);
			aggregate_func_3414(54073871);
			Jump @2886; //curOff = 1976
			aggregate_func_3414(198200492);
			aggregate_func_3010(-1124061431);
			aggregate_func_3010(52706132);
			aggregate_func_3010(-259123672);
			Jump @2886; //curOff = 2015
			aggregate_func_3010(198200492);
			aggregate_func_3414(-1124061431);
			aggregate_func_3010(52706132);
			aggregate_func_3010(-259123672);
			Jump @2886; //curOff = 2054
			aggregate_func_3010(198200492);
			aggregate_func_3010(-1124061431);
			aggregate_func_3414(52706132);
			aggregate_func_3010(-259123672);
			Jump @2886; //curOff = 2093
			aggregate_func_3010(198200492);
			aggregate_func_3010(-1124061431);
			aggregate_func_3010(52706132);
			aggregate_func_3414(-259123672);
			Jump @2886; //curOff = 2132
			aggregate_func_3414(-919512195);
			aggregate_func_3010(-1925798111);
			aggregate_func_3010(420709909);
			aggregate_func_3010(1703426636);
			Jump @2886; //curOff = 2171
			aggregate_func_3414(-1925798111);
			aggregate_func_3010(-919512195);
			aggregate_func_3010(420709909);
			aggregate_func_3010(1703426636);
			Jump @2886; //curOff = 2210
			aggregate_func_3414(420709909);
			aggregate_func_3010(-919512195);
			aggregate_func_3010(-1925798111);
			aggregate_func_3010(1703426636);
			Jump @2886; //curOff = 2249
			aggregate_func_3414(1703426636);
			aggregate_func_3010(-919512195);
			aggregate_func_3010(-1925798111);
			aggregate_func_3010(420709909);
			Jump @2886; //curOff = 2288
			aggregate_func_3414(-1223121209);
			aggregate_func_3010(630808005);
			Jump @2886; //curOff = 2309
			aggregate_func_3414(630808005);
			aggregate_func_3010(-1223121209);
			Jump @2886; //curOff = 2330
			aggregate_func_3414(1453909576);
			aggregate_func_3010(1643531967);
			Jump @2886; //curOff = 2351
			aggregate_func_3414(1643531967);
			aggregate_func_3010(1453909576);
			Jump @2886; //curOff = 2372
			aggregate_func_3414(0);
			aggregate_func_3010(473295046);
			aggregate_func_3010(-1738165526);
			Jump @2886; //curOff = 2398
			aggregate_func_3414(473295046);
			aggregate_func_3010(0);
			aggregate_func_3010(-1738165526);
			Jump @2886; //curOff = 2424
			aggregate_func_3414(-1738165526);
			aggregate_func_3010(0);
			aggregate_func_3010(473295046);
			Jump @2886; //curOff = 2450
			aggregate_func_3414(932909855);
			aggregate_func_3010(2051822093);
			Jump @2886; //curOff = 2471
			aggregate_func_3414(2051822093);
			aggregate_func_3010(932909855);
			Jump @2886; //curOff = 2492
			aggregate_func_3414(405586984);
			aggregate_func_3010(1509509592);
			aggregate_func_3010(-959357075);
			aggregate_func_3010(-1311865656);
			Jump @2886; //curOff = 2531
			aggregate_func_3414(1509509592);
			aggregate_func_3010(405586984);
			aggregate_func_3010(-959357075);
			aggregate_func_3010(-1311865656);
			Jump @2886; //curOff = 2570
			aggregate_func_3414(-959357075);
			aggregate_func_3010(1509509592);
			aggregate_func_3010(405586984);
			aggregate_func_3010(-1311865656);
			Jump @2886; //curOff = 2609
			aggregate_func_3414(-1311865656);
			aggregate_func_3010(1509509592);
			aggregate_func_3010(-959357075);
			aggregate_func_3010(405586984);
			Jump @2886; //curOff = 2648
			if (bParam1)
			{
				aggregate_func_3414(-524145696);
			}
			else
			{
				aggregate_func_3010(-524145696);
			}
			aggregate_func_3010(1626481264);
			aggregate_func_3010(282809459);
			Jump @2886; //curOff = 2695
			aggregate_func_3414(282809459);
			aggregate_func_3010(1626481264);
			aggregate_func_3010(-524145696);
			Jump @2886; //curOff = 2725
			aggregate_func_3414(1626481264);
			aggregate_func_3010(-524145696);
			aggregate_func_3010(282809459);
			Jump @2886; //curOff = 2755
			if (bParam1)
			{
				aggregate_func_3414(885203519);
			}
			else
			{
				aggregate_func_3010(885203519);
			}
			Jump @2886; //curOff = 2784
			if (bParam1)
			{
				aggregate_func_3414(-1080627546);
			}
			else
			{
				aggregate_func_3010(-1080627546);
			}
			Jump @2886; //curOff = 2813
			if (bParam1)
			{
				aggregate_func_3414(-510945576);
			}
			else
			{
				aggregate_func_3010(-510945576);
				aggregate_func_2880(385812466);
				aggregate_func_2880(-1201452352);
			}
			Jump @2886; //curOff = 2860
			if (bParam1)
			{
				aggregate_func_3414(iParam0);
			}
			else
			{
				aggregate_func_3010(iParam0);
			}
		}

void func_323(int iParam0)
{
	vector3 vVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x) || ENTITY::IS_ENTITY_DEAD(vVar0.x))
	{
		return;
	}
	if (vVar0.z != 0)
	{
		if (WEAPON::_0x705BE297EEBDB95D(vVar0.z))
		{
			DECORATOR::DECOR_SET_INT(vVar0.x, "last_gun_damage_time_in_ms", aggregate_func_1510());
			if (ENTITY::IS_ENTITY_A_PED(vVar0.y))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35)
				{
					DECORATOR::DECOR_SET_BOOL(vVar0.x, "DamagedByPlayer", true);
				}
			}
		}
	}
}

void func_324(int iParam0)
{
	vector3 vVar0;
	int iVar9;
	int iVar10;
	bool bVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
		if (!PED::GET_PED_CONFIG_FLAG(iVar9, 385, false))
		{
			iVar10 = aggregate_func_5518(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x), 1);
			if (iVar10 != -1)
			{
				func_924(iVar10);
				if (LAW::_0x40851BCC33ACD9AB(iVar9) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y)))
				{
				}
			}
			if (GRAPHICS::_0xFF584F097C17FA8F() && ENTITY::IS_ENTITY_A_PED(vVar0.y))
			{
				if (PED::_0x118D476A6F1A13F1(iVar9) && vVar0.z == joaat("weapon_run_over_by_car"))
				{
					bVar11 = true;
				}
				if (((iVar9 != Global_35 && !ENTITY::IS_ENTITY_DEAD(vVar0.y)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35) && !bVar11)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("PedKill");
				}
			}
		}
	}
}

void func_325(int iParam0)
{
	struct<2> Var0;
	int iVar3;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 3);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0.f_1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar3) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (func_925(&Var0))
	{
		return;
	}
	switch (Var0)
	{
		case 1437412331: /* GXTEntry: "Looting" */
			if (iVar3 != Global_1273882->f_10)
			{
				aggregate_func_2680(-1648877470, iVar3);
				func_927(&Var0);
			}
			else
			{
				aggregate_func_1617(-1648877470, 0, 0);
			}
			break;
		case -2051405571: /* GXTEntry: "Rustling" */
		case 1923998736: /* GXTEntry: "Theft" */
			if (iVar3 != Global_1273882->f_10)
			{
				aggregate_func_2680(-545299531, iVar3);
				func_927(&Var0);
			}
			else
			{
				aggregate_func_1617(-545299531, 0, 0);
			}
			break;
		case -999071359: /* GXTEntry: "Animal Cruelty" */
		case -857617219: /* GXTEntry: "Animal Cruelty" */
		case 416962030: /* GXTEntry: "Animal Cruelty" */
			if (iVar3 != Global_1273882->f_10)
			{
				aggregate_func_2680(-1598949067, iVar3);
				func_927(&Var0);
			}
			else
			{
				aggregate_func_1617(-1598949067, 0, 0);
			}
			break;
		case 1746095559: /* GXTEntry: "Arson" */
			if (iVar3 != Global_1273882->f_10)
			{
				aggregate_func_2680(478308321, iVar3);
				func_927(&Var0);
			}
			else
			{
				aggregate_func_1617(478308321, 0, 0);
			}
			break;
		case -2130852007: /* GXTEntry: "Vandalism" */
		case -102241052: /* GXTEntry: "Vandalism" */
			if (iVar3 != Global_1273882->f_10)
			{
				aggregate_func_2680(440583097, iVar3);
				func_927(&Var0);
			}
			else
			{
				aggregate_func_1617(440583097, 0, 0);
			}
			break;
	}
}

void func_328(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1585489042))
	{
		return;
	}
	Global_1903928->f_485[51] = 0;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if ((Global_1273882->f_12 || Global_1273882->f_88[&Global_1273882]) // PointerArith)
	{
		return;
	}
	iVar2 = Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case -72209530:
			iVar5 = 0;
			break;
		case 1704957293:
			iVar5 = 0;
			break;
		case 869278708:
			iVar5 = 4;
			break;
		case 640210656:
			iVar5 = 0;
			break;
		case 1051485804:
			iVar5 = 2;
			break;
		default:
			iVar5 = 0;
			break;
	}
	DECORATOR::DECOR_SET_BOOL(iVar4, "Whistling", true);
	Global_1903928->f_485[4] = 1;
}

void func_329(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	vector3 vVar10;
	vector3 vVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar4 = Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	if (iVar4 != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	iVar5 = Var0.f_1;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) != iVar5)
	{
		return;
	}
	Var6 = { aggregate_func_926(0, 1, 0, -1) };
	aggregate_func_4853(&Var6, 0, 1, 1);
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_930(&Var6, vVar10);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	vVar13 = { func_931(&Var6) };
	if (!aggregate_func_4268(vVar13))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar10, vVar13, true) < 200f)
		{
			func_930(&Var6, vVar10);
			aggregate_func_8506(iVar5, Global_1903928, 10, 0);
			return;
		}
	}
	func_930(&Var6, vVar10);
	aggregate_func_8506(iVar5, Global_1903928, 11, 0);
}

void func_330(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	struct<4> Var15;
	int iVar19;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar6 = Var0.f_2;
	bVar7 = Var0.f_3;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	fVar8 = aggregate_func_1050(iVar5);
	bVar9 = false;
	if (fVar8 == 0f)
	{
		bVar9 = true;
	}
	iVar10 = ENTITY::GET_ENTITY_MODEL(iVar5);
	if (aggregate_func_8554(iVar10) || aggregate_func_8555(iVar10))
	{
		return;
	}
	iVar11 = PED::_0xE4770DA1B8FF4FD1(iVar5);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return;
	}
	if (Global_1268935->f_1371.f_9 != iVar5)
	{
		Global_1268935->f_1371.f_9 = iVar5;
		Global_1268935->f_1371.f_10 = 0;
	}
	bVar12 = false;
	iVar13 = Global_1273882->f_20;
	if ((Global_1268935->f_1371.f_10 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar14 = false;
	if (bVar12 && Global_1268935->f_1371.f_10 + 15000 > iVar13)
	{
		bVar14 = true;
	}
	Var15 = { aggregate_func_926(0, 1, 0, -1) };
	if (!aggregate_func_4853(&Var15, 0, 1, 1))
	{
		return;
	}
	iVar19 = 23;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar14)
					{
						iVar19 = 8;
					}
				}
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar5) > 1.5f)
				{
					iVar19 = 8;
				}
				else
				{
					iVar19 = 9;
				}
			}
			aggregate_func_4975(Global_35, "VOFX_Calm_Horse", joaat("speech_params_standard"), iVar5, 1, 0, 0, 1);
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar14)
				{
					iVar19 = 6;
				}
			}
			else if (bVar7)
			{
				iVar19 = 9;
			}
			else if (bVar9)
			{
				iVar19 = 7;
			}
			break;
	}
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) != iVar5)
	{
		return;
	}
	if (iVar19 != 23)
	{
		aggregate_func_8506(iVar5, Global_1903928, iVar19, 0);
		if ((bVar7 || !bVar12) || !bVar14)
		{
			Global_1268935->f_1371.f_10 = iVar13;
		}
	}
	func_935(iVar5);
}

void func_331(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_936())
		{
			aggregate_func_4322(597, 1);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iVar4, 467, false))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 467, true);
			}
		}
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (vVar0.z == 1)
	{
		iVar6 = func_937();
		if (aggregate_func_7585(599) == 0)
		{
			aggregate_func_7059(MISC::GET_GAME_TIMER());
			aggregate_func_4322(599, 0);
		}
		else if (aggregate_func_7585(599) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				aggregate_func_4322(599, 1);
				aggregate_func_7059(MISC::GET_GAME_TIMER());
			}
		}
		aggregate_func_4748(0);
	}
	if (vVar0.z == 2)
	{
		if (aggregate_func_3083(597))
		{
			aggregate_func_4111(597);
		}
		if (aggregate_func_3080(597))
		{
			aggregate_func_7858(597);
		}
		aggregate_func_4322(598, 1);
		aggregate_func_4748(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	aggregate_func_1962(aggregate_func_4257(-1811330370, -591306697), 1);
	COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(iVar4);
}

void func_332(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	iVar5 = PLAYER::_0xAD03B03737CE6810(iVar4);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar5))
	{
		return;
	}
	bVar6 = vVar0.z;
	aggregate_func_296(iVar4, bVar6);
	if (PLAYER::PLAYER_ID() == iVar5)
	{
		aggregate_func_1617(-469672732, 0, 0);
		Global_1268935->f_887.f_8 = 0;
	}
	else
	{
		aggregate_func_1617(-162385832, 0, 0);
	}
	PED::_0xEB8886E1065654CD(iVar4, 10, "ALL", 10f);
}

void func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = aggregate_func_4835(iVar0);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var2, 2))
	{
		return;
	}
	iVar4 = Var2;
	iVar5 = Var2.f_1;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	iVar6 = PLAYER::_0xAD03B03737CE6810(iVar4);
	bVar7 = NETWORK::_0x255A5EF65EDA9167(iVar6);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		bVar8 = PED::IS_PED_A_PLAYER(iVar5);
	}
	iVar9 = PLAYER::PLAYER_PED_ID();
	iVar10 = PLAYER::_0xF49F14462F0AE27C(iVar0);
	if (bVar7)
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 6, true);
	}
	if (iVar4 != iVar10)
	{
		if ((bVar7 && bVar8) && iVar5 == iVar9)
		{
			aggregate_func_1457(iVar0, iVar6, iVar4);
		}
		return;
	}
	iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
	if (NETWORK::_0x255A5EF65EDA9167(iVar11))
	{
		if (iVar11 != iVar0)
		{
			Global_1268935->f_887.f_8 = 1;
		}
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_947())
	{
		if (aggregate_func_3080(591))
		{
			aggregate_func_7858(591);
		}
		if (aggregate_func_3083(591))
		{
			aggregate_func_4111(591);
		}
		if (!aggregate_func_3080(590) && !aggregate_func_3083(590))
		{
			aggregate_func_4322(590, 1);
		}
	}
	else
	{
		if (aggregate_func_3080(590))
		{
			aggregate_func_7858(590);
		}
		if (aggregate_func_3083(590))
		{
			aggregate_func_4111(590);
		}
		if (!aggregate_func_3080(591) && !aggregate_func_3083(591))
		{
			aggregate_func_4322(591, 1);
		}
	}
}

void func_334(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	iVar10 = vVar0.x;
	iVar11 = iVar10;
	switch (iVar11)
	{
		case 28:
			aggregate_func_4895(1);
			aggregate_func_4428(-283002878);
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 31:
			func_949(iVar13, 0);
			break;
		case 32:
			func_949(iVar13, 1);
			break;
		case 33:
			func_949(iVar13, 2);
			break;
		case 49:
			func_950(iParam0);
			break;
		case 50:
			func_951(iParam0);
			break;
		default:
			return;
	}
}

void func_335(int iParam0)
{
	struct<6> Var0;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!Var0.f_4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_2))
	{
		return;
	}
	if (!aggregate_func_5089(Var0.f_5))
	{
		return;
	}
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_2);
	if (aggregate_func_2066(0) != iVar6)
	{
		return;
	}
	if (aggregate_func_3068(PLAYER::PLAYER_ID(), 1, 0))
	{
		ENTITY::_0x18FF3110CF47115D(iVar6, 31, true);
		return;
	}
	if (func_955(0, Var0.f_5, 1))
	{
		func_956(iVar6, Var0.f_5, 1);
		if (!func_957(INVENTORY::_0x13D234A2A3F66E63(iVar6), Var0.f_5, 1))
		{
			if (!aggregate_func_5275(0, Var0.f_5, 1))
			{
			}
			aggregate_func_440(iVar6, Var0.f_5, 1);
		}
	}
	if (aggregate_func_3068(PLAYER::PLAYER_ID(), 1, 0))
	{
		ENTITY::_0x18FF3110CF47115D(iVar6, 31, true);
	}
	else
	{
		ENTITY::_0x18FF3110CF47115D(iVar6, 31, false);
	}
}

void func_336(int iParam0)
{
	vector3 vVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.z))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		return;
	}
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
	iVar7 = PLAYER::_0xAD03B03737CE6810(iVar6);
	iVar8 = aggregate_func_1345(vVar0.x);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
	{
		return;
	}
	iVar9 = iVar7;
	iVar10 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0xF49F14462F0AE27C(iVar10) == iVar6 && iVar8 == iVar10)
	{
		Global_1131373->f_6289.f_25[iVar9] = vVar0.y;
		Global_1131373->f_6289.f_58[iVar9] = vVar0.z;
		return;
	}
	if (iVar8 == iVar10)
	{
		Global_1131373->f_6289.f_25[iVar9] = vVar0.y;
		Global_1131373->f_6289.f_58[iVar9] = vVar0.z;
	}
}

void func_337(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	if (aggregate_func_2066(0) != iVar4)
	{
		return;
	}
	iVar5 = Var0.f_1;
	bVar6 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
	{
		bVar6 = true;
	}
	if (!bVar6)
	{
		_NAMESPACE49::_0xDC0A1F0ECEC9F0C0(iVar5, 1f);
	}
}

void func_338(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (Global_35 != iVar4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()) != iVar5)
	{
		return;
	}
	if (!aggregate_func_4260(&(Global_1268935->f_1371.f_18)))
	{
		return;
	}
	if (aggregate_func_2542(iVar5, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!ENTITY::IS_ENTITY_A_PED(iVar6) && !ENTITY::_0x255B6DB4E3AD3C3E(iVar6))
	{
		return;
	}
	aggregate_func_4313(&(Global_1268935->f_1371.f_18));
	if (!Global_1268935->f_1371.f_17)
	{
		aggregate_func_8506(iVar5, Global_1903928, 20, 0);
		return;
	}
	Global_1268935->f_1371.f_17 = 0;
	aggregate_func_8506(iVar5, Global_1903928, 21, 0);
}

void func_339(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	iVar5 = aggregate_func_1345(Var0);
	iVar6 = PLAYER::_0xAD03B03737CE6810(iVar4);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar6))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar5))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
	{
		return;
	}
	iVar7 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar5);
	iVar8 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar6);
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar7) && _NAMESPACE26::_0x0F99F6436528A089(iVar8))
	{
		if (iVar7 == iVar8)
		{
			return;
		}
	}
	iVar9 = iVar6;
	iVar12 = PLAYER::PLAYER_ID();
	if (iVar6 != iVar12 && iVar5 != iVar12)
	{
		return;
	}
	if (!aggregate_func_3064(iVar5, 0, 1))
	{
		Global_1131373->f_6289.f_25[iVar9] = uVar10;
		Global_1131373->f_6289.f_58[iVar9] = uVar11;
		return;
	}
	if (PLAYER::_0xF49F14462F0AE27C(iVar12) == iVar4)
	{
		iVar13 = iVar5;
		if (&Global_1131373->f_6289.f_25[iVar13] == Var0.f_1 && &Global_1131373->f_6289.f_58[iVar13] == Var0.f_3)
		{
		}
		else if (!aggregate_func_1453(iVar5, iVar6, 1, 1))
		{
			aggregate_func_635(iVar5, 3, 1, 1, 0, 0);
		}
		Global_1131373->f_6289.f_25[iVar9] = uVar10;
		Global_1131373->f_6289.f_58[iVar9] = uVar11;
		return;
	}
	if (&Global_1131373->f_6289.f_25[iVar9] == Var0.f_1 && &Global_1131373->f_6289.f_58[iVar9] == Var0.f_3)
	{
		Global_1131373->f_6289.f_25[iVar9] = uVar10;
		Global_1131373->f_6289.f_58[iVar9] = uVar11;
		return;
	}
	aggregate_func_3643(10, iVar6, iVar5);
	Global_1131373->f_6289.f_25[iVar9] = uVar10;
	Global_1131373->f_6289.f_58[iVar9] = uVar11;
}

void func_340(var uParam0)
{
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1) != Global_1273882->f_8)
	{
		return;
	}
	aggregate_func_3643(1, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0)), 255);
	aggregate_func_1503(-1822335806);
}

bool func_342()
{
	return ((Global_1131373->f_5525.f_21 && Global_1131373->f_5525.f_2) && Global_1131373->f_5525);
}

void func_349(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 10;
	iVar1 = aggregate_func_2827(bParam0);
	bVar2 = &Global_1951131->f_1657.f_1[iVar0 /*3*/];
	if (bParam0 == bVar2)
	{
		return;
	}
	if (aggregate_func_5193(bVar2))
	{
		aggregate_func_3040(bVar2, 0);
	}
	if (aggregate_func_2959(bParam0, -1348134986))
	{
		iVar1 = 81053684;
	}
	if (aggregate_func_5193(bParam0))
	{
		aggregate_func_3040(bParam0, 1);
	}
	else if (aggregate_func_5192(iVar1, 0))
	{
		aggregate_func_3041(bParam0, 1, 1, 1);
	}
}

void func_351(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	aggregate_func_4719(32768);
	aggregate_func_4545(1108822547);
	Global_1951131->f_3235.f_1 = uParam0;
	Global_1951131->f_3235.f_3[0] = uParam1;
	Global_1951131->f_3235.f_3[1] = uParam2;
	Global_1951131->f_3235.f_3[2] = uParam3;
	Global_1951131->f_3235 = -1725579161;
	if (iParam4 != 0)
	{
		Global_1951131->f_3235.f_8 = iParam4;
		Global_1951131->f_3235.f_9 = uParam5;
		Global_1951131->f_3235.f_10 = uParam6;
		Global_1951131->f_3235.f_11 = uParam7;
	}
	Global_1951131->f_3235.f_12 = 1;
	Global_1951131->f_3235.f_13 = PED::_0x3FCBB5FCFD968698(Global_1951131->f_3235.f_1, &(Global_1951131->f_3235.f_3[0]), &(Global_1951131->f_3235.f_3[1]), &(Global_1951131->f_3235.f_3[2]), 0);
}

void func_352(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (aggregate_func_2641(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iVar0, true);
		}
	}
}

void func_353(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
}

void func_354(int iParam0)
{
	struct<2> Var0;
	struct<6> Var3;
	var uVar10;
	int iVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 3);
	if (!PED::IS_PED_A_PLAYER(Var0) || !PED::IS_PED_A_PLAYER(Var0.f_1))
	{
		return;
	}
	if (Var0 == Global_35)
	{
		Global_1264800->f_16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0.f_1);
	}
	Var3.f_5 = -1;
	Var3.f_4 = 1;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar11])) && PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[iVar11])) == Var0.f_1)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar10, &(Global_1273882->f_154[iVar11]));
			if (iVar11 == &Global_1273882)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0)))
				{
					aggregate_func_884(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0));
				}
			}
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar11])) && PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[iVar11])) == Var0)
		{
			if (iVar11 == &Global_1273882)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0.f_1)))
				{
					aggregate_func_883(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(Var0.f_1));
				}
			}
		}
		iVar11++;
	}
	aggregate_func_1407(&Var3, uVar10);
}

void func_355(int iParam0)
{
	struct<2> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!PED::IS_PED_A_PLAYER(Var0.f_1) || !PED::IS_PED_A_PLAYER(Var0))
	{
		return;
	}
}

void func_356(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	bool bVar13;
	int iVar14;
	struct<4> Var15;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;

	if (Global_17096 != 0)
	{
		return;
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
	}
	bVar13 = false;
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		iVar1 = aggregate_func_644(iVar14, &uVar2);
		if (ENTITY::_0x9A100F1CF4546629(iVar14))
		{
			func_178(iVar14, ENTITY::_0x964000D355219FC0(iVar14), 0, 1);
		}
	}
	if (iVar1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			bVar13 = ENTITY::_0x31FEF6A20F00B963(iVar0);
		}
		else
		{
			bVar13 = false;
		}
		SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var15, 5);
		if (bVar13 == 0)
		{
			if (Global_17096.f_17 != 0)
			{
				if (Var15.f_3 == 0)
				{
					aggregate_func_398(Global_17096.f_17, -1, 0, 0, 0, 0, 0);
				}
				Global_17096.f_17 = 0;
			}
			if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var15.f_2)))
			{
				aggregate_func_1778();
			}
		}
		else if (aggregate_func_3033(bVar13))
		{
			if (Global_17096.f_17 == 0)
			{
				Global_17096.f_17 = bVar13;
				aggregate_func_398(Global_17096.f_17, 1, 0, 0, 0, 0, 0);
			}
		}
		if (ENTITY::IS_ENTITY_A_PED(Var15.f_2) && ENTITY::IS_ENTITY_A_PED(Var15))
		{
			iVar20 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var15.f_2);
			iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var15);
			if (PED::IS_PED_A_PLAYER(iVar20) && PED::IS_PED_A_PLAYER(iVar21))
			{
				if (&Global_1273882->f_154[&Global_1273882] == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar20))
				{
					aggregate_func_884(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar21));
				}
				else if (&Global_1273882->f_154[&Global_1273882] == NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar21))
				{
					aggregate_func_883(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar20));
				}
			}
		}
	}
	else if (aggregate_func_3963(iVar0))
	{
		iVar22 = 0;
		while (iVar22 < iVar1)
		{
			bVar23 = &uVar2[iVar22];
			if (bVar23 == 0 || !aggregate_func_5236(bVar23))
			{
			}
			else if (bVar23 == iParam2)
			{
				Jump @453; //curOff = 432
			}
			else
			{
				aggregate_func_398(bVar23, 1, 0, 0, 0, 0, 0);
			}
			iVar22++;
		}
	}
}

void func_357(int iParam0)
{
	struct<5> Var0;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 5))
	{
		return;
	}
	bVar5 = Var0;
	if (func_360(bVar5))
	{
		return;
	}
	if (func_990(Var0.f_1))
	{
		return;
	}
	if (aggregate_func_4492())
	{
		iVar6 = 7;
		_NAMESPACE49::_0xB03140014ACA6C40(Var0, iVar6);
	}
	if (!aggregate_func_2892(0) || (aggregate_func_1519() && !func_991(&Var0)))
	{
		if (Var0.f_1 == 716341297 && !func_992())
		{
		}
		else if (ENTITY::_0x1E804EA9B12030A4(Var0.f_4, &iVar7))
		{
			aggregate_func_4741(iVar7, 0);
		}
		else
		{
			aggregate_func_4741(Var0.f_1, 0);
		}
	}
	else if (!Var0.f_2)
	{
		if ((aggregate_func_4585(bVar5) && WEAPON::IS_WEAPON_VALID(bVar5)) && !aggregate_func_2959(bVar5, -1588156645))
		{
			aggregate_func_398(bVar5, 1, 0, 0, 0, 0, 0);
			bVar8 = aggregate_func_751(bVar5);
			if (bVar8 > 0)
			{
				aggregate_func_2941(WEAPON::_0x5C2EA6C44F515F34(bVar5), bVar8, -897553835);
				aggregate_func_639(bVar5, bVar8);
			}
		}
		else
		{
			aggregate_func_220(bVar5, 1, 0, 0, 0, -897553835, 0, 1, Var0.f_4, 0);
		}
	}
	else
	{
		aggregate_func_6959(bVar5, 1, 752097756);
		aggregate_func_39(bVar5, 0, 0, 1, 1, 0, 0);
	}
}

void func_358(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &bVar0, 1))
	{
		return;
	}
	bVar1 = bVar0;
	if (aggregate_func_2959(bVar1, 747873593))
	{
		return;
	}
	aggregate_func_1304(bVar1, 1, 0, -142743235);
}

void func_359(int iParam0)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if (!aggregate_func_2892(0))
	{
		return;
	}
	else if (aggregate_func_1519())
	{
		return;
	}
	if (SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 8))
	{
		bVar9 = Var0.f_7;
		if (!aggregate_func_2823(bVar9, 0))
		{
			return;
		}
		bVar8 = OBJECT::_0x44B09A23D728045A(Var0);
		if (Var0.f_1 == 0 && Var0.f_6 == 0)
		{
			return;
		}
		bVar10 = aggregate_func_3015(bVar9, 1);
		if (WEAPON::IS_WEAPON_VALID(bVar10))
		{
			if (!aggregate_func_2850(bVar9, 1))
			{
				if (aggregate_func_4251() == -1)
				{
					aggregate_func_3002(MISC::_CREATE_VAR_STRING(10, "WEP_DISCOVER", aggregate_func_3915(bVar10)), -2, 0, 0, 0, 1);
					AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				}
				aggregate_func_398(bVar9, 1, 0, 0, 0, 0, 0);
			}
			else
			{
				bVar11 = WEAPON::_0x5C2EA6C44F515F34(bVar10);
				if (WEAPON::_0x58425FCA3D3A2D15(bVar10))
				{
					if (aggregate_func_5008(bVar11, 0) == bVar11)
					{
						aggregate_func_398(bVar9, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						aggregate_func_398(bVar8, Var0.f_6, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					aggregate_func_398(bVar9, 1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (aggregate_func_2831(bVar9))
		{
			aggregate_func_398(bVar9, Var0.f_6, 0, 0, 0, 0, 0);
		}
		if (aggregate_func_4251() == 0)
		{
			func_1004(Var0.f_2);
		}
	}
}

bool func_360(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar0 = aggregate_func_4894();
	if (aggregate_func_4321(iVar0))
	{
		iVar1 = aggregate_func_4746(aggregate_func_4314(), iVar0);
		if (aggregate_func_4375(iVar1))
		{
			if (aggregate_func_360(iVar0, iVar1, bParam0, &Var2))
			{
				if (Var2.f_1 != 0)
				{
					bParam0 = Var2.f_1;
				}
			}
			if (aggregate_func_7449(bParam0, iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_361(bool bParam0)
{
	struct<4> Var0;
	char cVar4[64];
	bool bVar12;
	bool bVar13;
	char cVar14[64];

	if (!aggregate_func_2823(bParam0, 0))
	{
		return "";
	}
	StringCopy(&cVar8, "_", 32);
	bVar12 = func_1008(bParam0, &Var0);
	bVar13 = func_1009(bParam0, &cVar4);
	if (bVar12 && bVar13)
	{
		MemCopy(&cVar14, {Var0}, 8);
		StringConCat(&cVar14, &cVar8, 64);
		StringConCat(&cVar14, &cVar4, 64);
		return HUD::_0xD8402B858F4DDD88(&cVar14, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar14));
	}
	if (!bVar12 && bVar13)
	{
		return HUD::_0xD8402B858F4DDD88(&cVar4, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar4));
	}
	if (bVar12 && !bVar13)
	{
		return "";
	}
	return "";
}

void func_364(int iParam0)
{
	struct<26> Var0;
	struct<23> Var26;
	int iVar49;
	var uVar50;
	int iVar51;
	float fVar52;
	bool bVar53;
	var uVar54;
	var uVar57;
	var uVar60;
	int iVar61;
	var uVar62;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var26.f_1 = 10;
	Var26.f_12 = 10;
	iVar51 = 0;
	fVar52 = 0f;
	bVar53 = false;
	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 26);
	if (!func_1012(Var0.f_24))
	{
		if (Var0.f_23 == Global_35)
		{
			func_1013(Var0.f_24);
			Var26 = { Var0 };
			if (!aggregate_func_510(Var0.f_24))
			{
				iVar49 = aggregate_func_10(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57, &uVar62);
				while (iVar49 != 0)
				{
					Var26.f_1[iVar61] = iVar49;
					Var26.f_12[iVar61] = iVar51;
					iVar49 = aggregate_func_10(Var0.f_24, &iVar51, &uVar50, &fVar52, &uVar60, &uVar54, &uVar57, &uVar62);
					iVar61++;
				}
				func_1016(Var0.f_24);
				bVar53 = true;
			}
			if (func_1017(&Var26))
			{
				bVar53 = true;
			}
			if (bVar53)
			{
				if (func_1018(Var0.f_24))
				{
					func_1019(&Var26);
				}
				if (MISC::_0xCC1BAF72D571DB8D(Var0.f_23, &Var26, Var0.f_25))
				{
				}
			}
		}
	}
}

void func_365(int iParam0)
{
	struct<30> Var0;
	int iVar36;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 36);
	if (aggregate_func_4251() == 0)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_27))
	{
	}
	if (!func_1012(Var0.f_27))
	{
		if (Var0.f_26 == Global_35)
		{
			if (!func_1018(Var0.f_27))
			{
				func_1020(&Var0, 0);
			}
			Global_1938929 = MISC::GET_GAME_TIMER();
			iVar36 = func_1022(func_1021(Var0.f_29));
			if (!TASK::_0x841475AC96E794D1(Global_1184669->f_2))
			{
				Global_1184669->f_2 = TASK::_0xF533D68FF970D190(Global_1273882->f_17, iVar36, 7f, 0, 0);
			}
			if (TASK::_0x841475AC96E794D1(Global_1184669->f_2))
			{
				Global_1184669->f_1 = 1;
			}
			func_1013(Var0.f_27);
		}
	}
}

void func_366(int iParam0)
{
	var uVar0;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &uVar0, 10);
}

bool func_368(int iParam0)
{
	if (!aggregate_func_636())
	{
		return false;
	}
	if (PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID()) != iParam0)
	{
		return false;
	}
	return true;
}

bool func_370(bool bParam0, bool bParam1)
{
	var uVar0;
	bool bVar4;
	int iVar5;

	if (bParam0 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		if (!aggregate_func_636())
		{
			return false;
		}
	}
	bVar4 = func_1028(bParam0);
	if (!aggregate_func_4246(bVar4))
	{
		return false;
	}
	if (aggregate_func_5089(bParam0))
	{
		if (aggregate_func_3068(PLAYER::PLAYER_ID(), 1, 1))
		{
			return false;
		}
		if (!aggregate_func_8352(bVar4, &uVar0, 0, 255, 0, 0))
		{
			return false;
		}
		else
		{
			func_1031(&uVar0);
		}
	}
	else
	{
		if (func_1032())
		{
			return false;
		}
		iVar5 = aggregate_func_8395(bParam0);
		if (iVar5 < 0)
		{
			return false;
		}
		if (!func_1034(bParam0))
		{
			return false;
		}
		if (!aggregate_func_8352(bVar4, &uVar0, 0, 255, 0, 0))
		{
			return false;
		}
		else
		{
			func_1031(&uVar0);
		}
	}
	aggregate_func_6991();
	return true;
}

bool func_372(int iParam0)
{
	struct<4> Var0;
	bool bVar6;
	struct<7> Var7;
	bool bVar17;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return false;
	}
	if (Var0.f_1 != 8)
	{
		return false;
	}
	if (!func_368(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return false;
	}
	bVar6 = aggregate_func_1522(Var0);
	Var7.f_6 = -1082130432;
	Var7 = Var0;
	Var7.f_1 = Var0.f_1;
	bVar17 = false;
	if (Global_1901929->f_637.f_32)
	{
		bVar17 = true;
		aggregate_func_4322(73, 1);
	}
	else if (aggregate_func_4934())
	{
		bVar17 = true;
	}
	else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Var7))
	{
		bVar17 = true;
		func_1041(bVar6);
	}
	else if (!func_1042(ENTITY::GET_ENTITY_MODEL(Var7)))
	{
		bVar17 = true;
		func_1041(bVar6);
	}
	else if (!func_1043(bVar6))
	{
		bVar17 = true;
		func_1041(bVar6);
	}
	else if (aggregate_func_5089(bVar6))
	{
		if (aggregate_func_3068(PLAYER::PLAYER_ID(), 1, 1) || func_1044(bVar6))
		{
			bVar17 = true;
			aggregate_func_4322(72, 1);
		}
		else
		{
			Var7.f_6 = func_1045(bVar6);
		}
	}
	else if (func_1032() || func_1044(bVar6))
	{
		bVar17 = true;
		func_1046(bVar6);
	}
	else if (!func_1034(bVar6))
	{
		bVar17 = true;
		func_1046(bVar6);
	}
	else
	{
		Var7.f_6 = func_1045(bVar6);
	}
	if (bVar17)
	{
		Var7.f_2 |= 1;
	}
	INVENTORY::_0xF666EF30F4F0AC4E(&Var7);
	return true;
}

bool func_373()
{
	if (aggregate_func_2830(Global_1939057->f_40) != 2085633299)
	{
		return true;
	}
	if (!func_1047())
	{
		return true;
	}
	if (PED::_0xB65927F861E7AE39(PLAYER::PLAYER_PED_ID(), 34))
	{
		return true;
	}
	aggregate_func_2975("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
	return false;
}

void func_374(int iParam0)
{
	struct<6> Var0;
	struct<10> Var6;
	bool bVar20;

	Var6.f_9 = -1591664384;
	if (SCRIPTS::GET_EVENT_DATA(3, iParam0, &Var0, 6))
	{
		if (INVENTORY::_0x9700E8EFC4AB9089(Var0.f_4, &Var0, &Var6, true))
		{
			bVar20 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_5))
			{
				if (aggregate_func_1156(Var0.f_5))
				{
					bVar20 = true;
				}
			}
			if (bVar20)
			{
				func_175(Var6.f_4, Var0.f_5);
			}
			else
			{
				func_176(Var6.f_4, Var0.f_5);
			}
		}
	}
}

void func_375(int iParam0)
{
	struct<4> Var0;
	struct<10> Var6;

	Var6.f_9 = -1591664384;
	if (SCRIPTS::GET_EVENT_DATA(3, iParam0, &Var0, 6))
	{
		if (INVENTORY::_0x9700E8EFC4AB9089(Var0.f_4, &Var0, &Var6, true))
		{
			func_574(Var0.f_5, Var6.f_4, Var0);
		}
	}
}

void func_377(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (aggregate_func_4301(iVar0))
		{
			if (aggregate_func_4665(aggregate_func_4662(iVar0, 1, 1)) == iParam0)
			{
				aggregate_func_4694(iVar0, 0);
			}
		}
		iVar0++;
	}
}

bool func_390()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (aggregate_func_4324(iVar0))
		{
			if (func_391(iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_391(int iParam0)
{
	if (!aggregate_func_4324(iParam0))
	{
		return false;
	}
	return &(Global_1938075->f_27[iParam0]);
}

void func_392(int iParam0)
{
	if (!aggregate_func_4324(iParam0))
	{
		return;
	}
	Global_1938075->f_4 = iParam0;
}

void func_394(int iParam0, int iParam1)
{
	if (!aggregate_func_4324(iParam0))
	{
		return;
	}
	Global_1938075->f_27[iParam0] = iParam1;
}

int func_395()
{
	return Global_1938075->f_5;
}

int func_396(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7888[iParam0 /*11*/])->f_2;
	}
	return (Global_1070355->f_17941[iParam0 /*11*/])->f_2;
}

bool func_398(char* sParam0, int iParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	*uParam2 = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

bool func_401(int iParam0)
{
	if (iParam0 != Global_1938075->f_75.f_62 && Global_1938075->f_75.f_62 != -1)
	{
		return false;
	}
	Global_1938075->f_75.f_59 = iParam0;
	Global_1938075->f_75.f_60 = 0;
	func_417();
	return true;
}

bool func_402(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	switch (Global_1939168->f_9)
	{
		case -717938992:
		case -251921849:
		case 681501455:
		case 701031707:
		case 2118174520:
			return true;
	}
	return false;
}

bool func_403(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (aggregate_func_245(iParam0, bParam1, bParam2, bParam3))
	{
		if (func_402(iParam0) || Global_1939168->f_9 != 1370593166)
		{
			return true;
		}
	}
	return false;
}

void func_404(bool bParam0)
{
	var uVar0;
	struct<17> Var17;
	struct<7> Var34;
	int iVar41;
	int iVar43;

	if (!Global_1939168->f_12)
	{
		return;
	}
	if (bParam0)
	{
		func_401(10);
	}
	else
	{
		if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Witness_Wanted", "HUD_Wanted_Sounds", true, 0);
		}
		LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &uVar0, 1);
		if (Global_1939168->f_12)
		{
			LAW::_0x9C5BD8C562565CE6(&Var17);
		}
		Var34 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
		BOUNTY::_0x4EF23E04A0C8FF51(&Var34, &iVar41);
		iVar43 = iVar41;
		if (aggregate_func_4251() == -1)
		{
			iVar43 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
		}
		if (Var17.f_16 && iVar43 > 0)
		{
			func_407(aggregate_func_6596());
		}
		if (Global_1939168->f_17)
		{
			func_401(6);
		}
		else
		{
			func_401(2);
		}
	}
}

void func_405()
{
	aggregate_func_4957(&(Global_1938075->f_75.f_56));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, false);
}

void func_406()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_1.f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_19.f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_37.f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1938075->f_75.f_55, false);
	Global_1938075->f_6 = 0;
}

void func_407(int iParam0)
{
	Global_1938075->f_5 = iParam0;
}

void func_410(int iParam0)
{
	Global_1938075->f_75.f_60 = iParam0;
	func_417();
}

void func_411()
{
	bool bVar0;
	struct<17> Var1;

	if (Global_1939168->f_12)
	{
		LAW::_0x9C5BD8C562565CE6(&Var1);
		if (Var1.f_16 || Var1.f_15)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = 2;
		}
	}
	else if ((LAW::_0x89E005B1662F6E48(PLAYER::PLAYER_ID(), 1, 0) || LAW::_0x3738B784DDD35CC6(PLAYER::PLAYER_ID(), 1, 0)) || Global_1938075->f_75.f_62 > -1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = 2;
	}
	if (Global_1938075->f_75.f_63 > 0)
	{
		bVar0 = Global_1938075->f_75.f_63;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_1.f_3, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_19.f_3, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1938075->f_75.f_37.f_3, bVar0);
}

char* func_413(int iParam0)
{
	switch (iParam0)
	{
		case -1358475411: /* GXTEntry: "Accomplice" */
			return "CRIME_ACCOMPLICE";
		case 195938434: /* GXTEntry: "Assault" */
			return "CRIME_ASSAULT";
		case 416962030: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_ASSAULT_ANIMAL";
		case 1314857970: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_ASSAULT_CORPSE";
		case -999071359: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_ASSAULT_HORSE";
		case -683250308: /* GXTEntry: "Assault" */
			return "CRIME_ASSAULT_LAW";
		case -857617219: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_ASSAULT_LIVESTOCK";
		case 1780145725: /* GXTEntry: "Bank Robbery" */
			return "CRIME_BANK_ROBBERY";
		case -1521715232: /* GXTEntry: "Trespassing" */
			return "CRIME_BURGLARY";
		case -1560342203: /* GXTEntry: "Cheating" */
			return "CRIME_CHEATING";
		case 1343354387: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_DISTURBANCE";
		case 1052408375: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_EXPLOSION";
		case -1759599185: /* GXTEntry: "Grave Robbery" */
			return "CRIME_GRAVE_ROBBERY";
		case joaat("crime_hassle"):
			return "CRIME_HASSLE";
		case -16106300: /* GXTEntry: "Unarmed Assault" */
			return "CRIME_HIT_AND_RUN";
		case 105387183: /* GXTEntry: "Unarmed Assault" */
			return "CRIME_HIT_AND_RUN_LAW";
		case -2095449173: /* GXTEntry: "Intimidation" */
			return "CRIME_INTIMIDATION";
		case 314693001: /* GXTEntry: "Jail Break" */
			return "CRIME_JAIL_BREAK";
		case -2097683294: /* GXTEntry: "Horse Theft" */
			return "CRIME_JACK_HORSE";
		case 1805131596: /* GXTEntry: "Vehicle Theft" */
			return "CRIME_JACK_VEHICLE";
		case -1728509733: /* GXTEntry: "Kidnapping" */
			return "CRIME_KIDNAPPING";
		case -42817558: /* GXTEntry: "Kidnapping" */
			return "CRIME_KIDNAPPING_LAW";
		case 1458462042: /* GXTEntry: "Assault" */
			return "CRIME_LASSO_ASSAULT";
		case 481893872: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_LAW_IS_THREATENED";
		case 1714017012: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_LOITERING";
		case 1437412331: /* GXTEntry: "Looting" */
			return "CRIME_LOOTING";
		case -493957506: /* GXTEntry: "Murder" */
			return "CRIME_MURDER";
		case 1224055398: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_MURDER_ANIMAL";
		case -953803399: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_MURDER_HORSE";
		case 2006449383: /* GXTEntry: "Murder" */
			return "CRIME_MURDER_LAW";
		case -1788230330: /* GXTEntry: "Animal Cruelty" */
			return "CRIME_MURDER_LIVESTOCK";
		case 1396375613: /* GXTEntry: "Vandalism" */
			return "CRIME_PROPERTY_DESTRUCTION";
		case joaat("crime_resist_arrest"):
			return "CRIME_RESIST_ARREST";
		case -1547772340: /* GXTEntry: "Robbery" */
			return "CRIME_ROBBERY";
		case 1352191066: /* GXTEntry: "Unarmed Assault" */
			return "CRIME_UNARMED_ASSAULT";
		case -59535775: /* GXTEntry: "Robbery" */
			return "CRIME_STAGECOACH_ROBBERY";
		case -1701536647: /* GXTEntry: "Theft" */
			return "CRIME_STOLEN_GOODS";
		case 1923998736: /* GXTEntry: "Theft" */
			return "CRIME_THEFT";
		case -1103472584: /* GXTEntry: "Horse Theft" */
			return "CRIME_THEFT_HORSE";
		case -2051405571: /* GXTEntry: "Rustling" */
			return "CRIME_THEFT_LIVESTOCK";
		case 1135209633: /* GXTEntry: "Vehicle Theft" */
			return "CRIME_THEFT_VEHICLE";
		case -1810065318: /* GXTEntry: "Disturbing the Peace" */
			return "CRIME_THREATEN";
		case 2140177766:
			return "CRIME_THREATEN_LAW";
		case 1171995096: /* GXTEntry: "Murder" */
			return "CRIME_TRAMPLE";
		case -267442581: /* GXTEntry: "Murder" */
			return "CRIME_TRAMPLE_LAW";
		case 1685924442: /* GXTEntry: "Train Robbery" */
			return "CRIME_TRAIN_ROBBERY";
		case -1361146315: /* GXTEntry: "Trespassing" */
			return "CRIME_TRESPASSING";
		case -2130852007: /* GXTEntry: "Vandalism" */
			return "CRIME_VANDALISM";
		case -102241052: /* GXTEntry: "Vandalism" */
			return "CRIME_VANDALISM_VEHICLE";
		case 1420320220: /* GXTEntry: "Vandalism" */
			return "CRIME_VEHICLE_DESTRUCTION";
		case 0:
			return "CRIME_NONE";
		default:
			break;
	}
	return "CRIME_NONE";
}

void func_417()
{
	_NAMESPACE84::_0xB6FD96420C0126A1(343652620, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_1.f_1));
	_NAMESPACE84::_0xB6FD96420C0126A1(370165233, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_1));
	_NAMESPACE84::_0xB6FD96420C0126A1(214328093, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_1));
	_NAMESPACE84::_0x29C733459A9011EB(899278954, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_1.f_2));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-67464364, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_1.f_3));
	_NAMESPACE84::_0x29C733459A9011EB(-1388386159, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_1.f_4));
	_NAMESPACE84::_0x29C733459A9011EB(1584094595, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_1.f_5));
	_NAMESPACE84::_0x29C733459A9011EB(2037870381, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_19.f_2));
	_NAMESPACE84::_0x74BCCEB233AD95B2(419081062, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_19.f_3));
	_NAMESPACE84::_0x29C733459A9011EB(-77578703, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_19.f_4));
	_NAMESPACE84::_0x29C733459A9011EB(-1895820149, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_19.f_5));
	_NAMESPACE84::_0x29C733459A9011EB(284336735, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_37.f_2));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1967777848, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_37.f_3));
	_NAMESPACE84::_0x29C733459A9011EB(-1851553844, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_37.f_4));
	_NAMESPACE84::_0x29C733459A9011EB(-1711179274, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_37.f_5));
	_NAMESPACE84::_0x29C733459A9011EB(-502453069, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1938075->f_75.f_37.f_8));
	_NAMESPACE84::_0xB6FD96420C0126A1(2090772712, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_1.f_13));
	_NAMESPACE84::_0xB6FD96420C0126A1(567080718, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_1.f_14));
	_NAMESPACE84::_0xB6FD96420C0126A1(-2111378860, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_13));
	_NAMESPACE84::_0xB6FD96420C0126A1(930867308, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_14));
	_NAMESPACE84::_0xB6FD96420C0126A1(102890458, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_13));
	_NAMESPACE84::_0xB6FD96420C0126A1(400672808, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_14));
	_NAMESPACE84::_0xB6FD96420C0126A1(158320892, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_15));
	_NAMESPACE84::_0xB6FD96420C0126A1(-2074406361, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_1.f_16));
	_NAMESPACE84::_0xB6FD96420C0126A1(-882466102, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_1.f_17));
	_NAMESPACE84::_0xB6FD96420C0126A1(-1363987847, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_16));
	_NAMESPACE84::_0xB6FD96420C0126A1(581135177, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_19.f_17));
	_NAMESPACE84::_0xB6FD96420C0126A1(874457339, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_16));
	_NAMESPACE84::_0xB6FD96420C0126A1(-84149284, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_37.f_17));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-1979147281, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_1.f_12));
	_NAMESPACE84::_0x74BCCEB233AD95B2(397723712, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_19.f_12));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1420669041, DATABINDING::_DATABINDING_READ_DATA_INT(Global_1938075->f_75.f_37.f_12));
}

bool func_418()
{
	if (!Global_1939168->f_12)
	{
		return false;
	}
	if (Global_1939168->f_17)
	{
		return true;
	}
	return false;
}

void func_419()
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	char* sVar10;

	Var1 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &iVar8);
	iVar0 = iVar8;
	if (aggregate_func_4251() == -1)
	{
		iVar0 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1938075->f_75.f_67)))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, &(Global_1938075->f_75.f_67));
	}
	else if (aggregate_func_4672(aggregate_func_4371()) || aggregate_func_4671(aggregate_func_4314()))
	{
		if (aggregate_func_4577() == 24043185)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, "LAW_UI_DEAD_OR_ALIVE_F");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, "LAW_UI_DEAD_OR_ALIVE");
		}
	}
	else if (iVar0 <= 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_4, "LAW_UI_NO_BOUNTY");
	}
	else
	{
		sVar10 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_BOUNTY_CASH", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1938075->f_75.f_37.f_8, sVar10);
	}
	func_417();
}

bool func_422()
{
	struct<13> Var0;

	if (Global_1939168->f_12)
	{
		LAW::_0x9C5BD8C562565CE6(&Var0);
	}
	if (Var0.f_11 == 4 || Var0.f_11 == 5)
	{
		return false;
	}
	if (!aggregate_func_8612())
	{
		return false;
	}
	if (((Var0.f_12 != 0 && Var0.f_12 != 1) && Var0.f_12 != 5) && Var0.f_12 != 3)
	{
		return true;
	}
	return false;
}

char* func_423()
{
	if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1938075->f_75.f_64)))
	{
		return aggregate_func_2447(Global_1938075->f_75.f_64);
	}
	if (aggregate_func_4248())
	{
		return "POSTER_PL_ARTHUR_NAME";
	}
	if (aggregate_func_4248())
	{
		return "POSTER_PL_JOHN_NAME";
	}
	return "POSTER_PL_GENERIC";
}

bool func_427()
{
	if (func_401(9))
	{
		if (Global_1939168->f_12)
		{
			LAW::_0x55F37F5F3F2475E1();
		}
		return true;
	}
	return false;
}

void func_429(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;
	int iVar20;

	bVar0 = true;
	if (bParam0 && (Global_1939168->f_12 || Global_1938075->f_75.f_62 > -1))
	{
		if (Global_1939168->f_12)
		{
			LAW::_0x9C5BD8C562565CE6(&Var1);
		}
		if (Var1.f_10 > -1 || Global_1938075->f_75.f_62 > -1)
		{
			bVar0 = false;
			iVar18 = aggregate_func_6596();
			if (!aggregate_func_4324(iVar18))
			{
				return;
			}
			if (Global_1939168->f_12)
			{
				(Global_40.f_186[iVar18 /*12*/])->f_1 = { Var1.f_7 };
			}
			else
			{
				(Global_40.f_186[iVar18 /*12*/])->f_1 = { Global_36 };
			}
			func_1090(MISC::GET_GAME_TIMER());
			iVar19 = aggregate_func_8652();
			iVar20 = iVar19;
			(Global_40.f_186[iVar18 /*12*/])->f_4 = PLAYER::GET_WANTED_LEVEL_RADIUS(iVar20);
			if ((Global_40.f_186[iVar18 /*12*/])->f_4 <= 0f)
			{
				switch (iVar19)
				{
					case 1:
						(Global_40.f_186[iVar18 /*12*/])->f_4 = 60f;
						break;
					case 2:
						(Global_40.f_186[iVar18 /*12*/])->f_4 = 70f;
						break;
					default:
						(Global_40.f_186[iVar18 /*12*/])->f_4 = 80f;
						break;
				}
			}
			if (!MAP::DOES_BLIP_EXIST(Global_1938075->f_148))
			{
				Global_1938075->f_148 = MAP::_0x45F13B7E0A15C880(joaat("BLIP_STYLE_WANTED_RADIUS"), (Global_40.f_186[iVar18 /*12*/])->f_1, (Global_40.f_186[iVar18 /*12*/])->f_4);
			}
			else
			{
				MAP::SET_BLIP_COORDS(Global_1938075->f_148, (Global_40.f_186[iVar18 /*12*/])->f_1);
				MAP::SET_BLIP_SCALE(Global_1938075->f_148, (Global_40.f_186[iVar18 /*12*/])->f_4);
				if (bParam1)
				{
					MAP::_0x662D364ABF16DE2F(Global_1938075->f_148, 40294510);
				}
				else
				{
					MAP::_0xB059D7BD3D78C16F(Global_1938075->f_148, 40294510);
				}
			}
		}
	}
	if (bVar0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1938075->f_148))
		{
			MAP::REMOVE_BLIP(&(Global_1938075->f_148));
		}
	}
}

void func_430(int iParam0)
{
	Global_1939221->f_14.f_16 = (Global_1939221->f_14.f_16 - 1);
	func_1092(Global_1939221->f_14[iParam0 /*3*/]);
	*(Global_1939221->f_14[iParam0 /*3*/]) = { *(Global_1939221->f_14[Global_1939221->f_14.f_16 /*3*/]) };
	func_1092(Global_1939221->f_14[Global_1939221->f_14.f_16 /*3*/]);
}

void func_432()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_ACTION"), false);
}

int func_438(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case -14157738: /* GXTEntry: "Blackwater Ledger No. 62" */
			return 1323994892;
		case -246260565: /* GXTEntry: "Blackwater Ledger No. 63" */
			return 1573399751;
		case 340173459: /* GXTEntry: "Blackwater Ledger No. 64" */
			return -2106624491;
		case 109840158: /* GXTEntry: "Blackwater Ledger No. 65" */
			return -1793811613;
		case 903996873: /* GXTEntry: "Blackwater Ledger No. 66" */
			return -1510851298;
		case 706727493: /* GXTEntry: "Blackwater Ledger No. 67" */
			return -1467596218;
		case -1454682982: /* GXTEntry: "Blackwater Ledger No. 68" */
			return -1184308213;
		case 1538503020: /* GXTEntry: "Blackwater Ledger No. 69" */
			return -870708883;
		case 1318524723: /* GXTEntry: "Blackwater Ledger No. 70" */
			return -251964625;
		case 18296369: /* GXTEntry: "Blackwater Ledger No. 71" */
			return 1207697423;
		case -279147844: /* GXTEntry: "Blackwater Ledger No. 72" */
			return 1499898596;
		case -413074747: /* GXTEntry: "Blackwater Ledger No. 73" */
			return 1822214480;
		case -760557223: /* GXTEntry: "Blackwater Ledger No. 74" */
			return 2134142591;
		case -924992065: /* GXTEntry: "Blackwater Ledger No. 75" */
			return -1862299111;
		case 1767753378: /* GXTEntry: "New Hanover Gazette No. 27" */
			return 389460201;
		case -1556675047: /* GXTEntry: "New Hanover Gazette No. 28" */
			return 1371776514;
		case -2012820803: /* GXTEntry: "New Hanover Gazette No. 29" */
			return 1001486814;
		case -849973848: /* GXTEntry: "New Hanover Gazette No. 30" */
			return 1882514148;
		case 1012860904: /* GXTEntry: "New Hanover Gazette No. 31" */
			return 1103889939;
		case -1680391208: /* GXTEntry: "New Hanover Gazette No. 32" */
			return -1802851441;
		case -1253105631: /* GXTEntry: "New Hanover Gazette No. 33" */
			return 1719193452;
		case -915721704: /* GXTEntry: "New Hanover Gazette No. 34" */
			return -1151534797;
		case 202891657: /* GXTEntry: "New Hanover Gazette No. 35" */
			return -1929044860;
		case -1261034125: /* GXTEntry: "New Hanover Gazette No. 36" */
			return 924313143;
		case 1787203230: /* GXTEntry: "New Hanover Gazette No. 37" */
			return 626082474;
		case 1737771952: /* GXTEntry: "New Hanover Gazette No. 38" */
			return -653022672;
		case -1254096446: /* GXTEntry: "New Hanover Gazette No. 39" */
			return -942045252;
		case 61577350: /* GXTEntry: "New Hanover Gazette No. 40" */
			return -38767767;
		case 1566650197: /* GXTEntry: "Saint Denis Times No. 43" */
			return -194659462;
		case -572653278: /* GXTEntry: "Saint Denis Times No. 44" */
			return -549220042;
		case -532692958: /* GXTEntry: "Saint Denis Times No. 45" */
			return 293303717;
		case -1594812622: /* GXTEntry: "Saint Denis Times No. 46" */
			return -1890586292;
		case -358162791: /* GXTEntry: "Saint Denis Times No. 47" */
			return -2122099277;
		case 368626453: /* GXTEntry: "Saint Denis Times No. 48" */
			return -1681356223;
		case 543847666: /* GXTEntry: "Saint Denis Times No. 49" */
			return -830115910;
		case 888242611: /* GXTEntry: "Saint Denis Times No. 50" */
			return 1211786018;
		case 1712504077: /* GXTEntry: "Saint Denis Times No. 51" */
			return 1124096174;
		case -634222073: /* GXTEntry: "Saint Denis Times No. 52" */
			return -911614461;
		case 662019373: /* GXTEntry: "Saint Denis Times No. 53" */
			return -662209602;
		case 1032348365: /* GXTEntry: "Saint Denis Times No. 54" */
			return 1799528770;
		case -1449342224: /* GXTEntry: "Saint Denis Times No. 55" */
			return 1560872143;
		case 1786928078: /* GXTEntry: "Saint Denis Times No. 56" */
			return -1764788133;
	}
	switch (iParam0)
	{
		case -14157738: /* GXTEntry: "Blackwater Ledger No. 62" */
			return 1323994892;
		case -246260565: /* GXTEntry: "Blackwater Ledger No. 63" */
			return 1573399751;
		case 340173459: /* GXTEntry: "Blackwater Ledger No. 64" */
			return -2106624491;
		case 109840158: /* GXTEntry: "Blackwater Ledger No. 65" */
			return -1793811613;
		case 903996873: /* GXTEntry: "Blackwater Ledger No. 66" */
			return -1510851298;
		case 706727493: /* GXTEntry: "Blackwater Ledger No. 67" */
			return -1467596218;
		case -1454682982: /* GXTEntry: "Blackwater Ledger No. 68" */
			return -1184308213;
		case 1538503020: /* GXTEntry: "Blackwater Ledger No. 69" */
			return -870708883;
		case 1318524723: /* GXTEntry: "Blackwater Ledger No. 70" */
			return -251964625;
		case 18296369: /* GXTEntry: "Blackwater Ledger No. 71" */
			return 1207697423;
		case -279147844: /* GXTEntry: "Blackwater Ledger No. 72" */
			return 1499898596;
		case -413074747: /* GXTEntry: "Blackwater Ledger No. 73" */
			return 1822214480;
		case -760557223: /* GXTEntry: "Blackwater Ledger No. 74" */
			return 2134142591;
		case -924992065: /* GXTEntry: "Blackwater Ledger No. 75" */
			return -1862299111;
		case 1767753378: /* GXTEntry: "New Hanover Gazette No. 27" */
			return 389460201;
		case -1556675047: /* GXTEntry: "New Hanover Gazette No. 28" */
			return 1371776514;
		case -2012820803: /* GXTEntry: "New Hanover Gazette No. 29" */
			return 1001486814;
		case -849973848: /* GXTEntry: "New Hanover Gazette No. 30" */
			return 1882514148;
		case 1012860904: /* GXTEntry: "New Hanover Gazette No. 31" */
			return 1103889939;
		case -1680391208: /* GXTEntry: "New Hanover Gazette No. 32" */
			return -1802851441;
		case -1253105631: /* GXTEntry: "New Hanover Gazette No. 33" */
			return 1719193452;
		case -915721704: /* GXTEntry: "New Hanover Gazette No. 34" */
			return -1151534797;
		case 202891657: /* GXTEntry: "New Hanover Gazette No. 35" */
			return -1929044860;
		case -1261034125: /* GXTEntry: "New Hanover Gazette No. 36" */
			return 924313143;
		case 1787203230: /* GXTEntry: "New Hanover Gazette No. 37" */
			return 626082474;
		case 1737771952: /* GXTEntry: "New Hanover Gazette No. 38" */
			return -653022672;
		case -1254096446: /* GXTEntry: "New Hanover Gazette No. 39" */
			return -942045252;
		case 61577350: /* GXTEntry: "New Hanover Gazette No. 40" */
			return -38767767;
		case 1566650197: /* GXTEntry: "Saint Denis Times No. 43" */
			return -194659462;
		case -572653278: /* GXTEntry: "Saint Denis Times No. 44" */
			return -549220042;
		case -532692958: /* GXTEntry: "Saint Denis Times No. 45" */
			return 293303717;
		case -1594812622: /* GXTEntry: "Saint Denis Times No. 46" */
			return -1890586292;
		case -358162791: /* GXTEntry: "Saint Denis Times No. 47" */
			return -2122099277;
		case 368626453: /* GXTEntry: "Saint Denis Times No. 48" */
			return -1681356223;
		case 543847666: /* GXTEntry: "Saint Denis Times No. 49" */
			return -830115910;
		case 888242611: /* GXTEntry: "Saint Denis Times No. 50" */
			return 1211786018;
		case 1712504077: /* GXTEntry: "Saint Denis Times No. 51" */
			return 1124096174;
		case -634222073: /* GXTEntry: "Saint Denis Times No. 52" */
			return -911614461;
		case 662019373: /* GXTEntry: "Saint Denis Times No. 53" */
			return -662209602;
		case 1032348365: /* GXTEntry: "Saint Denis Times No. 54" */
			return 1799528770;
		case -1449342224: /* GXTEntry: "Saint Denis Times No. 55" */
			return 1560872143;
		case 1786928078: /* GXTEntry: "Saint Denis Times No. 56" */
			return -1764788133;
	}
	return -1;
}

void func_455(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<14> Var3;
	struct<14> Var17;

	if (aggregate_func_437(Global_35))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	bVar2 = false;
	Var3.f_9 = -1591664384;
	Var17 = { aggregate_func_4303(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (aggregate_func_2836(&Var17, &iVar0, &iVar1, bParam3))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (aggregate_func_2840(&Var3, bVar2, iVar0, iVar1))
			{
				if (!aggregate_func_3540(Var3))
				{
				}
				else if (bParam1)
				{
					aggregate_func_2415(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					aggregate_func_2415(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					aggregate_func_2415(iParam0, Var3.f_4, aggregate_func_7173(Var3.f_4));
				}
			}
			bVar2++;
		}
		aggregate_func_2837(iVar0);
	}
}

void func_456(int iParam0)
{
	aggregate_func_2415(iParam0, joaat("weapon_kit_binoculars"), aggregate_func_4505(32));
	aggregate_func_2415(iParam0, 1652431022 /* GXTEntry: "Refined Binoculars" */, aggregate_func_4505(32));
	aggregate_func_2415(iParam0, joaat("weapon_kit_camera"), aggregate_func_4505(64));
	aggregate_func_2415(iParam0, -1516555556 /* GXTEntry: "Horse Brush" */, aggregate_func_4505(1024));
	aggregate_func_2415(iParam0, -862059856 /* GXTEntry: "Metal Detector" */, aggregate_func_4505(32768));
	func_1135(iParam0, aggregate_func_4505(8192));
	func_1136(iParam0, aggregate_func_4505(128));
	func_1137(iParam0, aggregate_func_4505(4));
	func_1138(iParam0, aggregate_func_4505(8));
	func_1139(iParam0, aggregate_func_4505(1));
}

void func_463()
{
	float fVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (aggregate_func_5337(Global_35))
		{
			Global_1939057->f_7 |= 1;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1);
		}
		if (aggregate_func_755(Global_35))
		{
			Global_1939057->f_7 |= 2;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 2);
		}
		if (aggregate_func_2905(Global_35, 713668775))
		{
			Global_1939057->f_7 |= 4;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4);
		}
		if (aggregate_func_1183(Global_35))
		{
			Global_1939057->f_7 |= 8;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8);
		}
		if (aggregate_func_4251() == 0)
		{
			if (aggregate_func_572(1, 1))
			{
				Global_1939057->f_7 |= 16;
			}
			else
			{
				Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16);
			}
		}
		else if (aggregate_func_3616(0, 1))
		{
			Global_1939057->f_7 |= 16;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16);
		}
		if (!func_1148(0))
		{
			Global_1939057->f_7 |= 32;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 32);
		}
		if (!func_1149(0))
		{
			Global_1939057->f_7 |= 512;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 512);
		}
		if (!func_1150(0))
		{
			Global_1939057->f_7 |= 8192;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8192);
		}
		if (PED::IS_PED_IN_COVER(Global_35, 0, 1))
		{
			Global_1939057->f_7 |= 16384;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16384);
		}
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			Global_1939057->f_7 |= 32768;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 32768);
		}
		if (aggregate_func_4251() == 0 && PED::_0xB655DB7582AEC805(Global_35))
		{
			Global_1939057->f_7 |= 131072;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 131072);
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		{
			Global_1939057->f_7 |= 256;
		}
		else if (PED::_0x7FC84E85D98F063D(Global_35))
		{
			Global_1939057->f_7 |= 256;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 256);
		}
		fVar0 = 30f;
		if (aggregate_func_4258() || aggregate_func_9290())
		{
			fVar0 = 50f;
		}
		if ((Global_1939168->f_18 || TASK::_0xC8B29D18022EA2B7(Global_35)) || aggregate_func_1616(fVar0, 1024))
		{
			Global_1939057->f_7 |= 1024;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1024);
		}
		if (TASK::IS_PED_RUNNING(Global_35))
		{
			Global_1939057->f_7 |= 4096;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4096);
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || aggregate_func_2905(Global_35, 1369124074))
		{
			Global_1939057->f_7 |= 128;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 128);
		}
		if (TASK::IS_PED_GETTING_UP(Global_35))
		{
			Global_1939057->f_7 |= 1048576;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1048576);
		}
		if (PED::IS_PED_MALE(Global_35))
		{
			Global_1939057->f_7 |= 16777216;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16777216);
		}
		if (func_1153())
		{
			Global_1939057->f_7 |= 33554432;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 33554432);
		}
		if (func_1154(0))
		{
			Global_1939057->f_7 |= 524288;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 524288);
		}
		if (func_1155(0))
		{
			Global_1939057->f_7 |= 262144;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 262144);
		}
		if (aggregate_func_8919(Global_35))
		{
			Global_1939057->f_7 |= 4194304;
		}
		else
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4194304);
		}
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 2);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 32);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 512);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8192);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16384);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 32768);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 131072);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 256);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1024);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4096);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 128);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 1048576);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 16777216);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 33554432);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 524288);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 262144);
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 4194304);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1939057->f_7 |= 65536;
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1939057->f_7 |= 64;
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 64);
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (aggregate_func_1156(iVar1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iVar1))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8388608);
					break;
				default:
					Global_1939057->f_7 |= 8388608;
					break;
			}
		}
		if (PED::_0xFB4891BD7578CDC1(iVar1, 149557334))
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8388608);
		}
		if (!PED::IS_PED_RAGDOLL(iVar1) && PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8388608);
		}
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 8388608);
	}
	if ((aggregate_func_1758() || aggregate_func_2649()) || (aggregate_func_1135(0, 0, 1) && !aggregate_func_7901()))
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 2097152);
	}
	else
	{
		Global_1939057->f_7 |= 2097152;
	}
	if (func_1160())
	{
		Global_1939057->f_7 |= 67108864;
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 67108864);
	}
	if (Global_1939168->f_52)
	{
		Global_1939057->f_7 |= 134217728;
	}
	else
	{
		Global_1939057->f_7 = (Global_1939057->f_7 - Global_1939057->f_7 & 134217728);
	}
}

int func_466(int iParam0, int iParam1)
{
	if (func_471(iParam0))
	{
		func_469(iParam0);
		return 0;
	}
	else
	{
		Stack.Push(0);
		Call_Loc(iParam1);
		if (aggregate_func_1769(StackVal, StackVal))
		{
			func_473(iParam0);
			return 1;
		}
		else
		{
			func_469(iParam0);
			return 0;
		}
	}
	return 0;
}

void func_469(int iParam0)
{
	aggregate_func_4247(&(Global_1939057->f_38), iParam0);
}

bool func_471(int iParam0)
{
	return (Global_1939057->f_39 && iParam0) != 0;
}

void func_473(int iParam0)
{
	aggregate_func_4247(&(Global_1939057->f_38), iParam0);
}

var func_478()
{
	return Global_1939057->f_10;
}

var func_479()
{
	return Global_1939057->f_11;
}

var func_480()
{
	return Global_1939057->f_12;
}

var func_481()
{
	return Global_1939057->f_13;
}

void func_490()
{
	Global_1939057->f_39 = 0;
}

void func_492()
{
	int iVar0;
	int iVar1;

	func_1170();
	if (!Global_1939057->f_21)
	{
		iVar0 = joaat("MEDIUM_TIMED_EVENT");
		if (!aggregate_func_2875(&(Global_1939057->f_83[2])))
		{
			Global_1939057->f_83[2] = aggregate_func_2045("HUD_SATCHEL", joaat("INPUT_OPEN_SATCHEL_MENU"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 1, iVar0, 0);
			aggregate_func_2057(&(Global_1939057->f_83[2]), 21, 1, 1);
			aggregate_func_2057(&(Global_1939057->f_83[2]), 20, 1, 1);
			HUD::_UIPROMPT_SET_TAG(((*Global_1949749)[&Global_1939057->f_83[2] /*23*/])->f_3, "UCID_SATCHEL");
		}
		if (!aggregate_func_2875(&(Global_1939057->f_83[4])))
		{
			Global_1939057->f_83[4] = aggregate_func_2045("HUD_CATALOG", joaat("INPUT_OPEN_JOURNAL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 1, iVar0, 0);
			aggregate_func_2057(&(Global_1939057->f_83[4]), 21, 0, 1);
			aggregate_func_2057(&(Global_1939057->f_83[4]), 20, 1, 1);
		}
		if (!aggregate_func_2875(&(Global_1939057->f_83[3])))
		{
			Global_1939057->f_83[3] = aggregate_func_2045("HUD_PLAYER_MENU", joaat("INPUT_PLAYER_MENU"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 1, iVar0, 0);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (aggregate_func_2875(&(Global_1939057->f_83[iVar1])))
			{
				aggregate_func_2057(&(Global_1939057->f_83[iVar1]), 17, 1, 1);
				aggregate_func_2057(&(Global_1939057->f_83[iVar1]), 13, 1, 1);
				if (&Global_1939057->f_83[iVar1] != &Global_1939057->f_83[3])
				{
					aggregate_func_2057(&(Global_1939057->f_83[iVar1]), 23, 1, 1);
				}
				aggregate_func_1513(&(Global_1939057->f_83[iVar1]), 0);
			}
			iVar1++;
		}
		Global_1939057->f_21 = 1;
	}
}

void func_493()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	bVar0 = false;
	bVar1 = PED::GET_PED_RESET_FLAG(Global_1273882->f_8, 311);
	bVar2 = PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::GET_PLAYER_INDEX());
	bVar3 = aggregate_func_4240(&Global_1939168, 65536);
	if (aggregate_func_7506(128))
	{
		bVar0 = true;
	}
	else if (aggregate_func_7506(512))
	{
		bVar0 = true;
	}
	else if (aggregate_func_7506(1048576))
	{
		bVar0 = true;
	}
	else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1273882->f_8) && !func_1173(Global_1273882->f_8))
	{
		bVar0 = true;
	}
	else if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		bVar0 = true;
	}
	else if (aggregate_func_7506(4))
	{
		bVar0 = true;
	}
	if (aggregate_func_1557(Global_1273882->f_8, 0) || !ENTITY::DOES_ENTITY_EXIST(Global_1273882->f_8))
	{
		bVar0 = true;
	}
	if (!bVar0 && TASK::_0xEC7E480FF8BD0BED(Global_1273882->f_8))
	{
		bVar0 = true;
	}
	if (!bVar0 && bVar3)
	{
		bVar0 = true;
	}
	if ((bVar0 || bVar1) || !func_1175())
	{
		func_1176(2);
	}
	else
	{
		func_1177(2, 0);
	}
	if ((!aggregate_func_6547() || bVar1) || bVar2)
	{
		func_1176(6);
	}
	else
	{
		func_1177(6, 1);
	}
	func_1177(3, 0);
	if (bVar0 || !func_1178())
	{
		func_1176(4);
	}
	else
	{
		func_1177(4, 0);
	}
	bVar4 = false;
	if (aggregate_func_2875(&(Global_1939057->f_83[5])) && aggregate_func_4637(&(Global_1939057->f_83[5]), 0))
	{
		if (func_1180())
		{
			bVar4 = true;
		}
	}
	if (bVar0 || bVar4)
	{
		func_1176(5);
	}
	else
	{
		func_1177(5, 0);
	}
	if (Global_1915170->f_21989 == 0)
	{
		if (aggregate_func_2875(&(Global_1939057->f_83[4])))
		{
			aggregate_func_2057(&(Global_1939057->f_83[4]), 21, 0, 0);
		}
	}
	else if (aggregate_func_2875(&(Global_1939057->f_83[4])))
	{
		aggregate_func_2057(&(Global_1939057->f_83[4]), 21, 1, 0);
	}
}

void func_494()
{
	if (Global_1939057->f_108)
	{
		if ((Global_1273882->f_20 - Global_1939057->f_110) >= 3000)
		{
			func_1181();
		}
		if (Global_1939057->f_5 != 2)
		{
			func_1181();
		}
	}
}

void func_495(bool bParam0)
{
	bool bVar0;

	Global_1939057->f_20 = 1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	bVar0 = false;
	if (aggregate_func_4251() == 0)
	{
		if ((((func_1182() || Global_1048577) // PointerArith || aggregate_func_4258()) || aggregate_func_6688()) || func_1184())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if ((aggregate_func_4366(Global_524288->f_39792) && Global_1048577) // PointerArith && aggregate_func_2255() == 0)
			{
				bVar0 = false;
			}
		}
	}
	if (!Global_1939057->f_22)
	{
		Global_1939057->f_22 = 1;
		if (bVar0)
		{
			if (bParam0)
			{
				if (Global_1939057->f_109)
				{
					Global_1939057->f_5 = 2;
					func_1187();
				}
			}
			else
			{
				Global_1939057->f_5 = 1;
				func_1181();
			}
		}
	}
	if ((bVar0 && !bParam0) && PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PROMPT_PAGE_NEXT")))
	{
		func_1188();
	}
	if (aggregate_func_4251() == -1)
	{
		func_1190(704572841, func_1189(), 1);
		PAD::_0x2804658EB7D8A50B(5, -333019928);
	}
	else if (!bParam0)
	{
		if (bVar0)
		{
			func_1190(704572841, func_1191(), 2);
			if (Global_1939057->f_5 == 1)
			{
				PAD::_0x2804658EB7D8A50B(5, -2070808411);
			}
			else
			{
				PAD::_0x2804658EB7D8A50B(5, -333019928);
			}
		}
		else
		{
			func_1190(704572841, func_1189(), 1);
			PAD::_0x2804658EB7D8A50B(5, -333019928);
		}
	}
}

bool func_496()
{
	return Global_1939057->f_108;
}

void func_497()
{
	if (aggregate_func_2875(&(Global_1939057->f_83[6])))
	{
		if (!Global_1939221->f_1 && !TASK::_0x038B1F1674F0E242(Global_35))
		{
			aggregate_func_8137(0);
		}
		func_1192();
		aggregate_func_2878(Global_1939057->f_83[6], 1, 1);
	}
}

bool func_498()
{
	int iVar0;
	int iVar1;

	iVar0 = HUD::_0x0501D52D24EA8934(1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (aggregate_func_8555(iVar1) || aggregate_func_8554(iVar1))
	{
		return false;
	}
	return true;
}

int func_507(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iParam0, aggregate_func_5255());
	return iVar0;
}

int func_510(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iParam0, aggregate_func_5211());
	return iVar0;
}

int func_511(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = aggregate_func_1732(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

bool func_562()
{
	return Global_1912968->f_3 == 0;
}

void func_564()
{
	Global_1912968->f_3 = 0;
}

bool func_568()
{
	return Global_1912968->f_130 == 0;
}

void func_574(int iParam0, bool bParam1, struct<4> Param2)
{
	bool bVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35) && !aggregate_func_2021(Global_35))
	{
		return;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return;
	}
	else if (PED::IS_PED_RELOADING(Global_35))
	{
		return;
	}
	if (iParam0 == 1)
	{
		bVar0 = bParam1;
		if (!Global_1939057->f_9 && !PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), bVar0, &Param2, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1939057->f_8 = 1;
			Global_1939057->f_66 = { Param2 };
		}
	}
}

int func_579(bool bParam0, int iParam1)
{
	if (aggregate_func_4251() == -1)
	{
		if (func_1296(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (aggregate_func_4251() == 0)
	{
		if (func_1296(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_580(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
}

bool func_584(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char* sVar3;
	char cVar4[128];
	bool bVar20;
	int iVar21;
	char* sVar22;
	char cVar23[64];
	int iVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	float fVar36;
	int iVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	float fVar42;
	int iVar43;
	bool bVar44;
	char* sVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	int iVar56;
	char* sVar57;
	bool bVar58;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		return false;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("shop_browsing_main_flow"));
	}
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (!UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, -649639953))
	{
		return false;
	}
	if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(304478236, *uParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_12);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "isVisible", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "showHorseStats", true);
	sVar3 = PLAYER::_0x0139637A3BFF8B6D(uParam0->f_12, &uVar2);
	StringCopy(&cVar4, MISC::_CREATE_VAR_STRING(0, sVar3), 128);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "itemLabel", &cVar4);
	func_178(iVar1, ENTITY::_0x964000D355219FC0(iVar1), 1, 0);
	bVar20 = COMPENDIUM::COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED(iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "itemDescription", bVar20);
	iVar21 = aggregate_func_4791(iVar0);
	sVar22 = "";
	StringCopy(&cVar23, aggregate_func_5516(iVar21), 64);
	sVar22 = aggregate_func_4984(&cVar23);
	iVar31 = PLAYER::PLAYER_ID();
	bVar32 = false;
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar31) == iVar1)
	{
		bVar32 = true;
	}
	bVar33 = false;
	if (PLAYER::_0xD3F7445CEA2E5035(iVar31) == iVar1)
	{
		bVar33 = true;
	}
	bVar34 = false;
	if (bVar32 || bVar33)
	{
		bVar34 = true;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "visible", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "showHorseStats", true);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_1, "horseRpgStats");
	bVar35 = aggregate_func_1732(iVar1);
	fVar36 = PED::_0x22F2A386D43048A9(iVar1);
	iVar37 = aggregate_func_1365(iVar1, 1);
	bVar38 = BUILTIN::ROUND((IntToFloat(iVar37) * 0.15f));
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, "stamina");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2.f_1, "unlockedMaxAsState", bVar35);
	DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0->f_2.f_1, "normalizedValue", fVar36);
	DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0->f_2.f_1, "normalizedUnlockedMax", fVar36);
	uParam0->f_2.f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2.f_1, "staminaCore");
	uParam0->f_2.f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2.f_2, "status");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2.f_3, "state", bVar38);
	bVar39 = aggregate_func_1732(iVar1);
	iVar40 = ENTITY::GET_ENTITY_HEALTH(iVar1);
	iVar41 = ENTITY::GET_ENTITY_MAX_HEALTH(iVar1, 0);
	fVar42 = (BUILTIN::TO_FLOAT(iVar40) / BUILTIN::TO_FLOAT(iVar41));
	iVar43 = aggregate_func_1365(iVar1, 0);
	bVar44 = BUILTIN::ROUND((IntToFloat(iVar43) * 0.15f));
	uParam0->f_2.f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, "health");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2.f_4, "unlockedMaxAsState", bVar39);
	DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0->f_2.f_4, "normalizedValue", fVar42);
	DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0->f_2.f_4, "normalizedUnlockedMax", fVar42);
	uParam0->f_2.f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2.f_4, "healthCore");
	uParam0->f_2.f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2.f_5, "status");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2.f_6, "state", bVar44);
	func_183(uParam0);
	sVar45 = aggregate_func_5165(iVar21);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "horseName", HUD::_GET_LABEL_TEXT_2(sVar22));
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "HorseCoat", sVar45);
	iVar46 = aggregate_func_1535(iVar1);
	bVar47 = iVar46 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedValue", bVar47);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedMaxValue", 10);
	iVar48 = func_507(iVar1);
	bVar49 = (bVar47 + iVar48);
	bVar49 = aggregate_func_5207(bVar49, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedEquipmentValue", bVar49);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedEquipmentMaxValue", 10);
	bVar50 = bVar47 + 2;
	bVar50 = aggregate_func_5207(bVar50, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedCapacityValue", bVar50);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseSpeedCapacityMaxValue", 10);
	iVar51 = aggregate_func_1535(iVar1);
	bVar52 = iVar51 + 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccValue", bVar52);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccMaxValue", 10);
	iVar53 = func_510(iVar1);
	bVar54 = (bVar52 + iVar53);
	bVar54 = aggregate_func_5207(bVar54, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccEquipmentValue", bVar54);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccEquipmentMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccEquipmentMaxValue", 10);
	bVar55 = bVar52 + 2;
	bVar55 = aggregate_func_5207(bVar55, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccCapacityValue", bVar55);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccCapacityMinValue", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HorseAccCapacityMaxValue", 10);
	iVar56 = func_511(iVar1);
	sVar57 = aggregate_func_5253(iVar56);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "HorseHandling", sVar57);
	bVar58 = false;
	if (bVar34 && TASK::IS_PED_IN_WRITHE(iVar1))
	{
		bVar58 = -7914336; /* GXTEntry: "Use Horse Reviver to restore some Horse Health" */
	}
	else if (bVar32)
	{
		bVar58 = -790855579; /* GXTEntry: "This is your main horse" */
	}
	else if (bVar33)
	{
		bVar58 = 592282892; /* GXTEntry: "This is your temporary horse" */
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "itemTipText", bVar58);
	return true;
}

bool func_585(var uParam0)
{
	int iVar0;
	char* sVar1;
	char cVar2[128];
	int iVar18;
	int iVar19;
	char cVar20[128];
	bool bVar36;
	int iVar37;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return false;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("shop_browsing_main_flow"));
	}
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (!UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, -1645363952))
	{
		return false;
	}
	if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(304478236, *uParam0))
	{
		return false;
	}
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "isVisible", true);
	sVar1 = PLAYER::_0x0139637A3BFF8B6D(uParam0->f_12, &iVar0);
	StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(0, sVar1), 128);
	if (iVar0 == 1)
	{
		iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		iVar19 = PED::_0x7BCC6087D130312A(iVar18);
		if (iVar19 != -1)
		{
			if (iVar19 == 2)
			{
				StringCopy(&cVar20, "PED_QUALITY_HIGH", 128);
			}
			else if (iVar19 == 1)
			{
				StringCopy(&cVar20, "PED_QUALITY_MEDIUM", 128);
			}
			else
			{
				StringCopy(&cVar20, "PED_QUALITY_LOW", 128);
			}
			StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(42, "MORE_INFO_PED_QUALITY", MISC::_CREATE_VAR_STRING(0, sVar1), &cVar20), 128);
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "itemLabel", &cVar2);
	bVar36 = false;
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_12))
	{
		iVar37 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_12);
		func_178(iVar37, ENTITY::_0x964000D355219FC0(iVar37), 1, 0);
		bVar36 = COMPENDIUM::COMPENDIUM_GET_SHORT_DESCRIPTION_FROM_PED(iVar37);
		if (iVar0 == 1)
		{
			if (PED::_0xFB4891BD7578CDC1(iVar37, -234257069))
			{
				bVar36 = MISC::GET_HASH_KEY("MANGY_ANIMAL_DESC_MP");
			}
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1, "itemDescription", bVar36);
	return true;
}

void func_586(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_28), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_28), 2);
	}
}

void func_587(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_27), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_27), 0);
	}
}

void func_588()
{
	Global_17096.f_3 = 0;
}

void func_589(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam1)[iVar0] = uParam0[iVar0];
		iVar0++;
	}
}

int func_592(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 176)
	{
		if (!aggregate_func_4375(iVar0))
		{
		}
		else if (aggregate_func_4369(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!aggregate_func_5594(iVar0))
			{
			}
			else
			{
				iVar2 = aggregate_func_5278(iVar0);
				if (bParam3)
				{
					if (!aggregate_func_5497(iVar2))
					{
					}
					else if (bParam2)
					{
						if (aggregate_func_4330(iVar2))
						{
						}
						else
						{
							fVar3 = aggregate_func_1501(Global_35, aggregate_func_6004(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

int func_607(float fParam0)
{
	return func_1312(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fParam0);
}

int func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1313(iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_1313(iParam0, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_1313(iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return iVar2;
	}
	iVar3 = PED::_0x14169FA823679E41(iParam0);
	return iVar3;
}

void func_612(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4249(uParam0);
	uParam0->f_15 = aggregate_func_3543(iVar0);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (ENTITY::_0xC346A546612C49A9(iVar0))
	{
		switch (iVar1)
		{
			case joaat("a_c_duck_01"):
				break;
			case joaat("a_c_eagle_01"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_egret_01"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_goosecanada_01"):
				func_587(uParam0, 0);
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case joaat("a_c_alligator_01"):
			case joaat("a_c_alligator_02"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_bear_01"):
			case joaat("a_c_bearblack_01"):
				func_587(uParam0, 1);
				break;
			case joaat("a_c_buffalo_01"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_coyote_01"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_deer_01"):
				break;
			case joaat("a_c_rabbit_01"):
				func_587(uParam0, 0);
				break;
			case joaat("a_c_skunk_01"):
				func_587(uParam0, 0);
				break;
			default:
				break;
		}
	}
	func_1315(uParam0, iVar1);
}

void func_613(var uParam0)
{
	var uVar0;

	uParam0->f_9 = 0;
	uParam0->f_28 = 0;
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar0 = 30;
	func_589(&uVar0, &(uParam0->f_46.f_2));
	func_1316(&(uParam0->f_46.f_37));
	if (uParam0->f_84.f_46)
	{
		uParam0->f_84.f_46 = 0;
		uParam0->f_84.f_16 = 0;
		uParam0->f_84.f_17 = -1;
		uParam0->f_84.f_18 = -1;
		uParam0->f_84.f_19 = 0;
		uParam0->f_84.f_43 = 0;
		uParam0->f_84.f_44 = 0;
		uParam0->f_84.f_45 = 0;
		uParam0->f_84.f_47 = -1;
		func_647(&(uParam0->f_84), 0);
	}
	func_649(*uParam0);
}

void func_618(char* sParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = MISC::GET_HASH_KEY(sParam2);
		iVar1 = MISC::GET_HASH_KEY(sParam3);
	}
	if (!CAM::_0x927B810E43E99932(sParam0))
	{
		if ((CAM::_0xDD0B7C5AE58F721D(sParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && (iVar0 != -1 || iVar1 != -1))
		{
			CAM::_0xB8B207C34285E978(sParam0);
			sParam0->f_16 = iParam1;
			sParam0->f_17 = iVar0;
			sParam0->f_18 = iVar1;
			CAM::_0x29E6655DF3590B0D(sParam0);
		}
	}
	else if (((sParam0->f_16 != iParam1 && ENTITY::DOES_ENTITY_EXIST(iParam1)) || sParam0->f_17 != iVar0) || sParam0->f_18 != iVar1)
	{
		sParam0->f_16 = iParam1;
		sParam0->f_17 = iVar0;
		sParam0->f_18 = iVar1;
		CAM::_0x29E6655DF3590B0D(sParam0);
	}
}

void func_619(var uParam0, int iParam1)
{
	func_1317(&(uParam0->f_29));
	switch (&uParam0->f_2[iParam1])
	{
		case 0:
			func_1318(uParam0);
			break;
		case 1:
			func_1319(uParam0);
			break;
		case 2:
			func_1320(uParam0);
			break;
		case -1:
		default:
			break;
	}
}

bool func_620(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_28, 2);
}

void func_624(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		uParam0->f_33[iVar0] = 0;
		iVar0++;
	}
	iVar2 = aggregate_func_4249(uParam0);
	uParam0->f_44 = PED::_0x88EFFED5FE8B0B4A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
	if (aggregate_func_2850(-269048282 /* GXTEntry: "Buck Antler Trinket" */, 1))
	{
		if (uParam0->f_44 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			iVar3 = uParam0->f_44;
			iVar3++;
			uParam0->f_44 = iVar3;
		}
	}
	iVar4 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
	if (Global_17096.f_2 != 3)
	{
		iVar4 = Global_17096.f_2;
	}
	uParam0->f_45 = aggregate_func_3962(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
	PED::_0x6B89FAA36FC909A3(&(uParam0->f_33), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), uParam0->f_44, uParam0->f_45);
	iVar1 = 0;
	while (iVar1 < uParam0->f_33)
	{
		if (&uParam0->f_33[iVar1] != 0)
		{
			if (aggregate_func_3963(iVar2) && !aggregate_func_5236(&(uParam0->f_33[iVar1])))
			{
				uParam0->f_33[iVar1] = 0;
			}
			else if (INVENTORY::_0x4AEF1FB5B9011D75(&(uParam0->f_33[iVar1])) && !func_627(iVar2))
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				MISC::_0x9B47971234169990(iVar5, &(uParam0->f_33[iVar1]));
			}
		}
		iVar1++;
	}
	aggregate_func_4252(uParam0, 5);
}

bool func_627(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("a_c_armadillo_01"):
		case joaat("a_c_possum_01"):
		case joaat("a_c_skunk_01"):
		case joaat("a_c_badger_01"):
		case joaat("a_c_muskrat_01"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_raccoon_01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_628(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("a_c_elk_01"):
		case joaat("a_c_buck_01"):
		case joaat("a_c_duck_01"):
		case joaat("a_c_goat_01"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_deer_01"):
		case joaat("a_c_buffalo_01"):
			return true;
		default:
			break;
	}
	return false;
}

int func_631(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::_0x30569F348D126A5A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	switch (iVar0)
	{
		case joaat("a_c_bighornram_01"):
			switch (iVar1)
			{
				case -1667731605:
				case 707006636:
				case 834383524:
					return 529358653;
				default:
					break;
			}
			return -1602270678;
		case joaat("a_c_egret_01"):
			switch (iVar1)
			{
				case 1437006206:
					return -1125709620;
				case -770027479:
					return 459066619;
				default:
					break;
			}
			return 1386296519;
		case joaat("a_c_elk_01"):
			switch (iVar1)
			{
				case -307919990:
				case -6609035:
					return -2107595540;
				default:
					break;
			}
			return -336178884;
		case joaat("a_c_moose_01"):
			switch (iVar1)
			{
				case -1861127026:
				case -1538725798:
				case 2146685523:
					return -2054953443;
				default:
					break;
			}
			return 1119640965;
	}
	return iVar0;
}

void func_637(int iParam0)
{
	if (iParam0 == -923552142)
	{
		if (STATS::CHAL_IS_GOAL_ACTIVE(1231074654, 586762978))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(1231074654, 586762978, 1);
		}
	}
}

void func_638()
{
	int iVar0;

	if (!aggregate_func_2892(0) || aggregate_func_1519())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_17096.f_4[iVar0 /*2*/] != 0 && (Global_17096.f_4[iVar0 /*2*/])->f_1 > 0)
		{
			aggregate_func_220(&(Global_17096.f_4[iVar0 /*2*/]), (Global_17096.f_4[iVar0 /*2*/])->f_1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			aggregate_func_2861(MISC::_CREATE_VAR_STRING(10, "ITEM_GET_PUMP_MULT", MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(&(Global_17096.f_4[iVar0 /*2*/]))), (Global_17096.f_4[iVar0 /*2*/])->f_1), "", 0, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		}
		iVar0++;
	}
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 41;
		case 1:
			return 42;
		case 2:
			return 43;
		default:
			break;
	}
	return 41;
}

void func_647(char* sParam0, bool bParam1)
{
	if (CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
	}
	if (bParam1)
	{
		CAM::_0x798BE43C9393632B(sParam0);
	}
}

void func_649(struct<11> Param0, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate_func_3544(&(Param0.f_10[iVar0])))
		{
			aggregate_func_2985(1);
		}
		iVar0++;
	}
}

void func_650(var uParam0)
{
	int iVar0;
	var uVar1;

	aggregate_func_4242(uParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2[iVar0] = -1;
		uParam0->f_18[iVar0] = -1f;
		iVar0++;
	}
	uParam0->f_9 = 0;
	uParam0->f_25 = 0;
	uParam0->f_16 = 0;
	uParam0->f_15 = 0;
	uParam0->f_26 = 0f;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	func_587(uParam0, 1);
	Global_17096 = *uParam0;
	Global_17096.f_1 = 0;
	Global_17096.f_2 = 3;
	func_588();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17096.f_4[iVar0 /*2*/] = 0;
		(Global_17096.f_4[iVar0 /*2*/])->f_1 = 1;
		iVar0++;
	}
	uParam0->f_46 = 0f;
	uParam0->f_46.f_1 = 0f;
	uVar1 = 30;
	func_589(&uVar1, &(uParam0->f_46.f_2));
	uParam0->f_46.f_33 = 20;
	uParam0->f_46.f_34 = 1000;
	uParam0->f_46.f_35 = 1f;
	func_1316(&(uParam0->f_46.f_37));
	uParam0->f_84.f_16 = 0;
	uParam0->f_84.f_17 = -1;
	uParam0->f_84.f_18 = -1;
	uParam0->f_84.f_19 = 0;
	uParam0->f_84.f_43 = 0;
	uParam0->f_84.f_44 = 0;
	uParam0->f_84.f_45 = 0;
	uParam0->f_84.f_46 = 0;
	uParam0->f_84.f_47 = -1;
	aggregate_func_4313(&(uParam0->f_84.f_48));
}

bool func_651(bool bParam0)
{
	if (!aggregate_func_3033(bParam0))
	{
		return false;
	}
	return false;
}

void func_652(var uParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = false;
	if (aggregate_func_4641(uParam0) == 5 && !aggregate_func_4226(uParam0))
	{
		iVar1 = 0;
		while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_35)
				{
					if (vVar2.y == aggregate_func_4249(uParam0) && vVar2.z)
					{
						bVar0 = true;
					}
					else
					{
						aggregate_func_4252(uParam0, 6);
					}
				}
				else if (vVar2.x == 0 && vVar2.y == 0)
				{
					aggregate_func_4252(uParam0, 6);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_1340(uParam0, 1);
		}
	}
}

void func_653(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1891.925f, -1864.166f, 46.30484f);
			func_1341(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_00", 1, 0, 1, 0, iVar0);
			func_1341(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_01", 2, 0, 1, 0, iVar0);
			func_1341(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_02", 4, 0, 1, 0, iVar0);
			func_1341(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_03", 15, 0, 1, 0, iVar0);
			break;
		case 2:
			func_1341(1891.925f, -1864.166f, 46.30484f, "shb_p_mansion_04", 5, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(1905.741f, -1862.606f, 46.3492f, "shb_p_mansion_fasttravel", 6, 0, 1, 0, 0);
			break;
		case 4:
			func_1341(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_eden", 7, 0, 1, 0, 0);
			break;
		case 5:
			func_1341(1894.485f, -1859.417f, 46.3346f, "shb_p_mansion_pulp_inferno", 8, 0, 1, 0, 0);
			break;
		case 6:
			func_1341(1898.38f, -1871.146f, 46.3756f, "shb_upg_john_rug", 9, 0, 1, 0, 0);
			break;
		case 7:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1905.561f, -1861.793f, 46.3492f);
			func_1341(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_chest", 10, 0, 1, 0, iVar0);
			func_1341(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_rug", 11, 0, 1, 0, iVar0);
			func_1341(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_ram", 12, 0, 1, 0, iVar0);
			func_1341(1905.561f, -1861.793f, 46.3492f, "shb_upg_skull_gator", 13, 0, 1, 0, iVar0);
			func_1341(1905.561f, -1861.793f, 46.3492f, "shb_upg_arthur_table", 14, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_654(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(2294f, 1462.5f, 85.8f, "bea_cave_endlessSummer", 162, 0, 1, 0, 0);
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2294f, 1462.5f, 85.8f);
			func_1341(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORM", 189, 0, 1, 0, iVar0);
			func_1341(2294f, 1462.5f, 85.8f, "BEA_CAVE_INT_PLATFORMBURNED", 188, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_655(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			if (STREAMING::_IS_IMAP_ACTIVE(-1490034522))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2692.287f, -1197.868f, 55.4693f);
				func_1341(2692.287f, -1197.868f, 55.4693f, "new_art_photos_pre_RC_Mason", 16, 0, 1, 0, iVar0);
				func_1341(2692.287f, -1197.868f, 55.4693f, "new_art_photos_post_RC_Mason", 17, 0, 1, 0, iVar0);
			}
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2385.548f, -1221.158f, 46.1729f);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_open", 158, 0, 1, 0, iVar0);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_shutters_close", 159, 0, 1, 0, iVar0);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_glass_breakable", 160, 0, 1, 0, iVar0);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_glass_unbreakable", 161, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2638.399f, -1290.197f, 51.2461f);
			func_1341(2638.399f, -1290.197f, 51.2461f, "new_com_bank_before", 132, 0, 1, 0, iVar0);
			func_1341(2638.399f, -1290.197f, 51.2461f, "new_com_bank_shootout", 133, 0, 1, 0, iVar0);
			func_1341(2638.399f, -1290.197f, 51.2461f, "new_com_bank_after", 135, 0, 1, 0, iVar0);
			func_1341(2638.399f, -1290.197f, 51.2461f, "new_com_bank_int_windows_blocker", 136, 0, 1, 0, iVar0);
			break;
		case 4:
			func_1341(2795.127f, -1170.396f, 46.924f, "ForMyArt_nobarprops", 166, 0, 1, 0, 0);
			break;
		case 5:
			if (STREAMING::_IS_IMAP_ACTIVE(-1490034522))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2698.232f, -1187.539f, 55.0907f);
				func_1341(2698.232f, -1187.539f, 55.0907f, "new_art_exhibit_RC_Art3", 152, 0, 1, 0, iVar0);
				func_1341(2698.232f, -1187.539f, 55.0907f, "new_art_exhibit_post_RC_Art3", 153, 0, 1, 0, iVar0);
			}
			break;
		case 6:
			if (STREAMING::_IS_IMAP_ACTIVE(-1490034522))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2689.99f, -1203.135f, 55.4694f);
				func_1341(2689.99f, -1203.135f, 55.4694f, "new_forMyArt_paintings", 154, 0, 1, 0, iVar0);
				func_1341(2689.99f, -1203.135f, 55.4694f, "new_forMyArt_gallery", 155, 0, 1, 0, iVar0);
				func_1341(2689.99f, -1203.135f, 55.4694f, "st_denis_art_int_open", 157, 0, 1, 0, iVar0);
			}
			break;
		case 7:
			func_1341(2698.736f, -1188.603f, 51.0762f, "st_denis_art_int_closed", 156, 0, 1, 0, 0);
			break;
		case 8:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2385.548f, -1221.158f, 46.1729f);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_mp_dressing", 164, 0, 1, 0, iVar0);
			func_1341(2385.548f, -1221.158f, 46.1729f, "bronte_sp_dressing", 165, 0, 1, 0, iVar0);
			break;
		case 9:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2643.301f, -1304.161f, 51.2461f);
			func_1341(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_with_rayfire", 137, 0, 1, 0, iVar0);
			func_1341(2643.301f, -1304.161f, 51.2461f, "new_com_bank_vaults_without_rayfire", 138, 0, 1, 0, iVar0);
			break;
		case 10:
			func_1341(2652.08f, -1292.479f, 51.246f, "new_com_bank_int_des", 134, 0, 1, 0, 0);
			break;
		case 11:
			func_1341(2853.421f, -1202.203f, 47.5946f, "new_shadyshop_cheatcode01", 217, 0, 1, 0, 0);
			break;
		case 12:
			func_1341(2633.846f, -1225.53f, 52.3804f, "new_saloon01_int_rent", 207, 0, 1, 0, 0);
			break;
		case 13:
			func_1341(2734.165f, -1119.711f, 50.122f, "new_photo_tablechair", 226, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_656(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2253.076f, -789.0005f, 44.3422f);
			func_1341(2253.076f, -789.0005f, 44.3422f, "lak_hidout_trapopen", 23, 0, 1, 0, iVar0);
			func_1341(2253.076f, -789.0005f, 44.3422f, "lak_hideout_intgroup_trapdoor", 24, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2232.242f, -770.113f, 42.5082f);
			func_1341(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_undamaged", 25, 0, 1, 0, iVar0);
			func_1341(2232.242f, -770.113f, 42.5082f, "lak_dockhouse_damaged", 26, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_657(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-63.9f, 1236.4f, 171.8f, "six_table_STATIC", 18, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-63.9f, 1236.4f, 171.8f, "six_fireplace_ON", 19, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(-63.9f, 1236.4f, 171.8f, "six_lights_on", 21, 0, 1, 0, 0);
			break;
		case 4:
			func_1341(-63.9f, 1236.4f, 171.8f, "six_lights_off", 22, 0, 1, 1, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_658(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(1698.872f, 1510.014f, 147.8707f, "vet_fishTrophy", 174, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(1698.872f, 1510.014f, 147.8707f, "InteriorGroup_WolfHead", 175, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_659(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1339.969f, -1371.888f, 84.07868f);
			func_1341(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_before", 128, 0, 1, 0, iVar0);
			func_1341(1339.969f, -1371.888f, 84.07868f, "brt1_saloon_after", 129, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1355.646f, -1301.913f, 76.7644f);
			func_1341(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_01", 141, 0, 1, 0, iVar0);
			func_1341(1355.646f, -1301.913f, 76.7644f, "rho_sheriff_int_JBO1_02", 142, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1339.969f, -1371.888f, 84.07868f);
			func_1341(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables01", 130, 0, 1, 0, iVar0);
			func_1341(1339.969f, -1371.888f, 84.07868f, "rho_sal_tables02", 131, 0, 1, 0, iVar0);
			break;
		case 4:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1293.242f, -1301.401f, 76.0402f);
			func_1341(1293.242f, -1301.401f, 76.0402f, "rhobank_int_walla", 180, 0, 1, 0, iVar0);
			func_1341(1293.242f, -1301.401f, 76.0402f, "rhobank_int_wallb", 181, 0, 1, 0, iVar0);
			break;
		case 5:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1327.78f, -1292.977f, 76.0091f);
			func_1341(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_ON", 190, 0, 1, 0, iVar0);
			func_1341(1327.78f, -1292.977f, 76.0091f, "_FIN2_EXT_P19_FRAMES_OFF", 191, 0, 1, 0, iVar0);
			break;
		case 6:
			func_1341(1339.969f, -1371.888f, 84.07868f, "rho_saloon_int_rentSign", 205, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_660(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-1643.893f, -1358.232f, 86.4541f);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_2.2", 99, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2", 100, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_after_Marston8_Abigail2.2_dressing", 101, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_finished_after_Marston8_dressing", 102, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_fireplace_on", 109, 0, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-1643.893f, -1358.232f, 86.4541f);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01_unmade", 106, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed01", 105, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_decorated_after_Abigail3", 107, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_basic", 108, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed_Abigail3", 104, 0, 1, 0, iVar0);
			break;
		case 3:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-1643.893f, -1358.232f, 86.4541f);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "Beechers_fully_decorated_finale", 110, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "IntGrp_livingrm_furniture_fancy", 111, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03_unmade", 113, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_masterBR_bed03", 112, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "BEE_01_HOUSE_STAGE06", 114, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "BEECHERS_PIANO_STOOL", 115, 0, 1, 0, iVar0);
			func_1341(-1643.893f, -1358.232f, 86.4541f, "bee_01_house_chair", 116, 0, 1, 0, iVar0);
			break;
		case 4:
			func_1341(-1632.406f, -1356.38f, 83.4029f, "bee_01_masterBR_travelmap", 98, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_661(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-613.6971f, -27.7605f, 84.9747f, "pai_intgroup_lootables", 228, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_662(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2593.122f, 452.8192f, 145.9973f);
			func_1341(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedmade", 124, 666254892, 1, 0, iVar0);
			func_1341(-2593.122f, 452.8192f, 145.9973f, "pro_worker_bedunmade", 126, 666254892, 1, 0, iVar0);
			break;
		case 2:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2592.498f, 458.3414f, 145.9973f);
			func_1341(-2592.498f, 458.3414f, 145.9973f, "pro_worker_food", 125, 666254892, 1, 0, iVar0);
			func_1341(-2592.498f, 458.3414f, 145.9973f, "pro_int_shaving", 127, 666254892, 1, 0, iVar0);
			break;
		case 3:
			func_1341(-2371.433f, 472.4824f, 131.229f, "shack_hb_cheat01", 216, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_663(var uParam0)
{
	int iVar0;

	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-273.4513f, 811.3408f, 118.38f);
			func_1341(-273.4513f, 811.3408f, 118.38f, "val_jail_int_walla", 143, 0, 1, 0, iVar0);
			func_1341(-273.4513f, 811.3408f, 118.38f, "val_jail_int_wallb", 144, 0, 1, 0, iVar0);
			break;
		case 2:
			func_1341(-289.4673f, 865.7859f, 121.1349f, "val_res_a_int_peepcurtain", 163, 0, 1, 0, 0);
			break;
		case 3:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-308.2578f, 777.48f, 117.7031f);
			func_1341(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsopen", 168, 0, 1, 0, iVar0);
			func_1341(-308.2578f, 777.48f, 117.7031f, "val_bank_int_curtainsclosed", 167, 0, 1, 0, iVar0);
			break;
		case 4:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-306.48f, 803.07f, 118.97f);
			func_1341(-306.48f, 803.07f, 118.97f, "6_chair_poker_set", 173, 0, 1, 0, iVar0);
			func_1341(-306.48f, 803.07f, 118.97f, "4_chair_poker_set", 172, 0, 1, 0, iVar0);
			break;
		case 5:
			func_1341(-323.5455f, 761.3587f, 120.6335f, "val_hotel_int_rentSign", 204, 0, 1, 0, 0);
			break;
		case 6:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-308.88f, 777.37f, 118.77f);
			func_1341(-308.88f, 777.37f, 118.77f, "val_bank_front_windows", 193, 0, 1, 0, iVar0);
			func_1341(-308.88f, 777.37f, 118.77f, "val_bank_mud5_windowblock", 194, 0, 1, 0, iVar0);
			break;
		case 7:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-310.0119f, 802.9316f, 117.9846f);
			func_1341(-310.0119f, 802.9316f, 117.9846f, "front_windows", 195, 0, 1, 0, iVar0);
			func_1341(-310.0119f, 802.9316f, 117.9846f, "val_saloon_br03_bed", 196, 0, 1, 0, iVar0);
			break;
		case 8:
			func_1341(-323.0087f, 801.0296f, 116.8817f, "val_genstore_night_light", 179, 0, 1, 0, 0);
			break;
		case 9:
			iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-323.5455f, 761.3587f, 120.6335f);
			func_1341(-323.5455f, 761.3587f, 120.6335f, "mud3_val_hotel_room_curtain01", 169, 0, 1, 0, iVar0);
			func_1341(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_prayercurtain", 170, 0, 1, 0, iVar0);
			func_1341(-323.5455f, 761.3587f, 120.6335f, "MUD3_val_hotel_room1b_curtain", 171, 0, 1, 0, iVar0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_664(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(3285.792f, -1325.603f, 43.08399f, "korrigan_props_default", 139, -1800106923, 1, 0, 0);
			break;
		case 2:
			func_1341(3285.792f, -1325.603f, 43.08399f, "korrigan_props_poker", 140, -1800106923, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_665(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(340.3874f, 607.1694f, 117.3576f, "cor_factb_int_loot", 151, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(494.78f, 673.19f, 120.043f, "cor_factb_int_cheatcode_01", 218, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_666(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_pulp_novel", 223, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_after_move", 198, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(-819.8f, 353.8f, 97.0781f, "IntGroup_Downes_before_move", 197, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_667(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(1450.08f, 373.16f, 91.06f, "eme_saloon_intgroup_curtains", 201, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(1448.06f, 371.59f, 88.88f, "eme_saloon_intgroup_furniture_mp", 239, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_668(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-2177.459f, 717.2651f, 121.6204f, "han_win_lock", 176, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-2177.459f, 717.2651f, 121.6204f, "han_int_tables_upright", 177, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_669(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdooropen", 183, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-551.09f, 2705.65f, 321.98f, "adl_winter01_trapdoorclosed", 184, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_670(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-1407.588f, 1206.949f, 221.6721f, "Mil_mine_cave03_cheat01", 219, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_671(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-690.3915f, 1044.363f, 134.0043f, "shack_sc_int_pulp_novel", 222, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_672(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-2351.33f, 110.337f, 216.825f, "m05_mine_collapse_rocks", 238, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_673(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-1813.349f, -354.6237f, 160.4226f, "str_jail_unbrokenwall", 192, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-1812.825f, -370.48f, 161.8785f, "str_whore_int_rentSign", 206, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_674(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(2946.44f, 1319.626f, 43.8203f, "ann_gunsmith_int_rent", 209, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_675(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-5508.609f, -2965.48f, -1.6284f, "tum_gunsmith_int_rentSign", 208, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_676(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_regular", 199, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-332.4864f, -359.7746f, 87.0537f, "swa_chairs_cinematic", 200, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_677(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_cc_graffiti", 210, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-3400.726f, -3305.328f, -5.4439f, "ldj_shack_pulp_novel", 224, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_678(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(1119.123f, -1988.793f, 54.4015f, "br_tre_house_cheat01", 214, 0, 1, 0, 0);
			func_1341(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_groups", 118, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(1006.364f, -1766.812f, 46.5922f, "bra_mansion_dining_csprops", 119, 0, 1, 0, 0);
			func_1341(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_clean", 120, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(1006.364f, -1766.812f, 46.5922f, "bra_int_bedroom_ransacked", 121, 0, 1, 0, 0);
			func_1341(1010.435f, -1767.927f, 49.4189f, "bra_man_dining_vfx", 186, 0, 1, 0, 0);
			func_1341(1010.435f, -1767.927f, 49.4189f, "bra_man_parlor_vfx", 187, 0, 1, 0, 0);
			break;
		case 4:
			func_1341(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsBreakable", 123, 0, 1, 0, 0);
			func_1341(1010.435f, -1767.927f, 49.4189f, "bra_mansion_WindowsStatic", 122, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_679(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(2624.29f, 1695.73f, 114.6861f, "shack_it_02_cheat01", 215, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_680(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(1889.438f, 301.362f, 76.0637f, "HF_pulp_novel", 221, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_681(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-814.042f, -1374.27f, 44.941f, "bla_photo_int_chairs", 227, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_682(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_roof_intact", 230, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_roof_broken", 231, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(-399.4595f, 1729.324f, 219.2795f, "che_maincabin_occupied", 232, 0, 1, 0, 0);
			break;
		case 4:
			func_1341(-399.4595f, 1729.324f, 219.2795f, "che_cabin_int_abandoned", 233, 0, 1, 0, 0);
			break;
		case 5:
			func_1341(-423.5326f, 1736.137f, 217.2976f, "che_shack_occupied", 234, 0, 1, 0, 0);
			break;
		case 6:
			func_1341(-423.5326f, 1736.137f, 217.2976f, "che_shack_outlaw", 235, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

void func_683(var uParam0)
{
	*uParam0++;
	switch (*uParam0)
	{
		case 1:
			func_1341(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_beg", 202, 0, 1, 0, 0);
			break;
		case 2:
			func_1341(342.0971f, -666.6483f, 41.8221f, "InteriorGroup_legFish_end", 203, 0, 1, 0, 0);
			break;
		case 3:
			func_1341(-959.4431f, 705.4899f, 95.5632f, "l_08p_tunnel2_cc_graffiti", 211, 0, 1, 0, 0);
			break;
		case 4:
			func_1341(191.1237f, -412.0208f, 86.7293f, "dis_tradepost_cheat01", 212, 0, 1, 0, 0);
			break;
		case 5:
			func_1341(-4369.159f, -2416.709f, 19.4046f, "ple_house_int_cheatcode_01", 213, 0, 1, 0, 0);
			break;
		case 6:
			func_1341(326.6011f, 1712.11f, 165.5851f, "dis_grz_preskull_cheat01", 220, 0, 1, 0, 0);
			break;
		case 7:
			func_1341(2309.994f, 1141.108f, 95.3301f, "poison_mine_blockage", 225, 0, 1, 0, 0);
			break;
		case 8:
			func_1341(-1492.235f, 1248.413f, 313.4902f, "mic_hideout_lantern", 229, 0, 1, 0, 0);
			break;
		case 9:
			func_1341(-327.071f, -148.157f, 50.078f, "bur_bric_int_Tre02_BurntTown01", 236, 0, 1, 0, 0);
			break;
		case 10:
			func_1341(-1519.495f, 740.865f, 124.87f, "mp_tre_int_eastwatsons01", 237, 0, 1, 0, 0);
			break;
		default:
			*uParam0 = 0;
			break;
	}
}

bool func_684()
{
	if ((Global_17138 % 2) != 0)
	{
		return true;
	}
	return false;
}

void func_685()
{
	func_1341(-1321.927f, 2438.953f, 309.6122f, "col_school_int_before", 146, 0, 1, 0, 0);
	func_1341(-1321.927f, 2438.953f, 309.6122f, "col_school_int_after", 145, 0, 1, 0, 0);
	func_1341(-1351.798f, 2440.891f, 309.3728f, "col_cabin_lights_on", 147, 0, 1, 0, 0);
	func_1341(-1336.995f, 2399.444f, 308.1392f, "col_barn_lights_on", 148, 0, 1, 0, 0);
	func_1341(-1360.135f, 2425.155f, 308.6656f, "col_bunkhouse_lights_on", 149, 0, 1, 0, 0);
	func_1341(-1319.982f, 2440.926f, 308.9205f, "col_school_int_fireplace", 150, 0, 1, 0, 0);
}

void func_689(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])) && DATAFILE::_0x603AC35FD4602C76(&(Global_1915170->f_19847[iParam0])))
	{
		DATAFILE::_DATAFILE_UNLOAD(&(Global_1915170->f_19847[iParam0]));
	}
	Global_1915170->f_19887[iParam0] = 0;
	Global_1915170->f_19847[iParam0] = 0;
}

bool func_697()
{
	int iVar0;

	iVar0 = Global_1915170->f_19742;
	if (iVar0 == 29 || iVar0 == 33)
	{
		return true;
	}
	return false;
}

bool func_699(int iParam0)
{
	if ((((((((iParam0 == 10 || iParam0 == 14) || iParam0 == 2) || iParam0 == 28) || iParam0 == 29) || iParam0 == 27) || iParam0 == 38) || iParam0 == 33) || iParam0 == 37)
	{
		return true;
	}
	return false;
}

bool func_702()
{
	if (!aggregate_func_4260(&uLocal_21))
	{
		aggregate_func_4293(&uLocal_21, 1);
	}
	if (aggregate_func_4298(&uLocal_21) < 30f)
	{
		return false;
	}
	return true;
}

bool func_703(int iParam0, int iParam1)
{
	if (aggregate_func_4459(iParam0, 4))
	{
		return false;
	}
	if (aggregate_func_4459(iParam0, 1))
	{
		return false;
	}
	if (&Global_1051387->f_3693[iParam0 /*16*/] == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_4))
	{
		return false;
	}
	if (aggregate_func_5362(&(Global_1051387->f_3693[iParam0 /*16*/]), 1))
	{
		return false;
	}
	if (aggregate_func_4685(iParam0))
	{
		return false;
	}
	*iParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_3693[iParam0 /*16*/])->f_4);
	if (!aggregate_func_402(*iParam1, 79))
	{
		return false;
	}
	if (!aggregate_func_2737(*iParam1, iParam0))
	{
		return false;
	}
	if (aggregate_func_530(*iParam1, 0, 0, 0))
	{
		return false;
	}
	return true;
}

void func_704()
{
	switch (iLocal_24)
	{
		case 10:
			iLocal_24 = 15;
			break;
		case 15:
			iLocal_24 = 38;
			break;
		case 38:
			iLocal_24 = 14;
			break;
		default:
			iLocal_24 = 10;
			break;
	}
}

void func_706(int iParam0, char* sParam1)
{
	func_1357(iLocal_24, iParam0);
	aggregate_func_4975(iParam0, sParam1, joaat("speech_params_force_normal"), 0, 1, func_1358(*(Global_1957543->f_319[iLocal_24 /*8*/])), 0, 1);
	aggregate_func_4283(&uLocal_21);
}

void func_707(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (!aggregate_func_4375(iParam0))
	{
		return;
	}
	bVar0 = aggregate_func_4314() == aggregate_func_5278(iParam0);
	if (aggregate_func_5362(iParam0, 1048576))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	iVar1 = aggregate_func_5278(iParam0);
	if (iVar1 != -1 && aggregate_func_3730(iVar1, 255))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	if (aggregate_func_3792(iParam1) || aggregate_func_1618(iParam0) == 1)
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 0;
		return;
	}
	if (iParam1 == 38 && !func_1360(iParam0))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	if (aggregate_func_3638())
	{
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 0;
		return;
	}
	iVar2 = aggregate_func_5121(iParam0);
	if (iVar2 != 0 && (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar2) || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2)))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 10;
		}
		return;
	}
	bVar3 = true;
	if (aggregate_func_5362(iParam0, 1))
	{
		aggregate_func_8125(iParam0, 1);
	}
	if (aggregate_func_5362(iParam0, 4))
	{
		aggregate_func_8125(iParam0, 4);
	}
	iVar4 = Global_1915170->f_19844;
	if (bVar3 && Global_1915170->f_19844 & 128 == 128)
	{
		if (!aggregate_func_4458(iParam1, 536870912))
		{
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 13;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915170->f_19844 & 8192 == 8192)
	{
		if (iParam1 == 29)
		{
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 14;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915170->f_19844 & 2048 == 2048)
	{
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 15;
		bVar3 = false;
	}
	aggregate_func_4247(&iVar4, 2194);
	if (bVar3 && iVar4 != 0)
	{
		bVar3 = false;
	}
	if (((bVar3 && (iParam1 != 28 && iParam1 != 29)) && !(Global_1051387->f_69[iParam1 /*76*/])->f_49) && !(Global_1051387->f_69[iParam1 /*76*/])->f_50 & 16384 != 0)
	{
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 6;
		bVar3 = false;
	}
	if (bVar3)
	{
		aggregate_func_4789(iParam1, 256);
		aggregate_func_4789(iParam1, 512);
	}
	else
	{
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
	}
}

void func_712(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_4369(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && !aggregate_func_4458(iVar0, 65536))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_4))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, true);
		}
		ENTITY::DELETE_ENTITY(&(uParam0->f_4));
	}
	if (iVar0 == 30)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&Global_1051387->f_3582[iVar1 /*19*/] == *uParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_8))
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar1 /*19*/])->f_8))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar1 /*19*/])->f_8, true, true);
					}
					PED::DELETE_PED(&((Global_1051387->f_3582[iVar1 /*19*/])->f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_15))
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar1 /*19*/])->f_15))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar1 /*19*/])->f_15, true, true);
					}
					PED::DELETE_PED(&((Global_1051387->f_3582[iVar1 /*19*/])->f_15));
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	aggregate_func_4449(iVar0, 2097152);
	if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_15))
	{
		PROPSET::_DELETE_PROPSET(uParam0->f_15, true, true);
	}
	uParam0->f_10 = 0;
	if (aggregate_func_4429(iVar0, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iVar0 /*76*/])->f_22);
		aggregate_func_4449(iVar0, 262144);
	}
	if ((aggregate_func_4429(iVar0, 16384) && aggregate_func_4314() != aggregate_func_5278(*uParam0)) && func_1346(iVar0))
	{
		iVar2 = TASK::_0x295514F198EFD0CA((Global_1051387->f_69[iVar0 /*76*/])->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iVar0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iVar0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iVar0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iVar0 /*447*/])->f_16);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		aggregate_func_4449(iVar0, 16384);
	}
}

void func_713(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	if (uParam0->f_6 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
		uParam0->f_6 = 0;
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_8);
	}
}

float func_715(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = func_1369(iParam0, 0);
	fVar0 = (fVar0 + 20f);
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_716(var uParam0, int iParam1)
{
	if (iParam1 == 36)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4)) && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_4))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		}
	}
	switch (uParam0->f_9)
	{
		case 0:
			if ((BUILTIN::VDIST2(Global_36, uParam0->f_1) < func_1369(iParam1, 1) && func_1370(iParam1, *uParam0)) && !aggregate_func_5362(*uParam0, 1))
			{
				aggregate_func_4242(uParam0, 1);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4270(uParam0->f_5)))
			{
				if (!func_1372(*uParam0, &(uParam0->f_6), &(uParam0->f_7)) || uParam0->f_6 == 0)
				{
					return;
				}
				STREAMING::REQUEST_MODEL(uParam0->f_6, false);
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6))
				{
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
				{
					uParam0->f_8 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_6, uParam0->f_7);
				}
				else if (!PED::_0x610438375E5D1801(uParam0->f_8))
				{
					return;
				}
				uParam0->f_5 = aggregate_func_2073(uParam0->f_6, uParam0->f_1, 0, 0, 1, 0, 1, 1, 1, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_5, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_5, 127, false);
				PED::SET_PED_CAN_RAGDOLL(uParam0->f_5, false);
				PED::_0xAE6004120C18DF97(uParam0->f_5, 0, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 146, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 26, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 44, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 422, true);
				uParam0->f_4 = aggregate_func_4270(uParam0->f_5);
				func_1374(iParam1, uParam0->f_5);
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) || ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
				{
					aggregate_func_4242(uParam0, 0);
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_5))
				{
					return;
				}
				else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
				{
					PED::_0x1902C4CFCC5BE57C(uParam0->f_5, uParam0->f_7);
					PED::_0xCC8CA3E88256E58F(uParam0->f_5, 1, 1, 1, 1, false);
					PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_8);
				}
				aggregate_func_4242(uParam0, 2);
			}
			break;
		case 2:
			if (BUILTIN::VDIST2(Global_36, uParam0->f_1) > func_715(iParam1, 1) || !func_1370(iParam1, *uParam0))
			{
				func_712(uParam0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				aggregate_func_4242(uParam0, 0);
			}
			break;
	}
}

int func_717(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = ((aggregate_func_3792(iParam0) || aggregate_func_3730(aggregate_func_5278(&(Global_1051387->f_3693[iParam0 /*16*/])), 255)) || aggregate_func_1618(&(Global_1051387->f_3693[iParam0 /*16*/])) == 1);
	iVar1 = aggregate_func_5121(&(Global_1051387->f_3693[iParam0 /*16*/]));
	bVar0 = ((bVar0 || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1)) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar1));
	if (iParam0 == 38)
	{
		bVar0 = (bVar0 || !func_1360(&(Global_1051387->f_3693[iParam0 /*16*/])));
	}
	if (!bVar0)
	{
		if (!aggregate_func_4429(iParam0, 2097152) && (Global_1051387->f_3693[iParam0 /*16*/])->f_10 == 0)
		{
			if (func_1375(&(Global_1051387->f_3693[iParam0 /*16*/]), &((Global_1051387->f_3693[iParam0 /*16*/])->f_11), &((Global_1051387->f_3693[iParam0 /*16*/])->f_14), &((Global_1051387->f_3693[iParam0 /*16*/])->f_10)))
			{
				if ((Global_1051387->f_3693[iParam0 /*16*/])->f_10 == 0)
				{
					aggregate_func_4789(iParam0, 2097152);
				}
			}
		}
		if ((Global_1051387->f_3693[iParam0 /*16*/])->f_10 != 0 && BUILTIN::VDIST2((Global_1051387->f_3693[iParam0 /*16*/])->f_11, Global_36) < func_1369(iParam0, 1))
		{
			if (!aggregate_func_4429(iParam0, 2097152))
			{
				if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
				{
					PROPSET::_REQUEST_PROPSET_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10);
					if (!PROPSET::_HAS_PROPSET_LOADED_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10))
					{
						return 0;
					}
					(Global_1051387->f_3693[iParam0 /*16*/])->f_15 = PROPSET::_CREATE_PROPSET_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10, (Global_1051387->f_3693[iParam0 /*16*/])->f_11, 7, (Global_1051387->f_3693[iParam0 /*16*/])->f_14, 1200f, false, true);
					if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
					{
						return 0;
					}
					aggregate_func_4789(iParam0, 2097152);
				}
				else
				{
					PROPSET::_DELETE_PROPSET((Global_1051387->f_3693[iParam0 /*16*/])->f_15, true, true);
				}
			}
			else if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
			{
				aggregate_func_4449(iParam0, 2097152);
			}
		}
	}
	else if (aggregate_func_4429(iParam0, 2097152))
	{
		if (PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
		{
			PROPSET::_DELETE_PROPSET((Global_1051387->f_3693[iParam0 /*16*/])->f_15, true, true);
		}
		aggregate_func_4449(iParam0, 2097152);
	}
	return 1;
}

void func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	iVar0 = aggregate_func_4369(iParam0);
	iVar1 = aggregate_func_4314();
	if (iVar1 != aggregate_func_5278(iParam0))
	{
		if (Global_1051387->f_3666 != 0)
		{
			func_1376();
		}
		return;
	}
	if (!aggregate_func_6126(iParam0, iVar0))
	{
		return;
	}
	iVar3 = func_1378(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	if (Global_1051387->f_3666 != 0)
	{
		if (Global_1051387->f_3666.f_1 != -1)
		{
			if ((!func_1379(iParam0) && BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[Global_1051387->f_3666.f_1 /*76*/])->f_3) > (15f * 15f)) || aggregate_func_4946())
			{
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				func_1376();
			}
		}
		else
		{
			if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			func_1376();
			return;
		}
	}
	else if ((BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar0 /*76*/])->f_3) > (15f * 15f) && iVar0 != 36) || aggregate_func_4946())
	{
		return;
	}
	switch (Global_1051387->f_3666)
	{
		case 0:
			if (func_1379(iParam0) && BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar0 /*76*/])->f_3) > (15f * 15f))
			{
				func_1380(iParam0);
				aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				Global_1051387->f_3666.f_1 = iVar0;
				aggregate_func_5003(3);
			}
			else if (aggregate_func_1217(iVar0, 0) && (aggregate_func_4268(Global_1051387->f_3666.f_2) || aggregate_func_1170(Global_35, Global_1051387->f_3666.f_2, 1) > 1f))
			{
				if (iVar0 == 36)
				{
					aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED_THEATER", 10000, 0, 0, 0, 1);
				}
				else
				{
					aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				}
				Global_1051387->f_3666.f_1 = iVar0;
				aggregate_func_5003(1);
			}
			break;
		case 1:
			if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				func_1376();
			}
			else
			{
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1);
				if (((((!iVar7 == 1 && !iVar7 == 0) && !PED::IS_PED_FALLING(Global_35)) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_CLIMBING(Global_35)) && !PED::IS_PED_VAULTING(Global_35))
				{
					Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
					iVar2 = 0;
					while (iVar2 <= (iVar3 - 1))
					{
						func_1384(iParam0, iVar2, &vVar4);
						if (BUILTIN::VDIST(Global_36, vVar4) < BUILTIN::VDIST(Global_36, Global_1051387->f_3666.f_2))
						{
							Global_1051387->f_3666.f_2 = { vVar4 };
						}
						iVar2++;
					}
					if (Global_1051387->f_3666.f_6 > 3)
					{
						aggregate_func_5003(3);
						return;
					}
					if (PED::_0xA911EE21EDF69DAF(Global_35))
					{
						iVar8 = aggregate_func_827(Global_35);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8) && PED::IS_PED_A_PLAYER(iVar8))
						{
							aggregate_func_5003(3);
							return;
						}
					}
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					TASK::_0x013A7BA5015C1372(Global_35, 1);
					TASK::_0xFA30E2254461ADEB(Global_35, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1051387->f_3666.f_2, 1f, 20000, 0.25f, 131072, 40000f);
					PED::SET_PED_CONFIG_FLAG(Global_35, 1, true);
					PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
					PED::_0xFD6943B6DF77E449(Global_35, true);
					PED::_0xC2266AA617668AD3(Global_35, 0.01f);
					PED::_0x73B6F907B913C860(Global_35, 0.4f);
					Global_1051387->f_3666.f_6++;
				}
				else if (!aggregate_func_1217(Global_1051387->f_3666.f_1, 0) || aggregate_func_1170(Global_35, Global_1051387->f_3666.f_2, 1) < 1f)
				{
					Global_1051387->f_3666.f_5 = ENTITY::GET_ENTITY_HEADING(Global_35);
					aggregate_func_5003(2);
				}
			}
			break;
		case 2:
			if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, Global_1051387->f_3666.f_5, false, false);
			}
			func_1376();
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				aggregate_func_30(Global_35, Global_1051387->f_3666.f_2, ENTITY::GET_ENTITY_HEADING(Global_35), 2, 1073741824 /* Float: 2f */);
				CAM::DO_SCREEN_FADE_IN(500);
				func_1376();
			}
			break;
		default:
			func_1376();
			break;
	}
}

bool func_720(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	var uVar5;

	if (!aggregate_func_4375(iParam0) || !aggregate_func_4321(iParam1))
	{
		return false;
	}
	if (((((((((((((((iParam1 == 11 || iParam1 == 30) || iParam1 == 20) || iParam1 == 34) || iParam1 == 12) || iParam1 == 13) || iParam1 == 1) || iParam1 == 15) || iParam1 == 17) || iParam1 == 16) || iParam1 == 23) || iParam1 == 26) || iParam1 == 36) || iParam1 == 31) || iParam1 == 32) || iParam1 == 19)
	{
		return false;
	}
	if (iParam1 == 35 && !aggregate_func_2820())
	{
		return false;
	}
	if (iParam1 == 25 && !aggregate_func_4458(iParam1, 262144))
	{
		return false;
	}
	if (((((iParam1 == 27 || iParam1 == 28) || iParam0 == 147) || iParam1 == 29) || iParam1 == 33) || iParam1 == 37)
	{
		if ((Global_1051387->f_69[iParam1 /*76*/])->f_18 == iParam0 && !aggregate_func_4268((Global_1051387->f_69[iParam1 /*76*/])->f_3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (iParam1 == 9)
	{
		iVar0 = func_726(iParam0, iParam1);
	}
	else
	{
		iVar0 = func_192(iParam1);
	}
	if (aggregate_func_7599(iVar0) == 0)
	{
		return false;
	}
	if (!aggregate_func_5595(iParam0, &uVar5, &uVar4, &vVar1))
	{
		return false;
	}
	if (aggregate_func_4268(vVar1) && ((aggregate_func_5278(iParam0) != -1 && aggregate_func_4314() != aggregate_func_5278(iParam0)) || aggregate_func_4268((Global_1051387->f_69[iParam1 /*76*/])->f_3)))
	{
		return false;
	}
	return true;
}

bool func_722(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 9)
	{
		if (((aggregate_func_2820() && aggregate_func_4255(aggregate_func_4320())) || aggregate_func_5604()) && !func_1388())
		{
			return true;
		}
	}
	if (aggregate_func_3792(iParam1) || aggregate_func_1618(iParam0) == 1)
	{
		return true;
	}
	if (aggregate_func_5483(iParam0, 4))
	{
		return true;
	}
	if (aggregate_func_5362(iParam0, 4))
	{
		return true;
	}
	if (aggregate_func_5362(iParam0, 1))
	{
		return true;
	}
	if (aggregate_func_5362(iParam0, 1048576))
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(aggregate_func_5121(iParam0)))
	{
		return true;
	}
	if (!aggregate_func_2310(iParam1) && !aggregate_func_4458(iParam1, 262144))
	{
		return true;
	}
	if (aggregate_func_4429(iParam1, 134217728) && !aggregate_func_4458(iParam1, 262144))
	{
		return true;
	}
	if (!bParam2 && !aggregate_func_4429(iParam1, 4))
	{
		return true;
	}
	if (aggregate_func_4458(iParam1, 2))
	{
		if (!func_1391())
		{
			return true;
		}
	}
	if (aggregate_func_5602())
	{
		return true;
	}
	if (iParam1 == 38 && !Global_17173.f_3065)
	{
		return true;
	}
	return false;
}

bool func_723(int iParam0)
{
	return aggregate_func_3733(&(Global_1915170->f_17805[iParam0 /*11*/]));
}

int func_725(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (iParam0 == 11 && Global_1915170->f_20144.f_1009 == 0)
	{
		return -1;
	}
	if (!aggregate_func_5595(iParam1, &uVar4, &uVar3, &vVar0))
	{
		if (((((iParam1 == 149 || iParam1 == 150) || iParam1 == 133) || iParam1 == 147) || iParam1 == 20) || iParam1 == 134)
		{
			vVar0 = { (Global_1051387->f_69[iParam0 /*76*/])->f_3 };
		}
		else
		{
			return -1;
		}
	}
	if (aggregate_func_4268(vVar0))
	{
		vVar0 = { (Global_1051387->f_69[iParam0 /*76*/])->f_3 };
	}
	if (iParam0 == 9)
	{
		iVar5 = aggregate_func_3637(iParam2, func_726(iParam1, iParam0), vVar0, -1);
		iVar6 = aggregate_func_8184(iVar5);
		if (MAP::DOES_BLIP_EXIST(iVar6))
		{
			MAP::SET_BLIP_FLASH_TIMER(iVar6, func_192(iParam0), aggregate_func_5121(iParam1));
		}
		return iVar5;
	}
	if (iParam0 == aggregate_func_4369(iParam1))
	{
		iVar7 = func_192(iParam0);
		if (iVar7 != 0)
		{
			iVar5 = aggregate_func_3637(iParam2, iVar7, vVar0, -1);
			iVar8 = aggregate_func_8184(iVar5);
			if (MAP::DOES_BLIP_EXIST(iVar8))
			{
				MAP::SET_BLIP_FLASH_TIMER(iVar8, func_192(iParam0), aggregate_func_5121(iParam1));
			}
			return iVar5;
		}
	}
	return -1;
}

int func_726(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1393(iParam0, iParam1);
	return aggregate_func_8843(iVar0);
}

void func_728(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_16844)
	{
		MAP::_0xBD62D98799A3DAF0(&(Global_16844[iParam0]), iParam1);
	}
}

void func_730(int iParam0)
{
	if ((Global_1915170->f_17805[iParam0 /*11*/])->f_8)
	{
		if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 == -1)
		{
			(Global_1915170->f_17805[iParam0 /*11*/])->f_8 = 0;
		}
		if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -2)
		{
			if (aggregate_func_3014((Global_1915170->f_17805[iParam0 /*11*/])->f_6) && !(Global_1915170->f_17805[iParam0 /*11*/])->f_10)
			{
				(Global_1915170->f_17805[iParam0 /*11*/])->f_8 = 0;
				(Global_1915170->f_17805[iParam0 /*11*/])->f_6 = -1;
				return;
			}
			if (!aggregate_func_7081())
			{
				return;
			}
			if (aggregate_func_6957())
			{
				return;
			}
			if (aggregate_func_2090())
			{
				return;
			}
		}
		if ((Global_1915170->f_17805[iParam0 /*11*/])->f_7 >= 0)
		{
			(Global_1915170->f_17805[iParam0 /*11*/])->f_7 = ((Global_1915170->f_17805[iParam0 /*11*/])->f_7 + MISC::GET_GAME_TIMER());
		}
		(Global_1915170->f_17805[iParam0 /*11*/])->f_8 = 0;
		if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -2)
		{
			aggregate_func_4322((Global_1915170->f_17805[iParam0 /*11*/])->f_6, (Global_1915170->f_17805[iParam0 /*11*/])->f_10);
			if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 == 771)
			{
				func_1394(128);
			}
		}
	}
	else if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -1 && aggregate_func_3733(&(Global_1915170->f_17805[iParam0 /*11*/])))
	{
		if ((Global_1915170->f_17805[iParam0 /*11*/])->f_7 >= 0 && (MISC::GET_GAME_TIMER() - (Global_1915170->f_17805[iParam0 /*11*/])->f_7) > 0)
		{
			aggregate_func_2579(aggregate_func_5278(iParam0), func_192(aggregate_func_4369(iParam0)), 580546400);
			aggregate_func_2579(aggregate_func_5278(iParam0), func_192(aggregate_func_4369(iParam0)), 847579139);
			(Global_1915170->f_17805[iParam0 /*11*/])->f_6 = -1;
			(Global_1915170->f_17805[iParam0 /*11*/])->f_7 = 0;
		}
	}
}

bool func_731(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1 || iParam0 >= 250)
	{
		return false;
	}
	iVar0 = aggregate_func_7596(iParam0);
	switch (iVar0)
	{
		case 0:
		case 45:
		case 48:
			return false;
		default:
			break;
	}
	return true;
}

bool func_733(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 != -1)
	{
		iVar0 = func_1395(iParam1);
		if (func_1396(iVar0))
		{
			if (Global_1937998[iVar0 /*2*/] != -1)
			{
				iVar1 = func_1397(iParam1);
				if (iVar1 != 0)
				{
					func_1398(iParam0, iVar1);
					return true;
				}
			}
		}
	}
	return false;
}

void func_734(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!aggregate_func_4375(iParam0))
	{
		return;
	}
	if (!aggregate_func_4321(iParam1))
	{
		return;
	}
	if (iParam1 != aggregate_func_4369(iParam0))
	{
		return;
	}
	iVar0 = func_1399(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 != -1)
	{
		if (!aggregate_func_3733(iVar0))
		{
			aggregate_func_1801(&iVar0, 0);
			Global_1915170->f_17805[iParam0 /*11*/] = -1;
			if ((Global_1915170->f_17805[iParam0 /*11*/])->f_5)
			{
				(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 0;
			}
			return;
		}
	}
	if (iParam1 == 9)
	{
		iVar1 = aggregate_func_8184(iVar0);
		if (aggregate_func_7600(aggregate_func_7596(iVar0)) != func_1393(iParam0, iParam1))
		{
			if (iVar1 != 0)
			{
				MAP::SET_BLIP_SPRITE(iVar1, func_1393(iParam0, iParam1), true);
				aggregate_func_6551(iVar0, func_726(iParam0, iParam1));
			}
		}
		switch (func_1401(&(Global_1915170->f_19967)))
		{
			case 0:
				MAP::_0xB059D7BD3D78C16F(iVar1, 1351440471);
				MAP::_0xB059D7BD3D78C16F(iVar1, 2068327888);
				MAP::_0xB059D7BD3D78C16F(iVar1, -586092192);
				break;
			case 1:
				MAP::_0xB059D7BD3D78C16F(iVar1, 2068327888);
				MAP::_0xB059D7BD3D78C16F(iVar1, -586092192);
				MAP::_0x662D364ABF16DE2F(iVar1, 1351440471);
				break;
			case 2:
				MAP::_0xB059D7BD3D78C16F(iVar1, 1351440471);
				MAP::_0xB059D7BD3D78C16F(iVar1, -586092192);
				MAP::_0x662D364ABF16DE2F(iVar1, 2068327888);
				break;
			case 3:
				MAP::_0xB059D7BD3D78C16F(iVar1, 1351440471);
				MAP::_0xB059D7BD3D78C16F(iVar1, 2068327888);
				MAP::_0x662D364ABF16DE2F(iVar1, -586092192);
				break;
			default:
				MAP::_0xB059D7BD3D78C16F(iVar1, 1351440471);
				MAP::_0xB059D7BD3D78C16F(iVar1, 2068327888);
				MAP::_0xB059D7BD3D78C16F(iVar1, -586092192);
				break;
		}
	}
	if (aggregate_func_5362(iParam0, 8))
	{
		if (!aggregate_func_5362(iParam0, 128))
		{
			func_1402(iParam0, iVar0);
			if ((Global_1915170->f_17805[iParam0 /*11*/])->f_5)
			{
				aggregate_func_3793(iVar0, func_1397(aggregate_func_5278(iParam0)));
				(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 0;
			}
			func_1398(iVar0, -401963276);
			func_1398(iVar0, 231194138);
			func_1398(iVar0, 580546400);
			aggregate_func_8132(iParam0, 128);
		}
	}
	else if ((Global_1915170->f_17805[iParam0 /*11*/])->f_6 != -1 && !(Global_1915170->f_17805[iParam0 /*11*/])->f_8)
	{
		if (!aggregate_func_5362(iParam0, -2147483648))
		{
			func_1402(iParam0, iVar0);
			if ((Global_1915170->f_17805[iParam0 /*11*/])->f_5)
			{
				aggregate_func_3793(iVar0, func_1397(aggregate_func_5278(iParam0)));
				(Global_1915170->f_17805[iParam0 /*11*/])->f_5 = 0;
			}
			if ((Global_1915170->f_17805[iParam0 /*11*/])->f_9)
			{
				func_1398(iVar0, 580546400);
			}
			func_1398(iVar0, 847579139);
			aggregate_func_8132(iParam0, -2147483648);
		}
		if (func_1404(iParam0))
		{
			if (!aggregate_func_5362(iParam0, 16))
			{
				func_1398(iVar0, 724623647);
				aggregate_func_8132(iParam0, 16);
			}
		}
		if (aggregate_func_4369(iParam0) == 2)
		{
			iVar2 = func_1405();
			func_1406(&(Global_1915170->f_17805[iParam0 /*11*/]), iVar2);
		}
	}
	else if (func_1404(iParam0))
	{
		if (!aggregate_func_5362(iParam0, 16))
		{
			func_1402(iParam0, iVar0);
			func_1398(iVar0, 724623647);
			aggregate_func_8132(iParam0, 16);
		}
	}
	else
	{
		func_1402(iParam0, iVar0);
	}
	if (aggregate_func_4369(iParam0) == 2)
	{
		iVar3 = func_1405();
		func_1406(&(Global_1915170->f_17805[iParam0 /*11*/]), iVar3);
		if (aggregate_func_6596() != -1 && aggregate_func_1987(aggregate_func_6596()) > 0)
		{
			func_1398(&(Global_1915170->f_17805[iParam0 /*11*/]), 37805592);
		}
		else
		{
			aggregate_func_3793(&(Global_1915170->f_17805[iParam0 /*11*/]), 37805592);
		}
	}
}

bool func_737()
{
	return Global_1051387->f_4354;
}

void func_738(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("store");
	if (UIAPPS::_IS_APP_RUNNING(iVar0) || bParam0)
	{
		UIAPPS::_CLOSE_APP_BY_HASH(iVar0);
		SCRIPTS::SET_NO_LOADING_SCREEN(false);
		if (CAM::IS_SCREEN_FADED_OUT() && !aggregate_func_4946())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
		Global_1051387->f_4354.f_1 = 0;
		Global_1051387->f_4354.f_2 = 0;
		aggregate_func_5370(0, 0, -1);
	}
	TELEMETRY::_0x32D5898C4898CD95();
	aggregate_func_5003(0);
}

bool func_740(bool bParam0)
{
	bool bVar0;

	if (aggregate_func_4537(bParam0))
	{
		return func_1411(aggregate_func_2111(bParam0, 0), aggregate_func_4997(bParam0));
	}
	bVar0 = -570078785;
	if (aggregate_func_4997(bParam0))
	{
		bVar0 = aggregate_func_4968(bParam0, 1, 1);
		if (bVar0 == 0 || aggregate_func_5216(bParam0, 773203532 /* GXTEntry: "Gold Bar" */, bVar0, 1, 1) == 0)
		{
			bVar0 = -570078785;
		}
	}
	return bVar0;
}

int func_741(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!aggregate_func_2823(bParam0, 0))
	{
		Global_1051387->f_58 = 0;
		Global_1051387->f_45 = 0;
		return 0;
	}
	bVar1 = func_1414(bParam0, &bVar0);
	if ((iParam2 && bVar1) || ((aggregate_func_4959() && bVar1) && bParam1 == 0))
	{
		if (aggregate_func_2890(bVar0, 997808187, 0) && !aggregate_func_2000(bVar0, 997808187))
		{
			Global_1051387->f_45 = 0;
			Global_1051387->f_58 = bParam0;
			return Global_1051387->f_45;
		}
		else if (aggregate_func_2890(bVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = aggregate_func_4660(bVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = aggregate_func_4944(aggregate_func_4660(bVar0, -570078785, 0, 1));
			}
			Global_1051387->f_45 = iVar2;
			Global_1051387->f_58 = bParam0;
			return Global_1051387->f_45;
		}
	}
	bVar3 = bParam1;
	if (bVar3 == 0)
	{
		bVar3 = aggregate_func_5209(bParam0, bVar3, 1, -1, 1);
	}
	bVar4 = false;
	if (aggregate_func_5212(bParam0))
	{
		bVar4 = aggregate_func_5287(bParam0);
	}
	else if (aggregate_func_5213(bParam0))
	{
		bVar4 = aggregate_func_5214(bParam0);
	}
	if (bVar4 != 0)
	{
		iVar2 = aggregate_func_4660(bVar4, bVar3, 0, 1);
		bVar5 = false;
		if (aggregate_func_5210(bVar3))
		{
			if (aggregate_func_5215(bVar4, 773203532 /* GXTEntry: "Gold Bar" */, bVar3, 1, 1) > 0)
			{
				bVar5 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = aggregate_func_4944(iVar2);
		}
		Global_1051387->f_58 = bParam0;
		return iVar2;
	}
	if (bVar3 == 997808187)
	{
		Global_1051387->f_58 = bParam0;
		Global_1051387->f_45 = 0;
		return 0;
	}
	else
	{
		iVar2 = aggregate_func_4655(bParam0, bVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (aggregate_func_5210(bVar3))
		{
			if (aggregate_func_5216(bParam0, 773203532 /* GXTEntry: "Gold Bar" */, bVar3, 1, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = aggregate_func_4944(iVar2);
		}
		Global_1051387->f_45 = iVar2;
		Global_1051387->f_58 = bParam0;
		if (Global_1051387->f_59 != Global_1051387->f_58)
		{
			Global_1051387->f_59 = Global_1051387->f_58;
		}
		else
		{
			Global_1051387->f_59 = 0;
		}
		return iVar2;
	}
	Global_1051387->f_45 = 0;
	return -1;
}

int func_745()
{
	if (Global_1915170->f_21989.f_1)
	{
		return aggregate_func_5190(34);
	}
	return aggregate_func_5190(Global_1915170->f_19742);
}

bool func_752(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = (Global_1070355->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = aggregate_func_4659(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY("vDragInPos");
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var0);
	return true;
}

bool func_756(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return true;
		default:
			break;
	}
	return false;
}

bool func_757(int iParam0, int iParam1)
{
	var uVar0[3];
	int iVar4;

	PLAYER::_0x1A6E84F13C952094(iParam0, iParam1, &uVar0);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uVar0[iVar4])))
		{
			if (ENTITY::IS_ENTITY_A_PED(&(uVar0[iVar4])))
			{
				if (PED::IS_PED_HUMAN(&(uVar0[iVar4])))
				{
					return true;
				}
				if (aggregate_func_1556(&(uVar0[iVar4])))
				{
					return true;
				}
			}
		}
		iVar4++;
	}
	return false;
}

bool func_760()
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_764()
{
	struct<2> Var0;
	int iVar2;

	if (aggregate_func_4251() != 0)
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1624899219))
	{
		Global_1915170->f_21989.f_5 = 0;
		return false;
	}
	if (!aggregate_func_2820())
	{
		Global_1915170->f_21989.f_5 = 8;
		return false;
	}
	if ((Global_1051387->f_69[34 /*76*/])->f_1 & 128 != 0)
	{
		Global_1915170->f_21989.f_5 = 2;
		return false;
	}
	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4255(Var0) && Var0 == 6)
	{
		iVar2 = aggregate_func_3578(PLAYER::PLAYER_ID(), 0);
		if (iVar2 != -1)
		{
			Global_1915170->f_21989.f_5 = func_1435(iVar2);
			return false;
		}
	}
	if (func_1160())
	{
		Global_1915170->f_21989.f_5 = 3;
		return false;
	}
	if (aggregate_func_1980(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && (Global_1051387->f_69[34 /*76*/])->f_50 & 1073741824 == 0)
	{
		Global_1915170->f_21989.f_5 = 4;
		return false;
	}
	if (aggregate_func_4325(131072, 255))
	{
		Global_1915170->f_21989.f_5 = 6;
		return false;
	}
	if (aggregate_func_3638())
	{
		Global_1915170->f_21989.f_5 = 7;
		return false;
	}
	return true;
}

bool func_765(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;

	bVar1 = func_1437(iParam0, &uVar0);
	if (bVar1)
	{
		if (!aggregate_func_4429(iParam0, 128))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE((Global_1051387->f_69[iParam0 /*76*/])->f_9, false))
			{
				return false;
			}
			iVar2 = aggregate_func_4314();
			if (!aggregate_func_4375(aggregate_func_4746(iVar2, iParam0)))
			{
				return false;
			}
			if (func_776(iParam0))
			{
				if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6005) > 0)
				{
					Var3 = iParam0;
					if (iParam0 != 34)
					{
						Var3.f_2 = (Global_1051387->f_69[iParam0 /*76*/])->f_25;
						Var3.f_3 = (Global_1051387->f_69[iParam0 /*76*/])->f_26;
						Var3.f_1 = iVar2;
						Var3.f_4 = { (Global_1051387->f_69[iParam0 /*76*/])->f_3 };
					}
					(Global_1051387->f_69[iParam0 /*76*/])->f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_777(iParam0), &Var3, 7, 6005);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_777(iParam0));
					aggregate_func_4449(iParam0, 2);
					aggregate_func_6609(iParam0, 8);
					return true;
				}
			}
			else if (!aggregate_func_4429(iParam0, 2))
			{
				func_780(iParam0);
			}
		}
	}
	return false;
}

bool func_766()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(29649618) > 0 && Global_1051387->f_3578 == 0)
	{
		Global_1915170->f_21989.f_5 = 0;
		return false;
	}
	if (Global_1915170->f_20136)
	{
		Global_1915170->f_21989.f_5 = 0;
		return false;
	}
	if (Global_1051387->f_3666 != 0)
	{
		Global_1915170->f_21989.f_5 = 0;
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		Global_1915170->f_21989.f_5 = 9;
		return false;
	}
	if ((aggregate_func_1616(1106247680 /* Float: 30f */, 0) || PED::_0x3AA24CCC0D451379(Global_35)) || PED::_0x42429C674B61238B(Global_35))
	{
		Global_1915170->f_21989.f_5 = 10;
		return false;
	}
	if (PED::_0x1D46B417F926D34D(Global_35) || PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		switch (iVar2)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				Global_1915170->f_21989.f_5 = 12;
				return false;
		}
		Global_1915170->f_21989.f_5 = 11;
		return false;
	}
	if (TASK::_0x038B1F1674F0E242(Global_35) && !Global_1915170->f_21989.f_1)
	{
		Global_1915170->f_21989.f_5 = 14;
		return false;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		Global_1915170->f_21989.f_5 = 15;
		return false;
	}
	if (TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID()) != 0)
	{
		Global_1915170->f_21989.f_5 = 16;
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iVar3 = TASK::_0x2D0571BB55879DA2(Global_35);
		if ((iVar3 != -1241981548 && iVar3 != -1177373461) && iVar3 != -447259824)
		{
			Global_1915170->f_21989.f_5 = 17;
			return false;
		}
	}
	if (aggregate_func_7116(255))
	{
		Global_1915170->f_21989.f_5 = 2;
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		Global_1915170->f_21989.f_5 = 0;
		return false;
	}
	if ((Global_1102098->f_935.f_27 != -1 && Global_1102098->f_935.f_27 != 6) && Global_1102098->f_935.f_27 != 8)
	{
		if (aggregate_func_7403(Global_1102098->f_935.f_27))
		{
			Global_1915170->f_21989.f_5 = 32;
		}
		else
		{
			Global_1915170->f_21989.f_5 = 31;
		}
		return false;
	}
	if (PED::_0x2942457417A5FD24(Global_35) >= 1f)
	{
		Global_1915170->f_21989.f_5 = 20;
		return false;
	}
	if (Global_1572887->f_106.f_75 >= 10 && Global_1572887->f_106.f_75 < 14)
	{
		Global_1915170->f_21989.f_5 = 37;
		return false;
	}
	if (((PED::IS_PED_FALLING(Global_35) || PED::IS_PED_CLIMBING(Global_35)) || PED::_IS_PED_SLIDING(Global_35)) || PED::IS_PED_SWIMMING(Global_35))
	{
		Global_1915170->f_21989.f_5 = 13;
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1915170->f_21989.f_5 = 19;
		return false;
	}
	return true;
}

void func_767(int iParam0, int iParam1)
{
	(Global_1051387->f_3582[iParam0 /*19*/])->f_1 = iParam1;
}

int func_770(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 36:
			iVar0 = aggregate_func_2818(aggregate_func_4265());
			if (iVar0 > 16 || iVar0 < 6)
			{
				return 1180906091;
			}
			else
			{
				return -752894780;
			}
			break;
		case 54:
			return -1542215752;
		case 56:
			return 533120;
		case 105:
			return -1044357807;
		case 79:
			return 1949731019;
		case 94:
			return 1057811885;
	}
	return 0;
}

bool func_771(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 81:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_772(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return true;
				case 1:
					return true;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_773(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 61;
				case 1:
					return -1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return -1;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = Global_1268116->f_30;
	}
	switch (iParam0)
	{
		case 0:
			return 2538.077f, -1278.417f, 50.05436f;
		case 2:
			return -348.5222f, 699.9396f, 116.6784f;
		case 1:
			return 2691.543f, -1358.018f, 47.39368f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_776(int iParam0)
{
	char* sVar0;

	if (!aggregate_func_4321(iParam0))
	{
		return false;
	}
	sVar0 = func_777(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (aggregate_func_4429(iParam0, 2))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
		{
			return true;
		}
	}
	return false;
}

char* func_777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shop_doctor";
		case 3:
			return "shop_general";
		case 4:
			return "shop_fence";
		case 33:
			return "shop_moonshine_still";
		case 6:
			return "shop_gunsmith";
		case 7:
			return "shop_tailor";
		case 2:
			return "shop_post_office";
		case 1:
			return "shop_train_station";
		case 25:
			return "shop_bountyhunting_mp_return";
		case 8:
			return "shop_net_barber";
		case 11:
			return "shop_dynamic";
		case 26:
			return "shop_coach";
		case 9:
			return "shop_horse_shop";
		case 10:
			return "shop_butcher";
		case 12:
			return "shop_bank";
		case 14:
			return "shop_bait";
		case 30:
			return "shop_bartender";
		case 15:
			return "shop_trapper";
		case 27:
			return "shop_wilderness_supplies";
		case 28:
			return "shop_camp_lockbox";
		case 29:
			return "shop_camp_butchertable";
		case 35:
			return "shop_honor_mp";
		case 34:
			return "shop_handheld";
		case 18:
			return "shop_photo_studio";
		case 36:
			return "shop_theater";
		case 38:
			return "shop_travelling_salesman";
		case 37:
			return "shop_moonshine_shop";
		default:
			break;
	}
	return "";
}

int func_780(int iParam0)
{
	char* sVar0;

	if (!aggregate_func_4321(iParam0))
	{
		return 0;
	}
	sVar0 = func_777(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
	{
		return 0;
	}
	if (aggregate_func_4429(iParam0, 2))
	{
		return 1;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	aggregate_func_4789(iParam0, 2);
	return 1;
}

bool func_781(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		if (DATAFILE::_0x603AC35FD4602C76(&(Global_1915170->f_19847[iParam0])))
		{
			if (!aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 2))
			{
				aggregate_func_4241(Global_1915170->f_19887[iParam0], 2);
			}
			return true;
		}
	}
	return false;
}

bool func_782(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4321(iParam0))
	{
		return true;
	}
	iVar0 = func_1440(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		Global_1915170->f_19847[iParam0] = DATAFILE::_0xD97D8D905F1562F2(iVar0);
		if (!aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 1))
		{
			aggregate_func_4241(Global_1915170->f_19887[iParam0], 1);
		}
	}
	if (!DATAFILE::_0x603AC35FD4602C76(&(Global_1915170->f_19847[iParam0])))
	{
		return false;
	}
	return true;
}

bool func_784(int iParam0)
{
	if (!func_781(iParam0))
	{
		return false;
	}
	if (func_1441(iParam0))
	{
		return false;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), 297708565, "SHOP_TYPE/REGION(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -1579522939, "VOLUME(id=%x):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), 216275750, "VOLUME(id=%x):rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -1658911560, "VOLUME(id=%x):scale");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -738708473, "VOLUME(id=%x):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -99852754, "VECTOR(id=%x):data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), 1059891245, "FLOAT(id=%x):data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), 110382701, "INT(id=%x):data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -1407851228, "HASH(id=%x):data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[iParam0]), -1793904784, "STRING(id=%x):data");
	aggregate_func_4241(Global_1915170->f_19887[iParam0], 4);
	return true;
}

void func_787(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if (((iParam0 == 34 || iParam0 == 28) || iParam0 == 29) || aggregate_func_4458(iParam0, 16384))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
		return;
	}
	if (aggregate_func_5362((Global_1051387->f_69[iParam0 /*76*/])->f_18, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21))
		{
			aggregate_func_4449(iParam0, 2048);
			aggregate_func_4449(iParam0, 4096);
			aggregate_func_4449(iParam0, 8192);
			if (!aggregate_func_4458(iParam0, 65536))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_69[iParam0 /*76*/])->f_21))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, true);
				}
				ENTITY::DELETE_ENTITY(&((Global_1051387->f_69[iParam0 /*76*/])->f_21));
			}
		}
		return;
	}
	if (aggregate_func_4429(iParam0, 4096) || aggregate_func_4429(iParam0, 8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21) || ENTITY::IS_ENTITY_DEAD((Global_1051387->f_69[iParam0 /*76*/])->f_21))
		{
			aggregate_func_4449(iParam0, 4096);
			aggregate_func_4449(iParam0, 8192);
			(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
			return;
		}
	}
	if (aggregate_func_4429(iParam0, 8192))
	{
		if (!(Global_1051387->f_69[iParam0 /*76*/])->f_49)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, false) };
			if (!VOLUME::_0xF256A75210C5C0EB((Global_1051387->f_69[iParam0 /*76*/])->f_25, vVar0))
			{
				return;
			}
			else
			{
				(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 1;
			}
		}
		aggregate_func_4335(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21));
		return;
	}
	bVar3 = TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6);
	fVar5 = 25f;
	if (aggregate_func_4429(iParam0, 4096))
	{
		if (!aggregate_func_5542((Global_1051387->f_69[iParam0 /*76*/])->f_18))
		{
			if (BUILTIN::VDIST(Global_1273882->f_17, (Global_1051387->f_69[iParam0 /*76*/])->f_3) > fVar5)
			{
				return;
			}
			if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS((Global_1051387->f_69[iParam0 /*76*/])->f_3)))
			{
				return;
			}
		}
		bVar6 = aggregate_func_4429(iParam0, 4194304);
		iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21);
		if (bVar3 && !(func_1444(iParam0) && !aggregate_func_6242(iParam0)))
		{
			if ((!PED::_0x9C54041BB66BCF9E(iVar4, (Global_1051387->f_69[iParam0 /*76*/])->f_6) && !bVar6) && !(func_794(iParam0) && aggregate_func_8129()))
			{
				TASK::CLEAR_PED_TASKS(iVar4, 1, 0);
				TASK::_TASK_USE_SCENARIO_POINT(iVar4, (Global_1051387->f_69[iParam0 /*76*/])->f_6, 0, 0, false, true, (Global_1051387->f_69[iParam0 /*76*/])->f_8, false, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(iVar4, -76381094, 1);
				if (iVar7 == 0 || iVar7 == 1)
				{
					(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { ENTITY::GET_ENTITY_COORDS((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, false) };
					aggregate_func_4789(iParam0, 8192);
				}
			}
		}
		else
		{
			aggregate_func_4789(iParam0, 8192);
		}
	}
	else
	{
		if (aggregate_func_4458(iParam0, 65536))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1051387->f_3222[(Global_1051387->f_69[iParam0 /*76*/])->f_18 /*2*/])))
			{
				(Global_1051387->f_69[iParam0 /*76*/])->f_21 = &Global_1051387->f_3222[(Global_1051387->f_69[iParam0 /*76*/])->f_18 /*2*/];
				(Global_1051387->f_69[iParam0 /*76*/])->f_20 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21);
				(Global_1051387->f_69[iParam0 /*76*/])->f_19 = ENTITY::GET_ENTITY_MODEL((Global_1051387->f_69[iParam0 /*76*/])->f_21);
				(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { ENTITY::GET_ENTITY_COORDS((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, false) };
				aggregate_func_4789(iParam0, 4096);
				aggregate_func_4789(iParam0, 8192);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_4))
		{
			(Global_1051387->f_69[iParam0 /*76*/])->f_20 = (Global_1051387->f_3693[iParam0 /*16*/])->f_5;
			(Global_1051387->f_69[iParam0 /*76*/])->f_21 = (Global_1051387->f_3693[iParam0 /*16*/])->f_4;
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_69[iParam0 /*76*/])->f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, false);
			}
		}
		else
		{
			return;
		}
		iVar4 = (Global_1051387->f_69[iParam0 /*76*/])->f_20;
		VOLUME::_0xD52DF30355EA7C8E((Global_1051387->f_69[iParam0 /*76*/])->f_25, iVar4, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1051387->f_69[iParam0 /*76*/])->f_25, 1, 1);
		if (!TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			iVar8 = aggregate_func_6226(iParam0);
			if (iVar8 != 0)
			{
				(Global_1051387->f_69[iParam0 /*76*/])->f_6 = iVar8;
			}
		}
		if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_28))
		{
			VOLUME::_0xD52DF30355EA7C8E((Global_1051387->f_69[iParam0 /*76*/])->f_28, iVar4, 1);
			VOLUME::_0x4A8FEFC43FD8AC9B((Global_1051387->f_69[iParam0 /*76*/])->f_28, 0, 1);
		}
		if (aggregate_func_6227(iParam0, (Global_1051387->f_69[iParam0 /*76*/])->f_18))
		{
			PED::SET_PED_CONFIG_FLAG(iVar4, 376, true);
		}
		aggregate_func_4789(iParam0, 4096);
		aggregate_func_4449(iParam0, 134217728);
		func_1374(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21));
		return;
	}
}

void func_793(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate_func_9216(iParam0);
	if (iVar1 >= 15)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (aggregate_func_2860(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
		{
			if (!aggregate_func_3072(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
			{
				aggregate_func_1155(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
	aggregate_func_6609(iParam0, 134217728);
}

bool func_794(int iParam0)
{
	if (iParam0 == 34)
	{
		return true;
	}
	if (Global_1915170->f_20135 == 0)
	{
		return false;
	}
	if (Global_1915170->f_19742 != iParam0)
	{
		return false;
	}
	return true;
}

void func_795(int iParam0, int iParam1)
{
	if (aggregate_func_4458(iParam0, 32) && !aggregate_func_4458(iParam0, 64))
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			aggregate_func_3878();
		}
		aggregate_func_6609(iParam0, 64);
	}
	if (!aggregate_func_4458(iParam0, 8))
	{
		aggregate_func_6609(iParam0, 8);
	}
}

void func_796(int iParam0)
{
	if (aggregate_func_4458(iParam0, 32))
	{
		if (aggregate_func_4458(iParam0, 64))
		{
			aggregate_func_3304(0);
			aggregate_func_6609(iParam0, 64);
		}
	}
	if (Global_1915170->f_20139)
	{
		if (func_699(iParam0) || aggregate_func_5999(iParam0))
		{
			HUD::_0x8BC7C1F929D07BF3(1422092402);
		}
		HUD::_0x8BC7C1F929D07BF3(-1347445791);
		HUD::_0x8BC7C1F929D07BF3(2077578434);
		Global_1915170->f_20139 = 0;
	}
	func_1455(iParam0);
}

bool func_797(int iParam0)
{
	if (!aggregate_func_3363(iParam0))
	{
		return false;
	}
	if (aggregate_func_4258())
	{
		return false;
	}
	if (!aggregate_func_2820())
	{
		return false;
	}
	if (Global_1915170->f_20136)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			if ((Global_1051387->f_69[iParam0 /*76*/])->f_64 != 0)
			{
				if (UNLOCK::_UNLOCK_IS_NEW((Global_1051387->f_69[iParam0 /*76*/])->f_64))
				{
					return false;
				}
			}
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_28))
			{
				if (!VOLUME::_0xF256A75210C5C0EB((Global_1051387->f_69[iParam0 /*76*/])->f_28, ENTITY::GET_ENTITY_COORDS(aggregate_func_3079(), true, false)))
				{
					return false;
				}
			}
			break;
		case 30:
		case 34:
			return false;
		default:
			if (!func_1457(iParam0))
			{
				return false;
			}
			break;
	}
	if (!aggregate_func_2310(iParam0))
	{
		return false;
	}
	if ((!aggregate_func_6302(&(Global_1915170->f_19844), 4) && aggregate_func_6227(iParam0, (Global_1051387->f_69[iParam0 /*76*/])->f_18)) && !aggregate_func_2311(iParam0))
	{
		return false;
	}
	return true;
}

void func_798(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = (Global_1051387->f_69[iParam0 /*76*/])->f_66;
	if (aggregate_func_6302(&(Global_1915170->f_19844), 4))
	{
		if (iParam0 == 9)
		{
			sVar1 = "SHOP_UNAVAILABLE_WANTED_STABLE";
		}
		else if (iParam0 == 27)
		{
			sVar1 = "SHOP_UNAVAILABLE_WANTED_WILDERNESS_SUPPLIES";
		}
		else if (iParam0 == 28)
		{
			sVar1 = "SHOP_UNAVAILABLE_WANTED_LB";
		}
		else if (iParam0 == 29)
		{
			sVar1 = "SHOP_UNAVAILABLE_WANTED_BT";
		}
		else
		{
			sVar1 = "SHOP_UNAVAILABLE_WANTED";
		}
		iVar2 = 10;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 4096))
	{
		sVar1 = "SHOP_NOT_CURRENTLY_ALLOWED";
		if (iParam0 == 28)
		{
			sVar1 = "SHOP_NOT_CURRENTLY_ALLOWED_LB";
		}
		else if (iParam0 == 36)
		{
			sVar1 = "SHOP_NOT_CURRENTLY_ALLOWED_THEATER";
		}
		else if (iParam0 == 29)
		{
			sVar1 = "SHOP_NOT_CURRENTLY_ALLOWED_BT";
		}
		iVar2 = 12;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 32768))
	{
		if (iParam0 == 29)
		{
			sVar1 = "SHOP_UNAVAILABLE_POISON_CLOUD_BT";
		}
		else
		{
			sVar1 = "SHOP_UNAVAILABLE_POISON_CLOUD";
		}
		iVar2 = 13;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 256))
	{
		sVar1 = "SHOP_UNAVAILABLE_DAMAGE_RECENTLY";
		if (iParam0 == 28)
		{
			sVar1 = "SHOP_UNAVAILABLE_DAMAGE_RECENTLY_LB";
		}
		if (iParam0 == 29)
		{
			sVar1 = "SHOP_UNAVAILABLE_DAMAGE_RECENTLY_BT";
		}
		iVar2 = 4;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 512))
	{
		sVar1 = "SHOP_UNAVAILABLE_FIRED_RECENTLY";
		if (iParam0 == 28)
		{
			sVar1 = "SHOP_UNAVAILABLE_FIRED_RECENTLY_LB";
		}
		if (iParam0 == 29)
		{
			sVar1 = "SHOP_UNAVAILABLE_FIRED_RECENTLY_BT";
		}
		iVar2 = 3;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 16384))
	{
		sVar1 = "TF_MP_SHOP_NO_INTERACT_BANDANA";
		iVar2 = 11;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 32))
	{
		sVar1 = "SHOP_UNAVAILABLE_ACTIVITY";
		iVar2 = 14;
	}
	else if (aggregate_func_6302(&(Global_1915170->f_19844), 1024))
	{
		if (iParam0 == 2)
		{
			sVar1 = "SHOP_PLAYER_SHOULD_HOLSTER_POST_OFFICER";
		}
		else if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_20) && !PED::IS_PED_MALE((Global_1051387->f_69[iParam0 /*76*/])->f_20))
		{
			sVar1 = "SHOP_PLAYER_SHOULD_HOLSTER_F";
		}
		else
		{
			sVar1 = "SHOP_PLAYER_SHOULD_HOLSTER";
		}
		iVar2 = 6;
	}
	else
	{
		switch (iVar0)
		{
			case 4:
				sVar1 = "SHOP_UNAVAILABLE_DISABLED";
				iVar2 = 18;
				break;
			case 10:
				sVar1 = "SHOP_UNAVAILABLE_NOT_UNLOCKED";
				iVar2 = 19;
				break;
			case 13:
				sVar1 = "SHOP_UNAVAILABLE_CARRYING_SOMETHING";
				iVar2 = 15;
				break;
			case 14:
				sVar1 = "SHOP_UNAVAILABLE_CARRYING_HUMAN";
				iVar2 = 16;
				break;
			case 15:
				sVar1 = "SHOP_UNAVAILABLE_MATCHMAKING";
				iVar2 = 17;
				break;
			default:
				return;
		}
	}
	if (!func_1460(iVar2))
	{
		Global_1051387->f_3221 = aggregate_func_2975(sVar1, 10000, 0, 0, 0, 1);
		Global_1051387->f_3220 = iVar2;
	}
}

bool func_800(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (aggregate_func_2310(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4917(Var0) || aggregate_func_7012(Var0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21))
	{
		return false;
	}
	if (!PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2))
	{
		return false;
	}
	if (iVar2 != (Global_1051387->f_69[iParam0 /*76*/])->f_21)
	{
		return false;
	}
	return true;
}

void func_801()
{
	char* sVar0;
	int iVar1;

	if (aggregate_func_4258())
	{
		return;
	}
	sVar0 = "SHOP_UNAVAILABLE_SCHEDULE";
	iVar1 = 20;
	if (!func_1460(iVar1))
	{
		Global_1051387->f_3221 = aggregate_func_2975(sVar0, 10000, 0, 0, 0, 1);
		Global_1051387->f_3220 = iVar1;
	}
}

void func_802(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate_func_9216(iParam0);
	if (iVar1 >= 15)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (aggregate_func_2860(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
		{
			if (!aggregate_func_2384(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
			{
				if (bParam1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 1);
					OBJECT::_0x7F458B543006C8FE(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 12);
				}
				else
				{
					aggregate_func_1155(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 1, 0, 0, 1, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	aggregate_func_6609(iParam0, 134217728);
}

void func_806()
{
	Global_1958224->f_55 = -1;
}

int func_807()
{
	return Global_1958224->f_72;
}

int func_808()
{
	if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
	{
		return 2;
	}
	else if (!NETWORK::_0x6506BFA755FB209C())
	{
		return 3;
	}
	return -1;
}

int func_810()
{
	return Global_1958224->f_55;
}

bool func_811(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (Global_1958224->f_52 != 0)
	{
		return false;
	}
	Global_1958224->f_52 = aggregate_func_3122(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5);
	return true;
}

void func_813()
{
	if (Global_1958224->f_52 == 0)
	{
	}
	else
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1958224->f_52);
		Global_1958224->f_52 = 0;
	}
}

void func_814(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[15];

	if (aggregate_func_4251() != -1)
	{
		return;
	}
	iVar0 = aggregate_func_1193(uParam0, &uVar2);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (aggregate_func_2850(&(uVar2[iVar1]), 1))
		{
		}
		else
		{
			aggregate_func_220(&(uVar2[iVar1]), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		iVar1++;
	}
}

void func_815(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var8;

	bVar2 = true;
	Var8 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, aggregate_func_1967(1), 1034665895, 1) };
	func_1467(uParam0);
	func_1468(uParam0);
	func_1469(uParam0);
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_3109.f_25)
	{
		bVar3 = &Global_1951131->f_3109[iVar0];
		aggregate_func_3045(bVar3, 0);
		if (aggregate_func_5372(bVar3))
		{
			iVar1 = aggregate_func_5067(bVar3);
			if (iVar1 <= -1 || iVar1 >= 11)
			{
			}
			else
			{
				Var4 = { aggregate_func_2828(bVar3, Var8, -751549960, 1) };
				if (aggregate_func_5043(4, iVar1))
				{
					if (!func_1474(1, iVar1))
					{
						HUD::_0x100157D6D7FE32CA(&Var4, aggregate_func_1966(aggregate_func_3137(iVar1)));
						func_1477(1, iVar1, 6);
					}
				}
				else if (func_1474(1, iVar1))
				{
					HUD::_0x28AE29D909C8FDCE(&Var4);
					aggregate_func_5863(1, iVar1, 6);
				}
			}
		}
		iVar0++;
	}
	if (!bVar2)
	{
		return;
	}
	func_819(uParam0);
}

bool func_816(vector3 vParam0, var uParam3, int iParam4)
{
	return (vParam0.z && iParam4) != 0;
}

void func_817(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = (aggregate_func_4734(96) || aggregate_func_2959(bParam0, -166674229));
	bVar1 = aggregate_func_4734(96);
	if (bParam0 == 491602716)
	{
		iVar2 = 0;
		while (iVar2 < 39)
		{
			if (aggregate_func_2959(&(Global_1951131->f_1657.f_1[iVar2 /*3*/]), -166674229))
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
		}
	}
	if (bVar0)
	{
		if (!aggregate_func_4734(524288) || bParam1)
		{
			aggregate_func_632(0);
			func_1480(-2061583405);
			func_1480(-525676072);
			aggregate_func_4719(524288);
		}
	}
	else if (aggregate_func_4734(524288) || bParam1)
	{
		aggregate_func_632(1);
		func_1481(-2061583405);
		func_1481(-525676072);
		aggregate_func_4782(524288);
	}
	if (bVar1)
	{
		if (!aggregate_func_4734(4194304) || bParam1)
		{
			func_1480(-999503751);
			aggregate_func_4719(4194304);
		}
	}
	else if (aggregate_func_4734(4194304) || bParam1)
	{
		func_1481(-999503751);
		aggregate_func_4782(4194304);
	}
}

void func_818()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;

	Var3.f_9 = -1591664384;
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_7 = -1;
	Var17.f_8 = -1;
	Var17.f_13 = -1;
	bVar2 = &Global_1951131->f_1657.f_1[34 /*3*/];
	if (aggregate_func_2959(bVar2, 2085922893))
	{
		Var17 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, -999503751, 2085922893, 0) };
		if (aggregate_func_2836(&Var17, &iVar0, &iVar1, 0))
		{
			if (aggregate_func_2840(&Var3, 0, iVar0, iVar1) && aggregate_func_5342(Var3.f_4, &(Global_1951131->f_1657), -1, 0))
			{
				aggregate_func_5224(1);
			}
			else if (func_1484())
			{
				aggregate_func_5224(0);
			}
			aggregate_func_2837(iVar0);
		}
		else if (func_1484())
		{
			aggregate_func_5224(0);
		}
	}
	else if (func_1484())
	{
		aggregate_func_5224(0);
	}
	iVar32 = aggregate_func_5200(-999503751, 1);
	iVar31 = 0;
	while (iVar31 < iVar32)
	{
		bVar34 = aggregate_func_5571(-999503751, iVar31, 1);
		iVar33 = func_1487(bVar34);
		if (iVar33 > -1 && iVar33 <= 5)
		{
			func_1489(bVar34, aggregate_func_5550(bVar34));
		}
		iVar31++;
	}
}

void func_819(var uParam0)
{
	var uVar0;
	bool bVar1;

	bVar1 = *uParam0;
	func_1490(-999503751);
	if (aggregate_func_5091(*uParam0, &uVar0))
	{
		aggregate_func_3040(bVar1, 1);
	}
	else if (aggregate_func_5192(-999503751, 1))
	{
		aggregate_func_3041(bVar1, 1, 1, 1);
	}
}

void func_823(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
		return;
	}
	if (aggregate_func_2959(bParam0, 314218815))
	{
		func_1498();
	}
	else if (aggregate_func_2959(bParam0, -1328503230))
	{
		func_1499();
	}
	else if (aggregate_func_2959(bParam0, -272910669))
	{
		func_1500();
	}
}

void func_824(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
		return;
	}
	if (aggregate_func_2959(bParam0, 314218815))
	{
		func_1501();
	}
	else if (aggregate_func_2959(bParam0, -1328503230))
	{
		func_1502();
	}
	else if (aggregate_func_2959(bParam0, -272910669))
	{
		func_1503();
	}
}

void func_825(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;
	struct<11> Var7;
	bool bVar21;
	struct<4> Var22;

	Var7.f_9 = -1591664384;
	bVar21 = &uParam0->f_1[34 /*3*/];
	Var22 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, aggregate_func_1967(1), 1034665895, 1) };
	bVar1 = *uParam0;
	Var3 = { aggregate_func_2828(bVar1, Var22, -751549960, 0) };
	aggregate_func_2072(Var3, 1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951131->f_81[iVar0 /*12*/])->f_9 == 0)
		{
		}
		else
		{
			bVar1 = &uParam0->f_1[iVar0 /*3*/];
			if (&uParam0->f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
				if (aggregate_func_5367(iVar0, bVar21))
				{
				}
				else
				{
					bVar2 = aggregate_func_4299(Var22, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 0, -1);
					if (aggregate_func_2823(bVar2, 0))
					{
						Var3 = { aggregate_func_2828(bVar2, Var22, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 0) };
						aggregate_func_1176(bVar2, 0, 0, 0);
					}
					Jump @362; //curOff = 232
					if (aggregate_func_1500(bVar1, Var22, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 0, 0, 0) <= 0)
					{
					}
					else
					{
						Var3 = { aggregate_func_2828(bVar1, Var22, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 0) };
						if (!aggregate_func_4272(Var3, &Var7, 0, 0, -1))
						{
						}
						else if (Var7.f_10)
						{
							aggregate_func_1176(bVar1, (uParam0->f_1[iVar0 /*3*/])->f_1, 0, 1);
						}
						else
						{
							aggregate_func_1176(bVar1, (uParam0->f_1[iVar0 /*3*/])->f_1, 0, 1);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_826(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, aggregate_func_1967(1), 1034665895, 1) };
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		iVar3 = aggregate_func_4846(((*uParam0)[iVar0 /*18*/])->f_17);
		if (iVar3 == 0)
		{
		}
		else
		{
			bVar1 = uParam0[iVar0 /*18*/];
			if (aggregate_func_4327(uParam0[iVar0 /*18*/]) != 0)
			{
				bVar2 = aggregate_func_4299(Var4, iVar3, 0, -1);
				if (!aggregate_func_2823(bVar2, 0))
				{
				}
				else
				{
					func_1511(bVar2, 0f, 1, 0);
					Jump @164; //curOff = 122
					if (aggregate_func_1500(bVar1, Var4, iVar3, 0, 0, 0) <= 0)
					{
					}
					else
					{
						func_1511(bVar1, ((*uParam0)[iVar0 /*18*/])->f_13, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_827()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < Global_1951131->f_3109.f_25)
	{
		bVar2 = &Global_1951131->f_3109[iVar0];
		if (aggregate_func_2827(bVar2) == -999503751)
		{
		}
		else
		{
			if (!(Global_1951131->f_3109.f_32.f_7.f_1[iVar1 /*5*/])->f_3 || &Global_1951131->f_3109.f_32.f_7.f_1[iVar1 /*5*/] != &Global_1951131->f_3109[iVar0])
			{
				aggregate_func_3161(Global_1951131->f_3109.f_32.f_7.f_1[iVar1 /*5*/], &(Global_1951131->f_3109[iVar0]), -1, 1, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_1951131->f_3109.f_32.f_7 = iVar1;
}

void func_830(int iParam0)
{
	if ((&Global_1951131->f_593[iParam0] - 1) >= 0)
	{
		Global_1951131->f_593[iParam0] = (&Global_1951131->f_593[iParam0] - 1);
	}
}

bool func_831(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*iParam1 = 2;
		return true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		*iParam1 = 1;
		return false;
	}
	*iParam1 = 0;
	return true;
}

void func_832(var uParam0)
{
	if (!PED::_0x31DC8D3F216D8509(*uParam0))
	{
		return;
	}
	if (aggregate_func_4250(uParam0, 2))
	{
		return;
	}
	PED::_0x92DAABA2C1C10B0E(*uParam0);
	PED::_0x8472A1789478F82F(*uParam0);
	aggregate_func_4254(uParam0, 2);
}

bool func_834(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		return true;
	}
	if (!PED::_0x31DC8D3F216D8509(*uParam1))
	{
		return false;
	}
	if (!aggregate_func_4250(uParam1, 2))
	{
		PED::_0x92DAABA2C1C10B0E(*uParam1);
	}
	PED::_0x0B46E25761519058(iParam0, uParam1->f_5, *uParam1);
	return true;
}

void func_837(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2760)
	{
		bVar1 = func_1521(&(Global_1951131->f_2760.f_2[iVar0 /*2*/]), 1);
		if (bParam5)
		{
			aggregate_func_4503(Global_1951131->f_2760.f_2[iVar0 /*2*/], 2, 6);
		}
		aggregate_func_4503(Global_1951131->f_2760.f_2[iVar0 /*2*/], 1, 6);
		if (bVar1 == -358215195)
		{
		}
		else if (aggregate_func_4855(bVar1, 8))
		{
		}
		else if (&(Global_1951131->f_81[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/] == 0)
		{
		}
		else
		{
			if (aggregate_func_4734(32768) && bVar1 == 1108822547)
			{
				aggregate_func_2099(iParam1, 0, 1, &uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/] != &Global_1951131->f_81[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*12*/]);
			}
			if ((aggregate_func_4855(bVar1, 6) || &uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/] == &Global_1951131->f_81[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*12*/]) || (uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1 == 289238755)
			{
				if (!aggregate_func_4855(bVar1, 1) || bParam2)
				{
					Global_1951131->f_923++;
					aggregate_func_2100(iParam1, &(Global_1951131->f_2760.f_2[iVar0 /*2*/]), 1);
					if ((uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1 == 289238755)
					{
						(Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*2*/])->f_1 = 289238755;
					}
					aggregate_func_4752(bVar1, 1, 6);
				}
			}
			else if ((!bParam2 && &uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/] == &Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*2*/]) && (uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1 == (Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*2*/])->f_1)
			{
			}
			else
			{
				Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*2*/] = &uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/];
				(Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*2*/])->f_1 = (uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1;
				if (aggregate_func_4855(bVar1, 1))
				{
					aggregate_func_4737(bVar1, 1, 6);
				}
				if (aggregate_func_4250(uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/], 4))
				{
					aggregate_func_2100(iParam1, &(Global_1951131->f_2760.f_2[iVar0 /*2*/]), 1);
					aggregate_func_8875(uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/], 4, 6);
				}
				Global_1951131->f_923++;
				PED::_SET_PED_COMPONENT_ENABLED(iParam1, &(uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/]), false, true, false);
				if ((uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1 != 0)
				{
					PED::_0x66B957AAC2EAAEAB(iParam1, &(uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/]), (uParam0->f_1[&Global_1951131->f_2760.f_2[iVar0 /*2*/] /*3*/])->f_1, 0, true, 1);
				}
			}
		}
		iVar0++;
	}
	if (bParam3)
	{
		PED::_0xAAB86462966168CE(iParam1, true);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, bParam4);
	}
	if (bParam5 || bParam6)
	{
		func_1525(&(Global_1951131->f_2760));
	}
}

void func_839(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1521(iParam2, 1);
	if (aggregate_func_4734(32768) && iParam2 == 10)
	{
		aggregate_func_2099(iParam1, bParam3, 1, 0);
		return;
	}
	if (aggregate_func_4855(bVar0, 8))
	{
		return;
	}
	if (&uParam0->f_1[iParam2 /*3*/] == &Global_1951131->f_2627[iParam2 /*2*/] && (uParam0->f_1[iParam2 /*3*/])->f_1 == (Global_1951131->f_2627[iParam2 /*2*/])->f_1)
	{
		return;
	}
	Global_1951131->f_2627[iParam2 /*2*/] = &uParam0->f_1[iParam2 /*3*/];
	(Global_1951131->f_2627[iParam2 /*2*/])->f_1 = (uParam0->f_1[iParam2 /*3*/])->f_1;
	if ((aggregate_func_4855(bVar0, 6) || &uParam0->f_1[iParam2 /*3*/] == &Global_1951131->f_81[iParam2 /*12*/]) || (uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
	{
		if (!aggregate_func_4855(bVar0, 1))
		{
			aggregate_func_2100(iParam1, iParam2, (bVar0 != 1108822547 || (bVar0 == 1108822547 && Global_1951131->f_3235.f_1 == 0)));
			aggregate_func_4752(bVar0, 1, 6);
		}
	}
	else
	{
		if (aggregate_func_4855(bVar0, 1))
		{
			aggregate_func_4737(bVar0, 1, 6);
		}
		if (aggregate_func_4250(uParam0->f_1[iParam2 /*3*/], 4))
		{
			aggregate_func_2100(iParam1, iParam2, 1);
			aggregate_func_8875(uParam0->f_1[iParam2 /*3*/], 4, 6);
		}
		PED::_SET_PED_COMPONENT_ENABLED(iParam1, &(uParam0->f_1[iParam2 /*3*/]), false, true, false);
		if ((uParam0->f_1[iParam2 /*3*/])->f_1 != 0)
		{
			PED::_0x66B957AAC2EAAEAB(iParam1, &(uParam0->f_1[iParam2 /*3*/]), (uParam0->f_1[iParam2 /*3*/])->f_1, 0, true, 1);
		}
	}
	if (bParam3)
	{
		PED::_0xAAB86462966168CE(iParam1, true);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, bParam4);
	}
}

void func_840(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;

	bVar4 = false;
	bVar5 = true;
	Global_1951131->f_923 = 0;
	vVar6.f_2 = 10;
	vVar6.f_2.f_1 = 39;
	vVar6.f_2.f_1.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	vVar6.f_2.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar3 = func_1521(iVar0, 1);
		bVar4 = false;
		if (aggregate_func_4855(bVar3, 8))
		{
			Global_1951131->f_2548[iVar0 /*2*/] = 0;
			(Global_1951131->f_2548[iVar0 /*2*/])->f_1 = 0;
		}
		else if (&(Global_1951131->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &Global_1951131->f_2548[iVar0 /*2*/] == 0)
		{
			Global_1951131->f_2548[iVar0 /*2*/] = 0;
			(Global_1951131->f_2548[iVar0 /*2*/])->f_1 = 0;
		}
		else
		{
			bVar1 = &Global_1951131->f_1657.f_1[iVar0 /*3*/];
			Global_1951131->f_1538.f_1[iVar0 /*3*/] = &Global_1951131->f_2548[iVar0 /*2*/];
			(Global_1951131->f_1538.f_1[iVar0 /*3*/])->f_1 = 0;
			aggregate_func_4744(&vVar6, iVar0, 0);
			bVar2 = &Global_1951131->f_2548[iVar0 /*2*/];
			if (aggregate_func_4855(bVar3, 6))
			{
				Global_1951131->f_2548[iVar0 /*2*/] = 0;
				(Global_1951131->f_2548[iVar0 /*2*/])->f_1 = 0;
			}
			else
			{
				func_1527(iParam0, bVar3, iVar0, bVar5, &bVar4);
				*(Global_1951131->f_1657.f_1[iVar0 /*3*/]) = { *(Global_1951131->f_1538.f_1[iVar0 /*3*/]) };
				if (func_1528(bVar3, 32))
				{
					aggregate_func_3040(bVar1, 0);
				}
				if (func_1528(bVar3, 64))
				{
					aggregate_func_3040(bVar2, bVar4);
				}
				else
				{
					switch (aggregate_func_2827(bVar2))
					{
						case 81053684:
							aggregate_func_5567(81053684);
							aggregate_func_3041(bVar2, 1, 1, bVar4);
							break;
						default:
							if (aggregate_func_2959(bVar2, -1348134986))
							{
								aggregate_func_5567(81053684);
								aggregate_func_3041(bVar2, 1, 1, bVar4);
							}
							break;
					}
				}
				Global_1951131->f_2548[iVar0 /*2*/] = 0;
				(Global_1951131->f_2548[iVar0 /*2*/])->f_1 = 0;
			}
		}
		iVar0++;
	}
	if (vVar6.x > 0)
	{
		aggregate_func_5055(&vVar6, 1, 1, 1, 1);
		aggregate_func_5770(&vVar6);
	}
	if (Global_1951131->f_923 <= 0)
	{
		return;
	}
	PED::_0xAAB86462966168CE(iParam0, bVar5);
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, bParam1);
}

bool func_841(int iParam0)
{
	return aggregate_func_4240(&Global_1270478, iParam0);
}

int func_842(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1131373->f_5509.f_1;
	}
	return ((*Global_1137800)[iParam0 /*34*/])->f_23.f_1;
}

bool func_843(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar7;
	var uVar8;

	aggregate_func_5132(14, &(Global_1951131->f_1035));
	Global_1951131->f_1035.f_1 = 0;
	if (!func_1533(&(Global_1951131->f_1035), -929624153, iParam1, iParam2))
	{
		return false;
	}
	if (!func_1533(&(Global_1951131->f_1035), -1636119814, aggregate_func_4577(), 0))
	{
		return false;
	}
	vVar1.f_2 = 3;
	iVar7 = func_1534(Global_1951131->f_1035, -1990973241, 0, 0);
	uVar8 = Global_1951131->f_1035.f_1;
	iVar0 = 0;
	while (iVar0 < iVar7)
	{
		Global_1951131->f_1035.f_1 = uVar8;
		if (!func_1533(&(Global_1951131->f_1035), -1990973241, iVar0, 0))
		{
		}
		else
		{
			aggregate_func_3012(Global_1951131->f_1035, -612355112, &vVar1, 0);
			vVar1.x = func_1536(vVar1.x);
			aggregate_func_3012(Global_1951131->f_1035, 607361843, &(vVar1.f_1), 0);
			aggregate_func_3380(Global_1951131->f_1035, -914904147, vVar1.f_2[0], 0);
			aggregate_func_3380(Global_1951131->f_1035, -2114544496, vVar1.f_2[1], 0);
			aggregate_func_3380(Global_1951131->f_1035, -1925926132, vVar1.f_2[2], 0);
			PED::_0x4EFC1F8FF1AD94DE(iParam0, vVar1.x, vVar1.y, &(vVar1.f_2[0]), &(vVar1.f_2[1]), &(vVar1.f_2[2]));
		}
		iVar0++;
	}
	return true;
}

bool func_844(struct<2> Param0, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	switch (Global_1951131->f_591)
	{
		case 0:
			iVar2 = func_1538(Global_35, Param0.f_1, &(Global_1951131->f_2014), 1);
			if (iVar2 == 3)
			{
				return true;
			}
			else if (iVar2 == 2)
			{
				aggregate_func_4976(1);
			}
			break;
		case 1:
			iVar2 = func_1540(Global_35, &(Global_1951131->f_2014));
			if (iVar2 == 3)
			{
				return true;
			}
			else if (iVar2 == 2)
			{
				aggregate_func_4976(2);
			}
			break;
		case 2:
			bVar1 = func_1541();
			func_1542(Global_35, &(Global_1951131->f_2014), 1, bVar1);
			aggregate_func_5380(-999503751);
			iVar0 = aggregate_func_5067(Param0.f_1);
			if ((iVar0 >= 0 && iVar0 < 11) && aggregate_func_5043(4, iVar0))
			{
				aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "HORSE_WHEEL_OUTFIT_SWAP_LITERAL", aggregate_func_1966(aggregate_func_3137(iVar0))), 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "HORSE_WHEEL_OUTFIT_SWAP", MISC::_CREATE_VAR_STRING(0, Param0.f_1)), 10000, 0, 0, 0, 1);
			}
			if (!bVar1 && aggregate_func_4734(1))
			{
				aggregate_func_4782(1);
				STREAMING::REMOVE_ANIM_DICT(func_1544());
			}
			aggregate_func_4976(3);
			break;
		case 3:
			aggregate_func_4976(0);
			return true;
	}
	return false;
}

void func_847(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = PED::_0xA622E66EEE92A08D(iParam0);
	iVar3 = aggregate_func_4350(uParam1);
	if (iVar3 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		iVar1 = PED::_0xCCB97B51893C662F(iParam0, iVar0);
		iVar2 = aggregate_func_8706(iVar1);
		if (iVar2 == -1)
		{
		}
		else if (!func_1549(iVar2, iVar3))
		{
		}
		else
		{
			PED::_0xD710A5007C2AC539(iParam0, iVar1, 1);
		}
		iVar0++;
	}
}

bool func_853()
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) || aggregate_func_2088(Global_35)) || Global_1938998->f_28.f_2) || aggregate_func_2889(aggregate_func_4464(), 0, 0))
	{
		return false;
	}
	return true;
}

void func_854()
{
	if (!Global_1938998->f_28.f_1)
	{
		Global_1938998->f_28.f_1 = 1;
	}
}

char* func_858()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

bool func_859(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return true;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return false;
	}
	if (PED::_0xD5FE956C70FF370B(iParam0))
	{
		return false;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return false;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - (vVar0[2 /*3*/])->f_2) > 0.7f)
	{
		return false;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = aggregate_func_5364(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = aggregate_func_5364(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

char* func_860()
{
	return "MOVE";
}

bool func_861(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = aggregate_func_4251() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			*iParam1 = 871;
			*iParam2 = 872;
			break;
		case 5:
		case 6:
		case 7:
			*iParam1 = 855;
			*iParam2 = 859;
			break;
		case 9:
			*iParam1 = 860;
			*iParam2 = 861;
			break;
		case 1:
			*iParam1 = 873;
			*iParam2 = 876;
			break;
		case 15:
			*iParam1 = 882;
			*iParam2 = 882;
			break;
		case 10:
			*iParam1 = 896;
			*iParam2 = 897;
			break;
		case 11:
			*iParam1 = 901;
			*iParam2 = 901;
			break;
		case 12:
			*iParam1 = 918;
			*iParam2 = 920;
			break;
		case 0:
			*iParam1 = 921;
			*iParam2 = 921;
			break;
		case 14:
			*iParam1 = 895;
			*iParam2 = 895;
			break;
		case 13:
			*iParam1 = 869;
			*iParam2 = 870;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_885(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = aggregate_func_4251() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			*iParam1 = 862;
			*iParam2 = 868;
			break;
		case 16:
			*iParam1 = 887;
			*iParam2 = 894;
			break;
		case 1:
			*iParam1 = 877;
			*iParam2 = 879;
			break;
		case 3:
			*iParam1 = 852;
			*iParam2 = 854;
			break;
		case 15:
			*iParam1 = 883;
			*iParam2 = 886;
			break;
		case 13:
			*iParam1 = 880;
			*iParam2 = 881;
			break;
		case 10:
			*iParam1 = 898;
			*iParam2 = 900;
			break;
		case 11:
			*iParam1 = 902;
			*iParam2 = 917;
			break;
		case 0:
			*iParam1 = 922;
			*iParam2 = 925;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_886(int iParam0)
{
	switch (iParam0)
	{
		case 703:
		case 704:
		case 705:
		case 707:
			return false;
		default:
			break;
	}
	return true;
}

void func_887()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (aggregate_func_4511(iVar0))
		{
			(*Global_1900701)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_888(int iParam0, int iParam1)
{
	if (!aggregate_func_4511(iParam0))
	{
		return;
	}
	if (!aggregate_func_4246(iParam1))
	{
		return;
	}
	(*Global_1900701)[iParam0] = iParam1;
}

void func_924(int iParam0)
{
	if (!aggregate_func_4455(iParam0))
	{
		return;
	}
	(Global_9657[iParam0 /*2*/])->f_1 = aggregate_func_4265();
	if (_NAMESPACE48::_0x800DF3FC913355F3(aggregate_func_4452(iParam0)))
	{
		_NAMESPACE48::_0x0B3A99AB6713AA52(aggregate_func_4452(iParam0));
	}
}

bool func_925(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (*uParam0)
	{
		case -2130852007: /* GXTEntry: "Vandalism" */
		case -2051405571: /* GXTEntry: "Rustling" */
		case -857617219: /* GXTEntry: "Animal Cruelty" */
		case -102241052: /* GXTEntry: "Vandalism" */
		case 416962030: /* GXTEntry: "Animal Cruelty" */
		case 1437412331: /* GXTEntry: "Looting" */
		case 1746095559: /* GXTEntry: "Arson" */
		case 1923998736: /* GXTEntry: "Theft" */
		default:
			break;
	}
	return false;
	iVar0 = 0;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if ((Global_1131373->f_4641.f_677[iVar0 /*2*/])->f_1 != *uParam0)
		{
		}
		else
		{
			if (&Global_1131373->f_4641.f_677[iVar0 /*2*/] != 0)
			{
				iVar2 = MISC::ABSI((&Global_1131373->f_4641.f_677[iVar0 /*2*/] - iVar1));
				if (iVar2 < 5)
				{
					return true;
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (*iParam0)
	{
		case -2130852007: /* GXTEntry: "Vandalism" */
		case -2051405571: /* GXTEntry: "Rustling" */
		case -857617219: /* GXTEntry: "Animal Cruelty" */
		case -102241052: /* GXTEntry: "Vandalism" */
		case 416962030: /* GXTEntry: "Animal Cruelty" */
		case 1437412331: /* GXTEntry: "Looting" */
		case 1746095559: /* GXTEntry: "Arson" */
		case 1923998736: /* GXTEntry: "Theft" */
		default:
			break;
	}
	return;
	iVar0 = 0;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if ((Global_1131373->f_4641.f_677[iVar0 /*2*/])->f_1 != *iParam0)
		{
		}
		else
		{
			Global_1131373->f_4641.f_677[iVar0 /*2*/] = iVar1;
			return;
		}
		iVar0++;
	}
}

void func_930(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17173.f_54.f_61.f_41[iVar0 /*54*/], iParam0))
		{
			(Global_17173.f_54.f_61.f_41[iVar0 /*54*/])->f_51 = { vParam1 };
			return;
		}
		iVar0++;
	}
	if (!aggregate_func_1765(iParam0))
	{
		return;
	}
	(Global_17173.f_54.f_61.f_41[iVar0 /*54*/])->f_51 = { vParam1 };
}

Vector3 func_931(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17173.f_54.f_61.f_41[iVar0 /*54*/], iParam0))
		{
			return (Global_17173.f_54.f_61.f_41[iVar0 /*54*/])->f_51;
		}
		iVar0++;
	}
	if (!aggregate_func_1765(iParam0))
	{
	}
	return 0f, 0f, 0f;
}

void func_935(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	iVar0 = aggregate_func_1171(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	iVar1 = Global_1273882->f_20;
	bVar2 = false;
	if (Global_1268935->f_1371.f_11 + 15000 > iVar1)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (PED::_0x775A1CA7893AA8B5(iParam0) == PED::_0xCB42AFE2B613EE55(iParam0))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar3 = 2.5f;
				break;
			case 3:
				fVar3 = 5f;
				break;
			case 4:
				fVar3 = 10f;
				break;
		}
		aggregate_func_862(iParam0, fVar3);
		Global_1268935->f_1371.f_11 = iVar1;
	}
}

bool func_936()
{
	return Global_40.f_277.f_3041;
}

int func_937()
{
	return Global_1903006->f_429.f_18;
}

bool func_947()
{
	if (aggregate_func_2850(1627068364 /* GXTEntry: "Horse Reviver" */, 1) || aggregate_func_2850(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 1))
	{
		return true;
	}
	return false;
}

void func_949(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (aggregate_func_4251() == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			aggregate_func_6952(3);
			break;
		case 2:
			if (iParam0 == PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()))
			{
				if (func_1630(0))
				{
					aggregate_func_4975(Global_35, "HORSE_RUN_AWAY", joaat("speech_params_standard"), iParam0, 1, 0, 0, 1);
					Var0 = { func_1631(0) };
					TELEMETRY::_0xFF9052BC7A3B7D33(iParam0, -1842437844, &Var0, 0);
				}
			}
			else
			{
				iVar4 = PLAYER::PLAYER_PED_ID();
				if (!func_1632(iParam0, iVar4))
				{
					return;
				}
				aggregate_func_4975(Global_35, "HORSE_RUN_AWAY", joaat("speech_params_standard"), iParam0, 1, 0, 0, 1);
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
				TASK::_TASK_SMART_FLEE_STYLE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), 6, 4718592, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 1:
			if (iParam0 == PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()))
			{
				if (func_1633())
				{
				}
			}
			else
			{
				iVar5 = PLAYER::PLAYER_PED_ID();
				if (!func_1632(iParam0, iVar5))
				{
					return;
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
				TASK::TASK_STAND_STILL(iParam0, -1);
			}
			break;
	}
}

void func_950(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	func_1296(-1516555556 /* GXTEntry: "Horse Brush" */, iVar11);
}

void func_951(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	bool bVar12;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	bVar12 = func_1634();
	if (bVar12 != 0)
	{
		func_1296(bVar12, iVar11);
	}
}

bool func_955(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (!aggregate_func_2823(bParam1, 0))
	{
		return false;
	}
	if (!aggregate_func_5089(bParam1))
	{
		return false;
	}
	bVar0 = aggregate_func_5197(bParam1);
	iVar1 = aggregate_func_5198(bVar0, 1);
	if (iParam2 < 1)
	{
		return false;
	}
	if (!aggregate_func_2739(iParam2, 0))
	{
		return false;
	}
	Global_1903928->f_417[iVar1] = (&Global_1903928->f_417[iVar1] + iParam2);
	return true;
}

void func_956(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::_0xF49F14462F0AE27C(iVar0) != iParam0)
	{
		return;
	}
	iVar1 = 0;
	while (iParam2 > 0)
	{
		while (iVar1 < 3)
		{
			if (&((*Global_1268274)[iVar0 /*20*/])->f_16[iVar1] == 0)
			{
				((*Global_1268274)[iVar0 /*20*/])->f_16[iVar1] = uParam1;
				iParam2 = (iParam2 - 1);
				Jump @213; //curOff = 117
			}
			else if (iVar1 == 2)
			{
				iVar2 = 1;
				while (iVar2 <= 2)
				{
					((*Global_1268274)[iVar0 /*20*/])->f_16[(iVar2 - 1)] = &((*Global_1268274)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar2];
					iVar2++;
				}
				((*Global_1268274)[iVar0 /*20*/])->f_16[iVar1] = uParam1;
				iParam2 = (iParam2 - 1);
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar1 >= 3)
		{
			iVar1 = 2;
		}
	}
}

bool func_957(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!aggregate_func_2823(bParam1, 0))
	{
		return false;
	}
	Var0 = { aggregate_func_4909(iParam0) };
	Var5 = { aggregate_func_2978(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, bParam1, Var0.f_4, bParam2, 752097756))
	{
		return true;
	}
	return false;
}

bool func_990(int iParam0)
{
	return iParam0 == joaat("p_keys01x");
}

bool func_991(var uParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_4, "loot_mp_mission_only"))
	{
		return false;
	}
	if (!DECORATOR::DECOR_GET_BOOL(uParam0->f_4, "loot_mp_mission_only"))
	{
		return false;
	}
	return true;
}

bool func_992()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(765518144 /* GXTEntry: "Red Dead Online Mission - Intro Rhodes" */) && !UNLOCK::_UNLOCK_IS_VISIBLE(765518144 /* GXTEntry: "Red Dead Online Mission - Intro Rhodes" */))
	{
		return true;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(840529594 /* GXTEntry: "Red Dead Online Mission - Intro Valentine" */) && !UNLOCK::_UNLOCK_IS_VISIBLE(840529594 /* GXTEntry: "Red Dead Online Mission - Intro Valentine" */))
	{
		return true;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-994383356 /* GXTEntry: "Red Dead Online Mission - Intro Blackwater" */) && !UNLOCK::_UNLOCK_IS_VISIBLE(-994383356 /* GXTEntry: "Red Dead Online Mission - Intro Blackwater" */))
	{
		return true;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-233421195 /* GXTEntry: "Red Dead Online Mission - Intro Tumbleweed" */) && !UNLOCK::_UNLOCK_IS_VISIBLE(-233421195 /* GXTEntry: "Red Dead Online Mission - Intro Tumbleweed" */))
	{
		return true;
	}
	return false;
}

void func_1004(int iParam0)
{
	if (iParam0 == PLAYER::GET_PLAYER_INDEX())
	{
		if (aggregate_func_8335(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 11))
		{
		}
	}
}

bool func_1008(bool bParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (aggregate_func_2959(bParam0, -136654233))
	{
		StringCopy(sParam1, "CANNED", 32);
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

bool func_1009(bool bParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (aggregate_func_2959(bParam0, -887064662))
	{
		StringCopy(sParam1, "MEAT", 32);
	}
	else if (aggregate_func_2959(bParam0, -839724752))
	{
		StringCopy(sParam1, "FISH", 32);
	}
	else if (aggregate_func_2959(bParam0, 877714034))
	{
		StringCopy(sParam1, "VEGETABLE", 32);
	}
	else if (aggregate_func_2959(bParam0, -1021472396))
	{
		StringCopy(sParam1, "FRUIT", 32);
	}
	else if (aggregate_func_2959(bParam0, -1237028043))
	{
		StringCopy(sParam1, "DAIRY", 32);
	}
	else if (aggregate_func_2959(bParam0, 554195525))
	{
		StringCopy(sParam1, "CANDY", 32);
	}
	else if (aggregate_func_2959(bParam0, -772152977))
	{
		StringCopy(sParam1, "ITEM_CIGARETTE_CARD", 32);
	}
	else if (aggregate_func_2959(bParam0, 1264218912))
	{
		StringCopy(sParam1, "JERKY", 32);
	}
	else if (aggregate_func_2959(bParam0, -2081717885))
	{
		StringCopy(sParam1, "LETTER", 32);
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam1);
}

bool func_1012(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	return (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0));
}

void func_1013(int iParam0)
{
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 467, false))
		{
			aggregate_func_2712(1);
		}
	}
}

void func_1016(int iParam0)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "got_loot", true);
}

bool func_1017(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;

	if (aggregate_func_4251() != -1)
	{
		return false;
	}
	iVar0 = 0;
	fVar1 = 1f;
	if (aggregate_func_2850(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar1 = (fVar1 + 0.1f);
	}
	if (aggregate_func_2850(2131771850, 1))
	{
		fVar1 = (fVar1 + 0.1f);
	}
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if (&uParam0->f_1[iVar2] == 2084597891)
		{
			if (fVar1 > 1f)
			{
				uParam0->f_12[iVar2] = BUILTIN::CEIL((IntToFloat(&uParam0->f_12[iVar2]) * fVar1));
				iVar0 = 1;
			}
		}
		else
		{
			bVar3 = &uParam0->f_1[iVar2];
			if (aggregate_func_2823(bVar3, 0) && aggregate_func_2959(bVar3, -1921346699))
			{
				if (fVar1 > 1f)
				{
					uParam0->f_12[iVar2] = BUILTIN::CEIL((IntToFloat(&uParam0->f_12[iVar2]) * fVar1));
					iVar0 = 1;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_1018(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty")) && DECORATOR::DECOR_GET_BOOL(iParam0, "loot_empty"))
	{
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("empty"));
		return true;
	}
	return false;
}

void func_1019(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

int func_1020(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!aggregate_func_2892(0))
	{
		return 0;
	}
	else if (aggregate_func_1519())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!&uParam0->f_1[iVar0] == 0)
		{
			iVar1 = iVar0 + 1;
			while (iVar1 <= (*uParam0 - 1))
			{
				if (&uParam0->f_1[iVar1] == &uParam0->f_1[iVar0])
				{
					uParam0->f_1[iVar1] = 0;
					uParam0->f_12[iVar0] = (uParam0->f_12[iVar1] + uParam0->f_12[iVar0]) // PointerArith;
					uParam0->f_12[iVar1] = 0;
				}
				iVar1++;
			}
			if (&uParam0->f_1[iVar0] == 2084597891)
			{
				if (aggregate_func_4251() == -1)
				{
					aggregate_func_5279(&(uParam0->f_12[iVar0]), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
				}
				uParam0->f_1[iVar0] = 0;
				uParam0->f_12[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!&uParam0->f_1[iVar0] == 0)
		{
			bVar2 = &uParam0->f_1[iVar0];
			if (!aggregate_func_4585(bVar2) || (bParam1 || aggregate_func_2024(bVar2)))
			{
				aggregate_func_220(bVar2, &(uParam0->f_12[iVar0]), 0, 0, 0, -897553835, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 897798752:
			return 2017118308;
		case -968081962:
			return 1318567553;
		case 606777958:
			return 18267955;
		case 52818363:
			return 1222150012;
		case -1760647080:
			return -1884795646;
		case 216939201:
			return -360083955;
		case 1574960131:
			return -927747820;
		case -1798594118:
			return 2140180188;
		case -1178570251:
			return 117748712;
		case 1766753501:
			return 1506833252;
		case -2036270160:
			return 1578503684;
		case -1711235813:
			return -2012396119;
		case 378967106:
			return -1696453945;
		case 1864406526:
			return -1522071438;
		case -731204818:
			return -344807332;
		default:
			break;
	}
	return 0;
}

int func_1022(int iParam0)
{
	switch (iParam0)
	{
		case -2103804031:
			return -2103804031;
		case 2017118308:
			return 2017118308;
		case 1318567553:
			return 1318567553;
		case 18267955:
			return 18267955;
		case 1222150012:
			return 1222150012;
		case -1884795646:
			return -1884795646;
		case -360083955:
			return -360083955;
		case -927747820:
			return -927747820;
		case 2140180188:
			return 2140180188;
		case 117748712:
			return 117748712;
		case 1737790136:
			return 1737790136;
		case 1506833252:
			return 1506833252;
		case 1578503684:
			return 1578503684;
		case -2012396119:
			return -2012396119;
		case -1696453945:
			return -1696453945;
		case -1522071438:
			return -1522071438;
		case 781570345:
			return 781570345;
		case -344807332:
			return -344807332;
		default:
			break;
	}
	return 0;
}

bool func_1028(bool bParam0)
{
	switch (bParam0)
	{
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return -1670497261;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return -280711232;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 596590814;
		case 143941906: /* GXTEntry: "Good Bear Pelt" */
			return 1824983669;
		case 957520252: /* GXTEntry: "Poor Bear Pelt" */
			return 928262209;
		case 1292673537: /* GXTEntry: "Perfect Bear Pelt" */
			return 541735817;
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 478256501;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return -232007656;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 19595959;
		case 1490032862: /* GXTEntry: "Good Black Bear Pelt" */
			return -101065075;
		case 1083865179: /* GXTEntry: "Poor Black Bear Pelt" */
			return 2105875134;
		case 663376218: /* GXTEntry: "Perfect Black Bear Pelt" */
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return -1818319295;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return -1597636811;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return -1985596288;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return -440737957;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return -1886002303;
		case -591117838: /* GXTEntry: "Good Bison Pelt" */
			return -901855085;
		case -1730060063: /* GXTEntry: "Poor Bison Pelt" */
			return 891487295;
		case -237756948: /* GXTEntry: "Perfect Bison Pelt" */
			return -1647829735;
		case -336086818: /* GXTEntry: "Good Bull Hide" */
			return 1698233050;
		case 9293261: /* GXTEntry: "Poor Bull Hide" */
			return -1939379896;
		case -53270317: /* GXTEntry: "Perfect Bull Hide" */
			return -1903865243;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 2116155169;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return -1373796272;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 834120727;
		case 1150594075: /* GXTEntry: "Good Cow Hide" */
			return -976686879;
		case 334093551: /* GXTEntry: "Poor Cow Hide" */
			return 622542686;
		case -845037222: /* GXTEntry: "Perfect Cow Hide" */
			return -96726590;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 493864472;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return -1364685383;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 501072671;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return -1832121185;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 332878276;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 226674781;
		case 1181652728: /* GXTEntry: "Good Elk Pelt" */
			return 945521246;
		case 2053771712: /* GXTEntry: "Poor Elk Pelt" */
			return 1013673835;
		case -1332163079: /* GXTEntry: "Perfect Elk Pelt" */
			return 1080677561;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 441281843;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 2100972340;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 731989586;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return -312223536;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 919524407;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 45874041;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return -1135509110;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return -1991809269;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return -882315424;
		case 1636891382: /* GXTEntry: "Good Moose Pelt" */
			return -1198430015;
		case 1868576868: /* GXTEntry: "Poor Moose Pelt" */
			return 610503310;
		case -217731719: /* GXTEntry: "Perfect Moose Pelt" */
			return -2104728156;
		case 1208128650: /* GXTEntry: "Good Ox Hide" */
			return -1848951328;
		case 462348928: /* GXTEntry: "Poor Ox Hide" */
			return -1522563214;
		case 659601266: /* GXTEntry: "Perfect Ox Hide" */
			return 701524769;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return -1125735460;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return -912340422;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return -339216640;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return -850815155;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 980503581;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 222730798;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return -615127816;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return -588738567;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return -1194176543;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return -963727698;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return -553292391;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 1964559810;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return -30369031;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 1200593517;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 1386213093;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return -1853692477;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return -265369183;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 1490994314;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -560512119;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -372283616;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return 643029198;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -507336551;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return -1633300610;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 312232747;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -369028960;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 56997271;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -562880581;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return 1914482046;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -398123506;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -154193613;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return 253511830;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 25196805;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -585570711;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 738250137;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -255175472;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 2029824605;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return 637459650;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -1763677083;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 105057785;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 2109109029;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 590763523;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return -1415366968;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 1525242558;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return -1053027662;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 170878033;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 1176700965;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 956769558;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -92340513;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1628899142;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1009793706;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 69303734;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 1934146069;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1251861193;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1201528492;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -584564578;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return 1257170615;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -443353688;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -726514003;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1178975683;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1735020859;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1066403056;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 379141135;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 178588058;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return 250119098;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return 1462096210;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 125705494;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return 1955497943;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -239746263;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return 483041697;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 2115836262;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 127221449;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return 1281075400;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -187017787;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return 2084769890;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -1860395611;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -925132283;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return 1221255602;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -1971512016;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1915869310;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return 73897638;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -520524691;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -677211393;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return 607200259;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -422975251;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -162653027;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1918690839;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 885447719;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 1359956914;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return -509393273;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1728485205;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 179793498;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return -1846596769;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1833664130;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return joaat("dlc_mp_arena_m_jbib_7_13");
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return 2094969043;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -1582650542;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 1799724359;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1598789118;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1824349223;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 696418077;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 1106697533;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1454259523;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1896235488;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 276180683;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -747881514;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return 1262126135;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return 2265787;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -2129601667;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 75684692;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1900817837;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return -1956299475;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 694522728;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 765710924;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return 893337488;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return 154935767;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return -568415076;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1274028936;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1140231877;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -27138549;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 659005977;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -771957300;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return 29804808;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return 1551511426;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 800713897;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 1612873893;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 1434794005;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -1919690611;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 1742727635;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 539212240;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1730963015;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 392259955;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1775800065;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1100310307;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 844987909;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -278500197;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 887422410;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1794448450;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return 2054761774;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1608758596;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1688649464;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -2008306533;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 1400293322;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return 995534052;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 1922992885;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 81605402;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return -286651444;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return -2064547947;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -176022019;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1232227412;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -893789138;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 2050798648;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return -798568163;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return 230404077;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return -1383606050;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return 1090514323;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1374677981;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -636161424;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1083700033;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 63328590;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -676594955;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return -654290128;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return -66423751;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -237024085;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 431553826;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -979079160;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1045329345;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return 908385665;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1675254736;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 564968345;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 1401257519;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return 1935981234;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 1930921435;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return 4633231;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -588047787;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -1503391831;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return -1409703989;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return 1754322973;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
			return -479401797;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return -1108373076;
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -255978368;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return 1771244699;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
			return 1837733705;
		case -1538397860: /* GXTEntry: "Muskie" */
			return -755340618;
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -274405663;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return 1107308482;
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -2034280224;
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 1147674954;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return 285459296;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1085630227;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -977624126;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -1327298596;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return -1809370620;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -925376594;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 571888586;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return 1427039907;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return 1870052953;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 1293957931;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return -1604751590;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return 1619108346;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 954753324;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return -530719231;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return 1790841517;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 1709510426;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return 1406497512;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -397897626;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -2079304485;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -1919132092;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return 1146883867;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return 213675443;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return -2050528754;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 953077128;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -1141453785;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 1397626289;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 1133589554;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1666627023;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1809574093;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1782999617;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -508623201;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return -1594035895;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 696987226;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1080524287;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return 1671304715;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 1998585657;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return 1020167279;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 623984063;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 2094082294;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return -1960159253;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return -1365028169;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return -1221735631;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -112981243;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -2139087610;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return -1602510454;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return -1297983889;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2092698587;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -996945065;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 2084956560;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return 702905543;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return -1581520016;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return 1086407100;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return 511869570;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -880049552;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1117023247;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -734978095;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return -1006346516;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1801089352;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return -1884753879;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return 1991763855;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1306257518;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return -1020683612;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 926836797;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return -1232342767;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -309925418;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return -123071275;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return -1558938686;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return 1091662795;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return -788362738;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return 1328165841;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return -800990234;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1483684624;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 905262788;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return 150247607;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1233359941;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -313281876;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return -4490683;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return 772815941;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return 829687693;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return -989662224;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 2085868277;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 54441032;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 173369425;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 1040980289;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return 914451661;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return -1351971822;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return 1314774140;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return -1359600522;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 766332028;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return 1221975438;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -1326003094;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return 1184491654;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 750218917;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return -1353658464;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 851638420;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 722571285;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 934062207;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return -1585718810;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1082360340;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 2061367228;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1962565360;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 262789343;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -633571126;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return 786387404;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -379489403;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return -764672668;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return -282159777;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return 468012182;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -617672215;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return -562468122;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return 1913327664;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -993590812;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -2137670338;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return 726300604;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return 415226344;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -299634134;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 1087304069;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -9870681;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return 1792621383;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return -199598455;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return -1941388598;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return 157600273;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 167746130;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return 2004430445;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 1574944766;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 1307900476;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1042168876;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return 425489026;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return 1517438769;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return -875336946;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -586130620;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -586318490;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return 208002432;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return -1210524242;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 245773581;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -2046702261;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return 44564804;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return 100739460;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2092384992;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 494095577;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return -384312098;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 1560218503;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return -1430069792;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return 1131911627;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return -64072061;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -202115307;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return -1102234278;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 224070180;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return 545086564;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1483573607;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1100372216;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 622704213;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return 1251284632;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return 1760006100;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return 1196392781;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return 1740443788;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 2126822237;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -78084331;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 327705288;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1627515010;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -1199577085;
		default:
			break;
	}
	return false;
}

void func_1031(int iParam0)
{
	if (Global_1268935->f_513.f_320)
	{
	}
	if (!aggregate_func_4349(iParam0))
	{
		return;
	}
	MISC::_COPY_MEMORY(&(Global_1268935->f_513.f_321), iParam0, 4);
	Global_1268935->f_513.f_320 = 1;
}

bool func_1032()
{
	return Global_1268935->f_513.f_316 > Global_1901929->f_637.f_28;
}

bool func_1034(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_8395(bParam0);
	if (iVar0 < 1)
	{
		return false;
	}
	if (iVar0 + aggregate_func_7668()) > aggregate_func_9370()
	{
		return false;
	}
	return true;
}

void func_1041(bool bParam0)
{
	if (func_1694(bParam0))
	{
		aggregate_func_4322(814, 1);
	}
	else if (aggregate_func_5236(bParam0))
	{
		aggregate_func_4322(74, 1);
	}
	else if (aggregate_func_3033(bParam0))
	{
		aggregate_func_4322(75, 1);
	}
	else
	{
		aggregate_func_4322(76, 1);
	}
}

bool func_1042(int iParam0)
{
	switch (iParam0)
	{
		case -1379917677:
		case joaat("a_c_alligator_03"):
		case -1262877910:
			return false;
		default:
			break;
	}
	return true;
}

bool func_1043(bool bParam0)
{
	if (!aggregate_func_4246(func_1028(bParam0)))
	{
		return false;
	}
	return aggregate_func_8395(bParam0) > 0;
}

bool func_1044(bool bParam0)
{
	struct<4> Var0;

	Var0.f_4 = -2015960939;
	Var0 = { aggregate_func_1967(0) };
	return aggregate_func_2913(bParam0, &Var0, 1, 1, 0, -1, 0);
}

float func_1045(bool bParam0)
{
	return (BUILTIN::TO_FLOAT(aggregate_func_8395(bParam0)) * aggregate_func_1793(aggregate_func_5089(bParam0), 1048576000 /* Float: 0.25f */));
}

void func_1046(bool bParam0)
{
	if (func_1694(bParam0))
	{
		aggregate_func_4322(813, 1);
	}
	else if (aggregate_func_5236(bParam0))
	{
		aggregate_func_4322(71, 1);
	}
	else if (aggregate_func_3033(bParam0))
	{
		aggregate_func_4322(72, 1);
	}
}

bool func_1047()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || aggregate_func_5337(Global_35))
	{
		return true;
	}
	return false;
}

void func_1090(int iParam0)
{
	Global_1938075->f_64 = iParam0;
}

void func_1092(int iParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(iParam0, &uVar0, 3);
}

bool func_1109(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!aggregate_func_5409(iParam0))
	{
		return -1;
	}
	bVar2 = aggregate_func_4844(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = aggregate_func_6097(iVar0);
		if (aggregate_func_5432(bVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1116(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	Var0 = { aggregate_func_6555(iParam0) };
	if (!aggregate_func_4255(Var0))
	{
		return;
	}
	iVar2 = aggregate_func_7128(Var0);
	if (iVar2 != -1)
	{
		iVar3 = (Global_1182978->f_1[iVar2 /*26*/])->f_3;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			if (aggregate_func_4325(1048576, PLAYER::PLAYER_ID()) || aggregate_func_4981())
			{
				iVar4 = Global_1273874->f_2.f_4;
				if (!aggregate_func_4574(iVar4))
				{
					aggregate_func_4634(iVar2, 131072);
				}
				else
				{
					aggregate_func_4634(iVar2, 32768);
				}
				return;
			}
			else if (aggregate_func_379())
			{
				aggregate_func_4634(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && aggregate_func_1555(iVar2, Var0, iVar3))
		{
			iVar5 = func_1748(iVar2);
			if (iVar5 != -1 && aggregate_func_4949(iVar5) == -785841056)
			{
				iVar6 = aggregate_func_6610(iVar5);
				if (!aggregate_func_6559(iVar6))
				{
					aggregate_func_6523(iVar6);
					aggregate_func_6618(aggregate_func_6610(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_1135(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -854348463;
	func_1786(iParam0, Var0, bParam1, 0);
}

void func_1136(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -1823706425;
	func_1786(iParam0, Var0, bParam1, 0);
}

void func_1137(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_1786(iParam0, Var0, bParam1, 0);
}

void func_1138(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -525676072;
	func_1786(iParam0, Var0, bParam1, 0);
}

void func_1139(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -1719060085;
	func_1786(iParam0, Var0, bParam1, 0);
}

bool func_1148(bool bParam0)
{
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return false;
	}
	if (!PED::_0xB65A4DAB460A19BD(Global_35) == 0)
	{
		return false;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return false;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_1149(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (aggregate_func_1183(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1150(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1153()
{
	return PED::_0x2942457417A5FD24(Global_35) >= 1f;
}

bool func_1154(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_5127();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = HUD::_0x0501D52D24EA8934(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!aggregate_func_1156(iVar0))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1155(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, false, false))
	{
		if (!aggregate_func_1156(iVar0))
		{
			if (bParam0)
			{
				aggregate_func_2975("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xE4770DA1B8FF4FD1(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))))
		{
			if (bParam0)
			{
				aggregate_func_2975("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				aggregate_func_2975("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (aggregate_func_3303(iVar0, 1, 1) > 2f)
		{
			if (bParam0)
			{
				aggregate_func_2975("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				aggregate_func_2975("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (!aggregate_func_1156(iVar1))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xE4770DA1B8FF4FD1(iVar1)))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam0)
		{
			aggregate_func_2975("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1160()
{
	if ((aggregate_func_4258() || Global_1572887->f_106.f_75 > 9) || aggregate_func_6550())
	{
		if ((!aggregate_func_4442() && Global_265331->f_124445.f_70.f_21.f_2 != -504335712) && !aggregate_func_4366(Global_265331->f_124445.f_70.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

void func_1170()
{
	char* sVar0;

	if ((Global_1939057->f_70.f_5 && !aggregate_func_2875(&(Global_1939057->f_83[6]))) && aggregate_func_2850(Global_1939057->f_70.f_1, 1))
	{
		if (MISC::GET_GAME_TIMER() < Global_1939057->f_70.f_4 && !Global_1939057->f_70.f_6)
		{
			func_1192();
		}
		else if ((!TASK::_0x038B1F1674F0E242(Global_35) && aggregate_func_1769(0, func_1794())) && aggregate_func_1147())
		{
			if (MISC::GET_GAME_TIMER() >= Global_1939057->f_70.f_3)
			{
				if (aggregate_func_2875(&(Global_1939057->f_83[5])))
				{
					func_497();
				}
				else if (Global_1939057->f_70 == 0)
				{
					Global_1939057->f_70 = MISC::GET_GAME_TIMER() + 5000;
					switch (aggregate_func_2900(Global_1939057->f_70.f_1, -949239683))
					{
						case -873135685:
						case 24248412:
							sVar0 = "QUICK_INSPECTION_CARD";
							break;
						default:
							sVar0 = "QUICK_INSPECTION";
							break;
					}
					if (Global_1939057->f_70.f_6)
					{
						sVar0 = "QUICK_MAP";
						Global_1939057->f_70 = MISC::GET_GAME_TIMER() + 10000;
					}
					aggregate_func_8141(0, Global_1939057->f_70.f_1);
					Global_1939057->f_83[6] = aggregate_func_1523(sVar0, joaat("INPUT_QUICK_USE_ITEM"), Global_35, 3, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					aggregate_func_2057(&(Global_1939057->f_83[6]), 23, 1, 1);
					aggregate_func_2057(&(Global_1939057->f_83[6]), 17, 1, 1);
					aggregate_func_2057(&(Global_1939057->f_83[6]), 13, 1, 1);
					aggregate_func_2057(&(Global_1939057->f_83[6]), 25, 1, 1);
					aggregate_func_1513(&(Global_1939057->f_83[6]), 1);
				}
			}
		}
		else
		{
			Global_1939057->f_70.f_3 = MISC::GET_GAME_TIMER() + 300;
		}
	}
	if (Global_1939057->f_70 != 0)
	{
		if ((((((MISC::GET_GAME_TIMER() >= Global_1939057->f_70 || Global_1939221->f_1) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || PED::IS_PED_SWIMMING(Global_35)) || (aggregate_func_2875(&(Global_1939057->f_83[6])) && !aggregate_func_1769(0, func_1794()))) || (Global_1939057->f_70.f_6 && PED::IS_PED_USING_ANY_SCENARIO(Global_35))) || TASK::_0xEC7E480FF8BD0BED(Global_35))
		{
			func_497();
		}
	}
}

bool func_1173(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	iVar1 = iVar0;
	if (((((((((((iVar1 == -1241981548 || iVar1 == 1020517461) || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052) || iVar1 == -2016812721) || iVar1 == -1054012177) || iVar1 == -447259824) || iVar1 == -229964281) || iVar1 == 889554021) || iVar1 == -1177373461) || PED::GET_PED_CONFIG_FLAG(iParam0, 464, true))
	{
		return true;
	}
	return false;
}

bool func_1175()
{
	if ((((((!PAD::IS_CONTROL_ENABLED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || aggregate_func_7506(32)) || PED::IS_PED_FALLING(Global_35)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PLAYER::_0x621D1B289CAF5978(PLAYER::GET_PLAYER_INDEX())) || PED::_0xB655DB7582AEC805(Global_35))
	{
		return false;
	}
	return true;
}

void func_1176(int iParam0)
{
	if (aggregate_func_2875(&(Global_1939057->f_83[iParam0])) && aggregate_func_4637(&(Global_1939057->f_83[iParam0]), 0))
	{
		aggregate_func_4583(&(Global_1939057->f_83[iParam0]), 0, 1, 1);
	}
}

void func_1177(int iParam0, bool bParam1)
{
	if (aggregate_func_2875(&(Global_1939057->f_83[iParam0])) && !aggregate_func_4637(&(Global_1939057->f_83[iParam0]), 0))
	{
		aggregate_func_4583(&(Global_1939057->f_83[iParam0]), 1, 1, 1);
		aggregate_func_1513(&(Global_1939057->f_83[iParam0]), bParam1);
	}
}

bool func_1178()
{
	if (aggregate_func_7506(33554432))
	{
		return false;
	}
	else if (aggregate_func_7506(16384))
	{
		return false;
	}
	else if (aggregate_func_7506(67108864))
	{
		return false;
	}
	else if (aggregate_func_7506(1024))
	{
		return false;
	}
	else if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return false;
	}
	else if (aggregate_func_7506(1))
	{
		return false;
	}
	else if (aggregate_func_7506(2))
	{
		return false;
	}
	else if (!TASK::_0x2D19BC4DF626CBE7(Global_35, 1807503187, -2005122350, 1))
	{
		return false;
	}
	return true;
}

bool func_1180()
{
	bool bVar0;

	bVar0 = PED::_0xC48A9EB0D499B3E5(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = PED::_0xD453BB601D4A606E(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = PED::_0x3AA24CCC0D451379(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = PED::_0x3BDFCF25B58B0415(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = PED::_0xEF3A8772F085B4AA(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	bVar0 = PED::_0x9682F850056C9ADE(Global_1273882->f_8);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_1181()
{
	Global_1939057->f_108 = 0;
	HUD::_0x8BC7C1F929D07BF3(36547242);
}

int func_1182()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (aggregate_func_4713(iVar0, 4096) && !aggregate_func_4713(iVar0, 16384))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1184()
{
	if (Global_1102098->f_935.f_27 == -1)
	{
		return false;
	}
	if (Global_1102098->f_935.f_27 == 7)
	{
		return false;
	}
	if (Global_1102098->f_935.f_27 == 6)
	{
		return Global_1102098->f_935.f_21;
	}
	if (Global_1102098->f_935.f_27 != -1)
	{
		return Global_1939057->f_107;
	}
	return true;
}

void func_1187()
{
	if (!Global_1939057->f_108 && Global_1939057->f_109)
	{
		Global_1939057->f_110 = Global_1273882->f_20;
		Global_1939057->f_108 = 1;
		HUD::_0x4CC5F2FC1332577F(36547242);
	}
}

void func_1188()
{
	if (aggregate_func_4251() == 0)
	{
		switch (Global_1939057->f_5)
		{
			case 0:
				Global_1939057->f_5 = 1;
				break;
			case 1:
				Global_1939057->f_5 = 0;
				break;
		}
	}
}

char* func_1189()
{
	return "HUD_PAGE_RADAR";
}

void func_1190(int iParam0, char* sParam1, int iParam2)
{
	if (Global_1939057->f_5 == 2)
	{
		Global_1939057->f_5 = 1;
		func_1181();
	}
	if (MISC::IS_STRING_NULL(sParam1) || Global_1939057->f_5 >= iParam2)
	{
		Global_1939057->f_5 = 0;
		sParam1 = "HUD_PAGE_RADAR";
	}
	HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(iParam0, sParam1, iParam2, Global_1939057->f_5, 0, 0);
}

char* func_1191()
{
	char* sVar0;

	if (aggregate_func_4251() == 0)
	{
		switch (Global_1939057->f_5)
		{
			case 0:
				sVar0 = "HUD_PAGE_RADAR";
				break;
			case 1:
				sVar0 = "HUD_PAGE_SCOREBOARD";
				break;
		}
	}
	return sVar0;
}

void func_1192()
{
	Global_1939057->f_70.f_5 = 0;
	Global_1939057->f_70.f_6 = 0;
	Global_1939057->f_70 = 0;
	Global_1939057->f_70.f_3 = 0;
	Global_1939057->f_70.f_1 = 0;
}

bool func_1296(bool bParam0, int iParam1)
{
	int iVar0;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (aggregate_func_8053(bParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (aggregate_func_8053(bParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_1858(iVar0, bParam0))
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return false;
	}
	if (aggregate_func_8037() == 1)
	{
		aggregate_func_6149(iVar0);
		aggregate_func_6149(bParam0);
		aggregate_func_6149(1);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1312(vector3 vParam0, float fParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	fVar0 = 2.147484E+09f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 500)
	{
		if (!aggregate_func_4763(iVar2))
		{
		}
		else
		{
			vVar3 = { aggregate_func_4765(iVar2) };
			vVar6 = { vParam0 };
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, false);
			if (fVar9 > fParam3)
			{
			}
			else if (!aggregate_func_2042(iVar2, 0, 0))
			{
			}
			else if (fVar9 < fVar0)
			{
				fVar0 = fVar9;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_1313(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_1315(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar0++;
	}
}

void func_1316(var uParam0)
{
	if (aggregate_func_2875(*uParam0))
	{
		aggregate_func_2878(uParam0, 1, 1);
		*uParam0 = 0;
	}
}

void func_1317(int* iParam0)
{
	if (MISC::_0xF9B91C5129EABC08(Global_35, "MGBegin"))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (MISC::_0xF9B91C5129EABC08(Global_35, "MGEnd"))
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	if (MISC::_0xF9B91C5129EABC08(Global_35, "ReadyForCut"))
	{
		MISC::SET_BIT(iParam0, 1);
	}
}

void func_1318(var uParam0)
{
	func_1874(1, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1875(&(uParam0->f_46.f_37), joaat("INPUT_SCRIPT_RUP"), "SKN_MSH", 4);
			aggregate_func_4242(uParam0, 1);
			break;
		case 1:
			if (func_1877(uParam0, 1, "CutBegin"))
			{
				func_1878(uParam0);
			}
			break;
	}
}

void func_1319(var uParam0)
{
	func_1874(2, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1875(&(uParam0->f_46.f_37), joaat("INPUT_SCRIPT_RUP"), "SKN_MSH", 4);
			aggregate_func_4242(uParam0, 1);
			break;
		case 1:
			if (func_1877(uParam0, 1, "CutBegin"))
			{
				func_1879(uParam0);
			}
			break;
	}
}

void func_1320(var uParam0)
{
	func_1874(0, *uParam0);
	switch (uParam0->f_9)
	{
		case 0:
			func_1875(&(uParam0->f_46.f_37), joaat("INPUT_SCRIPT_RUP"), "SKN_MSH", 4);
			aggregate_func_4242(uParam0, 1);
			break;
		case 1:
			if (func_1877(uParam0, 1, "CutBegin"))
			{
				func_1880(uParam0);
			}
			break;
	}
}

bool func_1328(int iParam0)
{
	if (!aggregate_func_7306(iParam0))
	{
		return false;
	}
	return (Global_1131373->f_11[iParam0 /*3*/])->f_2;
}

bool func_1333(int iParam0)
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

void func_1340(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_27), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_27), 1);
	}
}

void func_1341(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bool bVar0;

	bVar0 = func_1886(iParam4);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(vParam0, iParam5);
		}
		else
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
		}
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (func_1887(iParam4) != bVar0 || INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam8, sParam3) != bVar0)
		{
			if (func_1888(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 0);
					func_1889(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 1);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 1);
					}
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 1);
					func_1890(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 0);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 0);
					}
				}
			}
		}
	}
}

bool func_1346(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return true;
	}
	if (aggregate_func_4458(iParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_1357(int iParam0, int iParam1)
{
	if (!&Global_1957543->f_632[iParam0] == 1)
	{
		switch (iParam0)
		{
			case 10:
				aggregate_func_3148(aggregate_func_4314());
				break;
			case 15:
				aggregate_func_8642();
				break;
			case 38:
				aggregate_func_6123();
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !aggregate_func_1557(iParam1, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(aggregate_func_1966(*(Global_1957543->f_319[iParam0 /*8*/]))))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iParam1, Global_1957543->f_319[iParam0 /*8*/]);
				Global_1957543->f_632[iParam0] = 1;
			}
		}
	}
}

int func_1358(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1360(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 == aggregate_func_2477())
	{
		return true;
	}
	if (&Global_1051387->f_3693[38 /*16*/] == iParam0 && ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[38 /*16*/])->f_4))
	{
		return true;
	}
	return false;
}

float func_1369(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = 100f;
	switch (iParam0)
	{
		case 38:
			fVar0 = 200f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

bool func_1370(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar3 = -1;
	switch (iParam0)
	{
		case 2:
			Var0 = { aggregate_func_4259(0) };
			if (aggregate_func_4917(Var0))
			{
				return false;
			}
			break;
		case 32:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (&Global_1051387->f_4319[iVar2 /*7*/] == &Global_1051387->f_3693[32 /*16*/])
				{
					iVar3 = iVar2;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return false;
			}
			if ((Global_1051387->f_4319[iVar3 /*7*/])->f_3 == (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
			{
				return true;
			}
			else
			{
				iVar4 = aggregate_func_2818(aggregate_func_4265());
				if ((Global_1051387->f_4319[iVar3 /*7*/])->f_3 < (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
				{
					if (iVar4 >= (Global_1051387->f_4319[iVar3 /*7*/])->f_3 && iVar4 < (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else if (iVar4 < (Global_1051387->f_4319[iVar3 /*7*/])->f_3 && iVar4 >= (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			break;
		case 31:
			if (aggregate_func_5362(func_1902(iParam1), 1))
			{
				return false;
			}
			break;
		case 38:
			return func_1360(iParam1);
	}
	return true;
}

bool func_1372(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	struct<4> Var1;

	Var1 = aggregate_func_5223();
	Var1.f_2 = -738708473;
	Var1.f_3 = aggregate_func_4659(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -302053561;
	DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1);
	*uParam1 = uVar0;
	Var1.f_2 = -1407851228;
	Var1.f_3 = -495343091;
	*uParam2 = 0;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1))
	{
		*uParam2 = uVar0;
	}
	return true;
}

void func_1374(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!aggregate_func_4429(iParam0, 262144))
	{
		sVar0 = aggregate_func_5484(iParam0);
		sVar1 = MISC::_CREATE_VAR_STRING(10, "MP_SHOP_REL", sVar0);
		if (PED::ADD_RELATIONSHIP_GROUP(sVar1, &((Global_1051387->f_69[iParam0 /*76*/])->f_22)))
		{
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_3538(iVar2));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_3538(iVar2), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
				iVar2++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_2436(), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_2436());
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -989642646, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			aggregate_func_4789(iParam0, 262144);
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_2436(), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_2436());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
	}
}

bool func_1375(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	var uVar0;
	struct<4> Var1;

	Var1 = aggregate_func_5223();
	Var1.f_2 = -738708473;
	Var1.f_3 = aggregate_func_4659(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -1896626193;
	DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1);
	*uParam3 = uVar0;
	Var1.f_2 = -99852754;
	Var1.f_3 = -160814000;
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var1);
	Var1.f_2 = 1059891245;
	Var1.f_3 = -1317038779;
	DATAFILE::_DATAFILE_GET_FLOAT(bParam2, &Var1);
	return true;
}

void func_1376()
{
	Global_1051387->f_3666.f_1 = -1;
	Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
	Global_1051387->f_3666.f_6 = 0;
	PED::SET_PED_CONFIG_FLAG(Global_35, 1, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
	PED::_0xC2266AA617668AD3(Global_35, 1f);
	PED::_0x73B6F907B913C860(Global_35, 1f);
	TASK::_0x013A7BA5015C1372(Global_35, 0);
	TASK::_0xFA30E2254461ADEB(Global_35, 0);
	aggregate_func_5003(0);
}

int func_1378(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	var uVar7;

	Var0 = aggregate_func_5223();
	Var0.f_2 = 1164964224;
	Var0.f_3 = aggregate_func_4659(iParam0);
	iVar5 = 0;
	bVar6 = false;
	while (!bVar6)
	{
		Var0.f_4 = iVar5;
		if (DATAFILE::_DATAFILE_GET_VECTOR(&uVar7, &Var0))
		{
			iVar5++;
		}
		else
		{
			bVar6 = true;
		}
	}
	return iVar5;
}

bool func_1379(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4369(iParam0);
	switch (iVar0)
	{
		case 36:
			if (aggregate_func_1217(iVar0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1380(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
	iVar0 = func_1378(iParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_1384(iParam0, iVar1, &vVar2);
		if (BUILTIN::VDIST(Global_36, vVar2) < BUILTIN::VDIST(Global_36, Global_1051387->f_3666.f_2))
		{
			Global_1051387->f_3666.f_2 = { vVar2 };
		}
		iVar1++;
	}
}

bool func_1384(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = aggregate_func_5223();
	Var0.f_2 = 1164964224;
	Var0.f_3 = aggregate_func_4659(iParam0);
	Var0.f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
}

bool func_1388()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051387->f_3216 == iVar0 || Global_1051387->f_3216 == (iVar0 - 1));
}

bool func_1391()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	int iVar17;

	Var3.f_9 = -1591664384;
	if (!aggregate_func_2842("ALL SATCHEL", &iVar0, &iVar1, -1591664384, 0))
	{
		return false;
	}
	bVar2 = false;
	while (bVar2 < iVar1)
	{
		if ((aggregate_func_2840(&Var3, bVar2, iVar0, iVar1) && aggregate_func_2823(Var3.f_4, 0)) && aggregate_func_5302(Var3.f_4, 816454899, 1, 0) > 0)
		{
			iVar17 = 1;
		}
		else
		{
			bVar2++;
		}
	}
	aggregate_func_2837(iVar0);
	return iVar17;
}

int func_1393(int iParam0, int iParam1)
{
	if (iParam1 != 9)
	{
		return 0;
	}
	if (aggregate_func_4251() != -1)
	{
		return 1938782895 /* GXTEntry: "Stable" */;
	}
	if (aggregate_func_5375() == 3 && !MAP::DOES_BLIP_EXIST(Global_1903006->f_379.f_1))
	{
		return 469827317 /* GXTEntry: "Stable" */;
	}
	return 1938782895 /* GXTEntry: "Stable" */;
}

void func_1394(int iParam0)
{
	if (!aggregate_func_4240(Global_1051387->f_3682, iParam0))
	{
		aggregate_func_4247(&(Global_1051387->f_3682), iParam0);
	}
}

int func_1395(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		case 5:
			return 1;
		case 26:
			return 2;
		case 40:
			return 3;
		case 74:
			return 4;
		case 81:
			return 5;
		case 83:
			return 6;
		case 98:
			return 7;
		case 111:
			return 8;
		case 121:
			return 9;
		case 127:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_1396(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 11)
	{
		return false;
	}
	return true;
}

int func_1397(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 40:
			return 417546980;
		case 74:
			return -117334654;
		case 81:
			return -357010019;
		case 83:
			return 719613628;
		case 98:
			return 1459616333;
		case 111:
			return 1607757565;
		case 121:
			return -161326102;
		case 127:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 39:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

void func_1398(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_16844)
	{
		MAP::_0x662D364ABF16DE2F(&(Global_16844[iParam0]), iParam1);
	}
}

int func_1399(int iParam0)
{
	return &(Global_1915170->f_17805[iParam0 /*11*/]);
}

int func_1401(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_1911(iVar0);
		if (aggregate_func_5304(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1402(int iParam0, int iParam1)
{
	if (aggregate_func_5362(iParam0, 128))
	{
		aggregate_func_3793(iParam1, -401963276);
		aggregate_func_3793(iParam1, 231194138);
		aggregate_func_3793(iParam1, 580546400);
		aggregate_func_8125(iParam0, 128);
	}
	if (aggregate_func_5362(iParam0, -2147483648))
	{
		aggregate_func_3793(iParam1, 580546400);
		aggregate_func_3793(iParam1, 847579139);
		aggregate_func_8125(iParam0, -2147483648);
	}
	if (aggregate_func_5362(iParam0, 16))
	{
		aggregate_func_3793(iParam1, 724623647);
		aggregate_func_8125(iParam0, 16);
	}
}

bool func_1404(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(aggregate_func_5121(iParam0)))
	{
		return true;
	}
	if (aggregate_func_6302(&(Global_1915170->f_19844), 2))
	{
		return true;
	}
	if (aggregate_func_6302(&(Global_1915170->f_19844), 4) && aggregate_func_5278(iParam0) == aggregate_func_4314())
	{
		return true;
	}
	if (aggregate_func_3638())
	{
		return true;
	}
	if (iParam0 == 133 && aggregate_func_5362(iParam0, 16384))
	{
		return true;
	}
	return false;
}

int func_1405()
{
	int iVar0;

	iVar0 = 1861010125; /* GXTEntry: "Post Office" */
	if (Global_1051387->f_3678)
	{
		iVar0 = 1475382911; /* GXTEntry: "Post Office" */
	}
	return iVar0;
}

void func_1406(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_16844)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_16844[iParam0])))
		{
			MAP::SET_BLIP_SPRITE(&(Global_16844[iParam0]), iParam1, true);
		}
	}
}

bool func_1411(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = -570078785;
	if (bParam1)
	{
		bVar0 = aggregate_func_4992(bParam0, 1, 1);
		if (bVar0 == 0 || aggregate_func_5215(bParam0, 773203532 /* GXTEntry: "Gold Bar" */, bVar0, 0, 1) == 0)
		{
			bVar0 = -570078785;
		}
	}
	return bVar0;
}

int func_1414(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<5> Var1;

	*bParam1 = 0;
	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	if (aggregate_func_1552(bParam0))
	{
		return 0;
	}
	if (aggregate_func_2959(bParam0, 81450561) || aggregate_func_2959(bParam0, 1342455455))
	{
		return 0;
	}
	if (aggregate_func_4537(bParam0))
	{
		return 0;
	}
	bVar0 = aggregate_func_2111(bParam0, 1);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!aggregate_func_2890(bVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915170->f_21989.f_2 == 1)
	{
		Var1 = { aggregate_func_304(bParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*bParam1 = bVar0;
	return 1;
}

int func_1435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 22;
		case 1:
			return 23;
		case 2:
			return 24;
		case 3:
			return 25;
		case 4:
			return 26;
		case 5:
			return 27;
		case 6:
			return 28;
		case 15:
			return 33;
		case 13:
			return 34;
		case 14:
			return 35;
		case 12:
			return 36;
		case 10:
			return 29;
		case 11:
			return 30;
		default:
			break;
	}
	if (aggregate_func_4949(iParam0) == -785841056)
	{
		return 31;
	}
	return 21;
}

bool func_1437(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	if (iParam0 == 9 && !func_233(iParam0))
	{
		*uParam1 = 6;
		return false;
	}
	if (aggregate_func_4429(iParam0, 128))
	{
		*uParam1 = 1;
		return false;
	}
	if (aggregate_func_5362((Global_1051387->f_69[iParam0 /*76*/])->f_18, 1) || aggregate_func_5362((Global_1051387->f_69[iParam0 /*76*/])->f_18, 1048576))
	{
		*uParam1 = 1;
		return false;
	}
	if (aggregate_func_1980(4, 255) && !aggregate_func_4458(iParam0, 1073741824 /* Float: 2f */))
	{
		*uParam1 = 2;
		return false;
	}
	if (iParam0 == 34)
	{
		return true;
	}
	if (iParam0 == 28 || iParam0 == 29)
	{
		*uParam1 = 3;
		return ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21);
	}
	bVar0 = false;
	if (!aggregate_func_4458(iParam0, 16384))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1) || aggregate_func_4458(iParam0, 16384))
	{
		if (aggregate_func_4458(iParam0, 16384))
		{
			bVar0 = true;
		}
		else if (aggregate_func_4458(iParam0, 32768) || aggregate_func_4458(iParam0, 65536))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME((Global_1051387->f_69[iParam0 /*76*/])->f_21, (Global_1051387->f_69[iParam0 /*76*/])->f_25, true, 0))
			{
				bVar0 = true;
			}
			else
			{
				vVar2 = { VOLUME::_0xF70F00013A62F866((Global_1051387->f_69[iParam0 /*76*/])->f_25) };
				vVar5 = { VOLUME::_0x3E2A25B2416DD67E((Global_1051387->f_69[iParam0 /*76*/])->f_25) };
			}
		}
		else if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			if (PED::_0x9C54041BB66BCF9E(iVar1, (Global_1051387->f_69[iParam0 /*76*/])->f_6))
			{
				bVar0 = true;
			}
			else
			{
				aggregate_func_4449(iParam0, 8192);
			}
		}
	}
	if (!bVar0)
	{
		*uParam1 = 3;
		return false;
	}
	if (!aggregate_func_2310(iParam0))
	{
		*uParam1 = 4;
		return false;
	}
	if (aggregate_func_4251() == 0 && iParam0 == 9)
	{
		if (!aggregate_func_2820())
		{
			if (!aggregate_func_4442())
			{
				*uParam1 = 5;
				return false;
			}
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE((Global_1051387->f_69[iParam0 /*76*/])->f_9, true))
	{
		*uParam1 = 7;
		return false;
	}
	return true;
}

int func_1440(int iParam0)
{
	if (aggregate_func_4251() == -1)
	{
		switch (iParam0)
		{
			case 0:
				return 345459576;
			case 3:
				return 316164498;
			case 4:
				return 107054859;
			case 6:
				return 1970668659;
			case 7:
				return -1423761327;
			case 2:
				return 1962571075;
			case 1:
				return -1351031954;
			case 8:
				return 246898748;
			case 11:
				return -1422207440;
			case 10:
				return -349412908;
			case 24:
				return 234332070;
			case 23:
				return -1264799642;
			case 22:
				return -862152188;
			case 9:
				return 1441533623;
			case 14:
				return -2144051908;
			case 15:
				return -1846094185;
			case 18:
				return -247100713;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 401693504;
			case 3:
				return 313645409;
			case 4:
				return 1504321614;
			case 33:
				return -2041316776;
			case 6:
				return 273039633;
			case 7:
				return -212649012;
			case 2:
				return 179517202;
			case 25:
				return 1483876011;
			case 8:
				return -1152758309;
			case 11:
				return 1907419717;
			case 10:
				return -1819629762;
			case 24:
				return -269308116;
			case 23:
				return 1868274377;
			case 9:
				return 273180217;
			case 14:
				return -1578822351;
			case 27:
				return 923565142;
			case 18:
				return 215795965;
			case 38:
				return 847573100;
			default:
				break;
		}
	}
	return 0;
}

bool func_1441(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		return aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 4);
	}
	return false;
}

bool func_1444(int iParam0)
{
	if (!aggregate_func_4260(&((Global_1051387->f_69[iParam0 /*76*/])->f_70)))
	{
		return false;
	}
	return aggregate_func_4298(&((Global_1051387->f_69[iParam0 /*76*/])->f_70)) < 10f;
}

void func_1455(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_50 = ((Global_1051387->f_69[iParam0 /*76*/])->f_50 - (Global_1051387->f_69[iParam0 /*76*/])->f_50 & 3080);
}

bool func_1457(int iParam0)
{
	bool bVar0;

	if (aggregate_func_4458(iParam0, 268435456))
	{
		return true;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_26))
	{
		return func_794(iParam0);
	}
	if (aggregate_func_4458(iParam0, 4))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25))
		{
			if (VOLUME::_0xF256A75210C5C0EB((Global_1051387->f_69[iParam0 /*76*/])->f_25, ENTITY::GET_ENTITY_COORDS(aggregate_func_3079(), true, false)))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	bVar0 = VOLUME::_0xF256A75210C5C0EB((Global_1051387->f_69[iParam0 /*76*/])->f_26, ENTITY::GET_ENTITY_COORDS(aggregate_func_3079(), true, false));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_1460(int iParam0)
{
	return Global_1051387->f_3220 == iParam0;
}

void func_1467(var uParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 10;
	func_1490(-2061583405);
	func_1490(-525676072);
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1951131->f_81[iVar1 /*12*/])
	{
		bVar2 = &uParam0->f_1[iVar1 /*3*/];
		if (aggregate_func_5091(bVar2, &uVar0))
		{
			aggregate_func_3040(bVar2, 1);
		}
		else if (aggregate_func_2827(bVar2) == -2061583405 && aggregate_func_5192(-2061583405, 0))
		{
			aggregate_func_3041(&(uParam0->f_1[iVar1 /*3*/]), 1, 1, 1);
		}
		else if (aggregate_func_2827(bVar2) == -525676072 && aggregate_func_5192(-525676072, 0))
		{
			aggregate_func_3041(&(uParam0->f_1[iVar1 /*3*/]), 1, 1, 1);
		}
	}
}

void func_1468(var uParam0)
{
	int iVar0;

	iVar0 = 23;
	aggregate_func_5567(-1719060085);
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
	{
		aggregate_func_3041(&(uParam0->f_1[iVar0 /*3*/]), 1, 1, 1);
	}
}

void func_1469(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	bVar1 = &uParam0->f_1[iVar0 /*3*/];
	if (aggregate_func_2959(bVar1, 160827531) || aggregate_func_2827(bVar1) == 81053684)
	{
		aggregate_func_5567(81053684);
		if (aggregate_func_4988(81053684))
		{
			func_1481(81053684);
		}
		aggregate_func_3041(bVar1, 1, 1, (uParam0->f_1[iVar0 /*3*/])->f_1 == -1829635046);
	}
	else
	{
		func_1490(81053684);
	}
	if (aggregate_func_2951(&(uParam0->f_1[34 /*3*/])) != 0)
	{
		func_1480(81053684);
	}
	else if (aggregate_func_5570(bVar1) != 0)
	{
		func_1480(81053684);
	}
	else if (!aggregate_func_4734(524288))
	{
		func_1481(81053684);
	}
	iVar2 = 20;
	iVar3 = 18;
	if (&uParam0->f_1[iVar2 /*3*/] != &Global_1951131->f_81[iVar2 /*12*/] || &uParam0->f_1[iVar3 /*3*/] != &Global_1951131->f_81[iVar3 /*12*/])
	{
		if (aggregate_func_2959(&(uParam0->f_1[iVar2 /*3*/]), -1527414429) || aggregate_func_2959(&(uParam0->f_1[iVar3 /*3*/]), -1527414429))
		{
			func_1480(81053684);
		}
	}
}

bool func_1474(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_1951131->f_2783[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_1477(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_1951131->f_2783[iParam1] = (Global_1951131->f_2783[iParam1] || iParam0);
	}
}

void func_1480(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = aggregate_func_1499(0);
	if (aggregate_func_5200(iParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1951131->f_3109.f_25)
		{
			bVar1 = &Global_1951131->f_3109[iVar0];
			if (aggregate_func_2827(bVar1) == iParam0 || (iParam0 == 81053684 && aggregate_func_2959(bVar1, -1348134986)))
			{
				INVENTORY::_0x766315A564594401(iVar2, bVar1, 0);
			}
			iVar0++;
		}
	}
	func_1942(aggregate_func_5115(iParam0), 6);
}

void func_1481(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = aggregate_func_1499(0);
	if (aggregate_func_5200(iParam0, 1) > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1951131->f_3109.f_25)
		{
			bVar1 = &Global_1951131->f_3109[iVar0];
			if (aggregate_func_2827(bVar1) == iParam0 || (iParam0 == 81053684 && aggregate_func_2959(bVar1, -1348134986)))
			{
				if (aggregate_func_2959(bVar1, -166674229) && iParam0 != -999503751)
				{
				}
				else
				{
					INVENTORY::_0x6A564540FAC12211(iVar2, bVar1);
				}
			}
			iVar0++;
		}
	}
	func_1943(aggregate_func_5115(iParam0), 6);
}

bool func_1484()
{
	return Global_1954462->f_1331.f_97;
}

int func_1487(bool bParam0)
{
	switch (bParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 34;
		case 65931886:
			return 35;
		case 1371678229:
			return 36;
		case 2102263084:
			return 37;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 29;
		case -55563408:
			return 32;
		case -1914506115:
			return 39;
		case 802495462:
			return 43;
		case 842905332:
			return 45;
		case 1511551084:
			return 47;
		case -1725704631:
			return 49;
		case 1257427489:
			return 51;
		case -659341240:
			return 53;
		case 2038771525:
			return 55;
		case -535599244:
			return 57;
		case -389591806:
			return 41;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 38;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 61;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 58;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 59;
		case 594312243:
			return 60;
		case -978578725:
			return 62;
		default:
			break;
	}
	if (bParam0 == -361635024)
	{
		return 30;
	}
	if (bParam0 == -1951220140)
	{
		return 46;
	}
	if (bParam0 == -291256376)
	{
		return 23;
	}
	if (bParam0 == 1460520700)
	{
		return 44;
	}
	if (bParam0 == 523337834)
	{
		return 48;
	}
	if (bParam0 == -19271249)
	{
		return 50;
	}
	if (bParam0 == 214175524)
	{
		return 52;
	}
	if (bParam0 == -1303643297)
	{
		return 54;
	}
	if (bParam0 == 411856831)
	{
		return 56;
	}
	if (bParam0 == -926815459)
	{
		return 40;
	}
	if (bParam0 == -1300731953)
	{
		return 42;
	}
	if (bParam0 == -409616653)
	{
		return 33;
	}
	return -1;
}

int func_1489(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { aggregate_func_304(bParam0, 0, 0) };
	Var5 = { aggregate_func_2828(bParam0, Var0, Var0.f_4, 0) };
	if (aggregate_func_1500(bParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x6D2F987736A42D4C(aggregate_func_1499(0), &Var5, iParam1);
	return 1;
}

void func_1490(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1951131->f_3109.f_25)
	{
		bVar1 = &Global_1951131->f_3109[iVar0];
		if (aggregate_func_2827(bVar1) == iParam0 || (iParam0 == 81053684 && aggregate_func_2959(bVar1, -1348134986)))
		{
			aggregate_func_3040(bVar1, 0);
		}
		iVar0++;
	}
}

void func_1498()
{
	if (!aggregate_func_6713(-1631930150, -336340230))
	{
		return;
	}
	Global_1954462->f_1615 = 0f;
}

void func_1499()
{
	aggregate_func_6713(-1631930150, -179898515);
}

void func_1500()
{
	aggregate_func_6713(-1631930150, 1767031434);
}

void func_1501()
{
	if (func_1956(-1631930150) != -336340230)
	{
		return;
	}
	aggregate_func_4447(-1631930150);
}

void func_1502()
{
	if (func_1956(-1631930150) != -179898515)
	{
		return;
	}
	aggregate_func_4447(-1631930150);
}

void func_1503()
{
	if (func_1956(-1631930150) != 1767031434)
	{
		return;
	}
	aggregate_func_4447(-1631930150);
}

int func_1511(bool bParam0, float fParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<15> Var9;
	struct<11> Var24;
	int iVar38;
	struct<17> Var39;
	int iVar56;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	Var0 = { aggregate_func_304(bParam0, 0, 0) };
	Var5 = { aggregate_func_2828(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(aggregate_func_1499(bParam2), &Var5, &Var9, 15, 1))
	{
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!INVENTORY::_0x9700E8EFC4AB9089(aggregate_func_1499(bParam2), &Var5, &Var24, true))
	{
		return 0;
	}
	iVar38 = aggregate_func_3851(fParam1);
	if (Var9.f_14 == iVar38 && Var24.f_10 == iParam3)
	{
		return 1;
	}
	if (aggregate_func_2892(bParam2))
	{
		Var9.f_14 = iVar38;
		if (!INVENTORY::_0xD80A8854DB5CFBA5(aggregate_func_1499(bParam2), &Var5, &Var9, 15))
		{
			return 0;
		}
	}
	else
	{
		Var39.f_9 = 1;
		Var39.f_11 = -1591664384;
		Var39 = { aggregate_func_4654(&Var9, 0) };
		Var39.f_10 = iParam3;
		Var39.f_16 = iVar38;
		iVar56 = aggregate_func_1543(joaat("update"), &Var39, 0);
		if (iVar56 == -1)
		{
			return 0;
		}
		Global_1951131->f_924 = iVar56;
	}
	return 1;
}

bool func_1521(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_1525(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!aggregate_func_4250(uParam0->f_2[iVar0 /*2*/], 2))
		{
			*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
			iVar1++;
		}
		*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
		iVar0++;
	}
	*uParam0 = iVar1;
}

void func_1527(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = true;
	if (&Global_1951131->f_1538.f_1[iParam2 /*3*/] == &Global_1951131->f_81[iParam2 /*12*/] || func_1528(bParam1, 8))
	{
		if (!aggregate_func_4855(bParam1, 1))
		{
			aggregate_func_2100(iParam0, iParam2, bParam3);
			aggregate_func_4752(bParam1, 1, 6);
			Global_1951131->f_1538.f_1[iParam2 /*3*/] = &Global_1951131->f_81[iParam2 /*12*/];
			(Global_1951131->f_1538.f_1[iParam2 /*3*/])->f_1 = 0;
			func_1970(iParam2, 0);
			*bParam4 = 0;
			Global_1951131->f_923++;
		}
		return;
	}
	if (func_1528(bParam1, 16))
	{
		if (bParam1 == 1108822547)
		{
			bVar0 = !aggregate_func_4734(32768);
			aggregate_func_2938();
		}
		aggregate_func_2100(iParam0, iParam2, bVar0);
	}
	if (aggregate_func_4855(bParam1, 1))
	{
		aggregate_func_4737(bParam1, 1, 6);
	}
	Global_1951131->f_923++;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, &(Global_1951131->f_1538.f_1[iParam2 /*3*/]), false, bParam3, false);
	*bParam4 = 1;
	func_1970(iParam2, 1);
	bVar1 = &Global_1951131->f_1538.f_1[iParam2 /*3*/];
	if (aggregate_func_2827(bVar1) == 81053684 || aggregate_func_2959(bVar1, 160827531))
	{
		if (func_1528(bParam1, 1))
		{
			(Global_1951131->f_1538.f_1[iParam2 /*3*/])->f_1 = -1829635046;
			PED::_0x66B957AAC2EAAEAB(iParam0, &(Global_1951131->f_1538.f_1[iParam2 /*3*/]), -1829635046, 0, bParam3, 1);
		}
		else
		{
			PED::_0x66B957AAC2EAAEAB(iParam0, &(Global_1951131->f_1538.f_1[iParam2 /*3*/]), joaat("base"), 0, bParam3, 1);
			*bParam4 = 0;
		}
	}
}

bool func_1528(bool bParam0, int iParam1)
{
	return ((Global_1951131->f_2548[aggregate_func_4716(bParam0, 1) /*2*/])->f_1 && iParam1) != 0;
}

bool func_1533(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_2 = iParam1;
	iParam0->f_3 = iParam2;
	iParam0->f_4 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(iParam0->f_1), iParam0))
	{
		return true;
	}
	return false;
}

int func_1534(struct<5> Param0, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	Param0.f_2 = iParam5;
	Param0.f_3 = iParam6;
	Param0.f_4 = iParam7;
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Param0);
	return iVar0;
}

int func_1536(int iParam0)
{
	switch (iParam0)
	{
		case -1039839725:
			return joaat("misc");
		case 423264750:
			return 931844364;
		case -2071873973:
			return 246385598;
		case -398968481:
			return -366693282;
		case -2105530711:
			return -1725579161;
		case 625416786:
			return -1057211637;
		case 1306151543:
			return -1505611915;
		case -1678070620:
			return -106096122;
		case -1859584295:
			return joaat("hair");
		case -1939322467:
			return -1903910230;
		case -1971228573:
			return -1762808228;
		case -1754244730:
			return -134124598;
		case 1841183082:
			return 366200818;
		case -610558556:
			return -322391462;
		case 904830164:
			return -1229572297;
		case 719843584:
			return 98860198;
		case -1110426434:
			return -126114541;
		case -223797183:
			return 1963323202;
		case 1984438688:
			return -2087420491;
		case 1013950848:
			return 1524025505;
		case 1466020155:
			return 1606587013;
		case -355441334:
			return 706918662;
		case -1484052032:
			return 1163341077;
		case 1746653115:
			return 2056714954;
		case -856561534:
			return 1820468724;
		case -237881785:
			return 1094162565;
		case -689983341:
			return 1065301383;
		case 1853503172:
			return 188311241;
		case -2089804556:
			return 539411565;
		case 237827878:
			return -242465481;
		case 2115205669:
			return 1250560851;
		case -515231328:
			return 1065202434;
		case -2017254508:
			return 923771890;
		case 858722808:
			return 725125637;
		case -398105014:
			return 1527726350;
		case 1938574876:
			return 1026208467;
		case 376149636:
			return -2022036233;
		case 1253249384:
			return 1008366797;
		case -43043573:
			return -407765147;
		case -1162640732:
			return -529714994;
		case -662295926:
			return 1799186100;
		case 2045415055:
			return 1214179380;
		case 1174324405:
			return -372138959;
		case 874055612:
			return 1995498098;
		case -415832755:
			return 2118314848;
		case 1252420504:
			return 1937338194;
		case -911191911:
			return -1567461477;
		case 746805277:
			return 425108158;
		case -1901841908:
			return 2044190614;
		case -1383261957:
			return joaat("loadouts");
		case -2124282627:
			return 1058996709;
		case 735082099:
			return -636605355;
		case 63173055:
			return -811108073;
		case 1418570693:
			return -1806676698;
		case -1476509547:
			return 1431760203;
		case -1653154748:
			return -1896142998;
		case 582522943:
			return -1250802524;
		case 250841639:
			return 1018031031;
		case -743641788:
			return -1459825906;
		case -366404014:
			return -1783800278;
		case -1267505364:
			return joaat("gloves");
		case -1440204674:
			return -1394906584;
		case 1981185929:
			return 2076247897;
		case 100277197:
			return -614161520;
		case 798554492:
			return -85389185;
		case 1573110862:
			return -1691579511;
		case 1356956506:
			return 904313209;
		case -1292335301:
			return 1237884315;
		case 368776083:
			return 2078766994;
		case 974566458:
			return -1176307199;
		case 1620573656:
			return -1229581779;
		case 2097486068:
			return 2080418032;
		case 156885186:
			return -1496238906;
		case 1897833847:
			return 451737564;
		case -77443607:
			return -2110355467;
		case 1374870102:
			return 491541130;
		case -147640227:
			return -1168358466;
		case 263550809:
			return -2130987730;
		case 1755853336:
			return -1595692161;
		case -1708863941:
			return joaat("stockings");
		case 783045853:
			return 822561179;
		case 1333257424:
			return 1363860714;
		case 603592077:
			return 1377798597;
		case 1801830393:
			return 2004797167;
		case -834874115:
			return 410165049;
		case -1129780236:
			return 828269641;
		default:
			break;
	}
	return 0;
}

int func_1538(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 3;
	}
	iVar0 = aggregate_func_5067(bParam1);
	if (iVar0 == -1 && !aggregate_func_2155(bParam1, aggregate_func_4577()))
	{
		return 3;
	}
	if (uParam2->f_1 != 0 && aggregate_func_5069(uParam2, 1))
	{
		if (uParam2->f_1 == bParam1)
		{
			if (bParam3)
			{
				return func_1975(iParam0, uParam2);
			}
			else
			{
				return 2;
			}
		}
		else if (uParam2->f_1 != bParam1)
		{
			aggregate_func_4444(uParam2);
		}
	}
	if (!aggregate_func_5069(uParam2, 1))
	{
		aggregate_func_5407(&(uParam2->f_1));
		if (!aggregate_func_5272(&(uParam2->f_1), &uVar1, bParam1, iVar0, 1, 0, 0, 0))
		{
			return 3;
		}
		uParam2->f_1 = bParam1;
		aggregate_func_4241(uParam2, 1);
	}
	if (!bParam3)
	{
		return 2;
	}
	return func_1975(iParam0, uParam2);
}

int func_1540(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 3;
	}
	if (uParam1->f_1 == 0)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(&(uParam1->f_135[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 2;
}

int func_1541()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	iVar5 = PLAYER::PLAYER_PED_ID();
	bVar3 = WEAPON::GET_CURRENT_PED_WEAPON(iVar5, &bVar0, true, 0, false);
	bVar4 = WEAPON::GET_CURRENT_PED_WEAPON(iVar5, &bVar1, true, 1, false);
	if ((aggregate_func_2910(bVar0) || aggregate_func_2910(bVar1)) || WEAPON::_0x959383DCD42040DA(bVar0))
	{
		return 0;
	}
	if (bVar3)
	{
		iVar2 = aggregate_func_844(bVar0);
		switch (iVar2)
		{
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				aggregate_func_4976(1);
				return 1;
			case joaat("group_pistol"):
				return 0;
			case -1101297303:
				return 0;
			default:
				break;
		}
		if (bVar0 == joaat("weapon_unarmed"))
		{
			aggregate_func_4976(2);
		}
	}
	if (bVar4)
	{
		if (bVar1 != joaat("weapon_unarmed"))
		{
			aggregate_func_4976(0);
		}
		return 1;
	}
	aggregate_func_4976(2);
	return 1;
}

int func_1542(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (func_1540(iParam0, uParam1) != 2)
	{
		bVar1 = false;
	}
	aggregate_func_5521(&(uParam1->f_1));
	iVar2 = 112;
	bVar0 = aggregate_func_5379(uParam1->f_1) >= false;
	if (!bVar0)
	{
		iVar2 = func_1983(uParam1->f_1);
	}
	aggregate_func_4826(&(Global_1951131->f_1657), iVar2, 0, 0, 0);
	if (bVar1)
	{
		aggregate_func_525(&(Global_1951131->f_1657), iParam0, 1, -1, 1, 1, 1, 1);
	}
	else
	{
		aggregate_func_4733(2, 0, 2, 0, 0);
	}
	aggregate_func_4733(27, 0, 0, 0, 0);
	aggregate_func_4733(34, 0, 0, 0, 0);
	aggregate_func_943(iParam0);
	if (bParam2)
	{
		aggregate_func_4444(uParam1);
	}
	if (bParam3)
	{
	}
	return 1;
}

char* func_1544()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1549(int iParam0, int iParam1)
{
	return (Global_1951131->f_928[iParam0] && iParam1) != 0;
}

void func_1613(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_1171(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	aggregate_func_1405(iParam0, BUILTIN::FLOOR(fParam1));
	bVar1 = aggregate_func_1171(iParam0);
	if (bVar1 > iVar0)
	{
		bVar2 = (bVar1 - iVar0);
		aggregate_func_1962(aggregate_func_4347(352983236), bVar2);
		PED::_0xA69899995997A63B(iParam0, bVar1);
		if (bVar1 >= 4)
		{
			aggregate_func_1962(aggregate_func_4347(-2116919750), 1);
		}
		if (bVar1 == 2)
		{
			aggregate_func_4322(21, 1);
		}
		else if (bVar1 == 3)
		{
			aggregate_func_4322(22, 1);
		}
		else if (bVar1 == 4)
		{
			aggregate_func_4322(23, 1);
		}
		aggregate_func_1850(bVar1, iParam0);
		aggregate_func_8047();
	}
}

bool func_1630(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 == PLAYER::PLAYER_PED_ID() && !bParam0)
		{
			return false;
		}
	}
	Global_1268935->f_11.f_50 = Global_1273882->f_20;
	aggregate_func_6952(47);
	aggregate_func_6956();
	return true;
}

struct<4> func_1631(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	switch (iParam0)
	{
		case 0:
			iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
			break;
		case 2:
			iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8039()) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8040())) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8041())) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8042()))
		{
			return aggregate_func_4289();
		}
		Var1 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8039());
		Var1.f_1 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8040());
		Var1.f_2 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8041());
		Var1.f_3 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8042());
		return Var1;
	}
	return aggregate_func_4289();
}

bool func_1632(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (aggregate_func_918(iParam1, iParam0, 1, 1) > 40f)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam0, 1)))
	{
		return false;
	}
	return true;
}

bool func_1633()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	aggregate_func_485(8, 4);
	return true;
}

bool func_1634()
{
	int iVar0[11];
	int iVar12;
	int iVar13[26];
	bool bVar40;

	iVar0[0] = 1448771675; /* GXTEntry: "Hay" */
	iVar0[1] = -1921080134; /* GXTEntry: "Classic Oatcakes" */
	iVar0[2] = 1533677103; /* GXTEntry: "Apple" */
	iVar0[3] = -1683269219; /* GXTEntry: "Beets" */
	iVar0[4] = 1209486044; /* GXTEntry: "Pear" */
	iVar0[5] = 335540214; /* GXTEntry: "Peach" */
	iVar0[6] = 1987629749; /* GXTEntry: "Celery" */
	iVar0[7] = 516844411; /* GXTEntry: "Carrot" */
	iVar0[8] = -947702135; /* GXTEntry: "Corn" */
	iVar0[9] = -1477273558; /* GXTEntry: "Peppermint" */
	iVar0[10] = -635441454; /* GXTEntry: "Sugar Cube" */
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (aggregate_func_1361(&(iVar0[iVar12]), 0, 0, 0) > 0)
		{
			return &(iVar0[iVar12]);
		}
		iVar12++;
	}
	iVar13[0] = 1668084914; /* GXTEntry: "Alaskan Ginseng" */
	iVar13[1] = -196740052; /* GXTEntry: "American Ginseng" */
	iVar13[2] = -1602657245; /* GXTEntry: "Bay Bolete" */
	iVar13[3] = -1991037110; /* GXTEntry: "Blackberry" */
	iVar13[4] = -249994063; /* GXTEntry: "Blackcurrant" */
	iVar13[5] = -398744080; /* GXTEntry: "Burdock Root" */
	iVar13[6] = -1066874997; /* GXTEntry: "Chanterelle" */
	iVar13[7] = 2064962445; /* GXTEntry: "Creeping Thyme" */
	iVar13[8] = 428582000; /* GXTEntry: "Desert Sage" */
	iVar13[9] = -2006599970; /* GXTEntry: "Hummingbird Sage" */
	iVar13[10] = -118748546; /* GXTEntry: "Golden Currant" */
	iVar13[11] = -2051332199; /* GXTEntry: "Oleander Sage" */
	iVar13[12] = -2013384490; /* GXTEntry: "Parasol Mushroom" */
	iVar13[13] = -746674788; /* GXTEntry: "Ram\'s Head" */
	iVar13[14] = 599861917; /* GXTEntry: "Raspberry" */
	iVar13[15] = -56806045; /* GXTEntry: "Red Sage" */
	iVar13[16] = 746300881; /* GXTEntry: "Wild Feverfew" */
	iVar13[17] = -435006002; /* GXTEntry: "Wild Mint" */
	iVar13[18] = 1433048902; /* GXTEntry: "Ginseng" */
	iVar13[19] = -1781387050; /* GXTEntry: "Sage" */
	iVar13[20] = -624139784; /* GXTEntry: "Wintergreen Berry" */
	iVar13[21] = 1047281747; /* GXTEntry: "Currant" */
	iVar13[22] = 546981776; /* GXTEntry: "Oregano" */
	iVar13[23] = 1216456215; /* GXTEntry: "Wild Carrot" */
	iVar13[24] = -2085219828; /* GXTEntry: "Common Bulrush" */
	iVar13[25] = -1620920647; /* GXTEntry: "English Mace" */
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		bVar40 = &iVar13[iVar12];
		if (aggregate_func_8542(bVar40) && aggregate_func_1361(bVar40, 0, 0, 0) > 0)
		{
			return bVar40;
		}
		iVar12++;
	}
	return false;
}

void func_1667(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	bVar3 = bParam1;
	iVar4 = aggregate_func_2827(bVar3);
	iVar5 = 0;
	if (aggregate_func_4577() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					aggregate_func_4743(iVar0, iVar5);
				}
				Jump @3217; //curOff = 253
				if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						bVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate_func_2827(bVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					Jump @3217; //curOff = 543
					if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate_func_4743(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -1473580422))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2959(bVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (aggregate_func_2089(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, 1583165364))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -1650340550))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						Jump @3217; //curOff = 918
						if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							aggregate_func_4743(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 20;
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar1, 1090938458)) && aggregate_func_2959(bVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1171
							aggregate_func_4743(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1454
							aggregate_func_4743(16, iVar5);
							if (aggregate_func_5024(bVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								Jump @3217; //curOff = 1747
								if (aggregate_func_5024(bVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate_func_4743(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate_func_2959(bVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											aggregate_func_4743(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											aggregate_func_4743(iVar0, iVar5);
										}
									}
									Jump @3217; //curOff = 1988
									if (aggregate_func_5024(bVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											aggregate_func_4743(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											bVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate_func_2959(bVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate_func_4743(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(bVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate_func_4743(iParam2, iVar5);
												}
											}
										}
										Jump @3217; //curOff = 2214
										if (aggregate_func_5024(bVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2959(bVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 2438
											if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate_func_2959(bVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												if ((aggregate_func_2959(bVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate_func_2959(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											Jump @3217; //curOff = 2922
											iVar0 = 37;
											if (aggregate_func_2959(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3004
											iVar0 = 10;
											if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3068
											iVar0 = 12;
											if (81053684 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3132
											if (!aggregate_func_2959(bVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
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
			switch (func_1521(iParam2, 1))
			{
				case -207860920:
					if (aggregate_func_5041(99217379) && aggregate_func_2959(bVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((bParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate_func_2959(bVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2959(bVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2959(bVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (bParam1 == -230310728 || bParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (bParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
			default:
				break;
	}
}

bool func_1694(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
	}
	if (aggregate_func_2959(bParam0, -854017545) || aggregate_func_2959(bParam0, 1937586541))
	{
		return true;
	}
	return false;
}

int func_1748(int iParam0)
{
	return (Global_1183537->f_66[iParam0 /*20*/])->f_3;
}

void func_1760(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	struct<27> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 40, &fParam8);
}

void func_1762(var uParam0, float fParam1)
{
	*uParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 18, 41, fParam1);
}

void func_1786(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (aggregate_func_2836(&uParam1, &iVar0, &bVar1, bParam16))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (aggregate_func_2840(&Var3, bVar2, iVar0, bVar1))
			{
				aggregate_func_2415(iParam0, Var3.f_4, bParam15);
			}
			bVar2++;
		}
	}
	aggregate_func_2837(iVar0);
}

int func_1794()
{
	return aggregate_func_7495() | 4;
}

bool func_1858(int iParam0, bool bParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_REVIVE_TARGET(Global_35, iParam0, bParam1);
	aggregate_func_1304(bParam1, 1, 0, 562618531);
	return true;
}

void func_1874(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_2226(iParam0);
	iVar1 = iParam0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (!aggregate_func_4246(&(Param1.f_10[iVar1])))
	{
		Param1.f_10[iVar1] = aggregate_func_2975(sVar0, -1, 0, 0, 0, 1);
	}
}

void func_1875(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	*uParam0 = aggregate_func_1523(sParam2, iParam1, Global_35, 2, 0, 1, 0, iParam3, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
}

bool func_1877(var uParam0, int iParam1, char* sParam2)
{
	if (!MISC::IS_BIT_SET(uParam0->f_28, 0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_29, iParam1))
		{
			MISC::_0x4647842FE8F31C1E(Global_35, sParam2);
			MISC::SET_BIT(&(uParam0->f_28), 0);
			MISC::CLEAR_BIT(&(uParam0->f_29), iParam1);
		}
	}
	return MISC::IS_BIT_SET(uParam0->f_28, 0);
}

void func_1878(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5[30];
	float fVar36;
	float fVar37;
	int iVar38;

	iVar0 = joaat("INPUT_SCRIPT_RUP");
	iVar1 = MISC::GET_GAME_TIMER();
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 30)
	{
		if (&uParam0->f_46.f_2[iVar3] != 0)
		{
			if (!bVar4)
			{
				if (&uParam0->f_46.f_2[iVar3] < (iVar1 - uParam0->f_46.f_34))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				uParam0->f_46.f_2[iVar3] = 0;
			}
			else
			{
				bVar2++;
			}
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		if (&uParam0->f_46.f_2[0] != 0)
		{
			iVar3 = 1;
			while (iVar3 <= 29)
			{
				if (&uParam0->f_46.f_2[(iVar3 - 1)] != 0)
				{
					uVar5[iVar3] = &uParam0->f_46.f_2[(iVar3 - 1)];
				}
			else
			{
				}
				else
				{
					iVar3++;
				}
			}
			func_589(&uVar5, &(uParam0->f_46.f_2));
		}
		uParam0->f_46.f_2[0] = MISC::GET_GAME_TIMER();
		bVar2 = aggregate_func_5207(bVar2 + 1, 0, 30);
	}
	uParam0->f_46 = aggregate_func_4333((aggregate_func_5608((BUILTIN::TO_FLOAT(bVar2) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36)), 0f) / ((BUILTIN::TO_FLOAT(uParam0->f_46.f_33) - func_2228(uParam0)) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36))), 0f, 2f);
	uParam0->f_46.f_1 = aggregate_func_4928(uParam0->f_46.f_1, uParam0->f_46, (MISC::GET_FRAME_TIME() * uParam0->f_46.f_35));
	uParam0->f_26 = aggregate_func_4333(uParam0->f_46.f_1, 0f, 2f);
	fVar36 = aggregate_func_5608((uParam0->f_26 - 1f), 0f);
	fVar37 = (uParam0->f_26 / 2f);
	func_2229(&(uParam0->f_46.f_37), fVar37);
	MISC::_0x3A87FDA8F1B6CDFB(Global_35, "AnimRate", (1f + fVar36));
	iVar38 = MISC::ABSI(BUILTIN::ROUND(((fVar36 * 100f) / 2f)));
	PAD::SET_PAD_SHAKE(2, 10, (40 + iVar38));
}

void func_1879(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5[30];
	float fVar36;
	float fVar37;
	int iVar38;

	iVar0 = joaat("INPUT_SCRIPT_RUP");
	iVar1 = MISC::GET_GAME_TIMER();
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 30)
	{
		if (&uParam0->f_46.f_2[iVar3] != 0)
		{
			if (!bVar4)
			{
				if (&uParam0->f_46.f_2[iVar3] < (iVar1 - uParam0->f_46.f_34))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				uParam0->f_46.f_2[iVar3] = 0;
			}
			else
			{
				bVar2++;
			}
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		if (&uParam0->f_46.f_2[0] != 0)
		{
			iVar3 = 1;
			while (iVar3 <= 29)
			{
				if (&uParam0->f_46.f_2[(iVar3 - 1)] != 0)
				{
					uVar5[iVar3] = &uParam0->f_46.f_2[(iVar3 - 1)];
				}
			else
			{
				}
				else
				{
					iVar3++;
				}
			}
			func_589(&uVar5, &(uParam0->f_46.f_2));
		}
		uParam0->f_46.f_2[0] = MISC::GET_GAME_TIMER();
		bVar2 = aggregate_func_5207(bVar2 + 1, 0, 30);
	}
	uParam0->f_46 = aggregate_func_4333((aggregate_func_5608((BUILTIN::TO_FLOAT(bVar2) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36)), 0f) / ((BUILTIN::TO_FLOAT(uParam0->f_46.f_33) - func_2228(uParam0)) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36))), 0f, 2f);
	uParam0->f_46.f_1 = aggregate_func_4928(uParam0->f_46.f_1, uParam0->f_46, (MISC::GET_FRAME_TIME() * uParam0->f_46.f_35));
	uParam0->f_26 = aggregate_func_4333(uParam0->f_46.f_1, 0f, 2f);
	fVar36 = aggregate_func_5608((uParam0->f_26 - 1f), 0f);
	fVar37 = (uParam0->f_26 / 2f);
	func_2229(&(uParam0->f_46.f_37), fVar37);
	MISC::_0x3A87FDA8F1B6CDFB(Global_35, "AnimRate", (1f + fVar36));
	iVar38 = MISC::ABSI(BUILTIN::ROUND(((fVar36 * 100f) / 2f)));
	PAD::SET_PAD_SHAKE(2, 10, (40 + iVar38));
}

void func_1880(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	var uVar5[30];
	float fVar36;
	float fVar37;
	int iVar38;

	iVar0 = joaat("INPUT_SCRIPT_RUP");
	iVar1 = MISC::GET_GAME_TIMER();
	bVar2 = false;
	iVar3 = 0;
	bVar4 = false;
	iVar3 = 0;
	while (iVar3 < 30)
	{
		if (&uParam0->f_46.f_2[iVar3] != 0)
		{
			if (!bVar4)
			{
				if (&uParam0->f_46.f_2[iVar3] < (iVar1 - uParam0->f_46.f_34))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				uParam0->f_46.f_2[iVar3] = 0;
			}
			else
			{
				bVar2++;
			}
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		if (&uParam0->f_46.f_2[0] != 0)
		{
			iVar3 = 1;
			while (iVar3 <= 29)
			{
				if (&uParam0->f_46.f_2[(iVar3 - 1)] != 0)
				{
					uVar5[iVar3] = &uParam0->f_46.f_2[(iVar3 - 1)];
				}
			else
			{
				}
				else
				{
					iVar3++;
				}
			}
			func_589(&uVar5, &(uParam0->f_46.f_2));
		}
		uParam0->f_46.f_2[0] = MISC::GET_GAME_TIMER();
		bVar2 = aggregate_func_5207(bVar2 + 1, 0, 30);
	}
	uParam0->f_46 = aggregate_func_4333((aggregate_func_5608((BUILTIN::TO_FLOAT(bVar2) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36)), 0f) / ((BUILTIN::TO_FLOAT(uParam0->f_46.f_33) - func_2228(uParam0)) - BUILTIN::TO_FLOAT(uParam0->f_46.f_36))), 0f, 2f);
	uParam0->f_46.f_1 = aggregate_func_4928(uParam0->f_46.f_1, uParam0->f_46, (MISC::GET_FRAME_TIME() * uParam0->f_46.f_35));
	uParam0->f_26 = aggregate_func_4333(uParam0->f_46.f_1, 0f, 2f);
	fVar36 = aggregate_func_5608(((uParam0->f_26 * 2f) - 1f), 0f);
	fVar37 = (uParam0->f_26 / 2f);
	func_2229(&(uParam0->f_46.f_37), fVar37);
	MISC::_0x3A87FDA8F1B6CDFB(Global_35, "AnimRate", (1f + fVar36));
	iVar38 = MISC::ABSI(BUILTIN::ROUND(((fVar36 * 100f) / 2f)));
	PAD::SET_PAD_SHAKE(2, 10, (40 + iVar38));
}

bool func_1886(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1938569->f_28[iVar1]), iVar2);
}

bool func_1887(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1938569->f_37[iVar1]), iVar2);
}

bool func_1888(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!INTERIOR::IS_INTERIOR_READY(iParam0))
		{
			return false;
		}
	}
	if (iParam1 || Global_1938569->f_288)
	{
		return true;
	}
	return ((INTERIOR::_0xBC8A281FF125C655() != iParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iParam0) || CAM::IS_SCREEN_FADED_OUT());
}

void func_1889(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1938569->f_37[iVar1], iVar2);
}

void func_1890(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1938569->f_37[iVar1], iVar2);
}

int func_1902(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		case 57:
			return 56;
		case 55:
			return 54;
		case 37:
			return 36;
		case 106:
			return 105;
		case 80:
			return 79;
		case 95:
			return 94;
		default:
			break;
	}
	return -1;
}

int func_1911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
	}
	return -1;
}

void func_1942(int iParam0, int iParam1)
{
	Global_1951131->f_3109.f_32.f_6 = (Global_1951131->f_3109.f_32.f_6 || iParam0);
}

void func_1943(int iParam0, int iParam1)
{
	Global_1951131->f_3109.f_32.f_6 = (Global_1951131->f_3109.f_32.f_6 - (Global_1951131->f_3109.f_32.f_6 && iParam0));
}

int func_1945(var uParam0, bool bParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar2 = func_1521(iVar0, 1);
		if (&(Global_1951131->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING"))
		{
		}
		else if (!aggregate_func_4753(iVar0, iParam3))
		{
		}
		else if (bParam1 && &uParam0->f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
		{
		}
		else if (&uParam0->f_1[iVar0 /*3*/] == &uParam2->f_1[iVar0 /*3*/])
		{
		}
		else if (aggregate_func_4829(iVar0, 14))
		{
		}
		else if (aggregate_func_4250(uParam2->f_1[iVar0 /*3*/], 2) && &uParam0->f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
		{
		}
		else
		{
			switch (bVar2)
			{
				case 1600962399:
				case 1742327865:
					Jump @247; //curOff = 196
					bVar1 = &uParam0->f_1[iVar0 /*3*/];
					if (aggregate_func_5196(bVar1))
					{
					}
					else if (iParam4 && func_2253(iVar0))
					{
					}
					else
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
		}

int func_1956(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4383(iParam0))
	{
		return -1;
	}
	iVar0 = aggregate_func_4385(iParam0, 1);
	return &(Global_1138889->f_30603.f_847[iVar0 /*12*/]);
}

void func_1970(int iParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar4;
	struct<11> Var5;
	bool bVar19;
	struct<4> Var20;

	Var0 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, aggregate_func_1967(1), 1034665895, 1) };
	if (!bParam1)
	{
		bVar4 = aggregate_func_4299(Var0, (Global_1951131->f_81[iParam0 /*12*/])->f_9, 0, -1);
		if (aggregate_func_2823(bVar4, 0))
		{
			aggregate_func_1176(bVar4, 0, 0, 0);
		}
		return;
	}
	Var5.f_9 = -1591664384;
	bVar19 = &Global_1951131->f_1538.f_1[iParam0 /*3*/];
	Var20 = { aggregate_func_2828(bVar19, Var0, (Global_1951131->f_81[iParam0 /*12*/])->f_9, 0) };
	if (!aggregate_func_4272(Var20, &Var5, 0, 0, -1))
	{
		return;
	}
	if (Var5.f_10)
	{
		aggregate_func_1176(bVar19, (Global_1951131->f_1538.f_1[iParam0 /*3*/])->f_1, 0, 1);
		return;
	}
	aggregate_func_1176(bVar19, (Global_1951131->f_1538.f_1[iParam0 /*3*/])->f_1, 0, 1);
}

int func_1975(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_1 == 0)
	{
		return 3;
	}
	if (!aggregate_func_5069(uParam1, 2))
	{
		iVar1 = PED::_GET_METAPED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, &(uParam1->f_1.f_1[iVar0 /*3*/]), 0, 1, 0);
				(uParam1->f_135[uParam1->f_134 /*2*/])->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		aggregate_func_4241(uParam1, 2);
	}
	return func_1540(iParam0, uParam1);
}

int func_1983(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate_func_4783(0);
	aggregate_func_4785(&(Global_1951131->f_1040), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951131->f_1040));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1951131->f_1040)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1951131->f_1040), 2049745650))
	{
		return -1;
	}
	return aggregate_func_4784(iVar0);
}

void func_2029(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	int iVar0;

	bParam6 = aggregate_func_5207(bParam6, 0, 100);
	aggregate_func_2629(Param1, iParam5, bParam6);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (aggregate_func_7834(iParam5, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, bParam6);
	}
}

void func_2143(var uParam0, float fParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 21, &fParam1);
}

char* func_2226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SKN_HLP_MSH_0";
		case 1:
			return "SKN_HLP_DR_0";
		case 2:
			return "SKN_HLP_DR_1";
		default:
			break;
	}
	return "";
}

float func_2228(var uParam0)
{
	float fVar0;
	float fVar1;

	uParam0->f_30 = 0f;
	switch (&uParam0->f_2[aggregate_func_4249(uParam0)])
	{
		case 0:
		case 1:
		case 2:
		case default:
	}
	fVar0 = (aggregate_func_8921() * (IntToFloat(uParam0->f_46.f_33) * 0.55f));
	fVar1 = (aggregate_func_8921() * (IntToFloat(uParam0->f_46.f_33) * 0.2f));
	uParam0->f_30 = (fVar0 + fVar1);
	return uParam0->f_30;
}

void func_2229(var uParam0, float fParam1)
{
	func_2433(*uParam0, aggregate_func_4333(fParam1, 0f, 1f), 1);
}

int func_2253(int iParam0)
{
	bool bVar0;

	bVar0 = func_1521(iParam0, 1);
	switch (bVar0)
	{
		case 1108822547:
			return 1;
		case 1788623170:
			return 1;
		case -1130865351:
			return 1;
		case 1145151482:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_2285(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(&(uParam0->f_135[iVar0 /*2*/])))
		{
			PED::_0x13E7320C762F0477(&(uParam0->f_135[iVar0 /*2*/]));
		}
		(uParam0->f_135[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1.f_1[iVar0 /*3*/]) = { vVar1 };
		iVar0++;
	}
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

bool func_2348(int iParam0)
{
	if (!aggregate_func_5409(iParam0))
	{
		return false;
	}
	return (Global_1131373->f_11.f_1556[aggregate_func_5410(iParam0, 1) /*46*/])->f_7;
}

void func_2433(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !aggregate_func_2875(iParam0))
	{
		return;
	}
}

int func_2441(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = aggregate_func_5104();
	}
	return (Global_17173.f_54.f_644.f_32[iParam0 /*120*/])->f_1;
}

int func_2477(bool bParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;

	Var0.f_9 = -1591664384;
	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	if (!aggregate_func_1973(bParam0, &uVar22, &Var0, iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (aggregate_func_4291(bParam0, &Var0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_2488(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	int iVar15;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	Var0 = { aggregate_func_304(bParam0, 0, 0) };
	Var0.f_4 = uParam2;
	Var5 = { aggregate_func_2828(bParam0, Var0, Var0.f_4, 0) };
	iVar10 = aggregate_func_2827(bParam0);
	iVar15 = aggregate_func_3500(bParam0);
	bVar9 = false;
	while (bVar9 < iVar15)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, bVar9, &iVar11))
		{
			bVar14 = aggregate_func_4299(Var5, iVar11, 0, -1);
			if (aggregate_func_2823(bVar14, 0))
			{
				if (aggregate_func_2959(bVar14, iParam1))
				{
					return true;
				}
			}
		}
		bVar9++;
	}
	return false;
}

int func_2553(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam1 == 1)
	{
		return 0;
	}
	if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!aggregate_func_8030())
	{
		aggregate_func_2731(iVar0);
		return 0;
	}
	if (aggregate_func_4103(iParam0))
	{
		return 0;
	}
	if (!aggregate_func_1470(iParam0))
	{
		return 0;
	}
	if (iParam1 == 2)
	{
		aggregate_func_3537("NG_FULL_S");
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		aggregate_func_3537("NG_CANT_INVITE");
		return 0;
	}
	if (!aggregate_func_9315())
	{
		aggregate_func_3537("NG_POSSE_INVITE_LIMIT");
		return 0;
	}
	if (_NAMESPACE26::_0x6102830F764B3DE1(iParam0))
	{
		aggregate_func_1962(aggregate_func_4257(-1225075647, 1047079933), 1);
		sVar1 = MISC::_CREATE_VAR_STRING(10, "NG_INVITE_SENT_POSSE", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iParam0), aggregate_func_752(iParam0, 1, -1, 0)));
		aggregate_func_3002(sVar1, -2, 0, 0, 0, 1);
		aggregate_func_4104(iParam0);
		return 1;
	}
	aggregate_func_3537("NG_CANT_INVITE");
	return 0;
}

