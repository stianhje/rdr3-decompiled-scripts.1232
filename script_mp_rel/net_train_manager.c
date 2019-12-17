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
	func_1();
	while (!aggregate.net_beat_manager.func_2())
	{
		aggregate.fme_animal_tagging.func_4();
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	aggregate.ambient_fishing_scenario.func_7();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	aggregate.flow_controller.func_7(32, -1);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.ambient_fishing_scenario.func_7();
	}
	func_8(Global_1130300);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1130300, 106, 6);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1130300), 106, "g_mpTrainManagerHostData");
	aggregate.net_camp_manager.func_23(Global_1130406);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1130406, 417, 7);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1130406)[0 /*13*/]), 417, "g_mpTrainManagerPlayerData");
	func_12(Global_1130823);
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_8(var uParam0)
{
	struct<106> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_6 = -1;
	Var0.f_2.f_1.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6.f_1 = -1;
	Var0.f_54 = 3;
	Var0.f_54.f_1.f_6 = -1;
	Var0.f_54.f_1.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_12(var uParam0)
{
	struct<131> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_10 = 15;
	Var0.f_2.f_1.f_41.f_10 = 15;
	Var0.f_2.f_1.f_41.f_41.f_10 = 15;
	Var0.f_126 = 4;
	*uParam0 = { Var0 };
}

void func_15()
{
	switch (&Global_1130300)
	{
		case 0:
			func_21();
			break;
		case 1:
			aggregate.nb_duel.func_187();
			break;
		case 2:
			aggregate.ambient_fishing_scenario.func_7();
			break;
	}
}

void func_16()
{
	switch (&Global_1130823)
	{
		case 0:
			func_24();
			break;
		case 1:
			func_25();
			break;
		case 2:
			aggregate.fme_king_of_the_rails.func_353();
			break;
	}
}

void func_20(var uParam0)
{
	struct<13> Var0;

	Var0 = 3;
	*uParam0 = { Var0 };
}

void func_21()
{
	if (aggregate.fme_escaped_convicts.func_724())
	{
		func_28(2);
	}
	func_29();
	func_30(1);
}

void func_24()
{
	if (&Global_1130300 > 0)
	{
		func_33();
		func_34(1);
	}
}

void func_25()
{
	if (aggregate.fme_round_up.func_182() && &Global_1130300 > 1)
	{
		func_34(2);
	}
}

void func_28(int iParam0)
{
	aggregate.bandana.func_26(&(Global_1130300->f_1), iParam0);
}

int func_29()
{
	struct<13> Var0;

	if (!func_39())
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 11;
		return func_41(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

void func_30(int iParam0)
{
	if (&Global_1130300 != iParam0)
	{
		Global_1130300 = iParam0;
	}
}

void func_32()
{
	if (&Global_1130823->f_126[0] >= 3)
	{
		Global_1130823->f_126[0] = 0;
	}
	func_44(&(Global_1130823->f_126[0]));
	Global_1130823->f_126[0] = &Global_1130823->f_126[0] + 1;
}

void func_33()
{
	if (!Global_1572887->f_6)
	{
		return;
	}
	if (&Global_2883584)
	{
		return;
	}
	if (func_45(2))
	{
		func_46(-530846566, 1);
	}
	else
	{
		func_46(-530846566, 0);
	}
	func_46(1548096282, 1);
	func_46(-245962931, 1);
	func_46(-500348165, 1);
	func_46(476945523, 1);
	func_46(-1420724065, 1);
	func_46(-532023123, 1);
	func_46(1603023256, 1);
	func_46(-421036188, 1);
	func_46(1431393516, 1);
}

void func_34(int iParam0)
{
	if (&Global_1130823 != iParam0)
	{
		Global_1130823 = iParam0;
	}
}

void func_35()
{
	if (aggregate.dynamic_craft_scenario.func_321(64, 255) || (Global_1901929->f_295.f_245 > 0 && !aggregate.fme_animal_tagging.func_884()))
	{
		if (!func_49(1))
		{
			func_50(1);
		}
	}
	else if (func_49(1))
	{
		func_51(1);
	}
}

void func_36()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	Global_1130823->f_126[2] = &Global_1130823->f_126[2] + 1;
	if (&Global_1130823->f_126[2] >= 300)
	{
		func_33();
		Global_1130823->f_126[2] = 0;
	}
}

void func_37()
{
	if (&Global_1130823->f_126[1] >= 3)
	{
		Global_1130823->f_126[1] = 0;
	}
	func_52(&(Global_1130823->f_126[1]));
	Global_1130823->f_126[1] = &Global_1130823->f_126[1] + 1;
}

bool func_39()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	VEHICLE::_0x138398153824E332();
	return true;
}

int func_41(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 0, &uParam1);
	return 1;
}

