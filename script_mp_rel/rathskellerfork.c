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
	char* sLocal_14 = NULL;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5201.7f, -2134.3f, -13.7f, 0f, 0f, 0f, 116.361f, 111.159f, 70f, "m_volRathskellerFork");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rathskeller Fork - m_volRancherInner Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5193.958f, -2150.221f, 14.60039f, 0f, 0f, 43.94339f, 30.9764f, 20.35678f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5183.694f, -2097.742f, 14.60039f, 0f, 0f, 44.16594f, 20.21152f, 34.85038f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5158.286f, -2115.092f, 14.60039f, 0f, 0f, 47.64177f, 8.714133f, 1.633199f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5230.49f, -2124.006f, 14.60039f, 0f, 0f, 44.16594f, 15.32629f, 8.306676f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5157.303f, -2119.695f, 14.60039f, 0f, 0f, 44.16594f, 12.39145f, 8.306676f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5213.393f, -2110.535f, 14.60039f, 0f, 0f, 44.16594f, 34.53635f, 13.98279f, 20.57744f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rathskeller Fork - m_volRancherWarn Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0x39816F6F94F385AD(iLocal_15, -67.73256f, -399.212f, 72.24845f, 0f, 0f, 52.56716f, 42.4006f, 47.27523f, 14.85572f);
		VOLUME::_0x39816F6F94F385AD(iLocal_15, -5186.615f, -2154.339f, 14.60039f, 0f, 0f, 46.12168f, 36.16204f, 4.894577f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_15, -5194.527f, -2122.047f, 14.60039f, 0f, 0f, 43.94178f, 70.70334f, 56.27375f, 20.57744f);
		sLocal_14 = "RATHSKELLER_FORK";
		LAW::_CREATE_GUARD_ZONE(sLocal_14);
		LAW::_0x8C598A930F471938(sLocal_14, iLocal_13);
		LAW::_0x35815F372D43E1E5(sLocal_14, iLocal_16);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_14, iLocal_15);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_14, -5194.81f, -2107.68f, 11.39f);
		LAW::_0xA8A74AA79FB67159(sLocal_14, iLocal_15);
	}
	return true;
}

void func_30(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(777, iLocal_15, 1);
	aggregate.annesburg.func_67(778, iLocal_15, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_15, 2, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, aggregate.aberdeenpigfarm.func_120(778));
}

void func_79(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_14);
}

