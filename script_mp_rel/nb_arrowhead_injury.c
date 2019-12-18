#region Local Var
	struct<8> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_8 = 1;
	var uLocal_9 = 0;
	var uLocal_10 = 1;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	vector3 vLocal_13[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<32> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_142 = 0;
	var uLocal_143 = 1;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 1065353216;
	var uLocal_147 = 0;
	var uLocal_148 = 1065353216;
	var uLocal_149 = 1077936128;
	var uLocal_150 = 1108082688;
	var uLocal_151 = 1113325568;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 1;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 7;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = -1;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	var uLocal_181 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 13, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 13, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_13, 97, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(vLocal_13[0 /*3*/]), 97, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

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
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		aggregate_func_2442(iVar3);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar3]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_7.f_3[iVar3])))
		{
			if (Local_110.f_18 == 0)
			{
				if (aggregate_func_7551() == 0)
				{
					aggregate_func_1172(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), 0, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), true);
				}
			}
			if (TASK::IS_PED_IN_WRITHE(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3]))) && PED::_0x12EB4E31F092C9B3(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3]))))
			{
				PED::_0x925A160133003AC6(NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar3])), 0);
			}
			iVar4 = NETWORK::NET_TO_ENT(&(Local_0.f_7.f_3[iVar3]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar3++;
	}
}

