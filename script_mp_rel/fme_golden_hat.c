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
	struct<10> Local_18 = { 2, 0, 0, 0, 0, 255, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 255;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<4> Local_43[32];
	struct<39> Local_172 = { 0, 0, 0, 0, 2, -1367785559, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, -1367785559, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 255, 0, 2 } ;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	struct<18> Local_213 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_231 = 255;
	var uLocal_232 = 255;
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
	struct<6> Local_263[32];
	struct<1442> Local_456 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == aggregate_func_3505

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_18, 25, 38);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_18), 25, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_43, 129, 39);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_43[0 /*4*/]), 129, "m_clientData");
}

void func_51()
{
	aggregate_func_4134(-1621187289, "gh_data/location(id=%x)");
	aggregate_func_4134(-1183949996, ":num_players_for_two_hats");
	aggregate_func_4134(-118750559, "gh_data/location(id=%x)/spawn_positions");
	aggregate_func_4134(1127250931, "position(%i)");
	aggregate_func_4134(1587400168, ":spawn_position");
	aggregate_func_4134(-2031123601, "gh_data/location(id=%x)/spawn_exclusion_vols");
	aggregate_func_4134(-1064885679, "volume(%i)");
	aggregate_func_4134(-1913176219, ":volume_position");
	aggregate_func_4134(-1692665357, ":volume_orientation");
	aggregate_func_4134(-891054317, ":volume_scale");
}

void func_64()
{
	Local_172 = Local_456.f_3;
	aggregate_func_6739(1619021308);
	if (NETWORK::_0xF0460C7BF80011EA(2))
	{
		switch (Local_172)
		{
			case -483941904:
				NETWORK::_0x4D40E7D749BC6E6D(2);
				break;
			default:
				break;
		}
	}
	func_167();
	OBJECT::_0x0BF3B3BD47D79C08(func_168(), 1);
}

void func_72()
{
	Local_18.f_21 = func_172();
}

void func_125()
{
	int iVar0;
	int iVar1;

	func_344();
	func_345();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_346(iVar0);
		iVar0++;
	}
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(1502571077))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET(1502571077);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		aggregate_func_2017(&(Local_172.f_38[iVar1]));
		iVar1++;
	}
	OBJECT::_0x0BF3B3BD47D79C08(func_168(), -1);
	func_348();
	func_349();
	aggregate_func_2144(64);
}

void func_167()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[2];
	vector3 vVar9[2];
	vector3 vVar16[2];
	struct<4> Var23;
	struct<5> Var28;
	struct<5> Var33;

	Var23 = Local_456.f_1391;
	Var23.f_2 = -2031123601;
	Var23.f_3 = Local_456.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var23.f_1), &Var23))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var23, Var23.f_1);
	}
	else
	{
		return;
	}
	Var28 = Local_456.f_1391;
	Var28.f_2 = -2031123601;
	Var28.f_3 = Local_456.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var28.f_1), &Var28))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var23, Var23.f_1);
		if (iVar0 > 2)
		{
			iVar0 = 2;
		}
		Var33 = { Var28 };
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			Var33.f_2 = -1064885679;
			Var33.f_3 = iVar1;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var33.f_1), &Var33))
			{
				Var33.f_2 = -1913176219;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(vVar2[iVar1 /*3*/], &Var33))
				{
				}
				else
				{
					Var33.f_2 = -1692665357;
					if (!DATAFILE::_DATAFILE_GET_VECTOR(vVar9[iVar1 /*3*/], &Var33))
					{
					}
					else
					{
						Var33.f_2 = -891054317;
						if (!DATAFILE::_DATAFILE_GET_VECTOR(vVar16[iVar1 /*3*/], &Var33))
						{
						}
						else
						{
							Local_172.f_38[iVar1] = VOLUME::_CREATE_VOLUME_BOX(*(vVar2[iVar1 /*3*/]), *(vVar9[iVar1 /*3*/]), *(vVar16[iVar1 /*3*/]));
							Var33 = { Var28 };
						}
					}
				}
				iVar1++;
			}
		}
	}
}

int func_168()
{
	return -559281598;
}

int func_172()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 8;
	Var1 = Local_456.f_1391;
	Var1.f_2 = -1621187289;
	Var1.f_3 = Local_456.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = -1183949996;
		if (!DATAFILE::_DATAFILE_GET_INT(&iVar0, &Var1))
		{
		}
	}
	return iVar0;
}

int func_189()
{
	return 750;
}

bool func_190()
{
	int iVar0;

	func_398();
	if (Local_18.f_23 >= Local_18.f_22)
	{
		return true;
	}
	if (func_399(Local_18.f_23))
	{
		switch (Local_172)
		{
			case -483941904:
				iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), (Local_18[Local_18.f_23 /*10*/])->f_1, true, (Local_172.f_4[Local_18.f_23 /*15*/])->f_1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					aggregate_func_1473(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0.5f);
					Local_18[Local_18.f_23 /*10*/] = NETWORK::OBJ_TO_NET(iVar0);
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[Local_18.f_23 /*10*/])))
					{
						NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(&(Local_18[Local_18.f_23 /*10*/]), true);
					}
					Local_18.f_23++;
				}
				break;
			default:
				break;
		}
	}
	if (Local_18.f_23 >= Local_18.f_22)
	{
		return true;
	}
	return false;
}

