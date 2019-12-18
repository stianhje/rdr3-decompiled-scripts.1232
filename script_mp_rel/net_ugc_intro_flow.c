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
	struct<16> Local_16 = { 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56[1] = { 0 };
	bool bLocal_58 = false;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75[4] = { 0, 0, 0, 0 };
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	var uLocal_184 = 0;
#endregion

void __EntryFunction__()
{
	char cVar0[32];

	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate_func_8669(512);
	if (aggregate_func_8103(-2147483648))
	{
		bLocal_35 = true;
	}
	else if (aggregate_func_8103(1073741824 /* Float: 2f */))
	{
		bLocal_36 = true;
	}
	Global_1049227 = 1;
	aggregate_func_7922();
	aggregate_func_1258(&Local_16, 0, 1);
	aggregate_func_991(&Local_16, 0);
	Local_16.f_2 = -956723401;
	iLocal_32 = PLAYER::PLAYER_ID();
	iLocal_33 = PLAYER::GET_PLAYER_PED(iLocal_32);
	iLocal_37 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_PhotoToScene");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_37);
	iLocal_38 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_38);
	StringCopy(&cVar0, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
	{
		cVar0 = { Global_3145858->f_41471 };
	}
	AUDIO::PREPARE_MUSIC_EVENT(&cVar0);
	while (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_6())
	{
		if (func_7())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
			if (!aggregate_func_5349(16))
			{
				if (func_9())
				{
					func_10();
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
				}
			}
			else
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2133234167) == 0)
				{
					aggregate_func_8094(0);
				}
				bLocal_44 = true;
				if (func_9())
				{
					func_10();
				}
			}
		}
		else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2133234167) != 0)
		{
		}
		else if (func_11() && func_9())
		{
		}
		BUILTIN::WAIT(0);
	}
	AUDIO::_0x2E399EAFBEEA74D5();
	func_16();
	aggregate_func_6539(1);
	Global_1049227 = 0;
	aggregate_func_2819();
}

bool func_6()
{
	if (aggregate_func_6493() == 7)
	{
		return true;
	}
	if (aggregate_func_523(1, 1))
	{
		return true;
	}
	if (aggregate_func_8103(64))
	{
		return true;
	}
	if (aggregate_func_8103(512))
	{
		HUD::_0x8BC7C1F929D07BF3(690901814);
		return true;
	}
	return false;
}

bool func_7()
{
	if (aggregate_func_8103(2) && !MISC::IS_BIT_SET(iLocal_46, 1))
	{
		MISC::SET_BIT(&iLocal_46, 1);
		HUD::_0x8BC7C1F929D07BF3(128623374);
	}
	return MISC::IS_BIT_SET(iLocal_46, 1);
}

bool func_9()
{
	if (!HUD::_0xD0976CC34002DB57("UIC"))
	{
		HUD::_0xF66090013DE648D5("UIC");
	}
	else
	{
		return true;
	}
	iLocal_45++;
	if (iLocal_45 > 100)
	{
		return true;
	}
	return false;
}

void func_10()
{
	if (!aggregate_func_8103(268435456) && !MISC::IS_BIT_SET(iLocal_46, 5))
	{
		aggregate_func_8657(32768);
		aggregate_func_7380(1);
		AUDIO::_0x9B1FC259187C97C0("loading_black_white");
		SCRIPTS::_0x1E5B70E53DB661E5(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		MISC::SET_BIT(&iLocal_46, 5);
		aggregate_func_991(&Local_16, 1);
	}
}

bool func_11()
{
	if (bLocal_47)
	{
		return true;
	}
	if (!aggregate_func_1277(&Local_16))
	{
		return false;
	}
	if (aggregate_func_4287(&uLocal_48))
	{
		if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_37) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_38))
		{
			bLocal_47 = true;
			return true;
		}
		else if (aggregate_func_646(&uLocal_48, 0, 0) > 30000)
		{
			return true;
		}
	}
	else
	{
		aggregate_func_1181(&uLocal_48, 0, 0);
	}
	return false;
}

void func_12()
{
	int iVar0;
	int iVar1;

	CAM::_0x8910C24B7E0046EC();
	if (!Global_1939057->f_19)
	{
		aggregate_func_6539(0);
	}
	if (!aggregate_func_8103(256))
	{
		iVar0 = 14;
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if ((iVar1 != 1 && iVar1 != 13) && iVar1 != 4)
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(iVar1, 1, 1);
			}
			iVar1++;
		}
	}
	aggregate_func_853();
	if (Global_1939221->f_1)
	{
		Global_1939221 = 2;
	}
	if (Global_1896726->f_382)
	{
		aggregate_func_5048(0);
	}
}

