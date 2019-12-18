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
#endregion

// __EntryFunction__ == aggregate_func_1808

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTumbleweed_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -5534.95f, -2962.377f, 38.52466f, 0f, 0f, 40.25f, 100f, 100f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -5620.958f, -2940.959f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -5523.102f, -3041.372f, 32.69263f, 0f, 0f, 0f, 50f, 50f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -5486.511f, -2894.654f, 32.69263f, 0f, 0f, 0f, 75f, 75f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_17, -5426.396f, -2936.432f, 32.69263f, 0f, 0f, 0f, 43f, 25f, 50f);
	aggregate_func_1306(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5193.5f, -2122f, 17f, 0f, 0f, 45f, 87f, 77f, 25f, "m_volRathskellerFork_Restriction");
	aggregate_func_1308(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5409.035f, -3657.266f, -14.49665f, 0f, 0f, -24f, 36f, 30f, 30f, "m_volAbandonedBarn_Restriction");
	aggregate_func_1368(iLocal_19, 0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5841.081f, -3740.558f, -25.90157f, 0f, 0f, 119.5362f, 24.82908f, 46.70603f, 12.83437f, "m_volScratchingPostAquatic_Restriction");
	aggregate_func_1369(iLocal_20);
}

