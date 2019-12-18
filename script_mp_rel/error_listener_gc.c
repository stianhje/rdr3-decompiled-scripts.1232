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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	SCRIPTS::TERMINATE_THIS_THREAD();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || !func_1(iScriptParam_0))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x7AC752103856FB20(true);
	iLocal_13 = iScriptParam_0;
	bVar0 = false;
	while (!bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
			bVar0 = SCRIPTS::_0x9E4EF615E307FBBE();
		}
		else
		{
			bVar0 = aggregate_func_578(1, 1);
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0)
{
	switch (iParam0)
	{
		case -992702923:
		case 397004310:
		case 2004694700:
			return true;
		default:
			break;
	}
	return false;
}

