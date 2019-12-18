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
	struct<12> Local_13 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 39;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 39;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	func_1(&Local_13, vScriptParam_0);
	if (aggregate_func_4251() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (aggregate_func_4263(aggregate_func_4259(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_13);
		}
	}
	if (aggregate_func_4251() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_13);
		}
	}
	if (!TASK::_0x841475AC96E794D1(Local_13.f_11))
	{
		func_5(&Local_13);
	}
	while (aggregate_func_3441(&Local_13))
	{
		if (aggregate_func_4248())
		{
			func_5(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_5(&Local_13);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_13);
}

void func_1(var uParam0, vector3 vParam1)
{
	*uParam0 = func_9(vParam1);
	uParam0->f_1 = func_10(vParam1);
	uParam0->f_2 = func_11(vParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = vParam1.x;
	uParam0->f_11 = vParam1.y;
	uParam0->f_5 = { TASK::_0xA8452DD321607029(uParam0->f_11, 1) };
	uParam0->f_55[0] = 1924088058;
	uParam0->f_55[1] = 1639046972;
	uParam0->f_55[2] = -1963501782;
	uParam0->f_55[3] = 2143682238;
	uParam0->f_55[4] = -972590214;
	uParam0->f_55[5] = -417335499;
	uParam0->f_55[6] = 467408818;
	uParam0->f_55[7] = -2053586493;
	uParam0->f_55[8] = -2133164405;
	uParam0->f_55[9] = -1724023040;
	uParam0->f_55[10] = 494571889;
	uParam0->f_55[11] = 790068786;
	uParam0->f_55[12] = 1373471224;
	uParam0->f_55[13] = -1555042073;
	uParam0->f_55[14] = 1896032674;
	uParam0->f_55[15] = 1090498470;
	uParam0->f_55[16] = -458420031;
	uParam0->f_55[17] = 1664062243;
	uParam0->f_55[18] = -551182035;
	uParam0->f_55[19] = 384178408;
	uParam0->f_55[20] = 328855486;
	uParam0->f_55[21] = 1132161511;
	uParam0->f_55[22] = -1555585595;
	uParam0->f_55[23] = 383936181;
	uParam0->f_55[24] = 800098637;
	uParam0->f_55[25] = -1093637570;
	uParam0->f_55[26] = 1055791420;
	uParam0->f_55[27] = -586283258;
	uParam0->f_55[28] = -1922025145;
	uParam0->f_55[29] = -1653099775;
	uParam0->f_55[30] = 116619265;
	uParam0->f_55[31] = 1322862606;
	uParam0->f_55[32] = 1569902667;
	uParam0->f_55[33] = 1155584865;
	uParam0->f_55[34] = -2090931256;
	uParam0->f_55[35] = -2024019598;
	uParam0->f_55[36] = -274901691;
	uParam0->f_55[37] = 939128696;
	uParam0->f_55[38] = 76710316;
	uParam0->f_13 = func_12(uParam0);
}

void func_5(var uParam0)
{
	aggregate_func_4620(&(uParam0->f_95));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
		{
			aggregate_func_484(uParam0->f_54, uParam0->f_54, 0);
		}
	}
	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	bool bVar0;

	bVar0 = aggregate_func_4249(uParam0) < 4;
	if (aggregate_func_4249(uParam0) > 2 && aggregate_func_4249(uParam0) < 4)
	{
		aggregate_func_204(&(uParam0->f_95), uParam0->f_5, bVar0, bVar0, 1);
	}
	if (aggregate_func_1501(Global_1273882->f_8, uParam0->f_5, 1) < 2f)
	{
		aggregate_func_1736(&(uParam0->f_95.f_6));
	}
	switch (aggregate_func_4249(uParam0))
	{
		case 0:
			aggregate_func_4242(uParam0, 1);
			break;
		case 1:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!STREAMING::_IS_IMAP_ACTIVE_2(uParam0->f_1))
				{
					STREAMING::_REQUEST_IMAP_2(uParam0->f_1);
				}
				aggregate_func_4242(uParam0, 2);
			}
			break;
		case 2:
			if (func_20(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_54, true, false) };
					MAP::_0x7563CBCA99253D1A(uParam0->f_54, 187984275);
					MAP::_0x1726963E6049DB53(uParam0->f_54);
					aggregate_func_421(uParam0->f_54, uParam0->f_54, 0);
					MISC::_0x553D67295DDD2309(uParam0->f_54);
					aggregate_func_4242(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
			{
				if (func_20(uParam0) && ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					MISC::_0x553D67295DDD2309(uParam0->f_54);
				}
				else
				{
					return false;
				}
			}
			if (_NAMESPACE49::_0x188313616D184213(uParam0->f_8, ENTITY::GET_ENTITY_MODEL(uParam0->f_54)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				{
					if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
					{
						aggregate_func_484(uParam0->f_54, uParam0->f_54, 0);
					}
					aggregate_func_4620(&(uParam0->f_95));
					aggregate_func_4242(uParam0, 4);
				}
			}
			break;
		case 4:
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
	}
	switch (iVar0)
	{
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
	}
	return 1;
}

int func_10(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return -117847307;
		case 2:
			return 513934897;
		case 3:
			return 1181416174;
		case 4:
			return 373802338;
		case 5:
			return 620580306;
		case 6:
			return -1962566219;
		case 7:
			return 1423626752;
		case 8:
			return -509143136;
		case 9:
			return -1923863493;
		case 10:
			return -250669847;
		case 11:
			return 95187046;
		case 12:
			return 970334657;
		case 13:
			return 869083804;
		case 14:
			return 974243296;
		case 15:
			return 1803556695;
		case 16:
			return 82281660;
		case 17:
			return -1666038504;
		case 18:
			return 2111987179;
		case 19:
			return 1204906867;
		case 20:
			return 1143189384;
		case 21:
			return -1546507097;
		case 22:
			return -1082524312;
		case 23:
			return -833697651;
		case 24:
			return -783284068;
		case 25:
			return 1700073271;
		case 26:
			return 738652812;
	}
	return -117847307;
}

