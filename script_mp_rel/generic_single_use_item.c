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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;
	int iVar179;
	bool bVar180;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = ScriptParam_0.f_2;
	Var0.f_1.f_2 = 1f;
	iVar179 = aggregate.coffee_drinking.func_101(Var0.f_1, -949239683);
	bVar180 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			aggregate.generic_alcohol_item.func_9(&(Var0.f_1));
			if (Var0 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			}
		}
		switch (Var0)
		{
			case 0:
				if (aggregate.bandana.func_30(Var0.f_1, 0))
				{
					bVar180 = true;
					aggregate.coffee_drinking.func_4(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					aggregate.coffee_drinking.func_5(&Var0, 2);
				}
				else
				{
					aggregate.coffee_drinking.func_5(&Var0, 1);
				}
				break;
			case 1:
				if (iVar179 == 845883585)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
					{
						Var0.f_1.f_1++;
						aggregate.coffee_drinking.func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
						func_7(Var0.f_1, 0);
						aggregate.generic_single_use_item.func_8(1);
						Var0.f_1.f_177 = 1;
						aggregate.coffee_drinking.func_5(&Var0, 3);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					aggregate.coffee_drinking.func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					func_7(Var0.f_1, 0);
					aggregate.coffee_drinking.func_5(&Var0, 3);
				}
				break;
			case 2:
				func_9(&Var0, iVar179, bVar180);
				aggregate.coffee_drinking.func_5(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			func_9(&Var0, iVar179, bVar180);
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<16> Var10;

	switch (iParam0)
	{
		case 204375141: /* GXTEntry: "Ginseng Elixir" */
			break;
		case -417963070: /* GXTEntry: "Valerian Root" */
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			break;
		case -1620920647: /* GXTEntry: "English Mace" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 1433048902: /* GXTEntry: "Ginseng" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			aggregate.coffee_drinking.func_87(350943398);
			break;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			if ((bParam1 || !aggregate.fm_race_controller.func_1990()) || !PED::IS_PED_ON_FOOT(Global_35))
			{
				return;
			}
			if (iParam0 != 228922461 || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				aggregate.dynamic_craft_scenario.func_68(Var10, 0);
			}
			break;
		case 1365804873: /* GXTEntry: "Potent Antidote" */
		case 1889838061: /* GXTEntry: "Antidote" */
			if (iParam0 == 1889838061)
			{
			}
			else if (iParam0 == 1365804873)
			{
			}
			func_27();
			break;
	}
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam1 == 845883585)
	{
		func_36(aggregate.generic_single_use_item.func_35(), Global_35, -282754472, 1);
		aggregate.generic_single_use_item.func_30(1);
	}
	if (iParam0->f_1 == 80178851)
	{
	}
	if (aggregate.bandana.func_30(iParam0->f_1, 0) && !bParam2)
	{
		aggregate.coffee_drinking.func_4(&(iParam0->f_1));
	}
	aggregate.coffee_drinking.func_11(&(iParam0->f_1), 1);
	func_7(iParam0->f_1, 1);
}

void func_27()
{
	aggregate.coffee_drinking.func_87(350943398);
	aggregate.coffee_drinking.func_87(1775828486);
}

int func_36(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!aggregate.dynamic_craft_scenario.func_168(bParam0, iParam2, 1, 1, 0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			iVar0 = 0;
			if (func_92(bParam0, -1811760631, &(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9), 1))
			{
				iVar0 = 2048;
			}
			aggregate.bandana.func_28(9, 0, iVar0, 0, 0);
		}
		else
		{
			aggregate.bandana.func_28(9, 0, 1, iParam1, 0);
		}
	}
	aggregate.fm_mission_controller.func_7260(1);
	return 1;
}

bool func_92(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (aggregate.aberdeenpigfarm.func_61(&(Global_1951131->f_1055), 2))
	{
		return false;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = aggregate.fme_animal_tagging.func_1298(bParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = aggregate.fme_animal_tagging.func_1299(bParam0);
	}
	else
	{
		return false;
	}
	iVar1 = aggregate.fme_animal_tagging.func_1300(uParam3, iParam1);
	bVar2 = aggregate.binoculars.func_75(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			aggregate.fme_animal_tagging.func_1302(uParam2, uParam3, iParam1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_1303(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!aggregate.fme_animal_tagging.func_1304(&Var3, iVar0, 0, 1, 6))
		{
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return false;
		}
		aggregate.fme_animal_tagging.func_1305(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		aggregate.fme_animal_tagging.func_1306(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!aggregate.fme_animal_tagging.func_1304(&Var21, iVar0, 0, 1, 6))
		{
			return false;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return true;
}

