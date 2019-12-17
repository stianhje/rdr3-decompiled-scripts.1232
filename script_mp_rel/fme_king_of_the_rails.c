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
	struct<13> Local_13 = { 0, 0, 0, 0, 255, 255, -1082130432, -1, 0, 0, -1, 0, 0 } ;
	struct<4> Local_26[32];
	struct<8> Local_155 = { 15, 0, 0, 0, 4, 0, 0, 0 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<18> Local_301 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_319 = 255;
	var uLocal_320 = 255;
	var uLocal_321 = 255;
	var uLocal_322 = 255;
	var uLocal_323 = 255;
	var uLocal_324 = 255;
	var uLocal_325 = 255;
	var uLocal_326 = 255;
	var uLocal_327 = 255;
	var uLocal_328 = 255;
	var uLocal_329 = 255;
	var uLocal_330 = 255;
	var uLocal_331 = 255;
	var uLocal_332 = 255;
	var uLocal_333 = 255;
	var uLocal_334 = 255;
	var uLocal_335 = 255;
	var uLocal_336 = 255;
	var uLocal_337 = 255;
	var uLocal_338 = 255;
	var uLocal_339 = 255;
	var uLocal_340 = 255;
	var uLocal_341 = 255;
	var uLocal_342 = 255;
	var uLocal_343 = 255;
	var uLocal_344 = 255;
	var uLocal_345 = 255;
	var uLocal_346 = 255;
	var uLocal_347 = 255;
	var uLocal_348 = 255;
	var uLocal_349 = 255;
	var uLocal_350 = 255;
	struct<6> Local_351[32];
	struct<1422> Local_544 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	float fLocal_1991 = 0f;
	float fLocal_1992 = 0f;
	var uLocal_1993 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == fme_animal_tagging.__EntryFunction__

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 13, 38);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 13, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_26, 129, 39);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_26[0 /*4*/]), 129, "m_clientData");
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
}

void func_64()
{
	int iVar0;

	iVar0 = func_166(Local_544.f_2);
	Local_155.f_127 = { func_167(iVar0) };
	Local_155.f_121 = joaat("gatlingmaxim02");
	Local_155.f_121.f_1 = 5;
	Local_155.f_121.f_2 = { 0f, 1f, 1.1f };
	Local_155.f_121.f_5 = 200f;
	func_168(Local_544.f_2);
}

void func_72()
{
	if (aggregate.fme_king_of_the_rails.func_172(0) && aggregate.fme_king_of_the_rails.func_173(0) != func_174())
	{
		aggregate.fme_king_of_the_rails.func_175(0);
	}
	Local_13.f_10 = MISC::GET_GAME_TIMER();
}

void func_103()
{
	if (aggregate.fme_king_of_the_rails.func_172(0) && aggregate.fme_king_of_the_rails.func_173(0) == func_174())
	{
		aggregate.fme_king_of_the_rails.func_175(0);
	}
}

void func_125()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_155 - 1))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_155[iVar0 /*8*/])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_155[iVar0 /*8*/]));
		}
		func_347(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_155.f_142[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_155.f_142[iVar0]));
		}
		iVar0++;
	}
	aggregate.fme_archery.func_343(func_348(), 1, 1);
	AUDIO::_0x531A78D6BF27014B(func_350());
	AUDIO::_0x9D746964E0CF2C5F(func_351(), func_350());
	if (VOLUME::_0x92A78D0BEDB332A3(Local_155.f_131))
	{
		VOLUME::_0x43F867EF5C463A53(Local_155.f_131);
	}
	aggregate.fme_king_of_the_rails.func_352(1);
	aggregate.fme_king_of_the_rails.func_353();
	func_354(0);
	if (!aggregate.fme_animal_tagging.func_134(4096) && !aggregate.fme_animal_tagging.func_134(16384))
	{
		aggregate.annesburg.func_112(1, 1);
	}
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 5;
		case -473051294:
			return 7;
		case joaat("riggs"):
			return 3;
		case 2046780049:
			return 1;
		case 1010252724:
			return 6;
		case 1597120453:
			return 2;
		case 459833523:
			return 8;
		case 1444539506:
			return 9;
		case joaat("ARMADILLO"):
			return 10;
		case 1166280436:
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_167(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			break;
	}
	return vVar0;
}

void func_168(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x5B7D7BF36D2DE18B(Local_155.f_131, 3239.2f, 1553.6f, 57.9f, 0f, 0f, 0f, 85f, 85f, 85f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 2979.708f, 1312.865f, 44.532f, 0f, 0f, -22f, 50f, 150f, 12f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 2905.422f, 1227.519f, 45.69f, 0f, 0f, 38f, 80f, 20f, 12f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 3000.11f, 1407.337f, 44.532f, 0f, 0f, -22f, 16.157f, 69.086f, 12f);
			break;
		case -473051294:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 1626.381f, 538.097f, 93.935f, 0f, 0f, 13f, 200f, 30f, 30f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 1529.628f, 457.671f, 90.804f, 0f, 0f, 0f, 24f, 150f, 10f);
			break;
		case joaat("riggs"):
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -962.711f, -633.934f, 75.135f, 0f, 0f, -3f, 120f, 24f, 10f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -1042.875f, -616.398f, 77.44f, 0f, 0f, -26f, 55f, 24f, 10f);
			break;
		case 2046780049:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_BOX(1297.591f, -1373.736f, 79.649f, 0f, 0f, -40f, 300f, 24f, 25f);
			break;
		case 1010252724:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 2645f, -1513f, 53f, 0f, 0f, 0f, 255f, 118f, 54f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, 2810f, -1429f, 53f, 0f, 0f, 51f, 215f, 90f, 54f);
			break;
		case 1597120453:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_BOX(-424.097f, -392.14f, 85.137f, 0f, 0f, 27f, 250f, 12f, 15f);
			break;
		case 459833523:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -172.487f, 598.204f, 112.971f, 0f, 0f, 54f, 150f, 30f, 17f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -157.228f, 491.562f, 112.432f, 0f, 0f, -46f, 150f, 25f, 20f);
			break;
		case 1444539506:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -2480.622f, -2453.685f, 61.059f, 0f, 0f, 21f, 30f, 125f, 15f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -2349.058f, -2506.292f, 62.516f, 0f, 0f, 2f, 200f, 25f, 15f);
			break;
		case joaat("ARMADILLO"):
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_BOX(-3752.055f, -2523.257f, -11.843f, 0f, 0f, 3f, 20f, 250f, 12f);
			break;
		case 1166280436:
			Local_155.f_131 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -5239.406f, -3484.593f, -22.045f, 0f, 0f, 0f, 20f, 70f, 15f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -5257.606f, -3420.548f, -21.795f, 0f, 0f, -51f, 80f, 20f, 15f);
			VOLUME::_0x39816F6F94F385AD(Local_155.f_131, -5236f, -3325.329f, -20.139f, 0f, 0f, -51f, 50f, 150f, 15f);
			break;
	}
}

