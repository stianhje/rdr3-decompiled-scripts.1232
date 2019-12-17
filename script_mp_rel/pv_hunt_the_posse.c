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
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	struct<9> Local_18 = { 0, 255, 255, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_27[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<46> Local_124 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_188 = 255;
	var uLocal_189 = 255;
	var uLocal_190 = 255;
	var uLocal_191 = 255;
	var uLocal_192 = 255;
	var uLocal_193 = 255;
	var uLocal_194 = 255;
	var uLocal_195 = 255;
	var uLocal_196 = 255;
	var uLocal_197 = 255;
	var uLocal_198 = 255;
	var uLocal_199 = 255;
	var uLocal_200 = 255;
	var uLocal_201 = 255;
	var uLocal_202 = 255;
	var uLocal_203 = 255;
	var uLocal_204 = 255;
	var uLocal_205 = 255;
	var uLocal_206 = 255;
	var uLocal_207 = 255;
	var uLocal_208 = 255;
	var uLocal_209 = 255;
	var uLocal_210 = 255;
	var uLocal_211 = 255;
	var uLocal_212 = 255;
	var uLocal_213 = 255;
	var uLocal_214 = 255;
	var uLocal_215 = 255;
	var uLocal_216 = 255;
	var uLocal_217 = 255;
	var uLocal_218 = 255;
	var uLocal_219 = 255;
	struct<6> Local_220[32];
	struct<1422> Local_413 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == fme_animal_tagging.__EntryFunction__

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_18, 9, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_18), 9, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_27, 97, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(vLocal_27[0 /*3*/]), 97, "m_clientData");
}

void func_64()
{
	aggregate.fme_animal_tagging.func_35(-2065086408);
}