void func_13()
{
	func_38(&Local_16);
	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				MISC::SET_BIT(&(Global_1956121->f_1), 5);
				func_39();
				if (!aggregate_func_8710())
				{
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
				}
				HUD::_0x4CC5F2FC1332577F(690901814);
				if (aggregate_func_8103(268435456))
				{
					if (!aggregate_func_8103(262144))
					{
						if (!aggregate_func_7889())
						{
							CAM::DO_SCREEN_FADE_OUT(1000);
						}
						aggregate_func_5070(1);
					}
				}
				else
				{
					func_44(&Local_16, func_29(), func_30(), aggregate_func_1976(Global_3145858->f_84));
				}
				GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_37);
				aggregate_func_4627(1);
			}
			break;
		case 1:
			if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
			{
				AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
			}
			aggregate_func_4627(2);
			if (aggregate_func_8103(262144) || !aggregate_func_8103(268435456))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(750);
				}
			}
			break;
		case 2:
			if (aggregate_func_8103(256) || aggregate_func_8103(262144))
			{
				aggregate_func_4627(5);
			}
			else if (aggregate_func_8103(4))
			{
				if (!aggregate_func_8103(268435456))
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				GRAPHICS::RESET_PAUSED_RENDERPHASES();
				aggregate_func_4627(3);
			}
			break;
		case 3:
			if ((aggregate_func_8103(8) && (ENTITY::IS_ENTITY_VISIBLE(iLocal_33) || bLocal_52)) && &Global_262154 != -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 6))
				{
					func_46();
					MISC::SET_BIT(&iLocal_46, 6);
				}
				if (func_47())
				{
					if (!aggregate_func_8103(4096))
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, &Global_262154, true);
					}
					aggregate_func_4238();
					if (MISC::IS_BIT_SET(iLocal_46, 9))
					{
						func_49(0);
					}
					aggregate_func_4627(4);
				}
			}
			else if (&Global_262154 == -1)
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_33))
			{
				if (!aggregate_func_4287(&uLocal_50))
				{
					aggregate_func_1181(&uLocal_50, 0, 0);
				}
				else if (aggregate_func_646(&uLocal_50, 0, 0) > 60000)
				{
					bLocal_52 = true;
				}
			}
			break;
		case 4:
			if (aggregate_func_8103(16))
			{
				aggregate_func_4627(5);
			}
			else
			{
				func_50();
			}
			break;
		case 5:
			func_51(&Local_16);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
			if (!aggregate_func_7889())
			{
				HUD::_0x8BC7C1F929D07BF3(690901814);
			}
			aggregate_func_4627(6);
			break;
		case 6:
			if (aggregate_func_8103(1024))
			{
				func_16();
			}
			break;
		case 7:
			break;
	}
}

void func_14()
{
	if (!bLocal_39)
	{
		if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_38))
		{
			if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_38, 2, 0, &uLocal_40))
			{
				if (AUDIO::_0xE368E8422C860BA7("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					aggregate_func_991(&Local_16, 1);
					AUDIO::_0x9B1FC259187C97C0("photograph");
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
				}
			}
		}
	}
}

void func_16()
{
	int iVar0;
	char cVar1[32];

	if (aggregate_func_6493() == 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar0], true, true);
			}
			PED::DELETE_PED((*Global_1049161)[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar0], true, true);
			}
			PED::DELETE_PED((*Global_1049194)[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (CAM::DOES_CAM_EXIST(&(iLocal_53[iVar0])))
		{
			CAM::SET_CAM_ACTIVE(&(iLocal_53[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		(*Global_1049161)[iVar0] = aggregate_func_5127();
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(&(iLocal_56[0])))
	{
		CAM::SET_CAM_ACTIVE(&(iLocal_56[0]), false);
	}
	SCRIPTS::_0x778D4733E0F2F265(1);
	if (!aggregate_func_8710())
	{
		Global_1070355->f_27136.f_8.f_10 = 0;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if ((MISC::IS_BIT_SET(iLocal_46, 3) && iLocal_42 != -1) && (Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1)
	{
		CAM::_0x2412216FCC7B4E3E(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]);
	}
	if (iLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_182)
			{
				GRAPHICS::_0x71845905BCCDE781(iLocal_37);
			}
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_37);
		}
		if (bLocal_182)
		{
			GRAPHICS::_0x71845905BCCDE781(iLocal_38);
		}
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_37);
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_38);
		iLocal_37 = 0;
	}
	if (!aggregate_func_8103(4096) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
		}
	}
	AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
	aggregate_func_8659();
	aggregate_func_5070(0);
	func_56();
	StringCopy(&cVar1, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
	{
		cVar1 = { Global_3145858->f_41471 };
	}
	AUDIO::CANCEL_MUSIC_EVENT(&cVar1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	aggregate_func_988(&Local_16);
	Global_1049239 = -1;
	Global_262154 = -1;
	MISC::CLEAR_BIT(&(Global_1956121->f_1), 5);
	aggregate_func_7380(0);
	aggregate_func_4627(7);
}

int func_26()
{
	if ((Global_3145858->f_1 > -1 && Global_3145858->f_1 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_1 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_1 /*18*/]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_39792)
		{
			case -915869673:
				return 1122662550;
			case -360644098:
				return 506919947;
			case -1649482077:
				return 55577806;
			case -163684180:
				return -2093919847;
			case -777132493:
				return -1567074128;
			case -698288936:
				return -1277009905;
			case 909765192:
				return 1730145250;
			case 534981680:
				return -773971986;
			case 1520184724:
				return 1914027275;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 1088509777;
			case -1437925683:
			case 1272390114:
				return -1482087471;
			case -725256130:
				return 478789200;
			case -222655798:
				return -1863716933;
			case -559809431:
				return -679566803;
			case -1918441640:
			case 1153715636:
				return 1315254565;
			case -1581094459:
				return 1468907451;
			case -457802746:
				return -274237802;
			default:
				break;
		}
		return -240997098;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -938054684;
			case 218185167:
				return -1684650239;
			case -1185533313:
				return 1744089234;
			case 1744858848:
				return 1646695636;
			default:
				break;
		}
		return -1288350710;
	}
	return -274237802;
}

