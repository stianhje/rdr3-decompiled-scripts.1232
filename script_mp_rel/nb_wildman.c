#region Local Var
	struct<100> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 2 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<13> Local_102[32];
	struct<208> Local_519 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, -1, 255, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_727 = 1;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 7;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = -1;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	float fLocal_750 = 0f;
	float fLocal_751 = 0f;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 102, 40);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 102, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_102, 417, 41);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_102[0 /*13*/]), 417, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	if (Local_519.f_12 >= 0 && Local_519.f_12 < 71)
	{
		Local_519.f_18.f_41 = (Global_1184672->f_231.f_1066[Local_519.f_12 /*17*/])->f_5;
	}
	aggregate_func_6497(&(Local_519.f_18.f_7));
	func_92();
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = aggregate_func_2109();
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, 0);
		}
	}
	if (bVar0)
	{
		if (aggregate_func_4644(256))
		{
			if (aggregate_func_2986(7))
			{
				aggregate_func_6722(13, 0);
			}
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		aggregate_func_2442(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_2[iVar1])))
		{
			if (iVar1 == 1)
			{
				aggregate_func_8861(aggregate_func_4710(Local_519.f_18.f_41));
			}
			else
			{
				iVar2 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[iVar1]));
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar1++;
	}
}

void func_92()
{
	aggregate_func_7924(0, 0, func_176(), 3f, -1, 1);
}

bool func_107()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar2])))
		{
			if (iVar2 == 1)
			{
				if (aggregate_func_4644(1))
				{
					iVar3 = 0;
					while (iVar3 < 32)
					{
						iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
						{
							if (&(Local_102[iVar3 /*13*/])->f_1.f_2[iVar2] != 0)
							{
								Local_0.f_7.f_2[iVar2] = &(Local_102[iVar3 /*13*/])->f_1.f_2[iVar2];
							}
						}
						iVar3++;
					}
				}
				iVar0 = 0;
				Jump @186; //curOff = 130
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[1])))
			{
				if (func_183(iVar2, &bVar1) || bVar1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar2++;
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[0])))
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[0])), true, false) };
				}
				if (bVar1)
				{
					aggregate_func_4983();
				}
				return iVar0;
			}
		}
	}
}

bool func_113()
{
	if (func_188())
	{
		return true;
	}
	func_189();
	func_190();
	switch (Local_0.f_7)
	{
		case 0:
			aggregate_func_8929();
			break;
		case 1:
			func_192();
			break;
		case 2:
			func_193();
			break;
		case 3:
			func_194();
			break;
		case 4:
			func_195();
			break;
		case 5:
			func_196();
			break;
		case 6:
			func_197();
			break;
	}
	return false;
}

bool func_120()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREWM";
	sVar1 = "OREWMAU";
	iVar2 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0) && HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		HUD::_TEXT_DATABASE_REQUEST(sVar1);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0) || !HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
		{
			iVar2 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!aggregate_func_2053(func_201(iVar3)))
		{
			iVar2 = 0;
		}
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 <= 0)
	{
		STREAMING::REQUEST_ANIM_DICT(func_203(iVar4));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_203(iVar4)))
		{
			iVar2 = 0;
		}
		iVar4++;
	}
	if (!aggregate_func_264(func_204(), &(Local_519.f_18.f_40), &(Local_0.f_7.f_90), 64, "pbl_handover"))
	{
		iVar2 = 0;
	}
	return iVar2;
}

bool func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	func_207();
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (aggregate_func_7752(13, 0))
		{
			aggregate_func_2922(256);
		}
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			if (!aggregate_func_4644(1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((Local_519.f_18.f_1[1 /*2*/])->f_1))
				{
					if (aggregate_func_1056(aggregate_func_4710(Local_519.f_18.f_41), (Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_2[1], 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(&((Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_2[1])), true);
						aggregate_func_2922(1);
					}
					else
					{
						iVar0 = 0;
					}
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_129()
{
	int iVar0;
	int iVar1;

	func_207();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_2[iVar0])))
		{
			(Local_519.f_18.f_1[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_0.f_7.f_2[iVar0]));
			aggregate_func_7704(iVar0, (Local_519.f_18.f_1[iVar0 /*2*/])->f_1);
			iVar1 = aggregate_func_4849(iVar0);
			aggregate_func_648(&(Local_519.f_18.f_43), iVar1, func_216(iVar0), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
						PED::_0x1902C4CFCC5BE57C(iVar1, func_218(iVar0));
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_135()
{
	if (PLAYER::GET_PLAYER_INDEX() == Local_519.f_18.f_41)
	{
		func_226();
	}
	func_207();
	aggregate_func_2679();
	func_228();
	func_229(Local_0.f_7);
	func_230();
	func_231();
	func_232();
	switch (Local_519.f_18)
	{
		case 0:
			func_233();
			break;
		case 1:
			func_234();
			break;
		case 2:
			func_235();
			break;
		case 3:
			func_236();
			break;
		case 4:
			func_237();
			break;
		case 5:
			func_238();
			break;
		case 6:
			func_239();
			break;
	}
}

Vector3 func_176()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)) };
	vVar0 = { aggregate_func_5469(vVar0, Global_1124870->f_1899.f_1, 2f) };
	vVar3 = { aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)) };
	return vVar0;
}

int func_183(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(2))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_0.f_7.f_2[iParam0], func_201(iParam0), func_256(iParam0), func_257(iParam0), 1, 0, 1, 1, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_2[iParam0])), true, false) };
	return 1;
}