int func_174()
{
	return -343202759;
}

bool func_180()
{
	if (aggregate.fme_king_of_the_rails.func_172(0))
	{
		return true;
	}
	if (!func_402(Local_544.f_2, &(Local_155.f_127), &(Local_13.f_10)))
	{
		return false;
	}
	return true;
}

bool func_184()
{
	if (!aggregate.fme_condor_egg.func_545(1, Local_544.f_1332))
	{
		if (Local_13.f_10 == -1 || (MISC::GET_GAME_TIMER() - Local_13.f_10) > Global_1901929->f_295.f_178)
		{
			if (Local_13.f_10 == -1)
			{
			}
			aggregate.fme_animal_tagging.func_176(8);
		}
		return false;
	}
	else if (!aggregate.fme_animal_tagging.func_134(2))
	{
		if (func_405())
		{
			aggregate.fme_escaped_convicts.func_515(2);
			return true;
		}
	}
	return false;
}

void func_187()
{
	int iVar0;
	int iVar1;

	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (aggregate.barcustomer_interaction.func_42(&(Local_301.f_1)))
			{
				iVar1 = aggregate.fme_animal_tagging.func_181(&(Local_301.f_1));
				if (iVar1 > 45000)
				{
					func_408(6.5f);
					aggregate.fme_escaped_convicts.func_515(32);
					func_409(0, 1);
				}
				else
				{
					func_410();
				}
			}
		}
	}
}

void func_197()
{
	func_419(func_418(0));
	func_420(0);
	func_409(0, 0);
	func_421(0, "MOVING");
	func_408(4f);
}

bool func_201()
{
	func_425();
	func_426();
	func_427();
	func_428();
	return false;
}

bool func_226()
{
	int iVar0;

	iVar0 = 1;
	STREAMING::REQUEST_MODEL(func_447(), false);
	if (!STREAMING::HAS_MODEL_LOADED(func_447()))
	{
		iVar0 = 0;
	}
	if (!AUDIO::_0xD9130842D7226045(func_350(), 0) || !AUDIO::_0xE368E8422C860BA7(func_351(), func_350(), -2))
	{
		iVar0 = 0;
	}
	if (Local_155.f_121 != 0)
	{
		STREAMING::REQUEST_MODEL(Local_155.f_121, false);
		if (!STREAMING::HAS_MODEL_LOADED(Local_155.f_121))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_228()
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (!aggregate.fme_condor_egg.func_545(1, Local_544.f_1332))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_410();
			func_448();
			if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
			{
				fVar1 = func_449(func_166(Local_544.f_2));
				if (fVar1 != 0f)
				{
					VEHICLE::_0x8EC47DD4300BF063(iVar0, fVar1);
				}
				iVar9 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
				func_450();
				iVar10 = 0;
				iVar10 = 0;
				while (iVar10 <= (iVar9 - 1))
				{
					iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iVar0, iVar10);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (func_451(ENTITY::GET_ENTITY_MODEL(iVar2), &vVar3, &vVar6))
						{
							func_452(iVar10, 1);
							vVar6.f_2 = (vVar6.z + (vVar3.z * 0.5f));
							Local_155[iVar10 /*8*/] = VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, vVar3);
							if (VOLUME::_0x92A78D0BEDB332A3(&(Local_155[iVar10 /*8*/])))
							{
								PED::_0x7C00CFC48A782DC0(&(Local_155[iVar10 /*8*/]), iVar2, vVar6, 0f, 0f, 0f, 2, 1);
							}
						}
						(Local_155[iVar10 /*8*/])->f_1 = VOLUME::_0xB3FB80A32BAE3065(0f, 0f, 0f, 0f, 0f, 0f, 30f, 50f, 10f);
						if (VOLUME::_0x92A78D0BEDB332A3((Local_155[iVar10 /*8*/])->f_1))
						{
							PED::_0x7C00CFC48A782DC0((Local_155[iVar10 /*8*/])->f_1, iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
					}
					iVar10++;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_409(0, 1);
				}
				func_453(1);
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_254()
{
	if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332))
	{
		func_516();
	}
	func_517(Local_544.f_2);
	aggregate.fme_king_of_the_rails.func_518(3072, 1);
	func_519();
}

char[] func_313(float fParam0)
{
	if (fParam0 == 1f)
	{
		return MISC::_CREATE_VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_WON", BUILTIN::FLOOR(fParam0));
	}
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_WON_PLURAL", BUILTIN::FLOOR(fParam0));
}

char* func_316(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_FAILED");
}

void func_347(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_624(iParam0, iVar0);
		iVar0++;
	}
}

char* func_348()
{
	return "FM_KotC_END";
}

char* func_350()
{
	return "RDRO_King_Of_The_Rails_Sounds";
}

char* func_351()
{
	return "screen_pulse";
}

void func_354(bool bParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		func_628(NETWORK::NET_TO_VEH(Local_13), bParam0, 16);
	}
}

int func_401(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 2, &uParam1);
	return 1;
}

bool func_402(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	bVar0 = uParam1->f_2;
	if (func_697(func_166(iParam0)))
	{
		bVar0 = !bVar0;
	}
	fVar1 = 350f;
	vVar2 = { VEHICLE::_0xBA958F68031DDBFC(*uParam1, uParam1->f_1) };
	vVar5 = { VEHICLE::_0x35D302397E524939(*uParam1, vVar2, fVar1, !bVar0) };
	if (!aggregate.flow_controller.func_429(0, vVar5))
	{
		*uParam2++;
		if (*uParam2 < 45)
		{
			return false;
		}
	}
	aggregate.fme_king_of_the_rails.func_699(0, func_174(), vVar5, bVar0, Local_544.f_7);
	return true;
}

