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
	struct<37> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 255, 0, 0, 8000, 0, 4, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_50 = 8;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 8;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	struct<45> Local_68[32];
	struct<481> Local_1509 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 0, 0, 2, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1990 = 8;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 8;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 3;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	float fLocal_2014 = 0f;
	float fLocal_2015 = 0f;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.ambient_fishing_scenario.func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 55, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 55, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_68, 1441, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_68[0 /*45*/]), 1441, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Local_13.f_36.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_35()
{
	func_97();
	func_98();
	func_99();
	func_100();
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_MPREAA", &(Local_1509.f_18.f_112)))
	{
	}
	else
	{
		aggregate.nb_animal_attack.func_101(32);
	}
	if (!STREAMING::_0x19A6BE7D9C6884D3(-493351432, 4194319, 0, 0))
	{
	}
	else
	{
		aggregate.nb_animal_attack.func_101(512);
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 8;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_24[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_24[iVar1]));
				aggregate.la_alligator.func_141(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_63()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!aggregate.annesburg.func_121(((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3))
			{
				if (aggregate.fme_king_of_the_castle.func_602((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/]))
				{
					GRAPHICS::_0x9CF1836C03FB67A2((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/], 1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_69()
{
	if (aggregate.nb_animal_attack.func_161(32))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1509.f_18.f_112);
		aggregate.nb_animal_attack.func_101(32);
	}
	if (aggregate.nb_animal_attack.func_161(64))
	{
		if (!func_163(4194304, -1, 1))
		{
			if (!func_163(16, -1, 1))
			{
				if (aggregate.nb_animal_attack.func_164(1, Local_1509.f_4))
				{
					aggregate.nb_animal_attack.func_165(1, Local_1509.f_4);
				}
			}
		}
	}
	func_166();
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			(Local_68[iVar1 /*45*/])->f_6.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	aggregate.la_bear.func_167(&(Local_1509.f_272), &(Local_1509.f_272.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_36.f_10[iVar0] = 0;
			Local_13.f_36.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_68[iVar1 /*45*/])->f_17.f_18[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_97()
{
	Local_1509.f_18 = func_184();
	Local_1509.f_18.f_3 = func_185();
	Local_1509.f_18.f_2 = func_186();
	Local_1509.f_18.f_1 = func_187();
}

void func_98()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			aggregate.nb_animal_attack.func_189(0, 1657260860);
			aggregate.nb_animal_attack.func_189(0, 54369366);
			aggregate.nb_animal_attack.func_189(0, "ANNESBURG_HUSBAND");
			break;
		case 1:
			aggregate.nb_animal_attack.func_189(0, 1657260860);
			aggregate.nb_animal_attack.func_189(0, -1676093373);
			aggregate.nb_animal_attack.func_189(0, "0898_A_M_M_Civ_Poor_Hispanic_AVOID_03");
			break;
		case 2:
			aggregate.nb_animal_attack.func_189(0, 739677348);
			if (!func_192())
			{
				aggregate.nb_animal_attack.func_189(0, -1089988108);
			}
			else
			{
				aggregate.nb_animal_attack.func_189(0, -1941645950);
			}
			break;
		case 3:
			aggregate.nb_animal_attack.func_189(0, 739677348);
			if (!func_192())
			{
				aggregate.nb_animal_attack.func_189(0, -330402688);
			}
			else
			{
				aggregate.nb_animal_attack.func_189(0, -1707839135);
			}
			break;
		case 4:
			aggregate.nb_animal_attack.func_189(0, -460918927);
			aggregate.nb_animal_attack.func_189(0, 54369366);
			aggregate.nb_animal_attack.func_189(0, "0871_A_F_M_Civ_White_AVOID_03");
			break;
		case 5:
			aggregate.nb_animal_attack.func_189(0, -1993145727);
			if (!func_192())
			{
				aggregate.nb_animal_attack.func_189(0, -613035313);
			}
			else
			{
				aggregate.nb_animal_attack.func_189(0, 864297986);
			}
			break;
		case 6:
			aggregate.nb_animal_attack.func_189(0, -1993145727);
			if (!func_192())
			{
				aggregate.nb_animal_attack.func_189(0, -2007618391);
			}
			else
			{
				aggregate.nb_animal_attack.func_189(0, 36520277);
			}
			break;
		default:
			aggregate.nb_animal_attack.func_189(0, -460918927);
			aggregate.nb_animal_attack.func_189(0, 54369366);
			break;
	}
	aggregate.nb_animal_attack.func_189(1, func_193(997958153 /* GXTEntry: "Riding" */, 1));
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			func_195(2, 7, joaat("a_c_wolf_medium"));
			aggregate.fme_challenges.func_1518(7);
			aggregate.fme_challenges.func_1518(6);
			aggregate.fme_challenges.func_1518(5);
			break;
		case 1:
			func_195(2, 5, joaat("a_c_cougar_01"));
			aggregate.fme_challenges.func_1518(5);
			aggregate.fme_challenges.func_1518(4);
			break;
		case 2:
			func_195(2, 4, joaat("a_c_bear_01"));
			aggregate.fme_challenges.func_1518(4);
			aggregate.fme_challenges.func_1518(3);
			break;
		case 3:
			func_195(2, 7, joaat("a_c_coyote_01"));
			aggregate.fme_challenges.func_1518(7);
			aggregate.fme_challenges.func_1518(6);
			aggregate.fme_challenges.func_1518(5);
			break;
	}
	aggregate.nb_animal_attack.func_197(0, 1.08f, -0.25f, 4f, 0f, 0);
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			aggregate.nb_animal_attack.func_197(2, -4.57f, 1.56f, 1.33f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, -4.7f, -1.28f, 1.12f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, -4.78f, 3.28f, 1.49f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, -6.95f, 0.88f, 1.91f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -4.13f, -4.46f, 0.52f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -8.1f, -1.52f, 1.96f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, 2146.479f, 1699.756f, 126.1787f, 0f, 1);
			break;
		case 1:
			aggregate.nb_animal_attack.func_197(2, -4.57f, 1.56f, 1.33f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, -4.7f, -1.28f, 1.12f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, -4.78f, 3.28f, 1.49f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, -6.95f, 0.88f, 1.91f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -4.13f, -4.46f, 0.52f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -8.1f, -1.52f, 1.96f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, 2196.458f, -65.12277f, 51.69089f, 0f, 1);
			break;
		case 2:
			aggregate.nb_animal_attack.func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1026.511f, -763.9223f, 59.91287f, 90f, 1);
			break;
		case 3:
			aggregate.nb_animal_attack.func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1131.267f, -188.0226f, 89.48042f, -90f, 1);
			break;
		case 4:
			aggregate.nb_animal_attack.func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1378.722f, -486.0876f, 119.948f, -132.96f, 1);
			break;
		case 5:
			aggregate.nb_animal_attack.func_197(2, 3.19f, 0.32f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 2.88f, 1.95f, 1.41f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 3.74f, -1.75f, 1.54f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 4.72f, 0f, 1.58f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, 4.73f, 1.67f, 1.49f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, 2.6f, -4.08f, 1.72f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1026.219f, -447.3527f, 88.40855f, -90f, 1);
			break;
		case 6:
			aggregate.nb_animal_attack.func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -305.0638f, 186.1677f, 62.79143f, 0f, 1);
			break;
		case 7:
			aggregate.nb_animal_attack.func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -474.993f, 320.4474f, 44.2365f, 90f, 1);
			break;
		case 8:
			aggregate.nb_animal_attack.func_197(2, 6.91f, -0.98f, 1.76f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, 5.16f, 2.39f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, 2.81f, -3.19f, 1.5f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, 2.25f, 4.66f, 1.82f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -8.66f, 3.67f, 1.46f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -5.86f, -5f, 1.1f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1309.068f, -1355.282f, 89.12616f, -90f, 1);
			break;
		case 9:
			aggregate.nb_animal_attack.func_197(2, -2.15f, 4.74f, 1.51f, 0f, 0);
			aggregate.nb_animal_attack.func_197(3, -3.55f, 3.19f, 1.12f, 0f, 0);
			aggregate.nb_animal_attack.func_197(4, -4.36f, -0.15f, 0.53f, 0f, 0);
			aggregate.nb_animal_attack.func_197(5, -1.88f, -3.92f, 0.25f, 0f, 0);
			aggregate.nb_animal_attack.func_197(6, -5.79f, 0.23f, 0.51f, 0f, 0);
			aggregate.nb_animal_attack.func_197(7, -2.47f, 8.37f, 2.07f, 0f, 0);
			aggregate.nb_animal_attack.func_197(1, -1558.919f, 1680.141f, 234.3666f, -90f, 1);
			break;
	}
}

void func_99()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 3:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 4:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 5:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.16f, 0.69f, 3.01f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 6:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 7:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, 1.25f, 1.2f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 8:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
		case 9:
			func_199(0, joaat("p_lantern05x"));
			func_200(0, -2.79f, -2.23f, 0.53f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
	}
}

void func_100()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			aggregate.nb_animal_attack.func_201(0, 0, -3.98f, 0.9f, 1.12f, 5f, 260, 1);
			break;
	}
}

bool func_116()
{
	if (aggregate.nb_animal_attack.func_161(512))
	{
		if (!STREAMING::_0x9427C94D2E4094A4(-493351432, 0))
		{
			return false;
		}
		if (!TASK::_0x841475AC96E794D1(Local_13.f_7.f_16))
		{
			Local_13.f_7.f_16 = TASK::CREATE_SCENARIO_POINT(-493351432, aggregate.la_alligator.func_241(1) - Vector(0.5f, 0f, 0f), aggregate.la_alligator.func_240(1), 0, 0, 0);
		}
	}
	return true;
}

bool func_122()
{
	if (func_214())
	{
		if (Local_13.f_7.f_15 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
			{
				return true;
			}
		}
		else
		{
			Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	func_215();
	Local_13.f_7.f_9 = func_216(0, 150f, 0);
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			switch (aggregate.fme_supply_train.func_900())
			{
				case 0:
					func_219();
					break;
				case 1:
					func_220();
					break;
				case 2:
					func_221();
					break;
				case 4:
					func_222();
					break;
				case 5:
					func_223();
					break;
				case 3:
					func_224();
					break;
			}
			break;
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					switch (aggregate.fme_supply_train.func_900())
					{
						case 0:
							func_226();
							break;
						case 1:
							func_227();
							break;
						case 2:
							func_228();
							break;
						case 4:
							func_229();
							break;
						case 5:
							func_230();
							break;
						case 3:
							func_231();
							break;
					}
					break;
				case 1:
					switch (aggregate.fme_supply_train.func_900())
					{
						case 0:
							func_232();
							break;
						case 1:
							func_233();
							break;
						case 2:
							func_234();
							break;
						case 4:
							func_235();
							break;
						case 5:
							func_236();
							break;
						case 3:
							func_237();
							break;
					}
					break;
			}
			break;
	}
	return false;
}

bool func_124()
{
	if (TASK::_0x841475AC96E794D1(Local_13.f_7.f_16))
	{
		TASK::_0x81948DFE4F5A0283(Local_13.f_7.f_16);
	}
	return true;
}

void func_129()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1509.f_480 >= 8)
		{
			Local_1509.f_480 = 0;
		}
		func_245(aggregate.annesburg.func_253(Local_1509.f_480));
		Local_1509.f_480++;
		iVar0++;
	}
}