bool func_198()
{
	Local_18.f_23 = 0;
	while (Local_18.f_23 < Local_18.f_22)
	{
		func_407();
		func_408();
		Local_18.f_23++;
	}
	return false;
}

bool func_223()
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if ((Local_172.f_4[iVar1 /*15*/])->f_1 == 0)
		{
			(Local_172.f_4[iVar1 /*15*/])->f_1 = func_168();
		}
		STREAMING::REQUEST_MODEL((Local_172.f_4[iVar1 /*15*/])->f_1, false);
		if (!STREAMING::HAS_MODEL_LOADED((Local_172.f_4[iVar1 /*15*/])->f_1))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (!func_428(Global_35, func_427()))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(1502571077);
		if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(1502571077))
		{
			bVar0 = false;
		}
	}
	return bVar0;
}

void func_251()
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	var uVar9;

	iVar0 = 0;
	while (iVar0 <= (Local_18.f_22 - 1))
	{
		func_493(iVar0, func_492(iVar0));
		func_494(iVar0);
		iVar0++;
	}
	Var1 = { aggregate_func_9394(255) };
	iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var1);
	uVar9 = aggregate_func_9395(255);
	Local_172.f_36 = iVar8;
	Local_172.f_37 = uVar9;
}

void func_261()
{
	aggregate_func_9396(4);
	Local_172.f_2 = 0;
	while (Local_172.f_2 < Local_18.f_22)
	{
		func_525();
		if (aggregate_func_6777(Local_456.f_1332))
		{
			func_526();
		}
		func_494(Local_172.f_2);
		func_527();
		aggregate_func_4342();
		Local_172.f_2++;
	}
}

char[] func_310(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_GH_SHARD_OUTRO_PRIMARY_WON", BUILTIN::FLOOR(fParam0));
}

char[] func_313(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_GH_SHARD_OUTRO_PRIMARY_FAILED", BUILTIN::FLOOR(fParam9));
}

void func_344()
{
	if (!AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		return;
	}
	if (aggregate_func_6777(Local_456.f_1332))
	{
		aggregate_func_1312(func_599(4), 1, 1);
	}
	else
	{
		aggregate_func_1312(func_599(5), 1, 1);
	}
}

void func_345()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (MAP::DOES_BLIP_EXIST((Local_172.f_4[iVar0 /*15*/])->f_3))
		{
			MAP::REMOVE_BLIP(&((Local_172.f_4[iVar0 /*15*/])->f_3));
		}
		if (MAP::DOES_BLIP_EXIST((Local_172.f_4[iVar0 /*15*/])->f_2))
		{
			MAP::REMOVE_BLIP(&((Local_172.f_4[iVar0 /*15*/])->f_2));
		}
		iVar0++;
	}
}

void func_346(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_172.f_4[iParam0 /*15*/])->f_14))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED((Local_172.f_4[iParam0 /*15*/])->f_14, false);
	}
}

void func_348()
{
	if (!aggregate_func_7846(16, Local_456.f_1332))
	{
		return;
	}
	aggregate_func_9397(16);
	aggregate_func_1473(Global_36, 1065353216 /* Float: 1f */);
	aggregate_func_5981(Global_35, 1);
	func_604();
	aggregate_func_4782(2097152);
	func_606();
}

void func_349()
{
	int iVar0;

	if (!Global_1951131->f_2347)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2347.f_1)
	{
		PED::_0x13E7320C762F0477(&(Global_1951131->f_2347.f_3[iVar0 /*2*/]));
		(Global_1951131->f_2347.f_3[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
	Global_1951131->f_2347 = 0;
	Global_1951131->f_2347.f_1 = 0;
}

void func_398()
{
	int iVar0;

	if (aggregate_func_4281(1))
	{
		return;
	}
	iVar0 = aggregate_func_2393(2);
	if (iVar0 >= Local_18.f_21)
	{
		Local_18.f_22 = 2;
	}
	aggregate_func_7374(1);
}

bool func_399(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 1f, 1f, 1f };
	if (iParam0 > 0)
	{
		vVar0 = { (Local_18[(iParam0 - 1) /*10*/])->f_1 };
		if (!func_668(&((Local_18[iParam0 /*10*/])->f_1), vVar0))
		{
			return false;
		}
	}
	else if (!func_668(&((Local_18[iParam0 /*10*/])->f_1), vVar0))
	{
		return false;
	}
	return true;
}

void func_407()
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	float fVar13;

	if (!aggregate_func_6563(2, Local_18.f_23) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[Local_18.f_23 /*10*/])))
	{
		vVar0 = { (Local_172.f_4[Local_18.f_23 /*15*/])->f_4 };
		fVar3 = aggregate_func_2912(vVar0, Local_456.f_1396);
		bVar4 = (fVar3 >= Local_456.f_1294 && (Local_18[Local_18.f_23 /*10*/])->f_5 == 0);
		iVar5 = NETWORK::NET_TO_ENT(&(Local_18[Local_18.f_23 /*10*/]));
		bVar6 = (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5));
		if ((aggregate_func_4260(&((Local_18[Local_18.f_23 /*10*/])->f_6)) && !aggregate_func_2742(1, Local_18.f_23)) && (bVar6 && !ENTITY::IS_ENTITY_ATTACHED(iVar5)))
		{
			iVar7 = aggregate_func_4732(&((Local_18[Local_18.f_23 /*10*/])->f_6));
			if (Local_18.f_22 > 1)
			{
				iVar8 = 22500;
			}
			iVar9 = (45000 + iVar8);
			if (bVar4)
			{
				iVar9 = 5000;
				func_672(32, Local_18.f_23);
			}
			if (iVar7 > iVar9 && (aggregate_func_2742(8, Local_18.f_23) || bVar4))
			{
				func_672(2, Local_18.f_23);
				if (!bVar4)
				{
					func_672(4, Local_18.f_23);
				}
				return;
			}
			else if ((Local_456.f_1267 > (45000 + iVar8) && !bVar4) && !aggregate_func_6563(8, Local_18.f_23))
			{
				if (iVar7 > (35000 + iVar8))
				{
					func_672(8, Local_18.f_23);
					func_673(4, Local_18.f_23);
				}
			}
		}
		if (Local_172.f_1 < 17)
		{
			Local_172.f_1++;
			return;
		}
		Local_172.f_1 = 0;
		if (bVar6)
		{
			vVar10 = { vVar0 };
			vVar10.f_2 = (vVar10.z + 250f);
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar10, &fVar13, 0))
			{
				if (Local_172.f_4[Local_18.f_23 /*15*/])->f_4.f_2 < (fVar13 - 75f)
				{
					func_672(2, Local_18.f_23);
				}
			}
		}
	}
}

