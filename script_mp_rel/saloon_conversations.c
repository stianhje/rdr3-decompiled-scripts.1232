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
	struct<2> Local_13 = { 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_2819();
	}
	Local_13 = vScriptParam_0.x;
	Local_13.f_1 = vScriptParam_0.y;
	if (func_2(Local_13.f_1) && func_3(Local_13))
	{
		while (!aggregate_func_2039(1) && !aggregate_func_4297(32768))
		{
			if (func_6(vScriptParam_0.f_2))
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
	}
	aggregate_func_2819();
}

int func_2(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_3(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

bool func_6(vector3 vParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!&Global_1938932->f_5[Local_13.f_1 /*11*/])
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true) > 20f)
			{
				return true;
			}
		}
		if (aggregate_func_4240(&Global_1939168, 4194304))
		{
			return true;
		}
	}
	return false;
}

