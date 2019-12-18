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
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<4> Local_51 = { 0, 0, 0, 0 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_49 = joaat("s_m_m_ambientlawrural_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (aggregate_func_4484(uScriptParam_0) && iLocal_48 < 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	LAW::_0x7EF2A2FE38D74456(aggregate_func_8613(8), 0);
}

void func_2()
{
	iLocal_48 = 1;
	PED::_0xED9582B3DA8F02B4(5);
}

void func_4()
{
	switch (iLocal_48)
	{
		case 1:
			iLocal_48 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_49, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_49) && PED::_0x5E420FF293EE5472())
			{
				iLocal_48 = 4;
			}
			break;
		case 4:
			if (func_6())
			{
				iLocal_48 = 5;
			}
			break;
		case 5:
			iLocal_48 = 6;
			break;
		case 6:
			iLocal_48 = 7;
			break;
	}
}

bool func_6()
{
	int iVar0;

	if (!func_7())
	{
		return false;
	}
	iLocal_50++;
	iVar0 = aggregate_func_2073(iLocal_49, vLocal_45, 0, 1, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_PED_AS_COP(iVar0, true);
	aggregate_func_501(&iVar0, 1, 0, 1);
	aggregate_func_2530(&Local_51, 1, 0);
	if (iLocal_50 >= 5)
	{
		return true;
	}
	return false;
}

bool func_7()
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;

	fVar0 = 55f;
	fVar1 = 90f;
	iVar2 = aggregate_func_4937(iLocal_50, Local_51.f_2);
	fVar3 = (IntToFloat(iVar2) * 25f);
	fVar4 = (fVar3 + 45f);
	if (fVar3 > 150f)
	{
		fVar3 = 150f;
	}
	if (fVar4 > 180f)
	{
		fVar4 = 180f;
	}
	if (!aggregate_func_695(Global_36, &Local_51, &uVar5, 1, 1, fVar4, 50f, fVar0, fVar1, fVar3))
	{
		return false;
	}
	vLocal_45 = { Local_51.f_3 };
	return true;
}

