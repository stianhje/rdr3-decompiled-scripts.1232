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
	struct<2> Local_21 = { 0, 0 } ;
	int iLocal_23 = 0;
	vector3 vLocal_24[32] = {{ NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf }, { NaNf, 0f, NaNf } };
	struct<2> Local_121 = { 0, 0 } ;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_8(var uParam0)
{
	aggregate_func_1994(32, -1);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_23, 1, 43);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&iLocal_23), 1, "m_PHST_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_24, 97, 44);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(vLocal_24[0 /*3*/]), 97, "m_PHST_PlayerData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_238(uParam0->f_4, &iVar0))
	{
		return;
	}
	aggregate_func_3021(iVar0);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar1 != Local_21.f_1)
	{
		Local_21.f_1 = iVar1;
		if (Global_1051387->f_4537 && SCRIPTS::_DOES_THREAD_EXIST(Local_21))
		{
			Global_1051387->f_4537.f_3 = 1;
		}
		vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
		(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1 = 0;
	}
	if (((_NAMESPACE26::_0xD6F6ACF4392187FB(Local_21.f_1) && _NAMESPACE26::_0x0F99F6436528A089(Local_21.f_1)) && !(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1) && STREAMING::_IS_IMAP_ACTIVE(iVar0))
	{
		if (iLocal_23 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1 = 1;
		}
		else
		{
			iVar4 = 0;
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (((iVar3 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/])->f_1)
				{
					if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
					{
						vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = &vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/];
						(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1 = 1;
						Jump @321; //curOff = 290
					}
					else
					{
						MISC::SET_BIT(&iVar4, &(vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/]));
					}
				}
				iVar2++;
			}
			if (!(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1)
			{
				iVar2 = 0;
				while (iVar2 < 32)
				{
					if (!MISC::IS_BIT_SET(iVar4, iVar2))
					{
						vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar6 = 0;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5)) && &vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5) /*3*/] > -1) && !(vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5) /*3*/])->f_1)
			{
				iVar6 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar5);
				iVar7 = &vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5) /*3*/];
			}
			else
			{
				iVar2++;
			}
		}
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/])->f_1)
			{
				if (iVar6 != 0 && &vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/] >= iVar7)
				{
					iVar6 = 0;
				}
			}
			iVar2++;
		}
		iLocal_23 = iVar6;
	}
}

void func_39(var uParam0)
{
	vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1 = 0;
}

void func_41(var uParam0)
{
	aggregate_func_6708(uParam0, 0, 62137, 62292, 62394, 62408);
	aggregate_func_6708(uParam0, 14, 62137, 62292, 62394, 62408);
	aggregate_func_7000(uParam0, 14, 62563);
	aggregate_func_7686(uParam0, 14, 62907);
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_21 = 1;
	uParam0->f_2421.f_22 = 63797;
}

void func_136(var uParam0)
{
	int iVar0;

	if (func_238(uParam0->f_4, &iVar0))
	{
		aggregate_func_3000(iVar0);
	}
}

bool func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			*iParam1 = -924548651;
			return true;
		case 60:
			*iParam1 = 925683259;
			return true;
		default:
			break;
	}
	return false;
}

