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
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1224195223;
	var uLocal_18 = 1825312110;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<199> Local_32 = { 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	char* sLocal_233 = NULL;
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char cLocal_248[64] = "";
	char cLocal_256[64] = "";
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	int iLocal_273 = 0;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	struct<18> Local_286[4];
	vector3 vLocal_359 = { 0f, 0f, 0f };
	int iLocal_362 = 0;
	char cLocal_363[16] = "";
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	struct<9> Local_379 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	var uLocal_405[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_438[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_471[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_488[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_505[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_514[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_523[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_540[4] = { 0, 0, 0, 0 };
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	bool bLocal_548 = false;
	int iLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	float fLocal_552 = 0f;
	float fLocal_553 = 0f;
#endregion

void __EntryFunction__()
{
	iLocal_14 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	iLocal_15 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_WinLose");
	iLocal_232 = -1;
	sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_234 = { -580.2f, -3626.5f, 79.94f };
	vLocal_237 = { -596.927f, -3639.072f, 80.6997f };
	vLocal_240 = { -561f, -3700f, 83f };
	iLocal_243 = -1633151965;
	iLocal_244 = -1616778617;
	iLocal_245 = -1852748182;
	iLocal_246 = 435889881;
	StringCopy(&cLocal_248, "mp_winlose_", 64);
	StringCopy(&cLocal_256, "mp_winlose", 64);
	iLocal_264 = 1081228448;
	iLocal_265 = 1081228448;
	iLocal_266 = 1373121931;
	iLocal_273 = 1;
	iLocal_278 = -1;
	StringCopy(&cLocal_363, "UIC", 16);
	iLocal_403 = PLAYER::GET_PLAYER_INDEX();
	iLocal_404 = PLAYER::GET_PLAYER_PED(iLocal_403);
	fLocal_552 = 1f;
	fLocal_553 = 1f;
	func_1(1);
	func_2();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (!func_3())
	{
		if (func_4())
		{
			if (func_5())
			{
				if (func_6())
				{
					func_7();
				}
				else
				{
					func_8();
				}
			}
		}
		func_9();
		if (MISC::IS_BIT_SET(iLocal_397, 3))
		{
			func_10();
		}
		BUILTIN::WAIT(0);
	}
	func_11();
	func_12();
	func_1(0);
	aggregate.aberdeenpigfarm.func_46();
}

void func_1(int iParam0)
{
	Global_1048581 = iParam0;
}

void func_2()
{
	bLocal_13 = aggregate.fme_animal_tagging.func_884();
	aggregate.fm_deathmatch_controller.func_100(64);
	aggregate.fm_deathmatch_controller.func_100(2048);
	aggregate.fm_deathmatch_controller.func_100(4096);
	aggregate.fm_deathmatch_controller.func_49(8);
	aggregate.fm_deathmatch_controller.func_296(8);
	Global_1051084 = 0;
	PED::SET_PED_RESET_FLAG(iLocal_404, 240, true);
	aggregate.fme_animal_tagging.func_60(&uLocal_16, 1, 0);
	aggregate.fme_animal_tagging.func_61(&uLocal_16, 0);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_14);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_14);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_15);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_15);
	GRAPHICS::_0xFF8018C778349234(0);
	func_20(1);
}

bool func_3()
{
	if (MISC::IS_BIT_SET(iLocal_395, 2) || iLocal_388 == 2)
	{
		return true;
	}
	if (aggregate.fm_deathmatch_controller.func_265(64))
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (aggregate.fme_animal_tagging.func_1282(128))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return true;
	}
	if (aggregate.fm_deathmatch_controller.func_265(2048))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return true;
	}
	if (aggregate.fme_animal_tagging.func_1282(32))
	{
		return true;
	}
	return false;
}

bool func_4()
{
	if (!MISC::IS_BIT_SET(iLocal_395, 3))
	{
		if (func_24())
		{
			MISC::SET_BIT(&iLocal_395, 3);
		}
		switch (&Global_262152)
		{
			case 0:
				if (!aggregate.aberdeenpigfarm.func_13())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 1:
				if (!aggregate.aberdeenpigfarm.func_13())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 3:
				if (!aggregate.aberdeenpigfarm.func_13())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 2:
				break;
			case 4:
				MISC::CLEAR_BIT(&iLocal_395, 3);
				break;
		}
		if (MISC::IS_BIT_SET(iLocal_395, 3))
		{
			return true;
		}
		else
		{
			if (func_5())
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (&Global_262152 != 4)
			{
			}
			return false;
		}
	}
	return true;
}

bool func_5()
{
	if (MISC::IS_BIT_SET(iLocal_395, 1))
	{
		return true;
	}
	else if (aggregate.fme_animal_tagging.func_1282(16))
	{
		MISC::SET_BIT(&iLocal_395, 1);
		return true;
	}
	return false;
}

bool func_6()
{
	int iVar0;
	vector3 vVar1;

	if (&Global_262152 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_399, 0))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
				{
					MISC::SET_BIT(&iLocal_399, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Global_1048684->f_22[iVar0 /*10*/]), true, true);
					ENTITY::FREEZE_ENTITY_POSITION(&(Global_1048684->f_22[iVar0 /*10*/]), true);
					ENTITY::SET_ENTITY_INVINCIBLE(&(Global_1048684->f_22[iVar0 /*10*/]), true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS(&(Global_1048684->f_22[iVar0 /*10*/]), true, false) };
					func_27(uLocal_405[iVar0], Global_1048684->f_22[iVar0 /*10*/], &vVar1);
					if (!(Global_1048684->f_22[iVar0 /*10*/])->f_9)
					{
						aggregate.butchercreek.func_189(&(uLocal_405[iVar0]), 0, 1);
					}
					PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
					if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_343[iVar0])))
					{
						func_27(uLocal_438[iVar0], Global_1048684->f_343[iVar0], &vVar1);
						PED::DELETE_PED(Global_1048684->f_343[iVar0]);
					}
				}
				iVar0++;
			}
			return false;
		}
	}
	return MISC::IS_BIT_SET(iLocal_395, 0);
}

void func_7()
{
	func_29();
	func_30();
	switch (&Global_262152)
	{
		case 0:
			func_31();
			break;
		case 2:
			func_32();
			break;
		case 3:
			func_33();
			func_34();
			break;
		case 1:
			func_34();
			break;
		case 4:
			break;
	}
}

void func_8()
{
	int iVar0;

	func_1(1);
	func_35(0);
	aggregate.fm_deathmatch_controller.func_1034();
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		aggregate.fme_animal_tagging.func_63(1);
		aggregate.fm_deathmatch_controller.func_47(1);
	}
	aggregate.fm_deathmatch_controller.func_189(1);
	if (!aggregate.fm_deathmatch_controller.func_89(255))
	{
		aggregate.annesburg.func_234(3);
	}
	else
	{
		aggregate.fm_deathmatch_controller.func_90(1);
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			aggregate.annesburg.func_239(64);
		}
	}
	aggregate.fme_animal_tagging.func_334(0);
	if (!aggregate.fm_deathmatch_controller.func_89(255))
	{
		iVar0 = 8;
		aggregate.fme_supply_train.func_914(0, iVar0);
	}
	aggregate.fm_deathmatch_controller.func_36(2048);
	UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
	MISC::SET_BIT(&(Global_1956121->f_1), 5);
	iLocal_402 = Global_1048684->f_19;
	func_47(&iLocal_404);
	MISC::SET_BIT(&iLocal_395, 0);
}

void func_9()
{
	char* sVar0;

	AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684->f_1)) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684->f_9)))
	{
		if (!MISC::IS_BIT_SET(iLocal_396, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_396, 5) || GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
			{
				if (MISC::IS_BIT_SET(iLocal_396, 5) || GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, 0, &uLocal_283))
				{
					sVar0 = "photograph";
					if (MISC::IS_BIT_SET(iLocal_396, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (AUDIO::_0xE368E8422C860BA7(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						if (!MISC::IS_BIT_SET(iLocal_396, 7))
						{
							func_48();
						}
						else
						{
							func_49();
						}
						MISC::SET_BIT(&iLocal_396, 4);
						MISC::SET_BIT(&iLocal_396, 12);
						aggregate.annesburg.func_239(64);
						AUDIO::PLAY_SOUND_FRONTEND(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						AUDIO::_0x9B1FC259187C97C0("photograph");
						aggregate.fm_deathmatch_controller.func_1069();
						vLocal_359 = { vLocal_234 };
						func_51(1, 0);
					}
				}
			}
			else if (func_52(16) && func_24())
			{
				func_53();
			}
		}
		else if ((GRAPHICS::_0xEEF83A759AE06A27(iLocal_14) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, 0, &uLocal_283)) || (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_15, 2, 0, &uLocal_283)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			AUDIO::_0x9B1FC259187C97C0("photograph");
		}
	}
}

void func_10()
{
	struct<10> Var0;

	if (&Global_1049158)
	{
		Global_1049148->f_5 = (Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8);
		Global_1049148->f_6 = (Global_1048684->f_392.f_6 + Global_1048684->f_408.f_6);
		TELEMETRY::_0xA2058154357726BB(Global_1049159, Global_1049148);
		*Global_1049148 = { Var0 };
		Global_1049158 = 0;
	}
}

void func_11()
{
	int iVar0;

	if (!Global_1048684->f_456)
	{
		if (Global_1048684->f_455 || iLocal_284)
		{
			aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 701412595), 1);
			iVar0 = aggregate.net_main_offline.func_787(Global_1572887->f_106.f_9);
			switch (iVar0)
			{
				case 7:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 112216621), 1);
					break;
				case 8:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, -1767965617), 1);
					break;
				case 9:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 81153145), 1);
					break;
				case 2:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 2090637823), 1);
					break;
				case 3:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 2090637823), 1);
					break;
				case 4:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, -1740003396), 1);
					break;
				case 6:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, -141490041), 1);
					break;
				case 5:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, -2140118397), 1);
					break;
				case 19:
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(455921177, 928731509), 1);
					break;
			}
		}
	}
}

