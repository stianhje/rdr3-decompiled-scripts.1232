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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	bool bLocal_18 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == ambient_fishing_scenario.__EntryFunction__

void func_6()
{
	float fVar0;
	float fVar1;
	bool bVar2;

	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492) && !bLocal_18)
	{
		fVar0 = 1f;
		fVar1 = 1f;
		bVar2 = false;
		bLocal_18 = true;
		aggregate.money_pile.func_13(BUILTIN::FLOOR((fVar0 * BUILTIN::TO_FLOAT(func_12(1871635045)))), bVar2, fVar1, 1, 0, 0, 1);
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		iLocal_13 = 0;
	}
}

int func_12(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (aggregate.aberdeenpigfarm.func_123())
	{
		return 0;
	}
	if (!aggregate.doc_book.func_337(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

