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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[116 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 26);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Manzanita - m_volGeneralStore Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1987.5f, -1619.5f, 119f, 0f, 0f, 108f, 13f, 7.5f, 3.3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1993.957f, -1616.896f, 119f, 0f, 0f, 108f, 4f, 3.2f, 3.3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1993.276f, -1625.02f, 118.1032f, 0f, 0f, 18.70994f, 6.771215f, 10.15464f, 4.094861f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1979.72f, -1641.667f, 118.1032f, 0f, 0f, 18.70994f, 18.24065f, 21.29219f, 4.094861f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Manzanita - m_volArtistOwner Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1978.791f, -1668.522f, 118.1032f, 0f, 0f, 144.4009f, 7.96674f, 8.658496f, 4.094861f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1975.129f, -1655.416f, 118.1032f, 0f, 0f, 106.1859f, 3.915041f, 4.647958f, 4.094861f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10106);
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
	}
	return true;
}

void func_26()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_29(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
	}
}

void func_30(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(721, iLocal_22, 1);
	aggregate.annesburg.func_67(722, iLocal_22, 0);
	aggregate.annesburg.func_67(723, iLocal_22, 0);
	aggregate.annesburg.func_67(724, iLocal_22, 0);
	aggregate.annesburg.func_67(719, iLocal_23, 1);
	aggregate.annesburg.func_67(720, iLocal_23, 0);
}

