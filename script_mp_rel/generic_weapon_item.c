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
	struct<17> Local_17 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
	func_1(&iVar0);
	bVar1 = func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	AUDIO::_0x6339C1EA3979B5F7("weapon", "Inspect_Item_Scenes");
	while (func_4())
	{
		WEAPON::_0x000FA7A4A8443AF7(ScriptParam_0.f_1);
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_17.f_5))
		{
			iVar2 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
			if (iVar2 == -2097789604 || iVar2 == -1278264229)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Local_17.f_5, true);
			}
		}
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_17.f_5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		}
		switch (aggregate_func_5076())
		{
			case 0:
				if (!bVar1)
				{
					bVar1 = func_2();
				}
				else
				{
					aggregate_func_4714(1);
				}
				break;
			case 1:
				func_7();
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -1773835 || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 2092725031)
				{
					aggregate_func_1304(-898386032 /* GXTEntry: "Gun Oil" */, 1, 0, 562618531);
					aggregate_func_1962(aggregate_func_4257(1137323725, -1196872246), 1);
					aggregate_func_4714(2);
				}
				break;
			case 2:
				aggregate_func_4714(3);
				break;
			case 3:
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -437636600 || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 1104426680)
				{
					aggregate_func_4714(4);
				}
				else
				{
					fVar3 = TASK::_0xBC864A70AD55E0C1(Global_35, joaat("INPUT_CONTEXT_X"));
					if (fVar3 > 0f)
					{
						fVar4 = WEAPON::_0xD56E5F336C675EFA(iVar0);
						fVar5 = ((Local_17.f_11 + fVar4) - (fVar3 * Local_17.f_11));
						fVar7 = ((Local_17.f_13 + fVar4) - (fVar3 * Local_17.f_13));
						fVar6 = (Local_17.f_12 - (fVar3 * Local_17.f_12));
						fVar8 = (Local_17.f_14 - (fVar3 * Local_17.f_14));
						WEAPON::_0xA7A57E89E965D839(iVar0, fVar5);
						WEAPON::_0xE22060121602493B(iVar0, fVar7, 0);
						WEAPON::_0x812CE61DEBCAB948(iVar0, fVar6, 0);
						WEAPON::_0xA9EF4AD10BDDDB57(iVar0, fVar8, 0);
						func_11(iVar0);
					}
				}
				break;
			case 4:
				func_12(iVar0);
				aggregate_func_4714(1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	struct<4> Var6;
	struct<4> Var11;

	Local_17 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1069234796);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_17.f_1))
	{
		iVar1 = aggregate_func_3079();
		WEAPON::GET_CURRENT_PED_WEAPON(iVar1, &bVar0, true, 0, false);
		Var2 = { aggregate_func_4289() };
		if (!aggregate_func_4632(&(Global_1939057->f_66), &Var2))
		{
			Local_17.f_7 = { Global_1939057->f_66 };
		}
		else
		{
			Var6 = { aggregate_func_304(bVar0, 0, 0) };
			Local_17.f_7 = { aggregate_func_2828(bVar0, Var6, -1591664384, 0) };
		}
		Global_1939057->f_66 = { Var2 };
		Var11 = { Local_17.f_7 };
		Local_17.f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ItemInspection");
		Local_17.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Local_17.f_1, "Visible", false);
		Local_17.f_2 = INVENTORY::_0x46DB71883EE9D5AF(Local_17.f_1, "stats", &Var11, iVar1);
		Local_17.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_17.f_1, "itemLabel", func_18(bVar0, *iParam0));
		Local_17.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_17.f_1, "tipText", func_19(iParam0));
		Local_17.f_11 = aggregate_func_4333((WEAPON::_0x0D78E1097F89E637(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_17.f_13 = aggregate_func_4333((WEAPON::_0x904103D5D2333977(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_17.f_12 = WEAPON::_0x810E8AE9AFEA7E54(*iParam0);
		Local_17.f_14 = WEAPON::_0x4BF66F8878F67663(*iParam0);
	}
	HUD::_0x4CC5F2FC1332577F(-1847602092);
}

int func_2()
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_17))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(Local_17, 0);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-813354801))
	{
		if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(-813354801, Local_17))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_3()
{
	AUDIO::_0x9428447DED71FC7E("Inspect_Item_Scenes");
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&Local_17);
	Local_17 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_17.f_1);
	HUD::_0x8BC7C1F929D07BF3(-1847602092);
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_4()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return false;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return false;
	}
	if ((!PED::_0x4912DFE492DB98CD(Global_35, "isInspecting") && !PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode")) && !Global_1939057->f_8)
	{
		return false;
	}
	if (aggregate_func_4636())
	{
		return false;
	}
	return true;
}

void func_7()
{
	int iVar0;

	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
	if (aggregate_func_2850(-898386032 /* GXTEntry: "Gun Oil" */, 1) && (WEAPON::_0x0D78E1097F89E637(iVar0) != 0f && WEAPON::_0x0D78E1097F89E637(iVar0) > WEAPON::_0xD56E5F336C675EFA(iVar0)))
	{
		if (!PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", true, -1);
		}
	}
	else
	{
		if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", false, -1);
		}
		if ((!aggregate_func_1135(0, 0, 1) && !aggregate_func_6963()) && aggregate_func_4315())
		{
			if ((!Local_17.f_15 && WEAPON::_0xD56E5F336C675EFA(iVar0) > 0f) && WEAPON::_0x0D78E1097F89E637(iVar0) <= WEAPON::_0xD56E5F336C675EFA(iVar0))
			{
				aggregate_func_2916("WEAPON_PERM_DEGREDATION", 10000, 0, 0, 0, 1);
				Local_17.f_15 = 1;
			}
			if (!Local_17.f_16 && !aggregate_func_2850(-898386032 /* GXTEntry: "Gun Oil" */, 1))
			{
				if (WEAPON::_0x0D78E1097F89E637(iVar0) > WEAPON::_0xD56E5F336C675EFA(iVar0))
				{
					aggregate_func_2916("NO_GUN_OIL", 10000, 0, 0, 0, 1);
					Local_17.f_16 = 1;
				}
			}
		}
	}
}

