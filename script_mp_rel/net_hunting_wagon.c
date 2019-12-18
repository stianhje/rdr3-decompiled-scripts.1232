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
	struct<8> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_1439

bool func_22(var uParam0, int* iParam1)
{
	uParam0->f_29 = 849;
	return true;
}

void func_23(var uParam0)
{
	if (aggregate_func_4260(&(Local_21.f_3)))
	{
		aggregate_func_4313(&(Local_21.f_3));
	}
	aggregate_func_2017(Local_21.f_2);
	aggregate_func_2878(&(Local_21.f_7), 1, 1);
}

bool func_38(var uParam0, int iParam1)
{
	func_77(uParam0);
	return false;
}

bool func_42(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	if (aggregate_func_4260(uParam0))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(Local_21.f_2))
		{
			Local_21.f_2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 0f, 0f, -7.0567f, 4.75f, 3.25f, 1.85f);
			if (VOLUME::_0x92A78D0BEDB332A3(Local_21.f_2))
			{
				PED::_0x7C00CFC48A782DC0(Local_21.f_2, uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
			}
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}
	if (aggregate_func_4260(uParam0))
	{
		if (!aggregate_func_4240(Local_21.f_1, 1))
		{
			PROPSET::_0x75F90E4051CC084C(uParam0->f_3, 295596934);
			aggregate_func_4241(&(Local_21.f_1), 1);
			bVar0 = false;
		}
		else if (!PROPSET::_0x7264F9CA87A9830B(uParam0->f_3) || !VEHICLE::_0xD798DF5DB67B1659(uParam0->f_3))
		{
			bVar0 = false;
		}
		if (!aggregate_func_4240(Local_21.f_1, 2))
		{
			PROPSET::_0xC0F0417A90402742(uParam0->f_3, 696075367);
			aggregate_func_4241(&(Local_21.f_1), 2);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!aggregate_func_636())
			{
				return false;
			}
			aggregate_func_2513(uParam0->f_3, 1, 1);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_3, false);
	}
	return bVar0;
}

bool func_48(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (aggregate_func_4260(uParam0))
	{
		switch (Local_21.f_6)
		{
			case 0:
				if (aggregate_func_2875(Local_21.f_7))
				{
					aggregate_func_2878(&(Local_21.f_7), 1, 1);
				}
				if (aggregate_func_4260(&(Local_21.f_3)))
				{
					aggregate_func_4313(&(Local_21.f_3));
				}
				if (func_100(uParam0))
				{
					if (func_101())
					{
						Local_21.f_7 = aggregate_func_1580("HWAGON_TITLE", joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), Local_21.f_2, 2, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
						Local_21.f_6 = 1;
					}
				}
				else if (aggregate_func_5062() && !aggregate_func_4337(0))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_21.f_2, true, 0))
					{
						if (aggregate_func_7105(-889932290))
						{
							if (func_106(-889932290))
							{
								aggregate_func_5263();
								aggregate_func_4428(0);
							}
						}
					}
				}
				break;
			case 1:
				if (!func_100(uParam0))
				{
					Local_21.f_6 = 0;
				}
				else
				{
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), true);
					if (aggregate_func_455(Local_21.f_7, 1))
					{
						aggregate_func_4895(1);
						aggregate_func_4428(-889932290);
						aggregate_func_4283(&(Local_21.f_3));
						aggregate_func_2878(&(Local_21.f_7), 1, 1);
						Local_21.f_6 = 2;
					}
				}
				break;
			case 2:
				if (aggregate_func_4866())
				{
					Local_21.f_6 = 0;
				}
				else if (aggregate_func_4628(&(Local_21.f_3), 3f))
				{
					Local_21.f_6 = 0;
				}
				break;
		}
		if (!aggregate_func_3014(854))
		{
			if (PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					bVar1 = aggregate_func_1522(iVar0);
					if (Global_1901929->f_637.f_32)
					{
					}
					else if (aggregate_func_4934())
					{
					}
					else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
					}
					else if (!func_115(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
					}
					else if (!func_116(bVar1))
					{
					}
					else if (aggregate_func_7081())
					{
						aggregate_func_4322(854, 0);
					}
				}
			}
		}
	}
	return false;
}

