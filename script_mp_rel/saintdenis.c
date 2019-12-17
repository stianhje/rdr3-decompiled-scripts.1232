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
	struct<28> Local_21 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_108 = NULL;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = false;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126[7] = { 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_122 = -1;
	iLocal_172 = -1;
	iLocal_173 = 1;
	iLocal_174 = 20000;
	iLocal_177 = vScriptParam_0.x;
	iLocal_175 = vScriptParam_0.z;
	bLocal_179 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate.aberdeenpigfarm.func_1();
	}
	aggregate.aberdeenpigfarm.func_2();
	aggregate.aberdeenpigfarm.func_23();
	iLocal_176 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate.aberdeenpigfarm.func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_176)
		{
			iLocal_176 = 0;
			aggregate.aberdeenpigfarm.func_5(iLocal_177, &iLocal_175);
			switch (iLocal_175)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_178 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_175 = 1;
					}
					else
					{
						iLocal_175 = 2;
					}
					break;
				case 1:
					if (!aggregate.aberdeenpigfarm.func_1() || iLocal_178 < MISC::GET_GAME_TIMER())
					{
						bLocal_179 = false;
						iLocal_175 = 2;
					}
					break;
				case 2:
					aggregate.aberdeenpigfarm.func_154(iLocal_177);
					aggregate.aberdeenpigfarm.func_7();
					aggregate.aberdeenpigfarm.func_8();
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_177)))
					{
						aggregate.aberdeenpigfarm.func_11(aggregate.aberdeenpigfarm.func_9(iLocal_177), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate.aberdeenpigfarm.func_12(iLocal_177));
					Global_1896608 = -1;
					iLocal_178 = (iLocal_174 + MISC::GET_GAME_TIMER());
					iLocal_175 = 3;
					break;
				case 3:
					if (func_13() || iLocal_178 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_177);
						iLocal_178 = (iLocal_174 + MISC::GET_GAME_TIMER());
						iLocal_175 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_177) || iLocal_178 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_177);
						iLocal_178 = (MISC::GET_GAME_TIMER() + iLocal_174);
						iLocal_175 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_177) || iLocal_178 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_177);
						iLocal_178 = (iLocal_174 + MISC::GET_GAME_TIMER());
						iLocal_175 = 7;
					}
					break;
				case 7:
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_177)))
					{
						if (aggregate.aberdeenpigfarm.func_19(aggregate.aberdeenpigfarm.func_9(iLocal_177), 4) && !iLocal_178 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate.adlerranch.func_20(iLocal_177) || iLocal_178 < MISC::GET_GAME_TIMER())
							{
								aggregate.aberdeenpigfarm.func_21(iLocal_177, 4);
								iLocal_178 = (iLocal_174 + MISC::GET_GAME_TIMER());
								iLocal_175 = 8;
							}
							Jump @822; //curOff = 538
							aggregate.aberdeenpigfarm.func_14(iLocal_177);
							aggregate.aberdeenpigfarm.func_23();
							if (!aggregate.aberdeenpigfarm.func_24(4105, 0))
							{
								aggregate.aberdeenpigfarm.func_23();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_177);
							func_30(iLocal_177);
							aggregate.aberdeenpigfarm.func_23();
							aggregate.aberdeenpigfarm.func_23();
							iLocal_175 = 9;
							Jump @822; //curOff = 606
							func_33(iLocal_177);
							aggregate.aberdeenpigfarm.func_34();
							iLocal_175 = 10;
							Jump @822; //curOff = 623
							aggregate.aberdeenpigfarm.func_35(Global_1896662);
							func_36(iLocal_177, Global_1896662);
							iLocal_175 = 11;
							Jump @822; //curOff = 648
							func_37(iLocal_177);
							aggregate.aberdeenpigfarm.func_21(iLocal_177, 8);
							if (aggregate.aberdeenpigfarm.func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate.aberdeenpigfarm.func_39(32);
							}
							iLocal_175 = 12;
							Jump @822; //curOff = 698
							if (func_40(iLocal_177))
							{
								iLocal_176 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate.aberdeenpigfarm.func_41(Global_1896662, iLocal_177);
							aggregate.aberdeenpigfarm.func_42(iLocal_177);
							aggregate.aberdeenpigfarm.func_21(iLocal_177, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_177 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_177 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_177 /*36*/])->f_12);
							}
							Jump @822; //curOff = 799
							aggregate.aberdeenpigfarm.func_8();
							aggregate.aberdeenpigfarm.func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_177 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_177 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate.aberdeenpigfarm.func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate.aberdeenpigfarm.func_45() != -1)
						{
							aggregate.aberdeenpigfarm.func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_13()
{
	int iVar0;

	iLocal_50 = ((*Global_1887327)[5 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_50, 3);
	aggregate.bayounwa_population.func_8(iLocal_50, 0, 0);
	iLocal_51 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2714.648f, -1285.207f, 50.173f, 0f, 0f, 25f, 12.259f, 9.427f, 4.002f, "SDN-m_volGunsmith");
	iLocal_52 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2716.798f, -1284.737f, 49.46929f, 0f, 0f, -155.898f, 3.382181f, 1.741518f, 1.678f, "SDN-m_volGunsmithPrompt");
	iLocal_53 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.924f, -1281.781f, 49.68018f, 0f, 0f, 27.50082f, 2.604466f, 8.359895f, 3.813055f, "SDN-m_volGunsmithPorch");
	iLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2713.302f, -1287.348f, 55.73129f, 0f, 0f, -154.72f, 21.799f, 13.459f, 15.193f, "SDN-m_volGunsmithOwned");
	VOLUME::_0xB469CFD9E065EB99(iLocal_51, 10016);
	iLocal_54 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_54, 2716.952f, -1287.544f, 49.46929f, 0f, 0f, -155.898f, 4.360659f, 1.741518f, 1.678f);
	VOLUME::_0x39816F6F94F385AD(iLocal_54, 2710.5f, -1287.142f, 50.21229f, 0f, 0f, 25f, 3.074021f, 9.427f, 3.163f);
	iLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2553.141f, -1164.299f, 55.07949f, 0f, 0f, -90.293f, 18.31693f, 12.58955f, 4.791f, "SDN-m_volTailorOwner");
	iLocal_67 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2554.85f, -1169.459f, 53.92649f, 0f, 0f, 89.804f, 2.031777f, 3.197688f, 2.484f, "SDN-m_volTailorPrompt");
	iLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2555.342f, -1166.591f, 53.92649f, 0f, 0f, 89.804f, 1.641972f, 2.211613f, 2.484f, "SDN-m_volTailorOfflimits");
	iLocal_69 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_69, iLocal_66);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_69, iLocal_68);
	VOLUME::_0xB469CFD9E065EB99(iLocal_69, 10019);
	iLocal_58 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2826.879f, -1316.782f, 47.5f, 0f, 0f, 49.75f, 17.8f, 7.231f, 6.978f, "SDN-m_volGeneralStore");
	iLocal_59 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2825.75f, -1318.25f, 46.5f, 0f, 0f, 140f, 3f, 1f, 2f, "SDN-m_volGeneralStorePrompt");
	iLocal_61 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2824.25f, -1319.25f, 46.25f, 0f, 0f, 140f, 4f, 1f, 1.25f, "SDN-m_volGeneralStoreOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_58, 10014);
	iLocal_60 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_60, 2831.25f, -1320.236f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 6.642959f, 3.509136f);
	VOLUME::_0x39816F6F94F385AD(iLocal_60, 2822.573f, -1312.954f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 9.205815f, 3.509136f);
	iLocal_63 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.185f, -1180.077f, 54.07192f, 0f, 0f, 0f, 9.196758f, 6.114635f, 3.576711f, "SDN-m_volBarberShop");
	iLocal_64 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.359f, -1180.46f, 53.28771f, 0f, 0f, 0f, 6.583728f, 4.267162f, 2.03105f, "SDN-m_volBarberPrompt");
	iLocal_65 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBarberPorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_65, 2661.405f, -1180.077f, 53.38316f, 0f, 0f, 0f, 2.748698f, 7.856023f, 3.576711f);
	VOLUME::_0x39816F6F94F385AD(iLocal_65, 2648.97f, -1178.597f, 53.38316f, 0f, 0f, 0f, 2.748698f, 9.535893f, 3.576711f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_63, 10006);
	iLocal_83 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_83, 2748.327f, -1397.359f, 46.234f, 0f, 0f, 24.583f, 4.62f, 3.944f, 2.741917f);
	VOLUME::_0x39816F6F94F385AD(iLocal_83, 2746.954f, -1394.676f, 46.234f, 0f, 0f, 24.583f, 2.197f, 2.146f, 2.742f);
	VOLUME::_0x39816F6F94F385AD(iLocal_83, 2749.686f, -1400.236f, 46.234f, 0f, 0f, 24.583f, 1.971f, 2.636f, 2.742f);
	iLocal_84 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_84, 2747.206f, -1395.105f, 46.214f, 0f, 0f, 22.919f, 1.779f, 1.111f, 2.494324f);
	VOLUME::_0x39816F6F94F385AD(iLocal_84, 2749.444f, -1399.819f, 46.214f, 0f, 0f, 22.919f, 1.767f, 1.472f, 2.494324f);
	iLocal_85 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.29f, -1397.222f, 46.214f, 0f, 0f, 25.95989f, 4.162762f, 3.173493f, 2.117f, "SDN - m_volPostOfficeOFF");
	VOLUME::_0xB469CFD9E065EB99(iLocal_83, 10018);
	iLocal_86 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficeMP");
	iLocal_87 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficePromptMP");
	iLocal_88 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeNoCombat Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_88, 2739.465f, -1399.159f, 45.69f, 0f, 0f, 24.504f, 22.224f, 9.58f, 6.554f);
	VOLUME::_0x39816F6F94F385AD(iLocal_88, 2737.356f, -1394.378f, 47.02f, 0f, 0f, 24.737f, 5.686f, 1.805f, 3.673f);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.034f, -1450.197f, 48.076f, 0f, 0f, 0f, 6.704965f, 28.73499f, 6.621f, "SDN Horse Shop - m_volHorseShop");
		iLocal_72 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN Horse Shop - m_volHorseShopOutsideDoor Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_72, 2502.26f, -1435.017f, 45.37257f, 0f, 0f, 0f, 3.869675f, 2.62296f, 7.47769f);
		VOLUME::_0x39816F6F94F385AD(iLocal_72, 2499.42f, -1450.354f, 45.37257f, 0f, 0f, -90f, 3.869675f, 2.62296f, 7.47769f);
		VOLUME::_0x39816F6F94F385AD(iLocal_72, 2502.348f, -1465.799f, 45.37257f, 0f, 0f, 180f, 3.869675f, 2.62296f, 7.47769f);
		aggregate.saintdenis.func_54(9, iLocal_72);
		VOLUME::_0xB469CFD9E065EB99(iLocal_71, 10017);
		iLocal_112 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volIndGuardDogOwner");
		VOLUME::_0x39816F6F94F385AD(iLocal_112, 2597.014f, -1453.302f, 47.84009f, 0f, 0f, -35.27248f, 13.32053f, 38.94104f, 13.77784f);
		VOLUME::_0x39816F6F94F385AD(iLocal_112, 2594.038f, -1466.641f, 47.84009f, 0f, 0f, 89.60727f, 12.63065f, 19.94241f, 13.77784f);
		VOLUME::_0x39816F6F94F385AD(iLocal_112, 2581.743f, -1471.003f, 47.84009f, 0f, 0f, 89.60727f, 3.533205f, 8.003942f, 13.77784f);
		VOLUME::_0x39816F6F94F385AD(iLocal_112, 2582.623f, -1467.664f, 47.84009f, 0f, 0f, -35.60653f, 6.672962f, 8.003942f, 13.77784f);
		VOLUME::_0x39816F6F94F385AD(iLocal_112, 2593.001f, -1445.323f, 47.84009f, 0f, 0f, 55.78225f, 7.109884f, 5.264667f, 13.77784f);
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.735f, -1295.139f, 53.79828f, 0f, 0f, 25.62823f, 16.5815f, 20.83208f, 5.240817f, "Saint Denis - m_volBank");
		iLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.218f, -1292.576f, 52.36508f, 0f, 0f, 25.62823f, 2.356534f, 1.366835f, 2.623696f, "Saint Denis - m_volBankPrompt");
		iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.618f, -1295.548f, 51.55162f, 0f, 0f, 0f, 2.535386f, 2.647964f, 2.654926f, "Saint Denis - m_volBankShopOfflimits Agg");
		iLocal_117 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volRiverBoatGuardArea");
		VOLUME::_0x39816F6F94F385AD(iLocal_117, 2788.009f, -1499.647f, 45.91699f, 0f, 0f, -59.52556f, 28.86597f, 15.03598f, 14.77563f);
		VOLUME::_0x39816F6F94F385AD(iLocal_117, 2807.164f, -1500.584f, 45.91699f, 0f, 0f, 179.899f, 28.86597f, 15.03598f, 14.77563f);
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		VOLUME::_0xB469CFD9E065EB99(iLocal_73, 10005);
		iLocal_120 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2839.348f, -1229.419f, 47.30768f, 0f, 0f, -26.82762f, 22.30358f, 30.06492f, 16.24477f, "Saint Denis - m_volSlumsMarketHorseAvoidance");
		POPULATION::_0xB56D41A694E42E86(iLocal_120, 393217, 0, 0, -1, -1, 0);
	}
	else
	{
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2508.191f, -1449.654f, 48.41523f, 0f, 0f, 0f, 15.82893f, 29.37446f, 6.829615f, "St. Denis - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_71, 10017);
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_73, 0, 0, 0, -1, -1, 0);
	}
	iLocal_55 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720.304f, -1230.25f, 51f, 0f, 0f, -90f, 10f, 8.456f, 4f, "SDN - m_volDoctor");
	iLocal_56 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1232f, 50f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volDoctorPrompt");
	iLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.5f, -1233f, 50f, 0f, 0f, 0f, 1f, 3.5f, 3f, "SDN-m_volDoctorOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_55, 10011);
	iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2767.35f, -1417.88f, 43.96f, 0f, 0f, -35.20718f, 55.10648f, 55.98696f, 21.39363f, "SDN-m_volTrainStation");
	VOLUME::_0xB469CFD9E065EB99(iLocal_76, 10020);
	iLocal_118 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("St. Denis - m_volPhotoStudio-Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_118, 2734.174f, -1119.755f, 50.10792f, 0f, 0f, 0f, 5.762633f, 7.941937f, 4.04453f);
	VOLUME::_0x39816F6F94F385AD(iLocal_118, 2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
	iLocal_119 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.957f, 50.10792f, 0f, 0f, 0f, 5.762633f, 6.069339f, 4.04453f, "St. Denis - m_volPhotoStudioPrompt");
	iLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2546.452f, -1301.997f, 51.59172f, 0f, 0f, 0.496382f, 18.19264f, 24.24748f, 8.938443f, "Saint Denis - m_volTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_70, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_70, 10208, 0, 0, -1, -1, 0);
	iLocal_121 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(2607.1f, -1253.1f, 52.9f, 300f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_62 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.228f, -1199.688f, 47.8205f, 0f, 0f, 4.503f, 10.98f, 10.95572f, 7.601785f, "SDN - m_volFence");
	iLocal_81 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.36f, -1200.223f, 49.71552f, 0f, 0f, 4.313612f, 2.547739f, 1.659313f, 2.393255f, "SDN - m_volFencePrompt");
	iLocal_82 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.542f, -1202.452f, 49.78863f, 0f, 0f, 4.313612f, 2.547739f, 1.326916f, 2.393255f, "SDN - m_volFenceCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_62, 10013);
	iLocal_77 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-Cemetery-Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2700.761f, -1102.983f, 50.71395f, 0f, 0f, 0.216256f, 56.07924f, 9.712024f, 9.222456f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2763.792f, -1031.355f, 46.77443f, 0f, 0f, -0.624653f, 69.38274f, 16.03568f, 7.964019f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2728.395f, -1068.828f, 46.80749f, 0f, 0f, 179.1824f, 105.5484f, 62.22727f, 8.774147f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2785.364f, -1058.214f, 46.63797f, 0f, 0f, 89.47796f, 34.10864f, 25.3308f, 7.36563f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_77, 2783.674f, -1084.674f, 47.11552f, 0f, 0f, -37.88909f, 11.44402f, 18.43804f, 3.770358f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2677.399f, -1052.453f, 45.53098f, 0f, 0f, -33.10271f, 19.00153f, 27.72343f, 8.265499f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, 2681.971f, -1079.012f, 45.86315f, 0f, 0f, -77.70405f, 51.40699f, 30.2015f, 14.18493f);
	POPULATION::_0xB56D41A694E42E86(iLocal_77, 2048, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_77, 2048, 0, 0, -1, -1, 0);
	func_55();
	func_56(5);
	iLocal_124 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.495f, -1309.387f, 50.70366f, 0f, 0f, 0f, 17f, 9f, 7f, "sd_police_station");
	iLocal_125 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.091f, -1308.705f, 47.9537f, 0f, 0f, 0f, 16.88976f, 16.00587f, 10f, "SDN - m_volLawPoliceStationLoitering");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_125, 5, 1);
	iLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2819.564f, -1331.075f, 46.45f, 0f, 0f, 49.75f, 8.176f, 6.124f, 2.869f, "SDN-m_volButcher");
	iLocal_91 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2817.843f, -1329.871f, 46.45f, 0f, 0f, 49.75f, 2.5f, 1.877f, 2f, "SDN-m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_90, 10008);
	iLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.853f, -1353.716f, 50.90947f, -0.01f, 7E-06f, 39.03817f, 25f, 9.1f, 9f, "SDN - m_volMagicLanternTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_92, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_92, 10208, 0, 0, -1, -1, 0);
	iLocal_114 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.552f, -1224.573f, 47.5f, 0f, 0f, 0f, 6.381909f, 6.088969f, 3.5f, "SDN-m_volTrapper");
	iLocal_115 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1225.328f, 47.5f, 0f, 0f, 0f, 3f, 2f, 3f, "SDN-m_volTrapperPrompt");
	iLocal_116 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2832.5f, -1222.75f, 47.5f, 0f, 0f, 0f, 3f, 2.5f, 3f, "SDN-m_volTrapperOffLimits");
	iLocal_93 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictLoitering Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2401.805f, -1199.688f, 50.64869f, 0f, 0f, 89.35063f, 118.7466f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2404.337f, -1183.499f, 50.6487f, 0f, 0f, 89.5351f, 8.550712f, 187.7067f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2461.883f, -1136.172f, 50.64869f, 0f, 0f, 0f, 278.0189f, 27.85054f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2493.894f, -1198.237f, 50.6487f, 0f, 0f, -179.2395f, 22.47914f, 148.257f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2311.967f, -1157.098f, 50.6487f, 0f, 0f, -2.1579f, 20.14263f, 77.43121f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2450.991f, -1255.936f, 50.6487f, 0f, 0f, 74.44216f, 17.99708f, 81.91428f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2404.273f, -1283.045f, 50.6487f, 0f, 0f, 162.6364f, 27.31752f, 67.13039f, 75.92666f);
	VOLUME::_0x39816F6F94F385AD(iLocal_93, 2432.95f, -1310.865f, 50.6487f, 0f, 0f, 71.7864f, 17.99708f, 81.91428f, 75.92666f);
	iLocal_94[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.054f, -1284.265f, 49.2916f, 0f, 0f, -15.29399f, 23.856f, 58.70475f, 12.94626f, "SDN-m_volGardenDistrictTrespassing 0");
	iLocal_94[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 1 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[1]), 2448.448f, -1286.899f, 49.2916f, 0f, 0f, -15.29399f, 17.29098f, 48.36654f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[1]), 2456.016f, -1310.996f, 49.2916f, 0f, 0f, -15.29399f, 16.53504f, 5.606594f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[1]), 2455.733f, -1288.545f, 49.2916f, 0f, 0f, -178.5714f, 16.65417f, 45.1132f, 18.53969f);
	iLocal_94[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 2 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[2]), 2362.462f, -1272.869f, 49.2916f, 0f, 0f, -19.75965f, 60.68886f, 48.63572f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[2]), 2389.465f, -1278.762f, 49.2916f, 0f, 0f, 164.0191f, 13.08261f, 54.88486f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[2]), 2364.107f, -1246.863f, 49.2916f, 0f, 0f, -89.30434f, 15.33103f, 78.01559f, 18.53969f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[2]), 2339.069f, -1267.846f, 49.2916f, 0f, 0f, -0.4259f, 28.2545f, 35.02214f, 18.52822f);
	iLocal_94[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 3 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[3]), 2361.655f, -1164.18f, 49.2916f, 0f, 0f, -90.15806f, 27.47045f, 82.17483f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[3]), 2354.933f, -1148.675f, 49.2916f, 0f, 0f, 75.14153f, 13.61488f, 64.51537f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[3]), 2331.474f, -1143.846f, 49.2916f, 0f, 0f, -90.15805f, 27.47045f, 21.4971f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[3]), 2344.552f, -1139.157f, 49.2916f, 0f, 0f, -111.0944f, 3.614755f, 17.73002f, 20.96592f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[3]), 2345.342f, -1138.515f, 49.2916f, 0f, 0f, 39.12743f, 3.614755f, 17.73002f, 20.96592f);
	iLocal_94[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 4 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[4]), 2400.034f, -1058.885f, 49.2916f, 0f, 0f, 0.018814f, 55.618f, 80.51579f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[4]), 2401.558f, -1073.348f, 49.2916f, 0f, 0f, 0.018814f, 52.17577f, 99.82372f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[4]), 2401.558f, -1014.455f, 49.2916f, 0f, 0f, 0.018814f, 5.173525f, 9.729424f, 18.52822f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_94[4]), 2401.313f, -1002.282f, 39.19f, 0f, 0f, 0f, 9.068625f, 9.340483f, 18.87085f);
	iLocal_94[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2451.604f, -1078.587f, 49.2916f, 0f, 0f, 0.018814f, 47.07628f, 90.20814f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 5");
	iLocal_94[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 6 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[6]), 2488.193f, -1058.567f, 49.2916f, 0f, 0f, 0.018814f, 24.72538f, 21.73822f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[6]), 2493.978f, -1092.539f, 49.2916f, 0f, 0f, 0.018814f, 37.74252f, 62.8319f, 18.52822f);
	iLocal_94[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2539.709f, -1096.017f, 49.2916f, 0f, 0f, 0.018814f, 52.81096f, 55.85768f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 7");
	iLocal_94[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2597.531f, -1096.083f, 49.2916f, 0f, 0f, 0.018814f, 30.5856f, 56.0564f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 8");
	iLocal_94[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2623.401f, -1074.223f, 49.2916f, 0f, 0f, 0.018814f, 43.08669f, 27.58172f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 9");
	iLocal_94[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 10 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[10]), 2629.527f, -1105.324f, 49.2916f, 0f, 0f, 0.018814f, 40.67762f, 37.41682f, 18.52822f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[10]), 2651.13f, -1110.501f, 49.2916f, 0f, 0f, 0.018814f, 3.892076f, 27.00792f, 18.52822f);
	iLocal_94[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2453.628f, -1164.804f, 52.55637f, 0f, 0f, 179.9622f, 72.70865f, 27.57841f, 19.55484f, "SDN-m_volGardenDistrictTrespassing 11");
	iLocal_94[12] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 12 Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[12]), 2479.08f, -1220.485f, 52.55637f, 0f, 0f, -179.7821f, 20.63473f, 59.85671f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[12]), 2471.073f, -1249.139f, 52.55637f, 0f, 0f, -16.01828f, 17.98121f, 4.191609f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[12]), 2465.776f, -1238.28f, 52.55637f, 0f, 0f, -89.74155f, 16.83455f, 6.001091f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[12]), 2468.223f, -1225.058f, 52.55637f, 0f, 0f, -114.8564f, 14.11476f, 6.010783f, 19.55484f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_94[12]), 2484.649f, -1251.897f, 52.55637f, 0f, 0f, 178.8598f, 9.602062f, 4.226469f, 19.55484f);
	iVar0 = 0;
	while (iVar0 < iLocal_94)
	{
		VOLUME::_0x3EFABB21E14A6BD1(&(iLocal_94[iVar0]), 2, 1);
		VOLUME::_0x3EFABB21E14A6BD1(&(iLocal_94[iVar0]), 3, 1);
		iVar0++;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_109 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRegistration Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_109, 2351.493f, -1215.674f, 52.55637f, 0f, 0f, 179.9622f, 103.357f, 46.93462f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_109, 2289.215f, -1216.538f, 45.98805f, 0f, 0f, 0f, 24.45309f, 6.611898f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_109, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 17.01238f, 24.97074f, 32.63914f);
		iLocal_111 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_111, 2331.856f, -1216.377f, 44.63484f, 0f, 0f, 0f, 11.67815f, 5.418246f, 2.162155f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_111, 2337.601f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_111, 2326.144f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_0x39816F6F94F385AD(iLocal_111, 2379.45f, -1206.713f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_111, 2375.269f, -1216.244f, 48.15978f, 0f, 0f, 0f, 38.31001f, 18.0602f, 24.88261f);
		VOLUME::_0x39816F6F94F385AD(iLocal_111, 2379.45f, -1225.62f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_0x39816F6F94F385AD(iLocal_111, 2364.137f, -1231.286f, 48.31032f, 0f, 0f, 0f, 15.13832f, 2.382603f, 7.528201f);
		iLocal_110 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRestriction Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_110, iLocal_111);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2351.483f, -1228.943f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 20f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2351.501f, -1203.041f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 21.08849f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2327.945f, -1216.194f, 52.55637f, 0f, 0f, 179.9622f, 56.37261f, 5.997283f, 19.55484f);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2289.417f, -1216.377f, 45.98805f, 0f, 0f, 0f, 22.04649f, 5.418246f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 15.4733f, 22.61529f, 32.63914f);
		VOLUME::_0x39816F6F94F385AD(iLocal_110, 2398.721f, -1216.24f, 52.55637f, 0f, 0f, 179.9622f, 8.560711f, 5.997283f, 19.55484f);
		sLocal_108 = "BRONTE";
		LAW::_CREATE_GUARD_ZONE(sLocal_108);
		LAW::_0x8C598A930F471938(sLocal_108, iLocal_109);
		LAW::_0x35815F372D43E1E5(sLocal_108, iLocal_110);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_108, iLocal_110);
		LAW::_0xA1B0E6301E2E02A6(sLocal_108, iLocal_111);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_108, 2376.87f, -1216.214f, 47.3213f);
		LAW::_0xA8A74AA79FB67159(sLocal_108, iLocal_109);
	}
	iLocal_172 = func_57(2834.069f, -1229.412f, 46.6618f, 0f, 0f, 0f, 18f, 18f, 18f, 1065353216 /* Float: 1f */);
	return true;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return !STREAMING::_0xCF45DF50C7775F2A();
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	func_58(0, "", "", "", "", 2741.693f, -1265.625f, 79.65331f, "SD_SINGLE_TOLL");
	func_59(9, 0, 0);
	func_59(12, 0, 0);
	func_59(19, 0, 0);
	aggregate.blackwater.func_55(-1080627546, 1, 0);
	aggregate.blackwater.func_55(-1847672446, 1, 0);
}