bool func_102()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar2])))
		{
			if (func_167(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
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

bool func_108()
{
	if (func_171())
	{
		return true;
	}
	switch (Local_0.f_7)
	{
		case 0:
			aggregate_func_8912();
			break;
		case 2:
			func_173();
			break;
		case 1:
			aggregate_func_7915();
			break;
		case 3:
			func_175();
			break;
		case 4:
			func_176();
			break;
	}
	return false;
}

bool func_116()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "EXPL";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sVar0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!aggregate_func_2053(func_183(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

void func_125()
{
	int iVar0;
	int iVar1;

	aggregate_func_8908(50f, 20f, 1, 1077936128 /* Float: 3f */, 0);
	aggregate_func_8909(1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_7.f_3[iVar0])))
		{
			(Local_110.f_18.f_4[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_0.f_7.f_3[iVar0]));
			iVar1 = aggregate_func_4849(iVar0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, -767591988);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (iVar0)
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 467, true);
						PED::_0x7528720101A807A5(iVar1, 1);
						PED::_0xDACE03C65C6666DB(iVar1, 1);
						PED::_0xCE6B874286D640BB(iVar1, 2);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						if (aggregate_func_7551() == 0)
						{
							GRAPHICS::_0xDFCE8CE9F3EBE93F(iVar1);
						}
						PED::_0x1902C4CFCC5BE57C(iVar1, func_189());
						PED::_0x1902C4CFCC5BE57C(iVar1, func_190());
						PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, false);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_131()
{
	func_198();
	aggregate_func_4310(Local_0.f_7);
	func_200();
	switch (Local_110.f_18)
	{
		case 0:
			func_201();
			break;
		case 2:
			func_202();
			break;
		case 1:
			func_203();
			break;
		case 3:
			func_204();
			break;
		case 4:
			func_205();
			break;
	}
}

int func_167(int iParam0, bool bParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_0.f_7.f_3[iParam0], func_183(iParam0), func_218(iParam0), func_219(iParam0), 1, 0, 0, 1, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	return 1;
}

bool func_171()
{
	if (Local_0.f_7 == 5)
	{
		return true;
	}
	return false;
}

void func_173()
{
	if (aggregate_func_4644(16) || aggregate_func_4644(32))
	{
		aggregate_func_4310(3);
	}
}

void func_175()
{
	if (aggregate_func_4644(1024))
	{
		aggregate_func_4310(5);
	}
}

void func_176()
{
	if (aggregate_func_4644(128))
	{
		aggregate_func_4310(5);
	}
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_227())
			{
				case 0:
					return joaat("a_c_deer_01");
				case 1:
					return joaat("a_c_coyote_01");
				case 2:
					return joaat("a_c_wolf_medium");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_189()
{
	switch (func_227())
	{
		case 0:
			return -868965679;
		case 1:
			return 1469569555;
		case 2:
			return 184083808;
		default:
			break;
	}
	return -868965679;
}

int func_190()
{
	switch (func_227())
	{
		case 0:
			return 191923877;
		case 1:
			return 66620888;
		case 2:
			return -942236851;
		default:
			break;
	}
	return -868965679;
}

void func_198()
{
	int iVar0;
	struct<15> Var1;

	Local_110.f_18.f_11 = -1;
	Local_110.f_18.f_12 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_110.f_18.f_11 = (Local_110.f_18.f_11 && (vLocal_13[iVar0 /*3*/])->f_1);
			Local_110.f_18.f_12 = (Local_110.f_18.f_12 || (vLocal_13[iVar0 /*3*/])->f_1);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (aggregate_func_3740(512, iVar0) && !aggregate_func_4644(1))
			{
				Var1 = { aggregate_func_1739(1667262090) };
				Var1.f_10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				Var1.f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				aggregate_func_7153(&Var1);
				aggregate_func_3814(1, 1);
			}
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;

	if (!aggregate_func_4644(512))
	{
		iVar0 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (aggregate_func_918(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1) < 1.25f)
			{
				aggregate_func_2922(512);
			}
		}
	}
}

void func_201()
{
	struct<15> Var0;

	if (!aggregate_func_4644(1) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
	{
		if (func_241())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (aggregate_func_7551() == 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 2f, 20000, 0.25f, false, 40000f);
					PED::_0x735662994E60A710((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
				else if (!aggregate_func_927((Local_110.f_18.f_4[0 /*2*/])->f_1, -916659666))
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
				}
				aggregate_func_2922(1);
				Var0 = { aggregate_func_1739(651783971 /* GXTEntry: "Blip" */) };
				aggregate_func_7153(&Var0);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!PED::_0x12EB4E31F092C9B3((Local_110.f_18.f_4[0 /*2*/])->f_1))
				{
					PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
			}
			else if (aggregate_func_7551() == 0 && !aggregate_func_927((Local_110.f_18.f_4[0 /*2*/])->f_1, -916659666))
			{
				TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 1);
			}
		}
	}
}

void func_202()
{
	if (aggregate_func_4644(16))
	{
		return;
	}
	if (aggregate_func_4628(&(Local_110.f_18.f_8), 10f))
	{
		if (aggregate_func_918(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
		{
			aggregate_func_1726(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
		}
		aggregate_func_4283(&(Local_110.f_18.f_8));
	}
	if (func_247((Local_110.f_18.f_4[0 /*2*/])->f_1))
	{
		if (aggregate_func_1031((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
		{
			if (!aggregate_func_4644(2))
			{
				if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), ENTITY::GET_ENTITY_COORDS((Local_110.f_18.f_4[0 /*2*/])->f_1, false, false), 2f) && !EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), ENTITY::GET_ENTITY_COORDS((Local_110.f_18.f_4[0 /*2*/])->f_1, false, false), 2f))
				{
					aggregate_func_1617(-2076515520, 1, 0);
				}
				aggregate_func_4896(2);
			}
			if (aggregate_func_918((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 10f)
			{
				aggregate_func_6724();
			}
			aggregate_func_4283(&(Local_110.f_18.f_8));
			aggregate_func_2922(16);
		}
	}
	else if (aggregate_func_4644(4))
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (PED::_0xEBE89623EB861271((Local_110.f_18.f_4[0 /*2*/])->f_1, 0) <= 0f && ENTITY::IS_ENTITY_DEAD((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (aggregate_func_918((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 10f && !aggregate_func_4644(2))
				{
					aggregate_func_1617(457103096, 1, 0);
					aggregate_func_6724();
					aggregate_func_4896(2);
				}
				aggregate_func_4283(&(Local_110.f_18.f_8));
				aggregate_func_2922(32);
			}
		}
		else if (aggregate_func_4644(32))
		{
			aggregate_func_4896(2);
			aggregate_func_2922(32);
		}
	}
	else
	{
		if (aggregate_func_7551() != 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!aggregate_func_4644(8))
				{
					PED::_0x735662994E60A710((Local_110.f_18.f_4[0 /*2*/])->f_1, 0);
					TASK::_0x30A768C30D385EC5((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 1, joaat("weapon_bow"), 0, 0);
					aggregate_func_2922(8);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO((Local_110.f_18.f_4[0 /*2*/])->f_1, func_253());
			}
		}
		if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			aggregate_func_2922(256);
			aggregate_func_2922(4);
		}
		else if (aggregate_func_7551() == 1 && !aggregate_func_4644(256))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (aggregate_func_1501((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 1) < 3f)
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					aggregate_func_2922(256);
				}
			}
		}
	}
}

void func_203()
{
	if (aggregate_func_4628(&(Local_110.f_18.f_8), 10f))
	{
		if (aggregate_func_918(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
		{
			aggregate_func_1726(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
		}
		aggregate_func_4283(&(Local_110.f_18.f_8));
	}
	if (!aggregate_func_4644(2))
	{
		if (aggregate_func_7551() == 1 && !aggregate_func_4644(256))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (aggregate_func_1501((Local_110.f_18.f_4[0 /*2*/])->f_1, func_242(), 1) < 3f || !aggregate_func_927((Local_110.f_18.f_4[0 /*2*/])->f_1, 713668775))
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					aggregate_func_2922(256);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_OCCLUDED((Local_110.f_18.f_4[0 /*2*/])->f_1) && aggregate_func_918(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 30f)
		{
			aggregate_func_6723();
		}
		if (aggregate_func_5162())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if ((aggregate_func_7551() == 1 && !aggregate_func_4644(256)) && TASK::GET_SCRIPT_TASK_STATUS((Local_110.f_18.f_4[0 /*2*/])->f_1, 713668775, 1) != 1)
				{
					TASK::TASK_ANIMAL_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1, 0, 0);
					aggregate_func_2922(256);
				}
				PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 0);
				aggregate_func_2922(2);
			}
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			if (TASK::IS_PED_IN_WRITHE((Local_110.f_18.f_4[0 /*2*/])->f_1))
			{
				if (!PED::_0x12EB4E31F092C9B3((Local_110.f_18.f_4[0 /*2*/])->f_1))
				{
					PED::_0x925A160133003AC6((Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
				}
			}
		}
	}
}

void func_204()
{
	char* sVar0;

	if ((!aggregate_func_4644(8) && aggregate_func_4628(&(Local_110.f_18.f_8), 5f)) && aggregate_func_918(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 20f)
	{
		if (!aggregate_func_7926(2, 1))
		{
			sVar0 = func_257();
			if (!MISC::_0x375F5870A7B8BEC1(sVar0))
			{
				aggregate_func_2916(sVar0, 10000, 0, 0, 0, 1);
			}
		}
		aggregate_func_4896(8);
	}
}

void func_205()
{
	if (aggregate_func_4644(1))
	{
		if (!aggregate_func_4644(4))
		{
			if (!PED::_0x98082246107A6ACF((Local_110.f_18.f_4[0 /*2*/])->f_1, func_190()))
			{
				aggregate_func_4896(4);
			}
		}
		if (!aggregate_func_755(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && func_260((Local_110.f_18.f_4[0 /*2*/])->f_1))
		{
			aggregate_func_4896(1);
			aggregate_func_2922(128);
		}
	}
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_110.f_15;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		default:
			break;
	}
	return 0f;
}

void func_226(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<14> Var4;

	bVar1 = false;
	switch (iParam0->f_9)
	{
		case 1667262090:
			if (aggregate_func_918((Local_110.f_18.f_4[0 /*2*/])->f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 0) < 25f)
			{
				aggregate_func_6724();
				aggregate_func_6692();
				aggregate_func_5005(2, 1);
			}
			iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0->f_10);
			iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar2) && _NAMESPACE26::_0x93A91A351A07360E(iVar2)) && _NAMESPACE26::_0xD6F6ACF4392187FB(iVar3)) && _NAMESPACE26::_0x93A91A351A07360E(iVar3))
			{
				if (iVar2 == iVar3)
				{
					bVar1 = true;
				}
			}
			if (iParam0->f_10 == PLAYER::PLAYER_ID() || bVar1)
			{
				func_271(iParam0->f_11);
				aggregate_func_2922(1024);
			}
			iVar0 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(iVar0, func_190());
					PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, false);
				}
			}
			break;
		case 651783971: /* GXTEntry: "Blip" */
			Var4.f_6 = -1082130432;
			Var4.f_7 = -1082130432;
			Var4.f_8 = -1082130432;
			Var4.f_9 = -1082130432;
			Var4.f_10 = -1082130432;
			Var4.f_11 = -1082130432;
			Var4.f_12 = -1;
			Var4.f_13 = -1;
			Var4 = 1498498500;
			Var4.f_1 = (Local_110.f_18.f_4[0 /*2*/])->f_1;
			Local_110.f_18.f_7 = EVENT::_0xCA1315C33B9A2847(&Var4);
			if (aggregate_func_918(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), (Local_110.f_18.f_4[0 /*2*/])->f_1, 1, 1) < 125f)
			{
				aggregate_func_1726(1891783641, (Local_110.f_18.f_4[0 /*2*/])->f_1, 1);
			}
			aggregate_func_4283(&(Local_110.f_18.f_8));
			break;
	}
}

