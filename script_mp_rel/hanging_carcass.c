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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<44> Var0;

	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1) || aggregate_func_4251() != -1)
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_40 = -950200242;
	Var0.f_41 = -227367034;
	Var0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_1 = { TASK::_0xA8452DD321607029(ScriptParam_0.f_1, 1) };
	Var0.f_4 = TASK::_0xB93EA7184BAA85C3(ScriptParam_0.f_1, 1);
	Var0.f_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_0x7467165EE97D3C68(ScriptParam_0.f_1));
	Var0.f_39 = ENTITY::GET_ENTITY_MODEL(Var0.f_43);
	StringCopy(&(Var0.f_22), "Dead_Hanging", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0, 0);
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (aggregate_func_4350(&Var0) || func_4(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_5(&(ScriptParam_0.f_1)) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, 0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, bool bParam1)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_49))
	{
		TASK::_0x81948DFE4F5A0283(uParam0->f_49);
	}
	if (bParam1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_44))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_44));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_45))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_45));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_46));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_47))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_47));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_48))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_48));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_42))
	{
		if (aggregate_func_4250(uParam0, 256))
		{
			if (!aggregate_func_4250(uParam0, 32))
			{
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 10000, 20000, 0, false, true, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_42));
		}
		PED::_0x7D4E70A67A651C71(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
	}
}

int func_4(var uParam0)
{
	int iVar0;
	vector3 vVar1[5];

	*(vVar1[0 /*3*/]) = { -2844.586f, 133.7118f, 183.6223f };
	*(vVar1[1 /*3*/]) = { -1008.624f, -544.7607f, 98.21857f };
	*(vVar1[2 /*3*/]) = { 2074.396f, 996.5762f, 111.6177f };
	*(vVar1[3 /*3*/]) = { 2832.072f, -1226.912f, 46.65f };
	*(vVar1[4 /*3*/]) = { -2255.234f, -1914.754f, 116.158f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (aggregate_func_1533(*(vVar1[iVar0 /*3*/]), uParam0->f_1, 5f, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_5(var uParam0)
{
	if ((SCRIPTS::_0x9E4EF615E307FBBE() || !TASK::_0x841475AC96E794D1(*uParam0)) || aggregate_func_7191())
	{
		return true;
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_57)
	{
		case 0:
			if (func_10(uParam0))
			{
				aggregate_func_4242(uParam0, 1);
			}
			break;
		case 1:
			if (func_12(uParam0))
			{
				aggregate_func_4242(uParam0, 2);
			}
			break;
		case 2:
			if (func_13(uParam0))
			{
				aggregate_func_4242(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(uParam0))
			{
				if (func_15(3, uParam0))
				{
					aggregate_func_4242(uParam0, 5);
				}
				else
				{
					aggregate_func_4242(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_16(uParam0))
			{
				aggregate_func_4242(uParam0, 5);
			}
			break;
		case 5:
			if (func_17(uParam0))
			{
				aggregate_func_4313(&(uParam0->f_52));
				aggregate_func_4242(uParam0, 6);
			}
			break;
		case 6:
			if (func_19(uParam0))
			{
				aggregate_func_4242(uParam0, 7);
			}
			break;
		case 7:
			if (func_20(uParam0))
			{
				aggregate_func_4313(&(uParam0->f_52));
				aggregate_func_4242(uParam0, 8);
			}
			break;
		case 8:
			if (func_21(uParam0))
			{
				aggregate_func_4313(&(uParam0->f_52));
				aggregate_func_4242(uParam0, 9);
			}
			break;
		case 9:
			break;
	}
	return false;
}

bool func_10(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	vVar0 = { 799.362f, 1512.22f, 203.6078f };
	vVar3 = { 2558f, 795f, 75f };
	vVar6 = { -754f, -1284.5f, 42.75f };
	if (aggregate_func_1533(uParam0->f_1, vVar3, 60f, 1))
	{
		aggregate_func_4254(uParam0, 128);
		aggregate_func_4254(uParam0, 64);
	}
	if (aggregate_func_1533(uParam0->f_1, vVar6, 10f, 1))
	{
		aggregate_func_4254(uParam0, 64);
	}
	switch (uParam0->f_39)
	{
		case joaat("p_carcasshanglrg01x"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (aggregate_func_3311(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					iVar9 = 0;
					break;
			}
			if (aggregate_func_1533(uParam0->f_1, vVar0, 10f, 1))
			{
				iVar9 = 1;
			}
			if (aggregate_func_4250(uParam0, 128))
			{
				iVar9 = 0;
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_deer_01");
					StringCopy(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_wolf_medium");
					break;
			}
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (uParam0->f_39 == joaat("p_carcasshangmed01x"))
			{
				if (aggregate_func_4250(uParam0, 128))
				{
					iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				else
				{
					iVar9 = 1;
				}
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_fox_01");
					StringCopy(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_rabbit_01");
					StringCopy(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 2:
					StringCopy(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_duck_01");
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
		case joaat("p_carcasshangfish01a"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar9)
			{
				case 0:
					uParam0->f_38 = joaat("a_c_fishrainbowtrout_01_ms");
					break;
				case 1:
					uParam0->f_38 = joaat("a_c_fishsalmonsockeye_01_ms");
					break;
			}
			uParam0->f_55 = 3;
			break;
		case 1148808695:
			break;
	}
	return true;
}

bool func_12(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_39, false);
	STREAMING::REQUEST_MODEL(uParam0->f_38, false);
	PED::_0xF008E0BA1FE1D644(1);
	if (func_15(0, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_40, false);
	}
	if (func_15(1, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_41, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_14));
	}
	return true;
}

bool func_13(var uParam0)
{
	if ((!STREAMING::HAS_MODEL_LOADED(uParam0->f_39) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_38)) || !PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (func_15(0, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_40))
		{
			return false;
		}
	}
	if (func_15(1, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_41))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_14)))
		{
			return false;
		}
	}
	return true;
}

bool func_14(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = -90f;
	vVar1 = { uParam0->f_1 };
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	if (func_15(3, uParam0))
	{
		vVar1 = { func_24(uParam0) };
	}
	if (func_15(1, uParam0))
	{
		uParam0->f_45 = OBJECT::CREATE_OBJECT(uParam0->f_41, vVar1, false, true, false, false, false);
		OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_45);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_45, false, false);
	}
	uParam0->f_42 = aggregate_func_2073(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_42, true);
	PED::_SET_PED_SCALE(uParam0->f_42, 1f);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 186, false);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 243, true);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_42, uParam0->f_42, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, false, false);
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_43, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
	if (func_15(3, uParam0))
	{
		aggregate_func_1172(uParam0->f_42, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	if (aggregate_func_4250(uParam0, 128))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_30)))
		{
			PED::APPLY_PED_DAMAGE_PACK(uParam0->f_42, &(uParam0->f_30), 0f, 1f);
		}
	}
	func_27(uParam0, 0);
	return true;
}

bool func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_39 == joaat("p_carcasshanglrg01x");
		case 1:
			return (uParam1->f_39 == joaat("p_carcasshangmed01x") || uParam1->f_39 == joaat("p_carcasshangmed01a"));
		case 2:
			return uParam1->f_39 == 1148808695;
		case 3:
			return uParam1->f_39 == joaat("p_carcasshangfish01a");
		default:
			break;
	}
	return false;
}

