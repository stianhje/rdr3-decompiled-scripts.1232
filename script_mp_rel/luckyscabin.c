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
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	vector3 vLocal_21 = { 0f, 0f, 0f };
	vector3 vLocal_24 = { 0f, 0f, 0f };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_19 = joaat("p_strongbox01x");
	vLocal_21 = { -613.3514f, 529.5198f, 94.413f };
	vLocal_24 = { 0f, 0f, -50f };
	iLocal_33 = 20000;
	iLocal_36 = vScriptParam_0.x;
	iLocal_34 = vScriptParam_0.z;
	bLocal_38 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_35 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_35)
		{
			iLocal_35 = 0;
			aggregate_func_4561(iLocal_36, &iLocal_34);
			switch (iLocal_34)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_37 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_34 = 1;
					}
					else
					{
						iLocal_34 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						bLocal_38 = false;
						iLocal_34 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_36);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_36)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_36), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_36));
					Global_1896608 = -1;
					iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
					iLocal_34 = 3;
					break;
				case 3:
					if (aggregate_func_4244() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_36);
						iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
						iLocal_34 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_36);
						iLocal_37 = (MISC::GET_GAME_TIMER() + iLocal_33);
						iLocal_34 = 5;
					}
					break;
				case 5:
					if (aggregate_func_4332(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_36);
						iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
						iLocal_34 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_36)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_36), 4) && !iLocal_37 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_36, 4);
								iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
								iLocal_34 = 8;
							}
							Jump @850; //curOff = 566
							aggregate_func_4245(iLocal_36);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4245(iLocal_36);
							aggregate_func_4245(iLocal_36);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_34 = 9;
							Jump @850; //curOff = 634
							aggregate_func_4245(iLocal_36);
							aggregate_func_2893();
							iLocal_34 = 10;
							Jump @850; //curOff = 651
							aggregate_func_4554(Global_1896662);
							aggregate_func_4960(iLocal_36, Global_1896662);
							iLocal_34 = 11;
							Jump @850; //curOff = 676
							aggregate_func_4588(iLocal_36);
							aggregate_func_4343(iLocal_36, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_34 = 12;
							Jump @850; //curOff = 726
							if (func_40(iLocal_36))
							{
								iLocal_35 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_36);
							aggregate_func_4467(iLocal_36);
							aggregate_func_4343(iLocal_36, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_36 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_36 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_36 /*36*/])->f_12);
							}
							Jump @850; //curOff = 827
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_36 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_36 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate_func_917(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate_func_4251() != -1)
						{
							aggregate_func_2819();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_40(int iParam0)
{
	func_60();
	func_61();
	return false;
}

void func_60()
{
	switch (iLocal_28)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_19, false);
			STREAMING::REQUEST_ANIM_DICT("MECH_RANSACK@LOCKBOX@MED@0CM@OPENUNLOCKED@A");
			if (STREAMING::HAS_MODEL_LOADED(iLocal_19) && STREAMING::HAS_ANIM_DICT_LOADED("MECH_RANSACK@LOCKBOX@MED@0CM@OPENUNLOCKED@A"))
			{
				func_91();
				if (NETWORK::_0xFBE782B3165AC8EC(-448258490))
				{
					iLocal_20 = OBJECT::CREATE_OBJECT(joaat("p_strongbox01x"), vLocal_21, false, false, false, true, true);
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1513415814))
				{
					iLocal_20 = OBJECT::CREATE_OBJECT(joaat("p_strongbox01x"), vLocal_21, false, false, false, true, true);
				}
				else
				{
					iLocal_20 = OBJECT::CREATE_OBJECT(joaat("p_strongbox01x"), vLocal_21, false, false, false, false, true);
				}
				DECORATOR::DECOR_SET_BOOL(iLocal_20, "chest_local_only", true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_20, vLocal_24, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_20, true);
				if (NETWORK::_0xFBE782B3165AC8EC(-448258490))
				{
					TASK::_0x188F8071F244B9B8(iLocal_20, 1);
					ENTITY::PLAY_ENTITY_ANIM(iLocal_20, "base_lockbox", "MECH_RANSACK@LOCKBOX@MED@0CM@OPENUNLOCKED@A", 1f, false, true, false, 0f, 0);
					iLocal_28 = 2;
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1513415814))
				{
					iLocal_28 = 2;
				}
				else
				{
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			if (func_92(iLocal_20))
			{
				if (!aggregate_func_4638(-448258490, 0, 255, 1, 0))
				{
				}
				iLocal_28 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_61()
{
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_27))
	{
		iLocal_27 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_21);
	}
	switch (iLocal_29)
	{
		case 0:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_27) && iLocal_27 == INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35))
			{
				if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
				}
				NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, false, 256);
				NETWORK::_0x89D803CD48622150(1);
				iLocal_29 = 1;
			}
			break;
		case 1:
			if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)) || iLocal_27 != INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35))
			{
				if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
				}
				NETWORK::_0x89D803CD48622150(0);
				iLocal_29 = 0;
			}
			break;
		default:
			iLocal_29 = 0;
			break;
	}
}

void func_78(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		VOLUME::_DELETE_VOLUME(iLocal_18);
	}
	if (DECORATOR::DECOR_EXIST_ON(iLocal_20, "chest_local_only"))
	{
		DECORATOR::DECOR_REMOVE(iLocal_20, "chest_local_only");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		OBJECT::DELETE_OBJECT(&iLocal_20);
	}
	if (iLocal_29 == 1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		}
		NETWORK::_0x89D803CD48622150(0);
	}
}

void func_91()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		vVar0 = { -615.837f, 530.269f, 94.935f };
		vVar3 = { 0f, 0f, -140.167f };
		vVar6 = { 7f, 8f, 5f };
		iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, "LuckysCabin");
		NETWORK::_0xEEB7818B1D307212(iLocal_18);
	}
}

bool func_92(int iParam0)
{
	struct<2> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar4) == 1352063587)
		{
			if (SCRIPTS::GET_EVENT_DATA(0, iVar4, &Var0, 4))
			{
				if (Var0.f_1 == iParam0)
				{
					if (Var0 == Global_35)
					{
						return true;
					}
				}
			}
		}
		iVar4++;
	}
	return false;
}

