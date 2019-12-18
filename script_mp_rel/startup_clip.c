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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::_GAME_TRANSITION_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::_0x57C6525034E76EB0();
	BUILTIN::WAIT(1000);
	if (!REPLAY::_0x9EEB007317FA3B9C())
	{
		if (REPLAY::_0xB3F2829907403C13())
		{
		}
	}
	if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !NETWORK::_0xFC4165C9165C166F())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		aggregate_func_828(0);
		aggregate_func_8631();
	}
	while (bVar0)
	{
		bVar0 = REPLAY::_0x9EEB007317FA3B9C();
		if (!bVar0)
		{
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	aggregate_func_828(0);
	aggregate_func_8631();
	if (REPLAY::_0x9EEB007317FA3B9C())
	{
		REPLAY::_0xCEEC64BD27A59312(1);
	}
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	aggregate_func_7013(0, -1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