void func_408()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;

	if ((aggregate_func_6563(2, Local_18.f_23) && (Local_18[Local_18.f_23 /*10*/])->f_5 == 0) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[Local_18.f_23 /*10*/])))
	{
		if (aggregate_func_4260(&((Local_18[Local_18.f_23 /*10*/])->f_6)))
		{
			aggregate_func_4957(&((Local_18[Local_18.f_23 /*10*/])->f_6));
		}
		iVar0 = NETWORK::NET_TO_OBJ(&(Local_18[Local_18.f_23 /*10*/]));
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && func_668(&((Local_18[Local_18.f_23 /*10*/])->f_1), vVar1))
		{
			func_673(8, Local_18.f_23);
			func_674(2);
		}
	}
	switch ((Local_18[Local_18.f_23 /*10*/])->f_5)
	{
		case 0:
			if (func_675(1, Local_18.f_23, &iVar4))
			{
				func_673(16, Local_18.f_23);
				iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
				if ((Local_18[Local_18.f_23 /*10*/])->f_4 != iVar5)
				{
					aggregate_func_7374(8);
					(Local_18[Local_18.f_23 /*10*/])->f_4 = iVar5;
					if (aggregate_func_4260(&((Local_18[Local_18.f_23 /*10*/])->f_6)))
					{
						aggregate_func_4957(&((Local_18[Local_18.f_23 /*10*/])->f_6));
					}
					func_674(1);
				}
			}
			else if (!aggregate_func_4260(&((Local_18[Local_18.f_23 /*10*/])->f_6)))
			{
				aggregate_func_4293(&((Local_18[Local_18.f_23 /*10*/])->f_6), 0);
			}
			else
			{
				func_673(16, Local_18.f_23);
			}
			break;
		case 1:
			func_673(32, Local_18.f_23);
			if (!aggregate_func_2742(1, Local_18.f_23))
			{
				(Local_18[Local_18.f_23 /*10*/])->f_4 = 255;
				func_674(0);
			}
			break;
		case 2:
			if (!aggregate_func_6563(64, Local_18.f_23))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[Local_18.f_23 /*10*/])))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_18[Local_18.f_23 /*10*/])))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_18[Local_18.f_23 /*10*/]));
					}
					else
					{
						iVar6 = NETWORK::NET_TO_ENT(&(Local_18[Local_18.f_23 /*10*/]));
						if (!ENTITY::IS_ENTITY_DEAD(iVar6))
						{
							vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar6, false, false) };
							aggregate_func_1473(vVar7, 0.5f);
							if (ENTITY::IS_ENTITY_ATTACHED(iVar6))
							{
								ENTITY::DETACH_ENTITY(iVar6, true, true);
							}
							ENTITY::SET_ENTITY_VELOCITY(iVar6, 0f, 0f, 0f);
							ENTITY::SET_ENTITY_COORDS(iVar6, (Local_18[Local_18.f_23 /*10*/])->f_1, false, false, true, true);
							OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar6), 0);
							ENTITY::SET_ENTITY_ROTATION(iVar6, 0f, 0f, 0f, 2, false);
							aggregate_func_1473((Local_18[Local_18.f_23 /*10*/])->f_1, 0.5f);
							func_672(16, Local_18.f_23);
							func_672(64, Local_18.f_23);
						}
					}
				}
			}
			else if (func_676(64, Local_18.f_23))
			{
				func_673(2, Local_18.f_23);
				func_673(32, Local_18.f_23);
				func_673(64, Local_18.f_23);
				func_674(0);
			}
			break;
	}
}

void func_426()
{
	func_344();
	func_689();
	func_345();
	OBJECT::_0x0BF3B3BD47D79C08(func_168(), -1);
	func_348();
	aggregate_func_2144(64);
}

int func_427()
{
	int iVar0;

	iVar0 = 890829282;
	if (PED::IS_PED_MALE(Global_35))
	{
		iVar0 = 579895545;
	}
	return iVar0;
}