void func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!aggregate_func_4260(uParam0))
	{
		return;
	}
	if (aggregate_func_4240(Local_21.f_1, 16))
	{
		return;
	}
	iVar0 = PROPSET::_0xA079300AF757FB1A(uParam0->f_3);
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar0))
	{
	}
	else if (!PROPSET::_0xF42DB680A8B2A4D9(iVar0))
	{
	}
	else
	{
		iVar1 = ITEMSET::CREATE_ITEMSET(false);
		iVar2 = 0;
		iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, -2101616621, false, false);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar5))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar5);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
						iVar2++;
					}
				}
				iVar4++;
			}
			if (iVar2 == iVar3)
			{
				aggregate_func_4241(&(Local_21.f_1), 16);
			}
			ITEMSET::_0x20A4BF0E09BEE146(iVar1);
		}
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

void func_82(var uParam0)
{
	if (aggregate_func_4260(uParam0))
	{
		aggregate_func_4322(70, 1);
	}
}

bool func_100(var uParam0)
{
	int iVar0;

	if (!aggregate_func_4260(uParam0))
	{
		return false;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		return false;
	}
	if (aggregate_func_5062())
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(iVar0)))
	{
		return false;
	}
	if (!aggregate_func_2940(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return false;
	}
	return true;
}

bool func_101()
{
	HUD::_0xF66090013DE648D5("SATCH");
	if (!HUD::_0xD0976CC34002DB57("SATCH"))
	{
		return false;
	}
	return true;
}

