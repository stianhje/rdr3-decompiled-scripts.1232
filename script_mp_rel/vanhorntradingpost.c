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
	var uLocal_35 = 0;
	bool bLocal_36 = false;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[98 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 23);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3023.974f, 562.0062f, 46.82927f, 0f, 0f, 79.71242f, 12.599f, 9.960065f, 6.735788f, "Van Horn - m_volFence");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3027.401f, 562.4042f, 44.687f, 0f, 0f, 80f, 1.736885f, 1f, 2f, "Van Horn - m_volFencePrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10087);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2986.668f, 572.391f, 44.68746f, 0f, 0f, 80f, 6.513f, 5.709f, 2.553f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2985.922f, 568.154f, 44.68746f, 0f, 0f, 80f, 2.17f, 2.622f, 2.553f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2987.423f, 576.661f, 44.68746f, 0f, 0f, 80f, 2.509f, 2.264f, 2.553f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 2982.536f, 570.44f, 44.68746f, 0f, 0f, 80f, 2.957f, 1.909f, 2.553f);
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 2985.951f, 568.536f, 44.902f, 0f, 0f, 80f, 1.441f, 1.703f, 2.553f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 2987.352f, 576.3314f, 44.90187f, 0f, 0f, -99.75122f, 1.441f, 1.921f, 2.55285f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.637f, 572.4257f, 44.90187f, 0f, 0f, 80f, 6.131599f, 5.291456f, 2.55285f, "Van Horn - m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_24, 10090);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2982.608f, 570.333f, 44.68746f, 0f, 0f, 80f, 3.388f, 2.263f, 2.553f, "Van Horn - m_volPostOfficeMute");
	func_53();
	iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2986.621f, 572.416f, 45.094f, 0f, 0f, 80f, 6.05f, 5.4f, 3f, "Van horn - m_volStationTheft");
	iLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2947.408f, 545.9362f, 50.72883f, 0f, 0f, 0f, 17.35913f, 18.45897f, 4.232503f, "Van Horn- Resident Toughts Guard Volume");
	iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van Horn - m_volHorseShopPen Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2979.276f, 779.6296f, 52.62945f, 0f, 0f, 0f, 40.47127f, 19.50671f, 7.453903f);
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 2985.944f, 797.0881f, 52.62945f, 0f, 0f, 0f, 23.67008f, 19.46324f, 7.453903f);
	aggregate_func_6624(259147332, 1);
	if (aggregate_func_4251() != -1)
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2966.958f, 798.031f, 51.94672f, 0f, 0f, 0f, 13.5283f, 8.991134f, 3.747737f, "VanHorn Horse Shop - m_volHorseShop");
	}
	else
	{
		iLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Vanhorn Horse Shop - m_volHorseShop Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_32, 2967.159f, 798.5253f, 51.745f, 0f, 0f, 0f, 14.3611f, 10.48136f, 4.225f);
		VOLUME::_0x39816F6F94F385AD(iLocal_32, 2970.102f, 792.5105f, 51.65219f, 0f, 0f, 0f, 8.344481f, 5.59843f, 2.959558f);
		iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2959.127f, 795.8362f, 51.00545f, 0f, 0f, 0f, 4.348893f, 4.095809f, 6.315661f, "Vanhorn Horse Shop - m_volHorseShopOutsideDoor");
		aggregate_func_7683(9, iLocal_33);
	}
	return true;
}

void func_16(int iParam0)
{
	aggregate_func_7185(-306246697, 1, 0);
}

bool func_17(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (aggregate_func_4251() == -1)
	{
		HUD::_TEXT_DATABASE_REQUEST("SCVHAUD");
		HUD::_TEXT_DATABASE_REQUEST("VANRGAU");
		HUD::_TEXT_DATABASE_REQUEST("REDDVHT");
		HUD::_TEXT_DATABASE_REQUEST("VHTRDAU");
		HUD::_TEXT_DATABASE_REQUEST("RESFVHT");
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCVHAUD"))
		{
			return false;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("VANRGAU"))
		{
			return false;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("REDDVHT"))
		{
			return false;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("VHTRDAU"))
		{
			return false;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("RESFVHT"))
		{
			return false;
		}
	}
	return iVar0;
}

