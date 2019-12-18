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
	struct<30> Local_14 = { -1, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, -1 } ;
	vector3 vLocal_44[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<73> Local_141 = { -1, -1, 0, 0, 0, 3, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_214 = 0;
	struct<18> Local_215 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_233 = 255;
	var uLocal_234 = 255;
	var uLocal_235 = 255;
	var uLocal_236 = 255;
	var uLocal_237 = 255;
	var uLocal_238 = 255;
	var uLocal_239 = 255;
	var uLocal_240 = 255;
	var uLocal_241 = 255;
	var uLocal_242 = 255;
	var uLocal_243 = 255;
	var uLocal_244 = 255;
	var uLocal_245 = 255;
	var uLocal_246 = 255;
	var uLocal_247 = 255;
	var uLocal_248 = 255;
	var uLocal_249 = 255;
	var uLocal_250 = 255;
	var uLocal_251 = 255;
	var uLocal_252 = 255;
	var uLocal_253 = 255;
	var uLocal_254 = 255;
	var uLocal_255 = 255;
	var uLocal_256 = 255;
	var uLocal_257 = 255;
	var uLocal_258 = 255;
	var uLocal_259 = 255;
	var uLocal_260 = 255;
	var uLocal_261 = 255;
	var uLocal_262 = 255;
	var uLocal_263 = 255;
	var uLocal_264 = 255;
	struct<6> Local_265[32];
	struct<1442> Local_458 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	float fLocal_1905 = 0f;
	float fLocal_1906 = 0f;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == aggregate_func_3505

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_14, 30, 38);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_14), 30, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_44, 97, 39);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(vLocal_44[0 /*3*/]), 97, "m_clientData");
}

void func_51()
{
	Local_141.f_66 = Local_458.f_1391;
	if (DATAFILE::_0x603AC35FD4602C76(Local_141.f_66))
	{
	}
	func_147(&(Local_141.f_66));
	func_148(&Local_14, &Local_141);
}

void func_64()
{
	func_168(&Local_141);
	aggregate_func_4852(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]);
	aggregate_func_1860(Global_35, 1);
	PED::_0x6569F31A01B4C097(Global_35, 11, true);
}

void func_125()
{
	DATAFILE::_DATAFILE_UNLOAD(Local_141.f_66);
}

int func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		aggregate_func_3901(uParam0, func_361(iVar0, 1));
		iVar0++;
	}
	return 1;
}

int func_148(var uParam0, var uParam1)
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1->f_66))
	{
		return 0;
	}
	Var0 = uParam1->f_66;
	Var0.f_2 = -197735539;
	Var0.f_3 = Local_458.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!func_363(Var0, -726641051, &(uParam1->f_67), 100f, 400f, 1))
	{
		uParam1->f_67 = 110f;
	}
	if (!func_363(Var0, -1993968532, &(uParam1->f_68), 5f, 15f, 1))
	{
		uParam1->f_68 = 5f;
	}
	if (!func_364(Var0, 2007146056, &(uParam1->f_69), 5, 20, 1))
	{
		uParam1->f_69 = 5;
	}
	if (!func_364(Var0, 772630146, &(uParam1->f_70), 300000, 600000, 1))
	{
		uParam1->f_70 = 600000;
	}
	if (!func_365(&Var0, -771926219, &(uParam1->f_51)))
	{
		uParam1->f_51 = { -57.1972f, 61.735f, 88.5186f };
	}
	if (!func_366(&(uParam1->f_66), &(uParam1->f_71)))
	{
		uParam1->f_71 = 29;
	}
	return 1;
}

void func_168(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_62 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_5[iVar0] = 255;
		iVar0++;
	}
}

void func_174(var uParam0)
{
	if (aggregate_func_4368(&(uParam0->f_2), 1))
	{
		return;
	}
	*uParam0 = 0;
	uParam0->f_3 = joaat("standard");
	uParam0->f_29 = 0;
	aggregate_func_4247(&(uParam0->f_2), 1);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070355->f_634.f_601;
			return Global_1070355->f_634.f_2103;
			return Global_1070355->f_634.f_12605;
			return Global_1070355->f_634.f_12907;
			return Global_1070355->f_634.f_15909;
			return Global_1070355->f_634.f_15980;
			return Global_1070355->f_634.f_17182;
			return -1;
		}

