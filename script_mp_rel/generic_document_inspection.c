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
	if (func_2())
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
	if ((((MISC::GET_GAME_TIMER() < Global_17151 || Var0.f_116) || (aggregate.aberdeenpigfarm.func_45() == 0 && aggregate.coffee_drinking.func_101(&Global_1912966, 1224357681) == -1460119729)) || aggregate.bandana.func_11(&Global_1912966, 566155764)) || (aggregate.bandana.func_11(&Global_1912966, -1472964441) && aggregate.doc_book.func_6(&Global_1912966)))
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
		if (aggregate.bandana.func_11(Global_1913102[0 /*11*/], 566155764) || aggregate.bandana.func_11(&Global_1912966, 566155764))
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
	if (aggregate.doc_book.func_11() && !Global_1939221->f_8)
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
		aggregate.bigvalleyomj.func_36(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		aggregate.binoculars.func_73(uParam0->f_1.f_1);
	}
	func_14(uParam0, uParam1);
	func_15(uParam0);
	func_16(uParam0);
	if (uParam0->f_118)
	{
		func_17(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!((*uParam1)[0 /*11*/])->f_1)
		{
			aggregate.doc_book.func_18(0);
		}
		else
		{
			((*Global_1913136)[0 /*6*/])->f_1 = 4;
		}
		aggregate.doc_book.func_18(2);
		aggregate.doc_book.func_18(1);
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

bool func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return false;
	}
	return true;
}

