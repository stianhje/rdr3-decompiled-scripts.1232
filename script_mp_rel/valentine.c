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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
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
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
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
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	vector3 vLocal_137 = { 0f, 0f, 0f };
	int iLocal_140 = 0;
	bool bLocal_141 = false;
	int iLocal_142[4] = { 0, 0, 0, 0 };
	bool bLocal_147 = false;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	vLocal_137 = { -277.3855f, 805.2767f, 119.1796f };
	iLocal_140 = -658853329;
	iLocal_148 = -1;
	iLocal_149 = 20000;
	iLocal_152 = vScriptParam_0.x;
	iLocal_150 = vScriptParam_0.z;
	bLocal_154 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	func_3();
	iLocal_151 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_151)
		{
			iLocal_151 = 0;
			aggregate_func_4561(iLocal_152, &iLocal_150);
			switch (iLocal_150)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_153 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_150 = 1;
					}
					else
					{
						iLocal_150 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_153 < MISC::GET_GAME_TIMER())
					{
						bLocal_154 = false;
						iLocal_150 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_152);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_152)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_152), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_152));
					Global_1896608 = -1;
					iLocal_153 = (iLocal_149 + MISC::GET_GAME_TIMER());
					iLocal_150 = 3;
					break;
				case 3:
					if (func_13() || iLocal_153 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_152);
						iLocal_153 = (iLocal_149 + MISC::GET_GAME_TIMER());
						iLocal_150 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_152) || iLocal_153 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_152);
						iLocal_153 = (MISC::GET_GAME_TIMER() + iLocal_149);
						iLocal_150 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_152) || iLocal_153 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_152);
						iLocal_153 = (iLocal_149 + MISC::GET_GAME_TIMER());
						iLocal_150 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_152)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_152), 4) && !iLocal_153 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_7530(iLocal_152) || iLocal_153 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_152, 4);
								iLocal_153 = (iLocal_149 + MISC::GET_GAME_TIMER());
								iLocal_150 = 8;
							}
							Jump @842; //curOff = 558
							aggregate_func_4239(iLocal_152);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_152);
							func_30(iLocal_152);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_150 = 9;
							Jump @842; //curOff = 626
							aggregate_func_7401(iLocal_152);
							aggregate_func_2893();
							iLocal_150 = 10;
							Jump @842; //curOff = 643
							aggregate_func_4554(Global_1896662);
							func_36(iLocal_152, Global_1896662);
							iLocal_150 = 11;
							Jump @842; //curOff = 668
							func_37(iLocal_152);
							aggregate_func_4343(iLocal_152, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_150 = 12;
							Jump @842; //curOff = 718
							if (func_40(iLocal_152))
							{
								iLocal_151 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_152);
							aggregate_func_4467(iLocal_152);
							aggregate_func_4343(iLocal_152, 8);
							if (aggregate_func_4151())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_152 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_152 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_152 /*36*/])->f_12);
							}
							Jump @842; //curOff = 819
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_152 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_152 /*36*/])->f_13);
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

void func_3()
{
	if (((!aggregate_func_1518(-515561750) && aggregate_func_4251() == -1) && !STREAMING::_IS_IMAP_ACTIVE(1186533019)) && !STREAMING::_0xCF45DF50C7775F2A())
	{
		aggregate_func_3021(-892659042);
		func_51();
	}
}