void func_186()
{
	if (!aggregate_func_4368(&(Local_14.f_2), 2))
	{
		if (func_397(&Local_14, &Local_141))
		{
			aggregate_func_4247(&(Local_14.f_2), 2);
		}
	}
}

bool func_192()
{
	if (!func_402(&(Local_14.f_18), Local_14.f_11, &(Local_14.f_15), &(Local_14.f_9), &(Local_14.f_24)))
	{
		return false;
	}
	aggregate_func_4247(&(Local_14.f_2), 32);
	return true;
}

bool func_200()
{
	if (MISC::GET_GAME_TIMER() < (Local_141.f_4 + func_409(Local_14)))
	{
		return false;
	}
	Local_141.f_4 = MISC::GET_GAME_TIMER();
	switch (Local_14)
	{
		case 0:
			if (func_410())
			{
				func_411(&Local_14, 1, &(Local_14.f_1));
			}
			break;
		case 1:
			if (func_412())
			{
				func_411(&Local_14, 2, &(Local_14.f_1));
			}
			break;
		case 2:
			if (func_413())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_204()
{
	aggregate_func_1860(Global_35, 0);
	PED::_0x6569F31A01B4C097(Global_35, 11, false);
	return true;
}

bool func_225()
{
	int iVar0;

	STREAMING::REQUEST_MODEL(-2010635131, false);
	STREAMING::REQUEST_MODEL(-127268833, false);
	STREAMING::REQUEST_MODEL(joaat("p_coinstack02"), false);
	STREAMING::REQUEST_MODEL(-894964583, false);
	if (((!STREAMING::HAS_MODEL_LOADED(-2010635131) || !STREAMING::HAS_MODEL_LOADED(-127268833)) || !STREAMING::HAS_MODEL_LOADED(joaat("p_coinstack02"))) || !STREAMING::HAS_MODEL_LOADED(-894964583))
	{
		return false;
	}
	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar0)
	{
		return false;
	}
	return true;
}

void func_253()
{
	if (!aggregate_func_6777(Local_458.f_1332))
	{
		return;
	}
}

void func_263()
{
	func_522(&Local_14, &vLocal_44, &Local_141);
	func_523(&Local_14, vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], &Local_141);
	func_524(&Local_14, &vLocal_44, &Local_141);
	func_525(&Local_14, &Local_141);
	if (MISC::GET_GAME_TIMER() < (Local_141.f_2 + func_526(Local_141)))
	{
		return;
	}
	Local_141.f_2 = MISC::GET_GAME_TIMER();
	switch (Local_141)
	{
		case 0:
			func_411(&Local_141, 1, &((vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1));
			break;
		case 1:
			if (func_527(&Local_14, vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], &Local_141))
			{
				func_411(&Local_141, 2, &((vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_1));
			}
			break;
		case 2:
			if (func_528())
			{
			}
			break;
	}
}

char[] func_312(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_TH_END_TREAS_FOUND_WIN");
}

char[] func_315(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_TH_END_TREAS_FOUND_LOSE");
}

int func_361(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1489866873;
		case 1:
			return -197735539;
		case 2:
			return 473445396;
		case 3:
			return 380893688;
		case 4:
			return 1904003662;
		case 5:
			return -1790671069;
		case 6:
			return -726641051;
		case 7:
			return -1993968532;
		case 8:
			return 2007146056;
		case 9:
			return 772630146;
		case 10:
			return -771926219;
		case 11:
			return 1870000396;
		case 12:
			return 316778596;
		case 13:
			return 31911167;
		case 14:
			return -298537006;
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

bool func_363(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return false;
	}
	if (bParam9)
	{
		*fParam6 = aggregate_func_4333(*fParam6, fParam7, fParam8);
	}
	return true;
}

bool func_364(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return false;
	}
	if (bParam9)
	{
		*iParam6 = aggregate_func_5045(*iParam6, iParam7, iParam8);
	}
	return true;
}

bool func_365(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam2, uParam0))
	{
		return false;
	}
	return true;
}

