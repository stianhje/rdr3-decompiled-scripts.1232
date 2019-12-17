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
	struct<360> Local_13 = { 0, 0, 0, 32, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { NaNf, 0f, 0f };
#endregion

void __EntryFunction__()
{
	bool bVar0;

	func_1(vScriptParam_0);
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = !func_2(&Local_13);
		if (func_3(&Local_13))
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
	aggregate.aberdeenpigfarm.func_46();
}

void func_1(vector3 vParam0)
{
	int iVar0;

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_13.f_2 = vParam0.x;
	Local_13.f_359 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(vParam0.f_2), iVar0))
		{
		}
		else
		{
			(Local_13.f_3[iVar0 /*11*/])->f_1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		}
		iVar0++;
	}
}

bool func_2(var uParam0)
{
	int iVar0;

	if (aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		return true;
	}
	iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_359));
	if (iVar0 > 120)
	{
		return true;
	}
	return false;
}

bool func_3(var uParam0)
{
	bool bVar0;
	int iVar1;

	switch (aggregate.bandana.func_20(uParam0))
	{
		case 0:
			if (GRAPHICS::_0xAF6E67D073D2DCE2())
			{
				return false;
			}
			uParam0->f_356 = 0;
			uParam0->f_357 = 0;
			uParam0->f_358 = 0;
			switch (uParam0->f_2)
			{
				case 0:
					bVar0 = true;
					break;
				case 1:
				case 2:
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if ((uParam0->f_3[iVar1 /*11*/])->f_1 == 255 || (uParam0->f_3[iVar1 /*11*/])->f_1 < 0)
						{
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_3[iVar1 /*11*/])->f_1))
						{
						}
						else if (!bVar0)
						{
							uParam0->f_356 = iVar1;
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						aggregate.coffee_drinking.func_5(uParam0, 1);
						Jump @295; //curOff = 210
						if (func_9(uParam0))
						{
							aggregate.coffee_drinking.func_5(uParam0, 2);
						}
						Jump @295; //curOff = 229
						if (func_10(uParam0))
						{
							func_11(uParam0, uParam0->f_356);
							aggregate.camera_item.func_77(uParam0, 0);
							if (uParam0->f_357 >= uParam0->f_358)
							{
								aggregate.coffee_drinking.func_5(uParam0, 4);
							}
							else
							{
								func_13(uParam0);
							}
						}
						Jump @295; //curOff = 288
						return true;
						return false;
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar0 /*11*/])))
		{
			PED::DELETE_PED(uParam0->f_3[iVar0 /*11*/]);
		}
		iVar0++;
	}
	if (func_14(256))
	{
		GRAPHICS::_0x55285F885F662169();
		GRAPHICS::_0xC2B8164C3BE871A4();
	}
	func_15(16);
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		switch (uParam0->f_2)
		{
			case 0:
			default:
				return false;
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar1 /*11*/])))
				{
					return true;
				}
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				iVar0 = PLAYER::PLAYER_PED_ID();
			case 1:
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar1 /*11*/])))
				{
				}
				else if ((uParam0->f_3[iVar1 /*11*/])->f_1 == 255 || (uParam0->f_3[iVar1 /*11*/])->f_1 < 0)
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_3[iVar1 /*11*/])->f_1))
				{
				}
				else
				{
					iVar0 = PLAYER::GET_PLAYER_PED((uParam0->f_3[iVar1 /*11*/])->f_1);
					if (ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						return false;
					}
					(uParam0->f_3[iVar1 /*11*/])->f_2 = PED::IS_PED_MALE(iVar0);
					(uParam0->f_3[iVar1 /*11*/])->f_3 = { func_16(uParam0->f_2, (uParam0->f_3[iVar1 /*11*/])->f_2) };
					uParam0->f_3[iVar1 /*11*/] = func_17(iVar0);
					uParam0->f_358++;
					if (uParam0->f_2 == 0)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar1++;
				return true;
		}
	}
}