bool func_131()
{
	switch (Local_1509.f_18.f_4)
	{
		case 0:
			if (aggregate.nb_animal_attack.func_161(512))
			{
				if (!STREAMING::_0x9427C94D2E4094A4(-493351432, 0))
				{
					return false;
				}
			}
			if (!func_246())
			{
				return false;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
				{
					Local_1509.f_18.f_7 = ANIMSCENE::_CREATE_ANIM_SCENE(func_247(), 0, func_248(), true, true);
					Local_13.f_7.f_4 = NETWORK::_0xE0D73CDDEA79DDCD(Local_1509.f_18.f_7);
				}
				if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
				{
					aggregate.fm_deathmatch_controller.func_1034();
					return false;
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1509.f_18.f_7);
				}
			}
			else
			{
				return NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4);
			}
			Local_1509.f_18.f_4 = 1;
			return false;
		case 1:
			if (!ANIMSCENE::_0x477122B8D05E7968(Local_1509.f_18.f_7, 1, 0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (aggregate.fm_deathmatch_controller.func_962() == 0)
			{
				if (aggregate.fm_deathmatch_controller.func_962() == 1)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_repeater_carbine"), 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_repeater_carbine"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_melee_torch"), 1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_melee_torch"), false, 1, true, false);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 336, true);
			TASK::_0xE8C296B75EACC357(iVar0, 0f);
			if (aggregate.fm_deathmatch_controller.func_962() == 0)
			{
				PED::_0xAE6004120C18DF97(iVar0, 0, false);
			}
			if (aggregate.fm_deathmatch_controller.func_962() == 1)
			{
				PED::_0xA762C9D6CF165E0D(iVar0, "OverloadMostInjuredBodyPart", "LeftLeg", -1);
			}
		}
	}
	iVar1 = 2;
	while (iVar1 <= 7)
	{
		func_256(iVar1);
		iVar1++;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
		{
			Local_1509.f_18.f_7 = NETWORK::_0xD7F6781A0ABAF6FB(Local_13.f_7.f_4);
			if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
			{
			}
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4))
	{
		func_257();
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1509.f_18.f_7, Local_1509.f_15, 0f, 0f, func_258(), 2);
		ANIMSCENE::START_ANIM_SCENE(Local_1509.f_18.f_7);
	}
	iVar2 = aggregate.fm_deathmatch_controller.func_2604(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (TASK::_0x841475AC96E794D1(Local_13.f_7.f_16))
			{
				PHYSICS::_0x06AADE17334F7A40(iVar2, func_259());
				TASK::_TASK_USE_SCENARIO_POINT(iVar2, Local_13.f_7.f_16, 0, 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	if (func_260())
	{
		func_261();
	}
	func_262(60f);
	func_263(35f, 75f, 1, 1077936128 /* Float: 3f */, 0);
	func_264(1065353216 /* Float: 1f */, 5f);
	func_266(-432403087, aggregate.fme_challenges.func_1469(), 0f, 0f, 0f, 10f, 10f, 10f);
	func_266(-1612834106, aggregate.fme_challenges.func_1469() + Vector(0f, 10f, 10f), 0f, 0f, 0f, 10f, 10f, 10f);
	func_267(aggregate.fm_deathmatch_controller.func_2604(0));
	func_267(aggregate.fm_deathmatch_controller.func_2604(2));
	func_267(aggregate.fm_deathmatch_controller.func_2604(3));
	aggregate.fm_deathmatch_controller.func_2592(0, -1393798041);
	aggregate.fm_deathmatch_controller.func_2592(1, -1030655937);
	aggregate.fm_deathmatch_controller.func_2592(2, -1315007749);
	aggregate.nb_animal_attack.func_269(0, 0);
	aggregate.nb_animal_attack.func_269(1, 1);
}

void func_146()
{
	int iVar0;

	func_280();
	func_281();
	func_282(0);
	func_283();
	func_284();
	func_285();
	func_286();
	func_287();
	func_288();
	func_289();
	func_290();
	if (aggregate.fm_deathmatch_controller.func_962() > 1 && aggregate.fm_deathmatch_controller.func_962() < 3)
	{
		func_292(40f);
	}
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					func_293();
					break;
				case 1:
					func_294();
					break;
				case 2:
					func_295();
					break;
				case 4:
					func_296();
					break;
				case 5:
					func_297();
					break;
				case 3:
					func_298();
					break;
			}
			break;
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					switch (aggregate.fm_deathmatch_controller.func_962())
					{
						case 0:
							func_299();
							break;
						case 1:
							func_300();
							break;
						case 2:
							func_301();
							break;
						case 4:
							func_302();
							break;
						case 5:
							func_303();
							break;
						case 3:
							func_304();
							break;
					}
					break;
				case 1:
					switch (aggregate.fm_deathmatch_controller.func_962())
					{
						case 0:
							func_305();
							break;
						case 1:
							func_306();
							break;
						case 2:
							func_307();
							break;
						case 4:
							func_308();
							break;
						case 5:
							func_309();
							break;
						case 3:
							func_310();
							break;
					}
					break;
			}
			break;
	}
	if (!aggregate.nb_animal_attack.func_161(16))
	{
		if (aggregate.fme_dead_drop.func_811() || func_312())
		{
			aggregate.nb_animal_attack.func_101(16);
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				aggregate.la_bear.func_255(iVar0);
				iVar0++;
			}
		}
	}
	else if (!(aggregate.fme_dead_drop.func_811() || func_312()))
	{
		aggregate.nb_animal_attack.func_101(16);
	}
}

bool func_149()
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4))
		{
			iVar0 = NETWORK::_0xD7F6781A0ABAF6FB(Local_13.f_7.f_4);
			ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
		}
	}
	iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::PED_TO_NET(iVar1)))
	{
		PED::_0x24C82EF607105FAA(iVar1, joaat("timid"));
	}
	if (aggregate.nb_animal_attack.func_161(32))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1509.f_18.f_112);
		aggregate.nb_animal_attack.func_101(32);
	}
	return true;
}

bool func_163(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return aggregate.aberdeenpigfarm.func_175((Local_68[iParam1 /*45*/])->f_1, iParam0);
}

void func_166()
{
	if (aggregate.nb_animal_attack.func_161(524288))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
		aggregate.nb_animal_attack.func_101(524288);
	}
}

int func_184()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_185()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_186()
{
	int iVar0;

	iVar0 = aggregate.fme_animal_tagging.func_505();
	if (func_185() == 1)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_187()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 1:
			if (aggregate.fme_supply_train.func_900() >= 4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			return 0;
	}
	return 0;
}

bool func_192()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

int func_193(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153: /* GXTEntry: "Riding" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150: /* GXTEntry: "Draft" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174: /* GXTEntry: "Race" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379: /* GXTEntry: "War" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671: /* GXTEntry: "Work" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		aggregate.nb_animal_attack.func_189(aggregate.annesburg.func_253(iVar0), iParam2);
		iVar0++;
	}
}

void func_199(int iParam0, int iParam1)
{
	func_340(0, iParam0, iParam1);
}

void func_200(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_341(0, iParam0, vParam1, fParam4, iParam5);
}

bool func_209(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(8))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (aggregate.la_alligator.func_203(iVar2, 4))
		{
		}
		else if (!aggregate.la_alligator.func_204(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return false;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return false;
			}
			return true;
		}
	}
}

bool func_214()
{
	if (Local_13.f_7 == 6)
	{
		return (ENTITY::IS_ENTITY_DEAD(aggregate.fm_deathmatch_controller.func_2604(0)) || !func_351(0, 40f));
	}
	return false;
}

void func_215()
{
	if (!aggregate.nb_animal_attack.func_161(4))
	{
		if (func_353(16, 0) || func_353(32, 0))
		{
			func_354(4);
		}
	}
}

int func_216(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || aggregate.medium_update.func_116(iVar0))
			{
				if (aggregate.nb_animal_attack.func_356(iParam0, fParam1, iVar0, 0))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_219()
{
	int iVar0;
	bool bVar1;

	func_357();
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	bVar1 = false;
	if (aggregate.nb_animal_attack.func_161(4))
	{
		if (!aggregate.la_alligator.func_184())
		{
			aggregate.nb_animal_attack.func_358();
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
	{
		bVar1 = true;
	}
	if (aggregate.la_alligator.func_184())
	{
		if (bVar1 || ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
		{
			if (aggregate.nb_animal_attack.func_161(4) || func_353(1073741824 /* Float: 2f */, 1))
			{
				if (aggregate.nb_animal_attack.func_161(4) || !aggregate.la_bear.func_250(0))
				{
					aggregate.fme_animal_tagging.func_212(1);
				}
			}
		}
	}
}

void func_220()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		aggregate.fme_animal_tagging.func_212(2);
	}
	else if (func_353(1024, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		aggregate.la_alligator.func_227(64);
	}
}

void func_221()
{
	if (func_363(4, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
}

void func_222()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			if (!aggregate.la_bear.func_250(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (aggregate.la_bear.func_250(10))
		{
			aggregate.fme_animal_tagging.func_212(6);
			return;
		}
	}
	if (!aggregate.fm_race_controller.func_1990() || PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(0), true))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!aggregate.nb_animal_attack.func_161(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
		}
	}
}

void func_223()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8388608, 0))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
}

void func_224()
{
	int iVar0;

	if (func_353(16, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8192, 0))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			aggregate.fme_animal_tagging.func_212(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!aggregate.nb_animal_attack.func_161(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

void func_226()
{
	int iVar0;
	bool bVar1;

	func_357();
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	bVar1 = false;
	if (aggregate.nb_animal_attack.func_161(4))
	{
		if (!aggregate.la_alligator.func_184())
		{
			aggregate.nb_animal_attack.func_358();
		}
	}
	if (!aggregate.nb_animal_attack.func_161(256))
	{
		if (func_353(1073741824 /* Float: 2f */, 0))
		{
			func_354(256);
		}
	}
	if ((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || aggregate.nb_animal_attack.func_161(4))
	{
		bVar1 = true;
	}
	if (aggregate.la_alligator.func_184())
	{
		if (bVar1 || ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
		{
			if (bVar1 || func_353(536870912, 1))
			{
				if (bVar1 || !aggregate.la_bear.func_250(0))
				{
					aggregate.fme_animal_tagging.func_212(1);
				}
			}
		}
	}
}

void func_227()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		aggregate.fme_animal_tagging.func_212(2);
	}
	else if (func_353(1024, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		aggregate.la_alligator.func_227(64);
	}
}

void func_228()
{
	if (func_363(4, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
}

void func_229()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			if (!aggregate.la_bear.func_250(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (aggregate.la_bear.func_250(10))
		{
			aggregate.fme_animal_tagging.func_212(6);
			return;
		}
	}
	if (!aggregate.fm_race_controller.func_1990() || PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(0), true))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!aggregate.nb_animal_attack.func_161(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
		}
	}
}

void func_230()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8388608, 0))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
}

void func_231()
{
	int iVar0;

	if (func_353(16, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8192, 0))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			aggregate.fme_animal_tagging.func_212(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!aggregate.nb_animal_attack.func_161(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

void func_232()
{
	func_357();
	if (func_353(268435456, 0))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "Cower", 1))
		{
			aggregate.fme_animal_tagging.func_212(1);
		}
	}
}

void func_233()
{
	int iVar0;

	if (func_353(32768, 0))
	{
		aggregate.fme_animal_tagging.func_212(2);
	}
	else if (func_353(1024, 0))
	{
		aggregate.fme_animal_tagging.func_212(3);
		iVar0 = func_361(35f);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_5 = iVar0;
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_354(8);
		}
		aggregate.la_alligator.func_227(64);
	}
}

void func_234()
{
	if (func_363(4, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
}

void func_235()
{
	int iVar0;

	if (!func_364(1103626240 /* Float: 25f */))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			if (!aggregate.la_bear.func_250(10))
			{
				func_366(0, 10, 1744022339, 0);
			}
		}
	}
	if (func_353(33554432, 0))
	{
		if (aggregate.la_bear.func_250(10))
		{
			aggregate.fme_animal_tagging.func_212(6);
			return;
		}
	}
	if (!aggregate.fm_race_controller.func_1990() || PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(0), true))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else
	{
		if (func_353(64, 1))
		{
			if (!aggregate.nb_animal_attack.func_161(8))
			{
				iVar0 = func_361(35f);
				if (NETWORK::_0x255A5EF65EDA9167(iVar0))
				{
					Local_13.f_7.f_5 = iVar0;
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(8);
				}
			}
			else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
			{
				func_368(8);
			}
		}
		if (!func_353(16, 0))
		{
			if (func_353(128, 0))
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
		}
	}
}

void func_236()
{
	if (func_353(16, 0) || func_353(4194304, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8388608, 0))
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
}

void func_237()
{
	int iVar0;

	if (func_353(16, 0))
	{
		aggregate.fme_animal_tagging.func_212(4);
	}
	else if (!aggregate.fm_race_controller.func_1990())
	{
		aggregate.fme_animal_tagging.func_212(6);
	}
	else if (func_363(8192, 0))
	{
		if (!aggregate.la_bear.func_250(0))
		{
			aggregate.fme_animal_tagging.func_212(5);
		}
	}
	else if (func_353(64, 0))
	{
		if (!aggregate.nb_animal_attack.func_161(8))
		{
			iVar0 = func_361(35f);
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				Local_13.f_7.f_5 = iVar0;
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_354(8);
			}
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
		{
			func_368(8);
		}
	}
}