bool func_366(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0.x = *uParam0;
	vVar0.f_2 = 473445396;
	*uParam1 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
	if (*uParam1 >= 100)
	{
		*uParam1 = 99;
	}
	return *uParam1 > 0;
}

bool func_397(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!aggregate_func_4368(&(iParam0->f_2), 16))
	{
		iParam0->f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1->f_71);
		aggregate_func_4247(&(iParam0->f_2), 16);
	}
	if (!func_662(iParam0, iParam1))
	{
		return false;
	}
	uVar0 = aggregate_func_130(iParam0->f_11, 0f, 0f, 0f, 50f, 50f, 50f, 665633627, 0, 56);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	if (iVar1 == 0)
	{
		return true;
	}
	if (iVar1 < iParam0->f_7)
	{
		iParam0->f_7 = iVar1;
		iParam0->f_8 = iParam0->f_14;
	}
	if (iParam0->f_6 >= iParam1->f_71)
	{
		iParam0->f_14 = iParam0->f_8;
		if (func_662(iParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	iParam0->f_6++;
	iParam0->f_14 = (iParam0->f_14 + 1 % iParam1->f_71);
	return false;
}

bool func_402(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;

	if (aggregate_func_4268(vParam1))
	{
		return false;
	}
	iVar0 = func_664(*uParam5);
	if (*uParam6 >= iVar0)
	{
		return true;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0[*uParam6]))
	{
		*uParam6++;
		return false;
	}
	iVar1 = func_665(*uParam5, *uParam6);
	vVar2 = { func_666(*uParam5, iVar1) };
	vVar5 = { func_667(*uParam5, iVar1) };
	iVar8 = func_668(*uParam5, iVar1);
	if (iVar8 == 0)
	{
		return false;
	}
	if (!aggregate_func_930((*uParam0)[*uParam6], iVar8, vParam1 + vVar2, 1, 0))
	{
		return false;
	}
	iVar9 = NETWORK::NET_TO_ENT(uParam0[*uParam6]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		return false;
	}
	ENTITY::SET_ENTITY_ROTATION(iVar9, vVar5, 2, false);
	fVar10 = BUILTIN::VDIST2(vVar2 + vParam1, vParam1);
	vVar11 = { aggregate_func_2371(*uParam4) };
	ENTITY::SET_ENTITY_HEADING(iVar9, *uParam4);
	ENTITY::SET_ENTITY_COORDS(iVar9, vParam1 + vVar11 * Vector(fVar10, fVar10, fVar10), false, false, true, true);
	*uParam6++;
	return false;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1000;
		case 3:
			return 1000;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_410()
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(5))
	{
		return false;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(5);
	return true;
}

void func_411(int iParam0, int iParam1, var uParam2)
{
	aggregate_func_4247(uParam2, func_671(*iParam0));
	*iParam0 = iParam1;
}

bool func_412()
{
	if (!aggregate_func_4368(&(Local_14.f_2), 2))
	{
		if (func_397(&Local_14, &Local_141))
		{
			aggregate_func_4247(&(Local_14.f_2), 2);
		}
		return false;
	}
	if (!aggregate_func_4368(&(Local_14.f_2), 8))
	{
		func_673(&Local_14, &Local_141);
	}
	if (!aggregate_func_4368(&(Local_14.f_2), 32))
	{
		if (func_402(&(Local_14.f_18), Local_14.f_11, &(Local_14.f_15), &(Local_14.f_9), &(Local_14.f_24)))
		{
			aggregate_func_4247(&(Local_14.f_2), 32);
		}
		return false;
	}
	aggregate_func_4293(&(Local_14.f_25), 0);
	return true;
}

bool func_413()
{
	if (func_675(&vLocal_44, 4, &(Local_14.f_28)))
	{
		aggregate_func_4480(&(Local_14.f_25));
		Local_14.f_29 = 1;
		return true;
	}
	return false;
}

void func_415()
{
	if (Local_14.f_28 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_14.f_28))
	{
		aggregate_func_3488(Local_14.f_28);
	}
}

void func_431()
{
	func_688(&(Local_141.f_46), &(Local_141.f_57));
}