bool func_13()
{
	iLocal_58 = ((*Global_1887327)[81 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_58, 19);
	func_56();
	func_57();
	func_58();
	if (aggregate_func_4251() == -1)
	{
		iLocal_84 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHorseShopStables");
		VOLUME::_0x39816F6F94F385AD(iLocal_84, -369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f);
		VOLUME::_0x39816F6F94F385AD(iLocal_84, -367.6902f, 770.4435f, 116.8526f, 0f, 0f, 4.150415f, 26.09184f, 5.747657f, 4.724637f);
		VOLUME::_0x39816F6F94F385AD(iLocal_84, -391.6759f, 778.7041f, 116.8526f, 0f, 0f, 4.150415f, 23.39705f, 25.94251f, 4.724637f);
		iLocal_85 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volAuctionStables");
		VOLUME::_0x39816F6F94F385AD(iLocal_85, -257.2065f, 634.5588f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		VOLUME::_0x39816F6F94F385AD(iLocal_85, -221.2732f, 673.6355f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
		iLocal_82 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 6.241f, "Valentine - m_volHorseShop");
		iLocal_83 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-361.3393f, 787.48f, 116.4301f, 0f, 0f, 3.999999f, 3.741607f, 3.652877f, 5.744031f, "Valentine - m_volHorseShopOutsideDoor");
		aggregate_func_7683(9, iLocal_83);
		VOLUME::_0xB469CFD9E065EB99(iLocal_82, 10067);
		iLocal_131 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-280.6662f, 915.7495f, 133.066f, 0f, 0f, 0f, 23.88504f, 24.41234f, 15.89547f, "Valentine - m_volGuardDogOwner");
		iLocal_89 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotel Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_89, -325.0124f, 767.5158f, 119.4827f, 0f, 0f, -170.2021f, 8.15436f, 18.38504f, 9.051786f);
		VOLUME::_0x39816F6F94F385AD(iLocal_89, -317.872f, 761.7268f, 118.0002f, 0f, 0f, 11.41397f, 4.27525f, 4.046098f, 2.733858f);
		iLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-326.9005f, 777.8173f, 117.6158f, 0f, 0f, -171.616f, 8.5f, 3.390837f, 2.634366f, "Valentine - m_volHotelPorch");
		iLocal_91 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.7273f, 774.2453f, 117.7346f, 0f, 0f, -171.616f, 2.732852f, 1.390837f, 2.634366f, "Valentine - m_volHotelPrompt");
		iLocal_92 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.6349f, 772.4476f, 117.7346f, 0f, 0f, -171.616f, 1.740315f, 1.864735f, 2.634366f, "Valentine - m_volHotelOfflimits");
		iLocal_93 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotelMuteAgg");
		VOLUME::_0x39816F6F94F385AD(iLocal_93, -325.298f, 767.432f, 122.368f, 0f, 0f, -171.616f, 9.71f, 19.745f, 3.774f);
		VOLUME::_0x39816F6F94F385AD(iLocal_93, -317.643f, 761.773f, 118f, 0f, 0f, 11.414f, 4.574f, 4.322f, 2.734f);
		iLocal_127 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		iLocal_128 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.2203f, 776.1706f, 118.8547f, 0f, 0f, 7.323684f, 1.907036f, 1.483034f, 2.606343f, "Valentine - m_volBankPrompt");
		iLocal_129 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volBankShopOfflimits Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_129, -302.2217f, 769.743f, 118.8547f, 0f, 0f, 10.50366f, 2.072344f, 8.025318f, 2.606343f);
		VOLUME::_0x39816F6F94F385AD(iLocal_129, -309.0788f, 772.8509f, 118.8547f, 0f, 0f, 8.049957f, 5.213456f, 4.413345f, 3.353561f);
		VOLUME::_0x39816F6F94F385AD(iLocal_129, -311.414f, 775.411f, 118.8547f, 0f, 0f, 8.049957f, 1.633f, 1.085f, 3.354f);
		VOLUME::_0xB469CFD9E065EB99(iLocal_127, 10058);
	}
	else
	{
		iLocal_82 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f, "Valentine - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_82, 10067);
		iLocal_127 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_127, 0, 0, 0, -1, -1, 0);
	}
	iLocal_86 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-339.5029f, 767.1139f, 116.61f, 0f, 0f, -171.616f, 9.604842f, 7.286813f, 4.891439f, "Valentine - m_volButcher");
	iLocal_87 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-341.169f, 767.2f, 116.816f, 0f, 0f, -171.203f, 1.376f, 2.537f, 2.48f, "Valentine - m_volButcherPrompt");
	iLocal_88 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-338.5402f, 767.6559f, 116.5175f, 0f, 0f, -171.2032f, 2.147837f, 2.102079f, 2.480459f, "Valentine - m_volButcherOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_86, 10061);
	iLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.5829f, 812.947f, 118.7894f, 0f, 0f, 100.1415f, 6.023165f, 3.919236f, 2.442381f, "Valentine - m_volBarberOwner");
	iLocal_65 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.1545f, 812.8f, 118.9254f, 0f, 0f, 100.923f, 4.783854f, 2.636788f, 1.990557f, "Valentine - m_volBarberPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_66, 10059);
	iLocal_67 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.4f, 813.5f, 118.83f, 0f, 0f, 11f, 1.9f, 2.3f, 2.195668f, "Valentine - m_volBarberAvoidance");
	POPULATION::_0xB56D41A694E42E86(iLocal_67, 0, 0, 0, -1, -1, 0);
	iLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -176.659f, 629.779f, 114.438f, 0f, 0f, -34.98428f, 3.47f, 6.531f, 2.881f);
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -174.048f, 633.669f, 114.545f, 0f, 0f, -34.84247f, 1.996f, 2.553f, 2.881f);
	VOLUME::_0x39816F6F94F385AD(iLocal_98, -179.166f, 626.498f, 114.545f, 0f, 0f, -34.84247f, 2.314f, 2.553f, 2.881f);
	iLocal_99 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_99, -178.982f, 626.715f, 114.531f, 0f, 0f, -34.84247f, 1.767f, 1.396f, 2.881f);
	iLocal_100 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_100, -176.4711f, 629.9696f, 114.5366f, 0f, 0f, -34.98428f, 3.19526f, 6.32671f, 2.880646f);
	VOLUME::_0x39816F6F94F385AD(iLocal_100, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_98, 10068);
	iLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 21.384f, 11.9942f, 3.513f, "Valentine - m_volBartenderOwner");
	iLocal_78 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.9f, 799f, 119.3f, 0f, 0f, 97.7f, 2.9f, 1.2f, 2.6f, "Valentine - m_volPianoPlayerOwner");
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f, "Valentine - m_volSheriffOwner");
	iLocal_81 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volSheriffStation Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_81, iLocal_79);
	VOLUME::_0x39816F6F94F385AD(iLocal_81, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
	VOLUME::_0x39816F6F94F385AD(iLocal_81, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
	iLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-277.2282f, 807.1215f, 119.472f, 0f, 0f, 9.89185f, 5.00473f, 8.940674f, 2.321479f, "Valentine - m_volSheriffStation Agg");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_80, 5, 1);
	iLocal_97 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-230.464f, 817.354f, 126.643f, 0f, 0f, -34.207f, 19.604f, 29.858f, 13.22f, "BRL_VALENTINE - m_volChurch");
	iLocal_133 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(-290.7f, 728.9f, 118.8f, 100f, 2.5f, 2.5f, 0, 6f, 10f, 25f, 7.5f);
	func_60();
	func_61();
	func_62(81);
	iLocal_102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-177.812f, 632.287f, 114.537f, 0f, 0f, -34.984f, 8.706f, 22.528f, 2.881f, "Valentine - m_volTrainStation");
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_9455(-409100651, "props_misc@church_bells", "enter", "loop", "exit", -230.157f, 797.476f, 135.255f, "VAL_SINGLE_TOLL");
	aggregate_func_9460(9, 0, 0);
	aggregate_func_9460(12, 0, 0);
	aggregate_func_9460(19, 0, 0);
	ENTITY::CREATE_MODEL_HIDE(-173.8572f, 642.7699f, 114.0726f, 0.1f, 1635620646, false);
}

