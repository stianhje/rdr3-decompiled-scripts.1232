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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_13 = ((*Global_1887327)[131 /*36*/])->f_5;
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Ridgewood - m_volHorsePens");
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, -4793.275f, -2684.797f, -12.52667f, 0f, 0f, 2.828959f, 21.53875f, 14.61882f, 2.730403f);
	VOLUME::_0x39816F6F94F385AD(iLocal_14, -4827.138f, -2733.15f, -13.91682f, 0f, 0f, 53.75946f, 20.16043f, 53.09112f, 4.69964f);
	return true;
}

void func_30(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	aggregate.annesburg.func_67(883, iLocal_14, 1);
	aggregate.annesburg.func_67(884, iLocal_14, 0);
	aggregate.annesburg.func_67(885, iLocal_14, 0);
	aggregate.annesburg.func_67(886, iLocal_14, 0);
}