void func_12()
{
	NETWORK::_0x236905C700FDB54D();
	func_57();
	func_58();
	func_59();
	switch (&Global_262152)
	{
		case 0:
			func_60();
			break;
		case 2:
			aggregate.aberdeenpigfarm.func_23();
			break;
		case 3:
			aggregate.aberdeenpigfarm.func_23();
			func_63();
			break;
		case 1:
			func_63();
			break;
	}
	func_64();
	func_10();
	HUD::_0x8BC7C1F929D07BF3(999578278);
	HUD::_0x8BC7C1F929D07BF3(690901814);
	aggregate.net_main_online.func_384();
	aggregate.fme_animal_tagging_offline.func_54(1);
	aggregate.fm_deathmatch_controller.func_49(2048);
	if (MISC::IS_BIT_SET(iLocal_396, 3))
	{
		aggregate.doc_book.func_171(-304137656, 0, 255, 0, 0);
	}
	Global_1048684->f_377 = 27;
	aggregate.fm_deathmatch_controller.func_1126(4);
	aggregate.fm_deathmatch_controller.func_1596(0);
	func_70();
	aggregate.fm_deathmatch_controller.func_687(0);
	aggregate.fm_deathmatch_controller.func_309(0);
	if (aggregate.fme_animal_tagging.func_1413())
	{
		aggregate.fm_deathmatch_controller.func_239(0);
	}
	Global_1048582 = 0;
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}

void func_20(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0)
	{
	}
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptbutton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "menuUpButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "menuDownButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "visible", bParam0);
}

bool func_24()
{
	if (iLocal_280 < 100)
	{
		if (func_76(&cLocal_363, &iLocal_280))
		{
			iLocal_280 = 100;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_26()
{
	if (func_77())
	{
		if (func_78())
		{
			if (func_79(iLocal_243, iLocal_244, iLocal_246, iLocal_245))
			{
				if (func_80())
				{
					if (aggregate.aberdeenpigfarm.func_13())
					{
						if (aggregate.fme_animal_tagging.func_218(&uLocal_16))
						{
							if (func_83())
							{
								STREAMING::_0x513F8AA5BF2F17CF(vLocal_234, 15f, 0);
								aggregate.fm_deathmatch_controller.func_36(2);
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_27(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = PED::CLONE_PED(*uParam1, 0f, true, true);
	PED::CLONE_PED_TO_TARGET(*uParam1, *uParam0);
	ENTITY::SET_ENTITY_COORDS(*uParam0, *uParam2, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, 0, 1);
	if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		PED::REVIVE_INJURED_PED(*uParam0);
		ENTITY::_SET_ENTITY_HEALTH(*uParam0, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam0, 0), 0);
	}
	PED::CLEAR_PED_DECORATIONS(*uParam0);
	PED::_0x2208438012482A1A(*uParam0, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
}

void func_29()
{
	NETWORK::_0x236905C700FDB54D();
	aggregate.fm_deathmatch_controller.func_296(8);
	aggregate.fm_deathmatch_controller.func_1069();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	aggregate.fm_deathmatch_controller.func_189(1);
	func_84(1);
	aggregate.dynamic_craft_scenario.func_12();
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	CAM::_0x8910C24B7E0046EC();
	HUD::_0x4CC5F2FC1332577F(999578278);
	aggregate.fme_animal_tagging_offline.func_54(0);
}

void func_30()
{
	if (MISC::IS_BIT_SET(iLocal_395, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_545))
		{
			if (!bLocal_548)
			{
				iLocal_547 = ENTITY::_0x6F3068258A499E52(988533890, -561.1321f, -3694.189f, 81.9117f, 15);
				bLocal_548 = true;
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_547))
			{
				iLocal_545 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_547));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_545) && ENTITY::IS_ENTITY_VISIBLE(iLocal_545))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_545, false);
				}
			}
		}
	}
}

void func_31()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_403))
	{
		aggregate.fme_supply_train.func_914(0, 8);
	}
	switch (iLocal_388)
	{
		case 0:
			if (aggregate.binoculars.func_15(&uLocal_373))
			{
				if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_373, 0, 0) > 2500)
				{
					aggregate.fme_animal_tagging.func_117(&uLocal_16);
					HUD::_0x4CC5F2FC1332577F(999578278);
					aggregate.fme_animal_tagging.func_1116(&Local_32, 1);
					aggregate.fme_animal_tagging.func_1102(&Local_32);
					aggregate.fme_animal_tagging.func_176(1);
				}
			}
			else
			{
				aggregate.fme_animal_tagging_offline.func_66(&uLocal_373, 0, 0);
			}
			break;
		case 1:
			aggregate.fme_animal_tagging.func_1116(&Local_32, 1);
			aggregate.fme_animal_tagging.func_176(2);
			break;
		case 2:
			MISC::SET_BIT(&iLocal_395, 2);
			break;
	}
}

void func_32()
{
	if (aggregate.binoculars.func_15(&uLocal_371))
	{
		if (!aggregate.fme_animal_tagging.func_1282(4096))
		{
			func_93(1);
			if (!aggregate.fme_animal_tagging.func_1282(256))
			{
				if (aggregate.fme_animal_tagging.func_1282(16))
				{
					aggregate.fm_deathmatch_controller.func_49(16);
				}
			}
			if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 1, 0) > 5000 && aggregate.flow_controller.func_198())
			{
				if (!&Global_1048577)
				{
					if (!aggregate.annesburg.func_180(255))
					{
						if (aggregate.fme_animal_tagging.func_1282(64) || func_96())
						{
							if (!aggregate.fme_animal_tagging.func_1282(256))
							{
								aggregate.net_fast_travel_barker.func_67(0);
							}
							GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
							if (aggregate.fme_animal_tagging.func_1279())
							{
								func_99(4);
							}
							func_84(0);
							MISC::SET_BIT(&iLocal_395, 2);
						}
					}
				}
			}
		}
		else
		{
			func_100();
		}
	}
	else
	{
		if (!aggregate.fme_animal_tagging.func_1282(4096))
		{
			CAM::DO_SCREEN_FADE_OUT(1750);
		}
		aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 1, 0);
	}
}