bool func_405()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (Local_155.f_121 != 0)
	{
		iVar0 = func_700(0, Local_155.f_121.f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) + Local_155.f_121.f_2 };
			fVar4 = (ENTITY::GET_ENTITY_HEADING(iVar0) + Local_155.f_121.f_5);
			if (aggregate.fme_condor_egg.func_999(&Local_13, Local_155.f_121, vVar1, fVar4, 1, 1, 0, 1))
			{
				iVar5 = NETWORK::NET_TO_VEH(Local_13);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iVar5, iVar0, 0, 0, Local_155.f_121.f_2, 0f, 0f, 0f, 0f, 0f, fVar4, -1f, 1, 1, 1, 1, 2, 0, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
				VEHICLE::_0x8878FF3EEE2868A9(iVar5, 0f);
				VEHICLE::_0xBAE0EEDF93F05EAA(iVar5, 0f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar5, 0f);
				VEHICLE::_0x4D15E49764CB328A(iVar5, 0f);
			}
		}
	}
	return true;
}

void func_408(float fParam0)
{
	if (Local_13.f_6 != fParam0)
	{
		Local_13.f_6 = fParam0;
		aggregate.fme_king_of_the_rails.func_702(0, fParam0);
	}
}

int func_409(int iParam0, int iParam1)
{
	struct<13> Var0;

	if (!func_703(iParam0, iParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 6;
		Var0.f_5 = iParam0;
		Var0.f_11 = iParam1;
		return func_401(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

int func_410()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = aggregate.fme_king_of_the_rails.func_407(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
	{
		func_408(0f);
		iVar0 = 0;
	}
	return iVar0;
}

int func_418(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_155;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (aggregate.fme_animal_tagging.func_171(iVar1, 1))
		{
			if (Local_13.f_7 != iVar1)
			{
				MISC::SET_BIT(&iVar3, iVar1);
				if (!MISC::IS_BIT_SET(Local_13.f_8, iVar1) && (bParam0 || func_705(iVar1) == 0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
			}
		}
		iVar1++;
	}
	if (aggregate.fme_king_of_the_rails.func_706(iVar2) == 0)
	{
		iVar2 = iVar3;
		Local_13.f_8 = 0;
	}
	return aggregate.fme_king_of_the_rails.func_707(iVar2, iVar0, 1, 0);
}

void func_419(int iParam0)
{
	Local_13.f_7 = iParam0;
	MISC::SET_BIT(&(Local_13.f_8), iParam0);
}

int func_420(int iParam0)
{
	struct<13> Var0;

	if (!func_708(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 8;
		Var0.f_5 = iParam0;
		return func_401(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

int func_421(int iParam0, char* sParam1)
{
	struct<8> Var0;
	struct<16> Var8;

	Var0 = { aggregate.fme_king_of_the_rails.func_709(sParam1) };
	if (!func_710(iParam0, Var0))
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_4 = 9;
		Var8.f_5 = iParam0;
		Var8.f_15 = { Var0 };
		return func_401(&Var8, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

void func_422()
{
	func_421(0, "STOPPED");
	func_711(0);
	func_408(0f);
}

void func_425()
{
	switch (Local_13.f_11)
	{
		case 0:
			if (!func_712(Local_544.f_2))
			{
				aggregate.fme_animal_tagging.func_212(5);
			}
			else
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			break;
		case 1:
			if (func_714(Local_13.f_12))
			{
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 2:
			func_408(6.5f);
			aggregate.fme_animal_tagging.func_212(3);
			break;
		case 3:
			if (!func_714(Local_13.f_12))
			{
				Local_13.f_12++;
				if (Local_13.f_12 >= func_715(Local_544.f_2))
				{
					Local_13.f_12 = 0;
				}
				aggregate.fme_animal_tagging.func_212(4);
			}
			break;
		case 4:
			func_408(4f);
			if (Local_13.f_12 == 0)
			{
				aggregate.fme_animal_tagging.func_212(5);
			}
			else
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			break;
		case 5:
			break;
	}
}

void func_426()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_716(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_427()
{
	if (!aggregate.fme_animal_tagging.func_134(8))
	{
		return;
	}
	if (Local_544.f_1267 > func_717())
	{
		if (!aggregate.barcustomer_interaction.func_42(&(Local_13.f_1)))
		{
			aggregate.barcustomer_interaction.func_25(&(Local_13.f_1), 0);
		}
		else if (aggregate.fme_animal_tagging.func_181(&(Local_13.f_1)) >= func_718())
		{
			func_419(func_418(1));
			aggregate.fme_animal_tagging.func_1407(&(Local_13.f_1));
			func_421(0, "CROSSING");
		}
	}
	else if (aggregate.barcustomer_interaction.func_42(&(Local_13.f_1)))
	{
		aggregate.fme_animal_tagging.func_290(&(Local_13.f_1));
	}
}

void func_428()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_13.f_4 == 255)
	{
		func_720(func_719());
	}
	else
	{
		bVar0 = false;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_13.f_4))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_4);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && !PED::_0x3AA24CCC0D451379(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_4);
				iVar3 = iVar2;
				if (aggregate.fme_condor_egg.func_545(4, iVar3))
				{
					bVar0 = true;
				}
			}
		}
		if (!bVar0)
		{
			func_720(255);
		}
	}
}

void func_446()
{
	aggregate.fme_archery.func_343(func_348(), 1, 1);
	aggregate.fme_king_of_the_castle.func_603();
	func_626();
	if (Local_155.f_132 >= 0)
	{
		func_347(Local_155.f_132);
	}
}

int func_447()
{
	return 389769403;
}

void func_448()
{
	int iVar0;

	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && VEHICLE::_0xE887BD31D97793F6(iVar0))
		{
			func_711(0);
			aggregate.fme_escaped_convicts.func_515(32);
		}
	}
}

float func_449(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 150f;
		default:
			break;
	}
	return 0f;
}

int func_450()
{
	int iVar0;
	int iVar1;

	if (aggregate.fme_condor_egg.func_545(16, Local_544.f_1332))
	{
		return 1;
	}
	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = VEHICLE::_0x2963B5C1637E8A27(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 263, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 245, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 17, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 18, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 19, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 6, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 310, false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
			PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
			PED::_0xAE6004120C18DF97(iVar1, 0, false);
			ENTITY::SET_ENTITY_PROOFS(iVar1, 159, false);
		}
		PED::SET_PED_CAN_RAGDOLL(iVar1, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar1, 524369);
		PED::SET_PED_CONFIG_FLAG(iVar1, 2, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, 1609284507);
		func_453(16);
	}
	return 1;
}

bool func_451(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == joaat("privateflatcar01x"))
	{
		*uParam1 = { 3.758523f, 15.58612f, 3.16091f };
		*uParam2 = { 0f, 0f, 1f };
		return true;
	}
	return false;
}

void func_452(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((Local_155[iParam0 /*8*/])->f_2, iParam1))
	{
		aggregate.bandana.func_26(&((Local_155[iParam0 /*8*/])->f_2), iParam1);
	}
}