bool func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = uParam0->f_356;
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar0 /*11*/])))
	{
		return true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_3[iVar0 /*11*/])))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_3[iVar0 /*11*/])))
	{
		PED::RESURRECT_PED(&(uParam0->f_3[iVar0 /*11*/]));
	}
	iVar1 = -1;
	switch (uParam0->f_1)
	{
		case 0:
			if (NETWORK::_0xA21E3BAD0A42D199())
			{
				return false;
			}
			iVar1 = (uParam0->f_3[iVar0 /*11*/])->f_1;
			if (aggregate.fme_animal_tagging.func_1546(iVar1, uParam0->f_2) != 0)
			{
				aggregate.fme_animal_tagging.func_1423(iVar1, uParam0->f_2);
			}
			aggregate.fme_animal_tagging.func_1548(iVar1, uParam0->f_2, 1);
			func_15(256);
			GRAPHICS::_0x3E2FDDBE435A8787();
			GRAPHICS::_0x196D3ACBEBA4A44B(1);
			GRAPHICS::_0xD9C24F53631F2372(&((uParam0->f_3[iVar0 /*11*/])->f_3), &(uParam0->f_3[iVar0 /*11*/]), 0);
			PED::FORCE_PED_MOTION_STATE(&(uParam0->f_3[iVar0 /*11*/]), 247561816, false, 0, false);
			aggregate.camera_item.func_77(uParam0, 1);
			break;
		case 1:
			PED::FORCE_PED_MOTION_STATE(&(uParam0->f_3[iVar0 /*11*/]), 247561816, false, 0, false);
			switch (uParam0->f_2)
			{
				case 0:
					bVar2 = NETWORK::_0xB72999D3120599DF(&((uParam0->f_3[iVar0 /*11*/])->f_3), uParam0->f_2, 1);
					break;
				case 1:
				case 2:
					iVar1 = (uParam0->f_3[iVar0 /*11*/])->f_1;
					bVar2 = NETWORK::_0x2A48D9567940598F(&((uParam0->f_3[iVar0 /*11*/])->f_3), iVar1, 1, aggregate.fme_animal_tagging.func_1547(uParam0->f_2));
					break;
			}
			if (!bVar2)
			{
				return false;
			}
			aggregate.camera_item.func_77(uParam0, 2);
			break;
		case 2:
			PED::FORCE_PED_MOTION_STATE(&(uParam0->f_3[iVar0 /*11*/]), 247561816, false, 0, false);
			if (NETWORK::_0xA21E3BAD0A42D199())
			{
				return false;
			}
			uParam0->f_357++;
			if (uParam0->f_2 == 1 || uParam0->f_2 == 2)
			{
				aggregate.fme_animal_tagging.func_1548((uParam0->f_3[iVar0 /*11*/])->f_1, uParam0->f_2, 2);
			}
			aggregate.camera_item.func_77(uParam0, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iParam1 /*11*/])))
	{
		PED::DELETE_PED(uParam0->f_3[iParam1 /*11*/]);
	}
	if (func_14(256))
	{
		GRAPHICS::_0x55285F885F662169();
		GRAPHICS::_0xC2B8164C3BE871A4();
		func_22(256);
	}
}

void func_13(var uParam0)
{
	int iVar0;

	uParam0->f_356++;
	if (uParam0->f_356 >= 32)
	{
		uParam0->f_356 = 31;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[uParam0->f_356 /*11*/])))
	{
		return;
	}
	iVar0 = uParam0->f_356 + 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3[iVar0 /*11*/])))
		{
		}
		else
		{
			uParam0->f_356 = iVar0;
			return;
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return (Global_1131373->f_5808.f_321 && iParam0) != 0;
}

void func_15(int iParam0)
{
	Global_1131373->f_5808.f_321 = (Global_1131373->f_5808.f_321 || iParam0);
}

struct<8> func_16(int iParam0, bool bParam1)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MP_PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MP_MISSION_PHOTO", 64);
			break;
		case 2:
			StringConCat(&cVar0, "MINIGAME_PROFILE_PHOTO", 64);
			break;
	}
	if (!bParam1)
	{
		StringConCat(&cVar0, "_F", 64);
	}
	return cVar0;
}

int func_17(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	vVar0 = { Global_1131373->f_5808.f_477, Global_1131373->f_5808.f_478, Global_1131373->f_5808.f_479 };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) + vVar0 };
	iVar6 = PED::CLONE_PED(iParam0, 0f, false, true);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, 0, 1);
	return iVar6;
}

void func_22(int iParam0)
{
	Global_1131373->f_5808.f_321 = (Global_1131373->f_5808.f_321 - (Global_1131373->f_5808.f_321 && iParam0));
}

