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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	struct<66> Local_20 = { 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 1097859072;
	var uLocal_103 = 1000;
	var uLocal_104 = 500;
	var uLocal_105 = 1067450368;
	var uLocal_106 = 5000;
	var uLocal_107 = 42;
	var uLocal_108 = 1103626240;
	var uLocal_109 = 1077936128;
	var uLocal_110 = 1106247680;
	var uLocal_111 = 1103101952;
	var uLocal_112 = 1109393408;
	var uLocal_113 = 1097859072;
	var uLocal_114 = 1103626240;
	var uLocal_115 = 1061997773;
	var uLocal_116 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	struct<189> Var0;

	fLocal_18 = 1f;
	fLocal_19 = 1f;
	Var0.f_1 = -1;
	Var0.f_12 = 24;
	Var0.f_114 = joaat("INPUT_CONTEXT_Y");
	Var0.f_125 = 2;
	Var0.f_125.f_1.f_2 = 570;
	Var0.f_125.f_1.f_3 = 1065353216;
	Var0.f_125.f_1.f_4 = -1082130432;
	Var0.f_125.f_1.f_9 = 2;
	Var0.f_125.f_1.f_17.f_2 = 570;
	Var0.f_125.f_1.f_17.f_3 = 1065353216;
	Var0.f_125.f_1.f_17.f_4 = -1082130432;
	Var0.f_125.f_1.f_17.f_9 = 2;
	Var0.f_160.f_1 = -1;
	Var0.f_160.f_3 = -1;
	Var0.f_160.f_6 = -1;
	Var0.f_160.f_12 = 1073741824;
	Var0.f_160.f_16 = 1;
	Var0.f_181 = 1;
	Var0.f_1 = vScriptParam_0.y;
	Var0.f_119 = vScriptParam_0.z;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_188 = aggregate.annesburg.func_122();
	if (!func_3(&Var0))
	{
		func_1(&Var0);
	}
	while (!func_4(&Var0))
	{
		switch (Var0.f_11)
		{
			case 0:
				func_5(&Var0);
				Var0.f_11 = 1;
				break;
			case 1:
				if (func_6(&Var0))
				{
					Var0.f_11 = 2;
				}
				break;
			case 2:
				if (func_7(&Var0) && func_8(&Var0))
				{
					Var0.f_11 = 3;
				}
				break;
			case 3:
				if (aggregate.net_stable_mount.func_6(&Var0, 0))
				{
					func_10(&Var0);
				}
				else
				{
					func_11(&Var0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_182))
				{
					Var0.f_11 = 2;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
}

void func_1(var uParam0)
{
	func_12(uParam0);
	if (aggregate.annesburg.func_217(uParam0->f_183))
	{
		aggregate.annesburg.func_218(&(uParam0->f_183), 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_187))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_187));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_6);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(var uParam0)
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_184 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_15(uParam0->f_1) };
	Local_20.f_23 = uParam0->f_119;
	if (aggregate.show_mp_nbx_bigband_01.func_30(Local_20.f_23))
	{
		uParam0->f_7 = 1;
	}
	uParam0->f_122 = 0;
	uParam0->f_117 = func_17(uParam0->f_1);
	if (uParam0->f_117 >= 100)
	{
		uParam0->f_111 = "BUY_TICKET_DLR";
	}
	aggregate.fme_escaped_convicts.func_1493(uParam0, 0);
	func_19(&(Local_20.f_43), &(Local_20.f_44), Local_20.f_23);
	switch (aggregate.annesburg.func_122())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 40:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 81:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}
	return true;
}

bool func_4(var uParam0)
{
	float fVar0;

	uParam0->f_189++;
	if (uParam0->f_189 < 10)
	{
		return false;
	}
	uParam0->f_189 = 0;
	if (aggregate.annesburg.func_122() != uParam0->f_188 || uParam0->f_188 == -1)
	{
		return true;
	}
	if (!uParam0->f_122 && aggregate.aberdeenpigfarm.func_125(0, 1, 1))
	{
		return true;
	}
	if (uParam0->f_11 == 4)
	{
		return true;
	}
	fVar0 = aggregate.fishing_core.func_39(Global_35, uParam0->f_2, 1);
	if (fVar0 > 60f)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	PED::_0xF008E0BA1FE1D644(1);
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_6(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 != -1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(aggregate.aberdeenpigfarm.func_120(uParam0->f_1)))
		{
			return false;
		}
	}
	if (!aggregate.benedictpoint.func_17(uParam0))
	{
		return false;
	}
	return PED::_0x5E420FF293EE5472();
}

int func_7(var uParam0)
{
	int iVar0;

	aggregate.aberdeenpigfarm.func_154(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_182 = aggregate.butchercreek.func_91(*uParam0, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
			{
				if (aggregate.fishing_core.func_39(Global_35, uParam0->f_2, 1) < 100f)
				{
					if (!func_26(uParam0->f_1, 0, 0, 0, 0, 0))
					{
						return 0;
					}
				}
			}
			uParam0->f_182 = aggregate.aberdeenpigfarm.func_174(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
	{
		aggregate.fme_escaped_convicts.func_1516(&(uParam0->f_12), uParam0->f_182, uParam0->f_110, 0);
	}
	switch (uParam0->f_1)
	{
		case 3:
		case 70:
		case 250:
		case 277:
		case 278:
		case 342:
		case 466:
		case 503:
			aggregate.fme_escaped_convicts.func_1493(uParam0, 0);
			break;
	}
	if (!aggregate.net_stable_mount.func_6(uParam0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_111))
	{
		if (uParam0->f_117 > 0)
		{
			uParam0->f_183 = aggregate.camera_item.func_46("STRING", uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			func_30(uParam0->f_183, uParam0->f_111, (BUILTIN::TO_FLOAT(uParam0->f_117) / 100f), 2, 1);
		}
		else
		{
			uParam0->f_183 = aggregate.camera_item.func_46(uParam0->f_111, uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		}
		if (!aggregate.annesburg.func_121(uParam0->f_184))
		{
			func_32(uParam0->f_183, uParam0->f_184, 1);
		}
	}
	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = func_33(uParam0->f_182, uParam0->f_120, 1, 1);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = MAP::_0x554D9D53F696D002(uParam0->f_120, uParam0->f_2);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
				iVar0 = func_34(uParam0->f_121);
				if (iVar0 != 0)
				{
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_187, iVar0, -1);
				}
			}
		}
	}
	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		PED::_0xAE6004120C18DF97(uParam0->f_182, 0, false);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6))
	{
		if (aggregate.net_stable_mount.func_6(uParam0, 0))
		{
			if (uParam0->f_124 > 0f)
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			}
			else
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
			}
		}
		else
		{
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");
		}
	}
	return 1;
}

int func_8(var uParam0)
{
	if (aggregate.net_stable_mount.func_6(uParam0, 0))
	{
		if (uParam0->f_117 > 0)
		{
			if (uParam0->f_117 >= 100)
			{
				aggregate.saloon_dining.func_354(uParam0->f_125[0 /*17*/], uParam0->f_111, BUILTIN::ROUND(BUILTIN::TO_FLOAT((uParam0->f_117 / 100))), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
			}
			else
			{
				aggregate.saloon_dining.func_354(uParam0->f_125[0 /*17*/], uParam0->f_111, uParam0->f_117, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
			}
		}
		else
		{
			aggregate.saloon_dining.func_188(uParam0->f_125[0 /*17*/], uParam0->f_111, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		}
		if (uParam0->f_7)
		{
			aggregate.saloon_dining.func_188(uParam0->f_125[1 /*17*/], uParam0->f_112, 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
	}
	return 1;
}

int func_10(var uParam0)
{
	int iVar0;

	func_37(uParam0);
	if (uParam0->f_123 == 1)
	{
		return 0;
	}
	if (aggregate.annesburg.func_142(Global_35, uParam0->f_6, 0, 0))
	{
		func_39(uParam0);
	}
	else
	{
		func_40(uParam0);
	}
	if (uParam0->f_124 > 0f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
		{
			if ((aggregate.dynamic_craft_scenario.func_370(Global_35, uParam0->f_182, 1, 1) > uParam0->f_124 || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				aggregate.herb_cigar_orchid.func_1(uParam0->f_125[0 /*17*/]);
				if (uParam0->f_7)
				{
					aggregate.herb_cigar_orchid.func_1(uParam0->f_125[1 /*17*/]);
				}
			}
			iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), uParam0->f_124, &(uParam0->f_125), 0, 3, 1, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, uParam0->f_124);
		}
		else
		{
			iVar0 = -1;
		}
	}
	else
	{
		iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), 5f, &(uParam0->f_125), 0, 3, 0, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	switch (iVar0)
	{
		case 0:
			func_45(uParam0);
			return 1;
		case 1:
			func_46(uParam0);
			return 1;
	}
	return 0;
}

int func_11(var uParam0)
{
	func_37(uParam0);
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6))
	{
		if (aggregate.annesburg.func_142(Global_35, uParam0->f_6, 1, 0))
		{
			func_39(uParam0);
		}
	}
	if (aggregate.annesburg.func_217(uParam0->f_183))
	{
		if (aggregate.binoculars.func_13(uParam0->f_183, 1))
		{
			func_45(uParam0);
			return 1;
		}
	}
	return 0;
}

void func_12(var uParam0)
{
	int iVar0;

	func_48(Local_20.f_10[0 /*3*/], "IG2");
	func_48(Local_20.f_10[1 /*3*/], "IG3");
	func_48(Local_20.f_10[2 /*3*/], "IG4");
	func_49(&Local_20);
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_52(func_50(iVar0), func_51(Local_20.f_23)))
		{
			AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_50(iVar0), func_51(Local_20.f_23)));
		}
		else
		{
			iVar0++;
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_20.f_44))
	{
		VOLUME::_0x43F867EF5C463A53(Local_20.f_44);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_20.f_43))
	{
		VOLUME::_0x43F867EF5C463A53(Local_20.f_43);
	}
	if (aggregate.aberdeenpigfarm.func_136(uParam0->f_1))
	{
		aggregate.aberdeenpigfarm.func_137(uParam0->f_1, 0, 1, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, false);
	if (aggregate.aberdeenpigfarm.func_175(Global_1956178->f_1321, 16))
	{
		aggregate.bandana.func_26(&(Global_1956178->f_1321), 16);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
	}
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 2542.098f, -1282.514f, 48.21795f;
		case 278:
			return 2687.112f, -1361.769f, 47.24998f;
		case 33:
			return -355.2777f, 704.6901f, 116.0523f;
		case 519:
			return -790.1024f, -1362.621f, 42.90462f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_17(int iParam0)
{
	int iVar0;

	iVar0 = 200;
	switch (iParam0)
	{
		case 277:
			iVar0 = aggregate.fme_animal_tagging.func_1403(-1110862888 /* GXTEntry: "Theatre Ticket" */, -915411861, 1, 0, 1, 0);
			break;
		case 278:
			if (aggregate.aberdeenpigfarm.func_130(44))
			{
				iVar0 = aggregate.fme_animal_tagging.func_1403(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 1, 0);
			}
			else
			{
				iVar0 = aggregate.fme_animal_tagging.func_1403(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 1, 0);
			}
			break;
		case 519:
			iVar0 = aggregate.fme_animal_tagging.func_1403(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 1, 0);
			break;
		case 33:
			iVar0 = aggregate.fme_animal_tagging.func_1403(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 1, 0);
			break;
	}
	return iVar0;
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0xBCE668AAF83608BE(*uParam0, 2538.033f, -1279.347f, 49.98048f, 0f, 0f, 11.90726f, 5.5f, 5.5f, 2f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2545.899f, -1284.449f, 52.68468f, 0f, 0f, 0f, 19.06469f, 21.41224f, 12.2805f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2537.024f, -1293.295f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.71697f, 9.024663f);
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2533.624f, -1276.359f, 49.78957f, 0f, 0f, -25.0941f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2535.758f, -1273.773f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2685.939f, -1360.082f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2689.12f, -1363.918f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
		case 3:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.6901f, 704.0504f, 118.0073f, 0f, 0f, 14.63188f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			}
			break;
		case 4:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.535f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1359.049f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1366.186f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}
}