void func_72()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_413.f_5))
	{
		Local_18.f_1 = Local_413.f_5;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_18.f_1)))
		{
			Local_18.f_3 = _NAMESPACE26::_0x901E0DC25080C8B9(Local_18.f_1);
		}
	}
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
	char cVar11[64];
	char cVar19[64];
	int iVar27;
	var uVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	NETWORK::_0x236905C700FDB54D();
	aggregate.fme_animal_tagging.func_262();
	aggregate.aberdeenpigfarm.func_23();
	if (!aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
	{
		aggregate.fme_animal_tagging.func_126(1, 1);
		aggregate.fme_animal_tagging.func_212(8);
		return;
	}
	aggregate.fme_animal_tagging.func_260();
	aggregate.fme_animal_tagging.func_273();
	if (aggregate.fme_animal_tagging.func_274())
	{
		if (aggregate.fme_animal_tagging.func_275())
		{
			if (!aggregate.aberdeenpigfarm.func_123())
			{
				Local_413.f_1384 = 1310067901;
			}
		}
		else if (aggregate.fme_animal_tagging.func_134(8192))
		{
			Local_413.f_1384 = joaat("leaderboard");
		}
		else
		{
			Local_413.f_1384 = 0;
		}
		func_268(aggregate.fme_archery.func_268(), func_267(), Local_413.f_11, Local_413.f_12, 30000);
	}
	else if (aggregate.fme_animal_tagging.func_275())
	{
		Local_413.f_1384 = 1310067901;
		func_268(0, func_267(), 0, 0, 30000);
	}
	else
	{
		aggregate.fme_animal_tagging.func_277();
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		if (aggregate.fme_animal_tagging.func_278())
		{
			aggregate.fme_animal_tagging.func_279(&(Local_413.f_1005));
			iVar0 = aggregate.fme_animal_tagging.func_280();
			if (aggregate.fme_animal_tagging.func_134(4096))
			{
				GRAPHICS::_0x3A9A281FF71249E9(aggregate.fme_animal_tagging.func_57(), iVar0);
			}
			else
			{
				GRAPHICS::_0x3A9A281FF71249E9(aggregate.fme_animal_tagging.func_58(), iVar0);
			}
			if (!aggregate.fme_animal_tagging.func_275() || Local_413.f_9 == -785841056)
			{
				aggregate.fme_animal_tagging.func_244(&(Local_413.f_1005), 1);
			}
			aggregate.fme_animal_tagging.func_174(32);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(64))
	{
		aggregate.fme_animal_tagging.func_281();
		if (Local_413.f_9 == -785841056)
		{
			if (!aggregate.fishing_core.func_107(Local_413.f_1287))
			{
				aggregate.fme_animal_tagging.func_283();
				iVar1 = 6000;
				if (Local_170.f_12 != 0 || !aggregate.fme_animal_tagging.func_284(Local_413.f_1384))
				{
					iVar1 = 1000;
				}
				if (!aggregate.barcustomer_interaction.func_42(&(Local_413.f_1316)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > iVar1)
				{
					if (aggregate.aberdeenpigfarm.func_123())
					{
						return;
					}
					aggregate.fme_animal_tagging.func_277();
					aggregate.fme_animal_tagging.func_174(64);
					aggregate.fme_animal_tagging.func_212(8);
				}
			}
		}
		else if (((!aggregate.fishing_core.func_107(Local_413.f_1287) && !aggregate.fishing_core.func_277()) && !aggregate.fme_animal_tagging.func_287()) && !aggregate.fme_animal_tagging.func_288())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!aggregate.barcustomer_interaction.func_42(&(Local_413.f_1322)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1322));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_413.f_1322)) > 10000)
				{
					aggregate.dynamic_craft_scenario.func_188();
					aggregate.fme_animal_tagging.func_290(&(Local_413.f_1322));
				}
			}
			else
			{
				aggregate.fme_animal_tagging.func_283();
				if (!aggregate.barcustomer_interaction.func_42(&(Local_413.f_1316)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 1000 && !aggregate.fishing_core.func_107(Local_413.f_1289))
				{
					aggregate.aberdeenpigfarm.func_154(0);
					aggregate.fme_animal_tagging.func_174(64);
				}
			}
		}
		else
		{
			if (aggregate.barcustomer_interaction.func_42(&(Local_413.f_1316)))
			{
				aggregate.fme_animal_tagging.func_290(&(Local_413.f_1316));
			}
			if (aggregate.barcustomer_interaction.func_42(&(Local_413.f_1322)))
			{
				aggregate.fme_animal_tagging.func_290(&(Local_413.f_1322));
			}
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(128))
	{
		aggregate.fme_animal_tagging.func_281();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !aggregate.annesburg.func_180(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::_0x9B1FC259187C97C0("winners_pose");
			}
		}
		else if (aggregate.fme_animal_tagging.func_281() && aggregate.fme_animal_tagging.func_291())
		{
			GRAPHICS::ANIMPOSTFX_STOP(aggregate.fme_animal_tagging.func_57());
			GRAPHICS::ANIMPOSTFX_STOP(aggregate.fme_animal_tagging.func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (PED::_0x3AA24CCC0D451379(Global_35))
				{
					TASK::_0x79559BAD83CCD038(Global_35, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
				}
				if (PED::_0x0E99E3BF11BB6367(Global_35))
				{
					iVar2 = PED::_0xD0B7AEB56229D317(Global_35);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
						PED::_0x789DABD18E9024DB(Global_35, 32768, 1);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
				}
				if (PED::_0x3BDFCF25B58B0415(Global_35))
				{
					PED::_0x789DABD18E9024DB(Global_35, 4096, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_413.f_1416))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_413.f_1416, true, false) };
					if (!aggregate.annesburg.func_121(vVar3))
					{
						vVar6 = { aggregate.fme_animal_tagging.func_292(vVar3, 10f, 0.25f) };
						ENTITY::SET_ENTITY_COORDS(Global_35, vVar6, true, false, true, true);
					}
				}
			}
			if (Local_170.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_413.f_1416))
			{
				aggregate.fme_animal_tagging.func_212(8);
				return;
			}
			aggregate.fme_animal_tagging.func_293();
			aggregate.fme_animal_tagging.func_294();
			aggregate.fme_animal_tagging.func_174(128);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(512))
	{
		aggregate.fme_animal_tagging.func_294();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_413.f_1415) && !CAM::IS_CAM_ACTIVE(Local_413.f_1415))
				{
					CAM::SET_CAM_ACTIVE(Local_413.f_1415, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_413.f_1416) && !ENTITY::IS_ENTITY_DEAD(Local_413.f_1416))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_413.f_1416, true);
				}
				aggregate.fme_animal_tagging.func_295();
				HUD::_0x4CC5F2FC1332577F(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_290(&(Local_413.f_1316));
			Local_413.f_1418 = 1500;
			if (!aggregate.aberdeenpigfarm.func_123())
			{
				if (Local_170.f_10 != 255)
				{
					bVar9 = aggregate.fme_animal_tagging.func_297();
					Local_413.f_1418 = aggregate.fme_animal_tagging.func_298(bVar9);
					iVar10 = aggregate.fme_animal_tagging.func_299(bVar9);
					aggregate.fme_animal_tagging.func_300(Local_413.f_1416, bVar9, 2, 0, 0, iVar10);
				}
			}
			aggregate.fme_animal_tagging.func_174(512);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(1024))
	{
		aggregate.fme_animal_tagging.func_294();
		if (!aggregate.barcustomer_interaction.func_42(&(Local_413.f_1316)))
		{
			StringCopy(&cVar11, aggregate.fme_animal_tagging.func_301(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar11))
			{
				StringCopy(&cVar11, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			StringCopy(&cVar19, aggregate.fme_animal_tagging.func_301(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
			{
				cVar19 = { Local_413.f_1406 };
			}
			if (aggregate.fme_animal_tagging.func_134(8192) || aggregate.fme_animal_tagging.func_134(524288))
			{
				aggregate.fme_animal_tagging.func_307(&(Local_413.f_1421), &cVar19, aggregate.fme_archery.func_305(), aggregate.fme_animal_tagging.func_301(), func_306(aggregate.fme_archery.func_307(&(Local_413.f_13), 0)), "", "", Local_413.f_1414);
			}
			else if (Local_170.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(aggregate.fme_animal_tagging.func_301()))
				{
					aggregate.fme_animal_tagging.func_307(&(Local_413.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					aggregate.fme_animal_tagging.func_307(&(Local_413.f_1421), "", "", aggregate.fme_animal_tagging.func_301(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_170.f_10 == PLAYER::PLAYER_ID())
			{
				aggregate.fme_animal_tagging.func_307(&(Local_413.f_1421), &cVar11, &cVar19, func_306(aggregate.fme_archery.func_307(&(Local_413.f_13), 0)), "", "", "", Local_413.f_1414);
			}
			else
			{
				aggregate.fme_animal_tagging.func_307(&(Local_413.f_1421), &cVar11, &cVar19, func_309(Local_413.f_1406, Local_413.f_1414, aggregate.fme_archery.func_307(&(Local_413.f_13), 0)), "", "", "", Local_413.f_1414);
			}
			aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
		}
		else
		{
			iVar27 = Local_413.f_1418;
			aggregate.aberdeenpigfarm.func_154(&iVar27);
			if (aggregate.aberdeenpigfarm.func_123() || (iVar27 > 0 && aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > iVar27))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_413.f_1417);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_413.f_1417);
				aggregate.fme_animal_tagging.func_174(1024);
			}
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(2048))
	{
		aggregate.fme_animal_tagging.func_294();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_413.f_1417, 2, 0, &uVar28))
		{
			bVar29 = true;
		}
		if (bVar29 || aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(aggregate.fme_animal_tagging.func_122(), aggregate.fme_animal_tagging.func_123(), true, 0);
			aggregate.fme_animal_tagging.func_61(&(Local_413.f_1421), 1);
			aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
			aggregate.fme_animal_tagging.func_174(2048);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(4096))
	{
		aggregate.fme_animal_tagging.func_294();
		if (aggregate.fme_animal_tagging.func_312(&(Local_413.f_1421)) || aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 8000)
		{
			aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
			aggregate.fme_animal_tagging.func_174(4096);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		aggregate.fme_animal_tagging.func_294();
		if (aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 5000)
		{
			if (!aggregate.aberdeenpigfarm.func_123())
			{
				aggregate.fme_animal_tagging.func_117(&(Local_413.f_1421));
			}
			aggregate.fme_animal_tagging.func_35(aggregate.fme_animal_tagging.func_314());
			aggregate.fme_animal_tagging.func_290(&(Local_413.f_1316));
			aggregate.fme_animal_tagging.func_174(8192);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(16384))
	{
		aggregate.fme_animal_tagging.func_294();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_413.f_13.f_11))
		{
			if (Local_413.f_1283 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_413.f_13.f_11, "info_value_07", aggregate.error_listener.func_18(Local_413.f_1283));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_413.f_13.f_11, "info_value_07", true);
				Local_413.f_1283 = 0;
			}
			if (Local_413.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_413.f_13.f_11, "info_visible_08", aggregate.error_listener.func_18(Local_413.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_413.f_13.f_11, "info_visible_08", true);
				Local_413.f_1285 = 0;
			}
			if (Local_413.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_413.f_13.f_11, "info_visible_06", aggregate.error_listener.func_18(Local_413.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_413.f_13.f_11, "info_visible_06", true);
				Local_413.f_1284 = 0;
			}
			if (Local_413.f_1286 > 0)
			{
				Local_413.f_1286 = 0;
			}
		}
		if (!aggregate.barcustomer_interaction.func_42(&(Local_413.f_1316)))
		{
			aggregate.fme_animal_tagging.func_1407(&(Local_413.f_1316));
		}
		else if (aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 2000)
		{
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar33) || _NAMESPACE26::_0x149A2751AB66AC02(iVar33) <= 1) || !_NAMESPACE26::_0x93A91A351A07360E(iVar33))
			{
				iVar30 = 1;
				if (aggregate.fme_animal_tagging.func_171(512, Local_413.f_1332))
				{
					iVar31++;
				}
				if (aggregate.fme_animal_tagging.func_171(1024, Local_413.f_1332))
				{
					iVar32++;
				}
			}
			else
			{
				iVar36 = 0;
				iVar36 = 0;
				while (iVar36 <= 31)
				{
					iVar34 = PLAYER::INT_TO_PLAYERINDEX(iVar36);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar34) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar33, iVar34)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar34))
					{
						iVar35 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar34);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar35))
						{
							iVar30++;
							if (aggregate.fme_animal_tagging.func_171(512, iVar35))
							{
								iVar31++;
							}
							if (aggregate.fme_animal_tagging.func_171(1024, iVar35))
							{
								iVar32++;
							}
							if ((_NAMESPACE26::_0x424B17A7DC5C90BC(iVar34) && iVar34 != PLAYER::PLAYER_ID()) && aggregate.fme_animal_tagging.func_171(1024, iVar35))
							{
								iVar31 = 7;
							}
						}
					}
					iVar36++;
				}
			}
			if (iVar31 > iVar30)
			{
				iVar31 = iVar30;
			}
			if (iVar32 > iVar30)
			{
				iVar32 = iVar30;
			}
			if (!aggregate.annesburg.func_217(Local_413.f_1297))
			{
				if (iVar30 > 1)
				{
					Local_413.f_1297 = aggregate.binoculars.func_24(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_413.f_1297 = aggregate.binoculars.func_24("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (aggregate.annesburg.func_217(Local_413.f_1297))
			{
				if (iVar30 > 1)
				{
					aggregate.fme_animal_tagging.func_318(Local_413.f_1297, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), 1);
				}
				else
				{
					aggregate.fme_animal_tagging.func_318(Local_413.f_1297, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!aggregate.fme_animal_tagging.func_171(512, Local_413.f_1332))
				{
					if (aggregate.binoculars.func_13(Local_413.f_1297, 1))
					{
						aggregate.fme_animal_tagging.func_220(512, Local_413.f_1332);
						aggregate.binoculars.func_37(Local_413.f_1297, 0, 1, 1);
					}
				}
			}
			if (!aggregate.fme_animal_tagging.func_171(1024, Local_413.f_1332))
			{
				if (iVar31 >= iVar30 || aggregate.fme_animal_tagging.func_181(&(Local_413.f_1316)) > 62000)
				{
					aggregate.fme_animal_tagging.func_220(1024, Local_413.f_1332);
				}
			}
			else if (iVar32 >= iVar30)
			{
				aggregate.annesburg.func_218(&(Local_413.f_1297), 1, 1);
				aggregate.fme_animal_tagging.func_290(&(Local_413.f_1316));
				aggregate.fme_animal_tagging.func_174(16384);
			}
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(32768))
	{
		if (aggregate.aberdeenpigfarm.func_123())
		{
			aggregate.fme_animal_tagging.func_117(&(Local_413.f_1421));
		}
		aggregate.fme_animal_tagging.func_294();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::_0x9B1FC259187C97C0("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_174(32768);
			aggregate.fme_animal_tagging.func_212(8);
		}
	}
}

void func_125()
{
	func_340(&Local_124, 1);
}

bool func_194()
{
	if (func_384())
	{
		return true;
	}
	if (func_396())
	{
		return true;
	}
	switch (Local_18)
	{
		case 0:
			aggregate.coffee_drinking.func_5(&Local_18, 1);
			break;
		case 1:
			aggregate.fme_animal_tagging.func_187();
			aggregate.coffee_drinking.func_5(&Local_18, 2);
			break;
		case 2:
			break;
	}
	return false;
}

bool func_219()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1))
	{
		StringCopy(&(Local_124.f_32), aggregate.fme_animal_tagging.func_504(Local_413.f_5), 64);
		Local_124.f_40 = aggregate.fme_animal_tagging.func_487(Local_413.f_5, 1, -1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_124.f_32)))
		{
			return false;
		}
	}
	func_418();
	func_419();
	if (aggregate.fishing_core.func_34(&Local_124, 64))
	{
		aggregate.blackwater.func_55(-1585840296, 1, 0);
		aggregate.long_update.func_336(-1585840296);
	}
	return true;
}