void func_44(int iParam0)
{
	switch (&Global_1130300->f_2[iParam0 /*17*/])
	{
		case 0:
			func_55(iParam0);
			break;
		case 1:
			func_56(iParam0);
			break;
		case 3:
			func_57(iParam0);
			break;
		case 4:
			func_58(iParam0);
			break;
	}
}

bool func_45(int iParam0)
{
	return aggregate.aberdeenpigfarm.func_175(Global_1130300->f_1, iParam0);
}

int func_46(int iParam0, int iParam1)
{
	struct<13> Var0;

	if (!func_60(iParam0, iParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 10;
		Var0.f_7 = iParam0;
		Var0.f_11 = iParam1;
		return func_41(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

bool func_49(int iParam0)
{
	return aggregate.aberdeenpigfarm.func_175(Global_1130823->f_1, iParam0);
}

void func_50(int iParam0)
{
	aggregate.bandana.func_26(&(Global_1130823->f_1), iParam0);
}

void func_51(int iParam0)
{
	aggregate.bandana.func_26(&(Global_1130823->f_1), iParam0);
}

void func_52(int iParam0)
{
	func_63(iParam0);
	switch (&Global_1130823->f_2[iParam0 /*41*/])
	{
		case 0:
			func_64(iParam0);
			break;
		case 1:
			func_65(iParam0);
			break;
		case 2:
			func_66(iParam0);
			break;
		case 3:
			func_67(iParam0);
			break;
		case 4:
			func_68(iParam0);
			break;
	}
}

void func_55(int iParam0)
{
	if (func_49(1))
	{
		return;
	}
	if ((Global_1130300->f_54[iParam0 /*17*/])->f_1 != 0)
	{
		*(Global_1130300->f_2[iParam0 /*17*/]) = { *(Global_1130300->f_54[iParam0 /*17*/]) };
		func_75(Global_1130300->f_54[iParam0 /*17*/]);
		aggregate.fme_king_of_the_rails.func_695(iParam0, 1);
	}
	else
	{
		func_77(iParam0);
	}
}

void func_56(int iParam0)
{
	if (func_49(1))
	{
		aggregate.fme_king_of_the_rails.func_695(iParam0, 4);
		return;
	}
	aggregate.fme_king_of_the_rails.func_695(iParam0, 3);
}

void func_57(int iParam0)
{
	if (func_49(1))
	{
		aggregate.fme_king_of_the_rails.func_695(iParam0, 4);
		return;
	}
	else if (!func_78(iParam0, 1))
	{
		aggregate.fme_king_of_the_rails.func_695(iParam0, 4);
		return;
	}
	else if ((Global_1130300->f_54[iParam0 /*17*/])->f_1 != 0)
	{
		aggregate.fme_king_of_the_rails.func_695(iParam0, 4);
		return;
	}
	func_79(iParam0);
	if (!aggregate.barcustomer_interaction.func_42(&((Global_1130300->f_2[iParam0 /*17*/])->f_12)))
	{
		if (!func_78(iParam0, 2))
		{
			(Global_1130300->f_2[iParam0 /*17*/])->f_16 = MISC::GET_RANDOM_INT_IN_RANGE(180000, 300000);
			aggregate.fme_animal_tagging.func_1407(&((Global_1130300->f_2[iParam0 /*17*/])->f_12));
		}
	}
	else if (func_78(iParam0, 2))
	{
		aggregate.fme_animal_tagging.func_290(&((Global_1130300->f_2[iParam0 /*17*/])->f_12));
	}
	else if (aggregate.fme_animal_tagging.func_181(&((Global_1130300->f_2[iParam0 /*17*/])->f_12)) > (Global_1130300->f_2[iParam0 /*17*/])->f_16)
	{
		aggregate.fme_king_of_the_rails.func_695(iParam0, 4);
		return;
	}
}

void func_58(int iParam0)
{
	if (!func_78(iParam0, 1))
	{
		func_75(Global_1130300->f_2[iParam0 /*17*/]);
	}
}

bool func_60(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case -530846566:
			iVar0 = -705539859;
			vVar1 = { -281.0263f, -319.5532f, 88.02095f };
			break;
		case -245962931:
			iVar0 = 1499637393;
			vVar1 = { 1481.509f, 648.3527f, 91.52025f };
			break;
		case -500348165:
			iVar0 = -760570040;
			vVar1 = { 1529.881f, 467.6379f, 89.20429f };
			break;
		case 476945523:
			iVar0 = 1499637393;
			vVar1 = { 1692.865f, 544.3328f, 97.59906f };
			break;
		case -1420724065:
			iVar0 = 1499637393;
			vVar1 = { 2659.843f, -435.6971f, 42.38826f };
			break;
		case 1548096282:
			iVar0 = 1499637393;
			vVar1 = { 31.56687f, -29.40786f, 102.3233f };
			break;
		case -532023123:
			iVar0 = -988268728;
			vVar1 = { -2174.342f, -2508.351f, 64.79848f };
			break;
		case 1603023256:
			iVar0 = -1467515357;
			vVar1 = { -4916.622f, -3009.565f, -19.15694f };
			break;
		case -421036188:
			iVar0 = -705539859;
			vVar1 = { 610.215f, 1662.165f, 186.3704f };
			break;
		case 1431393516:
			iVar0 = -705539859;
			vVar1 = { -1375.646f, -137.362f, 99.87008f };
			break;
	}
	if (!VEHICLE::_0x86AFC343CF7F0B34(iVar0, vVar1, &uVar4))
	{
		return false;
	}
	VEHICLE::_0xE6C5E2125EB210C1(iVar0, uVar4, iParam1);
	return true;
}

void func_63(int iParam0)
{
	float fVar0;
	struct<2> Var1;

	fVar0 = aggregate.flow_controller.func_464(iParam0);
	Var1 = { (Global_1130300->f_2[iParam0 /*17*/])->f_6 };
	if (aggregate.aberdeenpigfarm.func_158(Var1) && aggregate.flow_controller.func_165(aggregate.aberdeenpigfarm.func_56(0), Var1))
	{
		fVar0 = -1f;
	}
	if ((Global_1130823->f_2[iParam0 /*41*/])->f_3 != fVar0)
	{
		(Global_1130823->f_2[iParam0 /*41*/])->f_3 = fVar0;
	}
}

void func_64(int iParam0)
{
	if (func_49(1))
	{
		return;
	}
	if (&Global_1130300->f_2[iParam0 /*17*/] > 0 && &Global_1130300->f_2[iParam0 /*17*/] < 4)
	{
		func_89(iParam0, 1);
		func_90(iParam0, 1);
	}
}

void func_65(int iParam0)
{
	float fVar0;

	if (&Global_1130300->f_2[iParam0 /*17*/] == 4)
	{
		func_90(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_90(iParam0, 4);
		return;
	}
	if (&Global_1130300->f_2[iParam0 /*17*/] > 1)
	{
		if ((Global_1130823->f_2[iParam0 /*41*/])->f_3 > 0f)
		{
			if (!aggregate.annesburg.func_121((Global_1130300->f_2[iParam0 /*17*/])->f_2))
			{
				fVar0 = BUILTIN::VDIST((Global_1130300->f_2[iParam0 /*17*/])->f_2, Global_36);
				if (fVar0 < (Global_1130823->f_2[iParam0 /*41*/])->f_3 || aggregate.flow_controller.func_465(iParam0))
				{
					func_90(iParam0, 2);
				}
			}
		}
		else if ((Global_1130823->f_2[iParam0 /*41*/])->f_3 == -1f)
		{
			func_90(iParam0, 2);
		}
	}
}

void func_66(int iParam0)
{
	struct<2> Var0;

	if (&Global_1130300->f_2[iParam0 /*17*/] == 4)
	{
		func_90(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_90(iParam0, 4);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_1))
	{
		SCRIPTS::REQUEST_SCRIPT("net_train");
		if (!SCRIPTS::HAS_SCRIPT_LOADED("net_train"))
		{
			return;
		}
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
		{
			return;
		}
		Var0 = iParam0;
		Var0.f_1 = (Global_1130300->f_2[iParam0 /*17*/])->f_1;
		(Global_1130823->f_2[iParam0 /*41*/])->f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_train", &Var0, 2, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train");
		func_89(iParam0, 2);
	}
	else
	{
		func_90(iParam0, 3);
	}
}

void func_67(int iParam0)
{
	if (&Global_1130300->f_2[iParam0 /*17*/] == 4)
	{
		func_90(iParam0, 4);
	}
	else if (func_49(1))
	{
		func_90(iParam0, 4);
	}
	else if (!SCRIPTS::_DOES_THREAD_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_1))
	{
		func_90(iParam0, 4);
	}
}

void func_68(int iParam0)
{
	struct<4> Var0;
	struct<41> Var4;

	if (SCRIPTS::_DOES_THREAD_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_1))
	{
		return;
	}
	*((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[iParam0 /*4*/]) = { Var0 };
	Var4.f_10 = 15;
	if ((Global_1130823->f_2[iParam0 /*41*/])->f_9 != 0)
	{
		Var4.f_9 = (Global_1130823->f_2[iParam0 /*41*/])->f_9;
	}
	*(Global_1130823->f_2[iParam0 /*41*/]) = { Var4 };
}

void func_75(var uParam0)
{
	struct<17> Var0;

	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;

	(Global_1130823->f_2[iParam0 /*41*/])->f_7++;
	if ((Global_1130823->f_2[iParam0 /*41*/])->f_7 < 60)
	{
		return;
	}
	(Global_1130823->f_2[iParam0 /*41*/])->f_7 = 0;
	if (aggregate.fme_animal_tagging.func_884())
	{
		return;
	}
	if (!aggregate.barcustomer_interaction.func_42(&((Global_1130300->f_2[iParam0 /*17*/])->f_9)))
	{
		iVar0 = func_96(iParam0);
		if (iVar0 > 0)
		{
			(Global_1130300->f_2[iParam0 /*17*/])->f_15 = iVar0;
			aggregate.fme_animal_tagging.func_1407(&((Global_1130300->f_2[iParam0 /*17*/])->f_9));
		}
		return;
	}
	else if (aggregate.fme_animal_tagging.func_181(&((Global_1130300->f_2[iParam0 /*17*/])->f_9)) < (Global_1130300->f_2[iParam0 /*17*/])->f_15)
	{
		return;
	}
	iVar1 = func_97(iParam0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_98(iParam0);
	if (iVar2 == 0)
	{
		return;
	}
	vVar3 = { func_99(iVar2) };
	fVar6 = 0f;
	vVar7 = { VEHICLE::_0xBA958F68031DDBFC(vVar3.x, vVar3.y) };
	iVar13 = 0;
	while (iVar13 <= 30)
	{
		fVar6 = (200f + (IntToFloat(iVar13) * 10f));
		vVar10 = { VEHICLE::_0x35D302397E524939(vVar3.x, vVar7, fVar6, !vVar3.z) };
		if (aggregate.flow_controller.func_429(iParam0, vVar10))
		{
			func_102(iParam0, iVar1, vVar10, vVar3.z, aggregate.flow_controller.func_181());
			return;
		}
		iVar13++;
	}
}

bool func_78(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && aggregate.aberdeenpigfarm.func_175((*Global_1130406)[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = (Global_1130823->f_2[iParam0 /*41*/])->f_8;
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		vVar2 = { ((*(*Global_1130406)[iVar0 /*13*/])[iParam0 /*4*/])->f_1 };
		if (!aggregate.annesburg.func_121(vVar2))
		{
			if (BUILTIN::VDIST(vVar2, (Global_1130300->f_2[iParam0 /*17*/])->f_2) > 10f)
			{
				(Global_1130300->f_2[iParam0 /*17*/])->f_2 = { vVar2 };
			}
		}
	}
	(Global_1130823->f_2[iParam0 /*41*/])->f_8++;
	if ((Global_1130823->f_2[iParam0 /*41*/])->f_8 >= 32)
	{
		(Global_1130823->f_2[iParam0 /*41*/])->f_8 = 0;
	}
}

void func_89(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		aggregate.bandana.func_26((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[iParam0 /*4*/], iParam1);
	}
}

void func_90(int iParam0, int iParam1)
{
	if (&Global_1130823->f_2[iParam0 /*41*/] != iParam1)
	{
		Global_1130823->f_2[iParam0 /*41*/] = iParam1;
	}
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_242;
		case 1:
			return Global_1901929->f_295.f_243;
		case 2:
			return Global_1901929->f_295.f_244;
		default:
			break;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 756707084;
			break;
		case 1:
			iVar0 = 756707084;
			break;
		case 2:
			iVar0 = -1083616881;
			break;
	}
	return iVar0;
}

int func_98(int iParam0)
{
	struct<2> Var0;
	float fVar41;
	int iVar42;

	if (iParam0 == 2)
	{
		return func_113(iParam0);
	}
	Var0 = 20;
	Var0.f_1 = 1203982336;
	Var0.f_1.f_2 = 1203982336;
	Var0.f_1.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	iVar42 = func_114(iParam0);
	while (iVar42 <= func_115(iParam0))
	{
		fVar41 = func_116(iParam0, iVar42);
		if (fVar41 > 0f)
		{
			Var0[iVar42 /*2*/] = fVar41;
			(Var0[iVar42 /*2*/])->f_1 = iVar42;
		}
		iVar42++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 2, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return (Var0[0 /*2*/])->f_1;
}

Vector3 func_99(int iParam0)
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

int func_102(int iParam0, int iParam1, vector3 vParam2, var uParam5, struct<2> Param6)
{
	if (!aggregate.fme_king_of_the_rails.func_694())
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	else if (aggregate.annesburg.func_121(vParam2))
	{
		return 0;
	}
	(Global_1130300->f_54[iParam0 /*17*/])->f_1 = iParam1;
	(Global_1130300->f_54[iParam0 /*17*/])->f_2 = { vParam2 };
	(Global_1130300->f_54[iParam0 /*17*/])->f_5 = uParam5;
	(Global_1130300->f_54[iParam0 /*17*/])->f_6 = { Param6 };
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_114(iParam0);
	iVar1 = func_115(iParam0);
	return MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1 + 1);
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 9;
		case 2:
			return 12;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 11;
		case 2:
			return 19;
	}
	return 0;
}

float func_116(int iParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	fVar0 = 0f;
	vVar1 = { func_99(iParam1) };
	fVar4 = 0f;
	vVar5 = { VEHICLE::_0xBA958F68031DDBFC(vVar1.x, vVar1.y) };
	iVar15 = 0;
	while (iVar15 <= 30)
	{
		fVar4 = (200f + (IntToFloat(iVar15) * 10f));
		vVar8 = { VEHICLE::_0x35D302397E524939(vVar1.x, vVar5, fVar4, !vVar1.z) };
		if (aggregate.flow_controller.func_429(iParam0, vVar8))
		{
			iVar14 = 0;
			while (iVar14 <= 31)
			{
				iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar14);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
				{
					iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
					if (ENTITY::DOES_ENTITY_EXIST(iVar13))
					{
						fVar11 = (fVar11 + aggregate.blackwater.func_175(vVar8, ENTITY::GET_ENTITY_COORDS(iVar13, false, false)));
					}
				}
				iVar14++;
			}
			fVar0 = fVar11;
		}
		else
		{
			iVar15++;
		}
	}
	return fVar0;
}

