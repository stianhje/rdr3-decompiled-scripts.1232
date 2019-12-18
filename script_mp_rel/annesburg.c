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
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	char* sLocal_50 = NULL;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
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
	bool bLocal_68 = false;
	char* sLocal_69 = NULL;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	sLocal_69 = "PROPS_MISC@ANNESBURG_COAL";
	iLocal_70 = 20000;
	iLocal_73 = vScriptParam_0.x;
	iLocal_71 = vScriptParam_0.z;
	bLocal_75 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_72 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_72)
		{
			iLocal_72 = 0;
			aggregate_func_4561(iLocal_73, &iLocal_71);
			switch (iLocal_71)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_74 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_71 = 1;
					}
					else
					{
						iLocal_71 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_74 < MISC::GET_GAME_TIMER())
					{
						bLocal_75 = false;
						iLocal_71 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_73);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_73)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_73), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_73));
					Global_1896608 = -1;
					iLocal_74 = (iLocal_70 + MISC::GET_GAME_TIMER());
					iLocal_71 = 3;
					break;
				case 3:
					if (func_13() || iLocal_74 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_73);
						iLocal_74 = (iLocal_70 + MISC::GET_GAME_TIMER());
						iLocal_71 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_73) || iLocal_74 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_73);
						iLocal_74 = (MISC::GET_GAME_TIMER() + iLocal_70);
						iLocal_71 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_73) || iLocal_74 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_73);
						iLocal_74 = (iLocal_70 + MISC::GET_GAME_TIMER());
						iLocal_71 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_73)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_73), 4) && !iLocal_74 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_73) || iLocal_74 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_73, 4);
								iLocal_74 = (iLocal_70 + MISC::GET_GAME_TIMER());
								iLocal_71 = 8;
							}
							Jump @817; //curOff = 533
							aggregate_func_4245(iLocal_73);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4238();
							func_29(iLocal_73);
							func_30(iLocal_73);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_71 = 9;
							Jump @817; //curOff = 601
							aggregate_func_7401(iLocal_73);
							aggregate_func_2893();
							iLocal_71 = 10;
							Jump @817; //curOff = 618
							aggregate_func_4554(Global_1896662);
							func_36(iLocal_73, Global_1896662);
							iLocal_71 = 11;
							Jump @817; //curOff = 643
							func_37(iLocal_73);
							aggregate_func_4343(iLocal_73, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_71 = 12;
							Jump @817; //curOff = 693
							if (func_40(iLocal_73))
							{
								iLocal_72 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_73);
							aggregate_func_4467(iLocal_73);
							aggregate_func_4343(iLocal_73, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_73 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_73 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_73 /*36*/])->f_12);
							}
							Jump @817; //curOff = 794
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_73 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_73 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate_func_917(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate_func_4251() != -1)
						{
							aggregate_func_2819();
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
	iLocal_31 = ((*Global_1887327)[83 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_31, 20);
	func_53();
	iLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficeOwner Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_40, 2935.558f, 1282.429f, 45.47895f, 0f, 0f, -110f, 12.3f, 6.147137f, 3.628f);
	VOLUME::_0x39816F6F94F385AD(iLocal_40, 2938.688f, 1280.857f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_40, 2939.422f, 1288.475f, 45.479f, 0f, 0f, -110f, 1.738f, 1.755f, 3.628f);
	VOLUME::_0x39816F6F94F385AD(iLocal_40, 2931.347f, 1283.163f, 45.744f, 0f, 0f, 160f, 2.301f, 3.055f, 3.645f);
	iLocal_55 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2941.031f, 1280.036f, 45.139f, 0f, 0f, -19.946f, 3.323f, 4.695f, 2.997f, "Annesburg - m_volPostOfficeProblemArea");
	iLocal_41 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_41, 2939.491f, 1288.495f, 45.104f, 0f, 0f, 70f, 1f, 1.25f, 3f);
	iLocal_42 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficeOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_42, 2935.558f, 1282.429f, 45.47895f, 0f, 0f, -110f, 12.3f, 6.147137f, 3.628f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, 2938.688f, 1280.857f, 45.15513f, 0f, 0f, 70.00001f, 4.134692f, 0.798306f, 3f);
	iLocal_43 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volPostOfficePARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_43, iLocal_40);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_43, iLocal_42);
	VOLUME::_0xB469CFD9E065EB99(iLocal_43, 10076);
	iLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "Annesburg - m_volTownRestriction");
	aggregate_func_1306(iLocal_32);
	iLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volTrainStation Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_39, 2933.266f, 1280.733f, 45.139f, 0f, 0f, -19.946f, 9.797f, 26.429f, 2.997f);
	VOLUME::_0x39816F6F94F385AD(iLocal_39, 2933.951f, 1282.62f, 45.139f, 0f, 0f, -19.946f, 11.758f, 4.209f, 2.997f);
	func_55();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_56();
	}
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JAMESON_4_A");
	STREAMING::REQUEST_PTFX_ASSET();
	func_57();
}