void func_33()
{
	switch (iLocal_388)
	{
		case 0:
			switch (iLocal_390)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iLocal_389)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_34()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_403))
	{
		aggregate.fme_supply_train.func_914(0, 8);
	}
	func_101();
	switch (iLocal_388)
	{
		case 0:
			switch (iLocal_390)
			{
				case 0:
					func_102();
					func_103();
					func_104(1);
					func_105(1);
					if (MISC::IS_BIT_SET(iLocal_398, 12))
					{
						MISC::_0x3373779BAF7CAF48("FOG", "fog_MP_Pred");
						MISC::_0x3373779BAF7CAF48("MISTY", "misty_MP_Pred");
						MISC::_0x3373779BAF7CAF48("SHOWER", "shower_MP_Pred");
						MISC::_0x3373779BAF7CAF48("THUNDERSTORM", "thunderstorm_MP_Pred");
					}
					else if (MISC::IS_BIT_SET(iLocal_398, 3))
					{
						MISC::_0x0E71C80FA4EC8147("FOG", true);
						MISC::_0x0E71C80FA4EC8147("MISTY", true);
						MISC::_0x0E71C80FA4EC8147("SHOWER", true);
						MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
					}
					aggregate.fme_animal_tagging.func_176(1);
					break;
				case 1:
					if (!MISC::IS_BIT_SET(iLocal_396, 12))
					{
						return;
					}
					func_107();
					NETWORK::_0x65F040D91001ED4B(0);
					MISC::_0xCE7690C0A0D1C36D(0);
					MISC::_0x59174F1AFE095B5A(iLocal_247, true, true, false, 0f, false);
					aggregate.fm_deathmatch_controller.func_505(1);
					if (iLocal_278 == -1)
					{
						if (MISC::IS_BIT_SET(iLocal_396, 31))
						{
							NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(0, 0, 0, 0, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_396, 30))
						{
							NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(18, 0, 0, 0, true);
						}
						else
						{
							NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(13, 0, 0, 0, true);
						}
					}
					else
					{
						NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iLocal_278, iLocal_279, 0, 0, true);
					}
					iLocal_281 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&iLocal_396, 10);
					aggregate.fme_animal_tagging.func_176(2);
					break;
				case 2:
					func_109();
					if ((((((MISC::IS_BIT_SET(iLocal_399, 3) && MISC::IS_BIT_SET(iLocal_399, 2)) && MISC::IS_BIT_SET(iLocal_399, 1)) && MISC::IS_BIT_SET(iLocal_399, 6)) && MISC::IS_BIT_SET(iLocal_399, 7)) && MISC::IS_BIT_SET(iLocal_399, 4)) && MISC::IS_BIT_SET(iLocal_399, 5))
					{
						aggregate.fme_animal_tagging.func_176(3);
					}
					break;
				case 3:
					if (!MISC::IS_BIT_SET(iLocal_398, 9))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_234, 0f, 0f, 0f);
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
					}
					if (STREAMING::_0x73B40D97D7BAAD77(iLocal_243, vLocal_234))
					{
						bVar0 = true;
					}
					else if (aggregate.binoculars.func_15(&uLocal_367) && aggregate.fme_animal_tagging_offline.func_100(&uLocal_367, 0, 0) > 3500)
					{
						if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = func_110();
						}
					}
					else
					{
						bVar0 = func_110();
					}
					if (bVar0 || (MISC::GET_GAME_TIMER() - iLocal_281) > 3500)
					{
						aggregate.binoculars.func_16(&uLocal_369);
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_248);
						iVar1 = 24;
						aggregate.fme_supply_train.func_914(0, iVar1);
						aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 0, 0);
						func_112();
						aggregate.fme_animal_tagging.func_176(4);
					}
					break;
				case 4:
					if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 0, 0) > 1000)
					{
						aggregate.fme_animal_tagging_offline.func_66(&uLocal_367, 0, 0);
						func_93(1);
						func_113();
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_248);
						aggregate.fme_animal_tagging.func_176(1);
					}
					break;
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_398, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_234, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
			}
			_NAMESPACE79::_0x1C38C3577901AF1F();
			func_114(Global_1049267, 1);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (iLocal_389)
			{
				case 0:
					if (!aggregate.annesburg.func_180(255))
					{
						if (func_115())
						{
							aggregate.fme_animal_tagging.func_176(1);
						}
					}
					break;
				case 1:
					if (Local_32.f_198 < 2)
					{
						aggregate.fme_animal_tagging.func_1116(&Local_32, 0);
					}
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 0, 0);
					if (aggregate.fme_animal_tagging.func_1279())
					{
						func_99(4);
					}
					func_84(0);
					AUDIO::_0x9B1FC259187C97C0("winners_pose");
					if (func_52(2) || func_52(4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1048684->f_460));
					STREAMING::_0x5A8B01199C3E79C3();
					aggregate.fm_deathmatch_controller.func_49(2);
					GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					GRAPHICS::_0x3A9A281FF71249E9("RespawnMissionCheckpoint", 1250);
					aggregate.fme_animal_tagging.func_176(2);
					break;
				case 2:
					if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
					{
						if ((ANIMSCENE::_0x49F1D143ADE32656(iLocal_232) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_232)) <= 1.2f)
						{
							GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_15);
							MISC::SET_BIT(&iLocal_396, 4);
						}
					}
					if (func_117())
					{
						func_118(1);
						func_119(1);
						func_120();
						AUDIO::_0x9B1FC259187C97C0("photograph");
						aggregate.fme_animal_tagging_offline.func_66(&uLocal_375, 0, 0);
						aggregate.fme_animal_tagging_offline.func_66(&uLocal_377, 0, 0);
						iVar2 = PLAYER::PLAYER_ID();
						sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050004->f_14 <= 1)
							{
								if (MISC::ARE_STRINGS_EQUAL(&((Global_1050004->f_101[iVar4 /*23*/])->f_14.f_1), sVar3))
								{
									iLocal_284 = 1;
								}
								else
								{
									iVar4++;
								}
								aggregate.fme_animal_tagging.func_176(3);
								Jump @1205; //curOff = 1182
								if (!aggregate.binoculars.func_15(&uLocal_371))
								{
									aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 0, 0);
								}
								Jump @1338; //curOff = 1205
								if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_377, 0, 0) > 5000)
								{
									MISC::SET_BIT(&iLocal_397, 0);
									aggregate.fme_animal_tagging.func_176(4);
								}
								else if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_377, 0, 0) < 0 || !aggregate.binoculars.func_15(&uLocal_377))
								{
									aggregate.fme_animal_tagging_offline.func_66(&uLocal_377, 0, 0);
								}
								Jump @1338; //curOff = 1276
								aggregate.fme_animal_tagging.func_1116(&Local_32, 0);
								aggregate.fme_animal_tagging.func_1114(&Local_32, Global_1049267);
								aggregate.fme_animal_tagging.func_1115(&Local_32, Global_1049267, 1);
								if (func_123())
								{
									func_124();
									aggregate.fme_animal_tagging.func_176(2);
								}
								aggregate.fme_animal_tagging.func_1114(&Local_32, &(Global_1050004->f_101));
								Jump @1352; //curOff = 1338
								MISC::SET_BIT(&iLocal_395, 2);
								if (MISC::IS_BIT_SET(iLocal_397, 1))
								{
									func_125();
								}
								if (MISC::IS_BIT_SET(iLocal_397, 0))
								{
									func_126();
								}
							}
						}
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_35(int iParam0)
{
	Global_1070355->f_27136.f_3 = 1;
	Global_1070355->f_27136.f_62.f_30 = iParam0;
	Global_1070355->f_27136.f_4 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_47(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
}

void func_48()
{
	if (func_52(17))
	{
		MISC::SET_BIT(&iLocal_396, 7);
		return;
	}
	Local_32.f_159 = &Global_1051067;
	Local_32.f_160 = &Global_1051068;
	func_135(Global_1049267, &Local_32, &uLocal_16, iLocal_402, func_52(15));
	MISC::SET_BIT(&iLocal_396, 7);
}

void func_49()
{
	char[] cVar0[8];

	if (Local_32.f_150 > 1)
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	aggregate.fme_animal_tagging.func_307(&uLocal_16, cVar0, &(Global_1048684->f_9), " ", " ", " ", " ", Global_1048684->f_17);
	aggregate.fme_animal_tagging.func_312(&uLocal_16);
	aggregate.fme_animal_tagging.func_61(&uLocal_16, 1);
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(iLocal_396, 11) && !aggregate.annesburg.func_121(vLocal_359))
		{
			MISC::SET_BIT(&iLocal_396, 11);
			if (!MISC::IS_BIT_SET(iLocal_398, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_359, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_396, 11) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_396, 11);
		STREAMING::CLEAR_FOCUS();
		vLocal_359 = { 0f, 0f, 0f };
	}
}

bool func_52(int iParam0)
{
	return MISC::IS_BIT_SET(&Global_1048684, iParam0);
}

void func_53()
{
	if (aggregate.fme_animal_tagging.func_312(&uLocal_16))
	{
		aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 1, 0);
		if (!func_143(2))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
		}
		if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
		{
			if (!aggregate.fme_animal_tagging.func_1279() || !func_144())
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_14);
			}
			else
			{
				MISC::SET_BIT(&iLocal_396, 5);
			}
			MISC::CLEAR_BIT(&iLocal_396, 4);
			func_145(16);
		}
	}
}

void func_57()
{
	if (!aggregate.annesburg.func_180(255))
	{
		aggregate.fme_animal_tagging.func_63(0);
		aggregate.fm_deathmatch_controller.func_47(0);
		if (aggregate.fme_animal_tagging.func_1282(64) || !aggregate.fme_animal_tagging.func_884())
		{
			if (!aggregate.fm_deathmatch_controller.func_265(64))
			{
				if (&Global_262152 != 0)
				{
					func_51(0, 0);
					if (!aggregate.fme_animal_tagging.func_1282(256))
					{
						if (MISC::IS_BIT_SET(&Global_1048684, 29) || MISC::IS_BIT_SET(&Global_1048684, 30))
						{
							if (MISC::IS_BIT_SET(&Global_1048684, 31))
							{
								aggregate.fme_animal_tagging.func_444(1, 0);
								func_147(1);
							}
							else if (MISC::IS_BIT_SET(&Global_1048684, 28) || MISC::IS_BIT_SET(&Global_1048684, 27))
							{
								if (MISC::IS_BIT_SET(&Global_1048684, 27))
								{
									if (!aggregate.annesburg.func_121(Global_1048684->f_383))
									{
										func_148(Global_1048684->f_383, Global_1048684->f_386, 1);
									}
								}
								aggregate.fm_mission_controller.func_3434(1, 0);
								func_147(2);
							}
							if (MISC::IS_BIT_SET(&Global_1048684, 29) && !aggregate.annesburg.func_121(Global_1048684->f_379))
							{
								func_150(Global_1048684->f_379, Global_1048684->f_382);
								func_147(4);
							}
							else
							{
								func_150(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING());
								func_147(8);
							}
						}
						else if (aggregate.annesburg.func_122() == 33)
						{
							aggregate.fm_deathmatch_controller.func_371(5, 1);
							func_147(64);
						}
						else
						{
							func_147(16);
						}
					}
				}
				if (!aggregate.annesburg.func_109())
				{
					aggregate.fme_animal_tagging.func_63(1);
					func_147(32);
				}
			}
			if (!aggregate.fme_animal_tagging.func_1282(256))
			{
				CAM::DO_SCREEN_FADE_OUT(150);
			}
		}
		else
		{
			aggregate.fm_deathmatch_controller.func_296(4096);
		}
	}
}

void func_58()
{
	if (aggregate.fme_animal_tagging.func_1282(256))
	{
		MISC::SET_BIT(&iLocal_396, 2);
		CAM::DO_SCREEN_FADE_OUT(0);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		HUD::_0x8BC7C1F929D07BF3(999578278);
		HUD::_0x8BC7C1F929D07BF3(690901814);
	}
	else if (aggregate.fme_animal_tagging.func_1282(64) || aggregate.fm_deathmatch_controller.func_265(32))
	{
		MISC::SET_BIT(&iLocal_396, 1);
		while (!func_154(&bLocal_13) && !aggregate.aberdeenpigfarm.func_49(1, 1))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
		func_155();
	}
}

