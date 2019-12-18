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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<206> Var0;
	int iVar208;
	float fVar209;
	bool bVar210;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_183 = 3;
	Var0.f_187 = 14;
	iVar208 = aggregate_func_5163();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::_0xE7DDA8BD3BCF751C(1);
	if (func_3(PLAYER::PLAYER_ID(), 1))
	{
		aggregate_func_4247(&(Var0.f_202), 16);
	}
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_1, true, true);
	}
	Var0.f_204 = TASK::_0x2D0571BB55879DA2(Global_35);
	aggregate_func_8735(&ScriptParam_0, &(Var0.f_1));
	if (Var0.f_1 == 0)
	{
		if (Var0.f_204 != -1370915905)
		{
			Var0.f_1 = -545779394;
		}
		else if (((*Global_1275475)[iVar208 /*86*/])->f_19.f_20 != 0)
		{
			Var0.f_1 = ((*Global_1275475)[iVar208 /*86*/])->f_19.f_20;
		}
		else if (((*Global_1275475)[iVar208 /*86*/])->f_19.f_19 == 0)
		{
			Var0.f_1 = -545779394;
		}
		else if (((*Global_1275475)[iVar208 /*86*/])->f_19.f_19 == 1269193435 || ((*Global_1275475)[iVar208 /*86*/])->f_19.f_19 == 1847740267)
		{
			Var0.f_1 = 1847740267;
		}
		else if (((*Global_1275475)[iVar208 /*86*/])->f_19.f_19 == -822124724 || ((*Global_1275475)[iVar208 /*86*/])->f_19.f_19 == 1532695640)
		{
			Var0.f_1 = 1532695640;
		}
		else
		{
			Var0.f_1 = -545779394;
		}
	}
	Var0.f_179 = func_6();
	func_7(&Var0);
	func_8(&Var0);
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		fVar209 = func_9(&Var0, ScriptParam_0.f_1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_DISCARD", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_PUT_AWAY", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHEERS_LO", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_DISCARD", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_PUTAWAY", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_DISCARD_PROMPT", true, 1);
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_PUTAWAY_PROMPT", true, 1);
		if ((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) >= 1 && NETWORK::_0xB07D3185E11657A5(ScriptParam_0.f_1)) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::OBJ_TO_NET(ScriptParam_0.f_1)))
		{
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::OBJ_TO_NET(ScriptParam_0.f_1));
		}
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_181)
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			aggregate_func_1349(&(Var0.f_1));
		}
		func_11();
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 0, func_12(&Var0), 0);
		PLAYER::_0xCD7CA3013FD12749(PLAYER::GET_PLAYER_INDEX(), HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_35));
		func_13(&Var0);
		func_14(&Var0);
		func_15(&Var0);
		switch (Var0)
		{
			case 0:
				if (aggregate_func_2823(Var0.f_1, 0))
				{
					aggregate_func_2449(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					aggregate_func_4252(&Var0, 3);
				}
				else
				{
					aggregate_func_4252(&Var0, 1);
				}
				break;
			case 1:
				if (aggregate_func_4240(Var0.f_202, 4) && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[7])
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				}
				func_20(&Var0);
				if ((TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[0] || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[7]) && aggregate_func_1549(&(Var0.f_183[0]), 1))
				{
					if (aggregate_func_4240(Var0.f_202, 4))
					{
						if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[12])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[12]), 1048576000 /* Float: 0.25f */);
						}
					}
					else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[2])
					{
						TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[2]), 1048576000 /* Float: 0.25f */);
					}
				}
				if (((TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[2] || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[12]) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 745451196)) && !aggregate_func_1549(&(Var0.f_183[0]), 1))
				{
					if (aggregate_func_4240(Var0.f_202, 4))
					{
						if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[8])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[8]), 1048576000 /* Float: 0.25f */);
						}
					}
					else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[3])
					{
						TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[3]), 1048576000 /* Float: 0.25f */);
					}
				}
				if ((TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[0] || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[7]) && aggregate_func_1549(&(Var0.f_183[1]), 1))
				{
					if (!aggregate_func_4260(&(Var0.f_205)))
					{
						aggregate_func_4293(&(Var0.f_205), 1);
					}
					if (aggregate_func_4240(Var0.f_202, 4))
					{
						if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[11])
						{
							TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[11]), 1048576000 /* Float: 0.25f */);
						}
					}
					else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[4])
					{
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[4]), 1048576000 /* Float: 0.25f */);
					}
				}
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[4] || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[11])
				{
					bVar210 = aggregate_func_1549(&(Var0.f_183[1]), 1);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1554542895) && !bVar210)
					{
						Var0.f_180 = 1;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1243345447))
					{
						Var0.f_180 = 2;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1349106419))
					{
						Var0.f_180 = 3;
					}
					if (Var0.f_180 == 2 && !bVar210)
					{
						if (aggregate_func_4240(Var0.f_202, 4))
						{
							if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[10])
							{
							}
							else
							{
								TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[10]), 1048576000 /* Float: 0.25f */);
							}
						}
						else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[6])
						{
							TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[6]), 1048576000 /* Float: 0.25f */);
						}
						Var0.f_180 = 0;
					}
					else if (Var0.f_180 == 1 && !bVar210)
					{
						if (aggregate_func_4240(Var0.f_202, 4))
						{
							if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[9])
							{
								TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[9]), 1048576000 /* Float: 0.25f */);
							}
						}
						else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[5])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[5]), 1048576000 /* Float: 0.25f */);
						}
						Var0.f_180 = 0;
					}
				}
				if (aggregate_func_2973(&(Var0.f_183[2]), 1))
				{
					aggregate_func_7525(&Var0);
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
					{
						OBJECT::_0xCAAF2BCCFEF37F77(ScriptParam_0.f_1, 80);
					}
					aggregate_func_4252(&Var0, 2);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					func_26(fVar209);
					aggregate_func_580(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					aggregate_func_7525(&Var0);
					func_28(&Var0, ScriptParam_0.f_1);
					aggregate_func_2651(Var0.f_1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
					{
						OBJECT::_0xCAAF2BCCFEF37F77(ScriptParam_0.f_1, 80);
					}
					aggregate_func_4252(&Var0, 2);
				}
				break;
			case 2:
				if (aggregate_func_4240(Var0.f_202, 4))
				{
					if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &Var0.f_187[7])
					{
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[13]), 1048576000 /* Float: 0.25f */);
						aggregate_func_4252(&Var0, 4);
					}
				}
				else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &Var0.f_187[0])
				{
					TASK::_0xB35370D5353995CB(Global_35, &(Var0.f_187[1]), 1048576000 /* Float: 0.25f */);
					aggregate_func_4252(&Var0, 4);
				}
				break;
			case 3:
				aggregate_func_580(&(Var0.f_1), 1);
				aggregate_func_2651(Var0.f_1, 0);
				aggregate_func_4252(&Var0, 4);
				break;
			case 4:
				aggregate_func_7525(&Var0);
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if ((Var0 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && Var0.f_181)
	{
		aggregate_func_580(&(Var0.f_1), 1);
		aggregate_func_2651(Var0.f_1, 0);
	}
}