bool func_188()
{
	int iVar0;

	if (Local_0.f_7 == 7)
	{
		return true;
	}
	iVar0 = aggregate_func_4849(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_189()
{
	if (aggregate_func_7154())
	{
		aggregate_func_7383(0);
		aggregate_func_4310(6);
	}
}

void func_190()
{
	if (aggregate_func_4644(1))
	{
		if (!aggregate_func_4644(4))
		{
			aggregate_func_3814(1, 1);
		}
	}
}

void func_192()
{
	int iVar0;

	if (aggregate_func_2986(0))
	{
		if (!aggregate_func_4260(Local_0.f_7.f_7[1 /*3*/]))
		{
			func_268(1);
		}
	}
	if (aggregate_func_4644(256))
	{
		iVar0 = 7;
	}
	else
	{
		iVar0 = 6;
	}
	if (aggregate_func_2986(iVar0))
	{
		aggregate_func_4310(2);
	}
}

void func_193()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4849(0);
	iVar1 = aggregate_func_4849(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && TASK::_0x916B8E075ABC8B4E(iVar0, 1)) && aggregate_func_2986(10)) && !TASK::_0x916B8E075ABC8B4E(iVar1, 1))
	{
		aggregate_func_7383(4);
		aggregate_func_4310(3);
	}
}

void func_194()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_269();
	if (!aggregate_func_3027(1))
	{
		if (!aggregate_func_2986(13))
		{
			if (aggregate_func_4260(Local_0.f_7.f_7[13 /*3*/]))
			{
			}
			if (aggregate_func_8628(Local_0.f_7.f_7[13 /*3*/], 15000))
			{
				func_272(13);
			}
		}
		else if (!aggregate_func_2986(14))
		{
			if (aggregate_func_4260(Local_0.f_7.f_7[14 /*3*/]))
			{
			}
			if (aggregate_func_8628(Local_0.f_7.f_7[14 /*3*/], 15000))
			{
				func_272(14);
			}
		}
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = iVar1;
			switch ((Local_102[iVar2 /*13*/])->f_1.f_6)
			{
				case 0:
					Local_0.f_7.f_91 = iVar0;
					aggregate_func_4310(4);
					aggregate_func_7383(0);
					break;
				case 1:
					Local_0.f_7.f_91 = iVar0;
					aggregate_func_4310(5);
					aggregate_func_7383(0);
					break;
			}
		}
	}
}

void func_195()
{
	if (aggregate_func_4644(8) || aggregate_func_4644(16))
	{
		aggregate_func_4310(5);
	}
}

void func_196()
{
	int iVar0;

	iVar0 = aggregate_func_4849(0);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && aggregate_func_2986(17)) && aggregate_func_2986(18)) && aggregate_func_4644(64)) || aggregate_func_4644(64))
	{
		aggregate_func_4310(7);
	}
}

void func_197()
{
	if (aggregate_func_4644(64))
	{
		aggregate_func_4310(7);
	}
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1086354818;
		default:
			break;
	}
	return 0;
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_common@handover@generic@player_handover@money";
		default:
			break;
	}
	return "";
}

char* func_204()
{
	return "script@beat@town@townrobbery@handover_money";
}

void func_207()
{
	int iVar0;

	Local_519.f_18.f_145 = -1;
	Local_519.f_18.f_146 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_519.f_18.f_145 = (Local_519.f_18.f_145 && (Local_102[iVar0 /*13*/])->f_1);
			Local_519.f_18.f_146 = (Local_519.f_18.f_146 || (Local_102[iVar0 /*13*/])->f_1);
		}
		iVar0++;
	}
}

char* func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE005_MALE6";
		case 1:
			return "CRIPPS";
		default:
			break;
	}
	return "";
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1703424209;
		default:
			break;
	}
	return 0;
}

void func_226()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;

	Var0 = { aggregate_func_4965(-1591664384, -1591664384, 0, 0, 0, 0, -1, -1238310989, 0) };
	if (aggregate_func_2989(Var0, &iVar10, &iVar11, 0))
	{
		iVar13 = 99;
		iVar14 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar14))
		{
			iVar15 = iVar14;
			if ((Local_102[iVar15 /*13*/])->f_1.f_5 != 0)
			{
				if (!aggregate_func_2850((Local_102[iVar15 /*13*/])->f_1.f_5, 1))
				{
					(Local_102[iVar15 /*13*/])->f_1.f_5 = 0;
				}
			}
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar16 = aggregate_func_2076(iVar12, iVar10);
				if (aggregate_func_2850(bVar16, 1))
				{
					if (func_300(bVar16) < iVar13)
					{
						iVar13 = func_300(bVar16);
						(Local_102[iVar15 /*13*/])->f_1.f_5 = bVar16;
					}
				}
				iVar12++;
			}
		}
		aggregate_func_2990(iVar10);
	}
}

void func_228()
{
	if (aggregate_func_415(aggregate_func_4849(0), 0, &(Local_519.f_18.f_7), &(Local_519.f_18.f_38), 0, 0))
	{
		if (!aggregate_func_7154())
		{
			aggregate_func_7155(0);
			aggregate_func_3614(1, 0, 0);
			func_305();
		}
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
		{
			aggregate_func_6722(13, 0);
		}
	}
}

void func_229(int iParam0)
{
	if (Local_519.f_18 != iParam0)
	{
		if (iParam0 == 6)
		{
			aggregate_func_2372(0);
		}
		Local_519.f_18 = iParam0;
	}
}

