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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<4> Local_23 = { 0, 0, 0, 0 } ;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1402.731f, -2317.543f, 43.425f, 0f, 0f, 3.94f, 5.574f, 3.58f, 2.824f, "ThievesLanding - m_volFence");
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1402.731f, -2317.543f, 43.425f, 0f, 0f, 3.94f, 3.27f, 2.497f, 2.824f, "ThievesLanding - m_volFencePrompt");
	aggregate_func_3817(&Local_23, -1355.28f, -2296.67f, 40.62f, 0f, 0f, 0f, 6f, 5f, 3f, "HTL_VOLUME_BOAT_INTERIOR");
	Local_23.f_1 = 0;
	Local_23.f_2 = 0;
	return true;
}

void func_29(int iParam0)
{
	if (aggregate_func_4251() == -1)
	{
	}
	else
	{
		aggregate_func_348(4, iLocal_21, iParam0, iLocal_22, 0, 44, 0, 0, -1082130432 /* Float: -1f */, 0);
		aggregate_func_1218(4, 0);
	}
}

bool func_40(int iParam0)
{
	func_63();
	return false;
}

void func_63()
{
	if (!Local_23.f_1)
	{
		if ((MISC::GET_FRAME_COUNT() % 10) == 0)
		{
			Local_23.f_3 = ENTITY::_0x66B2B83B94B22458(-1139445608);
			if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_3))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_23.f_3, false);
				Local_23.f_1 = 1;
			}
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_23))
	{
		aggregate_func_3817(&Local_23, -1355.28f, -2296.67f, 40.62f, 0f, 0f, 0f, 6f, 5f, 3f, "HTL_VOLUME_BOAT_INTERIOR");
	}
	if (Local_23.f_2)
	{
		if (!aggregate_func_1578(PLAYER::PLAYER_PED_ID(), Local_23, 0, 1))
		{
			WATER::_ENABLE_WATER_COLLISION();
			Local_23.f_2 = 0;
		}
		else
		{
			WATER::_DISABLE_WATER_COLLISION();
		}
	}
	else if (aggregate_func_1578(PLAYER::PLAYER_PED_ID(), Local_23, 0, 1))
	{
		WATER::_DISABLE_WATER_COLLISION();
		Local_23.f_2 = 1;
	}
}