bool func_17(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	var uVar5;

	iVar0 = 1;
	vVar1 = { 0f, 0f, 0f };
	if (aggregate.annesburg.func_123(61, &uVar5, &uVar4, &vVar1) && !aggregate.annesburg.func_121(vVar1))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
		if (!ENTITY::_0x6BFBDC46139C45AB(vVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_26()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (aggregate.aberdeenpigfarm.func_45() == 0)
		{
		}
	}
}

void func_27()
{
	aggregate.armadillo.func_58(2, 2633.455f, -1226.72f, 52.3796f, iLocal_78, 5);
	aggregate.armadillo.func_58(1, 2796.278f, -1168.035f, 46.924f, iLocal_79, 5);
}

void func_28()
{
	func_69(0, 2542.098f, -1282.514f, 48.21795f, &(Global_1268116->f_47[0]), 5);
	func_69(1, 2686.8f, -1362.094f, 47.21417f, &(Global_1268116->f_47[1]), 5);
}

void func_29(int iParam0)
{
	aggregate.annesburg.func_63(0, iLocal_55, iParam0, iLocal_56, iLocal_57, 12, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(0, -571840810, 0, 0);
	aggregate.annesburg.func_66(0, 79213682, 0, 0);
	aggregate.annesburg.func_66(0, 1104407261, 0, 0);
	aggregate.annesburg.func_66(0, 994323006, 0, 0);
	aggregate.annesburg.func_66(0, 82263429, 0, 0);
	aggregate.beechershope.func_59(0, 0);
	aggregate.annesburg.func_63(3, iLocal_58, iParam0, iLocal_59, iLocal_61, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(3, 8192);
	aggregate.annesburg.func_66(3, -180076077, 0, 0);
	aggregate.annesburg.func_66(3, 1051874490, 0, 0);
	aggregate.annesburg.func_66(3, -308726915, 0, 0);
	aggregate.annesburg.func_66(3, -60894968, 0, 0);
	aggregate.beechershope.func_59(3, 0);
	aggregate.annesburg.func_63(4, iLocal_62, iParam0, iLocal_81, iLocal_82, 44, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(4, 1687619371, 0, 0);
	aggregate.beechershope.func_59(4, 0);
	aggregate.annesburg.func_63(6, iLocal_51, iParam0, iLocal_52, iLocal_54, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(6, 1057071735, 0, 0);
	aggregate.annesburg.func_66(6, -1011766303, 0, 0);
	aggregate.annesburg.func_66(6, 841127028, 0, 0);
	aggregate.beechershope.func_59(6, 0);
	aggregate.annesburg.func_63(7, iLocal_69, iParam0, iLocal_67, iLocal_68, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(7, -1683351620, 0, 0);
	aggregate.annesburg.func_66(7, -548537711, 0, 0);
	aggregate.annesburg.func_66(7, -843327635, 0, 0);
	aggregate.beechershope.func_59(7, 0);
	aggregate.annesburg.func_63(25, iLocal_124, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(25, 1);
	aggregate.annesburg.func_64(25, 16384);
	aggregate.annesburg.func_64(25, 8192);
	aggregate.annesburg.func_64(25, 536870912);
	aggregate.annesburg.func_63(18, iLocal_118, iParam0, iLocal_119, 0, 524290, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(18, 123675751, 0, 0);
	aggregate.annesburg.func_66(18, 1079875175, 0, 0);
	aggregate.beechershope.func_59(18, 0);
	aggregate.annesburg.func_63(36, &(Global_1268116->f_47[Global_1268116->f_45]), 5, &(Global_1268116->f_50[Global_1268116->f_45]), 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_63(9, iLocal_71, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(9, 536870912);
	aggregate.annesburg.func_64(9, 8388608);
	aggregate.annesburg.func_64(9, 1);
	aggregate.annesburg.func_64(9, 16384);
	aggregate.annesburg.func_64(9, 32768);
	aggregate.annesburg.func_64(9, 8192);
	aggregate.annesburg.func_64(9, 4);
	aggregate.annesburg.func_64(9, 16777216);
	aggregate.annesburg.func_64(9, 67108864);
	if (!aggregate.annesburg.func_109() && aggregate.annesburg.func_110())
	{
		aggregate.annesburg.func_66(9, 293111919, 0, 0);
		aggregate.annesburg.func_66(9, -1550406539, 0, 0);
		aggregate.annesburg.func_66(9, 726257907, 0, 0);
		aggregate.annesburg.func_66(9, 229021101, 0, 0);
		aggregate.annesburg.func_66(9, 1234907076, 0, 0);
		aggregate.annesburg.func_66(9, 1388233219, 0, 0);
	}
	else
	{
		aggregate.annesburg.func_66(9, 293111919, 1f, 1);
		aggregate.annesburg.func_66(9, -1550406539, -1f, 1);
		aggregate.annesburg.func_66(9, 726257907, -1f, 1);
		aggregate.annesburg.func_66(9, 229021101, -1f, 1);
		aggregate.annesburg.func_66(9, 1234907076, 1f, 1);
		aggregate.annesburg.func_66(9, 1388233219, -1f, 1);
	}
	aggregate.annesburg.func_63(10, iLocal_90, iParam0, iLocal_91, 0, 460, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(10, 536870912);
	aggregate.beechershope.func_59(10, 0);
	aggregate.aberdeenpigfarm.func_115();
	aggregate.blackwater.func_72(54);
	aggregate.blackwater.func_72(56);
	aggregate.annesburg.func_63(8, iLocal_63, iParam0, iLocal_64, 0, 4098, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(8, 1410192354, 0, 0);
	aggregate.annesburg.func_66(8, 1708357485, 0, 0);
	aggregate.annesburg.func_66(8, -910885330, 0, 0);
	aggregate.annesburg.func_66(8, -1937144872, 0, 0);
	aggregate.annesburg.func_66(8, 527035651, 0, 0);
	aggregate.annesburg.func_66(8, 29962690, 0, 0);
	aggregate.beechershope.func_59(8, 0);
	aggregate.annesburg.func_63(2, iLocal_86, iParam0, iLocal_87, 0, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.beechershope.func_59(2, 0);
	aggregate.blackwater.func_73(iParam0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(250, iLocal_124, 1);
	aggregate.annesburg.func_67(202, iLocal_80, 1);
	aggregate.annesburg.func_67(140, iLocal_55, 1);
	aggregate.annesburg.func_67(200, iLocal_58, 1);
	aggregate.annesburg.func_67(219, iLocal_62, 1);
	aggregate.annesburg.func_67(142, iLocal_69, 1);
	aggregate.annesburg.func_67(201, iLocal_63, 1);
	aggregate.annesburg.func_67(141, iLocal_83, 1);
	aggregate.annesburg.func_67(139, iLocal_90, 1);
	aggregate.annesburg.func_67(205, iLocal_71, 1);
	aggregate.annesburg.func_67(231, iLocal_112, 1);
	aggregate.annesburg.func_67(148, iLocal_117, 1);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_117, 3, 1);
}

void func_33(int iParam0)
{
	aggregate.aguasdulces.func_58(1f, 0f, 0f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-1190799868, 0, 48, true);
	iLocal_126[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionAgriculturalDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[0]), 2434.277f, -864.2632f, 100.0153f, 0f, 0f, 99.80928f, 76.1365f, 77.5857f, 75f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[0]), 2711.787f, -748.9066f, 100.009f, 0f, 0f, -19f, 136.4152f, 127.1571f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[0]), 2735.065f, -887.9319f, 99.99515f, 0f, 0f, 110.7696f, 246.8316f, 261.0551f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[0]), 2580.572f, -814.5414f, 100.007f, 0f, 0f, -172.8734f, 256.6486f, 158.023f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[0]), 2552.832f, -875.643f, 99.99637f, 0f, 0f, 92.39069f, 246.8316f, 169.3834f, 150f);
	iLocal_126[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionStFrancesSlums Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[1]), 2785.521f, -1056.387f, 100.0029f, 0f, 0f, 4.060894f, 91.00164f, 108.2891f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[1]), 2817.182f, -1129.093f, 100.0028f, 0f, 0f, -7.581066f, 33.52557f, 40.72814f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[1]), 2857.705f, -1075.989f, 100.0023f, 0f, 0f, 13.5399f, 134.8914f, 242.3996f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[1]), 2706.777f, -1061.12f, 100.0029f, 0f, 0f, 0.041871f, 83.65329f, 91.41635f, 150f);
	iLocal_126[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMarketDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[2]), 2818.136f, -1302.344f, 100.0018f, 0f, 0f, 52.15482f, 136.6019f, 105.5725f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[2]), 2891.593f, -1292.117f, 99.99527f, 0f, 0f, 46.92012f, 94.54254f, 89.92535f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[2]), 2839.955f, -1372.414f, 99.99564f, 0f, 0f, 46.92012f, 94.54254f, 124.4491f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[2]), 2875.316f, -1240.993f, 100.0051f, 0f, 0f, 4.213234f, 159.0249f, 159.6049f, 150f);
	iLocal_126[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionWarehouseDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[3]), 2366.9f, -1476.441f, 100.0029f, 0f, 0f, -19f, 157.3157f, 152.8212f, 75f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[3]), 2230.301f, -1436.293f, 100.0025f, 0f, 0f, -19f, 74.26994f, 125.4343f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[3]), 2576.589f, -1518.787f, 99.99567f, 0f, 0f, 108.441f, 195.968f, 141.0048f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[3]), 2545.769f, -1422.399f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[3]), 2531.97f, -1414.802f, 99.99918f, 0f, 0f, -163.683f, 153.2008f, 51.76601f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[3]), 2491.278f, -1621.654f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	iLocal_126[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionCommercialDistrict Agg");
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[4]), 2742.656f, -1277.652f, 99.99838f, 0f, 0f, 152.9659f, 35.11092f, 35.81115f, 75f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2777.891f, -1452.619f, 100.0045f, 0f, 0f, 47.08032f, 120.0883f, 101.6027f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2718.392f, -1463.461f, 99.99609f, 0f, 0f, 21.14701f, 189.0947f, 206.6733f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2504.361f, -1300.615f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2574.647f, -1299.168f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2666.968f, -1316.806f, 100.0025f, 0f, 0f, 21.48862f, 147.3396f, 167.8958f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[4]), 2773.729f, -1523.972f, 99.99609f, 0f, 0f, 21.14701f, 100.9043f, 86.45067f, 150f);
	iLocal_126[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionOldQuarter Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[5]), 2794.772f, -1168.501f, 99.99721f, 0f, 0f, -23.73808f, 40.52186f, 22.18659f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[5]), 2724.767f, -1177.132f, 99.99606f, 0f, 0f, -0.344003f, 131.9037f, 145.4713f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[5]), 2648.325f, -1217.937f, 99.99631f, 0f, 0f, 13.19646f, 112.413f, 48.05493f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[5]), 2638.866f, -1187.82f, 99.99606f, 0f, 0f, -0.344003f, 139.1532f, 82.29633f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[5]), 2559.47f, -1204.827f, 99.99649f, 0f, 0f, 91.19704f, 111.5756f, 115.1564f, 150f);
	VOLUME::_0xBCE668AAF83608BE(&(iLocal_126[5]), 2782.788f, -1204.586f, 100.0032f, 0f, 0f, -4.684483f, 40.16883f, 52.17526f, 75f);
	iLocal_126[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMansionDistrict Agg");
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[6]), 2274.675f, -1210.538f, 100f, 0f, 0f, -89.39697f, 61.03426f, 73.05703f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[6]), 2347.278f, -1207.533f, 100f, 0f, 0f, 0f, 116.7747f, 179.4705f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[6]), 2418.939f, -1287.882f, 100f, 0f, 0f, 168.6711f, 109.4838f, 85.72875f, 152.763f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[6]), 2485.194f, -1067.418f, 100f, 0f, 0f, 0f, 359.5392f, 180.9321f, 150f);
	VOLUME::_0x39816F6F94F385AD(&(iLocal_126[6]), 2446.779f, -1199.126f, 100f, 0f, 0f, -89.39697f, 124.0142f, 103.0166f, 150f);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate.aguasdulces.func_59(uParam1, iLocal_50, 1);
	aggregate.aguasdulces.func_59(uParam1, iLocal_51, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_55, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_58, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_62, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_69, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_76, 10);
	aggregate.aguasdulces.func_59(uParam1, iLocal_90, 2);
}