void func_222()
{
	if ((_NAMESPACE26::_0x0F99F6436528A089(Local_18.f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_18.f_3, PLAYER::PLAYER_ID()))
	{
		func_423(Local_413);
	}
}

void func_234()
{
	bool bVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (aggregate.fme_animal_tagging.func_171(65536, Local_413.f_1332))
	{
		return;
	}
	bVar0 = aggregate.fme_animal_tagging.func_257();
	if (bVar0 == 0)
	{
		return;
	}
	if (bVar0 == joaat("weapon_fishingrod"))
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (!WEAPON::_0xF29A186ED428B552(Global_35, bVar0))
	{
		return;
	}
	WEAPON::_0x6929E22158E52265(Global_35, 0, &Var1);
	WEAPON::_0x6929E22158E52265(Global_35, 1, &Var5);
	if (aggregate.fme_animal_tagging.func_339(Var1, Var5))
	{
		aggregate.fme_animal_tagging.func_220(65536, Local_413.f_1332);
	}
}

void func_235()
{
	switch (Local_124.f_4)
	{
		case 0:
			if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0xD6F6ACF4392187FB(Local_18.f_3)) && _NAMESPACE26::_0x0F99F6436528A089(Local_18.f_3)) && _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_18.f_3) && aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
			{
				if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					aggregate.fme_animal_tagging.func_212(1);
				}
				else
				{
					aggregate.fme_animal_tagging.func_212(2);
				}
			}
			break;
		case 1:
			if (!aggregate.fme_animal_tagging.func_435(Local_413.f_1289))
			{
				aggregate.net_main_offline.func_312("HTP_LOBBY_LEADER", 10000, 0, 0, 0, 1);
				aggregate.fme_animal_tagging.func_212(3);
			}
			break;
		case 2:
			if (!aggregate.fme_animal_tagging.func_435(Local_413.f_1289))
			{
				aggregate.net_main_offline.func_312("HTP_LOBBY_MEMBER", 10000, 0, 0, 0, 1);
				aggregate.fme_animal_tagging.func_212(3);
			}
			break;
		case 3:
			if ((!aggregate.fme_animal_tagging.func_435(Local_413.f_1289) && aggregate.annesburg.func_217(Local_413.f_1296)) && aggregate.doc_book.func_70(Local_413.f_1296, 0))
			{
				if (Local_413.f_1277 < aggregate.fme_animal_tagging.func_433())
				{
					aggregate.net_main_offline.func_312("HTP_HELP_FAST_TRAVEL", 10000, 0, 0, 0, 1);
				}
			}
			aggregate.fme_animal_tagging.func_212(4);
			break;
		case 4:
			break;
	}
}

void func_247()
{
	if (PLAYER::PLAYER_ID() == Local_18.f_1)
	{
		func_423(Local_413);
		if (aggregate.fme_animal_tagging.func_134(131072))
		{
			aggregate.annesburg.func_112(1, 1);
			aggregate.fme_animal_tagging.func_174(262144);
			aggregate.fme_animal_tagging.func_174(131072);
			aggregate.fme_animal_tagging.func_448();
		}
	}
}

void func_257()
{
	func_515();
	func_516(&Local_18, &vLocal_27, &Local_124);
	func_517();
	switch (Local_124.f_2)
	{
		case 0:
			if (aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
			{
				aggregate.fme_animal_tagging.func_902(3);
				if (Global_1273882->f_15 == Local_18.f_3 && aggregate.fme_animal_tagging.func_331(Global_1273882->f_15))
				{
					aggregate.fme_animal_tagging.func_332(0, 0, 0);
					aggregate.fme_animal_tagging.func_1147(&Local_124, 1);
				}
				if (aggregate.fme_animal_tagging.func_328())
				{
					aggregate.fme_animal_tagging.func_1147(&Local_124, 2);
				}
				else
				{
					aggregate.fme_animal_tagging.func_948();
				}
				if (&vLocal_27[Local_413.f_1332 /*3*/] == 0)
				{
					func_521(&Local_18, vLocal_27[Local_413.f_1332 /*3*/]);
				}
				func_522();
				aggregate.camera_item.func_77(&Local_124, 1);
			}
			else
			{
				func_524();
			}
			break;
		case 1:
			if (Local_18 > 1)
			{
				aggregate.camera_item.func_77(&Local_124, Local_18);
				return;
			}
			func_525(&Local_18, &vLocal_27, &Local_124, 1);
			break;
		case 2:
			func_526();
			func_527(vLocal_27[Local_413.f_1332 /*3*/]);
			func_525(&Local_18, &vLocal_27, &Local_124, 2);
			break;
	}
	func_528();
	func_529(&Local_18, &vLocal_27, &Local_124);
}

int func_267()
{
	return 113;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;

	Local_413.f_11 = iParam2;
	Local_413.f_12 = iParam3;
	bVar0 = 551037070;
	bVar1 = joaat("COLOR_PURE_WHITE");
	bVar2 = joaat("COLOR_RED");
	bVar3 = joaat("COLOR_PURE_WHITE");
	if (Local_413.f_1387 == joaat("standard"))
	{
		bVar0 = joaat("COLOR_PURE_WHITE");
		bVar1 = joaat("COLOR_BLACK");
		bVar2 = joaat("COLOR_RED");
		bVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_413.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_413.f_13.f_11.f_159), 16);
		}
	}
	else if (aggregate.fme_animal_tagging.func_506())
	{
		bVar2 = 551037070;
		bVar3 = joaat("COLOR_BLACK");
		bVar0 = joaat("COLOR_WHITE");
		bVar1 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_413.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_413.f_13.f_11.f_159), 16);
		}
	}
	else if (aggregate.fme_animal_tagging.func_507())
	{
		bVar2 = 551037070;
	}
	if (Local_413.f_1 == 7)
	{
		bVar0 = joaat("COLOR_PURE_WHITE");
		bVar1 = joaat("COLOR_BLACK");
		bVar2 = joaat("COLOR_RED");
		bVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_413.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_413.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_413.f_1 == 6 || Local_413.f_1 == 5)
	{
		if ((aggregate.fme_archery.func_307(&(Local_413.f_13), 0) > 0f && (Local_413.f_13.f_210[0 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_413.f_13.f_210[0 /*23*/])->f_14))
		{
			if (Local_413.f_13.f_210[0 /*23*/])->f_14 == PLAYER::PLAYER_ID()
			{
				if ((((aggregate.fme_archery.func_307(&(Local_413.f_13), 1) > 0f && (Local_413.f_13.f_210[1 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_413.f_13.f_210[1 /*23*/])->f_14)) && _NAMESPACE26::_0x81FB74C83C2ED69F((Local_413.f_13.f_210[1 /*23*/])->f_14)) && !aggregate.fme_animal_tagging.func_508((Local_413.f_13.f_210[1 /*23*/])->f_14, 1))
				{
					bVar2 = 551037070;
				}
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F((Local_413.f_13.f_210[0 /*23*/])->f_14) && !aggregate.fme_animal_tagging.func_508((Local_413.f_13.f_210[0 /*23*/])->f_14, 1))
			{
				bVar2 = 551037070;
			}
		}
	}
	uVar4 = 1;
	switch (Local_413.f_1384)
	{
		case joaat("timer"):
			aggregate.fme_animal_tagging.func_423(&(Local_413.f_1005), iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509());
			break;
		case 1310067901:
			aggregate.fme_animal_tagging.func_510(&(Local_413.f_1005), &(Local_413.f_13), &uVar4, iParam1, 1);
			break;
		case joaat("leaderboard"):
			aggregate.fme_animal_tagging.func_510(&(Local_413.f_1005), &(Local_413.f_13), &uVar4, iParam1 | 256, 1);
			break;
		case -2065086408:
			aggregate.fme_animal_tagging.func_511(&(Local_413.f_1005), &(Local_413.f_13), &uVar4, iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509(), iParam1 | 2048, bVar0, bVar2, bVar1, bVar3, 1);
			break;
		case 1619021308:
			aggregate.fme_animal_tagging.func_512(&(Local_413.f_1005), &(Local_413.f_13), &uVar4, iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509(), iParam1, bVar0, bVar2, bVar1, bVar3, 1);
			break;
		case 524681:
			aggregate.fme_animal_tagging.func_513(&(Local_413.f_1005), &(Local_413.f_1020), iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509(), Local_413.f_1259, 0, 0, 0, 0);
			break;
		case -1828147615:
			aggregate.fme_animal_tagging.func_514(&(Local_413.f_1005), &(Local_413.f_1020), &(Local_413.f_13), &uVar4, iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509(), 404851220, 0, iParam1, bVar0, bVar2, bVar1, bVar3, 1);
			break;
		case 227643027:
			aggregate.fme_animal_tagging.func_515(&(Local_413.f_1005), &(Local_413.f_1020), &(Local_413.f_13), iParam0, &uVar4, 0, iParam4, aggregate.fme_animal_tagging.func_509(), 404851220, 0, 0, 1, 0, iParam1, 1, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"));
			break;
		case 1086838518:
			aggregate.fme_animal_tagging.func_510(&(Local_413.f_1005), &(Local_413.f_13), &uVar4, iParam1, 1);
			aggregate.fme_animal_tagging.func_513(&(Local_413.f_1005), &(Local_413.f_1020), iParam0, 0, iParam4, aggregate.fme_animal_tagging.func_509(), Local_413.f_1259, 0, 0, 0, 0);
			break;
	}
}

char* func_306(float fParam0)
{
	char* sVar0;

	if (!aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 8) && !aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 16))
	{
		if (PLAYER::PLAYER_ID() == Local_18.f_1)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_LEADER_WON", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), joaat("COLOR_PURE_WHITE")));
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == _NAMESPACE26::_0x901E0DC25080C8B9(Local_18.f_1))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_LEADER_WON", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), -963477619));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), 1891514641));
		}
	}
	else if (PLAYER::PLAYER_ID() == Local_18.f_1)
	{
		if (aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 16))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HTP_TOAST_KILLED_BY_AI");
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HTP_TOAST_YOU_ABANDONED");
		}
	}
	else if (&vLocal_27[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] == 2)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), -963477619));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), -5208416));
	}
	return sVar0;
}