void func_2(var uParam0)
{
	aggregate_func_7525(uParam0);
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return false;
		}
	}
	return aggregate_func_5163() == iParam0;
}

int func_6()
{
	switch (&Global_1938998)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (aggregate_func_2875(&(uParam0->f_183[iVar0])))
		{
			aggregate_func_2052(&(uParam0->f_183[iVar0]), func_32(iVar1), 0);
		}
		else
		{
			uParam0->f_183[iVar0] = aggregate_func_2385(func_32(iVar1), func_34(iVar1), 2, 0, 0, func_35(iVar1), 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2079(&(uParam0->f_183[iVar0]), HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_35), 0, 1);
		}
		iVar0++;
	}
	return 1;
}

void func_8(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174))
	{
		case 1627871020:
			switch (&Global_1938998)
			{
				case 0:
					uParam0->f_187[0] = 2099039304;
					uParam0->f_187[1] = -366893967;
					uParam0->f_187[2] = -965063707;
					uParam0->f_187[3] = -1902748769;
					uParam0->f_187[4] = -1632398441;
					uParam0->f_187[5] = -918201157;
					uParam0->f_187[6] = 466323971;
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[13] = 1642022542;
					uParam0->f_187[12] = 841023474;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[11] = 846008983;
					uParam0->f_187[9] = -1277599014;
					uParam0->f_187[10] = -1004140292;
					break;
				case 1:
					uParam0->f_187[0] = -207806059;
					uParam0->f_187[1] = -1703290751;
					uParam0->f_187[2] = -250923967;
					uParam0->f_187[3] = 462001116;
					uParam0->f_187[4] = -2084040005;
					uParam0->f_187[5] = -411267883;
					uParam0->f_187[6] = 1792747783;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1021227765;
					uParam0->f_187[12] = -553515202;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = -1159114752;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1297229685;
					break;
				case 2:
					uParam0->f_187[0] = 1306789391;
					uParam0->f_187[1] = 223258152;
					uParam0->f_187[2] = -1461841052;
					uParam0->f_187[3] = 971216744;
					uParam0->f_187[4] = -1491965375;
					uParam0->f_187[5] = 665331659;
					uParam0->f_187[6] = 1154356209;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1021227765;
					uParam0->f_187[12] = -553515202;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = -1159114752;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1297229685;
					break;
			}
			break;
		default:
			switch (&Global_1938998)
			{
				case 0:
					uParam0->f_187[0] = 2099039304;
					uParam0->f_187[1] = -1538022348;
					uParam0->f_187[2] = 1018151539;
					uParam0->f_187[3] = -1902748769;
					uParam0->f_187[4] = 1775995628;
					uParam0->f_187[5] = -918201157;
					uParam0->f_187[6] = -1083346834;
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[13] = -1613539009;
					uParam0->f_187[12] = -176911354;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[11] = -603565807;
					uParam0->f_187[9] = -1277599014;
					uParam0->f_187[10] = -1078116948;
					break;
				case 1:
					uParam0->f_187[0] = -207806059;
					uParam0->f_187[1] = -2123146421;
					uParam0->f_187[2] = 867868037;
					uParam0->f_187[3] = 462001116;
					uParam0->f_187[4] = 2043890671;
					uParam0->f_187[5] = -411267883;
					uParam0->f_187[6] = -419950106;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1247588270;
					uParam0->f_187[12] = -1080252797;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = 1272306923;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1757318252;
					break;
				case 2:
					uParam0->f_187[0] = 1306789391;
					uParam0->f_187[1] = 457217638;
					uParam0->f_187[2] = 1181480000;
					uParam0->f_187[3] = 971216744;
					uParam0->f_187[4] = -2065428388;
					uParam0->f_187[5] = 665331659;
					uParam0->f_187[6] = -1504019657;
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[13] = -1247588270;
					uParam0->f_187[12] = -1080252797;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[11] = 1272306923;
					uParam0->f_187[9] = -1762037660;
					uParam0->f_187[10] = -1757318252;
					break;
			}
			break;
	}
}

