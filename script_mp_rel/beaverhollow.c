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
	iLocal_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Beaver Hollow - m_volTown Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2345.187f, 1352.787f, 107.6561f, 0.036552f, 0f, 0f, 40.20085f, 40.78676f, 12.88943f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2357.265f, 1391.395f, 109.9775f, 2.692848f, 0f, 0f, 17.41357f, 20.79141f, 16.64382f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2318.457f, 1444.692f, 87.40137f, 179.4571f, 0f, 0f, 51.88874f, 33.18848f, 11.92861f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2347.961f, 1414.832f, 96.40656f, 0.534309f, -14.06188f, -34.73259f, 31.42639f, 14.92058f, 9.380316f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2255.09f, 1458.163f, 93.38544f, 0f, 0f, 0f, 21.93718f, 27.58467f, 4.980723f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 2272.888f, 1487.881f, 103.2379f, 11.51613f, 0f, 0f, 19.99748f, 13.49523f, 3.545758f);
	return true;
}

bool func_17(int iParam0)
{
	if (AUDIO::LOAD_STREAM("beaver_hollow", "es_camp_memory_sounds"))
	{
		iLocal_14 = AUDIO::_0x0556C784FA056628("beaver_hollow", "es_camp_memory_sounds");
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
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_beaver_hollow_Endless_Summer", true, true);
		bLocal_16 = true;
		iLocal_15 = MISC::GET_GAME_TIMER() + 30000;
	}
	if (bLocal_16)
	{
		if (!AUDIO::IS_STREAM_PLAYING(iLocal_14))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_beaver_hollow_Endless_Summer", false, true);
			bLocal_16 = false;
		}
	}
	return true;
}