void func_59()
{
	var uVar0;
	int iVar36;

	func_156();
	aggregate.fm_deathmatch_controller.func_1034();
	aggregate.annesburg.func_234(0);
	aggregate.fme_animal_tagging.func_167(64);
	aggregate.fm_deathmatch_controller.func_47(0);
	aggregate.fm_deathmatch_controller.func_189(0);
	aggregate.fm_deathmatch_controller.func_90(0);
	func_84(0);
	aggregate.fm_deathmatch_controller.func_179();
	aggregate.fm_deathmatch_controller.func_98(0);
	aggregate.fm_deathmatch_controller.func_165(0);
	func_124();
	MISC::CLEAR_BIT(&(Global_1956121->f_1), 5);
	Global_1048684->f_459 = 0;
	uVar0 = 32;
	aggregate.fme_animal_tagging.func_1424(&uVar0, PLAYER::GET_PLAYER_INDEX(), 0);
	HUD::_0xAA03F130A637D923("UIC");
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0, 1);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	PED::SET_PED_RESET_FLAG(iLocal_404, 240, false);
	AUDIO::_0x531A78D6BF27014B("RDRO_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDROADV_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDRO_Countdown_Clockwork_Sounds");
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
	}
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_15);
	}
	GRAPHICS::_0x71845905BCCDE781(iLocal_14);
	GRAPHICS::_0x71845905BCCDE781(iLocal_15);
	aggregate.fm_deathmatch_controller.func_100(8);
	aggregate.fm_deathmatch_controller.func_100(64);
	aggregate.fm_deathmatch_controller.func_100(2048);
	aggregate.fm_deathmatch_controller.func_49(64);
	aggregate.fm_deathmatch_controller.func_49(1024);
	aggregate.fm_deathmatch_controller.func_49(256);
	aggregate.fme_animal_tagging.func_117(&uLocal_16);
	func_93(0);
	func_1(0);
	func_163();
	if (aggregate.annesburg.func_232(32, 255))
	{
		if (aggregate.fme_animal_tagging.func_1279())
		{
			func_99(4);
		}
		func_84(0);
	}
	NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	MISC::_0xCE7690C0A0D1C36D(0);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	GRAPHICS::_0xFF8018C778349234(1);
	AUDIO::CANCEL_MUSIC_EVENT(&(Global_1048684->f_460));
	aggregate.fm_deathmatch_controller.func_49(128);
	func_51(0, 1);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_14);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_15);
	if (!&Global_1049233)
	{
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
	aggregate.fm_deathmatch_controller.func_505(0);
	iVar36 = 0;
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		aggregate.hub_offers.func_18((*Global_1049246)[iVar36 /*2*/]);
		iVar36++;
	}
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		aggregate.hub_offers.func_18((*Global_1049255)[iVar36 /*2*/]);
		iVar36++;
	}
}

void func_60()
{
	aggregate.fme_animal_tagging.func_763(&Local_32, 1);
	aggregate.fme_animal_tagging.func_968(&(Local_32.f_162));
	aggregate.fm_deathmatch_controller.func_878();
}

void func_63()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	bVar0 = true;
	iVar1 = 0;
	aggregate.fme_animal_tagging_offline.func_66(&uVar2, 0, 0);
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && bVar0)
	{
		bVar0 = false;
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_243))
		{
			aggregate.adlerranch.func_95(iLocal_243);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_244))
		{
			aggregate.adlerranch.func_95(iLocal_244);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_245))
		{
			aggregate.adlerranch.func_95(iLocal_245);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_246))
		{
			aggregate.adlerranch.func_95(iLocal_246);
			bVar0 = true;
		}
		iVar1++;
		if (aggregate.fme_animal_tagging_offline.func_100(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_256, false);
	func_170();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	STREAMING::_0xF01D21DF39554115(1);
	aggregate.fme_animal_tagging.func_763(&Local_32, 0);
	aggregate.fme_animal_tagging.func_968(&(Local_32.f_162));
	aggregate.fm_deathmatch_controller.func_878();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iLocal_231))
	{
		func_171(&Local_32, &iLocal_231);
	}
}

void func_64()
{
	if (MISC::IS_BIT_SET(iLocal_396, 1))
	{
		while (SCRIPTS::IS_THREAD_ACTIVE(&Global_1051088, false))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_396, 2))
	{
	}
}

void func_70()
{
	var uVar0;

	aggregate.fm_deathmatch_controller.func_221(&uVar0, 1);
}

bool func_76(char* sParam0, int iParam1)
{
	if (!HUD::_0xD0976CC34002DB57(sParam0))
	{
		HUD::_0xF66090013DE648D5(sParam0);
	}
	else
	{
		return true;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		return true;
	}
	return false;
}

bool func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (MISC::IS_BIT_SET(iLocal_396, 9))
	{
		return true;
	}
	if (Global_1048684->f_377 == 27)
	{
		return false;
	}
	func_175(0, 0, 0, 0);
	switch (Global_1048684->f_377)
	{
		case 0:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_175(7, 2, 0, 0);
			break;
		case 23:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 24:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 25:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 26:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 3);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case 21:
			MISC::SET_BIT(&iLocal_398, 10);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_175(0, 0, 0, 8);
			break;
		case 22:
			MISC::SET_BIT(&iLocal_398, 10);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@@Protector_FailAlive_V1";
			func_175(0, 0, 0, 8);
			break;
		case 1:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_175(4, 2, 0, 0);
			func_176(2);
			break;
		case 2:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_175(4, 2, 0, 0);
			func_176(0);
			break;
		case 3:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_175(5, 0, 0, 0);
			break;
		case 4:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			func_175(4, 0, 0, 0);
			break;
		case 5:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_175(1, 0, 0, 0);
			func_176(2);
			func_176(3);
			break;
		case 6:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			MISC::SET_BIT(&iLocal_398, 5);
			func_175(11, 0, 4, 0);
			break;
		case 7:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_175(8, 0, 0, 0);
			func_176(6);
			func_176(7);
			MISC::SET_BIT(&iLocal_398, 8);
			break;
		case 9:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_175(8, 4, 0, 0);
			func_176(6);
			func_176(7);
			break;
		case 8:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_175(15, 0, 16, 0);
			func_176(2);
			func_176(3);
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			break;
		case 13:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_175(4, 2, 0, 0);
			func_177(5);
			func_177(7);
			MISC::SET_BIT(&iLocal_398, 11);
			break;
		case 12:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_175(1, 0, 0, 0);
			func_176(2);
			func_176(14);
			func_178(6);
			func_178(7);
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_398, 11);
			StringConCat(&cLocal_248, "tombstone_", 64);
			break;
		case 14:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_175(4, 0, 0, 0);
			MISC::SET_BIT(&iLocal_398, 9);
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_398, 11);
			StringConCat(&cLocal_248, "wagon_", 64);
			break;
		case 15:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 16:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 17:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 18:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 19:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 20:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 6))
	{
		MISC::SET_BIT(&iLocal_398, 4);
	}
	func_179();
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (MISC::IS_BIT_SET(iLocal_398, 10))
	{
		if (iVar0 >= 22 || iVar0 <= 5)
		{
			MISC::SET_BIT(&iLocal_396, 31);
			iLocal_278 = 0;
		}
		else if ((iVar0 >= 5 && iVar0 <= 8) || (iVar0 >= 17 && iVar0 <= 22))
		{
			MISC::SET_BIT(&iLocal_396, 30);
			if (MISC::IS_BIT_SET(iLocal_398, 12))
			{
				iLocal_278 = 7;
			}
			else
			{
				iLocal_278 = 18;
			}
		}
		else
		{
			iLocal_278 = 13;
		}
	}
	else if (iVar0 >= 20 || iVar0 <= 5)
	{
		MISC::SET_BIT(&iLocal_396, 31);
		iLocal_278 = 0;
	}
	else if ((iVar0 >= 5 && iVar0 <= 8) || (iVar0 >= 17 && iVar0 <= 20))
	{
		MISC::SET_BIT(&iLocal_396, 30);
		iLocal_278 = 18;
	}
	else
	{
		iLocal_278 = 13;
	}
	iVar1 = Global_3145858->f_221;
	if (iVar1 == 0)
	{
		iVar2 = aggregate.blackwater.func_312(Global_3145858->f_188);
		switch (iVar2)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar1 = 1;
				break;
			case 3:
			case 12:
				iVar1 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar1 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar1 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar1 = 4;
				break;
		}
	}
	switch (iVar1)
	{
		case 1:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = 1834537343;
				iLocal_246 = 22956558;
				iLocal_247 = joaat("clouds");
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.26f, -0.042f, 630f, 2354.531f, -2155.473f, -2101.975f);
					}
					else
					{
						iLocal_247 = joaat("fog");
						func_181(0.354f, -0.55f, 534f, 2695.09f, 1101.355f, -2409.212f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = 324369003;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 31))
				{
					iLocal_247 = joaat("overcastdark");
					func_181(0.386f, -0.072f, 597f, 1831.857f, 29.148f, -1795.856f);
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 17;
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						func_181(-0.04f, 0.323f, 143.5f, -216.629f, 3978.264f, -3208.506f);
					}
					else
					{
						func_181(-0.007f, 0.602f, 374.75f, -35.357f, 146.108f, -3240.619f);
					}
				}
				else
				{
					func_181(0.119f, 0.471f, 374.75f, 1054.363f, 1879.716f, -1177.575f);
				}
			}
			else
			{
				iLocal_243 = -1633151965;
				iLocal_246 = 435889881;
				iLocal_244 = -1616778617;
				iLocal_245 = -1852748182;
				iLocal_247 = joaat("sunny");
			}
			StringConCat(&cLocal_248, "heartlands", 64);
			break;
		case 2:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = -1645988897;
				iLocal_246 = 1614850834;
				iLocal_247 = joaat("fog");
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -281275366;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 19;
				}
			}
			else
			{
				iLocal_243 = 231100670;
				iLocal_246 = -2036638644;
				iLocal_244 = -209782407;
				iLocal_245 = -1068985587;
				iLocal_247 = joaat("misty");
			}
			StringConCat(&cLocal_248, "swamp", 64);
			StringConCat(&cLocal_256, "_swamp", 64);
			break;
		case 3:
			iLocal_247 = joaat("snowlight");
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = 505174455;
				iLocal_246 = 2135160782;
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_247 = joaat("fog");
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -415953049;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 31))
				{
					iLocal_247 = joaat("snow");
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						iLocal_278 = 19;
						iLocal_279 = 40;
						func_181(0.021f, 0.102f, 357.2f, -2480.711f, 2086.622f, -2668.159f);
					}
					else
					{
						iLocal_278 = 20;
						func_181(0.179f, 0.701f, 610.75f, -2571.701f, 2238.057f, -2835.739f);
					}
				}
			}
			else
			{
				iLocal_243 = -1793687930;
				iLocal_246 = 908140270;
				iLocal_244 = 1417440092;
				iLocal_245 = 649433039;
			}
			StringConCat(&cLocal_248, "snow", 64);
			StringConCat(&cLocal_256, "_snow", 64);
			break;
		case 4:
			iLocal_247 = joaat("highpressure");
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_247 = joaat("fog");
						func_181(0.011f, -0.669f, -109.5f, 3843.674f, 407.221f, -81.17f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = 948536844;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_247 = joaat("sunny");
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						iLocal_278 = 20;
					}
					else
					{
						iLocal_278 = 18;
					}
				}
				iLocal_243 = -381473693;
				iLocal_246 = 1980374609;
			}
			else
			{
				iLocal_243 = 1234767744;
				iLocal_246 = 2077558044;
				iLocal_244 = -1336911409;
				iLocal_245 = -1029570958;
			}
			StringConCat(&cLocal_248, "desert", 64);
			StringConCat(&cLocal_256, "_desert", 64);
			break;
		case 5:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_247 = joaat("overcastdark");
				iLocal_243 = 1755785548;
				iLocal_246 = 1481756818;
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(0.839f, 0.768f, 577f, 2412.601f, -2271.631f, -2202.794f);
					}
					else
					{
						iLocal_247 = joaat("fog");
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -1344285417;
				}
				else if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 31))
					{
						iLocal_247 = joaat("clouds");
						func_181(0.978f, -0.448f, 329f, 3233.729f, 262.921f, -2070.11f);
					}
					else if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_278 = 19;
						func_181(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
					}
					else
					{
						func_181(0.738f, 0.189f, 803.75f, 1344.11f, 2463.37f, -1726.229f);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 19;
					func_181(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
				}
				else
				{
					iLocal_247 = joaat("clouds");
					func_181(0.418f, 0.191f, 698.75f, 487.565f, 1166.487f, -492.181f);
				}
			}
			else
			{
				iLocal_247 = joaat("overcastdark");
				func_181(0.648f, -0.814f, 481.25f, -2237.9f, -1281.34f, -3051.36f);
				iLocal_243 = 56660208;
				iLocal_246 = 205032683;
				iLocal_244 = 686788855;
				iLocal_245 = -1228362565;
			}
			StringConCat(&cLocal_248, "forest", 64);
			StringConCat(&cLocal_256, "_forest", 64);
			break;
	}
	if (iVar1 != 0)
	{
		if (MISC::IS_BIT_SET(iLocal_396, 31))
		{
			StringConCat(&cLocal_248, "_night", 64);
		}
		else if (MISC::IS_BIT_SET(iLocal_396, 30))
		{
			StringConCat(&cLocal_248, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_248, "_day", 64);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_398, 10))
	{
		vLocal_234 = { -569.954f, -3648.908f, 81.884f };
	}
	vLocal_234 = { vLocal_234 + func_182() };
	vLocal_240 = { vLocal_240 + func_182() };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_232, vLocal_234, vVar3, 0);
	STREAMING::_0xF01D21DF39554115(0);
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_256, true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::_0x19ABCC581D28E6F9(1);
	MISC::SET_BIT(&iLocal_396, 9);
	return true;
}