int func_227()
{
	switch (aggregate_func_5076())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 2;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_241()
{
	return Local_110.f_31.f_4;
}

Vector3 func_242()
{
	switch (aggregate_func_5076())
	{
		case 0:
			return -1960.423f, -2081.308f, 56.64626f;
		case 1:
			return 116.8389f, 94.82872f, 103.029f;
		case 2:
			return -922.4316f, 894.5942f, 141.3653f;
		case 3:
			return 2819.513f, 1068.565f, 45.8229f;
		case 4:
			return 1705.646f, -1107.097f, 41.68002f;
		case 5:
			return 1271.895f, -873.2363f, 66.67879f;
		case 6:
			return 321.1271f, 1229.421f, 184.5556f;
		case 7:
			return -1771.546f, -270.3535f, 181.0415f;
		case 8:
			return -1241.065f, -1134.067f, 69.09028f;
		case 9:
			return -2351.374f, -1570.987f, 150.7724f;
		case 10:
			return -2684.808f, -2585.378f, 68.77023f;
		case 11:
			return -4516.411f, -3314.907f, 15.34342f;
		case 12:
			return -4645.084f, -2681.163f, -9.38732f;
		case 13:
			return -5720.355f, -3208.366f, -23.00574f;
		case 14:
			return -1628.354f, -2275.218f, 43.5816f;
		case 15:
			return -1599.365f, 1690.092f, 236.8163f;
		case 16:
			return 431.79f, 2051.425f, 235.0013f;
		case 17:
			return -559.3034f, 511.8383f, 98.66551f;
		case 18:
			return 1742.833f, 595.4795f, 104.0148f;
		case 19:
			return 1574.622f, -1752.983f, 52.35271f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_247(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))))
				{
					return true;
				}
			}
		}
	}
	return false;
}

