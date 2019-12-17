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
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_21 = ScriptParam_0;
	iLocal_20 = ScriptParam_0.f_1;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (aggregate.aberdeenpigfarm.func_57(aggregate.aberdeenpigfarm.func_56(0)) != 7)
		{
		}
		else
		{
			func_4(&Local_13);
		}
	}
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&Local_13);
		}
	}
	if (!TASK::_0x841475AC96E794D1(iLocal_20))
	{
		func_4(&Local_13);
	}
	Local_13.f_1 = { TASK::_0xA8452DD321607029(iLocal_20, 1) };
	if (func_5(&Local_13))
	{
		TASK::_0xEEE4829304F93EEE(iLocal_20, 0);
		func_4(&Local_13);
	}
	else
	{
		TASK::_0xEEE4829304F93EEE(iLocal_20, 1);
	}
	while (func_6())
	{
		if (func_7())
		{
			func_4(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_4(&Local_13);
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
}

void func_4(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5));
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (aggregate.fme_archery.func_1154(Local_13.f_1, ((*Global_1914742)[iVar0 /*4*/])->f_1, 1056964608 /* Float: 0.5f */, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_6()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_4(&Local_13);
		return false;
	}
	return true;
}

bool func_7()
{
	if (Global_1572887->f_13 == -1)
	{
		if (PED::IS_PED_INJURED(Global_35))
		{
			return true;
		}
	}
	else if (Global_1273882->f_12)
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	switch (aggregate.bandana.func_20(uParam0))
	{
		case 0:
			iLocal_22 = func_11();
			aggregate.coffee_drinking.func_5(uParam0, 1);
			break;
		case 1:
			if (func_13(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5));
				}
				func_14(uParam0->f_1);
				return true;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_15(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::_0x554D9D53F696D002(1425226969, uParam0->f_1);
				func_15(uParam0);
			}
			break;
	}
	return false;
}

int func_11()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (aggregate.binoculars.func_32(func_16(iVar0), 1))
		{
			iVar1 = (iVar1 + aggregate.fm_mission_controller.func_1632(func_16(iVar0), 0, 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

bool func_13(var uParam0)
{
	if (1.414214f >= BUILTIN::VDIST(uParam0->f_1, Global_36) && iLocal_22 < func_11())
	{
		return true;
	}
	return false;
}

void func_14(vector3 vParam0)
{
	Global_1914955 = (&Global_1914955 % 10);
	((*Global_1914742)[&Global_1914955 /*4*/])->f_1 = { vParam0 };
	Global_1914955 = &Global_1914955 + 1;
}

void func_15(var uParam0)
{
	MAP::_0x662D364ABF16DE2F(uParam0->f_5, 287065609);
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 1:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 2:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 3:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 4:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 5:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 6:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 7:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 8:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 9:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 10:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		default:
			break;
	}
	return false;
}