bool func_17(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return false;
	}
	else
	{
		aggregate_func_3021(1777348822);
	}
	return iVar0;
}

void func_26()
{
	if (aggregate_func_4251() != -1)
	{
	}
}

void func_27()
{
	aggregate_func_7185(-534215902, 0, 0);
	aggregate_func_7674(0, -308.9729f, 807.0829f, 117.9797f, iLocal_95, 81);
	aggregate_func_7674(1, -241.294f, 770f, 118.14f, iLocal_96, 81);
}

void func_28()
{
	func_72(1, -355.308f, 704.938f, 115.936f, &(Global_1268116->f_47[1]), 5);
}

void func_29(int iParam0)
{
	aggregate_func_348(0, iLocal_69, iParam0, iLocal_62, iLocal_72, 12, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(0, -706941207, 0, 0);
	aggregate_func_1218(0, 0);
	aggregate_func_348(3, iLocal_73, iParam0, iLocal_63, iLocal_75, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(3, 706990067, 0, 0);
	aggregate_func_7096(3, -290089884, 0, 0);
	aggregate_func_7683(3, iLocal_64);
	aggregate_func_6609(3, 8192);
	aggregate_func_1218(3, 0);
	aggregate_func_348(6, iLocal_76, iParam0, iLocal_59, iLocal_60, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(6, 475159788, 0, 0);
	aggregate_func_7096(6, 2042647667, 0, 0);
	aggregate_func_1218(6, 0);
	aggregate_func_348(25, iLocal_81, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(25, 1);
	aggregate_func_6609(25, 16384);
	aggregate_func_6609(25, 8192);
	aggregate_func_6609(25, 536870912);
	aggregate_func_348(8, iLocal_66, iParam0, iLocal_65, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(8, 67108864);
	aggregate_func_6609(8, 2048);
	aggregate_func_1218(8, 0);
	aggregate_func_348(10, iLocal_86, iParam0, iLocal_87, 0, 460, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(10, 536870912);
	aggregate_func_1218(10, 0);
	aggregate_func_348(36, &(Global_1268116->f_47[1]), iParam0, &(Global_1268116->f_50[1]), 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_348(9, iLocal_82, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(9, 536870912);
	aggregate_func_6609(9, 16384);
	aggregate_func_6609(9, 32768);
	aggregate_func_6609(9, 1);
	aggregate_func_6609(9, 8388608);
	aggregate_func_6609(9, 8192);
	aggregate_func_6609(9, 4);
	aggregate_func_6609(9, 16777216);
	aggregate_func_6609(9, 67108864);
	if (!aggregate_func_2820() && aggregate_func_4442())
	{
		aggregate_func_7096(9, 1696121221, 0, 0);
		aggregate_func_7096(9, 1132010214, 0, 0);
	}
	else
	{
		aggregate_func_7096(9, 1696121221, -1f, 1);
		aggregate_func_7096(9, 1132010214, 1f, 1);
	}
	aggregate_func_348(2, iLocal_98, iParam0, iLocal_99, iLocal_100, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_1218(2, 0);
	func_80();
	aggregate_func_1343(79);
	aggregate_func_1343(81);
}

void func_30(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	if (func_82(1, iLocal_68, 1))
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_68, 1, 1);
	}
	func_82(14, iLocal_78, 1);
	func_82(3, iLocal_79, 1);
	func_82(45, iLocal_84, 1);
	func_82(18, iLocal_84, 0);
	func_82(19, iLocal_84, 0);
	func_82(7, iLocal_85, 1);
	func_82(20, iLocal_85, 0);
	func_82(27, iLocal_85, 0);
	func_82(28, iLocal_85, 0);
	if (func_82(37, iLocal_131, 1))
	{
		func_82(51, iLocal_131, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_131, 3, 1);
		if (_NAMESPACE48::_0x800DF3FC913355F3(aggregate_func_4452(51)))
		{
			VOLUME::_0x53D05D60E5F5B40C(iLocal_131, 3, 1, aggregate_func_4452(51));
		}
	}
}

void func_36(int iParam0, var uParam1)
{
	aggregate_func_3063(uParam1, iLocal_58, 1);
	aggregate_func_3063(uParam1, iLocal_76, 2);
	aggregate_func_3063(uParam1, iLocal_69, 2);
	aggregate_func_3063(uParam1, iLocal_73, 2);
	aggregate_func_3063(uParam1, iLocal_79, 11);
	aggregate_func_3063(uParam1, iLocal_94, 3);
	aggregate_func_3063(uParam1, iLocal_97, 6);
	aggregate_func_3063(uParam1, iLocal_98, 10);
}

void func_37(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return;
	}
	aggregate_func_4538();
	aggregate_func_7655(8, -65821257);
	aggregate_func_7655(0, 99634802);
	aggregate_func_7655(1, 1017247197);
	aggregate_func_7655(2, 2122993982);
}

bool func_40(int iParam0)
{
	func_89();
	if (aggregate_func_6721(&bLocal_141))
	{
		if (bLocal_141)
		{
			aggregate_func_1155(1508776842, 1, 0, 0, 0, 0, 0, 0);
			aggregate_func_1155(925575409, 1, 0f, 0, 0, 1f, 0, 0);
			aggregate_func_1155(-855228377, 1, 0, 0, 0, 0, 0, 0);
			aggregate_func_6624(283382142, 1);
			aggregate_func_6624(1876749464, 1);
			aggregate_func_6624(1331491364, 1);
			aggregate_func_6624(-408139633, 1);
			aggregate_func_6624(-1652509687, 1);
		}
	}
	aggregate_func_7429(88, iLocal_102, &uLocal_101);
	if (Global_1572887->f_13 != -1)
	{
		aggregate_func_182();
		return false;
	}
	return false;
}

void func_51()
{
	if (iLocal_148 == -1)
	{
		iLocal_148 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-333.337f, 770.839f, 115.29f, 6.066f, 0.65f, 5.228f, aggregate_func_4771(99.798f), false, 7);
	}
}

void func_56()
{
	iLocal_62 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.803f, 805.0234f, 119.5f, 0f, 0f, 9.527998f, 1.792473f, 2.89884f, 2.223762f, "Valentine - m_volDoctorPrompt");
	iLocal_69 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShop Agg");
	iLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.4778f, 815.4984f, 119.8f, 0f, 0f, -80.4f, 4.936636f, 10.4535f, 2.819574f, "Valentine - m_volDoctorBackroom");
	VOLUME::_0x39816F6F94F385AD(iLocal_69, -286.6589f, 808.6324f, 119.8f, 0f, 0f, -80.4f, 10.38628f, 7.7f, 2.8f);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_69, iLocal_70);
	iLocal_72 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShopOff Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -288.5862f, 804.4559f, 119.5f, 0f, 0f, 9.527998f, 1.8573f, 2.649464f, 2.223762f);
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -289.418f, 811.402f, 119.5f, 0f, 0f, 9.528f, 3.349f, 3.978f, 2.224f);
	VOLUME::_0x39816F6F94F385AD(iLocal_72, -287.157f, 810.98f, 119.5f, 0f, 0f, 9.528f, 1.762f, 2.396f, 2.224f);
	iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.485f, 801.6973f, 119.458f, 0f, 0f, 10.32594f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volDoctorPORCH");
	VOLUME::_0xB469CFD9E065EB99(iLocal_69, 10064);
}