bool func_26(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!aggregate.aberdeenpigfarm.func_85(iParam0))
	{
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_165(aggregate.aberdeenpigfarm.func_118(iParam0)))
	{
		return true;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(aggregate.aberdeenpigfarm.func_120(iParam0)))
	{
		aggregate.aberdeenpigfarm.func_87(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!aggregate.annesburg.func_130(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_71(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!aggregate.annesburg.func_121(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(aggregate.aberdeenpigfarm.func_120(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(aggregate.aberdeenpigfarm.func_120(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(aggregate.aberdeenpigfarm.func_120(iParam0), 0);
	}
	if (!aggregate.annesburg.func_121(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(aggregate.aberdeenpigfarm.func_120(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

void func_30(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !aggregate.annesburg.func_217(iParam0))
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(6, sParam1, sParam2));
}

void func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4 && !aggregate.annesburg.func_217(iParam0))
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_CONTEXT_SET_POINT(((*Global_1949749)[iVar0 /*23*/])->f_3, vParam1);
	((*Global_1949749)[iVar0 /*23*/])->f_12 = { vParam1 };
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::_0x23F74C2FDA6E7C61(iParam1, iParam0);
	}
	else
	{
		MAP::_0xEDD964B7984AC291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
		}
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1243830185: /* GXTEntry: "Poker" */
			return 3;
		case 595820042: /* GXTEntry: "Blackjack" */
			return 1;
		case -1179229323: /* GXTEntry: "Fence Building" */
			return 7;
		case -1650465405: /* GXTEntry: "Dominoes" */
			return 2;
		case -1575595762: /* GXTEntry: "Fishing" */
			return 66;
		case 1974815632: /* GXTEntry: "Five Finger Fillet" */
			return 4;
		case 1078668923: /* GXTEntry: "Cow Milking" */
			return 5;
		case -1581061148: /* GXTEntry: "Dominoes: All Threes" */
			return 8;
		case -48718882: /* GXTEntry: "Dominoes: All Fives" */
			return 9;
		case -379108622: /* GXTEntry: "Dominoes: Draw" */
			return 10;
		case 1015604260: /* GXTEntry: "FFF: Burnout" */
			return 11;
		case 126262516: /* GXTEntry: "FFF: Guts" */
			return 12;
		case -997121570: /* GXTEntry: "Debtor" */
			return 14;
		case 423351566: /* GXTEntry: "Herd" */
			return 13;
		case -1636832113: /* GXTEntry: "Bounty Poster" */
			return 16;
		case 1012165077: /* GXTEntry: "Wagon" */
			return 17;
		case -250506368: /* GXTEntry: "Train" */
			return 18;
		case 2033397166: /* GXTEntry: "Riverboat" */
			return 19;
		case 249721687: /* GXTEntry: "Wilderness Outfitters" */
			return 22;
		case 1475879922: /* GXTEntry: "General Store" */
			return 20;
		case 531267562: /* GXTEntry: "Fence" */
			return 21;
		case -145868367: /* GXTEntry: "Gunsmith" */
			return 23;
		case -1989306548: /* GXTEntry: "Wagon Fence" */
			return 24;
		case -1739686743: /* GXTEntry: "Doctor" */
			return 25;
		case 1195729388: /* GXTEntry: "Tailor" */
			return 26;
		case -758970771: /* GXTEntry: "Blacksmith" */
			return 28;
		case 1542275196: /* GXTEntry: "Stable" */
			return 29;
		case 1861010125: /* GXTEntry: "Post Office" */
			return 33;
		case 1475382911: /* GXTEntry: "Post Office" */
			return 34;
		case 103490298: /* GXTEntry: "Train Station" */
			return 30;
		case -2090472724: /* GXTEntry: "Barber" */
			return 31;
		case -1665418949: /* GXTEntry: "Butcher" */
			return 32;
		case -852241114: /* GXTEntry: "Bait Shop" */
			return 35;
		case -1406874050: /* GXTEntry: "Trapper" */
			return 36;
		case 1938782895: /* GXTEntry: "Stable" */
			return 37;
		case -1456209806: /* GXTEntry: "Horse Fence" */
			return 38;
		case 469827317: /* GXTEntry: "Stable" */
			return 39;
		case 1779658797: /* GXTEntry: "Old Man Jones" */
			return 45;
		case 1496995379: /* GXTEntry: "Wardrobe" */
			return 51;
		case -1546805641: /* GXTEntry: "Madam Nazar" */
			return 48;
		case 1961764827:
			return 49;
		case -2029148647:
			return 98;
		case 553094466:
			return 50;
		case 1364029453: /* GXTEntry: "Photo Studio" */
			return 41;
		case -211556852: /* GXTEntry: "Hotel" */
			return 40;
		case 1879260108: /* GXTEntry: "Saloon" */
			return 27;
		case -73168905: /* GXTEntry: "Stable" */
			return 52;
		case 1586273744: /* GXTEntry: "Bed" */
			return 53;
		case -1498696713: /* GXTEntry: "Locked Property" */
			return 54;
		case 503049244: /* GXTEntry: "Telegraph Office" */
			return 56;
		case 305594522: /* GXTEntry: "Taxi Coach" */
			return 57;
		case -417940443: /* GXTEntry: "Show" */
			return 58;
		case -1606321000: /* GXTEntry: "Caravan Camp" */
			return 59;
		case 1904459580: /* GXTEntry: "Appleseed Timber Co." */
			return 60;
		case -1989725258: /* GXTEntry: "Castor\'s Ridge" */
			return 61;
		case -487631996: /* GXTEntry: "Central Union Railroad Camp" */
			return 62;
		case -1944395098: /* GXTEntry: "Fort Riggs" */
			return 63;
		case -428972082: /* GXTEntry: "Gang Hideout" */
			return 64;
		case -1258576797: /* GXTEntry: "Town" */
			return 69;
		default:
			break;
	}
	return 0;
}

void func_37(var uParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_80(Local_20.f_23);
	Local_20.f_31 = 0;
	if (!Local_20.f_33)
	{
		if (aggregate.camera_item.func_106(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || LAW::_0xF46108C50A22B029())
		{
			Local_20.f_33 = 1;
		}
	}
	else if (!aggregate.camera_item.func_106(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && !LAW::_0xF46108C50A22B029())
	{
		Local_20.f_33 = 0;
	}
	Local_20.f_34 = aggregate.annesburg.func_142(Global_35, Local_20.f_43, 1, 0);
	Local_20.f_35 = aggregate.annesburg.func_142(Global_35, (Global_1956178->f_7[&Global_40.f_4439[Local_20.f_23] /*31*/])->f_4, 1, 0);
	func_82(uParam0, &Local_20);
	func_83(uParam0, &Local_20);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (!aggregate.aberdeenpigfarm.func_175(Local_20.f_24, 4096))
		{
			aggregate.bandana.func_26(&(Local_20.f_24), 4096);
		}
		if (!Local_20.f_31)
		{
			if (Local_20 != 0)
			{
				Local_20 = 0;
			}
			return;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_182) && !Local_20.f_31)
	{
		return;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_182, 49, true);
	}
	bVar1 = aggregate.aberdeenpigfarm.func_130(44);
	if (Local_20.f_23 == 1 && bVar1)
	{
		uParam0->f_11 = 4;
	}
	if (Local_20.f_23 == 2 && !bVar1)
	{
		uParam0->f_11 = 4;
	}
	switch (Local_20)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
			{
				DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", true);
			}
			if (!aggregate.aberdeenpigfarm.func_136(uParam0->f_1))
			{
				func_85(uParam0->f_1, 1, 0, 0, 1, 1);
			}
			func_49(&Local_20);
			func_86(uParam0, &Local_20, 0);
			func_87(uParam0, &Local_20, 0);
			func_88(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
			aggregate.la_bear.func_211(&(Local_20.f_65), 1);
			aggregate.nb_crashed_wagon.func_283(&(Local_20.f_65), 1);
			aggregate.fme_condor_egg.func_810(&(Local_20.f_65), 1);
			aggregate.fme_condor_egg.func_809(&(Local_20.f_65), 1);
			aggregate.nb_kidnapped.func_289(&(Local_20.f_65), 1);
			func_94(&(Local_20.f_65), 0);
			aggregate.fme_condor_egg.func_518(&(Local_20.f_65), 1);
			func_96(&(Local_20.f_65), 1);
			aggregate.la_bear.func_289(&(Local_20.f_65), 1);
			func_98(&(Local_20.f_65), 1);
			aggregate.la_bear.func_287(&(Local_20.f_65), 0);
			aggregate.la_bear.func_296(&(Local_20.f_65), 1);
			aggregate.fme_condor_egg.func_519(&(Local_20.f_65), 0);
			aggregate.fme_condor_egg.func_809(&(Local_20.f_65), 1);
			func_102(&(Local_20.f_65), 1);
			aggregate.la_bear.func_215(&(Local_20.f_65), 0);
			func_104(&(Local_20.f_65), 0);
			aggregate.fme_condor_egg.func_1290(&(Local_20.f_65), 0);
			aggregate.la_bear.func_295(&(Local_20.f_65), 0);
			if (!func_52(func_50(Local_20.f_25), func_51(Local_20.f_23)))
			{
				Local_20.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			}
			aggregate.bandana.func_26(&(Local_20.f_24), 65536);
			aggregate.coffee_drinking.func_5(&Local_20, 1);
			break;
		case 1:
			func_108(uParam0, &Local_20);
			if ((Local_20.f_23 == 3 && !aggregate.aberdeenpigfarm.func_175(Local_20.f_24, 65536)) && func_109())
			{
				aggregate.bandana.func_26(&(Local_20.f_24), 65536);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				if (!func_112(uParam0->f_125[0 /*17*/], 0))
				{
					aggregate.saloon_dining.func_191(uParam0->f_125[0 /*17*/], 1);
				}
				if (uParam0->f_7 && !func_112(uParam0->f_125[1 /*17*/], 0))
				{
					aggregate.saloon_dining.func_191(uParam0->f_125[1 /*17*/], 1);
				}
			}
			else
			{
				if (func_112(uParam0->f_125[0 /*17*/], 0))
				{
					aggregate.saloon_dining.func_191(uParam0->f_125[0 /*17*/], 0);
				}
				if (uParam0->f_7 && func_112(uParam0->f_125[1 /*17*/], 0))
				{
					aggregate.saloon_dining.func_191(uParam0->f_125[1 /*17*/], 0);
				}
			}
			if (!TASK::_0x841475AC96E794D1(Local_20.f_64) && PED::_0x34D6AC1157C8226C(uParam0->f_182, 1041923169))
			{
				Local_20.f_64 = TASK::_0xDF7993356F52359A(uParam0->f_182, 0);
			}
			func_114(uParam0);
			if (bVar0 && uParam0->f_1 == 277)
			{
				func_115(uParam0, &Local_20);
			}
			else if (Local_20.f_31)
			{
			}
			else
			{
				func_116(&Local_20, uParam0);
				func_117(uParam0, &Local_20);
			}
			break;
		case 2:
			break;
	}
}

void func_39(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		return;
	}
	bVar0 = func_80(Local_20.f_23);
	if (!aggregate.aberdeenpigfarm.func_175(Local_20.f_24, 16384) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
	{
		func_118(&Local_20);
		if (bVar0)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
		}
		else if (func_119(&Local_20))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
		}
		else if (Local_20.f_23 == 0)
		{
			uParam0->f_111 = "BUY_TICKET_DLR";
		}
		else
		{
			uParam0->f_111 = "BUY_TICKET";
		}
		aggregate.saloon_dining.func_357(uParam0->f_125[0 /*17*/], uParam0->f_111);
		aggregate.bandana.func_26(&(Local_20.f_24), 16384);
	}
	if ((!aggregate.aberdeenpigfarm.func_175(Local_20.f_24, 262144) && !func_111(Local_20.f_23)) && !Global_1956178->f_1323)
	{
		aggregate.net_main_offline.func_312("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, 1);
		aggregate.bandana.func_26(&(Local_20.f_24), 262144);
	}
	if (!func_80(Local_20.f_23))
	{
		if (Local_20.f_31)
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_20, 1);
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(Global_40.f_4439.f_12, 4) && !aggregate.aberdeenpigfarm.func_175(Global_40.f_4439.f_12, 8))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_20, 1);
			}
		}
		if (!aggregate.annesburg.func_217((uParam0->f_125[0 /*17*/])->f_6))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				iVar1 = 0;
				while (iVar1 <= 40)
				{
					if ((Global_1956178->f_7[iVar1 /*31*/])->f_6 == uParam0->f_182)
					{
						uParam0->f_117 = (Global_1956178->f_7[iVar1 /*31*/])->f_28;
					}
					iVar1++;
				}
				func_8(uParam0);
			}
		}
	}
}