float func_9(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_5163();
	switch (ENTITY::GET_ENTITY_MODEL(iParam1))
	{
		case 1627871020:
			if (uParam0->f_204 == -1370915905)
			{
				if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 0)
				{
					switch (&Global_1938998)
					{
						case 0:
							return (0.125f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.0625f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				else
				{
					if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 827714260 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == -545779394)
					{
						switch (&Global_1938998)
						{
							case 0:
								return (0.125f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.0625f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == -822124724 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1532695640)
					{
						switch (&Global_1938998)
						{
							case 0:
								return (0.167f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.083f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1269193435 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1847740267)
					{
						switch (&Global_1938998)
						{
							case 0:
								return (0.25f / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (0.125f / uParam0->f_1.f_2);
							default:
								break;
						}
					}
				}
			}
			else
			{
				switch (&Global_1938998)
				{
					case 0:
						return (0.125f / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (0.0625f / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			break;
		default:
			if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 0)
			{
				switch (&Global_1938998)
				{
					case 0:
						return (0.125f / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (0.0625f / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			else
			{
				if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 827714260 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == -545779394)
				{
					switch (&Global_1938998)
					{
						case 0:
							return (0.125f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.0625f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == -822124724 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1532695640)
				{
					switch (&Global_1938998)
					{
						case 0:
							return (0.167f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.083f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if (((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1269193435 || ((*Global_1275475)[iVar0 /*86*/])->f_19.f_19 == 1847740267)
				{
					switch (&Global_1938998)
					{
						case 0:
							return (0.25f / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (0.125f / uParam0->f_1.f_2);
						default:
							break;
					}
				}
			}
			break;
	}
	return (0.125f / uParam0->f_1.f_2);
}

void func_11()
{
	aggregate_func_4241(&(Global_1070355->f_26843.f_1), 1073741824 /* Float: 2f */);
}

char* func_12(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1532695640:
			return "MOONSHINE_MEDIUM_GROUP_LABEL";
		case 1847740267:
			return "MOONSHINE_STRONG_GROUP_LABEL";
		case 1958345007:
			return "MSHINE_FLAVOR_AGARITA_SUNRISE";
		case 348064119:
			return "MSHINE_FLAVOR_APPLE_BERRY_CRUMB";
		case -818346432:
			return "MSHINE_FLAVOR_BERRY_COBBLER";
		case -610395813:
			return "MSHINE_FLAVOR_BERRY_MINT";
		case 2103594888:
			return "MSHINE_FLAVOR_EVERGREEN";
		case -624685730:
			return "MSHINE_FLAVOR_POISON_POPPYS";
		case 1739830455:
			return "MSHINE_FLAVOR_SPICED_ISLAND";
		case -1498871949:
			return "MSHINE_FLAVOR_TROPICAL_PUNCH";
		case 447784640:
			return "MSHINE_FLAVOR_WILD_CIDER";
		case -1283370018:
			return "MSHINE_FLAVOR_WILD_CREEK";
		default:
			break;
	}
	return "MOONSHINE_WEAK_GROUP_LABEL";
}

void func_13(var uParam0)
{
	if (!aggregate_func_4934() && uParam0->f_179 != 0)
	{
		uParam0->f_179 = 0;
		aggregate_func_4247(&(uParam0->f_202), 1);
	}
	if (aggregate_func_5101() && uParam0->f_179 != 1)
	{
		uParam0->f_179 = 1;
		aggregate_func_4247(&(uParam0->f_202), 1);
	}
	if (aggregate_func_5077() && uParam0->f_179 != 2)
	{
		uParam0->f_179 = 2;
		aggregate_func_4247(&(uParam0->f_202), 1);
		if (!aggregate_func_4240(uParam0->f_202, 8) && aggregate_func_4240(uParam0->f_202, 16))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-600094696, -1195129248))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(-600094696, -1195129248, 1);
			}
			aggregate_func_4247(&(uParam0->f_202), 8);
		}
	}
	if (aggregate_func_4240(uParam0->f_202, 1))
	{
		if (aggregate_func_4240(uParam0->f_202, 4) && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &uParam0->f_187[7])
		{
			aggregate_func_4247(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
			func_44(uParam0);
		}
		else if (!aggregate_func_4240(uParam0->f_202, 4) && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &uParam0->f_187[0])
		{
			aggregate_func_4247(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
		}
	}
}

void func_14(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!aggregate_func_4240(uParam0->f_202, 4))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && (((TASK::_0x2D0571BB55879DA2(Global_35) == -1177373461 || TASK::_0x2D0571BB55879DA2(Global_35) == -447259824) || TASK::_0x2D0571BB55879DA2(Global_35) == -2007463055) || TASK::_0x2D0571BB55879DA2(Global_35) == -2114469108))
		{
			aggregate_func_4247(&(uParam0->f_202), 4);
			func_44(uParam0);
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &uParam0->f_187[7])
			{
				TASK::_0xB35370D5353995CB(Global_35, &(uParam0->f_187[7]), 1048576000 /* Float: 0.25f */);
			}
		}
	}
	else if (aggregate_func_4240(uParam0->f_202, 4))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			aggregate_func_4247(&(uParam0->f_202), 4);
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &uParam0->f_187[0])
			{
				TASK::_0xB35370D5353995CB(Global_35, &(uParam0->f_187[0]), 1048576000 /* Float: 0.25f */);
			}
		}
	}
}

void func_15(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (aggregate_func_4240(uParam0->f_202, 4))
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != func_45())
		{
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == func_46())
			{
				uParam0->f_203 = -468547873;
				TASK::_0xB35370D5353995CB(Global_35, func_45(), 1048576000 /* Float: 0.25f */);
			}
		}
		if ((uParam0->f_179 == 1 || uParam0->f_179 == 2) && uParam0->f_203 != func_46())
		{
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == func_45())
			{
				uParam0->f_203 = -638132672;
				TASK::_0xB35370D5353995CB(Global_35, func_46(), 1048576000 /* Float: 0.25f */);
			}
		}
	}
	else
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != 2099039304)
		{
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 1306789391 || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -207806059)
			{
				uParam0->f_203 = 2099039304;
				TASK::_0xB35370D5353995CB(Global_35, 2099039304, 1048576000 /* Float: 0.25f */);
			}
		}
		if (uParam0->f_179 == 1 && uParam0->f_203 != -207806059)
		{
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 1306789391 || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 2099039304)
			{
				uParam0->f_203 = -207806059;
				TASK::_0xB35370D5353995CB(Global_35, -207806059, 1048576000 /* Float: 0.25f */);
			}
		}
		if (uParam0->f_179 == 2 && uParam0->f_203 != 1306789391)
		{
			if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == 2099039304 || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -207806059)
			{
				uParam0->f_203 = 1306789391;
				TASK::_0xB35370D5353995CB(Global_35, 1306789391, 1048576000 /* Float: 0.25f */);
			}
		}
	}
}

void func_20(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!aggregate_func_4240(uParam0->f_202, 32) && (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &uParam0->f_187[7] && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != &uParam0->f_187[0]))
	{
		aggregate_func_4247(&(uParam0->f_202), 32);
		func_47(uParam0, 0);
	}
	else if (aggregate_func_4240(uParam0->f_202, 32) && (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &uParam0->f_187[7] || TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == &uParam0->f_187[0]))
	{
		aggregate_func_4247(&(uParam0->f_202), 32);
		func_47(uParam0, 1);
	}
}