void func_57()
{
	iLocal_73 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralShop Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_73, -323.731f, 801.595f, 118.2f, 0f, 0f, 99.9f, 10.555f, 8.418f, 4.843f);
	VOLUME::_0x39816F6F94F385AD(iLocal_73, -323.784f, 801.585f, 117.689f, 0f, 0f, 99.9f, 10.582f, 8.699f, 5.801f);
	VOLUME::_0x39816F6F94F385AD(iLocal_73, -323.448f, 799.656f, 116.513f, 0f, 0f, 99.9f, 6.34f, 8.699f, 12.476f);
	iLocal_74 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralPORCH Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_74, -322.9185f, 794.5805f, 117.8986f, 0f, 0f, 10.32594f, 9f, 3.558567f, 2.381096f);
	VOLUME::_0x39816F6F94F385AD(iLocal_74, -326.9613f, 807.4636f, 118.0324f, 0f, 0f, 8.726971f, 2.76311f, 2.301893f, 4.510351f);
	VOLUME::_0x39816F6F94F385AD(iLocal_74, -329.273f, 799.3444f, 118.0324f, 0f, 0f, 8.72697f, 3f, 14.5f, 4.510351f);
	iLocal_63 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.0786f, 803.658f, 117.7309f, 0f, 0f, 8.710198f, 2.1f, 3.644517f, 1.698559f, "Valentine - m_volGeneralPrompt");
	if (aggregate_func_4251() == -1)
	{
		iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.8168f, 803.7786f, 117.7309f, 0f, 0f, 10.4864f, 2.206109f, 1.908514f, 1.698559f, "Valentine - m_volGeneralCounterOff");
	}
	else
	{
		iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.6804f, 803.6613f, 118.0603f, 0f, 0f, 8.710198f, 2.1f, 2.235618f, 2.440112f, "Valentine - m_volGeneralCounterOff");
	}
	iLocal_64 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralCounterMute");
	VOLUME::_0x39816F6F94F385AD(iLocal_64, -327.309f, 801.647f, 120.068f, 0f, 0f, 10.4864f, 2.206f, 5.596f, 6.414f);
	VOLUME::_0x39816F6F94F385AD(iLocal_64, -326.547f, 797.528f, 121.542f, 0f, 0f, 10.4864f, 2.206f, 3.398f, 3.708f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_73, 10065);
}