int func_27()
{
	if ((Global_3145858->f_2 > -1 && Global_3145858->f_2 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_2 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_2 /*18*/]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_39792)
		{
			case -915869673:
				return 347053089;
			case -360644098:
				return 267476864;
			case -1649482077:
				return 263267728;
			case -163684180:
				return 1618086939;
			case -777132493:
				return -1263403805;
			case -698288936:
				return 1269272475;
			case 909765192:
				return 932383945;
			case 534981680:
				return -31655829;
			case 1520184724:
				return -2122032152;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 307231279;
			case -1437925683:
			case 1272390114:
				return -53621227;
			case -725256130:
				return 1597260708;
			case -222655798:
				return 1586694926;
			case -559809431:
				return -913897922;
			case -1918441640:
			case 1153715636:
				return -1544168383;
			case -1581094459:
				return 1168382952;
			case -457802746:
				return -1964987130;
			default:
				break;
		}
		return -480997254;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -1177563305;
			case 1744858848:
				return 868825114;
			case 218185167:
				return 419480024;
			case -1185533313:
				return 2031571671;
			default:
				break;
		}
		return 103021030;
	}
	return -1964987130;
}

int func_28()
{
	if ((Global_3145858->f_3 > -1 && Global_3145858->f_3 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_3 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_3 /*18*/]);
	}
	return 2;
}

char[] func_29()
{
	if (bLocal_35)
	{
		return aggregate_func_736(Global_524288->f_39792, &(Global_3145858->f_11));
	}
	else if (bLocal_36)
	{
		return HUD::_GET_LABEL_TEXT(aggregate_func_9485(Global_2359296->f_155));
	}
	else
	{
		return HUD::_GET_LABEL_TEXT(aggregate_func_8733(Global_2097152->f_32));
	}
	return "GAME MODE NAME HERE";
}

char* func_30()
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_100)))
	{
		return aggregate_func_4865(&(Global_3145858->f_100));
	}
	iVar0 = Global_3145858->f_41529;
	if (iVar0 == -1)
	{
		iVar0 = aggregate_func_3339(Global_3145858->f_188, 1);
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return aggregate_func_5(iVar0);
}

char* func_31()
{
	struct<16> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_84)))
	{
		Var0 = { Global_3145858->f_84 };
		return aggregate_func_4865(&Var0);
	}
	return " ";
}