void func_40(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(Local_20.f_24, 16384))
	{
		aggregate.bandana.func_26(&(Local_20.f_24), 16384);
	}
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_44(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	var uVar8;
	var uVar9;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		aggregate.saloon_dining.func_269(&iParam8);
		bVar0 = false;
		bVar1 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar2 = iParam8 & 32 != false;
		bVar3 = iParam8 & 524288 != false;
		bVar4 = iParam8 & 16777216 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar7 = aggregate.fme_dead_drop.func_1207(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar4)
		{
			bVar0 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar6 || (bVar4 && bVar0))
		{
			aggregate.barcustomer_interaction.func_43(&(iParam1->f_13));
		}
		if (aggregate.saloon_dining.func_271(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar1)
				{
					if (aggregate.saloon_dining.func_272(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar7))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
					}
				}
				break;
			case 1:
				if (!bVar1 || !fVar7 <= (fParam2 + 5f))
				{
					aggregate.saloon_dining.func_273(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							aggregate.saloon_dining.func_274(*uParam0, 1, 1);
						}
					}
					else if (aggregate.saloon_dining.func_275(iParam1, 22))
					{
						aggregate.saloon_dining.func_274(*uParam0, 0, 1);
					}
				}
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					aggregate.saloon_dining.func_276(uParam0, 1, iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					aggregate.saloon_dining.func_277(iParam8);
					if (func_133(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									aggregate.saloon_dining.func_279(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					aggregate.saloon_dining.func_280(iParam1, uParam3, fVar7);
					if (aggregate.saloon_dining.func_281(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						if (!bVar3)
						{
							aggregate.saloon_dining.func_145(uParam3, 0, 0, 1, 1);
						}
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_138(uParam0, iParam1, fParam4, bVar5))
				{
					uVar8 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar8;
				}
				break;
			case 2:
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					aggregate.saloon_dining.func_283(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar2);
					func_133(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 1);
					aggregate.saloon_dining.func_276(uParam0, func_130(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					aggregate.saloon_dining.func_277(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar3)
					{
						aggregate.saloon_dining.func_145(uParam3, 0, 0, 1, 1);
					}
					aggregate.fme_round_up.func_1140(iParam1, 1);
				}
				aggregate.saloon_dining.func_280(iParam1, uParam3, fVar7);
				if (func_138(uParam0, iParam1, fParam4, bVar5))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					uVar9 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar9;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			aggregate.shop_bait.func_1764(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_45(var uParam0)
{
	if (!func_80(Local_20.f_23))
	{
		if (uParam0->f_117 > 0 && (aggregate.fme_animal_tagging.func_1524() >= uParam0->f_117 || func_119(&Local_20)))
		{
			aggregate.bandana.func_26(&(Local_20.f_24), 4);
			aggregate.saloon_dining.func_191(uParam0->f_125[0 /*17*/], 1);
			func_87(uParam0, &Local_20, 1);
			func_143(uParam0, &Local_20, 1);
		}
	}
	else
	{
		aggregate.bandana.func_26(&(Local_20.f_24), 4);
		aggregate.saloon_dining.func_191(uParam0->f_125[0 /*17*/], 1);
		func_87(uParam0, &Local_20, 1);
		func_143(uParam0, &Local_20, 1);
	}
}

void func_46(var uParam0)
{
	aggregate.bandana.func_26(&(Local_20.f_24), 524288);
	uParam0->f_7 = 0;
	aggregate.saloon_dining.func_191(uParam0->f_125[1 /*17*/], 1);
}

void func_48(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
}

void func_49(int iParam0)
{
	if (iParam0->f_33)
	{
		return;
	}
	switch (iParam0->f_23)
	{
		case 0:
			aggregate.adlerranch.func_62(212326452, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-80890560, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-302077142, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-531755063, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			aggregate.adlerranch.func_62(-2034821814, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-786191838, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-1518382426, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-223351546, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			aggregate.adlerranch.func_62(235202295, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-71941542, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-723815263, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1920184275, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			aggregate.adlerranch.func_62(1373799284, 0, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1735175816, 0, 0f, 0, 0, 0, 0, 0);
			break;
	}
	iParam0->f_36 = 0;
}

char* func_50(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
		case 1:
			return "Post_Show_La_Bohemienne_Music";
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
		default:
			break;
	}
	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_51(int iParam0)
{
	if (iParam0 == 3)
	{
		return "wax_cylinder_show_music";
	}
	return "3235391231_intro";
}

bool func_52(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::_0x0556C784FA056628(sParam0, sParam1);
	if (iVar0 != -1 && AUDIO::IS_STREAM_PLAYING(iVar0))
	{
		return true;
	}
	return false;
}

bool func_71(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_85(iParam0))
	{
		return false;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(aggregate.aberdeenpigfarm.func_120(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(aggregate.aberdeenpigfarm.func_120(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(aggregate.aberdeenpigfarm.func_120(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_80(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(Global_1956178->f_1321, 16) && iParam0 == 0)
	{
		return true;
	}
	if ((aggregate.aberdeenpigfarm.func_175(Global_40.f_4439.f_12, 1) && !aggregate.aberdeenpigfarm.func_175(Global_40.f_4439.f_12, 2)) && iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_82(var uParam0, var uParam1)
{
	if (uParam1->f_33 || uParam1->f_32)
	{
		if (!func_173(uParam0))
		{
			func_88(uParam0, 1);
			func_86(uParam0, uParam1, 0);
		}
		if (!uParam1->f_36)
		{
			func_174(uParam1);
		}
	}
	else
	{
		if (func_173(uParam0))
		{
			func_88(uParam0, 0);
		}
		if (uParam1->f_36)
		{
			func_49(uParam1);
		}
	}
}

void func_83(var uParam0, var uParam1)
{
	switch (uParam1->f_8)
	{
		case 0:
			if (!func_111(func_110(uParam0->f_1)))
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_2), 5);
				aggregate.coffee_drinking.func_5(&(uParam1->f_8), 3);
			}
			else
			{
				if (func_177(uParam0, uParam1))
				{
				}
				if (Global_1956178->f_1323)
				{
					aggregate.coffee_drinking.func_5(&(uParam1->f_8), 1);
				}
			}
			break;
		case 1:
			if ((Global_1956178->f_1325 && uParam1->f_2 < 5) && uParam1->f_2 != 0)
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_2), 5);
			}
			if (Global_1956178->f_1324)
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_8), 2);
			}
			break;
		case 2:
			if (Global_1956178->f_1324)
			{
				if (func_177(uParam0, uParam1))
				{
					aggregate.coffee_drinking.func_5(&(uParam1->f_8), 3);
				}
			}
			else
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_8), 1);
			}
			if (!Global_1956178->f_1323)
			{
				if (func_177(uParam0, uParam1))
				{
					aggregate.coffee_drinking.func_5(&(uParam1->f_8), 3);
				}
			}
			break;
		case 3:
			if (func_111(func_110(uParam0->f_1)))
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_8), 0);
			}
			break;
	}
	func_178(uParam0, uParam1);
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_180(iParam0, 1))
	{
		return 0;
	}
	if (aggregate.aberdeenpigfarm.func_165(aggregate.aberdeenpigfarm.func_118(iParam0)))
	{
		iVar1 = aggregate.aberdeenpigfarm.func_120(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar1))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(iVar1);
			}
		}
		_NAMESPACE48::_0x6759BEE6762E140B(iVar1);
		iVar0 = _NAMESPACE48::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !aggregate.aberdeenpigfarm.func_136(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	aggregate.aberdeenpigfarm.func_143(iParam0, 1);
	func_182(iParam0);
	if (bParam3)
	{
		aggregate.aberdeenpigfarm.func_143(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	(Global_1956178->f_1279[func_110(uParam0->f_1) /*7*/])->f_3 = iParam2;
	(Global_1956178->f_1279[func_110(uParam0->f_1) /*7*/])->f_4 = iParam2;
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	(Global_1956178->f_1279[func_110(uParam0->f_1) /*7*/])->f_2 = iParam2;
}

void func_88(var uParam0, int iParam1)
{
	(Global_1956178->f_1279[func_110(uParam0->f_1) /*7*/])->f_5 = iParam1;
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 128);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 128);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 32);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 32);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_163(&(uParam0->f_1), 16);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_106(&(uParam0->f_1), 16);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_163(&(uParam0->f_1), 524288);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_106(&(uParam0->f_1), 524288);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_163(&(uParam0->f_1), 1024);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_106(&(uParam0->f_1), 1024);
	}
}