float func_253()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { Local_110.f_15 };
	vVar3 = { func_242() };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
	fVar7 = aggregate_func_1501((Local_110.f_18.f_4[0 /*2*/])->f_1, vVar3, 1);
	return aggregate_func_4928(1f, 2f, (fVar7 / fVar6));
}

char* func_257()
{
	switch (func_227())
	{
		case 0:
			return "NB_ARROWHEAD_H_DEER";
		case 1:
			return "NB_ARROWHEAD_H_COYOTE";
		case 2:
			return "NB_ARROWHEAD_H_WOLF";
		default:
			break;
	}
	return "";
}

bool func_260(int iParam0)
{
	return ENTITY::_0x8DE41E9902E85756(iParam0);
}

void func_271(int iParam0)
{
	int iVar0;

	iVar0 = 172753906;
	if (iParam0 < 0 || iParam0 > 6)
	{
		iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 1375711881;
			break;
		case 1:
			iVar0 = 1085161806;
			break;
		case 2:
			iVar0 = -1920342777;
			break;
		case 3:
			iVar0 = -1303158970;
			break;
		case 4:
			iVar0 = 533989549;
			break;
		case 5:
			iVar0 = 319906586;
			break;
		case 6:
			iVar0 = -1140055210;
			break;
	}
	aggregate_func_4638(iVar0, 0, 255, 0, 0);
}