void func_37(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_58(iParam0))
	{
		return;
	}
	aggregate.aberdeenpigfarm.func_59();
	aggregate.annesburg.func_72(0, -7009108);
	aggregate.annesburg.func_72(2, -348077625);
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_173)
	{
		case 0:
			func_85();
			aggregate.fme_animal_tagging.func_176(1);
			break;
		case 1:
			func_87();
			aggregate.fme_animal_tagging.func_176(0);
			break;
	}
	aggregate.annesburg.func_79(52, iLocal_88, &uLocal_89);
	func_89();
	func_90();
	if (aggregate.adlerranch.func_61(&bLocal_171))
	{
		if (bLocal_171)
		{
			aggregate.armadillo.func_69(1915401053, 1);
			aggregate.adlerranch.func_62(544106233, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(340151973, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(534819197, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(836064614, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(2053545201, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1449678065, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-826896261, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(627391959, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-317441493, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-2128813450, 1, 0, 0, 0, 0, 0, 0);
			func_94(-516807739, 1);
			func_94(-777091906, 1);
			func_94(-875333368, 1);
			func_94(1313209843, 1);
			aggregate.armadillo.func_69(-17027456, 1);
			aggregate.armadillo.func_69(156648244, 1);
			aggregate.armadillo.func_69(1291327218, 1);
			aggregate.armadillo.func_69(1587886668, 1);
			aggregate.armadillo.func_69(895866323, 1);
			aggregate.armadillo.func_69(1130131904, 1);
			aggregate.armadillo.func_69(-777462925, 1);
			aggregate.armadillo.func_69(-3733011, 1);
			aggregate.armadillo.func_69(913143609, 1);
		}
	}
	return false;
}

bool func_43()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (aggregate.aberdeenpigfarm.func_71(iVar3))
	{
		return true;
	}
	return false;
}

void func_55()
{
	int iVar0;

	iLocal_78 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_78, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_78, iVar0);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_78, iVar0);
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f, "volSaloonSlumInterior");
}