bool func_16(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		TASK::TASK_PLAY_ANIM(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0, 0, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	else
	{
		aggregate_func_1172(uParam0->f_42, 1, 1);
	}
	if (func_15(1, uParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, true);
	}
	return true;
}

bool func_17(var uParam0)
{
	if (!aggregate_func_4260(&(uParam0->f_52)))
	{
		aggregate_func_4283(&(uParam0->f_52));
		uParam0->f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f);
	}
	if (aggregate_func_4628(&(uParam0->f_52), uParam0->f_5))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_42))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, true, false);
			switch (uParam0->f_55)
			{
				case 0:
					func_31(uParam0);
					break;
				case 1:
				case 2:
				case 3:
					func_32(uParam0);
					break;
			}
			if (func_15(1, uParam0) || func_15(3, uParam0))
			{
				if (func_15(1, uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, false);
				}
				func_33(uParam0);
			}
			return true;
		}
	}
	return false;
}

bool func_19(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (aggregate_func_4250(uParam0, 64))
	{
		bVar0 = true;
	}
	else if (!TASK::_0x841475AC96E794D1(uParam0->f_49))
	{
		if ((ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) || PED::_0x7020839C7302D8AC(uParam0->f_42)) || (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46) && !PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
		{
			func_34(uParam0);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
	}
	return bVar0;
}

bool func_20(var uParam0)
{
	if (func_15(0, uParam0))
	{
		if (!aggregate_func_4250(uParam0, 256))
		{
			if (PED::_0xBA208A8D6399A3AC(uParam0->f_42, 10) || PED::_0xBA208A8D6399A3AC(uParam0->f_42, 13))
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
				func_35(uParam0);
				func_2(uParam0, 1);
				aggregate_func_4254(uParam0, 256);
				return true;
			}
		}
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_49) && PED::_0x9C54041BB66BCF9E(Global_35, uParam0->f_49))
	{
		if (!aggregate_func_4250(uParam0, 8))
		{
			TASK::TASK_LOOK_AT_COORD(Global_35, func_24(uParam0), -1, 0, 21, 0);
			aggregate_func_4254(uParam0, 8);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1900650591))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_42, 5000, 0, 21, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1244474073))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
			uParam0->f_44 = OBJECT::CREATE_OBJECT(-950200242, uParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_44, Global_35, 4, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			aggregate_func_4254(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2118990041))
		{
			if (func_15(1, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			}
			else if (func_15(3, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			}
			else
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
			}
			aggregate_func_4254(uParam0, 4);
			return false;
		}
		if (aggregate_func_4250(uParam0, 4) && !aggregate_func_4250(uParam0, 32))
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
			func_27(uParam0, 1);
			aggregate_func_4254(uParam0, 32);
			func_35(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 519570738))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
			aggregate_func_4254(uParam0, 4);
		}
	}
	else if (aggregate_func_4250(uParam0, 8) && !aggregate_func_4250(uParam0, 16))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		func_2(uParam0, 1);
		aggregate_func_4254(uParam0, 16);
		aggregate_func_4254(uParam0, 256);
		return true;
	}
	else if ((!PED::_0x7020839C7302D8AC(uParam0->f_42) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42)) && ((func_15(1, uParam0) || func_15(3, uParam0)) && PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
	{
		if (aggregate_func_4250(uParam0, 128))
		{
			MISC::_0x674B90BE1115846D(uParam0->f_42, 1);
			func_27(uParam0, 1);
		}
		if (!aggregate_func_4250(uParam0, 64))
		{
			func_27(uParam0, 1);
		}
		aggregate_func_4254(uParam0, 256);
		func_35(uParam0);
		func_2(uParam0, 1);
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!aggregate_func_4260(&(uParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_35))
		{
			iVar0 = PED::_0x14169FA823679E41(Global_35);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == uParam0->f_42)
			{
				aggregate_func_4283(&(uParam0->f_52));
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_35 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar2.y) == uParam0->f_42)
				{
					if (vVar2.z)
					{
						return true;
					}
					else
					{
						return true;
					}
				}
				else if (vVar2.x == 0 || vVar2.y == 0)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	if (ENTITY::_0x61914209C36EFDDB(uParam0->f_42) == 5)
	{
		return true;
	}
	return false;
}