int func_38(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		aggregate_func_1277(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

void func_39()
{
	Global_1070355->f_27136.f_1 = 1;
	Global_1070355->f_27136.f_62.f_30 = 1;
	Global_1070355->f_27136.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_44(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "largeHeader", sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "subHeader", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "body", sParam3);
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (&Global_1049239 != -1)
	{
		iVar1 = (&Global_1049239 / 32);
		iVar2 = (&Global_1049239 % 32);
		iVar0 = 0;
		while (iVar0 <= Global_3145858->f_38604)
		{
			if (MISC::IS_BIT_SET(&((Global_3145858->f_38605[iVar0 /*22*/])->f_16[iVar1]), iVar2))
			{
				iLocal_42 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_42 < 0 || iLocal_42 >= 32)
		{
			iLocal_42 = 0;
		}
	}
	else
	{
		iLocal_42 = 0;
	}
	iLocal_41 = PLAYER::GET_PLAYER_TEAM(iLocal_32);
	if (&Global_1049227)
	{
		MISC::SET_BIT(&iLocal_46, 7);
		MISC::SET_BIT(&iLocal_46, 10);
	}
	if (&Global_1049228 == 0)
	{
		MISC::SET_BIT(&iLocal_46, 8);
	}
	else if (&Global_1049228 == 1)
	{
		MISC::SET_BIT(&iLocal_46, 9);
	}
	Global_1049228 = -1;
	if (iLocal_41 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET((Global_3145858->f_38187[iVar0 /*13*/])->f_7, iLocal_41))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_43 < 0)
		{
			iLocal_43 = 0;
		}
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		iVar1 = (&Global_1049239 / 32);
		iVar2 = (&Global_1049239 % 32);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(&((Global_3145858->f_38187[iVar0 /*13*/])->f_8[iVar1]), iVar2))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!aggregate_func_8103(8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049161[0]))
		{
			return false;
		}
		else if (iLocal_60 == -1)
		{
			if (MISC::IS_BIT_SET(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]))
				{
					sLocal_61 = "script@mp@introflow@soloonhorse";
				}
				else
				{
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}
	if (iLocal_60 == -1)
	{
		iLocal_60 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_61, 130, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_60);
	}
	if (ANIMSCENE::_0x477122B8D05E7968(iLocal_60, 1, 0))
	{
		if (MISC::IS_BIT_SET(iLocal_46, 7))
		{
			if ((!bLocal_36 && !bLocal_35) && !aggregate_func_8103(268435456))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGVariation_Int", iVar0, false);
			}
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar1, false);
		}
		else
		{
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar3 = 0;
			while (iVar3 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar3]))
				{
					iVar4++;
				}
				iVar3++;
			}
			if (iVar4 <= 4)
			{
				MISC::SET_BIT(&iLocal_46, 10);
				iVar2 = (1 + iVar5);
			}
			else if (iVar4 <= 8)
			{
				iVar2 = (11 + iVar5);
			}
			else
			{
				iVar2 = (21 + iVar5);
			}
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar2, false);
		}
		return true;
	}
	return false;
}

void func_49(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
		{
		}
		else if (!PED::_0xA0BC8FAED8CFEB3C(Global_1049161[iVar0]))
		{
		}
		else
		{
			PED::_0x13A210949FCBD92B(Global_1049161[iVar0], iParam0);
		}
		iVar0++;
	}
}

