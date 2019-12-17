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
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	fLocal_17 = 7f;
	fLocal_18 = 0f;
	fLocal_19 = 0f;
	fLocal_20 = 100f;
	fLocal_21 = 100f;
	fLocal_22 = 0f;
	aggregate.bayounwa_population.func_1();
	func_2();
	func_3();
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
	}
	else
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(-402695257, "BigValley/BGV_Trapper_1");
		if (_NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257)))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(_NAMESPACE48::_0x112DDF56300BC6E5(-402695257));
		}
	}
	func_5();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate.aberdeenpigfarm.func_45() != -1)
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (aggregate.aberdeenpigfarm.func_49(1, 1))
			{
				bVar0 = false;
			}
		}
		else
		{
			func_7();
		}
		BUILTIN::WAIT(0);
	}
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { fLocal_17, fLocal_18, fLocal_19 };
	vVar3 = { fLocal_20, fLocal_21, fLocal_22 };
	FLOCK::_0xF2CCA7B68CFAB2B9(904876610, -1927.953f, 412.0278f, 180f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFortRiggsRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1560f, -935f, 85f, 0f, 0f, 0f, 50f, 55f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1567.5f, -907.5f, 85f, 0f, 0f, 40f, 50f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1605f, -882.5f, 85f, 0f, 0f, 0f, 50f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1577f, -885.5f, 85f, 0f, 0f, -25.5f, 21f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1602.5f, -917.5f, 85f, 0f, 0f, 0f, 35f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1592.5f, -935.5f, 85f, 0f, 0f, 55f, 35f, 43f, 20f);
	aggregate.bayounwa_population.func_8(iLocal_23, 0, 0);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2180f, 750f, 125f, 0f, 0f, 0f, 90f, 90f, 25f, "m_volHangingDogRanchRestriction");
	aggregate.bayounwa_population.func_8(iLocal_24, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-865f, -760f, 75f, 0f, 0f, 0f, 60f, 60f, 30f, "m_volLoneMuleSteadRestriction");
	aggregate.bayounwa_population.func_8(iLocal_25, 0, 0);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1898f, -238.5f, 188f, 0f, 0f, 16.5f, 14f, 59f, 24.5f, "m_volMountainRiverRestriction");
	aggregate.bayounwa_population.func_8(iLocal_26, 0, 0);
	iLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1897.5f, 1370f, 215f, 0f, 0f, 0f, 75f, 75f, 25f, "m_volNorthernMiningTownRestriction");
	aggregate.bayounwa_population.func_8(iLocal_27, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-617f, -40.2f, 80f, 0f, 0f, 0f, 43.7f, 43.7f, 13f, "m_volPaintedSkyRestriction");
	aggregate.bayounwa_population.func_8(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1825f, 655f, 120f, 0f, 0f, 0f, 45f, 45f, 20f, "m_volWatsonsCabinRestriction");
	aggregate.bayounwa_population.func_8(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554f, 257.4f, 116f, 0f, 0f, 14f, 45f, 45f, 25f, "m_volShepherdsRiseRestriction");
	aggregate.bayounwa_population.func_8(iLocal_30, 0, 0);
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStrawberryRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -1820f, -365f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -1765f, -420f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	func_10(iLocal_31);
	iLocal_32 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1813.34f, -580.26f, 150f, 0f, 0f, 65f, 52f, 31f, 25f, "m_volStrawberryHorseShopRestriction");
	func_10(iLocal_32);
	if (aggregate.aberdeenpigfarm.func_123())
	{
		iLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPronghornRanchRestriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2530.598f, 340.663f, 153f, 0f, 0f, 0f, 22f, 22f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2530.057f, 471.4158f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2590.521f, 470.2267f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_33, -2572.795f, 343.0885f, 153f, 0f, 0f, 0f, 31f, 31f, 15f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2541.964f, 408.2656f, 153f, 0f, 0f, -3.75f, 75f, 132f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2574.994f, 411.635f, 153f, 0f, 0f, 7.5f, 75f, 128f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2555.338f, 340.0247f, 153f, 0f, 0f, 9.25f, 43f, 50f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_33, -2559.616f, 476.0391f, 153f, 0f, 0f, 1.5f, 61f, 50f, 30f);
		aggregate.bayounwa_population.func_8(iLocal_33, 0, 0);
	}
	iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1301.288f, 403.2579f, 102.4782f, 0f, 0f, -27f, 15f, 25f, 15f, "m_volWallaceStationRestriction");
	aggregate.bayounwa_population.func_8(iLocal_34, 0, 0);
	iLocal_35 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_35, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_35, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_35, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	aggregate.bigvalley_population.func_12(iLocal_35, 0, 0);
	iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2172.987f, -253.5375f, 195f, 0f, 0f, -6f, 11f, 15f, 10f, "m_volRockCarvingsRestriction");
	aggregate.bayounwa_population.func_8(iLocal_36, 0, 0);
	iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossingRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_37, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_37, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	aggregate.bayounwa_population.func_10(iLocal_37, 0, 0);
}

void func_5()
{
	aggregate.armadillo.func_69(1963415953, 1);
	aggregate.armadillo.func_69(-1447214344, 1);
}

void func_7()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(-703427271);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return;
	}
	if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
	{
		if (!aggregate.adlerranch.func_93(976539083))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(71064384, Global_36))
			{
				aggregate.bigvalley_population.func_16(976539083);
			}
		}
	}
	else if (aggregate.adlerranch.func_93(976539083))
	{
		if (!STREAMING::_0x73B40D97D7BAAD77(71064384, Global_36))
		{
			aggregate.bigvalley_population.func_17(976539083);
		}
	}
}

void func_8()
{
	FLOCK::_0xFB16F08F47B83B4C(904876610);
}

void func_10(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
}

