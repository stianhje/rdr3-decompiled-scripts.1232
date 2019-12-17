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
	uParam0->f_10[0] = -1837294946;
	uParam0->f_10[1] = -1178068078;
	uParam0->f_10[2] = -380472724;
	uParam0->f_10[3] = -859000955;
	uParam0->f_10[4] = 1784114904;
	uParam0->f_10[5] = -1659448997;
	uParam0->f_10[6] = 216161874;
	uParam0->f_10[7] = 1800266897;
	uParam0->f_10[8] = -967483978;
	uParam0->f_1 = Param1.f_1;
	uParam0->f_4 = { TASK::_0xA8452DD321607029(uParam0->f_1, 1) };
	iVar2 = 0;
	while (iVar2 < 56)
	{
		switch (iVar2)
		{
			case 0:
				uParam0->f_80[iVar2] = -1490629752;
				break;
			case 1:
				uParam0->f_80[iVar2] = 2012750462;
				break;
			case 2:
				uParam0->f_80[iVar2] = 703694458;
				break;
			case 3:
				uParam0->f_80[iVar2] = -1263660863;
				break;
			case 4:
				uParam0->f_80[iVar2] = -689914155;
				break;
			case 5:
				uParam0->f_80[iVar2] = 495887552;
				break;
			case 6:
				uParam0->f_80[iVar2] = 111174276;
				break;
			case 7:
				uParam0->f_80[iVar2] = 2104147823;
				break;
			case 8:
				uParam0->f_80[iVar2] = 1092698497;
				break;
			default:
				uParam0->f_80[iVar2] = 1092698497;
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

