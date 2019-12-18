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
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	if (aggregate_func_4251() != -1)
	{
		iLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1250.937f, -607.247f, 101.083f, 0f, 0f, 34.99998f, 4.887809f, 3.929512f, 3.710694f, "m_volBGV_OldManJones");
		iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1250.937f, -607.247f, 101.083f, 0f, 0f, 34.99998f, 4.887809f, 3.929512f, 3.710694f, "m_volBGV_OldManJonesPrompt");
	}
	return true;
}

void func_29(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_348(35, iLocal_21, iParam0, iLocal_22, 0, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
		aggregate_func_1218(35, 0);
	}
}