char* func_11(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
		case 2:
			return "MP005_A2_BMecklace03_IPL";
		case 3:
			return "mp005_a1_BPRing02_IPL";
		case 4:
			return "MP005_a2_BANecklace01_IPL";
		case 5:
			return "MP005_a2_BANecklace02_IPL";
		case 6:
			return "MP005_A2_BANecklace03_IPL";
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
		case 8:
			return "MP005_A2_DPBracelet03_IPL";
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
		case 11:
			return "MP005_A2_HGBracelet02_IPL";
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
		case 13:
			return "mp005_a2_HGEarring02_IPL";
		case 14:
			return "mp005_a2_HCRing02_IPL";
		case 15:
			return "MP005_A2_HSBRACELET01_IPL";
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
		case 19:
			return "mp005_a1_MTRing02_IPL";
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
		case 21:
			return "MP005_A3_ODEarring1_IPL";
		case 22:
			return "MP005_A3_RANecklace02_IPL";
		case 23:
			return "MP005_A4_RANecklace03_IPL";
		case 24:
			return "mp005_a1_SDRing01_IPL";
		case 25:
			return "mp005_a1_WDRing1_IPL";
		case 26:
			return "mp005_a2_DEEarring02_IPL";
	}
	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (*uParam0)
	{
		case 1:
			iVar0 = 1776680074;
			break;
		case 2:
			iVar0 = 1776680074;
			break;
		case 3:
			iVar0 = 1776680074;
			break;
		case 4:
			iVar0 = 1776680074;
			break;
		case 5:
			iVar0 = 1776680074;
			break;
		case 6:
			iVar0 = 1776680074;
			break;
		case 7:
			iVar0 = 1776680074;
			break;
		case 8:
			iVar0 = 1776680074;
			break;
		case 9:
			iVar0 = 1776680074;
			break;
		case 10:
			iVar0 = 1776680074;
			break;
		case 11:
			iVar0 = 1776680074;
			break;
		case 12:
			iVar0 = 1776680074;
			break;
		case 13:
			iVar0 = 1776680074;
			break;
		case 14:
			iVar0 = 1776680074;
			break;
		case 15:
			iVar0 = 1776680074;
			break;
		case 16:
			iVar0 = 1776680074;
			break;
		case 17:
			iVar0 = 1776680074;
			break;
		case 18:
			iVar0 = 1776680074;
			break;
		case 19:
			iVar0 = 1776680074;
			break;
		case 20:
			iVar0 = 1776680074;
			break;
		case 21:
			iVar0 = 1776680074;
			break;
		case 22:
			iVar0 = 1776680074;
			break;
		case 23:
			iVar0 = 1776680074;
			break;
		case 24:
			iVar0 = 1776680074;
			break;
		case 25:
			iVar0 = 1776680074;
			break;
		case 26:
			iVar0 = 1776680074;
			break;
	}
	return iVar0;
}

bool func_20(var uParam0)
{
	if (aggregate_func_3415(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
	{
		return true;
	}
	return false;
}

var func_21(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_14[iVar0])))
		{
			uParam0->f_54 = &uParam0->f_14[iVar0];
			return &(uParam0->f_14[iVar0]);
		}
		iVar0++;
	}
	return uVar1;
}