void func_56(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			Global_1268116->f_47[0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x6E0D3C3F828DA773(&(Global_1268116->f_47[0]), VOLUME::_CREATE_VOLUME_BOX(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			VOLUME::_0x6E0D3C3F828DA773(&(Global_1268116->f_47[0]), VOLUME::_0xB3FB80A32BAE3065(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1268116->f_50[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2542.098f, -1282.514f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1268116->f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1268116->f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2686.8f, -1362.094f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
		case 81:
			Global_1268116->f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1268116->f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-355.272f, 704.9423f, 115.9362f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}
}

int func_57(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9)
{
	int iVar0;
	int iVar1;

	if (aggregate.annesburg.func_121(vParam0))
	{
		return -1;
	}
	if (aggregate.annesburg.func_121(vParam6))
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_118(iVar0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		Global_26390[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, vParam3, vParam6);
		Global_26390.f_6[iVar1] = iParam9;
		return iVar1;
	}
	return -1;
}

void func_58(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (aggregate.annesburg.func_121(vParam5))
	{
		return;
	}
	Local_21 = iParam0;
	Local_21.f_6 = sParam1;
	Local_21.f_7 = sParam2;
	Local_21.f_8 = sParam3;
	Local_21.f_9 = sParam4;
	Local_21.f_11 = { vParam5 };
	Local_21.f_10 = sParam8;
	Local_21.f_15 = 1;
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_21.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	aggregate.blackwater.func_120(&iVar0, iParam0);
	aggregate.blackwater.func_121(&iVar0, iParam1);
	aggregate.blackwater.func_122(&iVar0, iParam2);
	func_122(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_21.f_5 - 1))
	{
		func_122(Local_21.f_1[iVar1]);
		if (&Local_21.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_21.f_1[Local_21.f_5] = iVar0;
	Local_21.f_5++;
	func_123(&(Local_21.f_1), Local_21.f_5);
}

void func_69(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (aggregate.annesburg.func_121(vParam1))
	{
		return;
	}
	(Global_1268116->f_32[iParam0 /*6*/])->f_1 = { vParam1 };
	Global_1268116->f_32[iParam0 /*6*/] = uParam4;
	(Global_1268116->f_32[iParam0 /*6*/])->f_4 = iParam5;
	(Global_1268116->f_32[iParam0 /*6*/])->f_5 = func_139(iParam5, iParam0);
}

void func_85()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_126[iVar0])))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(iLocal_126[iVar0]), false, 0))
			{
				iVar1 = iVar0;
				if (iVar0 == 0)
				{
					bLocal_123 = true;
				}
				else
				{
					bLocal_123 = false;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_123)
	{
		if (aggregate.blackwater.func_274() != 1339372314)
		{
			func_174(1339372314, -1);
		}
	}
	else if (aggregate.blackwater.func_274() != 1559741032)
	{
		func_174(1559741032, -1);
	}
	if (iVar1 != iLocal_122)
	{
		iLocal_122 = iVar1;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_93))
	{
		if (!VOLUME::_0xCA5C90D40665D5CE(iLocal_93, 0) || !VOLUME::_0xCA5C90D40665D5CE(iLocal_93, 1))
		{
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_93, 0, 1);
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_93, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(aggregate.aberdeenpigfarm.func_174(250)))
	{
		if (!PED::GET_PED_CONFIG_FLAG(aggregate.aberdeenpigfarm.func_174(250), 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(aggregate.aberdeenpigfarm.func_174(250), 168, true);
		}
	}
}

void func_87()
{
	float fVar0;

	if (!Local_21.f_15)
	{
		return;
	}
	if (Local_21.f_27 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_21.f_17) && Local_21.f_14 > 1) && Local_21 != 0)
	{
		if (func_176() && aggregate.blackwater.func_175(Global_36, Local_21.f_11) < 100f)
		{
			if (Local_21.f_18 == 0)
			{
				Local_21.f_18 = ENTITY::_0x6F3068258A499E52(Local_21, Local_21.f_11, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_21.f_18))
			{
				Local_21.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_21.f_18));
			}
		}
		Local_21.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_21.f_14)
	{
		case 0:
			func_178();
			Local_21.f_14 = 1;
			break;
		case 1:
			if (func_179())
			{
				Local_21.f_14 = 2;
			}
			break;
		case 2:
			if (func_180())
			{
				Local_21.f_14 = 3;
				Local_21.f_24 = 0;
				Local_21.f_21 = 0;
				Local_21.f_22 = aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99());
				if (Local_21.f_22 > 12)
				{
					Local_21.f_22 = (Local_21.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_21.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_21.f_17))
				{
					Local_21.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_21.f_17, Local_21.f_7, Local_21.f_6, 1000f, false, true, false, 0f, 0);
					Local_21.f_14 = 4;
				}
			}
			if (Local_21.f_21 >= Local_21.f_22)
			{
				Local_21.f_14 = 2;
			}
			break;
		case 4:
			if (func_183(Local_21.f_17, Local_21.f_6, Local_21.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_21.f_17, Local_21.f_8, Local_21.f_6, 1000f, true, true, false, 0f, 0);
				Local_21.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_21.f_26 = 0;
				Local_21.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = ENTITY::_0x627520389E288A73(Local_21.f_17, Local_21.f_6, Local_21.f_8);
			if (fVar0 > 0.5f)
			{
				if (Local_21.f_26)
				{
					Local_21.f_21++;
					Local_21.f_26 = 0;
				}
			}
			else if (!Local_21.f_26 && fVar0 > 0.05f)
			{
				Local_21.f_21++;
				Local_21.f_26 = 1;
			}
			if (Local_21.f_21 >= Local_21.f_22 && (func_183(Local_21.f_17, Local_21.f_6, Local_21.f_8, 0.02f) || Local_21.f_26))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_21.f_17, Local_21.f_9, Local_21.f_6, 8f, false, false, false, 0f, 0);
				Local_21.f_14 = 2;
			}
			break;
	}
	if (Local_21.f_25 && Local_21.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_21.f_10, "CHURCH_BELL_SOUNDS") && Local_21.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_21.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_0xCCE219C922737BFA(Local_21.f_10, Local_21.f_11, "CHURCH_BELL_SOUNDS", 0, 0, 1, 0);
			Local_21.f_21++;
		}
	}
}