bool func_323(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate_func_4268(vParam3))
	{
		return false;
	}
	if (aggregate_func_4268(vParam6))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iParam11))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam9))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1748) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1748, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1748, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1748, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1749) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1749, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1749, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1749, 0);
	}
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate_func_6463(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate_func_3214(aggregate_func_6464(iParam2)))
	{
		if (!func_738(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_739(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 138236);
	aggregate_func_4242(&(uParam0->f_4), 138273);
	aggregate_func_4932(&(uParam0->f_4), 138301);
	aggregate_func_4932(&(uParam0->f_4), 138836);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate_func_4750(uParam0, 1);
	return true;
}

int func_339(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		return 0;
	}
	else if (CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	Global_1051387->f_4537.f_3 = 0;
	if (uParam0->f_20 == 14 || Global_1051387->f_4558 == uParam0->f_4)
	{
		Global_1051387->f_4537 = 1;
		aggregate_func_4355(4);
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_758(uParam0->f_3, uParam0->f_4);
		}
	}
	else
	{
		Global_1051387->f_4537 = 0;
		aggregate_func_4355(4);
	}
	(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2 = uParam0->f_4;
	return 1;
}

int func_340(var uParam0)
{
	int iVar0;

	if (!(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1 && Global_1051387->f_4537)
	{
		return 1;
	}
	SCRIPTS::REQUEST_SCRIPT("shop_photo_shoot");
	if (SCRIPTS::HAS_SCRIPT_LOADED("shop_photo_shoot"))
	{
		iVar0 = &vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/];
		if (!Global_1051387->f_4537)
		{
			iVar0 = -1;
		}
		Local_21 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("shop_photo_shoot", &iVar0, 1, 6005);
		return 1;
	}
	return 0;
}

bool func_341(var uParam0)
{
	return SCRIPTS::_DOES_THREAD_EXIST(Local_21);
}

void func_342(var uParam0)
{
	Global_1051387->f_4537.f_3 = 1;
	if (aggregate_func_3575(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		(vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2 = -1;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

int func_344(var uParam0)
{
	int iVar0;
	int iVar1;

	if ((vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1)
	{
		if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(Local_21.f_1) == PLAYER::PLAYER_ID())
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if ((((((iVar1 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1)) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/])->f_1) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/])->f_2 != -1) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/])->f_2 != uParam0->f_4)
				{
					return 0;
				}
				iVar0++;
			}
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (((((iVar1 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1)) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/])->f_1) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1) /*3*/])->f_2 == uParam0->f_4) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(Local_21.f_1) == iVar1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_346(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar1 = false;
	if ((vLocal_24[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1)
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (((((iVar3 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3)) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar3)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3)) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/])->f_1) && (vLocal_24[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3) /*3*/])->f_2 == uParam0->f_4)
			{
				bVar1 = true;
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		iVar0 = aggregate_func_2045("SHOP_PHOTO_STUDIO_JOIN", iParam1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar0 = aggregate_func_2045("SHOP_PHOTO_STUDIO_POSSE", iParam1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	}
	return iVar0;
}

int func_353(var uParam0)
{
	if (uParam0->f_50 == 7)
	{
		switch (Local_121)
		{
			case 0:
				aggregate_func_7241();
				func_769();
				Global_1051387->f_4537.f_5 = -1;
				func_770(1, uParam0);
				break;
			case 1:
				switch (Global_1051387->f_4537.f_7)
				{
					case 4:
						if (!aggregate_func_4281(1))
						{
							if (aggregate_func_4574(500))
							{
								func_770(3, uParam0);
							}
							else
							{
								func_770(9, uParam0);
							}
						}
						break;
					case 5:
						if (aggregate_func_4574(500))
						{
							if (!aggregate_func_4260(&(uParam0->f_80)))
							{
								aggregate_func_4293(&(uParam0->f_80), 0);
							}
							else if (aggregate_func_1526(&(uParam0->f_80)) > 30000)
							{
								func_770(2, uParam0);
								aggregate_func_4313(&(uParam0->f_80));
							}
						}
						break;
					case 11:
						func_770(4, uParam0);
						break;
					case 9:
						func_770(7, uParam0);
						break;
					case 8:
						func_770(6, uParam0);
						break;
					case 13:
						func_770(8, uParam0);
						break;
				}
				if (Global_1051387->f_4537.f_5 >= 0)
				{
					func_770(5, uParam0);
				}
				break;
			case 2:
				if (func_774(uParam0))
				{
					func_770(10, uParam0);
				}
				break;
			case 3:
				if (func_775(uParam0))
				{
					aggregate_func_4355(1);
					func_770(4, uParam0);
				}
				break;
			case 4:
				if (func_776(uParam0))
				{
					func_770(10, uParam0);
				}
				break;
			case 5:
				if (Global_1051387->f_4537.f_7 == 13)
				{
					Global_1051387->f_4537.f_5 = -99;
					func_770(8, uParam0);
				}
				else if (func_777(uParam0))
				{
					Global_1051387->f_4537.f_5 = -1;
					func_770(10, uParam0);
				}
				break;
			case 6:
				func_770(10, uParam0);
				break;
			case 7:
				func_770(10, uParam0);
				break;
			case 8:
				if (func_778(uParam0))
				{
					aggregate_func_6008(uParam0);
					func_770(10, uParam0);
				}
				break;
			case 9:
				if (func_779(uParam0))
				{
					aggregate_func_4355(1);
					func_770(10, uParam0);
				}
				break;
			case 10:
				uParam0->f_44 = 0;
				func_770(1, uParam0);
				break;
		}
		return 1;
	}
	else if (func_780(uParam0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_356(int iParam0)
{
	if (!aggregate_func_4375(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 6:
			return -784.49f, -1321.95f, 42.88f;
		case 9:
			return -753.4219f, -1284.24f, 43.20049f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 19:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1521.91f, 441.15f, 89.68f;
		case 25:
			return 1523.63f, 442.65f, 89.68f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.35f, -577.48f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1329.755f, -1294.218f, 76.0092f;
		case 34:
			return 1323.734f, -1321.775f, 77.8924f;
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
		case 39:
			return 1230.34f, -1298.578f, 75.9027f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 42:
			return 2644.188f, -1292.507f, 51.2496f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
		case 46:
			return 2859.51f, -1202.16f, 48.59f;
		case 48:
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.98f, 52.68f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return -1402f, -2317f, 43.6f;
			return 0f, 0f, 0f;
		}

void func_708(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1049(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 194799);
			aggregate_func_4358(uParam0, 195719);
			aggregate_func_4358(uParam0, 196319);
			aggregate_func_4358(uParam0, 196616);
			aggregate_func_4358(uParam0, 196819);
			aggregate_func_4242(uParam0, uParam0->f_2371.f_10);
			aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate_func_951(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_738(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<173> Var0;
	int iVar189;

	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3 = -1;
	Var0.f_136.f_1.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_153 = -1;
	Var0.f_154 = -1;
	Var0.f_155 = 16;
	Var0.f_172 = 16;
	iVar189 = 0;
	iVar189 = 0;
	while (iVar189 < 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_436[iVar189 /*189*/], &Var0, 189);
		iVar189++;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam4;
	if (!aggregate_func_2177(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 219434;
	uParam0->f_1280 = 219443;
	uParam0->f_1281 = 219452;
	uParam0->f_1282 = 219452;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_739(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam3;
	if (!aggregate_func_770(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 219434;
	uParam0->f_1280 = 219443;
	uParam0->f_1281 = 219452;
	uParam0->f_1282 = 219452;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

void func_758(var uParam0, var uParam1)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;
	int iVar9;

	Var0.f_4 = 4;
	Var0.f_5 = uParam0;
	Var0.f_6 = uParam1;
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 32)
	{
		iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
		if ((iVar9 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9)) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar9))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, iVar8);
		}
		iVar8++;
	}
	aggregate_func_1237(&Var0, uVar7);
}

bool func_769()
{
	if (Global_1051387->f_4537.f_4 > 0)
	{
		if (Global_1051387->f_4537.f_1)
		{
			aggregate_func_4355(16);
		}
		if (Global_1051387->f_4537.f_2)
		{
			aggregate_func_4355(8);
		}
		if (aggregate_func_4281(16) == aggregate_func_4281(8))
		{
			aggregate_func_4355(16);
			aggregate_func_4355(8);
		}
	}
	return aggregate_func_4281(4);
}

void func_770(int iParam0, var uParam1)
{
	if (Local_121 != iParam0)
	{
		aggregate_func_4651(uParam1);
		aggregate_func_4313(&(uParam1->f_80));
		Local_121 = iParam0;
	}
}

bool func_774(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!aggregate_func_1231(uParam0->f_4) && Global_1051387->f_4537.f_7 == 5)
			{
				aggregate_func_4586(uParam0, 1);
			}
			break;
		case 1:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 9) <= 3)
			{
				switch (uParam0->f_49)
				{
					case 0:
						uParam0->f_44 = func_1206(11);
						uParam0->f_49++;
						break;
					case 1:
						if (func_1207() > 0)
						{
							if (aggregate_func_2083())
							{
								uParam0->f_44 = func_1206(30);
							}
							else
							{
								uParam0->f_44 = func_1206(29);
							}
						}
						else
						{
							uParam0->f_44 = func_1206(28);
						}
						uParam0->f_49++;
						break;
					case 2:
						if (func_1207() > 0)
						{
							uParam0->f_44 = func_1206(33);
						}
						uParam0->f_49 = 0;
						break;
				}
			}
			else
			{
				uParam0->f_44 = 0;
			}
			aggregate_func_4586(uParam0, 4);
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_775(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!aggregate_func_1231(uParam0->f_4) && Global_1051387->f_4537.f_7 == 5)
			{
				aggregate_func_4586(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate_func_5523())
			{
				if (uParam0->f_49 <= 0)
				{
					if (aggregate_func_9170())
					{
						uParam0->f_44 = func_1206(24);
					}
					else if (aggregate_func_9149())
					{
						uParam0->f_44 = func_1206(26);
					}
					else if (func_1207() == 2)
					{
						uParam0->f_44 = func_1206(23);
					}
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 1:
							uParam0->f_44 = func_1206(25);
							uParam0->f_49++;
							break;
						default:
							uParam0->f_44 = func_1206(22);
							uParam0->f_49 = 0;
							break;
					}
				}
			}
			else
			{
				uParam0->f_44 = func_1206(0);
			}
			aggregate_func_4586(uParam0, 4);
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_776(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (Global_1051387->f_4537.f_7 == 5)
			{
				if (!aggregate_func_1231(uParam0->f_4))
				{
					aggregate_func_4586(uParam0, 1);
				}
			}
			break;
		case 1:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 9) <= 4)
			{
				uParam0->f_44 = func_1211(uParam0);
				aggregate_func_4586(uParam0, 4);
			}
			else
			{
				uParam0->f_44 = 0;
				aggregate_func_4586(uParam0, 0);
				return true;
			}
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_777(var uParam0)
{
	if (Global_1051387->f_4537.f_5 == -99)
	{
		return true;
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (Global_1051387->f_4537.f_7 == 5)
			{
				if (!aggregate_func_1231(uParam0->f_4))
				{
					aggregate_func_4586(uParam0, 1);
				}
			}
			break;
		case 1:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 9) <= 3)
			{
				if (Global_1051387->f_4537.f_5 == 1)
				{
					uParam0->f_44 = func_1206(21);
				}
				else
				{
					uParam0->f_44 = func_1206(10);
				}
				aggregate_func_4586(uParam0, 4);
			}
			else
			{
				return true;
			}
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_778(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!aggregate_func_1231(uParam0->f_4))
			{
				aggregate_func_4586(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate_func_2083())
			{
				uParam0->f_44 = func_1206(12);
			}
			else if (aggregate_func_5523())
			{
				if (aggregate_func_2083())
				{
					uParam0->f_44 = func_1206(20);
					uParam0->f_49++;
				}
				else
				{
					uParam0->f_44 = func_1206(31);
					uParam0->f_49++;
				}
			}
			else
			{
				uParam0->f_44 = func_1206(19);
			}
			aggregate_func_4586(uParam0, 4);
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_779(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!aggregate_func_1231(uParam0->f_4))
			{
				aggregate_func_4586(uParam0, 1);
			}
			break;
		case 1:
			uParam0->f_44 = func_1206(1);
			aggregate_func_4586(uParam0, 4);
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_780(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (aggregate_func_6010(uParam0))
			{
				return true;
			}
			if (!aggregate_func_1231(uParam0->f_4))
			{
				if (!aggregate_func_4260(&(uParam0->f_80)))
				{
					aggregate_func_4293(&(uParam0->f_80), 0);
				}
				else if (aggregate_func_1526(&(uParam0->f_80)) > 20000)
				{
					aggregate_func_4586(uParam0, 1);
					aggregate_func_4313(&(uParam0->f_80));
				}
			}
			break;
		case 1:
			if (!aggregate_func_4281(2))
			{
				if ((uParam0->f_43 != 0 && GRAPHICS::_0xB28894CD7408BD0C() == 0) && GRAPHICS::_0x78C56B8A7B1D000C() > 0)
				{
					uParam0->f_44 = func_1206(18);
					aggregate_func_5251(uParam0, 8192);
					aggregate_func_4586(uParam0, 4);
					func_769();
					aggregate_func_4355(2);
					return true;
				}
				else
				{
					func_769();
					aggregate_func_4355(2);
				}
			}
			else
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 9) <= 3)
				{
					switch (uParam0->f_49)
					{
						case 0:
							if (aggregate_func_5523())
							{
								uParam0->f_44 = func_1206(14);
								uParam0->f_49++;
							}
							else
							{
								uParam0->f_44 = func_1206(15);
								uParam0->f_49 += 2;
							}
							break;
						case 1:
							uParam0->f_44 = func_1206(15);
							uParam0->f_49++;
							break;
						case 2:
							if (aggregate_func_5523())
							{
								uParam0->f_44 = func_1206(32);
							}
							else
							{
								uParam0->f_44 = func_1206(13);
							}
							uParam0->f_49++;
							break;
						case 3:
							uParam0->f_44 = func_1206(16);
							uParam0->f_49 = 1;
							break;
						default:
							aggregate_func_4586(uParam0, 6);
							uParam0->f_49 = 1;
							break;
					}
					aggregate_func_4586(uParam0, 4);
				}
				else
				{
					uParam0->f_44 = 0;
					aggregate_func_4586(uParam0, 0);
				}
				return true;
			}
			break;
		case 4:
			aggregate_func_471(uParam0, uParam0->f_44);
			aggregate_func_4586(uParam0, 0);
			return true;
		case 6:
			return false;
	}
	return true;
}

bool func_1049(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate_func_770(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_5663(uParam0, uParam0->f_20))
		{
			if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate_func_5663(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_6052(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate_func_4287(&(uParam0->f_2094));
	uParam0->f_2094.f_73 = 0;
	uParam0->f_2094.f_75 = 0;
	uParam0->f_2094.f_76 = 0;
	uParam0->f_2094.f_68 = 0;
	uParam0->f_2094.f_48 = 0;
	uParam0->f_2094.f_121 = 0;
	uParam0->f_2094.f_122 = -1;
	uParam0->f_2094.f_123 = -1;
	uParam0->f_2094.f_81 = 0;
	uParam0->f_2094.f_83 = 0;
	uParam0->f_2094.f_118 = 0;
	aggregate_func_5664(uParam0);
	aggregate_func_5640();
	aggregate_func_4285(uParam0);
	aggregate_func_5534();
	aggregate_func_5665(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate_func_5666(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate_func_3188(uParam0, 6, joaat("IB_EXIT"));
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_3189(uParam0, 6, 0);
	aggregate_func_3188(uParam0, 1, joaat("ib_select"));
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_3189(uParam0, 1, 0);
	aggregate_func_3188(uParam0, 2, 1891107858);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_3189(uParam0, 2, 0);
	aggregate_func_3188(uParam0, 3, -405106071);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_3189(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2094.f_133 = 0;
		uParam0->f_2094.f_135 = 0;
		uParam0->f_2094.f_131 = 0;
		uParam0->f_2094.f_137 = 0;
		uParam0->f_2094.f_143 = 0;
		uParam0->f_2094.f_139 = 0;
		uParam0->f_2094.f_145 = 0;
		uParam0->f_2094.f_147 = 0;
	}
	uParam0->f_2094.f_149 = 253327;
	uParam0->f_2094.f_150 = 254211;
	uParam0->f_2094.f_151 = 255007;
	uParam0->f_2094.f_152 = 255126;
	uParam0->f_2094.f_46 = 1;
	return true;
}

void func_1146(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	struct<8> Var16;

	if (uParam0->f_2371.f_8 == 0)
	{
		return;
	}
	HUD::_0x4CC5F2FC1332577F(uParam0->f_2371.f_5);
	switch (uParam0->f_2371.f_8)
	{
		case 2:
			if (!aggregate_func_6025(uParam0->f_2371.f_7, &(uParam0->f_2371.f_6), 0))
			{
			}
			else
			{
				if (aggregate_func_5043(4, uParam0->f_2371.f_6))
				{
					Var16 = { aggregate_func_3137(uParam0->f_2371.f_6) };
				}
				else
				{
					StringCopy(&Var16, HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_2371.f_7), 64);
				}
				if (aggregate_func_51(&Var16, "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					aggregate_func_6029(Var8, uParam0->f_2371.f_6);
					aggregate_func_4719(1048576);
					Global_1915170->f_19742.f_3.f_4 = 1;
				}
				uParam0->f_2371.f_8 = 0;
				Jump @349; //curOff = 201
				if (aggregate_func_51(HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_2371.f_7), "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					aggregate_func_6029(Var8, uParam0->f_2371.f_6);
					aggregate_func_5726(uParam0);
					Global_1951131->f_1657 = uParam0->f_2371.f_7;
					aggregate_func_6030(uParam0->f_2371.f_6, 0, 1, 6);
					aggregate_func_664(uParam0->f_2371.f_7, 0);
					aggregate_func_5727(uParam0->f_2371.f_7);
					aggregate_func_4719(1048576);
					Global_1915170->f_19742.f_3.f_4 = 1;
				}
				uParam0->f_2371.f_8 = 0;
			}
			HUD::_0x8BC7C1F929D07BF3(uParam0->f_2371.f_5);
			default:
				break;
	}
}

char* func_1206(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "BACKGROUND_DESERT";
		case 3:
			return "BACKGROUND_IDLING";
		case 9:
			return "BACKGROUND_GENERIC";
		case 5:
			return "BACKGROUND_NIAGRA";
		case 6:
			return "BACKGROUND_PARIS";
		case 7:
			return "BACKGROUND_PRAIRIE";
		case 8:
			return "BACKGROUND_SALOON";
		case 0:
			return "BEGIN_PHOTO";
		case 1:
			return "CANT_AFFORD_PHOTO";
		case 10:
			return "COMMENT_POSE";
		case 11:
			return "COMMENT_POSE_CHANGE";
		case 12:
			return "PHOTO_TAKEN";
		case 34:
			return "PLAYER_FINISH_PHOTO";
		case 2:
			return "PLAYER_REQUEST_PHOTO";
		case 13:
			return "SALES_PITCH_SINGLE_AND_GROUP";
		case 14:
			return "SINGLE_OR_GROUP";
		case 15:
			return "SALES_PITCH_NEW_BACKGROUNDS";
		case 16:
			return "SALES_PITCH_NEW_POSES";
		case 17:
			return "COMMENT_WHILE_DELAYING";
		case 18:
			return "HOW_IS_ITEM_PHOTO";
		case 19:
			return "GIVE_PHOTO";
		case 20:
			return "GIVE_PHOTO_GROUP";
		case 21:
			return "COMMENT_POSE_RUDE";
		case 22:
			return "COMMENT_POSE_GROUP";
		case 23:
			return "COMMENT_POSE_PAIR";
		case 24:
			return "COMMENT_ON_GROUP_MALE";
		case 25:
			return "COMMENT_ON_GROUP_MIXED";
		case 26:
			return "COMMENT_ON_GROUP_FEMALE";
		case 27:
			return "TOO_MANY_PEOPLE";
		case 28:
			return "COMMENT_PHOTO";
		case 29:
			return "COMMENT_PHOTO_SERIOUS";
		case 30:
			return "COMMENT_PHOTO_SILLY";
		case 31:
			return "COMMENT_PHOTO_GROUP";
		case 32:
			return "COMMENT_PHOTO_PITCH_GROUP";
		case 33:
			return "COMMENT_PHOTO_PITCH_SOLO";
		default:
			break;
	}
	return "";
}

int func_1207()
{
	if (aggregate_func_5523())
	{
		return Global_1051387->f_4537.f_4;
	}
	return 1;
}

char* func_1211(var uParam0)
{
	int iVar0;

	iVar0 = 9;
	switch (uParam0->f_1)
	{
		case 60:
			iVar0 = 9;
			break;
		case 12:
			switch (Global_1051387->f_4537.f_6)
			{
				case -1902963839:
				case -161663051:
					iVar0 = 5;
					break;
				case -1229849880:
				case 1704651453:
					iVar0 = 6;
					break;
				case -716479716:
				case 858118906:
					iVar0 = 7;
					break;
				case -655777242:
				case 1475813922:
					iVar0 = 8;
					break;
				default:
					iVar0 = 9;
					break;
			}
			break;
	}
	return func_1206(iVar0);
}

bool func_1839(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = aggregate_func_4688(iVar0, 1, 0);
		if (!aggregate_func_2003(bParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (aggregate_func_4673(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || aggregate_func_1136(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @136; //curOff = 108
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_2158(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;

	if (bParam2 == 0)
	{
		bVar0 = aggregate_func_6134(uParam0, bParam1);
	}
	else
	{
		bVar0 = bParam2;
	}
	bVar1 = true;
	bVar2 = aggregate_func_681(uParam0, bParam1, bVar0);
	bVar3 = aggregate_func_6297(bParam1, aggregate_func_5845(bParam1), 1);
	bVar4 = !aggregate_func_3244(uParam0, bParam1);
	bVar6 = aggregate_func_800(uParam0, bParam1, bVar0, -1, -1);
	if (aggregate_func_3145(bParam1))
	{
		bVar3 = true;
		bVar4 = true;
	}
	iVar9 = aggregate_func_3180(uParam0);
	switch (bVar0)
	{
		case -384358143:
			bVar1 = ((bVar3 && bVar4) && !aggregate_func_5544(bParam1, 0));
			break;
		case 1394581936:
			if (aggregate_func_4278(uParam0, 32) && aggregate_func_5659(bParam1))
			{
				bVar3 = aggregate_func_2896(bParam1, 205718222);
			}
			bVar1 = ((bVar3 && bVar4) || (bVar2 && !bVar6));
			if (aggregate_func_5870(bParam1))
			{
				bVar1 = ((bVar3 && bVar4) || bVar2);
			}
			if (aggregate_func_5659(bParam1))
			{
				iVar11 = aggregate_func_5797(0);
				iVar12 = aggregate_func_5635(0);
				if (iVar11 >= iVar12)
				{
					bVar1 = false;
				}
			}
			break;
		case -853534656:
			bVar1 = ((bVar3 && bVar4) || bVar2);
			if ((aggregate_func_2827(bParam1) != -999503751 && aggregate_func_2827(bParam1) != -1044137471) && aggregate_func_2827(bParam1) != 884451223)
			{
				if (aggregate_func_5852(uParam0->f_3))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
					{
					}
					else
					{
						bVar5 = aggregate_func_964(iVar9, bParam1, &uVar10);
						if (!bVar5)
						{
						}
						bVar1 = (bVar1 && bVar5);
						Jump @1004; //curOff = 544
						bVar1 = (bVar3 && bVar4);
						bVar2 = false;
						bVar5 = aggregate_func_964(iVar9, bParam1, &uVar10);
						if (aggregate_func_5852(uParam0->f_3))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
							{
							}
							else
							{
								if (!bVar5)
								{
								}
								bVar1 = (bVar1 && bVar5);
								Jump @1004; //curOff = 626
								bVar2 = false;
								bVar1 = (bVar3 && bVar4);
								Jump @1004; //curOff = 643
								if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
								{
								}
								else
								{
									if (aggregate_func_5852(uParam0->f_3))
									{
										bVar1 = aggregate_func_964(iVar9, bParam1, &uVar10);
									}
									Jump @1004; //curOff = 694
									aggregate_func_5810(uParam0->f_3, &bVar13);
									iVar14 = aggregate_func_5812(uParam0->f_3);
									bVar1 = ((!aggregate_func_2074(bParam1, bVar13, 1) && bVar4) && aggregate_func_5539(bParam1, bVar13, 0, 1, iVar14));
									Jump @1004; //curOff = 753
									bVar1 = ((aggregate_func_4574(aggregate_func_7448(bParam1, 0)) && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1004; //curOff = 789
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5808());
									Jump @1004; //curOff = 812
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5917());
									Jump @1004; //curOff = 836
									bVar1 = ((bVar3 || aggregate_func_681(uParam0, bParam1, bVar0)) && bVar4);
									Jump @1004; //curOff = 866
									bVar1 = ((bVar3 && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1004; //curOff = 893
									if (aggregate_func_5872(bParam1))
									{
										bVar6 = bVar2;
									}
									bVar1 = (aggregate_func_5544(bParam1, 0) || (bVar3 && bVar4));
									Jump @1004; //curOff = 933
									bVar7 = aggregate_func_5693(aggregate_func_4615(uParam0));
									bVar1 = !bVar7;
									Jump @1004; //curOff = 953
									bVar8 = aggregate_func_5694(aggregate_func_4615(uParam0));
									bVar1 = !bVar8;
									Jump @1004; //curOff = 973
									bVar1 = true;
									Jump @1004; //curOff = 979
									bVar1 = ((bVar3 && bVar4) || bVar2);
								}
							}
							if (uParam0->f_2094.f_139)
							{
								Stack.Push(bVar1);
								Stack.Push(uParam0);
								Stack.Push(aggregate_func_4911(uParam0));
								Stack.Push(bParam1);
								Stack.Push(bVar0);
								Call_Loc(uParam0->f_2094.f_140);
								bVar1 = (StackVal && StackVal);
							}
							return bVar1;
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_2877(bool bParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	int iVar36;

	if (!aggregate_func_2010(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar33 = (aggregate_func_2892(0) && !aggregate_func_1519());
	bVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @270; //curOff = 73
		}
		else
		{
			bVar35 = aggregate_func_1136(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (aggregate_func_4998(&(Var0[iVar32 /*2*/])) || aggregate_func_4999(&(Var0[iVar32 /*2*/])))
				{
					bVar35 = (bVar35 + aggregate_func_5000(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						bVar35 = (bVar35 + aggregate_func_230(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					bVar35 = (bVar35 + (aggregate_func_1157(7, &(Var0[iVar32 /*2*/])) + aggregate_func_928(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (bVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return false;
			}
			bVar35 = (bVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (bVar34 == -1 || bVar35 < bVar34)
			{
				bVar34 = bVar35;
			}
		}
		iVar32++;
	}
	return bVar34;
}

