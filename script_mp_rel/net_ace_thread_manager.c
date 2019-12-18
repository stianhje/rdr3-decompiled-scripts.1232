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
#endregion

void __EntryFunction__()
{
	char* sVar0;
	var uVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1();
	sVar0 = "net_ambient_content_evaluator";
	aggregate_func_4480(&uVar1);
	while (!aggregate_func_523(0, 0))
	{
		if (func_4())
		{
			func_5(Global_1196787, sVar0);
		}
		else
		{
			func_6(Global_1196787, sVar0, &uVar1);
		}
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_6(Global_1196787, sVar0, &uVar1);
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
}

void func_1()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	aggregate_func_306();
	if (aggregate_func_2318())
	{
		aggregate_func_2819();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

bool func_4()
{
	return !aggregate_func_2889(aggregate_func_7387(), 0, 0);
}

void func_5(var uParam0, char* sParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
	{
		return;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam1);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam1))
	{
		*uParam0 = SCRIPTS::START_NEW_SCRIPT(sParam1, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam1);
		return;
	}
	return;
}

void func_6(var uParam0, char* sParam1, var uParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sParam1, -1, true, 0))
	{
		return;
	}
	if (aggregate_func_4628(uParam2, 30000))
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
		{
			SCRIPTS::_0x7DE4643157AD646C(*uParam0);
		}
		aggregate_func_4480(uParam2);
	}
}