char* func_309(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, float fParam9)
{
	char* sVar0;

	if (!aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 8) && !aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 16))
	{
		if (MISC::ARE_STRINGS_EQUAL(aggregate.fme_animal_tagging.func_504(Local_18.f_2), &uParam0))
		{
			if (PLAYER::PLAYER_ID() == Local_18.f_1)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_YOU", aggregate.fme_animal_tagging.func_488(&uParam0, iParam8));
			}
			else
			{
				sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), Local_124.f_40));
			}
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_18.f_3)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_LEADER_WON", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_TARGET_WON", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), joaat("COLOR_PURE_WHITE")));
		}
	}
	else if (&vLocal_27[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] == 2)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), -963477619));
	}
	else if (&vLocal_27[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] == 3)
	{
		if (aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 16) || aggregate.aberdeenpigfarm.func_175(Local_18.f_8, 8))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HTP_TOAST_KILLED_BY_AI");
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HTP_TOAST_YOU_ABANDONED");
		}
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PLAYER_KILLED_LEADER", aggregate.fme_animal_tagging.func_488(&(Local_124.f_32), -5208416));
	}
	return sVar0;
}

void func_340(var uParam0, int iParam1)
{
	if (!aggregate.fishing_core.func_34(uParam0, 2) && aggregate.fme_animal_tagging.func_328())
	{
		aggregate.fme_animal_tagging.func_329();
	}
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		aggregate.fme_animal_tagging.func_332(1, 0, 0);
		aggregate.fme_animal_tagging.func_1147(uParam0, 1);
	}
	if (aggregate.fishing_core.func_34(uParam0, 64))
	{
		aggregate.net_assassination.func_114(-1585840296);
		aggregate.blackwater.func_55(-1585840296, 0, 0);
	}
	func_602(0);
	func_603();
	aggregate.fme_animal_tagging.func_473(&(uParam0->f_13), 1);
	aggregate.fme_king_of_the_rails.func_352(1);
	aggregate.fme_animal_tagging.func_326(4);
	if (iParam1 == 0)
	{
		func_605(uParam0);
	}
	if ((Local_124.f_3 < 6 && Local_124.f_3 != 0) && aggregate.fishing_core.func_230("MP_FM_END", 1, 1))
	{
		Local_124.f_3 = 7;
	}
	if (aggregate.fme_animal_tagging.func_453(uParam0->f_5) || uParam0->f_5 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02(uParam0->f_5, 0);
		func_607(uParam0, 0);
	}
	func_522();
	if (MAP::DOES_BLIP_EXIST(uParam0->f_41))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_41));
	}
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_42) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_42))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_42);
	}
}

bool func_384()
{
	if (Local_18.f_3 == 0)
	{
		return false;
	}
	if (((!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_18.f_3) || !_NAMESPACE26::_0x0F99F6436528A089(Local_18.f_3)) || !_NAMESPACE26::_0x93A91A351A07360E(Local_18.f_3)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1))
	{
		aggregate.fme_animal_tagging.func_1147(&Local_18, 8);
		return true;
	}
	return false;
}

void func_389()
{
	Local_18.f_4 = { Local_413.f_1396 };
	Local_18.f_7 = Local_413.f_1293;
}

bool func_396()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1) && Local_18.f_2 == 255)
	{
		iVar1 = NETWORK::NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Local_18.f_1, &uVar0);
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		if (PED::IS_PED_A_PLAYER(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			if ((iVar3 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3)) && iVar3 != Local_18.f_1)
			{
				Local_18.f_2 = iVar3;
				aggregate.fme_animal_tagging.func_1147(&Local_18, 1);
				return true;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			aggregate.fme_animal_tagging.func_1147(&Local_18, 16);
			return true;
		}
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_18.f_1)) || ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(Local_18.f_1)))
		{
			aggregate.fme_animal_tagging.func_1147(&Local_18, 8);
			return true;
		}
	}
	return false;
}

void func_399()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_2))
	{
		aggregate.fme_animal_tagging.func_632(Local_18.f_2);
	}
	else if (!aggregate.fishing_core.func_34(&Local_18, 8) && !aggregate.fishing_core.func_34(&Local_18, 16))
	{
		aggregate.fme_animal_tagging.func_632(Local_18.f_1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && &vLocal_27[iVar0 /*3*/] == 1)
			{
				aggregate.fme_animal_tagging.func_632(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			}
			iVar0++;
		}
	}
}

void func_415()
{
	func_340(&Local_124, 0);
}

void func_418()
{
	if (!aggregate.fme_animal_tagging.func_50(1157880187, &(Local_124.f_42), 600, -1, 0, 0))
	{
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_124.f_42, 0, "data/instance(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_124.f_42, 1, ":label_find");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_124.f_42, 2, ":unlock_fort_wallace");
}

void func_419()
{
	struct<4> Var0;
	bool bVar5;

	Var0 = Local_124.f_42;
	Var0.f_2 = 0;
	Var0.f_3 = Local_413.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1;
		if (!DATAFILE::_DATAFILE_GET_STRING(&(Local_124.f_24), &Var0))
		{
		}
		Var0.f_2 = 2;
		if (DATAFILE::_DATAFILE_GET_BOOL(&bVar5, &Var0) && bVar5)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_124, 64);
		}
	}
}

int func_423(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((Global_1183537->f_66[iParam0 /*20*/])->f_3 == -1)
	{
		return 0;
	}
	if (aggregate.fme_animal_tagging.func_18(iParam0, 8192))
	{
		return 1;
	}
	aggregate.fme_animal_tagging.func_238(iParam0, 8192);
	return 1;
}

char* func_443()
{
	return MISC::_CREATE_VAR_STRING(2, &(Local_124.f_24));
}

int func_449(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	return aggregate.net_main_offline.func_312(sParam0, 10000, 0, 0, 0, 1);
}

char[] func_492()
{
	char* sVar0;

	if (PLAYER::PLAYER_ID() == _NAMESPACE26::_0x4BE6C13A45CCA8EC(Local_18.f_3))
	{
		sVar0 = "HTP_SHARD_SURVIVE";
	}
	else if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_18.f_3)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_PROTECT", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(Local_18.f_1), aggregate.fme_animal_tagging.func_487(Local_18.f_1, 1, -1, 0)));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "HTP_KILL_SHARD", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(Local_18.f_1), aggregate.fme_animal_tagging.func_487(Local_18.f_1, 1, -1, 0)));
	}
	return sVar0;
}

char* func_499(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	*bParam1 = 1;
	if (PLAYER::PLAYER_ID() == _NAMESPACE26::_0x4BE6C13A45CCA8EC(Local_18.f_3))
	{
		sVar0 = "HTP_TOAST_SURVIVE";
	}
	else if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_18.f_3)
	{
		sVar0 = "HTP_HELP_HUNTED";
	}
	else
	{
		sVar0 = "HTP_HELP_HUNT";
	}
	return sVar0;
}

void func_515()
{
	if ((_NAMESPACE26::_0x0F99F6436528A089(Local_18.f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID())) && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_18.f_3, PLAYER::PLAYER_ID()))
	{
		if (aggregate.fme_animal_tagging.func_152(Local_413.f_1332) && BUILTIN::VDIST(Global_36, Local_18.f_4) < (Local_18.f_7 + 25f))
		{
			if (!aggregate.fme_animal_tagging.func_18(Local_413, 8192))
			{
				func_423(Local_413);
			}
		}
		else if (aggregate.fme_animal_tagging.func_18(Local_413, 8192))
		{
			func_787(Local_413);
		}
	}
}