void func_50()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	char cVar11[32];
	bool bVar15;

	func_71();
	if (iLocal_14 < 6)
	{
		CAM::_0x05AB44D906738426();
	}
	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				func_72();
				return;
			}
			if ((Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1 && (MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]) || MISC::IS_STRING_NULL_OR_EMPTY(&((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8))))
			{
				if (aggregate_func_4268(*(Global_3145858->f_38605[iLocal_42 /*22*/])) || !func_74(*(Global_3145858->f_38605[iLocal_42 /*22*/])))
				{
					func_72();
				}
				else
				{
					aggregate_func_4627(1);
				}
			}
			else
			{
				aggregate_func_4627(1);
			}
			break;
		case 1:
			if (func_76())
			{
				bLocal_34 = true;
			}
			if (CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
			{
				CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				aggregate_func_4627(2);
			}
			else if (func_77())
			{
				if (func_78())
				{
					if (func_79())
					{
						if (!MISC::IS_BIT_SET(iLocal_46, 3))
						{
							CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						}
						aggregate_func_4627(2);
					}
				}
			}
			break;
		case 2:
			if (func_80())
			{
				aggregate_func_2144(8388608);
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						iVar8 = (Global_3145858->f_38605[iLocal_42 /*22*/])->f_15;
						iVar9 = (Global_3145858->f_38605[iLocal_42 /*22*/])->f_14;
					}
					else
					{
						iVar8 = 3750;
						iVar9 = 1;
					}
					CAM::SET_CAM_ACTIVE_WITH_INTERP(&(iLocal_53[1]), &(iLocal_53[0]), iVar8, iVar9, 1);
					aggregate_func_1181(&uLocal_63, 0, 0);
				}
				else
				{
					func_82(0);
					CAM::_0xBC016635D6A73B31(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 5);
					iLocal_62 = CAM::_0x465F04F68AD38197(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 5);
					aggregate_func_1181(&uLocal_63, 0, 0);
				}
				if (bLocal_34)
				{
					iVar10 = 0;
					while (iVar10 <= 31)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar10]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049161[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049161[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar10], true, true);
							}
							PED::DELETE_PED((*Global_1049161)[iVar10]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar10]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049194[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049194[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar10], true, true);
							}
							PED::DELETE_PED((*Global_1049194)[iVar10]);
						}
						iVar10++;
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					aggregate_func_4627(3);
				}
				else
				{
					bLocal_182 = true;
					GRAPHICS::_0x71845905BCCDE781(iLocal_37);
					GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_38);
					aggregate_func_4627(4);
				}
			}
			else if (!bLocal_81)
			{
				func_83();
				bLocal_81 = true;
			}
			else if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_37) && AUDIO::_0xE368E8422C860BA7("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
			}
			else if (!MISC::IS_BIT_SET(iLocal_46, 4))
			{
				if (!SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
				{
					if (MISC::IS_BIT_SET(iLocal_46, 3))
					{
						MemCopy(&cVar0, {(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						CAM::_0xBC016635D6A73B31(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &cVar0, 5);
					}
					if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
					{
						StringCopy(&cVar11, "MP_ADV_INTRO_OS", 32);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
						{
							cVar11 = { Global_3145858->f_41471 };
						}
						AUDIO::TRIGGER_MUSIC_EVENT(&cVar11);
					}
					GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_37);
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
					MISC::SET_BIT(&iLocal_46, 4);
				}
			}
			break;
		case 3:
			aggregate_func_8657(65536);
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[1]))))
			{
				if (IntToFloat(aggregate_func_646(&uLocal_63, 0, 0)) > (IntToFloat((Global_3145858->f_38605[iLocal_42 /*22*/])->f_15) * 0.9f))
				{
					func_84();
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3) && aggregate_func_646(&uLocal_63, 0, 0) < iLocal_62)
			{
				if (IntToFloat(aggregate_func_646(&uLocal_63, 0, 0)) > (IntToFloat(iLocal_62) * 0.9f))
				{
					func_84();
				}
			}
			else
			{
				if (!aggregate_func_8103(4096))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
						if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
						{
							PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
						}
					}
					else
					{
						bVar15 = true;
					}
				}
				else
				{
					bVar15 = true;
				}
				if (bVar15)
				{
					if (!MISC::IS_BIT_SET(iLocal_46, 3))
					{
						CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), false);
						CAM::SET_CAM_ACTIVE(&(iLocal_53[1]), false);
						CAM::SET_CAM_ACTIVE(&(iLocal_56[0]), true);
					}
					else
					{
						MemCopy(&cVar0, {(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						CAM::_0xA54D643D0773EB65(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &cVar0, 5);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
					}
					TASK::CLEAR_PED_TASKS(iLocal_33, 1, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					aggregate_func_4627(5);
				}
			}
			break;
		case 4:
			func_85();
			break;
		case 5:
			if (aggregate_func_4287(&uLocal_65))
			{
				if (aggregate_func_8103(128) && aggregate_func_646(&uLocal_65, 0, 0) > 1500)
				{
					GRAPHICS::_0xC5CB91D65852ED7E("RespawnMissionCheckpoint");
					func_82(0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					STREAMING::END_SRL();
					aggregate_func_4627(7);
				}
			}
			else
			{
				aggregate_func_1181(&uLocal_65, 0, 0);
			}
			break;
		case 6:
			if (bLocal_82 || func_80())
			{
				bLocal_82 = true;
				if (aggregate_func_8103(128))
				{
					func_82(0);
					aggregate_func_4627(7);
				}
			}
			break;
		case 7:
			if (!aggregate_func_8103(16))
			{
				func_86();
			}
			break;
	}
}

void func_51(var uParam0)
{
	var uVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0) && UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
		{
			UISTATEMACHINE::_0x6B9FE4F0BA521A19(*uParam0, 0);
			MISC::SET_BIT(&(uParam0->f_15), 1);
		}
	}
	else if (!UISTATEMACHINE::_0x11E73195E735B25B(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 1);
	}
}

void func_56()
{
	Global_1070355->f_27136.f_1 = 0;
	Global_1070355->f_27136.f_2 = 0;
}

void func_71()
{
	if (iLocal_14 > 0 && iLocal_15 < 3)
	{
	}
}

void func_72()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (!CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
	{
		if (!aggregate_func_4268(Global_3145858->f_108) && func_74(Global_3145858->f_108))
		{
			func_93(Global_3145858->f_108, Global_3145858->f_111, Global_3145858->f_114);
		}
		else
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_33, 21030, 0f, 0.65f, 0f) };
			vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_33, 0) };
			func_93(vVar0, vVar3, 1110704128 /* Float: 45f */);
		}
	}
	if (func_94())
	{
		bVar6 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar7 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_95(&iLocal_33, bVar6, bVar7, 0);
		func_82(0);
		iLocal_53[0] = &iLocal_53[1];
		CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		aggregate_func_4627(1);
	}
}

bool func_74(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { aggregate_func_1977(iLocal_32) };
	fVar3 = BUILTIN::VDIST2(vParam0, vVar0);
	if (fVar3 <= 10000f)
	{
		return true;
	}
	return false;
}

bool func_76()
{
	if (iLocal_43 == -1)
	{
		return true;
	}
	if (aggregate_func_4268(func_97()))
	{
		return true;
	}
	if (!func_74(func_97()))
	{
		return true;
	}
	return false;
}

bool func_77()
{
	if (aggregate_func_4268(*(vLocal_83[0 /*3*/])))
	{
		func_98();
	}
	else
	{
		return true;
	}
	return false;
}

