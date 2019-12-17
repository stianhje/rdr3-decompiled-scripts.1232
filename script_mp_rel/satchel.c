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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_35, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = aggregate.fm_mission_controller.func_5479(Global_35, 0);
		if ((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("weapon_melee_torch")) && iVar0 != joaat("weapon_fishingrod"))
		{
			if (Global_17141 == 0)
			{
				WEAPON::_0x6929E22158E52265(Global_35, 0, &Global_17142);
			}
		}
		bVar1 = aggregate.fm_mission_controller.func_5479(Global_35, 1);
		if (WEAPON::_0xC212F1D05A8232BB(bVar1) || WEAPON::_0xDDC64F5E31EEDAB6(bVar1))
		{
			if (Global_17141 == 0)
			{
				WEAPON::_0x6929E22158E52265(Global_35, 1, &Global_17146);
			}
		}
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	Global_1939221->f_10516 = 0;
	Global_1939221->f_10517 = 0;
	iVar2 = -1723036365;
	if (aggregate.doc_book.func_278(0))
	{
		iVar2 = joaat("shop");
	}
	while (!func_4())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					aggregate.player_menu.func_34();
				}
				if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-4058091, iVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					aggregate.player_menu.func_34();
				}
				if (((((!UIAPPS::_IS_APP_ACTIVE(-4058091) || &Global_1939221 == 2) || Global_13) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || !aggregate.annesburg.func_111(255)) || aggregate.satchel.func_10(512))
				{
					func_8(2);
				}
				else
				{
					aggregate.player_menu.func_6();
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				break;
			case 2:
				if (func_6())
				{
					aggregate.player_menu.func_34();
					func_1();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(-4058091);
	if (!aggregate.satchel.func_10(512))
	{
		aggregate.doc_book.func_51(0);
	}
	else
	{
		aggregate.doc_book.func_51(1);
		aggregate.satchel.func_13(512);
	}
	Global_1939221->f_1 = 0;
	Global_17169 = 0;
	Global_1939221->f_12 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_4()
{
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		return true;
	}
	if (Global_1939221->f_12)
	{
		return true;
	}
	return false;
}

int func_5()
{
	return Global_1939221->f_10516;
}

bool func_6()
{
	return Global_1939221->f_10517;
}

void func_8(int iParam0)
{
	if (Global_1939221->f_10516 != iParam0)
	{
		Global_1939221->f_10516 = iParam0;
		aggregate.fme_animal_tagging.func_642();
	}
}