void func_108(var uParam0, int iParam1)
{
	int iVar0;

	switch (iParam1->f_7)
	{
		case 0:
			if (iParam1->f_34 && !iParam1->f_35)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_7), 1);
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(1664736751);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (aggregate.net_fetch.func_2706(uParam0->f_182, 0, 0, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					iParam1->f_32 = 1;
				}
			}
			else if (!iParam1->f_32)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) && iVar0 != joaat("weapon_unarmed"))
				{
					func_187(0);
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false) && iVar0 != joaat("weapon_unarmed"))
				{
					func_187(1);
				}
			}
			if ((((!iParam1->f_34 || iParam1->f_35) || iParam1->f_33) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || iParam1->f_32)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_7), 2);
			}
			break;
		case 2:
			if ((!iParam1->f_33 && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && !iParam1->f_32)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_7), 0);
			}
			break;
	}
}

bool func_109()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", 1);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 0;
		case 278:
			if (aggregate.aberdeenpigfarm.func_130(44))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 519:
			return 4;
		case 33:
			return 3;
	}
	return -1;
}

bool func_111(int iParam0)
{
	return (Global_1956178->f_1279[iParam0 /*7*/])->f_3;
}

bool func_112(var uParam0, bool bParam1)
{
	if (!bParam1 || aggregate.annesburg.func_217(uParam0->f_6))
	{
		return aggregate.saloon_dining.func_275(uParam0, 4);
	}
	return false;
}

void func_114(var uParam0)
{
	vector3 vVar0;

	if (uParam0->f_1 == 33)
	{
		if (func_111(func_110(33)))
		{
			if (!aggregate.adlerranch.func_93(1015669983) || func_121(3))
			{
				aggregate.bigvalley_population.func_16(1015669983);
			}
		}
		else if (!Global_1956178->f_1323 && aggregate.adlerranch.func_93(1015669983))
		{
			vVar0 = { -352.0567f, 704.7408f, 117.9537f };
			if (aggregate.fishing_core.func_39(Global_35, vVar0, 1) > 30f)
			{
				aggregate.bigvalley_population.func_17(1015669983);
			}
		}
	}
}

int func_115(var uParam0, int iParam1)
{
	if (!Global_1956178->f_1323)
	{
		if (aggregate.aberdeenpigfarm.func_175(Global_1956178->f_1321, 16) && aggregate.fishing_core.func_39(Global_35, func_15(uParam0->f_1), 1) > 40f)
		{
			aggregate.bandana.func_26(&(Global_1956178->f_1321), 16);
			if (iParam1->f_1 < 11)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 11);
			}
		}
	}
	switch (iParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_193(0), false);
			STREAMING::REQUEST_MODEL(func_193(1), false);
			aggregate.coffee_drinking.func_5(&(iParam1->f_1), 1);
			break;
		case 1:
			if (!func_197(iParam1->f_10[0 /*3*/], func_194(0), func_196(aggregate.aberdeenpigfarm.func_123()), 1))
			{
				return 0;
			}
			if (!func_197(iParam1->f_10[1 /*3*/], func_194(1), func_198(), 1))
			{
				return 0;
			}
			if (!func_197(iParam1->f_10[2 /*3*/], func_194(2), func_199(2), 1))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_193(0)) && !STREAMING::HAS_MODEL_LOADED(func_193(1)))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[0])))
			{
				iParam1->f_45[0] = OBJECT::CREATE_OBJECT(func_193(0), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[1])))
			{
				iParam1->f_45[1] = OBJECT::CREATE_OBJECT(func_193(1), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!aggregate.aberdeenpigfarm.func_123() && ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(iParam1->f_10[0 /*3*/]), "b_playerArthur", true, false);
			}
			func_200(iParam1);
			aggregate.coffee_drinking.func_5(&(iParam1->f_1), 2);
			break;
		case 2:
			if (aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[1]), 1, 0) && aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 4))
			{
				aggregate.bandana.func_26(&(iParam1->f_24), 4);
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 3);
			}
			break;
		case 3:
			func_201(uParam0, iParam1->f_10[0 /*3*/]);
			aggregate.coffee_drinking.func_5(&(iParam1->f_1), 4);
			break;
		case 4:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[0 /*3*/]), 0) && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[0 /*3*/])) > 0.85f)
			{
				func_87(uParam0, iParam1, 1);
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])) && ANIMSCENE::_0xD8254CB2C586412B(&(iParam1->f_10[0 /*3*/]), 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[0 /*3*/]));
			}
			if (aggregate.aberdeenpigfarm.func_175(Global_1956178->f_1321, 32) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[0]), 1, 0))
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 6);
			}
			break;
		case 6:
			func_202(uParam0, iParam1->f_10[1 /*3*/], iParam1);
			aggregate.coffee_drinking.func_5(&(iParam1->f_1), 7);
			break;
		case 7:
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[1 /*3*/])) && (ANIMSCENE::_0x005E6F28DD7ED58D(&(iParam1->f_10[1 /*3*/]), "s_m_m_sdticketseller_01") || ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[1 /*3*/])) > 0.5f))
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 8);
			}
			break;
		case 8:
			if (aggregate.fishing_core.func_39(Global_35, func_15(uParam0->f_1), 1) > 30f)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 10);
				return 0;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(&(iParam1->f_10[1 /*3*/]), "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, 1) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (!aggregate.annesburg.func_217(&(iParam1->f_62[0])))
			{
				iParam1->f_62[0] = aggregate.net_hunting_wagon.func_102("TAKE_LETTER", joaat("INPUT_CONTEXT_Y"), &(iParam1->f_51[1]), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (aggregate.binoculars.func_13(&(iParam1->f_62[0]), 1))
			{
				aggregate.annesburg.func_218(iParam1->f_62[0], 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2541.031f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, false, -136.15f);
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 9);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(&(iParam1->f_10[1 /*3*/]), "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, 1) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1) == 8 || aggregate.fishing_core.func_39(Global_35, 2541.031f, -1281.497f, 49.21795f, 1) < 0.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, 0);
				func_204(uParam0, iParam1->f_10[2 /*3*/], iParam1);
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 10);
			}
			Jump @1910; //curOff = 1264
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[1 /*3*/])))
			{
				if (ANIMSCENE::_0x477122B8D05E7968(&(iParam1->f_10[1 /*3*/]), 1, 0))
				{
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[1 /*3*/]), 0))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(&(iParam1->f_10[1 /*3*/]), "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, 1) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_182, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[1 /*3*/]));
					}
				}
			}
			if ((ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])) && ANIMSCENE::_0x477122B8D05E7968(&(iParam1->f_10[0 /*3*/]), 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[0 /*3*/]), 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[0 /*3*/]));
			}
			if ((ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[2 /*3*/])) && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[2 /*3*/]), 0)) && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[2 /*3*/])) > 0.5f)
			{
				if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 131072))
				{
					aggregate.pv_hunt_the_posse.func_1137(521481081 /* GXTEntry: "Letter from Miss Marjorie" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					aggregate.money_pile.func_13(4000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[0])))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam1->f_45[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[1])))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam1->f_45[1]);
					}
					aggregate.bandana.func_26(&(iParam1->f_24), 131072);
				}
			}
			if (aggregate.fishing_core.func_39(Global_35, func_15(uParam0->f_1), 1) > 30f)
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_1), 11);
			}
			Jump @1910; //curOff = 1668
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])) && ANIMSCENE::_0x477122B8D05E7968(&(iParam1->f_10[0 /*3*/]), 1, 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[0 /*3*/]));
			}
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[1 /*3*/])) && ANIMSCENE::_0x477122B8D05E7968(&(iParam1->f_10[1 /*3*/]), 1, 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[1 /*3*/]));
			}
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[2 /*3*/])) && ANIMSCENE::_0x477122B8D05E7968(&(iParam1->f_10[2 /*3*/]), 1, 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[2 /*3*/]));
			}
			if (aggregate.annesburg.func_217(&(iParam1->f_62[0])))
			{
				aggregate.annesburg.func_218(iParam1->f_62[0], 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[0])))
			{
				OBJECT::DELETE_OBJECT(iParam1->f_45[0]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[1])))
			{
				OBJECT::DELETE_OBJECT(iParam1->f_45[1]);
			}
			aggregate.bandana.func_26(&(Global_1956178->f_1321), 16);
			aggregate.coffee_drinking.func_5(&(iParam1->f_1), 12);
			Jump @1910; //curOff = 1900
			return 1;
			return 0;
		}