void func_245(int iParam0)
{
	int iVar0;

	if (aggregate.nb_animal_attack.func_372(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (aggregate.nb_animal_attack.func_373(iParam0, aggregate.annesburg.func_253(iVar0)))
			{
				if (!aggregate.nb_animal_attack.func_373(iParam0, aggregate.annesburg.func_253(iVar0)))
				{
					if (func_375(iParam0, iVar0))
					{
						aggregate.fme_challenges.func_1108(&(Local_1509.f_480.f_19[iVar0]), 0, 0);
						aggregate.nb_animal_attack.func_269(iParam0, aggregate.annesburg.func_253(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_246()
{
	bool bVar0;

	bVar0 = true;
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			func_378(0, &bVar0);
			break;
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					func_378(1, &bVar0);
					break;
				case 1:
					func_378(4, &bVar0);
					break;
			}
			func_378(5, &bVar0);
			break;
	}
	if (!bVar0)
	{
	}
	return bVar0;
}

char* func_247()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			return "script@beat@wilderness@animalattack@re_aa_male_tree_b";
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					return "script@beat@wilderness@animalattack@re_aa_male_rock_b";
				case 1:
					return "script@beat@wilderness@animalattack@re_aa_female_rock";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_248()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			return "PBL_SHOOTING";
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					return "PBL_STRUGGLE";
				case 1:
					return "PBL_HELP";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_249()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Local_1509.f_132.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate.la_alligator.func_212(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1509.f_132.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1509.f_132.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_1509.f_132.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_250()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (MISC::IS_BIT_SET((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = aggregate.la_alligator.func_205(iVar0, iVar1);
				if (aggregate.la_alligator.func_206(iVar1))
				{
					if (((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_1509.f_256.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @336; //curOff = 244
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_1509.f_256.f_1[iVar0 /*14*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_1509.f_256.f_1[iVar0 /*14*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @336; //curOff = 310
					}
					else
					{
						MISC::SET_BIT(&((Local_1509.f_256.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

void func_252()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_254()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!aggregate.annesburg.func_121(((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3))
			{
				if (!aggregate.fme_king_of_the_castle.func_602((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/]))
				{
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1509.f_15, 0f, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_3) };
					(*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/] = GRAPHICS::_0xFA50F79257745E74(vVar2, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_6, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_2, ((*Local_1509.f_409[iVar0 /*29*/])[iVar1 /*7*/])->f_1, 0);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_256(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::_0xFD6943B6DF77E449(iVar0, false);
			TASK::_0x9DE63896B176EA94(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 388, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
			if (aggregate.nb_animal_attack.func_161(32))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_1509.f_18.f_112);
			}
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 39, false);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 163, 3f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			PED::SET_PED_ACCURACY(iVar0, 100);
			PED::SET_PED_COMBAT_RANGE(iVar0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
			PED::SET_COMBAT_FLOAT(iVar0, 12, 0.2f);
			vVar1 = { func_381() };
			if (!aggregate.annesburg.func_121(vVar1))
			{
				func_382(iVar0, vVar1);
			}
			iVar4 = func_383(iParam0);
			PED::_0xCE6B874286D640BB(iVar0, iVar4);
			PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
			iVar5 = Local_13.f_7.f_9;
			if (iVar5 < 1)
			{
				iVar5 = 1;
			}
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					iVar6 = 150;
					iVar7 = 50;
					break;
				case 3:
					iVar6 = 100;
					iVar7 = 50;
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 43, true);
					break;
				case 1:
					iVar6 = 200;
					iVar7 = 50;
					break;
				case 2:
					iVar6 = 300;
					iVar7 = 75;
					break;
			}
			iVar6 = (iVar6 + (iVar5 * iVar7));
			ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, iVar6);
			ENTITY::_SET_ENTITY_HEALTH(iVar0, iVar6, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 263, true);
			func_384(iParam0);
		}
	}
}

void func_257()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "male", aggregate.fm_deathmatch_controller.func_2604(0), 0);
			break;
		case 1:
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "male", aggregate.fm_deathmatch_controller.func_2604(0), 0);
					break;
				case 1:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "Female", aggregate.fm_deathmatch_controller.func_2604(0), 0);
					break;
			}
			switch (aggregate.fm_deathmatch_controller.func_962())
			{
				case 0:
				case 3:
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "wolf_01", aggregate.fm_deathmatch_controller.func_2604(2), 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1509.f_18.f_7, "wolf_02", aggregate.fm_deathmatch_controller.func_2604(3), 0);
					break;
			}
			break;
	}
}

float func_258()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			return 184.32f;
		case 1:
			return -179.28f;
		case 2:
			return 67.1f;
		case 3:
			return 57.819f;
		case 8:
			return 149.647f;
		case 9:
			return 170.64f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_259()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			return 2146.565f, 1701.607f, 127.6218f;
		case 1:
			return 2196.453f, -62.66473f, 53.34224f;
		case 2:
			return -1028.484f, -763.9722f, 61.22373f;
		case 3:
			return -1129.483f, -187.9624f, 90.61844f;
		case 4:
			return -1377.694f, -487.0783f, 121.284f;
		case 5:
			return -1024.635f, -447.3425f, 89.81026f;
		case 6:
			return -305.0812f, 188.0179f, 64.05087f;
		case 7:
			return -477.3718f, 320.4106f, 45.55801f;
		case 8:
			return -1306.86f, -1355.559f, 90.71972f;
		case 9:
			return -1556.754f, 1680.392f, 235.9928f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_260()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 2:
		case 3:
		case 5:
		case 6:
			return true;
	}
	return false;
}

int func_261()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 2:
			aggregate.fme_escaped_convicts.func_1516(&(Local_1509.f_18.f_14), aggregate.fm_deathmatch_controller.func_2604(0), "RE005_MALE5", 0);
			break;
		case 3:
			aggregate.fme_escaped_convicts.func_1516(&(Local_1509.f_18.f_14), aggregate.fm_deathmatch_controller.func_2604(0), "RE005_MALE7", 0);
			break;
		case 5:
			aggregate.fme_escaped_convicts.func_1516(&(Local_1509.f_18.f_14), aggregate.fm_deathmatch_controller.func_2604(0), "RE005_FEMALE6", 0);
			break;
		case 6:
			aggregate.fme_escaped_convicts.func_1516(&(Local_1509.f_18.f_14), aggregate.fm_deathmatch_controller.func_2604(0), "RE005_FEMALE2", 0);
			break;
	}
	return 1;
}

void func_262(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		aggregate.nb_animal_attack.func_189(aggregate.annesburg.func_253(iVar0), fParam0);
		iVar0++;
	}
}

void func_263(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_1509.f_439.f_2 = iParam2;
	Local_1509.f_439.f_9 = fParam0;
	Local_1509.f_439.f_10 = fParam1;
	Local_1509.f_439.f_8 = iParam3;
	if (bParam4)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_1509.f_439.f_12), 1);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(&(Local_1509.f_439.f_12), 1);
	}
}

void func_264(int iParam0, float fParam1)
{
	aggregate.aberdeenpigfarm.func_106(&(Local_1509.f_439.f_12), 2);
	Local_1509.f_439.f_7 = fParam1;
	Local_1509.f_439.f_5 = iParam0;
}

int func_266(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_1509.f_439.f_11))
	{
		Local_1509.f_439.f_11 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NB_Trigger");
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_1509.f_439.f_11))
	{
		switch (iParam0)
		{
			case -1612834106:
				VOLUME::_0x39816F6F94F385AD(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
			case -432403087:
				VOLUME::_0x5B7D7BF36D2DE18B(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
			case 665633627:
				VOLUME::_0xBCE668AAF83608BE(Local_1509.f_439.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	if (func_387(iParam0, &(Local_1509.f_439.f_13)))
	{
		Local_1509.f_439++;
		return 1;
	}
	return 0;
}

void func_276()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1509.f_132.f_96 >= 8)
		{
			Local_1509.f_132.f_96 = 0;
		}
		iVar0 = Local_1509.f_132.f_96;
		Local_1509.f_132.f_96++;
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_1509.f_132.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_68[iVar3 /*45*/])->f_6.f_2[iVar0] > -1f)
			{
				(Local_68[iVar3 /*45*/])->f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1509.f_132.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1509.f_132.f_97, iVar0))
		{
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1509.f_132.f_97), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_68[iVar3 /*45*/])->f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_68[iVar3 /*45*/])->f_6.f_1), iVar0);
				}
				aggregate.barcustomer_interaction.func_43(Local_1509.f_132.f_98[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_68[iVar3 /*45*/])->f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_1509.f_132.f_98[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_1509.f_132.f_98[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_1509.f_132.f_98[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_68[iVar3 /*45*/])->f_6.f_1), iVar0);
			}
		}
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_399(iVar7))
						{
							if (!aggregate.la_alligator.func_204(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate.la_alligator.func_225(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate.la_alligator.func_203(iVar7, 8))
			{
				if (!func_399(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1509.f_132.f_97 != 0)
	{
		if (!aggregate.la_alligator.func_226(1, -1))
		{
			aggregate.la_alligator.func_227(1);
		}
	}
	else if (aggregate.la_alligator.func_226(1, -1))
	{
		aggregate.la_alligator.func_227(1);
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_404();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_68[iVar15 /*45*/])->f_17.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 3)
	{
		if (Local_1509.f_272.f_126 >= 8)
		{
			Local_1509.f_272.f_126 = 0;
		}
		iVar1 = Local_1509.f_272.f_126;
		Local_1509.f_272.f_126++;
		iVar12++;
		iVar8 = aggregate.annesburg.func_253(iVar1);
		if (!aggregate.la_bear.func_247(iVar8))
		{
		}
		else if (aggregate.la_bear.func_248(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_408(iVar8);
				if (aggregate.la_bear.func_250(iVar8))
				{
					if (aggregate.la_bear.func_251(iVar8))
					{
						if (!aggregate.la_bear.func_252(iVar8))
						{
							aggregate.la_bear.func_253(iVar8);
						}
					}
					if (aggregate.la_bear.func_254(iVar8))
					{
						aggregate.la_bear.func_255(iVar8);
					}
				}
				else
				{
					if (aggregate.la_bear.func_247(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate.la_bear.func_257(iVar8, -1))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_416(iVar8))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (aggregate.la_bear.func_259(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate.fme_condor_egg.func_1292(vVar5.x, vVar5.y, &(Local_1509.f_272), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_1509.f_272.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_1509.f_272))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1509.f_272.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_1509.f_272.f_1 & 256 != 0)
							{
								if ((Local_68[iVar15 /*45*/])->f_17.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_68[iVar15 /*45*/])->f_17.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_1509.f_272))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_420(iVar8, iVar4, bVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
								}
								aggregate.la_bear.func_263(iVar8, 1);
								Jump @768; //curOff = 680
								if (aggregate.la_bear.func_264(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_68[iVar15 /*45*/])->f_17.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_68[iVar15 /*45*/])->f_17.f_7), iVar8);
								}
								if (aggregate.la_bear.func_250(iVar8))
								{
									if (!aggregate.la_bear.func_259(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_425(iVar8))
											{
											}
											else
											{
												func_426(iVar8);
												aggregate.la_bear.func_269(iVar8);
												Jump @1017; //curOff = 822
												if (aggregate.la_bear.func_270(iVar8))
												{
												}
												else if (iVar13 < 4)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 4)
														{
															if (&Local_1509.f_272.f_128[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1509.f_272.f_128[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1509.f_272.f_128[iVar8];
																Local_1509.f_272.f_128[iVar8] = &Local_1509.f_272.f_128[iVar8] + 1;
															}
															iVar14++;
															if (aggregate.la_bear.func_271(iVar0, &iVar11, &iVar10, &iVar9))
															{
																if (!aggregate.la_bear.func_272(iVar8, iVar10))
																{
																	if (aggregate.la_bear.func_257(iVar8, iVar0))
																	{
																		if (!func_431(iVar8, iVar11, iVar10, iVar9))
																		{
																		}
																		else
																		{
																			aggregate.la_bear.func_274(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_280()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_1509.f_18.f_10 = -1;
	Local_1509.f_18.f_11 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1509.f_18.f_11 = (Local_1509.f_18.f_11 || (Local_68[iVar0 /*45*/])->f_1);
			Local_1509.f_18.f_10 = (Local_1509.f_18.f_10 && (Local_68[iVar0 /*45*/])->f_1);
			if (iVar0 != iVar1)
			{
				(Local_68[iVar1 /*45*/])->f_1.f_2 = ((Local_68[iVar1 /*45*/])->f_1.f_2 || (Local_68[iVar0 /*45*/])->f_1.f_2);
				if ((Local_68[iVar0 /*45*/])->f_1.f_1 > (Local_68[iVar1 /*45*/])->f_1.f_1)
				{
					(Local_68[iVar1 /*45*/])->f_1.f_1 = (Local_68[iVar0 /*45*/])->f_1.f_1;
				}
				if ((Local_68[iVar0 /*45*/])->f_1.f_3 > (Local_68[iVar1 /*45*/])->f_1.f_3)
				{
					(Local_68[iVar1 /*45*/])->f_1.f_3 = (Local_68[iVar0 /*45*/])->f_1.f_3;
				}
				if ((Local_68[iVar0 /*45*/])->f_1.f_4 != 0)
				{
					if ((Local_68[iVar1 /*45*/])->f_1.f_4 == 0 || NETWORK::IS_TIME_MORE_THAN((Local_68[iVar0 /*45*/])->f_1.f_4, (Local_68[iVar1 /*45*/])->f_1.f_4))
					{
						(Local_68[iVar1 /*45*/])->f_1.f_4 = (Local_68[iVar0 /*45*/])->f_1.f_4;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_281()
{
	if (aggregate.fme_supply_train.func_900() != aggregate.fm_deathmatch_controller.func_962())
	{
		func_437(aggregate.fm_deathmatch_controller.func_962(), aggregate.fme_supply_train.func_900());
		aggregate.fm_mission_controller.func_1093(Local_13.f_7);
	}
}

void func_282(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (Local_1509.f_18.f_12 == 8 || aggregate.nb_animal_attack.func_161(2))
	{
		return;
	}
	if (bParam0)
	{
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(aggregate.fm_deathmatch_controller.func_2604(iVar0)) && !PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(iVar0), true))
			{
				return;
			}
			iVar0++;
		}
		aggregate.nb_animal_attack.func_101(2);
		return;
	}
	bVar1 = false;
	iVar2 = aggregate.fm_deathmatch_controller.func_2604(Local_1509.f_18.f_12);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		Local_1509.f_18.f_12++;
		if (Local_1509.f_18.f_12 == 8)
		{
			aggregate.nb_animal_attack.func_101(2);
		}
	}
}

void func_283()
{
	int iVar0;
	int iVar1;

	if (!aggregate.nb_animal_attack.func_161(4))
	{
		if (func_353(16, 0))
		{
			aggregate.nb_animal_attack.func_101(4);
			iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				}
			}
			if (!func_353(4096, 0))
			{
				iVar1 = 2;
				while (iVar1 <= 7)
				{
					if (aggregate.la_bear.func_250(iVar1))
					{
						aggregate.la_bear.func_269(iVar1);
					}
					iVar1++;
				}
			}
		}
	}
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 2;
	if (func_163(4096, -1, 1))
	{
		iVar2 = 2;
		while (iVar2 <= 7)
		{
			iVar0 = aggregate.fm_deathmatch_controller.func_2604(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!PED::IS_PED_FLEEING(iVar0))
				{
					if (aggregate.fme_supply_train.func_928(iVar0, 518218985, 1, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar0, true);
					}
				}
			}
			iVar2++;
		}
		return;
	}
	if (Local_13.f_7.f_9 >= Local_13.f_7.f_10)
	{
		switch (aggregate.fm_deathmatch_controller.func_962())
		{
			case 2:
				return;
			case 1:
				iVar3 = 1;
				break;
			case 3:
				iVar3 = 2;
				break;
			case 0:
				iVar3 = 2;
				break;
		}
		if (Local_1509.f_18.f_8 <= iVar3 && Local_1509.f_18.f_8 > -1)
		{
			aggregate.la_alligator.func_227(4096);
			iVar1 = 2;
			while (iVar1 <= 7)
			{
				iVar0 = aggregate.fm_deathmatch_controller.func_2604(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (aggregate.fme_supply_train.func_928(iVar0, 518218985, 1, 0))
					{
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar0, true);
						PED::SET_PED_COMBAT_MOVEMENT(iVar0, 1);
						func_441(iVar1, 0);
					}
				}
				iVar1++;
			}
			return;
		}
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_353(16, 0))
	{
		return;
	}
	if (aggregate.nb_animal_attack.func_161(2))
	{
		return;
	}
	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 2;
	while (iVar0 <= 7)
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_68[iVar2 /*45*/])->f_1.f_2, iVar0))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), Local_1509.f_15) >= 60f)
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, Local_1509.f_15, 4, 0, 99999f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar1, true);
						func_441(iVar0, 0);
						func_442(iVar0);
						MISC::SET_BIT(&((Local_68[iVar2 /*45*/])->f_1.f_2), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_286()
{
	int iVar0;

	if (func_353(524288, 1))
	{
		return;
	}
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (aggregate.dynamic_craft_scenario.func_86(PLAYER::PLAYER_PED_ID(), iVar0, 1))
		{
			aggregate.la_alligator.func_227(524288);
		}
	}
}

void func_287()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_184())
	{
		iVar0 = Local_1509.f_18.f_8;
		Local_1509.f_18.f_8 = 0;
		iVar1 = 2;
		while (iVar1 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(aggregate.fm_deathmatch_controller.func_2604(iVar1)))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(iVar1), true))
				{
					Local_1509.f_18.f_8++;
				}
				if (!func_163(16777216, -1, 1) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(aggregate.fm_deathmatch_controller.func_2604(iVar1), PLAYER::PLAYER_PED_ID(), 1, 1))
				{
					aggregate.la_alligator.func_227(16777216);
				}
			}
			iVar1++;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (iVar0 > 0)
			{
				if (iVar0 != Local_1509.f_18.f_8)
				{
					func_354(128);
				}
			}
		}
	}
}

