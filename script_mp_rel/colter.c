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
	bool bLocal_16 = false;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == beaverhollow.__EntryFunction__

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1336.415f, 2442.417f, 307.4014f, 0f, 3.96856f, 32.68665f, 68.62094f, 45.669f, 16.22106f, "Colter - volTown");
	return true;
}

bool func_17(int iParam0)
{
	if (AUDIO::LOAD_STREAM("colter", "es_camp_memory_sounds"))
	{
		iLocal_14 = AUDIO::_0x0556C784FA056628("colter", "es_camp_memory_sounds");
		iLocal_15 = MISC::GET_GAME_TIMER() + 30000;
		return true;
	}
	return false;
}

bool func_40(int iParam0)
{
	if (((aggregate.annesburg.func_142(Global_35, iLocal_13, 1, 0) && iLocal_15 < MISC::GET_GAME_TIMER()) && aggregate.beaverhollow.func_62(aggregate.beaverhollow.func_61())) && aggregate.beaverhollow.func_63(6, 18))
	{
		AUDIO::PLAY_STREAM_FRONTEND(iLocal_14);
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_colter_Endless_Summer", true, true);
		bLocal_16 = true;
		iLocal_15 = MISC::GET_GAME_TIMER() + 30000;
	}
	if (bLocal_16)
	{
		if (!AUDIO::IS_STREAM_PLAYING(iLocal_14))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_colter_Endless_Summer", false, true);
			bLocal_16 = false;
		}
	}
	return true;
}

