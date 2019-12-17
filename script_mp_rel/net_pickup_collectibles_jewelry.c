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
	struct<2> Local_18 = { 0, 0 } ;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 56;
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
	var uLocal_68 = 0;
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
	var uLocal_86 = 10;
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
	var uLocal_98 = 56;
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
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == net_pickup_collectibles_bottles.__EntryFunction__

void func_1(var uParam0, struct<2> Param1, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	NETWORK::_0xE7DDA8BD3BCF751C(2);
	uParam0->f_3 = 0;
	uParam0->f_7 = Param1;
	uParam0->f_10[0] = 555565008;
	uParam0->f_10[1] = 1047639041;
	uParam0->f_10[2] = 6459801;
	uParam0->f_10[3] = -1193554482;
	uParam0->f_10[4] = -375111022;
	uParam0->f_10[5] = -1685795279;
	uParam0->f_10[6] = 1557499261;
	uParam0->f_10[7] = 1638241533;
	uParam0->f_10[8] = 1381892893;
	uParam0->f_10[9] = -1891494196;
	uParam0->f_10[10] = 614601031;
	uParam0->f_10[11] = 228390173;
	uParam0->f_10[12] = 1059533441;
	uParam0->f_10[13] = -1738556997;
	uParam0->f_10[14] = -1602263347;
	uParam0->f_10[15] = 1391900352;
	uParam0->f_10[16] = -1207380412;
	uParam0->f_10[17] = 2054053294;
	uParam0->f_10[18] = 537842604;
	uParam0->f_10[19] = -1965826694;
	uParam0->f_10[20] = 1984607038;
	uParam0->f_10[21] = 390341661;
	uParam0->f_10[22] = -1471046819;
	uParam0->f_10[23] = 1294299419;
	uParam0->f_10[24] = -486123777;
	uParam0->f_10[25] = -1421965287;
	uParam0->f_10[26] = -874559555;
	uParam0->f_10[27] = 585397373;
	uParam0->f_10[28] = -1882486255;
	uParam0->f_10[29] = 746416456;
	uParam0->f_10[30] = 883965838;
	uParam0->f_10[31] = -983691714;
	uParam0->f_10[32] = 1350522279;
	uParam0->f_10[33] = 1566230861;
	uParam0->f_10[34] = 1020485513;
	uParam0->f_10[35] = 1123926974;
	uParam0->f_10[36] = -2094416950;
	uParam0->f_10[37] = 751483325;
	uParam0->f_10[38] = 2042302597;
	uParam0->f_1 = Param1.f_1;
	uParam0->f_4 = { TASK::_0xA8452DD321607029(uParam0->f_1, 1) };
	iVar2 = 0;
	while (iVar2 < 56)
	{
		switch (iVar2)
		{
			case 0:
				uParam0->f_80[iVar2] = 1924088058;
				break;
			case 1:
				uParam0->f_80[iVar2] = 1639046972;
				break;
			case 2:
				uParam0->f_80[iVar2] = -1963501782;
				break;
			case 3:
				uParam0->f_80[iVar2] = 2143682238;
				break;
			case 4:
				uParam0->f_80[iVar2] = -972590214;
				break;
			case 5:
				uParam0->f_80[iVar2] = -417335499;
				break;
			case 6:
				uParam0->f_80[iVar2] = -2053586493;
				break;
			case 7:
				uParam0->f_80[iVar2] = -1724023040;
				break;
			case 8:
				uParam0->f_80[iVar2] = 1664062243;
				break;
			case 9:
				uParam0->f_80[iVar2] = 1132161511;
				break;
			case 10:
				uParam0->f_80[iVar2] = 383936181;
				break;
			case 11:
				uParam0->f_80[iVar2] = 800098637;
				break;
			case 12:
				uParam0->f_80[iVar2] = -1922025145;
				break;
			case 13:
				uParam0->f_80[iVar2] = -1653099775;
				break;
			case 14:
				uParam0->f_80[iVar2] = 1322862606;
				break;
			case 15:
				uParam0->f_80[iVar2] = 1569902667;
				break;
			case 16:
				uParam0->f_80[iVar2] = 1155584865;
				break;
			case 17:
				uParam0->f_80[iVar2] = -2024019598;
				break;
			case 18:
				uParam0->f_80[iVar2] = -274901691;
				break;
			case 19:
				uParam0->f_80[iVar2] = 939128696;
				break;
			case 20:
				uParam0->f_80[iVar2] = 76710316;
				break;
			default:
				uParam0->f_80[iVar2] = 76710316;
				break;
		}
		iVar2++;
	}
	iVar1 = Param1.f_1;
	if (TASK::_0x841475AC96E794D1(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		if (iVar0 == 0)
		{
			aggregate.net_arrowheads.func_10(uParam0, 4);
		}
	}
	uParam0->f_9 = 1;
}