void func_288()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (!func_353(67108864, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
			{
				WEAPON::_0xCEF4C65DE502D367(iVar0, 1, 1, 1, 0);
				aggregate.la_alligator.func_227(67108864);
			}
		}
	}
}

void func_289()
{
	if (!aggregate.nb_animal_attack.func_161(524288))
	{
		if (func_444())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MC_SUSPENSE_HIGH");
			aggregate.nb_animal_attack.func_101(524288);
		}
	}
	else if (!func_444())
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
		aggregate.nb_animal_attack.func_101(524288);
	}
}

void func_290()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.fm_deathmatch_controller.func_962() == 3)
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				iVar2 = 2;
				while (iVar2 <= 7)
				{
					iVar0 = aggregate.fm_deathmatch_controller.func_2604(iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1))
						{
							aggregate.butchercreek.func_92(iVar1, 0, 0);
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_292(float fParam0)
{
	if (aggregate.nb_animal_attack.func_161(64))
	{
		return;
	}
	if (fParam0 > 0f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(aggregate.fm_deathmatch_controller.func_2604(0)))
		{
			if (!aggregate.nb_animal_attack.func_356(0, fParam0, -1, 0))
			{
				return;
			}
		}
	}
	aggregate.nb_animal_attack.func_101(64);
	aggregate.nb_animal_attack.func_358();
	aggregate.nb_animal_attack.func_446();
	aggregate.medium_update.func_285(1, Local_1509.f_4);
}

void func_293()
{
	bool bVar0;
	int iVar1;

	func_448();
	func_449();
	func_450();
	bVar0 = aggregate.nb_animal_attack.func_161(4);
	if (!aggregate.la_alligator.func_184())
	{
		if (func_451())
		{
			aggregate.nb_animal_attack.func_358();
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
			}
		}
	}
	else
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
		{
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
			}
		}
		if (!bVar0)
		{
			iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
			if (!func_353(1073741824 /* Float: 2f */, 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!aggregate.la_bear.func_250(0))
					{
						func_366(0, 7, 1744022339, 0);
						aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!aggregate.la_bear.func_250(0))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_SHOOT", true, true);
					}
				}
			}
		}
	}
}

void func_294()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	func_449();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
		}
	}
	if (!func_163(32768, -1, 1))
	{
		if (func_353(32768, 0))
		{
			aggregate.la_alligator.func_227(32768);
			return;
		}
	}
	if (!func_163(16384, -1, 1))
	{
		aggregate.la_alligator.func_227(16384);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_366(0, 4, 1744022339, 0);
			func_452(200f);
		}
	}
	else
	{
		func_450();
		if (!aggregate.nb_animal_attack.func_161(1))
		{
			if (func_363(16384, 0))
			{
				aggregate.nb_animal_attack.func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			aggregate.la_alligator.func_227(32768);
			if (func_353(512, 0))
			{
				aggregate.la_alligator.func_227(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(256, 1))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "HANG_LOOP", 1))
					{
						aggregate.la_alligator.func_227(256);
					}
				}
			}
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || aggregate.fme_escaped_convicts.func_1249())
			{
				if (aggregate.la_bear.func_250(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					aggregate.la_alligator.func_227(32768);
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (aggregate.nb_animal_attack.func_161(4))
			{
				if (!func_353(512, 0))
				{
					if (func_364(1103626240 /* Float: 25f */))
					{
						if (func_456())
						{
							if (func_457())
							{
								if (func_458())
								{
									if (func_455("PBL_THANKS", 0))
									{
										aggregate.la_alligator.func_227(512);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_366(0, 9, 291934926, 0);
			}
			aggregate.la_alligator.func_227(32768);
		}
	}
}

void func_295()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0))
			{
				aggregate.la_alligator.func_227(1);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::_0xAE6004120C18DF97(iVar0, 0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 138, true);
				aggregate.la_alligator.func_227(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				if (!func_353(512, 0))
				{
					PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 0, false, false, false);
					PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				PED::_0xAE6004120C18DF97(iVar0, 0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 138, true);
				aggregate.la_alligator.func_227(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				aggregate.la_alligator.func_227(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!aggregate.barcustomer_interaction.func_46(iVar0, -2017877118))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, aggregate.fm_deathmatch_controller.func_2604(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, aggregate.fme_challenges.func_1469(), 0, 0, 99999f, -1, aggregate.fm_deathmatch_controller.func_2604(1));
						aggregate.fme_condor_egg.func_1296(iVar0, &iVar1, 0, 0, 1, 1);
						aggregate.la_alligator.func_227(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (func_461())
			{
				aggregate.la_alligator.func_227(4);
			}
		}
	}
}

void func_296()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								aggregate.la_alligator.func_227(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (aggregate.nb_animal_attack.func_161(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										aggregate.la_alligator.func_227(128);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_297()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(8388608, 0))
	{
		aggregate.la_alligator.func_227(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate.la_bear.func_250(0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || aggregate.dynamic_craft_scenario.func_86(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					aggregate.la_alligator.func_227(8388608);
				}
			}
		}
	}
	else
	{
		aggregate.la_alligator.func_227(8388608);
	}
}

void func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!aggregate.la_bear.func_250(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							aggregate.la_alligator.func_227(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		aggregate.la_alligator.func_227(8192);
		func_464();
	}
}

void func_299()
{
	bool bVar0;
	int iVar1;

	func_449();
	func_450();
	bVar0 = aggregate.nb_animal_attack.func_161(4);
	if (!aggregate.la_alligator.func_184())
	{
		if (func_451())
		{
			aggregate.nb_animal_attack.func_358();
		}
		else
		{
			func_448();
		}
	}
	else
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (func_260())
		{
			if (!func_353(1073741824 /* Float: 2f */, 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!aggregate.la_bear.func_250(0))
					{
						func_366(0, 7, 1744022339, 0);
						aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
					}
				}
			}
			else if (!func_353(536870912, 1))
			{
				if (aggregate.nb_animal_attack.func_161(256))
				{
					if (bVar0 || !aggregate.la_bear.func_250(0))
					{
						if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
						{
							if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
							}
							else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "NO_AMMO", 1))
							{
								func_366(0, 8, 1744022339, 0);
								aggregate.la_alligator.func_227(536870912);
							}
						}
					}
				}
			}
		}
		else if (!func_353(1073741824 /* Float: 2f */, 1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!aggregate.la_bear.func_250(0))
				{
					func_366(0, 4, 1744022339, 0);
					aggregate.la_alligator.func_227(1073741824 /* Float: 2f */);
				}
			}
		}
		else if (!func_353(536870912, 1))
		{
			if (aggregate.nb_animal_attack.func_161(256))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
					{
						if (aggregate.la_bear.func_250(4))
						{
							if (!aggregate.la_bear.func_250(0))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
							}
						}
					}
					else if (!aggregate.la_bear.func_250(0))
					{
						func_366(0, 5, 1744022339, 0);
						aggregate.la_alligator.func_227(536870912);
					}
				}
			}
		}
	}
}