void func_230()
{
	if (Local_519.f_18.f_41 != PLAYER::GET_PLAYER_INDEX())
	{
		return;
	}
	if (aggregate_func_4644(1))
	{
		if (func_307(4, 255))
		{
			aggregate_func_2922(4);
			(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6 = -1;
		}
	}
	if (Local_0.f_7.f_5 != Local_519.f_18.f_39)
	{
		Local_519.f_18.f_39 = Local_0.f_7.f_5;
		if (func_307(2, 255))
		{
			func_309(Local_0.f_7.f_5);
		}
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_519.f_18.f_41);
	iVar1 = iVar0;
	iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	switch (Local_0.f_7.f_5)
	{
		case 2:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 != 0)
					{
						aggregate_func_7383(4);
					}
				}
			}
			break;
		case 3:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 == 0)
					{
						aggregate_func_7383(2);
					}
					else if (!func_310(iVar2))
					{
						aggregate_func_7383(4);
					}
				}
			}
			break;
		case 4:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if ((Local_102[iVar1 /*13*/])->f_1.f_5 == 0)
					{
						aggregate_func_7383(2);
					}
					else if (func_310(iVar2))
					{
						aggregate_func_7383(3);
					}
				}
			}
			break;
	}
	if (Local_519.f_18.f_41 != PLAYER::GET_PLAYER_INDEX())
	{
		return;
	}
	iVar3 = aggregate_func_4849(0);
	if (func_307(2, 255))
	{
		if (!aggregate_func_702(0, 10f, -1, 0) || Local_0.f_7.f_5 == 0)
		{
			if (func_313(aggregate_func_7382(0)))
			{
				MISC::_0xE98D55C5983F2509(aggregate_func_4849(0));
				PED::SET_PED_CONFIG_FLAG(iVar3, 297, true);
				func_314();
				aggregate_func_2922(2);
			}
		}
		else if (func_315(0, 0, 0))
		{
			if (!aggregate_func_4644(2))
			{
				if (func_313(aggregate_func_7382(0)))
				{
					func_309(Local_519.f_18.f_39);
					aggregate_func_4896(2);
				}
			}
		}
		else if (aggregate_func_4644(2))
		{
			if (func_313(aggregate_func_7382(0)))
			{
				func_309(Local_519.f_18.f_39);
				aggregate_func_4896(2);
			}
		}
	}
	else if (aggregate_func_702(0, 10f, -1, 0) && Local_0.f_7.f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			if (func_313(aggregate_func_7382(0)))
			{
				if (MISC::_0x870708A6E147A9AD(iVar3, "", 7f, 0, 16, 0, 0, 0, 0, -1))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar3, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar3, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar3, 301, false);
					aggregate_func_2922(2);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 26)
	{
		if (aggregate_func_4644(func_319(iVar0)))
		{
			if (!aggregate_func_2986(iVar0))
			{
				if (func_321(iVar0))
				{
					func_322(iVar0);
					aggregate_func_3614(1, 0, 0);
				}
				if (func_323(iVar0))
				{
					if (func_324(iVar0))
					{
						aggregate_func_1726(-296154796, aggregate_func_4849(0), 1);
					}
					aggregate_func_3742(iVar0);
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						aggregate_func_3742(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_233()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = aggregate_func_4849(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
				{
					switch (iVar0)
					{
						case 0:
							aggregate_func_6723();
							if (TASK::_0x916B8E075ABC8B4E(iVar1, 1))
							{
								TASK::_0x541E5B41DCA45828(iVar1, 1, 0);
							}
							break;
						case 1:
							aggregate_func_6723();
							break;
					}
				}
				else if (!aggregate_func_2986(19))
				{
					func_272(19);
				}
				else
				{
					func_329(20, 12000, 0);
				}
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						func_329(5, 12000, 1);
						break;
				}
			}
			if (iVar0 == 0)
			{
				if (aggregate_func_1727(iVar1, 993674639, 1, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, func_256(iVar0), func_257(iVar0), true, false, true);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iVar1, -2118813809, 0, 0, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (aggregate_func_2437(func_331(5)))
				{
					STREAMING::REQUEST_CLIP_SET("AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM");
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar1, 1, 1);
					PED::SET_PED_RESET_FLAG(iVar1, 209, true);
					PED::SET_PED_GESTURE_GROUP(iVar1, "AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM", 1);
				}
				if (aggregate_func_2986(19))
				{
					iVar2 = aggregate_func_592(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar3, 1203982208 /* Float: 99999f */, 0, 0, 0);
					if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(iVar2), 3, 1, 1000f, 1, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (aggregate_func_4644(256))
	{
		iVar2 = 7;
	}
	else
	{
		iVar2 = 6;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = aggregate_func_4849(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
			{
				if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
				{
					switch (iVar0)
					{
						case 0:
							if (!aggregate_func_2986(iVar2))
							{
								if (aggregate_func_4988(19))
								{
									func_335(19);
								}
								func_272(iVar2);
							}
							break;
						case 1:
							bVar3 = false;
							if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(aggregate_func_4849(0), false, false)) < 10f)
							{
								bVar3 = true;
							}
							if (((!aggregate_func_2986(0) && !aggregate_func_2986(iVar2)) && !aggregate_func_4988(iVar2)) && !bVar3)
							{
								func_272(0);
							}
							if (((((aggregate_func_2986(0) && !aggregate_func_2986(1)) && !aggregate_func_2986(iVar2)) && !aggregate_func_4988(iVar2)) && !bVar3) && !aggregate_func_3027(1))
							{
								if (func_336(1) > 11000)
								{
									func_272(1);
								}
							}
							break;
					}
				}
				switch (iVar0)
				{
					case 0:
						if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
					case 1:
						if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
						{
							TASK::_0xE7FA07624574B79A(iVar1, PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41), 3, 1, 5000f, 1, 0, 0, 0);
						}
						break;
				}
			}
		}
		iVar0++;
	}
	func_337(0, 0);
}

void func_235()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = aggregate_func_4849(0);
	iVar2 = aggregate_func_4849(1);
	iVar0 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	if (aggregate_func_4644(256))
	{
		iVar3 = 7;
	}
	else
	{
		iVar3 = 6;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
	{
		if (!aggregate_func_2986(iVar3))
		{
			func_272(iVar3);
		}
		else if (!aggregate_func_2986(9))
		{
			func_272(9);
		}
		else if (!aggregate_func_2986(10))
		{
			func_272(10);
		}
		if ((aggregate_func_2986(iVar3) || aggregate_func_2986(9)) || aggregate_func_2986(10))
		{
			if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				TASK::_0xE7FA07624574B79A(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
			}
		}
	}
	else if (aggregate_func_2986(iVar3) || aggregate_func_2986(9))
	{
		if (!aggregate_func_2986(8))
		{
			func_272(8);
		}
	}
	if (aggregate_func_2986(10))
	{
		if (TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			TASK::_0x541E5B41DCA45828(iVar2, 1, 0);
		}
	}
}

void func_236()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = aggregate_func_4849(0);
	iVar2 = func_338();
	iVar0 = Global_35;
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < 10f)
	{
		if (!TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			TASK::_0xE7FA07624574B79A(iVar1, iVar0, 3, 1, 5000f, 1, 0, 0, 0);
		}
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
		{
			if (!aggregate_func_2986(12))
			{
				if (aggregate_func_7726(16384))
				{
					func_272(12);
				}
			}
		}
	}
	else if (TASK::_0x916B8E075ABC8B4E(iVar1, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		TASK::_0x541E5B41DCA45828(iVar1, 1, 0);
	}
	switch (iVar2)
	{
		case 0:
			func_272(25);
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				aggregate_func_6724();
			}
			break;
		case 1:
			if (!aggregate_func_2986(15))
			{
				func_272(26);
				func_272(15);
			}
			if (!aggregate_func_4644(32))
			{
				aggregate_func_2922(32);
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				aggregate_func_6724();
			}
			break;
	}
}