void func_116(int iParam0, var uParam1)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (aggregate.aberdeenpigfarm.func_175(iParam0->f_24, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && aggregate.fme_condor_egg.func_1100(Global_35, "WHATS_PLAYING", 291934926, uParam1->f_182, 1, func_207(aggregate.aberdeenpigfarm.func_123()), 0, 1))
				{
					aggregate.barcustomer_interaction.func_43(&(iParam0->f_37));
					aggregate.coffee_drinking.func_5(&(iParam0->f_9), 1);
				}
			}
			break;
		case 1:
			if (!aggregate.fm_mission_controller.func_4265(1) && aggregate.broom_scenario.func_29(&(iParam0->f_37)) > 2f)
			{
				aggregate.coffee_drinking.func_5(&(iParam0->f_9), 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && aggregate.fme_condor_egg.func_1100(uParam1->f_182, func_212(&(Global_40.f_4439[iParam0->f_23])), 291934926, Global_35, 1, func_213(uParam1->f_1), 0, 1))
			{
				aggregate.barcustomer_interaction.func_43(&(iParam0->f_37));
				aggregate.coffee_drinking.func_5(&(iParam0->f_9), 3);
			}
			break;
		case 3:
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && aggregate.broom_scenario.func_29(&(iParam0->f_37)) > 3f)
			{
				aggregate.barcustomer_interaction.func_43(&(iParam0->f_37));
				aggregate.coffee_drinking.func_5(&(iParam0->f_9), 4);
			}
			break;
		case 4:
			if (aggregate.broom_scenario.func_29(&(iParam0->f_37)) > 45f)
			{
				aggregate.barcustomer_interaction.func_43(&(iParam0->f_37));
				aggregate.coffee_drinking.func_5(&(iParam0->f_9), 5);
			}
			break;
		case 5:
			if (!Global_1956178->f_1323)
			{
				aggregate.bandana.func_26(&(iParam0->f_24), 524288);
				uParam1->f_7 = 1;
				aggregate.saloon_dining.func_191(uParam1->f_125[1 /*17*/], 0);
				aggregate.coffee_drinking.func_5(&(iParam0->f_9), 0);
			}
			break;
	}
}

void func_117(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 150f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = aggregate.dynamic_craft_scenario.func_370(Global_35, uParam0->f_182, 1, 1);
	}
	bVar1 = false;
	if (aggregate.fme_condor_egg.func_1665(uParam0->f_182, 1, 1, 1, 0, 0) || aggregate.fme_animal_tagging.func_1410(uParam0->f_182, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		if (PED::GET_PED_RESET_FLAG(Global_35, 311))
		{
			bVar1 = true;
		}
	}
	if ((iParam1->f_32 && !bVar1) && fVar0 > 40f)
	{
		iParam1->f_32 = 0;
	}
	if ((iParam1->f_3 >= 3 && iParam1->f_3 != 7) && fVar0 < 40f)
	{
		if (iParam1->f_33 || func_216(uParam0->f_182, 0, &(iParam1->f_65), &(iParam1->f_96), 0, 0))
		{
			if (iParam1->f_3 == 3)
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_182, &(iParam1->f_10[3 /*3*/])))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iParam1->f_10[3 /*3*/]), "SHOPKEEPER", uParam0->f_182);
					func_217(iParam1, 0);
					aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
					aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
					aggregate.coffee_drinking.func_5(&(iParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_35, 0);
					aggregate.coffee_drinking.func_5(&(iParam1->f_3), 7);
				}
			}
		}
	}
	if (iParam1->f_5 != -1)
	{
		if (((ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[3 /*3*/])) && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[3 /*3*/]), 0)) && ANIMSCENE::_0x23E33CB9F4A3F547(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_5))) && ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_5));
			iParam1->f_5 = -1;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 4096))
	{
		iParam1->f_3 = 9;
		aggregate.bandana.func_26(&(iParam1->f_24), 4096);
	}
	switch (iParam1->f_3)
	{
		case 0:
			iParam1->f_27 = 1;
			iParam1->f_29 = 1;
			func_118(iParam1);
			func_217(iParam1, 10);
			func_221(iParam1);
			func_222(iParam1->f_51[2], iParam1->f_51[3], func_110(uParam0->f_1));
			aggregate.coffee_drinking.func_5(&(iParam1->f_3), 1);
			break;
		case 1:
			if (!func_197(iParam1->f_10[3 /*3*/], func_194(3), func_220(10), 1))
			{
				return;
			}
			if (!func_223(iParam1))
			{
				return;
			}
			if (!func_224(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_182, true, false), func_110(uParam0->f_1)))
			{
				return;
			}
			aggregate.coffee_drinking.func_5(&(iParam1->f_3), 2);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[3 /*3*/])) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iParam1->f_10[3 /*3*/]), "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iParam1->f_10[3 /*3*/]), "SHOPKEEPER", uParam0->f_182, 0);
				func_225(iParam1, func_110(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(iParam1->f_10[3 /*3*/]), func_226(func_110(uParam0->f_1)), func_227(func_110(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(&(iParam1->f_10[3 /*3*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_193(2));
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 3);
			}
			break;
		case 3:
			if (bVar1)
			{
				func_87(uParam0, iParam1, 0);
				func_143(uParam0, iParam1, 0);
				func_86(uParam0, iParam1, 0);
				func_217(iParam1, 0);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				iParam1->f_32 = 1;
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 3);
			}
			func_228(uParam0, iParam1, bVar1, fVar0);
			break;
		case 4:
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[3 /*3*/]), 0))
			{
				if (!func_229(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4)))
				{
					return;
				}
				func_230(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
				ANIMSCENE::START_ANIM_SCENE(&(iParam1->f_10[3 /*3*/]));
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 3);
			}
			else
			{
				if (!func_229(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4)))
				{
					return;
				}
				if (iParam1->f_4 == 5 || iParam1->f_4 == 4)
				{
					bVar2 = false;
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false) && iVar3 != joaat("weapon_unarmed"))
					{
						func_187(0);
						bVar2 = true;
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 1, false) && iVar3 != joaat("weapon_unarmed"))
					{
						func_187(1);
						bVar2 = true;
					}
					if (!bVar2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iParam1->f_10[3 /*3*/]), "SHOPKEEPER", uParam0->f_182, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, &(iParam1->f_10[3 /*3*/]), "ARTHUR", func_220(iParam1->f_4), 1069379748 /* Float: 1.48f */, false, 0, 20000, -1082130432 /* Float: -1f */);
						aggregate.coffee_drinking.func_5(&(iParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iParam1->f_10[3 /*3*/]), "SHOPKEEPER", uParam0->f_182, 0);
					if (iParam1->f_4 == 0 || iParam1->f_4 == 1)
					{
						aggregate.barcustomer_interaction.func_43(&(iParam1->f_56));
						func_230(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4));
						aggregate.coffee_drinking.func_5(&(iParam1->f_3), 7);
					}
					else
					{
						aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
						func_230(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4));
						aggregate.coffee_drinking.func_5(&(iParam1->f_3), 3);
					}
				}
			}
			if (((iParam1->f_4 != 5 && iParam1->f_4 != 4) && iParam1->f_4 != 9) && iParam1->f_4 != 10)
			{
				aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_231(iParam1->f_4, 0), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x337F1CC8EE895601(&(iParam1->f_10[3 /*3*/]), "ARTHUR"))
			{
				func_230(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4), func_220(iParam1->f_4));
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 6);
			}
			break;
		case 6:
			if ((ANIMSCENE::_0xCBFC7725DE6CE2E0(&(iParam1->f_10[3 /*3*/]), 0) && ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4))) && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[3 /*3*/])) > 0.267f)
			{
				if (func_119(iParam1))
				{
					func_232(iParam1);
					aggregate.bandana.func_26(&(iParam1->f_24), 16384);
				}
				else
				{
					aggregate.fme_condor_egg.func_1100(Global_35, "TICKET_PLEASE", 291934926, uParam0->f_182, 1, func_207(aggregate.aberdeenpigfarm.func_123()), 0, 1);
					aggregate.interactive_campfire.func_754(uParam0->f_117, 0, 0, 1, 0);
				}
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 3);
			}
			break;
		case 7:
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 8192))
			{
				if (!iParam1->f_33)
				{
					func_234(uParam0);
				}
				aggregate.bandana.func_26(&(iParam1->f_24), 8192);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, 474215631, 1) != 1)
			{
				if (((aggregate.fishing_core.func_161(&(iParam1->f_56)) > 5f && !ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(1))) && !ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(3))) && !ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(0)))
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_35, 0);
				}
			}
			if (!iParam1->f_33 && !iParam1->f_32)
			{
				func_236(uParam0, iParam1);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 0);
				return;
			}
			if (aggregate.fishing_core.func_161(&(iParam1->f_56)) > 10f && !aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 32))
			{
				func_217(iParam1, 1);
				aggregate.bandana.func_26(&(iParam1->f_24), 32);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
			}
			break;
		case 9:
			func_236(uParam0, iParam1);
			aggregate.coffee_drinking.func_5(&(iParam1->f_3), 0);
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_118(var uParam0)
{
	if (!uParam0->f_40 && aggregate.binoculars.func_32(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1))
	{
		uParam0->f_40 = 1;
	}
	if (!uParam0->f_41 && aggregate.binoculars.func_32(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1))
	{
		uParam0->f_41 = 1;
	}
	if (!uParam0->f_42 && aggregate.binoculars.func_32(2037803338 /* GXTEntry: "Movie Ticket" */, 1))
	{
		uParam0->f_42 = 1;
	}
}

