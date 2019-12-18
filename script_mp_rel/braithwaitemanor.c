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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21[34] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_19 = -1;
	iLocal_59 = 20000;
	iLocal_62 = vScriptParam_0.x;
	iLocal_60 = vScriptParam_0.z;
	bLocal_64 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_61 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_61)
		{
			iLocal_61 = 0;
			aggregate_func_4561(iLocal_62, &iLocal_60);
			switch (iLocal_60)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_63 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_60 = 1;
					}
					else
					{
						iLocal_60 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						bLocal_64 = false;
						iLocal_60 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_62);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_62)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_62), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_62));
					Global_1896608 = -1;
					iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
					iLocal_60 = 3;
					break;
				case 3:
					if (func_13() || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_62);
						iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
						iLocal_60 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_62);
						iLocal_63 = (MISC::GET_GAME_TIMER() + iLocal_59);
						iLocal_60 = 5;
					}
					break;
				case 5:
					if (aggregate_func_4332(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_62);
						iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
						iLocal_60 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_62)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_62), 4) && !iLocal_63 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_62, 4);
								iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
								iLocal_60 = 8;
							}
							Jump @816; //curOff = 532
							aggregate_func_4245(iLocal_62);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4245(iLocal_62);
							aggregate_func_4245(iLocal_62);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_60 = 9;
							Jump @816; //curOff = 600
							aggregate_func_7690(iLocal_62);
							aggregate_func_2893();
							iLocal_60 = 10;
							Jump @816; //curOff = 617
							aggregate_func_4554(Global_1896662);
							aggregate_func_6727(iLocal_62, Global_1896662);
							iLocal_60 = 11;
							Jump @816; //curOff = 642
							aggregate_func_4588(iLocal_62);
							aggregate_func_4343(iLocal_62, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_60 = 12;
							Jump @816; //curOff = 692
							if (func_40(iLocal_62))
							{
								iLocal_61 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_62);
							aggregate_func_4467(iLocal_62);
							aggregate_func_4343(iLocal_62, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_62 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_62 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_62 /*36*/])->f_12);
							}
							Jump @816; //curOff = 793
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_62 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_62 /*36*/])->f_13);
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

bool func_13()
{
	iLocal_18 = ((*Global_1887327)[99 /*36*/])->f_5;
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, true);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(472704883))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(472704883, true);
	}
	return true;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iLocal_21[0] = 1595076728;
	iLocal_21[1] = 1439227364;
	iLocal_21[2] = -1072865219;
	iLocal_21[3] = 1620578985;
	iLocal_21[4] = 1606293329;
	iLocal_21[5] = 1913469935;
	iLocal_21[6] = -1664744776;
	iLocal_21[7] = -1375427275;
	iLocal_21[8] = 1970779164;
	iLocal_21[9] = -2018125672;
	iLocal_21[10] = 530930529;
	iLocal_21[11] = 1299101427;
	iLocal_21[12] = 23338719;
	iLocal_21[13] = 785447352;
	iLocal_21[14] = -461544174;
	iLocal_21[15] = -764395272;
	iLocal_21[16] = -368185289;
	iLocal_21[17] = -656945717;
	iLocal_21[18] = 248030525;
	iLocal_21[19] = 606588923;
	iLocal_21[20] = 825059846;
	iLocal_21[21] = -964389706;
	iLocal_21[22] = -152106360;
	iLocal_21[23] = 473912616;
	iLocal_21[24] = -1099020037;
	iLocal_21[25] = 1799856783;
	iLocal_21[26] = 1518993684;
	iLocal_21[27] = 426802898;
	iLocal_21[28] = -908387367;
	iLocal_21[29] = 1909255102;
	iLocal_21[30] = -415917122;
	iLocal_21[31] = 409697833;
	iLocal_21[32] = -1649837912;
	iLocal_21[33] = -1874862635;
	if (aggregate_func_3730(99, 255))
	{
		return;
	}
	iLocal_19 = AUDIO::GET_SOUND_ID();
	if (iLocal_19 == -1)
	{
	}
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(1010.465f, -1772.747f, 54.474f, 0f, 0f, 0f, 46.182f, 45.55f, 29.43f);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x84CCF9A12942C83D(iVar0, iVar1, 3, 1, 1871313379, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1);
		PHYSICS::SET_DISABLE_FRAG_DAMAGE(iVar4, true);
		PHYSICS::SET_DISABLE_BREAKING(iVar4, true);
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

bool func_40(int iParam0)
{
	int iVar0;

	if (aggregate_func_6721(&bLocal_20) && !aggregate_func_3730(99, 255))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_21)
		{
			if (bLocal_20)
			{
				aggregate_func_1155(&(iLocal_21[iVar0]), 0, 0f, 0, 0, 0, 1, 0);
			}
			iVar0++;
		}
	}
	if (iLocal_19 != -1)
	{
		if (aggregate_func_1518(473295046) && !aggregate_func_4276(44))
		{
			if (aggregate_func_1520(Global_35, iLocal_18, 0, 0))
			{
				if (AUDIO::_0x84848E1C0FC67DBB(iLocal_19))
				{
					AUDIO::_0xDCF5BA95BBF0FABA(iLocal_19, "MAIN_LOOP", 1011.224f, -1766.506f, 46.5833f, "FIRE_SMOLDER_LARGE_SOUNDSET", 0, 0, false);
				}
			}
			else if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_19))
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_19);
			}
		}
	}
	return false;
}

void func_84(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_18);
		POPULATION::_0xA1CFB35069D23C23(iLocal_18);
	}
	if (iLocal_19 != -1)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_19))
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_19);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_19);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, false);
	}
	iParam0 = iParam0;
}