void func_453(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(&(Local_26[Local_544.f_1332 /*4*/]), iParam0))
	{
		aggregate.bandana.func_26(Local_26[Local_544.f_1332 /*4*/], iParam0);
	}
}

bool func_468(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_544.f_1288 == 0 || !aggregate.fishing_core.func_107(Local_544.f_1288))
	{
		aggregate.fme_animal_tagging.func_345();
	}
	if (iParam0 >= 5 && (aggregate.fishing_core.func_107(Local_544.f_1287) && !bParam3))
	{
		aggregate.fme_animal_tagging.func_345();
		return false;
	}
	if (Local_544.f_1266 == 5 && iParam0 >= 5)
	{
		return false;
	}
	if (Local_544.f_1266 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			aggregate.fme_animal_tagging.func_345();
		}
		else
		{
			Local_544.f_1288 = aggregate.fme_animal_tagging.func_684(sParam1, iParam2, 0, 0, 1);
		}
		Local_544.f_1266 = iParam0;
		return true;
	}
	return false;
}

void func_516()
{
	int iVar0;

	if (!MAP::DOES_BLIP_EXIST(Local_155.f_140))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		Local_155.f_140 = MAP::_0x23F74C2FDA6E7C61(-399496385, iVar0);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_544.f_1325))
	{
		if ((Local_13.f_7 >= 0 && VOLUME::_0x92A78D0BEDB332A3(&(Local_155[Local_13.f_7 /*8*/]))) && !MAP::DOES_BLIP_EXIST(Local_544.f_1326))
		{
			Local_544.f_1325 = MAP::_0xA6EF0C54A3443E70(1259054292, &(Local_155[Local_13.f_7 /*8*/]));
			MAP::_0x662D364ABF16DE2F(Local_544.f_1325, 453264060);
			MAP::_0x662D364ABF16DE2F(Local_544.f_1325, 231194138);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_544.f_1325, "FME_KOTR_BLIP_NAME");
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_544.f_1326))
	{
		MAP::REMOVE_BLIP(&(Local_544.f_1325));
	}
}

void func_517(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(2773.655f, 2218.06f, 161.089f, 0f, 0f, -26f, 100f, 35f, 13f);
			Local_155.f_142[1] = VOLUME::_CREATE_VOLUME_BOX(2125.702f, 1887.152f, 191.012f, 0f, 0f, 34f, 450f, 55f, 40f);
			break;
		case -473051294:
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(1731.612f, -929.858f, 46.822f, 0f, 0f, -33f, 440f, 90f, 30f);
			Local_155.f_142[1] = VOLUME::_CREATE_VOLUME_BOX(2252.933f, -1325.254f, 49.096f, 0f, 0f, -38f, 350f, 58f, 20f);
			break;
		case joaat("riggs"):
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(-1432.634f, 210.63f, 102.948f, 0f, 0f, 74f, 400f, 200f, 40f);
			Local_155.f_142[1] = VOLUME::_CREATE_VOLUME_BOX(-1075.187f, 598.102f, 97.363f, 0f, 0f, 33f, 100f, 40f, 20f);
			Local_155.f_142[2] = VOLUME::_CREATE_VOLUME_BOX(-721.749f, 914.8f, 120.517f, 0f, 0f, 50f, 200f, 30f, 34f);
			break;
		case 2046780049:
			break;
		case 1010252724:
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(2691.35f, -319.931f, 43.45f, 0f, 0f, 69f, 250f, 40f, 20f);
			break;
		case 1597120453:
			break;
		case 459833523:
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(720.001f, 718.715f, 116.645f, 0f, 0f, 15f, 170f, 19f, 10f);
			break;
		case 1444539506:
			Local_155.f_142[0] = VOLUME::_CREATE_VOLUME_BOX(-3156.595f, -1906.639f, 71.2f, 0f, 0f, -22f, 650f, 40f, 50f);
			Local_155.f_142[1] = VOLUME::_CREATE_VOLUME_BOX(-3724.575f, -2195.066f, -8.309f, 0f, 0f, -96f, 170f, 50f, 30f);
			break;
		case joaat("ARMADILLO"):
			break;
		case 1166280436:
			break;
	}
}

void func_519()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		aggregate.fme_animal_tagging.func_34(vVar1);
	}
}

char* func_530(int iParam0, bool bParam1, bool bParam2)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		*bParam1 = 0;
		return "";
	}
	*bParam1 = 1;
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTR_HELP_CONTENT_RULES", iParam0);
}

void func_547()
{
	if (Local_13.f_7 < 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&((Local_155[Local_13.f_7 /*8*/])->f_3[Local_155.f_133])))
	{
		func_822(Local_13.f_7, Local_155.f_133);
	}
	else
	{
		func_823(Local_13.f_7, Local_155.f_133);
	}
	Local_155.f_133++;
	if (Local_155.f_133 >= 4)
	{
		Local_155.f_133 = 0;
	}
}

void func_548()
{
	if (Local_155.f_132 != Local_13.f_7)
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			MAP::REMOVE_BLIP(&(Local_544.f_1325));
		}
		if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332))
		{
			if (Local_155.f_132 >= 0)
			{
				func_347(Local_155.f_132);
			}
		}
		if (Local_155.f_132 >= 0)
		{
			if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332) && !aggregate.fishing_core.func_107(Local_544.f_1287))
			{
				Local_544.f_1291 = aggregate.fme_animal_tagging.func_499(MISC::_CREATE_VAR_STRING(2, "FME_KOTR_GAME_UPDATE_MOVED_TITLE"), joaat("COLOR_WHITE"));
			}
			aggregate.fme_escaped_convicts.func_888(4);
		}
		func_825(Local_13.f_7);
	}
}

void func_549()
{
	if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332))
	{
		func_354(0);
	}
	else
	{
		func_354(1);
	}
}

void func_550()
{
	bool bVar0;

	bVar0 = false;
	if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (((Local_13.f_7 >= 0 && VOLUME::_0x92A78D0BEDB332A3(&(Local_155[Local_13.f_7 /*8*/]))) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_155[Local_13.f_7 /*8*/]), false, 0)) && !PED::_0x3AA24CCC0D451379(Global_35))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_453(4);
		if (!aggregate.barcustomer_interaction.func_42(&((Local_26[Local_544.f_1332 /*4*/])->f_1)))
		{
			aggregate.fme_animal_tagging.func_1407(&((Local_26[Local_544.f_1332 /*4*/])->f_1));
		}
	}
	else
	{
		func_826(4);
		if (aggregate.barcustomer_interaction.func_42(&((Local_26[Local_544.f_1332 /*4*/])->f_1)))
		{
			aggregate.fme_animal_tagging.func_290(&((Local_26[Local_544.f_1332 /*4*/])->f_1));
		}
	}
}

