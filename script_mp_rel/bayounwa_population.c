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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	aggregate_func_4238();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (aggregate_func_523(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	aggregate_func_4238();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	aggregate_func_1307(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2090f, -1817.5f, 39f, 0f, 0f, 0f, 18f, 18f, 10f, "m_volCrawdadWilliesRestriction");
	aggregate_func_1307(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2125.35f, -597.55f, 45f, 0f, 0f, 45f, 50f, 70f, 10f, "m_volLagrasRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_20, 4295, 4210688, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_20, 4295, 4210688, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(4295, 4210688, 0, -1, -1, iLocal_20);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 2252.5f, -762.5f, 45f, 0f, 0f, 0f, 40f, 40f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 2288f, -723f, 45f, 0f, 0f, -40f, 12f, 15f, 10f);
	aggregate_func_1307(iLocal_21);
	iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2011.9f, -840.7f, 44.7f, 0f, 0f, 0f, 98.7f, 64.1f, 10f, "m_volOrangePlantationRestriction");
	aggregate_func_1307(iLocal_22);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisFountainAquaticRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 2331.869f, -1216.261f, 45.5096f, 0f, 0f, 0f, 18f, 9f, 5f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_23, 2401.408f, -1036.954f, 43.69143f, 0f, 0f, 0f, 3.15f, 3.15f, 3.297321f);
	aggregate_func_1308(iLocal_23, 512, 0);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisNorthShacksRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2352.919f, -862.3568f, 45f, 0f, 0f, 18f, 7.5f, 7.5f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2352.267f, -854.82f, 45f, 0f, 0f, 36f, 10f, 10f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2370.363f, -861.704f, 45f, 0f, 0f, 21f, 15f, 20f, 30f);
	aggregate_func_1308(iLocal_24, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1789.165f, -815.8882f, 51f, 0f, 0f, 0f, 12.5f, 12.5f, 15f, "m_volBoardedHouseRestriction");
	aggregate_func_1368(iLocal_25, 0, 0);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volMacombsEndRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, 1881.904f, -773.9849f, 50f, 0f, 0f, 0f, 24f, 10f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, 1884.927f, -749.2661f, 50f, 0f, 0f, 0f, 30f, 40f, 30f);
	aggregate_func_1368(iLocal_26, 0, 0);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	aggregate_func_1308(iLocal_27, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");
	aggregate_func_1308(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisRuralHouse");
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 2557.442f, -913.5541f, 43.8437f, 0f, 0f, 25.86927f, 21.31003f, 16.89607f, 13.63585f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 2531.764f, -930.9406f, 41.67561f, 0f, 0f, 25.86927f, 19.01398f, 16.50291f, 13.63585f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 2508.388f, -936.4707f, 43.20302f, 0f, 0f, 25.86927f, 10.15781f, 10.6119f, 10.52294f);
	aggregate_func_1314(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquaticRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 2051.69f, -1716.667f, 45.47638f, 0f, 0f, -22.36101f, 43.12104f, 125.3801f, 18.72456f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 2212.785f, -513.7505f, 42.64256f, 0f, 0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 2123.317f, -450.1633f, 42.35445f, 0f, 0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1774.63f, -754.3323f, 40.5518f, 0f, 0f, -48.02472f, 41.93194f, 15.1102f, 8.930059f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 2079.136f, -508.0375f, 40.54353f, 0f, 0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 2072.09f, -541.5287f, 41.15696f, 0f, 0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	aggregate_func_1369(iLocal_30);
}

