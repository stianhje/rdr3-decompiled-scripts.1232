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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = false;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[121 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 28);
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5507.549f, -2965.196f, -0.228844f, 0f, 0f, 14.50012f, 5.533408f, 8.440951f, 3.311345f, "Tumbleweed - m_volGunsmith");
	iLocal_25 = VOLUME::_CREATE_VOLUME_BOX(-5508.212f, -2964.63f, -0.4536f, 0f, 0f, 15.48608f, 1.15206f, 1.211619f, 2.44214f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX(-5506.212f, -2964.24f, -0.546059f, 0f, 0f, 15.38209f, 1.208323f, 1.559606f, 2.24757f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX(-5508.861f, -2960.149f, -0.730614f, 0f, 0f, 14.06083f, 5.590748f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_23, 10108);
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Armadillo - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -5486.925f, -2936.908f, -0.632f, 0f, 0f, 37.506f, 12.127f, 6.213f, 4.544f);
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -5479.758f, -2933.356f, -0.464321f, 0f, 0f, 37.59521f, 2.825781f, 2.131215f, 1.882721f);
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX(-5487.416f, -2939.017f, -0.416119f, 0f, 0f, 36.36512f, 1.251111f, 3.269273f, 2.026726f);
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX(-5485.543f, -2937.639f, -0.416119f, 0f, 0f, 36.36512f, 2.087f, 2.06f, 2.027f);
	iLocal_29 = VOLUME::_CREATE_VOLUME_BOX(-5492.82f, -2941.371f, -0.730614f, 0f, 0f, 127.4349f, 6.522694f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_27, 10107);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f, "Tumbleweed - m_volBartender");
	iLocal_35 = VOLUME::_CREATE_VOLUME_BOX(-5507.816f, -2947.645f, -1.491075f, 0f, 0f, -17.45158f, 8.984022f, 7.283852f, 4.458558f);
	iLocal_36 = VOLUME::_CREATE_VOLUME_BOX(-5507.615f, -2947.708f, -1.491075f, 0f, 0f, -17.45158f, 1.750185f, 2.572302f, 2.75889f);
	iLocal_37 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5539.533f, -3039.824f, 2.031336f, 0f, 0f, 3.990272f, 17.4913f, 32.03522f, 11.8878f, "Tumbleweed - m_volHorseShopPen");
	iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5602.326f, -2982.253f, 2.901444f, 0f, 0f, 141.0062f, 3.082703f, 10.21471f, 4.224741f, "Tumbleweed - m_volHomeStable");
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.508f, 0f, 0f, 0f, 14.36317f, 12.10584f, 4.473f, "Tumbleweed Horse Shop - m_volHorseShop");
		iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5510.71f, -3044.394f, -1.897282f, 0f, 0f, 0f, 4.170004f, 4.757886f, 3.852559f, "Tumbleweed Horse Shop - m_volHorseShopOutsideDoor");
		aggregate.saintdenis.func_54(9, iLocal_33);
		VOLUME::_0xB469CFD9E065EB99(iLocal_32, 10109);
	}
	else
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.40419f, 0f, 0f, 0f, 14.36317f, 12.10584f, 4.472662f, "Tumbleweed Horse Shop - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_32, 10109);
	}
	iLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - JAIL");
	VOLUME::_0x39816F6F94F385AD(iLocal_38, -5529.713f, -2927.539f, -1.328089f, 0f, 0f, 24.83998f, 6.747131f, 6.870256f, 6.016601f);
	VOLUME::_0x39816F6F94F385AD(iLocal_38, -5534.146f, -2922.72f, -1.771596f, 0f, 0f, 24.83998f, 10.62026f, 7.054735f, 6.016601f);
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_38, 5, 1);
	return true;
}

void func_27()
{
	aggregate.armadillo.func_58(0, -5514.454f, -2910.941f, 0.196263f, iLocal_22, 121);
}

void func_29(int iParam0)
{
	aggregate.annesburg.func_63(3, iLocal_27, iParam0, iLocal_28, iLocal_30, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(3, -460561996, 0, 0);
	aggregate.annesburg.func_66(3, 687453229, 0, 0);
	aggregate.annesburg.func_64(3, 8192);
	aggregate.beechershope.func_59(3, 0);
	aggregate.aberdeenpigfarm.func_115();
	aggregate.blackwater.func_72(105);
	aggregate.annesburg.func_63(6, iLocal_23, iParam0, iLocal_25, iLocal_26, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(6, 1880285656, 0, 0);
	aggregate.beechershope.func_59(6, 0);
	ENTITY::CREATE_MODEL_HIDE(-5479.709f, -2932.554f, -1.3902f, 1f, -1871171322, false);
	aggregate.annesburg.func_63(10, iLocal_35, iParam0, iLocal_36, 0, 460, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(10, 536870912);
	aggregate.beechershope.func_59(10, 0);
	aggregate.annesburg.func_63(9, iLocal_32, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(9, 536870912);
	aggregate.annesburg.func_64(9, 16384);
	aggregate.annesburg.func_64(9, 32768);
	aggregate.annesburg.func_64(9, 1);
	aggregate.annesburg.func_64(9, 8388608);
	aggregate.annesburg.func_64(9, 8192);
	aggregate.annesburg.func_64(9, 4);
	aggregate.annesburg.func_64(9, 16777216);
	aggregate.annesburg.func_64(9, 67108864);
	if (!aggregate.annesburg.func_109() && aggregate.annesburg.func_110())
	{
		aggregate.annesburg.func_66(9, -829158153, 0, 0);
		aggregate.annesburg.func_66(9, 721864151, 0, 0);
	}
	else
	{
		aggregate.annesburg.func_66(9, -829158153, 1f, 1);
		aggregate.annesburg.func_66(9, 721864151, -1f, 1);
	}
}

void func_30(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(339, iLocal_34, 1);
	aggregate.annesburg.func_67(340, iLocal_34, 0);
	aggregate.annesburg.func_67(341, iLocal_37, 1);
	aggregate.annesburg.func_67(369, iLocal_37, 0);
	aggregate.annesburg.func_67(367, iLocal_37, 0);
	aggregate.annesburg.func_67(368, iLocal_37, 0);
}

bool func_40(int iParam0)
{
	if (aggregate.adlerranch.func_61(&bLocal_46))
	{
		if (bLocal_46)
		{
			aggregate.armadillo.func_69(1024322021, 1);
			aggregate.armadillo.func_69(111672606, 1);
		}
	}
	return false;
}

void func_91(int iParam0)
{
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	ENTITY::REMOVE_MODEL_HIDE(-5479.709f, -2932.554f, -1.3902f, 1f, -1871171322, 0);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_31))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_31);
	}
	if (HUD::_0x2C729F2B94CEA911("SCTDAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCTDAUD"))
		{
			HUD::_0xAA03F130A637D923("SCTDAUD");
		}
	}
}