void func_27()
{
	aggregate_func_7674(0, 2946.662f, 523.323f, 46.02f, iLocal_28, 98);
}

void func_29(int iParam0)
{
	aggregate_func_348(4, iLocal_22, iParam0, iLocal_23, 0, 44, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(4, -919742804, 0, 0);
	aggregate_func_7096(4, -1653762302, 0, 0);
	aggregate_func_7096(4, 877945562, 0, 0);
	aggregate_func_6609(4, 8192);
	aggregate_func_1218(4, 0);
	aggregate_func_348(9, iLocal_32, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	if (!aggregate_func_2820() && aggregate_func_4442())
	{
		aggregate_func_7096(9, 1471789970, 0, 0);
		aggregate_func_7096(9, -2124017858, 0, 0);
	}
	else
	{
		aggregate_func_7096(9, 1471789970, -1f, 1);
		aggregate_func_7096(9, -2124017858, 1f, 1);
	}
	aggregate_func_6609(9, 536870912);
	aggregate_func_6609(9, 16384);
	aggregate_func_6609(9, 32768);
	aggregate_func_6609(9, 1);
	aggregate_func_6609(9, 8388608);
	aggregate_func_6609(9, 8192);
	aggregate_func_6609(9, 4);
	aggregate_func_6609(9, 16777216);
	aggregate_func_6609(9, 67108864);
	aggregate_func_348(2, iLocal_24, iParam0, iLocal_25, iLocal_26, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_1218(2, 0);
	aggregate_func_228();
	aggregate_func_1343(94);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_2366(453, iLocal_34, 1);
}

void func_37(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return;
	}
	aggregate_func_4538();
	aggregate_func_7655(0, -771890971);
	aggregate_func_7655(3, -1440548693);
	aggregate_func_7655(4, -1440548693);
}

bool func_40(int iParam0)
{
	func_77();
	aggregate_func_386(&uLocal_37, &iLocal_38, 3018.27f, 558.1332f, 44.5092f, 2136683606);
	if (aggregate_func_6721(&bLocal_36))
	{
		if (bLocal_36)
		{
			aggregate_func_1155(1477864640, 1, 0, 0, 0, 0, 0, 0);
			aggregate_func_6624(1673476194, 1);
			aggregate_func_6624(17298161, 1);
		}
	}
	return false;
}

void func_53()
{
	iLocal_28 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
	VOLUME::_0x39816F6F94F385AD(iLocal_28, 2939.048f, 523.346f, 45.61858f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Van horn - m_volSaloonTheft");
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 2946.748f, 523.316f, 45.072f, 0f, 0f, 80f, 10.1f, 14f, 3.347f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 2939.048f, 523.346f, 45.61858f, 0f, 0f, -180f, 6.016271f, 9.883f, 3.143f);
}

void func_77()
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(VOLUME::_0x7FD78DFD0C5D7B9B(iLocal_31)))
	{
		func_151();
	}
}

void func_97(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		VOLUME::_0x998202B206872672(iLocal_31);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_31);
		VOLUME::_DELETE_VOLUME(iLocal_31);
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("SCVHAUD"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("SCVHAUD"))
		{
			HUD::_TEXT_DATABASE_DELETE("SCVHAUD");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("VANRGAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("VANRGAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("VANRGAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("REDDVHT"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("REDDVHT"))
		{
			HUD::_TEXT_DATABASE_DELETE("REDDVHT");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("VHTRDAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("VHTRDAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("VHTRDAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("RESFVHT"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("RESFVHT"))
		{
			HUD::_TEXT_DATABASE_DELETE("RESFVHT");
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_38))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_38);
	}
	iParam0 = iParam0;
}

void func_151()
{
	aggregate_func_2366(442, iLocal_31, 1);
	aggregate_func_2366(440, iLocal_31, 0);
	aggregate_func_2366(441, iLocal_31, 0);
	aggregate_func_2366(443, iLocal_31, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_31, 0, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, aggregate_func_4452(440));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, aggregate_func_4452(441));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_31, 0, 1, aggregate_func_4452(443));
}