void func_551()
{
	if ((Local_13.f_4 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4)) && (Local_13.f_4 == PLAYER::PLAYER_ID() || ((_NAMESPACE26::_0x81FB74C83C2ED69F(Local_13.f_4) && aggregate.fme_condor_egg.func_545(4, Local_544.f_1332)) && !aggregate.fme_dead_drop.func_799())))
	{
		func_828();
	}
	else
	{
		func_829();
	}
}

void func_552()
{
	if (aggregate.fme_animal_tagging.func_152(Local_544.f_1332))
	{
		func_830();
		func_516();
		func_831();
		func_832();
		func_833();
	}
	else
	{
		aggregate.fme_king_of_the_rails.func_353();
	}
}

bool func_568(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	float fVar6;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar4 = VEHICLE::_0x3C9628A811CBD724(iVar0);
	uVar5 = VEHICLE::_0x85D39F5E3B6D7EB0(vVar1);
	fVar6 = 15f;
	*uParam0 = { VEHICLE::_0x35D302397E524939(uVar5, vVar1, fVar6, bVar4) };
	if (aggregate.annesburg.func_121(*uParam0))
	{
		return false;
	}
	*fParam1 = aggregate.fishing_core.func_492(vVar1, *uParam0, 1);
	*iParam2 = 0;
	return true;
}

bool func_592()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 16);
		return false;
	}
	return true;
}

void func_624(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&((Local_155[iParam0 /*8*/])->f_3[iParam1])))
	{
		aggregate.fme_animal_tagging.func_638(ENTITY::GET_ENTITY_COORDS(&((Local_155[iParam0 /*8*/])->f_3[iParam1]), true, false), 1065353216 /* Float: 1f */);
		OBJECT::DELETE_OBJECT((Local_155[iParam0 /*8*/])->f_3[iParam1]);
	}
}

void func_626()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		aggregate.fme_king_of_the_castle.func_864(iVar0);
		iVar0++;
	}
	if (MAP::DOES_BLIP_EXIST(Local_155.f_140))
	{
		MAP::REMOVE_BLIP(&(Local_155.f_140));
	}
}

void func_628(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (aggregate.fme_animal_tagging.func_134(iParam2))
			{
				return;
			}
			else
			{
				aggregate.fme_escaped_convicts.func_515(iParam2);
			}
		}
		else if (!aggregate.fme_animal_tagging.func_134(iParam2))
		{
			return;
		}
		else
		{
			aggregate.fme_escaped_convicts.func_888(iParam2);
		}
		VEHICLE::_0x63DC1F22C903B709(iParam0, bParam1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, PLAYER::PLAYER_ID(), bParam1);
	}
}

bool func_697(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_700(int iParam0, int iParam1)
{
	return &((Global_1130823->f_2[iParam0 /*41*/])->f_10[iParam1 /*2*/]);
}

bool func_703(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0x4182C037AA1F0091(iVar0, iParam1);
	return true;
}

int func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && func_1002(PLAYER::GET_PLAYER_PED(iVar1), 0, iParam0))
		{
			iVar0++;
		}
		iVar2++;
	}
	return iVar0;
}

bool func_708(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0x787E43477746876F(iVar0);
	aggregate.fme_king_of_the_rails.func_1004(iParam0, 8);
	return true;
}

bool func_710(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0xCFE122EC635CC2B2(iVar0, &uParam1, 1, 0);
	return true;
}

int func_711(int iParam0)
{
	struct<13> Var0;

	if (!func_1005(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 7;
		Var0.f_5 = iParam0;
		return func_401(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

bool func_712(int iParam0)
{
	switch (iParam0)
	{
		case -473051294:
		case joaat("riggs"):
		case 7359335:
		case 459833523:
		case 1010252724:
		case 1444539506:
			return true;
		case joaat("ARMADILLO"):
		case 1166280436:
		case 1597120453:
		case 2046780049:
			return false;
		default:
			break;
	}
	return false;
}

bool func_714(int iParam0)
{
	int iVar0;

	if (!func_712(Local_544.f_2))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_155.f_142[iParam0])))
	{
		return false;
	}
	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, &(Local_155.f_142[iParam0]), true, 0))
	{
		return true;
	}
	return false;
}

int func_715(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 7359335:
			iVar0 = 2;
			break;
		case -473051294:
			iVar0 = 2;
			break;
		case joaat("riggs"):
			iVar0 = 3;
			break;
		case 2046780049:
			iVar0 = 0;
			break;
		case 1010252724:
			iVar0 = 1;
			break;
		case 1597120453:
			iVar0 = 0;
			break;
		case 459833523:
			iVar0 = 1;
			break;
		case 1444539506:
			iVar0 = 2;
			break;
		case joaat("ARMADILLO"):
			iVar0 = 0;
			break;
		case 1166280436:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 3)
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_716(int iParam0)
{
	struct<15> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!((Var0.f_3 || Var0.f_13) || Var0.f_14))
	{
		return;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar31) || !PED::IS_PED_A_PLAYER(iVar31))
	{
		return;
	}
	iVar32 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32) || iVar32 != Local_13.f_4)
	{
		return;
	}
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar33) || !PED::IS_PED_A_PLAYER(iVar33))
	{
		return;
	}
	iVar34 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar33);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar34))
	{
		return;
	}
	iVar35 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar34);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar35))
	{
		return;
	}
	if (!aggregate.fme_condor_egg.func_545(4, iVar35))
	{
		return;
	}
	func_1006(iVar34);
}

int func_717()
{
	return 20000;
}

int func_718()
{
	return 75000;
}

int func_719()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 255;
	if (Local_13.f_5 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_5))
	{
		iVar0 = Local_13.f_5;
		func_1006(255);
	}
	else
	{
		iVar6 = 0;
		while (iVar6 <= 31)
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar6);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && aggregate.fme_condor_egg.func_545(4, iVar6))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0x3AA24CCC0D451379(iVar3))
				{
					iVar4 = aggregate.fme_animal_tagging.func_181(&((Local_26[iVar6 /*4*/])->f_1));
					if (iVar4 > iVar5)
					{
						iVar5 = iVar4;
						iVar0 = iVar2;
					}
				}
			}
			iVar6++;
		}
	}
	return iVar0;
}