void func_300()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	func_449();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1890122679))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
		}
	}
	if (!func_163(32768, -1, 1))
	{
		if (func_353(32768, 0))
		{
			aggregate.la_alligator.func_227(32768);
			return;
		}
	}
	if (!func_163(16384, -1, 1))
	{
		aggregate.la_alligator.func_227(16384);
		if (!func_260())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!func_353(134217728, 1))
				{
					func_366(0, 7, 1744022339, 0);
					func_452(200f);
				}
			}
		}
	}
	else
	{
		func_450();
		if (!aggregate.nb_animal_attack.func_161(1))
		{
			if (func_363(16384, 0))
			{
				aggregate.nb_animal_attack.func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			aggregate.la_alligator.func_227(32768);
			if (func_353(512, 0))
			{
				aggregate.la_alligator.func_227(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || aggregate.fme_escaped_convicts.func_1249())
			{
				if (aggregate.la_bear.func_250(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					aggregate.la_alligator.func_227(32768);
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (!func_353(256, 0))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_STRUGGLE", true, true);
					}
				}
				if (!aggregate.la_bear.func_250(0))
				{
					if (func_455("PBL_COWER", "KICK_LOOP_A"))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
							WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
						}
						if (!func_260())
						{
							func_366(0, 8, 1744022339, 0);
						}
						aggregate.la_alligator.func_227(256);
					}
				}
			}
			else if (!func_353(512, 0))
			{
				if (func_364(1103626240 /* Float: 25f */))
				{
					if (func_456())
					{
						if (func_457())
						{
							if (func_458())
							{
								if (func_455("PBL_THANKS", 0))
								{
									aggregate.la_alligator.func_227(512);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_366(0, 9, 291934926, 0);
			}
			aggregate.la_alligator.func_227(32768);
		}
	}
}

void func_301()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			if (!PED::IS_PED_RAGDOLL(iVar0))
			{
				aggregate.la_alligator.func_227(1);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				aggregate.la_alligator.func_227(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				if (!func_353(512, 0))
				{
					PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 0, false, false, false);
					PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				aggregate.la_alligator.func_227(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				aggregate.la_alligator.func_227(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!aggregate.barcustomer_interaction.func_46(iVar0, -2017877118))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, aggregate.fm_deathmatch_controller.func_2604(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, aggregate.fme_challenges.func_1469(), 0, 0, 99999f, -1, aggregate.fm_deathmatch_controller.func_2604(1));
						aggregate.fme_condor_egg.func_1296(iVar0, &iVar1, 0, 0, 1, 1);
						aggregate.la_alligator.func_227(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (func_461())
			{
				aggregate.la_alligator.func_227(4);
			}
		}
	}
}

void func_302()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								aggregate.la_alligator.func_227(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (aggregate.nb_animal_attack.func_161(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										aggregate.la_alligator.func_227(128);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_303()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(8388608, 0))
	{
		aggregate.la_alligator.func_227(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate.la_bear.func_250(0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || aggregate.dynamic_craft_scenario.func_86(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					aggregate.la_alligator.func_227(8388608);
				}
			}
		}
	}
	else
	{
		aggregate.la_alligator.func_227(8388608);
	}
}

void func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!aggregate.la_bear.func_250(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							aggregate.la_alligator.func_227(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		aggregate.la_alligator.func_227(8192);
		func_464();
	}
}

void func_305()
{
	int iVar0;

	func_448();
	func_449();
	func_450();
	if (!aggregate.la_alligator.func_184())
	{
		if (aggregate.nb_animal_attack.func_356(0, 60f, -1, 0))
		{
			aggregate.nb_animal_attack.func_358();
		}
	}
	else if (!func_353(134217728, 1))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate.la_bear.func_250(0))
			{
				func_366(0, 7, 1744022339, 0);
				aggregate.la_alligator.func_227(134217728);
			}
		}
	}
	else if (!func_353(268435456, 1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1509.f_18.f_7, "BOOL_DEFENDING", true, false);
			aggregate.la_alligator.func_227(268435456);
		}
	}
}

void func_306()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	func_449();
	if (func_353(32768, 1))
	{
		return;
	}
	if (!func_353(16384, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_353(134217728, 1))
			{
				func_366(0, 7, 1744022339, 0);
				func_452(200f);
			}
			aggregate.la_alligator.func_227(16384);
		}
	}
	else
	{
		func_450();
		if (!aggregate.nb_animal_attack.func_161(1))
		{
			if (func_363(16384, 0))
			{
				aggregate.nb_animal_attack.func_101(1);
			}
		}
		else if ((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0)) || func_353(16, 0)) || func_353(512, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
		{
			aggregate.la_alligator.func_227(32768);
			if (func_353(512, 0))
			{
				aggregate.la_alligator.func_227(1024);
			}
		}
		else if (!func_353(32768, 0))
		{
			if (!func_353(16, 0))
			{
				func_453();
			}
			if (func_353(16, 0) || aggregate.fme_escaped_convicts.func_1249())
			{
				if (aggregate.la_bear.func_250(0))
				{
				}
				else if (func_455("PBL_FALL_RECOVER", 0))
				{
					aggregate.la_alligator.func_227(32768);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 1, 0, 0);
					}
					func_366(0, 9, 291934926, 0);
				}
			}
			else if (aggregate.nb_animal_attack.func_161(4))
			{
				if (!func_353(512, 0))
				{
					if (func_364(1103626240 /* Float: 25f */))
					{
						if (func_456())
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "Cower", 1))
							{
								if (func_457())
								{
									if (func_458())
									{
										if (func_455("PBL_THANK_YOU", 0))
										{
											aggregate.la_alligator.func_227(512);
											if (!func_353(4194304, 0))
											{
												aggregate.la_alligator.func_227(1024);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (!func_163(32768, -1, 1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 1, 0, 0);
			}
			aggregate.la_alligator.func_227(32768);
		}
	}
}

void func_307()
{
	int iVar0;
	int iVar1;

	func_450();
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (!func_163(1, -1, 1))
	{
		if (func_353(1, 0))
		{
			aggregate.la_alligator.func_227(1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_RAGDOLL(iVar0))
			{
				func_465();
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				aggregate.la_alligator.func_227(1);
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1509.f_18.f_7))
			{
				func_465();
				PED::SET_PED_RESET_FLAG(iVar0, 29, true);
				PED::_0x2208438012482A1A(iVar0, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
				aggregate.la_alligator.func_227(1);
			}
		}
	}
	else
	{
		if (!func_163(2, -1, 1))
		{
			if (func_353(2, 0))
			{
				aggregate.la_alligator.func_227(2);
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!aggregate.barcustomer_interaction.func_46(iVar0, -2017877118) && !PED::IS_PED_RAGDOLL(iVar0))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (!func_353(524288, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(0, aggregate.fm_deathmatch_controller.func_2604(1), 60000, -1, 1.5f, 1, 0, 0);
						}
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, aggregate.fme_challenges.func_1469(), 0, 0, 99999f, -1, aggregate.fm_deathmatch_controller.func_2604(1));
						aggregate.fme_condor_egg.func_1296(iVar0, &iVar1, 0, 0, 1, 1);
						aggregate.la_alligator.func_227(2);
					}
				}
			}
		}
		if (!func_163(4, -1, 1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
			{
				if (func_461())
				{
					aggregate.la_alligator.func_227(4);
				}
			}
		}
	}
}

void func_308()
{
	int iVar0;
	int iVar1;

	func_450();
	if (func_353(16, 0))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (!func_353(33554432, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_462();
		}
	}
	if (func_364(1103626240 /* Float: 25f */))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							if (!func_353(64, 0))
							{
								aggregate.la_alligator.func_227(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (aggregate.nb_animal_attack.func_161(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										aggregate.la_alligator.func_227(128);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_309()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(8388608, 0))
	{
		aggregate.la_alligator.func_227(8388608);
		return;
	}
	if ((func_353(16, 0) || func_353(4194304, 0)) || func_163(8388608, -1, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate.la_bear.func_250(0))
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(1);
				if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || aggregate.dynamic_craft_scenario.func_86(iVar0, iVar1, 0)) || !PED::_IS_MOUNT_SEAT_FREE(iVar1, -1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
					PED::_0xB8B6430EAD2D2437(iVar0, 673924189);
					PED::_0x24C82EF607105FAA(iVar0, joaat("timid"));
					aggregate.la_alligator.func_227(8388608);
				}
			}
		}
	}
	else
	{
		aggregate.la_alligator.func_227(8388608);
	}
}

void func_310()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_353(16, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
	{
		if (!func_353(128, 0))
		{
			if (!func_353(16, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							if (!func_353(64, 0))
							{
								aggregate.la_alligator.func_227(64);
							}
							else if (!func_353(33554432, 0))
							{
								if (aggregate.nb_animal_attack.func_161(8))
								{
									if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_5))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_5), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
										aggregate.la_alligator.func_227(128);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_353(8192, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_463())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (!aggregate.la_bear.func_250(0))
						{
							iVar2 = 255;
							PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
							iVar1 = 0;
							while (iVar1 < 32)
							{
								if (func_163(32, iVar1, 1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
									if (NETWORK::_0x255A5EF65EDA9167(iVar2))
									{
										PED::_0xE737D5F14304A2EC(iVar0, iVar2, 120000);
									}
								}
								iVar1++;
							}
							func_462();
							func_464();
							aggregate.la_alligator.func_227(8192);
						}
					}
				}
			}
		}
	}
	else if (!func_163(8192, -1, 1))
	{
		aggregate.la_alligator.func_227(8192);
		func_464();
	}
}

bool func_312()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || _NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return true;
	}
	return false;
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_1 = iParam2;
}

void func_341(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_5 = { vParam2 };
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_4 = fParam5;
	((Local_1509.f_256.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_8 = iParam6;
}

bool func_351(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate.nb_animal_attack.func_356(iParam0, fParam1, iVar0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_353(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return aggregate.aberdeenpigfarm.func_175(Local_1509.f_18.f_11, iParam0);
	}
	else
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar1 = aggregate.aberdeenpigfarm.func_175(Local_1509.f_18.f_11, iParam0);
		if (bVar1 && !aggregate.aberdeenpigfarm.func_175((Local_68[iVar0 /*45*/])->f_1, iParam0))
		{
			aggregate.aberdeenpigfarm.func_106(&((Local_68[iVar0 /*45*/])->f_1), iParam0);
		}
		return bVar1;
	}
	return false;
}

void func_354(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_13.f_7.f_3), iParam0);
	}
}

void func_357()
{
	if (!aggregate.nb_animal_attack.func_161(1))
	{
		if (Local_13.f_7.f_7 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= Local_13.f_7.f_8)
		{
			func_354(1);
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(2))
	{
		if (!func_353(8, 0))
		{
			func_354(2);
		}
	}
	else if (func_363(8, 0))
	{
		Local_13.f_7.f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Local_13.f_7.f_8 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8001);
		func_368(1);
		func_368(2);
	}
}

int func_361(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_163(32, iVar0, 0))
			{
				if (&(Local_68[iVar0 /*45*/])->f_6.f_2[0] > -1f && &(Local_68[iVar0 /*45*/])->f_6.f_2[0] < fParam0)
				{
					if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[0])
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_363(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return aggregate.aberdeenpigfarm.func_175(Local_1509.f_18.f_10, iParam0);
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = aggregate.aberdeenpigfarm.func_175(Local_1509.f_18.f_11, iParam0);
	if (bVar1 && !aggregate.aberdeenpigfarm.func_175((Local_68[iVar0 /*45*/])->f_1, iParam0))
	{
		aggregate.aberdeenpigfarm.func_106(&((Local_68[iVar0 /*45*/])->f_1), iParam0);
		Local_1509.f_18.f_10 = (Local_1509.f_18.f_10 && (Local_68[iVar0 /*45*/])->f_1);
	}
	return aggregate.aberdeenpigfarm.func_175(Local_1509.f_18.f_10, iParam0);
}

bool func_364(float fParam0)
{
	int iVar0;
	int iVar1;

	if (aggregate.nb_animal_attack.func_161(2))
	{
		return true;
	}
	if (func_353(4096, 0))
	{
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), Local_1509.f_15) < fParam0)
				{
					return false;
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<15> Var0;

	Var0 = { aggregate.nb_animal_attack.func_497(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = func_498(iParam2, 1);
	Var0.f_14 = iParam3;
	func_499(&Var0);
	func_500(&Var0);
}

void func_368(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		aggregate.aberdeenpigfarm.func_163(&(Local_13.f_7.f_3), iParam0);
	}
}

void func_371(int iParam0)
{
	int iVar0;

	switch (iParam0->f_9)
	{
		case 377515857:
			if (!func_500(iParam0))
			{
			}
			break;
		case joaat("silence"):
			iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar0, 0);
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iVar0, 0);
				}
			}
			break;
	}
}

bool func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	iVar1 = 0;
	switch (iParam1)
	{
		case 0:
		case 1:
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
			{
				iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == PLAYER::PLAYER_PED_ID())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

void func_378(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = func_505(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		*iParam1 = 0;
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		*iParam1 = 1;
	}
	else
	{
		*iParam1 = 0;
	}
}

Vector3 func_381()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			return 2149.103f, 1727.851f, 127.9003f;
		case 1:
			return -317.9637f, 204.0303f, 66.54611f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_382(int iParam0, struct<2> Param1, var uParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

int func_383(int iParam0)
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 1;
				case 7:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 1;
				case 7:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 0;
				case 4:
					return 1;
				case 5:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 2;
				case 3:
					return 1;
				case 4:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_384(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	iVar1 = aggregate.fm_deathmatch_controller.func_2604(0);
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			if (aggregate.fm_deathmatch_controller.func_962() == 1 && iParam0 < 4)
			{
				if (aggregate.fme_supply_train.func_928(iVar0, -1389117756, 1, 0))
				{
					TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar1, 3);
				}
			}
			else if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
		case 2:
			if (aggregate.fm_deathmatch_controller.func_962() == 1)
			{
				if (aggregate.fme_supply_train.func_928(iVar0, -1389117756, 1, 0))
				{
					TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar1, 3);
				}
			}
			else if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
		default:
			if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 16777216, 0);
			}
			break;
	}
}

bool func_387(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_390()
{
	int iVar0;

	Local_1509.f_272.f_64 = 0;
	Local_1509.f_272.f_63 = 0;
	Local_1509.f_272.f_66 = 0;
	Local_1509.f_272.f_67 = 0;
	Local_1509.f_272.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1509.f_272.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1509.f_272.f_89[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1509.f_272.f_80[iVar0]);
		aggregate.la_bear.func_309(iVar0);
		iVar0++;
	}
}

void func_392(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1509.f_272.f_64 = (Local_1509.f_272.f_64 || (Local_68[iParam0 /*45*/])->f_17.f_1);
		Local_1509.f_272.f_63 = (Local_1509.f_272.f_63 || (Local_68[iParam0 /*45*/])->f_17);
		Local_1509.f_272.f_66 = (Local_1509.f_272.f_66 || (Local_68[iParam0 /*45*/])->f_17.f_3);
		Local_1509.f_272.f_67 = (Local_1509.f_272.f_67 || (Local_68[iParam0 /*45*/])->f_17.f_4);
		Local_1509.f_272.f_68 = (Local_1509.f_272.f_68 || (Local_68[iParam0 /*45*/])->f_17.f_5);
		Local_1509.f_272.f_69 = (Local_1509.f_272.f_69 || (Local_68[iParam0 /*45*/])->f_17.f_6);
		Local_1509.f_272.f_124 = (Local_1509.f_272.f_124 || (Local_68[iParam0 /*45*/])->f_17.f_2);
		Local_1509.f_272.f_70 = (Local_1509.f_272.f_70 && (Local_68[iParam0 /*45*/])->f_17.f_7);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_80[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_68[iParam0 /*45*/])->f_17.f_9[iVar0], Local_1509.f_272.f_71[iVar0], Local_1509.f_272.f_89[iVar0]);
			aggregate.la_bear.func_310(aggregate.annesburg.func_253(iVar0), iParam0);
			iVar0++;
		}
	}
}

