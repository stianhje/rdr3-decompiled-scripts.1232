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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	bool bLocal_22 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == armoire_corpse_scenario.__EntryFunction__

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || aggregate.aberdeenpigfarm.func_45() != 0)
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_22 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		PED::_0xEB8886E1065654CD(Global_35, 4, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_35, 6, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_35, 1, "ALL", 0.5f);
		PED::_0xA7A806677F8DE138(Global_35);
		bLocal_22 = true;
		iLocal_13 = 0;
		if (aggregate.coffee_drinking.func_6(1))
		{
			aggregate.coffee_drinking.func_7(-0.3f, 0);
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iLocal_13 = 0;
	}
}