void func_720(int iParam0)
{
	if (Local_13.f_4 != iParam0)
	{
		if (iParam0 == 255)
		{
		}
		Local_13.f_4 = iParam0;
		if (!aggregate.fme_animal_tagging.func_134(8))
		{
			aggregate.fme_escaped_convicts.func_515(8);
		}
	}
}

void func_760(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	int iVar19;

	if (VOLUME::_0x92A78D0BEDB332A3(Local_155.f_131))
	{
		NETWORK::_0x405DDEFB1F531B18(Local_155.f_131, false, 0, 0);
	}
	if (Local_155.f_132 < 0)
	{
		return;
	}
	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar2 = func_700(0, Local_155.f_132);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar1 = iVar2;
	}
	fVar3 = (fParam0 * 0.1f);
	if (fVar3 > uParam1->f_17)
	{
		fVar3 = uParam1->f_17;
	}
	iVar7 = func_1047(0);
	iVar8 = func_700(0, (iVar7 - 1));
	if (ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar8, true, false) };
	}
	else
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	vVar9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar8) };
	vVar12 = { vVar4 - vVar9 * FtoV((fParam0 * 0.5f)) };
	vVar15 = { VEHICLE::_0x6DE03BCC15E81710(vVar12) };
	uParam1->f_17.f_6 = { vVar15 };
	uParam1->f_17 = { fVar3, fVar3, uParam1->f_17.f_2 };
	uParam1->f_6.f_6 = { vVar15 };
	uParam1->f_4 = iVar1;
	uParam1->f_5 = 3;
	uParam2->f_6 = { vVar15 };
	uParam2->f_4 = iVar1;
	uParam2->f_5 = 3;
	aggregate.annesburg.func_182(93);
	iVar18 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
	iVar19 = 0;
	iVar19 = 0;
	while (iVar19 <= (iVar18 - 1))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_155[iVar19 /*8*/])->f_1))
		{
			NETWORK::_0x405DDEFB1F531B18((Local_155[iVar19 /*8*/])->f_1, false, 0, 0);
		}
		iVar19++;
	}
}

int func_822(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	(Local_155[iParam0 /*8*/])->f_3[iParam1] = OBJECT::CREATE_OBJECT(func_447(), aggregate.fme_challenges.func_1469(), false, false, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(&((Local_155[iParam0 /*8*/])->f_3[iParam1])))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(&((Local_155[iParam0 /*8*/])->f_3[iParam1]), true);
		ENTITY::SET_ENTITY_COLLISION(&((Local_155[iParam0 /*8*/])->f_3[iParam1]), false, false);
		iVar0 = 1;
		if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
		{
			bVar1 = true;
		}
		else
		{
			if (Local_13.f_4 == PLAYER::PLAYER_ID())
			{
				iVar2 = 1;
			}
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(Local_13.f_4) && !aggregate.fme_dead_drop.func_799())
			{
				iVar3 = 1;
			}
			else
			{
				bVar4 = true;
			}
		}
		if (bVar1)
		{
			iVar0 = 8;
		}
		else if (iVar2 || iVar3)
		{
			iVar0 = 2;
		}
		else if (bVar4)
		{
			iVar0 = 0;
		}
		OBJECT::_SET_OBJECT_TEXTURE_VARIATION(&((Local_155[iParam0 /*8*/])->f_3[iParam1]), iVar0);
		ENTITY::_0xA91E6CF94404E8C9(&((Local_155[iParam0 /*8*/])->f_3[iParam1]));
		func_823(iParam0, iParam1);
		aggregate.fme_animal_tagging.func_638(ENTITY::GET_ENTITY_COORDS(&((Local_155[iParam0 /*8*/])->f_3[iParam1]), true, false), 1065353216 /* Float: 1f */);
	}
	return 1;
}

void func_823(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;

	iVar0 = &(Local_155[iParam0 /*8*/])->f_3[iParam1];
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !ENTITY::IS_ENTITY_ATTACHED(iVar0))
	{
		iVar1 = func_700(0, iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			func_1075(iParam1, &vVar2, &uVar5);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iVar1, 0, vVar2, 0f, 0f, uVar5, 1, 0, 1, 0, 2, 1, 0, 0);
		}
	}
}

void func_825(var uParam0)
{
	if (!aggregate.fme_animal_tagging.func_134(512))
	{
		aggregate.fme_escaped_convicts.func_515(512);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(func_1076(), func_350(), true, 0);
	}
	Local_155.f_132 = uParam0;
}

void func_826(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(&(Local_26[Local_544.f_1332 /*4*/]), iParam0))
	{
		aggregate.bandana.func_26(Local_26[Local_544.f_1332 /*4*/], iParam0);
	}
}

void func_828()
{
	if (!aggregate.barcustomer_interaction.func_42(&(Local_544.f_1298)))
	{
		aggregate.barcustomer_interaction.func_25(&(Local_544.f_1298), 0);
	}
	else if (aggregate.barcustomer_interaction.func_58(&(Local_544.f_1298)))
	{
		aggregate.fme_hot_property.func_965(&(Local_544.f_1298));
	}
	if (aggregate.barcustomer_interaction.func_42(&(Local_544.f_1298)) && aggregate.fme_animal_tagging.func_181(&(Local_544.f_1298)) > func_1078())
	{
		aggregate.fme_archery.func_1155(1f);
		aggregate.fme_animal_tagging.func_1407(&(Local_544.f_1298));
	}
}

void func_829()
{
	if (aggregate.barcustomer_interaction.func_42(&(Local_544.f_1298)) && !aggregate.barcustomer_interaction.func_58(&(Local_544.f_1298)))
	{
		aggregate.fme_hot_property.func_967(&(Local_544.f_1298));
	}
}

void func_830()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == Local_13.f_4)
			{
				aggregate.fme_king_of_the_castle.func_1051(iVar1, 233295963);
			}
			else
			{
				aggregate.fme_king_of_the_castle.func_864(iVar1);
			}
		}
		iVar1++;
	}
}

void func_831()
{
	if (aggregate.fme_condor_egg.func_545(4, Local_544.f_1332))
	{
		if (Local_13.f_4 != 255)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4) && (Local_13.f_4 == PLAYER::PLAYER_ID() || (_NAMESPACE26::_0x81FB74C83C2ED69F(Local_13.f_4) && !aggregate.fme_dead_drop.func_799())))
			{
				func_1082();
				func_885(1);
			}
			else
			{
				func_1083();
				func_886(1);
			}
		}
	}
	else
	{
		func_885(1);
		func_886(1);
	}
}

