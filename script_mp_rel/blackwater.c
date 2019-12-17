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
	struct<28> Local_29 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = -1;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 1;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	bool bLocal_104 = false;
	int iLocal_105[4] = { 0, 0, 0, 0 };
	bool bLocal_110 = false;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	vLocal_101 = { -819.9311f, -1167.974f, 42.1802f };
	iLocal_111 = 20000;
	iLocal_114 = vScriptParam_0.x;
	iLocal_112 = vScriptParam_0.z;
	bLocal_116 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate.aberdeenpigfarm.func_1();
	}
	aggregate.aberdeenpigfarm.func_2();
	aggregate.aberdeenpigfarm.func_23();
	iLocal_113 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate.aberdeenpigfarm.func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_113)
		{
			iLocal_113 = 0;
			aggregate.aberdeenpigfarm.func_5(iLocal_114, &iLocal_112);
			switch (iLocal_112)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_115 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_112 = 1;
					}
					else
					{
						iLocal_112 = 2;
					}
					break;
				case 1:
					if (!aggregate.aberdeenpigfarm.func_1() || iLocal_115 < MISC::GET_GAME_TIMER())
					{
						bLocal_116 = false;
						iLocal_112 = 2;
					}
					break;
				case 2:
					func_6(iLocal_114);
					aggregate.aberdeenpigfarm.func_7();
					aggregate.aberdeenpigfarm.func_8();
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_114)))
					{
						aggregate.aberdeenpigfarm.func_11(aggregate.aberdeenpigfarm.func_9(iLocal_114), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate.aberdeenpigfarm.func_12(iLocal_114));
					Global_1896608 = -1;
					iLocal_115 = (iLocal_111 + MISC::GET_GAME_TIMER());
					iLocal_112 = 3;
					break;
				case 3:
					if (func_13() || iLocal_115 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_114);
						iLocal_115 = (iLocal_111 + MISC::GET_GAME_TIMER());
						iLocal_112 = 4;
					}
					break;
				case 4:
					if (aggregate.aberdeenpigfarm.func_15(iLocal_114) || iLocal_115 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_114);
						iLocal_115 = (MISC::GET_GAME_TIMER() + iLocal_111);
						iLocal_112 = 5;
					}
					break;
				case 5:
					if (aggregate.benedictpoint.func_17(iLocal_114) || iLocal_115 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_114);
						iLocal_115 = (iLocal_111 + MISC::GET_GAME_TIMER());
						iLocal_112 = 7;
					}
					break;
				case 7:
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_114)))
					{
						if (aggregate.aberdeenpigfarm.func_19(aggregate.aberdeenpigfarm.func_9(iLocal_114), 4) && !iLocal_115 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate.adlerranch.func_20(iLocal_114) || iLocal_115 < MISC::GET_GAME_TIMER())
							{
								aggregate.aberdeenpigfarm.func_21(iLocal_114, 4);
								iLocal_115 = (iLocal_111 + MISC::GET_GAME_TIMER());
								iLocal_112 = 8;
							}
							Jump @832; //curOff = 548
							aggregate.aberdeenpigfarm.func_14(iLocal_114);
							aggregate.aberdeenpigfarm.func_23();
							if (!aggregate.aberdeenpigfarm.func_24(4105, 0))
							{
								aggregate.aberdeenpigfarm.func_23();
							}
							aggregate.aberdeenpigfarm.func_23();
							func_27();
							aggregate.aberdeenpigfarm.func_23();
							func_29(iLocal_114);
							func_30(iLocal_114);
							aggregate.aberdeenpigfarm.func_23();
							aggregate.aberdeenpigfarm.func_23();
							iLocal_112 = 9;
							Jump @832; //curOff = 616
							func_33(iLocal_114);
							aggregate.aberdeenpigfarm.func_34();
							iLocal_112 = 10;
							Jump @832; //curOff = 633
							aggregate.aberdeenpigfarm.func_35(Global_1896662);
							func_36(iLocal_114, Global_1896662);
							iLocal_112 = 11;
							Jump @832; //curOff = 658
							func_37(iLocal_114);
							aggregate.aberdeenpigfarm.func_21(iLocal_114, 8);
							if (aggregate.aberdeenpigfarm.func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate.aberdeenpigfarm.func_39(32);
							}
							iLocal_112 = 12;
							Jump @832; //curOff = 708
							if (func_40(iLocal_114))
							{
								iLocal_113 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate.aberdeenpigfarm.func_41(Global_1896662, iLocal_114);
							aggregate.aberdeenpigfarm.func_42(iLocal_114);
							aggregate.aberdeenpigfarm.func_21(iLocal_114, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_114 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_114 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_114 /*36*/])->f_12);
							}
							Jump @832; //curOff = 809
							aggregate.aberdeenpigfarm.func_8();
							aggregate.aberdeenpigfarm.func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_114 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_114 /*36*/])->f_13);
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

