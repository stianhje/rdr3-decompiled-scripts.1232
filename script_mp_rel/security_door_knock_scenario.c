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
	int iLocal_19 = 0;
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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vLocal_62[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_72 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1747

void func_6()
{
	int iVar0;

	iLocal_13 = 0;
	return;
	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (aggregate_func_9360(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!aggregate_func_9360(3))
			{
				func_13(1);
				func_14();
				aggregate_func_4627(3);
			}
		}
	}
	switch (iLocal_19)
	{
		case 0:
			*(vLocal_62[0 /*3*/]) = { func_16() };
			*(vLocal_62[1 /*3*/]) = { func_17() };
			*(vLocal_62[2 /*3*/]) = { func_18() };
			func_19(Global_35, &vLocal_62, &iVar0);
			iLocal_72 = func_20(iVar0);
			aggregate_func_4627(1);
			break;
		case 1:
			if (!aggregate_func_4260(&uLocal_20))
			{
				OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 1);
				aggregate_func_4293(&uLocal_20, 0);
			}
			else if (aggregate_func_4628(&uLocal_20, 3f))
			{
				aggregate_func_4283(&uLocal_20);
				aggregate_func_9361(1);
				aggregate_func_4627(2);
			}
			break;
		case 2:
			if (!func_26())
			{
				return;
			}
			aggregate_func_83(&uLocal_23, 1, 1, 0, 0, 1);
			if (aggregate_func_4628(&uLocal_20, 3.5f))
			{
				func_14();
				func_13(1);
				aggregate_func_4627(3);
			}
			break;
		case 3:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 0);
		iLocal_13 = 0;
	}
}

void func_13(int iParam0)
{
	if (!aggregate_func_9360(iParam0))
	{
		return;
	}
	iParam0 = (iParam0 - (iParam0 && iParam0));
}

void func_14()
{
	aggregate_func_897(&uLocal_23);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 0);
	aggregate_func_9361(3);
}

Vector3 func_16()
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_17()
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_18()
{
	return -281.07f, 815.24f, 118.42f;
}

Vector3 func_19(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	iVar5 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		*iParam2 = iVar0;
		fVar6 = aggregate_func_1501(iParam0, *((*uParam1)[iVar0 /*3*/]), 1);
		if (aggregate_func_4268(*((*uParam1)[iVar0 /*3*/])))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *((*uParam1)[iVar0 /*3*/]) };
		}
		else if (fVar4 > fVar6)
		{
			vVar1 = { *((*uParam1)[iVar0 /*3*/]) };
		}
		iVar0++;
	}
	return vVar1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 841127028;
		case 1:
			return 925575409;
		case 2:
			return -855228377;
		default:
			break;
	}
	return 0;
}

bool func_26()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	if (!aggregate_func_4246(iLocal_72))
	{
		return false;
	}
	iVar0 = aggregate_func_1920(iLocal_72, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_39()) };
	if (aggregate_func_4268(vVar1))
	{
		return false;
	}
	vVar4 = { func_40() };
	switch (iLocal_72)
	{
		case 841127028:
			fVar7 = 115f;
			break;
		case 925575409:
			fVar7 = 10f;
			break;
		case -855228377:
			fVar7 = 100f;
			break;
	}
	fVar7 = (fVar7 + vVar4.z);
	aggregate_func_738(&uLocal_23, vVar1, vVar4.x, vVar4.y, fVar7, 35f, 20, 10, 1077936128 /* Float: 3f */, 1101004800 /* Float: 20f */, 1, 0, 0.24f, 0, 0, 1044549468 /* Float: 0.19f */);
	aggregate_func_9361(2);
	return true;
}

Vector3 func_39()
{
	return 0.585564f, 0.325876f, 1.6871f;
}

Vector3 func_40()
{
	return -7.766f, 0f, 175.2488f;
}