void func_237()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	iVar0 = aggregate_func_4849(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && !NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40))
	{
		NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::_0x34D6AC1157C8226C(iVar0, -2118813809))
		{
			aggregate_func_351(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 5, 1, 2);
			TASK::TASK_TURN_PED_TO_FACE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 0);
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_519.f_18.f_40))
	{
		if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_519.f_18.f_40))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, 0);
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			if (aggregate_func_927(iVar0, 1464580341))
			{
			}
			if (TASK::_0x0C3CB2E600C8977D(iVar0, 1))
			{
			}
			if (PED::_0x34D6AC1157C8226C(iVar0, -2118813809))
			{
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0))
			{
			}
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0))
			{
			}
			if (((((!TASK::_0x0C3CB2E600C8977D(iVar0, 1) && !PED::_0x34D6AC1157C8226C(iVar0, -2118813809)) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0)) && !ANIMSCENE::_0xD8254CB2C586412B(Local_519.f_18.f_40, 0)) && !aggregate_func_927(iVar1, 1369124074))
			{
				if (PED::IS_PED_MALE(iVar1))
				{
					sVar2 = "pedPlayer";
				}
				else
				{
					sVar2 = "pedPlayer_female";
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_519.f_18.f_40, sVar2, iVar1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_519.f_18.f_40, "pedStranger", iVar0, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_519.f_18.f_40, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2) + Vector(180f, 180f, 180f), 2);
				TASK::TASK_ENTER_ANIM_SCENE(iVar1, Local_519.f_18.f_40, sVar2, "pbl_handover", 1069379748 /* Float: 1.48f */, true, 8, 20000, -1082130432 /* Float: -1f */);
			}
			if (PED::IS_PED_INJURED(iVar1))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_519.f_18.f_40, 0))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(Local_519.f_18.f_40, true);
				}
				aggregate_func_2922(16);
			}
			if (ANIMSCENE::_0xD8254CB2C586412B(Local_519.f_18.f_40, 0))
			{
				if (!aggregate_func_4644(8))
				{
					if (PLAYER::GET_PLAYER_INDEX() == Local_519.f_18.f_41 && !func_307(16, 255))
					{
						iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = iVar3;
							aggregate_func_1304((Local_102[iVar4 /*13*/])->f_1.f_5, 1, 0, -142743235);
						}
						aggregate_func_6692();
					}
					aggregate_func_2922(8);
				}
			}
		}
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = aggregate_func_4849(0);
	iVar1 = aggregate_func_4849(1);
	iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
	aggregate_func_2442(0);
	if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, 0);
		}
	}
	if (!aggregate_func_4644(32))
	{
		if (aggregate_func_4644(16))
		{
			if (!aggregate_func_2986(16))
			{
				func_272(16);
			}
		}
		else if (!aggregate_func_2986(17))
		{
			func_272(17);
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				aggregate_func_1617(-1330378740, 0, 0);
			}
		}
		else if (!aggregate_func_2986(18))
		{
			func_272(18);
		}
		else if (aggregate_func_7398(aggregate_func_4710(Local_519.f_18.f_41), 128))
		{
			if (!aggregate_func_2986(2))
			{
				func_272(2);
			}
		}
	}
	if (aggregate_func_1727(iVar0, -1665583462, 1, 0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 0, 0);
		TASK::TASK_LOOK_AT_ENTITY(iVar0, iVar2, 8000, 48, 51, 1);
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	if (fVar3 > 50f)
	{
		if (NETWORK::_0xB07D3185E11657A5(iVar1))
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_8861(aggregate_func_4710(Local_519.f_18.f_41));
				func_346();
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 2f);
		}
	}
	if (!func_307(64, 255))
	{
		fVar4 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (fVar4 > 100f)
		{
			aggregate_func_2922(64);
		}
	}
}