bool func_399(int iParam0)
{
	int iVar0;

	if (aggregate.la_alligator.func_184())
	{
		aggregate.fme_challenges.func_1518(iParam0);
		return ENTITY::DOES_ENTITY_EXIST(aggregate.fm_deathmatch_controller.func_2604(iParam0));
	}
	iVar0 = iParam0;
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			switch (iVar0)
			{
				case 7:
					return Local_13.f_7.f_9 > 3;
				case 6:
					return Local_13.f_7.f_9 > 2;
				case 5:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 4:
					return Local_13.f_7.f_9 > 2;
				case 3:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 7:
					return Local_13.f_7.f_9 > 3;
				case 6:
					return Local_13.f_7.f_9 > 2;
				case 5:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 5:
					return Local_13.f_7.f_9 > 2;
				case 4:
					return Local_13.f_7.f_9 > 1;
				default:
					break;
			}
			break;
	}
	return false;
}

void func_404()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar4 = aggregate.annesburg.func_253(iVar0);
		if (!aggregate.la_bear.func_247(iVar4))
		{
		}
		else if (!aggregate.la_bear.func_259(iVar4, iVar5))
		{
			if (aggregate.la_bear.func_248(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate.la_bear.func_269(iVar4);
					func_520(iVar4);
				}
			}
		}
		iVar0++;
	}
}

void func_408(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (iVar0 >= 2 && iVar0 <= 7)
	{
		iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar0);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (PED::GET_PED_CONFIG_FLAG(iVar1, 263, true))
				{
					fVar2 = (BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar1)) * (1f / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1, 0))));
					if (fVar2 <= 0.7f)
					{
						PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
					}
				}
				if (!aggregate.barcustomer_interaction.func_46(iVar1, 1435919172))
				{
					if (!func_351(0, 40f))
					{
						aggregate.la_bear.func_269(iVar0);
						func_384(iVar0);
					}
				}
			}
		}
	}
	else if (iVar0 == 0)
	{
		if (func_522())
		{
			if (Local_1509.f_18.f_13 == 0)
			{
				Local_1509.f_18.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
	}
}

bool func_416(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (func_523(iParam0, -1))
	{
		return false;
	}
	if (iVar0 > 1)
	{
		fVar1 = func_524(iVar0, -1, 0);
		if (fVar1 > 0f && fVar1 <= func_525())
		{
			if (func_526(iVar0))
			{
				if (fVar1 > func_527())
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

bool func_420(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;

	if (!aggregate.la_alligator.func_184())
	{
		aggregate.nb_animal_attack.func_358();
	}
	func_292(0);
	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (aggregate.annesburg.func_253(iParam0) == 1)
	{
		if (aggregate.fme_condor_egg.func_1662(iParam1, 0, 0, 0, 0))
		{
			aggregate.nb_animal_attack.func_165(1, Local_1509.f_4);
			aggregate.la_alligator.func_227(4194304);
			if (!PED::IS_PED_DEAD_OR_DYING(aggregate.fm_deathmatch_controller.func_2604(1), true))
			{
				func_562();
			}
		}
		else
		{
			return false;
		}
	}
	else if (aggregate.annesburg.func_253(iParam0) == 0)
	{
		if (!func_522())
		{
			if (!aggregate.fme_condor_egg.func_1662(iParam1, 0, 0, 0, 0))
			{
				return false;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, true);
		}
		Var1 = { aggregate.nb_animal_attack.func_497(joaat("silence")) };
		aggregate.nb_animal_attack.func_563(&Var1);
		aggregate.nb_animal_attack.func_165(1, Local_1509.f_4);
		aggregate.la_alligator.func_227(16);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
		{
			func_564();
		}
	}
	else
	{
		if (!bParam2)
		{
			if (func_526(aggregate.annesburg.func_253(iParam0)))
			{
				if (!aggregate.fme_condor_egg.func_1662(iParam1, 0, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1) || aggregate.barcustomer_interaction.func_46(iVar0, -2017877118))
							{
								return false;
							}
						}
					}
				}
			}
		}
		aggregate.la_bear.func_269(iParam0);
		func_520(iParam0);
		aggregate.la_alligator.func_227(32);
	}
	if (!aggregate.nb_animal_attack.func_565())
	{
		aggregate.nb_animal_attack.func_566(0);
	}
	return true;
}

bool func_425(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	switch (aggregate.annesburg.func_253(iParam0))
	{
		case 0:
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_505(1), "SIT_JUMP_B_MALE", 1))
			{
				return false;
			}
			if (PED::IS_PED_RAGDOLL(iVar0))
			{
				return false;
			}
			break;
		default:
			break;
	}
	return true;
}

void func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	iVar3 = aggregate.annesburg.func_253(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iVar3)
	{
		case 1:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			TASK::_TASK_FLEE_FROM_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			break;
		case 0:
			WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 532480, 99999f, -1, aggregate.fm_deathmatch_controller.func_2604(1));
			iVar2 = 2;
			while (iVar2 <= 7)
			{
				iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::_0x3923EC958249657D(iVar0, iVar1, -1082130432 /* Float: -1f */);
				}
				iVar2++;
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
			break;
	}
}

bool func_431(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	iVar1 = iParam0;
	if (iVar1 > 1)
	{
		if (func_569(iVar1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, aggregate.fme_challenges.func_1469(), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			func_441(iParam0, 0);
		}
		else if (func_570(iVar1, iParam2))
		{
			if (func_571(iVar1))
			{
				if (func_572(iVar1))
				{
					TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(iVar0, aggregate.fm_deathmatch_controller.func_2604(0), 0, 0);
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
			}
		}
		else if (!func_526(iVar1))
		{
			iVar2 = func_573(iVar1, 20f, 1);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 16777216, 0);
			}
			else if (!func_574(0, 1))
			{
				if (func_575(iVar1, 0) < func_524(iVar1, iParam1, 1))
				{
					TASK::TASK_COMBAT_PED(iVar0, aggregate.fm_deathmatch_controller.func_2604(0), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 16777216, 0);
			}
		}
	}
	else if (iVar1 == 0)
	{
		TASK::_0x3923EC958249657D(iVar0, iParam3, -1082130432 /* Float: -1f */);
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				func_366(iVar1, 20, joaat("speech_params_shouted_clear"), 0);
				break;
			case 1:
				func_366(iVar1, 21, joaat("speech_params_shouted_clear"), 0);
				break;
			case 2:
				func_366(iVar1, 22, joaat("speech_params_shouted_clear"), 0);
				break;
		}
	}
	return true;
}

void func_437(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		func_262(80f);
	}
}

void func_441(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_4), iParam0);
	}
	else
	{
		MISC::SET_BIT(&((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_17.f_4), iParam0);
	}
}

int func_442(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_1509.f_132.f_7[iParam0 /*11*/]);
			Local_1509.f_132.f_7[iParam0 /*11*/] = 0;
			return 1;
		}
	}
	return 0;
}

bool func_444()
{
	int iVar0;

	if (func_312() || aggregate.aberdeenpigfarm.func_62())
	{
		return false;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1509.f_18.f_7, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(aggregate.fm_deathmatch_controller.func_2604(0)))
		{
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(aggregate.fm_deathmatch_controller.func_2604(iVar0)))
				{
					if (aggregate.nb_animal_attack.func_356(iVar0, 75f, -1, 0))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_448()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (aggregate.fm_deathmatch_controller.func_962() == 0)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, joaat("fireweapon")))
			{
				PED::_0x4C57F27D1554E6B0(iVar0, func_583(), 0, -1082130432 /* Float: -1f */, 0, 0f);
			}
			if (PED::IS_PED_SHOOTING(iVar0))
			{
				if (Local_1509.f_18.f_113 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1509.f_18.f_113, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
				{
					func_452(200f);
					Local_1509.f_18.f_113 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	if (!aggregate.nb_animal_attack.func_161(1))
	{
		if (func_163(8, -1, 1))
		{
			aggregate.la_alligator.func_227(8);
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(2))
	{
		if (func_163(8, -1, 1))
		{
			aggregate.la_alligator.func_227(8);
		}
	}
	else if (func_353(8, 0))
	{
		if (!func_163(8, -1, 1))
		{
			func_452(200f);
			aggregate.la_alligator.func_227(8);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate.la_bear.func_250(0))
			{
				if (func_351(0, 100f))
				{
					if (func_585())
					{
						func_366(0, 6, 1744022339, 0);
					}
					else
					{
						switch (((Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1.f_1 % 4))
						{
							case 0:
								func_366(0, 0, 1744022339, 0);
								break;
							case 1:
								func_366(0, 1, 1744022339, 0);
								break;
							case 2:
								func_366(0, 2, 1744022339, 0);
								break;
							case 3:
								func_366(0, 3, 1744022339, 0);
								break;
						}
						(Local_68[NETWORK::PARTICIPANT_ID_TO_INT() /*45*/])->f_1.f_1++;
					}
				}
			}
			aggregate.la_alligator.func_227(8);
		}
	}
}

void func_449()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_353(32, 0))
	{
		return;
	}
	iVar2 = aggregate.fm_deathmatch_controller.func_2604(0);
	iVar1 = 2;
	while (iVar1 <= 7)
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
				}
				switch (aggregate.fm_deathmatch_controller.func_962())
				{
					case 0:
						if (aggregate.fm_deathmatch_controller.func_962() == 1 && iVar1 < 4)
						{
							if (aggregate.fme_supply_train.func_928(iVar0, -1389117756, 1, 0))
							{
								TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar2, 3);
							}
						}
						else if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
					case 2:
						if (aggregate.fm_deathmatch_controller.func_962() == 1)
						{
							if (aggregate.fme_supply_train.func_928(iVar0, -1389117756, 1, 0))
							{
								TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, iVar2, 3);
							}
						}
						else if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
					default:
						if (aggregate.fme_supply_train.func_928(iVar0, 780511057, 1, 0))
						{
							TASK::TASK_COMBAT_PED(iVar0, iVar2, 16777216, 0);
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_450()
{
	vector3 vVar0;

	vVar0 = { aggregate.camera_item.func_108(PLAYER::PLAYER_ID()) };
	if (((Local_1509.f_18.f_5 < 4 && Local_1509.f_18.f_5 > 0) && !aggregate.nb_animal_attack.func_161(4)) && !func_353(1024, 0))
	{
		if (!func_163(16777216, -1, 1))
		{
			func_586(0, vVar0, 125f, -89429847, 580546400, 0, 0);
		}
		else
		{
			func_586(0, vVar0, 1000f, -89429847, 580546400, 0, 0);
		}
	}
	else
	{
		aggregate.la_alligator.func_141(0);
	}
	if (!func_353(32, 0))
	{
		func_587(2, 7, vVar0, 20f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	else if (!func_163(32, -1, 1))
	{
		func_587(2, 7, vVar0, 60f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	else
	{
		func_587(2, 7, vVar0, 150f, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
}

bool func_451()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 1:
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "STRUGGLE_LOOP", 1))
			{
				return false;
			}
			break;
		case 0:
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, "SHOOT_LOOP", 1))
			{
				return false;
			}
			break;
	}
	if (func_353(32, 0))
	{
		return true;
	}
	if (func_353(16, 0))
	{
		return true;
	}
	return func_588();
}

void func_452(float fParam0)
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (func_524(0, -1, 1) <= fParam0)
	{
		aggregate.nb_animal_attack.func_589(-342321975, iVar0, 1);
	}
}

void func_453()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_353(256, 0))
	{
		if (aggregate.fm_deathmatch_controller.func_962() == 1 && aggregate.fm_deathmatch_controller.func_962() == 1)
		{
		}
		else
		{
			return;
		}
	}
	if (aggregate.nb_animal_attack.func_161(64) || func_353(512, 0))
	{
		return;
	}
	if (func_353(16, 0))
	{
		func_354(64);
		return;
	}
	if (func_590())
	{
		return;
	}
	if (func_591())
	{
		func_366(0, 23, 1808677283, 0);
		return;
	}
	if (aggregate.la_bear.func_250(0))
	{
		return;
	}
	switch (Local_13.f_7.f_11)
	{
		case 0:
			func_366(0, 17, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 1:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 2:
			func_366(0, 18, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 3:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 4:
			func_366(0, 19, 1808677283, 0);
			Local_13.f_7.f_11++;
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			break;
		case 5:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 6:
			if (!aggregate.nb_animal_attack.func_161(4))
			{
				func_354(64);
			}
			else
			{
				Local_13.f_7.f_11++;
				Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 7:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
			{
				Local_13.f_7.f_11++;
			}
			break;
		case 8:
			if (NETWORK::_0x255A5EF65EDA9167(func_593(0, 71088, 50f, 1)))
			{
				Local_13.f_7.f_11 = 0;
				return;
			}
			func_354(64);
			break;
	}
}

bool func_455(char* sParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1509.f_18.f_7))
	{
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_1509.f_18.f_7, sParam0))
	{
		return true;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1509.f_18.f_7))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1509.f_18.f_7, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1509.f_18.f_7, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1509.f_18.f_7, sParam0);
		}
	}
	else
	{
		if (!MISC::_0x375F5870A7B8BEC1(sParam1))
		{
			if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_1509.f_18.f_7, sParam1, 1))
			{
				return false;
			}
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1509.f_18.f_7, sParam0, true);
		return true;
	}
	return false;
}

