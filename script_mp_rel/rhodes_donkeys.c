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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	char* sLocal_19[2] = { NULL, NULL };
	char* sLocal_22 = NULL;
	int iLocal_23 = 0;
	int iLocal_24[2] = { 0, 0 };
	int iLocal_27 = 0;
	vector3 vLocal_28[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_35[2] = { 0, 0 };
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1000;
	var uLocal_64 = 500;
	var uLocal_65 = 1067450368;
	var uLocal_66 = 5000;
	var uLocal_67 = 42;
	var uLocal_68 = 1103626240;
	var uLocal_69 = 1077936128;
	var uLocal_70 = 1106247680;
	var uLocal_71 = 1103101952;
	var uLocal_72 = 1109393408;
	var uLocal_73 = 1097859072;
	var uLocal_74 = 1103626240;
	var uLocal_75 = 1061997773;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78[2] = { 0, 0 };
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_44 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	if (iLocal_43 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_43))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_43);
		}
	}
	if (bLocal_83)
	{
		func_3();
		bLocal_83 = false;
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_27))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_39))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_39);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_24)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_78[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(iLocal_78[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_24[iVar0])))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iLocal_24[iVar0]);
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
		{
			PHYSICS::DELETE_ROPE(uLocal_35[iVar0]);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_23);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_77))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_77);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_81))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_81);
	}
	if (iLocal_44 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_44);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (func_5())
	{
		return true;
	}
	if (!bLocal_82)
	{
		bLocal_82 = func_6();
	}
	switch (aggregate_func_6493())
	{
		case 0:
			func_8();
			aggregate_func_4627(1);
			break;
		case 1:
			func_10();
			aggregate_func_4627(2);
			break;
		case 2:
			if (func_11())
			{
				aggregate_func_4627(3);
			}
			break;
		case 3:
			if (func_12())
			{
				aggregate_func_4627(4);
			}
			break;
		case 4:
			if (func_13() && func_14())
			{
				if (aggregate_func_9473(12))
				{
					func_16();
					aggregate_func_4627(9);
				}
				else
				{
					aggregate_func_4627(5);
				}
			}
			break;
		case 5:
			if (func_17())
			{
				aggregate_func_4627(6);
			}
			break;
		case 6:
			if (func_18())
			{
				aggregate_func_4627(8);
			}
			break;
		case 7:
			if (func_19())
			{
				aggregate_func_4627(10);
			}
			if (func_20())
			{
				bLocal_82 = false;
				if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_23, 0);
				}
				aggregate_func_4155(iLocal_81, 0, 0, 1, 1, 0);
				if (aggregate_func_9473(12))
				{
					func_22();
					func_16();
					aggregate_func_4627(9);
				}
				else
				{
					aggregate_func_4627(5);
				}
			}
			break;
		case 8:
			if (func_19())
			{
				aggregate_func_4627(10);
			}
			func_23();
			if (bLocal_82)
			{
				if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
				{
					if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_23) < 0.99f)
					{
						return false;
					}
				}
				func_4();
				func_24();
				aggregate_func_4627(7);
			}
			if (func_25())
			{
				func_24();
				aggregate_func_4627(7);
			}
			break;
		case 9:
			if (func_19())
			{
				aggregate_func_4627(10);
			}
			if (bLocal_82)
			{
				aggregate_func_4627(7);
			}
			break;
		case 10:
			func_4();
			func_26();
			aggregate_func_4627(11);
			break;
		case 11:
			if (func_20())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1938569->f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1938569->f_302 = (Global_1938569->f_302 + (Global_1938569->f_291[iVar0 /*2*/])->f_1);
			Global_1938569->f_291[iVar0 /*2*/] = 0;
			(Global_1938569->f_291[iVar0 /*2*/])->f_1 = 0;
			func_27();
			return;
		}
		iVar0++;
	}
}

void func_4()
{
	if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_44))
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_44);
	}
}

bool func_5()
{
	if (aggregate_func_4251() != -1)
	{
		return true;
	}
	if (aggregate_func_4314() != 111)
	{
		return true;
	}
	return false;
}

int func_6()
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		if (aggregate_func_6493() == 8 && aggregate_func_9473(12))
		{
			return 1;
		}
		if (aggregate_func_6493() == 9 && aggregate_func_9473(3))
		{
			return 1;
		}
	}
	return 0;
}

