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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_121 = 1;
	Var0.f_101 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_118 = 1;
		func_1(&Var0, Global_1913102);
	}
	if (aggregate_func_599())
	{
		TASK::_0xED27560703F37258(Global_35);
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (MISC::GET_GAME_TIMER() >= &Global_1912967 && MISC::GET_GAME_TIMER() >= Global_17168)
	{
		Var0.f_93.f_4 = TASK::_0xDF7993356F52359A(Global_35, 0);
		Var0.f_116 = 1;
	}
	Global_1912967 = 0;
	Global_17170 = 0;
	Global_17171 = 0;
	if ((((MISC::GET_GAME_TIMER() < Global_17151 || Var0.f_116) || (aggregate_func_4251() == 0 && aggregate_func_2900(&Global_1912966, 1224357681) == -1460119729)) || aggregate_func_2852(&Global_1912966, 566155764)) || (aggregate_func_2852(&Global_1912966, -1472964441) && aggregate_func_7892(&Global_1912966)))
	{
		Global_17170 = 1;
		Global_17171 = 1;
	}
	if (Global_1939221->f_10477 == 0 || MISC::GET_GAME_TIMER() <= Global_1939057->f_70.f_2 + 3000)
	{
		Global_17170 = 1;
	}
	while (func_7(&Var0, Global_1913102))
	{
		if (aggregate_func_2852(Global_1913102[0 /*11*/], 566155764) || aggregate_func_2852(&Global_1912966, 566155764))
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		}
		Var0.f_104 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (((ANIMSCENE::_0x25557E324489393C(Var0.f_108) && ANIMSCENE::_0x477122B8D05E7968(Var0.f_108, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_108, 0)) && CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_35, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::_IS_APP_RUNNING(-605293197))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_116)
		{
			func_8(&Var0, Global_1913102);
		}
		else
		{
			func_9(&Var0, Global_1913102);
		}
		func_10(&Var0, Global_1913102);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, Global_1913102);
}

