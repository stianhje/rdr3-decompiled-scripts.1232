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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<234> Var0;
	bool bVar236;
	float fVar237;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_18.f_29 = 1;
	Var0.f_49 = 8;
	Var0.f_49.f_22 = -1;
	Var0.f_49.f_23 = 1;
	Var0.f_49.f_24 = 1;
	Var0.f_49.f_32 = 1;
	Var0.f_49.f_33 = -1;
	Var0.f_49.f_37 = 4;
	Var0.f_49.f_42 = 4;
	Var0.f_49.f_53 = 1;
	Var0.f_139 = 15933;
	Var0.f_143 = -1;
	Var0.f_145 = -1;
	Var0.f_149 = 9;
	Var0.f_165 = -1;
	Var0.f_175 = -1;
	Var0.f_176 = 1;
	Var0.f_187 = 1;
	Var0.f_191 = 1085378666;
	Var0.f_193.f_9 = 1084227584;
	Var0.f_193.f_10 = 1073741824;
	Var0.f_193.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (aggregate_func_523(0, 0) || !TASK::_0x841475AC96E794D1(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_230 = { TASK::_0xA8452DD321607029(vScriptParam_0.y, 1) };
	Var0.f_233 = TASK::_0xB93EA7184BAA85C3(vScriptParam_0.y, 1);
	if (func_3(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar236 = false;
	while (!aggregate_func_523(0, 0) && !bVar236)
	{
		switch (Var0.f_192)
		{
			case 0:
				fVar237 = aggregate_func_1170(Global_35, Var0.f_230, 1);
				if (!aggregate_func_4717() || fVar237 < 6400f)
				{
					Var0.f_187 = 0;
					func_6(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_191, false);
					aggregate_func_4252(&(Var0.f_192), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_191))
				{
					aggregate_func_4252(&(Var0.f_192), 2);
				}
				break;
			case 2:
				Var0.f_141 = OBJECT::CREATE_OBJECT(Var0.f_191, Var0.f_230, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_141, Var0.f_233);
				if (Global_1939035->f_21)
				{
					Var0.f_229 = VOLUME::_0x0EB78C2B156635B1(665633627, Var0.f_230, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				}
				aggregate_func_4252(&(Var0.f_192), 3);
				break;
			case 3:
				if (func_3(&Var0))
				{
					bVar236 = true;
				}
				else
				{
					fVar237 = aggregate_func_1170(Global_35, Var0.f_230, 1);
					if (fVar237 < func_8() || !Var0.f_193.f_34)
					{
						aggregate_func_49(&(Var0.f_193), &(Var0.f_141));
					}
					if (!aggregate_func_4240(&Global_1939168, 4194304))
					{
						if (fVar237 < func_11() || Var0.f_142 == 7)
						{
							func_12(&Var0, 0);
						}
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

void func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_141));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_229))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_229);
	}
	func_13(uParam0, 1);
}

bool func_3(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_234) > 1000)
	{
		iVar1 = func_14(uParam0->f_230);
		if (aggregate_func_4240(iVar1, 8))
		{
			return true;
		}
		if (aggregate_func_4240(iVar1, 1) || uParam0->f_235)
		{
			if (aggregate_func_4240(uParam0->f_139, 8192))
			{
				aggregate_func_4241(&(uParam0->f_139), 64);
			}
		}
		else if (aggregate_func_4240(iVar1, 2) && !uParam0->f_235)
		{
			if (!aggregate_func_4240(uParam0->f_139, 8192))
			{
				aggregate_func_4241(&(uParam0->f_139), 128);
			}
		}
		else if (aggregate_func_1135(0, 0, 1) && !aggregate_func_7901())
		{
			if (aggregate_func_4240(uParam0->f_139, 8192))
			{
				aggregate_func_4241(&(uParam0->f_139), 64);
			}
		}
		else if (!uParam0->f_235)
		{
			if (!aggregate_func_4240(uParam0->f_139, 8192))
			{
				aggregate_func_4241(&(uParam0->f_139), 128);
			}
		}
		if (aggregate_func_4240(iVar1, 32))
		{
			func_19(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (aggregate_func_4240(iVar1, 4))
		{
			func_19(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (aggregate_func_4240(iVar1, 16))
		{
			func_19(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (aggregate_func_4240(iVar1, 64))
		{
			func_19(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (aggregate_func_4240(iVar1, 128))
		{
			func_19(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (aggregate_func_4240(iVar1, 256))
		{
			func_19(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_234 = iVar0;
	}
	return false;
}

void func_6(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1189729144:
			aggregate_func_4243(&(uParam0->f_139), 6144);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case 1403995973:
			aggregate_func_4243(&(uParam0->f_139), 9);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case -2140664311:
			aggregate_func_4243(&(uParam0->f_139), 7177);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case -1973379805:
			aggregate_func_4243(&(uParam0->f_139), 7177);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case -1307214023:
			aggregate_func_4243(&(uParam0->f_139), 6144);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case -886679600:
			aggregate_func_4243(&(uParam0->f_139), 6144);
			if (aggregate_func_2850(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate_func_4241(&(uParam0->f_139), 1);
			}
			break;
		case 1228786282:
			aggregate_func_4243(&(uParam0->f_139), 7817);
			aggregate_func_4241(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case -1241326640:
			aggregate_func_4243(&(uParam0->f_139), 7817);
			aggregate_func_4241(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case 1588618021:
			aggregate_func_4243(&(uParam0->f_139), 7817);
			aggregate_func_4241(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		case 1127868139:
			aggregate_func_4243(&(uParam0->f_139), 7817);
			aggregate_func_4241(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		default:
			break;
	}
}

float func_8()
{
	if (aggregate_func_4240(&Global_1939168, 4194304))
	{
		return 1600f;
	}
	if (aggregate_func_4717())
	{
		if (aggregate_func_4314() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

float func_11()
{
	if (aggregate_func_4717())
	{
		if (aggregate_func_4314() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_12(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_30(&(uParam0->f_49));
	if (!aggregate_func_402(Global_35, 0))
	{
		return 0;
	}
	func_32(uParam0);
	if (uParam0->f_142 > 4 && uParam0->f_142 < 9)
	{
		aggregate_func_3038(0);
	}
	if (uParam0->f_142 > 3)
	{
		if (uParam0->f_142 != 9 && uParam0->f_142 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_142 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			iVar0 = func_35(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_34(uParam0);
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
		}
	}
	if (uParam0->f_190)
	{
		if (aggregate_func_1534(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 320193935))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				uParam0->f_190 = 0;
			}
		}
	}
	switch (uParam0->f_142)
	{
		case 0:
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			func_39(uParam0);
			uParam0->f_49.f_28 = 1;
			aggregate_func_5047(uParam0, 1);
			break;
		case 1:
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			if (aggregate_func_4311(uParam0))
			{
				aggregate_func_5047(uParam0, 2);
			}
			break;
		case 2:
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			if (func_42(uParam0))
			{
				aggregate_func_5047(uParam0, 3);
			}
			break;
		case 3:
			if (aggregate_func_4287(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				aggregate_func_87(&(uParam0->f_49), 1, TASK::_0x2D0571BB55879DA2(Global_35) != 1049986774);
				aggregate_func_4750(&(uParam0->f_49), 2);
				uParam0->f_189 = 0;
				aggregate_func_4285(uParam0);
			}
			func_45(uParam0);
			if (bParam1)
			{
				return 1;
			}
			aggregate_func_7904(8388608);
			if (!aggregate_func_4240(uParam0->f_139, 8192))
			{
				aggregate_func_8798(2048);
			}
			else
			{
				aggregate_func_8799(2048);
			}
			if (!uParam0->f_187)
			{
				aggregate_func_8798(1024);
			}
			else
			{
				aggregate_func_8799(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_162) >= 500)
			{
				uParam0->f_163 = func_49(uParam0);
				uParam0->f_162 = MISC::GET_GAME_TIMER();
			}
			if (aggregate_func_645(Global_35, uParam0->f_141, 1) > 36f)
			{
				func_51(uParam0);
				func_52(uParam0);
				aggregate_func_7905(8388608);
				if (!uParam0->f_187)
				{
					aggregate_func_8799(1024);
				}
				aggregate_func_5047(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
				}
				return 0;
			}
			if (aggregate_func_7726(2097152) || aggregate_func_4240(uParam0->f_139, 64))
			{
				if (aggregate_func_4240(uParam0->f_139, 8192))
				{
					func_55(uParam0, 0);
					aggregate_func_4243(&(uParam0->f_139), 8192);
				}
				aggregate_func_7905(2097152);
				aggregate_func_4243(&(uParam0->f_139), 64);
			}
			else if (aggregate_func_7726(4194304) || aggregate_func_4240(uParam0->f_139, 128))
			{
				if (!aggregate_func_4240(uParam0->f_139, 8192))
				{
					func_55(uParam0, 1);
					aggregate_func_4241(&(uParam0->f_139), 8192);
				}
				aggregate_func_7905(4194304);
				aggregate_func_4243(&(uParam0->f_139), 128);
			}
			uParam0->f_143 = func_35(uParam0);
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_57(&iVar1, *(uParam0->f_5[uParam0->f_143 /*3*/]), 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if ((func_58(0) && uParam0->f_143 != -1) || (((uParam0->f_187 && aggregate_func_7726(268435456)) && aggregate_func_7726(16777216)) && Global_1956162->f_2))
			{
				uParam0->f_144 = func_59();
				aggregate_func_5047(uParam0, 5);
				if ((aggregate_func_7726(16777216) || uParam0->f_189) || Global_1956162->f_2)
				{
					if (aggregate_func_7726(268435456))
					{
						Global_1956162->f_2 = 0;
						aggregate_func_7905(16777216);
						aggregate_func_4750(&(uParam0->f_49), 2);
						aggregate_func_4242(uParam0, 0);
						aggregate_func_5047(uParam0, 7);
					}
				}
				func_52(uParam0);
			}
			else
			{
				func_61(uParam0);
				func_62(uParam0);
				if ((!aggregate_func_8165(4) && !aggregate_func_7726(536870912)) && aggregate_func_4240(uParam0->f_139, 8192))
				{
					if (uParam0->f_163 && aggregate_func_645(Global_35, uParam0->f_141, 1) <= 9f)
					{
						uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, aggregate_func_4947(aggregate_func_4240(uParam0->f_139, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_161, 2);
					}
				}
				if ((aggregate_func_7726(16777216) && uParam0->f_187) || uParam0->f_189)
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (uParam0->f_165 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000)
						{
							aggregate_func_7905(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							uParam0->f_146 = 0;
						}
						else
						{
							uParam0->f_146 = 2;
							func_66(uParam0);
							uParam0->f_165 = MISC::GET_GAME_TIMER();
							if (aggregate_func_7726(268435456))
							{
								aggregate_func_7905(16777216);
								uParam0->f_189 = 0;
								aggregate_func_4750(&(uParam0->f_49), 2);
								aggregate_func_4242(uParam0, 0);
								aggregate_func_5047(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_146 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							aggregate_func_7905(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							uParam0->f_146 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			if (aggregate_func_645(Global_35, uParam0->f_141, 1) <= 36f)
			{
				aggregate_func_5047(uParam0, 3);
			}
			break;
		case 5:
			if (aggregate_func_4287(uParam0))
			{
				AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
				aggregate_func_4285(uParam0);
			}
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_67();
			if (!func_58(1))
			{
				aggregate_func_3038(0);
				uParam0->f_145 = -1;
				func_68(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_35);
				aggregate_func_5047(uParam0, 3);
			}
			else
			{
				if (uParam0->f_143 != -1)
				{
					func_56();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
				{
					func_68(uParam0, 0);
				}
				else
				{
					func_68(uParam0, 1);
				}
				func_69(uParam0);
				if (func_70(uParam0, 0, 0, -1))
				{
					func_68(uParam0, 0);
					if (uParam0->f_146 == 2)
					{
						aggregate_func_4750(&(uParam0->f_49), 2);
						aggregate_func_4242(uParam0, 0);
						aggregate_func_5047(uParam0, 7);
					}
					else if (uParam0->f_146 == 0)
					{
						aggregate_func_5047(uParam0, 9);
					}
					else if (uParam0->f_146 == 11 || uParam0->f_146 == 10)
					{
						aggregate_func_5047(uParam0, 8);
					}
					else
					{
						aggregate_func_5047(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 2000) && !aggregate_func_4240(uParam0->f_140, 4)) && uParam0->f_146 != 1)
			{
				if (func_70(uParam0, 1, uParam0->f_146, uParam0->f_145))
				{
					if (uParam0->f_146 == 0)
					{
						aggregate_func_5047(uParam0, 9);
						func_51(uParam0);
						return 0;
					}
					else
					{
						func_68(uParam0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_71(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				if ((uParam0->f_143 == uParam0->f_145 || uParam0->f_145 == -1) || uParam0->f_146 == 1)
				{
					if (uParam0->f_146 != 0)
					{
						uParam0->f_144 = uParam0->f_146;
					}
					if (uParam0->f_145 != -1)
					{
						uParam0->f_143 = uParam0->f_145;
					}
					else
					{
						uParam0->f_143 = func_35(uParam0);
					}
					uParam0->f_145 = -1;
					aggregate_func_5047(uParam0, 5);
				}
			}
			break;
		case 8:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			iVar2 = PED::_0xC22AA08A8ADB87D4(Global_35);
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (((iVar2 == 1135271674 || iVar2 == 1844142525) || iVar2 == -571916863) || iVar2 == 825619760)
				{
					if (uParam0->f_146 == 11)
					{
						if (INVENTORY::_0x3D10D7179D7034AF(aggregate_func_1499(0), -569063887, 0))
						{
							INVENTORY::_0x6A564540FAC12211(aggregate_func_1499(0), -569063887);
						}
						func_74(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else if (uParam0->f_146 == 10)
					{
						func_74(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else
					{
						uParam0->f_146 = 0;
						ATTRIBUTE::_0xD962F8579D702DB5();
						aggregate_func_4283(&(uParam0->f_172));
						aggregate_func_5047(uParam0, 5);
					}
				}
				else if (iVar2 == -597629206 || iVar2 == 1316803372)
				{
					func_75(36116464, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -518407211 || iVar2 == 1662215698)
				{
					func_75(653141085, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -1433449364 || iVar2 == 2058555960)
				{
					func_75(1335077954, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_146 = 0;
				aggregate_func_5047(uParam0, 5);
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_1174(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				aggregate_func_4285(uParam0);
			}
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_56();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if ((((func_77(uParam0, uParam0->f_144) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				aggregate_func_1174(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				aggregate_func_87(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_147));
					}
					if (((aggregate_func_2892(0) && !aggregate_func_1519()) && !uParam0->f_182) && uParam0->f_49.f_73 != -1199896558)
					{
						if (((((((uParam0->f_138 == 3 || uParam0->f_138 == 4) || uParam0->f_138 == 11) || uParam0->f_138 == 16) || uParam0->f_138 == 7) || uParam0->f_138 == 6) || uParam0->f_138 == 14) || uParam0->f_138 == 15)
						{
							aggregate_func_3130(uParam0->f_49.f_73, 1, 1, 1, 0);
							uParam0->f_182 = 1;
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
					{
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
				}
				uParam0->f_144 = 6;
				uParam0->f_146 = 6;
				aggregate_func_4283(&(uParam0->f_172));
				aggregate_func_5047(uParam0, 5);
			}
			break;
		case 9:
			if (aggregate_func_4287(uParam0))
			{
				aggregate_func_4285(uParam0);
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				aggregate_func_87(&(uParam0->f_49), 1, 1);
				aggregate_func_5047(uParam0, 3);
			}
			else if (!TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				func_81(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1)
{
	func_51(uParam0);
	func_82(uParam0);
	aggregate_func_4239(uParam0);
	func_52(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_84(uParam0);
	}
	uParam0->f_165 = -1;
	uParam0->f_189 = 0;
	aggregate_func_87(&(uParam0->f_49), 0, 1);
}

int func_14(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (aggregate_func_2028(Global_1939035[iVar0 /*2*/], vParam0))
		{
			return ((*Global_1939035)[iVar0 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_19(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_193.f_5 = iParam1;
	uParam0->f_193.f_2 = iParam2;
	uParam0->f_193.f_3 = iParam3;
	uParam0->f_193.f_2 = iParam4;
	uParam0->f_193.f_2 = iParam5;
	uParam0->f_193.f_2 = iParam6;
}

void func_30(var uParam0)
{
	if (uParam0->f_80)
	{
		if (func_98(&(uParam0->f_79), &(uParam0->f_80)))
		{
			uParam0->f_80 = 0;
		}
	}
	if (uParam0->f_82)
	{
		if (func_98(&(uParam0->f_81), &(uParam0->f_82)))
		{
			uParam0->f_82 = 0;
		}
	}
	if (uParam0->f_84)
	{
		if (func_98(&(uParam0->f_83), &(uParam0->f_84)))
		{
			uParam0->f_84 = 0;
		}
	}
}

void func_32(var uParam0)
{
	int iVar0;

	if (aggregate_func_7726(16777216) || uParam0->f_142 == 7)
	{
		iVar0 = func_35(uParam0);
		if (iVar0 != -1)
		{
			if (!aggregate_func_2875(&(uParam0->f_149[6])))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_34(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_141;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_18)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_18));
			}
		}
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_0xDF7993356F52359A(Global_35, 0);
	if (TASK::_0x841475AC96E794D1(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::_0x841475AC96E794D1(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_39(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

bool func_42(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		if (aggregate_func_4240(uParam0->f_139, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.966f, 0.203f, 0.5f) };
			*(uParam0->f_5[0 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -99.171f);
			aggregate_func_832(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate_func_4240(uParam0->f_139, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.212f, -1.045f, 0.5f) };
			*(uParam0->f_5[1 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -11.405f);
			aggregate_func_832(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate_func_4240(uParam0->f_139, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 1.025f, 0.043f, 0.5f) };
			*(uParam0->f_5[2 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 91.78f);
			aggregate_func_832(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate_func_4240(uParam0->f_139, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 0.249f, 1.05f, 0.5f) };
			*(uParam0->f_5[3 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 164.29f);
			aggregate_func_832(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_45(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_18));
		}
	}
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_184 = 0;
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				uParam0->f_184 = 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (aggregate_func_7726(134217728) || !aggregate_func_4240(uParam0->f_139, 8192))
	{
		return 0;
	}
	if (aggregate_func_2153(Global_35, 0))
	{
		return 0;
	}
	if (PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
	{
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 227, true))
	{
		return 0;
	}
	if (aggregate_func_2088(Global_35))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		return 0;
	}
	if ((func_114(Global_35) || func_115(Global_35)) || func_116(Global_35))
	{
		return 0;
	}
	if (!aggregate_func_3663(Global_35, uParam0->f_141, -0.5f))
	{
		return 0;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_141, true, false), 1.5f) > 2)
	{
		return 0;
	}
	if (aggregate_func_4251() == -1)
	{
		if (aggregate_func_4636())
		{
			return 0;
		}
	}
	else if (aggregate_func_4636() && !((Global_1915170->f_19742 == 28 || Global_1915170->f_19742 == 27) || Global_1915170->f_19742 == 29))
	{
		return 0;
	}
	if (func_119(uParam0) == -1)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate_func_2875(&(uParam0->f_149[iVar0])))
		{
			aggregate_func_2878(uParam0->f_149[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	aggregate_func_2878(&(uParam0->f_160), 1, 1);
	aggregate_func_2878(&(uParam0->f_159), 1, 1);
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar0]))
		{
			TASK::_0x5AF19B6CC2115D34(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_56()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

bool func_57(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_121(&iVar0))
	{
		aggregate_func_2017(iVar0);
		return true;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_0xEE04C0AFD4EFAF0E(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_35)
			{
				if (PED::_0x09B83E68DE004CD4(iVar5) != Global_35)
				{
					aggregate_func_2017(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	aggregate_func_2017(iVar0);
	return false;
}

bool func_58(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_35) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (aggregate_func_7726(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_59()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	switch (iVar0)
	{
		case 512684539:
		case 970934364:
			return 3;
		case 1135271674:
		case 1844142525:
			return 6;
		case -571916863:
		case 825619760:
			return 8;
		case -597629206:
		case 1316803372:
			return 7;
		case -1879538536:
			return 1;
		case -777009509:
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_61(var uParam0)
{
	if ((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && uParam0->f_163) && !PED::_0xA911EE21EDF69DAF(Global_35)) && !aggregate_func_7726(4)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
		{
			if (!aggregate_func_2875(uParam0->f_159))
			{
				uParam0->f_159 = aggregate_func_1523("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (aggregate_func_455(uParam0->f_159, 1))
			{
				func_66(uParam0);
				func_52(uParam0);
				uParam0->f_163 = 0;
			}
		}
	}
	else
	{
		aggregate_func_7727(uParam0);
	}
	if (aggregate_func_2875(uParam0->f_159))
	{
		aggregate_func_2079(uParam0->f_159, 1754796591, 0, 1);
	}
}

void func_62(var uParam0)
{
	if (uParam0->f_163)
	{
		if (!aggregate_func_2875(uParam0->f_160))
		{
			if (func_127(uParam0))
			{
				uParam0->f_160 = aggregate_func_1523("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956121->f_1), 2);
				MISC::SET_BIT(&(Global_1956121->f_1), 3);
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						aggregate_func_2052(uParam0->f_160, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
						aggregate_func_4583(uParam0->f_160, 0, 1, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
		{
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else if (aggregate_func_7726(16777216) || uParam0->f_189)
		{
			aggregate_func_7905(16777216);
			uParam0->f_189 = 1;
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else
		{
			if (uParam0->f_184 != uParam0->f_185)
			{
				if (uParam0->f_184)
				{
					if (func_128(uParam0) && !aggregate_func_2875(Global_1939057->f_82))
					{
						aggregate_func_2052(uParam0->f_160, "CAMP_REC_COOK", 1);
						aggregate_func_4583(uParam0->f_160, 1, 1, 1);
						uParam0->f_186 = 1;
					}
					else
					{
						aggregate_func_2878(&(uParam0->f_160), 1, 1);
						uParam0->f_160 = aggregate_func_1523("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						aggregate_func_4583(uParam0->f_160, 0, 1, 1);
						uParam0->f_186 = 0;
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956121->f_1), 2);
					MISC::SET_BIT(&(Global_1956121->f_1), 3);
					aggregate_func_2878(&(uParam0->f_160), 1, 1);
					uParam0->f_160 = aggregate_func_1523("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				uParam0->f_185 = uParam0->f_184;
			}
			if (aggregate_func_455(uParam0->f_160, 1))
			{
				uParam0->f_189 = 1;
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				func_52(uParam0);
				uParam0->f_163 = 0;
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						uParam0->f_186 = 1;
					}
					else
					{
						uParam0->f_186 = 0;
					}
				}
				if (uParam0->f_184 && uParam0->f_186)
				{
					aggregate_func_7904(268435456);
				}
			}
		}
	}
	else
	{
		aggregate_func_2878(&(uParam0->f_160), 1, 1);
	}
	if (aggregate_func_2875(uParam0->f_160))
	{
		aggregate_func_2079(uParam0->f_160, 1754796591, 0, 1);
	}
}

char* func_64(int iParam0)
{
	return "CAMPFIRE";
}

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_119(uParam0);
	if (iVar0 == -1)
	{
		aggregate_func_7905(268435456);
		aggregate_func_7905(16777216);
		uParam0->f_189 = 0;
		uParam0->f_146 = 0;
		return;
	}
	if (aggregate_func_7726(268435456))
	{
		func_131(Global_35, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((aggregate_func_7726(16777216) || uParam0->f_189) || aggregate_func_5102(684307653, &iVar1)) || aggregate_func_5102(562107429, &iVar1))
				{
					bVar2 = true;
					if (aggregate_func_2654(0) || aggregate_func_2654(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_0xD65FDC686A031C83(Global_35, -1955932021, 3f);
					}
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (uParam0->f_146 == 1)
				{
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (func_134())
				{
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (PED::IS_PED_MALE(Global_35))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				break;
		}
		uParam0->f_143 = iVar0;
	}
}

void func_67()
{
	if (aggregate_func_2823(joaat("weapon_kit_binoculars"), 0))
	{
		aggregate_func_7381(32);
	}
	if (aggregate_func_2823(1652431022 /* GXTEntry: "Refined Binoculars" */, 0))
	{
		aggregate_func_7381(32);
	}
	if (aggregate_func_2823(joaat("weapon_kit_camera"), 0))
	{
		aggregate_func_7381(64);
	}
}

void func_68(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate_func_2875(&(uParam0->f_149[iVar0])))
		{
			if (aggregate_func_4637(&(uParam0->f_149[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				aggregate_func_4583(&(uParam0->f_149[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	iVar1 = 0;
	if (iVar0 == 1135271674 || iVar0 == 1844142525)
	{
		if ((((((func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500) && !uParam0->f_189) && !aggregate_func_7726(16777216)) && uParam0->f_146 != 1) && !aggregate_func_5102(684307653, &iVar1)) && !aggregate_func_5102(562107429, &iVar1))
		{
			aggregate_func_4283(&(uParam0->f_172));
			func_75(-63615330, 0.5f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -571916863 || iVar0 == 825619760)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!aggregate_func_4260(&(uParam0->f_172)))
			{
				aggregate_func_4283(&(uParam0->f_172));
			}
			if (aggregate_func_4628(&(uParam0->f_172), 180f))
			{
				aggregate_func_4283(&(uParam0->f_172));
				if (!func_134())
				{
					func_75(1698735158, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == -597629206 || iVar0 == 1316803372)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!aggregate_func_4260(&(uParam0->f_172)))
			{
				aggregate_func_4283(&(uParam0->f_172));
			}
			if (aggregate_func_4628(&(uParam0->f_172), 10f))
			{
				if (func_134())
				{
					aggregate_func_4283(&(uParam0->f_172));
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_75(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_70(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_143;
		}
	}
	else
	{
		iVar1 = uParam0->f_143;
		iVar2 = uParam0->f_144;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (aggregate_func_4251() != 0)
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (aggregate_func_4251() != 0)
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::_0x038B1F1674F0E242(Global_35) || uParam0->f_188)
	{
		iVar0 = 0;
	}
	else if (aggregate_func_2153(Global_35, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		if (!aggregate_func_4240(uParam0->f_140, 32))
		{
			aggregate_func_4322(207, 1);
			aggregate_func_4241(&(uParam0->f_140), 32);
		}
		iVar0 = 16;
	}
	func_138(uParam0, iVar0);
	if (uParam0->f_146 == 2)
	{
		func_68(uParam0, 0);
	}
	iVar3 = func_139(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_145 != -1)
		{
			uParam0->f_143 = uParam0->f_145;
		}
	}
	switch (iVar3)
	{
		case 0:
			aggregate_func_7192(&(uParam0->f_49));
			aggregate_func_4750(&(uParam0->f_49), 1);
			uParam0->f_146 = 6;
			break;
		case 8:
			func_51(uParam0);
			uParam0->f_188 = 1;
			break;
		case 2:
			aggregate_func_4750(&(uParam0->f_49), 2);
			aggregate_func_4242(uParam0, 0);
			uParam0->f_49.f_31 = 1;
			uParam0->f_146 = 2;
			func_51(uParam0);
			aggregate_func_5047(uParam0, 7);
			break;
		case 6:
			func_51(uParam0);
			uParam0->f_146 = 10;
			return true;
		case 1:
			func_140(uParam0, aggregate_func_4240(uParam0->f_140, 16));
			uParam0->f_146 = 0;
			func_51(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

int func_71(var uParam0)
{
	switch (uParam0->f_143)
	{
		case 0:
			return func_141(uParam0);
		case 1:
			return func_142(uParam0);
		case 2:
			return func_143(uParam0);
		case 3:
			return func_144(uParam0);
	}
	func_51(uParam0);
	return 0;
}

bool func_72(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_35);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_35);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_145 != -1)
	{
		iVar2 = func_35(uParam0);
		if (iVar2 != uParam0->f_145)
		{
			return false;
		}
		if (uParam0->f_143 != iVar2)
		{
			uParam0->f_143 = iVar2;
			return false;
		}
	}
	if (aggregate_func_5062())
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return false;
	}
	return true;
}

int func_74(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (aggregate_func_6665())
	{
		Global_1939221->f_10479 = bParam0;
		aggregate_func_4647(bParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!aggregate_func_3671(bParam0, bParam4))
	{
		return 0;
	}
	if (aggregate_func_2483(bParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (aggregate_func_2852(bParam0, -2081717885))
	{
		aggregate_func_7468(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (aggregate_func_2852(bParam0, -1909684001))
	{
		aggregate_func_7469(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (aggregate_func_2852(bParam0, 587975446))
	{
		aggregate_func_7470(bParam0, Var10);
	}
	else if (aggregate_func_2852(bParam0, 566155764))
	{
		if (!aggregate_func_7471(bParam0))
		{
			return 0;
		}
	}
	if (aggregate_func_33(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = bParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (aggregate_func_2852(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		aggregate_func_1292(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((aggregate_func_2852(bParam0, -1472964441) || aggregate_func_2852(bParam0, -228153877)) || aggregate_func_2852(bParam0, 566155764))
	{
	}
	else if (aggregate_func_2852(bParam0, 1919582297))
	{
		if (((aggregate_func_7123() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (bParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate_func_1292(Var10, 0);
		bVar28 = false;
	}
	else if (aggregate_func_5133(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = aggregate_func_4271(Global_1070355->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate_func_1292(Var10, 0);
		iVar29 = 1;
	}
	else if (aggregate_func_2830(bParam0) == joaat("clothing"))
	{
		if (!aggregate_func_7472(bParam0))
		{
			aggregate_func_2916("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = aggregate_func_2827(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = aggregate_func_262();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (aggregate_func_1318(PLAYER::PLAYER_ID()))
			{
				aggregate_func_2916("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate_func_2916("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951131->f_1657 != bParam0)
			{
				aggregate_func_4733(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					aggregate_func_7473(bParam0, 0);
					return iVar29;
				case -2061583405:
					aggregate_func_1325(bParam0);
					aggregate_func_4733(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						aggregate_func_1559(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						aggregate_func_3040(bParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", true, 15);
						aggregate_func_3040(bParam0, 1);
					}
					break;
				default:
					if (!aggregate_func_2852(bParam0, -1348134986))
					{
					}
					else
					{
						aggregate_func_7473(bParam0, 0);
					}
					break;
			}
			aggregate_func_1559(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				aggregate_func_4895(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (aggregate_func_4251() != -1)
				{
				}
				else if (!aggregate_func_7472(bParam0))
				{
					aggregate_func_2916("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = aggregate_func_701(7, bParam0);
					bVar31 = aggregate_func_701(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17095))
						{
							MAP::REMOVE_BLIP(&Global_17095);
						}
						Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
						aggregate_func_2916(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17095), 10000, 0, 0, 0, 1);
					}
					else if (!aggregate_func_1757(7))
					{
						aggregate_func_2916("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (aggregate_func_558(Global_35, aggregate_func_4938(7), 0))
						{
							aggregate_func_2916("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17095))
							{
								MAP::REMOVE_BLIP(&Global_17095);
							}
							Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
							aggregate_func_2916(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17095), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							aggregate_func_1292(Var10, 0);
						}
						Jump @2072; //curOff = 1569
						aggregate_func_2484();
						Jump @2072; //curOff = 1576
						if (!aggregate_func_4240(Global_1956162->f_1, 1) || aggregate_func_4240(Global_1956162->f_1, 512))
						{
							if (aggregate_func_7472(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (aggregate_func_572(1, 1))
								{
									aggregate_func_6633(2, 1);
								}
								else if (aggregate_func_6960(1))
								{
									aggregate_func_2916("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (aggregate_func_3525())
								{
									aggregate_func_2916("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										aggregate_func_3618();
									}
									else
									{
										aggregate_func_2916("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									aggregate_func_7474(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								aggregate_func_2916("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								aggregate_func_7474(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (aggregate_func_3525())
							{
								aggregate_func_2916("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								aggregate_func_2916("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956162->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2072; //curOff = 1851
						if (!WEAPON::_0xC853230E76A152DF(aggregate_func_1534(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bParam0, true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1889
						if (aggregate_func_1534(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1930
						Jump @2072; //curOff = 1933
						aggregate_func_4322(533, 1);
						Jump @2072; //curOff = 1944
						aggregate_func_7467(1);
						Jump @2072; //curOff = 1952
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return 1;
						Jump @2072; //curOff = 1987
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							aggregate_func_1292(Var10, 0);
						}
						return 1;
						Jump @2072; //curOff = 2063
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_75(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_35, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_35, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_35);
		return false;
	}
	return true;
}

bool func_77(var uParam0, var uParam1)
{
	aggregate_func_7904(131072);
	if (func_190(uParam0))
	{
		return true;
	}
	return false;
}

void func_81(var uParam0)
{
	int iVar0;

	if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
		if (iVar0 == -518407211 || iVar0 == 1662215698)
		{
			func_75(653141085, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == -1433449364 || iVar0 == 2058555960)
		{
			func_75(1335077954, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
	}
}

void func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar0]))
		{
			TASK::_0x81948DFE4F5A0283(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_84(var uParam0)
{
	uParam0->f_142 = 0;
	uParam0->f_143 = -1;
	uParam0->f_144 = 0;
	uParam0->f_145 = -1;
	uParam0->f_146 = 0;
	uParam0->f_141 = 0;
}

bool func_98(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return true;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return false;
}

var func_114(int iParam0)
{
	return (aggregate_func_1554(iParam0, 4) || aggregate_func_1554(iParam0, 5));
}

int func_115(int iParam0)
{
	return aggregate_func_1554(iParam0, 7);
}

int func_116(int iParam0)
{
	return aggregate_func_1554(iParam0, 6);
}

int func_119(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar3]))
		{
			if (TASK::_0x5BA659955369B0E2(uParam0[iVar3]) != 0)
			{
			}
			else if (!PED::_0xAB643407D0B26F07(Global_35, uParam0[iVar3], 0, 0, 1) && !aggregate_func_7726(268435456))
			{
			}
			else
			{
				ITEMSET::_0x20A4BF0E09BEE146(iVar2);
				if (func_57(&iVar2, TASK::_0xA8452DD321607029(uParam0[iVar3], 1), 1065353216 /* Float: 1f */))
				{
				}
				else
				{
					fVar4 = aggregate_func_2876(Global_36, *(uParam0->f_5[iVar3 /*3*/]));
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

bool func_121(int iParam0)
{
	if (PED::_0xA1FBAC56D38563E2(*iParam0))
	{
		return true;
	}
	return false;
}

bool func_127(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		return false;
	}
	if (uParam0->f_189)
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		return false;
	}
	if (aggregate_func_7726(16777216))
	{
		return false;
	}
	if (aggregate_func_7726(1))
	{
		return false;
	}
	return true;
}

bool func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		bVar2 = func_233(iVar1);
		if (((aggregate_func_3102(bVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_49.f_73 = bVar2;
			uParam0->f_49.f_74 = -214678071;
			if (aggregate_func_2875(uParam0->f_160))
			{
				aggregate_func_2079(uParam0->f_160, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_131(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	bool bVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	bool bVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!aggregate_func_2892(0) || aggregate_func_1519())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		aggregate_func_4741(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			bVar26 = &Var2.f_1[iVar25];
			if (aggregate_func_2823(bVar26, 0))
			{
				if (!bParam1 || aggregate_func_4998(bVar26))
				{
					aggregate_func_221(bVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_0x88EFFED5FE8B0B4A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (aggregate_func_2850(-269048282 /* GXTEntry: "Buck Antler Trinket" */, 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = aggregate_func_3962(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (aggregate_func_3963(iVar0) && !aggregate_func_5236(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || aggregate_func_4998(&(iVar27[iVar38])))
				{
					aggregate_func_221(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	bVar43 = aggregate_func_2101(&iVar0);
	if (!aggregate_func_2823(bVar43, 0))
	{
		bVar43 = aggregate_func_1163(iVar0);
	}
	if (aggregate_func_2823(bVar43, 0))
	{
		aggregate_func_5473(bVar43, 1, 1, -142743235);
	}
	ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
}

bool func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_0x4BEB42AEBCA732E9();
	if (((((iVar0 == joaat("rain") || iVar0 == joaat("shower")) || iVar0 == joaat("sleet")) || iVar0 == joaat("hurricane")) || iVar0 == joaat("thunderstorm")) || iVar0 == joaat("thunder"))
	{
		return true;
	}
	iVar1 = MISC::_0x51021D36F62AAA83();
	if (((((iVar1 == joaat("rain") || iVar1 == joaat("shower")) || iVar1 == joaat("sleet")) || iVar1 == joaat("hurricane")) || iVar1 == joaat("thunderstorm")) || iVar1 == joaat("thunder"))
	{
		return true;
	}
	iVar2 = aggregate_func_4371();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
	{
		aggregate_func_4241(&(uParam0->f_140), 2);
	}
	else
	{
		aggregate_func_4243(&(uParam0->f_140), 2);
	}
	if (aggregate_func_4240(iParam1, 1))
	{
		if (!aggregate_func_2875(&(uParam0->f_149[0])))
		{
			uParam0->f_149[0] = aggregate_func_2385("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2079(&(uParam0->f_149[0]), 1754796591, 0, 1);
		}
	}
	else if (aggregate_func_2875(&(uParam0->f_149[0])))
	{
		aggregate_func_2878(uParam0->f_149[0], 1, 1);
	}
	if (((aggregate_func_4240(iParam1, 4096) && aggregate_func_4240(uParam0->f_139, 16)) && !aggregate_func_7726(536870912)) && uParam0->f_146 != 2)
	{
		MISC::SET_BIT(&(Global_1956121->f_1), 2);
		MISC::SET_BIT(&(Global_1956121->f_1), 3);
		if (!aggregate_func_2875(&(uParam0->f_149[2])))
		{
			uParam0->f_149[2] = aggregate_func_2385("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2079(&(uParam0->f_149[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
		if (aggregate_func_2875(&(uParam0->f_149[2])))
		{
			aggregate_func_2878(uParam0->f_149[2], 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (aggregate_func_2875(&(uParam0->f_149[6])))
	{
		aggregate_func_2878(uParam0->f_149[6], 1, 1);
	}
	if (aggregate_func_7726(134217728))
	{
		if (aggregate_func_2875(&(uParam0->f_149[6])))
		{
			aggregate_func_4583(&(uParam0->f_149[6]), 0, 1, 1);
		}
	}
	else if (aggregate_func_2875(&(uParam0->f_149[6])) && !aggregate_func_4637(&(uParam0->f_149[6]), 0))
	{
		aggregate_func_4583(&(uParam0->f_149[6]), 1, 1, 1);
	}
	if ((((aggregate_func_7726(1) || aggregate_func_7726(134217728)) || aggregate_func_4240(uParam0->f_140, 2)) && !aggregate_func_7726(4096)) && uParam0->f_146 != 2)
	{
		if (aggregate_func_2875(&(uParam0->f_149[2])))
		{
			aggregate_func_4583(&(uParam0->f_149[2]), 0, 1, 1);
		}
	}
	else if (aggregate_func_2875(&(uParam0->f_149[2])))
	{
		aggregate_func_4583(&(uParam0->f_149[2]), 1, 1, 1);
	}
	if ((aggregate_func_4240(iParam1, 16) && !aggregate_func_7726(536870912)) && uParam0->f_146 != 2)
	{
		if (!aggregate_func_2875(&(uParam0->f_149[1])))
		{
			uParam0->f_149[1] = aggregate_func_2385("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (aggregate_func_4240(iParam1, 524288) && uParam0->f_187)
			{
				aggregate_func_4823(&(uParam0->f_149[1]), 0, 1);
				aggregate_func_2057(&(uParam0->f_149[1]), 20, 1, 1);
				aggregate_func_2057(&(uParam0->f_149[1]), 13, 1, 1);
			}
			aggregate_func_2079(&(uParam0->f_149[1]), 1754796591, 0, 1);
		}
		if (aggregate_func_4240(iParam1, 524288) && uParam0->f_187)
		{
			if (!aggregate_func_2875(&(uParam0->f_149[8])))
			{
				uParam0->f_149[8] = aggregate_func_2385("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate_func_2057(&(uParam0->f_149[8]), 19, 1, 1);
				aggregate_func_2057(&(uParam0->f_149[8]), 20, 1, 1);
				aggregate_func_2057(&(uParam0->f_149[8]), 13, 1, 1);
				aggregate_func_2655(uParam0->f_149[8], "INPUT_PCAMP_TEARDWN");
				aggregate_func_2079(&(uParam0->f_149[8]), 1754796591, 0, 1);
			}
		}
		else if (aggregate_func_2875(&(uParam0->f_149[8])))
		{
			aggregate_func_2878(uParam0->f_149[8], 1, 1);
		}
	}
	else
	{
		if (aggregate_func_2875(&(uParam0->f_149[1])))
		{
			aggregate_func_2878(uParam0->f_149[1], 1, 1);
		}
		if (aggregate_func_2875(&(uParam0->f_149[8])))
		{
			aggregate_func_2878(uParam0->f_149[8], 1, 1);
		}
	}
	if (aggregate_func_7726(1048576) || aggregate_func_4240(uParam0->f_140, 2))
	{
		if (aggregate_func_2875(&(uParam0->f_149[1])) && aggregate_func_4637(&(uParam0->f_149[1]), 0))
		{
			aggregate_func_4583(&(uParam0->f_149[1]), 0, 1, 1);
			if (aggregate_func_4240(iParam1, 524288) && uParam0->f_187)
			{
				aggregate_func_4823(&(uParam0->f_149[1]), 0, 1);
			}
		}
	}
	else if (aggregate_func_2875(&(uParam0->f_149[1])) && !aggregate_func_4637(&(uParam0->f_149[1]), 0))
	{
		aggregate_func_4583(&(uParam0->f_149[1]), 1, 1, 1);
		if (aggregate_func_4240(iParam1, 524288) && uParam0->f_187)
		{
			aggregate_func_4823(&(uParam0->f_149[1]), 0, 1);
		}
	}
	if (aggregate_func_7726(256))
	{
		if (aggregate_func_2875(&(uParam0->f_149[8])))
		{
			aggregate_func_4583(&(uParam0->f_149[8]), 0, 1, 1);
		}
	}
	else if (aggregate_func_2875(&(uParam0->f_149[8])))
	{
		aggregate_func_4583(&(uParam0->f_149[8]), 1, 1, 1);
	}
	uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!aggregate_func_7726(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, 3f, 1, iVar0, 1754796591, uParam0->f_161, 0);
	}
}

int func_139(var uParam0)
{
	int iVar0;

	if (aggregate_func_7726(16777216) || uParam0->f_189)
	{
		uParam0->f_189 = 0;
		aggregate_func_7905(16777216);
		uParam0->f_165 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate_func_2875(&(uParam0->f_149[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (aggregate_func_4637(&(uParam0->f_149[iVar0]), 0))
				{
					if (aggregate_func_2927(&(uParam0->f_149[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_260())
					{
						if (!aggregate_func_4260(&(uParam0->f_166)))
						{
							aggregate_func_4283(&(uParam0->f_166));
						}
						if (aggregate_func_7251(&(uParam0->f_166), 0.5f))
						{
							return iVar0;
						}
					}
					else if (aggregate_func_4260(&(uParam0->f_166)))
					{
						aggregate_func_4313(&(uParam0->f_166));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (aggregate_func_455(&(uParam0->f_149[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (aggregate_func_1549(&(uParam0->f_149[8]), 1))
					{
						if (!aggregate_func_4260(&(uParam0->f_49.f_86)))
						{
							aggregate_func_4283(&(uParam0->f_49.f_86));
						}
						else if (aggregate_func_4628(&(uParam0->f_49.f_86), 0.1f))
						{
							aggregate_func_2052(&(uParam0->f_149[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (aggregate_func_4260(&(uParam0->f_49.f_86)))
						{
							aggregate_func_4313(&(uParam0->f_49.f_86));
						}
						aggregate_func_2052(&(uParam0->f_149[8]), "LEAVE", 1);
					}
				}
			}
			else if (aggregate_func_2927(&(uParam0->f_149[iVar0]), 1))
			{
				if (iVar0 == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4243(&(uParam0->f_140), 16);
	}
}

int func_141(var uParam0)
{
	if (func_264(uParam0) && !aggregate_func_4240(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					if (func_75(420089068, 1f))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_266(uParam0);
			break;
	}
	return 0;
}

int func_142(var uParam0)
{
	if (func_264(uParam0) && !aggregate_func_4240(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					func_75(1352801403, 1f);
					return 1;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_267(uParam0);
			break;
	}
	return 0;
}

int func_143(var uParam0)
{
	if (func_264(uParam0) && !aggregate_func_4240(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 1;
					if (func_268(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_144(var uParam0)
{
	if (func_264(uParam0) && !aggregate_func_4240(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 0;
					if (func_268(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	aggregate_func_7905(1024);
	uParam0->f_49.f_31 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (aggregate_func_7726(268435456) && uParam0->f_138 < 9)
	{
		aggregate_func_8802(&(uParam0->f_49));
		aggregate_func_102(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000 && aggregate_func_119(&(uParam0->f_49)))
		{
			func_381();
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913156->f_1577 != 0)
			{
				uParam0->f_49.f_73 = Global_1913156->f_1577;
			}
			uParam0->f_49.f_74 = -214678071;
			uParam0->f_165 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == -518407211 || iVar0 == 1662215698)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife"), true, 0, false, false);
				uParam0->f_190 = 1;
			}
			aggregate_func_7904(16384);
			aggregate_func_7905(65536);
			Global_1956162->f_2 = 0;
			if (aggregate_func_2892(0) && !aggregate_func_1519())
			{
				aggregate_func_3132(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
			uParam0->f_176 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_147));
			}
			uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_36, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
			OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 0f, 1);
			aggregate_func_7192(&(uParam0->f_49));
			aggregate_func_4750(&(uParam0->f_49), 2);
			uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_384(uParam0, 3, 0, 0);
			aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
			aggregate_func_2079(&(uParam0->f_149[3]), -1067771379, 0, 1);
			uParam0->f_49.f_58 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_35);
			aggregate_func_4241(&(uParam0->f_140), 16);
			aggregate_func_4242(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_138 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_138 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_49.f_73), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		uParam0->f_179++;
		if (uParam0->f_49.f_73 == -1199896558)
		{
			if (aggregate_func_5077())
			{
				aggregate_func_7707(1);
			}
			else if (aggregate_func_5101())
			{
				aggregate_func_7707(0);
			}
		}
		func_388(uParam0->f_49.f_73, BUILTIN::TO_FLOAT(uParam0->f_176), uParam0->f_179 >= uParam0->f_176);
	}
	if (aggregate_func_2892(0) && !aggregate_func_1519())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -936525963))
		{
			uParam0->f_182 = 1;
			aggregate_func_3130(uParam0->f_49.f_73, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_138 >= 10)
	{
		if (aggregate_func_2875(&(uParam0->f_149[5])) && aggregate_func_2927(&(uParam0->f_149[5]), 1))
		{
			uParam0->f_178 = 3;
		}
	}
	if (uParam0->f_49.f_22 != -1 && aggregate_func_4249(&(uParam0->f_49)) != 12)
	{
		if (aggregate_func_5107(uParam0->f_49.f_22))
		{
		}
		else
		{
			uParam0->f_49.f_22 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	switch (uParam0->f_138)
	{
		case 0:
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return false;
				}
			}
			if (((func_72(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && func_391(iVar0)) || aggregate_func_4249(&(uParam0->f_49)) == 12)
			{
				aggregate_func_2(&(uParam0->f_49), 1);
				if (aggregate_func_4249(&(uParam0->f_49)) == 11)
				{
					if (aggregate_func_3102(uParam0->f_49.f_73))
					{
						func_393(uParam0);
					}
					else if (uParam0->f_49.f_76)
					{
						uParam0->f_176 = 1;
						aggregate_func_7904(131072);
						if (aggregate_func_2892(0) && !aggregate_func_1519())
						{
							aggregate_func_3132(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, aggregate_func_3964(), 0);
						}
						aggregate_func_4750(&(uParam0->f_49), 0);
						aggregate_func_7192(&(uParam0->f_49));
						aggregate_func_2878(uParam0->f_149[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (aggregate_func_4240(uParam0->f_139, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						func_384(uParam0, 3, 0, 0);
						aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
						aggregate_func_2079(&(uParam0->f_149[3]), -1067771379, 0, 1);
						func_395();
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						aggregate_func_4242(uParam0, 1);
					}
					else
					{
						aggregate_func_4243(&(uParam0->f_140), 4);
						aggregate_func_7904(131072);
					}
				}
				else if (aggregate_func_4249(&(uParam0->f_49)) == 0)
				{
					func_68(uParam0, 1);
					aggregate_func_7905(131072);
					aggregate_func_7905(16384);
					aggregate_func_7904(262144);
					aggregate_func_7904(65536);
					if (aggregate_func_7726(8192))
					{
						aggregate_func_4750(&(uParam0->f_49), 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						aggregate_func_7192(&(uParam0->f_49));
						uParam0->f_181 = 0;
						return true;
					}
				}
				else if (aggregate_func_4249(&(uParam0->f_49)) == 1 || aggregate_func_2153(Global_35, 0))
				{
					aggregate_func_4243(&(uParam0->f_140), 4);
					uParam0->f_49.f_31 = 0;
					func_140(uParam0, uParam0->f_49.f_23);
					func_68(uParam0, 1);
					aggregate_func_7192(&(uParam0->f_49));
					aggregate_func_7905(131072);
					aggregate_func_7905(16384);
					aggregate_func_7904(262144);
					aggregate_func_7904(65536);
					uParam0->f_146 = 6;
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					uParam0->f_181 = 0;
					return true;
				}
			}
			break;
		case 1:
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
			{
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					if (func_75(653141085, 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1520707380, 1086324736 /* Float: 6f */);
					aggregate_func_4242(uParam0, 2);
				}
				else
				{
					func_75(-1161086932, 1086324736 /* Float: 6f */);
					aggregate_func_4242(uParam0, 2);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!aggregate_func_4637(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_72(uParam0))
				{
					aggregate_func_4583(&(uParam0->f_149[3]), 1, 1, 1);
				}
			}
			if (aggregate_func_455(&(uParam0->f_149[3]), 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_384(uParam0, 3, 1, 0);
				aggregate_func_2878(uParam0->f_149[3], 1, 1);
				if (((aggregate_func_2830(uParam0->f_49.f_73) == 2085633299 && !aggregate_func_2852(uParam0->f_49.f_73, -1242251796)) && !aggregate_func_2852(uParam0->f_49.f_73, 1919582297)) && !aggregate_func_2852(uParam0->f_49.f_73, -651046900))
				{
					uParam0->f_149[5] = aggregate_func_2385("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate_func_2079(&(uParam0->f_149[5]), -1067771379, 0, 1);
					aggregate_func_2057(&(uParam0->f_149[5]), 10, 1, 1);
					uParam0->f_149[4] = aggregate_func_2385("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate_func_2057(&(uParam0->f_149[4]), 10, 1, 1);
					aggregate_func_2079(&(uParam0->f_149[4]), -1067771379, 0, 1);
					if (aggregate_func_2900(uParam0->f_49.f_73, -1636519629) == -701492487)
					{
						aggregate_func_2052(&(uParam0->f_149[5]), "DRINK", 1);
						aggregate_func_4583(&(uParam0->f_149[4]), 0, 1, 1);
					}
					if (!aggregate_func_6544(2))
					{
						aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
					}
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				}
				if (!aggregate_func_2892(0) || aggregate_func_1519())
				{
					uParam0->f_49.f_22 = aggregate_func_3131(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					if (aggregate_func_2875(&(uParam0->f_149[5])))
					{
						aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
					}
				}
				uParam0->f_179 = 0;
				aggregate_func_4283(&(uParam0->f_169));
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				uParam0->f_182 = 0;
				aggregate_func_4242(uParam0, 3);
			}
			else if (aggregate_func_4637(&(uParam0->f_149[3]), 0))
			{
				func_397(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_72(uParam0))
			{
				if (aggregate_func_7251(&(uParam0->f_169), 0.1f))
				{
					if (iVar0 == -87088667 || iVar0 == -8536912)
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(-266297705, 1f);
						aggregate_func_4283(&(uParam0->f_169));
					}
					else
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(1581850152, 1086324736 /* Float: 6f */);
					}
				}
			}
			func_398(uParam0);
			if (aggregate_func_2875(&(uParam0->f_149[5])))
			{
				if (aggregate_func_4637(&(uParam0->f_149[5]), 0) && (aggregate_func_2927(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!aggregate_func_2892(0) || aggregate_func_1519())
					{
						aggregate_func_1174(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate_func_3130(uParam0->f_49.f_73, 1, 1, 0, 0);
					aggregate_func_2878(uParam0->f_149[5], 1, 1);
					aggregate_func_2878(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					aggregate_func_7905(131072);
					aggregate_func_4750(&(uParam0->f_49), 15);
					aggregate_func_4242(uParam0, 5);
					return false;
				}
			}
			if ((!aggregate_func_2875(&(uParam0->f_149[5])) || (aggregate_func_4637(&(uParam0->f_149[4]), 0) && (aggregate_func_2973(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION"))))) || aggregate_func_2153(Global_35, 0))
			{
				aggregate_func_2878(uParam0->f_149[5], 1, 1);
				aggregate_func_2878(uParam0->f_149[4], 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (uParam0->f_181)
				{
					uParam0->f_181 = 0;
					aggregate_func_1426(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					aggregate_func_4750(&(uParam0->f_49), 1);
				}
				else
				{
					aggregate_func_4750(&(uParam0->f_49), 15);
				}
				func_399(uParam0, 1);
				aggregate_func_4242(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || aggregate_func_4260(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1530401853, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1463467224, 1086324736 /* Float: 6f */);
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate_func_4242(uParam0, 7);
			}
			break;
		case 5:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || aggregate_func_4260(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1878840211, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1510453203, 1086324736 /* Float: 6f */);
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate_func_4242(uParam0, 6);
			}
			break;
		case 9:
			if (func_72(uParam0))
			{
				if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1335077954, 1086324736 /* Float: 6f */);
					return false;
				}
				uParam0->f_178 = 0;
				aggregate_func_7905(268435456);
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					func_75(-9448781, 1086324736 /* Float: 6f */);
					aggregate_func_7904(16384);
					aggregate_func_4242(uParam0, 10);
				}
				else
				{
					func_75(2101630952, 1086324736 /* Float: 6f */);
					aggregate_func_7904(16384);
					aggregate_func_4242(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, true);
			}
			if (!aggregate_func_4637(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("cook_meat_sizzle_loop", uParam0->f_147, "Player_Campfire_Sounds", 0, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					aggregate_func_4583(&(uParam0->f_149[3]), 1, 1, 1);
					aggregate_func_3086(&(uParam0->f_149[3]), 1);
				}
			}
			if (aggregate_func_455(&(uParam0->f_149[3]), 1))
			{
				uParam0->f_175 = -1;
				OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 1f, 1);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_149[4] = aggregate_func_2385("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_149[5] = aggregate_func_2385("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2057(&(uParam0->f_149[5]), 10, 1, 1);
				aggregate_func_2057(&(uParam0->f_149[4]), 10, 1, 1);
				aggregate_func_2079(&(uParam0->f_149[4]), -1067771379, 0, 1);
				aggregate_func_2079(&(uParam0->f_149[5]), -1067771379, 0, 1);
				if (aggregate_func_5359(uParam0->f_49.f_73, 1, 0) || aggregate_func_8165(64))
				{
					aggregate_func_4583(&(uParam0->f_149[4]), 0, 1, 1);
					aggregate_func_8799(64);
				}
				else if (!aggregate_func_6544(2))
				{
					aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
				}
				aggregate_func_2878(uParam0->f_149[3], 1, 1);
				aggregate_func_4283(&(uParam0->f_169));
				aggregate_func_7905(16384);
				uParam0->f_179 = 0;
				if (!aggregate_func_2892(0) || aggregate_func_1519())
				{
					uParam0->f_49.f_22 = aggregate_func_3131(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				uParam0->f_182 = 0;
				aggregate_func_4242(uParam0, 11);
			}
			else
			{
				func_397(uParam0, iVar0);
				if (uParam0->f_175 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
					{
						uParam0->f_175 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar3 = aggregate_func_1702(&(uParam0->f_149[3]), 1);
					fVar3 = aggregate_func_4333(fVar3, 0f, 1f);
					OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, (1f * fVar3), 1);
				}
			}
			break;
		case 11:
			if (func_72(uParam0))
			{
				if (aggregate_func_7251(&(uParam0->f_169), 0.1f))
				{
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					if (iVar0 == -283636008 || iVar0 == -341412437)
					{
						func_75(-1065570550, 2f);
					}
					else
					{
						func_75(-1295988014, 2f);
					}
				}
			}
			func_398(uParam0);
			if (aggregate_func_2875(&(uParam0->f_149[5])))
			{
				if (aggregate_func_4637(&(uParam0->f_149[5]), 0) && (aggregate_func_2927(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					uParam0->f_178 = (uParam0->f_178 - 1);
					if (uParam0->f_177)
					{
						uParam0->f_177 = 0;
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate_func_3130(uParam0->f_49.f_73, 1, 1, 0, 0);
					aggregate_func_2878(uParam0->f_149[5], 1, 1);
					aggregate_func_2878(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					aggregate_func_7904(32768);
					if (!aggregate_func_2892(0) || aggregate_func_1519())
					{
						aggregate_func_1174(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					aggregate_func_4242(uParam0, 13);
					return false;
				}
			}
			if (aggregate_func_2875(&(uParam0->f_149[4])))
			{
				if ((((aggregate_func_4637(&(uParam0->f_149[4]), 0) && (aggregate_func_2927(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))) || uParam0->f_180) || aggregate_func_2153(Global_35, 0)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1))
				{
					aggregate_func_8798(16);
					uParam0->f_180 = 0;
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate_func_2878(uParam0->f_149[4], 1, 1);
					aggregate_func_2878(uParam0->f_149[5], 1, 1);
					func_399(uParam0, 1);
					aggregate_func_4242(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || aggregate_func_4260(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(528569882, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(288708544, 1f);
				}
				else
				{
					func_75(-915834315, 1f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate_func_4242(uParam0, 15);
			}
			break;
		case 13:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || aggregate_func_4260(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(709478876, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(606164441, 1f);
				}
				else
				{
					func_75(-414126081, 2f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate_func_4242(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_138 == 14 || uParam0->f_138 == 6)
			{
				func_401();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_406(uParam0, 1);
				aggregate_func_7905(32768);
				aggregate_func_8799(16);
				if (uParam0->f_138 == 14 || uParam0->f_138 == 15)
				{
					aggregate_func_7904(65536);
					aggregate_func_4242(uParam0, 12);
				}
				else
				{
					aggregate_func_4242(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_35))
				{
					if (iVar0 == -518407211 || iVar0 == 1662215698)
					{
						aggregate_func_7904(65536);
						aggregate_func_4242(uParam0, 12);
					}
					else if (iVar0 == -1433449364 || iVar0 == 2058555960)
					{
						aggregate_func_4242(uParam0, 8);
					}
					else if (uParam0->f_138 == 14)
					{
						aggregate_func_4242(uParam0, 13);
					}
					else if (uParam0->f_138 == 15)
					{
						aggregate_func_4242(uParam0, 16);
					}
					else if (uParam0->f_138 == 7)
					{
						aggregate_func_4242(uParam0, 4);
					}
					else if (uParam0->f_138 == 6)
					{
						aggregate_func_4242(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			aggregate_func_7904(1024);
			if (aggregate_func_8165(128))
			{
				if (aggregate_func_4637(&(uParam0->f_149[7]), 0))
				{
					aggregate_func_4583(&(uParam0->f_149[7]), 0, 1, 1);
				}
				if (aggregate_func_4637(&(uParam0->f_149[1]), 0))
				{
					aggregate_func_4583(&(uParam0->f_149[1]), 0, 1, 1);
				}
			}
			else
			{
				func_406(uParam0, 1);
			}
			if (aggregate_func_4637(&(uParam0->f_149[3]), 0))
			{
				if (aggregate_func_2153(Global_35, 0))
				{
					aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
				}
			}
			if (aggregate_func_2927(&(uParam0->f_149[3]), 1))
			{
				aggregate_func_7905(65536);
				aggregate_func_7192(&(uParam0->f_149));
				if (uParam0->f_138 == 12)
				{
					func_393(uParam0);
				}
				else
				{
					func_408(uParam0);
				}
			}
			else if (aggregate_func_2927(&(uParam0->f_149[7]), 1))
			{
				aggregate_func_7905(65536);
				aggregate_func_7192(&(uParam0->f_149));
				aggregate_func_4242(uParam0, 0);
				aggregate_func_4750(&(uParam0->f_49), 15);
				uParam0->f_181 = 0;
			}
			else if (aggregate_func_455(&(uParam0->f_149[1]), 1))
			{
				aggregate_func_7905(65536);
				aggregate_func_7192(&(uParam0->f_149));
				aggregate_func_4242(uParam0, 0);
				uParam0->f_181 = 0;
				aggregate_func_1426(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				aggregate_func_4750(&(uParam0->f_49), 1);
				aggregate_func_4242(uParam0, 0);
				return false;
			}
			else if (aggregate_func_1549(&(uParam0->f_149[1]), 1))
			{
				if (!aggregate_func_4260(&(uParam0->f_49.f_86)))
				{
					aggregate_func_4283(&(uParam0->f_49.f_86));
				}
				else if (aggregate_func_4628(&(uParam0->f_49.f_86), 0.1f))
				{
					aggregate_func_2052(&(uParam0->f_149[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (aggregate_func_4260(&(uParam0->f_49.f_86)))
				{
					aggregate_func_4313(&(uParam0->f_49.f_86));
				}
				if (aggregate_func_2875(&(uParam0->f_149[1])))
				{
					aggregate_func_2052(&(uParam0->f_149[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_hawk_01"):
		case joaat("a_c_cormorant_01"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_roseatespoonbill_01"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_owl_01"):
		case joaat("a_c_raven_01"):
		case joaat("a_c_cranewhooping_01"):
		case joaat("a_c_redfootedbooby_01"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_seagull_01"):
		case joaat("a_c_crow_01"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_loon_01"):
		case joaat("a_c_woodpecker_01"):
		case 729471181:
		case joaat("a_c_egret_01"):
		case joaat("a_c_heron_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_californiacondor_01"):
		case joaat("a_c_eagle_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_cardinal_01"):
			return 166398389 /* GXTEntry: "Plain Game Bird" */;
		case joaat("a_c_armadillo_01"):
		case joaat("a_c_snakeredboa_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_possum_01"):
		case joaat("a_c_skunk_01"):
		case joaat("a_c_badger_01"):
		case joaat("a_c_muskrat_01"):
		case joaat("a_c_snakewater_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_coyote_01"):
		case joaat("a_c_snake_01"):
		case joaat("a_c_beaver_01"):
		case joaat("a_c_snakeblacktailrattle_01"):
		case joaat("a_c_rat_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_snakeferdelance_01"):
		case joaat("a_c_squirrel_01"):
			return -467118139 /* GXTEntry: "Plain Stringy Meat" */;
		case joaat("a_c_iguana_01"):
		case joaat("a_c_turtlesea_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_iguanadesert_01"):
		case joaat("a_c_turtlesnapping_01"):
		case joaat("a_c_toad_01"):
			return 524620511 /* GXTEntry: "Plain Herptile" */;
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_xl"):
		case joaat("a_c_fishlongnosegar_01_lg"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_lg"):
		case joaat("a_c_fishbluegil_01_ms"):
			return -1768405210 /* GXTEntry: "Gritty Fish" */;
		case joaat("a_c_bighornram_01"):
		case joaat("a_c_goat_01"):
		case joaat("a_c_sheep_01"):
			return -546209848 /* GXTEntry: "Plain Mutton" */;
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_fishsmallmouthbass_01_lg"):
		case joaat("a_c_fishmuskie_01_lg"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_fishlakesturgeon_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_fishnorthernpike_01_lg"):
		case joaat("a_c_fishperch_01_sm"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
			return 880496229 /* GXTEntry: "Plain Flaky Fish" */;
		case joaat("a_c_chicken_01"):
		case joaat("a_c_turkeywild_01"):
		case joaat("a_c_turkey_01"):
		case joaat("a_c_turkey_02"):
		case joaat("a_c_goosecanada_01"):
		case joaat("a_c_rooster_01"):
		case joaat("a_c_prairiechicken_01"):
			return 2058993648 /* GXTEntry: "Plain Plump Bird" */;
		case joaat("a_c_cow"):
		case joaat("a_c_bull_01"):
		case joaat("a_c_ox_01"):
		case joaat("a_c_buffalo_01"):
			return -1535978095 /* GXTEntry: "Plain Prime Beef" */;
		case joaat("a_c_elk_01"):
		case joaat("a_c_buck_01"):
		case joaat("a_c_moose_01"):
		case joaat("a_c_deer_01"):
		case joaat("a_c_pronghorn_01"):
			return -151108755 /* GXTEntry: "Plain Venison" */;
		case joaat("a_c_pig_01"):
		case joaat("a_c_javelina_01"):
		case joaat("a_c_boar_01"):
			return 1663095412 /* GXTEntry: "Plain Pork" */;
		case joaat("a_c_duck_01"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_pheasant_01"):
		case joaat("a_c_quail_01"):
			return -348823399 /* GXTEntry: "Plain Game" */;
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_fishrainbowtrout_01_lg"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_fishsalmonsockeye_01_lg"):
			return -1240620284 /* GXTEntry: "Plain Succulent Fish" */;
		case joaat("a_c_parrot_01"):
		case joaat("a_c_pelican_01"):
		case joaat("a_c_carolinaparakeet_01"):
			return 532201260 /* GXTEntry: "Plain Exotic Bird" */;
		case joaat("a_c_alligator_01"):
		case joaat("a_c_alligator_02"):
		case joaat("a_c_alligator_03"):
		case joaat("a_c_wolf"):
		case joaat("a_c_bear_01"):
		case joaat("a_c_wolf_medium"):
		case joaat("a_c_wolf_small"):
		case joaat("a_c_cougar_01"):
		case joaat("a_c_bearblack_01"):
		case joaat("a_c_panther_01"):
			return 1610737930 /* GXTEntry: "Plain Big Game" */;
		case joaat("a_c_crab_01"):
			return -1277667710 /* GXTEntry: "Plain Crustacean" */;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_827(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_260()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	int iVar0;

	uParam0->f_144 = func_59();
	iVar0 = func_35(uParam0);
	if ((((uParam0->f_145 == -1 || iVar0 == uParam0->f_145) && (uParam0->f_146 == 0 || func_488(uParam0->f_144, uParam0->f_146))) || (uParam0->f_145 == -1 && func_488(uParam0->f_144, uParam0->f_146))) && !(PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
	{
		uParam0->f_143 = iVar0;
		return true;
	}
	return false;
}

void func_265(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_266(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_75(-1890302844, 0.5f);
				break;
			case 7:
				func_75(36116464, 0.5f);
				break;
		}
	}
	return 0;
}

bool func_268(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	PED::_0x6D07B371E9439019(Global_35);
	return TASK::_0x79197F7D2BB5E73A(iParam0, uParam1, sParam2, sParam3, iParam4, 0);
}

int func_381()
{
	bool bVar0;
	bool bVar1;

	if (!aggregate_func_5072(&bVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	bVar1 = aggregate_func_8803(bVar0);
	if (bVar1 == -358215195)
	{
		return 0;
	}
	func_584(&(Global_1951131->f_81[aggregate_func_4716(bVar1, 1) /*12*/]), 8);
	aggregate_func_4733(22, 0, 0, 0, 0);
	return 1;
}

int func_383(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_3032(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_384(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_49.f_21++;
	}
	if (uParam0->f_49.f_33 == -1)
	{
		iVar0 = aggregate_func_1136(uParam0->f_49.f_73, 0, 0, 0);
		iVar1 = aggregate_func_5296(uParam0->f_49.f_73, 0);
		iVar2 = aggregate_func_8801(uParam0->f_49.f_73, uParam0->f_49.f_74, aggregate_func_3964());
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_33 = aggregate_func_4937(iVar1, iVar2);
	}
	if (aggregate_func_3102(uParam0->f_49.f_73))
	{
		if (bParam3)
		{
			aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (aggregate_func_2900(uParam0->f_49.f_73, -1636519629) == -701492487)
		{
			aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (aggregate_func_2900(uParam0->f_49.f_73, -1636519629) == -701492487)
	{
		aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		aggregate_func_2052(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

void func_388(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((aggregate_func_2852(bParam0, 1573112293) || aggregate_func_2852(bParam0, 672467738)) || aggregate_func_2852(bParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939057->f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var11.f_1[iVar0]), Var33[iVar0 /*7*/]))
			{
				switch ((Var33[iVar0 /*7*/])->f_1)
				{
					case -943921969:
						fVar1 = aggregate_func_424(0, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate_func_1743((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						fVar3 = aggregate_func_424(2, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate_func_3574((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						fVar2 = aggregate_func_424(1, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate_func_1744((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = aggregate_func_4614((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate_func_4610(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = aggregate_func_4614((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate_func_4610(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = aggregate_func_4614((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate_func_4610(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						aggregate_func_4629((BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch ((Var33[iVar0 /*7*/])->f_1)
							{
								case 2062242710:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = aggregate_func_4621(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate_func_1997(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			aggregate_func_7118(bParam0, bVar8, bVar9, 562618531);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar1, fVar2, fVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

bool func_391(int iParam0)
{
	switch (iParam0)
	{
		case -1433449364:
		case -597629206:
		case -571916863:
		case -518407211:
		case 825619760:
		case 1135271674:
		case 1316803372:
		case 1662215698:
		case 1844142525:
		case 2058555960:
			return true;
		default:
			break;
	}
	return false;
}

void func_393(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_74 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		aggregate_func_1962(aggregate_func_4347(1281481195), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
	aggregate_func_7904(16384);
	aggregate_func_7905(65536);
	aggregate_func_8799(16);
	if (aggregate_func_2892(0) && !aggregate_func_1519())
	{
		aggregate_func_3132(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, aggregate_func_3964(), 0);
	}
	aggregate_func_2878(uParam0->f_149[3], 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (aggregate_func_4240(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (aggregate_func_4240(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_384(uParam0, 3, 0, 0);
	aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
	aggregate_func_2079(&(uParam0->f_149[3]), -1067771379, 0, 1);
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_147));
	}
	uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_36, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
	OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 0f, 1);
	uParam0->f_176 = 3;
	aggregate_func_7192(&(uParam0->f_49));
	aggregate_func_4750(&(uParam0->f_49), 0);
	func_395();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	aggregate_func_4242(uParam0, 9);
}

int func_395()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!aggregate_func_7493())
	{
		return 0;
	}
	if (!aggregate_func_5072(&bVar0))
	{
		return 0;
	}
	if (!aggregate_func_3619(bVar0))
	{
		return 0;
	}
	bVar1 = aggregate_func_8803(bVar0);
	if (bVar1 == -358215195)
	{
		return 0;
	}
	aggregate_func_4247(&iVar2, 1);
	return aggregate_func_2496(bVar0, iVar2);
}

void func_397(var uParam0, int iParam1)
{
	bool bVar0;

	if (aggregate_func_1549(&(uParam0->f_149[3]), 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case 1412614124:
		case 2134236454:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(1868334347, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -341412437:
		case -283636008:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-1169480623, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 512684539:
		case 970934364:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-348575163, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -87088667:
		case -8536912:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-266297705, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_398(var uParam0)
{
	if (!aggregate_func_2875(&(uParam0->f_149[5])))
	{
		return;
	}
	if (!aggregate_func_6544(2))
	{
		aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	if (aggregate_func_5107(uParam0->f_49.f_22))
	{
		aggregate_func_4583(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	func_401();
	aggregate_func_4583(&(uParam0->f_149[5]), 1, 1, 1);
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_384(uParam0, 3, 0, 1);
		aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
		aggregate_func_2079(&(uParam0->f_149[3]), -1067771379, 0, 1);
	}
	uParam0->f_149[7] = aggregate_func_2385("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_149[1] = aggregate_func_2385("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	aggregate_func_2655(uParam0->f_149[1], "INPUT_PCRAFT_EXIT");
	aggregate_func_4823(&(uParam0->f_149[7]), 0, 1);
	aggregate_func_2079(&(uParam0->f_149[7]), -1067771379, 0, 1);
	aggregate_func_2079(&(uParam0->f_149[1]), -1067771379, 0, 1);
	aggregate_func_2057(&(uParam0->f_149[1]), 19, 1, 1);
	aggregate_func_2057(&(uParam0->f_149[1]), 20, 1, 1);
	aggregate_func_2057(&(uParam0->f_149[1]), 13, 1, 1);
	aggregate_func_2057(&(uParam0->f_149[7]), 13, 1, 1);
	aggregate_func_4583(&(uParam0->f_149[7]), 0, 1, 1);
	aggregate_func_4583(&(uParam0->f_149[1]), 0, 1, 1);
}

void func_401()
{
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8166(2));
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8166(0));
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8166(1));
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8167(2));
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8167(0));
	HUD::_0xC9CAEAEEC1256E54(aggregate_func_8167(1));
}

void func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate_func_4637(&(uParam0->f_149[3]), 0))
		{
			if (((aggregate_func_2875(&(uParam0->f_149[3])) && (uParam0->f_49.f_73 == -1199896558 || !aggregate_func_5359(uParam0->f_49.f_73, 1, 0))) && !aggregate_func_5107(uParam0->f_49.f_22)) && aggregate_func_5539(uParam0->f_49.f_73, uParam0->f_49.f_74, 0, aggregate_func_3964(), 0))
			{
				aggregate_func_4583(&(uParam0->f_149[3]), 1, 1, 1);
			}
		}
	}
	if (!aggregate_func_4637(&(uParam0->f_149[7]), 0))
	{
		aggregate_func_4583(&(uParam0->f_149[7]), 1, 1, 1);
		aggregate_func_4823(&(uParam0->f_149[7]), 0, 1);
	}
	if (!aggregate_func_4637(&(uParam0->f_149[1]), 0))
	{
		aggregate_func_4583(&(uParam0->f_149[1]), 1, 1, 1);
	}
}

void func_408(var uParam0)
{
	int iVar0;
	int iVar1;

	aggregate_func_2878(uParam0->f_149[3], 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (aggregate_func_4240(uParam0->f_139, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.8f));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_149[3] = aggregate_func_2385("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_384(uParam0, 3, 0, 0);
	aggregate_func_2079(&(uParam0->f_149[3]), -1067771379, 0, 1);
	if (aggregate_func_2892(0) && !aggregate_func_1519())
	{
		aggregate_func_3132(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, aggregate_func_3964(), 0);
	}
	aggregate_func_4583(&(uParam0->f_149[3]), 0, 1, 1);
	func_395();
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	aggregate_func_4242(uParam0, 1);
}

bool func_411(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = aggregate_func_2827(bParam1);
		iVar5 = aggregate_func_3500(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (aggregate_func_1974(bParam0, iVar1, iVar2))
				{
					*uParam4 = { aggregate_func_304(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { aggregate_func_2828(bParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = aggregate_func_1499(0);
			Var37 = { aggregate_func_304(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { aggregate_func_2828(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = aggregate_func_2827(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (aggregate_func_1974(bParam0, iVar1, iVar2))
							{
								if (aggregate_func_4272(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_414(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (!func_411(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { aggregate_func_5233() };
	Var14 = { aggregate_func_2828(bParam0, Var10, iVar9, 0) };
	if (aggregate_func_2072(Var14, iParam1))
	{
		if (aggregate_func_5478(bParam0))
		{
			if (aggregate_func_5269(325139909, &bVar18))
			{
				if (func_414(bVar18, 0))
				{
				}
			}
		}
		else if (aggregate_func_5479(bParam0))
		{
			if (aggregate_func_5269(325139909, &bVar19))
			{
				if (func_414(bVar19, 0))
				{
				}
			}
			if (aggregate_func_5269(-1189569496, &bVar20))
			{
				if (func_414(bVar20, 0))
				{
				}
			}
		}
		else if (aggregate_func_5480(bParam0))
		{
			if (aggregate_func_5269(325139909, &bVar21))
			{
				if (func_414(bVar21, 0))
				{
				}
			}
			if (aggregate_func_5269(-1189569496, &bVar22))
			{
				if (func_414(bVar22, 0))
				{
				}
			}
			if (aggregate_func_5269(-997150586, &bVar23))
			{
				if (func_414(bVar23, 0))
				{
				}
			}
		}
		else if (aggregate_func_5474(bParam0))
		{
			if (aggregate_func_5269(325139909, &bVar24))
			{
				if (func_414(bVar24, 0))
				{
				}
			}
			if (aggregate_func_5269(986998820, &bVar25))
			{
				if (func_414(bVar25, 0))
				{
				}
			}
			bVar26 = aggregate_func_5475(bParam0);
			if (aggregate_func_2823(bVar26, 0))
			{
				if (func_414(bVar26, 1))
				{
				}
			}
		}
		func_417();
		return true;
	}
	return false;
}

int func_417()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { aggregate_func_304(856287005, 0, 0) };
	Var5 = { aggregate_func_2828(856287005, Var0, Var0.f_4, 0) };
	iVar10 = aggregate_func_2827(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &iVar11))
	{
		bVar14 = aggregate_func_4299(Var5, -415648720, 0, -1);
	}
	if (!aggregate_func_2823(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = aggregate_func_3500(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = aggregate_func_4299(Var5, iVar11, 0, -1);
			if (!aggregate_func_2823(bVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((aggregate_func_5474(bVar14) || aggregate_func_5478(bVar14)) || aggregate_func_5479(bVar14)) || aggregate_func_5480(bVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == -1189569496)
						{
							if (aggregate_func_5479(bVar14) || aggregate_func_5480(bVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == -997150586)
								{
									if (aggregate_func_5480(bVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == 986998820)
										{
											if (aggregate_func_5474(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == -1189569496)
												{
													if (!aggregate_func_5474(bVar14) && aggregate_func_5481(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_645(iVar11, &Var16, 1))
													{
														if (!aggregate_func_2072(Var16, 1))
														{
														}
													}
												}
											}
											iVar9++;
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_481(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_1136(bParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!aggregate_func_1174(bParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			aggregate_func_3110(bParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!aggregate_func_2140(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			aggregate_func_3110(bParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			aggregate_func_2916("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_488(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_550(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_584(bool bParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	bVar1 = aggregate_func_8803(bParam0);
	iVar2 = aggregate_func_4716(bVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (aggregate_func_5196(bParam0) && aggregate_func_5193(bParam0))
	{
		iParam1 |= 64;
	}
	if (((bVar1 == 1108822547 && aggregate_func_4734(32768)) || &Global_1951131->f_1657.f_1[iVar2 /*3*/] != &Global_1951131->f_81[iVar2 /*12*/]) && bParam0 != &Global_1951131->f_1657.f_1[iVar2 /*3*/])
	{
		if (aggregate_func_5196(&(Global_1951131->f_1657.f_1[iVar2 /*3*/])) && aggregate_func_5193(&(Global_1951131->f_1657.f_1[iVar2 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1951131->f_81[iVar2 /*12*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (aggregate_func_2827(bParam0))
		{
			case 81053684:
				if (aggregate_func_5102(-525676072, &uVar0))
				{
					iVar3 = aggregate_func_4716(aggregate_func_3675(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
						Jump @465; //curOff = 294
						if (aggregate_func_4734(32768))
						{
							aggregate_func_4545(func_550(iVar2, 1));
						}
						if (aggregate_func_5102(81053684, &uVar4))
						{
							iVar3 = aggregate_func_4716(aggregate_func_3675(81053684), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
								Jump @465; //curOff = 380
								if (!aggregate_func_2852(bParam0, -1348134986))
								{
								}
								else
								{
									if (aggregate_func_5102(-525676072, &uVar0))
									{
										iVar3 = aggregate_func_4716(aggregate_func_3675(-525676072), 1);
										if (iVar3 == 39)
										{
										}
										else
										{
											Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
										}
										Global_1951131->f_2548[iVar2 /*2*/] = bParam0;
										aggregate_func_5609(bVar1, iParam1, 6);
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

int func_585(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	bool bVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;

	if (!aggregate_func_2892(0))
	{
		return 0;
	}
	else if (aggregate_func_1519())
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!aggregate_func_3933(bParam0, 1, bParam1, &bVar31, &uVar35, bParam3, iParam4))
	{
		bVar33 = bVar31;
		return 0;
	}
	if (aggregate_func_2010(bParam0, bParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			bVar33 = &Var0[iVar36 /*2*/];
			if (aggregate_func_2823(bVar33, 0))
			{
				if (bVar33 == 2084597891)
				{
					aggregate_func_7592((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (aggregate_func_4998(bVar33) || aggregate_func_4999(bVar33))
					{
						if (!aggregate_func_2850(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							iVar37 = aggregate_func_231(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						aggregate_func_4647(bVar33, iVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - iVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!aggregate_func_2850(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_756(bVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (aggregate_func_2850(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								aggregate_func_1174(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (aggregate_func_928(bVar33) > 0)
						{
							aggregate_func_460(bVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (aggregate_func_1157(7, bVar33) > 0)
							{
								aggregate_func_1188(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - aggregate_func_1188(7, bVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							aggregate_func_1174(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (aggregate_func_4998(bVar33) || aggregate_func_4999(bVar33))
					{
						if (!aggregate_func_2850(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							func_756(bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					aggregate_func_1174(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
				}
				else
				{
					aggregate_func_5482(bVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = aggregate_func_4494(bVar33);
				if (aggregate_func_4542(iVar38))
				{
					bVar39 = aggregate_func_4539(iVar38);
					aggregate_func_1962(aggregate_func_4257(-333926856, bVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

void func_615(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!aggregate_func_2823(bParam1, 0))
	{
		if (aggregate_func_2875(uParam0[1]))
		{
			aggregate_func_4583(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = aggregate_func_3964();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913156->f_1579 && aggregate_func_2074(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!aggregate_func_8816(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || aggregate_func_5107(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !aggregate_func_8817(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != -1199896558 && aggregate_func_5359(bParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || bParam2 == -214678071) || bParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!aggregate_func_6544(2) && aggregate_func_2900(bParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			iVar6 = aggregate_func_1136(bParam1, 0, 0, 0);
			iVar7 = aggregate_func_5296(bParam1, 0);
			iVar8 = aggregate_func_8801(bParam1, bParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_33 = aggregate_func_4937(iVar7, iVar8);
		}
	}
	if (aggregate_func_2875(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			aggregate_func_2052(uParam0[1], "DONATE_ING", 1);
		}
		else if (aggregate_func_3102(bParam1))
		{
			aggregate_func_2052(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (aggregate_func_2900(bParam1, -1636519629) == -701492487)
		{
			aggregate_func_2052(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			aggregate_func_2052(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		aggregate_func_4583(uParam0[1], bVar3, 1, 1);
	}
	func_797(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (aggregate_func_2875(uParam0[6]))
	{
		aggregate_func_4583(uParam0[6], !bVar4, 1, 1);
	}
	aggregate_func_8818(uParam0);
}

void func_618(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (aggregate_func_2823(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_36, uParam0->f_73, -2136842124 /* GXTEntry: "Cripps makes a special stew every 3 days. Collect the required ingredients and dr" +
    "op them off at your Camp." */, 0);
		aggregate_func_2010(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, false, "CAMP_RECIPE_LOG_ALL_OBJ", false, 1, 0);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = &Var1[iVar33 /*2*/];
				if (aggregate_func_2823(bVar34, 0))
				{
					iVar36 = aggregate_func_1136(bVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, bVar34));
					bVar37 = aggregate_func_2850(bVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, bVar34, sVar35, bVar37, 1, 1);
				}
				iVar33++;
			}
		}
		if (aggregate_func_924(uParam0->f_73, &Var38, joaat("inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1129497->f_339.f_16 = uParam0->f_73;
		Global_1129497->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	aggregate_func_8818(uParam0);
}

void func_622(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_78 = !uParam0->f_78;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", uParam0->f_78);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", !uParam0->f_78);
	if (!uParam0->f_78)
	{
		if (aggregate_func_2875(uParam0[6]))
		{
			aggregate_func_2052(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		aggregate_func_2657(uParam0);
	}
	else
	{
		if (aggregate_func_2875(uParam0[6]))
		{
			aggregate_func_2052(uParam0[6], "INGREDIENTS", 1);
		}
		aggregate_func_511(uParam0);
	}
	if (uParam0->f_74 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants") <= 1 && uParam0->f_78)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = aggregate_func_8801(uParam0->f_73, uParam0->f_74, aggregate_func_3964());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

bool func_645(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { aggregate_func_4303(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	aggregate_func_2839(&Var2, aggregate_func_5233());
	if (aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (aggregate_func_2840(&Var16, iVar30, iVar0, iVar1))
			{
				if (aggregate_func_2823(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && aggregate_func_5481(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						aggregate_func_2837(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		aggregate_func_2837(iVar0);
	}
	return false;
}

void func_756(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = aggregate_func_2900(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { aggregate_func_4965(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (aggregate_func_2989(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = aggregate_func_2076(iVar14, iVar0);
					if (aggregate_func_2823(bVar13, 0) && bParam0 != bVar13)
					{
						iVar15 = aggregate_func_1136(bVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - aggregate_func_5276(bVar13, bParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			aggregate_func_2990(iVar0);
		}
	}
}

void func_787(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	bool bVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = ((*Global_1913156)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = aggregate_func_8801(bVar3, bVar4, bParam2);
	iVar6 = aggregate_func_1136(bVar3, 0, 0, 0);
	iVar7 = aggregate_func_5296(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, aggregate_func_4937(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (uParam0->f_25)
	{
		bVar9 = aggregate_func_4295((iVar5 > 0 && aggregate_func_8817(bVar3)), 1, 0);
	}
	else
	{
		bVar9 = aggregate_func_4295((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (bVar9 == 0 && aggregate_func_8823(bVar3))
	{
		if (aggregate_func_2660(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &bVar13))
		{
			bVar9 = true;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", bVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_28)
	{
		if ((bVar4 == -214678071 || bVar4 == 278772510) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (!Global_1913156->f_1579 && aggregate_func_2074(bVar3, bVar4, 1))
	{
		bVar9 = false;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (bVar9 == 1)
	{
		if (!aggregate_func_6544(2) && aggregate_func_2900(bVar3, -1636519629) == -701492487)
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
			bVar9 = false;
		}
		else
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && bVar9 == 0) && ((*Global_1913156)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (aggregate_func_915(bVar3, &Var15, joaat("inventory"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", false);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
				{
					bVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", bVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", bVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", bVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", bVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", bVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", bVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", bVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", bVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", bVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_28)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (bVar10 && !bParam6)
	{
		bVar9 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", bVar9);
}

bool func_797(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	bool bVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_47);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_47, &(uParam2->f_42[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", false);
		iVar33++;
	}
	if (!bParam4 && aggregate_func_2010(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = &Var0[iVar33 /*2*/];
				if (aggregate_func_2823(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", true);
					if (aggregate_func_915(bVar31, &Var35, joaat("inventory"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					bVar38 = aggregate_func_1136(bVar31, 0, 0, 0);
					bVar39 = bVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", bVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", aggregate_func_4295(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, aggregate_func_4295(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, 309940639, &(uParam2->f_42[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
		{
			bVar34 = false;
			if (aggregate_func_3102(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = aggregate_func_1136(bParam0, 0, 0, 0);
			iVar44 = aggregate_func_5296(bParam0, 0);
			if (uParam2->f_25 && !aggregate_func_8817(bParam0))
			{
				bVar34 = false;
				bVar45 = aggregate_func_1879();
				if (bParam0 == bVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = aggregate_func_2900(bParam0, -1636519629);
				if (!aggregate_func_6544(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = aggregate_func_8801(bParam0, uParam2->f_74, aggregate_func_3964());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, aggregate_func_8825(bParam0)));
					}
					else if (uParam2->f_74 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_69, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_35, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_74 == 278772510)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
	{
		bVar34 = false;
		if (aggregate_func_3102(bParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !aggregate_func_8817(bParam0))
	{
		bVar49 = aggregate_func_1879();
		if (bParam0 == bVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_927(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	bool bVar51;

	bVar0 = ((*Global_1913156)[bParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, bParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[bParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913156)[bParam1 /*9*/])->f_1 = iVar5;
	bVar6 = ((*Global_1913156)[bParam1 /*9*/])->f_5;
	iVar7 = aggregate_func_8801(bVar0, bVar6, bParam3);
	iVar8 = aggregate_func_1136(bVar0, 0, 0, 0);
	iVar9 = aggregate_func_5296(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", bParam1);
	if (!Global_1913156->f_1579 && aggregate_func_2074(bVar0, bVar6, 1))
	{
		bVar10 = true;
		((*Global_1913156)[bParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913156)[bParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913156)[bParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -257768755);
	StringIntConCat(&cVar11, aggregate_func_4937(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		bVar12 = aggregate_func_4295(((iVar7 > 0 && aggregate_func_8817(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		bVar12 = aggregate_func_4295(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (bVar12 == 0 && aggregate_func_8823(bVar0))
	{
		if (aggregate_func_2660(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &bVar16))
		{
			bVar12 = true;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", bVar16);
		}
	}
	if (aggregate_func_915(bVar0, &Var17, joaat("inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((bVar6 == -214678071 || bVar6 == 278772510) || bVar6 == -257768755)
		{
			bVar12 = false;
		}
	}
	if (bVar12 == 1)
	{
		if (!aggregate_func_6544(2) && aggregate_func_2900(bVar0, -1636519629) == -701492487)
		{
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
			bVar12 = false;
		}
		else
		{
			uParam0->f_55++;
			if (aggregate_func_5330(bVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", bVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", false);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
			{
				bVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", bVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", bVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", bVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", bVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", bVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", bVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", bVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", bVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", bVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, -2047994727, iVar5);
	}
}