bool func_7(var uParam0, var uParam1)
{
	if (aggregate.aberdeenpigfarm.func_45() == 0 && aggregate.aberdeenpigfarm.func_49(0, 0))
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
				aggregate.bigvalleyomj.func_36(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				aggregate.coffee_drinking.func_5(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_33(uParam1[0 /*11*/]);
				func_34(uParam0, uParam1, 1);
				aggregate.coffee_drinking.func_5(uParam0, 6);
			}
			break;
		case 6:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			aggregate.bigvalleyomj.func_36(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				if (aggregate.bandana.func_11(uParam1[0 /*11*/], -674618190))
				{
					aggregate.coffee_drinking.func_5(uParam0, 7);
				}
				else
				{
					aggregate.coffee_drinking.func_5(uParam0, 8);
				}
			}
			else if (aggregate.binoculars.func_13(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			func_15(uParam0);
			break;
		case 8:
			if (!aggregate.binoculars.func_32(uParam1[0 /*11*/], 1) && !uParam0->f_123)
			{
				aggregate.fm_mission_controller.func_5498(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			aggregate.coffee_drinking.func_5(uParam0, 9);
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
			aggregate.coffee_drinking.func_5(uParam0, 9);
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
				aggregate.bigvalleyomj.func_36(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				func_28(uParam0, (*uParam1)[0 /*11*/]);
				func_45(uParam0, uParam1);
				if (((*Global_1913136)[0 /*6*/])->f_1 == 2)
				{
					func_46((*uParam1)[0 /*11*/], 0);
					func_47(uParam0, uParam1);
				}
				aggregate.coffee_drinking.func_5(uParam0, 2);
			}
			break;
		case 2:
			if (func_46((*uParam1)[0 /*11*/], 0) && aggregate.doc_book.func_48(uParam0, uParam1))
			{
				aggregate.coffee_drinking.func_5(uParam0, 3);
			}
			break;
		case 3:
			if (func_47(uParam0, uParam1))
			{
				aggregate.coffee_drinking.func_5(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_34(uParam0, uParam1, 1);
				func_33(uParam1[0 /*11*/]);
				aggregate.coffee_drinking.func_5(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			aggregate.bigvalleyomj.func_36(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				aggregate.coffee_drinking.func_5(uParam0, 9);
			}
			else if (aggregate.annesburg.func_217(&(Global_17158[2])) && aggregate.doc_book.func_50(&(Global_17158[2]), 1))
			{
				aggregate.coffee_drinking.func_5(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1939221->f_8 = 1;
				Global_17169 = MISC::GET_GAME_TIMER() + 10000;
				aggregate.doc_book.func_51(1);
			}
			else if (aggregate.binoculars.func_13(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			else if (!Global_17170 && func_52(uParam0))
			{
				uParam0->f_117 = 1;
				aggregate.coffee_drinking.func_5(uParam0, 9);
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

void func_16(var uParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_64[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_64[iVar0]));
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_76[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_76[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_3 = 0;
		iVar0++;
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
		if (((uParam0->f_116 && func_55(uParam1[0 /*11*/])) && !aggregate.binoculars.func_32(uParam1[0 /*11*/], 1)) && !uParam0->f_123)
		{
			aggregate.fm_mission_controller.func_5498(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_19(var uParam0)
{
	if (!Global_1939221->f_8)
	{
		if (((aggregate.bandana.func_11(&Global_1912966, -1472964441) || aggregate.bandana.func_11(&Global_1912966, 1841149704)) || aggregate.bandana.func_11(&Global_1912966, 566155764)) || aggregate.bandana.func_11(&Global_1912966, -228153877))
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
		aggregate.bigvalleyomj.func_36(uParam0, uParam1);
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
		aggregate.binoculars.func_73(uParam0->f_1.f_1);
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
	if (!aggregate.bandana.func_21(16))
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
	uParam1->f_6 = aggregate.coffee_drinking.func_101(*uParam1, -949239683);
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
	if (aggregate.bandana.func_11(bParam1, -98816307))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (aggregate.bandana.func_11(bParam1, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_120)
	{
		if (aggregate.bandana.func_11(bParam1, -98816307))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_66(uParam0);
}

bool func_32(bool bParam0, int iParam1)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
	func_68(bParam0, &(Global_17173.f_2954), 1);
	func_69(bParam0);
	if (bParam0 == 684416450)
	{
		iVar0 = aggregate.fme_animal_tagging.func_1527(bParam0, 1);
		if (aggregate.aberdeenpigfarm.func_165(iVar0))
		{
			Var1 = -1;
			Var1.f_1 = -1;
			Var11.f_9 = 1;
			Var11.f_11 = -1591664384;
			if (aggregate.generic_document_inspection.func_72(&Var1, iVar0, &Var11, 1, -489628648, -1, 0))
			{
			}
		}
	}
}

int func_34(var uParam0, var uParam1, bool bParam2)
{
	if (aggregate.bandana.func_11(uParam1[0 /*11*/], 566155764))
	{
		return 1;
	}
	if (aggregate.bandana.func_11(uParam1[0 /*11*/], -1472964441))
	{
		if (aggregate.doc_book.func_6(uParam1[0 /*11*/]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17170 && bParam2)
		{
			if (!aggregate.bandana.func_30(uParam1[2 /*11*/], 0))
			{
				Global_17163[1] = 0;
				func_73(Global_17158[1], 0);
			}
			else
			{
				Global_17163[1] = 1;
				func_73(Global_17158[1], 1);
			}
			if (!aggregate.bandana.func_30(uParam1[1 /*11*/], 0))
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
			if (aggregate.doc_book.func_70(&(Global_17158[0]), 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (aggregate.doc_book.func_70(&(Global_17158[1]), 1))
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
		aggregate.aberdeenpigfarm.func_154(uParam1[0 /*11*/]);
	}
}

bool func_38(bool bParam0, int iParam1)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
	if (aggregate.bandana.func_11(bParam1, -1227898937))
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
			if (!aggregate.bandana.func_30(bVar0, 0))
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
		aggregate.doc_book.func_125(1, uParam1[1 /*11*/]);
	}
	else
	{
		aggregate.doc_book.func_18(1);
	}
	func_130(uParam0, uParam1);
	if (uParam1[2 /*11*/] != 0)
	{
		aggregate.doc_book.func_125(2, uParam1[2 /*11*/]);
	}
	else
	{
		aggregate.doc_book.func_18(2);
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
	else if (aggregate.doc_book.func_130(*uParam0, &iVar0, joaat("inventory"), -401018458, 0, 0))
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
		aggregate.doc_book.func_132(uParam0, uParam1);
		return true;
	}
	return false;
}

bool func_52(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_110 = 0;
	if (aggregate.binoculars.func_13(&(Global_17158[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_77(Global_17158[1], !uParam0->f_125);
		func_77(Global_17158[0], 1);
	}
	if (aggregate.binoculars.func_13(&(Global_17158[0]), 1))
	{
		iVar0 = 1;
		func_77(Global_17158[0], !uParam0->f_124);
		func_77(Global_17158[1], 1);
	}
	return iVar0;
}

int func_53(bool bParam0)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
			aggregate.doc_book.func_133(-1419640182, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			aggregate.doc_book.func_133(-2028134866, 0);
			aggregate.binoculars.func_18(859, 0);
			break;
		case 1397875340:
			aggregate.doc_book.func_133(518311877, 0);
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

	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
	return (aggregate.bandana.func_11(bParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

bool func_64(bool bParam0)
{
	return ((aggregate.bandana.func_11(bParam0, -1472964441) && aggregate.doc_book.func_6(bParam0)) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
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

	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		if ((aggregate.bandana.func_11(bParam0, 1989861793) || bParam0 == -492264119) || bParam0 == 1397875340)
		{
			iVar0 = aggregate.fme_animal_tagging.func_1527(bParam0, 1);
			if (aggregate.aberdeenpigfarm.func_165(iVar0))
			{
				Var1 = -1;
				Var1.f_1 = -1;
				Var11.f_9 = 1;
				Var11.f_11 = -1591664384;
				if (aggregate.generic_document_inspection.func_72(&Var1, iVar0, &Var11, 1, 1946634759, -1, 0))
				{
				}
			}
		}
	}
	else if (aggregate.bandana.func_11(bParam0, 1989861793))
	{
		iVar28 = aggregate.coffee_drinking.func_101(bParam0, 1697966752);
		if (iVar28 != 0)
		{
			Var31 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar28, 0) };
			if (aggregate.fm_mission_controller.func_6850(Var31, &iVar29, &iVar30, 0))
			{
				bVar41 = false;
				iVar42 = 0;
				while (iVar42 < iVar30)
				{
					bVar43 = aggregate.fm_mission_controller.func_6851(iVar42, iVar29);
					if (bVar43 != bParam0 && aggregate.bandana.func_30(bVar43, 0))
					{
						if (func_142(bVar43, 0, 0, 1, 0))
						{
							bVar41 = true;
						}
					}
					iVar42++;
				}
				aggregate.fm_mission_controller.func_6855(iVar29);
				if (bVar41)
				{
					func_144(bParam0);
				}
				else
				{
					aggregate.binoculars.func_18(336, 0);
				}
			}
		}
	}
}

void func_68(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;

	if (!aggregate.bandana.func_11(bParam0, -1472964441))
	{
		return;
	}
	if (!aggregate.doc_book.func_6(bParam0))
	{
		return;
	}
	iVar0 = aggregate.generic_document_inspection.func_145(bParam0, bParam2);
	if (iVar0 != 0)
	{
		aggregate.camera_item.func_73(aggregate.generic_document_inspection.func_146(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	Var1 = 3;
	Var1.f_11 = 3;
	Var1.f_10 = bParam0;
	func_148(&Var1);
	iVar0 = func_149(Var1);
	if (iVar0 != 0)
	{
		aggregate.camera_item.func_73(aggregate.generic_document_inspection.func_146(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	if (uParam1->f_21)
	{
		aggregate.coffee_drinking.func_5(uParam1, 0);
	}
	if (uParam1->f_18 != Var1.f_10)
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.coffee_drinking.func_50(-672340966), 1);
		uParam1->f_18 = Var1.f_10;
	}
	func_152(Var1);
	Global_17173.f_3067 = { func_153() };
	uParam1->f_21 = 1;
	if (bParam2)
	{
		UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
	}
}

void func_69(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (aggregate.bandana.func_11(bParam0, 566155764))
	{
		func_154(bParam0);
		iVar0 = aggregate.dynamic_craft_scenario.func_129(bParam0);
		if (iVar0 != -1)
		{
			vVar1 = { func_156(iVar0) };
			vVar4 = { func_157(iVar0) };
			MAP::_0xE0884C184728C75B(vVar1, vVar4.x);
		}
		UIAPPS::_LAUNCH_APP_BY_HASH(joaat("map"));
	}
}

void func_73(var uParam0, bool bParam1)
{
	if (aggregate.annesburg.func_217(*uParam0))
	{
		aggregate.binoculars.func_37(*uParam0, bParam1, 0, 1);
	}
}

bool func_74(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_32(*uParam1, uParam0->f_104))
	{
		bVar0 = !aggregate.bandana.func_11(*uParam1, 1051234725);
	}
	if (func_75(*uParam1, uParam0->f_104))
	{
		bVar0 = aggregate.bandana.func_11(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_75(bool bParam0, int iParam1)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
	if (aggregate.annesburg.func_217(*uParam0))
	{
		aggregate.binoculars.func_37(*uParam0, bParam1, 1, 1);
	}
}

void func_78(var uParam0, var uParam1)
{
	func_77(Global_17158[3], func_74(uParam0, uParam1));
}

bool func_79(bool bParam0, int iParam1)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
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
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "Generic");
	if (aggregate.bandana.func_11(bParam1, 1104960349))
	{
		func_165(uParam0, bParam1);
	}
	else if (aggregate.bandana.func_11(bParam1, 1989861793))
	{
		if (aggregate.bandana.func_11(bParam1, -885754398))
		{
			func_166(uParam0, bParam1);
		}
		else
		{
			func_167(uParam0, bParam1);
		}
	}
	else if (aggregate.bandana.func_11(bParam1, 1989861793))
	{
		func_167(uParam0, bParam1);
	}
	else if (aggregate.bandana.func_11(bParam1, -772152977))
	{
		func_168(uParam0, bParam1);
	}
	else if (aggregate.bandana.func_11(bParam1, -2081717885))
	{
		func_169(uParam0, bParam1);
	}
	else if (aggregate.coffee_drinking.func_101(bParam1, 1224357681) == 1130538400)
	{
		func_170(uParam0, bParam1);
	}
	else if (aggregate.bandana.func_11(bParam1, -1227898937))
	{
	}
	else
	{
		func_171(uParam0, bParam1);
	}
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!aggregate.bandana.func_83(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (aggregate.binoculars.func_72(bVar4))
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
		aggregate.doc_book.func_113(aggregate.fm_mission_controller.func_6882(bParam0), aggregate.fm_mission_controller.func_1773(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (aggregate.doc_book.func_93(0))
	{
		if (aggregate.doc_book.func_95(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return aggregate.doc_book.func_96(bParam0, *iParam1, iParam2);
	}
	return 0;
}

int func_127(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (aggregate.binoculars.func_70("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
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
				if (!aggregate.binoculars.func_71(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
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
						if (aggregate.doc_book.func_214(&Var2, 0))
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
		if (aggregate.binoculars.func_71(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
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
		if (aggregate.binoculars.func_71(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
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
		if (aggregate.bandana.func_30(uParam0[iVar0 /*11*/], 0))
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
		if (aggregate.bandana.func_30(uParam0[iVar0 /*11*/], 0))
		{
			((*uParam0)[iVar0 /*11*/])->f_6 = aggregate.coffee_drinking.func_101(uParam0[iVar0 /*11*/], -949239683);
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

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !aggregate.fm_mission_controller.func_5485(bParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && aggregate.fm_mission_controller.func_5485(bParam0, Var2, 1))
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
			if (aggregate.aberdeenpigfarm.func_45() != -1)
			{
				aggregate.binoculars.func_18(571, 1);
			}
			else
			{
				aggregate.binoculars.func_18(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!aggregate.aberdeenpigfarm.func_125(0, 0, 1))
		{
			aggregate.dynamic_craft_scenario.func_333(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_144(bool bParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = -1;
	switch (bParam0)
	{
		case -1375947476: /* GXTEntry: "Special Horse Medicine Pamphlet" */
			iVar0 = 337;
			break;
		case -1704241585: /* GXTEntry: "Special Horse Reviver Pamphlet" */
			iVar0 = 338;
			break;
		case -1267972061: /* GXTEntry: "Horse Ointment Pamphlet" */
			iVar0 = 339;
			break;
		case -142033055: /* GXTEntry: "Special Horse Stimulant Pamphlet" */
			iVar0 = 340;
			break;
		case 890514341: /* GXTEntry: "Horse Meal Pamphlet" */
			iVar0 = 341;
			break;
		case -58963793: /* GXTEntry: "Special Health Cure Pamphlet" */
			iVar0 = 342;
			break;
		case 1882019322: /* GXTEntry: "Special Bitters Pamphlet" */
			iVar0 = 343;
			break;
		case 807302083: /* GXTEntry: "Special Snake Oil Pamphlet" */
			iVar0 = 344;
			break;
		case 617759310: /* GXTEntry: "Special Miracle Tonic Pamphlet" */
			iVar0 = 345;
			break;
		case -378547623: /* GXTEntry: "Potent Herbivore Bait Pamphlet" */
			iVar0 = 346;
			break;
		case 829545206: /* GXTEntry: "Potent Predator Bait Pamphlet" */
			iVar0 = 347;
			break;
		case 431374225: /* GXTEntry: "Dynamite Arrow Pamphlet" */
			iVar0 = 349;
			break;
		case 1619534881: /* GXTEntry: "Fire Arrow Pamphlet" */
			iVar0 = 350;
			break;
		case 2141714005:
			iVar0 = 352;
			break;
		case 1015404643: /* GXTEntry: "Small Game Arrow Pamphlet" */
			iVar0 = 353;
			break;
		case 983875052: /* GXTEntry: "Volatile Dynamite Pamphlet" */
			iVar0 = 354;
			break;
		case -1753730528: /* GXTEntry: "Fire Bottle Pamphlet" */
			iVar0 = 355;
			break;
		case 2131765035:
			iVar0 = 356;
			break;
		case -1740272183: /* GXTEntry: "Homing Tomahawk Pamphlet" */
			iVar0 = 357;
			break;
		case 1310680212: /* GXTEntry: "Improved Throwing Knife Pamphlet" */
			iVar0 = 358;
			break;
		case -1724192342: /* GXTEntry: "Improved Tomahawk Pamphlet" */
			iVar0 = 359;
			break;
		case 912296423: /* GXTEntry: "Poison Throwing Knife Pamphlet" */
			iVar0 = 360;
			break;
		case -566881549: /* GXTEntry: "Split Point Pamphlet" */
			iVar0 = 361;
			break;
		case 147796381: /* GXTEntry: "Express Explosive Pamphlet" */
			iVar0 = 362;
			break;
		case -120865369: /* GXTEntry: "Incendiary Buckshot Pamphlet" */
			iVar0 = 363;
			break;
		case 1158808845: /* GXTEntry: "Explosive Slug Pamphlet" */
			iVar0 = 364;
			break;
		case 1949608568: /* GXTEntry: "Tracking Arrow Pamphlet" */
			sVar1 = "UI_PAMPHLET_TRACKING_ARROW_T1";
			break;
		case 20024186:
			sVar1 = "AMMO_POISONBOTTLE";
			break;
	}
	if (iVar0 != -1)
	{
		aggregate.binoculars.func_18(iVar0, 0);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		aggregate.generic_document_inspection.func_250(811, sVar1, 1);
	}
}

void func_148(var uParam0)
{
	switch (uParam0->f_10)
	{
		case -171130052: /* GXTEntry: "Map - Arrowheads" */
			func_251(uParam0, -1995062316);
			break;
		case -1168276602: /* GXTEntry: "Map - Bird Eggs" */
			func_251(uParam0, -149719013);
			break;
		case -849054700: /* GXTEntry: "Map - Antique Alcohol Bottles" */
			func_251(uParam0, 1239889275);
			break;
		case -944411166: /* GXTEntry: "Map - Coins" */
			func_251(uParam0, 143267379);
			break;
		case 1850181232: /* GXTEntry: "Map - Family Heirlooms" */
			func_251(uParam0, -944041124);
			break;
		case 1133082501: /* GXTEntry: "Map - Lost Jewelry" */
			func_251(uParam0, 1562621600);
			break;
		case -1017335808: /* GXTEntry: "Map - Tarot Cards" */
			func_251(uParam0, 1940829793);
			break;
		case 2147314556:
			func_251(uParam0, 781094263);
			break;
		case 1509009970: /* GXTEntry: "Map - Miscellaneous" */
			func_251(uParam0, 0);
			break;
		default:
			func_251(uParam0, 0);
			break;
	}
}

int func_149(vector3[] vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < vParam0.x)
	{
		if (!aggregate.annesburg.func_121(*(vParam0[iVar0 /*3*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 5;
}

void func_152(struct<12> Param0, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	Global_17173.f_2954.f_17 = Param0.f_10;
	iVar0 = 0;
	while (iVar0 < Param0)
	{
		(Global_17173.f_2954.f_1[iVar0 /*5*/])->f_1 = { *(Param0[iVar0 /*3*/]) };
		(Global_17173.f_2954.f_1[iVar0 /*5*/])->f_4 = &Param0.f_11[iVar0];
		iVar0++;
	}
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

	iVar9 = func_253();
	iVar10 = iVar9;
	aggregate.coffee_drinking.func_60(&iVar10, 0, 0, 0, 1, 0, 0);
	iVar11 = func_255();
	func_256(iVar9, &uVar12, &uVar13, &uVar14);
	func_256(iVar10, &uVar15, &uVar16, &uVar17);
	func_258(&Var0, 36427, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_1), 36610, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_8), 36715, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_3), 36820, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_6), 36925, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_7), 37030, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_4), 37135, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_5), 37240, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
	func_258(&(Var0.f_2), 37345, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, iVar11);
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

Vector3 func_156(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_269(&Var3, iParam0) && func_270(&Var3))
	{
		aggregate.flow_controller.func_459(Var3, 924198834, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_157(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_269(&Var3, iParam0) && func_270(&Var3))
	{
		aggregate.flow_controller.func_459(Var3, 1334964216, &vVar0, 1);
	}
	return vVar0;
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
					func_289(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_289(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_289(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_289(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_289(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_289(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_289(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_289(&(uParam0->f_5), 7, 2, 0, 0);
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
					func_289(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					func_289(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					func_289(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					func_289(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					func_289(&(uParam0->f_5), iVar2, 2, 0, 0);
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
					func_289(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_289(&(uParam0->f_5), iVar2, 2, 1, 0);
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
					func_289(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_289(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_289(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_289(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = bParam1;
	func_289(&(uParam0->f_5), 1, 1, 1, 0);
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
					func_289(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_289(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_289(&(uParam0->f_5), iVar2, 2, 0, 0);
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
					func_289(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_289(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_289(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_289(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_289(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_289(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_289(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_289(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_289(&(uParam0->f_5), 8, 3, 1, 0);
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
	switch (aggregate.coffee_drinking.func_101(bParam1, -949239683))
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
			if (Global_1939221->f_10477 != 1061777683 || aggregate.coffee_drinking.func_101(bParam0, 1224357681) == aggregate.coffee_drinking.func_101(bParam1, 1224357681))
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

	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return false;
	}
	if (aggregate.fm_mission_controller.func_6319(bParam0, iParam1, &uVar2, &iVar1))
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

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	float fVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	struct<9> Var20;

	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, -1837820255, 0, 0, -1, iParam1, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var1, &iVar18, &iVar19, 0))
	{
		Var20 = { func_153() };
		if (iParam1 != 0)
		{
			func_359(uParam0, iVar18, iVar19);
		}
		iVar11 = 0;
		while (iVar11 < iVar19)
		{
			bVar17 = aggregate.fm_mission_controller.func_6851(iVar11, iVar18);
			if (func_360(bVar17))
			{
				if (aggregate.bandana.func_11(bVar17, 781094263))
				{
					if (aggregate.bandana.func_11(bVar17, 1307628809))
					{
						iVar12 = 0;
						while (iVar12 <= 8)
						{
							iVar0 = func_361(Var20.f_7, bVar17, iVar12);
							vVar13 = { func_362(iVar0, bVar17) };
							fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true);
							func_363(uParam0, bVar17, vVar13, fVar16);
							iVar12++;
						}
					}
					else if (aggregate.bandana.func_11(bVar17, 683680997))
					{
						iVar12 = 0;
						while (iVar12 <= 5)
						{
							iVar0 = func_361(Var20.f_7, bVar17, iVar12);
							vVar13 = { func_362(iVar0, bVar17) };
							fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true);
							func_363(uParam0, bVar17, vVar13, fVar16);
							iVar12++;
						}
					}
					else if (aggregate.bandana.func_11(bVar17, -283942357))
					{
						if (bVar17 != 1338475089 && bVar17 != -1183422860)
						{
							iVar12 = 0;
							while (iVar12 <= 2)
							{
								iVar0 = func_361(Var20.f_7, bVar17, iVar12);
								vVar13 = { func_362(iVar0, bVar17) };
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true);
								func_363(uParam0, bVar17, vVar13, fVar16);
								iVar12++;
							}
						}
					}
				}
				else if ((aggregate.bandana.func_11(bVar17, -149719013) && aggregate.bandana.func_11(bVar17, -283942357)) && bVar17 != 1053249385)
				{
					iVar12 = 0;
					while (iVar12 <= 1)
					{
						iVar0 = func_364(Var20.f_6, iVar12);
						vVar13 = { func_362(iVar0, bVar17) };
						fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true);
						func_363(uParam0, bVar17, vVar13, fVar16);
						iVar12++;
					}
				}
				else
				{
					iVar0 = func_365(&Var20, bVar17);
					vVar13 = { func_362(iVar0, bVar17) };
					fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar13, true);
					func_363(uParam0, bVar17, vVar13, fVar16);
				}
			}
			iVar11++;
		}
		aggregate.fm_mission_controller.func_6855(iVar18);
	}
}

var func_253()
{
	var uVar0;
	struct<6> Var1;

	CLOCK::GET_POSIX_TIME(&Var1, &(Var1.f_1), &(Var1.f_2), &(Var1.f_3), &(Var1.f_4), &(Var1.f_5));
	aggregate.blackwater.func_122(&uVar0, Var1.f_5);
	aggregate.blackwater.func_121(&uVar0, Var1.f_4);
	aggregate.blackwater.func_120(&uVar0, Var1.f_3);
	aggregate.blackwater.func_226(&uVar0, Var1.f_2);
	aggregate.blackwater.func_228(&uVar0, (Var1.f_1 - 1));
	aggregate.blackwater.func_230(&uVar0, (Var1 - 100));
	return uVar0;
}

int func_255()
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	iVar7 = Var0.f_2;
	iVar8 = Var0.f_1;
	iVar9 = Var0;
	if (iVar8 <= 2)
	{
		iVar8 += 12;
		iVar9 = (iVar9 - 1);
	}
	iVar10 = (iVar9 % 100);
	iVar11 = (iVar9 / 100);
	iVar12 = (((((iVar7 + ((13 * iVar8 + 1) / 5)) + iVar10) + (iVar10 / 4)) + (iVar11 / 4)) + (5 * iVar11));
	iVar13 = (iVar12 + 6 % 7);
	return iVar13;
}

void func_256(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_380(iParam0);
	*uParam1 = ((aggregate.blackwater.func_229(iParam0) + aggregate.blackwater.func_227(iParam0)) + aggregate.blackwater.func_225(iParam0));
	*uParam2 = iVar0;
	*uParam3 = aggregate.blackwater.func_225(iParam0);
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 262189671;
		case 1:
			return -1865796416;
		case 2:
			return -2102912900;
		case 3:
			return -1471781960;
		case 4:
			return -1711487195;
		case 5:
			return 1532840411;
		default:
			break;
	}
	return 262189671;
}

void func_258(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = (func_381(uParam2, uParam3, uParam4) % 6);
	iVar1 = (func_381(uParam5, uParam6, uParam7) % 6);
	if (iVar1 == iVar0)
	{
		iParam8++;
		if (iParam8 >= 6)
		{
			iParam8++;
		}
		iVar0 = ((iVar0 + iParam8) % 6);
	}
	Stack.Push(iVar0);
	Call_Loc(iParam1);
	*uParam0 = StackVal;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1859451998;
		case 1:
			return 467802382;
		case 2:
			return 212892331;
		case 3:
			return -137539355;
		case 4:
			return -366824048;
		case 5:
			return -1952384882;
		default:
			break;
	}
	return -1859451998;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1381272898;
		case 1:
			return 1539809320;
		case 2:
			return -2102137352;
		case 3:
			return 199098446;
		case 4:
			return 1462376165;
		case 5:
			return 1885620569;
		default:
			break;
	}
	return 1381272898;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1285238734;
		case 1:
			return -888012916;
		case 2:
			return -1211213567;
		case 3:
			return -1116052391;
		case 4:
			return 1314063884;
		case 5:
			return 1644572018;
		default:
			break;
	}
	return -1285238734;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561655701;
		case 1:
			return 1218924734;
		case 2:
			return 1516368947;
		case 3:
			return 1984048115;
		case 4:
			return -2013016202;
		case 5:
			return -1745916083;
		default:
			break;
	}
	return 1561655701;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40018245;
		case 1:
			return -1586372771;
		case 2:
			return -1356105008;
		case 3:
			return -1175547818;
		case 4:
			return -877579301;
		case 5:
			return 1138992134;
		default:
			break;
	}
	return 40018245;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -158969429;
		case 1:
			return 147060262;
		case 2:
			return -486692198;
		case 3:
			return 886099519;
		case 4:
			return -1789128804;
		case 5:
			return -1617026016;
		default:
			break;
	}
	return -158969429;
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1414390857;
		case 1:
			return -490927668;
		case 2:
			return 345304443;
		case 3:
			return -564887297;
		case 4:
			return 267084844;
		case 5:
			return 1120782832;
		default:
			break;
	}
	return -1414390857;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -112719434;
		case 1:
			return 1796697427;
		case 2:
			return -1827848894;
		case 3:
			return 1960444124;
		case 4:
			return -1311048995;
		case 5:
			return -1542168752;
		default:
			break;
	}
	return -112719434;
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

bool func_269(var uParam0, int iParam1)
{
	*uParam0 = Global_1198018->f_1201;
	uParam0->f_2 = 1335336942;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_270(var uParam0)
{
	uParam0->f_2 = 1037679264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_289(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_76[iParam1]), "isVisible", bParam3);
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

void func_359(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	struct<9> Var13;

	Var13 = { func_153() };
	iVar8 = 0;
	while (iVar8 < iParam2)
	{
		bVar10 = aggregate.fm_mission_controller.func_6851(iVar8, iParam1);
		if (func_360(bVar10))
		{
			if (aggregate.bandana.func_11(bVar10, 781094263))
			{
				if (aggregate.bandana.func_11(bVar10, 1307628809))
				{
					iVar9 = 0;
					while (iVar9 <= 8)
					{
						iVar12 = func_361(Var13.f_7, bVar10, iVar9);
						vVar0 = { func_362(iVar12, bVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
						func_418(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
						iVar9++;
					}
				}
				else if (aggregate.bandana.func_11(bVar10, 683680997))
				{
					iVar9 = 0;
					while (iVar9 <= 5)
					{
						iVar12 = func_361(Var13.f_7, bVar10, iVar9);
						vVar0 = { func_362(iVar12, bVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
						func_418(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
						iVar9++;
					}
				}
				else if (aggregate.bandana.func_11(bVar10, -283942357))
				{
					if (bVar10 != 1338475089 && bVar10 != -1183422860)
					{
						iVar9 = 0;
						while (iVar9 <= 2)
						{
							iVar12 = func_361(Var13.f_7, bVar10, iVar9);
							vVar0 = { func_362(iVar12, bVar10) };
							fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
							func_418(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
							iVar9++;
						}
					}
				}
			}
			else if ((aggregate.bandana.func_11(bVar10, -149719013) && aggregate.bandana.func_11(bVar10, -283942357)) && bVar10 != 1053249385)
			{
				iVar9 = 0;
				while (iVar9 <= 1)
				{
					iVar12 = func_364(Var13.f_6, iVar9);
					vVar0 = { func_362(iVar12, bVar10) };
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
					func_418(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
					iVar9++;
				}
			}
			else
			{
				iVar12 = func_365(&Var13, bVar10);
				vVar0 = { func_362(iVar12, bVar10) };
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
				func_418(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &bVar10);
			}
		}
		iVar8++;
	}
	func_419(uParam0, uVar11, vVar4, 0);
}

bool func_360(bool bParam0)
{
	int iVar0;

	if (aggregate.bandana.func_11(bParam0, -1995062316))
	{
		if (!aggregate.binoculars.func_32(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
		{
			return false;
		}
		if (aggregate.bandana.func_11(bParam0, -283942357))
		{
			if (!aggregate.binoculars.func_32(-862059856 /* GXTEntry: "Metal Detector" */, 1))
			{
				return false;
			}
		}
	}
	if ((aggregate.bandana.func_11(bParam0, 1562621600) || aggregate.bandana.func_11(bParam0, 143267379)) || aggregate.bandana.func_11(bParam0, -944041124))
	{
		if (!aggregate.binoculars.func_32(-862059856 /* GXTEntry: "Metal Detector" */, 1))
		{
			return false;
		}
	}
	iVar0 = aggregate.generic_document_inspection.func_420(12);
	if (iVar0 < 5)
	{
		if (aggregate.bandana.func_11(bParam0, 683680997))
		{
			return false;
		}
	}
	if (iVar0 < 10)
	{
		if (aggregate.bandana.func_11(bParam0, -283942357))
		{
			return false;
		}
	}
	return true;
}

int func_361(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 40018245:
			iVar0 = 0;
			break;
		case -1586372771:
			iVar0 = 1;
			break;
		case -1356105008:
			iVar0 = 2;
			break;
		case -1175547818:
			iVar0 = 3;
			break;
		case -877579301:
			iVar0 = 4;
			break;
		case 1138992134:
			iVar0 = 5;
			break;
	}
	if (aggregate.bandana.func_11(bParam1, 1307628809))
	{
		iParam2 = (iParam2 + iVar0 * 9);
	}
	else if (aggregate.bandana.func_11(bParam1, 683680997))
	{
		iParam2 = (iParam2 + iVar0 * 6);
	}
	else if (aggregate.bandana.func_11(bParam1, -283942357))
	{
		iParam2 = (iParam2 + iVar0 * 3);
	}
	switch (iParam2)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		case 32:
			return 32;
		case 33:
			return 33;
		case 34:
			return 34;
		case 35:
			return 35;
		case 36:
			return 36;
		case 37:
			return 37;
		case 38:
			return 38;
		case 39:
			return 39;
		case 40:
			return 40;
		case 41:
			return 41;
		case 42:
			return 42;
		case 43:
			return 43;
		case 44:
			return 44;
		case 45:
			return 45;
		case 46:
			return 46;
		case 47:
			return 47;
		case 48:
			return 48;
		case 49:
			return 49;
		case 50:
			return 50;
		case 51:
			return 51;
		case 52:
			return 52;
		case 53:
			return 53;
		default:
			break;
	}
	return 0;
}

Vector3 func_362(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (aggregate.bandana.func_11(bParam1, -1995062316))
	{
		vVar0 = { func_421(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, -149719013))
	{
		vVar0 = { func_422(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, 143267379))
	{
		vVar0 = { func_423(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, -944041124))
	{
		vVar0 = { func_424(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, 1239889275))
	{
		vVar0 = { func_425(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, 1940829793))
	{
		vVar0 = { func_426(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, 1562621600))
	{
		vVar0 = { func_427(iParam0, bParam1) };
	}
	if (aggregate.bandana.func_11(bParam1, 781094263))
	{
		vVar0 = { func_428(iParam0, bParam1) };
	}
	return vVar0;
}

void func_363(var uParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if ((func_429(bParam1, vParam2) && func_360(bParam1)) && !aggregate.annesburg.func_121(vParam2))
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_11)
		{
			vVar0 = { *((*uParam0)[iVar4 /*3*/]) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
			if (iVar4 == 0)
			{
				if (aggregate.annesburg.func_121(*((*uParam0)[iVar4 /*3*/])))
				{
					func_419(uParam0, bParam1, vParam2, iVar4);
				}
				else if (bParam1 != &uParam0->f_11[iVar4])
				{
					if (fParam5 < fVar3)
					{
						func_419(uParam0, bParam1, vParam2, iVar4);
					}
				}
			}
			else if (!func_430(uParam0, bParam1))
			{
				if (aggregate.annesburg.func_121(*((*uParam0)[iVar4 /*3*/])))
				{
					func_419(uParam0, bParam1, vParam2, iVar4);
				}
				else if (!func_431(uParam0, iVar4))
				{
					if (fParam5 < fVar3)
					{
						func_419(uParam0, bParam1, vParam2, iVar4);
					}
				}
				else
				{
					func_419(uParam0, bParam1, vParam2, iVar4 + 1);
				}
			}
			iVar4++;
		}
	}
}

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1561655701:
			iParam1 = iParam1;
			break;
		case 1218924734:
			iParam1 += 2;
			break;
		case 1516368947:
			iParam1 += 4;
			break;
		case 1984048115:
			iParam1 += 6;
			break;
		case -2013016202:
			iParam1 += 8;
			break;
		case -1745916083:
			iParam1 += 10;
			break;
	}
	switch (iParam1)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_365(var uParam0, bool bParam1)
{
	if (aggregate.bandana.func_11(bParam1, 781094263))
	{
	}
	else if (aggregate.bandana.func_11(bParam1, -149719013))
	{
		switch (uParam0->f_6)
		{
			case 1561655701:
				return 0;
			case 1218924734:
				return 1;
			case 1516368947:
				return 2;
			case 1984048115:
				return 3;
			case -2013016202:
				return 4;
			case -1745916083:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, -1995062316))
	{
		switch (*uParam0)
		{
			case 262189671:
				return 0;
			case -1865796416:
				return 1;
			case -2102912900:
				return 2;
			case -1471781960:
				return 3;
			case -1711487195:
				return 4;
			case 1532840411:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, 143267379))
	{
		switch (uParam0->f_3)
		{
			case -1285238734:
				return 0;
			case -888012916:
				return 1;
			case -1211213567:
				return 2;
			case -1116052391:
				return 3;
			case 1314063884:
				return 4;
			case 1644572018:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, -944041124))
	{
		switch (uParam0->f_4)
		{
			case -158969429:
				return 0;
			case 147060262:
				return 1;
			case -486692198:
				return 2;
			case 886099519:
				return 3;
			case -1789128804:
				return 4;
			case -1617026016:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, 1239889275))
	{
		switch (uParam0->f_1)
		{
			case -1859451998:
				return 0;
			case 467802382:
				return 1;
			case 212892331:
				return 2;
			case -137539355:
				return 3;
			case -366824048:
				return 4;
			case -1952384882:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, 1940829793))
	{
		switch (uParam0->f_8)
		{
			case 1381272898:
				return 0;
			case 1539809320:
				return 1;
			case -2102137352:
				return 2;
			case 199098446:
				return 3;
			case 1462376165:
				return 4;
			case 1885620569:
				return 5;
			default:
				break;
		}
	}
	else if (aggregate.bandana.func_11(bParam1, 1562621600))
	{
		switch (uParam0->f_5)
		{
			case -1414390857:
				return 0;
			case -490927668:
				return 1;
			case 345304443:
				return 2;
			case -564887297:
				return 3;
			case 267084844:
				return 4;
			case 1120782832:
				return 5;
			default:
				break;
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -15 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = aggregate.blackwater.func_225(iParam0);
	switch (aggregate.blackwater.func_227(iParam0))
	{
		case 0:
			iVar1 = 11;
			break;
		case 1:
			iVar1 = 12;
			break;
		case 2:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 4:
			iVar1 = 3;
			break;
		case 5:
			iVar1 = 4;
			break;
		case 6:
			iVar1 = 5;
			break;
		case 7:
			iVar1 = 6;
			break;
		case 8:
			iVar1 = 7;
			break;
		case 9:
			iVar1 = 8;
			break;
		case 10:
			iVar1 = 9;
			break;
		case 11:
			iVar1 = 10;
			break;
	}
	iVar2 = aggregate.blackwater.func_229(iParam0);
	iVar3 = (iVar2 % 100);
	iVar4 = (iVar2 / 100);
	iVar5 = (((((iVar0 + (((13 * iVar1) - 1) / 5)) + iVar3) + (iVar3 / 4)) + (iVar4 / 4)) - (2 * iVar4));
	iVar6 = (iVar5 % 7);
	if (iVar6 < 0)
	{
		iVar6 += 7;
	}
	switch (iVar6)
	{
		case 0:
			iVar7 = 0;
			break;
		case 1:
			iVar7 = 1;
			break;
		case 2:
			iVar7 = 2;
			break;
		case 3:
			iVar7 = 3;
			break;
		case 4:
			iVar7 = 4;
			break;
		case 5:
			iVar7 = 5;
			break;
		case 6:
			iVar7 = 6;
			break;
	}
	return iVar7;
}

int func_381(var uParam0, var uParam1, var uParam2)
{
	float fVar0;

	*uParam0 = ((171 * *uParam0) % 30269);
	*uParam1 = ((172 * *uParam1) % 30307);
	*uParam2 = ((170 * *uParam2) % 30323);
	fVar0 = (((BUILTIN::TO_FLOAT(*uParam0) / 30269f) + (BUILTIN::TO_FLOAT(*uParam1) / 30307f)) + (BUILTIN::TO_FLOAT(*uParam2) / 30323f));
	*uParam0 = aggregate.blackwater.func_292(0 == *uParam0, 171, *uParam0);
	*uParam1 = aggregate.blackwater.func_292(0 == *uParam1, 172, *uParam1);
	*uParam2 = aggregate.blackwater.func_292(0 == *uParam2, 170, *uParam2);
	return BUILTIN::ROUND((1000f * fVar0));
}

void func_382(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
}

int func_384(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = aggregate.fme_animal_tagging.func_1717(iVar0, 1, 0);
		if (!aggregate.fme_animal_tagging.func_1628(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (aggregate.fme_animal_tagging.func_1718(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || aggregate.fm_mission_controller.func_1632(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_385(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = aggregate.fme_animal_tagging.func_1717(iVar0, 0, 1);
		if (!aggregate.fme_animal_tagging.func_1628(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (aggregate.fme_animal_tagging.func_1719(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || aggregate.fm_mission_controller.func_1632(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
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

bool func_413(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(-623226361, 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1452445456, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(332438661, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1632674359, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(56759509, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(2145533727, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1874365462, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1658668866, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(90781239, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1997097980, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(920487791, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-668555046, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-839148413, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(10424351, 0))
	{
		return true;
	}
	return false;
}

void func_418(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	if (func_429(*bParam5, *uParam3))
	{
		if (*uParam0 == 0f || *fParam1 < *uParam0)
		{
			*uParam2 = { *uParam3 };
			*uParam0 = *fParam1;
			*uParam4 = *bParam5;
		}
	}
}

void func_419(var uParam0, bool bParam1, vector3 vParam2, int iParam5)
{
	uParam0->f_11[iParam5] = bParam1;
	*((*uParam0)[iParam5 /*3*/]) = { vParam2 };
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

Vector3 func_422(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case -1117423291: /* GXTEntry: "Duck Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 130.6175f, 1513.541f, 115.4675f };
					break;
				case 1:
					vVar0 = { 2380.566f, 987.6273f, 73.02643f };
					break;
				case 2:
					vVar0 = { 2759.191f, 2185.55f, 155.8484f };
					break;
				case 3:
					vVar0 = { 1572.564f, 1365.523f, 144.8364f };
					break;
				case 4:
					vVar0 = { -2446.152f, -533.0729f, 141.4806f };
					break;
				case 5:
					vVar0 = { -2500.409f, -1472.979f, 146.5042f };
					break;
			}
			break;
		case 742074887: /* GXTEntry: "Eagle Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2220.327f, -555.082f, 151.4888f };
					break;
				case 1:
					vVar0 = { -1215.258f, 1370.017f, 260.743f };
					break;
				case 2:
					vVar0 = { -2113.571f, -73.96356f, 262.4125f };
					break;
				case 3:
					vVar0 = { -984.1674f, 1529.783f, 247.623f };
					break;
				case 4:
					vVar0 = { -1513.108f, -340.9661f, 152.7582f };
					break;
				case 5:
					vVar0 = { -1955.492f, 2190.889f, 332.6355f };
					break;
				case 6:
					vVar0 = { -1170.96f, 1050.89f, 167.97f };
					break;
				case 7:
					vVar0 = { -2010.61f, -395.48f, 174.74f };
					break;
				case 8:
					vVar0 = { -1930.982f, 1240.447f, 194.9847f };
					break;
				case 9:
					vVar0 = { -1875.668f, -241.1899f, 199.1293f };
					break;
				case 10:
					vVar0 = { -1183.784f, 2093.181f, 355.679f };
					break;
				case 11:
					vVar0 = { -2374.11f, 193.6417f, 211.24f };
					break;
			}
			break;
		case -1232280687: /* GXTEntry: "Egret Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2057.918f, -1722.14f, 43.88942f };
					break;
				case 1:
					vVar0 = { 1855.121f, -859.4686f, 45.96879f };
					break;
				case 2:
					vVar0 = { 2477.28f, -273.61f, 44.34f };
					break;
				case 3:
					vVar0 = { 2336.483f, -853.3739f, 45.38264f };
					break;
				case 4:
					vVar0 = { 1924.734f, -1141.323f, 44.74717f };
					break;
				case 5:
					vVar0 = { 1853.557f, -351.4071f, 50.09297f };
					break;
			}
			break;
		case -158375659: /* GXTEntry: "Goose Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1455.642f, -2012.715f, 40.79536f };
					break;
				case 1:
					vVar0 = { 175.0837f, -762.0237f, 40.92589f };
					break;
				case 2:
					vVar0 = { 1650.297f, -2080.092f, 41.33918f };
					break;
				case 3:
					vVar0 = { -2151.871f, -2033.236f, 55.35887f };
					break;
				case 4:
					vVar0 = { -372.8311f, -1101.837f, 41.17361f };
					break;
				case 5:
					vVar0 = { 435.17f, -1659.833f, 43.82178f };
					break;
			}
			break;
		case 2060029625: /* GXTEntry: "Hawk Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1685.95f, 1813.614f, 218.2414f };
					break;
				case 1:
					vVar0 = { -1583.697f, 3174.265f, 484.5643f };
					break;
				case 2:
					vVar0 = { 813.1831f, 1999.82f, 283.3279f };
					break;
				case 3:
					vVar0 = { -1039.653f, 2650.086f, 318.0255f };
					break;
				case 4:
					vVar0 = { -215.7416f, 1607.373f, 168.6563f };
					break;
				case 5:
					vVar0 = { -1491.561f, 2597.406f, 374.8609f };
					break;
				case 6:
					vVar0 = { 1353.112f, 1545.57f, 198.9298f };
					break;
				case 7:
					vVar0 = { -712.7252f, 2593.39f, 339.63f };
					break;
				case 8:
					vVar0 = { 451.5644f, 1626.011f, 207.8618f };
					break;
				case 9:
					vVar0 = { -1336.23f, 2000.95f, 326.51f };
					break;
				case 10:
					vVar0 = { 90.35796f, 1705.762f, 187.9509f };
					break;
				case 11:
					vVar0 = { -715.788f, 2847.03f, 350.9099f };
					break;
			}
			break;
		case 322658308: /* GXTEntry: "Heron Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2129.335f, -478.5026f, 44.24976f };
					break;
				case 1:
					vVar0 = { 2165.205f, -856.9f, 46.1399f };
					break;
				case 2:
					vVar0 = { 1721.049f, -998.6505f, 48.03225f };
					break;
				case 3:
					vVar0 = { 1936.41f, -1843.55f, 47.92f };
					break;
				case 4:
					vVar0 = { 2230.212f, -264.3365f, 45.79628f };
					break;
				case 5:
					vVar0 = { 2239.663f, -1140.097f, 46.36992f };
					break;
			}
			break;
		case 410290576: /* GXTEntry: "Loon Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 682.966f, -1866.18f, 43.12862f };
					break;
				case 1:
					vVar0 = { -699.7326f, -463.4799f, 40.81263f };
					break;
				case 2:
					vVar0 = { -1098.347f, -905.8218f, 44.19538f };
					break;
				case 3:
					vVar0 = { -1912.605f, -1097.146f, 74.84635f };
					break;
				case 4:
					vVar0 = { -862.9524f, 587.9164f, 58.90303f };
					break;
				case 5:
					vVar0 = { 453.1795f, -663.71f, 47.58012f };
					break;
			}
			break;
		case 229697410: /* GXTEntry: "Spoonbill Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2054.959f, -1424.426f, 48.92442f };
					break;
				case 1:
					vVar0 = { 2385.209f, -628.4365f, 49.72212f };
					break;
				case 2:
					vVar0 = { 2803.415f, -695.4971f, 45.49643f };
					break;
				case 3:
					vVar0 = { 1765.679f, -557.788f, 49.223f };
					break;
				case 4:
					vVar0 = { 1569.394f, -913.1165f, 45.72157f };
					break;
				case 5:
					vVar0 = { 2004.221f, -1723.626f, 50.89873f };
					break;
			}
			break;
		case 1053249385: /* GXTEntry: "Vulture Egg" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2916.537f, -2288.44f, 76.43781f };
					break;
				case 1:
					vVar0 = { -2054.743f, -1925.456f, 112.2727f };
					break;
				case 2:
					vVar0 = { 2653.375f, 1752.763f, 110.4145f };
					break;
				case 3:
					vVar0 = { -2531.534f, -2954.918f, 66.75875f };
					break;
				case 4:
					vVar0 = { 2719.022f, 2190.373f, 156.71f };
					break;
				case 5:
					vVar0 = { 2354.067f, 1451.83f, 142.5797f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_423(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case 1496994240: /* GXTEntry: "1700 New Yorke Token" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2384.636f, 702.7831f, 68.47878f };
					break;
				case 1:
					vVar0 = { 1413.694f, -1774.543f, 65.75599f };
					break;
				case 2:
					vVar0 = { -2715.088f, 716.8932f, 170.1759f };
					break;
				case 3:
					vVar0 = { -4687.155f, -3742.616f, 9.319794f };
					break;
				case 4:
					vVar0 = { 2305.91f, 2000.815f, 179.0962f };
					break;
				case 5:
					vVar0 = { 2465.432f, -991.1915f, 40.44379f };
					break;
			}
			break;
		case 1030821510: /* GXTEntry: "1787 One Cent Token" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 602.0844f, 550.2792f, 111.3233f };
					break;
				case 1:
					vVar0 = { 434.1988f, 1643.844f, 196.8673f };
					break;
				case 2:
					vVar0 = { -1705.896f, -1302.72f, 92.48844f };
					break;
				case 3:
					vVar0 = { -1372.737f, -2387.345f, 41.15795f };
					break;
				case 4:
					vVar0 = { 2107.461f, -1276.037f, 41.274f };
					break;
				case 5:
					vVar0 = { -2195.814f, 752.0993f, 122.809f };
					break;
			}
			break;
		case -329116887: /* GXTEntry: "1789 Penny" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2868.94f, 1774.43f, 134.0816f };
					break;
				case 1:
					vVar0 = { 1639.768f, 833.7402f, 143.8371f };
					break;
				case 2:
					vVar0 = { 1196.359f, -570.8525f, 67.2235f };
					break;
				case 3:
					vVar0 = { -5544.435f, -2897.414f, -4.08f };
					break;
				case 4:
					vVar0 = { 2280.038f, -539.038f, 40.566f };
					break;
				case 5:
					vVar0 = { -537.863f, 2671.4f, 317.747f };
					break;
			}
			break;
		case -753018368: /* GXTEntry: "1792 Liberty Quarter" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5170.19f, -2777.566f, 7.988142f };
					break;
				case 1:
					vVar0 = { -371.9685f, -80.23643f, 42.88546f };
					break;
				case 2:
					vVar0 = { -254.3018f, 1348.715f, 138.5417f };
					break;
				case 3:
					vVar0 = { 1585.462f, -1844.872f, 51.353f };
					break;
				case 4:
					vVar0 = { -3287.94f, -2802.297f, -4.167f };
					break;
				case 5:
					vVar0 = { 359.265f, 1421.24f, 175.937f };
					break;
			}
			break;
		case -1884965711: /* GXTEntry: "1792 Nickel" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1788.771f, -581.2818f, 154.9099f };
					break;
				case 1:
					vVar0 = { 2535.496f, 1195.557f, 163.4559f };
					break;
				case 2:
					vVar0 = { 3139.878f, 1530.139f, 52.69886f };
					break;
				case 3:
					vVar0 = { -2269.376f, -1330.475f, 132.516f };
					break;
				case 4:
					vVar0 = { -4342.196f, -2604.031f, -1.945f };
					break;
				case 5:
					vVar0 = { 1374.679f, -2080.701f, 50.768f };
					break;
			}
			break;
		case 2116252151:
			switch (iParam0)
			{
				case 0:
					vVar0 = { 129.2208f, 1003.35f, 208.2303f };
					break;
				case 1:
					vVar0 = { -395.5179f, 1753.13f, 215.2918f };
					break;
				case 2:
					vVar0 = { 922.476f, 271.5775f, 115.754f };
					break;
				case 3:
					vVar0 = { 2622.302f, -651.247f, 42.497f };
					break;
				case 4:
					vVar0 = { -1649.375f, -1717.725f, 82.658f };
					break;
				case 5:
					vVar0 = { 2718.649f, 706.791f, 78.061f };
					break;
			}
			break;
		case 1328162258: /* GXTEntry: "1794 Silver Dollar" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2497.531f, -419.3243f, 40.53325f };
					break;
				case 1:
					vVar0 = { -2350.628f, 112.6509f, 216.7536f };
					break;
				case 2:
					vVar0 = { -3545.135f, -3007.878f, 10.43144f };
					break;
				case 3:
					vVar0 = { 2690.942f, 2029.559f, 158.495f };
					break;
				case 4:
					vVar0 = { 828.481f, -1553.911f, 43.209f };
					break;
				case 5:
					vVar0 = { -1993.648f, -1627.849f, 116.137f };
					break;
			}
			break;
		case -1841900790: /* GXTEntry: "1795 Half Eagle" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1473.601f, 331.8847f, 89.07144f };
					break;
				case 1:
					vVar0 = { -6234.784f, -3518.823f, -31.67799f };
					break;
				case 2:
					vVar0 = { 81.67809f, 447.1742f, 153.211f };
					break;
				case 3:
					vVar0 = { -281.84f, 922.422f, 127.207f };
					break;
				case 4:
					vVar0 = { 1491.987f, 942.91f, 154.98f };
					break;
				case 5:
					vVar0 = { -1261.387f, -1607.831f, 79.704f };
					break;
			}
			break;
		case -1867083042: /* GXTEntry: "1796 Halfpenny" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1404.415f, -2665.34f, 41.33462f };
					break;
				case 1:
					vVar0 = { -410.9144f, 668.2853f, 113.9756f };
					break;
				case 2:
					vVar0 = { -5420.417f, -2975.219f, 7.981212f };
					break;
				case 3:
					vVar0 = { -2704.466f, -2387.511f, 43.602f };
					break;
				case 4:
					vVar0 = { -3625.301f, -2570.524f, -15.811f };
					break;
				case 5:
					vVar0 = { 1948.57f, -679.584f, 40.927f };
					break;
			}
			break;
		case -1323673307: /* GXTEntry: "1797 Gold Eagle" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1268.305f, -386.9097f, 88.47926f };
					break;
				case 1:
					vVar0 = { 1957.905f, -159.5148f, 51.77026f };
					break;
				case 2:
					vVar0 = { -1648.063f, -2168.614f, 41.694f };
					break;
				case 3:
					vVar0 = { 895.89f, -1967.784f, 43.127f };
					break;
				case 4:
					vVar0 = { -2459.944f, 841.279f, 141.746f };
					break;
				case 5:
					vVar0 = { 2643.864f, -20.404f, 50.152f };
					break;
			}
			break;
		case 442429651: /* GXTEntry: "1798 Draped Bust Silver Dollar" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3207.183f, -3221.716f, -1.947383f };
					break;
				case 1:
					vVar0 = { 2110.998f, -1949.03f, 40.62194f };
					break;
				case 2:
					vVar0 = { 2428.506f, 579.6636f, 67.13865f };
					break;
				case 3:
					vVar0 = { -1673.309f, -336.558f, 173.006f };
					break;
				case 4:
					vVar0 = { -5387.589f, -3660.634f, -23.076f };
					break;
				case 5:
					vVar0 = { -3711.403f, -3618.255f, 41.47f };
					break;
			}
			break;
		case 1640145676: /* GXTEntry: "1800 Five Dollar Bechtler" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 999.2269f, -943.6021f, 61.59056f };
					break;
				case 1:
					vVar0 = { -1036.054f, -1663.117f, 80.65519f };
					break;
				case 2:
					vVar0 = { 1182.359f, 2036.899f, 323.0538f };
					break;
				case 3:
					vVar0 = { -1645.33f, -1340.855f, 82.968f };
					break;
				case 4:
					vVar0 = { 371.924f, 1069.85f, 189.326f };
					break;
				case 5:
					vVar0 = { 1982.666f, 1795.47f, 191.102f };
					break;
			}
			break;
		case -1982102297: /* GXTEntry: "1800 Gold Dollar" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1393.007f, 1184.725f, 220.978f };
					break;
				case 1:
					vVar0 = { -4244.491f, -3191.862f, 17.72649f };
					break;
				case 2:
					vVar0 = { 1192.889f, -1348.479f, 70.41161f };
					break;
				case 3:
					vVar0 = { -3898.082f, -3165.799f, -0.558f };
					break;
				case 4:
					vVar0 = { 365.79f, -15.661f, 99.122f };
					break;
				case 5:
					vVar0 = { -1992.12f, -1036.359f, 73.885f };
					break;
			}
			break;
		case 285783511: /* GXTEntry: "1800 Gold Quarter" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1938.051f, 462.7608f, 115.6562f };
					break;
				case 1:
					vVar0 = { -2649.848f, -2979.265f, 69.05343f };
					break;
				case 2:
					vVar0 = { 1844.446f, -676.2562f, 40.97815f };
					break;
				case 3:
					vVar0 = { -2261.235f, -1921.091f, 115.661f };
					break;
				case 4:
					vVar0 = { -1852.999f, -398.465f, 168.327f };
					break;
				case 5:
					vVar0 = { 647.94f, -563.003f, 66.216f };
					break;
			}
			break;
		case -625323392: /* GXTEntry: "1800 Half Dime" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -746.9712f, 891.4087f, 107.9984f };
					break;
				case 1:
					vVar0 = { 192.283f, -409.8842f, 86.70686f };
					break;
				case 2:
					vVar0 = { -2264.846f, -504.1707f, 137.7239f };
					break;
				case 3:
					vVar0 = { -562.238f, -453.865f, 79.693f };
					break;
				case 4:
					vVar0 = { -2871.289f, -2024.989f, 77.634f };
					break;
				case 5:
					vVar0 = { -4331.344f, -2452.329f, 15.168f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_424(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case -753628968: /* GXTEntry: "Boar Bristle Brush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2794.538f, 855.7374f, 72.215f };
					break;
				case 1:
					vVar0 = { -4366.604f, -2417.883f, 19.56f };
					break;
				case 2:
					vVar0 = { -5853.86f, -3743.685f, -25.09f };
					break;
				case 3:
					vVar0 = { -292.6273f, 863.1826f, 119.9146f };
					break;
				case 4:
					vVar0 = { 2256.442f, -793.3142f, 44.26483f };
					break;
				case 5:
					vVar0 = { -1026.682f, -1628.977f, 78.407f };
					break;
			}
			break;
		case 1006600695: /* GXTEntry: "Ebony Hairbrush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2359.031f, -1222.644f, 46.655f };
					break;
				case 1:
					vVar0 = { 1133.524f, -981.9582f, 69.475f };
					break;
				case 2:
					vVar0 = { -757.2515f, -1457.008f, 55.58f };
					break;
				case 3:
					vVar0 = { 2406.756f, -1060.379f, 43.44f };
					break;
				case 4:
					vVar0 = { -881.9086f, -1647.193f, 68.594f };
					break;
				case 5:
					vVar0 = { -818.7466f, 356.2394f, 98.16889f };
					break;
			}
			break;
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1819.679f, -366.3559f, 166.325f };
					break;
				case 1:
					vVar0 = { -1352.955f, -2297.988f, 39.36f };
					break;
				case 2:
					vVar0 = { 2948.272f, 536.8262f, 49.64f };
					break;
				case 3:
					vVar0 = { -5624.502f, -2946.631f, 6.545f };
					break;
				case 4:
					vVar0 = { 1332.225f, -1375.457f, 79.685f };
					break;
				case 5:
					vVar0 = { 2222.584f, -769.3432f, 43.00125f };
					break;
			}
			break;
		case -1631158895: /* GXTEntry: "Horse Hair Brush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -825.8105f, -1322.975f, 47.703f };
					break;
				case 1:
					vVar0 = { 2989.978f, 2194.683f, 166.21f };
					break;
				case 2:
					vVar0 = { 2659.991f, -963.4542f, 44.43f };
					break;
				case 3:
					vVar0 = { -3617.383f, -2620.49f, -14.34254f };
					break;
				case 4:
					vVar0 = { 1183.269f, -99.6868f, 94.54f };
					break;
				case 5:
					vVar0 = { 3029.329f, 1781.402f, 84.215f };
					break;
			}
			break;
		case -1888442693: /* GXTEntry: "Rosewood Hairbrush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1119.399f, -1985.255f, 55.173f };
					break;
				case 1:
					vVar0 = { 1114.132f, 494.6769f, 97.36f };
					break;
				case 2:
					vVar0 = { 2947.771f, 1329.517f, 43.72f };
					break;
				case 3:
					vVar0 = { 1246.032f, -1319.193f, 76.11919f };
					break;
				case 4:
					vVar0 = { 1709.548f, -1006.039f, 42.95497f };
					break;
				case 5:
					vVar0 = { -1354.787f, 2444.092f, 308.264f };
					break;
			}
			break;
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -323.1665f, 759.1418f, 117.515f };
					break;
				case 1:
					vVar0 = { 1772.645f, -1359.118f, 44.99425f };
					break;
				case 2:
					vVar0 = { 1331.819f, -1373.854f, 79.94992f };
					break;
				case 3:
					vVar0 = { 1984.691f, 1197.64f, 171.467f };
					break;
				case 4:
					vVar0 = { 2337.355f, -1199.357f, 44.59311f };
					break;
				case 5:
					vVar0 = { 1370.993f, -879.3163f, 69.373f };
					break;
			}
			break;
		case 1416504149: /* GXTEntry: "Boxwood Comb" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2834.479f, 1686.983f, 129.74f };
					break;
				case 1:
					vVar0 = { -326.9715f, 758.7587f, 121.685f };
					break;
				case 2:
					vVar0 = { -815.4717f, 355.9247f, 97.282f };
					break;
				case 3:
					vVar0 = { 2822.545f, -1229.885f, 46.63329f };
					break;
				case 4:
					vVar0 = { 901.0944f, 264.487f, 116.0603f };
					break;
				case 5:
					vVar0 = { -1812.807f, -368.4038f, 165.69f };
					break;
			}
			break;
		case 249916796: /* GXTEntry: "Cherrywood Comb" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2638.189f, -1220.527f, 59.64f };
					break;
				case 1:
					vVar0 = { 1019.273f, -1764.641f, 51.246f };
					break;
				case 2:
					vVar0 = { 774.061f, 844.8143f, 118.123f };
					break;
				case 3:
					vVar0 = { -325.2552f, 776.0793f, 121.4301f };
					break;
				case 4:
					vVar0 = { -4786.58f, -2729.231f, -14.37767f };
					break;
				case 5:
					vVar0 = { 2453.964f, -1290.005f, 45.63f };
					break;
			}
			break;
		case -1763726091: /* GXTEntry: "Ivory Comb" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3697.792f, -2602.399f, -10.498f };
					break;
				case 1:
					vVar0 = { -861.1652f, -1281.893f, 43.37f };
					break;
				case 2:
					vVar0 = { 2310.05f, -327.5573f, 41.67405f };
					break;
				case 3:
					vVar0 = { -805.3663f, -1373.019f, 42.74774f };
					break;
				case 4:
					vVar0 = { 2557.495f, -919.4724f, 42.46076f };
					break;
				case 5:
					vVar0 = { 2945.906f, 1331.703f, 44.25066f };
					break;
			}
			break;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1373.292f, -878.3732f, 70.168f };
					break;
				case 1:
					vVar0 = { 2498.121f, -423.8156f, 44.15034f };
					break;
				case 2:
					vVar0 = { -5548.973f, -2399.283f, -8.260815f };
					break;
				case 3:
					vVar0 = { 2658.711f, -1296.561f, 50.89073f };
					break;
				case 4:
					vVar0 = { -1963.057f, 2156.889f, 327.6145f };
					break;
				case 5:
					vVar0 = { 517.873f, 566.1005f, 109.408f };
					break;
			}
			break;
		case 1979910825: /* GXTEntry: "Ebony Hairpin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 411.5402f, 2245.408f, 251.6545f };
					break;
				case 1:
					vVar0 = { 2409.379f, -1094.746f, 46.877f };
					break;
				case 2:
					vVar0 = { 1461.757f, -1361.581f, 77.8037f };
					break;
				case 3:
					vVar0 = { -4787.916f, -2751.693f, -15.705f };
					break;
				case 4:
					vVar0 = { 2063.961f, -854.2643f, 43.15271f };
					break;
				case 5:
					vVar0 = { -315.609f, -108.42f, 48.217f };
					break;
			}
			break;
		case -2058309720: /* GXTEntry: "Ivory Hairpin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1464.331f, 813.4755f, 100.369f };
					break;
				case 1:
					vVar0 = { 2777.36f, 535.0708f, 67.25923f };
					break;
				case 2:
					vVar0 = { 2474.075f, -1212.954f, 48.088f };
					break;
				case 3:
					vVar0 = { 2989.488f, 2184.499f, 166.8642f };
					break;
				case 4:
					vVar0 = { 1927.38f, 1964.747f, 262.468f };
					break;
				case 5:
					vVar0 = { 2638f, -1204.05f, 53.20464f };
					break;
			}
			break;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2130.675f, 150.517f, 74.84375f };
					break;
				case 1:
					vVar0 = { -4583.002f, -2906.29f, -18.69263f };
					break;
				case 2:
					vVar0 = { -936.1354f, -1283.669f, 50.2256f };
					break;
				case 3:
					vVar0 = { 2588.217f, 835.753f, 82.329f };
					break;
				case 4:
					vVar0 = { 1963.121f, -1217.119f, 41.096f };
					break;
				case 5:
					vVar0 = { 1004.484f, -1778.697f, 52.49139f };
					break;
			}
			break;
		case 1204853609: /* GXTEntry: "Metal Hairpin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4849.342f, -2670.424f, -13.5677f };
					break;
				case 1:
					vVar0 = { 2882.798f, -241.9108f, 41.67151f };
					break;
				case 2:
					vVar0 = { 2535.601f, 2287.424f, 175.5534f };
					break;
				case 3:
					vVar0 = { 2952.059f, 578.021f, 43.567f };
					break;
				case 4:
					vVar0 = { -5577.372f, -2577.874f, -9.463f };
					break;
				case 5:
					vVar0 = { -1500.475f, -784.755f, 102.998f };
					break;
			}
			break;
		case 1217599018: /* GXTEntry: "Carved Wooden Hairpin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2530.832f, 1161.717f, 223.6726f };
					break;
				case 1:
					vVar0 = { -608.9261f, 515.7279f, 95.39239f };
					break;
				case 2:
					vVar0 = { -2035.53f, -1890.794f, 109.1178f };
					break;
				case 3:
					vVar0 = { 2330.359f, -1358.269f, 44.966f };
					break;
				case 4:
					vVar0 = { 1374.128f, -1411.036f, 78.239f };
					break;
				case 5:
					vVar0 = { 3015.904f, 1761.071f, 82.617f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_425(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4185.033f, -2504.018f, 2.03f };
					break;
				case 1:
					vVar0 = { -156.9135f, 1489.64f, 115.954f };
					break;
				case 2:
					vVar0 = { -1350.047f, 2435.303f, 307.533f };
					break;
				case 3:
					vVar0 = { 3005.017f, 478.9952f, 44.30219f };
					break;
				case 4:
					vVar0 = { -852.3582f, -1223.754f, 43.45f };
					break;
				case 5:
					vVar0 = { 2704.826f, 436.4368f, 87.14f };
					break;
			}
			break;
		case -392829098: /* GXTEntry: "Cognac" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2005.196f, -1606.981f, 40.81687f };
					break;
				case 1:
					vVar0 = { -342.7149f, -154.2104f, 50.08184f };
					break;
				case 2:
					vVar0 = { 2784.679f, 531.0778f, 70.39831f };
					break;
				case 3:
					vVar0 = { -1892.469f, 1334.107f, 203.1187f };
					break;
				case 4:
					vVar0 = { -4368.796f, -2414.692f, 19.495f };
					break;
				case 5:
					vVar0 = { 1622.351f, -362.5829f, 76.39752f };
					break;
			}
			break;
		case 1465762285: /* GXTEntry: "Absinthe" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2701.95f, -1060.224f, 47.778f };
					break;
				case 1:
					vVar0 = { -1162.748f, -1941.539f, 41.755f };
					break;
				case 2:
					vVar0 = { -3830.432f, -3176.455f, -12.915f };
					break;
				case 3:
					vVar0 = { -5393.608f, -3665.479f, -24.45832f };
					break;
				case 4:
					vVar0 = { 2522.567f, 2300.74f, 192.7359f };
					break;
				case 5:
					vVar0 = { -2368.588f, 473.4166f, 132.0141f };
					break;
			}
			break;
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2459.279f, 843.0058f, 146.1292f };
					break;
				case 1:
					vVar0 = { 2368.739f, -859.4152f, 42.82577f };
					break;
				case 2:
					vVar0 = { 2689.612f, -1170.965f, 55.565f };
					break;
				case 3:
					vVar0 = { 2153.209f, -1647.306f, 40.60719f };
					break;
				case 4:
					vVar0 = { 609.4552f, -142.6026f, 144.8148f };
					break;
				case 5:
					vVar0 = { -1493.7f, 1246.622f, 317.667f };
					break;
			}
			break;
		case -130873515: /* GXTEntry: "London Dry Gin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 401.546f, 888.0118f, 153.86f };
					break;
				case 1:
					vVar0 = { 3036.985f, 432.5538f, 60.047f };
					break;
				case 2:
					vVar0 = { 1004.679f, -1765.193f, 47.386f };
					break;
				case 3:
					vVar0 = { -3548.462f, -3007.078f, 11.10074f };
					break;
				case 4:
					vVar0 = { -2238.278f, 734.3409f, 135.314f };
					break;
				case 5:
					vVar0 = { 2197.229f, -1504.087f, 45.872f };
					break;
			}
			break;
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1877.212f, -739.4555f, 42.63802f };
					break;
				case 1:
					vVar0 = { 2237.905f, -145.7879f, 46.67f };
					break;
				case 2:
					vVar0 = { -2582.484f, -1381.714f, 147.0984f };
					break;
				case 3:
					vVar0 = { -720.3767f, 925.5535f, 116.076f };
					break;
				case 4:
					vVar0 = { -5962.709f, -3241.012f, -21.635f };
					break;
				case 5:
					vVar0 = { 2904.69f, 1377.523f, 53.61996f };
					break;
			}
			break;
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2639.127f, -0.559658f, 51.19f };
					break;
				case 1:
					vVar0 = { 1938.338f, 1948.734f, 265.1676f };
					break;
				case 2:
					vVar0 = { -2842.498f, 138.7551f, 184.1602f };
					break;
				case 3:
					vVar0 = { -1807.661f, -405.8664f, 152.926f };
					break;
				case 4:
					vVar0 = { 2827.936f, 276.3889f, 47.178f };
					break;
				case 5:
					vVar0 = { -239.8812f, 771.0339f, 117.5361f };
					break;
			}
			break;
		case 1209263432: /* GXTEntry: "Scotch Whisky" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 402.3609f, -1257.529f, 40.7177f };
					break;
				case 1:
					vVar0 = { -6049.142f, -3254.608f, -14.27233f };
					break;
				case 2:
					vVar0 = { 1706.455f, -1003.528f, 43.2974f };
					break;
				case 3:
					vVar0 = { -5200.198f, -2095.815f, 12.36074f };
					break;
				case 4:
					vVar0 = { 760.401f, -975.8588f, 48.7123f };
					break;
				case 5:
					vVar0 = { 2872.421f, -258.6376f, 41.34779f };
					break;
			}
			break;
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1982.173f, -1668.795f, 117.2746f };
					break;
				case 1:
					vVar0 = { 1320.882f, -2283.563f, 49.64003f };
					break;
				case 2:
					vVar0 = { 223.8315f, 985.9778f, 190.6785f };
					break;
				case 3:
					vVar0 = { 1450.358f, 369.3219f, 89.52037f };
					break;
				case 4:
					vVar0 = { 2329.757f, -1514.801f, 42.058f };
					break;
				case 5:
					vVar0 = { -3599.471f, -2645.779f, -12.37373f };
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

Vector3 func_427(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case 319991179: /* GXTEntry: "Pilgrim Moonstone Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1249.602f, 1156.183f, 151.6954f };
					break;
				case 1:
					vVar0 = { 2294.689f, 2076.941f, 199.8165f };
					break;
				case 2:
					vVar0 = { 2479.74f, 2000.122f, 167.1423f };
					break;
				case 3:
					vVar0 = { 1588.217f, 2192.406f, 325.189f };
					break;
				case 4:
					vVar0 = { -1188.505f, 326.9177f, 43.7868f };
					break;
				case 5:
					vVar0 = { 2063.751f, -1761.572f, 40.542f };
					break;
			}
			break;
		case -288598209: /* GXTEntry: "Sackville Diamond Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1169.316f, 1685.228f, 355.7802f };
					break;
				case 1:
					vVar0 = { -1521.499f, 518.2305f, 102.25f };
					break;
				case 2:
					vVar0 = { -596.504f, 856.5514f, 109.4832f };
					break;
				case 3:
					vVar0 = { 804.661f, 831.088f, 117.221f };
					break;
				case 4:
					vVar0 = { 2835.425f, 1681.985f, 129.9798f };
					break;
				case 5:
					vVar0 = { -686.152f, 1022.066f, 132.999f };
					break;
			}
			break;
		case -1461195441: /* GXTEntry: "Yates Diamond Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2176.511f, 720.0225f, 125.2582f };
					break;
				case 1:
					vVar0 = { 1715.98f, -1725.556f, 50.62097f };
					break;
				case 2:
					vVar0 = { -1095.227f, 706.5919f, 103.139f };
					break;
				case 3:
					vVar0 = { 1218.012f, -143.7625f, 100.194f };
					break;
				case 4:
					vVar0 = { -1730.175f, -78.967f, 180.201f };
					break;
				case 5:
					vVar0 = { -2067.141f, -1928.338f, 112.243f };
					break;
			}
			break;
		case -1893135121: /* GXTEntry: "Beaulieux Diamond Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -347.9342f, 1153.391f, 125.6111f };
					break;
				case 1:
					vVar0 = { -2080.393f, -1891.941f, 113.6176f };
					break;
				case 2:
					vVar0 = { -1374.927f, 511.1898f, 100.6f };
					break;
				case 3:
					vVar0 = { 1965.265f, -1871.806f, 40.724f };
					break;
				case 4:
					vVar0 = { -410.4796f, 1749.962f, 218.5241f };
					break;
				case 5:
					vVar0 = { -4450.241f, -3879.977f, -26.709f };
					break;
			}
			break;
		case 1926912008: /* GXTEntry: "Banais Topaz Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1725.126f, -1968.61f, 46.54615f };
					break;
				case 1:
					vVar0 = { 1598.018f, -1840.43f, 58.632f };
					break;
				case 2:
					vVar0 = { 741.7739f, 1818.116f, 236.1417f };
					break;
				case 3:
					vVar0 = { 2443.097f, 290.514f, 66.50214f };
					break;
				case 4:
					vVar0 = { 2725.293f, -1057.348f, 46.91621f };
					break;
				case 5:
					vVar0 = { -159.714f, 1505.379f, 116.488f };
					break;
			}
			break;
		case 391412462: /* GXTEntry: "Bonnard Pearl Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1308.987f, -389.3056f, 98.80263f };
					break;
				case 1:
					vVar0 = { 2926.397f, 2343.146f, 157.2647f };
					break;
				case 2:
					vVar0 = { -1755.261f, -225.4198f, 183.7908f };
					break;
				case 3:
					vVar0 = { -3817.285f, -3001.792f, -7.194f };
					break;
				case 4:
					vVar0 = { 1980.839f, 1187.971f, 169.914f };
					break;
				case 5:
					vVar0 = { 1845.287f, -1813.046f, 43.97054f };
					break;
			}
			break;
		case 49516917: /* GXTEntry: "Harland Coral Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1851.781f, 2317.591f, 348.1268f };
					break;
				case 1:
					vVar0 = { -853.7369f, 396.1281f, 94.9f };
					break;
				case 2:
					vVar0 = { 2569.415f, 717.7336f, 81.21738f };
					break;
				case 3:
					vVar0 = { -3172.644f, -2475.335f, 72.115f };
					break;
				case 4:
					vVar0 = { -1277.482f, 483.129f, 86.077f };
					break;
				case 5:
					vVar0 = { 1705.024f, -1008.447f, 40.684f };
					break;
			}
			break;
		case -836035669: /* GXTEntry: "Bosque Emerald Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 3222.236f, 1464.866f, 52.10627f };
					break;
				case 1:
					vVar0 = { 1897.726f, -1195.392f, 41.91169f };
					break;
				case 2:
					vVar0 = { -1097.89f, -1356.006f, 64.07458f };
					break;
				case 3:
					vVar0 = { -6023.612f, -3233.676f, -22.148f };
					break;
				case 4:
					vVar0 = { 2489.684f, 884.126f, 72.419f };
					break;
				case 5:
					vVar0 = { 481.589f, 1845.104f, 196.887f };
					break;
			}
			break;
		case -1430911710: /* GXTEntry: "Aubrey Onyx Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -367.266f, 300.0798f, 89.44596f };
					break;
				case 1:
					vVar0 = { 2301.32f, -1322.696f, 42.06955f };
					break;
				case 2:
					vVar0 = { -2240.554f, 609.4323f, 117.2326f };
					break;
				case 3:
					vVar0 = { -2775.61f, -3209.412f, -7.898378f };
					break;
				case 4:
					vVar0 = { 1203.29f, -1204.167f, 75.664f };
					break;
				case 5:
					vVar0 = { -828.698f, -1516.472f, 62.305f };
					break;
			}
			break;
		case 289416445: /* GXTEntry: "Magnate Turquoise Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4496.287f, -3208.554f, 9.911187f };
					break;
				case 1:
					vVar0 = { 872.0493f, 1291.168f, 221.9553f };
					break;
				case 2:
					vVar0 = { 1899.343f, -1854.501f, 47.45892f };
					break;
				case 3:
					vVar0 = { 2248.565f, -766.519f, 41.818f };
					break;
				case 4:
					vVar0 = { 429.323f, 668.517f, 114.407f };
					break;
				case 5:
					vVar0 = { 2233.555f, -141.2088f, 48.10167f };
					break;
			}
			break;
		case -209370662: /* GXTEntry: "Thorburn Turquoise Ring" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1239.72f, -1911.497f, 55.959f };
					break;
				case 1:
					vVar0 = { 775.2253f, 849.8893f, 118.7485f };
					break;
				case 2:
					vVar0 = { -3584.689f, -3567.713f, 34.21161f };
					break;
				case 3:
					vVar0 = { 533.449f, 1746.879f, 162.112f };
					break;
				case 4:
					vVar0 = { 1317.384f, -2275.81f, 51.01833f };
					break;
				case 5:
					vVar0 = { 2329.152f, 1330.265f, 106.107f };
					break;
			}
			break;
		case -162108183: /* GXTEntry: "Emmeline Coral Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1384.99f, -1402.253f, 93.5495f };
					break;
				case 1:
					vVar0 = { -1992.5f, -2384.515f, 56.43238f };
					break;
				case 2:
					vVar0 = { -5345.73f, -2913.978f, 8.322517f };
					break;
				case 3:
					vVar0 = { -2772.355f, -431.812f, 173.256f };
					break;
				case 4:
					vVar0 = { -5859.28f, -3185.474f, -14.348f };
					break;
				case 5:
					vVar0 = { 1859.219f, -739.871f, 41.361f };
					break;
			}
			break;
		case -1324394408: /* GXTEntry: "Endicott Diamond Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2899.738f, 492.7514f, 65.84051f };
					break;
				case 1:
					vVar0 = { -2871.56f, -462.0377f, 196.8847f };
					break;
				case 2:
					vVar0 = { 1445.657f, 1456.146f, 188.63f };
					break;
				case 3:
					vVar0 = { 1871.821f, 578.064f, 112.566f };
					break;
				case 4:
					vVar0 = { -2585.285f, -2521.196f, 71.488f };
					break;
				case 5:
					vVar0 = { 2337.882f, 1007.901f, 88.839f };
					break;
			}
			break;
		case 324548078: /* GXTEntry: "Ursula Citrine Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1795.936f, -421.4888f, 43.91587f };
					break;
				case 1:
					vVar0 = { -1693.907f, -1542.08f, 82.97929f };
					break;
				case 2:
					vVar0 = { 751.4978f, 1185.651f, 143.4009f };
					break;
				case 3:
					vVar0 = { 1876.071f, 1019.309f, 122.024f };
					break;
				case 4:
					vVar0 = { -3554.666f, -3389.052f, -1.595f };
					break;
				case 5:
					vVar0 = { -2618.264f, -348.66f, 141.183f };
					break;
			}
			break;
		case 1466045897: /* GXTEntry: "Sterling Tooth Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2985.184f, 1280.13f, 40.96151f };
					break;
				case 1:
					vVar0 = { 220.5197f, 686.5555f, 175.8618f };
					break;
				case 2:
					vVar0 = { 1388.297f, -645.8536f, 70.60245f };
					break;
				case 3:
					vVar0 = { 2120.819f, -640.731f, 40.687f };
					break;
				case 4:
					vVar0 = { -24.567f, 1248.657f, 171.727f };
					break;
				case 5:
					vVar0 = { 1591.662f, 2185.654f, 323.313f };
					break;
			}
			break;
		case -1370882316: /* GXTEntry: "Duchess Emerald Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2431.102f, 1748.229f, 86.07227f };
					break;
				case 1:
					vVar0 = { -5807.756f, -2853.925f, -21.07f };
					break;
				case 2:
					vVar0 = { 687.0368f, 1429.984f, 179.87f };
					break;
				case 3:
					vVar0 = { -1170.441f, 85.439f, 43.968f };
					break;
				case 4:
					vVar0 = { -2731.12f, -2522.983f, 64.287f };
					break;
				case 5:
					vVar0 = { -2258.174f, 740.849f, 123.933f };
					break;
			}
			break;
		case -1804185681: /* GXTEntry: "Harford Garnet Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1515.215f, 2022.364f, 297.7653f };
					break;
				case 1:
					vVar0 = { 2916.78f, 1251.501f, 44.73628f };
					break;
				case 2:
					vVar0 = { -1398.124f, -1734.039f, 82.11946f };
					break;
				case 3:
					vVar0 = { 427.904f, -149.548f, 117.172f };
					break;
				case 4:
					vVar0 = { 2061.983f, 943.904f, 116.989f };
					break;
				case 5:
					vVar0 = { -4813.368f, -2709.548f, -14.264f };
					break;
			}
			break;
		case -644738616: /* GXTEntry: "Josephine Pearl Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1840.84f, 563.2191f, 112.6902f };
					break;
				case 1:
					vVar0 = { 2200.189f, -993.9132f, 40.68365f };
					break;
				case 2:
					vVar0 = { 2281.374f, 1445.469f, 84.43324f };
					break;
				case 3:
					vVar0 = { -3614.626f, -2662.714f, -12.783f };
					break;
				case 4:
					vVar0 = { -1005.908f, -1193.674f, 58.304f };
					break;
				case 5:
					vVar0 = { 1179.77f, -101.4314f, 97.15665f };
					break;
			}
			break;
		case 333760707: /* GXTEntry: "Royal Victoria Diamond Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1882.536f, 138.9948f, 97.59777f };
					break;
				case 1:
					vVar0 = { 1237.213f, -1666.103f, 65.53084f };
					break;
				case 2:
					vVar0 = { -1052.817f, 75.87376f, 90.76984f };
					break;
				case 3:
					vVar0 = { 738.079f, -1444.563f, 48.618f };
					break;
				case 4:
					vVar0 = { -2260.866f, -1433.324f, 139.047f };
					break;
				case 5:
					vVar0 = { -1062.977f, -830.346f, 42.847f };
					break;
			}
			break;
		case 996250359: /* GXTEntry: "Calumet Turquoise Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4443.736f, -2688.467f, -12.10359f };
					break;
				case 1:
					vVar0 = { 2080.73f, -583.7109f, 40.68758f };
					break;
				case 2:
					vVar0 = { 2875.142f, 1019.903f, 40.91467f };
					break;
				case 3:
					vVar0 = { 224.485f, 1002.841f, 188.619f };
					break;
				case 4:
					vVar0 = { 511.3415f, 2242.749f, 245.8599f };
					break;
				case 5:
					vVar0 = { -3535.955f, -3047.648f, 11.114f };
					break;
			}
			break;
		case -1350438989: /* GXTEntry: "Beauchêne Ruby Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -422.9006f, 1124.224f, 116.5767f };
					break;
				case 1:
					vVar0 = { 2305.086f, -186.9085f, 40.92494f };
					break;
				case 2:
					vVar0 = { 882.827f, -293.7682f, 82.99796f };
					break;
				case 3:
					vVar0 = { 2330.561f, -1264.729f, 44.665f };
					break;
				case 4:
					vVar0 = { 1575.993f, -262.667f, 79.194f };
					break;
				case 5:
					vVar0 = { 297.576f, 847.984f, 186.128f };
					break;
			}
			break;
		case 1289018795: /* GXTEntry: "Orchidee Diamond Earrings" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1991.458f, -1903.824f, 40.69088f };
					break;
				case 1:
					vVar0 = { -164.3306f, 1731.664f, 169.7935f };
					break;
				case 2:
					vVar0 = { -754.5217f, -558.4883f, 40.81464f };
					break;
				case 3:
					vVar0 = { -1322.847f, -2177.425f, 41.373f };
					break;
				case 4:
					vVar0 = { -455.087f, 882.664f, 125.946f };
					break;
				case 5:
					vVar0 = { 2431.759f, 98.043f, 44.798f };
					break;
			}
			break;
		case -1523419995: /* GXTEntry: "Infanta Turquoise Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1365.181f, 1827.732f, 190.9018f };
					break;
				case 1:
					vVar0 = { 1402.485f, -984.186f, 47.50457f };
					break;
				case 2:
					vVar0 = { -1586.472f, -2806.17f, 38.95605f };
					break;
				case 3:
					vVar0 = { 2001.609f, 700.08f, 170.329f };
					break;
				case 4:
					vVar0 = { -4380.315f, -3079.24f, -11.653f };
					break;
				case 5:
					vVar0 = { 956.51f, 389.518f, 109.939f };
					break;
			}
			break;
		case 308818593: /* GXTEntry: "Abello Ruby Bangle Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1070.01f, -1927.607f, 41.43198f };
					break;
				case 1:
					vVar0 = { -1799.061f, -1764.563f, 107.4229f };
					break;
				case 2:
					vVar0 = { 2382.294f, 882.2943f, 73.1396f };
					break;
				case 3:
					vVar0 = { -3306.079f, -2849.913f, -6.958f };
					break;
				case 4:
					vVar0 = { -380.661f, -361.891f, 85.739f };
					break;
				case 5:
					vVar0 = { 2623.028f, -1174.482f, 52.10396f };
					break;
			}
			break;
		case -523530337: /* GXTEntry: "Elliston Carved Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2098.276f, 163.5964f, 73.96008f };
					break;
				case 1:
					vVar0 = { -3345.583f, -2856.703f, -7.089534f };
					break;
				case 2:
					vVar0 = { -1568.609f, 725.8712f, 129.2337f };
					break;
				case 3:
					vVar0 = { -2385.313f, -2360.324f, 60.861f };
					break;
				case 4:
					vVar0 = { -2172.959f, -255.478f, 190.639f };
					break;
				case 5:
					vVar0 = { -3483.668f, -3470.969f, -0.715999f };
					break;
			}
			break;
		case 600432608: /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 700.8186f, -1252.892f, 43.97901f };
					break;
				case 1:
					vVar0 = { 157.7216f, 361.8874f, 118.6619f };
					break;
				case 2:
					vVar0 = { -5905.865f, -3413.23f, -4.372983f };
					break;
				case 3:
					vVar0 = { -399.17f, 1735.706f, 217.9749f };
					break;
				case 4:
					vVar0 = { 1592.672f, 1627.75f, 146.213f };
					break;
				case 5:
					vVar0 = { -2713.809f, -54.182f, 151.834f };
					break;
			}
			break;
		case -313250059: /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2056.683f, -797.0857f, 41.25389f };
					break;
				case 1:
					vVar0 = { -1356.743f, -928.0706f, 58.06551f };
					break;
				case 2:
					vVar0 = { -864.6054f, 625.0072f, 94.73165f };
					break;
				case 3:
					vVar0 = { -164.773f, 497.919f, 105.616f };
					break;
				case 4:
					vVar0 = { -4341.151f, -3496.203f, 31.601f };
					break;
				case 5:
					vVar0 = { -2071.77f, -2678.627f, 67.868f };
					break;
			}
			break;
		case 232063688: /* GXTEntry: "Greco Sapphire Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2184.685f, -1664.431f, 138.5523f };
					break;
				case 1:
					vVar0 = { 468.4028f, 1091f, 195.0037f };
					break;
				case 2:
					vVar0 = { -614.8671f, 525.5435f, 97.91837f };
					break;
				case 3:
					vVar0 = { 2964.187f, 438.709f, 56.915f };
					break;
				case 4:
					vVar0 = { -1286.468f, -625.796f, 98.286f };
					break;
				case 5:
					vVar0 = { 344.1996f, -666.2773f, 41.90558f };
					break;
			}
			break;
		case 1107778901: /* GXTEntry: "Helena Sapphire Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1045.887f, 421.9767f, 46.4541f };
					break;
				case 1:
					vVar0 = { -2231.449f, 891.0339f, 163.5341f };
					break;
				case 2:
					vVar0 = { -3312.46f, -1837.436f, 56.99748f };
					break;
				case 3:
					vVar0 = { -37.298f, 1108.598f, 167.237f };
					break;
				case 4:
					vVar0 = { -2454.475f, -2854.224f, 70.063f };
					break;
				case 5:
					vVar0 = { 1718.99f, 596.886f, 102.129f };
					break;
			}
			break;
		case 1645128206: /* GXTEntry: "Durant Pearl Bracelet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2063.583f, -851.6461f, 43.32316f };
					break;
				case 1:
					vVar0 = { 1619.393f, 1487.577f, 145.4048f };
					break;
				case 2:
					vVar0 = { -92.89658f, 1359.296f, 168.3585f };
					break;
				case 3:
					vVar0 = { 2372.439f, -859.7336f, 43.34306f };
					break;
				case 4:
					vVar0 = { 878.194f, -2029.334f, 43.937f };
					break;
				case 5:
					vVar0 = { -5633.213f, -2951.038f, 4.873f };
					break;
			}
			break;
		case 686159610: /* GXTEntry: "Braxton Amethyst Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2326.581f, 1092.258f, 102.1426f };
					break;
				case 1:
					vVar0 = { 621.4919f, 959.4529f, 176.381f };
					break;
				case 2:
					vVar0 = { 1482.876f, 1121.825f, 198.2411f };
					break;
				case 3:
					vVar0 = { -1506.288f, -755.233f, 104.926f };
					break;
				case 4:
					vVar0 = { 1306.245f, 321.932f, 87.032f };
					break;
				case 5:
					vVar0 = { 1993.759f, -1613.599f, 41.097f };
					break;
			}
			break;
		case -526980287: /* GXTEntry: "Tuamotu Pearl Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 873.05f, 2256.082f, 238.799f };
					break;
				case 1:
					vVar0 = { -630.5759f, 1132.453f, 156.1782f };
					break;
				case 2:
					vVar0 = { -584.6255f, -831.5223f, 40.69221f };
					break;
				case 3:
					vVar0 = { 1066.412f, -1023.771f, 67.869f };
					break;
				case 4:
					vVar0 = { -5520.459f, -3056.198f, -3.31f };
					break;
				case 5:
					vVar0 = { 135.157f, 177.181f, 120.193f };
					break;
			}
			break;
		case 575547207: /* GXTEntry: "Ainsworth Cross Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 715.0709f, 23.18262f, 151.8853f };
					break;
				case 1:
					vVar0 = { -948.6896f, 1634.235f, 244.38f };
					break;
				case 2:
					vVar0 = { 2416.921f, -738.7106f, 41.36396f };
					break;
				case 3:
					vVar0 = { 1469.829f, 798.88f, 98.616f };
					break;
				case 4:
					vVar0 = { 1896.782f, -1861.499f, 46.56086f };
					break;
				case 5:
					vVar0 = { 1893.525f, 299.28f, 75.9f };
					break;
			}
			break;
		case -1579131656: /* GXTEntry: "Rou Pearl Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1757.989f, -2937.432f, -11.79251f };
					break;
				case 1:
					vVar0 = { 831.3604f, 1925.699f, 258.2985f };
					break;
				case 2:
					vVar0 = { 1465.587f, -1722.392f, 62.49817f };
					break;
				case 3:
					vVar0 = { -5583.634f, -2588.623f, -9.075f };
					break;
				case 4:
					vVar0 = { -1823.96f, -1133.145f, 88.989f };
					break;
				case 5:
					vVar0 = { 2715.422f, -1081.903f, 47.11272f };
					break;
			}
			break;
		case -939330110: /* GXTEntry: "Gosselin White Gold Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -414.3991f, 1265.394f, 160.5856f };
					break;
				case 1:
					vVar0 = { 2695.703f, 1996.243f, 123.35f };
					break;
				case 2:
					vVar0 = { -5992.344f, -3821.39f, -30.7928f };
					break;
				case 3:
					vVar0 = { 1712.729f, -1303.595f, 42.161f };
					break;
				case 4:
					vVar0 = { 2572.77f, 142.555f, 51.44873f };
					break;
				case 5:
					vVar0 = { -3341.876f, -2753.213f, -5.127f };
					break;
			}
			break;
		case 456059252: /* GXTEntry: "Pelle Pearl Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1143.589f, -2167.258f, 55.39804f };
					break;
				case 1:
					vVar0 = { 2675.015f, 424.8618f, 82.26527f };
					break;
				case 2:
					vVar0 = { 323.924f, 309.331f, 145.39f };
					break;
				case 3:
					vVar0 = { -482.686f, -70.27f, 42.896f };
					break;
				case 4:
					vVar0 = { 2623.636f, 1696.611f, 115.4945f };
					break;
				case 5:
					vVar0 = { -1871.348f, -1724.728f, 108.487f };
					break;
			}
			break;
		case 61850108: /* GXTEntry: "Blakely Miniature Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2383.226f, 1695.083f, 95.911f };
					break;
				case 1:
					vVar0 = { 1716.582f, 463.6513f, 106.2908f };
					break;
				case 2:
					vVar0 = { -1168.274f, 843.575f, 134.8053f };
					break;
				case 3:
					vVar0 = { 2684.51f, 1647.921f, 147.5019f };
					break;
				case 4:
					vVar0 = { 1732.463f, -1173.364f, 40.679f };
					break;
				case 5:
					vVar0 = { 1731.615f, -425.61f, 47.192f };
					break;
			}
			break;
		case 205445966: /* GXTEntry: "Richelieu Amethyst Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -63.90002f, 1234.047f, 170.8458f };
					break;
				case 1:
					vVar0 = { 1460.522f, -477.047f, 73.44901f };
					break;
				case 2:
					vVar0 = { -1638.215f, -1360.739f, 83.49316f };
					break;
				case 3:
					vVar0 = { 2780.342f, 534.8629f, 71.79f };
					break;
				case 4:
					vVar0 = { -5046.095f, -2504.365f, -11.168f };
					break;
				case 5:
					vVar0 = { 1121.401f, -1297.322f, 64.358f };
					break;
			}
			break;
		case -888745206: /* GXTEntry: "Dane Topaz Necklace" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -278.1749f, 88.7519f, 48.23199f };
					break;
				case 1:
					vVar0 = { -3694.892f, -2663.843f, -15.3165f };
					break;
				case 2:
					vVar0 = { -5397.794f, -3668.164f, -21.97512f };
					break;
				case 3:
					vVar0 = { -1302.337f, -875.792f, 69.533f };
					break;
				case 4:
					vVar0 = { -2773.447f, -3039.548f, 10.243f };
					break;
				case 5:
					vVar0 = { -393.977f, 1726.975f, 216.468f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_428(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (bParam1)
	{
		case 1338475089: /* GXTEntry: "Agarita" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -6158.079f, -3672.228f, 23.7246f };
					break;
				case 1:
					vVar0 = { -3176.188f, -2494.712f, 71.67211f };
					break;
				case 2:
					vVar0 = { -4454.255f, -3654.398f, 56.73625f };
					break;
				case 3:
					vVar0 = { -2837.986f, -2626.157f, 92.17568f };
					break;
				case 4:
					vVar0 = { -3517.831f, -1922.929f, 10.00902f };
					break;
				case 5:
					vVar0 = { -5994.68f, -3685.647f, -6.307046f };
					break;
				case 6:
					vVar0 = { -2860.788f, -2869.481f, 88.79768f };
					break;
				case 7:
					vVar0 = { -5399.701f, -3534.924f, 4.885307f };
					break;
				case 8:
					vVar0 = { -3677.977f, -3580.438f, 46.71785f };
					break;
				case 9:
					vVar0 = { -4742.011f, -2475.097f, 7.924973f };
					break;
				case 10:
					vVar0 = { -3108.148f, -2259.494f, 73.75759f };
					break;
				case 11:
					vVar0 = { -5242.113f, -3844.581f, -4.130068f };
					break;
				case 12:
					vVar0 = { -1807.05f, -2830.738f, 14.16864f };
					break;
				case 13:
					vVar0 = { -4757.845f, -2252.798f, 48.07966f };
					break;
				case 14:
					vVar0 = { -4910.926f, -3754.54f, 25.15245f };
					break;
				case 15:
					vVar0 = { -5379.681f, -2706.009f, 15.69893f };
					break;
				case 16:
					vVar0 = { -3386.393f, -3420.153f, 45.52135f };
					break;
				case 17:
					vVar0 = { -2123.675f, -2281.767f, 97.89298f };
					break;
			}
			break;
		case 1071702353: /* GXTEntry: "Bitterweed" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -837.0764f, -179.6575f, 77.68317f };
					break;
				case 1:
					vVar0 = { -1451.45f, 475.6181f, 103.6345f };
					break;
				case 2:
					vVar0 = { -2527.715f, 362.7336f, 151.6517f };
					break;
				case 3:
					vVar0 = { 2854.28f, 694.4197f, 64.87576f };
					break;
				case 4:
					vVar0 = { -2080.122f, 693.6569f, 121.9127f };
					break;
				case 5:
					vVar0 = { 2545.92f, 274.1429f, 69.23188f };
					break;
				case 6:
					vVar0 = { 2682.133f, 295.6832f, 61.90741f };
					break;
				case 7:
					vVar0 = { -1957.831f, 477.7415f, 116.0796f };
					break;
				case 8:
					vVar0 = { -2458.693f, 459.8373f, 144.0181f };
					break;
				case 9:
					vVar0 = { -1308.998f, 286.0198f, 75.79656f };
					break;
				case 10:
					vVar0 = { 2074.065f, 823.5678f, 153.9429f };
					break;
				case 11:
					vVar0 = { -755.7537f, 25.02407f, 81.93896f };
					break;
				case 12:
					vVar0 = { -1708.174f, 603.0139f, 117.7064f };
					break;
				case 13:
					vVar0 = { 2245.984f, 392.1618f, 46.47459f };
					break;
				case 14:
					vVar0 = { -2541.703f, 658.5632f, 136.1618f };
					break;
				case 15:
					vVar0 = { 2363.628f, 883.5585f, 73.92034f };
					break;
				case 16:
					vVar0 = { -1450.8f, 107.9894f, 89.53876f };
					break;
				case 17:
					vVar0 = { -622.4541f, -18.40578f, 85.21953f };
					break;
				case 18:
					vVar0 = { 2177.449f, -80.94263f, 50.22923f };
					break;
				case 19:
					vVar0 = { 1934.772f, 470.8045f, 130.7732f };
					break;
				case 20:
					vVar0 = { -1800.463f, 345.83f, 115.2097f };
					break;
				case 21:
					vVar0 = { -2508.952f, 833.7975f, 147.4184f };
					break;
				case 22:
					vVar0 = { -1275.675f, 105.488f, 70.64514f };
					break;
				case 23:
					vVar0 = { 2491.08f, 937.9883f, 79.73892f };
					break;
				case 24:
					vVar0 = { -1311.239f, -77.12775f, 96.92197f };
					break;
				case 25:
					vVar0 = { 2252.339f, 100.3517f, 54.90428f };
					break;
				case 26:
					vVar0 = { -1684.869f, 354.543f, 107.3314f };
					break;
				case 27:
					vVar0 = { -2301.606f, 790.7549f, 132.5147f };
					break;
				case 28:
					vVar0 = { 2296.166f, 575.2374f, 75.16478f };
					break;
				case 29:
					vVar0 = { 2765.188f, 983.2751f, 66.55457f };
					break;
				case 30:
					vVar0 = { 2402.335f, 101.8964f, 45.81161f };
					break;
				case 31:
					vVar0 = { -2176.205f, 473.7471f, 117.8443f };
					break;
				case 32:
					vVar0 = { 2699.46f, 688.5892f, 75.24394f };
					break;
				case 33:
					vVar0 = { -1565.916f, 274.7366f, 113.4644f };
					break;
				case 34:
					vVar0 = { 2219.457f, 1329.016f, 98.94907f };
					break;
				case 35:
					vVar0 = { -1172.452f, -210.5993f, 92.73193f };
					break;
			}
			break;
		case -1183422860: /* GXTEntry: "Blood Flower" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1577.387f, -919.5087f, 40.94017f };
					break;
				case 1:
					vVar0 = { 2306.311f, -194.6056f, 40.92645f };
					break;
				case 2:
					vVar0 = { 2741.538f, -694.9662f, 40.5845f };
					break;
				case 3:
					vVar0 = { 1956.2f, -1138.579f, 40.54645f };
					break;
				case 4:
					vVar0 = { 2348.779f, -616.8898f, 40.75293f };
					break;
				case 5:
					vVar0 = { 2306.104f, -258.4776f, 41.20464f };
					break;
				case 6:
					vVar0 = { 2244.353f, -620.5598f, 40.61773f };
					break;
				case 7:
					vVar0 = { 2144.061f, -349.5971f, 40.51577f };
					break;
				case 8:
					vVar0 = { 2193.562f, -1229.606f, 40.98674f };
					break;
				case 9:
					vVar0 = { 2208.828f, -1638.493f, 40.58871f };
					break;
				case 10:
					vVar0 = { 2780.535f, -588.9789f, 40.60842f };
					break;
				case 11:
					vVar0 = { 2023.787f, -623.6941f, 42.3571f };
					break;
				case 12:
					vVar0 = { 1691.598f, -682.3945f, 40.66817f };
					break;
				case 13:
					vVar0 = { 2046.46f, -1672.703f, 41.02987f };
					break;
				case 14:
					vVar0 = { 2360.87f, -534.0822f, 40.85497f };
					break;
				case 15:
					vVar0 = { 2272.366f, -576.9771f, 40.74205f };
					break;
				case 16:
					vVar0 = { 2235.588f, -817.0897f, 40.92264f };
					break;
				case 17:
					vVar0 = { 2126.303f, -1854.556f, 40.62185f };
					break;
			}
			break;
		case -1957546791: /* GXTEntry: "Cardinal Flower" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2096.103f, -570.0728f, 40.76724f };
					break;
				case 1:
					vVar0 = { 2118.5f, -1861.513f, 40.54971f };
					break;
				case 2:
					vVar0 = { 2271.446f, -475.6335f, 40.91769f };
					break;
				case 3:
					vVar0 = { 2050.705f, -1233.955f, 42.07559f };
					break;
				case 4:
					vVar0 = { 2212.287f, -817.0461f, 41.05512f };
					break;
				case 5:
					vVar0 = { 2213.18f, -1137.773f, 42.13002f };
					break;
				case 6:
					vVar0 = { 2031.381f, -1605.756f, 40.84847f };
					break;
				case 7:
					vVar0 = { 1765.468f, -1275.672f, 41.87871f };
					break;
				case 8:
					vVar0 = { 1894f, -1989.385f, 41.46169f };
					break;
				case 9:
					vVar0 = { 2268.59f, -507.9146f, 40.75f };
					break;
				case 10:
					vVar0 = { 2168.978f, -287.6918f, 41.27938f };
					break;
				case 11:
					vVar0 = { 1981.499f, -2008.384f, 40.91828f };
					break;
				case 12:
					vVar0 = { 2400.476f, -757.072f, 40.92308f };
					break;
				case 13:
					vVar0 = { 1994.725f, -1559.202f, 40.74926f };
					break;
				case 14:
					vVar0 = { 1595.292f, -971.217f, 41.22252f };
					break;
				case 15:
					vVar0 = { 2098.452f, -1047.086f, 41.35026f };
					break;
				case 16:
					vVar0 = { 2030.629f, -1138.634f, 40.50709f };
					break;
				case 17:
					vVar0 = { 2053.598f, -1840.162f, 40.69882f };
					break;
				case 18:
					vVar0 = { 1948.073f, -1158.214f, 40.86988f };
					break;
				case 19:
					vVar0 = { 2308.52f, -566.7586f, 40.77962f };
					break;
				case 20:
					vVar0 = { 1920.365f, -1850.414f, 40.9271f };
					break;
				case 21:
					vVar0 = { 2302.28f, -350.1679f, 41.79851f };
					break;
				case 22:
					vVar0 = { 2412.502f, -725.1883f, 40.95741f };
					break;
				case 23:
					vVar0 = { 2001.047f, -1001.912f, 42.31869f };
					break;
				case 24:
					vVar0 = { 2015.419f, -1554.983f, 40.73554f };
					break;
				case 25:
					vVar0 = { 2035.616f, -1999.656f, 41.09543f };
					break;
				case 26:
					vVar0 = { 1509.446f, -826.7535f, 44.47095f };
					break;
				case 27:
					vVar0 = { 2582.996f, -638.0927f, 42.48944f };
					break;
				case 28:
					vVar0 = { 1961.522f, -522.7937f, 40.75521f };
					break;
				case 29:
					vVar0 = { 2318.057f, -509.386f, 41.03922f };
					break;
				case 30:
					vVar0 = { 1906.669f, -1751.401f, 42.04636f };
					break;
				case 31:
					vVar0 = { 1640.019f, -741.5635f, 40.81805f };
					break;
				case 32:
					vVar0 = { 2094.501f, -924.8128f, 40.77338f };
					break;
				case 33:
					vVar0 = { 2061.693f, -1474.422f, 40.5374f };
					break;
				case 34:
					vVar0 = { 2112.21f, -1956.966f, 40.62199f };
					break;
				case 35:
					vVar0 = { 1881.001f, -1051.795f, 41.74044f };
					break;
				case 36:
					vVar0 = { 2065.621f, -1718.06f, 40.60165f };
					break;
				case 37:
					vVar0 = { 2379.899f, -496.1565f, 40.67059f };
					break;
				case 38:
					vVar0 = { 1912.171f, -411.4875f, 42.1138f };
					break;
				case 39:
					vVar0 = { 1795.963f, -814.7781f, 41.52293f };
					break;
				case 40:
					vVar0 = { 2218.973f, -896.0101f, 40.78076f };
					break;
				case 41:
					vVar0 = { 2164.055f, -1462.051f, 40.71122f };
					break;
				case 42:
					vVar0 = { 2361.998f, -661.2549f, 40.99789f };
					break;
				case 43:
					vVar0 = { 1812.99f, -1145.849f, 40.78216f };
					break;
				case 44:
					vVar0 = { 1978.474f, -1926.182f, 41.20599f };
					break;
				case 45:
					vVar0 = { 2228.102f, -1268.194f, 40.62177f };
					break;
				case 46:
					vVar0 = { 2506.603f, -428.8445f, 40.59692f };
					break;
				case 47:
					vVar0 = { 2012.282f, -332.8559f, 40.63703f };
					break;
				case 48:
					vVar0 = { 1791.035f, -1145.769f, 40.59069f };
					break;
				case 49:
					vVar0 = { 1906.752f, -746.4213f, 42.54567f };
					break;
				case 50:
					vVar0 = { 2281.305f, -978.6946f, 40.88538f };
					break;
				case 51:
					vVar0 = { 2056.947f, -1901.105f, 40.62201f };
					break;
				case 52:
					vVar0 = { 2162.393f, -683.0685f, 40.81242f };
					break;
				case 53:
					vVar0 = { 2169.019f, -1677.297f, 40.74394f };
					break;
			}
			break;
		case -589542533: /* GXTEntry: "Chocolate Daisy" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1802.734f, -1230.744f, 81.30141f };
					break;
				case 1:
					vVar0 = { 887.2073f, -1620.102f, 43.40933f };
					break;
				case 2:
					vVar0 = { -797.9009f, -573.506f, 53.54251f };
					break;
				case 3:
					vVar0 = { 688.0437f, -855.008f, 47.97547f };
					break;
				case 4:
					vVar0 = { 559.2841f, -563.241f, 69.24438f };
					break;
				case 5:
					vVar0 = { -996.9205f, -943.0409f, 60.46959f };
					break;
				case 6:
					vVar0 = { -471.9287f, -441.182f, 84.15424f };
					break;
				case 7:
					vVar0 = { -646.877f, 259.4007f, 90.02546f };
					break;
				case 8:
					vVar0 = { 167.3677f, -542.701f, 63.01952f };
					break;
				case 9:
					vVar0 = { 862.6147f, -1819.358f, 42.45035f };
					break;
				case 10:
					vVar0 = { -1770.195f, -1232.711f, 80.85489f };
					break;
				case 11:
					vVar0 = { 205.6236f, -603.0321f, 46.31397f };
					break;
				case 12:
					vVar0 = { -1160.332f, -841.0135f, 57.55645f };
					break;
				case 13:
					vVar0 = { 625.2186f, -627.9928f, 50.9932f };
					break;
				case 14:
					vVar0 = { 713.1145f, -882.6884f, 48.26238f };
					break;
				case 15:
					vVar0 = { -772.9506f, 140.4494f, 41.95989f };
					break;
				case 16:
					vVar0 = { -416.4897f, -454.566f, 76.58561f };
					break;
				case 17:
					vVar0 = { -659.2621f, -472.8685f, 50.49635f };
					break;
				case 18:
					vVar0 = { 907.9697f, -2013.26f, 44.72888f };
					break;
				case 19:
					vVar0 = { 807.1368f, -988.8497f, 52.42957f };
					break;
				case 20:
					vVar0 = { -999.7451f, -755.2712f, 58.68235f };
					break;
				case 21:
					vVar0 = { -1664.827f, -1162.666f, 77.30522f };
					break;
				case 22:
					vVar0 = { 713.1884f, -555.7805f, 77.14464f };
					break;
				case 23:
					vVar0 = { -571.5287f, -297.4931f, 53.0472f };
					break;
				case 24:
					vVar0 = { -1017.968f, -33.77452f, 43.04612f };
					break;
				case 25:
					vVar0 = { -302.5742f, -493.9792f, 65.02707f };
					break;
				case 26:
					vVar0 = { 266.8748f, -567.5861f, 60.7539f };
					break;
				case 27:
					vVar0 = { 938.4082f, -2064.738f, 43.32006f };
					break;
				case 28:
					vVar0 = { 831.8718f, -1048.238f, 48.52503f };
					break;
				case 29:
					vVar0 = { -773.7565f, -733.709f, 52.99412f };
					break;
				case 30:
					vVar0 = { -1663.015f, -1012.056f, 100.3875f };
					break;
				case 31:
					vVar0 = { 771.7671f, -617.4674f, 76.28725f };
					break;
				case 32:
					vVar0 = { -272.7094f, -548.2258f, 43.95261f };
					break;
				case 33:
					vVar0 = { -493.6351f, -99.02039f, 42.13488f };
					break;
				case 34:
					vVar0 = { -1028.052f, 93.09535f, 89.9007f };
					break;
				case 35:
					vVar0 = { 396.9534f, -568.6733f, 61.37666f };
					break;
				case 36:
					vVar0 = { 427.8954f, -670.0096f, 49.22416f };
					break;
				case 37:
					vVar0 = { 645.3694f, -1205.165f, 46.51438f };
					break;
				case 38:
					vVar0 = { -781.3183f, -708.7633f, 52.69588f };
					break;
				case 39:
					vVar0 = { -1480.488f, -1145.786f, 73.58723f };
					break;
				case 40:
					vVar0 = { 775.7672f, -633.3217f, 75.78204f };
					break;
				case 41:
					vVar0 = { 1018.206f, -2149.585f, 42.81111f };
					break;
				case 42:
					vVar0 = { -446.1029f, 35.37569f, 42.53957f };
					break;
				case 43:
					vVar0 = { -68.08208f, -535.2953f, 63.72619f };
					break;
				case 44:
					vVar0 = { -1086.443f, 293.9889f, 55.83007f };
					break;
				case 45:
					vVar0 = { 484.8581f, -646.3868f, 44.16967f };
					break;
				case 46:
					vVar0 = { 1120.864f, -2221.609f, 48.87132f };
					break;
				case 47:
					vVar0 = { 913.8426f, -1373.651f, 58.73856f };
					break;
				case 48:
					vVar0 = { -843.8945f, -646.6285f, 61.70801f };
					break;
				case 49:
					vVar0 = { -1375.26f, -884.5809f, 93.20879f };
					break;
				case 50:
					vVar0 = { 838.4435f, -807.2313f, 60.97507f };
					break;
				case 51:
					vVar0 = { -541.0539f, -499.2539f, 51.61814f };
					break;
				case 52:
					vVar0 = { -338.3631f, 187.3566f, 62.11228f };
					break;
				case 53:
					vVar0 = { 36.32716f, -560.6879f, 49.99359f };
					break;
			}
			break;
		case -1776738559: /* GXTEntry: "Creek Plum" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1215.327f, -550.4489f, 69.20448f };
					break;
				case 1:
					vVar0 = { -1693.434f, 150.5699f, 139.3553f };
					break;
				case 2:
					vVar0 = { -1602.843f, -721.0051f, 134.8383f };
					break;
				case 3:
					vVar0 = { 1353.102f, -948.4034f, 54.34033f };
					break;
				case 4:
					vVar0 = { -1446.998f, -597.8992f, 124.9854f };
					break;
				case 5:
					vVar0 = { -2296.586f, -76.67634f, 236.971f };
					break;
				case 6:
					vVar0 = { -1938.189f, -254.6173f, 187.9133f };
					break;
				case 7:
					vVar0 = { -1158.12f, -417.6564f, 107.3296f };
					break;
				case 8:
					vVar0 = { 760.3007f, -1441.318f, 50.42412f };
					break;
				case 9:
					vVar0 = { 1852.904f, -250.8335f, 57.8251f };
					break;
				case 10:
					vVar0 = { -2035.193f, -422.1566f, 161.4343f };
					break;
				case 11:
					vVar0 = { 1331.847f, -1663.221f, 66.0006f };
					break;
				case 12:
					vVar0 = { 1558.239f, -373.491f, 80.65101f };
					break;
				case 13:
					vVar0 = { -2229.277f, -500.377f, 143.5234f };
					break;
				case 14:
					vVar0 = { 1686.212f, -1804f, 51.31548f };
					break;
				case 15:
					vVar0 = { -1826.407f, -920.2198f, 105.5977f };
					break;
				case 16:
					vVar0 = { 977.1981f, -318.6132f, 92.39168f };
					break;
				case 17:
					vVar0 = { 1397.009f, -2207.4f, 48.89367f };
					break;
			}
			break;
		case 2605459: /* GXTEntry: "Texas Bluebonnet" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4551.036f, -3717.372f, 16.74775f };
					break;
				case 1:
					vVar0 = { -4756.509f, -3243.545f, 7.083439f };
					break;
				case 2:
					vVar0 = { -1308.42f, -1904.898f, 62.07966f };
					break;
				case 3:
					vVar0 = { -5177.246f, -2452.09f, 0.591442f };
					break;
				case 4:
					vVar0 = { -881.3884f, -1971.176f, 49.44643f };
					break;
				case 5:
					vVar0 = { -5987.447f, -3678.175f, -6.555591f };
					break;
				case 6:
					vVar0 = { -4701.285f, -3750.453f, 11.8994f };
					break;
				case 7:
					vVar0 = { -4487.299f, -3140.017f, 7.967143f };
					break;
				case 8:
					vVar0 = { -5642.289f, -2894.806f, 2.9304f };
					break;
				case 9:
					vVar0 = { -749.5547f, -1941.077f, 47.16733f };
					break;
				case 10:
					vVar0 = { -5608.817f, -3765.67f, -24.15397f };
					break;
				case 11:
					vVar0 = { -1150.277f, -1911.295f, 41.6031f };
					break;
				case 12:
					vVar0 = { -4672.48f, -3541.827f, 15.18375f };
					break;
				case 13:
					vVar0 = { -4347.379f, -3357.034f, 33.69977f };
					break;
				case 14:
					vVar0 = { -5507.112f, -3186.329f, -21.6769f };
					break;
				case 15:
					vVar0 = { -5527.961f, -3600.143f, -22.37232f };
					break;
				case 16:
					vVar0 = { -1137.674f, -1829.151f, 61.23735f };
					break;
				case 17:
					vVar0 = { -758.7194f, -1756.665f, 53.39788f };
					break;
				case 18:
					vVar0 = { -5310.222f, -3986.815f, -9.60792f };
					break;
				case 19:
					vVar0 = { -4059.273f, -3291.623f, 32.05573f };
					break;
				case 20:
					vVar0 = { -1519.904f, -1989.379f, 46.35562f };
					break;
				case 21:
					vVar0 = { -5734.856f, -3350.746f, -24.15577f };
					break;
				case 22:
					vVar0 = { -817.0863f, -1644.762f, 61.01518f };
					break;
				case 23:
					vVar0 = { -1049.058f, -1692.225f, 81.09015f };
					break;
				case 24:
					vVar0 = { -4016.213f, -3415.796f, 47.05555f };
					break;
				case 25:
					vVar0 = { -5151.946f, -3656.595f, -3.751917f };
					break;
				case 26:
					vVar0 = { -682.2558f, -1589.873f, 47.90882f };
					break;
				case 27:
					vVar0 = { -1424.341f, -1981.077f, 44.61142f };
					break;
				case 28:
					vVar0 = { -5962.068f, -3498.418f, -24.10148f };
					break;
				case 29:
					vVar0 = { -1052.637f, -1796.781f, 62.35318f };
					break;
				case 30:
					vVar0 = { -5154.702f, -3471.117f, 0.055218f };
					break;
				case 31:
					vVar0 = { -3989.788f, -3672.628f, 47.61529f };
					break;
				case 32:
					vVar0 = { -698.519f, -1487.196f, 47.90404f };
					break;
				case 33:
					vVar0 = { -940.1525f, -1933.584f, 48.53842f };
					break;
				case 34:
					vVar0 = { -1374.326f, -1872.431f, 69.53745f };
					break;
				case 35:
					vVar0 = { -6336.438f, -3537.301f, -28.13726f };
					break;
			}
			break;
		case 1602215994: /* GXTEntry: "Wild Rhubarb" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3551.613f, -2539.796f, -14.11569f };
					break;
				case 1:
					vVar0 = { -2279.294f, -2538.378f, 64.17388f };
					break;
				case 2:
					vVar0 = { -4952.385f, -2448.958f, -4.652772f };
					break;
				case 3:
					vVar0 = { -4585.389f, -2931.452f, -19.1451f };
					break;
				case 4:
					vVar0 = { -3422.309f, -2735.995f, -5.550219f };
					break;
				case 5:
					vVar0 = { -3807.379f, -2660.309f, -14.97992f };
					break;
				case 6:
					vVar0 = { -3002.762f, -3204.804f, -0.745385f };
					break;
				case 7:
					vVar0 = { -2736.513f, -2584.714f, 66.61004f };
					break;
				case 8:
					vVar0 = { -2026.944f, -2914.289f, 7.941141f };
					break;
				case 9:
					vVar0 = { -2903.181f, -2520.676f, 64.85474f };
					break;
				case 10:
					vVar0 = { -3981.757f, -2377.309f, -9.19969f };
					break;
				case 11:
					vVar0 = { -3671.022f, -2226.875f, -13.62176f };
					break;
				case 12:
					vVar0 = { -2367.019f, -2719.615f, 67.30415f };
					break;
				case 13:
					vVar0 = { -2960.799f, -3103.594f, 7.026269f };
					break;
				case 14:
					vVar0 = { -4535.32f, -2959.584f, -18.97934f };
					break;
				case 15:
					vVar0 = { -3647.044f, -2967.884f, 3.168286f };
					break;
				case 16:
					vVar0 = { -4901.773f, -2732.863f, -11.23535f };
					break;
				case 17:
					vVar0 = { -1785.729f, -2867.956f, 3.920457f };
					break;
				case 18:
					vVar0 = { -3818.323f, -2431.667f, -11.85196f };
					break;
				case 19:
					vVar0 = { -3573.904f, -2077.847f, -13.69387f };
					break;
				case 20:
					vVar0 = { -2413.509f, -2600.069f, 79.50917f };
					break;
				case 21:
					vVar0 = { -3753.492f, -3147.621f, -7.111763f };
					break;
				case 22:
					vVar0 = { -4268.449f, -3031.226f, -10.47778f };
					break;
				case 23:
					vVar0 = { -4880.2f, -3002.013f, -19.80571f };
					break;
				case 24:
					vVar0 = { -1558.065f, -2653.922f, 61.00679f };
					break;
				case 25:
					vVar0 = { -3019.986f, -2678.777f, 83.5397f };
					break;
				case 26:
					vVar0 = { -2787.677f, -3094.006f, 11.7956f };
					break;
				case 27:
					vVar0 = { -3053.521f, -2550.07f, 69.55097f };
					break;
				case 28:
					vVar0 = { -3481.634f, -2268.223f, -4.268718f };
					break;
				case 29:
					vVar0 = { -3681.408f, -2437.438f, -14.75682f };
					break;
				case 30:
					vVar0 = { -4041.084f, -2841.911f, -8.170352f };
					break;
				case 31:
					vVar0 = { -4718.928f, -2797.024f, -10.74108f };
					break;
				case 32:
					vVar0 = { -2482.316f, -2620.406f, 74.44934f };
					break;
				case 33:
					vVar0 = { -2750.083f, -3066.452f, 8.679184f };
					break;
				case 34:
					vVar0 = { -1753.186f, -2664.416f, 64.18607f };
					break;
				case 35:
					vVar0 = { -3557.486f, -3220.925f, 4.855478f };
					break;
				case 36:
					vVar0 = { -3605.652f, -2553.657f, -15.10676f };
					break;
				case 37:
					vVar0 = { -1983.373f, -2516.197f, 64.48646f };
					break;
				case 38:
					vVar0 = { -3385.293f, -2426.299f, 0.909047f };
					break;
				case 39:
					vVar0 = { -2544.437f, -2392.296f, 64.56077f };
					break;
				case 40:
					vVar0 = { -3117.798f, -2193.891f, 73.96046f };
					break;
				case 41:
					vVar0 = { -3262.19f, -3033.966f, 0.071635f };
					break;
				case 42:
					vVar0 = { -4690.015f, -2971.554f, -19.06419f };
					break;
				case 43:
					vVar0 = { -3921.625f, -2908.703f, -16.13763f };
					break;
				case 44:
					vVar0 = { -2723.317f, -3063.674f, 5.848349f };
					break;
				case 45:
					vVar0 = { -2019.112f, -2598.32f, 67.13496f };
					break;
				case 46:
					vVar0 = { -2738.691f, -2152.243f, 79.31107f };
					break;
				case 47:
					vVar0 = { -4666.345f, -3016.519f, -16.4672f };
					break;
				case 48:
					vVar0 = { -3070.031f, -2841.298f, 19.88575f };
					break;
				case 49:
					vVar0 = { -3819.758f, -2720.052f, -15.92571f };
					break;
				case 50:
					vVar0 = { 2053.598f, -1840.162f, 40.69882f };
					break;
				case 51:
					vVar0 = { -3592.551f, -2689.42f, -10.87045f };
					break;
				case 52:
					vVar0 = { -3268.259f, -2678.055f, 6.380742f };
					break;
				case 53:
					vVar0 = { -2681.336f, -2582.359f, 68.82637f };
					break;
			}
			break;
		case -396757268: /* GXTEntry: "Wisteria" */
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1999.087f, -967.3788f, 100.2708f };
					break;
				case 1:
					vVar0 = { -2054.315f, -2129.293f, 51.13446f };
					break;
				case 2:
					vVar0 = { -2368.826f, -1824.353f, 107.4021f };
					break;
				case 3:
					vVar0 = { 2769.278f, 2074.029f, 166.9392f };
					break;
				case 4:
					vVar0 = { 2236.578f, 1626.647f, 84.76954f };
					break;
				case 5:
					vVar0 = { -2363.491f, -364.6791f, 143.1913f };
					break;
				case 6:
					vVar0 = { 2268.302f, 1274.2f, 93.99426f };
					break;
				case 7:
					vVar0 = { -1950.254f, -1062.476f, 75.34731f };
					break;
				case 8:
					vVar0 = { -2345.954f, -1739.286f, 114.7719f };
					break;
				case 9:
					vVar0 = { -2084.32f, -2089.309f, 56.60844f };
					break;
				case 10:
					vVar0 = { 2631.735f, 1974.998f, 96.31788f };
					break;
				case 11:
					vVar0 = { -2365.458f, -507.0249f, 145.6053f };
					break;
				case 12:
					vVar0 = { -1970.063f, -1124.512f, 74.62655f };
					break;
				case 13:
					vVar0 = { -2435.026f, -1586.924f, 148.4297f };
					break;
				case 14:
					vVar0 = { -2123.584f, -2032.072f, 58.84632f };
					break;
				case 15:
					vVar0 = { -2143.314f, -564.3889f, 137.8063f };
					break;
				case 16:
					vVar0 = { 2625.632f, 1851.786f, 89.97489f };
					break;
				case 17:
					vVar0 = { 2375.784f, 1069.28f, 84.05659f };
					break;
				case 18:
					vVar0 = { -2676.946f, -1423.428f, 147.7894f };
					break;
				case 19:
					vVar0 = { -1778.268f, -1118.677f, 82.0814f };
					break;
				case 20:
					vVar0 = { 2273.503f, 921.3495f, 78.24824f };
					break;
				case 21:
					vVar0 = { -2056.528f, -1906.18f, 110.8105f };
					break;
				case 22:
					vVar0 = { 2526.579f, 1726.432f, 87.43194f };
					break;
				case 23:
					vVar0 = { -2243.863f, -759.4833f, 141.9535f };
					break;
				case 24:
					vVar0 = { -2492f, -1385.933f, 148.4419f };
					break;
				case 25:
					vVar0 = { -2202.033f, -2002.685f, 75.23257f };
					break;
				case 26:
					vVar0 = { -2097.383f, -799.0377f, 83.25292f };
					break;
				case 27:
					vVar0 = { 2461.039f, 801.8494f, 67.13483f };
					break;
				case 28:
					vVar0 = { 2451.55f, 1697.122f, 96.74268f };
					break;
				case 29:
					vVar0 = { 2879.246f, 2218.497f, 156.5749f };
					break;
				case 30:
					vVar0 = { -2023.242f, -863.724f, 100.6152f };
					break;
				case 31:
					vVar0 = { -2609.855f, -1486.657f, 145.0986f };
					break;
				case 32:
					vVar0 = { 2443.427f, 635.2462f, 69.1945f };
					break;
				case 33:
					vVar0 = { 2428.804f, 1574.949f, 85.993f };
					break;
				case 34:
					vVar0 = { 2749.768f, 2172.252f, 155.8185f };
					break;
				case 35:
					vVar0 = { -2264.978f, -1887.964f, 118.8384f };
					break;
			}
			break;
	}
	return vVar0;
}

bool func_429(bool bParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	if (aggregate.bandana.func_11(bParam0, -1522723129))
	{
		return false;
	}
	iVar0 = aggregate.fm_mission_controller.func_1632(bParam0, 0, 0, 0);
	iVar1 = aggregate.generic_document_inspection.func_420(12);
	if (iVar1 < 5)
	{
		if (aggregate.bandana.func_11(bParam0, 683680997))
		{
			return false;
		}
	}
	if (iVar1 < 10)
	{
		if (aggregate.bandana.func_11(bParam0, -283942357))
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

bool func_430(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (&uParam0->f_11[iVar0] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_431(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1 + 1;
	if (func_453(iVar0))
	{
		return false;
	}
	if (!aggregate.annesburg.func_121(*((*uParam0)[iVar0 /*3*/])))
	{
		return false;
	}
	return true;
}

bool func_453(int iParam0)
{
	if (iParam0 > 2)
	{
		return true;
	}
	return false;
}