bool func_78()
{
	int iVar0;
	int iVar1;

	if (Global_1048684->f_377 == 27)
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 5))
	{
		iLocal_264 = -1180707366;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_232, 1, 0) && !ANIMSCENE::_0x95531A4A20CCE7BC(iLocal_232, 0))
	{
		if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_232, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_232);
		}
		return false;
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_398, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048684->f_376 - 1))
			{
				if ((Global_1048684->f_22[iVar1 /*10*/])->f_9)
				{
					iVar0++;
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = -1;
		}
		func_183(Global_1048684->f_455, iVar0);
	}
	if (!MISC::IS_BIT_SET(iLocal_398, 8))
	{
		aggregate.adlerranch.func_95(iLocal_245);
	}
	return true;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	if (!aggregate.net_gun_for_hire_offline.func_374(iParam0))
	{
		iVar0 = 0;
	}
	if (!aggregate.net_gun_for_hire_offline.func_374(iParam1))
	{
		iVar0 = 0;
	}
	if (!aggregate.net_gun_for_hire_offline.func_374(iParam2))
	{
		iVar0 = 0;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 8))
	{
		if (!aggregate.net_gun_for_hire_offline.func_374(iParam3))
		{
			iVar0 = 0;
		}
	}
	if (!aggregate.binoculars.func_15(&uLocal_365))
	{
		aggregate.fme_animal_tagging_offline.func_66(&uLocal_365, 0, 0);
	}
	else if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_365, 0, 0) > 30000)
	{
		return true;
	}
	return iVar0;
}

bool func_80()
{
	STREAMING::REQUEST_MODEL(iLocal_264, false);
	if (MISC::IS_BIT_SET(iLocal_398, 7))
	{
		STREAMING::REQUEST_MODEL(iLocal_265, false);
	}
	STREAMING::REQUEST_MODEL(joaat("p_chair09x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_crate01x"), false);
	STREAMING::REQUEST_MODEL(-728725588, false);
	STREAMING::REQUEST_MODEL(joaat("p_crate02x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_crate05x"), false);
	if (((((!STREAMING::HAS_MODEL_LOADED(iLocal_264) && !STREAMING::HAS_MODEL_LOADED(joaat("p_chair09x"))) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate01x"))) && !STREAMING::HAS_MODEL_LOADED(-728725588)) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate02x"))) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate05x")))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 7))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
		{
			return false;
		}
	}
	return true;
}

bool func_83()
{
	if (((AUDIO::_0xD9130842D7226045("RDROADV_Winners_Screen_Sounds", 0) && AUDIO::_0xD9130842D7226045("RDRO_Countdown_Clockwork_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Winners_Screen_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(&(Global_1048684->f_460)))
		{
			if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_14) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_15))
			{
				return true;
			}
		}
	}
	return false;
}

void func_84(bool bParam0)
{
	if (!bParam0)
	{
		aggregate.annesburg.func_182(32);
	}
	else
	{
		aggregate.annesburg.func_182(32);
	}
	CAM::_0x63E5841A9264D016(bParam0);
}

void func_93(int iParam0)
{
	if (&Global_1048586 != iParam0)
	{
		Global_1048586 = iParam0;
	}
}

bool func_96()
{
	return (Global_1048576 || Global_2883584) // PointerArith;
}

void func_99(int iParam0)
{
	Global_1099293->f_197.f_13 = iParam0;
}

void func_100()
{
	bool bVar0;

	switch (iLocal_400)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070355->f_27136.f_19.f_4)))
			{
				Global_1048582 = 1;
				iLocal_401 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Global_1070355->f_27136.f_19.f_4), 16512, 0, false, true);
				if (ANIMSCENE::_0x25557E324489393C(iLocal_401))
				{
					StringCopy(&(Global_1070355->f_27136.f_19.f_4), "", 128);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_401);
					aggregate.fme_animal_tagging.func_176(1);
				}
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(1750);
				aggregate.fm_deathmatch_controller.func_49(4096);
			}
			break;
		case 1:
			bVar0 = true;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070355->f_27136.f_19.f_20)))
			{
				if (!AUDIO::PREPARE_MUSIC_EVENT(&(Global_1070355->f_27136.f_19.f_20)))
				{
					bVar0 = false;
				}
			}
			if (ANIMSCENE::_0x477122B8D05E7968(iLocal_401, 1, 0) && bVar0)
			{
				aggregate.fm_deathmatch_controller.func_698(0);
				CAM::DO_SCREEN_FADE_IN(0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_401);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070355->f_27136.f_19.f_20)))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1070355->f_27136.f_19.f_20));
					StringCopy(&(Global_1070355->f_27136.f_19.f_20), "", 128);
				}
				aggregate.fm_deathmatch_controller.func_36(8192);
				aggregate.fme_animal_tagging.func_176(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_401, 0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				aggregate.fme_animal_tagging.func_176(3);
			}
			break;
		case 3:
			aggregate.fm_deathmatch_controller.func_697(0, 0);
			ANIMSCENE::RESET_ANIM_SCENE(iLocal_401, 0);
			aggregate.fme_animal_tagging.func_176(0);
			aggregate.fm_deathmatch_controller.func_49(4096);
			break;
	}
}

void func_101()
{
	if (fLocal_271 != 0f || fLocal_272 != 0f)
	{
		GRAPHICS::_0xB8C984C0D47F4F07(fLocal_271, fLocal_272, iLocal_273);
	}
	if (fLocal_274 != 0f)
	{
		GRAPHICS::_0xC332C91388F5580B(fLocal_274);
	}
	if ((fLocal_275 != 0f || fLocal_276 != 0f) || fLocal_277 != 0f)
	{
		GRAPHICS::_0xFE7966DF01452F32(fLocal_275, fLocal_276, fLocal_277);
	}
}

void func_102()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	Local_32.f_159 = &Global_1051067;
	Local_32.f_160 = &Global_1051068;
	iVar0 = Global_1050004->f_14;
	iLocal_282 = Global_1048684->f_20;
	bVar1 = iVar0 > 1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Global_1050004->f_27[0 /*18*/]))
	{
		func_195();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			(Local_286[iVar2 /*18*/])->f_16 = (Global_1050004->f_27[iVar2 /*18*/])->f_16;
			*(Local_286[iVar2 /*18*/]) = { *(Global_1050004->f_27[iVar2 /*18*/]) };
			(Local_286[iVar2 /*18*/])->f_8 = { (Global_1050004->f_27[iVar2 /*18*/])->f_8 };
			(Local_286[iVar2 /*18*/])->f_17 = (Global_1050004->f_27[iVar2 /*18*/])->f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { *Global_1050842 };
	aggregate.fme_animal_tagging.func_1102(&Local_32);
	MISC::SET_BIT(&(Local_32.f_159), 11);
	if (MISC::IS_BIT_SET(Local_32.f_159, 8))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 8);
	}
	if (MISC::IS_BIT_SET(Local_32.f_159, 20))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 20);
	}
	aggregate.fme_animal_tagging.func_1113(&Local_32, &(Global_1050004->f_101), Global_1050919, 1, 1, bVar1, iLocal_282, iVar0, 0, 0, -1);
	aggregate.fme_animal_tagging.func_1103(&Local_32, Global_1050911);
}