void func_239()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	bool bVar6;

	iVar1 = aggregate_func_4849(0);
	iVar2 = aggregate_func_4849(1);
	iVar4 = 255;
	iVar4 = aggregate_func_592(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar0, 80f, 0, 0, 1);
	iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
	aggregate_func_2442(0);
	if (PED::_0x9682F850056C9ADE(iVar1))
	{
		if (!aggregate_func_2986(24))
		{
			func_329(24, 12000, 0);
		}
	}
	else if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		if (!aggregate_func_2986(23))
		{
			func_329(23, 12000, 0);
		}
	}
	else if (aggregate_func_5618(Local_519.f_18.f_38, 1, 0, 0, 0))
	{
		if (!aggregate_func_2986(22))
		{
			func_272(22);
		}
	}
	else if (!aggregate_func_2986(21))
	{
		func_272(21);
	}
	if (NETWORK::_0xB07D3185E11657A5(iVar2))
	{
		if (Local_519.f_18.f_38 == 2)
		{
			if (!aggregate_func_2986(3))
			{
				func_272(3);
				if (!TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					TASK::_0xE7FA07624574B79A(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
		else if (Local_519.f_18.f_38 == 1)
		{
			if (!aggregate_func_2986(4))
			{
				func_272(4);
				if (!TASK::_0x916B8E075ABC8B4E(iVar2, 1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
				{
					TASK::_0xE7FA07624574B79A(iVar2, iVar3, 2, 1, 5000f, 1, 0, 0, 0);
				}
			}
		}
	}
	if (!aggregate_func_4644(8))
	{
		if (aggregate_func_1031(iVar1, Global_35))
		{
			aggregate_func_1617(-1898294040, 0, 0);
			aggregate_func_4896(8);
		}
	}
	if (aggregate_func_1727(iVar1, 518218985, 1, 0) && !PED::IS_PED_INJURED(iVar1))
	{
		aggregate_func_351(iVar1, ENTITY::GET_ENTITY_COORDS(iVar3, true, false), 2, 1, 1);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
	if (!func_307(64, 255))
	{
		fVar5 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false));
		if (fVar5 > 100f)
		{
			aggregate_func_2922(64);
		}
		if (PED::IS_PED_INJURED(iVar1))
		{
			bVar6 = true;
			if (NETWORK::_0xB07D3185E11657A5(iVar2))
			{
				if (aggregate_func_4988(3))
				{
					if (!aggregate_func_2986(3))
					{
						bVar6 = false;
					}
					else if (aggregate_func_3027(1))
					{
						bVar6 = false;
					}
				}
				if (aggregate_func_4988(4))
				{
					if (!aggregate_func_2986(4))
					{
						bVar6 = false;
					}
					else if (aggregate_func_3027(1))
					{
						bVar6 = false;
					}
				}
			}
			if (bVar6)
			{
				aggregate_func_2922(64);
			}
		}
	}
}

Vector3 func_256(int iParam0)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("p_bench_log07x");
			iVar4 = aggregate_func_3415(&uVar0, &iVar2, 1, aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)), 1101004800 /* Float: 20f */);
			if (iVar4 > 0)
			{
				iVar5 = 0;
				while (iVar5 < iVar4)
				{
					if (ENTITY::GET_ENTITY_MODEL(&(uVar0[iVar5])) == &iVar2[0])
					{
						return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uVar0[iVar5]), -3.1316f, 0.9043f, 0.2994f);
					}
					iVar5++;
				}
			}
			else
			{
				return func_176();
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_257(int iParam0)
{
	var uVar0[1];
	int iVar2[1];
	int iVar4;
	vector3 vVar5;
	int iVar8;

	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("p_bench_log07x");
			iVar4 = aggregate_func_3415(&uVar0, &iVar2, 1, aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)), 1101004800 /* Float: 20f */);
			if (iVar4 > 0)
			{
				iVar8 = 0;
				while (iVar8 < iVar4)
				{
					if (ENTITY::GET_ENTITY_MODEL(&(uVar0[iVar8])) == &iVar2[0])
					{
						vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uVar0[iVar8]), -3.1316f, 0.9043f, 0.2994f) };
						return aggregate_func_3570(vVar5, aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)));
					}
					iVar8++;
				}
			}
			else
			{
				return func_361();
			}
			break;
	}
	return 0f;
}

void func_268(int iParam0)
{
	aggregate_func_4480(Local_0.f_7.f_7[iParam0 /*3*/]);
}

int func_269()
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_4644(4))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			if (aggregate_func_4240((Local_102[iVar0 /*13*/])->f_1, 4))
			{
				if ((Local_102[iVar0 /*13*/])->f_1.f_6 != -1)
				{
					return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				}
			}
		}
		iVar0++;
	}
	return 255;
}

void func_272(int iParam0)
{
	if (aggregate_func_4644(func_319(iParam0)))
	{
		return;
	}
	else
	{
		aggregate_func_3553(func_319(iParam0));
	}
}