void func_6(int iParam0)
{
	func_53();
}

bool func_13()
{
	iLocal_67 = ((*Global_1887327)[40 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_67, 10);
	iLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-782.971f, -1324.319f, 46.397f, 0f, 0f, -90f, 7.484f, 14.629f, 7.008f, "Blackwater - m_volGeneral");
	iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-782.842f, -1324.1f, 44.674f, 0f, 0f, -90f, 7.3f, 14.9f, 4f, "Blackwater - m_volGeneralStoreOwner");
	iLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-784.77f, -1323.951f, 44.03f, 0f, 0f, -90f, 1.2f, 2f, 2.5f, "Blackwater - m_volGeneralPrompt");
	iLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-784.473f, -1321.867f, 44.03f, 0f, 0f, -90f, 1.5f, 3.869f, 2.5f, "Blackwater - m_volGeneralCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_68, 10040);
	iLocal_89 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763f, -1269.2f, 44.2f, 0f, 0f, 0f, 12.1f, 8.532616f, 5f, "BLKWATER SHERIFF STATION");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_89, 5, 1);
	iLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-868.3356f, -1366.207f, 44.75311f, 0f, 0f, 0f, 23.18747f, 12.136f, 4.277f, "Blackwater - m_volHorseShop");
	VOLUME::_0xB469CFD9E065EB99(iLocal_92, 10042);
	iLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-775.5706f, -1278.292f, 43.72021f, 0f, 0f, 0f, 2.331285f, 11.19982f, 4.241409f, "m_volLawSpawn_Blocking");
	uLocal_91 = MISC::_0xA2D5A26208421426(iLocal_90);
	iLocal_72 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.711f, -1276.18f, 43.997f, 0f, 0f, 89.8f, 7.8f, 12.9f, 2.9f, "Blackwater - m_volBank");
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_72, 0, 0, 0, -1, -1, 0);
	iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-815.711f, -1276.18f, 43.997f, 0f, 0f, 89.8f, 7.7f, 12.8f, 2.9f, "Blackwater - m_volBankManagerOwner");
	iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.219f, -1292.7f, 44.6f, 0f, 0f, 0f, 11.4f, 6.5f, 3.5f, "Blackwater - m_volTailor");
	iLocal_77 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volTailorOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_77, -765.319f, -1292.7f, 44.6f, 0f, 0f, 0f, 15.6f, 6.5f, 3.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_77, -774.117f, -1291.071f, 44.6f, 0f, 0f, 0f, 2f, 3.25f, 3.5f);
	iLocal_78 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-761.543f, -1291.245f, 43.772f, 0f, 0f, 0f, 3.8f, 2.5f, 2f, "BLW-m_volTailorPrompt");
	iLocal_79 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volTailorOfflimits");
	VOLUME::_0x39816F6F94F385AD(iLocal_79, -760.79f, -1294.066f, 43.772f, 0f, 0f, 0f, 6f, 2f, 2f);
	VOLUME::_0x39816F6F94F385AD(iLocal_79, -767.183f, -1291.536f, 43.772f, 0f, 0f, 89.264f, 2.695f, 3.324f, 2f);
	iLocal_80 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_80, iLocal_77);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_80, iLocal_79);
	VOLUME::_0xB469CFD9E065EB99(iLocal_76, 10044);
	iLocal_84 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficeOwner Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_84, -875.073f, -1332.742f, 44.47251f, 0f, 0f, -179.746f, 8.481f, 13.525f, 2.993397f);
	VOLUME::_0x39816F6F94F385AD(iLocal_84, -875.036f, -1324.642f, 44.43187f, 0f, 0f, 0f, 2.667f, 3.006f, 3f);
	iLocal_85 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_85, -875.07f, -1328.584f, 44.38541f, 0f, 0f, -179.5535f, 2.007f, 1.4f, 2.993397f);
	VOLUME::_0x39816F6F94F385AD(iLocal_85, -875.036f, -1324.773f, 44.43187f, 0f, 0f, 0f, 2.299f, 2.175f, 3f);
	iLocal_86 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-875.6834f, -1326.861f, 44.47251f, 0f, 0f, -179.1404f, 3.857776f, 1.921187f, 2.993397f, "Blackwater - m_volPostOfficeOfflimits");
	iLocal_87 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPostOfficePARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_87, iLocal_84);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_87, iLocal_86);
	VOLUME::_0xB469CFD9E065EB99(iLocal_87, 10043);
	iLocal_81 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-785.2803f, -1304.695f, 44.6f, 0f, 0f, 180f, 9.89304f, 6.3f, 3.7f, "Blackwater - m_volDoctorOwner");
	iLocal_82 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-786.6721f, -1302.453f, 44.5651f, 0f, 0f, -179.9827f, 7.058838f, 1.318995f, 3.7f, "Blackwater - m_volDoctorOfflimits");
	iLocal_83 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volDoctorPARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_83, iLocal_81);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_83, iLocal_82);
	VOLUME::_0xB469CFD9E065EB99(iLocal_83, 10039);
	iLocal_88 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
	VOLUME::_0x39816F6F94F385AD(iLocal_88, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
	VOLUME::_0x39816F6F94F385AD(iLocal_88, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_88, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
	iLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.815f, -1366.005f, 43.677f, 0f, 0f, 90f, 6.5f, 7f, 2f, "Blackwater-m_volBarberShop");
	iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.686f, -1366.005f, 43.677f, 0f, 0f, 90f, 5.5f, 6f, 2f, "Blackwater-m_volBarberPrompt");
	iLocal_94 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-753.4219f, -1284.24f, 43.20049f, 0f, 0f, 90f, 6f, 8f, 2f, "Blackwater - m_volButcher");
	iLocal_95 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-750.9575f, -1284.844f, 43.20049f, 0f, 0f, 90f, 1.8f, 1.3f, 2f, "Blackwater - m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_94, 10121);
	iLocal_93 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-778.6945f, -1362.467f, 45.687f, 0f, 0f, 0.496382f, 16f, 8.9f, 8f, "Blackwater - m_volTheatre");
	POPULATION::_0xB56D41A694E42E86(iLocal_93, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_93, 10208, 0, 0, -1, -1, 0);
	iLocal_96 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volPhotoStudio-Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -813.0476f, -1374.265f, 44.60803f, 0f, 0f, 0f, 7.733583f, 6.296834f, 3.236622f);
	VOLUME::_0x39816F6F94F385AD(iLocal_96, -813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
	iLocal_97 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-813.8254f, -1374.265f, 44.60803f, 0f, 0f, 0f, 6.401097f, 6.296834f, 3.236622f, "Blackwater - m_volPhotoStudioPrompt");
	iLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volLiveryOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -971.5854f, -1321.096f, 54.18404f, 0.083127f, 4.778676f, 0.997744f, 31.36792f, 47.07047f, 7.816715f);
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -949.3033f, -1339.083f, 52.97771f, 0f, 0f, 2.975328f, 14.37138f, 10.08988f, 7.273995f);
	iLocal_99 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-751.898f, -1285.072f, 43.418f, 0f, 0f, 0f, 2.822f, 4.416f, 2.448f, "Blackwater-m_volButcherNavMeshBlocking");
	PATHFIND::_0x19C7567D2F2287D6(iLocal_99, 7);
	iLocal_100 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-934.7934f, -1374.338f, 48.44641f, 0f, 0f, 0f, 1f, 1f, 1f, "Blackwater-m_volCampfire");
	func_54(iLocal_100, 4);
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	aggregate.blackwater.func_55(527226204, 0, 0);
	aggregate.blackwater.func_55(885203519, 1, 0);
	func_56(-409100651, "props_misc@church_bells", "enter", "loop", "exit", -970.1069f, -1182.428f, 66.75692f, "VAL_SINGLE_TOLL");
	func_57(9, 0, 0);
	func_57(12, 0, 0);
	func_57(19, 0, 0);
	aggregate.blackwater.func_58(vLocal_101, 5f, 0, 0, 5);
}