void func_103()
{
	int iVar0;
	char* sVar1;
	bool bVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	bVar2 = Global_1048684->f_17;
	if (Local_32.f_150 > 1)
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "winnerLabelRawText", sVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "winnerLabelColor", joaat("COLOR_WHITE"));
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "winnerNameRawText", &(Global_1048684->f_9));
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "winnerNameColor", bVar2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "mvpLabelRawText", HUD::_GET_LABEL_TEXT("UGC_END_MVP"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "mvpLabelColor", (Local_286[0 /*18*/])->f_17);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "mvpNameRawText", Local_286[0 /*18*/]);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar0, "mvpNameColor", (Local_286[0 /*18*/])->f_17);
}

void func_104(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "enabled", bParam0);
	iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "enabled", bParam0);
}

void func_105(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	func_198(bParam0);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if ((Global_1048684->f_22[iVar0 /*10*/])->f_9)
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!PED::IS_PED_MALE(&(uLocal_405[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_405[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_405[iVar0]), 0);
		}
		else if (!MISC::IS_BIT_SET(iLocal_398, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!PED::IS_PED_MALE(&(uLocal_405[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_405[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_405[iVar0]), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_438[iVar0])))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_438[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_438[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_109()
{
	int iVar0;
	char cVar1[16];

	if (!MISC::IS_BIT_SET(iLocal_399, 5))
	{
		if (MISC::IS_BIT_SET(iLocal_398, 9))
		{
			STREAMING::REQUEST_MODEL(joaat("cart06"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("cart06")))
			{
				iLocal_546 = VEHICLE::CREATE_VEHICLE(joaat("cart06"), vLocal_237, 0f, false, true, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_546, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_546, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, "cart06", iLocal_546, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cart06"));
				MISC::SET_BIT(&iLocal_399, 5);
			}
			return;
		}
		else
		{
			MISC::SET_BIT(&iLocal_399, 5);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 1))
	{
		STREAMING::REQUEST_MODEL(iLocal_264, false);
		if (MISC::IS_BIT_SET(iLocal_398, 7))
		{
			STREAMING::REQUEST_MODEL(iLocal_265, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
			{
				return;
			}
		}
		if (!Global_1048684->f_455)
		{
			STREAMING::REQUEST_MODEL(iLocal_266, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
			{
				return;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iLocal_264))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_267 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_471[iVar0])))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048684->f_455)
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_237, false, true, false, false, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_398, 7))
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_237, false, true, false, false, true);
						}
						else
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_264, vLocal_237, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_264, vLocal_237, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(iLocal_471[iVar0], cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_264);
			if (MISC::IS_BIT_SET(iLocal_398, 7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			}
			MISC::SET_BIT(&iLocal_399, 1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_200(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_488[iVar0])) && MISC::IS_BIT_SET(iLocal_392, iVar0))
				{
					uLocal_488[iVar0] = WEAPON::_0x9888652B8BA77F73(joaat("weapon_repeater_carbine"), 1, vLocal_237, 1, 1065353216 /* Float: 1f */);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(uLocal_488[iVar0], cVar1);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&iLocal_399, 4);
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 3))
	{
		if (MISC::IS_BIT_SET(iLocal_398, 6))
		{
			STREAMING::REQUEST_MODEL(-728725588, false);
			STREAMING::REQUEST_MODEL(joaat("p_crate02x"), false);
			STREAMING::REQUEST_MODEL(joaat("p_crate05x"), false);
			if ((STREAMING::HAS_MODEL_LOADED(-728725588) && STREAMING::HAS_MODEL_LOADED(joaat("p_crate02x"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_crate05x")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[0])))
				{
					iLocal_540[0] = OBJECT::CREATE_OBJECT(-728725588, vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_199(iLocal_540[0], cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[1])))
				{
					iLocal_540[1] = OBJECT::CREATE_OBJECT(joaat("p_crate02x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_199(iLocal_540[1], cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[2])))
				{
					iLocal_540[2] = OBJECT::CREATE_OBJECT(joaat("p_crate05x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_199(iLocal_540[2], cVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-728725588);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_crate02x"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_crate05x"));
				MISC::SET_BIT(&iLocal_399, 3);
				return;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(-2131982726, false);
			if (STREAMING::HAS_MODEL_LOADED(-2131982726))
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_268 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[iVar0])))
					{
						iLocal_540[iVar0] = OBJECT::CREATE_OBJECT(-2131982726, vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_540[iVar0], cVar1);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2131982726);
				MISC::SET_BIT(&iLocal_399, 3);
				return;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_chair09x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_chair09x")))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_269 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_523[iVar0])))
				{
					iLocal_523[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_chair09x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(iLocal_523[iVar0], cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_chair09x"));
			MISC::SET_BIT(&iLocal_399, 2);
			return;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 6))
	{
		STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_200(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_505[iVar0])) && MISC::IS_BIT_SET(iLocal_393, iVar0))
					{
						iLocal_505[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_505[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_399, 6);
			return;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 7))
	{
		STREAMING::REQUEST_MODEL(1666862677, false);
		if (STREAMING::HAS_MODEL_LOADED(1666862677))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_200(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_514[iVar0])) && MISC::IS_BIT_SET(iLocal_394, iVar0))
					{
						iLocal_514[iVar0] = OBJECT::CREATE_OBJECT(1666862677, vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_514[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_399, 7);
			return;
		}
	}
}

int func_110()
{
	if (!aggregate.binoculars.func_15(&uLocal_369))
	{
		aggregate.fme_animal_tagging_offline.func_66(&uLocal_369, 0, 0);
	}
	else if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_369, 0, 0) >= 8500)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		PED::RESURRECT_PED(iVar1);
	}
	if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		TASK::_0x79559BAD83CCD038(iVar1, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
	}
	if (PED::_0xB655DB7582AEC805(iVar1))
	{
		PED::_0xF6262491C7704A63(iVar1, 0);
	}
	PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
}

void func_113()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
		{
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_405[iVar0]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(&(uLocal_405[iVar0]), true);
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_405[iVar0]), true))
			{
				PED::RESURRECT_PED(&(uLocal_405[iVar0]));
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_405[iVar0]), 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_405[iVar0]), true);
			PED::_0xC991EF46FE323867(&(uLocal_405[iVar0]), 1);
			PED::_0x2208438012482A1A(&(uLocal_405[iVar0]), true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
		{
			PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

void func_114(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3[7];
	int iVar53;
	int iVar54;

	func_124();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam0)[iVar0 /*23*/])->f_14 == 255 || ((*uParam0)[iVar0 /*23*/])->f_14 == iLocal_402)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam0)[iVar0 /*23*/])->f_14))
		{
		}
		else
		{
			func_201(((*uParam0)[iVar0 /*23*/])->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iLocal_402);
		if ((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) && _NAMESPACE26::_0x0F99F6436528A089(iVar1)) && _NAMESPACE26::_0x93A91A351A07360E(iVar1))
		{
			iVar53 = _NAMESPACE26::_0xD1BF325C8252A982(iVar1, &Var3);
			if (iVar53 > 1 && iVar53 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar53 - 1))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var3[iVar2 /*7*/]);
					if (iVar54 == 255 || iVar54 == iLocal_402)
					{
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Var3[iVar2 /*7*/]))
					{
					}
					else
					{
						func_201(iVar54);
					}
					iVar2++;
				}
			}
		}
	}
}

bool func_115()
{
	bool bVar0;

	if (!aggregate.binoculars.func_15(&uLocal_371))
	{
		aggregate.fme_animal_tagging_offline.func_66(&uLocal_371, 0, 0);
	}
	if (func_202())
	{
		if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 0, 0) < 0 && iLocal_362 > 2000)
		{
			bVar0 = true;
		}
		else if (aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 0, 0) > 8500)
		{
			bVar0 = true;
		}
		else if (STREAMING::_0x0909F71B5C070797() && aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 0, 0) > 4500)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (iLocal_232 != -1)
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_232, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_232);
					return false;
				}
				else
				{
					aggregate.fme_animal_tagging.func_61(&uLocal_16, 0);
					return true;
				}
			}
		}
		else
		{
			iLocal_362++;
		}
	}
	return false;
}

bool func_117()
{
	float fVar0;

	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_232, 0))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_232);
	if (fVar0 > 0.92f)
	{
		return true;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(iLocal_232) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_232, 0))
	{
		return true;
	}
	if (aggregate.binoculars.func_15(&uLocal_371) && aggregate.fme_animal_tagging_offline.func_100(&uLocal_371, 0, 0) > 30000)
	{
		return true;
	}
	return false;
}

void func_118(bool bParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (bParam0 && MISC::IS_STRING_NULL_OR_EMPTY(Local_286[0 /*18*/]))
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "showMvpComponent", bParam0);
}

void func_119(bool bParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "showWinnerComponent", bParam0);
}

void func_120()
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	struct<2> Var4;

	iVar0 = PLAYER::PLAYER_ID();
	sVar1 = PLAYER::GET_PLAYER_NAME(iVar0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_286[0 /*18*/])) && MISC::ARE_STRINGS_EQUAL(Local_286[0 /*18*/], sVar1))
	{
		Var2 = { aggregate.aberdeenpigfarm.func_107(1329559622, 0) };
		STATS::_0x6A0184E904CDF25E(&Var2, true);
		Global_1049148->f_8 = 1;
		Global_1049232 = &Global_1049232 + 1;
	}
	else
	{
		Global_1049232 = 0;
	}
	Var4 = { aggregate.aberdeenpigfarm.func_107(382097737, 701412595) };
	STATS::_0x91A4F58E01ED5E4C(&Var4, &Global_1049232);
}