void func_516(var uParam0, var uParam1, var uParam2)
{
	if (uParam1[Local_413.f_1332 /*3*/] != 3 || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (BUILTIN::VDIST(Global_36, uParam0->f_4) > uParam0->f_7)
	{
		if (!aggregate.fme_animal_tagging.func_453(Local_413.f_1287))
		{
			if (!aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 8))
			{
				func_789(uParam1, 8);
				if (*uParam0 > 1)
				{
					uParam2->f_43 = MISC::GET_GAME_TIMER();
					aggregate.fme_animal_tagging.func_459(4);
				}
			}
			if ((MISC::GET_GAME_TIMER() - uParam2->f_43) > 10000)
			{
				if (!aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 16) && !aggregate.fme_king_of_the_rails.func_205())
				{
					func_789(uParam1, 16);
					uParam2->f_7 = aggregate.net_main_offline.func_312("HTP_HELP_OUTSIDE", 10000, 0, 0, 0, 1);
				}
			}
		}
	}
	else if (aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 8))
	{
		func_791(uParam1, 8);
		aggregate.fme_animal_tagging.func_473(&(uParam2->f_13), 1);
		aggregate.fme_animal_tagging.func_326(4);
		if (aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 16))
		{
			if (func_792(uParam2->f_7))
			{
				_NAMESPACE71::_0x2F901291EF177B02(uParam2->f_7, 1);
			}
			func_791(uParam1, 16);
		}
		uParam2->f_43 = 0;
	}
}

void func_517()
{
	float fVar0;

	if (&vLocal_27[Local_413.f_1332 /*3*/] != 3 || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	fVar0 = 3f;
	if (aggregate.fishing_core.func_34(vLocal_27[Local_413.f_1332 /*3*/], 16))
	{
		if (Local_124.f_45 == 0)
		{
			Local_124.f_45 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - Local_124.f_45) > 1000)
		{
			Local_124.f_45 = MISC::GET_GAME_TIMER();
			aggregate.coffee_drinking.func_21(0, -fVar0, 0, 1, 0);
			aggregate.coffee_drinking.func_21(1, -fVar0, 0, 1, 0);
			aggregate.coffee_drinking.func_21(2, -fVar0, 0, 1, 0);
		}
	}
	else
	{
		Local_124.f_45 = 0;
	}
}

void func_521(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (uParam0->f_1 == iVar0)
	{
		*uParam1 = 3;
	}
	else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar0) == uParam0->f_3 && _NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_3))
	{
		*uParam1 = 2;
	}
	else
	{
		*uParam1 = 1;
	}
	aggregate.fme_king_of_the_rails.func_518(2048, 1);
}

void func_522()
{
	int iVar0;

	if (aggregate.fishing_core.func_34(&Local_124, 4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1))
	{
		iVar0 = Local_18.f_1;
		aggregate.fme_animal_tagging.func_883(iVar0);
		aggregate.fme_animal_tagging.func_1147(&Local_124, 4);
	}
}

void func_524()
{
	int iVar0;
	int iVar1;

	if (((!aggregate.fishing_core.func_34(&Local_124, 4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_18.f_1)) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_18.f_1))) && &vLocal_27[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_18.f_1) /*3*/] == 3)
	{
		iVar0 = 1414929105;
		iVar1 = Local_18.f_1;
		aggregate.fme_escaped_convicts.func_174(iVar1, iVar0);
		aggregate.fme_animal_tagging.func_1147(&Local_124, 4);
	}
}

void func_525(int iParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	char* sVar1;

	bVar0 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!aggregate.fme_animal_tagging.func_152(Local_413.f_1332) || aggregate.fme_dead_drop.func_811())
	{
		if (bVar0 == 1 && uParam2->f_11 != 0)
		{
			func_607(uParam2, 0);
			_NAMESPACE71::_0x2F901291EF177B02(uParam2->f_5, 0);
		}
		return;
	}
	if (func_799(uParam2))
	{
		return;
	}
	switch (iParam3)
	{
		case 1:
			switch (uParam1[Local_413.f_1332 /*3*/])
			{
				case 2:
					if (func_800(4))
					{
						func_607(uParam2, 4);
						sVar1 = MISC::_CREATE_VAR_STRING(10, "HTP_PROTECT", aggregate.fme_animal_tagging.func_488(&(uParam2->f_32), -963477619));
						uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
					}
					break;
				case 3:
					if (BUILTIN::VDIST(Global_36, iParam0->f_4) > iParam0->f_7)
					{
						if (func_800(7))
						{
							func_607(uParam2, 7);
							sVar1 = MISC::_CREATE_VAR_STRING(2, &(uParam2->f_24));
							uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
						}
					}
					else if (func_800(1))
					{
						func_607(uParam2, 1);
						uParam2->f_5 = aggregate.fme_animal_tagging.func_684("HTP_SHARD_SURVIVE", -1, 0, 0, 1);
					}
					break;
			}
			break;
		case 2:
			switch (uParam1[Local_413.f_1332 /*3*/])
			{
				case 1:
					if (BUILTIN::VDIST(Global_36, iParam0->f_4) <= iParam0->f_7)
					{
						if (func_800(5))
						{
							func_607(uParam2, 5);
							sVar1 = MISC::_CREATE_VAR_STRING(10, "HTP_KILL", aggregate.fme_animal_tagging.func_488(&(uParam2->f_32), joaat("COLOR_PURE_WHITE")));
							uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
						}
					}
					else if (func_800(6))
					{
						func_607(uParam2, 6);
						sVar1 = MISC::_CREATE_VAR_STRING(2, &(uParam2->f_24));
						uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
					}
					break;
				case 2:
					if (func_800(2))
					{
						func_607(uParam2, 2);
						sVar1 = MISC::_CREATE_VAR_STRING(10, "HTP_PROTECT", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(Local_18.f_1), -963477619));
						uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
					}
					break;
				case 3:
					if (aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 8))
					{
						if (func_800(7))
						{
							func_607(uParam2, 7);
							sVar1 = MISC::_CREATE_VAR_STRING(2, &(uParam2->f_24));
							uParam2->f_5 = aggregate.fme_animal_tagging.func_684(sVar1, -1, 0, 0, 1);
						}
					}
					else if (func_800(1))
					{
						func_607(uParam2, 1);
						uParam2->f_5 = aggregate.fme_animal_tagging.func_684("HTP_SHARD_SURVIVE", -1, 0, 0, 1);
					}
					break;
			}
			break;
	}
}

void func_526()
{
	if (&vLocal_27[Local_413.f_1332 /*3*/] == 3)
	{
		aggregate.fme_animal_tagging.func_489();
	}
}