bool func_17(int iParam0)
{
	bool bVar0;

	bVar0 = aggregate_func_4251() == -1;
	if (bVar0)
	{
		HUD::_0xF66090013DE648D5("ASBGAUD");
		if (!HUD::_0xD0976CC34002DB57("ASBGAUD"))
		{
			return false;
		}
		if (!SCRIPTS::HAS_SCRIPT_LOADED("train_annesburg"))
		{
			SCRIPTS::REQUEST_SCRIPT("train_annesburg");
			return false;
		}
	}
	return true;
}

void func_29(int iParam0)
{
	aggregate_func_348(25, iLocal_33, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(25, 1);
	aggregate_func_6609(25, 16384);
	aggregate_func_6609(25, 8192);
	aggregate_func_6609(25, 536870912);
	aggregate_func_348(6, iLocal_34, iParam0, iLocal_35, iLocal_36, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_65(6, 0);
	aggregate_func_348(2, iLocal_40, iParam0, iLocal_41, iLocal_42, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(2, 167427363, 0, 0);
	aggregate_func_7096(2, 1781387061, 0, 0);
	aggregate_func_7096(2, 1256624295, 0, 0);
	aggregate_func_7096(2, -1472554838, 0, 0);
	aggregate_func_7096(2, 1926602045, 0, 0);
	aggregate_func_7096(2, 525319959, 0, 0);
	aggregate_func_7096(2, 840950967, 0, 0);
	aggregate_func_7096(2, -1174266594, 0, 0);
	aggregate_func_7096(2, 674789769, 0, 0);
	aggregate_func_7096(2, 760362377, 0, 0);
	aggregate_func_7096(2, 454004996, 0, 0);
	func_65(2, 0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_2366(379, iLocal_37, 1);
	aggregate_func_2366(378, iLocal_43, 1);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate_func_3063(uParam1, iLocal_31, 1);
	aggregate_func_3063(uParam1, iLocal_37, 2);
	aggregate_func_3063(uParam1, iLocal_43, 10);
}

void func_37(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return;
	}
	aggregate_func_4538();
	aggregate_func_7655(0, -1855532022);
	aggregate_func_7655(2, 617504531);
}

bool func_40(int iParam0)
{
	if (!bLocal_68)
	{
		if (func_73())
		{
			func_74();
			bLocal_68 = true;
		}
	}
	if (aggregate_func_6721(&bLocal_56))
	{
		if (bLocal_56)
		{
			if (aggregate_func_2059())
			{
				aggregate_func_1155(-1413258107, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				aggregate_func_1155(-1413258107, 1, 0, 0, 0, 0, 0, 0);
			}
			aggregate_func_1155(1321590180, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	func_78(iLocal_55);
	aggregate_func_7429(2, iLocal_39, &uLocal_38);
	return false;
}

void func_53()
{
	iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithShop Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2946.756f, 1319.464f, 45.773f, 0f, 0f, 160.007f, 7.3f, 8.558f, 3.886f);
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2951.497f, 1315.359f, 45.397f, 0f, 0f, 70.668f, 4.201f, 6.8f, 3.221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2944.162f, 1323.462f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2942.231f, 1318.028f, 45.344f, 0f, 0f, 159.953f, 1.313f, 2.528f, 3.276f);
	iLocal_36 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithOff Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_36, 2951.393f, 1315.45f, 45.443f, 0f, 0f, 159.953f, 4.981f, 4.126f, 3.559f);
	VOLUME::_0x39816F6F94F385AD(iLocal_36, 2948.723f, 1318.755f, 45.71739f, 0f, 0f, 159.9526f, 1.816379f, 2.277752f, 3.783344f);
	iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGunsmithPARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_37, iLocal_34);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_37, iLocal_36);
	iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2946.482f, 1320.09f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 3.783344f, "Annesburg - m_volGunsmithPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_34, 10074);
}

void func_55()
{
	iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(aggregate_func_9077(83), 0f, 0f, 160.5434f, 7.539f, 7.226621f, 3.527f, "Annesberg - m_volSheriff");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_33, 5, 1);
}

void func_56()
{
	iLocal_52 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRestrictedMines");
	VOLUME::_0x39816F6F94F385AD(iLocal_52, 2778.796f, 1394.792f, 69.89557f, 0f, 0f, 162.6054f, 47.3562f, 17.70435f, 4.921822f);
	VOLUME::_0x39816F6F94F385AD(iLocal_52, 2731.457f, 1387.03f, 69.47391f, 0f, 0f, 174.5427f, 51.89223f, 75.50195f, 5.399319f);
	VOLUME::_0x39816F6F94F385AD(iLocal_52, 2766.449f, 1372.934f, 69.97977f, 0f, 0f, 179.7893f, 42.35742f, 40.00592f, 7.371945f);
	VOLUME::_0x39816F6F94F385AD(iLocal_52, 2745.149f, 1325.543f, 70.53976f, 0f, 0f, -124.3671f, 68.93018f, 48.94287f, 6.861679f);
	iLocal_53 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardWarningMines");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_53, iLocal_52);
	VOLUME::_0x39816F6F94F385AD(iLocal_53, 2798.54f, 1378.204f, 71.38834f, 0f, 0f, 114.3251f, 12.14124f, 9.256836f, 2.566116f);
	VOLUME::_0x39816F6F94F385AD(iLocal_53, 2786.636f, 1340.301f, 72.13432f, 0f, 0f, -169.2597f, 36f, 20.0387f, 5.186172f);
	iLocal_51 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRegistrationMines Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_51, iLocal_53);
	VOLUME::_0xBCE668AAF83608BE(iLocal_51, 2746.364f, 1358.945f, 70.39893f, 0f, 0f, 0f, 84.91821f, 80.12947f, 16.40755f);
	sLocal_50 = "ANNESBURG_MINES";
	LAW::_CREATE_GUARD_ZONE(sLocal_50);
	LAW::_0x8C598A930F471938(sLocal_50, iLocal_51);
	LAW::_0x35815F372D43E1E5(sLocal_50, iLocal_52);
	LAW::_0xAD3E07C37A7C1ADC(sLocal_50, iLocal_53);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_50, 2751.873f, 1317.464f, 70.3442f);
	LAW::_0xA8A74AA79FB67159(sLocal_50, iLocal_51);
	iLocal_47 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardThreatFactory");
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2941.719f, 1379.844f, 54.23869f, 0f, 0f, -20.52175f, 20f, 9.64209f, 8f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2956.943f, 1374.144f, 56.70911f, 0f, 0f, -20.52175f, 8f, 9.64209f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2921.606f, 1378.958f, 57.36378f, 0f, 0f, -19.99977f, 9.862305f, 3.548828f, 4.311089f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2929.823f, 1391.119f, 57.1455f, 0f, 0f, 159.4647f, 10.5f, 4f, 5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2890.918f, 1392.686f, 65.82047f, 0f, 0f, 159.4647f, 5f, 4f, 5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2891.106f, 1397.907f, 65.7927f, 0f, 0f, 159.4647f, 8f, 8f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2882.034f, 1399.818f, 71.60069f, 0f, 0f, -18.42616f, 11.89791f, 14.37344f, 8.176727f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2873.382f, 1397.755f, 69.09045f, 0f, 0f, -109.1993f, 3.7f, 2.85f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_47, 2870.781f, 1405.204f, 69.09045f, 0f, 0f, -109.1993f, 8f, 12.75f, 5.5f);
	iLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRestrictedFactory");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_46, iLocal_47);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2947.967f, 1377.505f, 54.23869f, 0f, 0f, -20.52174f, 33.40112f, 9.64209f, 8.798882f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2921.375f, 1386.594f, 59.35508f, 0f, 0f, -19.9723f, 22.21967f, 10.34818f, 8.176826f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2903f, 1393.487f, 62.41521f, 0f, 22.36725f, -18.6568f, 20.50081f, 4.178955f, 4.300679f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2886.151f, 1398.552f, 67.75819f, 0f, 0f, -17.09603f, 20.41762f, 12.63306f, 8.176727f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2931.633f, 1376.08f, 53.74407f, 0f, 0f, -19.99976f, 10f, 4.548828f, 8f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2927.823f, 1391.53f, 56.10883f, 0f, 0f, 159.4647f, 14.87891f, 4.287598f, 5.781578f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2879.041f, 1385.799f, 76.87366f, 0f, 0f, 74.31805f, 7.497559f, 6.367218f, 15.01529f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2877.706f, 1411.105f, 68.60784f, 0f, 0f, -109.1993f, 8.661057f, 9.821352f, 5.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2868.376f, 1406.596f, 68.84293f, 0f, 0f, 70.84104f, 16.76896f, 14.31861f, 5.512192f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2961.819f, 1372.318f, 54.22138f, 0f, 0f, -20.52175f, 4f, 6f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2862.852f, 1453.412f, 68.60784f, 0f, 0f, 60f, 17f, 14.5f, 5.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, 2856.053f, 1440.646f, 68.60784f, 0f, 0f, 60f, 11f, 12f, 5.5f);
	iLocal_48 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardWarningFactory");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_48, iLocal_46);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2885.087f, 1390.311f, 64.77302f, 0f, 0f, 74.31805f, 11f, 5.055176f, 3.791058f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2873.519f, 1405.156f, 68.60784f, 0f, 0f, -109.1993f, 24.00397f, 30.25238f, 5.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2960.251f, 1380.218f, 52.1091f, 0f, 0f, 70.33841f, 4.079863f, 5.097966f, 4.737656f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2959.772f, 1382.529f, 51.43845f, 180f, 58.71566f, -109.6616f, 4.079863f, 2.205975f, 4.737656f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2921.698f, 1395.326f, 55.71815f, 0f, 0f, 74.31805f, 7.497559f, 7.223577f, 6f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2867.994f, 1460.895f, 68.84293f, 0f, 0f, 57.87753f, 36.40476f, 16.11485f, 5.512192f);
	VOLUME::_0x39816F6F94F385AD(iLocal_48, 2856.1f, 1439.699f, 68.84293f, 0f, 0f, 60f, 12.37818f, 13.83511f, 5.512192f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_48, 2875.003f, 1459.517f, 67.87074f, 0f, 0f, -27.09153f, 8.940713f, 19.95108f, 3.542988f);
	iLocal_45 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Annesburg - m_volGuardRegistrationFactory Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_45, iLocal_48);
	VOLUME::_0xBCE668AAF83608BE(iLocal_45, 2929.186f, 1382.264f, 6.988285f, 0f, 0f, 24.12213f, 101.644f, 161.2632f, 79.15946f);
	iLocal_49 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2860.579f, 1374.223f, 6.988285f, 0f, 0f, -18.32627f, 181.8184f, 201.7612f, 79.15946f, "Annesburg - m_volGuardDefensiveFactory");
	sLocal_44 = "ANNESBURG_FACTORY";
	LAW::_CREATE_GUARD_ZONE(sLocal_44);
	LAW::_0x8C598A930F471938(sLocal_44, iLocal_45);
	LAW::_0x35815F372D43E1E5(sLocal_44, iLocal_46);
	LAW::_0xA1B0E6301E2E02A6(sLocal_44, iLocal_47);
	LAW::_0xAD3E07C37A7C1ADC(sLocal_44, iLocal_48);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_44, 2922.172f, 1380.257f, 56.7411f);
	LAW::_0xA8A74AA79FB67159(sLocal_44, iLocal_49);
}