void func_522(int iParam0, var uParam1, var uParam2)
{
	if (aggregate_func_4368(&(iParam0->f_1), 8))
	{
		if (MAP::DOES_BLIP_EXIST(uParam2->f_46))
		{
			MAP::REMOVE_BLIP(&(uParam2->f_46));
		}
		if (MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			MAP::REMOVE_BLIP(&(uParam2->f_57));
		}
		return;
	}
	func_782(iParam0, uParam1, uParam2);
	func_783(iParam0, (*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], uParam2);
}

void func_523(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (*iParam0 != 2)
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (SCRIPTS::GET_NUMBER_OF_EVENTS(1) - 1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -1315570756:
				func_784(iVar1, uParam2);
				break;
		}
		iVar1++;
	}
	func_785(iVar1, iParam0, uParam1, uParam2);
}

void func_524(int iParam0, var uParam1, var uParam2)
{
	if (!aggregate_func_4368(&(((*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2), 64))
	{
		return;
	}
	if (aggregate_func_4368(&(iParam0->f_1), 8))
	{
		func_787(&(uParam2->f_60), &(uParam2->f_61));
		return;
	}
	func_788(&(uParam2->f_61));
}

void func_525(int iParam0, var uParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(uParam1->f_62), joaat("open")))
	{
		aggregate_func_4247(&(uParam1->f_45), 128);
	}
	if (!PED::_0x9C54041BB66BCF9E(PLAYER::GET_PLAYER_PED(uParam1->f_62), uParam1->f_60) && aggregate_func_4368(&(uParam1->f_45), 128))
	{
		func_791(iParam0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(uParam1->f_62), func_793(iParam0->f_9, func_665(iParam0->f_9, (func_792(iParam0->f_9) + uParam1->f_73)))))
	{
		iVar0 = NETWORK::NET_TO_OBJ(&(iParam0->f_18[(func_792(iParam0->f_9) + uParam1->f_73)]));
		OBJECT::DELETE_OBJECT(&iVar0);
		uParam1->f_73++;
	}
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 1000;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_527(int iParam0, var uParam1, int iParam2)
{
	if (!aggregate_func_4368(&(iParam0->f_2), 32))
	{
		return false;
	}
	if (aggregate_func_4268(iParam0->f_11))
	{
		return false;
	}
	if (!aggregate_func_4368(&(uParam1->f_2), 64))
	{
		if (func_794(&(iParam0->f_18), &(iParam2->f_60), iParam0->f_11, &(iParam0->f_15), &(iParam0->f_9)))
		{
			aggregate_func_4247(&(uParam1->f_2), 64);
		}
	}
	return (aggregate_func_4368(&(iParam0->f_1), 2) && aggregate_func_4368(&(uParam1->f_2), 64));
}

bool func_528()
{
	func_796(&Local_141);
	func_797(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], &Local_141);
	func_798(&(Local_141.f_58), &(Local_141.f_72), &(Local_141.f_62));
	return aggregate_func_4368(&(Local_14.f_1), 8);
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case -1489866873:
			return "EventData/location(id=%x)";
		case -197735539:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case 380893688:
			return "EventData/location(id=%x)/TreasureLocations/treasureLocation(%i)";
		case 473445396:
			return "EventData/location(id=%x)/TreasureLocations/treasureLocation";
		case 1904003662:
			return "EventData/location(id=%x)/TreasureLocations";
		case -1790671069:
			return "treasureLocation(%i)";
		case -726641051:
			return ":fInitialSearchRadius";
		case -1993968532:
			return ":fFullyNarrowedRadius";
		case 2007146056:
			return ":iActionsToFullyNarrow";
		case 772630146:
			return ":iEventDuration";
		case -771926219:
			return ":vEventCenter";
		case 1870000396:
			return ":idx";
		case 316778596:
			return ":pos";
		case 31911167:
			return ":ori";
		case -298537006:
			return ":type";
		default:
			break;
	}
	return "";
}