void func_11(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = aggregate_func_3079();
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &bVar1, true, 0, false);
	INVENTORY::_0x951847CEF3D829FF(Local_17.f_2, &(Local_17.f_7), iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Local_17.f_3, func_18(bVar1, iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_17.f_4, func_19(&iParam0));
}

void func_12(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	WEAPON::_0xA7A57E89E965D839(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0));
	WEAPON::_0xE22060121602493B(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0), 0);
	WEAPON::_0x812CE61DEBCAB948(iParam0, 0f, 0);
	WEAPON::_0xA9EF4AD10BDDDB57(iParam0, 0f, 0);
	func_11(iParam0);
}

int func_18(bool bParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, WEAPON::_0x89CF5FF3D363311E(bParam0), 64);
	if (WEAPON::_0xD56E5F336C675EFA(iParam1) > 0f)
	{
		StringCopy(&cVar0, WEAPON::_0x7A56D66C78D8EF8E(bParam0, WEAPON::_0xD56E5F336C675EFA(iParam1)), 64);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_19(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = WEAPON::_0x0D78E1097F89E637(*iParam0);
	fVar1 = WEAPON::_0xD56E5F336C675EFA(*iParam0);
	if (fVar0 == 0f)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(1803343570 /* GXTEntry: "Weapon is clean" */);
	}
	if (fVar1 > 0f && fVar0 == fVar1)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(-1933427003 /* GXTEntry: "Weapon cannot be cleaned further" */);
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(-54957657 /* GXTEntry: "Weapon needs cleaning" */);
}

