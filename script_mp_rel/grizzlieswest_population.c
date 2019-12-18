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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
			if (aggregate_func_1518(-1414537028))
			{
				POPULATION::_0xF45E46DEECF7DF6E(2016, 0, 0, -1, -1);
			}
			else if (aggregate_func_1518(38162571))
			{
				POPULATION::_0xF45E46DEECF7DF6E(224, 0, 0, -1, -1);
				POPULATION::_0xDBBF12EA7C1029B2(0, 1);
			}
			else if (aggregate_func_1518(1350391819))
			{
				POPULATION::_0xDBBF12EA7C1029B2(1, 1);
			}
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
	iLocal_17 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-600f, 2695f, 330f, 0f, 0f, 0f, 250f, 200f, 200f, "m_volAdlerRanch_Restriction");
	aggregate_func_1307(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volColter_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, -1320f, 2425f, 305f, 0f, 0f, 0f, 115f, 115f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, -1410f, 2435f, 327.5f, 0f, 0f, 0f, 25f, 25f, 25f);
	aggregate_func_1307(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-411.5007f, 1732.159f, 220.7082f, 0f, 0f, 17.18846f, 71.74252f, 70.79237f, 31.05772f, "m_volChezPorter_Restriction");
	aggregate_func_1308(iLocal_19, 0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volWinterMiningTown_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_20, -1947.5f, 1332.25f, 216f, 0f, 0f, 0f, 8f, 8f, 30f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_20, -1898.5f, 1346.5f, 216f, 0f, 0f, 0f, 48f, 48f, 30f);
	aggregate_func_1308(iLocal_20, 0, 0);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakeIsabella_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, -1888.756f, 1801.481f, 235.7563f, 0f, 0f, 25.73841f, 74.84248f, 98.28612f, 31.18848f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, -1954.793f, 1783.318f, 243.2873f, 0f, 0f, 0f, 46.64574f, 29.92818f, 11.7102f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, -1762.221f, 1695.654f, 241.4712f, 0f, 0f, 41.08257f, 79.25368f, 154.9331f, 19.56473f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, -1701.788f, 1569.332f, 236.8674f, 0f, 0f, 0f, 35.55024f, 41.68321f, 26.91513f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, -1778.828f, 1559.399f, 224.9684f, 0f, 0f, 52.77263f, 63.78292f, 40.76912f, 36.18432f);
	aggregate_func_1314(iLocal_21, 0, 0);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-166.7533f, 1728.319f, 179.9066f, 0f, 0f, -50.0001f, 19.31775f, 14.36033f, 21.41382f, "m_volGranitePass_Restriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_22, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_22, 2228767, 0, 0, -1, -1, 0);
	func_10();
}

void func_10()
{
	int iVar0;

	iVar0 = 5;
	VOLUME::_0xF14BCEF290F869E1(-1779.387f, 1638.848f, 235.6611f, 17f, iVar0, 8192);
	VOLUME::_0xF14BCEF290F869E1(-1782.244f, 1654.248f, 235.6611f, 19f, iVar0, 8192);
	VOLUME::_0xF14BCEF290F869E1(-1803.302f, 1669.097f, 235.6611f, 22f, iVar0, 8192);
}

