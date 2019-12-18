#region Local Var
	struct<8> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_8 = 1;
	var uLocal_9 = 0;
	vector3 vLocal_10[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<19> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 7;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	var uLocal_150 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 10, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 10, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_10, 97, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(vLocal_10[0 /*3*/]), 97, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
}

void func_61()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = aggregate_func_2109();
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_1[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_1[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (TASK::_0x841475AC96E794D1(Local_107.f_18.f_4))
		{
			TASK::_0x81948DFE4F5A0283(Local_107.f_18.f_4);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
		{
			ENTITY::DELETE_ENTITY(&(Local_107.f_18.f_5));
		}
	}
}

bool func_100()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_1[iVar2])))
		{
			if (func_161(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				if (iVar2 == 0)
				{
					ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar2])), 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(&(Local_0.f_7.f_1[iVar2])), true);
				}
				iVar2++;
			}
			if (bVar1)
			{
				aggregate_func_4983();
			}
			return iVar0;
		}
	}
}

bool func_106()
{
	if (func_165())
	{
		return true;
	}
	switch (Local_0.f_7)
	{
		case 0:
			aggregate_func_8929();
			break;
		case 1:
			func_167();
			break;
		case 2:
			func_168();
			break;
	}
	return false;
}

bool func_114()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "EXPL";
	iVar1 = 1;
	if (HUD::_0x2C729F2B94CEA911(sVar0))
	{
		HUD::_0xF66090013DE648D5(sVar0);
		if (!HUD::_0xD0976CC34002DB57(sVar0))
		{
			iVar1 = 0;
		}
	}
	STREAMING::_0x19A6BE7D9C6884D3(1545192181, 15, 0, 0);
	if (!STREAMING::_0x9427C94D2E4094A4(1545192181, 0))
	{
		iVar1 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!aggregate_func_2053(func_175(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_119()
{
	if (!TASK::_0x841475AC96E794D1(Local_107.f_18.f_4))
	{
		Local_107.f_18.f_4 = TASK::CREATE_SCENARIO_POINT(1545192181, Local_107.f_15, func_177(), 0, 0, 0);
	}
	return TASK::_0x841475AC96E794D1(Local_107.f_18.f_4);
}

void func_129()
{
	aggregate_func_2679();
	aggregate_func_4310(Local_0.f_7);
	switch (Local_107.f_18)
	{
		case 0:
			func_187();
			break;
		case 1:
			func_188();
			break;
		case 2:
			func_189();
			break;
	}
}

int func_161(int iParam0, bool bParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_930(Local_0.f_7.f_1[iParam0], func_175(iParam0), func_201(), 1, 0))
	{
		*bParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_165()
{
	if (Local_0.f_7 == 3)
	{
		return true;
	}
	return false;
}

void func_167()
{
	if (aggregate_func_4644(1))
	{
		aggregate_func_4310(2);
	}
}

void func_168()
{
	if (aggregate_func_4644(2))
	{
		aggregate_func_4310(3);
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1935100224;
		default:
			break;
	}
	return 0;
}

float func_177()
{
	switch (Local_107.f_2)
	{
		case 0:
			return -30.146f;
		case 1:
			return 73.5f;
		case 2:
			return -117.6f;
		case 3:
			return 90f;
		case 4:
			return -90f;
		case 5:
			return -90f;
		case 6:
			return -45f;
		case 7:
			return 180f;
		case 8:
			return 0f;
		case 9:
			return -90f;
		case 10:
			return 90f;
		case 11:
			return 90f;
		case 12:
			return 180f;
		case 13:
			return 180f;
		case 14:
			return -90f;
		case 15:
			return -90f;
		case 16:
			return 180f;
		case 17:
			return -73.7f;
		case 18:
			return -90f;
		case 19:
			return 180f;
		default:
			break;
	}
	return 0f;
}

void func_187()
{
	if (aggregate_func_1890(Local_107.f_15, 1f, 20f))
	{
		aggregate_func_6723();
	}
}

void func_188()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
	{
		Local_107.f_18.f_5 = TASK::_0x295514F198EFD0CA(Local_107.f_18.f_4, "PrimaryItem");
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), Local_107.f_18.f_5, 0);
			PLAYER::_0x6ECFC621A168424C(Local_107.f_18.f_5, Local_107.f_18.f_5, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_107.f_18.f_5, 2, false);
			ENTITY::SET_ENTITY_PROOFS(Local_107.f_18.f_5, 4, false);
		}
	}
	if (PED::_0x34D6AC1157C8226C(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1545192181) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("attach")))
	{
		aggregate_func_4896(1);
		aggregate_func_3553(1);
	}
}

void func_189()
{
	struct<15> Var0;

	if (aggregate_func_4644(1))
	{
		if (!PED::_0x34D6AC1157C8226C(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1545192181) && !func_215())
		{
			Var0 = { aggregate_func_1739(-773758976) };
			Var0.f_10 = PLAYER::PLAYER_ID();
			aggregate_func_7153(&Var0);
			func_218();
			aggregate_func_4896(1);
		}
	}
	if (aggregate_func_1501(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_107.f_15, 1) > 40f)
	{
		aggregate_func_3553(2);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5) && !ENTITY::IS_ENTITY_OCCLUDED(Local_107.f_18.f_5))
		{
			aggregate_func_6723();
			aggregate_func_6724();
		}
		aggregate_func_3553(2);
	}
}

Vector3 func_201()
{
	vector3 vVar0;

	vVar0 = { Local_107.f_15 };
	switch (aggregate_func_5076())
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), 1f, -0.5f, 0f) };
			break;
		case 2:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), -1f, -0.5f, 0f) };
			break;
		default:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_107.f_15, func_177(), 1f, -0.5f, 0f) };
			break;
	}
	return vVar0;
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	switch (iParam0->f_9)
	{
		case -773758976:
			func_230();
			iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0->f_10);
			iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) && _NAMESPACE26::_0x93A91A351A07360E(iVar1)) && _NAMESPACE26::_0xD6F6ACF4392187FB(iVar2)) && _NAMESPACE26::_0x93A91A351A07360E(iVar2))
			{
				if (iVar1 == iVar2)
				{
					bVar0 = true;
				}
			}
			if (iParam0->f_10 == PLAYER::PLAYER_ID() || bVar0)
			{
				aggregate_func_6723();
				aggregate_func_6724();
				aggregate_func_6692();
				aggregate_func_5153();
			}
			break;
	}
}

bool func_215()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -610890012))
	{
		return true;
	}
	return false;
}

void func_218()
{
	int iVar0;

	iVar0 = aggregate_func_7946(Global_36, 1);
	aggregate_func_4741(iVar0, 0);
}

void func_230()
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_107.f_18.f_5))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_107.f_18.f_5))
		{
			ENTITY::DETACH_ENTITY(Local_107.f_18.f_5, true, true);
		}
		ENTITY::SET_ENTITY_VISIBLE(Local_107.f_18.f_5, false);
		ENTITY::SET_ENTITY_COLLISION(Local_107.f_18.f_5, false, false);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_107.f_18.f_5, true, false) };
		vVar0 = { vVar0.x, vVar0.y, (vVar0.z - 10f) };
		ENTITY::SET_ENTITY_COORDS(Local_107.f_18.f_5, vVar0, false, false, true, true);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Local_107.f_18.f_5));
	}
}