bool func_123()
{
	vector3 vVar0;
	int iVar4;

	iVar4 = 361663434;
	if (!func_206())
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
			{
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -871313792 && !MISC::IS_BIT_SET(iLocal_396, 3))
						{
							func_207(1, 0);
							AUDIO::PLAY_SOUND_FRONTEND("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1691214074 && !MISC::IS_BIT_SET(iLocal_396, 3))
						{
							func_207(0, 0);
							AUDIO::PLAY_SOUND_FRONTEND("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1823128591)
						{
							func_208(&uLocal_285);
						}
						else if (vVar0.z == 1535578700)
						{
							func_209();
							CAM::DO_SCREEN_FADE_OUT(150);
							AUDIO::PLAY_SOUND_FRONTEND("enter", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
			}
		}
	}
	else
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
		return true;
	}
	return false;
}

void func_124()
{
	var uVar0;

	if (SCRIPTS::_0x179A6F0EE2E79026(&(Global_1070355->f_21175.f_5)))
	{
		Global_1070355->f_21175.f_5 = uVar0;
	}
}

void func_125()
{
	int iVar0;

	iVar0 = func_211(func_210());
	if (!MISC::IS_BIT_SET(iLocal_396, 6))
	{
		if (iVar0 > 0)
		{
			MISC::SET_BIT(&iLocal_396, 6);
			func_212(&Local_32, &iLocal_231, iVar0);
		}
	}
	else if (iVar0 < 0)
	{
		func_171(&Local_32, &iLocal_231);
	}
	else
	{
		func_213(&iLocal_231, iVar0);
	}
}

void func_126()
{
	char cVar0[32];
	float fVar4;
	bool bVar5;
	float fVar6;
	char cVar7[32];
	int iVar11;
	char[] cVar12[8];

	if (!MISC::IS_BIT_SET(iLocal_397, 2))
	{
		if (aggregate.doc_book.func_308(&(Global_1048684->f_424)))
		{
			fVar4 = (BUILTIN::TO_FLOAT(Global_1048684->f_436) / 100f);
			StringCopy(&cVar0, func_215(fVar4, 2), 32);
			func_216(&Local_32, &cVar0);
			if (Global_1048684->f_459 != 0)
			{
				aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(1532301684, Global_1048684->f_459), Global_1048684->f_436);
			}
			MISC::SET_BIT(&iLocal_397, 2);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_397, 3))
	{
		bVar5 = (aggregate.doc_book.func_308(&(Global_1048684->f_392)) && aggregate.doc_book.func_308(&(Global_1048684->f_408)));
		if (bVar5)
		{
			fVar6 = (BUILTIN::TO_FLOAT((Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8)) / 100f);
			StringCopy(&cVar7, func_215(fVar6, 2), 32);
			func_217(&Local_32, &cVar7);
			iVar11 = (Global_1048684->f_392.f_6 + Global_1048684->f_408.f_6);
			MISC::_INT_TO_STRING(iVar11, "%d", &cVar12);
			func_218(&Local_32, &cVar12);
			if (Global_1048684->f_459 != 0)
			{
				aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1901704681, Global_1048684->f_459), (Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8));
			}
			MISC::SET_BIT(&iLocal_397, 3);
		}
	}
}

void func_135(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	char cVar24[64];
	char cVar32[64];
	int iVar40;
	char cVar41[16];
	int iVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	struct<4> Var52;
	struct<4> Var56;
	struct<4> Var60;
	struct<4> Var64;
	char cVar68[32];
	char cVar72[32];
	char cVar76[32];
	char cVar80[32];

	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam3), 64);
	iVar40 = func_225(uParam0, iParam3);
	if (!MISC::IS_BIT_SET(uParam2->f_15, 0))
	{
		return;
	}
	if (bParam4)
	{
		StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar41, "POS_", 16);
		StringIntConCat(&cVar41, iVar40 + 1, 16);
		StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar41), 64);
		if ((BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 88400000 || BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 72800000) || BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 86400000)
		{
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "POS_OOT"), 64);
		}
		else
		{
			MISC::SET_BIT(&iVar43, 7);
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "UIC_EF_TIM", aggregate.fme_animal_tagging.func_1270(BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_227((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar49 = func_228((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar50 = func_229((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar51 = func_230((*uParam0)[iVar40 /*23*/]);
		Var52 = { func_231(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_232(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_233(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_234(&bVar47) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var52))
		{
			if (bVar44)
			{
				IntToString(&cVar68, iVar48, 32);
				StringConCat(&cVar68, " ", 32);
				StringConCat(&cVar68, &Var52, 32);
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar68), 64);
			}
			else
			{
				cVar68 = { Var52 };
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar68, iVar48), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var56))
		{
			if (bVar45)
			{
				IntToString(&cVar72, iVar49, 32);
				StringConCat(&cVar72, " ", 32);
				StringConCat(&cVar72, &Var56, 32);
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar72), 64);
			}
			else
			{
				cVar72 = { Var56 };
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, &cVar72, iVar49), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var60))
		{
			if (bVar46)
			{
				IntToString(&cVar76, iVar50, 32);
				StringConCat(&cVar76, " ", 32);
				StringConCat(&cVar76, &Var60, 32);
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar76), 64);
			}
			else
			{
				cVar76 = { Var60 };
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(2, &cVar76, iVar50), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var64))
		{
			if (bVar47)
			{
				IntToString(&cVar80, iVar51, 32);
				StringConCat(&cVar80, " ", 32);
				StringConCat(&cVar80, &Var64, 32);
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar80), 64);
			}
			else
			{
				cVar80 = { Var64 };
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(2, &cVar80, iVar51), 64);
			}
		}
	}
	aggregate.fme_animal_tagging.func_307(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, joaat("COLOR_PURE_WHITE"));
	aggregate.fme_animal_tagging.func_61(uParam2, 1);
}

bool func_143(int iParam0)
{
	return &Global_262152 == iParam0;
}

bool func_144()
{
	return CAM::_0xA14D5FE82BCB1D9E();
}

void func_145(int iParam0)
{
	MISC::CLEAR_BIT(Global_1048684, iParam0);
}

void func_147(int iParam0)
{
	aggregate.aberdeenpigfarm.func_106(Global_1051084, iParam0);
}

void func_148(vector3 vParam0, float fParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];

	if (bParam4)
	{
		StringCopy(&cVar0, MISC::_0x6C4DBF553885F9EB(vParam0), 64);
		StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam3, 4), 64);
		Global_1099293->f_504 = { vParam0 };
		Global_1099293->f_507 = fParam3;
		aggregate.annesburg.func_182(49);
	}
	else
	{
		aggregate.annesburg.func_182(49);
	}
}

int func_150(vector3 vParam0, float fParam3)
{
	if (aggregate.annesburg.func_121(vParam0))
	{
		return 0;
	}
	if (aggregate.annesburg.func_181(255) == 4)
	{
		return 0;
	}
	if (aggregate.annesburg.func_232(4, 255))
	{
	}
	aggregate.annesburg.func_182(4);
	aggregate.annesburg.func_186(&(Global_1099293->f_546));
	Global_1099293->f_546.f_6 = { vParam0 };
	Global_1099293->f_546 = fParam3;
	Global_1099293->f_546.f_5 = 1;
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	aggregate.annesburg.func_188(Global_1099293->f_546, 36);
	return 1;
}

bool func_154(bool bParam0)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(&Global_1051088))
	{
		SCRIPTS::_0x7DE4643157AD646C(&Global_1051088);
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT("net_ugc_end_flow_transition_handler");
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_end_flow_transition_handler"))
	{
		Global_1051087 = 0;
		Global_1051088 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_end_flow_transition_handler");
		return true;
	}
	return false;
}

void func_155()
{
	Global_1051087 = 1;
}

void func_156()
{
	Global_1070355->f_27136.f_3 = 0;
	Global_1070355->f_27136.f_4 = 0;
}

void func_163()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_170()
{
	int iVar0;
	char cVar1[16];

	if (iLocal_232 != -1)
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_232, false);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
			{
				PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
			{
				PED::DELETE_PED(uLocal_405[iVar0]);
			}
			iVar0++;
		}
		if (iLocal_232 != -1)
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_232, false);
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_471[iVar0])))
				{
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_471[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_471[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[iVar0])))
				{
					StringCopy(&cVar1, "CRATE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_540[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_540[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_488[iVar0])))
				{
					StringCopy(&cVar1, "RIFLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(uLocal_488[iVar0]));
					OBJECT::DELETE_OBJECT(uLocal_488[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_505[iVar0])))
				{
					StringCopy(&cVar1, "JD_BOTTLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_505[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_505[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_514[iVar0])))
				{
					StringCopy(&cVar1, "SHOVEL_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_514[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_514[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_523[iVar0])))
				{
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_523[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_523[iVar0]);
				}
				iVar0++;
			}
		}
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_232, 0);
		iLocal_232 = -1;
	}
}

void func_171(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", " ");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*iParam1);
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_267 = iParam0;
	iLocal_268 = iParam1;
	iLocal_269 = iParam2;
	iLocal_270 = iParam3;
	if (iLocal_270 == 1)
	{
	}
}

void func_176(int iParam0)
{
	MISC::SET_BIT(&iLocal_392, iParam0);
}

void func_177(int iParam0)
{
	MISC::SET_BIT(&iLocal_393, iParam0);
}

void func_178(int iParam0)
{
	MISC::SET_BIT(&iLocal_394, iParam0);
}

void func_179()
{
	if (iLocal_232 == -1)
	{
		iLocal_232 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_233, 130, 0, false, true);
	}
}

void func_181(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fLocal_271 = fParam0;
	fLocal_272 = fParam1;
	fLocal_274 = fParam2;
	fLocal_275 = fParam3;
	fLocal_276 = fParam4;
	fLocal_277 = fParam5;
}

Vector3 func_182()
{
	switch (iLocal_243)
	{
		case -1645988897:
		case 231100670:
			return 0f, -440f, 0f;
		case -1793687930:
		case 505174455:
			return 0f, -880f, 0f;
		case -381473693:
		case 1234767744:
			return 0f, -1320f, 0f;
		case 56660208:
		case 1755785548:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_183(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 2, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 11, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 10, false);
	}
}

void func_195()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&((Global_1050004->f_101[iVar0 /*23*/])->f_14.f_1), Global_1050004->f_27[0 /*18*/]))
		{
			(Global_1050004->f_101[iVar0 /*23*/])->f_13 = 1;
			return;
		}
		else
		{
			(Global_1050004->f_101[iVar0 /*23*/])->f_13 = 0;
		}
		iVar0++;
	}
}