void func_26(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (aggregate_func_6977())
		{
			aggregate_func_7706(fParam0, 1);
		}
		Global_1938998->f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_28(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (aggregate_func_4240(uParam0->f_202, 16))
	{
		iVar0 = aggregate_func_5163();
		switch (ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			case 1627871020:
				if (uParam0->f_204 == -1370915905)
				{
					func_67(iVar0);
					if (((aggregate_func_4240(uParam0->f_202, 16) && STATS::CHAL_IS_GOAL_ACTIVE(-600094696, -1310410590)) && func_3(PLAYER::PLAYER_ID(), 1)) && ((*Global_1275475)[iVar0 /*86*/])->f_19.f_17 != 0)
					{
						uVar1 = ((*Global_1275475)[iVar0 /*86*/])->f_19.f_17;
						STATS::_0x86922D8C02FB7705(uVar1, 1f);
					}
				}
				else
				{
					aggregate_func_1962(aggregate_func_4257(-530255191, -1062788748), 1);
				}
				break;
			default:
				func_67(iVar0);
				break;
		}
	}
}

char* func_32(int iParam0)
{
	int iVar0;
	char cVar1[32];

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (&Global_1938998)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MOONSHINE_DRINK";
				case 1:
					return "MOONSHINE_CHEERS";
				case 2:
					return "MOONSHINE_DISCARD";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_DRUNK_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_DRUNK_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_DRUNK_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_WASTED_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_WASTED_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_WASTED_", 32);
					StringConCat(&cVar1, aggregate_func_2023(iVar0), 32);
					return aggregate_func_2094(cVar1);
			}
			break;
	}
	return "";
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("INPUT_CONTEXT_RT");
		case 1:
			return joaat("INPUT_CONTEXT_X");
		case 2:
			return joaat("INPUT_CONTEXT_B");
		default:
			break;
	}
	return 0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_44(var uParam0)
{
	switch (PED::_0x569F1E1237508DEB(Global_35))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			switch (&Global_1938998)
			{
				case 0:
					uParam0->f_187[7] = 10479869;
					uParam0->f_187[8] = -98905469;
					uParam0->f_187[9] = -269091281;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = 70200837;
						uParam0->f_187[12] = -1904446110;
						uParam0->f_187[11] = -1726785854;
						uParam0->f_187[10] = 1484522584;
					}
					else
					{
						uParam0->f_187[10] = -911864475;
						uParam0->f_187[13] = 1457577152;
						uParam0->f_187[12] = 928079862;
						uParam0->f_187[11] = 1067500305;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -948634471;
					uParam0->f_187[8] = -1130568975;
					uParam0->f_187[9] = 1326326265;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -931616856;
						uParam0->f_187[12] = -1171949494;
						uParam0->f_187[11] = 1741364796;
						uParam0->f_187[10] = -841143620;
					}
					else
					{
						uParam0->f_187[10] = -2145686352;
						uParam0->f_187[13] = 444699049;
						uParam0->f_187[12] = 1351299120;
						uParam0->f_187[11] = -408165963;
					}
					break;
			}
			break;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			switch (&Global_1938998)
			{
				case 0:
					uParam0->f_187[7] = -1842130926;
					uParam0->f_187[8] = -1060064137;
					uParam0->f_187[9] = 1439999116;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -1298041581;
						uParam0->f_187[12] = 525085366;
						uParam0->f_187[11] = -411204481;
						uParam0->f_187[10] = -30676417;
					}
					else
					{
						uParam0->f_187[10] = 1729142180;
						uParam0->f_187[13] = -306782526;
						uParam0->f_187[12] = 1733007823;
						uParam0->f_187[11] = 1122183656;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -214160871;
					uParam0->f_187[8] = 1956116017;
					uParam0->f_187[9] = 626222989;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -168572957;
						uParam0->f_187[12] = 55551996;
						uParam0->f_187[11] = 1242912044;
						uParam0->f_187[10] = 766843712;
					}
					else
					{
						uParam0->f_187[10] = 1192127603;
						uParam0->f_187[13] = -1395771465;
						uParam0->f_187[12] = 749044204;
						uParam0->f_187[11] = -504440314;
					}
					break;
			}
			break;
		default:
			switch (&Global_1938998)
			{
				case 0:
					uParam0->f_187[7] = -468547873;
					uParam0->f_187[8] = -1741992774;
					uParam0->f_187[9] = -1277599014;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = 1642022542;
						uParam0->f_187[12] = 841023474;
						uParam0->f_187[11] = 846008983;
						uParam0->f_187[10] = -1004140292;
					}
					else
					{
						uParam0->f_187[10] = -1078116948;
						uParam0->f_187[13] = -1613539009;
						uParam0->f_187[12] = -176911354;
						uParam0->f_187[11] = -603565807;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -638132672;
					uParam0->f_187[8] = 1201934695;
					uParam0->f_187[9] = -1762037660;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1627871020)
					{
						uParam0->f_187[13] = -1021227765;
						uParam0->f_187[12] = -553515202;
						uParam0->f_187[11] = -1159114752;
						uParam0->f_187[10] = -1297229685;
					}
					else
					{
						uParam0->f_187[10] = -1757318252;
						uParam0->f_187[13] = -1247588270;
						uParam0->f_187[12] = -1080252797;
						uParam0->f_187[11] = 1272306923;
					}
					break;
			}
			break;
	}
}