void func_527(var uParam0)
{
	if (*uParam0 != 3 || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (func_801())
	{
		func_802();
		uParam0->f_1 = 1;
	}
	else if ((((func_803() || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || TASK::IS_PED_SPRINTING(Global_35)) || (TASK::IS_PED_RUNNING(Global_35) && !PED::_0xD5FE956C70FF370B(Global_35)))
	{
		func_804();
		uParam0->f_1 = 1;
	}
	else if (aggregate.fishing_core.func_34(uParam0, 16))
	{
		uParam0->f_1 = 1;
	}
	else
	{
		uParam0->f_1 = 0;
	}
}

void func_528()
{
	switch (Local_124.f_3)
	{
		case 0:
			if (aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
			{
				if (&vLocal_27[Local_413.f_1332 /*3*/] == 3 || &vLocal_27[Local_413.f_1332 /*3*/] == 2)
				{
					func_602(1);
					aggregate.fme_animal_tagging.func_212(1);
				}
				else if (&vLocal_27[Local_413.f_1332 /*3*/] == 1 && func_806())
				{
					func_602(1);
					aggregate.fme_animal_tagging.func_1147(&Local_124, 32);
					aggregate.fme_animal_tagging.func_212(3);
				}
			}
			break;
		case 1:
			if (aggregate.fishing_core.func_230("MC_DEFENDING", 1, 0))
			{
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 2:
			if (!aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
			{
				aggregate.fme_animal_tagging.func_212(6);
				return;
			}
			if (&vLocal_27[Local_413.f_1332 /*3*/] == 1)
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
			else if (&vLocal_27[Local_413.f_1332 /*3*/] != 3 && &vLocal_27[Local_413.f_1332 /*3*/] != 2)
			{
				aggregate.fme_animal_tagging.func_212(6);
			}
			if (aggregate.annesburg.func_180(255))
			{
				aggregate.fme_animal_tagging.func_212(5);
			}
			break;
		case 3:
			if (aggregate.fishing_core.func_230("MC_ATTACKING", 1, 0))
			{
				aggregate.fme_animal_tagging.func_212(4);
			}
			break;
		case 4:
			if (!aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
			{
				aggregate.fme_animal_tagging.func_212(6);
				return;
			}
			if (&vLocal_27[Local_413.f_1332 /*3*/] == 3 || &vLocal_27[Local_413.f_1332 /*3*/] == 2)
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			else if (&vLocal_27[Local_413.f_1332 /*3*/] != 1)
			{
				aggregate.fme_animal_tagging.func_212(6);
			}
			if (aggregate.annesburg.func_180(255))
			{
				aggregate.fme_animal_tagging.func_212(5);
			}
			break;
		case 5:
			if (!aggregate.annesburg.func_180(255))
			{
				aggregate.fme_animal_tagging.func_212(0);
			}
			break;
		case 6:
			if (aggregate.fishing_core.func_230("MP_FM_END", 1, 1))
			{
				func_602(0);
				aggregate.fme_animal_tagging.func_212(7);
			}
			break;
		case 7:
			break;
	}
}

void func_529(var uParam0, var uParam1, var uParam2)
{
	char[] cVar0[8];
	vector3 vVar1;

	if (!aggregate.fme_animal_tagging.func_152(Local_413.f_1332))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(uParam2->f_41))
	{
		uParam2->f_41 = MAP::_0x45F13B7E0A15C880(-1282792512, uParam0->f_4, uParam0->f_7);
		MAP::_0x662D364ABF16DE2F(uParam2->f_41, 453264060);
		MAP::_0x662D364ABF16DE2F(uParam2->f_41, -521680853);
		MAP::SET_BLIP_SPRITE(uParam2->f_41, -570710357 /* GXTEntry: "Objective" */, false);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam2->f_41, "HTP_BLIP");
	}
	if (uParam0->f_1 == PLAYER::PLAYER_ID() && aggregate.fishing_core.func_34((*uParam1)[Local_413.f_1332 /*3*/], 8))
	{
		cVar0 = ((10000 - (MISC::GET_GAME_TIMER() - uParam2->f_43)) / 1000);
		if (cVar0 < 0)
		{
			cVar0 = 0;
		}
		if (uParam2->f_43 != 0 && (10000 - (MISC::GET_GAME_TIMER() - uParam2->f_43)) < -1000)
		{
			aggregate.fme_animal_tagging.func_473(&(uParam2->f_13), 0);
		}
		else
		{
			vVar1 = { uParam0->f_4 };
			vVar1.f_2 = (vVar1.z + 10f);
			aggregate.fme_animal_tagging.func_460(&(uParam2->f_13), cVar0, vVar1, uParam0->f_7, 1, 0, 0, 1);
		}
	}
	func_807(uParam0, uParam1, uParam2);
}

void func_548()
{
	bool bVar0;
	struct<2> Var1;

	if (&vLocal_27[Local_413.f_1332 /*3*/] != 0)
	{
		func_819();
	}
	if (!aggregate.fishing_core.func_34(&Local_18, 8) && !aggregate.fishing_core.func_34(&Local_18, 16))
	{
		if (PLAYER::PLAYER_ID() == Local_170.f_10)
		{
			bVar0 = true;
			aggregate.fme_animal_tagging.func_521(0);
			aggregate.fme_animal_tagging.func_174(32768);
		}
		else if (&vLocal_27[Local_413.f_1332 /*3*/] == 1 && Local_18.f_2 != 255)
		{
			bVar0 = true;
			aggregate.fme_animal_tagging.func_521(1);
			aggregate.fme_animal_tagging.func_174(32768);
		}
		else if (&vLocal_27[Local_413.f_1332 /*3*/] == 2 && Local_18.f_1 == Local_170.f_10)
		{
			bVar0 = true;
			aggregate.fme_animal_tagging.func_521(0);
			aggregate.fme_animal_tagging.func_174(32768);
		}
		else
		{
			bVar0 = false;
			aggregate.fme_animal_tagging.func_521((aggregate.fme_animal_tagging.func_183(2) - 1));
		}
	}
	else if (&vLocal_27[Local_413.f_1332 /*3*/] == 1)
	{
		bVar0 = true;
		aggregate.fme_animal_tagging.func_521(0);
		aggregate.fme_animal_tagging.func_174(32768);
	}
	else
	{
		bVar0 = false;
		aggregate.fme_animal_tagging.func_521((aggregate.fme_animal_tagging.func_183(2) - 1));
	}
	aggregate.fme_animal_tagging.func_585(bVar0);
	if ((bVar0 == 1 && &vLocal_27[Local_413.f_1332 /*3*/] == 2) || &vLocal_27[Local_413.f_1332 /*3*/] == 3)
	{
		Var1 = { aggregate.aberdeenpigfarm.func_107(joaat("misc"), 141223959) };
		STATS::_0x4A47E38EA3D60939(&Var1, 1f);
	}
}

struct<8> func_563()
{
	char cVar0[64];

	StringCopy(&cVar0, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
	return cVar0;
}

struct<8> func_565()
{
	char cVar0[64];

	StringCopy(&cVar0, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
	return cVar0;
}

void func_602(bool bParam0)
{
	if (bParam0)
	{
		if (!aggregate.fishing_core.func_34(&Local_124, 128))
		{
			AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
			aggregate.fme_animal_tagging.func_1147(&Local_124, 128);
		}
	}
	else if (aggregate.fishing_core.func_34(&Local_124, 128))
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		aggregate.fme_animal_tagging.func_1147(&Local_124, 128);
	}
}

void func_603()
{
	if (aggregate.fme_animal_tagging.func_453(Local_124.f_9))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_124.f_9, 0);
	}
	if (aggregate.fme_animal_tagging.func_453(Local_124.f_8))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_124.f_8, 0);
	}
}

void func_605(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_10), iVar0))
		{
			if (aggregate.fme_animal_tagging.func_741(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
			{
				aggregate.fme_animal_tagging.func_778(PLAYER::INT_TO_PLAYERINDEX(iVar0));
			}
			aggregate.fme_hot_property.func_604(iVar0);
			aggregate.fme_animal_tagging.func_883(iVar0);
			aggregate.fme_king_of_the_castle.func_864(iVar0);
			func_862(iVar0);
			SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_10), iVar0);
		}
		iVar0++;
	}
}

void func_607(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = MISC::GET_GAME_TIMER();
}