bool func_78()
{
	char cVar0[16];

	if (iLocal_180 < func_99())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iLocal_180]))
		{
			if (iLocal_180 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_60, func_97(), func_100(), 0);
				if (MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (bLocal_36 || bLocal_35)
					{
						func_101(Global_1049161[0]);
					}
					else
					{
						func_102(Global_1049161[0]);
					}
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iLocal_180], true, true);
			if (PED::IS_PED_MALE(Global_1049161[iLocal_180]))
			{
				StringCopy(&cVar0, "Ped_M_", 16);
			}
			else
			{
				StringCopy(&cVar0, "Ped_F_", 16);
			}
			StringIntConCat(&cVar0, iLocal_180, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049161[iLocal_180], 0);
			if (PED::IS_PED_ON_MOUNT(Global_1049161[iLocal_180]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iLocal_180], true, true);
				StringCopy(&cVar0, "Horse_", 16);
				StringIntConCat(&cVar0, iLocal_180, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049194[iLocal_180], 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 8))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1049161[iLocal_180]))
					{
						func_103(Global_1049161[iLocal_180], iLocal_180);
					}
					else
					{
						func_104(Global_1049161[iLocal_180], iLocal_180);
					}
				}
			}
			iLocal_180++;
			return false;
		}
	}
	else if (iLocal_180 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iLocal_180]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iLocal_180], true, true);
			PED::DELETE_PED((*Global_1049161)[iLocal_180]);
			iLocal_180++;
			return false;
		}
	}
	return true;
}

bool func_79()
{
	char cVar0[128];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;

	if (!func_94())
	{
		return false;
	}
	if (((!bLocal_80 && (Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])) && !MISC::IS_STRING_NULL_OR_EMPTY(&((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8)))
	{
		if (!CAM::_0xAA235E2F2C09E952(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]))
		{
			if (!CAM::_0x595550376B7EA230(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]))
			{
				CAM::_0x1B3C2D961F5FC0E1(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]);
				StringCopy(&cVar0, "mp@establishers@", 128);
				StringConCat(&cVar0, &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 128);
				StringConCat(&cVar0, "_SRL", 128);
				STREAMING::PREFETCH_SRL(&cVar0);
			}
			if (!aggregate_func_4287(&uLocal_73))
			{
				aggregate_func_1181(&uLocal_73, 0, 0);
			}
			else if (aggregate_func_646(&uLocal_73, 0, 0) > 5000)
			{
				bLocal_80 = true;
			}
			return false;
		}
		else
		{
			MISC::SET_BIT(&iLocal_46, 3);
		}
	}
	else if (!CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
	{
		if (aggregate_func_4268(*(Global_3145858->f_38605[iLocal_42 /*22*/])) || aggregate_func_4268((Global_3145858->f_38605[iLocal_42 /*22*/])->f_3))
		{
			vVar16 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			vVar19 = { Global_3145858->f_188 };
			vVar19.f_2 = (vVar19.z + 5f);
			func_93(vVar19, vVar16, 1110704128 /* Float: 45f */);
		}
		else
		{
			iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, *(Global_3145858->f_38605[iLocal_42 /*22*/]), (Global_3145858->f_38605[iLocal_42 /*22*/])->f_6, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_12, false, 2);
			iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_3, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_9, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_13, false, 2);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_46, 3))
	{
		if (!STREAMING::IS_SRL_LOADED())
		{
			return false;
		}
		else
		{
			STREAMING::_0xD9F2FF4AF394D926();
			STREAMING::BEGIN_SRL();
		}
	}
	if (!CAM::DOES_CAM_EXIST(&(iLocal_56[0])))
	{
		bVar22 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar23 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_95(&iLocal_33, bVar22, bVar23, 0);
	}
	return true;
}

bool func_80()
{
	var uVar0;

	if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_37, 2, 0, &uVar0))
	{
		aggregate_func_991(&Local_16, 0);
		AUDIO::_0x9B1FC259187C97C0("landscape_shot");
		return true;
	}
	return false;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	else
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	}
}

void func_83()
{
	func_82(0);
	SCRIPTS::_0x778D4733E0F2F265(0);
}

void func_84()
{
	if (!bLocal_181)
	{
		PED::_0xCB9401F918CB0F75(iLocal_33, "SpawnMissionIntro", true, 20);
		PED::_0x2208438012482A1A(iLocal_33, true, true);
		bLocal_181 = true;
	}
}