void func_58()
{
	iLocal_59 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.686f, 781.058f, 119.929f, 0f, 0f, 0f, 2.382f, 1.711f, 2.813f, "Valentine - m_volGunsmith - PROMPT");
	iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-279.9107f, 780.475f, 119.8105f, 0f, 0f, 179.9f, 8.518225f, 7.656958f, 2.7f, "Valentine - m_volGunsmithShop");
	iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-280.124f, 786.2109f, 119.6072f, 0f, 0f, 0f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volGunsmithPORCH");
	if (aggregate_func_4251() == -1)
	{
		iLocal_60 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGunsmithCounterOff Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_60, -279.9358f, 778.0059f, 119.7747f, 0f, 0f, 0f, 8.469496f, 2.69515f, 2.516554f);
		VOLUME::_0x39816F6F94F385AD(iLocal_60, -277.336f, 778.941f, 119.775f, 0f, 0f, 0f, 3.326f, 4.079f, 2.517f);
	}
	else
	{
		iLocal_60 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.758f, 778.0059f, 119.7747f, 0f, 0f, 0f, 4.831735f, 2.69515f, 2.516554f, "Valentine - m_volGunsmithCounterOff");
	}
	iLocal_61 = VOLUME::_0x0EB78C2B156635B1(-1612834106, -277.246f, 783.568f, 120.234f, 0f, 0f, 0f, 1.666f, 3.209f, 2.517f);
	VOLUME::_0xBE551C2CC421185D(iLocal_61, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_61, 1);
	VOLUME::_0xB469CFD9E065EB99(iLocal_76, 10066);
}