int func_45()
{
	switch (PED::_0x569F1E1237508DEB(Global_35))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			return 10479869;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			return -1842130926;
		default:
			break;
	}
	return -468547873;
}

int func_46()
{
	switch (PED::_0x569F1E1237508DEB(Global_35))
	{
		case -2017611976:
		case 1822674155:
		case 1933923503:
		case 2138559483:
			return -948634471;
		case -2082265241:
		case -1863878910:
		case -1419326836:
		case 173081288:
		case 306255907:
		case 661220981:
		case 1146879064:
		case 1209531989:
		case 1259156924:
		case 1441110512:
		case 1643780352:
		case 1951972797:
			return -214160871;
		default:
			break;
	}
	return -638132672;
}

void func_47(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((aggregate_func_2875(&(uParam0->f_183[iVar0])) && !aggregate_func_1549(&(uParam0->f_183[iVar0]), 1)) && !aggregate_func_2973(&(uParam0->f_183[iVar0]), 1))
		{
			aggregate_func_4583(&(uParam0->f_183[iVar0]), bParam1, 0, 1);
		}
		iVar0++;
	}
}

void func_67(int iParam0)
{
	if (((*Global_1275475)[iParam0 /*86*/])->f_19.f_19 == 1269193435 || ((*Global_1275475)[iParam0 /*86*/])->f_19.f_19 == 1847740267)
	{
		aggregate_func_1962(aggregate_func_4257(-530255191, -698869443), 1);
	}
	else if (((*Global_1275475)[iParam0 /*86*/])->f_19.f_19 == -822124724 || ((*Global_1275475)[iParam0 /*86*/])->f_19.f_19 == 1532695640)
	{
		aggregate_func_1962(aggregate_func_4257(-530255191, 479314079), 1);
	}
	else
	{
		aggregate_func_1962(aggregate_func_4257(-530255191, -1062788748), 1);
	}
}