bool func_428(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (Global_1951131->f_2347 && Global_1951131->f_2347.f_2 != iParam1)
	{
		func_349();
	}
	if (!Global_1951131->f_2347)
	{
		if (aggregate_func_4734(32))
		{
			aggregate_func_4914(&(Global_1951131->f_2228));
		}
		else
		{
			aggregate_func_4914(&(Global_1951131->f_1657));
		}
		if (!aggregate_func_403(&(Global_1951131->f_1538), iParam1, &uVar1, 0, 1, 0, 0, 0))
		{
			return false;
		}
		iVar2 = PED::_GET_METAPED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&Global_1951131->f_1538.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
			}
			else
			{
				Global_1951131->f_2347.f_3[Global_1951131->f_2347.f_1 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar2, &(Global_1951131->f_1538.f_1[iVar0 /*3*/]), 0, 1, 0);
				(Global_1951131->f_2347.f_3[Global_1951131->f_2347.f_1 /*2*/])->f_1 = &Global_1951131->f_1538.f_1[iVar0 /*3*/];
				Global_1951131->f_2347.f_1++;
			}
			iVar0++;
		}
		Global_1951131->f_2347 = 1;
		Global_1951131->f_2347.f_2 = iParam1;
	}
	return func_693();
}

void func_435()
{
	if (Local_456.f_2 == 622863578)
	{
		aggregate_func_8608();
	}
}

int func_492(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (Local_18[iParam0 /*10*/])->f_4 == PLAYER::PLAYER_ID()
	{
		iVar0 = 1;
	}
	else if ((Local_18[iParam0 /*10*/])->f_4 != 255)
	{
		if (_NAMESPACE26::_0x81FB74C83C2ED69F((Local_18[iParam0 /*10*/])->f_4) && !aggregate_func_8087())
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
	}
	return iVar0;
}

void func_493(int iParam0, int iParam1)
{
	if (!aggregate_func_3630(256, iParam0, Local_456.f_1332) && aggregate_func_8087())
	{
		aggregate_func_3726(256, iParam0);
		if ((Local_172.f_4[iParam0 /*15*/])->f_10 == 1 && MAP::DOES_BLIP_EXIST((Local_172.f_4[iParam0 /*15*/])->f_3))
		{
			func_775(iParam1, iParam0, &((Local_172.f_4[iParam0 /*15*/])->f_3));
		}
	}
	switch ((Local_18[iParam0 /*10*/])->f_5)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST((Local_172.f_4[iParam0 /*15*/])->f_3))
			{
				MAP::REMOVE_BLIP(&((Local_172.f_4[iParam0 /*15*/])->f_3));
			}
			if (!MAP::DOES_BLIP_EXIST((Local_172.f_4[iParam0 /*15*/])->f_2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[iParam0 /*10*/])))
			{
				(Local_172.f_4[iParam0 /*15*/])->f_2 = MAP::_0x23F74C2FDA6E7C61(1416689804, NETWORK::NET_TO_OBJ(&(Local_18[iParam0 /*10*/])));
				MAP::_0x662D364ABF16DE2F((Local_172.f_4[iParam0 /*15*/])->f_2, 580546400);
				MAP::_0x662D364ABF16DE2F((Local_172.f_4[iParam0 /*15*/])->f_2, 231194138);
				MAP::SET_BLIP_SPRITE((Local_172.f_4[iParam0 /*15*/])->f_2, 1862205446, true);
				func_775(iParam1, iParam0, &((Local_172.f_4[iParam0 /*15*/])->f_2));
			}
			break;
		case 1:
			if (MAP::DOES_BLIP_EXIST((Local_172.f_4[iParam0 /*15*/])->f_2))
			{
				MAP::REMOVE_BLIP(&((Local_172.f_4[iParam0 /*15*/])->f_2));
			}
			if (!MAP::DOES_BLIP_EXIST((Local_172.f_4[iParam0 /*15*/])->f_3) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED((Local_18[iParam0 /*10*/])->f_4)))
			{
				(Local_172.f_4[iParam0 /*15*/])->f_3 = MAP::_0x23F74C2FDA6E7C61(1416689804, PLAYER::GET_PLAYER_PED((Local_18[iParam0 /*10*/])->f_4));
				MAP::_0x662D364ABF16DE2F((Local_172.f_4[iParam0 /*15*/])->f_3, 580546400);
				MAP::_0x662D364ABF16DE2F((Local_172.f_4[iParam0 /*15*/])->f_3, 231194138);
				MAP::SET_BLIP_SPRITE((Local_172.f_4[iParam0 /*15*/])->f_3, 1862205446, true);
				func_775(iParam1, iParam0, &((Local_172.f_4[iParam0 /*15*/])->f_3));
			}
			break;
	}
}

void func_494(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[iParam0 /*10*/])))
	{
		iVar0 = NETWORK::NET_TO_ENT(&(Local_18[iParam0 /*10*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			(Local_172.f_4[iParam0 /*15*/])->f_4 = { vVar1 };
		}
	}
}