bool func_662(var uParam0, var uParam1)
{
	struct<5> Var0;
	var uVar5;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1->f_66))
	{
		return false;
	}
	Var0 = uParam1->f_66;
	Var0.f_2 = 380893688;
	Var0.f_3 = Local_458.f_2;
	Var0.f_4 = uParam0->f_14;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	if (!func_365(&Var0, 316778596, &(uParam0->f_11)))
	{
		return false;
	}
	if (!func_363(Var0, 31911167, &(uParam0->f_15), 0f, 360f, 1))
	{
		return false;
	}
	if (!func_947(Var0, -298537006, &uVar5))
	{
		return false;
	}
	uParam0->f_9 = uVar5;
	return true;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 2129020695:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_665(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 0:
					return 854093187;
				case 1:
					return -52527354;
				case 2:
					return 528696119;
				case 3:
					return -849305869;
				case 4:
					return -275091101;
				default:
					break;
			}
			return 0;
		}

Vector3 func_666(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 854093187:
					return -0.008715f, 1.018275f, 0f;
				case -52527354:
					return -0.008715f, 1.018275f, 0f;
				case 528696119:
					return 0.054435f, 0.980646f, 0.101269f;
				case -849305869:
					return 0.019404f, 0.978131f, 0.106024f;
				case -275091101:
					return -0.081336f, 0.089546f, -1f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

Vector3 func_667(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 854093187:
					return 0f, 0f, 0f;
				case -52527354:
					return 0f, 0f, 0f;
				case 528696119:
					return 10.34671f, -4.88114f, 1.486373f;
				case -849305869:
					return 9.050551f, 0f, 0f;
				case -275091101:
					return 74.73452f, -80.48813f, -72.84706f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_668(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 854093187:
					return -2010635131;
				case -52527354:
					return -127268833;
				case 528696119:
					return joaat("p_coinstack02");
				case -849305869:
					return joaat("p_coinstack02");
				case -275091101:
					return -894964583;
				default:
					break;
			}
			return 0;
		}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_673(int iParam0, int iParam1)
{
	iParam0->f_16 = ((iParam1->f_67 - iParam1->f_68) / BUILTIN::TO_FLOAT(iParam1->f_69));
	iParam0->f_17 = (iParam0->f_16 * 0.5f);
	aggregate_func_4247(&(iParam0->f_2), 8);
}

bool func_675(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (!aggregate_func_4368(&(((*uParam0)[iVar1 /*3*/])->f_2), iParam1))
		{
		}
		else
		{
			*uParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			return true;
		}
		iVar1++;
	}
	*uParam2 = 255;
	return false;
}

void func_688(int* iParam0, int* iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		MAP::REMOVE_BLIP(iParam1);
	}
}

void func_714(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	aggregate_func_1860(Global_35, 1);
	PED::_0x6569F31A01B4C097(Global_35, 11, true);
	vVar0 = { Local_141.f_51 };
	fVar5 = (Local_141.f_67 - &vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]);
	fVar3 = 25f;
	fVar4 = 7.5f;
	uParam1->f_17 = { (fVar5 + fVar3), (fVar5 + fVar3), (fVar5 + fVar3) };
	uParam1->f_17.f_6 = { vVar0 };
	uParam1->f_6 = { (fVar5 + fVar4), (fVar5 + fVar4), (fVar5 + fVar4) };
	uParam1->f_6.f_6 = { vVar0 };
}

void func_782(int iParam0, var uParam1, var uParam2)
{
	if (aggregate_func_4268(uParam2->f_51))
	{
		func_688(&(uParam2->f_46), &(uParam2->f_57));
	}
	func_1026(iParam0, uParam1, uParam2);
}