void func_27()
{
	aggregate.armadillo.func_58(0, -815.3443f, -1315.599f, 42.6788f, iLocal_88, 40);
}

void func_29(int iParam0)
{
	aggregate.annesburg.func_63(3, iLocal_68, iParam0, iLocal_69, iLocal_70, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(3, -1498321761, 0, 0);
	aggregate.annesburg.func_66(3, -1252390440, 0, 0);
	aggregate.annesburg.func_66(3, 2046989122, 0, 0);
	aggregate.annesburg.func_64(3, 8192);
	aggregate.beechershope.func_59(3, 0);
	aggregate.annesburg.func_63(25, iLocal_89, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(25, 1);
	aggregate.annesburg.func_64(25, 16384);
	aggregate.annesburg.func_64(25, 8192);
	aggregate.annesburg.func_64(25, 536870912);
	aggregate.annesburg.func_63(7, iLocal_76, iParam0, iLocal_78, 0, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(7, -1768302830, 0, 0);
	aggregate.beechershope.func_59(7, 0);
	aggregate.annesburg.func_63(10, iLocal_94, iParam0, iLocal_95, 0, 460, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(10, 536870912);
	aggregate.beechershope.func_59(10, 0);
	aggregate.annesburg.func_63(9, iLocal_92, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(9, 536870912);
	aggregate.annesburg.func_64(9, 16384);
	aggregate.annesburg.func_64(9, 32768);
	aggregate.annesburg.func_64(9, 1);
	aggregate.annesburg.func_64(9, 8388608);
	aggregate.annesburg.func_64(9, 8192);
	aggregate.annesburg.func_64(9, 4);
	aggregate.annesburg.func_64(9, 16777216);
	aggregate.annesburg.func_64(9, 67108864);
	if (!aggregate.annesburg.func_109() && aggregate.annesburg.func_110())
	{
		aggregate.annesburg.func_66(9, -977581490, 0, 0);
		aggregate.annesburg.func_66(9, -1284495944, 0, 0);
		aggregate.annesburg.func_66(9, -1571912843, 0, 0);
		aggregate.annesburg.func_66(9, -1860804267, 0, 0);
	}
	else
	{
		aggregate.annesburg.func_66(9, -977581490, -1f, 1);
		aggregate.annesburg.func_66(9, -1284495944, 1f, 1);
		aggregate.annesburg.func_66(9, -1571912843, 1f, 1);
		aggregate.annesburg.func_66(9, -1860804267, -1f, 1);
	}
	aggregate.aberdeenpigfarm.func_115();
	aggregate.blackwater.func_72(10);
	aggregate.annesburg.func_63(8, iLocal_74, iParam0, iLocal_75, 0, 4098, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(8, -1782375478, 0, 0);
	aggregate.annesburg.func_66(8, 1632219860, 0, 0);
	aggregate.annesburg.func_66(8, 2004868928, 0, 0);
	aggregate.beechershope.func_59(8, 0);
	aggregate.annesburg.func_63(2, iLocal_84, iParam0, iLocal_85, iLocal_86, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(2, 2124421956, 0, 0);
	aggregate.annesburg.func_66(2, 1861385249, 0, 0);
	aggregate.annesburg.func_66(2, -1688963720, 0, 0);
	aggregate.annesburg.func_66(2, 1730262833, 0, 0);
	aggregate.beechershope.func_59(2, 0);
	aggregate.annesburg.func_63(18, iLocal_96, iParam0, iLocal_97, 0, 524290, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(18, 123675751, 0, 0);
	aggregate.annesburg.func_66(18, 1079875175, 0, 0);
	aggregate.beechershope.func_59(18, 0);
	aggregate.blackwater.func_73(iParam0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate.annesburg.func_67(513, iLocal_73, 1);
	aggregate.annesburg.func_67(523, iLocal_74, 1);
	aggregate.annesburg.func_67(507, iLocal_71, 1);
	aggregate.annesburg.func_67(515, iLocal_77, 1);
	aggregate.annesburg.func_67(516, iLocal_84, 1);
	aggregate.annesburg.func_67(510, iLocal_92, 1);
	aggregate.annesburg.func_67(520, iLocal_98, 1);
	aggregate.annesburg.func_67(521, iLocal_98, 0);
	aggregate.annesburg.func_67(522, iLocal_98, 0);
}

void func_33(int iParam0)
{
	aggregate.aguasdulces.func_58(0.85f, 0.15f, 0f, 0f);
	if (!aggregate.aberdeenpigfarm.func_130(44))
	{
		if (!aggregate.blackwater.func_77(135))
		{
			aggregate.binoculars.func_18(135, 0);
		}
	}
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate.aguasdulces.func_59(uParam1, iLocal_67, 1);
	aggregate.aguasdulces.func_59(uParam1, iLocal_81, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_68, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_76, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_84, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_92, 2);
}

void func_37(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_58(iParam0))
	{
		return;
	}
	aggregate.aberdeenpigfarm.func_59();
	aggregate.annesburg.func_72(0, -380739391);
	aggregate.annesburg.func_72(2, 345568588);
}

bool func_40(int iParam0)
{
	func_83();
	func_84();
	if (!aggregate.blackwater.func_85(-1854368742) && !STREAMING::_0xCF45DF50C7775F2A())
	{
		if (func_86(7))
		{
			aggregate.blackwater.func_87(-1854368742);
		}
		else
		{
			aggregate.blackwater.func_88(-1854368742);
		}
	}
	if (aggregate.adlerranch.func_61(&bLocal_104))
	{
		if (bLocal_104)
		{
			aggregate.adlerranch.func_62(1467518375, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-1880216355, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1735175816, 1, 0, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1373799284, 1, 0, 0, 0, 0, 0, 0);
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

void func_53()
{
	iLocal_105[0] = ENTITY::_0x6F3068258A499E52(1542239325, -868.0292f, -1273.759f, 44.72966f, 11);
	iLocal_105[1] = ENTITY::_0x6F3068258A499E52(1542239325, -867.504f, -1279.306f, 44.69716f, 11);
	iLocal_105[2] = ENTITY::_0x6F3068258A499E52(1542239325, -874.4065f, -1278.266f, 44.10369f, 11);
	iLocal_105[3] = ENTITY::_0x6F3068258A499E52(joaat("p_chair_crate15x"), -870.3456f, -1276.597f, 42.2979f, 11);
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1939035[iVar0 /*2*/]) && Global_1939035[iVar0 /*2*/] == iParam0)
		{
			((*Global_1939035)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1939035[iVar0 /*2*/]))
		{
			(*Global_1939035)[iVar0 /*2*/] = iParam0;
			((*Global_1939035)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_56(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (aggregate.annesburg.func_121(vParam5))
	{
		return;
	}
	Local_29 = iParam0;
	Local_29.f_6 = sParam1;
	Local_29.f_7 = sParam2;
	Local_29.f_8 = sParam3;
	Local_29.f_9 = sParam4;
	Local_29.f_11 = { vParam5 };
	Local_29.f_10 = sParam8;
	Local_29.f_15 = 1;
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_29.f_5 >= 3)
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
	func_123(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_29.f_5 - 1))
	{
		func_123(Local_29.f_1[iVar1]);
		if (&Local_29.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_29.f_1[Local_29.f_5] = iVar0;
	Local_29.f_5++;
	func_124(&(Local_29.f_1), Local_29.f_5);
}

void func_83()
{
	float fVar0;

	if (!Local_29.f_15)
	{
		return;
	}
	if (Local_29.f_27 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_29.f_17) && Local_29.f_14 > 1) && Local_29 != 0)
	{
		if (func_174() && aggregate.blackwater.func_175(Global_36, Local_29.f_11) < 100f)
		{
			if (Local_29.f_18 == 0)
			{
				Local_29.f_18 = ENTITY::_0x6F3068258A499E52(Local_29, Local_29.f_11, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_29.f_18))
			{
				Local_29.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_29.f_18));
			}
		}
		Local_29.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_29.f_14)
	{
		case 0:
			func_176();
			Local_29.f_14 = 1;
			break;
		case 1:
			if (func_177())
			{
				Local_29.f_14 = 2;
			}
			break;
		case 2:
			if (func_178())
			{
				Local_29.f_14 = 3;
				Local_29.f_24 = 0;
				Local_29.f_21 = 0;
				Local_29.f_22 = aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99());
				if (Local_29.f_22 > 12)
				{
					Local_29.f_22 = (Local_29.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_29.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_29.f_17))
				{
					Local_29.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_29.f_17, Local_29.f_7, Local_29.f_6, 1000f, false, true, false, 0f, 0);
					Local_29.f_14 = 4;
				}
			}
			if (Local_29.f_21 >= Local_29.f_22)
			{
				Local_29.f_14 = 2;
			}
			break;
		case 4:
			if (func_181(Local_29.f_17, Local_29.f_6, Local_29.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_29.f_17, Local_29.f_8, Local_29.f_6, 1000f, true, true, false, 0f, 0);
				Local_29.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_29.f_26 = 0;
				Local_29.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = ENTITY::_0x627520389E288A73(Local_29.f_17, Local_29.f_6, Local_29.f_8);
			if (fVar0 > 0.5f)
			{
				if (Local_29.f_26)
				{
					Local_29.f_21++;
					Local_29.f_26 = 0;
				}
			}
			else if (!Local_29.f_26 && fVar0 > 0.05f)
			{
				Local_29.f_21++;
				Local_29.f_26 = 1;
			}
			if (Local_29.f_21 >= Local_29.f_22 && (func_181(Local_29.f_17, Local_29.f_6, Local_29.f_8, 0.02f) || Local_29.f_26))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_29.f_17, Local_29.f_9, Local_29.f_6, 8f, false, false, false, 0f, 0);
				Local_29.f_14 = 2;
			}
			break;
	}
	if (Local_29.f_25 && Local_29.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_29.f_10, "CHURCH_BELL_SOUNDS") && Local_29.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_29.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_0xCCE219C922737BFA(Local_29.f_10, Local_29.f_11, "CHURCH_BELL_SOUNDS", 0, 0, 1, 0);
			Local_29.f_21++;
		}
	}
}

void func_84()
{
	int iVar0;

	if (func_182())
	{
		iVar0 = 0;
		while (iVar0 < iLocal_105)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(ENTITY::_0x4735E2A4BB83D9DA(&(iLocal_105[iVar0])), true);
			ENTITY::FREEZE_ENTITY_POSITION(ENTITY::_0x4735E2A4BB83D9DA(&(iLocal_105[iVar0])), true);
			iVar0++;
		}
		bLocal_110 = true;
	}
}

bool func_86(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99());
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	func_211(aggregate.blackwater.func_210(iParam0, 1, 1));
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	func_212(&uLocal_57, 0);
	func_213();
	func_214();
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_99))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_99);
		VOLUME::_0x43F867EF5C463A53(iLocal_99);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_90))
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_91);
	}
	iParam0 = iParam0;
	aggregate.blackwater.func_58(vLocal_101, 5f, 1, 0, 5);
}