void func_832()
{
	if (aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	if (((aggregate.barcustomer_interaction.func_42(&(Local_13.f_1)) && (func_718() - aggregate.fme_animal_tagging.func_181(&(Local_13.f_1))) < func_1084()) && Local_544.f_1267 > (func_717() + func_1084())) && !aggregate.fishing_core.func_107(Local_544.f_1287))
	{
		Local_544.f_1291 = aggregate.fme_animal_tagging.func_499(MISC::_CREATE_VAR_STRING(2, "FME_KOTR_GAME_UPDATE_NEW_CAR_WARNING"), joaat("COLOR_WHITE"));
		aggregate.fme_escaped_convicts.func_515(4);
	}
}

void func_833()
{
	if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
	{
		if (!aggregate.fme_condor_egg.func_545(4, Local_544.f_1332))
		{
			if (MAP::DOES_BLIP_EXIST(Local_544.f_1325))
			{
				MAP::_0x662D364ABF16DE2F(Local_544.f_1325, -1636811933);
				MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -1445216292);
				MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -2145527776);
			}
			if (func_468(13, "FME_KOTR_OBJECTIVE_ENTER", -1, 0))
			{
				func_1085(8);
				aggregate.fme_archery.func_343(func_1086(), 1, 0);
			}
		}
	}
	else if (Local_13.f_4 == PLAYER::PLAYER_ID())
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -1636811933);
			MAP::_0x662D364ABF16DE2F(Local_544.f_1325, -1445216292);
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -2145527776);
		}
		if (func_468(10, "FME_KOTR_OBJECTIVE_DEFEND_SELF", -1, 0))
		{
			func_1085(2);
			aggregate.fme_archery.func_343(func_1087(), 1, 0);
		}
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(Local_13.f_4) && !aggregate.fme_dead_drop.func_799())
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -1636811933);
			MAP::_0x662D364ABF16DE2F(Local_544.f_1325, -1445216292);
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -2145527776);
		}
		if (((Local_544.f_1277 < aggregate.fme_animal_tagging.func_433() && !aggregate.fme_animal_tagging.func_134(128)) && aggregate.fme_animal_tagging.func_435(Local_544.f_1289)) && MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			Local_544.f_1289 = aggregate.fme_animal_tagging.func_436(MISC::_CREATE_VAR_STRING(2, "FME_KOTR_HELP_FRIENDLY_KING", Local_544.f_1325));
			aggregate.fme_escaped_convicts.func_515(128);
		}
		if (func_468(11, "FME_KOTR_OBJECTIVE_DEFEND_TEAM", -1, 0))
		{
			func_1085(2);
			aggregate.fme_archery.func_343(func_1087(), 1, 0);
		}
	}
	else
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -1636811933);
			MAP::_0xB059D7BD3D78C16F(Local_544.f_1325, -1445216292);
			MAP::_0x662D364ABF16DE2F(Local_544.f_1325, -2145527776);
		}
		if (((Local_544.f_1277 < aggregate.fme_animal_tagging.func_433() && !aggregate.fme_animal_tagging.func_134(64)) && aggregate.fme_animal_tagging.func_435(Local_544.f_1289)) && MAP::DOES_BLIP_EXIST(Local_544.f_1325))
		{
			Local_544.f_1289 = aggregate.fme_animal_tagging.func_436(MISC::_CREATE_VAR_STRING(2, "FME_KOTR_HELP_ENEMY_KING", Local_544.f_1325));
			aggregate.fme_escaped_convicts.func_515(64);
		}
		if (Local_155.f_130 != Local_13.f_4)
		{
			if (Local_544.f_1266 != 5)
			{
				func_468(0, "", -1, 0);
			}
			Local_155.f_130 = Local_13.f_4;
		}
		if (func_468(6, MISC::_CREATE_VAR_STRING(10, "FME_KOTR_OBJECTIVE_ATTACK", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(Local_13.f_4), aggregate.fme_animal_tagging.func_487(Local_13.f_4, 1, -1, 0))), -1, 0))
		{
			func_1085(0);
			aggregate.fme_archery.func_343(func_1086(), 1, 0);
		}
	}
}

void func_885(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_1111()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_1111());
		}
		aggregate.fme_animal_tagging.func_290(&(Local_155.f_134));
		if (bParam0)
		{
			aggregate.fme_escaped_convicts.func_888(1);
		}
	}
}

void func_886(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(2))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_1112()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_1112());
		}
		aggregate.fme_animal_tagging.func_290(&(Local_155.f_137));
		if (bParam0)
		{
			aggregate.fme_escaped_convicts.func_888(2);
		}
	}
}

bool func_1002(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])))
	{
		return false;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])->f_1, false, 0))
	{
		return true;
	}
	return false;
}

int func_1003(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool func_1005(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0x3660BCAB3A6BB734(iVar0);
	return true;
}

void func_1006(int iParam0)
{
	if (Local_13.f_5 != iParam0)
	{
		if (iParam0 == 255)
		{
		}
		Local_13.f_5 = iParam0;
	}
}

int func_1047(int iParam0)
{
	return (Global_1130823->f_2[iParam0 /*41*/])->f_5;
}

void func_1075(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 1.779261f, 7.693059f, 1.1f };
	switch (iParam0)
	{
		case 0:
			*uParam1 = { *uParam1 * Vector(1f, 1f, 1f) };
			*uParam2 = 90f;
			break;
		case 1:
			*uParam1 = { *uParam1 * Vector(1f, -1f, 1f) };
			*uParam2 = 90f;
			break;
		case 2:
			*uParam1 = { *uParam1 * Vector(1f, 1f, -1f) };
			*uParam2 = -90f;
			break;
		case 3:
			*uParam1 = { *uParam1 * Vector(1f, -1f, -1f) };
			*uParam2 = -90f;
			break;
	}
}

char* func_1076()
{
	return "new_active_carriage";
}

int func_1078()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	fVar0 = 1000f;
	fVar1 = (Local_351[Local_544.f_1332 /*6*/])->f_2;
	fVar2 = aggregate.fme_animal_tagging.func_631(&(Local_544.f_13));
	fVar3 = 10f;
	if (fVar2 > (fVar1 + fVar3))
	{
		fVar4 = 30f;
		fVar5 = ((fVar2 - fVar1) - fVar3);
		if (fVar5 > fVar4)
		{
			fVar5 = fVar4;
		}
		fVar6 = (fVar5 / fVar4);
		fVar7 = 500f;
		fVar8 = (fVar0 - fVar7);
		fVar9 = (fVar6 * fVar8);
		fVar0 = (fVar0 - fVar9);
	}
	fVar0 = (fVar0 * func_1229(aggregate.fme_dead_drop.func_799()));
	return BUILTIN::FLOOR(fVar0);
}

