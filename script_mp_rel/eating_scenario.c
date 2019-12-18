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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1803

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
	{
		aggregate_func_4610(0, 12.5f, 0, 0, 0);
		aggregate_func_4629(10f, 1);
		switch (iLocal_17)
		{
			case -1200128754:
			case 1154717469:
				func_14(-241345764 /* GXTEntry: "Almonds" */);
				break;
			case 1637554487:
				func_14(-1735850413 /* GXTEntry: "Pickled Egg" */);
				break;
		}
		if (aggregate_func_7073(1))
		{
			aggregate_func_7706(-0.1f, 0);
		}
	}
}

void func_14(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;

	Var0.f_1 = 20;
	if ((aggregate_func_2852(iParam0, 1573112293) || aggregate_func_2852(iParam0, 672467738)) || aggregate_func_2852(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (aggregate_func_2830(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = aggregate_func_399(0, Var22.f_2);
				aggregate_func_1508(Var22.f_2);
				iVar39 = 1;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = aggregate_func_399(2, Var22.f_2);
				aggregate_func_2872(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = aggregate_func_399(1, Var22.f_2);
				aggregate_func_1509(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = aggregate_func_4614(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				aggregate_func_4610(0, fVar33, 1, 1, bVar37);
				iVar39 = 1;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = aggregate_func_4614(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				aggregate_func_4610(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = aggregate_func_4614(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				aggregate_func_4610(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(19, fVar36, 1, 1);
				iVar39 = 1;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(0, fVar36, 1, 1);
				iVar39 = 1;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = aggregate_func_4621(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				aggregate_func_1997(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				aggregate_func_4629(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (iVar39 || aggregate_func_2852(iParam0, -537818634))
		{
			aggregate_func_1962(aggregate_func_4354(-704089207), 1);
		}
		if (aggregate_func_2852(iParam0, -1457797660))
		{
			aggregate_func_1962(aggregate_func_4354(-1909697259), 1);
		}
		if (bVar38)
		{
			aggregate_func_1962(aggregate_func_4354(704570463), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1517929953, 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