void func_525()
{
	bool bVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	Var1 = { aggregate_func_9394(255) };
	iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var1);
	iVar9 = aggregate_func_9395(255);
	if (Local_172.f_36 != iVar8)
	{
		bVar0 = true;
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_172.f_36)) && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(Local_172.f_36))) && Local_172.f_37 != iVar9)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (aggregate_func_7846(16, Local_456.f_1332))
		{
			if (Local_172.f_37 != iVar9)
			{
				aggregate_func_7436(BUILTIN::TO_FLOAT(1));
			}
			Local_172.f_36 = iVar8;
			Local_172.f_37 = iVar9;
			Local_172.f_3 = 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar8)))
		{
			iVar11 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar8);
			if (aggregate_func_4271(iVar11) && func_793(128, iVar11, &uVar10))
			{
				aggregate_func_7436(BUILTIN::TO_FLOAT(1));
				Local_172.f_36 = iVar8;
				Local_172.f_37 = iVar9;
				Local_172.f_3 = 0;
				return;
			}
			else if (Local_172.f_3 > 15)
			{
				Local_172.f_36 = iVar8;
				Local_172.f_37 = iVar9;
				Local_172.f_3 = 0;
				return;
			}
			Local_172.f_3++;
		}
		else
		{
			Local_172.f_36 = 255;
			Local_172.f_37 = iVar9;
			Local_172.f_3 = 0;
		}
	}
}

void func_526()
{
	int iVar0;

	iVar0 = func_492(Local_172.f_2);
	func_794(iVar0);
	func_795(iVar0);
	func_493(Local_172.f_2, iVar0);
}

void func_527()
{
	int iVar0;

	switch ((Local_172.f_4[Local_172.f_2 /*15*/])->f_10)
	{
		case 0:
			aggregate_func_3727(64, Local_172.f_2);
			if (!aggregate_func_3630(1, Local_172.f_2, -1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[Local_172.f_2 /*10*/])))
			{
				iVar0 = NETWORK::NET_TO_OBJ(&(Local_18[Local_172.f_2 /*10*/]));
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					func_797(iVar0);
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_35))
					{
						func_798();
						aggregate_func_4293(&((Local_172.f_4[Local_172.f_2 /*15*/])->f_11), 1);
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						aggregate_func_9396(16);
						aggregate_func_3726(1, Local_172.f_2);
						aggregate_func_3727(128, Local_172.f_2);
					}
				}
			}
			func_799();
			break;
		case 1:
			func_346(Local_172.f_2);
			if (((!ENTITY::IS_ENTITY_DEAD(Global_35) && PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID())) && aggregate_func_4260(&((Local_172.f_4[Local_172.f_2 /*15*/])->f_11))) && aggregate_func_4628(&((Local_172.f_4[Local_172.f_2 /*15*/])->f_11), 5000))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				aggregate_func_4957(&((Local_172.f_4[Local_172.f_2 /*15*/])->f_11));
			}
			if (((Local_18[Local_172.f_2 /*10*/])->f_4 == PLAYER::PLAYER_ID() && ENTITY::IS_ENTITY_DEAD(Global_35)) && aggregate_func_3630(1, Local_172.f_2, -1))
			{
				func_348();
				aggregate_func_3727(1, Local_172.f_2);
				aggregate_func_3726(128, Local_172.f_2);
			}
			func_799();
			break;
		case 2:
			if (aggregate_func_6563(64, Local_172.f_2))
			{
				if (!aggregate_func_3630(64, Local_172.f_2, -1))
				{
					func_801();
					aggregate_func_3726(64, Local_172.f_2);
				}
				aggregate_func_3727(8, Local_172.f_2);
			}
			if (!aggregate_func_6563(2, Local_172.f_2))
			{
				func_799();
			}
			break;
	}
}

char* func_599(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MC_SUSPENSE_LOW";
		case 2:
			return "MC_DEFENDING";
		case 3:
			return "MC_ATTACKING";
		case 4:
			return "MP_FM_END";
		case 5:
			return "MC_FAIL";
		default:
			break;
	}
	return "MC_SUSPENSE_LOW";
}

void func_604()
{
	if (func_859(-1631930150) != -179898515)
	{
		return;
	}
	aggregate_func_4447(-1631930150);
}

void func_606()
{
	struct<4> Var0;

	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_0x31010318BA9897AC(&(Var0.f_2), PLAYER::PLAYER_ID());
	Var0.f_3 = 1;
	aggregate_func_457(&Var0);
}

bool func_668(var uParam0, vector3 vParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var6;
	int iVar11;
	int iVar12;
	int iVar13;

	*uParam0 = { 0f, 0f, 0f };
	Var1 = Local_456.f_1391;
	Var1.f_2 = -118750559;
	Var1.f_3 = Local_456.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
	}
	else
	{
		return false;
	}
	Var6 = Local_456.f_1391;
	Var6.f_2 = -118750559;
	Var6.f_3 = Local_456.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		Var6.f_2 = 1127250931;
		Var6.f_3 = iVar11;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
		{
			Var6.f_2 = 1587400168;
			if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam0, &Var6))
			{
				return false;
			}
			if (aggregate_func_1533(*uParam0, vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				return false;
			}
			else if (Local_18.f_22 > 1)
			{
				iVar12 = 0;
				while (iVar12 <= (Local_18.f_22 - 1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[iVar12 /*10*/])))
					{
						iVar13 = NETWORK::NET_TO_ENT(&(Local_18[iVar12 /*10*/]));
						if (!ENTITY::IS_ENTITY_DEAD(iVar13) && ENTITY::IS_ENTITY_AT_COORD(iVar13, *uParam0, 1f, 1f, 1f, false, true, 0))
						{
							return false;
						}
					}
					iVar12++;
				}
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_672(int iParam0, int iParam1)
{
	if (!aggregate_func_6563(iParam0, iParam1))
	{
		aggregate_func_4247(&((Local_18[iParam1 /*10*/])->f_9), iParam0);
	}
}

