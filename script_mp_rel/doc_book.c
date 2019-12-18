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
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	iLocal_26 = -1;
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
				func_29(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				aggregate_func_4252(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				aggregate_func_4239(uParam1[0 /*11*/]);
				func_34(uParam0, uParam1, 1);
				aggregate_func_4252(uParam0, 6);
			}
			break;
		case 6:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			func_37(uParam0, uParam1);
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
				aggregate_func_215(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_29(uParam0, uParam1);
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
				aggregate_func_4239(uParam1[0 /*11*/]);
				aggregate_func_4252(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			func_37(uParam0, uParam1);
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
			aggregate_func_215(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_29(var uParam0, var uParam1)
{
	uParam0->f_120 = 1;
	switch (TASK::_0x804425C4BBD00883(Global_35))
	{
		case 2129073771:
			iLocal_27 = -1912187723;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
		case -1391775747: /* GXTEntry: "Jail Ledger" */
			iLocal_27 = -658853329;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
		case -1448289118: /* GXTEntry: "Diary" */
			iLocal_27 = 1095224717;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
	}
}

void func_30(var uParam0, int iParam1)
{
	if (aggregate_func_2852(iParam1, -98816307))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (aggregate_func_2852(iParam1, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_120)
	{
		if (aggregate_func_2852(iParam1, -98816307))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_66(uParam0);
}

bool func_32(int iParam0, int iParam1)
{
	switch (aggregate_func_2900(iParam0, -949239683))
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
				func_67(Global_17158[1], 0);
			}
			else
			{
				Global_17163[1] = 1;
				func_67(Global_17158[1], 1);
			}
			if (!aggregate_func_2823(uParam1[1 /*11*/], 0))
			{
				Global_17163[0] = 0;
				func_67(Global_17158[0], 0);
			}
			else
			{
				Global_17163[0] = 1;
				func_67(Global_17158[0], 1);
			}
		}
		Global_17163[3] = func_68(uParam0, (*uParam1)[0 /*11*/]);
		func_67(Global_17158[3], &(Global_17163[3]));
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

	if (!func_32(*uParam1, uParam0->f_104) && !func_69(*uParam1, uParam0->f_104))
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
				func_71(Global_17158[iVar0], 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_72(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_71(Global_17158[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_36(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_73(uParam1[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		aggregate_func_4239(uParam1[0 /*11*/]);
	}
}

void func_37(var uParam0, var uParam1)
{
	int iVar0;

	if (!UIAPPS::_IS_APP_RUNNING(-605293197) && uParam0->f_105 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
		{
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
			{
				func_75(uParam0, uParam1);
			}
		}
		if (iLocal_26 == -1)
		{
			func_76(uParam0);
		}
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (!bLocal_22)
		{
			if (iVar0 == -271999469 || iVar0 == 1088578020)
			{
				bLocal_22 = true;
				iLocal_25++;
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_22 = false;
		}
		if (!bLocal_23)
		{
			if (iVar0 == 447737959 || iVar0 == 847337666)
			{
				bLocal_23 = true;
				iLocal_25 = (iLocal_25 - 1);
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_23 = false;
		}
		if (iLocal_25 == 0)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", true, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", false, -1);
		}
		if (iLocal_25 >= iLocal_26)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", true, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", false, -1);
		}
	}
	if (!bLocal_24 && iLocal_27 != 0)
	{
		if (TXD::_0xBE72591D1509FFE4(iLocal_27))
		{
			OBJECT::_0xE124889AE0521FCF(TASK::_0x05A0100EA714DB68(Global_35, 0), iLocal_27, 0, 0);
			bLocal_24 = true;
		}
	}
}

bool func_38(int iParam0, int iParam1)
{
	switch (aggregate_func_2900(iParam0, -949239683))
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

void func_40(var uParam0, int iParam1)
{
	if (aggregate_func_2852(iParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_78(uParam0, iParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_78(uParam0, iParam1);
	}
}

int func_43(var uParam0)
{
	int iVar0;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!aggregate_func_2823(iVar0, 0))
			{
			}
		}
		Global_1912966 = iVar0;
	}
	else
	{
		iVar0 = &Global_1912966;
	}
	return iVar0;
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
	func_123(uParam0, uParam1[0 /*11*/]);
	func_124(uParam0, uParam1);
	if (uParam1[1 /*11*/] != 0)
	{
		aggregate_func_8141(1, uParam1[1 /*11*/]);
	}
	else
	{
		aggregate_func_8137(1);
	}
	func_126(uParam0, uParam1);
	if (uParam1[2 /*11*/] != 0)
	{
		aggregate_func_8141(2, uParam1[2 /*11*/]);
	}
	else
	{
		aggregate_func_8137(2);
	}
	func_127(uParam1);
	func_128(uParam1);
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
				if (!func_129(uParam0))
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
	if (func_131(uParam0, (*uParam1)[0 /*11*/]))
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
		func_71(Global_17158[1], !uParam0->f_125);
		func_71(Global_17158[0], 1);
	}
	if (aggregate_func_2927(&(Global_17158[0]), 1))
	{
		iVar0 = 1;
		func_71(Global_17158[0], !uParam0->f_124);
		func_71(Global_17158[1], 1);
	}
	return iVar0;
}

int func_53(int iParam0)
{
	switch (aggregate_func_2900(iParam0, -949239683))
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

int func_60(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (aggregate_func_2900(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
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
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return (aggregate_func_2852(iParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

bool func_64(int iParam0)
{
	return ((aggregate_func_2852(iParam0, -1472964441) && aggregate_func_7892(iParam0)) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
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

void func_67(var uParam0, bool bParam1)
{
	if (aggregate_func_2875(*uParam0))
	{
		aggregate_func_4583(*uParam0, bParam1, 0, 1);
	}
}

bool func_68(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_32(*uParam1, uParam0->f_104))
	{
		bVar0 = !aggregate_func_2852(*uParam1, 1051234725);
	}
	if (func_69(*uParam1, uParam0->f_104))
	{
		bVar0 = aggregate_func_2852(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_69(int iParam0, int iParam1)
{
	switch (aggregate_func_2900(iParam0, -949239683))
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

void func_71(var uParam0, bool bParam1)
{
	if (aggregate_func_2875(*uParam0))
	{
		aggregate_func_4583(*uParam0, bParam1, 1, 1);
	}
}

void func_72(var uParam0, var uParam1)
{
	func_71(Global_17158[3], func_68(uParam0, uParam1));
}

bool func_73(int iParam0, int iParam1)
{
	switch (aggregate_func_2900(iParam0, -949239683))
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

void func_75(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iLocal_28))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_28);
	}
	aggregate_func_865(uParam0);
	iLocal_28 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_28, "Generic");
	iVar2 = 0;
	iLocal_26 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam1[0 /*11*/], (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				default:
					func_138(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;

	iLocal_26 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
				case 1724675796:
					break;
				default:
					if (!(uParam0->f_5.f_2[iVar1 /*5*/])->f_3)
					{
						iLocal_26++;
						(uParam0->f_5.f_2[iVar1 /*5*/])->f_4 = iLocal_26;
					}
					(uParam0->f_5.f_2[iVar1 /*5*/])->f_3 = 1;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "Generic");
	if (aggregate_func_2852(iParam1, 1104960349))
	{
		func_139(uParam0, iParam1);
	}
	else if (aggregate_func_2852(iParam1, 1989861793))
	{
		if (aggregate_func_2852(iParam1, -885754398))
		{
			func_140(uParam0, iParam1);
		}
		else
		{
			func_141(uParam0, iParam1);
		}
	}
	else if (aggregate_func_2852(iParam1, 1989861793))
	{
		func_141(uParam0, iParam1);
	}
	else if (aggregate_func_2852(iParam1, -772152977))
	{
		func_142(uParam0, iParam1);
	}
	else if (aggregate_func_2852(iParam1, -2081717885))
	{
		func_143(uParam0, iParam1);
	}
	else if (aggregate_func_2900(iParam1, 1224357681) == 1130538400)
	{
		func_144(uParam0, iParam1);
	}
	else if (aggregate_func_2852(iParam1, -1227898937))
	{
	}
	else
	{
		func_145(uParam0, iParam1);
	}
}

bool func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!aggregate_func_2831(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (aggregate_func_2841(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
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
		aggregate_func_4740(aggregate_func_1275(iParam0), aggregate_func_6592(iParam0), 1);
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
		if (aggregate_func_2941(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return aggregate_func_6959(iParam0, *iParam1, iParam2);
	}
	return false;
}

int func_123(var uParam0, int iParam1)
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

bool func_124(var uParam0, var uParam1)
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
			if (func_215(uParam1[0 /*11*/], Var0.f_4))
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

bool func_126(var uParam0, var uParam1)
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
			if (func_215(uParam1[0 /*11*/], Var0.f_4))
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

void func_127(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (aggregate_func_2823(uParam0[iVar0 /*11*/], 0))
		{
			func_216((*uParam0)[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_128(var uParam0)
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

bool func_129(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::_0x51DE09A2196BD951(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_131(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_129(uParam1);
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

void func_138(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[16];

	if (*iParam2 >= 11)
	{
		return;
	}
	if (!(uParam0->f_2[iParam1 /*5*/])->f_3)
	{
		iLocal_26++;
		(uParam0->f_2[iParam1 /*5*/])->f_4 = iLocal_26;
	}
	(uParam0->f_2[iParam1 /*5*/])->f_3 = 1;
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_64[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "style", iParam3);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_76[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_76[*iParam2]), "isVisible", iParam4);
	*iParam2++;
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
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

void func_140(var uParam0, int iParam1)
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
			if (func_225(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
				sVar3 = HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0 + 1);
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

void func_141(var uParam0, int iParam1)
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
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
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

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
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
	uParam0->f_5 = iParam1;
	aggregate_func_1069(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_143(var uParam0, int iParam1)
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
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
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

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
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

void func_145(var uParam0, int iParam1)
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
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_215(int iParam0, int iParam1)
{
	switch (aggregate_func_2900(iParam1, -949239683))
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
			if (Global_1939221->f_10477 != 1061777683 || aggregate_func_2900(iParam0, 1224357681) == aggregate_func_2900(iParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_216(var uParam0)
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

bool func_225(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_226(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_286(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

char* func_286(int iParam0, int iParam1)
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

bool func_314(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!aggregate_func_4246(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(-623226361, 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1452445456, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(332438661, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1632674359, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(56759509, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(2145533727, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1874365462, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1658668866, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(90781239, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1997097980, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(920487791, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-668555046, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-839148413, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(10424351, 0))
	{
		return true;
	}
	return false;
}

bool func_315(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2[1];
	int iVar4[3];
	int iVar8;

	if (aggregate_func_5050(iParam0, &uVar0))
	{
		return true;
	}
	if (!aggregate_func_5236(iParam0))
	{
		return false;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		aggregate_func_563(Global_35, &uVar2, 1);
		iVar1 = func_332(&(uVar2[0]));
		if (iVar1 == iParam0)
		{
			if (ENTITY::_0x8DE41E9902E85756(&(uVar2[0])))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (PED::_0xA911EE21EDF69DAF(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID())))
	{
		aggregate_func_563(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()), &iVar4, 3);
		iVar8 = 0;
		while (iVar8 < iVar4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(iVar4[iVar8])))
			{
			}
			else
			{
				iVar1 = aggregate_func_2101(iVar4[iVar8]);
				if (iVar1 == iParam0)
				{
					if (ENTITY::_0x8DE41E9902E85756(&(iVar4[iVar8])))
					{
						return true;
					}
				}
			}
			iVar8++;
		}
	}
	return false;
}

int func_327(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!aggregate_func_2823(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = aggregate_func_4369(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!aggregate_func_5132(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = aggregate_func_6006(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = aggregate_func_2101(&iParam0);
		if (!aggregate_func_2823(iVar0, 0))
		{
			iVar0 = aggregate_func_1163(iParam0);
		}
	}
	else
	{
		iVar0 = aggregate_func_1163(iParam0);
	}
	return iVar0;
}