int func_300(bool bParam0)
{
	int iVar0;

	switch (bParam0)
	{
		case 1927429448: /* GXTEntry: "Minty Big Game" */
			iVar0 = 48;
			break;
		case -1761943215: /* GXTEntry: "Oregano Big Game" */
			iVar0 = 47;
			break;
		case 1850062231: /* GXTEntry: "Thyme Big Game" */
			iVar0 = 46;
			break;
		case 1610737930: /* GXTEntry: "Plain Big Game" */
			iVar0 = 45;
			break;
		case 157844029: /* GXTEntry: "Minty Exotic Bird" */
			iVar0 = 44;
			break;
		case -1776228845: /* GXTEntry: "Minty Game" */
			iVar0 = 43;
			break;
		case 891311852: /* GXTEntry: "Minty Pork" */
			iVar0 = 42;
			break;
		case 2060248942: /* GXTEntry: "Minty Prime Beef" */
			iVar0 = 41;
			break;
		case -2072937086: /* GXTEntry: "Minty Succulent Fish" */
			iVar0 = 40;
			break;
		case -159965980: /* GXTEntry: "Minty Venison" */
			iVar0 = 39;
			break;
		case -230982446: /* GXTEntry: "Oregano Exotic Bird" */
			iVar0 = 38;
			break;
		case -1056176476: /* GXTEntry: "Oregano Game" */
			iVar0 = 37;
			break;
		case -1109558441: /* GXTEntry: "Oregano Pork" */
			iVar0 = 36;
			break;
		case -1353737667: /* GXTEntry: "Oregano Prime Beef" */
			iVar0 = 35;
			break;
		case -1361605241: /* GXTEntry: "Oregano Succulent Fish" */
			iVar0 = 34;
			break;
		case -1818374673: /* GXTEntry: "Oregano Venison" */
			iVar0 = 33;
			break;
		case -827300300: /* GXTEntry: "Thyme Exotic Bird" */
			iVar0 = 32;
			break;
		case -330313895: /* GXTEntry: "Thyme Game" */
			iVar0 = 31;
			break;
		case -1876678165: /* GXTEntry: "Thyme Pork" */
			iVar0 = 30;
			break;
		case -1648459215: /* GXTEntry: "Thyme Prime Beef" */
			iVar0 = 29;
			break;
		case -1282256419: /* GXTEntry: "Thyme Succulent Fish" */
			iVar0 = 28;
			break;
		case -636938112: /* GXTEntry: "Thyme Venison" */
			iVar0 = 27;
			break;
		case -1373103850: /* GXTEntry: "Minty Crustacean" */
			iVar0 = 26;
			break;
		case -1390787310: /* GXTEntry: "Minty Flaky Fish" */
			iVar0 = 25;
			break;
		case -689676822: /* GXTEntry: "Minty Mutton" */
			iVar0 = 24;
			break;
		case 1338124689: /* GXTEntry: "Minty Plump Bird" */
			iVar0 = 23;
			break;
		case 1590177017: /* GXTEntry: "Oregano Crustacean" */
			iVar0 = 22;
			break;
		case -1980620421: /* GXTEntry: "Oregano Flaky Fish" */
			iVar0 = 21;
			break;
		case -1059622646: /* GXTEntry: "Oregano Mutton" */
			iVar0 = 20;
			break;
		case -483015950: /* GXTEntry: "Oregano Plump Bird" */
			iVar0 = 19;
			break;
		case 488325262: /* GXTEntry: "Thyme Crustacean" */
			iVar0 = 18;
			break;
		case 1781733473: /* GXTEntry: "Thyme Flaky Fish" */
			iVar0 = 17;
			break;
		case 1635889277: /* GXTEntry: "Thyme Mutton" */
			iVar0 = 16;
			break;
		case -1140871111: /* GXTEntry: "Thyme Plump Bird" */
			iVar0 = 15;
			break;
		case 532201260: /* GXTEntry: "Plain Exotic Bird" */
			iVar0 = 14;
			break;
		case -348823399: /* GXTEntry: "Plain Game" */
			iVar0 = 13;
			break;
		case -151108755: /* GXTEntry: "Plain Venison" */
			iVar0 = 12;
			break;
		case -1240620284: /* GXTEntry: "Plain Succulent Fish" */
			iVar0 = 11;
			break;
		case -1535978095: /* GXTEntry: "Plain Prime Beef" */
			iVar0 = 10;
			break;
		case 1663095412: /* GXTEntry: "Plain Pork" */
			iVar0 = 9;
			break;
		case -546209848: /* GXTEntry: "Plain Mutton" */
			iVar0 = 8;
			break;
		case -1277667710: /* GXTEntry: "Plain Crustacean" */
			iVar0 = 7;
			break;
		case 2058993648: /* GXTEntry: "Plain Plump Bird" */
			iVar0 = 6;
			break;
		case 880496229: /* GXTEntry: "Plain Flaky Fish" */
			iVar0 = 5;
			break;
		case 166398389: /* GXTEntry: "Plain Game Bird" */
			iVar0 = 4;
			break;
		case -467118139: /* GXTEntry: "Plain Stringy Meat" */
			iVar0 = 3;
			break;
		case -1768405210: /* GXTEntry: "Gritty Fish" */
			iVar0 = 2;
			break;
		case 524620511: /* GXTEntry: "Plain Herptile" */
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_305()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			(Local_102[iVar0 /*13*/])->f_1.f_1 = 0;
		}
		iVar0++;
	}
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return aggregate_func_4240((Local_102[iParam1 /*13*/])->f_1, iParam0);
	}
	return false;
}