void func_89()
{
	if (func_187(2504.489f, -1450.591f, 46.31302f, 1) < 225f)
	{
		func_188();
		bLocal_170 = true;
	}
	else if (bLocal_170)
	{
		func_189();
		bLocal_170 = false;
	}
}

void func_90()
{
	func_190(&uLocal_160, &uLocal_162, &uLocal_161, 2753.91f, -1396.01f, 45.21f, 1788943942, 715447956 /* GXTEntry: "Bill\'s Dishonorable Discharge" */, -523602066);
}

void func_94(int iParam0, int iParam1)
{
	aggregate.adlerranch.func_62(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_107()
{
	if (func_118(iLocal_172))
	{
		func_214(iLocal_172);
	}
	func_215(5);
}

void func_111(int iParam0)
{
	iParam0 = iParam0;
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-1190799868, 0, 48, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(426813831, false);
	if (HUD::_0x2C729F2B94CEA911("SCSFAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCSFAUD"))
		{
			HUD::_0xAA03F130A637D923("SCSFAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("SCSCAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCSCAUD"))
		{
			HUD::_0xAA03F130A637D923("SCSCAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("STDRGAU"))
	{
		if (HUD::_0xD0976CC34002DB57("STDRGAU"))
		{
			HUD::_0xAA03F130A637D923("STDRGAU");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RESAMAU"))
	{
		if (HUD::_0xD0976CC34002DB57("RESAMAU"))
		{
			HUD::_0xAA03F130A637D923("RESAMAU");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RERIAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("RERIAUD"))
		{
			HUD::_0xAA03F130A637D923("RERIAUD");
		}
	}
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_121);
	LAW::_REMOVE_GUARD_ZONE(sLocal_108);
	aggregate.annesburg.func_166(iLocal_109);
	aggregate.annesburg.func_166(iLocal_110);
	aggregate.annesburg.func_166(iLocal_111);
	func_217();
}

bool func_118(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return VOLUME::_0x92A78D0BEDB332A3(&(Global_26390[iParam0]));
	}
	return false;
}

void func_122(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_99();
	aggregate.blackwater.func_226(iParam0, aggregate.blackwater.func_225(iVar0));
	aggregate.blackwater.func_228(iParam0, aggregate.blackwater.func_227(iVar0));
	aggregate.blackwater.func_230(iParam0, aggregate.blackwater.func_229(iVar0));
}

void func_123(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if (uParam0[iVar2] > uParam0[iVar2 + 1])
				{
					uVar3 = uParam0[iVar2];
					(*uParam0)[iVar2] = uParam0[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_155(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	return aggregate.annesburg.func_200(iParam0, "sClosedHash", iParam1, "fClosedHeading", bParam2, "vClosedPos", uParam3);
}

int func_174(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1938075->f_26 != iParam0)
	{
		Global_1938075->f_26 = iParam0;
		iVar0 = iParam1;
		if (!aggregate.aberdeenpigfarm.func_92(iParam1))
		{
			iVar0 = aggregate.blackwater.func_335(iParam0);
		}
		if (!aggregate.aberdeenpigfarm.func_92(iVar0))
		{
			iVar0 = aggregate.aberdeenpigfarm.func_93(aggregate.blackwater.func_312(Global_36));
		}
		if (!aggregate.aberdeenpigfarm.func_92(iVar0))
		{
			return 0;
		}
		LAW::_0x4752F68EB7F2D280(PLAYER::PLAYER_ID(), Global_1938075->f_26, aggregate.blackwater.func_336(iVar0));
		return 1;
	}
	return 0;
}

bool func_176()
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

void func_178()
{
	if (Local_21 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_21.f_6);
		STREAMING::REQUEST_MODEL(Local_21, false);
		Local_21.f_16 = 1;
	}
}

bool func_179()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_21.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_21.f_6);
	}
	return true;
}

bool func_180()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_21.f_5 <= 0)
	{
		return false;
	}
	iVar1 = aggregate.aberdeenpigfarm.func_99();
	iVar2 = aggregate.aberdeenpigfarm.func_100(iVar1);
	iVar3 = aggregate.aberdeenpigfarm.func_101(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_21.f_5 - 1))
	{
		iVar4 = aggregate.aberdeenpigfarm.func_100(&(Local_21.f_1[iVar0]));
		iVar5 = aggregate.aberdeenpigfarm.func_101(&(Local_21.f_1[iVar0]));
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_183(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = ENTITY::_0x627520389E288A73(iParam0, sParam1, sParam2);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

float func_187(vector3 vParam0, int iParam3)
{
	return aggregate.fishing_core.func_39(Global_35, vParam0, iParam3);
}

void func_188()
{
	func_266(iLocal_163[0], 802578733, 2504.532f, -1465.064f, 45.311f);
	func_266(iLocal_163[1], 802578733, 2500.124f, -1465.064f, 45.311f);
	func_266(iLocal_163[2], 802578733, 2499.337f, -1452.443f, 45.311f);
	func_266(iLocal_163[3], -2077259890, 2499.337f, -1448.036f, 45.311f);
	func_266(iLocal_163[4], 802578733, 2500.124f, -1435.318f, 45.311f);
	func_266(iLocal_163[5], 802578733, 2500.53f, -1435.318f, 45.311f);
}

void func_189()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_163)
	{
		func_267(iLocal_163[iVar0]);
		iVar0++;
	}
}

int func_190(var uParam0, var uParam1, var uParam2, vector3 vParam3, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (aggregate.fm_mission_controller.func_3321(Global_35, vParam3, 1) > 900f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam8, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_0x295514F198EFD0CA(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_0xDB1BD07FB464584D(bParam6, 0);
		return 0;
	}
	else
	{
		if (!TXD::_0xBE72591D1509FFE4(bParam6))
		{
			TXD::_0xDB1BD07FB464584D(bParam6, 0);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_0xE124889AE0521FCF(*uParam1, bParam6, 0, 0);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_214(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 5)
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(&(Global_26390[iParam0])))
	{
		VOLUME::_0x43F867EF5C463A53(&(Global_26390[iParam0]));
	}
	if (&Global_26390.f_6[iParam0] != 1f)
	{
		Global_26390.f_6[iParam0] = 1f;
	}
}

void func_215(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_47[0]));
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_47[1]));
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_50[0]));
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_50[1]));
			break;
		case 81:
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_47[1]));
			VOLUME::_0x43F867EF5C463A53(&(Global_1268116->f_50[1]));
			break;
	}
}