bool func_456()
{
	if (!aggregate.nb_animal_attack.func_161(128))
	{
		return func_458();
	}
	return false;
}

bool func_457()
{
	int iVar0;

	if (!aggregate.nb_animal_attack.func_161(16384))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (!aggregate.la_bear.func_250(0) && func_458())
				{
					if (func_594())
					{
						func_366(0, 12, joaat("speech_params_standard"), 0);
					}
					else
					{
						func_366(0, 13, joaat("speech_params_standard"), 0);
					}
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					Local_13.f_7.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_354(16384);
					return true;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_458()
{
	if (Local_13.f_7.f_12 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_12, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 1000)
		{
			return false;
		}
	}
	return true;
}

bool func_461()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (func_363(2097152, 0))
	{
		return true;
	}
	if (!func_163(2097152, -1, 1))
	{
		iVar2 = aggregate.fm_deathmatch_controller.func_2604(0);
		iVar0 = 2;
		while (iVar0 <= 7)
		{
			iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 263, false);
					TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
					if (aggregate.fm_deathmatch_controller.func_962() == 1)
					{
						FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 54, 100f);
					}
					PED::SET_PED_USING_ACTION_MODE(iVar1, true, -1, 0);
					bVar4 = func_595();
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					if (bVar4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							TASK::TASK_COMBAT_PED_TIMED(0, iVar2, 20000, 16777216);
						}
					}
					PED::REGISTER_TARGET(iVar1, iVar2, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 40f, 0, 18);
					aggregate.fme_condor_egg.func_1296(iVar1, &iVar3, 0, 0, 1, 1);
					PED::SET_PED_KEEP_TASK(iVar1, true);
					if (aggregate.nb_animal_attack.func_161(32))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1509.f_18.f_112, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
					}
				}
			}
			func_441(iVar0, 0);
			iVar0++;
		}
		aggregate.la_alligator.func_227(2097152);
	}
	return false;
}

void func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	iVar2 = aggregate.fm_deathmatch_controller.func_2604(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::_IS_MOUNT_SEAT_FREE(iVar2, -1)) && !func_353(4194304, 0)) && !func_353(524288, 0))
	{
		PED::_0x931B241409216C1F(iVar0, iVar2, 0);
		TASK::TASK_MOUNT_ANIMAL(0, iVar2, 60000, -1, 1.5f, 1, 0, 0);
	}
	if (func_353(4194304, 0) || func_353(16, 0))
	{
		iVar3 = 3;
	}
	else
	{
		iVar3 = 0;
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(0, aggregate.fme_challenges.func_1469(), iVar3, 0, 99999f, -1, aggregate.fm_deathmatch_controller.func_2604(1));
	aggregate.fme_condor_egg.func_1296(iVar0, &iVar1, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	aggregate.la_alligator.func_227(33554432);
}

bool func_463()
{
	if (func_353(4194304, 0) && !aggregate.nb_animal_attack.func_161(2048))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_366(0, 22, joaat("speech_params_shouted_clear"), 0);
			func_354(1024);
			func_354(2048);
			func_354(8192);
			Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			return false;
		}
	}
	if (!aggregate.nb_animal_attack.func_161(1024))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!aggregate.la_bear.func_250(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 14, 291934926, 0);
					func_354(1024);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (func_596() && !aggregate.nb_animal_attack.func_161(8192))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!aggregate.la_bear.func_250(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 16, 291934926, 0);
					func_354(8192);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(2048))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!aggregate.la_bear.func_250(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_366(0, 15, 291934926, 0);
					func_354(2048);
					Local_13.f_7.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
		}
	}
	else if (!aggregate.nb_animal_attack.func_161(4096))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!aggregate.la_bear.func_250(0))
			{
				if (Local_13.f_7.f_14 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
				{
					func_354(4096);
				}
			}
		}
	}
	return aggregate.nb_animal_attack.func_161(4096);
}

void func_464()
{
	if (func_163(16777216, -1, 1) && !func_163(4194304, -1, 1))
	{
		if (!aggregate.nb_animal_attack.func_161(8))
		{
			aggregate.nb_animal_attack.func_101(8);
			aggregate.fme_challenges.func_1108(-1098645728, 1, 0);
			aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-1892463704, -400839231), 1);
			aggregate.nb_animal_attack.func_598();
			aggregate.doc_book.func_171(-419165566, 0, 255, 0, 0);
		}
	}
}

void func_465()
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(0);
	if (!func_353(67108864, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(iVar0, 1, 1, 1, 0);
			aggregate.la_alligator.func_227(67108864);
		}
	}
}

int func_498(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("speech_params_force_frontend"):
			return 4;
		case -1824788778:
			return 49;
		case -1677682736:
			return 40;
		case joaat("speech_params_force_shouted_clear"):
			return 9;
		case joaat("speech_params_force_normal_clear"):
			return 6;
		case joaat("speech_params_add_blip"):
			return 11;
		case joaat("speech_params_shouted_critical"):
			return 17;
		case -1408561526:
			return 14;
		case -1337937821:
			return 50;
		case joaat("speech_params_allow_repeat"):
			return 2;
		case -1223286396:
			return 28;
		case -1194565419:
			return 20;
		case -1100252363:
			return 48;
		case -1050591818:
			return 44;
		case joaat("speech_params_shouted"):
			return 15;
		case -796779660:
			return 42;
		case -780776077:
			return 30;
		case -553575591:
			return 33;
		case -500314840:
			return 45;
		case -497774268:
			return 25;
		case joaat("speech_params_force_shouted"):
			return 8;
		case -417894478:
			return 18;
		case -279373485:
			return 47;
		case joaat("speech_params_force"):
			return 3;
		case joaat("speech_params_force_shouted_critical"):
			return 10;
		case 0:
			return 0;
		case 10132823:
			return 32;
		case 291934926:
			return 24;
		case 329132445:
			return 27;
		case 439365436:
			return 46;
		case 467585058:
			return 26;
		case 796868284:
			return 37;
		case joaat("speech_params_add_blip_shouted"):
			return 12;
		case 905388000:
			return 31;
		case joaat("speech_params_add_blip_shouted_force"):
			return 13;
		case 996860239:
			return 23;
		case joaat("speech_params_standard"):
			return 1;
		case 1124105491:
			return 36;
		case 1196222537:
			return 22;
		case 1342623702:
			return 35;
		case 1506116031:
			return 29;
		case joaat("speech_params_force_normal"):
			return 5;
		case 1588346500:
			return 38;
		case joaat("speech_params_force_normal_critical"):
			return 7;
		case 1718175949:
			return 19;
		case 1744022339:
			return 39;
		case 1808677283:
			return 34;
		case joaat("speech_params_shouted_clear"):
			return 16;
		case 2002344365:
			return 21;
		case 2081540604:
			return 41;
		case 2083444765:
			return 43;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_499(var uParam0)
{
	var uVar0;

	uVar0 = aggregate.dynamic_craft_scenario.func_194(5, 117);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	aggregate.nb_animal_attack.func_613(uParam0, uVar0);
}

int func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0->f_11;
	iVar1 = aggregate.fm_deathmatch_controller.func_2604(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	else
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar1, 0);
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iVar1, 0);
	}
	iVar2 = iParam0->f_12;
	if (!func_260())
	{
		return func_615(iVar0, iVar2, func_614(iParam0->f_13, 1), iParam0->f_14);
	}
	else
	{
		MISC::SET_BIT(&(Local_1509.f_18.f_9), iVar2);
		return func_617(aggregate.fme_animal_tagging.func_505(), iVar2, aggregate.fme_supply_train.func_900(), aggregate.fm_deathmatch_controller.func_962(), Local_13.f_7.f_9);
	}
	return 0;
}

char* func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_RE@ANIMAL_ATTACK@MALE@TREE";
		case 1:
			return "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK";
		case 2:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE";
		case 3:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@HORSE@HANDOVER";
		case 4:
			return "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
		case 5:
			return "SCRIPT_RE@ANIMAL_ATTACK@WOLF@ROCK";
		default:
			break;
	}
	return "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK";
}

void func_520(int iParam0)
{
	if (0 != iParam0)
	{
		if (1 != iParam0)
		{
			aggregate.la_bear.func_269(iParam0);
		}
	}
}

bool func_522()
{
	if (func_353(32768, 0) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(aggregate.fm_deathmatch_controller.func_2604(0), -1))
	{
		if (Local_1509.f_18.f_13 == 0)
		{
			Local_1509.f_18.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			return false;
		}
		return NETWORK::GET_TIME_DIFFERENCE(Local_1509.f_18.f_13, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000;
	}
	return false;
}

bool func_523(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17.f_7, iParam0))
	{
		return !MISC::IS_BIT_SET((Local_68[iParam1 /*45*/])->f_17, iParam0);
	}
	return false;
}

float func_524(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (&(Local_68[iParam1 /*45*/])->f_6.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &((Local_68[iParam1 /*45*/])->f_6.f_2[iParam0]);
}

float func_525()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 2:
			return 25f;
		case 0:
			return 20f;
		case 3:
			return 20f;
		case 1:
			return 25f;
		default:
			break;
	}
	return 15f;
}

bool func_526(int iParam0)
{
	if (Local_1509.f_18.f_8 < 2 && Local_1509.f_18.f_8 > -1)
	{
		return false;
	}
	if (aggregate.la_bear.func_250(iParam0))
	{
		return false;
	}
	if (func_623(2))
	{
		return false;
	}
	if (!aggregate.la_bear.func_250(iParam0))
	{
		switch (aggregate.fm_deathmatch_controller.func_962())
		{
			case 0:
			case 3:
				switch (iParam0)
				{
					case 2:
						return true;
					case 3:
						return Local_13.f_7.f_9 > 2;
					default:
						break;
				}
				break;
			default:
				switch (iParam0)
				{
					case 2:
						return true;
					default:
						break;
				}
				break;
		}
	}
	return false;
}

float func_527()
{
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 2:
			return 8f;
		case 0:
			return 8f;
		case 3:
			return 8f;
		case 1:
			return 8f;
		default:
			break;
	}
	return 8f;
}

void func_562()
{
	if (!aggregate.nb_animal_attack.func_161(256))
	{
		aggregate.nb_animal_attack.func_101(256);
		aggregate.fme_challenges.func_1108(-1598949067, 0, 0);
	}
}

void func_564()
{
	if (!aggregate.nb_animal_attack.func_161(128))
	{
		aggregate.nb_animal_attack.func_101(128);
		aggregate.fme_challenges.func_1108(-1315007749, 0, 0);
	}
}

int func_569(int iParam0)
{
	return func_668();
}

bool func_570(int iParam0, int iParam1)
{
	if (NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return aggregate.la_bear.func_259(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return false;
}

bool func_571(int iParam0)
{
	if (PED::IS_PED_IN_COMBAT(aggregate.fm_deathmatch_controller.func_2604(iParam0), 0))
	{
		if (PED::IS_PED_IN_COMBAT(aggregate.fm_deathmatch_controller.func_2604(iParam0), aggregate.fm_deathmatch_controller.func_2604(0)))
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_572(int iParam0)
{
	int iVar0;

	iVar0 = func_669(aggregate.fm_deathmatch_controller.func_2604(iParam0));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return true;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	if (func_524(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0), 1) > func_524(iParam0, -1, 1))
	{
		return true;
	}
	return false;
}

int func_573(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_670(iParam0, fParam1, bParam2);
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

bool func_574(int iParam0, bool bParam1)
{
	if (!bParam1 || func_671(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(&(Local_1509.f_132.f_7[iParam0 /*11*/]));
	}
	return false;
}

float func_575(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_672(iParam0), func_672(iParam1));
}

Vector3 func_583()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return 2145.107f, 1727.564f, 126.561f;
				case 1:
					return 2144.344f, 1724.933f, 126.4467f;
				default:
					break;
			}
			return 2144.138f, 1730.875f, 127.1f;
	}
	return 0f, 0f, 0f;
}

bool func_585()
{
	if (!func_260())
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_962() != 1)
	{
		return false;
	}
	return !aggregate.la_bear.func_250(6);
}

void func_586(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8)
{
	int iVar0;

	iVar0 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		aggregate.la_alligator.func_141(iParam0);
		return;
	}
	if (!func_674(iParam0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4)
		{
			aggregate.nb_animal_attack.func_675(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4)
	{
		aggregate.la_alligator.func_141(iParam0);
	}
}

void func_587(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;

	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_586(aggregate.annesburg.func_253(iVar0), vParam2, fParam5, iParam6, fParam7, iParam8, iParam9);
		iVar0++;
	}
}

var func_588()
{
	return Local_1509.f_439.f_4;
}