bool func_119(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 1:
		case 3:
			if (iParam0->f_41)
			{
				return true;
			}
			break;
		case 2:
		case 4:
			if (iParam0->f_42)
			{
				return true;
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_121(int iParam0)
{
	return (Global_1956178->f_1279[iParam0 /*7*/])->f_2;
}

bool func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (aggregate.net_fetch.func_2706(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

bool func_133(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = aggregate.fme_animal_tagging.func_1524();
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = PED::_0xA911EE21EDF69DAF(Global_35);
	fVar12 = -1f;
	if (aggregate.barcustomer_interaction.func_42(&(iParam1->f_13)))
	{
		fVar12 = aggregate.broom_scenario.func_29(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = aggregate.annesburg.func_217(((*uParam4)[iVar0 /*17*/])->f_6);
		aggregate.saloon_dining.func_429(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (aggregate.saloon_dining.func_430(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (aggregate.saloon_dining.func_431(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						aggregate.saloon_dining.func_145(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						aggregate.saloon_dining.func_125(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						aggregate.saloon_dining.func_424(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (aggregate.saloon_dining.func_432(iParam1, fParam6, iParam1->f_9))
					{
						aggregate.barcustomer_interaction.func_43(&(iParam1->f_18));
						if (bVar6)
						{
							aggregate.saloon_dining.func_125(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		aggregate.saloon_dining.func_433(iParam1, fParam2);
	}
	return bVar5;
}

bool func_138(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			aggregate.barcustomer_interaction.func_43(&(iParam1->f_18));
			return false;
		}
		else if (aggregate.barcustomer_interaction.func_42(&(iParam1->f_18)))
		{
			aggregate.barcustomer_interaction.func_50(&(iParam1->f_18));
			return false;
		}
	}
	if (!aggregate.barcustomer_interaction.func_42(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return aggregate.saloon_dining.func_437(&(iParam1->f_18), fParam2);
	return true;
}

void func_143(var uParam0, int iParam1, bool bParam2)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", bParam2);
	}
	iParam1->f_30 = bParam2;
}

bool func_173(var uParam0)
{
	return (Global_1956178->f_1279[func_110(uParam0->f_1) /*7*/])->f_5;
}

void func_174(var uParam0)
{
	if ((uParam0->f_34 || uParam0->f_35) || aggregate.annesburg.func_142(Global_35, uParam0->f_44, 1, 0))
	{
		return;
	}
	switch (uParam0->f_23)
	{
		case 0:
			aggregate.adlerranch.func_62(212326452, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-80890560, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-302077142, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-531755063, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			aggregate.adlerranch.func_62(-2034821814, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-786191838, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-1518382426, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-223351546, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			aggregate.adlerranch.func_62(235202295, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-71941542, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(-723815263, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1920184275, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			aggregate.adlerranch.func_62(1373799284, 1, 0f, 0, 0, 0, 0, 0);
			aggregate.adlerranch.func_62(1735175816, 1, 0f, 0, 0, 0, 0, 0);
			break;
	}
	uParam0->f_36 = 1;
}

bool func_177(var uParam0, var uParam1)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = aggregate.dynamic_craft_scenario.func_370(Global_35, uParam0->f_182, 1, 1);
	}
	else
	{
		fVar0 = 150f;
	}
	if (fVar0 < 30f)
	{
		if ((uParam1->f_2 == 6 || uParam1->f_2 == 5) || uParam1->f_2 == 0)
		{
			aggregate.coffee_drinking.func_5(&(uParam1->f_2), 1);
			return false;
		}
	}
	else if (fVar0 > 40f)
	{
		if (uParam1->f_2 != 5 && uParam1->f_2 != 6)
		{
			aggregate.coffee_drinking.func_5(&(uParam1->f_2), 5);
			return true;
		}
	}
	return false;
}

void func_178(var uParam0, var uParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (uParam1->f_2)
	{
		case 0:
			break;
		case 1:
			if (AUDIO::LOAD_STREAM(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_2), 2);
			}
			break;
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_274(uParam0->f_1), AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23)));
			aggregate.coffee_drinking.func_5(&(uParam1->f_2), 3);
			break;
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23))))
			{
				aggregate.coffee_drinking.func_5(&(uParam1->f_2), 4);
			}
			break;
		case 4:
			uParam1->f_25++;
			if (uParam1->f_25 >= 10)
			{
				uParam1->f_25 = 0;
			}
			aggregate.coffee_drinking.func_5(&(uParam1->f_2), 1);
			break;
		case 5:
			if (func_52(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23)));
				aggregate.coffee_drinking.func_5(&(uParam1->f_2), 6);
			}
			break;
		case 6:
			break;
	}
}

bool func_180(int iParam0, bool bParam1)
{
	if (!aggregate.aberdeenpigfarm.func_85(iParam0))
	{
		return false;
	}
	if ((aggregate.aberdeenpigfarm.func_111(iParam0, 1) && !aggregate.aberdeenpigfarm.func_136(iParam0)) && aggregate.aberdeenpigfarm.func_164(iParam0))
	{
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_111(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!aggregate.annesburg.func_130(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_182(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_85(iParam0))
	{
		return;
	}
	((*Global_1893763)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_187(int iParam0)
{
	bool bVar0;

	bVar0 = aggregate.mp_intro.func_2578(Global_35, 0, iParam0, 0);
	if (aggregate.binoculars.func_72(bVar0))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(bVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_35, 1, iParam0, 1, 0);
		}
		else if (aggregate.bandana.func_71(bVar0))
		{
			if (aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 7, 0)) || aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 9, 0)))
			{
				if (aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 8, 0)))
				{
					func_280(bVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_0x0556E9D2ECF39D01(bVar0) && bVar0 != joaat("weapon_fishingrod"))
		{
			if (aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 7, 0)) || aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 9, 0)))
			{
				if (aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 10, 0)))
				{
					func_280(bVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (iParam0 == 0)
			{
				if (!aggregate.binoculars.func_72(aggregate.mp_intro.func_2578(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, iParam0, false, false);
	}
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_cs_letter03x");
		case 1:
			return joaat("p_moneystack01x");
		case 2:
			return joaat("p_coinstack02");
		case 3:
			return 2029097413;
		case 4:
			return joaat("p_cs_admitticket01x");
		default:
			break;
	}
	return 0;
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
		default:
			break;
	}
	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

char* func_196(int iParam0)
{
	return "pl_Conv_TicketTeller_Arthur";
}

bool func_197(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return true;
	}
	if (!uParam0->f_1 && !ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}
	return false;
}

char* func_198()
{
	return "pl_Convo_LetterPickup";
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
		case 1:
			return "pl_Enter_45R";
		case 2:
			return "pl_Enter_F_NoWalk";
		case 3:
			return "pl_Enter_F_Walk";
		default:
			break;
	}
	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_200(var uParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar12;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar12 = iVar0;
		Var1 = { func_284(iVar12) };
		uParam0->f_51[iVar12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_10, Var1, Var1.f_3, Var1.f_6, Var1.f_9);
		iVar0++;
	}
}

void func_201(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_285(uParam1, "b_playerArthur", 1, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_202(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam2->f_45[0])))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", &(iParam2->f_45[0]), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam2->f_45[1])))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", &(iParam2->f_45[1]), 0);
	}
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_285(uParam1, "b_playerArthur", 1, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_204(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam2->f_45[0])))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", &(iParam2->f_45[0]), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam2->f_45[1])))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", &(iParam2->f_45[1]), 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

char* func_207(bool bParam0)
{
	if (bParam0)
	{
		return "JOHN_PLAYER";
	}
	return "ARTHUR";
}

char* func_212(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
		default:
			break;
	}
	return "FAIL";
}