void func_783(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	if (aggregate_func_6777(Local_458.f_1332) && !aggregate_func_4368(&(uParam2->f_45), 256))
	{
		if (((!aggregate_func_2056() && !aggregate_func_2920(Local_458.f_1287)) && !aggregate_func_4497(255)) && CAM::IS_SCREEN_FADED_IN())
		{
			aggregate_func_3074(func_1027(joaat("standard")));
			aggregate_func_4247(&(uParam2->f_45), 256);
		}
	}
	if (!aggregate_func_4368(&(uParam2->f_45), 4) && aggregate_func_4368(&(uParam2->f_45), 1))
	{
		if (!aggregate_func_2056())
		{
			aggregate_func_3074(func_1028(joaat("standard")));
			aggregate_func_4247(&(uParam2->f_45), 4);
		}
	}
	if (*iParam0 != 2)
	{
		return;
	}
	bVar0 = aggregate_func_3728();
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(3);
	if (*uParam1 >= (uParam2->f_67 - uParam2->f_68))
	{
		if (iVar1 == uParam2->f_65 && bVar0)
		{
			return;
		}
		_NAMESPACE71::_0x2F901291EF177B02(iVar1, 0);
		uParam2->f_65 = aggregate_func_3306(func_1030(iParam0->f_3, 1), -1, 0, 0, 1);
		return;
	}
	if (iVar1 == uParam2->f_64 && bVar0)
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(iVar1, 0);
	uParam2->f_64 = aggregate_func_3306(func_1030(iParam0->f_3, 0), -1, 0, 0, 1);
	return;
}

void func_784(int iParam0, var uParam1)
{
	struct<4> Var0;
	struct<25> Var31;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	Var31.f_3 = 255;
	Var31.f_4 = -1;
	Var31.f_5 = 623901053;
	Var31.f_6.f_3 = 255;
	Var31.f_6.f_4 = -1;
	Var31.f_6.f_5 = 623901053;
	Var31.f_12.f_3 = 255;
	Var31.f_12.f_4 = -1;
	Var31.f_12.f_5 = 623901053;
	Var31.f_18.f_3 = 255;
	Var31.f_18.f_4 = -1;
	Var31.f_18.f_5 = 623901053;
	Var31.f_24.f_3 = 255;
	Var31.f_24.f_4 = -1;
	Var31.f_24.f_5 = 623901053;
	aggregate_func_7005(&Var0, &Var31);
	if (!Var0.f_3)
	{
		return;
	}
	if (Var31.f_18 != 1)
	{
		return;
	}
	func_1032(&(uParam1->f_9), Var31.f_18.f_3);
}

void func_785(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if ((MISC::GET_GAME_TIMER() - uParam3->f_43) < 5000)
	{
		return;
	}
	if (aggregate_func_755(Global_35))
	{
		iVar0 = aggregate_func_1014(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			bVar2 = true;
			iVar1 = func_1034(&(uParam3->f_9), iVar0);
			if (iVar1 == 255)
			{
			}
		}
	}
	fVar3 = 0f;
	if (bVar2)
	{
		if (func_1035(&(uParam3->f_5), iVar1, &(uParam3->f_42)))
		{
			fVar3 = iParam1->f_17;
			aggregate_func_4247(&(uParam3->f_45), 1);
			aggregate_func_3537(func_1036(1, 0));
		}
		else
		{
			fVar3 = iParam1->f_16;
			aggregate_func_3537(func_1036(1, 1));
		}
		*uParam2 = func_1038(*uParam2, fVar3, (uParam3->f_67 - uParam3->f_68));
		uParam3->f_59 = MISC::GET_GAME_TIMER();
		uParam3->f_43 = MISC::GET_GAME_TIMER();
		aggregate_func_4247(&(uParam3->f_45), 16);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(2023426995, uParam3->f_51);
		return;
	}
}

void func_787(var uParam0, var uParam1)
{
	if (!TASK::_0x841475AC96E794D1(*uParam0))
	{
		return;
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		return;
	}
	*uParam1 = func_1039(TASK::_0xA8452DD321607029(*uParam0, 1), 5f, 5f, 5f);
}

void func_788(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

void func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_792(iParam0->f_9);
	iVar1 = 0;
	while (iVar1 <= ((func_664(iParam0->f_9) - iVar2) - 1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(iParam0->f_18[(iVar2 + iVar1)])))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_OBJ(&(iParam0->f_18[(iVar2 + iVar1)]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
			}
			else
			{
				OBJECT::DELETE_OBJECT(&iVar0);
			}
		}
		iVar1++;
	}
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 2129020695:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_793(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 854093187:
					return 0;
				case -52527354:
					return 0;
				case 528696119:
					return 1218665241;
				case -849305869:
					return -1955372868;
				case -275091101:
					return joaat("map");
				default:
					break;
			}
			return 0;
		}