void func_1(var uParam0, var uParam1)
{
	if (aggregate_func_5062() && !Global_1939221->f_8)
	{
		if (!SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-605293197);
	}
	if (uParam0->f_115)
	{
		aggregate_func_4335(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		aggregate_func_2837(uParam0->f_1.f_1);
	}
	func_14(uParam0, uParam1);
	func_15(uParam0);
	aggregate_func_865(uParam0);
	if (uParam0->f_118)
	{
		func_17(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!((*uParam1)[0 /*11*/])->f_1)
		{
			aggregate_func_8137(0);
		}
		else
		{
			((*Global_1913136)[0 /*6*/])->f_1 = 4;
		}
		aggregate_func_8137(2);
		aggregate_func_8137(1);
		func_19(uParam1);
	}
	else
	{
		func_20(uParam0, uParam1);
	}
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_7(var uParam0, var uParam1)
{
	if (aggregate_func_4251() == 0 && aggregate_func_523(0, 0))
	{
		return false;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	if (func_25(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_17151 || !func_26(&Global_1912966)))
	{
		uParam0->f_118 = 1;
		return false;
	}
	return true;
}

int func_8(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_27(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				func_28(uParam0, (*uParam1)[0 /*11*/]);
				aggregate_func_4335(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				aggregate_func_4252(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_33(uParam1[0 /*11*/]);
				func_34(uParam0, uParam1, 1);
				aggregate_func_4252(uParam0, 6);
			}
			break;
		case 6:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			aggregate_func_4335(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				if (aggregate_func_2852(uParam1[0 /*11*/], -674618190))
				{
					aggregate_func_4252(uParam0, 7);
				}
				else
				{
					aggregate_func_4252(uParam0, 8);
				}
			}
			else if (aggregate_func_2927(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			func_15(uParam0);
			break;
		case 8:
			if (!aggregate_func_2850(uParam1[0 /*11*/], 1) && !uParam0->f_123)
			{
				aggregate_func_221(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			aggregate_func_4252(uParam0, 9);
			break;
		case 7:
			uParam0->f_93.f_3 = TASK::_0xA92450B5AE687AAF(uParam0->f_93.f_4);
			uParam0->f_93 = { TASK::_0xA8452DD321607029(uParam0->f_93.f_4, 1) };
			TASK::_0x4161648394262FDF(uParam0->f_93, 1f);
			if (!TASK::_0x841475AC96E794D1(uParam0->f_93.f_4))
			{
				uParam0->f_93.f_4 = TASK::_0xF533D68FF970D190(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, 0);
			}
			uParam0->f_93.f_5 = TASK::_0x295514F198EFD0CA(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_93.f_5);
			OBJECT::_0xE124889AE0521FCF(uParam0->f_93.f_6, ((*uParam1)[0 /*11*/])->f_5, 0, 0);
			aggregate_func_4252(uParam0, 9);
			break;
	}
	return 0;
}

int func_9(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_27(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				(*uParam1)[0 /*11*/] = func_43(uParam0);
				func_44(uParam0, uParam1[0 /*11*/]);
				aggregate_func_4335(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				func_28(uParam0, (*uParam1)[0 /*11*/]);
				func_45(uParam0, uParam1);
				if (((*Global_1913136)[0 /*6*/])->f_1 == 2)
				{
					func_46((*uParam1)[0 /*11*/], 0);
					func_47(uParam0, uParam1);
				}
				aggregate_func_4252(uParam0, 2);
			}
			break;
		case 2:
			if (func_46((*uParam1)[0 /*11*/], 0) && aggregate_func_4666(uParam0, uParam1))
			{
				aggregate_func_4252(uParam0, 3);
			}
			break;
		case 3:
			if (func_47(uParam0, uParam1))
			{
				aggregate_func_4252(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_34(uParam0, uParam1, 1);
				func_33(uParam1[0 /*11*/]);
				aggregate_func_4252(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			aggregate_func_4335(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				aggregate_func_4252(uParam0, 9);
			}
			else if (aggregate_func_2875(&(Global_17158[2])) && aggregate_func_455(&(Global_17158[2]), 1))
			{
				aggregate_func_4252(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1939221->f_8 = 1;
				Global_17169 = MISC::GET_GAME_TIMER() + 10000;
				aggregate_func_4895(1);
			}
			else if (aggregate_func_2927(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			else if (!Global_17170 && func_52(uParam0))
			{
				uParam0->f_117 = 1;
				aggregate_func_4252(uParam0, 9);
			}
			func_15(uParam0);
			break;
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	int iVar0;

	Global_1939057->f_70.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_17157 == 1)
	{
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (iVar0 == func_53(&Global_1912966))
		{
			Global_17157 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

void func_14(var uParam0, var uParam1)
{
	func_54(uParam1[0 /*11*/]);
}

void func_15(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_17(var uParam0, var uParam1)
{
	if (uParam1[0 /*11*/] != 0)
	{
		if (func_53(uParam1[0 /*11*/]) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_35, func_53(uParam1[0 /*11*/]), 1048576000 /* Float: 0.25f */);
		}
		if (((uParam0->f_116 && func_55(uParam1[0 /*11*/])) && !aggregate_func_2850(uParam1[0 /*11*/], 1)) && !uParam0->f_123)
		{
			aggregate_func_221(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_19(var uParam0)
{
	if (!Global_1939221->f_8)
	{
		if (((aggregate_func_2852(&Global_1912966, -1472964441) || aggregate_func_2852(&Global_1912966, 1841149704)) || aggregate_func_2852(&Global_1912966, 566155764)) || aggregate_func_2852(&Global_1912966, -228153877))
		{
			Global_1939057->f_70.f_5 = 1;
			Global_1939057->f_70.f_1 = &Global_1912966;
		}
	}
	Global_1912966 = 0;
	Global_17168 = 0;
	Global_17157 = 2;
	((*Global_1913102)[0 /*11*/])->f_3 = 0;
	func_56(uParam0);
}

void func_20(var uParam0, var uParam1)
{
	if (uParam0->f_115)
	{
		aggregate_func_4335(uParam0, uParam1);
	}
	if (uParam0->f_110)
	{
		func_57(uParam1);
	}
	else
	{
		func_58(uParam1);
	}
	if (uParam0->f_119)
	{
		aggregate_func_2837(uParam0->f_1.f_1);
	}
	func_59(uParam1);
	((*uParam1)[0 /*11*/])->f_3 = 0;
	Global_1912966 = uParam1[0 /*11*/];
	func_60(uParam1[0 /*11*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_17168 = MISC::GET_GAME_TIMER() + 3000;
}

bool func_25(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return true;
	}
	if (!aggregate_func_4505(16))
	{
		return true;
	}
	if ((!uParam0->f_118 && *uParam0 > 4) && (func_63(uParam1[0 /*11*/]) || func_64(uParam1[0 /*11*/])))
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0)
{
	switch (iParam0)
	{
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case -31140163: /* GXTEntry: "Panoramic Map" */
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
			return true;
	}
	return false;
}

void func_27(var uParam0, var uParam1)
{
	if (!uParam0->f_122)
	{
		if (func_32(uParam1[0 /*11*/], uParam0->f_104))
		{
			func_34(uParam0, uParam1, 0);
			uParam0->f_122 = 1;
		}
	}
}

void func_28(var uParam0, var uParam1)
{
	struct<5> Var0;

	*uParam1 = func_43(uParam0);
	uParam1->f_6 = aggregate_func_2900(*uParam1, -949239683);
	uParam1->f_1 = func_65(uParam1->f_6);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_7.f_2 = Var0.f_4;
		}
	}
	func_44(uParam0, *uParam1);
}

void func_30(var uParam0, bool bParam1)
{
	if (aggregate_func_2852(bParam1, -98816307))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (aggregate_func_2852(bParam1, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_120)
	{
		if (aggregate_func_2852(bParam1, -98816307))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_66(uParam0);
}

bool func_32(bool bParam0, int iParam1)
{
	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == 1607869040)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == -59421711)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == -1140851507)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_33(bool bParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<12> Var11;

	func_67(bParam0);
	aggregate_func_3940(bParam0, &(Global_17173.f_2954), 1);
	func_69(bParam0);
	if (bParam0 == 684416450)
	{
		iVar0 = aggregate_func_2035(bParam0, 1);
		if (aggregate_func_4246(iVar0))
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var11.f_9 = 1;
			Var11.f_11 = -1591664384;
			if (aggregate_func_3028(&Var1, iVar0, &Var11, 1, -489628648, -1, 0))
			{
			}
		}
	}
}

int func_34(var uParam0, var uParam1, bool bParam2)
{
	if (aggregate_func_2852(uParam1[0 /*11*/], 566155764))
	{
		return 1;
	}
	if (aggregate_func_2852(uParam1[0 /*11*/], -1472964441))
	{
		if (aggregate_func_7892(uParam1[0 /*11*/]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17170 && bParam2)
		{
			if (!aggregate_func_2823(uParam1[2 /*11*/], 0))
			{
				Global_17163[1] = 0;
				func_73(Global_17158[1], 0);
			}
			else
			{
				Global_17163[1] = 1;
				func_73(Global_17158[1], 1);
			}
			if (!aggregate_func_2823(uParam1[1 /*11*/], 0))
			{
				Global_17163[0] = 0;
				func_73(Global_17158[0], 0);
			}
			else
			{
				Global_17163[0] = 1;
				func_73(Global_17158[0], 1);
			}
		}
		Global_17163[3] = func_74(uParam0, (*uParam1)[0 /*11*/]);
		func_73(Global_17158[3], &(Global_17163[3]));
		if (uParam1[0 /*11*/] == -1084135070)
		{
			Global_17172 = 1;
		}
		Global_17157 = 1;
	}
	if (uParam0->f_116)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_35(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_32(*uParam1, uParam0->f_104) && !func_75(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (aggregate_func_4637(&(Global_17158[0]), 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (aggregate_func_4637(&(Global_17158[1]), 1))
			{
				uParam0->f_114 = 0;
			}
			else
			{
				uParam0->f_114 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_77(Global_17158[iVar0], 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_78(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_77(Global_17158[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_36(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_79(uParam1[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		aggregate_func_4239(uParam1[0 /*11*/]);
	}
}

bool func_38(bool bParam0, int iParam1)
{
	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == -34349608)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 313665285 || iParam1 == 474174677)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1668318109 || iParam1 == -465598822)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_40(var uParam0, bool bParam1)
{
	if (aggregate_func_2852(bParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_82(uParam0, bParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_82(uParam0, bParam1);
	}
}

bool func_43(var uParam0)
{
	bool bVar0;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			bVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			bVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!aggregate_func_2823(bVar0, 0))
			{
			}
		}
		Global_1912966 = bVar0;
	}
	else
	{
		bVar0 = &Global_1912966;
	}
	return bVar0;
}

void func_44(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(uParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(uParam1, iVar0);
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_2 = &uParam0->f_5.f_2[iVar0 /*5*/];
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(uParam1, (uParam0->f_5.f_2[iVar0 /*5*/])->f_2);
		iVar0++;
	}
}

void func_45(var uParam0, var uParam1)
{
	func_127(uParam0, uParam1[0 /*11*/]);
	func_128(uParam0, uParam1);
	if (uParam1[1 /*11*/] != 0)
	{
		aggregate_func_8141(1, uParam1[1 /*11*/]);
	}
	else
	{
		aggregate_func_8137(1);
	}
	func_130(uParam0, uParam1);
	if (uParam1[2 /*11*/] != 0)
	{
		aggregate_func_8141(2, uParam1[2 /*11*/]);
	}
	else
	{
		aggregate_func_8137(2);
	}
	func_131(uParam1);
	func_132(uParam1);
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
		{
			uParam0->f_7.f_1 = HUD::_0xB6857100F8FD433C(uParam0->f_7.f_3, -2);
		}
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = HUD::_0xBE1067CD1C9570F6(uParam0->f_7.f_1);
			if (iParam1 == 0)
			{
				if (!func_133(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (aggregate_func_924(*uParam0, &iVar0, joaat("inventory"), -401018458, 0, 0))
	{
		if (TXD::_0xBA0163B277C2D2D0(iVar0))
		{
			TXD::_0xDB1BD07FB464584D(iVar0, 0);
			uParam0->f_5 = iVar0;
		}
	}
	return 1;
}

bool func_47(var uParam0, var uParam1)
{
	if (func_135(uParam0, (*uParam1)[0 /*11*/]))
	{
		aggregate_func_7711(uParam0, uParam1);
		return true;
	}
	return false;
}

bool func_52(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_110 = 0;
	if (aggregate_func_2927(&(Global_17158[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_77(Global_17158[1], !uParam0->f_125);
		func_77(Global_17158[0], 1);
	}
	if (aggregate_func_2927(&(Global_17158[0]), 1))
	{
		iVar0 = 1;
		func_77(Global_17158[0], !uParam0->f_124);
		func_77(Global_17158[1], 1);
	}
	return iVar0;
}

int func_53(bool bParam0)
{
	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case -1420737577:
			return -34349608;
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return 313665285;
		case -1273369295:
			return 1434623772;
		case 82200319:
			return 1668318109;
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 684416450: /* GXTEntry: "Letter from Horley" */
			aggregate_func_6593(-1419640182, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			aggregate_func_6593(-2028134866, 0);
			aggregate_func_4322(859, 0);
			break;
		case 1397875340:
			aggregate_func_6593(518311877, 0);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case -31140163: /* GXTEntry: "Panoramic Map" */
			return 0;
	}
	return 1;
}

void func_56(var uParam0)
{
	(*uParam0)[0 /*11*/] = 0;
	((*uParam0)[0 /*11*/])->f_1 = 0;
	((*uParam0)[0 /*11*/])->f_3 = 0;
	((*uParam0)[0 /*11*/])->f_5 = 0;
	((*uParam0)[0 /*11*/])->f_6 = 0;
	((*uParam0)[0 /*11*/])->f_7 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_3 = 0;
	func_59(uParam0);
}

void func_57(var uParam0)
{
	(*uParam0)[0 /*11*/] = uParam0[2 /*11*/];
	((*uParam0)[0 /*11*/])->f_1 = ((*uParam0)[2 /*11*/])->f_1;
	((*uParam0)[0 /*11*/])->f_5 = ((*uParam0)[2 /*11*/])->f_5;
	((*uParam0)[0 /*11*/])->f_6 = ((*uParam0)[2 /*11*/])->f_6;
	((*uParam0)[0 /*11*/])->f_7 = ((*uParam0)[2 /*11*/])->f_7;
	((*uParam0)[0 /*11*/])->f_7.f_1 = ((*uParam0)[2 /*11*/])->f_7.f_1;
	((*uParam0)[0 /*11*/])->f_7.f_2 = ((*uParam0)[2 /*11*/])->f_7.f_2;
	((*uParam0)[0 /*11*/])->f_7.f_3 = ((*uParam0)[2 /*11*/])->f_7.f_3;
	((*uParam0)[0 /*11*/])->f_3 = 0;
}

void func_58(var uParam0)
{
	(*uParam0)[0 /*11*/] = uParam0[1 /*11*/];
	((*uParam0)[0 /*11*/])->f_1 = ((*uParam0)[1 /*11*/])->f_1;
	((*uParam0)[0 /*11*/])->f_5 = ((*uParam0)[1 /*11*/])->f_5;
	((*uParam0)[0 /*11*/])->f_6 = ((*uParam0)[1 /*11*/])->f_6;
	((*uParam0)[0 /*11*/])->f_7 = ((*uParam0)[1 /*11*/])->f_7;
	((*uParam0)[0 /*11*/])->f_7.f_1 = ((*uParam0)[1 /*11*/])->f_7.f_1;
	((*uParam0)[0 /*11*/])->f_7.f_2 = ((*uParam0)[1 /*11*/])->f_7.f_2;
	((*uParam0)[0 /*11*/])->f_7.f_3 = ((*uParam0)[1 /*11*/])->f_7.f_3;
	((*uParam0)[0 /*11*/])->f_3 = 0;
}

void func_59(var uParam0)
{
	(*uParam0)[2 /*11*/] = 0;
	((*uParam0)[2 /*11*/])->f_1 = 0;
	((*uParam0)[2 /*11*/])->f_3 = 0;
	((*uParam0)[2 /*11*/])->f_5 = 0;
	((*uParam0)[2 /*11*/])->f_6 = 0;
	((*uParam0)[2 /*11*/])->f_7 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_3 = 0;
	(*uParam0)[1 /*11*/] = 0;
	((*uParam0)[1 /*11*/])->f_1 = 0;
	((*uParam0)[1 /*11*/])->f_3 = 0;
	((*uParam0)[1 /*11*/])->f_5 = 0;
	((*uParam0)[1 /*11*/])->f_6 = 0;
	((*uParam0)[1 /*11*/])->f_7 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_3 = 0;
}

int func_60(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_63(bool bParam0)
{
	return (aggregate_func_2852(bParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

bool func_64(bool bParam0)
{
	return ((aggregate_func_2852(bParam0, -1472964441) && aggregate_func_7892(bParam0)) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

bool func_65(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

void func_66(var uParam0)
{
	if (uParam0->f_105 > 0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	}
}

void func_67(bool bParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<12> Var11;
	int iVar28;
	int iVar29;
	int iVar30;
	struct<10> Var31;
	bool bVar41;
	int iVar42;
	bool bVar43;

	if (aggregate_func_4251() == 0)
	{
		if ((aggregate_func_2852(bParam0, 1989861793) || bParam0 == -492264119) || bParam0 == 1397875340)
		{
			iVar0 = aggregate_func_2035(bParam0, 1);
			if (aggregate_func_4246(iVar0))
			{
				Var1 = -1;
				Var1.f_1 = -1;
				Var11.f_9 = 1;
				Var11.f_11 = -1591664384;
				if (aggregate_func_3028(&Var1, iVar0, &Var11, 1, 1946634759, -1, 0))
				{
				}
			}
		}
	}
	else if (aggregate_func_2852(bParam0, 1989861793))
	{
		iVar28 = aggregate_func_2900(bParam0, 1697966752);
		if (iVar28 != 0)
		{
			Var31 = { aggregate_func_4965(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar28, 0) };
			if (aggregate_func_2989(Var31, &iVar29, &iVar30, 0))
			{
				bVar41 = false;
				iVar42 = 0;
				while (iVar42 < iVar30)
				{
					bVar43 = aggregate_func_2076(iVar42, iVar29);
					if (bVar43 != bParam0 && aggregate_func_2823(bVar43, 0))
					{
						if (func_142(bVar43, 0, 0, 1, 0))
						{
							bVar41 = true;
						}
					}
					iVar42++;
				}
				aggregate_func_2990(iVar29);
				if (bVar41)
				{
					aggregate_func_3941(bParam0);
				}
				else
				{
					aggregate_func_4322(336, 0);
				}
			}
		}
	}
}

void func_69(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (aggregate_func_2852(bParam0, 566155764))
	{
		func_154(bParam0);
		iVar0 = aggregate_func_7386(bParam0);
		if (iVar0 != -1)
		{
			vVar1 = { aggregate_func_8740(iVar0) };
			vVar4 = { aggregate_func_8741(iVar0) };
			MAP::_0xE0884C184728C75B(vVar1, vVar4.x);
		}
		UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (aggregate_func_2875(*uParam0))
	{
		aggregate_func_4583(*uParam0, bParam1, 0, 1);
	}
}

bool func_74(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_32(*uParam1, uParam0->f_104))
	{
		bVar0 = !aggregate_func_2852(*uParam1, 1051234725);
	}
	if (func_75(*uParam1, uParam0->f_104))
	{
		bVar0 = aggregate_func_2852(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_75(bool bParam0, int iParam1)
{
	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 1870337093)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1913655128)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_77(var uParam0, bool bParam1)
{
	if (aggregate_func_2875(*uParam0))
	{
		aggregate_func_4583(*uParam0, bParam1, 1, 1);
	}
}

void func_78(var uParam0, var uParam1)
{
	func_77(Global_17158[3], func_74(uParam0, uParam1));
}

bool func_79(bool bParam0, int iParam1)
{
	switch (aggregate_func_2900(bParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == 1222452293)
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == 1125283391)
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_82(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "Generic");
	if (aggregate_func_2852(bParam1, 1104960349))
	{
		func_165(uParam0, bParam1);
	}
	else if (aggregate_func_2852(bParam1, 1989861793))
	{
		if (aggregate_func_2852(bParam1, -885754398))
		{
			func_166(uParam0, bParam1);
		}
		else
		{
			func_167(uParam0, bParam1);
		}
	}
	else if (aggregate_func_2852(bParam1, 1989861793))
	{
		func_167(uParam0, bParam1);
	}
	else if (aggregate_func_2852(bParam1, -772152977))
	{
		func_168(uParam0, bParam1);
	}
	else if (aggregate_func_2852(bParam1, -2081717885))
	{
		func_169(uParam0, bParam1);
	}
	else if (aggregate_func_2900(bParam1, 1224357681) == 1130538400)
	{
		func_170(uParam0, bParam1);
	}
	else if (aggregate_func_2852(bParam1, -1227898937))
	{
	}
	else
	{
		func_171(uParam0, bParam1);
	}
}

bool func_103(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!aggregate_func_2831(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (aggregate_func_2841(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		aggregate_func_4740(aggregate_func_1159(bParam0), aggregate_func_4462(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (aggregate_func_2892(0))
	{
		if (aggregate_func_2941(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return aggregate_func_6959(bParam0, *iParam1, iParam2);
	}
	return false;
}

int func_127(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (aggregate_func_2842("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_119 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!aggregate_func_2840(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1939221->f_10477 == 0)
					{
						if (aggregate_func_7121(&Var2, 0))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_128(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*11*/] = 0;
		return false;
	}
	if (Global_17170)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (aggregate_func_2840(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_240(uParam1[0 /*11*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*11*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*11*/] = 0;
	}
	return bVar15;
}

bool func_130(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_17170)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1939221->f_10477 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (aggregate_func_2840(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_240(uParam1[0 /*11*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*11*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*11*/] = 0;
	}
	return bVar17;
}

void func_131(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (aggregate_func_2823(uParam0[iVar0 /*11*/], 0))
		{
			func_241((*uParam0)[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_132(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (aggregate_func_2823(uParam0[iVar0 /*11*/], 0))
		{
			((*uParam0)[iVar0 /*11*/])->f_6 = aggregate_func_2900(uParam0[iVar0 /*11*/], -949239683);
		}
		iVar0++;
	}
}

bool func_133(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::_0x51DE09A2196BD951(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_135(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_133(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101) && TXD::_0xBE72591D1509FFE4(uParam1->f_5))
		{
			if (!uParam1->f_3)
			{
				OBJECT::_0xE124889AE0521FCF(uParam0->f_101, uParam1->f_5, 0, 0);
			}
			uParam1->f_3 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_142(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !aggregate_func_2074(bParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && aggregate_func_2074(bParam0, Var2, 1))
				{
					if (func_247(bParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_247(bParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if (aggregate_func_4251() != -1)
			{
				aggregate_func_4322(571, 1);
			}
			else
			{
				aggregate_func_4322(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!aggregate_func_1135(0, 0, 1))
		{
			aggregate_func_2895(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

struct<9> func_153()
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;

	iVar9 = aggregate_func_3942();
	iVar10 = iVar9;
	aggregate_func_4495(&iVar10, 0, 0, 0, 1, 0, 0);
	iVar11 = aggregate_func_3943();
	aggregate_func_8742(iVar9, &uVar12, &uVar13, &uVar14);
	aggregate_func_8742(iVar10, &uVar15, &uVar16, &uVar17);
	aggregate_func_8744(&Var0, 36427, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_1), 36610, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_8), 36715, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_3), 36820, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_6), 36925, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_7), 37030, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_4), 37135, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_5), 37240, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	aggregate_func_8744(&(Var0.f_2), 37345, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	return Var0;
}

void func_154(bool bParam0)
{
	struct<6> Var0;
	var uVar6;

	Var0.f_4 = 1;
	Var0.f_5 = bParam0;
	SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::PLAYER_ID());
	func_267(&Var0, uVar6);
}

void func_165(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					aggregate_func_1069(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					aggregate_func_1069(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					aggregate_func_1069(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					aggregate_func_1069(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					aggregate_func_1069(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					aggregate_func_1069(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_166(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			if (func_290(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
				sVar3 = HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0 + 1);
				if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_MH"))
				{
					aggregate_func_1069(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					aggregate_func_1069(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					aggregate_func_1069(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					aggregate_func_1069(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					aggregate_func_1069(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_167(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_168(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					aggregate_func_1069(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					aggregate_func_1069(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = bParam1;
	aggregate_func_1069(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_169(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_170(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					aggregate_func_1069(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					aggregate_func_1069(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					aggregate_func_1069(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					aggregate_func_1069(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					aggregate_func_1069(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					aggregate_func_1069(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					aggregate_func_1069(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_171(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(bParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_291(bParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_291(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_291(bParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_291(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_291(bParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_240(bool bParam0, bool bParam1)
{
	switch (aggregate_func_2900(bParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1939221->f_10477 != 1061777683 || aggregate_func_2900(bParam0, 1224357681) == aggregate_func_2900(bParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_241(var uParam0)
{
	struct<5> Var0;

	if (func_65(uParam0->f_6))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_7.f_2 = Var0.f_4;
		}
	}
}

bool func_247(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (aggregate_func_4251() != -1)
	{
		return false;
	}
	if (aggregate_func_2983(bParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_267(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 33;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 6, 27, &uParam1);
	func_382(*uParam0);
}

bool func_290(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_291(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_394(bParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

void func_382(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
}

char* func_394(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

bool func_413(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!aggregate_func_4246(bVar0))
	{
		return false;
	}
	if (((((((((((((bVar0 == COLLECTION::_0xCC644BC1DD655269(-623226361, 0) || bVar0 == COLLECTION::_0xCC644BC1DD655269(-1452445456, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(332438661, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(1632674359, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(56759509, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(2145533727, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(-1874365462, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(-1658668866, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(90781239, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(1997097980, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(920487791, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(-668555046, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(-839148413, 0)) || bVar0 == COLLECTION::_0xCC644BC1DD655269(10424351, 0))
	{
		return true;
	}
	return false;
}

Vector3 func_421(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case -250719930: /* GXTEntry: "Agate Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1626.256f, -1440.047f, 81.56577f };
					break;
				case 1:
					vVar0 = { 228.4911f, 1905.913f, 205.1248f };
					break;
				case 2:
					vVar0 = { -166.4996f, 347.176f, 96.39246f };
					break;
				case 3:
					vVar0 = { -2048.924f, -485.327f, 148.617f };
					break;
				case 4:
					vVar0 = { 2591.175f, 464.552f, 65.386f };
					break;
				case 5:
					vVar0 = { 449.954f, 2139.728f, 242.163f };
					break;
			}
			break;
		case -1866466055: /* GXTEntry: "Bone Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3090.208f, -3687.019f, -23.07111f };
					break;
				case 1:
					vVar0 = { 331.659f, -751.492f, 41.516f };
					break;
				case 2:
					vVar0 = { 1467.294f, -1835.141f, 52.2977f };
					break;
				case 3:
					vVar0 = { 431.627f, 2181.339f, 245.228f };
					break;
				case 4:
					vVar0 = { -1630.31f, -916.825f, 96.558f };
					break;
				case 5:
					vVar0 = { 2732.805f, 1305.355f, 94.425f };
					break;
			}
			break;
		case 1546533744: /* GXTEntry: "Chipped Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2681.312f, 888.0165f, 88.69837f };
					break;
				case 1:
					vVar0 = { -5077.907f, -3758.28f, -4.03334f };
					break;
				case 2:
					vVar0 = { -2076.948f, -2018.081f, 95.6292f };
					break;
				case 3:
					vVar0 = { 273.126f, 1471.93f, 157.105f };
					break;
				case 4:
					vVar0 = { 1856.797f, 1640.871f, 43.837f };
					break;
				case 5:
					vVar0 = { -834.325f, 1105.575f, 148.744f };
					break;
			}
			break;
		case 1063947084: /* GXTEntry: "Crude Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1797.57f, -820.6117f, 41.44231f };
					break;
				case 1:
					vVar0 = { -1549.497f, -914.4499f, 88.37117f };
					break;
				case 2:
					vVar0 = { 1210.972f, -935.7455f, 61.7126f };
					break;
				case 3:
					vVar0 = { 2910.409f, 1220.405f, 42.791f };
					break;
				case 4:
					vVar0 = { -6010.271f, -3099.12f, -1.952f };
					break;
				case 5:
					vVar0 = { -2487.932f, -2683.609f, 75.215f };
					break;
			}
			break;
		case 1570512815: /* GXTEntry: "Feldspar Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1327.926f, -2570.111f, 72.97827f };
					break;
				case 1:
					vVar0 = { -3738.736f, -2085.723f, -8.071209f };
					break;
				case 2:
					vVar0 = { -2416.179f, -1005.542f, 166.8462f };
					break;
				case 3:
					vVar0 = { -6387.865f, -3671.32f, -23.469f };
					break;
				case 4:
					vVar0 = { 1261.371f, -256.617f, 97.896f };
					break;
				case 5:
					vVar0 = { -2201.921f, -1444.722f, 136.539f };
					break;
			}
			break;
		case -909283963: /* GXTEntry: "Flint Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 324.7118f, 1716.88f, 165.6345f };
					break;
				case 1:
					vVar0 = { -2138.969f, -1773.034f, 141.357f };
					break;
				case 2:
					vVar0 = { 2458.548f, 292.0694f, 69.62054f };
					break;
				case 3:
					vVar0 = { -1520.7f, 738.223f, 124.885f };
					break;
				case 4:
					vVar0 = { -4072.965f, -2612.864f, -5.672f };
					break;
				case 5:
					vVar0 = { 1443.389f, -1949.58f, 51.623f };
					break;
			}
			break;
		case -1604348319: /* GXTEntry: "Obsidian Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1141.345f, 465.1495f, 95.96226f };
					break;
				case 1:
					vVar0 = { -2586.866f, -95.34192f, 167.6172f };
					break;
				case 2:
					vVar0 = { -2905.136f, -254.2839f, 185.6743f };
					break;
				case 3:
					vVar0 = { 765.732f, 639.022f, 124.101f };
					break;
				case 4:
					vVar0 = { 2276.143f, 1061.22f, 77.504f };
					break;
				case 5:
					vVar0 = { -1141.282f, -959.976f, 63.03f };
					break;
			}
			break;
		case -965972353: /* GXTEntry: "Quartz Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2846.721f, 2253.417f, 156.0374f };
					break;
				case 1:
					vVar0 = { -1641.062f, 631.366f, 123.972f };
					break;
				case 2:
					vVar0 = { -5685.067f, -2757.809f, -17.34713f };
					break;
				case 3:
					vVar0 = { -1814.626f, -1612.653f, 104.607f };
					break;
				case 4:
					vVar0 = { 1294.231f, -1555.382f, 66.411f };
					break;
				case 5:
					vVar0 = { -3992.301f, -3472.408f, 52.659f };
					break;
			}
			break;
		case -1850613113: /* GXTEntry: "Raw Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2688.423f, -1502.831f, 150.2751f };
					break;
				case 1:
					vVar0 = { 1090.46f, -30.50565f, 85.73418f };
					break;
				case 2:
					vVar0 = { 491.7462f, -308.6388f, 142.6688f };
					break;
				case 3:
					vVar0 = { 1451.435f, -357.234f, 79.693f };
					break;
				case 4:
					vVar0 = { 964.51f, -1746.746f, 72.566f };
					break;
				case 5:
					vVar0 = { 737.965f, 217.404f, 143.854f };
					break;
			}
			break;
		case 261854063: /* GXTEntry: "Rough Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4721.776f, -3225.844f, 8.061125f };
					break;
				case 1:
					vVar0 = { 116.6806f, 1217.888f, 183.4647f };
					break;
				case 2:
					vVar0 = { -2008.259f, -2782.807f, 69.77032f };
					break;
				case 3:
					vVar0 = { -4801.018f, -2393.364f, 6.379f };
					break;
				case 4:
					vVar0 = { 1985.262f, -556.278f, 40.807f };
					break;
				case 5:
					vVar0 = { 3144.45f, -2651.773f, 10.954f };
					break;
			}
			break;
		case -2023776602: /* GXTEntry: "Slate Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2120.62f, 71.71207f, 254.9753f };
					break;
				case 1:
					vVar0 = { 1201.297f, -2041.166f, 55.00516f };
					break;
				case 2:
					vVar0 = { 1242.734f, 1173.516f, 148.6348f };
					break;
				case 3:
					vVar0 = { 2408.423f, 1764.503f, 88.656f };
					break;
				case 4:
					vVar0 = { -973.079f, 218.101f, 87.932f };
					break;
				case 5:
					vVar0 = { 241.777f, 1591.056f, 178.563f };
					break;
			}
			break;
		case 751981376: /* GXTEntry: "Splintered Arrowhead" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -166.1597f, -164.5237f, 90.37929f };
					break;
				case 1:
					vVar0 = { 2535.888f, 700.0389f, 77.22427f };
					break;
				case 2:
					vVar0 = { 456.302f, 2192.027f, 244.7186f };
					break;
				case 3:
					vVar0 = { -2718.98f, 682.542f, 174.764f };
					break;
				case 4:
					vVar0 = { -462.207f, 1427.085f, 206.364f };
					break;
				case 5:
					vVar0 = { 2211.003f, -675.961f, 40.775f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_426(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case -163158070: /* GXTEntry: "Ace of Cups Tarot Card" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5411.058f, -2922.478f, 1.633f };
					break;
				case 1:
					vVar0 = { 2988.672f, 2185.661f, 166.535f };
					break;
				case 2:
					vVar0 = { -1333.433f, 2397.419f, 307.076f };
					break;
				case 3:
					vVar0 = { -6010.498f, -3144.973f, 5.219f };
					break;
				case 4:
					vVar0 = { -823.4883f, -1297.783f, 53.73291f };
					break;
				case 5:
					vVar0 = { 2401.79f, -1550.644f, 42.82064f };
					break;
			}
			break;
		case 1796104920: /* GXTEntry: "King of Cups Tarot Card" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2139.922f, -1284.657f, 49.816f };
					break;
				case 1:
					vVar0 = { 828.2776f, 1923.064f, 259.505f };
					break;
				case 2:
					vVar0 = { 1434.244f, -1363.573f, 84.95869f };
					break;
				case 3:
					vVar0 = { 1319.78f, -2287.278f, 50.32104f };
					break;
				case 4:
					vVar0 = { -626.771f, -74.001f, 83.297f };
					break;
				case 5:
					vVar0 = { 2991.004f, 2191.702f, 166.5247f };
					break;
			}
			break;
		case -2083620375: /* GXTEntry: "Queen of Cups Tarot Card" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1825.769f, -1202.711f, 41.96914f };
					break;
				case 1:
					vVar0 = { -5982.722f, -3165.576f, -26.807f };
					break;
				case 2:
					vVar0 = { 1467.309f, 810.6748f, 100.721f };
					break;
				case 3:
					vVar0 = { 1373.336f, 357.3541f, 87.525f };
					break;
				case 4:
					vVar0 = { 2827.736f, 279.6334f, 50.85627f };
					break;
				case 5:
					vVar0 = { 1780.932f, -472.4116f, 45.54533f };
					break;
			}
			break;
		case 125940045: /* GXTEntry: "Knight of Cups Tarot Card" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2139.922f, -1284.657f, 49.816f };
					break;
				case 1:
					vVar0 = { 2569.923f, -772.3018f, 42.324f };
					break;
				case 2:
					vVar0 = { -1384.26f, 1154.303f, 224.835f };
					Jump @1065; //curOff = 996
					vVar0 = { 2852.355f, -1148.669f, 46.25088f };
					Jump @1065; //curOff = 1018
					vVar0 = { -5555.605f, -2400.442f, -8.176f };
					Jump @1065; //curOff = 1040
					vVar0 = { -401.7801f, 1734.134f, 218.6434f };
					Jump @10376; //curOff = 1065
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2490.364f, -437.7844f, 41.405f };
							break;
						case 1:
							vVar0 = { -1992.476f, -1605.796f, 117.8166f };
							break;
						case 2:
							vVar0 = { 1313.643f, -2280.667f, 50.472f };
							break;
						case 3:
							vVar0 = { 775.4293f, 844.6693f, 118.956f };
							break;
						case 4:
							vVar0 = { 1620.895f, -360.2322f, 75.36804f };
							break;
						case 5:
							vVar0 = { 2239.058f, -147.8358f, 46.73964f };
							break;
					}
					Jump @10376; //curOff = 1244
					switch (iParam0)
					{
						case 0:
							vVar0 = { -3563.438f, -3025.844f, 11.424f };
							break;
						case 1:
							vVar0 = { 766.2133f, 880.913f, 120.9506f };
							break;
						case 2:
							vVar0 = { 1296.224f, -1150.173f, 81.165f };
							break;
						case 3:
							vVar0 = { -2493.048f, -2432.054f, 60.05442f };
							break;
						case 4:
							vVar0 = { 1796.942f, -100.2141f, 55.48214f };
							break;
						case 5:
							vVar0 = { 2401.277f, -1065.757f, 51.86878f };
							break;
					}
					Jump @10376; //curOff = 1423
					switch (iParam0)
					{
						case 0:
							vVar0 = { -2577.274f, -1383.74f, 148.261f };
							break;
						case 1:
							vVar0 = { -1409.911f, -2672.891f, 42.227f };
							break;
						case 2:
							vVar0 = { 2812.643f, -925.7277f, 44.12f };
							break;
						case 3:
							vVar0 = { 1115.424f, 507.2167f, 95.316f };
							break;
						case 4:
							vVar0 = { 2894.978f, 628.2769f, 57.15911f };
							break;
						case 5:
							vVar0 = { 1139.306f, -979.7267f, 69.35948f };
							break;
					}
					Jump @10376; //curOff = 1602
					switch (iParam0)
					{
						case 0:
							vVar0 = { -3666.746f, -2569.831f, -13.43366f };
							break;
						case 1:
							vVar0 = { 2501.691f, 818.5446f, 71.632f };
							break;
						case 2:
							vVar0 = { -575.309f, 2695.187f, 320.2f };
							break;
						case 3:
							vVar0 = { 2117.172f, -597.3241f, 42.401f };
							break;
						case 4:
							vVar0 = { -1395.294f, -2346.622f, 44.987f };
							break;
						case 5:
							vVar0 = { 3034.11f, 432.3413f, 51.154f };
							break;
					}
					Jump @10376; //curOff = 1781
					switch (iParam0)
					{
						case 0:
							vVar0 = { 341.8932f, -669.0356f, 42.25286f };
							break;
						case 1:
							vVar0 = { 2257.845f, -784.6151f, 44.225f };
							break;
						case 2:
							vVar0 = { 1807.804f, -48.12351f, 58.367f };
							break;
						case 3:
							vVar0 = { -821.4991f, 354.529f, 98.568f };
							break;
						case 4:
							vVar0 = { -1981.191f, -1617.101f, 118.1249f };
							break;
						case 5:
							vVar0 = { -4839.736f, -2661.281f, -13.171f };
							break;
					}
					Jump @10376; //curOff = 1960
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2856.656f, 1339.221f, 64.69f };
							break;
						case 1:
							vVar0 = { -5591.378f, -3323.73f, -22.117f };
							break;
						case 2:
							vVar0 = { -1622.703f, -877.8527f, 89.788f };
							break;
						case 3:
							vVar0 = { 1376.266f, -1315.819f, 77.12f };
							break;
						case 4:
							vVar0 = { 1748.228f, -1320.188f, 44.236f };
							break;
						case 5:
							vVar0 = { 590.6957f, 643.2216f, 131.0161f };
							break;
					}
					Jump @10376; //curOff = 2139
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1897.236f, -736.8479f, 42.306f };
							break;
						case 1:
							vVar0 = { -791.3267f, -1356.294f, 51.668f };
							break;
						case 2:
							vVar0 = { -1094.955f, -570.4799f, 82.1826f };
							break;
						case 3:
							vVar0 = { 2739.444f, 1351.561f, 67.87411f };
							break;
						case 4:
							vVar0 = { 2815.994f, -1409.566f, 44.84941f };
							break;
						case 5:
							vVar0 = { 900.5817f, -1793.154f, 42.88783f };
							break;
					}
					Jump @10376; //curOff = 2318
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1456.267f, -1363.698f, 78.26161f };
							break;
						case 1:
							vVar0 = { -3439.563f, -2719.311f, -3.935848f };
							break;
						case 2:
							vVar0 = { 2975.23f, 573.8652f, 45.12079f };
							break;
						case 3:
							vVar0 = { 2745.968f, -1182.872f, 48.988f };
							break;
						case 4:
							vVar0 = { -276.0031f, 813.6921f, 122.5749f };
							break;
						case 5:
							vVar0 = { 1299.625f, -1303.212f, 81.70584f };
							break;
					}
					Jump @10376; //curOff = 2497
					switch (iParam0)
					{
						case 0:
							vVar0 = { -785.7925f, 351.1424f, 96.443f };
							break;
						case 1:
							vVar0 = { -1310.024f, 392.2272f, 94.842f };
							break;
						case 2:
							vVar0 = { -4766.876f, -2707.932f, -14.12604f };
							break;
						case 3:
							vVar0 = { -1769.97f, -429.6013f, 154.674f };
							break;
						case 4:
							vVar0 = { 1046.408f, -1845.566f, 48.232f };
							break;
						case 5:
							vVar0 = { 2550f, 812.0331f, 75.636f };
							break;
					}
					Jump @10376; //curOff = 2676
					switch (iParam0)
					{
						case 0:
							vVar0 = { 506.6608f, 1766.462f, 182.225f };
							break;
						case 1:
							vVar0 = { -2370.792f, 470.3645f, 131.718f };
							break;
						case 2:
							vVar0 = { 980.776f, -2016.561f, 46.486f };
							break;
						case 3:
							vVar0 = { -172.0568f, 631.8036f, 113.4876f };
							break;
						case 4:
							vVar0 = { -5422.808f, -2971.498f, 12.298f };
							break;
						case 5:
							vVar0 = { 2977.604f, 1316.154f, 43.828f };
							break;
					}
					Jump @10376; //curOff = 2855
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1522.962f, 450.2165f, 90.152f };
							break;
						case 1:
							vVar0 = { 576.9316f, 1675.01f, 187.7765f };
							break;
						case 2:
							vVar0 = { -5856.934f, -3185.338f, -13.16593f };
							break;
						case 3:
							vVar0 = { -977.3434f, -1200.263f, 57.98044f };
							break;
						case 4:
							vVar0 = { 2506.52f, 739.9262f, 74.187f };
							break;
						case 5:
							vVar0 = { 1752.954f, -1365.595f, 44.63037f };
							break;
					}
					Jump @10376; //curOff = 3034
					switch (iParam0)
					{
						case 0:
							vVar0 = { -606.1691f, -54.50835f, 84.257f };
							break;
						case 1:
							vVar0 = { 2745.335f, 1410.862f, 98.828f };
							break;
						case 2:
							vVar0 = { 1774.655f, -470.5374f, 45.029f };
							break;
						case 3:
							vVar0 = { -1416.201f, 1130.668f, 225.315f };
							break;
						case 4:
							vVar0 = { 2987.138f, 2190.272f, 166.2066f };
							break;
						case 5:
							vVar0 = { 199.2651f, 991.0287f, 189.9391f };
							break;
					}
					Jump @10376; //curOff = 3213
					switch (iParam0)
					{
						case 0:
							vVar0 = { 3027.182f, 1776.44f, 83.926f };
							break;
						case 1:
							vVar0 = { -5512.32f, -2880.17f, -3.84f };
							break;
						case 2:
							vVar0 = { -1810.387f, -353.6751f, 160.907f };
							break;
						case 3:
							vVar0 = { 554.2538f, 568.2386f, 116.645f };
							break;
						case 4:
							vVar0 = { -5948.872f, -3267.162f, -21.71592f };
							break;
						case 5:
							vVar0 = { 2858.646f, -1272.893f, 49.91f };
							break;
					}
					Jump @10376; //curOff = 3392
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2291.082f, -1539.305f, 41.422f };
							break;
						case 1:
							vVar0 = { 1932.541f, 1947.621f, 262.954f };
							break;
						case 2:
							vVar0 = { 2542.088f, 699.2532f, 80.16f };
							break;
						case 3:
							vVar0 = { 1903.682f, -1821.06f, 41.97f };
							break;
						case 4:
							vVar0 = { -2398.913f, -2469.837f, 59.93f };
							break;
						case 5:
							vVar0 = { -2179.922f, 719.9606f, 122.396f };
							break;
					}
					Jump @10376; //curOff = 3571
					switch (iParam0)
					{
						case 0:
							vVar0 = { -365.4468f, -155.0315f, 50.555f };
							break;
						case 1:
							vVar0 = { 1781.656f, -400.4307f, 47.24f };
							break;
						case 2:
							vVar0 = { 2387.917f, 1690.443f, 95.509f };
							break;
						case 3:
							vVar0 = { -1814.892f, 658.8661f, 131.8925f };
							break;
						case 4:
							vVar0 = { 2005.39f, -761.9121f, 41.7f };
							break;
						case 5:
							vVar0 = { -16.03913f, 1232.503f, 173.3871f };
							break;
					}
					Jump @10376; //curOff = 3750
					switch (iParam0)
					{
						case 0:
							vVar0 = { -3870.449f, -3169.91f, -13.01f };
							break;
						case 1:
							vVar0 = { 1372.678f, -874.9531f, 70.617f };
							break;
						case 2:
							vVar0 = { 2466.088f, 277.0007f, 78.516f };
							break;
						case 3:
							vVar0 = { 1117.4f, -1986.08f, 54.38f };
							break;
						case 4:
							vVar0 = { 2818.652f, -1107.754f, 45.89925f };
							break;
						case 5:
							vVar0 = { -248.1706f, 957.9525f, 138.105f };
							break;
					}
					Jump @10376; //curOff = 3929
					switch (iParam0)
					{
						case 0:
							vVar0 = { -1875.848f, 1330.423f, 202.013f };
							break;
						case 1:
							vVar0 = { 2902.685f, 1342.593f, 47.95f };
							break;
						case 2:
							vVar0 = { 2230.71f, -767.3853f, 43.725f };
							break;
						case 3:
							vVar0 = { 1357.015f, -1248.945f, 79.98093f };
							break;
						case 4:
							vVar0 = { -1841.589f, -421.5529f, 160.5227f };
							break;
						case 5:
							vVar0 = { 1424.431f, 382.3747f, 89.399f };
							break;
					}
					Jump @10376; //curOff = 4108
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2495.921f, -935.5837f, 41.83111f };
							break;
						case 1:
							vVar0 = { -1360.017f, 2427.802f, 307.729f };
							break;
						case 2:
							vVar0 = { 1122.943f, 490.8148f, 97.197f };
							break;
						case 3:
							vVar0 = { 2930.417f, 1388.615f, 56.3945f };
							break;
						case 4:
							vVar0 = { 2467.235f, -1381.177f, 44.75f };
							break;
						case 5:
							vVar0 = { -905.5945f, -1367.161f, 45.22607f };
							break;
					}
					Jump @10376; //curOff = 4287
					switch (iParam0)
					{
						case 0:
							vVar0 = { -768.07f, -1274.364f, 44.197f };
							break;
						case 1:
							vVar0 = { 1833.804f, -1423.065f, 43.601f };
							break;
						case 2:
							vVar0 = { -1424.302f, -2686.436f, 40.842f };
							break;
						case 3:
							vVar0 = { 2541.009f, -1456.998f, 46.277f };
							break;
						case 4:
							vVar0 = { -253.5445f, 638.9977f, 117.744f };
							break;
						case 5:
							vVar0 = { -5515.065f, -2919.768f, 1.611f };
							break;
					}
					Jump @10376; //curOff = 4466
					switch (iParam0)
					{
						case 0:
							vVar0 = { -4684.597f, -3735.584f, 13.072f };
							break;
						case 1:
							vVar0 = { 1409.751f, -1287.476f, 78.037f };
							break;
						case 2:
							vVar0 = { 497.7721f, 673.6046f, 120.834f };
							break;
						case 3:
							vVar0 = { 2234.996f, -142.1575f, 47.40239f };
							break;
						case 4:
							vVar0 = { 1130.36f, -989.1239f, 68.874f };
							break;
						case 5:
							vVar0 = { 789.1991f, 839.0553f, 117.637f };
							break;
					}
					Jump @10376; //curOff = 4645
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1238.492f, -442.7407f, 90.514f };
							break;
						case 1:
							vVar0 = { 2090.363f, -1820.301f, 42.976f };
							break;
						case 2:
							vVar0 = { -395.2218f, 1724.644f, 216.2263f };
							break;
						case 3:
							vVar0 = { 1625.42f, -363.5916f, 75.70547f };
							break;
						case 4:
							vVar0 = { 1178.113f, 433.4455f, 92.715f };
							break;
						case 5:
							vVar0 = { 2824.817f, 280.6819f, 51.125f };
							break;
					}
					Jump @10376; //curOff = 4824
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1180.219f, -102.3198f, 94.513f };
							break;
						case 1:
							vVar0 = { 2753.752f, -1285.876f, 47.905f };
							break;
						case 2:
							vVar0 = { -2094.373f, -1900.385f, 114.15f };
							break;
						case 3:
							vVar0 = { -420.2359f, 1735.101f, 216.5775f };
							break;
						case 4:
							vVar0 = { 2997.642f, 485.2014f, 42.016f };
							break;
						case 5:
							vVar0 = { 894.0088f, 266.3849f, 115.945f };
							break;
					}
					Jump @10376; //curOff = 5003
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2941.327f, 497.7603f, 45.557f };
							break;
						case 1:
							vVar0 = { 1456.948f, 803.3541f, 99.955f };
							break;
						case 2:
							vVar0 = { -1757.492f, -361.9659f, 170.035f };
							break;
						case 3:
							vVar0 = { 2410.756f, -1076.878f, 47.48f };
							break;
						case 4:
							vVar0 = { -856.5822f, 333.9793f, 98.936f };
							break;
						case 5:
							vVar0 = { 1338.637f, -2293.063f, 49.743f };
							break;
					}
					Jump @10376; //curOff = 5182
					switch (iParam0)
					{
						case 0:
							vVar0 = { -2261.507f, 379.8123f, 176.935f };
							break;
						case 1:
							vVar0 = { 876.3088f, -1930.418f, 46.505f };
							break;
						case 2:
							vVar0 = { -3590.551f, -2610.387f, -15.073f };
							break;
						case 3:
							vVar0 = { -1976.613f, -1651.554f, 116.9042f };
							break;
						case 4:
							vVar0 = { 1310.683f, -1354.187f, 77.755f };
							break;
						case 5:
							vVar0 = { -1424.709f, -2193.708f, 42.745f };
							break;
					}
					Jump @10376; //curOff = 5361
					switch (iParam0)
					{
						case 0:
							vVar0 = { -414.2433f, 1748.174f, 219.237f };
							break;
						case 1:
							vVar0 = { 1903.133f, -1861.375f, 47.154f };
							break;
						case 2:
							vVar0 = { -322.3861f, -330.0626f, 101.448f };
							break;
						case 3:
							vVar0 = { 2930.624f, 511.4331f, 45.106f };
							break;
						case 4:
							vVar0 = { -59.93358f, 1241.177f, 170.5883f };
							break;
						case 5:
							vVar0 = { -1814.496f, -355.9884f, 161.8523f };
							break;
					}
					Jump @10376; //curOff = 5540
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2634.352f, 1700.587f, 115.705f };
							break;
						case 1:
							vVar0 = { -5547.786f, -2398.16f, -9.09f };
							break;
						case 2:
							vVar0 = { 2585.521f, -1011.535f, 44.741f };
							break;
						case 3:
							vVar0 = { 1705.205f, -1005.103f, 43.291f };
							break;
						case 4:
							vVar0 = { 727.2112f, -473.8823f, 77.13835f };
							break;
						case 5:
							vVar0 = { 2312.604f, 1454.129f, 83.25579f };
							break;
					}
					Jump @10376; //curOff = 5719
					switch (iParam0)
					{
						case 0:
							vVar0 = { -1422.935f, -2339.014f, 45.006f };
							break;
						case 1:
							vVar0 = { 1869.853f, 584.2012f, 113.291f };
							break;
						case 2:
							vVar0 = { 2452.558f, 2096.085f, 173.752f };
							break;
						case 3:
							vVar0 = { -1164.138f, -1944.113f, 42.134f };
							break;
						case 4:
							vVar0 = { 2366.678f, -1468.138f, 45.902f };
							break;
						case 5:
							vVar0 = { -844.3076f, -1183.771f, 43.381f };
							break;
					}
					Jump @10376; //curOff = 5898
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1333.293f, -1376.881f, 84.072f };
							break;
						case 1:
							vVar0 = { 2951.417f, -1237.773f, 41.29379f };
							break;
						case 2:
							vVar0 = { -5529.383f, -2950.009f, 3.285f };
							break;
						case 3:
							vVar0 = { 2090.067f, -1816.521f, 42.725f };
							break;
						case 4:
							vVar0 = { -1090.415f, -573.9154f, 85.344f };
							break;
						case 5:
							vVar0 = { -1347.56f, 2403.389f, 306.888f };
							break;
					}
					Jump @10376; //curOff = 6077
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1899.332f, 295.5579f, 76.264f };
							break;
						case 1:
							vVar0 = { 600.3424f, 568.1143f, 111.213f };
							break;
						case 2:
							vVar0 = { -672.7397f, 1033.106f, 134.759f };
							break;
						case 3:
							vVar0 = { 3034.291f, 1779.221f, 83.32f };
							break;
						case 4:
							vVar0 = { -1880.284f, 1318.582f, 201.2222f };
							break;
						case 5:
							vVar0 = { 458.9841f, 671.9208f, 116.7326f };
							break;
					}
					Jump @10376; //curOff = 6256
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1988.772f, 1197.333f, 170.926f };
							break;
						case 1:
							vVar0 = { 2446.509f, 290.5638f, 67.239f };
							break;
						case 2:
							vVar0 = { -154.1317f, 1490.631f, 116.839f };
							break;
						case 3:
							vVar0 = { -1576.273f, -923.0228f, 85.506f };
							break;
						case 4:
							vVar0 = { -1318.793f, 2462.397f, 309.7299f };
							break;
						case 5:
							vVar0 = { 1457.72f, 814.1915f, 101.44f };
							break;
					}
					Jump @10376; //curOff = 6435
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2601.089f, -1472.551f, 51.98522f };
							break;
						case 1:
							vVar0 = { 2881.864f, 1381.877f, 83.02f };
							break;
						case 2:
							vVar0 = { -4372.16f, -2412.86f, 19.484f };
							break;
						case 3:
							vVar0 = { 1935.854f, 1942.919f, 273.093f };
							break;
						case 4:
							vVar0 = { 2440.585f, 305.988f, 74.64512f };
							break;
						case 5:
							vVar0 = { 2561.756f, -1086.731f, 56.53377f };
							break;
					}
					Jump @10376; //curOff = 6614
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2570.364f, 784.302f, 81.694f };
							break;
						case 1:
							vVar0 = { 1052.559f, -1119.853f, 67.834f };
							break;
						case 2:
							vVar0 = { 2468.019f, -1172.61f, 48.823f };
							break;
						case 3:
							vVar0 = { 2276.614f, 1454.194f, 83.76834f };
							break;
						case 4:
							vVar0 = { 193.0581f, 991.5071f, 189.7564f };
							break;
						case 5:
							vVar0 = { -1201.22f, -1937.747f, 43.34136f };
							break;
					}
					Jump @10376; //curOff = 6793
					switch (iParam0)
					{
						case 0:
							vVar0 = { 487.1789f, 563.5685f, 111.264f };
							break;
						case 1:
							vVar0 = { -1858.694f, -1728.357f, 108.979f };
							break;
						case 2:
							vVar0 = { -1200.4f, -1951.404f, 43.37f };
							break;
						case 3:
							vVar0 = { 2824.703f, 276.2172f, 48.585f };
							break;
						case 4:
							vVar0 = { -1430.835f, 1203.193f, 225.4744f };
							break;
						case 5:
							vVar0 = { 2834.369f, -1052.816f, 43.75f };
							break;
					}
					Jump @10376; //curOff = 6972
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2150.482f, -641.6266f, 42.258f };
							break;
						case 1:
							vVar0 = { 1452.888f, 288.4397f, 103.551f };
							break;
						case 2:
							vVar0 = { -36.04559f, 1216.432f, 172.529f };
							break;
						case 3:
							vVar0 = { 1708.568f, -407.2771f, 49.432f };
							break;
						case 4:
							vVar0 = { -2182.214f, 721.0881f, 125.654f };
							break;
						case 5:
							vVar0 = { 1898.859f, -1872.568f, 46.79531f };
							break;
					}
					Jump @10376; //curOff = 7151
					switch (iParam0)
					{
						case 0:
							vVar0 = { -5852.164f, -3740.74f, -25.688f };
							break;
						case 1:
							vVar0 = { -1816.15f, -435.9532f, 159.483f };
							break;
						case 2:
							vVar0 = { 877.7709f, -1819.264f, 43.837f };
							break;
						case 3:
							vVar0 = { 903.1764f, 261.0582f, 115.805f };
							break;
						case 4:
							vVar0 = { 3025.154f, 1442.077f, 47f };
							break;
						case 5:
							vVar0 = { -2342.035f, -2380.208f, 62.082f };
							break;
					}
					Jump @10376; //curOff = 7330
					switch (iParam0)
					{
						case 0:
							vVar0 = { -1477.258f, -769.9705f, 104.16f };
							break;
						case 1:
							vVar0 = { 2971.657f, 494.3364f, 48.924f };
							break;
						case 2:
							vVar0 = { 1885.005f, -1343.515f, 47.22f };
							break;
						case 3:
							vVar0 = { -1435.478f, -2265.299f, 43.42018f };
							break;
						case 4:
							vVar0 = { 1325.79f, -2287.317f, 49.11174f };
							break;
						case 5:
							vVar0 = { 1115.514f, 485.5861f, 96.73001f };
							break;
					}
					Jump @10376; //curOff = 7509
					switch (iParam0)
					{
						case 0:
							vVar0 = { -2497.293f, -2401.793f, 72.166f };
							break;
						case 1:
							vVar0 = { -344.1977f, 694.8963f, 116.853f };
							break;
						case 2:
							vVar0 = { -1728.967f, -85.84953f, 181.594f };
							break;
						case 3:
							vVar0 = { 2483.545f, 775.2837f, 67.025f };
							break;
						case 4:
							vVar0 = { 1374.706f, -1217.925f, 84.124f };
							break;
						case 5:
							vVar0 = { -443.3312f, 655.369f, 111.768f };
							break;
					}
					Jump @10376; //curOff = 7688
					switch (iParam0)
					{
						case 0:
							vVar0 = { -4361.989f, -3076.853f, -9.959f };
							break;
						case 1:
							vVar0 = { 2284.664f, -763.9371f, 41.677f };
							break;
						case 2:
							vVar0 = { -876.7333f, -1418.467f, 44.945f };
							break;
						case 3:
							vVar0 = { 2777.354f, -1044.44f, 46.328f };
							break;
						case 4:
							vVar0 = { -242.144f, 768.4951f, 117.886f };
							break;
						case 5:
							vVar0 = { -5990.474f, -3212.507f, -14.609f };
							break;
					}
					Jump @10376; //curOff = 7867
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2507.901f, 2288.05f, 177.1559f };
							break;
						case 1:
							vVar0 = { -531.5649f, 2671.969f, 319.243f };
							break;
						case 2:
							vVar0 = { 1022.043f, -1769.855f, 48.084f };
							break;
						case 3:
							vVar0 = { -2217.574f, 726.6389f, 127.5132f };
							break;
						case 4:
							vVar0 = { 1751.351f, -411.8749f, 48.358f };
							break;
						case 5:
							vVar0 = { -1454.006f, -2295.404f, 43.308f };
							break;
					}
					Jump @10376; //curOff = 8046
					switch (iParam0)
					{
						case 0:
							vVar0 = { -1831.834f, -608.7134f, 154.372f };
							break;
						case 1:
							vVar0 = { -1357.474f, -2290.772f, 45.951f };
							break;
						case 2:
							vVar0 = { 351.2373f, -17.20502f, 107.017f };
							break;
						case 3:
							vVar0 = { -5463.614f, -2908.602f, 0.658f };
							break;
						case 4:
							vVar0 = { -398.3195f, 1727.015f, 215.874f };
							break;
						case 5:
							vVar0 = { 2969.867f, 598.343f, 44.61f };
							break;
					}
					Jump @10376; //curOff = 8225
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2784.246f, 533.7446f, 71.129f };
							break;
						case 1:
							vVar0 = { -3844.834f, -3009.312f, -7.398f };
							break;
						case 2:
							vVar0 = { 2092.187f, -610.6999f, 41.675f };
							break;
						case 3:
							vVar0 = { -1638.736f, -1362.702f, 84.28762f };
							break;
						case 4:
							vVar0 = { -5215.863f, -3505.096f, -21.82158f };
							break;
						case 5:
							vVar0 = { 534.3098f, 1745.734f, 183.704f };
							break;
					}
					Jump @10376; //curOff = 8404
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2685.521f, -1102.14f, 49.034f };
							break;
						case 1:
							vVar0 = { 1008.127f, -1805.869f, 46.506f };
							break;
						case 2:
							vVar0 = { -1021.207f, 1695.284f, 244.3578f };
							break;
						case 3:
							vVar0 = { -1820.981f, -372.3584f, 163.0933f };
							break;
						case 4:
							vVar0 = { 540.5381f, 595.9525f, 127.4449f };
							break;
						case 5:
							vVar0 = { 2343.544f, -1165.905f, 46.764f };
							break;
					}
					Jump @10376; //curOff = 8583
					switch (iParam0)
					{
						case 0:
							vVar0 = { -3959.438f, -2128.002f, -3.79f };
							break;
						case 1:
							vVar0 = { 2335.602f, 1403.099f, 103.33f };
							break;
						case 2:
							vVar0 = { 1186.981f, -103.3362f, 94.52f };
							break;
						case 3:
							vVar0 = { 2693.608f, -1523.545f, 46.1426f };
							break;
						case 4:
							vVar0 = { 758.8849f, 839.5547f, 120.5366f };
							break;
						case 5:
							vVar0 = { -1976.292f, -1668.282f, 117.1813f };
							break;
					}
					Jump @10376; //curOff = 8762
					switch (iParam0)
					{
						case 0:
							vVar0 = { 1585.455f, -732.2845f, 42.3866f };
							break;
						case 1:
							vVar0 = { 2482.621f, -1303.083f, 48.68f };
							break;
						case 2:
							vVar0 = { 2017.862f, 603.5269f, 160.514f };
							break;
						case 3:
							vVar0 = { 1270.417f, -403.1694f, 97.04227f };
							break;
						case 4:
							vVar0 = { 2883.358f, -253.6491f, 42.831f };
							break;
						case 5:
							vVar0 = { 2524.72f, 2286.114f, 177.152f };
							break;
					}
					Jump @10376; //curOff = 8941
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2724.203f, 1403.457f, 68.73445f };
							break;
						case 1:
							vVar0 = { -2312.505f, -483.5394f, 144.9906f };
							break;
						case 2:
							vVar0 = { 728.6371f, -466.6955f, 84f };
							break;
						case 3:
							vVar0 = { -5201.147f, -3438.431f, -10.41009f };
							break;
						case 4:
							vVar0 = { 2497.068f, -421.6676f, 44.184f };
							break;
						case 5:
							vVar0 = { 1585.105f, -1845.161f, 58.605f };
							break;
					}
					Jump @10376; //curOff = 9120
					switch (iParam0)
					{
						case 0:
							vVar0 = { -5420.16f, -3657.385f, -18.903f };
							break;
						case 1:
							vVar0 = { 2071.159f, -855.5762f, 43.65374f };
							break;
						case 2:
							vVar0 = { 2949.082f, 516.9532f, 46.254f };
							break;
						case 3:
							vVar0 = { 577.4657f, 1687.921f, 187.74f };
							break;
						case 4:
							vVar0 = { 1779.248f, -809.139f, 42.316f };
							break;
						case 5:
							vVar0 = { -1663.501f, -1378.33f, 83.807f };
							break;
					}
					Jump @10376; //curOff = 9299
					switch (iParam0)
					{
						case 0:
							vVar0 = { -285.0148f, 872.1119f, 120.924f };
							break;
						case 1:
							vVar0 = { 753.2751f, -854.7612f, 55.11713f };
							break;
						case 2:
							vVar0 = { 2195.288f, -554.449f, 41.48f };
							break;
						case 3:
							vVar0 = { -1317.953f, 2436.072f, 309.366f };
							break;
						case 4:
							vVar0 = { 3028.37f, 1773.42f, 83.966f };
							break;
						case 5:
							vVar0 = { 1981.649f, 1193.035f, 171.202f };
							break;
					}
					Jump @10376; //curOff = 9478
					switch (iParam0)
					{
						case 0:
							vVar0 = { -1981.887f, -1670.349f, 119.02f };
							break;
						case 1:
							vVar0 = { 2797.684f, -1160.63f, 47.972f };
							break;
						case 2:
							vVar0 = { -323.7289f, -362.4248f, 88.009f };
							break;
						case 3:
							vVar0 = { -324.8878f, 763.9997f, 117.938f };
							break;
						case 4:
							vVar0 = { 2399.137f, -998.0281f, 44.005f };
							break;
						case 5:
							vVar0 = { 2850.777f, 1384.421f, 68.60077f };
							break;
					}
					Jump @10376; //curOff = 9657
					switch (iParam0)
					{
						case 0:
							vVar0 = { 225.7984f, 988.1877f, 190.999f };
							break;
						case 1:
							vVar0 = { 1321.554f, -1137.092f, 81.967f };
							break;
						case 2:
							vVar0 = { -3321.853f, -2872.174f, -6.147f };
							break;
						case 3:
							vVar0 = { -25.9034f, 1222.207f, 172.2385f };
							break;
						case 4:
							vVar0 = { -1167.524f, -1915.713f, 45.37499f };
							break;
						case 5:
							vVar0 = { -1895.564f, 1330.18f, 200.1581f };
							break;
					}
					Jump @10376; //curOff = 9836
					switch (iParam0)
					{
						case 0:
							vVar0 = { 2255.278f, -753.965f, 42.578f };
							break;
						case 1:
							vVar0 = { 2540.273f, 697.4079f, 81.22f };
							break;
						case 2:
							vVar0 = { 1445.074f, 374.511f, 89.922f };
							break;
						case 3:
							vVar0 = { -756.7344f, -1351.986f, 43.175f };
							break;
						case 4:
							vVar0 = { 2867.417f, 1449.662f, 69.19386f };
							break;
						case 5:
							vVar0 = { 1415.163f, -1399.66f, 81.95272f };
							break;
					}
					Jump @10376; //curOff = 10015
					switch (iParam0)
					{
						case 0:
							vVar0 = { -225.4506f, 834.5778f, 124.406f };
							break;
						case 1:
							vVar0 = { 3033.43f, 1367.321f, 42.87f };
							break;
						case 2:
							vVar0 = { -2169.378f, -248.6758f, 192.337f };
							break;
						case 3:
							vVar0 = { -2321.166f, -2390.095f, 63.211f };
							break;
						case 4:
							vVar0 = { 1906.76f, -1860.9f, 44.076f };
							break;
						case 5:
							vVar0 = { 2463.728f, 302.1954f, 76.15352f };
							break;
					}
					Jump @10376; //curOff = 10194
					switch (iParam0)
					{
						case 0:
							vVar0 = { -5621.368f, -2941.645f, 6.196f };
							break;
						case 1:
							vVar0 = { -691.7759f, -1245.418f, 43.18266f };
							break;
						case 2:
							vVar0 = { 1424.569f, -1144.531f, 75.435f };
							break;
						case 3:
							vVar0 = { 1839.385f, -1275.077f, 43.297f };
							break;
						case 4:
							vVar0 = { 2279.529f, 1487.438f, 83.47887f };
							break;
						case 5:
							vVar0 = { 1931.983f, 1945.649f, 265.9054f };
							break;
					}
					return vVar0;
				}

bool func_429(bool bParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	if (aggregate_func_2852(bParam0, -1522723129))
	{
		return false;
	}
	iVar0 = aggregate_func_1136(bParam0, 0, 0, 0);
	iVar1 = aggregate_func_5052(12);
	if (iVar1 < 5)
	{
		if (aggregate_func_2852(bParam0, 683680997))
		{
			return false;
		}
	}
	if (iVar1 < 10)
	{
		if (aggregate_func_2852(bParam0, -283942357))
		{
			return false;
		}
	}
	if (iVar0 == 10)
	{
		return false;
	}
	if (_NAMESPACE49::_0xB6E1A185C2B9319A(vParam1))
	{
		return false;
	}
	return true;
}