char* func_213(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
		case 519:
			return "FH_TOWNDEALER";
		case 277:
			return "JS_TOWNDEALER";
		case 278:
			return "FH_TOWNDEALER";
		default:
			break;
	}
	return "JK_TICKET_TAKER";
}

int func_216(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		aggregate.fme_condor_egg.func_1474(uParam2, 1, iVar0);
	}
	if (!Global_1939168->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (aggregate.fme_condor_egg.func_1475(iParam0, uParam2))
			{
				*uParam3 = 128;
				aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (aggregate.fme_condor_egg.func_1477(iParam0, uParam2))
				{
					*uParam3 = 8;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (aggregate.fme_condor_egg.func_1478(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (aggregate.fme_condor_egg.func_1479(iParam0, uParam2))
				{
					*uParam3 = 64;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_20 && aggregate.camera_item.func_106(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_19)
		{
			if (aggregate.fme_condor_egg.func_1480(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (aggregate.fme_condor_egg.func_1481(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (aggregate.fme_condor_egg.func_1482(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939168->f_23) < 300)
			{
				if (aggregate.fme_condor_egg.func_1483(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (aggregate.fme_condor_egg.func_1483(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (aggregate.fme_condor_egg.func_1484(iParam0, uParam2))
				{
					*uParam3 = 32;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939168->f_19 || uParam2->f_12 < 20f)
			{
				if (aggregate.fme_condor_egg.func_1485(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (aggregate.fme_condor_egg.func_1486(uParam2, 4000))
				{
					if ((aggregate.fme_condor_egg.func_1487(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && aggregate.fme_condor_egg.func_1488(uParam2, iParam0)) && aggregate.fme_condor_egg.func_1489(uParam2, iParam0))
					{
						*uParam3 = 2;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((aggregate.fme_condor_egg.func_1487(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && aggregate.fme_condor_egg.func_1488(uParam2, iParam0)) && aggregate.fme_condor_egg.func_1489(uParam2, iParam0))
				{
					*uParam3 = 2;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939168->f_34 == 0)
			{
				if (Global_1939168->f_35 != 0)
				{
					if (aggregate.fme_condor_egg.func_1490(iParam0, Global_1939168->f_35))
					{
						aggregate.aberdeenpigfarm.func_23();
						*uParam3 = 2;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (aggregate.fme_condor_egg.func_1492(uParam2, iParam0) || (uParam2->f_9 > 0 && (aggregate.bandana.func_15() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						aggregate.aberdeenpigfarm.func_23();
						*uParam3 = 2;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (aggregate.fme_condor_egg.func_1494())
				{
					if (aggregate.fme_condor_egg.func_1490(iParam0, Global_1939168->f_36))
					{
						aggregate.aberdeenpigfarm.func_23();
						*uParam3 = 2;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (aggregate.fme_condor_egg.func_1495(uParam2, iParam0))
			{
				*uParam3 = 1024;
				aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (aggregate.blackwater.func_175(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (aggregate.fme_condor_egg.func_1497(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (aggregate.fme_condor_egg.func_1498(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (aggregate.fme_condor_egg.func_1499(iParam0, uParam2))
					{
						*uParam3 = 8192;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (aggregate.fme_condor_egg.func_1500(iParam0, uParam2))
				{
					*uParam3 = 32768;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (aggregate.fme_condor_egg.func_1486(uParam2, 4000))
				{
					if (aggregate.fme_condor_egg.func_1502(&iParam0, uParam2))
					{
						*uParam3 = 512;
						aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (aggregate.fme_condor_egg.func_1503(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (aggregate.fme_condor_egg.func_1504(uParam2, iParam0))
			{
				*uParam3 = 1;
				aggregate.fme_condor_egg.func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_217(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam0->f_4;
	iParam0->f_4 = iParam1;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
		case 2:
			return "PL_AggroRun";
		case 3:
			return "PL_CowerBase";
		case 1:
			return "PL_CowerGoAway";
		case 4:
			return "PL_BuyLt";
		case 5:
			return "PL_BuyRt";
		case 6:
			return "PL_Greet1";
		case 7:
			return "PL_Greet2";
		case 8:
			return "PL_HelpYou";
		case 15:
			return "PL_NoShow1";
		case 16:
			return "PL_NoShow2";
		case 9:
			return "PL_OpenCurtain";
		case 11:
			return "PL_ShowNegLt";
		case 12:
			return "PL_ShowNegRt";
		case 13:
			return "PL_ShowPosLt";
		case 14:
			return "PL_ShowPosRt";
		case 10:
			return "Pl_Base";
		default:
			break;
	}
	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_221(var uParam0)
{
	if (func_119(uParam0))
	{
		STREAMING::REQUEST_MODEL(func_193(4), false);
	}
	else if (uParam0->f_23 == 0)
	{
		STREAMING::REQUEST_MODEL(func_193(3), false);
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_193(2), false);
	}
}

void func_222(var uParam0, var uParam1, int iParam2)
{
	struct<7> Var0;

	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				Var0 = { func_284(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				Var0 = { func_284(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.265f, -1363.339f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.704f, -1362.969f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 4:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.2858f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.9954f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 3:
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.9453f, 707.1058f, 117.0155f, 0f, 0f, -29.98282f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.7128f, 117.0762f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	}
}

bool func_223(var uParam0)
{
	if (func_119(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_193(4)))
		{
			return true;
		}
	}
	else if (uParam0->f_23 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(func_193(3)))
		{
			return true;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(func_193(2)))
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_119(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_45[4])))
		{
			iParam0->f_45[4] = OBJECT::CREATE_OBJECT(func_193(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_45[3])))
		{
			iParam0->f_45[3] = OBJECT::CREATE_OBJECT(func_193(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_45[2])))
	{
		iParam0->f_45[2] = OBJECT::CREATE_OBJECT(func_193(2), vParam1, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_225(var uParam0, int iParam1)
{
	if (func_119(uParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_10[3 /*3*/]), "COINS", &(uParam0->f_45[4]), 0);
	}
	else if (iParam1 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_10[3 /*3*/]), "COINS", &(uParam0->f_45[3]), 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_10[3 /*3*/]), "COINS", &(uParam0->f_45[2]), 0);
	}
}

Vector3 func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2542.176f, -1282.525f, 48.218f;
		case 1:
			return 2686.802f, -1362.095f, 47.215f;
		case 2:
			return 2686.802f, -1362.095f, 47.215f;
		case 4:
			return -789.7354f, -1362.636f, 42.82219f;
		case 3:
			return -355.1843f, 705.1395f, 115.9362f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 47.261f;
		case 1:
			return 0f, 0f, 129.887f;
		case 2:
			return 0f, 0f, 129.887f;
		case 4:
			return 0f, 0f, -90.358f;
		case 3:
			return 0f, 0f, -31.467f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_228(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;

	bVar0 = aggregate.fm_mission_controller.func_4265(1);
	switch (iParam1->f_6)
	{
		case 0:
			if (!aggregate.barcustomer_interaction.func_42(&(iParam1->f_59)))
			{
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
			}
			if ((((!func_121(func_110(uParam0->f_1)) && !aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 2)) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !Global_1956178->f_1323) && !bParam2)
			{
				func_217(iParam1, 6);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.bandana.func_26(&(iParam1->f_24), 2);
			}
			if (((((((!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 128) && !Global_1956178->f_1323) && !bVar0) && aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 2)) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !bParam2) && aggregate.broom_scenario.func_29(&(iParam1->f_59)) > 15f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.bandana.func_26(&(iParam1->f_24), 128);
				iParam1->f_27++;
				func_217(iParam1, 8);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
			}
			if ((((((aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 128) && !Global_1956178->f_1323) && !bVar0) && aggregate.broom_scenario.func_29(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_27))) && iParam1->f_26 <= 3) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_367(func_110(uParam0->f_1)), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_26++;
				iParam1->f_27++;
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
			}
			if (aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 4) && !Global_1956178->f_1323)
			{
				func_217(iParam1, func_368(func_110(uParam0->f_1)));
				aggregate.bandana.func_26(&(iParam1->f_24), 4);
				aggregate.bandana.func_26(&(iParam1->f_24), 8);
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 1);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.bandana.func_26(&(iParam1->f_24), 2);
				aggregate.bandana.func_26(&(iParam1->f_24), 128);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 3);
			}
			break;
		case 1:
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 2048) && aggregate.annesburg.func_142(Global_35, (Global_1956178->f_7[&Global_40.f_4439[func_110(uParam0->f_1)] /*31*/])->f_4, 1, 0))
			{
				aggregate.bandana.func_26(&(iParam1->f_24), 2048);
			}
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 1024))
			{
				switch (func_110(uParam0->f_1))
				{
					case 3:
						if (ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(func_368(func_110(uParam0->f_1)))) && ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[3 /*3*/])) > 0.5f)
						{
							aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_369(func_110(uParam0->f_1)), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
							aggregate.bandana.func_26(&(iParam1->f_24), 1024);
						}
						break;
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::_0x3FBC3F51BF12DFBF(&(iParam1->f_10[3 /*3*/])) > 0.4f)
						{
							aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_369(func_110(uParam0->f_1)), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
							aggregate.bandana.func_26(&(iParam1->f_24), 1024);
						}
						break;
				}
			}
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 16) && func_110(uParam0->f_1) == 3)
			{
				if ((aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 8) && ANIMSCENE::_0x1F0E401031E20146(&(iParam1->f_10[3 /*3*/]), func_220(5))) && !bParam2)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, &(iParam1->f_10[3 /*3*/])))
					{
						aggregate.bigvalley_population.func_16(1015669983);
						aggregate.bandana.func_26(&(iParam1->f_24), 16);
					}
				}
			}
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 512) && aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 2048))
			{
				if (((!Global_1956178->f_1324 && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && aggregate.fishing_core.func_161(&(iParam1->f_59)) > 25f) && !bVar0)
				{
					aggregate.bandana.func_26(&(iParam1->f_24), 512);
					func_217(iParam1, 12);
					aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				}
			}
			if (!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 256) && aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 2048))
			{
				if (((Global_1956178->f_1324 && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && aggregate.fishing_core.func_161(&(iParam1->f_59)) > 25f) && !bVar0)
				{
					aggregate.bandana.func_26(&(iParam1->f_24), 256);
					func_217(iParam1, 14);
					aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				}
			}
			if (!Global_1956178->f_1323)
			{
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 2);
			}
			if (func_111(func_110(uParam0->f_1)) && !Global_1956178->f_1323)
			{
				func_370(iParam1);
				func_217(iParam1, 10);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 0);
			}
			break;
		case 2:
			if ((((!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 64) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !Global_1956178->f_1323) && aggregate.fishing_core.func_161(&(iParam1->f_59)) > 30f) && !func_111(func_110(uParam0->f_1)))
			{
				func_217(iParam1, 15);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.bandana.func_26(&(iParam1->f_24), 64);
			}
			if ((((aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 64) && iParam1->f_28 < 3) && aggregate.broom_scenario.func_29(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_29))) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_367(func_110(uParam0->f_1)), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_370(iParam1);
				func_217(iParam1, 10);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 0);
			}
			break;
		case 3:
			if (((!aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 64) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0)) && !Global_1956178->f_1323) && !func_111(func_110(uParam0->f_1)))
			{
				func_217(iParam1, 15);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.bandana.func_26(&(iParam1->f_24), 64);
			}
			if (((aggregate.aberdeenpigfarm.func_175(iParam1->f_24, 64) && iParam1->f_28 < 3) && aggregate.broom_scenario.func_29(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_29))) && aggregate.annesburg.func_142(Global_35, &(iParam1->f_51[3]), 1, 0))
			{
				aggregate.fme_condor_egg.func_1100(uParam0->f_182, func_367(func_110(uParam0->f_1)), 291934926, Global_35, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_370(iParam1);
				func_217(iParam1, 10);
				aggregate.coffee_drinking.func_5(&(iParam1->f_3), 4);
				aggregate.barcustomer_interaction.func_43(&(iParam1->f_59));
				aggregate.coffee_drinking.func_5(&(iParam1->f_6), 0);
			}
			break;
	}
}

bool func_229(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_230(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, true);
}

char* func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
				default:
					break;
			}
			break;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 6:
		case 7:
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (aggregate.bandana.func_23(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
					return "WELCOME";
				case 1:
					return "WELCOME_MALE";
				case 2:
					return "WELCOME_FEMALE";
				default:
					break;
			}
			break;
		case 8:
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (aggregate.bandana.func_23(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
				default:
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
				default:
					break;
			}
			break;
	}
	return "WELCOME";
}

void func_232(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 4:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				aggregate.fm_mission_controller.func_736(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235);
			}
			break;
		case 1:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				aggregate.fm_mission_controller.func_736(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235);
			}
			break;
		case 2:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				aggregate.fm_mission_controller.func_736(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235);
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				iParam0->f_40 = 0;
				aggregate.fm_mission_controller.func_736(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0, -142743235);
			}
			break;
		case 3:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				aggregate.fm_mission_controller.func_736(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235);
			}
			break;
	}
}

void func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	var uVar6[1];
	struct<10> Var8;

	uVar6[0] = uParam0->f_182;
	iVar0 = aggregate.net_fetch.func_1893(&uVar2, &uVar6, 3, Global_36, 50f, 0, 0, 0, func_376(uParam0->f_188), 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uVar2[iVar1])) && !ENTITY::IS_ENTITY_DEAD(&(uVar2[iVar1]))) && !LAW::_0x40851BCC33ACD9AB(&(uVar2[iVar1])))
		{
			Var8 = Global_35;
			Var8.f_3 = { Global_36 };
			Var8.f_6 = func_378();
			Var8.f_9 = 1;
			Var8.f_2 = -1810065318; /* GXTEntry: "Disturbing the Peace" */
			Var8.f_1 = &uVar2[iVar1];
			Var8.f_8 = 1;
			Var8.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(&(uVar2[iVar1]), &Var8);
			aggregate.nb_graverobber.func_303(&(uVar2[iVar1]), Global_36, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uVar2[iVar1]), Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
}

void func_236(var uParam0, int iParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[0 /*3*/]));
	}
	iParam1->f_10[3 /*3*/] = -1;
	(iParam1->f_10[3 /*3*/])->f_1 = 0;
	iParam1->f_5 = -1;
	iParam1->f_4 = -1;
	func_88(uParam0, 0);
	func_370(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam1->f_45[2])))
	{
		OBJECT::DELETE_OBJECT(iParam1->f_45[2]);
	}
	if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[0 /*3*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[0 /*3*/]));
	}
	iParam1->f_10[0 /*3*/] = -1;
	(iParam1->f_10[0 /*3*/])->f_1 = 0;
	if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[1 /*3*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[1 /*3*/]));
	}
	iParam1->f_10[1 /*3*/] = -1;
	(iParam1->f_10[1 /*3*/])->f_1 = 0;
	if (ANIMSCENE::_0x25557E324489393C(&(iParam1->f_10[2 /*3*/])))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(&(iParam1->f_10[2 /*3*/]));
	}
	iParam1->f_10[2 /*3*/] = -1;
	(iParam1->f_10[2 /*3*/])->f_1 = 0;
}

