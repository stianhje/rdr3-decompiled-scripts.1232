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
	int iLocal_18 = 0;
	struct<13> Local_19[5];
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	bool bLocal_92 = false;
	var uLocal_93[1] = { 0 };
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_87 = 5;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
	aggregate_func_4238();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_1689();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && aggregate_func_3440())
	{
		aggregate_func_4238();
		aggregate_func_2374();
		func_6();
		BUILTIN::WAIT(0);
	}
	aggregate_func_1689();
}

void func_6()
{
	int iVar0;
	int iVar1;

	switch (iLocal_18)
	{
		case 0:
			if (!TASK::_0x841475AC96E794D1(uLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_85 = TASK::_0x5BA659955369B0E2(uLocal_16);
			if (!aggregate_func_402(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			bLocal_92 = _NAMESPACE48::_0x800DF3FC913355F3(_NAMESPACE48::_0x32A1E3B83D501096(iLocal_85));
			if (!bLocal_92)
			{
				TASK::_0xE7BBC4E56B989449(uLocal_16, &uLocal_93, 1);
				if (!TASK::_0x841475AC96E794D1(&(uLocal_93[0])))
				{
					iLocal_18 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_0x6718F40313A2B5A6(uLocal_16));
			if (!func_13(iVar0, iLocal_17))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_18 = 1;
			break;
		case 1:
			if (!aggregate_func_402(Global_35, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!aggregate_func_402(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!PED::_0x9C54041BB66BCF9E(iLocal_85, uLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			if (aggregate_func_645(Global_35, iLocal_85, 1) > 1225f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 9.5f)
			{
				iLocal_18 = 2;
				return;
			}
			else
			{
				iLocal_18 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((Local_19[iVar1 /*13*/])->f_1 == 0)
				{
					iLocal_87 = iVar1;
				}
				else
				{
					if (!TASK::_0x841475AC96E794D1(&(Local_19[iVar1 /*13*/])))
					{
						if (iVar1 > 0)
						{
							(Local_19[iVar1 /*13*/])->f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(&(Local_19[(iVar1 - 1) /*13*/]), 1), TASK::_0xB93EA7184BAA85C3(&(Local_19[(iVar1 - 1) /*13*/]), 1), (Local_19[iVar1 /*13*/])->f_4) };
							(Local_19[iVar1 /*13*/])->f_11 = (TASK::_0xB93EA7184BAA85C3(&(Local_19[(iVar1 - 1) /*13*/]), 1) + (Local_19[iVar1 /*13*/])->f_10);
						}
						else
						{
							(Local_19[iVar1 /*13*/])->f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(uLocal_16, 1), TASK::_0xB93EA7184BAA85C3(uLocal_16, 1), (Local_19[iVar1 /*13*/])->f_4) };
							(Local_19[iVar1 /*13*/])->f_11 = (TASK::_0xB93EA7184BAA85C3(uLocal_16, 1) + (Local_19[iVar1 /*13*/])->f_10);
						}
						Local_19[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT((Local_19[iVar1 /*13*/])->f_1, (Local_19[iVar1 /*13*/])->f_7, (Local_19[iVar1 /*13*/])->f_11, 0, 0, 0);
						TASK::_0xE69FDA40AAC3EFC0(&(Local_19[iVar1 /*13*/]), 0);
						TASK::_0xA7479FB665361EDB(&(Local_19[iVar1 /*13*/]), 0);
					}
					iVar1++;
				}
			}
			iLocal_18 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!aggregate_func_4260(&uLocal_88))
			{
				aggregate_func_4293(&uLocal_88, 0);
			}
			if (aggregate_func_4628(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_85, &(Local_19[iLocal_86 /*13*/]), (Local_19[iLocal_86 /*13*/])->f_2, (Local_19[iLocal_86 /*13*/])->f_3, 0, 0))
			{
				if (PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
				{
					fLocal_91 = (Local_19[iLocal_86 /*13*/])->f_12;
					iLocal_86++;
					aggregate_func_4313(&uLocal_88);
					if (iLocal_86 < iLocal_87)
					{
						iLocal_18 = 3;
					}
					else
					{
						iLocal_18 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!aggregate_func_4260(&uLocal_88))
			{
				aggregate_func_4293(&uLocal_88, 0);
			}
			if (aggregate_func_4628(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				iLocal_18 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!bLocal_92)
			{
				if (!aggregate_func_927(iLocal_85, -76381094))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85, 1, 0);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_85, &(uLocal_93[0]), 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
				}
				if (PED::_0x9C54041BB66BCF9E(iLocal_85, &(uLocal_93[0])))
				{
					iLocal_18 = 7;
				}
			}
			else
			{
				iLocal_18 = 7;
			}
			break;
		case 7:
			iLocal_13 = 0;
			return;
	}
}

bool func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2147443548:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(Local_19[0 /*13*/], 1287994422, 4, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 4, 10f);
						func_25(Local_19[2 /*13*/], 1287994422, 4, 10f);
					}
					else
					{
						func_25(Local_19[0 /*13*/], 1287994422, 5, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 5, 10f);
						func_25(Local_19[2 /*13*/], 1287994422, 5, 10f);
					}
					return true;
				case 1:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(Local_19[0 /*13*/], 1287994422, 1, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 1, 10f);
					}
					else
					{
						func_25(Local_19[0 /*13*/], 1287994422, 0, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 0, 10f);
					}
					return true;
			}
			break;
		case -1101156650:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					func_25(Local_19[0 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[1 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[2 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[3 /*13*/], -688785322, 3, 10f);
					return true;
				case 1:
					fLocal_91 = 10f;
					func_25(Local_19[0 /*13*/], -688785322, 4, 10f);
					func_25(Local_19[1 /*13*/], -688785322, 4, 10f);
					func_25(Local_19[2 /*13*/], -688785322, 4, 10f);
					return true;
			}
			break;
	}
	return false;
}

bool func_15()
{
	if (!aggregate_func_402(Global_35, 0))
	{
		return true;
	}
	if (!aggregate_func_402(iLocal_85, 0))
	{
		return true;
	}
	if (iLocal_86 <= 0)
	{
		if (!PED::_0x9C54041BB66BCF9E(iLocal_85, uLocal_16) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
		{
			return true;
		}
	}
	else if (iLocal_86 >= iLocal_87)
	{
		if (!bLocal_92)
		{
			if (!PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[(iLocal_86 - 1) /*13*/])) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(uLocal_93[0])))
			{
				return true;
			}
		}
	}
	else if (!PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[(iLocal_86 - 1) /*13*/])) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
	{
		return true;
	}
	return false;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1287994422:
			if (PED::IS_PED_MALE(iLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case -688785322:
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 0.53823f, 0f, 0f;
				case 2:
					return 0.380574f, -0.380598f, 0f;
				case 3:
					return 0.380598f, 0.380574f, 0f;
				case 5:
					return -0.53823f, 0f, 0f;
				case 6:
					return -0.380574f, -0.380598f, 0f;
				case 7:
					return -0.380598f, 0.380574f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 90f;
				case 1:
					return -90f;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