bool func_106(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939221->f_10454[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_115(int iParam0)
{
	switch (iParam0)
	{
		case -1379917677:
		case joaat("a_c_alligator_03"):
		case -1262877910:
			return false;
		default:
			break;
	}
	return true;
}

bool func_116(bool bParam0)
{
	if (!aggregate_func_4246(func_170(bParam0)))
	{
		return false;
	}
	return aggregate_func_8395(bParam0) > 0;
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!aggregate_func_4260(uParam0))
	{
		aggregate_func_2695(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			aggregate_func_2695(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (aggregate_func_8993(uParam0->f_2))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, -272772079);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (aggregate_func_401(iVar1, 0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = MAP::_0x23F74C2FDA6E7C61(768962966, uParam0->f_3);
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar2))
	{
		bVar3 = aggregate_func_3842(iVar2);
		if (aggregate_func_2823(bVar3, 0))
		{
			MAP::_0x9CB1A1623062F402(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(bVar3)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate_func_3843(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate_func_3843(2));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_1, 580546400);
}

int func_170(bool bParam0)
{
	switch (bParam0)
	{
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return -1670497261;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return -280711232;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 596590814;
		case 143941906: /* GXTEntry: "Good Bear Pelt" */
			return 1824983669;
		case 957520252: /* GXTEntry: "Poor Bear Pelt" */
			return 928262209;
		case 1292673537: /* GXTEntry: "Perfect Bear Pelt" */
			return 541735817;
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 478256501;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return -232007656;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 19595959;
		case 1490032862: /* GXTEntry: "Good Black Bear Pelt" */
			return -101065075;
		case 1083865179: /* GXTEntry: "Poor Black Bear Pelt" */
			return 2105875134;
		case 663376218: /* GXTEntry: "Perfect Black Bear Pelt" */
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return -1818319295;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return -1597636811;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return -1985596288;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return -440737957;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return -1886002303;
		case -591117838: /* GXTEntry: "Good Bison Pelt" */
			return -901855085;
		case -1730060063: /* GXTEntry: "Poor Bison Pelt" */
			return 891487295;
		case -237756948: /* GXTEntry: "Perfect Bison Pelt" */
			return -1647829735;
		case -336086818: /* GXTEntry: "Good Bull Hide" */
			return 1698233050;
		case 9293261: /* GXTEntry: "Poor Bull Hide" */
			return -1939379896;
		case -53270317: /* GXTEntry: "Perfect Bull Hide" */
			return -1903865243;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 2116155169;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return -1373796272;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 834120727;
		case 1150594075: /* GXTEntry: "Good Cow Hide" */
			return -976686879;
		case 334093551: /* GXTEntry: "Poor Cow Hide" */
			return 622542686;
		case -845037222: /* GXTEntry: "Perfect Cow Hide" */
			return -96726590;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 493864472;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return -1364685383;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 501072671;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return -1832121185;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 332878276;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 226674781;
		case 1181652728: /* GXTEntry: "Good Elk Pelt" */
			return 945521246;
		case 2053771712: /* GXTEntry: "Poor Elk Pelt" */
			return 1013673835;
		case -1332163079: /* GXTEntry: "Perfect Elk Pelt" */
			return 1080677561;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 441281843;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 2100972340;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 731989586;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return -312223536;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 919524407;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 45874041;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return -1135509110;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return -1991809269;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return -882315424;
		case 1636891382: /* GXTEntry: "Good Moose Pelt" */
			return -1198430015;
		case 1868576868: /* GXTEntry: "Poor Moose Pelt" */
			return 610503310;
		case -217731719: /* GXTEntry: "Perfect Moose Pelt" */
			return -2104728156;
		case 1208128650: /* GXTEntry: "Good Ox Hide" */
			return -1848951328;
		case 462348928: /* GXTEntry: "Poor Ox Hide" */
			return -1522563214;
		case 659601266: /* GXTEntry: "Perfect Ox Hide" */
			return 701524769;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return -1125735460;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return -912340422;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return -339216640;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return -850815155;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 980503581;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 222730798;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return -615127816;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return -588738567;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return -1194176543;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return -963727698;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return -553292391;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 1964559810;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return -30369031;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 1200593517;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 1386213093;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return -1853692477;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return -265369183;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 1490994314;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -560512119;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -372283616;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return 643029198;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -507336551;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return -1633300610;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 312232747;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -369028960;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 56997271;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -562880581;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return 1914482046;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -398123506;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -154193613;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return 253511830;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 25196805;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -585570711;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 738250137;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -255175472;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 2029824605;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return 637459650;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -1763677083;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 105057785;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 2109109029;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 590763523;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return -1415366968;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 1525242558;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return -1053027662;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 170878033;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 1176700965;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 956769558;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -92340513;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1628899142;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1009793706;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 69303734;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 1934146069;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1251861193;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1201528492;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -584564578;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return 1257170615;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -443353688;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -726514003;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1178975683;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1735020859;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1066403056;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 379141135;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 178588058;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return 250119098;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return 1462096210;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 125705494;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return 1955497943;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -239746263;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return 483041697;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 2115836262;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 127221449;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return 1281075400;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -187017787;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return 2084769890;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -1860395611;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -925132283;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return 1221255602;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -1971512016;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1915869310;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return 73897638;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -520524691;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -677211393;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return 607200259;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -422975251;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -162653027;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1918690839;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 885447719;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 1359956914;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return -509393273;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1728485205;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 179793498;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return -1846596769;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1833664130;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return joaat("dlc_mp_arena_m_jbib_7_13");
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return 2094969043;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -1582650542;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 1799724359;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1598789118;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1824349223;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 696418077;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 1106697533;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1454259523;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1896235488;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 276180683;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -747881514;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return 1262126135;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return 2265787;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -2129601667;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 75684692;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1900817837;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return -1956299475;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 694522728;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 765710924;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return 893337488;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return 154935767;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return -568415076;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1274028936;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1140231877;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -27138549;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 659005977;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -771957300;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return 29804808;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return 1551511426;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 800713897;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 1612873893;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 1434794005;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -1919690611;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 1742727635;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 539212240;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1730963015;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 392259955;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1775800065;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1100310307;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 844987909;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -278500197;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 887422410;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1794448450;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return 2054761774;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1608758596;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1688649464;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -2008306533;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 1400293322;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return 995534052;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 1922992885;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 81605402;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return -286651444;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return -2064547947;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -176022019;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1232227412;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -893789138;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 2050798648;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return -798568163;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return 230404077;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return -1383606050;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return 1090514323;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1374677981;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -636161424;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1083700033;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 63328590;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -676594955;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return -654290128;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return -66423751;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -237024085;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 431553826;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -979079160;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1045329345;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return 908385665;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1675254736;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 564968345;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 1401257519;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return 1935981234;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 1930921435;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return 4633231;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -588047787;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -1503391831;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return -1409703989;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return 1754322973;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
			return -479401797;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return -1108373076;
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -255978368;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return 1771244699;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
			return 1837733705;
		case -1538397860: /* GXTEntry: "Muskie" */
			return -755340618;
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -274405663;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return 1107308482;
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -2034280224;
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 1147674954;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return 285459296;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1085630227;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -977624126;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -1327298596;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return -1809370620;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -925376594;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 571888586;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return 1427039907;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return 1870052953;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 1293957931;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return -1604751590;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return 1619108346;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 954753324;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return -530719231;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return 1790841517;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 1709510426;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return 1406497512;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -397897626;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -2079304485;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -1919132092;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return 1146883867;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return 213675443;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return -2050528754;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 953077128;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -1141453785;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 1397626289;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 1133589554;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1666627023;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1809574093;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1782999617;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -508623201;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return -1594035895;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 696987226;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1080524287;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return 1671304715;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 1998585657;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return 1020167279;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 623984063;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 2094082294;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return -1960159253;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return -1365028169;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return -1221735631;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -112981243;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -2139087610;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return -1602510454;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return -1297983889;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2092698587;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -996945065;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 2084956560;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return 702905543;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return -1581520016;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return 1086407100;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return 511869570;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -880049552;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1117023247;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -734978095;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return -1006346516;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1801089352;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return -1884753879;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return 1991763855;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1306257518;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return -1020683612;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 926836797;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return -1232342767;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -309925418;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return -123071275;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return -1558938686;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return 1091662795;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return -788362738;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return 1328165841;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return -800990234;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1483684624;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 905262788;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return 150247607;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1233359941;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -313281876;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return -4490683;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return 772815941;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return 829687693;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return -989662224;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 2085868277;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 54441032;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 173369425;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 1040980289;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return 914451661;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return -1351971822;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return 1314774140;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return -1359600522;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 766332028;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return 1221975438;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -1326003094;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return 1184491654;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 750218917;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return -1353658464;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 851638420;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 722571285;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 934062207;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return -1585718810;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1082360340;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 2061367228;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1962565360;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 262789343;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -633571126;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return 786387404;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -379489403;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return -764672668;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return -282159777;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return 468012182;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -617672215;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return -562468122;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return 1913327664;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -993590812;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -2137670338;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return 726300604;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return 415226344;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -299634134;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 1087304069;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -9870681;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return 1792621383;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return -199598455;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return -1941388598;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return 157600273;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 167746130;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return 2004430445;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 1574944766;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 1307900476;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1042168876;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return 425489026;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return 1517438769;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return -875336946;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -586130620;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -586318490;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return 208002432;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return -1210524242;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 245773581;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -2046702261;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return 44564804;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return 100739460;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2092384992;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 494095577;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return -384312098;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 1560218503;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return -1430069792;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return 1131911627;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return -64072061;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -202115307;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return -1102234278;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 224070180;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return 545086564;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1483573607;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1100372216;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 622704213;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return 1251284632;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return 1760006100;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return 1196392781;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return 1740443788;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 2126822237;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -78084331;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 327705288;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1627515010;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -1199577085;
		default:
			break;
	}
	return 0;
}

int func_222(bool bParam0)
{
	return func_270(bParam0, Global_1901929->f_637.f_30, Global_1901929->f_637.f_29);
}

int func_223(int iParam0, bool bParam1)
{
	return func_270(bParam1, ((*Global_1268274)[iParam0 /*20*/])->f_9, ((*Global_1268274)[iParam0 /*20*/])->f_8);
}

var func_270(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

