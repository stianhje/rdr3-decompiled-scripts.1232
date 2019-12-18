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
	char* sLocal_23 = NULL;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	func_3();
	func_4();
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
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	aggregate_func_1306(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	aggregate_func_1308(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	aggregate_func_1314(iLocal_19, 0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	aggregate_func_1307(iLocal_20);
}

void func_3()
{
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 343.4911f, 1484.906f, 183.6585f, 0f, 0f, 125.4594f, 50.44129f, 27.58693f, 15.20348f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 366.8338f, 1481.555f, 183.3052f, 0f, 0f, 70.84903f, 9.450991f, 11.24788f, 14.86582f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 361.6927f, 1499.326f, 183.0759f, 0f, 0f, 14.50761f, 15.72725f, 35.53953f, 16.71587f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 327.8768f, 1483.835f, 182.8865f, 0f, 0f, -11.76057f, 17.00056f, 10.34268f, 16.34857f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 319.2722f, 1495.286f, 184.5413f, 0f, 0f, -53.96134f, 23.05555f, 18.03384f, 21.16078f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 320.7645f, 1509.291f, 188.6127f, 0f, 0f, -25.21897f, 4.516489f, 7.110216f, 18.25474f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 324.6142f, 1502.853f, 184.9036f, 0f, 0f, -24.95285f, 14.96967f, 13.84794f, 21.22798f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 350.3736f, 1501.781f, 184.2531f, 0f, 0f, 33.49929f, 9.61958f, 30.69061f, 13.84341f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 352.1387f, 1513.729f, 182.7722f, 0f, 0f, 24.7492f, 10.80241f, 11.25904f, 15.89185f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 355.6973f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.25786f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 357.9312f, 1517.985f, 184.7034f, 0f, 0f, -16.95034f, 4.391377f, 5.500231f, 12.25786f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 362.5482f, 1516.343f, 182.8423f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 366.5602f, 1473.809f, 182.5569f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_22, iLocal_21);
	VOLUME::_0xBCE668AAF83608BE(iLocal_22, 345.1969f, 1487.955f, 182.5569f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.83329f);
	sLocal_23 = "OLD_FORT_WALLACE";
	LAW::_CREATE_GUARD_ZONE(sLocal_23);
	LAW::_0x8C598A930F471938(sLocal_23, iLocal_22);
	LAW::_0xA1B0E6301E2E02A6(sLocal_23, iLocal_21);
	LAW::_0x35815F372D43E1E5(sLocal_23, iLocal_21);
	LAW::_0xAD3E07C37A7C1ADC(sLocal_23, iLocal_21);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_23, 346.9555f, 1488.217f, 182.0683f);
	LAW::_0xA8A74AA79FB67159(sLocal_23, iLocal_21);
}

void func_4()
{
	aggregate_func_6624(160425541, 1);
	aggregate_func_6624(-1127035680, 1);
}

void func_7()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_23);
}