void func_676()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<14> Var6;
	struct<14> Var20;
	bool bVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_893();
	iVar1 = INVENTORY::_0x80D78BDC9D88EF07(INVENTORY::_0x13D234A2A3F66E63(Global_35), "ALL WEAPONS", -1591664384, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		INVENTORY::_0x42A2F33A1942E865(iVar1);
		return;
	}
	if (aggregate.fme_animal_tagging.func_894(&bVar2, &iVar3))
	{
		aggregate.fme_animal_tagging.func_895(bVar2, iVar3, 0);
	}
	bVar4 = false;
	bVar5 = aggregate.fme_animal_tagging.func_257();
	Var6.f_9 = -1591664384;
	Var20.f_9 = -1591664384;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	bVar34 = false;
	while (bVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, bVar34, &Var6))
		{
			if (bVar5 != 0 && Var6.f_4 == bVar5)
			{
				bVar4 = true;
			}
			if (WEAPON::_0x705BE297EEBDB95D(Var6.f_4) && WEAPON::_0xF29A186ED428B552(Global_35, Var6.f_4))
			{
				if (WEAPON::_0xC212F1D05A8232BB(Var6.f_4))
				{
					iVar37 = aggregate.fm_mission_controller.func_1632(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, 0, 0, 0);
					iVar37 = (iVar37 + aggregate.fm_mission_controller.func_1632(1232099469 /* GXTEntry: "Revolver Cartridges - Express" */, 0, 0, 0));
					iVar37 = (iVar37 + aggregate.fm_mission_controller.func_1632(78180283 /* GXTEntry: "Revolver Cartridges - Explosive" */, 0, 0, 0));
					iVar37 = (iVar37 + aggregate.fm_mission_controller.func_1632(-2084181920 /* GXTEntry: "Revolver Cartridges - High Velocity" */, 0, 0, 0));
					iVar37 = (iVar37 + aggregate.fm_mission_controller.func_1632(1243983880 /* GXTEntry: "Revolver Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (WEAPON::_0xDDC64F5E31EEDAB6(Var6.f_4))
				{
					iVar38 = aggregate.fm_mission_controller.func_1632(joaat("ammo_pistol"), 0, 0, 0);
					iVar38 = (iVar38 + aggregate.fm_mission_controller.func_1632(836939099 /* GXTEntry: "Pistol Cartridges - Express" */, 0, 0, 0));
					iVar38 = (iVar38 + aggregate.fm_mission_controller.func_1632(1185302722 /* GXTEntry: "Pistol Cartridges - Explosive" */, 0, 0, 0));
					iVar38 = (iVar38 + aggregate.fm_mission_controller.func_1632(-1411815376 /* GXTEntry: "Pistol Cartridges - High Velocity" */, 0, 0, 0));
					iVar38 = (iVar38 + aggregate.fm_mission_controller.func_1632(236338048 /* GXTEntry: "Pistol Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (WEAPON::_0xDDB2578E95EF7138(Var6.f_4))
				{
					iVar39 = aggregate.fm_mission_controller.func_1632(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, 0, 0, 0);
					iVar39 = (iVar39 + aggregate.fm_mission_controller.func_1632(-578347576 /* GXTEntry: "Repeater Cartridges - Express" */, 0, 0, 0));
					iVar39 = (iVar39 + aggregate.fm_mission_controller.func_1632(-1668585578 /* GXTEntry: "Repeater Cartridges - Explosive" */, 0, 0, 0));
					iVar39 = (iVar39 + aggregate.fm_mission_controller.func_1632(231465488 /* GXTEntry: "Repeater Cartridges - High Velocity" */, 0, 0, 0));
					iVar39 = (iVar39 + aggregate.fm_mission_controller.func_1632(1148521608 /* GXTEntry: "Repeater Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == joaat("weapon_rifle_varmint"))
				{
					iVar40 = aggregate.fm_mission_controller.func_1632(2113196069, 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (WEAPON::_0x0A82317B7EBFC420(Var6.f_4) || WEAPON::_0x6AD66548840472E5(Var6.f_4))
				{
					iVar41 = aggregate.fm_mission_controller.func_1632(joaat("ammo_rifle"), 0, 0, 0);
					iVar41 = (iVar41 + aggregate.fm_mission_controller.func_1632(1654725195 /* GXTEntry: "Rifle Cartridges - Express" */, 0, 0, 0));
					iVar41 = (iVar41 + aggregate.fm_mission_controller.func_1632(1838310467 /* GXTEntry: "Rifle Cartridges - Explosive" */, 0, 0, 0));
					iVar41 = (iVar41 + aggregate.fm_mission_controller.func_1632(1858824185 /* GXTEntry: "Rifle Cartridges - High Velocity" */, 0, 0, 0));
					iVar41 = (iVar41 + aggregate.fm_mission_controller.func_1632(200254898 /* GXTEntry: "Rifle Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (WEAPON::_0xC75386174ECE95D5(Var6.f_4))
				{
					iVar42 = aggregate.fm_mission_controller.func_1632(joaat("ammo_shotgun"), 0, 0, 0);
					iVar42 = (iVar42 + aggregate.fm_mission_controller.func_1632(-1077205471 /* GXTEntry: "Shotgun Shells - Buckshot Incendiary" */, 0, 0, 0));
					iVar42 = (iVar42 + aggregate.fm_mission_controller.func_1632(314966081 /* GXTEntry: "Shotgun - Slug" */, 0, 0, 0));
					iVar42 = (iVar42 + aggregate.fm_mission_controller.func_1632(588559146 /* GXTEntry: "Shotgun Slugs - Explosive" */, 0, 0, 0));
					if (Var6.f_4 == joaat("weapon_shotgun_sawedoff"))
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (aggregate.bandana.func_71(Var6.f_4))
				{
					iVar43 = aggregate.fm_mission_controller.func_1632(954660191 /* GXTEntry: "Arrows" */, 0, 0, 0);
					iVar43 = (iVar43 + aggregate.fm_mission_controller.func_1632(-1040876935 /* GXTEntry: "Arrow - Dynamite" */, 0, 0, 0));
					iVar43 = (iVar43 + aggregate.fm_mission_controller.func_1632(296901449 /* GXTEntry: "Arrow - Fire" */, 0, 0, 0));
					iVar43 = (iVar43 + aggregate.fm_mission_controller.func_1632(-1841822177 /* GXTEntry: "Arrow - Improved" */, 0, 0, 0));
					iVar43 = (iVar43 + aggregate.fm_mission_controller.func_1632(126245522 /* GXTEntry: "Arrow - Poison" */, 0, 0, 0));
					iVar43 = (iVar43 + aggregate.fm_mission_controller.func_1632(1657716792 /* GXTEntry: "Arrow - Tracking" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		bVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(joaat("ammo_pistol"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(joaat("ammo_rifle"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(2113196069, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!WEAPON::_0xF29A186ED428B552(Global_35, joaat("weapon_shotgun_sawedoff")))
		{
			if (iVar36 < iVar44)
			{
				aggregate.fme_animal_tagging.func_895(joaat("ammo_shotgun"), (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(joaat("ammo_shotgun"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			aggregate.fme_animal_tagging.func_895(954660191 /* GXTEntry: "Arrows" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (bVar5 != 0)
	{
		if (!bVar4 || !WEAPON::_0xF29A186ED428B552(Global_35, bVar5))
		{
			if (aggregate.fme_animal_tagging.func_898(bVar5) && !aggregate.fme_animal_tagging.func_134(8388608))
			{
				aggregate.fme_animal_tagging.func_174(8388608);
			}
		}
	}
}

bool func_707(int iParam0)
{
	if (!aggregate.fme_animal_tagging.func_18(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_719(int iParam0)
{
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_18.f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_18.f_3, PLAYER::PLAYER_ID()) || aggregate.fme_animal_tagging.func_18(iParam0, 8192))
		{
			return true;
		}
	}
	return false;
}

void func_728(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Local_18.f_3);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			uParam1->f_4 = iVar1;
			uParam1->f_5 = 3;
			uParam2->f_4 = iVar1;
			uParam2->f_5 = 3;
		}
	}
}

int func_787(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((Global_1183537->f_66[iParam0 /*20*/])->f_3 == -1)
	{
		return 0;
	}
	if (!aggregate.fme_animal_tagging.func_18(iParam0, 8192))
	{
		return 1;
	}
	aggregate.fme_animal_tagging.func_238(iParam0, 8192);
	return 1;
}

void func_789(var uParam0, int iParam1)
{
	aggregate.bandana.func_26(&(((*uParam0)[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2), iParam1);
}

void func_791(var uParam0, int iParam1)
{
	aggregate.bandana.func_26(&(((*uParam0)[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2), iParam1);
}

bool func_792(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 == iParam0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_799(var uParam0)
{
	if (uParam0->f_12 != 0 && (MISC::GET_GAME_TIMER() - uParam0->f_12) < 2000)
	{
		return true;
	}
	return false;
}

bool func_800(int iParam0)
{
	return (Local_124.f_11 != iParam0 || !aggregate.fme_animal_tagging.func_453(Local_124.f_5));
}

bool func_801()
{
	int iVar0;
	vector3 vVar1;

	if (aggregate.fme_animal_tagging.func_453(Local_413.f_1287))
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 3) != 0)
	{
		return Local_124.f_19.f_4;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	if (aggregate.annesburg.func_121(Local_124.f_19.f_1))
	{
		Local_124.f_19.f_1 = { vVar1 };
		Local_124.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (BUILTIN::VDIST(vVar1, Local_124.f_19.f_1) > 3f)
	{
		Local_124.f_19.f_1 = { vVar1 };
		Local_124.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Local_124.f_19, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 12000)
	{
		iVar0 = 1;
	}
	Local_124.f_19.f_4 = iVar0;
	return iVar0;
}

void func_802()
{
	if ((!aggregate.fishing_core.func_34(&Local_124, 16) && !aggregate.fme_animal_tagging.func_435(Local_413.f_1289)) && !aggregate.fme_animal_tagging.func_453(Local_413.f_1287))
	{
		Local_124.f_9 = aggregate.net_main_offline.func_312("HTP_HELP_IDLE", 10000, 0, 0, 0, 1);
		aggregate.fme_animal_tagging.func_1147(&Local_124, 16);
	}
}

bool func_803()
{
	bool bVar0;

	bVar0 = PED::IS_PED_SHOOTING(Global_35);
	if (bVar0)
	{
		Local_124.f_44 = MISC::GET_GAME_TIMER();
	}
	else if (Local_124.f_44 != 0)
	{
		if ((MISC::GET_GAME_TIMER() - Local_124.f_44) < 3000)
		{
			bVar0 = true;
		}
		else
		{
			Local_124.f_44 = 0;
		}
	}
	return bVar0;
}

void func_804()
{
	if ((!aggregate.fishing_core.func_34(&Local_124, 8) && !aggregate.fme_animal_tagging.func_435(Local_413.f_1289)) && !aggregate.fme_animal_tagging.func_453(Local_413.f_1287))
	{
		Local_124.f_8 = aggregate.net_main_offline.func_312("HTP_HELP_NOISE", 10000, 0, 0, 0, 1);
		aggregate.fme_animal_tagging.func_1147(&Local_124, 8);
	}
}

bool func_806()
{
	return (BUILTIN::VDIST(Local_18.f_4, Global_36) <= Local_413.f_1294 || aggregate.fishing_core.func_34(&Local_124, 32));
}

void func_807(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_1))
	{
		return;
	}
	if (func_799(uParam2))
	{
		return;
	}
	iVar0 = uParam0->f_1;
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uParam0->f_1);
	switch (uParam1[Local_413.f_1332 /*3*/])
	{
		case 1:
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam2->f_10), iVar0))
			{
				aggregate.fme_animal_tagging.func_1091(PLAYER::INT_TO_PLAYERINDEX(iVar0));
				aggregate.fme_king_of_the_castle.func_1051(iVar0, 1481032477 /* GXTEntry: "Bounty Target" */);
				SCRIPTS::_0x31010318BA9897AC(&(uParam2->f_10), iVar0);
			}
			else
			{
				if (aggregate.fishing_core.func_34((*uParam1)[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_18.f_1) /*3*/], 16))
				{
					func_862(iVar0);
					aggregate.fme_escaped_convicts.func_174(iVar0, 1995761918);
					return;
				}
				if (BUILTIN::VDIST(Global_36, aggregate.camera_item.func_108(Local_18.f_1)) < 10f)
				{
					func_862(iVar0);
					aggregate.fme_escaped_convicts.func_174(iVar0, 1995761918);
					return;
				}
				switch (((*uParam1)[iVar1 /*3*/])->f_1)
				{
					case 0:
						iVar2 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
						if (ENTITY::IS_ENTITY_DEAD(iVar2) || !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar2))
						{
							func_1040(iVar0);
							aggregate.fme_escaped_convicts.func_174(iVar0, -1186550032);
						}
						else
						{
							func_862(iVar0);
							aggregate.fme_escaped_convicts.func_174(iVar0, 476433942);
						}
						break;
					case 1:
						func_862(iVar0);
						aggregate.fme_escaped_convicts.func_174(iVar0, 1995761918);
						break;
				}
			}
			break;
		case 2:
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam2->f_10), iVar0))
			{
				aggregate.fme_escaped_convicts.func_174(iVar0, -1384718582);
				SCRIPTS::_0x31010318BA9897AC(&(uParam2->f_10), iVar0);
			}
			break;
		case 3:
			break;
	}
}

