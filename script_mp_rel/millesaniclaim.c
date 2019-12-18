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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	char* sLocal_23[4] = { NULL, NULL, NULL, NULL };
	bool bLocal_28 = false;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

void func_16(int iParam0)
{
	iParam0 = iParam0;
	iLocal_18[0] = INTERIOR::GET_INTERIOR_AT_COORDS(-1420.278f, 1171.593f, 226.7f);
	iLocal_18[1] = INTERIOR::GET_INTERIOR_AT_COORDS(-1440.127f, 1189.548f, 226.4f);
	iLocal_18[2] = INTERIOR::GET_INTERIOR_AT_COORDS(-1418.762f, 1197.32f, 225.4f);
	iLocal_18[3] = INTERIOR::GET_INTERIOR_AT_COORDS(-1393.259f, 1181.42f, 222.2f);
	sLocal_23[0] = "mil_cave_lights_01";
	sLocal_23[1] = "mil_cave_lights_02";
	sLocal_23[2] = "mil_cave_lights_03";
	sLocal_23[3] = "mil_cave_lights_04";
}

bool func_40(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		func_60();
	}
	if (aggregate_func_6721(&bLocal_28))
	{
		if (bLocal_28)
		{
			aggregate_func_400(-1382959706, 0, 0);
			aggregate_func_400(-76557983, 0, 0);
			OBJECT::_0x1BC47A9DEDC8DF5D(-1382959706, 0);
			OBJECT::_0x1BC47A9DEDC8DF5D(-76557983, 0);
		}
	}
	return false;
}

void func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (INTERIOR::IS_VALID_INTERIOR(&(iLocal_18[iVar0])))
		{
			if (INTERIOR::IS_INTERIOR_READY(&(iLocal_18[iVar0])) && (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != &iLocal_18[iVar0] || CAM::IS_SCREEN_FADED_OUT()))
			{
				if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(&(iLocal_18[iVar0]), &(sLocal_23[iVar0])))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(&(iLocal_18[iVar0]), &(sLocal_23[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
}