Vector3 func_24(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	switch (uParam0->f_39)
	{
		case joaat("p_carcasshanglrg01x"):
			iVar3 = 4;
			break;
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
		case joaat("p_carcasshangfish01a"):
			iVar3 = 4;
			break;
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	return vVar0;
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	PED::_0x6569F31A01B4C097(uParam0->f_42, 0, bParam1);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_42, 7, bParam1);
}

void func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	iVar2 = func_41(uParam0->f_39, 0);
	iVar3 = func_41(uParam0->f_39, 1);
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar2) };
	vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = func_41(uParam0->f_39, 2);
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 90f, 0f };
	switch (uParam0->f_38)
	{
		case joaat("a_c_fox_01"):
			vVar5 = { -0.0125f, -0.03f, 0.0125f };
			vVar8 = { 90f, 0f, 90f };
			break;
		case joaat("a_c_rabbit_01"):
			vVar2 = { -0.0125f, 0f, -0.025f };
			vVar8 = { 0f, 90f, 0f };
			break;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_45, uParam0->f_42, iVar1, iVar0, vVar5, vVar2, vVar8, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
}

void func_33(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_15(3, uParam0))
	{
		iVar0 = 8;
		fVar1 = 0.2f;
	}
	else
	{
		iVar0 = 1;
		fVar1 = 0.3f;
	}
	uParam0->f_46 = PHYSICS::_0xE9C59F6809373A99(uParam0->f_1, 0f, 0f, 0f, fVar1, iVar0, 0, 1, -1082130432 /* Float: -1f */);
	if (func_15(3, uParam0))
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	}
	else
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);
	}
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_46, 0, 0, fVar1, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_0x7A54D82227A139DB(&(uParam0->f_46), 1);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_46, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_46, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_46, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_46, 1);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_46, 1, 1);
	AUDIO::_0x2651DDC0EA269073(uParam0->f_46, 1f);
}

void func_34(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	switch (uParam0->f_39)
	{
		case joaat("p_carcasshanglrg01x"):
			iVar0 = 1669298768;
			vVar1 = { 0.155f, -0.9f, 0f };
			break;
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangfish01a"):
			iVar0 = -1091256437;
			vVar1 = { -0.1f, -0.61f, 0f };
			break;
	}
	if (iVar0 != 0)
	{
		uParam0->f_49 = TASK::CREATE_SCENARIO_POINT(iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, vVar1), uParam0->f_4, 0, 0, 0);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (Global_1957511->f_31 > 9 || Global_1957511->f_31 < 0)
	{
		Global_1957511->f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (aggregate_func_1533(*((*Global_1957511)[iVar0 /*3*/]), uParam0->f_1, 0.1f, 0))
		{
			return;
		}
		iVar0++;
	}
	*((*Global_1957511)[Global_1957511->f_31 /*3*/]) = { uParam0->f_1 };
	Global_1957511->f_31++;
}

int func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("p_carcasshanglrg01x"):
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 5;
			}
			break;
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
		case joaat("p_carcasshangfish01a"):
			if (iParam1 == 3)
			{
				return 2;
			}
			if (iParam1 == 2)
			{
				return 4;
			}
			if (iParam1 == 0)
			{
				return 5;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
		case 1148808695:
			if (iParam1 == 2)
			{
				return 6;
			}
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
	}
	return 4;
}

