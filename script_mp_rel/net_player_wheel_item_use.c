#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (ScriptParam_0 != -1)
	{
	}
	else
	{
		return;
	}
	iVar0 = 0;
	iVar1 = ScriptParam_0.f_1;
	uVar2 = ScriptParam_0.f_2;
	iVar3 = ScriptParam_0;
	iVar4 = -1;
	if (Global_1070355->f_26843.f_11.f_72 != iVar1)
	{
	}
	else
	{
		iVar4 = Global_1070355->f_26843.f_11.f_71;
		Global_1070355->f_26843.f_11.f_71 = -1;
		Global_1070355->f_26843.f_11.f_72 = 0;
	}
	iVar5 = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	while (!func_1(&iVar5, &iVar1, &iVar0) && func_2(&iVar0, &uVar2, &iVar1, &iVar3, &iVar4, &(ScriptParam_0.f_3)))
	{
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, int iParam1, int iParam2)
{
	if (aggregate_func_523(0, 0))
	{
		return true;
	}
	if (*iParam2 == 2)
	{
		return true;
	}
	return false;
}

bool func_2(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	switch (*iParam0)
	{
		case 0:
			if (func_4(uParam1, iParam2, iParam3, iParam4, uParam5))
			{
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		case 1:
			if (func_5(uParam1, uParam5))
			{
				*iParam0 = 2;
			}
			break;
		case 2:
			func_6(uParam1, uParam5);
			return false;
	}
	return true;
}

bool func_4(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	switch (*uParam0)
	{
		case 0:
			return func_7(iParam1, iParam2, iParam3, uParam4);
		default:
			break;
	}
	return false;
}

bool func_5(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_8(uParam1);
		default:
			break;
	}
	return true;
}

int func_6(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 0:
			return func_9(uParam1);
		default:
			break;
	}
	return 1;
}

int func_7(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (*uParam3)
	{
	}
	else
	{
		func_10(*iParam0, iParam1, iParam2);
	}
	return 1;
}

int func_8(var uParam0)
{
	int iVar0;

	if (*uParam0)
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1273882->f_8, 655598529, 1);
		if (!((iVar0 == 1 || iVar0 == 0) || iVar0 == 6))
		{
			return 1;
		}
	}
	return 0;
}

int func_9(var uParam0)
{
	if (*uParam0)
	{
	}
	return 1;
}

void func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if ((PED::_0x84D0BF2B21862059(Global_1273882->f_8) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_1273882->f_8)) || PED::IS_PED_ON_MOUNT(Global_1273882->f_8))
	{
		iVar0 = 0;
	}
	else if (*iParam2 != -1)
	{
		iVar0 = *iParam2;
	}
	else
	{
		iVar0 = 2;
	}
	TASK::_TASK_EMOTE_2(Global_1273882->f_8, *iParam1, iVar0, iParam0, 0, 1, 0, 0);
}

