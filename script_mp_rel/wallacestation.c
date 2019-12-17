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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1301.158f, 398.81f, 95.65845f, 0f, 0f, 61.99999f, 1.32f, 1.421f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1299.192f, 402.038f, 95.658f, 0f, 0f, 61.99999f, 1.537f, 2.022f, 3f);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, -1301.045f, 400.748f, 95.8015f, 0f, 0f, 61.99999f, 2.173f, 5f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, -1301.309f, 398.458f, 95.8015f, 0f, 0f, 61.99999f, 2.173f, 2.006f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, -1298.877f, 402.661f, 95.8015f, 0f, 0f, 61.99999f, 3.035f, 2.644f, 3f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 10047);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volGeneralShop Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1303.001f, 395.221f, 95.824f, 0f, 0f, 62f, 13.808f, 6.791f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -1296.65f, 397.28f, 95.553f, 0f, 0f, 62f, 3.882f, 2.263f, 2.603f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1303.289f, 394.199f, 95.824f, 0f, 0f, 62f, 2.042f, 1.5f, 3f, "WalStn-m_volGeneralShopPrompt");
	iLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1301.095f, 393.546f, 95.824f, 0f, 0f, 60f, 3.235947f, 2.050864f, 3f, "WalStn-m_volGeneralShopOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_23, 10112);
	return true;
}

void func_29(int iParam0)
{
	aggregate.annesburg.func_63(3, iLocal_23, iParam0, iLocal_24, iLocal_25, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(3, 96424206, 0, 0);
	aggregate.annesburg.func_66(3, 381066979, 0, 0);
	aggregate.annesburg.func_64(3, 8192);
	aggregate.beechershope.func_59(3, 0);
	aggregate.annesburg.func_63(2, iLocal_21, iParam0, iLocal_22, 0, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(2, 96424206, 0, 0);
	aggregate.annesburg.func_66(2, 381066979, 0, 0);
	aggregate.beechershope.func_59(2, 0);
}

void func_30(int iParam0)
{
	aggregate.annesburg.func_67(796, iLocal_21, 1);
	aggregate.annesburg.func_67(797, iLocal_23, 1);
}

void func_36(int iParam0, var uParam1)
{
	aggregate.aguasdulces.func_59(uParam1, iLocal_23, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_21, 10);
}

bool func_40(int iParam0)
{
	aggregate.annesburg.func_79(100, iLocal_21, &uLocal_26);
	return false;
}