void func_123(int iParam0)
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

void func_124(var uParam0, int iParam1)
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

int func_152(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return aggregate.annesburg.func_200(iParam0, "sClosedHash", iParam1, "fClosedHeading", uParam2, "vClosedPos", uParam3);
}

bool func_174()
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

void func_176()
{
	if (Local_29 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_29.f_6);
		STREAMING::REQUEST_MODEL(Local_29, false);
		Local_29.f_16 = 1;
	}
}

bool func_177()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_29.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_29.f_6);
	}
	return true;
}

bool func_178()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_29.f_5 <= 0)
	{
		return false;
	}
	iVar1 = aggregate.aberdeenpigfarm.func_99();
	iVar2 = aggregate.aberdeenpigfarm.func_100(iVar1);
	iVar3 = aggregate.aberdeenpigfarm.func_101(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_29.f_5 - 1))
	{
		iVar4 = aggregate.aberdeenpigfarm.func_100(&(Local_29.f_1[iVar0]));
		iVar5 = aggregate.aberdeenpigfarm.func_101(&(Local_29.f_1[iVar0]));
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_181(int iParam0, char* sParam1, char* sParam2, float fParam3)
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

bool func_182()
{
	int iVar0;

	if (bLocal_110)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_105)
	{
		if (!ENTITY::_0x1FF441D7954F8709(&(iLocal_105[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_211(int iParam0)
{
	int iVar0;

	if ((((Global_1938075->f_26 == iParam0 || iParam0 == 0) || (iParam0 == 305496830 && Global_1938075->f_26 == -1482428221)) || (iParam0 == -1323821455 && Global_1938075->f_26 == -1994249944)) || Global_1938075->f_26 == 0)
	{
		iVar0 = aggregate.aberdeenpigfarm.func_66();
		aggregate.blackwater.func_277(aggregate.blackwater.func_276(iVar0, 1), -1);
	}
}

void func_212(var uParam0, bool bParam1)
{
	if (func_278(uParam0->f_1))
	{
		func_279(uParam0->f_1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
	{
		MAP::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (aggregate.annesburg.func_217(uParam0->f_8))
	{
		aggregate.annesburg.func_218(&(uParam0->f_8), 1, 1);
	}
}

void func_213()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_29.f_17, Local_29.f_6, Local_29.f_9, -1000f);
		}
	}
	if (Local_29.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_29.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_29.f_6);
		}
		Local_29.f_16 = 0;
	}
	if (Local_29.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_29.f_18);
	}
}

void func_214()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_105)
	{
		if (ENTITY::_0x1FF441D7954F8709(&(iLocal_105[iVar0])))
		{
			ENTITY::_0xD2B9C78537ED5759(&(iLocal_105[iVar0]));
		}
		iVar0++;
	}
}

bool func_278(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return VOLUME::_0x92A78D0BEDB332A3(iParam0);
}

void func_279(struct<6> Param0, var uParam6)
{
	if (VOLUME::_0x92A78D0BEDB332A3(Param0))
	{
		VOLUME::_0x43F867EF5C463A53(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::REMOVE_BLIP(&(Param0.f_5));
	}
}