void func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::GET_PLAYER_INDEX());
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_519.f_18.f_41);
	iVar2 = iVar0;
	iVar3 = iVar1;
	switch (iParam0)
	{
		case 0:
			func_314();
			break;
		case 1:
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				aggregate_func_2681(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
				aggregate_func_2681(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", aggregate_func_4462((Local_102[iVar2 /*13*/])->f_1.f_5), 1);
				}
				aggregate_func_8923(0);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX())
			{
				aggregate_func_2681(0, "NB_WILD_MAN_NO_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
				aggregate_func_2681(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
				aggregate_func_2682(0, 0);
				aggregate_func_2682(1, 1);
				if (func_428(13) < 1)
				{
					aggregate_func_2916("NB_WILDMAN_GIVE_HELP", 10000, 0, 0, 0, 1);
					func_430(13);
				}
			}
			break;
		case 3:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if ((Local_102[iVar2 /*13*/])->f_1.f_5 != 0)
				{
					aggregate_func_2681(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
					aggregate_func_2681(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", aggregate_func_4462((Local_102[iVar3 /*13*/])->f_1.f_5), 1);
					}
					aggregate_func_2682(0, 0);
					aggregate_func_2682(1, 1);
				}
			}
			break;
		case 4:
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			if (Local_519.f_18.f_41 == PLAYER::GET_PLAYER_INDEX() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				if ((Local_102[iVar2 /*13*/])->f_1.f_5 != 0)
				{
					aggregate_func_2681(0, "NB_WILD_MAN_GIVE_MEAT", joaat("INPUT_INTERACT_LOCKON_POS"), 3, 0);
					aggregate_func_2681(1, "NB_WILD_MAN_LEAVE_ILO", joaat("INPUT_INTERACT_LOCKON_NEG"), 3, 0);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						func_425(&(Local_519.f_18.f_142[0]), "ITEM_TITHE", aggregate_func_4462((Local_102[iVar3 /*13*/])->f_1.f_5), 1);
					}
					aggregate_func_8923(1);
				}
			}
			break;
	}
}

bool func_310(int iParam0)
{
	bool bVar0;

	if (aggregate_func_2088(iParam0))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -447259824))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -229964281))
	{
		bVar0 = true;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, 889554021))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_313(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (func_433(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_314()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (aggregate_func_2875(&(Local_519.f_18.f_142[iVar0])))
		{
			aggregate_func_2878(Local_519.f_18.f_142[iVar0], 1, 1);
		}
		iVar0++;
	}
}

bool func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam1, iParam2))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == aggregate_func_4849(iParam0);
				}
			}
		}
	}
	return false;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 16777216;
		case 21:
			return 1048576;
		case 22:
			return 2097152;
		case 23:
			return 4194304;
		case 24:
			return 8388608;
		case 25:
			return 33554432;
		case 26:
			return 67108864;
		default:
			break;
	}
	return 1;
}

bool func_321(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 6:
		case 7:
			if (!aggregate_func_2437(func_331(0)) && !aggregate_func_2437(func_331(1)))
			{
				iVar0 = 1;
			}
			break;
		case 24:
			if ((!aggregate_func_2986(23) && !aggregate_func_2986(21)) && !aggregate_func_2986(22))
			{
				iVar0 = 1;
			}
			break;
		case 23:
			if ((!aggregate_func_2986(24) && !aggregate_func_2986(21)) && !aggregate_func_2986(22))
			{
				iVar0 = 1;
			}
			break;
		case 21:
			if ((!aggregate_func_2986(23) && !aggregate_func_2986(24)) && !aggregate_func_2986(22))
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if ((!aggregate_func_2986(23) && !aggregate_func_2986(21)) && !aggregate_func_2986(24))
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

void func_322(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (iVar0 != iParam0)
		{
			if (func_436(func_319(iVar0), 255))
			{
				aggregate_func_3553(func_319(iVar0));
			}
		}
		iVar0++;
	}
}

bool func_323(int iParam0)
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4[24];

	if (func_438(iParam0))
	{
		sVar1 = func_331(iParam0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_519.f_18.f_41);
		iVar3 = aggregate_func_4849(0);
		bVar0 = aggregate_func_4975(iVar2, sVar1, 291934926, iVar3, 1, 0, 0, 1);
		return bVar0;
	}
	else if (!aggregate_func_3027(1))
	{
		StringCopy(&cVar4, func_331(iParam0), 24);
		bVar0 = aggregate_func_938(&(Local_519.f_18.f_43), cVar4, 0, -1, 0, 0);
		return bVar0;
	}
	return false;
}

bool func_324(int iParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	bVar0 = false;
	switch (iParam0)
	{
		case 5:
		case 6:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		iVar1 = aggregate_func_4849(0);
		aggregate_func_592(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &fVar2, 1203982208 /* Float: 99999f */, 0, 0, 0);
		if (fVar2 > 7f)
		{
			return true;
		}
	}
	return false;
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	if (aggregate_func_4628(Local_0.f_7.f_7[iParam0 /*3*/], iParam1))
	{
		if (!aggregate_func_2986(iParam0))
		{
			func_272(iParam0);
		}
		else
		{
			aggregate_func_4957(Local_0.f_7.f_7[iParam0 /*3*/]);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_3741(iParam0);
			}
			aggregate_func_3741(iParam0);
			func_446(func_319(iParam0));
			if (bParam2)
			{
				StringCopy(&cVar0, func_331(iParam0), 24);
				AUDIO::_0xEF51242E35242B47(&cVar0);
			}
		}
	}
	else if (!aggregate_func_4260(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_2034(Local_0.f_7.f_7[iParam0 /*3*/], 0);
		}
	}
	if (aggregate_func_4260(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
	}
}