void func_217()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_21.f_17, Local_21.f_6, Local_21.f_9, -1000f);
		}
	}
	if (Local_21.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_21.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_21.f_6);
		}
		Local_21.f_16 = 0;
	}
	if (Local_21.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_21.f_18);
	}
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 406;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 510;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 485;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 545;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 342;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 543;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
			return 349;
			return 199;
			return 357;
			return 421;
			return 526;
			return 20;
			return 73;
			return 256;
			return 249;
			return 80;
			return 497;
			return 210;
			return 207;
			return 209;
			return 414;
			return 164;
			return 208;
			return 123;
			return 118;
			return 303;
			return 450;
			return 50;
			return 100;
			return 280;
			return 318;
			return 426;
			return 5;
			return 70;
			return 35;
			return 166;
			return 203;
			return 436;
			return 458;
			return 265;
			return 325;
			return 161;
			return 386;
			return 332;
			return 289;
			return 301;
			return 521;
			return 9;
			return 105;
			return 116;
			return 125;
			return 179;
			return 148;
			return 91;
			return 527;
			return 66;
			return 352;
			return 365;
			return 43;
			return 329;
			return 135;
			return 213;
			return 377;
			return 92;
			return 544;
			return 299;
			return 445;
			return 398;
			return 197;
			return 97;
			return 193;
			return 413;
			return 68;
			return 364;
			return 51;
			return 437;
			return 335;
			return 94;
			return 360;
			return 159;
			return 216;
			return 200;
			return 307;
			return 89;
			return 178;
			return 489;
			return 6;
			return 187;
			return 190;
			return 305;
			return 293;
			return 61;
			return 498;
			return 284;
			return 428;
			return 478;
			return 291;
			return 457;
			return 267;
			return 39;
			return 397;
			return 189;
			return 324;
			return 496;
			return 241;
			return 85;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

void func_266(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*uParam0 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
		}
	}
}

void func_267(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
	}
}