bool func_590()
{
	if (aggregate.nb_animal_attack.func_161(128))
	{
		if (func_458())
		{
			func_366(0, 11, 1808677283, 0);
			func_368(128);
			Local_13.f_7.f_12 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Local_13.f_7.f_13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		return true;
	}
	return false;
}

bool func_591()
{
	if (!aggregate.la_bear.func_250(23))
	{
		if (func_260())
		{
			if (aggregate.fm_deathmatch_controller.func_962() == 1)
			{
				if (func_353(16777216, 0) || func_351(0, 40f))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_592(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return func_163(16777216, iParam0, 1);
}

int func_593(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[iParam0])
				{
					if (!bVar2 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] <= fParam2)
					{
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(iParam1);
						if (StackVal)
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_594()
{
	func_282(1);
	return aggregate.nb_animal_attack.func_161(2);
}

int func_595()
{
	if ((Local_1509.f_18.f_8 > 0 && !func_353(65536, 1)) && !aggregate.nb_animal_attack.func_161(65536))
	{
		aggregate.la_alligator.func_227(65536);
		aggregate.nb_animal_attack.func_101(65536);
		return 1;
	}
	else if ((Local_1509.f_18.f_8 > 2 && !func_353(131072, 1)) && !aggregate.nb_animal_attack.func_161(131072))
	{
		aggregate.la_alligator.func_227(131072);
		aggregate.nb_animal_attack.func_101(131072);
		return 1;
	}
	else if ((Local_1509.f_18.f_8 > 4 && !func_353(262144, 1)) && !aggregate.nb_animal_attack.func_161(262144))
	{
		aggregate.la_alligator.func_227(262144);
		aggregate.nb_animal_attack.func_101(131072);
		return 1;
	}
	return 0;
}

bool func_596()
{
	switch (aggregate.fme_supply_train.func_900())
	{
		case 2:
			return true;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_614(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("speech_params_standard");
		case 2:
			return joaat("speech_params_allow_repeat");
		case 3:
			return joaat("speech_params_force");
		case 4:
			return joaat("speech_params_force_frontend");
		case 5:
			return joaat("speech_params_force_normal");
		case 6:
			return joaat("speech_params_force_normal_clear");
		case 7:
			return joaat("speech_params_force_normal_critical");
		case 8:
			return joaat("speech_params_force_shouted");
		case 9:
			return joaat("speech_params_force_shouted_clear");
		case 10:
			return joaat("speech_params_force_shouted_critical");
		case 11:
			return joaat("speech_params_add_blip");
		case 12:
			return joaat("speech_params_add_blip_shouted");
		case 13:
			return joaat("speech_params_add_blip_shouted_force");
		case 14:
			return -1408561526;
		case 15:
			return joaat("speech_params_shouted");
		case 16:
			return joaat("speech_params_shouted_clear");
		case 17:
			return joaat("speech_params_shouted_critical");
		case 18:
			return -417894478;
		case 19:
			return 1718175949;
		case 20:
			return -1194565419;
		case 21:
			return 2002344365;
		case 22:
			return 1196222537;
		case 23:
			return 996860239;
		case 24:
			return 291934926;
		case 25:
			return -497774268;
		case 26:
			return 467585058;
		case 27:
			return 329132445;
		case 28:
			return -1223286396;
		case 29:
			return 1506116031;
		case 30:
			return -780776077;
		case 31:
			return 905388000;
		case 32:
			return 10132823;
		case 33:
			return -553575591;
		case 34:
			return 1808677283;
		case 35:
			return 1342623702;
		case 36:
			return 1124105491;
		case 37:
			return 796868284;
		case 38:
			return 1588346500;
		case 39:
			return 1744022339;
		case 40:
			return -1677682736;
		case 41:
			return 2081540604;
		case 42:
			return -796779660;
		case 43:
			return 2083444765;
		case 44:
			return -1050591818;
		case 45:
			return -500314840;
		case 46:
			return 439365436;
		case 47:
			return -279373485;
		case 48:
			return -1100252363;
		case 49:
			return -1824788778;
		case 50:
			return -1337937821;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

var func_615(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	uVar0 = aggregate.fme_animal_tagging.func_505();
	if (iParam3 == 0)
	{
		iParam3 = func_680(uVar0, iParam1, aggregate.fme_supply_train.func_900(), aggregate.fm_deathmatch_controller.func_962());
	}
	MISC::SET_BIT(&(Local_1509.f_18.f_9), iParam1);
	return func_682(iParam0, func_681(iParam1, aggregate.fme_supply_train.func_900(), aggregate.fm_deathmatch_controller.func_962()), 0, iParam2, iParam3, 0);
}

int func_617(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;

	if (func_683(uParam0, iParam1, iParam2, iParam3, &vVar0, iParam4))
	{
		AUDIO::_0x36559148B78853B3(1, false, 0);
		if (!aggregate.fme_escaped_convicts.func_1690(&(Local_1509.f_18.f_14), vVar0, 0, -1, 0, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_619(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = aggregate.fm_deathmatch_controller.func_2604(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_524(iParam0, -1, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

bool func_623(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 2;
	while (iVar0 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(aggregate.fm_deathmatch_controller.func_2604(iVar0)))
		{
			if (aggregate.la_bear.func_250(iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Local_1509.f_18.f_8 > -1 && (Local_1509.f_18.f_8 - iVar1) < 2)
	{
		return Local_1509.f_18.f_8 <= iParam0;
	}
	return false;
}

int func_668()
{
	int iVar0;

	if (func_353(4096, 0))
	{
		if (!func_163(4096, -1, 1))
		{
			aggregate.la_alligator.func_227(4096);
		}
		return 1;
	}
	if (Local_13.f_7.f_9 >= Local_13.f_7.f_10)
	{
		iVar0 = 2;
		switch (aggregate.fm_deathmatch_controller.func_962())
		{
			case 2:
				return 0;
			case 1:
				iVar0 = 1;
				break;
			case 3:
				iVar0 = 2;
				break;
			case 0:
				iVar0 = 2;
				break;
		}
		if (Local_1509.f_18.f_8 <= iVar0 && Local_1509.f_18.f_8 > -1)
		{
			aggregate.la_alligator.func_227(4096);
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_0xCD66FEA29400A0B5(iParam0));
	if (iVar0 == 0 || !PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	return 0;
}

int func_670(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] < &(Local_68[iVar1 /*45*/])->f_6.f_2[iParam0])
				{
					if (!bVar2 || &(Local_68[iVar0 /*45*/])->f_6.f_2[iParam0] <= fParam1)
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

bool func_671(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(&(Local_1509.f_132.f_7[iParam0 /*11*/]));
}

Vector3 func_672(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(&(Local_1509.f_132.f_7[iParam0 /*11*/]), true, false);
}

bool func_674(int iParam0)
{
	return MAP::DOES_BLIP_EXIST((Local_1509.f_132.f_7[iParam0 /*11*/])->f_1);
}

int func_680(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 17:
					return 1;
				case 18:
					return 2;
				case 19:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 3;
				case 8:
					return 1;
				case 15:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 19:
					return 1;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 14:
					return 1;
				case 15:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_681(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_PLN_V1_HELP_M";
				case 1:
					return "GET_AWAY_FROM_ME";
				case 2:
					return "GET_AWAY_FROM_ME";
				case 3:
					return "GET_AWAY_FROM_ME";
				case 4:
					return "GET_AWAY_FROM_ME";
				case 5:
					return "GET_AWAY_FROM_ME";
				case 7:
					return func_714(iParam2, "RE_AA_PLN_V1_HELP_WOLVES_M", "RE_AA_PLN_V1_HELP_COUGARS_M", "RE_AA_PLN_V1_HELP_BEAR_M", "RE_AA_PLN_V1_HELP_COYOTES_M");
				case 14:
					return "GENERIC_SHOCKING_EVENT_COMMENT";
				case 15:
					return "RELIEVED_REACT";
				case 8:
					return "PANIC_HELP";
				case 9:
					return "RE_AA_PLN_V1_BEG_M";
				case 11:
					return "RE_AA_PLN_V1_KILL_M";
				case 12:
					return "RE_AA_PLN_V1_KILL_LAST_M";
				case 13:
					return "RE_AA_PLN_V1_FLED_M";
				case 17:
					return "GENERIC_FRIGHTENED_HIGH";
				case 18:
					return "GENERIC_FRIGHTENED_MED";
				case 19:
					return "PLEAD";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_MTN_V1_HELP_M_A";
				case 1:
					return "RE_AA_MTN_V1_HELP_M_B";
				case 2:
					return "RE_AA_MTN_V1_HELP_M_C";
				case 3:
					return "RE_AA_MTN_V1_HELP_M_D";
				case 4:
					return "RE_AA_MTN_V1_HELP_CLOSE_M_A";
				case 5:
					return "RE_AA_MTN_V1_HELP_CLOSE_M_B";
				case 7:
					return func_714(iParam2, "RE_AA_MTN_V1_HELP_WOLVES_M", "RE_AA_MTN_V1_HELP_COUGARS_M", "RE_AA_MTN_V1_HELP_BEAR_M", "RE_AA_MTN_V1_HELP_COYOTES_M");
				case 14:
					return "RE_AA_MTN_V1_THANK_M";
				case 15:
					return "RE_AA_MTN_V1_THANK_M_BYE";
				case 8:
					return "RE_AA_MTN_V1_COWER_M_B";
				case 9:
					return "RE_AA_MTN_V1_BEG_M";
				case 11:
					return "RE_AA_MTN_V1_KILL_M";
				case 12:
					return "RE_AA_MTN_V1_KILL_LAST_M";
				case 13:
					return "RE_AA_MTN_V1_FLED_M";
				case 17:
					return "GENERIC_FRIGHTENED_MED";
				case 18:
					return "GENERIC_FRIGHTENED_MED";
				case 19:
					return "GENERIC_CURSE_HIGH";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "RE_AA_MTN_V2_HELP_F";
				case 1:
					return "RE_AA_MTN_V2_HELP_F";
				case 2:
					return "RE_AA_MTN_V2_HELP_B_F";
				case 3:
					return "RE_AA_MTN_V2_HELP_F";
				case 4:
					return "RE_AA_MTN_V2_HELP_CLOSE_WAIT_A_F";
				case 5:
					return "RE_AA_MTN_V2_HELP_CLOSE_WAIT_B_F";
				case 7:
					return "RE_AA_MTN_V2_HELP_CLOSE_F";
				case 14:
					return "RELIEVED_REACT";
				case 15:
					return "VICTIMIZED_REACT";
				case 8:
					return "RE_AA_MTN_V2_YOU_CAME";
				case 9:
					return "RE_AA_MTN_V2_BEG_F";
				case 11:
					return "RE_AA_MTN_V2_KILL_F";
				case 12:
					return "RE_AA_MTN_V2_KILL_LAST_F";
				case 13:
					return "RE_AA_MTN_V2_FLED_F";
				case 17:
					return "RE_AA_MTN_V2_COWER_F";
				case 18:
					return "RE_AA_MTN_V2_COWER_B_F";
				case 19:
					return "GENERIC_FRIGHTENED_HIGH";
				case 20:
					return "PANIC_HELP";
				case 21:
					return "GENERIC_FRIGHTENED_HIGH";
				case 22:
					return "GET_AWAY_FROM_ME";
				default:
					break;
			}
			break;
	}
	return "";
}

var func_682(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	return aggregate.fme_condor_egg.func_1100(aggregate.fm_deathmatch_controller.func_2604(iParam0), sParam1, iParam3, iParam2, iParam5, aggregate.la_alligator.func_246(iParam0), iParam4, 1);
}

bool func_683(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5)
{
	StringCopy(sParam4, "NBAA_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 1:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 2:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 3:
			StringConCat(sParam4, "HELP", 24);
			break;
		case 4:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 5:
			StringConCat(sParam4, "CLOSE", 24);
			break;
		case 6:
			StringConCat(sParam4, "CLOSE_A", 24);
			break;
		case 7:
			StringConCat(sParam4, "CALL", 24);
			break;
		case 14:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "THANM", "THANK"), 24);
			break;
		case 15:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "BYEM", "BYE"), 24);
			break;
		case 16:
			StringConCat(sParam4, "THANKB", 24);
			break;
		case 8:
			StringConCat(sParam4, "COWER", 24);
			break;
		case 9:
			StringConCat(sParam4, "OHNO", 24);
			break;
		case 10:
			StringConCat(sParam4, "BEG", 24);
			break;
		case 11:
			StringConCat(sParam4, "KILL", 24);
			break;
		case 12:
			StringConCat(sParam4, "LAST", 24);
			break;
		case 13:
			StringConCat(sParam4, "FLED", 24);
			break;
		case 23:
			StringConCat(sParam4, "CAME", 24);
			break;
		case 17:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 18:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 19:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "CLOSM", "CLOSE"), 24);
			break;
		case 20:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		case 21:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		case 22:
			StringConCat(sParam4, aggregate.doc_book.func_204(iParam5 > 1, "AGGM", "AGGRO"), 24);
			break;
		default:
			return false;
	}
	switch (iParam2)
	{
		case 2:
			StringConCat(sParam4, "_M", 24);
			break;
		case 3:
			StringConCat(sParam4, "_2M", 24);
			break;
		case 5:
			StringConCat(sParam4, "_F", 24);
			break;
		case 6:
			StringConCat(sParam4, "_2F", 24);
			break;
	}
	return true;
}

char* func_714(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 0:
			return sParam1;
		case 1:
			return sParam2;
		case 2:
			return sParam3;
		case 3:
			return sParam4;
		default:
			break;
	}
	return sParam1;
}

