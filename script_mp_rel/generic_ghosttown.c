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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(iScriptParam_0);
	uLocal_18 = uLocal_18;
	while (aggregate_func_4546())
	{
		aggregate_func_386(&uLocal_20, &iLocal_21, 3018.27f, 558.1332f, 44.5092f, 2136683606);
		BUILTIN::WAIT(0);
		uLocal_19 = uLocal_19;
	}
	func_4(iScriptParam_0);
	if (aggregate_func_4251() == -1)
	{
	}
	else
	{
		aggregate_func_2819();
	}
}

void func_1(int iParam0)
{
	iParam0 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4(iParam0);
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
	}
}

void func_4(int iParam0)
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200 /* GXTEntry: "Travel" */, 1055032020 /* GXTEntry: "Visited every town" */))
	{
		switch (iParam0)
		{
			case 45:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(aggregate_func_4328(iParam0, 0), 1);
				break;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_21))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_21);
	}
	aggregate_func_4329(iParam0, 4);
	aggregate_func_4329(iParam0, 8);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		aggregate_func_2819();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