bool func_794(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate_func_4268(vParam2))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(*uParam1))
	{
		*uParam1 = TASK::CREATE_SCENARIO_POINT(-315883067, vParam2, 0, 0, 0, 1);
	}
	if (!TASK::_0x841475AC96E794D1(*uParam1))
	{
		return false;
	}
	TASK::_0xD3A0DA8F91612C6E(*uParam1, *uParam5, 1);
	iVar0 = func_664(*uParam6);
	iVar3 = 0;
	while (iVar3 <= (iVar0 - 1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0[iVar3]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_ENT(uParam0[iVar3]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				iVar2 = func_665(*uParam6, iVar3);
				TASK::_0x8360C47380B6F351(*uParam1, iVar1, func_1040(*uParam6, iVar2), 0);
				if (iVar3 > func_792(*uParam6))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
				}
			}
		}
		iVar3++;
	}
	return true;
}

void func_796(int iParam0)
{
	if (!aggregate_func_4368(&(iParam0->f_45), 16))
	{
		return;
	}
	MAP::_0x9C113883487FD53C(-1943724816, 0);
	if (iParam0->f_59 > (MISC::GET_GAME_TIMER() - 5000))
	{
		aggregate_func_4247(&(iParam0->f_45), 16);
	}
}

void func_797(var uParam0, int iParam1)
{
	int iVar0;

	if (!TASK::_0x841475AC96E794D1(iParam1->f_60))
	{
		return;
	}
	iVar0 = TASK::_0x5BA659955369B0E2(iParam1->f_60);
	if (iVar0 == PLAYER::GET_PLAYER_PED(iParam1->f_62))
	{
		aggregate_func_4247(&(uParam0->f_2), 4);
	}
}

void func_798(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(*uParam1);
	if (iVar0 == *uParam2)
	{
		*uParam1 = func_1042(*uParam1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		*uParam1 = func_1042(*uParam1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		*uParam1 = func_1042(*uParam1);
		return;
	}
	if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
	{
		aggregate_func_2375(iVar0);
	}
	else
	{
		aggregate_func_1650(iVar0);
		SCRIPTS::_0x31010318BA9897AC(uParam0, *uParam1);
	}
	*uParam1 = func_1042(*uParam1);
}

bool func_947(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_HASH(iParam6, &vParam0))
	{
		return false;
	}
	return true;
}

void func_1026(int iParam0, var uParam1, var uParam2)
{
	func_1181(iParam0, uParam1, uParam2);
	func_1182(iParam0, uParam1, uParam2);
}

char* func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_RULE_MSG_INVALID";
		case joaat("standard"):
			return "FME_TH_RULE_MSG_STD";
		default:
			break;
	}
	return "";
}

char* func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_NARROW_HELP_MSG_INVALID";
		case joaat("standard"):
			return "FME_TH_NARROW_HELP_MSG_STD";
		default:
			break;
	}
	return "";
}

char* func_1030(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_OBJ_MSG_INVALID";
		case joaat("standard"):
			switch (iParam1)
			{
				case -1:
					return "STD_OBJ_MSG_INVALID";
				case 0:
					return "FME_TH_OBJ_MSG_NARROW";
				case 1:
					return "FME_TH_OBJ_MSG_FIND";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1032(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam1))
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1);
	iVar1 = iVar0;
	iVar2 = PLAYER::GET_PLAYER_PED(iParam1);
	(*uParam0)[iVar1] = aggregate_func_4270(iVar2);
}

int func_1034(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 255;
	}
	iVar1 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (uParam0[iVar4] == iParam1)
			{
				return iVar1;
			}
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				iVar3 = aggregate_func_4270(iVar2);
				if (iVar3 == iParam1)
				{
					return iVar1;
				}
			}
		}
		iVar4++;
	}
	return 255;
}

bool func_1035(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (uParam0[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	(*uParam0)[*uParam2] = iParam1;
	*uParam2 = (*uParam2 + 1 % 3);
	return false;
}

char* func_1036(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return "FME_TH_LOOTED_FULL";
		}
		else
		{
			return "FME_TH_LOOTED_PARTIAL";
		}
	}
	else if (bParam1)
	{
		return "FM_TH_GANGMATE_LOOTED_FULL_PIECE";
	}
	else
	{
		return "FM_TH_GANGMATE_LOOTED_PARTIAL_PIECE";
	}
	return "";
}