char* func_331(int iParam0)
{
	char* sVar0;
	char cVar1[64];

	StringCopy(&cVar1, "OREWM_", 64);
	StringConCat(&cVar1, func_449(iParam0), 64);
	switch (iParam0)
	{
		case 0:
			sVar0 = "_CALLOUT";
			break;
		case 1:
			sVar0 = "_IDLE";
			break;
		case 2:
			sVar0 = "_CRIPPS";
			break;
		case 3:
			sVar0 = "_CATTCK1";
			break;
		case 4:
			sVar0 = "_CATTCK2";
			break;
		case 5:
			sVar0 = "_SIDLE";
			break;
		case 6:
			sVar0 = "_CALL";
			break;
		case 7:
			sVar0 = "_PREANT";
			break;
		case 8:
			sVar0 = "_NAPPRCH";
			break;
		case 9:
			sVar0 = "_APPRCH";
			break;
		case 10:
			sVar0 = "_HELP";
			break;
		case 11:
			sVar0 = "_RAW";
			break;
		case 12:
			sVar0 = "_COOKS";
			break;
		case 13:
			sVar0 = "_WAIT1";
			break;
		case 14:
			sVar0 = "_WAIT2";
			break;
		case 15:
			sVar0 = "_DECLINE";
			break;
		case 16:
			sVar0 = "_LEAVES";
			break;
		case 17:
			sVar0 = "_THANKS";
			break;
		case 18:
			sVar0 = "_ITLEAVE";
			break;
		case 19:
			sVar0 = "_OWNER";
			break;
		case 20:
			sVar0 = "_PASIDLE";
			break;
		case 21:
			sVar0 = "_ANTG1";
			break;
		case 22:
			sVar0 = "_ANTG2";
			break;
		case 23:
			sVar0 = "_HOGTIE1";
			break;
		case 24:
			sVar0 = "_HOGTIE2";
			break;
		case 25:
			sVar0 = "SILENT_GENERIC_AGREE";
			break;
		case 26:
			sVar0 = "SILENT_GENERIC_DISAGREE";
			break;
		case -1:
			return "";
	}
	StringConCat(&cVar1, sVar0, 64);
	if (func_438(iParam0))
	{
		StringCopy(&cVar1, sVar0, 64);
	}
	return aggregate_func_1966(cVar1);
}

void func_335(int iParam0)
{
	if (aggregate_func_4644(func_319(iParam0)))
	{
		aggregate_func_3553(func_319(iParam0));
	}
}

int func_336(int iParam0)
{
	if (!aggregate_func_4260(Local_0.f_7.f_7[iParam0 /*3*/]))
	{
		return 0;
	}
	return aggregate_func_4732(Local_0.f_7.f_7[iParam0 /*3*/]);
}

void func_337(int iParam0, int iParam1)
{
	if (!aggregate_func_7208(255))
	{
		aggregate_func_2442(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_519.f_18.f_1[iParam0 /*2*/])))
	{
		Local_519.f_18.f_1[iParam0 /*2*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate_func_4849(0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_519.f_18.f_1[iParam0 /*2*/]), "NB_WILDMAN_BLIP_NAME");
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_519.f_18.f_1[iParam0 /*2*/]), 942020339);
	}
}

int func_338()
{
	int iVar0;

	if (func_307(2, 255))
	{
		if (func_307(4, 255))
		{
			return (Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (aggregate_func_2973(&(Local_519.f_18.f_142[iVar0]), 1))
			{
				(Local_102[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_1.f_6 = iVar0;
				aggregate_func_2922(4);
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

void func_346()
{
	if (!aggregate_func_4281(256))
	{
		return;
	}
	aggregate_func_4667(512);
}

float func_361()
{
	float fVar0;
	vector3 vVar1;

	fVar0 = aggregate_func_3570(Global_1124870->f_1899.f_1, aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)));
	vVar1 = { aggregate_func_4966(aggregate_func_4710(Local_519.f_18.f_41)) };
	return fVar0;
}

void func_425(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !aggregate_func_2875(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4270(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, bParam2)));
}

int func_428(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { aggregate_func_3044(iParam0, -1557568325) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_430(int iParam0)
{
	struct<2> Var0;

	Var0 = { aggregate_func_3044(iParam0, -1557568325) };
	STATS::_0x6A0184E904CDF25E(&Var0, true);
}

bool func_433(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return false;
}

bool func_436(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return aggregate_func_4240((Local_102[iParam1 /*13*/])->f_1.f_1, iParam0);
	}
	return false;
}

bool func_438(int iParam0)
{
	if (iParam0 == 25 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_446(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			aggregate_func_4243(&((Local_102[iVar0 /*13*/])->f_1.f_1), iParam0);
		}
		iVar0++;
	}
}

char* func_449(int iParam0)
{
	char cVar0[32];
	int iVar4;

	if (func_550(iParam0))
	{
		StringCopy(&cVar0, "G", 32);
	}
	else if (iParam0 == 8)
	{
		MISC::_INT_TO_STRING(1, "%i", &cVar0);
	}
	else
	{
		iVar4 = aggregate_func_5076();
		iVar4++;
		if (iVar4 <= 5)
		{
			MISC::_INT_TO_STRING(iVar4, "%i", &cVar0);
		}
		else
		{
			StringCopy(&cVar0, "G", 32);
		}
	}
	return aggregate_func_2094(cVar0);
}

bool func_550(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
		case 7:
		case 11:
		case 12:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			return true;
		case 1:
			if (aggregate_func_5076() >= 1)
			{
				return true;
			}
			if (aggregate_func_4644(16))
			{
				return true;
			}
			break;
		case -1:
			return false;
	}
	return false;
}