void func_673(int iParam0, int iParam1)
{
	if (aggregate_func_6563(iParam0, iParam1))
	{
		aggregate_func_4247(&((Local_18[iParam1 /*10*/])->f_9), iParam0);
	}
}

void func_674(int iParam0)
{
	if ((Local_18[Local_18.f_23 /*10*/])->f_5 != iParam0)
	{
		(Local_18[Local_18.f_23 /*10*/])->f_5 = iParam0;
	}
}

bool func_675(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate_func_4240(&((Local_43[iVar0 /*4*/])->f_1[iParam1]), iParam0))
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_676(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate_func_7846(4, iVar0)) && !aggregate_func_4240(&((Local_43[iVar0 /*4*/])->f_1[iParam1]), iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_689()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_346(iVar0);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_18[iVar0 /*10*/])))
		{
			iVar1 = NETWORK::NET_TO_ENT(&(Local_18[iVar0 /*10*/]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_18[iVar0 /*10*/])))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
				{
					ENTITY::DETACH_ENTITY(iVar1, true, true);
				}
				else
				{
					aggregate_func_1473(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 0.5f);
				}
				ENTITY::DELETE_ENTITY(&iVar1);
			}
		}
		if ((Local_172.f_4[iVar0 /*15*/])->f_1 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Local_172.f_4[iVar0 /*15*/])->f_1);
		}
		iVar0++;
	}
}

int func_693()
{
	int iVar0;

	if (!Global_1951131->f_2347)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2347.f_1)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(&(Global_1951131->f_2347.f_3[iVar0 /*2*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_719(float fParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_172.f_38[iVar0])))
		{
			NETWORK::_0x405DDEFB1F531B18(&(Local_172.f_38[iVar0]), false, 0, 0);
		}
		iVar0++;
	}
}

void func_775(int iParam0, int iParam1, int* iParam2)
{
	switch (iParam0)
	{
		case 2:
			MAP::_0xB059D7BD3D78C16F(*iParam2, -1636811933);
			MAP::_0xB059D7BD3D78C16F(*iParam2, -2145527776);
			MAP::_0x662D364ABF16DE2F(*iParam2, -1445216292);
			MAP::SET_BLIP_NAME_TO_PLAYER_NAME(*iParam2, (Local_18[iParam1 /*10*/])->f_4);
			aggregate_func_2144(64);
			break;
		case 3:
			MAP::_0xB059D7BD3D78C16F(*iParam2, -1636811933);
			MAP::_0xB059D7BD3D78C16F(*iParam2, -1445216292);
			MAP::_0x662D364ABF16DE2F(*iParam2, -2145527776);
			MAP::SET_BLIP_NAME_TO_PLAYER_NAME(*iParam2, (Local_18[iParam1 /*10*/])->f_4);
			aggregate_func_2144(64);
			break;
		case 1:
			if (MAP::DOES_BLIP_EXIST(*iParam2))
			{
				MAP::REMOVE_BLIP(iParam2);
				aggregate_func_2150(64);
			}
			break;
		case 0:
		default:
			MAP::_0xB059D7BD3D78C16F(*iParam2, -1445216292);
			MAP::_0xB059D7BD3D78C16F(*iParam2, -2145527776);
			MAP::_0x662D364ABF16DE2F(*iParam2, -1636811933);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "FME_GH_GOLDEN_ARMOR");
			aggregate_func_2144(64);
			break;
	}
}

