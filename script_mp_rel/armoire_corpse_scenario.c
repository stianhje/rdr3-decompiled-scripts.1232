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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == armoire_corpse_scenario.__EntryFunction__

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	switch (iLocal_23)
	{
		case 0:
			iLocal_23 = 1;
			break;
		case 1:
			iLocal_23 = 2;
			break;
		case 2:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		iLocal_13 = 0;
	}
}