void func_198(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "enabled", bParam0);
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "enabled", bParam0);
}

void func_199(var uParam0, char[4] cParam1, char[4] cParam2)
{
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cParam1, *uParam0, 0);
}

bool func_200(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if ((Global_1048684->f_22[iVar0 /*10*/])->f_9)
		{
			if (iVar1 == iParam0)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_201(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_21175.f_5), iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070355->f_21175.f_5), iParam0);
		aggregate.fme_animal_tagging.func_733(iParam0);
	}
}

bool func_202()
{
	switch (iLocal_391)
	{
		case 0:
			aggregate.fishing_core.func_108();
			return false;
		case 1:
			func_261();
			return false;
		case 2:
			aggregate.fm_mission_controller.func_2049();
			return false;
		default:
			break;
	}
	return iLocal_391 == 3;
}

bool func_206()
{
	return MISC::IS_BIT_SET(iLocal_396, 8);
}

void func_207(bool bParam0, bool bParam1)
{
	func_198(0);
	if (!bParam1)
	{
		Local_379 = &Global_1050902;
		Local_379.f_2 = Global_1050902->f_2;
		Local_379.f_1 = Global_1050902->f_1;
		Local_379.f_3 = Global_1050902->f_3;
		Local_379.f_5 = 0;
		Local_379.f_7 = Global_1050902->f_7;
		Local_379.f_8 = Global_1050902->f_8;
		if (func_52(2) || func_52(4))
		{
			Local_379.f_4 = 1;
		}
		else
		{
			Local_379.f_4 = 0;
		}
		if (bParam0)
		{
			Local_379.f_6 = 1f;
		}
		else
		{
			Local_379.f_6 = -1f;
		}
		TELEMETRY::_0xEF3C68F56BAD7B69(Global_1050878, &Local_379);
		aggregate.doc_book.func_171(-304137656, 0, 255, 0, 0);
	}
	MISC::SET_BIT(&iLocal_396, 3);
}

void func_208(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (*uParam0)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 1;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "revealScoreboard", *uParam0);
}

void func_209()
{
	func_265();
	func_104(0);
	aggregate.net_fast_travel_barker.func_67(0);
}

int func_210()
{
	if (aggregate.fm_deathmatch_controller.func_265(1))
	{
		return Global_265331->f_124445.f_70.f_18;
	}
	if (((*Global_262996)[&Global_1273882 /*70*/])->f_1.f_18 != 2147483647)
	{
		return ((*Global_262996)[&Global_1273882 /*70*/])->f_1.f_18;
	}
	return -1;
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_266();
	switch (iVar1)
	{
		case -1:
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (&Global_262155->f_1[iVar0 /*5*/] == iParam0)
				{
					return (Global_262155->f_1[iVar0 /*5*/])->f_4;
				}
				iVar0++;
			}
			return -1;
		case 1:
			if (&Global_262155->f_1[Global_262155->f_162 /*5*/] == 2147483647)
			{
				return -1;
			}
			return (Global_262155->f_1[Global_262155->f_162 /*5*/])->f_4;
		default:
			break;
	}
	return -1;
}

void func_212(var uParam0, var uParam1, int iParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", HUD::_GET_LABEL_TEXT("GAME_START_TIMER"));
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimer", func_267(iParam2));
}

void func_213(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, func_267(iParam1));
}

char* func_215(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return aggregate.aberdeenpigfarm.func_103(sVar0, joaat("COLOR_PURE_WHITE"));
}

void func_216(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_06", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_06", sParam1);
}

void func_217(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_07", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_07", sParam1);
}

void func_218(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_08", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_08", sParam1);
}

int func_225(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 == 255)
	{
		return 0;
	}
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam0)[iVar0 /*23*/])->f_14 == iParam1 || MISC::ARE_STRINGS_EQUAL(&(((*uParam0)[iVar0 /*23*/])->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_227(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	fVar0 = uParam0->f_1;
	if (aggregate.fme_animal_tagging.func_1413())
	{
		func_271(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_228(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (aggregate.fme_animal_tagging.func_1413())
	{
		func_271(uParam0, 1);
	}
	else
	{
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (MISC::IS_BIT_SET(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return BUILTIN::ROUND(fVar0);
}

int func_229(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (aggregate.fme_animal_tagging.func_1413())
	{
		func_271(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19) || MISC::IS_BIT_SET(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_230(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (aggregate.fme_animal_tagging.func_1413())
	{
		func_271(uParam0, 3);
	}
	return BUILTIN::ROUND(fVar0);
}

struct<4> func_231(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];
	bool bVar4;

	if (aggregate.fme_animal_tagging.func_1413())
	{
		MemCopy(&cVar0, {func_272(0, bParam2)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_232(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	char cVar0[32];
	bool bVar4;

	if (aggregate.fme_animal_tagging.func_1413())
	{
		MemCopy(&cVar0, {func_272(1, bParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam2, 1) || MISC::IS_BIT_SET(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_233(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	char cVar0[32];
	bool bVar4;

	if (aggregate.fme_animal_tagging.func_1413())
	{
		MemCopy(&cVar0, {func_272(2, bParam3)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_234(bool bParam0)
{
	struct<4> Var0;

	if (aggregate.fme_animal_tagging.func_1413())
	{
		MemCopy(&Var0, {func_272(3, bParam0)}, 4);
	}
	return Var0;
}

void func_258(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939057->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			aggregate.fme_animal_tagging.func_1274(uParam4, &uVar4, uParam0->f_150, bVar16);
			aggregate.fme_animal_tagging.func_1275(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && bVar0 < 5)
					{
						aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_1277(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (bVar0 == 0 || iVar2 >= iVar13)
				{
					if (aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)) && bVar0 < 5)
					{
						aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (bVar0 <= iVar3)
		{
			bVar18 = iVar3;
			while (bVar18 >= bVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, bVar18);
				bVar18 = (bVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		aggregate.fme_animal_tagging.func_1274(uParam4, &uVar4, uParam0->f_150, bVar16);
		aggregate.net_impromptu_race_online.func_427(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, bVar0);
					bVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
							bVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
				bVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || bVar0 > 0)
	{
		if (bVar0 < 3)
		{
			bVar20 = bVar0;
			while (bVar20 <= 3)
			{
				aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[bVar20]), "LeaderboardListItemBlank", iVar3, bVar0);
				bVar0++;
				bVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (bVar0 <= iVar3)
	{
		bVar21 = iVar3;
		while (bVar21 >= bVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, bVar21);
			bVar21 = (bVar21 + -1);
		}
	}
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(&(uLocal_405[iVar0])) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
		{
			return;
		}
		iVar0++;
	}
	aggregate.fme_animal_tagging.func_176(2);
}

void func_265()
{
	MISC::SET_BIT(&iLocal_396, 8);
}

var func_266()
{
	return &Global_262155;
}

char* func_267(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return HUD::_0xD8402B858F4DDD88(&cVar1, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
}

int func_271(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return BUILTIN::ROUND(uParam0->f_5);
		case 1:
			return BUILTIN::ROUND(uParam0->f_6);
		case 2:
			return BUILTIN::ROUND(uParam0->f_7);
		case 3:
			return BUILTIN::ROUND(uParam0->f_8);
		default:
			break;
	}
	return 0;
}

struct<16> func_272(int iParam0, bool bParam1)
{
	char cVar0[128];

	StringCopy(&cVar0, "", 128);
	if (&Global_3145858->f_50929[iParam0 /*2*/] > -1)
	{
		*bParam1 = !aggregate.fme_animal_tagging.func_1714(&(Global_3145858->f_50929[iParam0 /*2*/]));
		return *(Global_3145858->f_42116[&Global_3145858->f_50929[iParam0 /*2*/] /*18*/]);
	}
	return cVar0;
}

void func_291(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	if (Global_1939057->f_108)
	{
		aggregate.net_impromptu_race_online.func_467(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		aggregate.fme_animal_tagging.func_1114(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				bVar1++;
				aggregate.net_impromptu_race_online.func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", aggregate.fme_animal_tagging.func_1257(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", bVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				bVar4 = aggregate.fme_animal_tagging.func_1258(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						aggregate.fme_animal_tagging.func_1259(uParam0, uParam1, iVar0, bParam3, bVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", bVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", aggregate.fme_animal_tagging.func_1260());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", aggregate.fme_animal_tagging.func_1261(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (aggregate.fme_animal_tagging.func_1262())
					{
						if (aggregate.fme_animal_tagging.func_1263(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", aggregate.fme_animal_tagging.func_1264(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = aggregate.fme_animal_tagging.func_1268((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar7 = aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = aggregate.fme_animal_tagging.func_1545((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", bVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = bVar1;
	}
}