void func_57()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_69);
	STREAMING::REQUEST_MODEL(-904994761, false);
	STREAMING::REQUEST_MODEL(-238202707, false);
	STREAMING::REQUEST_MODEL(-291277537, false);
	STREAMING::REQUEST_MODEL(-914117568, false);
	STREAMING::REQUEST_MODEL(-2006868292, false);
	STREAMING::REQUEST_MODEL(245079671, false);
	STREAMING::REQUEST_MODEL(-784275669, false);
	STREAMING::REQUEST_MODEL(612192203, false);
	STREAMING::REQUEST_MODEL(364541094, false);
	STREAMING::REQUEST_MODEL(-2145170802, false);
	STREAMING::REQUEST_MODEL(1845715267, false);
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;

	if ((aggregate_func_4458(iParam0, 16384) || aggregate_func_4458(iParam0, 32768)) || aggregate_func_4268((Global_1051387->f_69[iParam0 /*76*/])->f_3))
	{
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
		(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = 0;
		return 0;
	}
	iVar0 = aggregate_func_4746(aggregate_func_4314(), iParam0);
	if ((!bParam1 && aggregate_func_5595(iVar0, &uVar1, &uVar2, &vVar3)) || (bParam1 && aggregate_func_6068(iVar0, &uVar1, &uVar2, &vVar3)))
	{
		aggregate_func_1577(iParam0, uVar1, vVar3, uVar2, 0);
		(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { vVar3 };
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = uVar1;
	}
	return (Global_1051387->f_69[iParam0 /*76*/])->f_6;
}

bool func_73()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_69))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-904994761))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-238202707))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-291277537))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-914117568))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2006868292))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(245079671))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-784275669))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(612192203))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(364541094))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2145170802))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1845715267))
	{
		return false;
	}
	return true;
}