void func_819()
{
	aggregate.fme_animal_tagging.func_773(PLAYER::_0xDF66A37936D5F3D9(&(Global_1273882->f_154[&Global_1273882])));
	aggregate.fme_animal_tagging.func_623(aggregate.net_fetch.func_5356());
}

int func_833()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_170.f_10;
	iVar1 = Local_413.f_1333;
	if ((iVar1 == 0 && iVar0 != 255) && NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID() || (Local_18.f_2 == 255 && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar0)))
		{
			iVar2 = 1688595720;
			return aggregate.doc_book.func_171(iVar2, 0, 255, 0, 0);
		}
	}
	return 0;
}

void func_862(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_20209.f_583), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070355->f_20209.f_583), iParam0);
		aggregate.fme_animal_tagging.func_733(iParam0);
	}
}

void func_932(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1273882->f_8) != 3)
	{
		return;
	}
	bVar0 = aggregate.fme_animal_tagging.func_1020(iParam0);
	iVar1 = aggregate.bandana.func_75(bVar0, aggregate.bandana.func_57(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	bVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		aggregate.fme_animal_tagging.func_375(bVar0, bVar3, 752097756);
	}
	else
	{
		aggregate.dynamic_craft_scenario.func_59(bVar0, bVar3, -142743235, 0, 0);
	}
}

void func_934(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1273882->f_8) != 3)
	{
		return;
	}
	bVar0 = aggregate.fme_animal_tagging.func_1023(iParam0);
	iVar1 = aggregate.bandana.func_75(bVar0, aggregate.bandana.func_57(0), joaat("SLOTID_PROGRESSION"), 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	bVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		aggregate.fme_animal_tagging.func_375(bVar0, bVar3, 752097756);
	}
	else
	{
		aggregate.dynamic_craft_scenario.func_59(bVar0, bVar3, -142743235, 0, 0);
	}
	aggregate.coffee_drinking.func_46(iParam0, BUILTIN::TO_FLOAT(iParam1), 1);
}

var func_992(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = aggregate.fme_animal_tagging.func_1070();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	bVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1939221->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1939221->f_242.f_1188, 64);
	aggregate.fme_animal_tagging.func_1071(Global_1939221->f_242.f_14[iVar0 /*39*/], Global_1939221->f_242.f_4, cVar3, Param0);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(84), Global_1939221->f_242.f_1188);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(85), true);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(86), false);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(74), Param0.f_30);
	if (Param0.f_30)
	{
		(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(72), Param0.f_29);
		(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(75), Param0.f_28);
	}
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(87), Param0.f_24);
	bVar15 = false;
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), 707094655, bVar15);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(50), Param0.f_25);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(51), Param0.f_25.f_1);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(88), Param0.f_25.f_2);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(89), bVar2);
	(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(90), Param0.f_22);
	aggregate.fme_animal_tagging.func_787(Global_1939221->f_242.f_1186 + 1);
	if (Global_1939221->f_242.f_1188 == 2147483647)
	{
		Global_1939221->f_242.f_1188 = 0;
	}
	if (aggregate.benedictpoint.func_17(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1939221->f_242.f_14[iVar0 /*39*/];
		bVar16 = aggregate.fme_animal_tagging.func_1073(&(Param0.f_31));
		(Global_1939221->f_242.f_14[iVar0 /*39*/])->f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939221->f_242.f_14[iVar0 /*39*/]), aggregate.fme_animal_tagging.func_979(91), bVar16);
	}
	iVar17 = aggregate.fme_animal_tagging_offline.func_220();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1939221->f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_242.f_5, false, "pm_invite_item", &(Global_1939221->f_242.f_14[iVar0 /*39*/]));
	}
	return &(Global_1939221->f_242.f_14[iVar0 /*39*/]);
}

void func_1040(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_20209.f_583), iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070355->f_20209.f_583), iParam0);
		aggregate.fme_animal_tagging.func_733(iParam0);
	}
}

int func_1044(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (iParam1[0 /*5*/] == 0)
	{
		iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0->f_5, "score");
		aggregate.fme_animal_tagging.func_1086(iVar0, (*iParam1)[0 /*5*/], 2, "0");
		aggregate.fme_animal_tagging.func_1086(iVar0, (*iParam1)[1 /*5*/], 8, "0");
		bVar1 = !aggregate.aberdeenpigfarm.func_175(iParam2, 16);
		bVar2 = !aggregate.aberdeenpigfarm.func_175(iParam2, 32);
		aggregate.fme_animal_tagging.func_1089(iVar0, &(((*iParam1)[0 /*5*/])->f_3), 5, bVar1, 0);
		aggregate.fme_animal_tagging.func_1085(iVar0, &(((*iParam1)[0 /*5*/])->f_1), 3, bParam4);
		aggregate.fme_animal_tagging.func_1085(iVar0, &(((*iParam1)[0 /*5*/])->f_2), 4, bParam6);
		aggregate.fme_animal_tagging.func_1089(iVar0, &(((*iParam1)[1 /*5*/])->f_3), 11, bVar2, 0);
		aggregate.fme_animal_tagging.func_1085(iVar0, &(((*iParam1)[1 /*5*/])->f_1), 9, bParam5);
		aggregate.fme_animal_tagging.func_1085(iVar0, &(((*iParam1)[1 /*5*/])->f_2), 10, bParam7);
	}
	return 1;
}

void func_1205(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939057->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			aggregate.fme_animal_tagging.func_1274(iParam4, &uVar4, uParam0->f_150, bVar16);
			aggregate.fme_animal_tagging.func_1275(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && bVar0 < 5)
					{
						aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_1277(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (bVar0 == 0 || iVar2 >= iVar13)
				{
					if (aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)) && bVar0 < 5)
					{
						aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_143[bVar0]), "MiniListItem", iVar3, bVar0);
						bVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (bVar0 <= iVar3)
		{
			bVar18 = iVar3;
			while (bVar18 >= bVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, bVar18);
				bVar18 = (bVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		aggregate.fme_animal_tagging.func_1274(iParam4, &uVar4, uParam0->f_150, bVar16);
		aggregate.net_impromptu_race_online.func_427(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, bVar0);
					bVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
							bVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, bVar0);
				bVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || bVar0 > 0)
	{
		if (bVar0 < 3)
		{
			bVar20 = bVar0;
			while (bVar20 <= 3)
			{
				aggregate.fme_animal_tagging.func_1276(uParam0->f_2, &(uParam0->f_12[bVar20]), "LeaderboardListItemBlank", iVar3, bVar0);
				bVar0++;
				bVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (bVar0 <= iVar3)
	{
		bVar21 = iVar3;
		while (bVar21 >= bVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, bVar21);
			bVar21 = (bVar21 + -1);
		}
	}
}

void func_1534(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	float fVar8;

	if (Global_1939057->f_108)
	{
		aggregate.net_impromptu_race_online.func_467(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		aggregate.fme_animal_tagging.func_1114(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				bVar1++;
				aggregate.net_impromptu_race_online.func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", aggregate.fme_animal_tagging.func_1257(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", bVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				bVar4 = aggregate.fme_animal_tagging.func_1258(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						aggregate.fme_animal_tagging.func_1259(uParam0, uParam1, iVar0, bParam3, bVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", bVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", aggregate.fme_animal_tagging.func_1260());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", aggregate.fme_animal_tagging.func_1261(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (aggregate.fme_animal_tagging.func_1262())
					{
						if (aggregate.fme_animal_tagging.func_1263(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", aggregate.fme_animal_tagging.func_1264(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = aggregate.fme_animal_tagging.func_1268((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				sVar7 = aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = aggregate.fme_animal_tagging.func_1545((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(sVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", bVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = bVar1;
	}
}