void func_8()
{
	iLocal_27 = joaat("a_c_donkey_01");
	iLocal_39 = 314558067;
	vLocal_40 = { 1404.02f, -1324.268f, 76.7704f };
	*(vLocal_28[0 /*3*/]) = { 1400.77f, -1315.403f, 76.6572f };
	*(vLocal_28[1 /*3*/]) = { 1407.911f, -1332.822f, 76.6569f };
	sLocal_18 = "script@ambient@generic@cotton_gin@action";
	sLocal_19[0] = "DONKEY_0";
	sLocal_19[1] = "DONKEY_1";
	sLocal_22 = "COTTON_PRESS";
	aggregate_func_832(vLocal_28[0 /*3*/], 50, 10, 0, 0);
	aggregate_func_832(vLocal_28[1 /*3*/], 50, 10, 0, 0);
	func_31(&uLocal_45, 0);
	aggregate_func_5528(&uLocal_45, 1);
	aggregate_func_6687(&uLocal_45, 1);
	aggregate_func_7753(&uLocal_45, 1);
	aggregate_func_8223(&uLocal_45, 1);
	aggregate_func_9000(&uLocal_45, 1);
	func_37(&uLocal_45, 1);
	aggregate_func_5529(&uLocal_45, 1);
	aggregate_func_8915(&uLocal_45, 1);
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_77))
	{
		iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.646f, -1296.078f, 78.22333f, 0f, 0f, 15.93833f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_81))
	{
		iLocal_81 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.892f, -1324.662f, 76.65739f, 0f, 0f, 0f, 19.09795f, 13.32395f, 7.186517f, "m_volVehicleAntiGrief");
	}
	iLocal_44 = AUDIO::GET_SOUND_ID();
}

void func_10()
{
	STREAMING::REQUEST_MODEL(iLocal_27, false);
	STREAMING::REQUEST_MODEL(iLocal_39, false);
	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		iLocal_23 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_18, 1, 0, false, true);
	}
	if (PED::_0x5C16855277819BBF() <= 2)
	{
		PED::_0xED9582B3DA8F02B4(2);
	}
}

bool func_11()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_27) || !STREAMING::HAS_MODEL_LOADED(iLocal_39))
	{
		return false;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_23, 1, 0))
	{
		if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_23, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23);
		}
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	return true;
}

bool func_12()
{
	if (BUILTIN::VDIST2(Global_36, vLocal_40) > 10000f)
	{
		return false;
	}
	return true;
}

int func_13()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_24[iVar0])))
		{
			iLocal_24[iVar0] = aggregate_func_2073(iLocal_27, *(vLocal_28[iVar0 /*3*/]), 95f, 1, 1, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
			{
				PED::_SET_PED_SCALE(&(iLocal_24[iVar0]), 0.67f);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 136, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 441, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 297, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 407, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 419, true);
				PED::_0xAE6004120C18DF97(&(iLocal_24[iVar0]), 0, false);
				TASK::TASK_STAND_STILL(&(iLocal_24[iVar0]), -1);
				PED::_0x1902C4CFCC5BE57C(&(iLocal_24[iVar0]), -937613161);
				PED::_0xCC8CA3E88256E58F(&(iLocal_24[iVar0]), 0, 1, 1, 1, false);
				if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_78[iVar0])))
				{
					iLocal_78[iVar0] = VOLUME::_0x0EB78C2B156635B1(665633627, *(vLocal_28[iVar0 /*3*/]), 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_0x7C00CFC48A782DC0(&(iLocal_78[iVar0]), &(iLocal_24[iVar0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (!bLocal_83)
	{
		func_41(10);
		bLocal_83 = true;
	}
	return 1;
}

int func_14()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (iLocal_43 == 0)
		{
			iLocal_43 = ENTITY::_0x6F3068258A499E52(iLocal_39, vLocal_40, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_43))
		{
			iLocal_38 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_43);
		}
		return 0;
	}
	return 1;
}

void func_16()
{
	int iVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_77))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			aggregate_func_30(&(iLocal_24[iVar0]), VOLUME::_0xF70F00013A62F866(iLocal_77) + Vector(0f, 0f, (IntToFloat(iVar0) * 1f)), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_WANDER_IN_VOLUME(&(iLocal_24[iVar0]), iLocal_77, 1f, 3f, 1);
		}
		iVar0++;
	}
}

bool func_17()
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		return false;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_23, 1, 0))
	{
		if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_23, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23);
		}
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_23, 1404.02f, -1324.268f, 76.71f, 0f, 0f, -81f, 2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar0]), &(iLocal_24[iVar0]), 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_38))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23, sLocal_22, iLocal_38, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_23);
	return true;
}

