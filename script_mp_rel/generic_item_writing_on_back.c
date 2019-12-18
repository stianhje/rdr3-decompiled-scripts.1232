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
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;
	int iVar126;
	int iVar127;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_102 = TASK::_0x804425C4BBD00883(Global_35);
	if (!aggregate_func_2823(Var0.f_102, 0))
	{
		Global_1912966 = 0;
	}
	else
	{
		Global_1912966 = Var0.f_102;
	}
	Var0.f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Var0.f_102);
	iVar126 = 0;
	while (iVar126 < Var0.f_105)
	{
		Var0.f_5.f_2[iVar126 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(Var0.f_102, iVar126);
		(Var0.f_5.f_2[iVar126 /*5*/])->f_2 = &Var0.f_5.f_2[iVar126 /*5*/];
		(Var0.f_5.f_2[iVar126 /*5*/])->f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Var0.f_102, (Var0.f_5.f_2[iVar126 /*5*/])->f_2);
		iVar126++;
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && !PED::GET_PED_CONFIG_FLAG(Global_35, 464, true)))
	{
		Var0.f_116 = 1;
	}
	if (aggregate_func_2852(Var0.f_102, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	while (!func_4())
	{
		Var0.f_104 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if ((ANIMSCENE::_0x25557E324489393C(Var0.f_108) && ANIMSCENE::_0x477122B8D05E7968(Var0.f_108, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_108, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_35, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		iVar127 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (iVar127 == -1215562113 || iVar127 == -982676640)
		{
			if (Var0.f_105 > 0)
			{
				if (!PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
				{
					PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
				}
				if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
				{
					if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) != 0)
					{
					}
					else
					{
						func_5(&Var0);
					}
				}
			}
			else if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
		}
		else
		{
			if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
			if (UIAPPS::_IS_APP_RUNNING(-605293197))
			{
				UIAPPS::_CLOSE_APP_BY_HASH(-605293197);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iLocal_22))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_22);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_4()
{
	if (Global_1572887->f_13 == 0 && aggregate_func_523(0, 0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return true;
	}
	if (!aggregate_func_6547())
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iLocal_22))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_22);
	}
	aggregate_func_865(uParam0);
	iLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_22, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam0->f_102, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					aggregate_func_1069(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