void func_85()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_15)
	{
		case 0:
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[1]))))
			{
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3))
			{
				if (aggregate_func_4287(&uLocal_63))
				{
					if (aggregate_func_646(&uLocal_63, 0, 0) > iLocal_62)
					{
						aggregate_func_1181(&uLocal_67, 0, 0);
						func_107();
						aggregate_func_4627(1);
					}
				}
				else
				{
					aggregate_func_1181(&uLocal_63, 0, 0);
				}
			}
			else
			{
				aggregate_func_1181(&uLocal_67, 0, 0);
				func_107();
				aggregate_func_4627(1);
			}
			break;
		case 1:
			if (!bLocal_183)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Global_1049161[iVar0], true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_1049194[iVar0], true);
						}
					}
					iVar0++;
				}
				bLocal_183 = true;
			}
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_ACTIVE(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_ACTIVE(&(iLocal_53[1]))))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), false);
					CAM::SET_CAM_ACTIVE(&(iLocal_53[1]), false);
				}
			}
			else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_60, 0) && ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_60) < 0.825f)
			{
			}
			else
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_38);
				bVar1 = aggregate_func_752(iLocal_32, 1, -1, 1);
				if (MISC::IS_BIT_SET(iLocal_46, 10))
				{
					Local_16.f_2 = 1441775019;
				}
				else
				{
					Local_16.f_2 = -1678669845;
				}
				MISC::CLEAR_BIT(&(Local_16.f_15), 0);
				if (iLocal_41 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY((*Global_3145728)[iLocal_41 /*8*/]))
				{
					aggregate_func_113(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), (*Global_3145728)[iLocal_41 /*8*/], " ", " ", " ", " ", bVar1);
				}
				else
				{
					aggregate_func_113(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), " ", " ", " ", " ", " ", bVar1);
				}
				func_38(&Local_16);
				aggregate_func_1181(&uLocal_67, 0, 0);
				aggregate_func_1181(&uLocal_69, 0, 0);
				aggregate_func_4627(2);
			}
			break;
		case 2:
			aggregate_func_8657(65536);
			if (!aggregate_func_8103(16384))
			{
				iVar2 = aggregate_func_646(&uLocal_69, 0, 0);
				if (iVar2 < 15000)
				{
					if (iVar2 > 6500)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(650);
							aggregate_func_2510(0);
						}
					}
					aggregate_func_1181(&uLocal_67, 0, 0);
					return;
				}
			}
			iVar3 = aggregate_func_646(&uLocal_67, 0, 0);
			if (iVar3 > 6500)
			{
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(650);
				}
			}
			if (iVar3 > 7500)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_60, false);
				iVar4 = 0;
				while (iVar4 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049161[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar4], true, true);
						}
						PED::DELETE_PED((*Global_1049161)[iVar4]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049194[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar4], true, true);
						}
						PED::DELETE_PED((*Global_1049194)[iVar4]);
					}
					iVar4++;
				}
				ANIMSCENE::RESET_ANIM_SCENE(iLocal_60, 0);
				if (!aggregate_func_8103(4096))
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
				}
				if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
				}
				aggregate_func_7071();
				aggregate_func_991(&Local_16, 0);
				if (bLocal_36 || bLocal_35)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
				}
				aggregate_func_4627(3);
			}
			else if (iVar3 > 5000)
			{
				func_84();
			}
			break;
		case 3:
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_38);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(350);
			}
			func_82(0);
			GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
			aggregate_func_8657(131072);
			if (AUDIO::_0xE368E8422C860BA7("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				AUDIO::PLAY_SOUND_FRONTEND("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				AUDIO::_0x9B1FC259187C97C0("gameplay");
			}
			aggregate_func_4627(4);
			break;
		case 4:
			aggregate_func_4627(5);
			break;
	}
}

void func_86()
{
	if (!&iLocal_75[3])
	{
		if (!aggregate_func_4287(&uLocal_71))
		{
			iLocal_75[3] = 1;
			aggregate_func_1181(&uLocal_71, 0, 0);
		}
		else if (aggregate_func_646(&uLocal_71, 0, 0) > 2900)
		{
			iLocal_75[3] = 1;
		}
		else if (!&iLocal_75[2] == 1 && aggregate_func_646(&uLocal_71, 0, 0) > 1800)
		{
			iLocal_75[2] = 1;
		}
		else if (!&iLocal_75[1] == 1 && aggregate_func_646(&uLocal_71, 0, 0) > 900)
		{
			iLocal_75[1] = 1;
		}
	}
	else
	{
		aggregate_func_8657(16);
	}
}

void func_93(vector3 vParam0, vector3 vParam3, float fParam6)
{
	iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vParam3, fParam6, false, 2);
	iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vParam3, fParam6, false, 2);
}

bool func_94()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	var uVar11;
	var uVar14;
	int iVar15;

	if (!bLocal_58)
	{
		if (iLocal_59 == 0)
		{
			iVar0 = 339;
			vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			vVar4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
			iLocal_59 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar4, 0.25f, iVar0, iLocal_33, 4);
		}
		else
		{
			iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_59, &iVar7, &uVar8, &uVar11, &uVar14);
			if (iVar15 == 2)
			{
				if (iVar7 == 0)
				{
				}
				bLocal_58 = true;
			}
			else if (iVar15 == 0)
			{
				bLocal_58 = true;
			}
		}
		return false;
	}
	return true;
}