float func_1038(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = (fParam0 + fParam1);
	if (fVar0 > fParam2)
	{
		fVar0 = fParam2;
	}
	return fVar0;
}

int func_1039(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

char* func_1040(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2129020695:
			switch (iParam1)
			{
				case 854093187:
					return "CHEST";
				case -52527354:
					return "ROCKS";
				case 528696119:
					return "OBJECT1";
				case -849305869:
					return "OBJECT2";
				case -275091101:
					return "OBJECT3";
				default:
					break;
			}
			return "";
		}

int func_1042(int iParam0)
{
	return (iParam0 + 1 % 32);
}

void func_1181(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	fVar1 = (uParam2->f_67 - uParam1[iVar0 /*3*/]);
	if (!MAP::DOES_BLIP_EXIST(uParam2->f_46))
	{
		uParam2->f_46 = MAP::_0x45F13B7E0A15C880(-1282792512, uParam2->f_51, fVar1);
	}
	if (uParam1[iVar0 /*3*/] == uParam2->f_63)
	{
		return;
	}
	vVar2 = { func_1340(uParam2->f_51, iParam0->f_11, uParam2->f_68, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] - uParam2->f_63), uParam2->f_67) };
	if (fVar1 <= uParam2->f_68)
	{
		fVar1 = uParam2->f_68;
	}
	MAP::SET_BLIP_COORDS(uParam2->f_46, vVar2);
	MAP::SET_BLIP_SCALE(uParam2->f_46, fVar1);
	uParam2->f_51 = { vVar2 };
	uParam2->f_63 = uParam1[iVar0 /*3*/];
}

void func_1182(int iParam0, var uParam1, var uParam2)
{
	if (*iParam0 != 2)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		MAP::REMOVE_BLIP(&(uParam2->f_57));
	}
	if (aggregate_func_4268(iParam0->f_11))
	{
		return;
	}
	if (func_1341(iParam0, uParam1, uParam2))
	{
		if (MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		uParam2->f_57 = MAP::_0x554D9D53F696D002(-661723027, iParam0->f_11);
		MAP::SET_BLIP_SPRITE(uParam2->f_57, 1735233562, true);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam2->f_57, func_1342());
	}
	else
	{
		if (!MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		MAP::REMOVE_BLIP(&(uParam2->f_57));
	}
}

Vector3 func_1340(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = aggregate_func_2912(vParam0, vParam3);
	if (fVar0 <= fParam6)
	{
		return vParam0;
	}
	if ((fParam8 - fParam6) <= fParam7)
	{
		return vParam0;
	}
	vVar1 = { vParam3 - vParam0 };
	vVar1 = { aggregate_func_2907(vVar1) };
	return vParam0 + vVar1 * Vector(fParam7, fParam7, fParam7);
}

bool func_1341(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (PLAYER::IS_PLAYER_DEAD(uParam2->f_62))
	{
		aggregate_func_4247(&(((*uParam1)[iVar0 /*3*/])->f_2), 128);
	}
	vVar1 = { aggregate_func_1977(uParam2->f_62) };
	fVar4 = aggregate_func_2912(vVar1, iParam0->f_11);
	if (fVar4 <= 5f)
	{
		aggregate_func_4247(&(((*uParam1)[iVar0 /*3*/])->f_2), 128);
		return true;
	}
	else
	{
		aggregate_func_4247(&(((*uParam1)[iVar0 /*3*/])->f_2), 128);
	}
	iVar8 = func_1507();
	iVar9 = 0;
	while (iVar9 <= (iVar8 - 1))
	{
		iVar5 = aggregate_func_7008(iVar9);
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
			iVar7 = iVar6;
			if (aggregate_func_4368(&(((*uParam1)[iVar7 /*3*/])->f_2), 128))
			{
				return true;
			}
		}
		iVar9++;
	}
	return false;
}

char* func_1342()
{
	return "FME_TH_BLIP_NAME";
}

int func_1507()
{
	return Global_1099293->f_340;
}

