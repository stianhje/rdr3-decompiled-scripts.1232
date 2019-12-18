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
	iVar179 = aggregate_func_2900(Var0.f_1, -949239683);
	bVar180 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			aggregate_func_1349(&(Var0.f_1));
			if (Var0 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			}
		}
		switch (Var0)
		{
			case 0:
				if (aggregate_func_2823(Var0.f_1, 0))
				{
					bVar180 = true;
					aggregate_func_2449(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					aggregate_func_4252(&Var0, 2);
				}
				else
				{
					aggregate_func_4252(&Var0, 1);
				}
				break;
			case 1:
				if (iVar179 == 845883585)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
					{
						Var0.f_1.f_1++;
						aggregate_func_580(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
						aggregate_func_2651(Var0.f_1, 0);
						aggregate_func_5536(1);
						Var0.f_1.f_177 = 1;
						aggregate_func_4252(&Var0, 3);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					aggregate_func_580(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					aggregate_func_2651(Var0.f_1, 0);
					aggregate_func_4252(&Var0, 3);
				}
				break;
			case 2:
				func_9(&Var0, iVar179, bVar180);
				aggregate_func_4252(&Var0, 3);
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

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam1 == 845883585)
	{
		func_36(aggregate_func_5537(), Global_35, -282754472, 1);
		aggregate_func_5237(1);
	}
	if (iParam0->f_1 == 80178851)
	{
	}
	if (aggregate_func_2823(iParam0->f_1, 0) && !bParam2)
	{
		aggregate_func_2449(&(iParam0->f_1));
	}
	aggregate_func_580(&(iParam0->f_1), 1);
	aggregate_func_2651(iParam0->f_1, 1);
}

int func_36(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!aggregate_func_5023(bParam0, iParam2, 1, 1, 0))
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
			aggregate_func_4733(9, 0, iVar0, 0, 0);
		}
		else
		{
			aggregate_func_4733(9, 0, 1, iParam1, 0);
		}
	}
	aggregate_func_4976(1);
	return 1;
}

bool func_92(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (aggregate_func_4250(&(Global_1951131->f_1055), 2))
	{
		return false;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = aggregate_func_4857(bParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = aggregate_func_4858(bParam0);
	}
	else
	{
		return false;
	}
	iVar1 = aggregate_func_4859(uParam3, iParam1);
	bVar2 = aggregate_func_4327(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			aggregate_func_2955(uParam2, uParam3, iParam1);
		}
		else
		{
			aggregate_func_4860(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!aggregate_func_2956(&Var3, iVar0, 0, 1, 6))
		{
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return false;
		}
		aggregate_func_4861(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		aggregate_func_4862(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!aggregate_func_2956(&Var21, iVar0, 0, 1, 6))
		{
			return false;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return true;
}