void func_1082()
{
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		aggregate.fme_escaped_convicts.func_888(256);
		GRAPHICS::ANIMPOSTFX_PLAY(func_1112());
		aggregate.fme_animal_tagging.func_1407(&(Local_155.f_137));
		aggregate.fme_escaped_convicts.func_515(2);
	}
	else
	{
		if (!aggregate.fme_animal_tagging.func_134(256))
		{
			AUDIO::PLAY_SOUND_FRONTEND("screen_pulse", "RDRO_King_Of_The_Rails_Sounds", true, 0);
			aggregate.fme_escaped_convicts.func_515(256);
		}
		if (aggregate.barcustomer_interaction.func_42(&(Local_155.f_137)) && aggregate.fme_animal_tagging.func_181(&(Local_155.f_137)) > func_1231())
		{
			func_886(0);
		}
	}
}

void func_1083()
{
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		aggregate.fme_escaped_convicts.func_888(256);
		GRAPHICS::ANIMPOSTFX_PLAY(func_1111());
		aggregate.fme_animal_tagging.func_1407(&(Local_155.f_134));
		aggregate.fme_escaped_convicts.func_515(1);
	}
	else
	{
		if (!aggregate.fme_animal_tagging.func_134(256))
		{
			AUDIO::PLAY_SOUND_FRONTEND("screen_pulse", "RDRO_King_Of_The_Rails_Sounds", true, 0);
			aggregate.fme_escaped_convicts.func_515(256);
		}
		if (aggregate.barcustomer_interaction.func_42(&(Local_155.f_134)) && aggregate.fme_animal_tagging.func_181(&(Local_155.f_134)) > func_1231())
		{
			func_885(0);
		}
	}
}

int func_1084()
{
	return 8000;
}

void func_1085(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_1232(iVar0, iParam0);
		iVar0++;
	}
}

char* func_1086()
{
	return "FM_KotC_ATTACKING";
}

char* func_1087()
{
	return "FM_KotC_DEFENDING";
}

char* func_1111()
{
	return "KingCastleRed";
}

char* func_1112()
{
	return "KingCastleBlue";
}

float func_1229(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1f;
	if (bParam0)
	{
		return fVar0;
	}
	if (!aggregate.aberdeenpigfarm.func_175(&(Local_26[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/]), 4))
	{
		return fVar0;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && aggregate.aberdeenpigfarm.func_175(&(Local_26[iVar3 /*4*/]), 4))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar2) && iVar2 != PLAYER::PLAYER_ID())
			{
				fVar0 = (fVar0 - 0.1f);
			}
		}
		iVar3++;
	}
	return fVar0;
}

int func_1231()
{
	return 1000;
}

void func_1232(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_1387(iParam0, iVar0, iParam1);
		iVar0++;
	}
}

void func_1237(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
	aggregate.fme_animal_tagging.func_1253(*uParam0);
}

void func_1387(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = &(Local_155[iParam0 /*8*/])->f_3[iParam1];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iVar0, iParam2);
	}
}

void func_1496(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			aggregate.doc_book.func_240(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			aggregate.doc_book.func_241(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			aggregate.doc_book.func_241(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			aggregate.doc_book.func_241(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			aggregate.doc_book.func_242(1);
			break;
		case 33:
			aggregate.doc_book.func_243(1);
			break;
		case 34:
			aggregate.doc_book.func_244(1);
			break;
		case 35:
			break;
		case 36:
			aggregate.doc_book.func_245(0);
			break;
		case 37:
			aggregate.doc_book.func_246(0);
			break;
		case 38:
			aggregate.doc_book.func_247(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (aggregate.doc_book.func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				aggregate.doc_book.func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			aggregate.binoculars.func_18(675, 0);
			break;
		case 3:
			if (aggregate.doc_book.func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				aggregate.doc_book.func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			aggregate.binoculars.func_18(676, 0);
			Jump @1405; //curOff = 761
			if (aggregate.doc_book.func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				aggregate.doc_book.func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			aggregate.binoculars.func_18(677, 0);
			Jump @1405; //curOff = 874
			if (aggregate.doc_book.func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				aggregate.doc_book.func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			aggregate.binoculars.func_18(678, 0);
			Jump @1405; //curOff = 997
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			Jump @1405; //curOff = 1029
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.binoculars.func_32(1013902307, 1))
				{
					aggregate.fme_animal_tagging.func_375(1013902307, 1, 752097756);
				}
			}
			Jump @1405; //curOff = 1070
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.binoculars.func_32(1013902307, 1))
				{
					aggregate.fme_animal_tagging.func_375(1013902307, 1, 752097756);
				}
				if (!aggregate.binoculars.func_32(142640135, 1))
				{
					aggregate.fme_animal_tagging.func_375(142640135, 1, 752097756);
				}
			}
			Jump @1405; //curOff = 1141
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.binoculars.func_32(786809402, 1))
				{
					aggregate.fme_animal_tagging.func_375(786809402, 1, 752097756);
				}
			}
			Jump @1405; //curOff = 1182
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				if (!aggregate.binoculars.func_32(786809402, 1))
				{
					aggregate.fme_animal_tagging.func_375(786809402, 1, 752097756);
				}
				if (!aggregate.binoculars.func_32(-518019409, 1))
				{
					aggregate.fme_animal_tagging.func_375(-518019409, 1, 752097756);
				}
			}
			Jump @1405; //curOff = 1253
			PLAYER::_0x5B9813ECF7633FE8(0);
			Jump @1405; //curOff = 1261
			Jump @1405; //curOff = 1264
			Jump @1405; //curOff = 1267
			Jump @1405; //curOff = 1270
			Jump @1405; //curOff = 1273
			Jump @1405; //curOff = 1276
			Jump @1405; //curOff = 1279
			Jump @1405; //curOff = 1282
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939168->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			Jump @1405; //curOff = 1322
			Jump @1405; //curOff = 1325
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			Jump @1405; //curOff = 1337
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			Jump @1405; //curOff = 1350
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			Jump @1405; //curOff = 1363
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			Jump @1405; //curOff = 1376
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			Jump @1405; //curOff = 1389
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
		}

void func_1689(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 4, &uParam1);
}