int func_793(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_18.f_22 - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam1) && aggregate_func_4240(&((Local_43[iParam1 /*4*/])->f_1[iVar0]), iParam0))
		{
			*uParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_794(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;

	sVar3 = "";
	bVar4 = Local_18.f_22 > 1;
	if (aggregate_func_7846(16, Local_456.f_1332))
	{
		iVar0 = 5;
		iVar1 = 6;
	}
	else if (func_1039(16) == Local_18.f_22)
	{
		if (func_1040())
		{
			if (bVar4)
			{
				iVar0 = 7;
				iVar1 = 10;
			}
			else if ((Local_18[Local_172.f_2 /*10*/])->f_4 != 255)
			{
				iVar0 = 6;
				iVar1 = 10;
				sVar3 = PLAYER::GET_PLAYER_NAME((Local_18[Local_172.f_2 /*10*/])->f_4);
			}
		}
		else
		{
			iVar0 = 3;
			if (bVar4)
			{
				iVar0 = 4;
			}
			iVar1 = 8;
		}
	}
	else
	{
		iVar0 = 1;
		if (bVar4)
		{
			iVar0 = 2;
		}
		iVar1 = 7;
	}
	if ((Local_172.f_4[Local_172.f_2 /*15*/])->f_7 != iVar0 || !aggregate_func_2920(Local_456.f_1288))
	{
		if (MISC::IS_STRING_NULL(sVar3))
		{
			sVar2 = func_1041(iVar0);
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(10, func_1041(iVar0), aggregate_func_1524(sVar3, joaat("COLOR_PURE_WHITE")));
		}
		aggregate_func_3535(iVar1, sVar2, -1, 0);
		func_1042(iVar0);
	}
	func_1043(iParam0);
}

void func_795(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (aggregate_func_6563(8, Local_172.f_2) && !aggregate_func_3630(8, Local_172.f_2, Local_456.f_1332))
	{
		func_1044(&sVar2, iParam0);
		sVar1 = MISC::_CREATE_VAR_STRING(2, func_1045(), sVar2);
		Local_456.f_1289 = aggregate_func_2916(sVar1, 9500, 0, 0, 0, 1);
		aggregate_func_3726(8, Local_172.f_2);
	}
	if (!aggregate_func_4281(8))
	{
		return;
	}
	iVar3 = (Local_18[Local_172.f_2 /*10*/])->f_4;
	iVar4 = 255;
	if (iVar3 != 255 && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
	{
		iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
	}
	bVar5 = Local_456.f_1277 < aggregate_func_6818();
	if (((((bVar5 && !aggregate_func_7846(64, Local_456.f_1332)) && iVar3 != 255) && iParam0 == 3) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4)) && aggregate_func_3482(Local_456.f_1289))
	{
		sVar0 = PLAYER::GET_PLAYER_NAME(iVar3);
		func_1044(&sVar2, iParam0);
		sVar1 = MISC::_CREATE_VAR_STRING(10, func_1046(), aggregate_func_1524(sVar0, joaat("COLOR_PURE_WHITE")), sVar2);
		Local_456.f_1289 = aggregate_func_3074(sVar1);
		aggregate_func_9396(64);
	}
	if (((bVar5 && !aggregate_func_7846(128, Local_456.f_1332)) && iParam0 == 1) && aggregate_func_3482(Local_456.f_1289))
	{
		Local_456.f_1289 = aggregate_func_3074(func_1047());
		aggregate_func_9396(128);
	}
	if ((((bVar5 && !aggregate_func_7846(256, Local_456.f_1332)) && func_1040()) && iParam0 != 1) && aggregate_func_3482(Local_456.f_1289))
	{
		if (Local_18.f_22 > 1)
		{
			if (!aggregate_func_7846(16, Local_456.f_1332))
			{
				Local_456.f_1289 = aggregate_func_3074(func_1048());
			}
		}
		else if (iVar3 != 255 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(iVar3);
			func_1044(&sVar2, iParam0);
			sVar1 = MISC::_CREATE_VAR_STRING(10, func_1049(), aggregate_func_1524(sVar0, joaat("COLOR_PURE_WHITE")), sVar2);
			Local_456.f_1289 = aggregate_func_3074(sVar1);
		}
		aggregate_func_9396(256);
	}
}

void func_797(int iParam0)
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_172.f_4[Local_172.f_2 /*15*/])->f_14))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_net_fire_smoke");
		(Local_172.f_4[Local_172.f_2 /*15*/])->f_14 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_item_pickup_highlight", iParam0, 0f, 0f, 0.4f, 0f, 0f, 0f, 1f, false, false, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE((Local_172.f_4[Local_172.f_2 /*15*/])->f_14, 2f);
	}
}

void func_798()
{
	int iVar0;

	aggregate_func_1473(Global_36, 1065353216 /* Float: 1f */);
	iVar0 = func_427();
	aggregate_func_8089(&iVar0, 0);
	aggregate_func_4719(2097152);
	aggregate_func_1539(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	aggregate_func_1154(PED::_0xCB42AFE2B613EE55(Global_35), 0);
	aggregate_func_1997(19, 10f, 0, 0);
	aggregate_func_1997(18, 10f, 0, 0);
	func_606();
}

void func_799()
{
	if ((Local_172.f_4[Local_172.f_2 /*15*/])->f_10 != (Local_18[Local_172.f_2 /*10*/])->f_5)
	{
		func_1054((Local_18[Local_172.f_2 /*10*/])->f_5);
	}
}

void func_801()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (aggregate_func_6563(4, Local_172.f_2))
	{
		sVar0 = func_1055();
	}
	else if (aggregate_func_6563(32, Local_172.f_2))
	{
		sVar0 = func_1056();
	}
	else
	{
		sVar0 = func_1057();
	}
	func_1044(&sVar2, func_492(Local_172.f_2));
	sVar1 = MISC::_CREATE_VAR_STRING(2, sVar0, sVar2);
	Local_456.f_1289 = aggregate_func_2916(sVar1, 10000, 0, 0, 0, 1);
}

void func_802()
{
	if ((!aggregate_func_6777(Local_456.f_1332) && Local_172.f_35 > 0) && Local_172.f_35 < 5)
	{
		func_1058(5);
	}
	switch (Local_172.f_35)
	{
		case 0:
			if (aggregate_func_6777(Local_456.f_1332))
			{
				func_1058(1);
			}
			break;
		case 1:
			if (aggregate_func_4281(8))
			{
				if (aggregate_func_7846(16, Local_456.f_1332))
				{
					func_1058(2);
				}
				else
				{
					func_1058(3);
				}
			}
			break;
		case 2:
			if (!aggregate_func_7846(16, Local_456.f_1332))
			{
				func_1058(3);
			}
			break;
		case 3:
			if (aggregate_func_7846(16, Local_456.f_1332))
			{
				func_1058(2);
			}
			break;
		case 4:
		case 5:
			break;
	}
	func_1059();
}