void func_74()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		iLocal_57 = OBJECT::CREATE_OBJECT(-904994761, 2882.77f, 1400.54f, 64.53f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_57, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_57, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		iLocal_58 = OBJECT::CREATE_OBJECT(-238202707, 2881.89f, 1399.2f, 65.8f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_58, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_58, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		iLocal_59 = OBJECT::CREATE_OBJECT(-291277537, 2888.39f, 1398.65f, 63.92f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_59, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_59, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		iLocal_60 = OBJECT::CREATE_OBJECT(-914117568, 2887.73f, 1399.23f, 63.88f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_60, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_60, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		iLocal_61 = OBJECT::CREATE_OBJECT(-2006868292, 2921.67f, 1386.704f, 55.256f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_61, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_61, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		iLocal_62 = OBJECT::CREATE_OBJECT(245079671, 2932.304f, 1382.867f, 55.01f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_62, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_62, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		iLocal_63 = OBJECT::CREATE_OBJECT(-784275669, 2902.988f, 1393.29f, 57.85f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_63, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_63, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		iLocal_64 = OBJECT::CREATE_OBJECT(612192203, 2941.816f, 1378.873f, 47.656f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_64, 0f, 0f, -20.1736f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_64, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		iLocal_65 = OBJECT::CREATE_OBJECT(364541094, 2921.67f, 1386.654f, 55.226f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_65, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_65, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		iLocal_66 = OBJECT::CREATE_OBJECT(-2145170802, 2932.304f, 1382.867f, 55.17f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_66, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_66, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		iLocal_67 = OBJECT::CREATE_OBJECT(1845715267, 2921.489f, 1386.78f, 56.556f, false, false, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_67, 0f, 0f, -20f, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_67, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_57, "coalbin01_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_58, "steameng01_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_59, "conveyor01x_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_60, "conveyor02x_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_61, "annconvey03_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_62, "annconvey04_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_63, "annconvmid1x_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_64, "annChute01_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_65, "anngears03_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_66, "anngears04_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		ENTITY::PLAY_ENTITY_ANIM(iLocal_67, "annsifter01_full", sLocal_69, 1f, true, false, false, 0f, 0);
	}
}

void func_78(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	if (aggregate_func_2028(iParam0, Global_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
	}
}

void func_96(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	aggregate_func_2703(&uLocal_21, 0);
	func_165();
	LAW::_REMOVE_GUARD_ZONE(sLocal_44);
	aggregate_func_2017(iLocal_45);
	aggregate_func_2017(iLocal_47);
	aggregate_func_2017(iLocal_46);
	aggregate_func_2017(iLocal_48);
	aggregate_func_2017(iLocal_49);
	LAW::_REMOVE_GUARD_ZONE(sLocal_50);
	aggregate_func_2017(iLocal_51);
	aggregate_func_2017(iLocal_52);
	aggregate_func_2017(iLocal_53);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_54))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_54);
	}
	if (HUD::_0x2C729F2B94CEA911("ASBGAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("ASBGAUD"))
		{
			HUD::_0xAA03F130A637D923("ASBGAUD");
		}
	}
	iParam0 = iParam0;
}

void func_165()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_57);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_58);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_59))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_59);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_63);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_65);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_66);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_67);
	}
}

