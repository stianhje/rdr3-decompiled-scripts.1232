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

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	func_1(&ScriptParam_0, &(Var0.f_1));
	Var0.f_1.f_2 = 3f;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			aggregate.generic_alcohol_item.func_9(&(Var0.f_1));
		}
		switch (Var0)
		{
			case 0:
				if (aggregate.bandana.func_30(Var0.f_1, 0))
				{
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
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					aggregate.coffee_drinking.func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					aggregate.coffee_drinking.func_5(&Var0, 3);
				}
				break;
			case 2:
				aggregate.coffee_drinking.func_11(&(Var0.f_1), 1);
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
	if (Var0 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		while (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
			aggregate.coffee_drinking.func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
		}
	}
}

void func_1(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
}