void func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	iLocal_56[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, 65f, false, 2);
	if (bParam1)
	{
	}
	if (bParam2 || !bParam3)
	{
		return;
	}
}

Vector3 func_97()
{
	return *(Global_3145858->f_38187[iLocal_43 /*13*/]);
}

void func_98()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar1 = ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]);
		*(vLocal_83[iVar0 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(Global_3145858->f_38187[iLocal_43 /*13*/]), (Global_3145858->f_38187[iLocal_43 /*13*/])->f_3.f_2, func_114((Global_3145858->f_38187[iLocal_43 /*13*/])->f_6, iVar0, bVar1)) };
		iVar0++;
	}
}

int func_99()
{
	if (!MISC::IS_BIT_SET(iLocal_46, 7))
	{
		if (bLocal_36 || bLocal_35)
		{
			return 16;
		}
		else
		{
			return 4;
		}
	}
	else if (bLocal_36 || bLocal_35)
	{
		return 1;
	}
	else
	{
		return 4;
	}
	return 0;
}

Vector3 func_100()
{
	return (Global_3145858->f_38187[iLocal_43 /*13*/])->f_3;
}

void func_101(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar4 = (aggregate_func_2841(bVar0) && aggregate_func_2841(bVar1));
	iVar2 = aggregate_func_844(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar3 = 3;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar3 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0))
	{
		iVar3 = 5;
	}
	else if (aggregate_func_2910(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isMale", true, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isFemale", true, false);
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "weapon_Index", iVar3, false);
}

void func_102(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar3 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar4 = (aggregate_func_2841(bVar0) && aggregate_func_2841(bVar1));
	iVar2 = aggregate_func_844(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar3 = 3;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar3 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar3 = 5;
	}
	else if (aggregate_func_2910(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "BGPed_Enable", true, false);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "Weapon_Int", iVar3, false);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGPed_Variation_Int", iVar5, false);
}

void func_103(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar6 = (aggregate_func_2841(bVar0) && aggregate_func_2841(bVar1));
	iVar2 = aggregate_func_844(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 3;
	}
	else if (aggregate_func_2910(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar5 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar5 = 5;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

void func_104(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar6 = (aggregate_func_2841(bVar0) && aggregate_func_2841(bVar1));
	iVar2 = aggregate_func_844(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 3;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar5 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar5 = 5;
	}
	else if (aggregate_func_2910(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0) || (iVar2 == joaat("group_shotgun") && bVar0 == joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

void func_107()
{
	if (iLocal_60 != -1)
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_60);
		AUDIO::_0x9B1FC259187C97C0("player_team_intro");
	}
}

Vector3 func_114(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return -0.6f, 20.4f, 0f;
					case 1:
						return 0.75f, 20.76f, 0f;
					case 2:
						return -3f, 20.6f, 0f;
					case 3:
						return 4.1f, 21.1f, 0f;
					case 4:
						return -6.1f, 21.2f, 0f;
					case 5:
						return 5.6f, 20.5f, 0f;
					case 6:
						return -7.1f, 21.2f, 0f;
					case 7:
						return 7.7f, 20.5f, 0f;
					case 8:
						return 0.3f, 23.9f, 0f;
					case 9:
						return -0.75f, 23.76f, 0f;
					case 10:
						return 3f, 23.2f, 0f;
					case 11:
						return -4.1f, 24.1f, 0f;
					case 12:
						return 6.1f, 24.25f, 0f;
					case 13:
						return -5.6f, 22.75f, 0f;
					case 14:
						return 7.1f, 24.1f, 0f;
					case 15:
						return -7.7f, 22.85f, 0f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 0.3f, 17.4f, 0f;
					case 1:
						return -0.55f, 17.76f, 0f;
					case 2:
						return 1.2f, 17.6f, 0f;
					case 3:
						return -1.3f, 18.1f, 0f;
					case 4:
						return 1.8f, 17.2f, 0f;
					case 5:
						return -1.8f, 17.5f, 0f;
					case 6:
						return 2.1f, 17.2f, 0f;
					case 7:
						return -2.5f, 17.5f, 0f;
					case 8:
						return 0.3f, 19.4f, 0f;
					case 9:
						return -0.75f, 19.76f, 0f;
					case 10:
						return 1.92f, 19.6f, 0f;
					case 11:
						return -1.7f, 20.1f, 0f;
					case 12:
						return 2.8f, 20.2f, 0f;
					case 13:
						return -2.7f, 19.5f, 0f;
					case 14:
						return 3.8f, 20.2f, 0f;
					case 15:
						return -3.9f, 19.5f, 0f;
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

