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
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	uLocal_18 = ((*Global_1887327)[62 /*36*/])->f_5;
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER(1411.869f, -7032.472f, 71.50774f, 0f, 0f, -25.35288f, 142.4495f, 133.1683f, 45.87774f);
	return true;
}

bool func_40(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_19))
	{
		if (aggregate_func_4312(62, 33554432))
		{
			if (!bLocal_20)
			{
				PATHFIND::_0xF2A2177AC848B3A8(iLocal_19, 0, 1);
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_19, 1, 1);
			bLocal_20 = false;
		}
	}
	return false;
}