void func_60()
{
	iLocal_94 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.4941f, 809.1079f, 122.1578f, 0f, 0f, 10.47275f, 12.236f, 27.58529f, 9.179325f, "Valentine - m_volSaloonSmith");
}

void func_61()
{
	iLocal_95 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.3924f, 808.4083f, 119.378f, 0f, 0f, 99.71499f, 22.62186f, 12.374f, 8.647388f, "volSaloonSmithfieldsInterior");
	iLocal_96 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 9.286f, 8.345f, 5f, "volSaloonKeanesInterior");
}

void func_62(int iParam0)
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

void func_72(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (aggregate_func_4268(vParam1))
	{
		return;
	}
	(Global_1268116->f_32[iParam0 /*6*/])->f_1 = { vParam1 };
	Global_1268116->f_32[iParam0 /*6*/] = uParam4;
	(Global_1268116->f_32[iParam0 /*6*/])->f_4 = iParam5;
	(Global_1268116->f_32[iParam0 /*6*/])->f_5 = aggregate_func_9357(iParam5, iParam0);
}

void func_80()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051387->f_3582[iVar0 /*19*/] = -1;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = -1;
		iVar0++;
	}
}

bool func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (aggregate_func_4251() != -1)
	{
		return false;
	}
	if (!aggregate_func_1545(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = aggregate_func_4452(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return true;
}

void func_89()
{
	if (aggregate_func_9080(-367.15f, 788.29f, 116f, 1) < 300f)
	{
		func_170();
		bLocal_147 = true;
	}
	else if (bLocal_147)
	{
		func_171();
		bLocal_147 = false;
	}
}

void func_107()
{
	func_206(81);
}

void func_111(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_133);
	MISC::_CLEAR_TACTICAL_ANALYSIS_POINTS();
	aggregate_func_2017(iLocal_130);
	aggregate_func_451();
	func_209();
	aggregate_func_3010(1250636944);
	func_171();
	func_210();
}

void func_170()
{
	func_258(iLocal_142[0], 1572544138, -361.6891f, 785.3472f, 115.2065f);
	func_258(iLocal_142[1], -1064377332, -361.9032f, 789.568f, 115.2065f);
	func_258(iLocal_142[2], 1572544138, -376.7099f, 784.3367f, 115.1714f);
	func_258(iLocal_142[3], -1064377332, -376.9761f, 788.7846f, 115.1714f);
}

void func_171()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_142)
	{
		func_259(iLocal_142[iVar0]);
		iVar0++;
	}
}

void func_206(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_47[0]));
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_47[1]));
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_50[0]));
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_50[1]));
			break;
		case 81:
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_47[1]));
			VOLUME::_DELETE_VOLUME(&(Global_1268116->f_50[1]));
			break;
	}
}

void func_209()
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	func_271(iLocal_68);
	func_271(iLocal_78);
	func_271(iLocal_79);
}

void func_210()
{
	if (iLocal_148 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&iLocal_148);
		iLocal_148 = -1;
	}
}

void func_258(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*uParam0 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
		}
	}
}

void func_259(var uParam0)
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

void func_271(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iParam0);
	}
}