void func_803()
{
	if (aggregate_func_3630(128, Local_172.f_2, -1) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		aggregate_func_3727(128, Local_172.f_2);
	}
}

int func_859(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4383(iParam0))
	{
		return -1;
	}
	iVar0 = aggregate_func_4385(iParam0, 1);
	return &(Global_1138889->f_30603.f_847[iVar0 /*12*/]);
}

int func_1039(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate_func_4240(&(Local_43[iVar0 /*4*/]), iParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1040()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_8087())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate_func_7846(16, iVar0)) && _NAMESPACE26::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
		{
			iVar1++;
		}
		if (iVar1 == Local_18.f_22)
		{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1 == Local_18.f_22;
}

char* func_1041(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_GH_OBJ_GET_HAT";
		case 2:
			return "FME_GH_OBJ_GET_HAT_MULTIPLE";
		case 3:
			return "FME_GH_OBJ_GET_HAT_ENEMY";
		case 4:
			return "FME_GH_OBJ_GET_HAT_MULTIPLE_ENEMY";
		case 5:
			return "FME_GH_OBJ_OWNS_HAT";
		case 6:
			return "FME_GH_OBJ_PROTECT_HAT";
		case 7:
			return "FME_GH_OBJ_PROTECT_HAT_MULTIPLE";
		default:
			break;
	}
	return "";
}

void func_1042(int iParam0)
{
	if ((Local_172.f_4[Local_172.f_2 /*15*/])->f_7 != iParam0)
	{
		(Local_172.f_4[Local_172.f_2 /*15*/])->f_7 = iParam0;
	}
}

void func_1043(int iParam0)
{
	char* sVar0;
	char* sVar1;

	sVar1 = "";
	if ((Local_172.f_4[Local_172.f_2 /*15*/])->f_9 != (Local_18[Local_172.f_2 /*10*/])->f_4)
	{
		(Local_172.f_4[Local_172.f_2 /*15*/])->f_9 = (Local_18[Local_172.f_2 /*10*/])->f_4;
		if (!aggregate_func_4281(8))
		{
			return;
		}
		if (iParam0 == 1)
		{
			sVar0 = func_1215();
		}
		else if (iParam0 == 0)
		{
			sVar0 = func_1216();
		}
		else
		{
			sVar1 = PLAYER::GET_PLAYER_NAME((Local_18[Local_172.f_2 /*10*/])->f_4);
			if (iParam0 == 2)
			{
				sVar0 = func_1217();
			}
			else
			{
				sVar0 = func_1218();
			}
		}
		func_1219(sVar0, sVar1);
	}
}

void func_1044(char* sParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1636811933;
	switch (iParam1)
	{
		case 2:
			iVar0 = -1445216292;
			break;
		case 3:
			iVar0 = -2145527776;
			break;
	}
	if (!MAP::DOES_BLIP_EXIST(*sParam0))
	{
		*sParam0 = MAP::_0x3E593DF9C2962EC6(1416689804);
		MAP::_0x662D364ABF16DE2F(*sParam0, iVar0);
		MAP::SET_BLIP_SPRITE(*sParam0, 1862205446, true);
	}
}

char* func_1045()
{
	return "FME_GH_HELP_HAT_IDLE_WARN";
}

char* func_1046()
{
	return "FME_GH_HELP_FIRST_PLAYER";
}

char* func_1047()
{
	return "FME_GH_HELP_FIRST_WEAR";
}

char* func_1048()
{
	return "FME_GH_HELP_FIRST_PLAYERS_ALLIES";
}

char* func_1049()
{
	return "FME_GH_HELP_FIRST_PLAYER_ALLY";
}

void func_1054(var uParam0)
{
	(Local_172.f_4[Local_172.f_2 /*15*/])->f_10 = uParam0;
}

char* func_1055()
{
	return "FME_GH_HELP_HAT_IDLE";
}

char* func_1056()
{
	return "FME_GH_HELP_HAT_ABANDON";
}

char* func_1057()
{
	return "FME_GH_HELP_HAT_LOST";
}

void func_1058(int iParam0)
{
	if (Local_172.f_35 != iParam0)
	{
		aggregate_func_1312(func_599(iParam0), 1, 0);
		Local_172.f_35 = iParam0;
	}
}

void func_1059()
{
	if (Local_172.f_35 == 0 || Local_172.f_35 >= 5)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		aggregate_func_1312(func_599(Local_172.f_35), 1, 0);
	}
}

char* func_1215()
{
	return "FME_GH_SCORETIMER_YOU_GOT_HAT";
}

char* func_1216()
{
	return "FME_GH_SCORETIMER_HAT_DROPPED";
}

char* func_1217()
{
	return "FME_GH_SCORETIMER_ALLY_GOT_HAT";
}

char* func_1218()
{
	return "FME_GH_SCORETIMER_ENEMY_GOT_HAT";
}

void func_1219(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(12, 1, 0);
	if (!MISC::IS_STRING_NULL(sParam1))
	{
		sParam0 = MISC::_CREATE_VAR_STRING(10, sParam0, aggregate_func_1524(sParam1, joaat("COLOR_PURE_WHITE")));
	}
	Local_456.f_1290 = aggregate_func_3436(sParam0, joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
}