bool func_18()
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_24[0]))) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_24[1])))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
			{
				uLocal_35[iVar0] = PHYSICS::_0xE9C59F6809373A99(ENTITY::GET_ENTITY_COORDS(&(iLocal_24[iVar0]), true, false), 0f, 0f, 0f, 1f, 6, 1, -1, -1082130432 /* Float: -1f */);
				PHYSICS::_0x522FA3F490E2F7AC(&(uLocal_35[iVar0]), 1, 1);
				PHYSICS::_0x8D59079C37C21D78(&(uLocal_35[iVar0]), 2.5f);
				return false;
			}
			iVar0++;
		}
		PHYSICS::_0x462FF2A432733A44(&(uLocal_35[0]), &(iLocal_24[0]), iLocal_38, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_0x462FF2A432733A44(&(uLocal_35[1]), &(iLocal_24[1]), iLocal_38, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return true;
	}
	return false;
}

bool func_19()
{
	var uVar0;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (aggregate_func_415(&(iLocal_24[iLocal_76]), 0, &uLocal_45, &uVar0, 0, 0))
		{
			return true;
		}
		if (PED::_0x77525BBF433F2CD6(&(iLocal_24[iLocal_76])))
		{
			return true;
		}
		iLocal_76++;
		if (iLocal_76 >= 2)
		{
			iLocal_76 = 0;
		}
	}
	return false;
}

bool func_20()
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, vLocal_40) < 3600f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(1439.646f, -1296.078f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.686f, -1324.119f, 73.60623f, 9.5f))
	{
		return false;
	}
	return true;
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
		{
			PHYSICS::DELETE_ROPE(uLocal_35[iVar0]);
		}
		iVar0++;
	}
}

void func_23()
{
	if (AUDIO::_0xE368E8422C860BA7("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_0x84848E1C0FC67DBB(iLocal_44))
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iLocal_44, "COTTON_GIN", vLocal_40, "OFF_MISSION_SOUNDS", 0, 0, true);
	}
}

void func_24()
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_23, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar0]), &(iLocal_24[iVar0]));
			TASK::TASK_STAND_STILL(&(iLocal_24[iVar0]), -1);
		}
		iVar0++;
	}
}

bool func_25()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, vLocal_40) > 625f)
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_81))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iLocal_81, iVar0, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_26()
{
	int iVar0;
	int iVar1;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_23, 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (aggregate_func_402(&(iLocal_24[iVar1]), 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar1]), &(iLocal_24[iVar1]));
			if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar1])))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(&(uLocal_35[iVar1]), &(iLocal_24[iVar1]));
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Global_36, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(iLocal_24[iVar1]), 3f);
			TASK::TASK_PERFORM_SEQUENCE(&(iLocal_24[iVar1]), iVar0);
			PED::SET_PED_KEEP_TASK(&(iLocal_24[iVar1]), true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iVar1++;
	}
}

void func_27()
{
	if (Global_1938569->f_302 > 300)
	{
		Global_1938569->f_302 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(aggregate_func_2665());
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		aggregate_func_6716(uParam0, 1);
		aggregate_func_6718(uParam0, 1);
		aggregate_func_5632(uParam0, 1);
		func_53(uParam0, 1);
		func_54(uParam0, 1);
		func_37(uParam0, 1);
		func_55(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		aggregate_func_6716(uParam0, 0);
		aggregate_func_6718(uParam0, 0);
		aggregate_func_5632(uParam0, 0);
		func_53(uParam0, 0);
		func_54(uParam0, 0);
		func_37(uParam0, 0);
		func_55(uParam0, 0);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4241(uParam0, 1024);
	}
	else
	{
		aggregate_func_4243(uParam0, 1024);
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1938569->f_302 - 150))
	{
	}
	if (func_59(&iVar0))
	{
		if ((Global_1938569->f_291[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1938569->f_302 = (Global_1938569->f_302 + (Global_1938569->f_291[iVar0 /*2*/])->f_1);
			(Global_1938569->f_291[iVar0 /*2*/])->f_1 = iParam0;
			Global_1938569->f_302 = (Global_1938569->f_302 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(aggregate_func_2665());
		}
		return;
	}
	iVar0 = func_60();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1938569->f_291[iVar0 /*2*/])->f_1 = iParam0;
	Global_1938569->f_291[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1938569->f_302 = (Global_1938569->f_302 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(aggregate_func_2665());
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4241(uParam0, 32);
	}
	else
	{
		aggregate_func_4243(uParam0, 32);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4241(uParam0, 64);
	}
	else
	{
		aggregate_func_4243(uParam0, 64);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4241(uParam0, 1048576);
	}
	else
	{
		aggregate_func_4243(uParam0, 1048576);
	}
}

bool func_59(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1938569->f_291[iVar0 /*2*/]), false) && &Global_1938569->f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1938569->f_291[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