Vector3 func_274(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 2546.542f, -1300.307f, 49.53876f;
		case 278:
			return 2697.939f, -1352.872f, 49.41832f;
		case 33:
			return -351.5715f, 700.468f, 118.3245f;
		case 519:
			return -777.8935f, -1362.579f, 45.98574f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_280(bool bParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		return;
	}
	if (Global_26387)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, bParam0);
}

struct<11> func_284(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 2537.884f, -1278.321f, 48.21795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4f, 4f, 5f };
			Var0.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			Var0.f_10 = 665633627;
			break;
		case 1:
			Var0 = { 2540.43f, -1280.87f, 48.01795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 2f, 2f, 4f };
			Var0.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			Var0.f_10 = 665633627;
			break;
		case 2:
			Var0 = { 2540.47f, -1280.896f, 49.50146f };
			Var0.f_3 = { 0f, 0f, -135.6275f };
			Var0.f_6 = { 2.411322f, 2.714174f, 3.024515f };
			Var0.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			Var0.f_10 = -1612834106;
			break;
		case 3:
			Var0 = { 2538.789f, -1279.76f, 49.71677f };
			Var0.f_3 = { 0f, 0f, 11.90726f };
			Var0.f_6 = { 3.5f, 3.5f, 1.642595f };
			Var0.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			Var0.f_10 = 665633627;
			break;
	}
	return Var0;
}

void func_285(var uParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
	}
}

int func_334(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	int iVar14;

	if (!Global_1939168->f_21 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = aggregate.dynamic_craft_scenario.func_370(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					if (iVar1 == iParam0)
					{
						return 0;
					}
				}
				bVar2 = aggregate.binoculars.func_28(PLAYER::PLAYER_PED_ID(), 0);
				if (aggregate.bandana.func_71(bVar2) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return 0;
				}
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar14, false) && PED::WAS_PED_SKELETON_UPDATED(iVar14))
					{
						vVar3 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
					}
				}
				vVar6 = { aggregate.fme_animal_tagging.func_539(0) };
				vVar9 = { aggregate.ambient_fishing_scenario.func_26(vVar3 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar12 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.x, vVar9.y, vVar6.x, vVar6.y));
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.y, vVar9.z, vVar6.y, vVar6.z));
				if (fVar12 < fParam1)
				{
					if (fVar13 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

char* func_367(int iParam0)
{
	int iVar0;

	if (func_111(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		if (iVar0 < 5)
		{
			return "HANGING_AROUND_NO_PURCHASE";
		}
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}
	return "TAKE_YOUR_TIME";
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 5;
		case 4:
			return 4;
		case 3:
			return 5;
	}
	return 5;
}

char* func_369(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
		default:
			break;
	}
	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_370(int iParam0)
{
	iParam0->f_26 = 0;
	iParam0->f_27 = 1;
	iParam0->f_28 = 0;
	iParam0->f_29 = 1;
	aggregate.bandana.func_26(&(iParam0->f_24), 8);
	aggregate.bandana.func_26(&(iParam0->f_24), 2);
	aggregate.bandana.func_26(&(iParam0->f_24), 32);
	aggregate.bandana.func_26(&(iParam0->f_24), 128);
	aggregate.bandana.func_26(&(iParam0->f_24), 256);
	aggregate.bandana.func_26(&(iParam0->f_24), 512);
	aggregate.bandana.func_26(&(iParam0->f_24), 16);
	aggregate.bandana.func_26(&(iParam0->f_24), 1024);
	aggregate.bandana.func_26(&(iParam0->f_24), 64);
	aggregate.bandana.func_26(&(iParam0->f_24), 2048);
	aggregate.bandana.func_26(&(iParam0->f_24), 16384);
	aggregate.bandana.func_26(&(iParam0->f_24), 8192);
}

bool func_376(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -7009108;
		case 81:
			return 99634802;
		case 40:
			return 10098011;
		default:
			break;
	}
	return -1;
}

var func_378()
{
	return Global_1938075->f_26;
}

