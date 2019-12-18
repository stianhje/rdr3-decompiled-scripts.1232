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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	bool bLocal_21 = false;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volTown Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2014.568f, -844.9777f, 44.706f, 0f, 0f, 0f, 69.6883f, 50.95198f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 1994.893f, -813.8496f, 44.706f, 0f, 0f, 32.02662f, 49.04269f, 28.47917f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 1968.462f, -859.535f, 44.706f, 0f, 0f, -0.583631f, 30.73095f, 51.93652f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2050.994f, -804.7936f, 44.706f, 0f, 0f, 39.76538f, 38.38671f, 59.01843f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2076.114f, -860.0187f, 44.706f, 0f, 0f, 0f, 38.38671f, 37.38729f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2012.807f, -764.5793f, 44.706f, 0f, 0f, 39.76538f, 11.55689f, 14.41201f, 15.9332f);
	VOLUME::_0x39816F6F94F385AD(iLocal_13, 2040.947f, -887.8384f, 44.706f, 0f, 0f, 2.644386f, 138.1747f, 21.08713f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2099.362f, -835.4238f, 44.706f, 0f, 0f, 38.97644f, 8.372574f, 17.93935f, 18.54283f);
	VOLUME::_0x39816F6F94F385AD(iLocal_13, 2106.672f, -874.8062f, 44.706f, 0f, 0f, 173.7751f, 15.22373f, 31.89837f, 18.54283f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2065.472f, -851.4658f, 42.55719f, 0f, 0f, 0f, 19.02366f, 13.64085f, 16.67954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2019.272f, -774.1213f, 41.40026f, 0f, 0f, 37.13808f, 9.83179f, 10.20259f, 16.67954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2013.173f, -774.8469f, 41.40026f, 0f, 0f, 37.13808f, 4.350712f, 4.302257f, 16.67954f);
		iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_14, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2076.114f, -860.0187f, 44.706f, 0f, 0f, 0f, 36.89741f, 35.70032f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2050.994f, -804.7936f, 44.706f, 0f, 0f, 39.76539f, 36.89741f, 57.33146f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2012.807f, -764.5793f, 44.706f, 0f, 0f, 39.76538f, 10.22549f, 13.5511f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1998.531f, -853.2407f, 44.706f, 0f, 0f, 0f, 45.40543f, 35.23671f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2099.362f, -835.4238f, 44.706f, 0f, 0f, 38.97644f, 6.372574f, 15.93935f, 16.54283f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_14);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2014.568f, -844.9777f, 44.706f, 0f, 0f, 0f, 68.19901f, 49.26501f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1968.462f, -859.535f, 44.706f, 0f, 0f, -0.583632f, 29.24165f, 50.24955f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1994.893f, -813.8496f, 44.706f, 0f, 0f, 32.02662f, 47.55339f, 26.7922f, 15.9332f);
		VOLUME::_0x39816F6F94F385AD(iLocal_15, 2040.947f, -887.8384f, 44.706f, 0f, 0f, 2.644384f, 136.6854f, 19.40016f, 15.9332f);
		VOLUME::_0x39816F6F94F385AD(iLocal_15, 2106.672f, -874.8062f, 44.706f, 0f, 0f, 173.7751f, 13.22373f, 29.89837f, 16.54283f);
		sLocal_17 = "ORANGE_PLANTATION";
		LAW::_CREATE_GUARD_ZONE(sLocal_17);
		LAW::_0x8C598A930F471938(sLocal_17, iLocal_13);
		LAW::_0x35815F372D43E1E5(sLocal_17, iLocal_14);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_17, iLocal_15);
		LAW::_0xA1B0E6301E2E02A6(sLocal_17, iLocal_16);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_17, 2066.902f, -851.1766f, 43.3946f);
		LAW::_0xA8A74AA79FB67159(sLocal_17, iLocal_13);
	}
	return true;
}

bool func_40(int iParam0)
{
	if (!bLocal_21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_19))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_19, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iLocal_19, "HAS_VOICE"))
				{
					DECORATOR::DECOR_SET_BOOL(iLocal_19, "HAS_VOICE", true);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_19, "0941_A_M_M_Foreman_White_AVOID_01");
					bLocal_21 = true;
				}
			}
		}
		else
		{
			iLocal_19 = aggregate_func_1988(651);
		}
	}
	if (!bLocal_20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_18))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_18))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_18, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iLocal_18, "HAS_VOICE"))
				{
					DECORATOR::DECOR_SET_BOOL(iLocal_18, "HAS_VOICE", true);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_18, "0946_A_M_M_Guard_White_AGGRESSIVE_01");
					bLocal_20 = true;
				}
			}
		}
		else
		{
			iLocal_18 = aggregate_func_1988(652);
		}
	}
	return true;
}

void func_78(int iParam0)
{
	if (aggregate_func_402(iLocal_19, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iLocal_19, "HAS_VOICE", false);
	}
	if (aggregate_func_402(iLocal_18, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iLocal_18, "HAS_VOICE", false);
	}
	LAW::_REMOVE_GUARD_ZONE(sLocal_17);
	aggregate_func_2017(iLocal_14);
	aggregate_func_2017(iLocal_16);
}

