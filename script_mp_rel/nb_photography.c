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
	struct<59> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<31> Local_74[32];
	struct<521> Local_1067 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 6, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 255, 255, 255, 0, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = -1;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 255;
	var uLocal_1595 = -1;
	var uLocal_1596 = -1;
	var uLocal_1597 = 3;
	var uLocal_1598 = 1101004800;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 3;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 1;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = -1;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = -1;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 1;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = -1;
	var uLocal_1627 = 1101004800;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 3;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 1;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = -1;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = -1;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = -1;
	var uLocal_1656 = 1101004800;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 3;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 1;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = -1;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 1;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = -1;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 1;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = -1;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	float fLocal_1687 = 0f;
	float fLocal_1688 = 0f;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	char* sLocal_1693 = NULL;
	char* sLocal_1694 = NULL;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1687 = 1f;
	fLocal_1688 = 1f;
	sLocal_1693 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_1694 = "facials@gen_male@portrait";
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	aggregate_func_3052(ScriptParam_0);
	while (!aggregate_func_5139())
	{
		aggregate_func_2960();
		BUILTIN::WAIT(0);
	}
	aggregate_func_3053();
	aggregate_func_2819();
}

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4264();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 61, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_13), 61, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_74, 993, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_74[0 /*31*/]), 993, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_13.f_49.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	aggregate_func_6497(&(Local_1067.f_18.f_12));
	func_99();
	func_100();
	aggregate_func_7929(20636);
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_OREPHT", &(Local_1067.f_18.f_44)))
	{
	}
	else
	{
		aggregate_func_4896(134217728);
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 3;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_38()
{
	int iVar0;

	iVar0 = 5;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_2109())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_38[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_38[iVar1]));
				aggregate_func_2372(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_2109())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (aggregate_func_3541(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = aggregate_func_7927(aggregate_func_4270(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		aggregate_func_7928(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_69()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((aggregate_func_5162() && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0)) != PLAYER::PLAYER_PED_ID()) && !aggregate_func_4644(262144))
		{
			aggregate_func_8220(7, Local_1067.f_4);
		}
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (aggregate_func_4644(262144))
			{
				func_166(0);
			}
		}
	}
	func_167();
	func_168(1);
	func_169();
	func_170();
	func_171();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
	}
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			(Local_74[iVar1 /*31*/])->f_4.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	aggregate_func_7929(28488);
}

void func_96()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_189(&(Local_1067.f_377), &(Local_1067.f_377.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_49.f_5[iVar0] = 0;
			Local_13.f_49.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_74[iVar1 /*31*/])->f_10.f_13[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_99()
{
	switch (aggregate_func_4995())
	{
		case 0:
			aggregate_func_7088(0, -1964611878);
			func_199(0, -668350768, -1989345804);
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			break;
		case 1:
		case 2:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, 1708527016);
				func_199(0, -1128853525, 1691628739);
			}
			aggregate_func_7088(1, joaat("a_c_donkey_01"));
			break;
		case 3:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_bear_01"));
			aggregate_func_4896(4194304);
			break;
		case 4:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_buck_01"));
			aggregate_func_4896(8388608);
			break;
		case 5:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_cougar_01"));
			aggregate_func_4896(16777216);
			break;
		case 6:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_coyote_01"));
			aggregate_func_4896(33554432);
			break;
		case 7:
			if (func_201() == 2)
			{
				aggregate_func_7088(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				aggregate_func_7088(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_wolf"));
			aggregate_func_4896(67108864);
			break;
		case 8:
			aggregate_func_7088(0, 1708527016);
			func_199(0, -1128853525, 1691628739);
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			aggregate_func_7088(2, joaat("a_c_fishlargemouthbass_01_ms"));
			break;
		case 9:
		case 10:
		case 11:
			aggregate_func_7088(0, 1708527016);
			func_199(0, -1128853525, 1691628739);
			aggregate_func_7088(1, aggregate_func_872(997958153 /* GXTEntry: "Riding" */, 1));
			break;
		default:
			break;
	}
	switch (aggregate_func_5076())
	{
		case 0:
			aggregate_func_8217(0, 469.7219f, 59.7445f, 135.5631f, 76.14f, 1);
			aggregate_func_8217(1, 475.9219f, 54.46168f, 134.986f, 180f, 1);
			break;
		case 1:
			aggregate_func_8217(0, -409.2561f, 154.7292f, 41.8005f, 141.54f, 1);
			aggregate_func_8217(1, -405.0037f, 152.8974f, 41.46089f, -49.67f, 1);
			aggregate_func_8217(2, -416.5092f, 147.6119f, 40f, 0f, 1);
			break;
		case 2:
			aggregate_func_8217(0, -1928.554f, -1348.667f, 105.6326f, 18.99f, 1);
			aggregate_func_8217(1, -1935.187f, -1353.115f, 106.9843f, -51.4f, 1);
			if (aggregate_func_4644(4194304))
			{
				aggregate_func_8217(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (aggregate_func_4644(8388608))
			{
				aggregate_func_8217(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (aggregate_func_4644(16777216))
			{
				aggregate_func_8217(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (aggregate_func_4644(33554432))
			{
				aggregate_func_8217(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (aggregate_func_4644(67108864))
			{
				aggregate_func_8217(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			break;
		case 3:
			aggregate_func_8217(0, -2003.943f, -2158.135f, 54.2301f, -134.78f, 1);
			aggregate_func_8217(1, -2005.132f, -2146.552f, 56.1274f, -45.27f, 1);
			break;
		case 4:
			aggregate_func_8217(0, -1281.655f, 110.9998f, 70.78191f, -64.75f, 1);
			aggregate_func_8217(1, -1276.128f, 104.356f, 70.63606f, -91.52f, 1);
			break;
		case 5:
			aggregate_func_8217(0, -2350.861f, -359.485f, 143.7474f, 98.86f, 1);
			aggregate_func_8217(1, -2354.687f, -347.2756f, 144.6231f, 91.52f, 1);
			if (aggregate_func_4644(4194304))
			{
				aggregate_func_8217(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (aggregate_func_4644(8388608))
			{
				aggregate_func_8217(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (aggregate_func_4644(16777216))
			{
				aggregate_func_8217(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (aggregate_func_4644(33554432))
			{
				aggregate_func_8217(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (aggregate_func_4644(67108864))
			{
				aggregate_func_8217(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else
			{
				aggregate_func_8217(2, -2405.882f, -382.2583f, 133.5046f, 0f, 1);
			}
			break;
		case 6:
			aggregate_func_8217(0, -1736.757f, 306.2781f, 108.1355f, -140.26f, 1);
			aggregate_func_8217(1, -1729.253f, 303.9286f, 107.3634f, -145.75f, 1);
			if (aggregate_func_4644(4194304))
			{
				aggregate_func_8217(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (aggregate_func_4644(8388608))
			{
				aggregate_func_8217(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (aggregate_func_4644(16777216))
			{
				aggregate_func_8217(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (aggregate_func_4644(33554432))
			{
				aggregate_func_8217(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (aggregate_func_4644(67108864))
			{
				aggregate_func_8217(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			break;
		case 7:
			aggregate_func_8217(0, -4964.499f, -3399.889f, 7.97322f, -124.92f, 1);
			aggregate_func_8217(1, -4965.817f, -3411.683f, 8.05074f, -162.81f, 1);
			if (aggregate_func_4644(4194304))
			{
				aggregate_func_8217(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (aggregate_func_4644(8388608))
			{
				aggregate_func_8217(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (aggregate_func_4644(16777216))
			{
				aggregate_func_8217(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (aggregate_func_4644(33554432))
			{
				aggregate_func_8217(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (aggregate_func_4644(67108864))
			{
				aggregate_func_8217(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			break;
		case 8:
			aggregate_func_8217(0, -2192.805f, -2778.977f, 69.01174f, -158.91f, 1);
			aggregate_func_8217(1, -2199.156f, -2782.155f, 68.98679f, -162.81f, 1);
			break;
		case 9:
			aggregate_func_8217(0, -4603.166f, -2701.434f, -10.12116f, 3.38f, 1);
			aggregate_func_8217(1, -4595.557f, -2706.374f, -11.13519f, 5.26f, 1);
			if (aggregate_func_4644(4194304))
			{
				aggregate_func_8217(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (aggregate_func_4644(8388608))
			{
				aggregate_func_8217(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (aggregate_func_4644(16777216))
			{
				aggregate_func_8217(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (aggregate_func_4644(33554432))
			{
				aggregate_func_8217(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (aggregate_func_4644(67108864))
			{
				aggregate_func_8217(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			break;
		default:
			break;
	}
}

void func_100()
{
	switch (aggregate_func_4995())
	{
		case 8:
			aggregate_func_8904(0, joaat("w_melee_fishingpole02"));
			func_205(0, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			aggregate_func_8904(2, joaat("p_cs_rag01x"));
			func_205(2, 1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			aggregate_func_8904(1, 514240557);
			switch (aggregate_func_5076())
			{
				case 1:
					func_205(1, -12.7f, -0.05f, -0.35f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
				case 5:
					func_205(1, -42.54f, -16.39f, -2.75f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
				default:
					func_205(1, 0f, 1f, -1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
			}
			aggregate_func_8904(3, 391506844);
			func_205(3, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			aggregate_func_8904(4, -294392875);
			func_205(4, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
	}
}

bool func_124()
{
	if (func_218())
	{
		return true;
	}
	func_219();
	func_220();
	func_221();
	switch (Local_13.f_7)
	{
		case 0:
			func_222();
			break;
		case 1:
			func_223();
			break;
		case 2:
			func_224();
			break;
		case 3:
			func_225();
			break;
		case 4:
			func_226();
			break;
		case 5:
			func_227();
			break;
		case 6:
			func_228();
			break;
		case 7:
			func_229();
			break;
		case 8:
			func_230();
			break;
		case 9:
			func_231();
			break;
		case 10:
			func_232();
			break;
		case 11:
			func_233();
			break;
		case 12:
			func_234();
			break;
		case 13:
			func_235();
			break;
		case 14:
			func_236();
			break;
		case 15:
			func_237();
			break;
		case 16:
			func_238();
			break;
		case 17:
			func_239();
			break;
		case 18:
			func_240();
			break;
		case 19:
			func_241();
			break;
		case 20:
			func_242();
			break;
		case 21:
			func_243();
			break;
		case 22:
			func_244();
			break;
		case 25:
			func_245();
			break;
		case 23:
			func_246();
			break;
		case 24:
			func_247();
			break;
		case 26:
			func_248();
			break;
		case 27:
			func_249();
			break;
		case 28:
			func_250();
			break;
		case 29:
			func_251();
			break;
		case 30:
			func_252();
			break;
		case 31:
			func_253();
			break;
		case 32:
			func_254();
			break;
		case 33:
			func_255();
			break;
		case 34:
			func_256();
			break;
		case 35:
			func_257();
			break;
		case 36:
			func_258();
			break;
		case 37:
			func_259();
			break;
		case 38:
			func_260();
			break;
		case 39:
			func_261();
			break;
		case 40:
			func_262();
			break;
		case 41:
			func_263();
			break;
		case 42:
			aggregate_func_8928();
			break;
		case 43:
			func_265();
			break;
		case 44:
			func_266();
			break;
		case 45:
			func_267();
			break;
		case 47:
			func_268();
			break;
		case 48:
			func_269();
			break;
		case 49:
			func_270();
			break;
		case 50:
			func_271();
			break;
		case 51:
			func_272();
			break;
		case 52:
			func_273();
			break;
		case 53:
			func_274();
			break;
		case 54:
			func_275();
			break;
		case 55:
			func_276();
			break;
		case 56:
			func_277();
			break;
		case 57:
			func_278();
			break;
		case 58:
			func_279();
			break;
		case 59:
			func_280();
			break;
		case 60:
			func_281();
			break;
		case 61:
			aggregate_func_8928();
			break;
		case 62:
			func_283();
			break;
		case 63:
			func_284();
			break;
		case 64:
			func_285();
			break;
		case 65:
			func_286();
			break;
		case 66:
			func_287();
			break;
		case 67:
			func_288();
			break;
		case 68:
			func_289();
			break;
		case 69:
			func_290();
			break;
		case 70:
			aggregate_func_8928();
			break;
		case 71:
			func_292();
			break;
		case 72:
			func_293();
			break;
		case 73:
			func_294();
			break;
		case 74:
			func_295();
			break;
	}
	switch (Local_13.f_7.f_1)
	{
		case 0:
			func_296();
			break;
		case 1:
			func_297();
			break;
		case 2:
			func_298();
			break;
		case 3:
			func_299();
			break;
		case 4:
			func_300();
			break;
		case 5:
			func_301();
			break;
		case 6:
			aggregate_func_4238();
			break;
		case 7:
			func_303();
			break;
	}
	return false;
}

bool func_126()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || aggregate_func_2905(iVar0, 518218985)) || aggregate_func_2905(iVar0, 242628503))
	{
		return true;
	}
	return false;
}

bool func_132()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREPHT";
	sVar1 = "OREPAUD";
	switch (Local_1067.f_18.f_11)
	{
		case 0:
			Local_1067.f_18.f_11 = 1;
			break;
		case 1:
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar0);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
				{
					Local_1067.f_18.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_1067.f_18.f_11 = 2;
			}
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar1);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
				{
					Local_1067.f_18.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_1067.f_18.f_11 = 2;
			}
			break;
		case 2:
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				STREAMING::REQUEST_ANIM_DICT(func_311(iVar4));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_311(iVar4)))
				{
					return false;
				}
				else if (iVar4 == 11)
				{
					Local_1067.f_18.f_11 = 3;
				}
				iVar4++;
			}
			break;
		case 3:
			switch (aggregate_func_4995())
			{
				case 8:
					if (aggregate_func_264(func_312(0), &(Local_1067.f_18.f_244), &(Local_13.f_7.f_26), 64, func_313(0)))
					{
						Local_1067.f_18.f_11 = 6;
					}
					break;
				default:
					Local_1067.f_18.f_11 = 6;
					break;
			}
			break;
		case 5:
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = func_315(iVar2);
				if (iVar3 != 0)
				{
					if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 15, 0, 0))
					{
						return false;
					}
					if (!STREAMING::_0x9427C94D2E4094A4(iVar3, 0))
					{
						return false;
					}
				}
				iVar2++;
			}
			func_316();
			Local_1067.f_18.f_11 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		func_322(&iVar1, 0);
		func_323(iVar1);
		switch (aggregate_func_4995())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				PED::_0x5C3C55EAAD19915F(iVar1, "DEFAULT_SHOCKED");
				if (func_201() == 2)
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_MALE2", 0);
				}
				break;
			case 2:
			case 9:
				if (func_201() == 2)
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_revolver_cattleman"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_revolver_cattleman"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (func_201() == 2)
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
				}
				break;
			case 8:
				aggregate_func_648(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_26))
					{
						Local_1067.f_18.f_244 = NETWORK::_0xD7F6781A0ABAF6FB(Local_13.f_7.f_26);
						if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
						{
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_26))
				{
					func_325();
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1067.f_18.f_244, func_326(4), 0f, 0f, func_327(4), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_1067.f_18.f_244);
				}
				break;
			default:
				break;
		}
	}
	iVar2 = aggregate_func_7382(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
	{
		func_328(iVar2);
		aggregate_func_8917(2, 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			switch (aggregate_func_4995())
			{
				case 8:
					PED::_0xCE6B874286D640BB(iVar2, 2);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					PED::_0xCE6B874286D640BB(iVar2, 2);
					if (aggregate_func_4644(134217728))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_1067.f_18.f_44);
					}
					iVar0 = func_315(4);
					if (iVar0 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar2, iVar0, 0, 0, 0, -1082130432 /* Float: -1f */, 0);
					}
					break;
			}
		}
	}
	iVar3 = aggregate_func_7382(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		func_330(&iVar3, 0);
		func_331(1, 3f);
	}
}

void func_147()
{
	aggregate_func_4310(Local_13.f_7);
	aggregate_func_8922(Local_13.f_7.f_1);
	aggregate_func_2548();
	func_345();
	func_346();
	func_347();
	func_348(0, 0);
	func_349();
	func_350();
	func_351();
	switch (Local_1067.f_18)
	{
		case 0:
			aggregate_func_4238();
			break;
		case 1:
			func_353();
			break;
		case 2:
			func_354();
			break;
		case 3:
			func_355();
			break;
		case 4:
			func_356();
			break;
		case 5:
			func_357();
			break;
		case 6:
			func_358();
			break;
		case 7:
			func_359();
			break;
		case 8:
			aggregate_func_4983();
			break;
		case 9:
			func_361();
			break;
		case 10:
			func_362();
			break;
		case 11:
			func_363();
			break;
		case 12:
			func_364();
			break;
		case 13:
			func_365();
			break;
		case 14:
			func_366();
			break;
		case 15:
			func_367();
			break;
		case 16:
			func_368();
			break;
		case 17:
			func_369();
			break;
		case 18:
			func_370();
			break;
		case 19:
			func_371();
			break;
		case 20:
			func_372();
			break;
		case 21:
			func_373();
			break;
		case 22:
			aggregate_func_4238();
			break;
		case 25:
			func_375();
			break;
		case 23:
			func_376();
			break;
		case 24:
			func_377();
			break;
		case 26:
			func_378();
			break;
		case 27:
			func_379();
			break;
		case 28:
			func_380();
			break;
		case 29:
			func_381();
			break;
		case 30:
			func_382();
			break;
		case 31:
			aggregate_func_8228();
			break;
		case 32:
			func_384();
			break;
		case 33:
			func_385();
			break;
		case 35:
			func_386();
			break;
		case 34:
			func_387();
			break;
		case 36:
			func_388();
			break;
		case 37:
			aggregate_func_4238();
			break;
		case 38:
			aggregate_func_4238();
			break;
		case 39:
			func_391();
			break;
		case 40:
			func_392();
			break;
		case 41:
			func_393();
			break;
		case 42:
			func_394();
			break;
		case 43:
			func_395();
			break;
		case 44:
			func_396();
			break;
		case 45:
			func_397();
			break;
		case 47:
			func_398();
			break;
		case 48:
			func_399();
			break;
		case 49:
			func_400();
			break;
		case 50:
			func_401();
			break;
		case 51:
			func_402();
			break;
		case 52:
			func_403();
			break;
		case 53:
			func_404();
			break;
		case 54:
			aggregate_func_8228();
			break;
		case 55:
			aggregate_func_4580();
			break;
		case 56:
			aggregate_func_4238();
			break;
		case 57:
			func_408();
			break;
		case 58:
			aggregate_func_8128();
			break;
		case 59:
			func_410();
			break;
		case 60:
			aggregate_func_8228();
			break;
		case 61:
			aggregate_func_4238();
			break;
		case 62:
			aggregate_func_8228();
			break;
		case 63:
			func_414();
			break;
		case 64:
			aggregate_func_4238();
			break;
		case 65:
			func_416();
			break;
		case 66:
			func_417();
			break;
		case 67:
			func_418();
			break;
		case 68:
			func_419();
			break;
		case 69:
			func_420();
			break;
		case 70:
			aggregate_func_4264();
			break;
		case 71:
			func_422();
			break;
		case 72:
			func_423();
			break;
		case 73:
			func_424();
			break;
		case 74:
			func_425();
			break;
	}
	switch (Local_1067.f_18.f_1)
	{
		case 0:
			aggregate_func_4238();
			break;
		case 1:
			aggregate_func_4580();
			break;
		case 2:
			func_428();
			break;
		case 3:
			func_429();
			break;
		case 4:
			func_430();
			break;
		case 5:
			aggregate_func_4238();
			break;
		case 6:
			func_432();
			break;
		case 7:
			func_433();
			break;
	}
}

bool func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (!aggregate_func_3740(1073741824 /* Float: 2f */, 255))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0));
				iVar2 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
				iVar3 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
				if ((iVar1 == PLAYER::PLAYER_PED_ID() || (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar1 == iVar2)) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && iVar1 == iVar3))
				{
					if (!aggregate_func_4644(131072))
					{
						func_166(1);
					}
				}
				else if (!aggregate_func_4644(262144) && aggregate_func_5162())
				{
					aggregate_func_8220(7, Local_1067.f_4);
				}
				aggregate_func_2922(1073741824 /* Float: 2f */);
			}
		}
		else if (aggregate_func_5162())
		{
			aggregate_func_8220(7, Local_1067.f_4);
			aggregate_func_2922(1073741824 /* Float: 2f */);
		}
	}
	else if (aggregate_func_5162())
	{
		aggregate_func_8220(7, Local_1067.f_4);
		aggregate_func_2922(1073741824 /* Float: 2f */);
	}
	func_436();
	func_167();
	func_168(0);
	func_169();
	func_170();
	func_171();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1067.f_18.f_244);
		}
	}
	return true;
}

void func_166(bool bParam0)
{
	if (!aggregate_func_4644(131072))
	{
		if (!aggregate_func_4015(2, 255))
		{
			if (bParam0 || aggregate_func_4644(262144))
			{
				aggregate_func_1617(-1930919582, 0, 0);
				aggregate_func_4896(131072);
				aggregate_func_8220(7, Local_1067.f_4);
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4995() != 8)
	{
		return;
	}
	iVar0 = aggregate_func_7382(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_453(2)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), iVar0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
			{
				ENTITY::DETACH_ENTITY(iVar0, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
			}
		}
	}
	iVar1 = func_454(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_455(0)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), iVar1);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
			{
				ENTITY::DETACH_ENTITY(iVar1, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar1);
			}
		}
	}
	iVar2 = func_454(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_455(1)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(1), iVar2);
				}
			}
		}
	}
}

void func_168(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, false);
		if (aggregate_func_4644(8388608))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
			aggregate_func_3553(8388608);
		}
		if (aggregate_func_4644(4194304))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
			aggregate_func_3553(4194304);
		}
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar1 = aggregate_func_7382(1);
			iVar2 = 6;
			if (aggregate_func_4644(2))
			{
				iVar1 = PED::GET_MOUNT(iVar0);
				iVar2 = 3;
			}
			if (aggregate_func_2986(0))
			{
				iVar2 = 3;
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
			if (bParam0 || aggregate_func_1727(iVar0, 518218985, 1, 0))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_460(0, 1) < 70f)
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, aggregate_func_6604(0), iVar2, 0, -1082130432 /* Float: -1f */, -1, iVar1);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, aggregate_func_6604(0), iVar2, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
	}
	if (aggregate_func_4644(134217728))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1067.f_18.f_44);
		aggregate_func_4896(134217728);
	}
}

void func_169()
{
	int iVar0;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(iVar0, 0);
	}
}

void func_170()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 != 255)
	{
		if (aggregate_func_3740(8388608, iVar0))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 0, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID())), 1, 0);
			aggregate_func_2922(8388608);
		}
	}
}

void func_171()
{
	if (Local_1067.f_18.f_245 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_245);
		Local_1067.f_18.f_245 = 0;
	}
	if (Local_1067.f_18.f_246 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_246);
		Local_1067.f_18.f_246 = 0;
	}
	if (Local_1067.f_18.f_247 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_247);
		Local_1067.f_18.f_247 = 0;
	}
}

void func_189(var uParam0, var uParam1)
{
	aggregate_func_6497(uParam0);
	aggregate_func_6999(uParam0);
	aggregate_func_6687(uParam0, 1);
	aggregate_func_7024(uParam1);
	aggregate_func_6999(uParam1);
	aggregate_func_6965(uParam1);
	aggregate_func_6948(uParam1, 1);
	aggregate_func_6716(uParam1, 1);
	aggregate_func_4242(uParam0, 2000);
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	switch (aggregate_func_5076())
	{
		case 4:
		case 5:
		case 6:
			aggregate_func_7088(iParam0, iParam1);
			break;
		default:
			aggregate_func_7088(iParam0, iParam2);
			break;
	}
}

int func_201()
{
	switch (Local_1067.f_4)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return -1;
}

void func_205(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_478(0, iParam0, vParam1, fParam4, iParam5);
}

bool func_212(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*bParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (aggregate_func_5277(iVar2, 4))
		{
		}
		else if (!aggregate_func_257(iVar2, bParam0, &bVar1))
		{
			if (*bParam0)
			{
				return false;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return false;
			}
			return true;
		}
	}
}

bool func_214(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 5;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return false;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_1067.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iVar3 = aggregate_func_7195(iVar1, iVar2);
			if (iVar3 != 0 || aggregate_func_3563(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_1067.f_325.f_1[iVar1 /*50*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, aggregate_func_7196(iVar1, iVar2)) };
					if (aggregate_func_3563(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_1067.f_325.f_1[iVar1 /*50*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_13.f_42[iVar1 /*6*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
							{
								*bParam0 = 1;
								return false;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!aggregate_func_930((*Local_13.f_42[iVar1 /*6*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (aggregate_func_7197(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return false;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return false;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, aggregate_func_7198(iVar1, iVar2));
					MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar1 /*50*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return false;
	}
	return true;
}

bool func_218()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 75)
	{
		return true;
	}
	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_495())
		{
			iVar1 = aggregate_func_7382(2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_219()
{
	if (aggregate_func_4015(1024, 255))
	{
		return;
	}
	if (aggregate_func_7154())
	{
		switch (aggregate_func_4995())
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (((!aggregate_func_4644(64) && !aggregate_func_4644(512)) && aggregate_func_2986(2)) && !func_497())
				{
					aggregate_func_3553(512);
					func_499(23);
				}
				if (aggregate_func_2986(0))
				{
					aggregate_func_3614(1, 0, 0);
					func_501();
					aggregate_func_3553(1024);
					func_499(74);
				}
				break;
			case 2:
				if (aggregate_func_4644(2))
				{
					aggregate_func_3553(1024);
				}
				else
				{
					aggregate_func_3614(1, 0, 0);
					func_501();
					aggregate_func_3553(1024);
					func_499(74);
				}
				break;
			default:
				aggregate_func_3614(1, 0, 0);
				func_501();
				aggregate_func_3553(1024);
				func_499(74);
				break;
		}
	}
}

void func_220()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	iVar0 = aggregate_func_7382(0);
	fVar5 = 999f;
	fVar6 = 999f;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (aggregate_func_4015(2, iVar7))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
				fVar4 = aggregate_func_4006(0, iVar7, 1);
				if (fVar4 != 0f)
				{
					if (fVar4 < fVar5)
					{
						fVar5 = fVar4;
						Local_13.f_7.f_20 = iVar2;
					}
					if ((PED::IS_PED_ON_MOUNT(iVar3) && fVar4 < 50f) && (fVar4 < fVar6 || !NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_23)))
					{
						bVar8 = true;
						fVar6 = fVar4;
						Local_13.f_7.f_23 = iVar2;
					}
				}
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		Local_13.f_7.f_23 = 255;
	}
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar1 = 255;
	if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				iVar4 = joaat("weapon_unarmed");
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
				{
					if (iVar4 == joaat("weapon_kit_camera"))
					{
						aggregate_func_4896(16);
						return;
					}
				}
			}
		}
	}
	Local_13.f_7.f_21 = 255;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				iVar4 = joaat("weapon_unarmed");
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
				{
					if (iVar4 == joaat("weapon_kit_camera"))
					{
						iVar5 = aggregate_func_7382(0);
						fVar6 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, true, false), ENTITY::GET_ENTITY_COORDS(iVar2, true, false));
						if (fVar6 < 30f)
						{
							aggregate_func_4896(16);
							Local_13.f_7.f_21 = iVar1;
							return;
						}
					}
				}
			}
		}
		iVar3++;
	}
	aggregate_func_4896(16);
}

void func_222()
{
	if (aggregate_func_4271(0))
	{
		switch (aggregate_func_4995())
		{
			case 8:
				func_499(48);
				break;
			default:
				func_499(1);
				break;
		}
	}
}

void func_223()
{
	if (aggregate_func_5162())
	{
		func_499(2);
		return;
	}
	if (aggregate_func_4644(536870912))
	{
		func_499(71);
		return;
	}
	if (aggregate_func_2676(0, 15f, 0) < 1)
	{
		func_509(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
	else if (aggregate_func_2676(0, 35f, 0) < 2)
	{
		func_509(0, 65f, 10000, 0, 176, 177, 178, 179, -1, -1, 0, -1);
	}
}

void func_224()
{
	int iVar0;

	func_510();
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((aggregate_func_2905(iVar0, -875674219) || aggregate_func_2905(iVar0, -1162159953)) || !aggregate_func_2905(iVar0, 993674639))
	{
		func_499(3);
	}
}

void func_225()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_510();
	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(72);
		return;
	}
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((func_512(3) || func_512(5)) || func_512(4))
	{
		func_513(&(Local_13.f_7.f_12));
		switch (aggregate_func_4995())
		{
			case 1:
			case 2:
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				iVar2 = func_514(&uVar1, vVar3, 25f, 0, 1);
				if (iVar2 > 0)
				{
					func_499(5);
				}
				else
				{
					func_499(4);
				}
				break;
			default:
				func_499(5);
				break;
		}
	}
}

void func_226()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_510();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		iVar2 = func_514(&uVar1, vVar3, 25f, 0, 1);
		if (iVar2 > 0)
		{
			if (!aggregate_func_3027(1))
			{
				func_516(0, 0, 108, 0);
			}
		}
		else
		{
			func_509(0, 65f, 5000, 0, 104, 105, 106, 107, -1, -1, 1, -1);
		}
		if (func_512(107))
		{
			func_499(9);
		}
		else if (func_512(108))
		{
			func_499(5);
		}
	}
}

void func_227()
{
	int iVar0;
	int iVar1;

	func_510();
	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(72);
		return;
	}
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 10f)
			{
				func_513(&(Local_13.f_7.f_12));
				func_499(6);
			}
			else
			{
				func_509(0, 65f, 5000, 0, 3, 7, 8, -1, -1, -1, 0, -1);
			}
		}
	}
}

void func_228()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (func_512(9))
	{
		if (Local_13.f_58 != 1)
		{
			aggregate_func_4271(1);
		}
	}
	if (aggregate_func_4644(1))
	{
		if (aggregate_func_4271(0))
		{
			func_499(8);
		}
	}
	else if (aggregate_func_4644(2))
	{
		if (aggregate_func_4271(2))
		{
			iVar4 = aggregate_func_7382(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else
			{
				vVar0 = { Local_1067.f_15 };
			}
			iVar3 = func_517(vVar0, 25f);
			if (func_518(2) > 1)
			{
				func_499(9);
			}
			else if (iVar3 > 2)
			{
				aggregate_func_4896(256);
				func_499(7);
			}
			else if (iVar3 > 1)
			{
				aggregate_func_4896(128);
				func_499(7);
			}
			else
			{
				func_499(9);
			}
		}
	}
}

void func_229()
{
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (aggregate_func_4644(1))
	{
		if (aggregate_func_4271(0))
		{
			func_499(8);
		}
	}
	else if (aggregate_func_4644(4) || func_518(2) > 1)
	{
		if (aggregate_func_4271(0))
		{
			func_499(9);
		}
	}
}

void func_230()
{
	func_513(&(Local_13.f_7.f_12));
	if (func_518(2) > 0)
	{
		return;
	}
	switch (aggregate_func_4995())
	{
		case 0:
			func_499(10);
			break;
		case 1:
		case 2:
			func_499(31);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_499(10);
			break;
		case 9:
		case 10:
		case 11:
			func_499(62);
			break;
		default:
			func_499(31);
			break;
	}
}

void func_231()
{
	if (func_512(35))
	{
		switch (aggregate_func_4995())
		{
			case 0:
				func_499(21);
				break;
			case 1:
			case 2:
				func_499(41);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				func_499(21);
				break;
			case 9:
			case 10:
			case 11:
				func_499(68);
				break;
			default:
				func_499(21);
				break;
		}
	}
	func_516(0, 0, 35, 0);
}

void func_232()
{
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (func_512(34))
	{
		if (aggregate_func_4644(64))
		{
			func_499(11);
		}
	}
	else if (func_520(Local_13.f_7.f_10, 1500))
	{
		func_516(0, 0, 34, 0);
	}
}

void func_233()
{
	int iVar0;
	vector3 vVar1;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	switch (aggregate_func_4995())
	{
		case 0:
			vVar1 = { func_326(0) };
			break;
		default:
			vVar1 = { func_326(3) };
			break;
	}
	if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 2f)
	{
		if (aggregate_func_4271(3))
		{
			func_499(12);
		}
	}
}

void func_234()
{
	int iVar0;

	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (aggregate_func_5076() != 3)
	{
		aggregate_func_4271(3);
	}
	if (Local_13.f_7.f_18 > func_522())
	{
		aggregate_func_3553(64);
	}
	iVar0 = aggregate_func_4995();
	if (iVar0 == 0 && func_523())
	{
		func_499(19);
	}
	else if (aggregate_func_4644(64))
	{
		func_499(25);
	}
	else if (aggregate_func_4644(2048))
	{
		if (aggregate_func_4271(0))
		{
			aggregate_func_4896(1);
			func_499(13);
		}
	}
	else if (aggregate_func_4644(8))
	{
		if (aggregate_func_4271(4))
		{
			aggregate_func_4896(2);
			func_499(13);
		}
	}
	else if (aggregate_func_4644(16))
	{
		if (aggregate_func_4271(4))
		{
			Local_13.f_7.f_18++;
			aggregate_func_4896(4);
			func_499(13);
		}
	}
}

void func_235()
{
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (aggregate_func_4644(1))
	{
		aggregate_func_4896(1);
		func_499(18);
	}
	else if (aggregate_func_4644(2))
	{
		if (!aggregate_func_4644(8))
		{
			aggregate_func_4896(2);
			func_316();
			func_499(14);
		}
	}
	else if (aggregate_func_4644(4))
	{
		if (!aggregate_func_4644(16))
		{
			aggregate_func_4896(4);
			func_499(16);
		}
	}
}

void func_236()
{
	int iVar0;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_4644(268435456))
		{
			func_499(15);
		}
	}
}

void func_237()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_4644(268435456))
		{
			if (aggregate_func_4271(3))
			{
				iVar1 = func_525();
				func_526(iVar1);
				func_499(12);
			}
		}
	}
}

void func_238()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (aggregate_func_2905(iVar0, -2017877118))
	{
		vVar1 = { func_326(1) };
		vVar4 = { func_326(0) };
		if (func_495())
		{
			vVar1 = { aggregate_func_6604(2) };
			vVar4 = { func_326(3) };
		}
		Local_13.f_7.f_27 = { aggregate_func_2907(vVar1 - vVar4) + vVar1 };
		func_499(17);
	}
}

void func_239()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4995();
	iVar1 = aggregate_func_7382(0);
	if (iVar0 == 0 && func_523())
	{
		func_499(19);
	}
	else if (aggregate_func_4644(64))
	{
		func_499(25);
	}
	else if (!aggregate_func_2905(iVar1, -2017877118))
	{
		if (!aggregate_func_4644(536870912))
		{
			if (aggregate_func_4271(3))
			{
				func_499(12);
			}
		}
	}
}

void func_240()
{
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (aggregate_func_4644(8192))
	{
		func_499(20);
	}
}

void func_241()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!aggregate_func_2437(func_528(86)))
		{
			if (!func_512(87))
			{
				func_516(0, 0, 87, 0);
			}
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_499(22);
	}
}

void func_242()
{
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (aggregate_func_4644(536870912))
	{
		func_499(71);
		return;
	}
	if (aggregate_func_4644(16777216))
	{
		func_499(72);
	}
}

void func_243()
{
	int iVar0;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(22);
	}
}

void func_244()
{
	int iVar0;

	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!aggregate_func_2905(iVar0, -2017877118))
		{
			func_499(72);
		}
	}
}

void func_245()
{
	int iVar0;
	int iVar1;

	aggregate_func_4271(0);
	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		aggregate_func_3553(512);
		func_499(28);
		return;
	}
	else
	{
		if (aggregate_func_4644(32768) && func_460(0, 2) > func_530())
		{
			if (!func_512(97) && !func_512(98))
			{
				if (!aggregate_func_4644(131072))
				{
					aggregate_func_4896(131072);
					aggregate_func_3614(1, 0, 0);
				}
				func_509(0, 65f, 4000, 0, 97, 98, -1, -1, -1, -1, 1, -1);
			}
		}
		else
		{
			func_509(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
		}
		if (aggregate_func_2905(iVar0, 518218985))
		{
			func_499(30);
			return;
		}
	}
	iVar1 = aggregate_func_7382(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || aggregate_func_2905(iVar1, 518218985)) || func_460(0, 2) > 100f)
	{
		aggregate_func_3553(512);
		func_499(26);
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate_func_7382(2);
	iVar1 = aggregate_func_7382(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || aggregate_func_2905(iVar0, 518218985))
	{
		iVar2 = 1;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || aggregate_func_2905(iVar1, 2121492476))
	{
		iVar3 = 1;
	}
	func_531();
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		aggregate_func_3553(4096);
	}
	if (iVar2 && iVar3)
	{
		func_499(24);
	}
}

void func_247()
{
	if (func_512(99) || func_520(Local_13.f_7.f_10, 10000))
	{
		if (func_520(Local_13.f_7.f_10, 5000))
		{
			func_499(72);
		}
	}
	func_531();
}

void func_248()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(28);
	}
	else
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (func_520(Local_13.f_7.f_10, 2000))
		{
			if (fVar2 < 8f || func_520(Local_13.f_7.f_10, 10000))
			{
				func_499(27);
			}
		}
	}
}

void func_249()
{
	if (func_512(88))
	{
		func_499(72);
	}
	else
	{
		func_516(0, 0, 88, 0);
	}
}

void func_250()
{
	int iVar0;

	iVar0 = aggregate_func_7382(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || aggregate_func_2905(iVar0, 518218985)) || aggregate_func_2905(iVar0, 1120685857))
	{
		func_499(29);
	}
}

void func_251()
{
	int iVar0;

	iVar0 = aggregate_func_7382(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || aggregate_func_2676(2, 150f, 0) < 1)
	{
		func_499(75);
	}
}

void func_252()
{
	aggregate_func_4271(0);
	if (func_460(0, 2) < func_530() || !aggregate_func_4644(32768))
	{
		func_509(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
	}
}

void func_253()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 34, 0);
		}
	}
	if (func_512(34) && aggregate_func_4644(64))
	{
		func_499(32);
	}
}

void func_254()
{
	int iVar0;

	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_499(33);
	}
	if (aggregate_func_4644(1))
	{
	}
	else
	{
		func_499(33);
	}
}

void func_255()
{
	int iVar0;

	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_499(34);
		return;
	}
	if (aggregate_func_4644(1))
	{
		func_499(32);
		return;
	}
	if (aggregate_func_2905(iVar0, 1868526510))
	{
		func_499(34);
	}
}

void func_256()
{
	int iVar0;

	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (aggregate_func_4644(1))
	{
		func_499(32);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar0, true))
		{
			switch (aggregate_func_4995())
			{
				case 1:
					func_513(&(Local_13.f_7.f_12));
					func_499(35);
					break;
				case 2:
					func_499(43);
					break;
			}
			return;
		}
	}
}

void func_257()
{
	int iVar0;

	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (aggregate_func_4644(1))
	{
		func_499(32);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (aggregate_func_4644(2048))
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					func_499(36);
				}
				else
				{
					func_499(38);
				}
				return;
			}
		}
		else
		{
			func_499(32);
			return;
		}
	}
}

void func_258()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(37);
		}
	}
}

void func_259()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(38);
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) || PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true)) || ((!aggregate_func_927(Local_1067.f_18.f_154, 1041577989) && !PED::IS_PED_ON_MOUNT(iVar0)) && func_520(Local_13.f_7.f_10, 5000)))
	{
		func_499(38);
		return;
	}
	if (func_520(Local_13.f_7.f_10, 10000))
	{
		func_499(38);
	}
}

void func_260()
{
	aggregate_func_4896(2048);
	func_499(39);
}

void func_261()
{
	if (aggregate_func_4644(536870912))
	{
		func_499(71);
		return;
	}
	if (aggregate_func_4644(16777216))
	{
		func_499(40);
	}
}

void func_262()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(72);
		}
	}
}

void func_263()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(42);
	}
}

void func_265()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_2905(iVar0, 518218985))
		{
			func_499(44);
		}
	}
}

void func_266()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(45);
		}
	}
}

void func_267()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_2905(iVar0, 518218985))
		{
			func_499(47);
		}
	}
}

void func_268()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if ((func_533(0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(75);
		return;
	}
}

void func_269()
{
	if (aggregate_func_5162())
	{
		func_499(49);
	}
}

void func_270()
{
	if (aggregate_func_4644(262144))
	{
		func_499(50);
	}
}

void func_271()
{
	if (aggregate_func_4644(524288))
	{
		func_499(51);
	}
}

void func_272()
{
	if (func_535(1))
	{
		func_499(52);
	}
}

void func_273()
{
	if (aggregate_func_4644(65536) && aggregate_func_4644(1048576))
	{
		func_499(53);
	}
	else if (aggregate_func_4644(131072))
	{
		func_499(58);
	}
}

void func_274()
{
	if (func_511())
	{
		if (aggregate_func_4271(0))
		{
			aggregate_func_4896(512);
			func_499(58);
			return;
		}
	}
	if (func_512(9))
	{
		if (Local_13.f_58 != 1)
		{
			aggregate_func_4271(1);
		}
	}
	if (aggregate_func_4644(1))
	{
		if (aggregate_func_4271(0))
		{
			func_499(54);
		}
	}
	else if (aggregate_func_4644(2))
	{
		if (aggregate_func_4271(0))
		{
			func_499(55);
		}
	}
	else if (aggregate_func_4644(131072))
	{
		func_499(58);
	}
}

void func_275()
{
	func_513(&(Local_13.f_7.f_12));
	if (aggregate_func_4644(64))
	{
		func_499(56);
	}
}

void func_276()
{
	func_499(58);
}

void func_277()
{
	func_499(57);
}

void func_278()
{
	if (func_511())
	{
		if (aggregate_func_4271(0))
		{
			aggregate_func_4896(512);
			func_499(58);
			return;
		}
	}
	if (aggregate_func_4644(2048))
	{
		func_499(58);
	}
}

void func_279()
{
	if (func_535(3))
	{
		func_499(59);
	}
}

void func_280()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_4644(2048))
	{
		iVar0 = func_536();
		if (!func_512(iVar0))
		{
			if (!aggregate_func_3027(1))
			{
				func_516(0, 4, iVar0, 0);
			}
		}
	}
	else if (aggregate_func_4644(2))
	{
		if (!func_512(35))
		{
			if (!aggregate_func_3027(1))
			{
				func_516(0, 0, 35, 0);
			}
		}
	}
	iVar1 = aggregate_func_7382(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || !func_452())
	{
		aggregate_func_4896(1024);
		if (aggregate_func_4644(512))
		{
			func_499(71);
		}
		else if (func_497())
		{
			func_499(60);
		}
		else
		{
			func_499(61);
		}
	}
}

void func_281()
{
	if (aggregate_func_4644(536870912))
	{
		func_499(71);
		return;
	}
	if (aggregate_func_4644(16777216))
	{
		func_499(61);
	}
}

void func_283()
{
	if (!func_512(34))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 34, 0);
		}
	}
	if (func_512(34) && aggregate_func_4644(64))
	{
		func_499(63);
	}
}

void func_284()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			switch (aggregate_func_4995())
			{
				case 9:
					if (!func_512(131))
					{
						func_516(0, 0, 131, 0);
					}
					break;
				case 10:
					if (!func_512(133))
					{
						func_516(0, 0, 133, 0);
					}
					break;
				case 11:
					if (!func_512(135))
					{
						func_516(0, 0, 135, 0);
					}
					break;
			}
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_326(5)) < 5f && ((func_512(131) || func_512(133)) || func_512(135)))
		{
			iVar1 = aggregate_func_4995();
			switch (iVar1)
			{
				case 10:
					aggregate_func_4896(4096);
					break;
				case 11:
					aggregate_func_4896(8192);
					break;
			}
			func_499(64);
		}
	}
}

void func_285()
{
	func_499(65);
}

void func_286()
{
	if (func_511())
	{
		aggregate_func_4896(512);
		func_499(71);
		return;
	}
	if (aggregate_func_4644(2048))
	{
		func_499(66);
	}
}

void func_287()
{
	if (func_497())
	{
		aggregate_func_4896(4096);
		if (aggregate_func_4995() == 11)
		{
			func_499(67);
		}
		else
		{
			func_499(69);
		}
	}
}

void func_288()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !PED::_0x9682F850056C9ADE(iVar0)) && !PED::_0x3AA24CCC0D451379(iVar0))
	{
		aggregate_func_4896(8192);
		aggregate_func_4896(16384);
		func_499(69);
	}
	if (func_512(173))
	{
		aggregate_func_4896(8192);
	}
}

void func_289()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(70);
	}
}

void func_290()
{
	if (aggregate_func_4644(536870912))
	{
		func_499(71);
		return;
	}
	if (aggregate_func_4644(16777216))
	{
		func_499(70);
	}
}

void func_292()
{
	if (Local_13.f_58 != 0)
	{
		aggregate_func_4271(0);
	}
	if (((func_512(72) || func_512(73)) || func_512(174)) || func_512(175))
	{
		func_499(72);
	}
}

void func_293()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_58 != 5)
	{
		aggregate_func_4271(5);
	}
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (func_460(0, 1) > 70f)
	{
		aggregate_func_4896(-2147483648);
	}
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || (PED::IS_PED_ON_MOUNT(iVar0) && PED::GET_MOUNT(iVar0) == iVar1)) || aggregate_func_4644(-2147483648))
		{
			func_499(73);
		}
	}
}

void func_294()
{
	int iVar0;

	if (Local_13.f_58 != 5)
	{
		aggregate_func_4271(5);
	}
	if (aggregate_func_4644(64))
	{
		func_499(25);
		return;
	}
	if (func_533(0))
	{
		func_499(75);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_ON_MOUNT(iVar0)) && !aggregate_func_4644(-2147483648))
	{
		func_499(72);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !aggregate_func_2986(0))
	{
		if (func_537(10f, 128, 0))
		{
			func_509(0, 10f, 10000, 0, 101, 102, 103, -1, -1, -1, 0, -1);
		}
		else if (func_538(10f, 2048, 4096))
		{
			if (aggregate_func_4644(512) || aggregate_func_4644(1024))
			{
				func_509(0, 10f, 10000, 0, 25, 26, 27, -1, -1, -1, 0, -1);
			}
			else if (aggregate_func_4644(256))
			{
				func_509(0, 10f, 10000, 0, 28, 29, 30, -1, -1, -1, 0, -1);
			}
		}
		else if (func_538(10f, 8192, 0) || func_538(10f, 128, 0))
		{
			func_509(0, 10f, 10000, 0, 31, 32, 33, -1, -1, -1, 0, -1);
		}
	}
}

void func_295()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Local_13.f_58 != 5)
	{
		aggregate_func_4271(5);
	}
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_499(75);
	}
	else
	{
		if (func_533(0))
		{
			func_499(75);
			return;
		}
		bVar2 = true;
		if (func_512(79))
		{
			bVar2 = false;
		}
		if (PED::_0x3AA24CCC0D451379(iVar0) || PED::_0x9682F850056C9ADE(iVar0))
		{
			func_509(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, bVar2, -1);
		}
		else if (func_512(79) && !func_512(82))
		{
			func_516(0, 3, 82, 0);
		}
		else if (aggregate_func_4644(1048576))
		{
			func_509(0, 65f, 4000, 3, 77, 74, 75, 76, -1, -1, 1, -1);
		}
		else
		{
			func_509(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, bVar2, -1);
		}
	}
}

void func_296()
{
	if (aggregate_func_4644(2048))
	{
		switch (aggregate_func_4995())
		{
			case 1:
				if (aggregate_func_4644(2048))
				{
					func_539(1);
				}
				break;
			case 8:
				if (aggregate_func_4644(1024))
				{
					func_539(1);
				}
				break;
			case 11:
				if (aggregate_func_4644(16384))
				{
					func_539(1);
				}
				break;
			default:
				func_539(1);
				break;
		}
	}
}

void func_297()
{
	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (aggregate_func_4644(64) || aggregate_func_2986(0))
	{
		func_539(6);
		return;
	}
	if (func_520(Local_13.f_7.f_10, 1000))
	{
		func_539(2);
	}
}

void func_298()
{
	int iVar0;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (aggregate_func_4644(64) || aggregate_func_2986(0))
	{
		func_539(6);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0) || aggregate_func_2905(iVar0, 501393341))
		{
			func_539(3);
		}
	}
}

void func_299()
{
	int iVar0;
	int iVar1;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (aggregate_func_4644(64) || aggregate_func_2986(0))
	{
		func_539(6);
		return;
	}
	iVar0 = func_536();
	if (!func_512(iVar0))
	{
		if (!aggregate_func_3027(1))
		{
			func_516(0, 4, iVar0, 0);
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
	if (aggregate_func_702(0, 2.5f, iVar1, 0))
	{
		aggregate_func_4896(262144);
		func_539(4);
	}
	else if (!aggregate_func_702(0, 30f, iVar1, 0))
	{
		func_539(6);
	}
}

void func_300()
{
	if (!func_540())
	{
		func_539(6);
		return;
	}
	if (aggregate_func_4644(64) || aggregate_func_2986(0))
	{
		func_539(6);
		return;
	}
	if (func_520(Local_13.f_7.f_13, 9000))
	{
		func_539(7);
		return;
	}
	if (!func_512(71))
	{
		if (!aggregate_func_3027(1))
		{
			func_516(0, 4, 71, 0);
		}
	}
	if (func_512(71) && aggregate_func_4644(4194304))
	{
		if (func_520(Local_13.f_7.f_13, 6000))
		{
			aggregate_func_4896(262144);
			func_539(5);
		}
	}
}

void func_301()
{
	int iVar0;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(7);
		return;
	}
	if (aggregate_func_4644(64) || aggregate_func_2986(0))
	{
		func_539(6);
		return;
	}
	if (!aggregate_func_3027(1))
	{
		func_516(0, 4, func_542(), 0);
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!aggregate_func_927(iVar0, -1162159953) || ENTITY::_0x627520389E288A73(iVar0, func_311(7), func_543(7)) > 0.9f)
		{
			func_539(7);
		}
	}
}

void func_303()
{
	aggregate_func_2922(16777216);
}

void func_309(int iParam0)
{
	struct<6> Var0;
	int iVar31;
	int iVar32;
	var uVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar32, true))
	{
		return;
	}
	uVar33 = Var0.f_5;
}

void func_310(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 1387172233)
	{
		return;
	}
	iVar10 = vVar0.x;
	iVar11 = iVar10;
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	if (iVar13 != aggregate_func_7382(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			aggregate_func_2922(134217728);
			break;
		default:
			return;
	}
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_loco_m@generic@reaction@avoid@unarmed@soft@walk_backwards";
		case 1:
			return "script_re@photography";
		case 2:
			return "script_re@photography";
		case 3:
			return "script_re@photography";
		case 4:
			return "script_re@photography";
		case 5:
			return "script_re@photography";
		case 6:
			return "script_re@photography";
		case 7:
			return "script_mp@common@handovers@satchel";
		case 8:
			return "script_mp@common@handovers@satchel";
		case 9:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 10:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 11:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		default:
			break;
	}
	return "";
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@wilderness@photography@fishing@fishing";
		default:
			break;
	}
	return "script@beat@wilderness@photography@fishing@fishing";
}

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_INITIAL";
		case 1:
			return "PBL_CATCH";
		case 2:
			return "PBL_IDLE";
		case 3:
			return "PBL_KEEP";
		default:
			break;
	}
	return "";
}

int func_315(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				case 1:
					return 2087366558;
				case 2:
					return 1904532698;
				case 3:
					return 1446817251;
				default:
					break;
			}
			break;
		case 3:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_316()
{
	Local_13.f_7.f_19++;
	if (Local_13.f_7.f_19 < 1 || Local_13.f_7.f_19 > 3)
	{
		Local_13.f_7.f_19 = 1;
	}
}

bool func_317()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_1067.f_271.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate_func_4849(iVar0);
			if (iVar2 == 0)
			{
				Jump @132; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1067.f_271.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1067.f_271.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @132; //curOff = 112
				}
				else
				{
					MISC::SET_BIT(&(Local_1067.f_271.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_318()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = aggregate_func_7195(iVar0, iVar1);
				if (aggregate_func_3563(iVar1))
				{
					if (((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @336; //curOff = 244
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_1067.f_325.f_1[iVar0 /*50*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_1067.f_325.f_1[iVar0 /*50*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @336; //curOff = 310
					}
					else
					{
						MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

void func_320()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		aggregate_func_325(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
				(Local_1067.f_325.f_1[iVar1 /*50*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != aggregate_func_7195(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_322(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_549(&(Local_1067.f_377), *iParam0, iParam1);
	}
}

void func_323(int iParam0)
{
	if (Local_1067.f_18.f_245 == 0)
	{
		Local_1067.f_18.f_245 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_550(), iParam0, -1f, 20f, 30f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
	}
}

void func_325()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(0), aggregate_func_7382(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), aggregate_func_7382(2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), func_454(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(1), func_454(1), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(2), func_454(2), 0);
}

Vector3 func_326(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 463.0012f, 62.19994f, 133.9577f;
				case 1:
					return 459.5367f, 63.82849f, 133.9809f;
				case 6:
					return 473.8049f, 58.08183f, 134.8966f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 4:
					return -413.7405f, 160.7715f, 40.60635f;
				case 6:
					return -405.5906f, 156.8669f, 42.05116f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -1930.864f, -1335.484f, 106.3758f;
				case 6:
					return -1928.29f, -1351.451f, 105.5744f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -2008.653f, -2164.204f, 53.22349f;
				case 1:
					return -2008.814f, -2169.677f, 52.54388f;
				case 6:
					return -2004.192f, -2158.109f, 54.32602f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1264.347f, 114.8426f, 70.64063f;
				case 1:
					return -1257.814f, 116.7969f, 70.42671f;
				case 6:
					return -1284.743f, 110.389f, 70.77811f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -2360.554f, -362.1568f, 144.5925f;
				case 4:
					return -2383.904f, -370.4672f, 141.1333f;
				case 6:
					return -2347.193f, -359.7904f, 143.6934f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -1732.791f, 300.1196f, 107.8627f;
				case 6:
					return -1737.243f, 310.5743f, 108.0522f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return -4956.618f, -3405.884f, 8.00939f;
				case 6:
					return -4966.197f, -3394.001f, 7.7957f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -2187.949f, -2790.927f, 68.51616f;
				case 1:
					return -2182.352f, -2792.112f, 67.62013f;
				case 6:
					return -2193.045f, -2774.715f, 69.19832f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return -4602.944f, -2692.327f, -7.3729f;
				case 6:
					return -4606.675f, -2703.876f, -10.85025f;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 2:
			return aggregate_func_6604(0);
		case 5:
			return aggregate_func_6604(0);
		default:
			break;
	}
	return aggregate_func_6604(0);
}

float func_327(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -108.36f;
				case 2:
					return -108.36f;
				case 5:
					return -108.36f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 44.46f;
				case 5:
					return 44.46f;
				case 4:
					return 145.54f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -38.13f;
				case 2:
					return -157.37f;
				case 5:
					return -157.37f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.14f;
				case 2:
					return -63.55f;
				case 5:
					return -63.55f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 105.07f;
				case 2:
					return 91.77f;
				case 5:
					return 105.07f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -80.16f;
				case 2:
					return -92.87f;
				case 5:
					return -92.87f;
				case 4:
					return 117.75f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -50.3f;
				case 2:
					return 119.22f;
				case 5:
					return 119.22f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return 88.08f;
				case 2:
					return -2.53f;
				case 5:
					return -2.53f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 75.17f;
				case 2:
					return 105.53f;
				case 5:
					return 75.17f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return 174.62f;
				case 2:
					return 174.62f;
				case 5:
					return 174.62f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_328(int iParam0)
{
	if (Local_1067.f_18.f_246 == 0)
	{
		Local_1067.f_18.f_246 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_552(), iParam0, -1f, 25f, 35f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
	}
}

void func_330(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_553(&(Local_1067.f_377), *iParam0, iParam1);
	}
}

void func_331(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_1067.f_520.f_10[iParam0 /*29*/] = fParam1;
	}
}

void func_337()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1067.f_271.f_41 >= 3)
		{
			Local_1067.f_271.f_41 = 0;
		}
		iVar0 = Local_1067.f_271.f_41;
		Local_1067.f_271.f_41++;
		iVar7 = aggregate_func_4270(iVar0);
		iVar1 = &Local_1067.f_271.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate_func_5277(iVar7, 4))
		{
			aggregate_func_325(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_74[iVar3 /*31*/])->f_4.f_2[iVar0] > -1f)
			{
				(Local_74[iVar3 /*31*/])->f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1067.f_271.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1067.f_271.f_42, iVar0))
		{
			if (bVar4 || !aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_74[iVar3 /*31*/])->f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_74[iVar3 /*31*/])->f_4.f_1), iVar0);
				}
				aggregate_func_4283(Local_1067.f_271.f_43[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_74[iVar3 /*31*/])->f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate_func_4260(Local_1067.f_271.f_43[iVar0 /*3*/]) || aggregate_func_4628(Local_1067.f_271.f_43[iVar0 /*3*/], 0.5f))))
			{
				aggregate_func_4313(Local_1067.f_271.f_43[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_74[iVar3 /*31*/])->f_4.f_1), iVar0);
			}
		}
		if (aggregate_func_5277(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (aggregate_func_4311(iVar7))
						{
							if (!aggregate_func_257(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate_func_5014(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate_func_5277(iVar7, 8))
			{
				if (!aggregate_func_4311(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1067.f_271.f_42 != 0)
	{
		if (!aggregate_func_3434(1, -1))
		{
			aggregate_func_2922(1);
		}
	}
	else if (aggregate_func_3434(1, -1))
	{
		aggregate_func_2922(1);
	}
}

void func_338()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_573();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_74[iVar15 /*31*/])->f_10.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_1067.f_377.f_96 >= 3)
		{
			Local_1067.f_377.f_96 = 0;
		}
		iVar1 = Local_1067.f_377.f_96;
		Local_1067.f_377.f_96++;
		iVar12++;
		iVar8 = aggregate_func_4270(iVar1);
		if (!aggregate_func_2995(iVar8))
		{
		}
		else if (aggregate_func_2418(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				aggregate_func_4239(iVar8);
				if (aggregate_func_2986(iVar8))
				{
					if (aggregate_func_2419(iVar8))
					{
						if (!aggregate_func_3527(iVar8))
						{
							aggregate_func_2411(iVar8);
						}
					}
					if (aggregate_func_2420(iVar8))
					{
						aggregate_func_2421(iVar8);
					}
				}
				else
				{
					if (aggregate_func_2995(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate_func_2422(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_586(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (aggregate_func_2148(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate_func_415(vVar5.x, vVar5.y, &(Local_1067.f_377), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_1067.f_377.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_1067.f_377))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1067.f_377.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_1067.f_377.f_1 & 256 != 0)
							{
								if ((Local_74[iVar15 /*31*/])->f_10.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_74[iVar15 /*31*/])->f_10.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_1067.f_377))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_590(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
								}
								aggregate_func_1729(iVar8, 1);
								Jump @767; //curOff = 679
								if (aggregate_func_689(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
								}
								if (aggregate_func_2986(iVar8))
								{
									if (!aggregate_func_2148(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!aggregate_func_4311(iVar8))
											{
											}
											else
											{
												aggregate_func_4239(iVar8);
												aggregate_func_2136(iVar8);
												Jump @1016; //curOff = 821
												if (aggregate_func_1730(iVar8))
												{
												}
												else if (iVar13 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 2)
														{
															if (&Local_1067.f_377.f_98[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1067.f_377.f_98[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1067.f_377.f_98[iVar8];
																Local_1067.f_377.f_98[iVar8] = &Local_1067.f_377.f_98[iVar8] + 1;
															}
															iVar14++;
															if (aggregate_func_690(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!aggregate_func_3528(iVar8, iVar10))
																{
																	if (aggregate_func_2422(iVar8, iVar0))
																	{
																		if (!aggregate_func_7254(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			aggregate_func_2423(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_340()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!aggregate_func_3575(iVar1))
	{
		return;
	}
	func_607();
	if (aggregate_func_7931())
	{
		if (aggregate_func_3683(2, -1) || aggregate_func_3683(1, -1))
		{
			aggregate_func_2922(1);
			aggregate_func_2922(2);
			aggregate_func_4896(2);
			aggregate_func_4896(1);
		}
	}
	else
	{
		bVar2 = false;
		if (aggregate_func_7932() || aggregate_func_7933())
		{
			bVar2 = true;
			if (aggregate_func_7933() || (!aggregate_func_4644(8) && !aggregate_func_3683(4, iVar1)))
			{
				aggregate_func_4335(Local_1067.f_520, Local_13.f_58);
				Local_1067.f_520 = Local_13.f_58;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_615(aggregate_func_4270(iVar3), Local_13.f_58);
					iVar3++;
				}
				if (aggregate_func_7934())
				{
					aggregate_func_7935(Local_1067.f_520.f_3.f_1);
				}
				bVar0 = true;
				if (aggregate_func_7932())
				{
					aggregate_func_2922(4);
				}
				else
				{
					aggregate_func_2922(4);
				}
			}
			else if (!aggregate_func_4644(8))
			{
				if (!aggregate_func_4644(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_4896(8);
				}
			}
			else if (aggregate_func_4644(4))
			{
				if (aggregate_func_3683(4, iVar1))
				{
					aggregate_func_2922(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4896(4);
				aggregate_func_4896(8);
			}
		}
		else if (aggregate_func_3683(4, iVar1))
		{
			aggregate_func_2922(4);
		}
		if (!aggregate_func_4644(1))
		{
			if (aggregate_func_4644(1))
			{
				aggregate_func_4896(1);
			}
			if (aggregate_func_7934())
			{
				iVar4 = Local_1067.f_520.f_3.f_1;
				if (aggregate_func_7936(iVar4))
				{
					if (bVar0)
					{
						aggregate_func_7935(iVar4);
					}
					if (aggregate_func_4240((Local_1067.f_520.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!aggregate_func_2875(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || aggregate_func_4240(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (aggregate_func_4637(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								aggregate_func_4243(&(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!aggregate_func_4240(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (aggregate_func_4240(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (aggregate_func_2020() < ((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (aggregate_func_4637(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											aggregate_func_4583(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!aggregate_func_4637(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										aggregate_func_4583(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!aggregate_func_4637(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (aggregate_func_2973(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!aggregate_func_6717(iVar4, iVar5, Local_1067.f_520))
								{
								}
								else
								{
									Local_1067.f_520.f_7 = PLAYER::PLAYER_ID();
									Local_1067.f_520.f_8 = iVar4;
									Local_1067.f_520.f_9 = iVar5;
									(Local_74[iVar6 /*31*/])->f_28.f_1 = iVar4;
									(Local_74[iVar6 /*31*/])->f_28.f_2 = iVar5;
									func_625(iVar4, iVar5);
									aggregate_func_2922(1);
									aggregate_func_2922(2);
									aggregate_func_4896(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!aggregate_func_4644(2))
			{
				if (!aggregate_func_4644(1))
				{
					aggregate_func_4896(1);
					aggregate_func_4896(2);
				}
			}
			if (!aggregate_func_3683(2, -1))
			{
				if (aggregate_func_4644(2))
				{
					func_625(Local_1067.f_520.f_8, Local_1067.f_520.f_9);
					aggregate_func_2922(2);
				}
			}
		}
	}
}

void func_345()
{
	int iVar0;

	Local_1067.f_18.f_250 = -1;
	Local_1067.f_18.f_251 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1067.f_18.f_251 = (Local_1067.f_18.f_251 || (Local_74[iVar0 /*31*/])->f_1.f_1);
			Local_1067.f_18.f_250 = (Local_1067.f_18.f_250 && (Local_74[iVar0 /*31*/])->f_1.f_1);
		}
		iVar0++;
	}
}

void func_346()
{
	int iVar0;
	float fVar1;
	char* sVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT())))
	{
		return;
	}
	if (!aggregate_func_3740(64, 255))
	{
		return;
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	fVar1 = BUILTIN::VDIST(Local_1067.f_15, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false));
	if (fVar1 > 50f)
	{
		return;
	}
	if (!aggregate_func_4644(1))
	{
		aggregate_func_2916(func_627(), 10000, 0, 0, 0, 1);
		aggregate_func_4896(1);
		return;
	}
	else if (!aggregate_func_4644(2))
	{
		aggregate_func_2916(func_629(), 10000, 0, 0, 0, 1);
		aggregate_func_4896(2);
		return;
	}
	if (aggregate_func_4644(1048576) && !aggregate_func_4644(4))
	{
		sVar2 = func_630(1048576);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(4);
			return;
		}
	}
	else if (aggregate_func_4644(2097152) && !aggregate_func_4644(8))
	{
		sVar2 = func_630(2097152);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(8);
			return;
		}
	}
	else if (aggregate_func_4644(4194304) && !aggregate_func_4644(16))
	{
		sVar2 = func_630(4194304);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(16);
			return;
		}
	}
	else if (aggregate_func_4644(8388608) && !aggregate_func_4644(32))
	{
		sVar2 = func_630(8388608);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(32);
			return;
		}
	}
	else if (aggregate_func_4644(16777216) && !aggregate_func_4644(64))
	{
		sVar2 = func_630(16777216);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(64);
			return;
		}
	}
	else if (aggregate_func_4644(33554432) && !aggregate_func_4644(128))
	{
		sVar2 = func_630(33554432);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(128);
			return;
		}
	}
	else if (aggregate_func_4644(67108864) && !aggregate_func_4644(256))
	{
		sVar2 = func_630(67108864);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(256);
			return;
		}
	}
	else if (aggregate_func_4644(134217728) && !aggregate_func_4644(512))
	{
		sVar2 = func_630(134217728);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(512);
			return;
		}
	}
	else if (aggregate_func_4644(268435456) && !aggregate_func_4644(1024))
	{
		sVar2 = func_630(268435456);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(1024);
			return;
		}
	}
	else if (aggregate_func_4644(536870912) && !aggregate_func_4644(2048))
	{
		sVar2 = func_630(536870912);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(2048);
			return;
		}
	}
	else if (aggregate_func_4644(1073741824 /* Float: 2f */) && !aggregate_func_4644(4096))
	{
		sVar2 = func_630(1073741824 /* Float: 2f */);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			aggregate_func_2916(sVar2, 10000, 0, 0, 0, 1);
			aggregate_func_4896(4096);
			return;
		}
	}
}

void func_347()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_495())
	{
		return;
	}
	if ((aggregate_func_4644(64) || aggregate_func_4644(512)) || aggregate_func_4644(256))
	{
		return;
	}
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(2);
	iVar2 = PLAYER::GET_PLAYER_PED(aggregate_func_1079(2, 0, 1));
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !ENTITY::DOES_ENTITY_EXIST(iVar1)) || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || !ENTITY::DOES_ENTITY_EXIST(iVar2)) || ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (Local_13.f_7.f_18 > func_522() || func_460(0, 2) < func_530())
	{
		iVar3 = 4;
	}
	else if (Local_13.f_7.f_18 > func_632())
	{
		iVar3 = 3;
	}
	else if (Local_13.f_7.f_18 > func_633())
	{
		iVar3 = 2;
	}
	else if (Local_13.f_7.f_18 > func_634())
	{
		iVar3 = 1;
	}
	iVar4 = aggregate_func_2678(2, 0, 1);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
	{
		fVar5 = func_636(iVar4, 2, 0);
		if (fVar5 != 0f)
		{
			iVar6 = func_637(fVar5);
			if (iVar6 > iVar3)
			{
				iVar3 = iVar6;
				if (iVar3 == 4)
				{
					aggregate_func_3553(32768);
				}
			}
		}
	}
	switch (Local_1067.f_18.f_2)
	{
		case 0:
			Local_1067.f_18.f_2 = 1;
			break;
		case 1:
			switch (iVar3)
			{
				case 1:
					Local_1067.f_18.f_2 = 2;
					break;
				case 2:
					Local_1067.f_18.f_2 = 3;
					break;
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			break;
		case 2:
			switch (iVar3)
			{
				case 2:
					Local_1067.f_18.f_2 = 3;
					break;
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (aggregate_func_1727(iVar1, -875674219, 1, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar0, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
			break;
		case 3:
			switch (iVar3)
			{
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (aggregate_func_1727(iVar1, -1389117756, 1, 0))
			{
				TASK::TASK_COMBAT_ANIMAL_WARN(iVar1, iVar0, 0);
			}
			break;
		case 4:
			switch (iVar3)
			{
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (aggregate_func_1727(iVar1, -1952598043, 1, 0))
			{
				TASK::TASK_AMBIENT_ANIMAL_STALK(iVar1, iVar0, 0);
			}
			break;
		case 5:
			aggregate_func_3553(64);
			break;
	}
}

void func_348(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		aggregate_func_4241(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 16);
	}
	else
	{
		aggregate_func_4243(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 16);
	}
}

void func_349()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (Local_13.f_7.f_21 == 255 || Local_13.f_7.f_21 != PLAYER::PLAYER_ID())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
		{
			VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
		}
		aggregate_func_2922(16384);
		aggregate_func_2922(32768);
		aggregate_func_2922(65536);
		aggregate_func_2922(131072);
		aggregate_func_2922(262144);
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		aggregate_func_2922(16384);
		aggregate_func_2922(32768);
		aggregate_func_2922(65536);
		aggregate_func_2922(131072);
		aggregate_func_2922(262144);
		return;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	if (aggregate_func_2940(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
	{
		aggregate_func_2922(32768);
	}
	else
	{
		aggregate_func_2922(32768);
	}
	if (aggregate_func_3740(32768, 255))
	{
		if (func_639(iVar0))
		{
			aggregate_func_2922(32768);
		}
	}
	iVar4 = aggregate_func_4995();
	iVar5 = aggregate_func_7382(2);
	if (iVar4 == 1)
	{
		iVar5 = PED::GET_MOUNT(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
	{
		vVar6 = { PED::GET_PED_BONE_COORDS(iVar5, 21030, 0f, 0f, 0f) };
		if (aggregate_func_2940(vVar6, 0.1f, 0.9f, 0.1f, 0.9f))
		{
			aggregate_func_2922(65536);
		}
		else
		{
			aggregate_func_2922(65536);
		}
	}
	else
	{
		aggregate_func_2922(65536);
	}
	if (func_640() || ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
	{
		aggregate_func_2922(16384);
	}
	else
	{
		aggregate_func_2922(16384);
	}
	if (func_641())
	{
		iVar9 = 0;
		while (iVar9 < 32)
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_7), iVar9))
			{
				if (iVar9 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					iVar11++;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_6), iVar9))
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					iVar14 = PLAYER::GET_PLAYER_PED(iVar13);
					if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_DEAD_OR_DYING(iVar14, true))
					{
						vVar1 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
						if (aggregate_func_2940(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
						{
							iVar10++;
						}
					}
				}
			}
			iVar9++;
		}
		if (iVar10 < iVar11 || iVar10 == 0)
		{
			if (iVar11 > 1)
			{
				aggregate_func_2922(131072);
				aggregate_func_2922(262144);
			}
			else
			{
				aggregate_func_2922(131072);
				aggregate_func_2922(262144);
			}
		}
		else
		{
			aggregate_func_2922(131072);
			aggregate_func_2922(262144);
		}
	}
	else
	{
		aggregate_func_2922(131072);
		aggregate_func_2922(262144);
	}
}

void func_350()
{
	int iVar0;
	char[] cVar1[8];

	if (aggregate_func_3740(-2147483648, 255))
	{
		return;
	}
	iVar0 = 180;
	while (Local_1067.f_18.f_150 < iVar0)
	{
		cVar1 = func_528(Local_1067.f_18.f_150);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar1))
		{
			AUDIO::_0xEF51242E35242B47(cVar1);
		}
		Local_1067.f_18.f_150++;
		if (Local_1067.f_18.f_150 > (iVar0 - 1))
		{
			aggregate_func_2922(-2147483648);
		}
	}
}

void func_351()
{
	switch (Local_1067.f_18)
	{
		case 0:
			return;
		case 1:
			return;
		case 48:
			return;
		default:
			break;
	}
	if (aggregate_func_4006(0, -1, 1) < 30f)
	{
		aggregate_func_6723();
	}
}

void func_353()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	fVar5 = BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	switch (aggregate_func_4995())
	{
		case 9:
		case 10:
		case 11:
			if (aggregate_func_4015(8, 255))
			{
				aggregate_func_2442(0);
			}
			else
			{
				func_644(1123680256 /* Float: 125f */);
			}
			break;
		default:
			func_644(1123680256 /* Float: 125f */);
			break;
	}
	if (fVar5 < 35f)
	{
		switch (aggregate_func_4995())
		{
			case 9:
			case 10:
			case 11:
				if (aggregate_func_2676(0, 35f, 1) > 1)
				{
					PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
					aggregate_func_6723();
				}
				else
				{
					if (Local_1067.f_18.f_160 == 0)
					{
						func_645(&(Local_1067.f_18.f_160));
					}
					else if ((NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_1067.f_18.f_162) > 60000)
					{
						aggregate_func_2922(536870912);
					}
					iVar6 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
					{
						if (iVar6 == 0)
						{
							if (!aggregate_func_4015(8, 255))
							{
								aggregate_func_2916("NB_PHOTOGRAPHY_H_MORE_FS", 10000, 0, 0, 0, 1);
								aggregate_func_3553(8);
							}
							else if (!aggregate_func_4015(16, 255))
							{
								if (func_512(179) || (NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_1067.f_18.f_162) > 30000)
								{
									aggregate_func_2916("NB_PHOTOGRAPHY_H_RETURN_FS", 10000, 0, 0, 0, 1);
									aggregate_func_3553(16);
								}
							}
						}
					}
					if (aggregate_func_2676(0, 15f, 0) > 0)
					{
						func_647(100);
					}
				}
				break;
			default:
				PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
				aggregate_func_6723();
				break;
		}
	}
	else
	{
		if (Local_1067.f_18.f_160 != 0)
		{
			Local_1067.f_18.f_162 = (Local_1067.f_18.f_162 + NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			Local_1067.f_18.f_160 = 0;
		}
		aggregate_func_3553(8);
		aggregate_func_3553(16);
	}
	func_649();
}

void func_354()
{
	int iVar0;

	func_650();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		func_647(100);
		func_652(aggregate_func_5211());
	}
}

void func_355()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_644(1123680256 /* Float: 125f */);
	func_650();
	func_647(100);
	func_652(aggregate_func_5211());
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
		{
			fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar2 < 25f)
			{
				if (func_653(7, Local_1067.f_4) || aggregate_func_7752(7, Local_1067.f_4))
				{
					if (!func_512(5))
					{
						if (!aggregate_func_3027(1))
						{
							func_516(0, 0, 5, 0);
						}
					}
				}
				else if (aggregate_func_7926(7, Local_1067.f_4))
				{
					if (!func_512(4))
					{
						if (!aggregate_func_3027(1))
						{
							func_516(0, 0, 4, 0);
						}
					}
				}
				else if (!func_512(3))
				{
					if (!aggregate_func_3027(1))
					{
						func_516(0, 0, 3, 0);
					}
				}
			}
		}
	}
}

void func_356()
{
	func_644(1123680256 /* Float: 125f */);
	func_650();
	func_647(100);
	func_652(-1);
}

void func_357()
{
	int iVar0;
	int iVar1;

	func_644(1123680256 /* Float: 125f */);
	func_650();
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 15f)
	{
		func_647(100);
		func_652(func_656());
	}
	else
	{
		func_647(100);
		func_652(aggregate_func_5288());
	}
}

void func_358()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		func_509(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
	}
}

void func_359()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	if ((NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && PLAYER::PLAYER_ID() == Local_13.f_7.f_20) && aggregate_func_4015(2, 255))
	{
		aggregate_func_2922(4);
		return;
	}
	if (func_518(2) > 1)
	{
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		if (aggregate_func_4644(256))
		{
			func_509(0, 65f, 5000, 0, 14, 15, -1, -1, -1, -1, 1, -1);
		}
		else
		{
			func_509(0, 65f, 5000, 0, 12, 13, -1, -1, -1, -1, 1, -1);
		}
	}
}

void func_361()
{
	aggregate_func_2442(0);
	aggregate_func_3553(2);
}

void func_362()
{
	aggregate_func_2922(64);
	aggregate_func_3553(2048);
}

void func_363()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	func_658();
	func_659();
	iVar0 = aggregate_func_7382(0);
	switch (aggregate_func_4995())
	{
		case 0:
			vVar1 = { func_326(0) };
			fVar4 = func_327(0);
			break;
		default:
			vVar1 = { func_326(3) };
			fVar4 = func_327(3);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_1727(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar1, 1f, -1, 0.25f, false, fVar4);
		}
	}
}

void func_364()
{
	int iVar0;

	aggregate_func_4016();
	aggregate_func_3553(268435456);
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_661())
		{
			func_662();
			aggregate_func_2922(2048);
		}
		if (Local_13.f_7.f_10 != 0)
		{
			if (!func_512(16))
			{
				if (!aggregate_func_3027(1))
				{
					if (func_512(16))
					{
						func_513(&(Local_13.f_7.f_10));
					}
					else
					{
						func_516(0, 0, 16, 0);
					}
				}
			}
			else
			{
				func_663();
			}
		}
		else
		{
			func_513(&(Local_13.f_7.f_10));
		}
		func_664(iVar0);
	}
}

void func_365()
{
	aggregate_func_2922(8);
	aggregate_func_2922(16);
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_665();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (!aggregate_func_3027(1))
		{
			if (func_520(Local_13.f_7.f_9, 1000))
			{
				iVar1 = func_525();
				if (!func_512(iVar1))
				{
					func_516(0, 0, iVar1, 0);
				}
			}
		}
		if (aggregate_func_2905(iVar0, 993674639))
		{
			iVar2 = func_315(aggregate_func_6711());
			if (iVar2 == 0 || (PED::_0x34D6AC1157C8226C(iVar0, iVar2) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				aggregate_func_3553(268435456);
			}
		}
	}
}

void func_367()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (aggregate_func_2905(iVar0, 993674639))
		{
			iVar1 = func_315(aggregate_func_6711());
			if (iVar1 == 0 || (PED::_0x34D6AC1157C8226C(iVar0, iVar1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				aggregate_func_3553(268435456);
			}
		}
	}
}

void func_368()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (func_664(iVar0))
		{
			if (aggregate_func_1727(iVar0, -2017877118, 1, 0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, func_311(0), func_543(0), 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_369()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!aggregate_func_4644(536870912))
		{
			func_658();
			if (!aggregate_func_3027(1))
			{
				func_509(0, 65f, 5000, 0, 83, 84, 85, -1, -1, -1, 0, -1);
			}
		}
		if (aggregate_func_4995() == 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (aggregate_func_2905(iVar0, -2017877118))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_311(0), func_543(0), 1))
					{
						if (ENTITY::_0x627520389E288A73(iVar0, func_311(0), func_543(0)) > 0.5f)
						{
							TASK::STOP_ANIM_TASK(iVar0, func_311(0), func_543(0), -4f);
						}
					}
				}
			}
		}
		if (!func_495())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (aggregate_func_4644(536870912))
				{
					if (Local_1067.f_18.f_161 == 0)
					{
						func_645(&(Local_1067.f_18.f_161));
					}
					if (func_520(Local_1067.f_18.f_161, 200))
					{
						PED::SET_PED_TO_RAGDOLL(iVar0, 2000, 5000, 0, false, false, false);
						vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 3, -vVar1 * Vector(0.75f, 0.75f, 0.75f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iVar0, 21030), false, false, true, false, true);
					}
				}
				else if (!PED::IS_PED_RAGDOLL(iVar0))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					vVar7 = { func_326(1) };
					if (vVar4.z < vVar7.z || BUILTIN::VDIST(vVar4, Local_13.f_7.f_27) < (BUILTIN::VDIST(vVar4, vVar7) + 0.25f))
					{
						if (!func_512(86))
						{
							func_516(0, 0, 86, 1);
						}
						aggregate_func_3553(536870912);
					}
				}
			}
		}
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_667();
	func_668();
	if (!func_495())
	{
		aggregate_func_3553(8192);
	}
	else if (!aggregate_func_4644(8192))
	{
		iVar0 = aggregate_func_7382(2);
		iVar1 = aggregate_func_7382(0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_669())
				{
					if (aggregate_func_1727(iVar0, 518218985, 1, 0) && !aggregate_func_2905(iVar0, 518218985))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
							aggregate_func_3553(8192);
							aggregate_func_3553(256);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
							aggregate_func_3553(8192);
							aggregate_func_3553(256);
						}
					}
				}
				else if (aggregate_func_2905(iVar0, -1952598043) || aggregate_func_2905(iVar0, -1442466670))
				{
					aggregate_func_3553(8192);
					aggregate_func_3553(256);
				}
				else
				{
					iVar3 = func_315(4);
					if (iVar3 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar3, 0, 0, 0, -1082130432 /* Float: -1f */, 0);
					}
					aggregate_func_3553(8192);
					aggregate_func_3553(256);
				}
			}
		}
	}
}

void func_371()
{
	int iVar0;

	func_667();
	aggregate_func_2922(64);
	func_166(0);
	iVar0 = aggregate_func_7382(0);
	func_670(iVar0);
}

void func_372()
{
	func_667();
	aggregate_func_2922(64);
	func_671();
}

void func_373()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	func_667();
	aggregate_func_2442(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_1727(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, aggregate_func_6604(0), 1f, -1, 0.25f, false, aggregate_func_6603(0));
		}
	}
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	aggregate_func_2922(64);
	aggregate_func_2922(4096);
	func_673(1123680256 /* Float: 125f */);
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(2);
	iVar2 = aggregate_func_7382(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (aggregate_func_1727(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
				}
			}
			else if (aggregate_func_1727(iVar0, 242628503, 1, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
				if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
				{
					PED::_0xEEED8FAFEC331A70(0, vVar4, 3);
				}
				else
				{
					TASK::TASK_STAND_STILL(0, 750);
					TASK::TASK_REACT(0, iVar1, vVar4, "DEFAULT_SHOCKED", 3f, 0f, 4);
				}
				TASK::TASK_SMART_FLEE_PED(0, iVar1, 500f, -1, 0, 2f, iVar2);
				aggregate_func_1004(iVar0, &iVar3, 0, 0, 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_670(iVar0);
	}
	if (!aggregate_func_4644(268435456))
	{
		if (aggregate_func_4644(134217728))
		{
			aggregate_func_4896(268435456);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, 1609284507);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (aggregate_func_2148(2, -1))
		{
			aggregate_func_3553(16384);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (aggregate_func_1727(iVar1, -1442466670, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar1, 100f, 0, 0);
			}
		}
	}
	else
	{
		aggregate_func_3553(128);
	}
	iVar7 = PLAYER::PLAYER_PED_ID();
	iVar8 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar8))
	{
		if (!aggregate_func_4644(262144))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar7, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 30f)
			{
				aggregate_func_4896(262144);
			}
		}
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = aggregate_func_7382(2);
	iVar1 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (aggregate_func_1727(iVar0, 518218985, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
				}
				else
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					TASK::TASK_SMART_FLEE_COORD(iVar0, vVar2, 500f, -1, false, 1077936128);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_24);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (aggregate_func_1727(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar5, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
			}
			else if (aggregate_func_4015(4096, 255))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (aggregate_func_1727(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar0, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
				else if (aggregate_func_1727(iVar1, 2121492476, 1, 0))
				{
					TASK::TASK_REACT(iVar1, 0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), "DEFAULT_SHOCKED", 2000f, 1000f, 4);
				}
			}
		}
	}
}

void func_377()
{
	int iVar0;

	if (!aggregate_func_3027(1))
	{
		func_516(0, 0, 99, 0);
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!aggregate_func_2905(iVar0, 2121492476))
		{
			func_675(-1);
			aggregate_func_4016();
		}
	}
}

void func_378()
{
	int iVar0;
	int iVar1;

	aggregate_func_3553(128);
	aggregate_func_3553(64);
	aggregate_func_2372(2);
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		if (aggregate_func_4015(16384, 255))
		{
			func_677();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (aggregate_func_1727(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, 5f, 2f, 2f, 0);
			}
		}
	}
}

void func_379()
{
	int iVar0;

	aggregate_func_2372(2);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (func_678(2, iVar0))
	{
		func_677();
	}
}

void func_380()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	func_166(0);
	func_673(1123680256 /* Float: 125f */);
	aggregate_func_3553(64);
	iVar0 = aggregate_func_7382(2);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		switch (aggregate_func_4995())
		{
			case 3:
			case 5:
				if (aggregate_func_1727(iVar0, 1120685857, 1, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vVar2, 100f, 0, 16);
				}
				break;
			default:
				if (aggregate_func_1727(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 100f, -1, 0, 3f, 0);
				}
				break;
		}
	}
}

void func_381()
{
	func_166(0);
	func_673(1123680256 /* Float: 125f */);
}

void func_382()
{
	int iVar0;
	int iVar1;

	func_673(1123680256 /* Float: 125f */);
	aggregate_func_2442(0);
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(2);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (aggregate_func_1727(iVar0, 518218985, 1, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
			}
		}
	}
}

void func_384()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	func_679(2, 10f, 10f, 1f);
	iVar0 = aggregate_func_2678(0, 0, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_326(2) };
		iVar5 = func_514(&uVar1, vVar2, 10f, 0, 0);
		if (iVar5 < 1)
		{
			aggregate_func_3553(1);
		}
		else
		{
			aggregate_func_3553(1);
			return;
		}
	}
	else
	{
		aggregate_func_3553(1);
	}
	iVar6 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), func_326(2)) > 5f)
		{
			if (aggregate_func_1727(iVar6, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar6, func_326(2), 1f, -1, 0.25f, false, func_327(2));
			}
		}
		else
		{
			func_680();
			aggregate_func_4016();
		}
		func_509(0, 65f, 5000, 0, 109, 110, 111, -1, -1, -1, 1, 112);
	}
}

void func_385()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	func_667();
	iVar0 = aggregate_func_7382(0);
	iVar2 = aggregate_func_2678(0, 0, 1);
	if (iVar2 == NETWORK::PARTICIPANT_ID())
	{
		vVar3 = { func_326(2) };
		iVar6 = func_514(&iVar1, vVar3, 10f, 0, 0);
		if (iVar6 < 1)
		{
			aggregate_func_3553(1);
			return;
		}
		else
		{
			aggregate_func_3553(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		Local_1067.f_18.f_154 = iVar1;
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1067.f_18.f_154, true, false), func_326(2)) < 20f)
			{
				if (PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1) == 0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
					{
						AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (aggregate_func_1727(iVar0, 1868526510, 1, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(iVar0, Local_1067.f_18.f_154, -1, -1, 1f, 1, 0, 0);
							return;
						}
					}
				}
				else
				{
					func_680();
					aggregate_func_4016();
					func_509(0, 65f, 5000, 0, 113, 114, 115, -1, -1, -1, 1, 116);
				}
			}
		}
	}
}

void func_386()
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_663();
	func_667();
	if (func_661())
	{
		func_662();
		aggregate_func_2922(2048);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154)) && PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
	{
		aggregate_func_3553(1);
		return;
	}
	aggregate_func_4016();
	iVar0 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		fVar1 = func_682(0, func_326(2));
		iVar2 = PED::GET_MOUNT(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && TASK::_0xAC5045AB7F1A34FD(iVar2)) && fVar1 > (10f + 5f))
		{
			aggregate_func_2922(536870912);
		}
		else if (fVar1 > 6f)
		{
			if (aggregate_func_1727(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_326(2), 1.5f, -1, 0.5f, false, 40000f);
			}
		}
		else
		{
			func_683(-1);
		}
	}
}

void func_387()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	func_658();
	func_659();
	iVar0 = aggregate_func_2678(0, 0, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_326(2) };
		iVar5 = func_514(&uVar1, vVar2, (10f + 2f), 0, 0);
		if (iVar5 < 1)
		{
			aggregate_func_3553(1);
			return;
		}
	}
	iVar6 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1067.f_18.f_154, false, false), func_326(2));
			if (fVar7 > 20f)
			{
				aggregate_func_3553(1);
				return;
			}
			iVar8 = PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1);
			if (iVar8 != 0 && iVar8 != iVar6)
			{
				aggregate_func_3553(1);
				return;
			}
			if (aggregate_func_1727(iVar6, 1868526510, 1, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar6, Local_1067.f_18.f_154, -1, -1, 1f, 1, 0, 0);
			}
		}
		else
		{
			aggregate_func_3553(1);
		}
	}
}

void func_388()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && ENTITY::DOES_ENTITY_EXIST(iVar3)) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (aggregate_func_1727(iVar1, 1041577989, 1, 0))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 2, 0, 0);
				func_516(0, 0, 117, 0);
			}
		}
	}
}

void func_391()
{
	int iVar0;

	aggregate_func_2922(64);
	if (!aggregate_func_3740(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (PED::_0xF103823FFE72BB49(Local_1067.f_18.f_154) == iVar0 || (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_25) && Local_13.f_7.f_25 == PLAYER::PLAYER_ID()))
			{
				aggregate_func_2922(4096);
			}
		}
	}
}

void func_392()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (aggregate_func_1727(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 1, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 0);
		}
	}
}

void func_393()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_1727(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, aggregate_func_6604(0), 1f, -1, 0.25f, false, aggregate_func_6603(0));
		}
	}
}

void func_394()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (aggregate_func_1727(iVar0, 923520851, 1, 0))
	{
		TASK::TASK_WANDER_IN_AREA(iVar0, aggregate_func_6604(0), 5f, 10f, 20f, 0);
	}
}

void func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	aggregate_func_3553(2);
	func_667();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_670(iVar0);
		}
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (aggregate_func_1727(iVar0, 518218985, 1, 0))
			{
				if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 2f, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 2f);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 2f);
				}
			}
		}
	}
	if (!aggregate_func_4644(33554432))
	{
		iVar3 = aggregate_func_7382(1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			aggregate_func_2922(33554432);
			PED::SET_PED_CONFIG_FLAG(iVar3, 467, true);
		}
	}
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	func_667();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (aggregate_func_1727(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 17039632, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 17039632, 1077936128);
			}
		}
		iVar3 = PED::GET_MOUNT(iVar0);
		iVar4 = PLAYER::PLAYER_ID();
		iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
		{
			if (!TASK::_0xAC5045AB7F1A34FD(iVar3))
			{
				iVar6 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_20);
				fVar7 = 999f;
				if (iVar6 != 255)
				{
					fVar7 = aggregate_func_4006(0, iVar6, 1);
				}
				if (aggregate_func_2986(0) && fVar7 < 25f)
				{
					func_509(0, 65f, 4000, 0, 125, 126, 127, 118, 119, 120, 0, -1);
				}
				else if (func_512(118) && fVar7 < 15f)
				{
					func_509(0, 65f, 4000, 0, 121, 122, 123, 118, 119, 120, 0, -1);
				}
				else
				{
					func_509(0, 65f, 4000, 0, 118, 119, 120, -1, -1, -1, 0, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
			{
				if (TASK::_0xEFC4303DDC6E60D3(iVar5) && TASK::_0xED1F514AF4732258(iVar5) == iVar3)
				{
					TASK::_0xED27560703F37258(iVar5);
				}
				if (PLAYER::_0xF49F14462F0AE27C(iVar4) == iVar3 || Local_13.f_7.f_25 == iVar4)
				{
					if (aggregate_func_3774(iVar5))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS(iVar5, false, false)) < 50f)
						{
							aggregate_func_3553(4);
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					if (aggregate_func_4644(4))
					{
						if (aggregate_func_1727(iVar3, 1041577989, 1, 0))
						{
							TASK::TASK_HORSE_ACTION(iVar3, 2, 0, 0);
							func_516(0, 0, 124, 0);
						}
					}
				}
			}
		}
	}
}

void func_397()
{
	int iVar0;
	int iVar1;
	int iVar2;

	aggregate_func_4264();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (aggregate_func_1727(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
			}
		}
	}
}

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;

	aggregate_func_4264();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (aggregate_func_1727(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
			}
		}
		if (PED::_0x3AA24CCC0D451379(iVar0) || PED::_0x9682F850056C9ADE(iVar0))
		{
			func_509(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, 1, -1);
		}
		else if (func_512(79) && !func_512(82))
		{
			func_516(0, 3, 82, 0);
		}
		else
		{
			func_509(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, !func_512(79), -1);
		}
	}
}

void func_399()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		func_644(1123680256 /* Float: 125f */);
		if (fVar2 < 35f)
		{
			aggregate_func_6723();
		}
		func_509(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
}

void func_400()
{
	int iVar0;

	func_686(1);
	if (!func_687("BOOL_INITIAL"))
	{
		func_688("BOOL_INITIAL");
	}
	if (func_452())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "REEL_SLOW", 1))
		{
			aggregate_func_3553(262144);
		}
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_670(iVar0);
	}
}

void func_401()
{
	if (!func_687("BOOL_REEL_SLOW"))
	{
		func_688("BOOL_REEL_SLOW");
	}
	if (func_452())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "REEL_FAST", 1))
		{
			aggregate_func_3553(524288);
		}
	}
}

void func_402()
{
	func_516(0, 0, 129, 0);
	if (func_686(1))
	{
		if (func_512(129))
		{
			func_689(1);
		}
	}
}

void func_403()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_512(130))
		{
			func_516(0, 0, 130, 0);
		}
		if (!aggregate_func_4015(65536, 255))
		{
			fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar2 < 10f)
			{
				aggregate_func_3553(65536);
			}
		}
	}
	if (func_452())
	{
		if (func_535(2))
		{
			if (!aggregate_func_4015(1048576, 255))
			{
				aggregate_func_3553(1048576);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "Idle", 1))
		{
			if (func_690() > 0.45f)
			{
				if (func_686(2))
				{
					func_689(2);
				}
			}
		}
	}
	if (func_520(Local_13.f_7.f_10, 120000))
	{
		aggregate_func_3553(131072);
	}
}

void func_404()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	if ((func_512(3) || func_512(5)) || func_512(4))
	{
		func_509(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return;
	}
	if (func_653(7, Local_1067.f_4) || aggregate_func_7752(7, Local_1067.f_4))
	{
		if (!func_512(5))
		{
			if (!aggregate_func_3027(1))
			{
				func_516(0, 0, 5, 0);
			}
		}
	}
	else if (aggregate_func_7926(7, Local_1067.f_4))
	{
		if (!func_512(4))
		{
			if (!aggregate_func_3027(1))
			{
				func_516(0, 0, 4, 0);
			}
		}
	}
	else if (!func_512(3))
	{
		if (!aggregate_func_3027(1))
		{
			func_516(0, 0, 3, 0);
		}
	}
}

void func_408()
{
	aggregate_func_4016();
	func_683(-1);
	func_663();
	if (func_661())
	{
		func_662();
		aggregate_func_2922(2048);
	}
}

void func_410()
{
	int iVar0;
	vector3 vVar1;

	if (aggregate_func_4644(2048))
	{
		func_540();
		func_691(1);
		func_692();
	}
	if (aggregate_func_4644(512))
	{
		if (aggregate_func_3740(128, 255))
		{
			if (!func_512(73) && !func_512(72))
			{
				iVar0 = aggregate_func_7382(0);
				vVar1 = { aggregate_func_6604(0) };
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				}
				if (func_517(vVar1, 35f) > 1)
				{
					func_516(0, 0, 73, 0);
				}
				else
				{
					func_516(0, 0, 72, 0);
				}
			}
		}
		else if (func_636(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
		{
			aggregate_func_2922(128);
		}
	}
	func_693();
}

void func_414()
{
	int iVar0;

	func_658();
	func_659();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_326(5)) > 4f)
		{
			if (aggregate_func_1727(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_326(5), 1f, -1, 0.25f, false, func_327(5));
			}
		}
	}
}

void func_416()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_661())
	{
		func_662();
		aggregate_func_2922(2048);
	}
	aggregate_func_4016();
	func_663();
	iVar0 = aggregate_func_7382(0);
	iVar9 = 0;
	switch (aggregate_func_4995())
	{
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				if (!aggregate_func_4015(4194304, 255))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 340, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					aggregate_func_3553(4194304);
				}
				if (!aggregate_func_4015(2097152, 255))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					aggregate_func_3553(2097152);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!aggregate_func_4644(8388608))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
						aggregate_func_3553(8388608);
					}
				}
			}
			func_683(-1);
			if (Local_13.f_7.f_14 != 0)
			{
				iVar9 = NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			if ((iVar9 + Local_13.f_7.f_17) > 15000)
			{
				if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
				{
					aggregate_func_2922(67108864);
				}
			}
			break;
		case 9:
			if (aggregate_func_4015(67108864, 255))
			{
				if (aggregate_func_4006(0, -1, 1) > (3f + 1f))
				{
					aggregate_func_4242(&(Local_1067.f_377), 500);
					aggregate_func_4242(&(Local_1067.f_377), 4000);
					aggregate_func_3553(67108864);
				}
			}
			else if (aggregate_func_4006(0, -1, 1) < 3.5f)
			{
				aggregate_func_4242(&(Local_1067.f_377), 8000);
				aggregate_func_4242(&(Local_1067.f_377), 8000);
				aggregate_func_3553(67108864);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !aggregate_func_4644(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				aggregate_func_3553(4194304);
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 == joaat("weapon_unarmed"))
				{
					if (aggregate_func_1727(iVar0, 716706914, 1, 0))
					{
						iVar2 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar2, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
				else if (!aggregate_func_4015(33554432, 255))
				{
					if (func_664(iVar0))
					{
						aggregate_func_3553(33554432);
					}
				}
				else if (aggregate_func_1727(iVar0, 1237250926, 1, 0))
				{
					vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
					aggregate_func_2907(vVar6);
					vVar6 = { vVar6 * Vector(25f, 25f, 25f) };
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) + vVar6 };
					vVar3 = { vVar3 + Vector(25f, 0f, 0f) };
					TASK::TASK_AIM_GUN_AT_COORD(iVar0, vVar3, -1, false, true);
				}
			}
			break;
		case 10:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !aggregate_func_4644(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				aggregate_func_3553(4194304);
			}
			func_695(Local_13.f_7.f_21, 16777216, 9, 10);
			break;
	}
}

void func_417()
{
	aggregate_func_4242(&(Local_1067.f_377), 500);
	aggregate_func_4242(&(Local_1067.f_377), 1000);
}

void func_418()
{
	int iVar0;

	if (func_512(173) && !aggregate_func_3027(1))
	{
		if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
		{
			aggregate_func_2922(67108864);
		}
	}
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::_0x9682F850056C9ADE(iVar0) || PED::_0x3AA24CCC0D451379(iVar0))
		{
			func_509(0, 65f, 5000, 0, 168, 169, 170, 171, 172, 173, 1, -1);
		}
	}
}

void func_419()
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (aggregate_func_1727(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, aggregate_func_6604(0), 1f, -1, 0.25f, false, aggregate_func_6603(0));
		}
	}
}

void func_420()
{
	int iVar0;

	aggregate_func_2922(64);
	iVar0 = aggregate_func_7382(0);
	if (!aggregate_func_3740(4096, 255) && !aggregate_func_3740(2048, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 3f)
		{
			aggregate_func_2922(4096);
		}
	}
}

void func_422()
{
	int iVar0;
	vector3 vVar1;

	aggregate_func_2922(4096);
	aggregate_func_2922(2048);
	iVar0 = aggregate_func_7382(0);
	vVar1 = { aggregate_func_6604(0) };
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	}
	if (func_636(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
	{
		aggregate_func_2922(128);
	}
	if (aggregate_func_4644(32768))
	{
		func_516(0, 0, 174, 0);
	}
	else if (aggregate_func_4644(65536))
	{
		func_516(0, 0, 175, 0);
	}
	else if (func_517(vVar1, 35f) > 1)
	{
		func_516(0, 0, 73, 0);
	}
	else
	{
		func_516(0, 0, 72, 0);
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_667();
	func_696();
	func_697();
	func_698();
	func_699();
	func_671();
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(1);
	aggregate_func_2442(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		iVar2 = aggregate_func_4995();
		if (iVar2 == 10)
		{
			if (aggregate_func_4644(16777216) && aggregate_func_2905(iVar0, 242628503))
			{
				aggregate_func_2922(2097152);
				TASK::TASK_PLAY_ANIM(iVar0, func_311(11), func_543(11), 4f, -4f, 2000, 24, 0, 0, 0, 0, 0, 0);
			}
		}
		else if (iVar2 == 9)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
			{
				if (iVar3 != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
		}
	}
	if (aggregate_func_1727(iVar0, 1868526510, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		TASK::TASK_MOUNT_ANIMAL(iVar0, iVar1, -1, -1, 1f, 1033, 0, 0);
	}
}

void func_424()
{
	int iVar0;

	func_696();
	func_697();
	func_698();
	func_699();
	func_671();
	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (aggregate_func_1727(iVar0, -1665583462, 1, 0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 6152, 0);
			}
			if (aggregate_func_4644(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				aggregate_func_3553(8388608);
			}
			if (aggregate_func_4644(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				aggregate_func_3553(4194304);
			}
		}
	}
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_170();
	func_667();
	aggregate_func_2442(0);
	func_671();
	func_700();
	func_167();
	if (aggregate_func_4644(262144) && !aggregate_func_2422(0, -1))
	{
		func_697();
	}
	if (aggregate_func_4015(2, 255))
	{
		if (aggregate_func_2422(0, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_701();
		}
	}
	iVar0 = aggregate_func_7382(0);
	iVar1 = aggregate_func_7382(1);
	iVar2 = aggregate_func_4995();
	bVar3 = true;
	bVar4 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar0, true))
		{
			if (TASK::_0xEFC4303DDC6E60D3(PLAYER::PLAYER_PED_ID()) && TASK::_0xED1F514AF4732258(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				TASK::_0xED27560703F37258(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!aggregate_func_3740(2097152, 255))
			{
				switch (iVar2)
				{
					case 10:
						if (aggregate_func_4644(16777216))
						{
							TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
						}
						break;
					case 9:
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar5, false, 0, false))
						{
							if (iVar5 != joaat("weapon_unarmed"))
							{
								WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
							}
						}
						break;
				}
				aggregate_func_2922(2097152);
			}
			if (!aggregate_func_4015(2097152, 255))
			{
				if (PED::_0x3AA24CCC0D451379(iVar0))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					aggregate_func_3553(2097152);
				}
			}
			if (aggregate_func_4644(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				aggregate_func_3553(8388608);
			}
			if (aggregate_func_4644(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				aggregate_func_3553(4194304);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || PED::GET_MOUNT(iVar0) == iVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 50f)
			{
				bVar3 = false;
				iVar1 = 0;
			}
			if (iVar2 == 8)
			{
				if (func_452())
				{
					if (!ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_453(0)))
					{
						bVar4 = true;
					}
				}
			}
			if (aggregate_func_1727(iVar0, 242628503, 1, 0) || !aggregate_func_4015(8, 255))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				if (bVar4)
				{
					TASK::TASK_PLAY_ANIM(0, func_311(11), func_543(11), 4f, -8f, 300, 24, 0, 0, 0, 0, 0, 0);
				}
				if (bVar3)
				{
					TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, 2f, 8, 0, 0);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, iVar1);
				aggregate_func_1004(iVar0, &iVar6, 0, 0, 1, 1);
				aggregate_func_3553(8);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
	}
	iVar7 = aggregate_func_7382(2);
	if (func_495())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && !PED::IS_PED_DEAD_OR_DYING(iVar7, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar7))
			{
				if (!aggregate_func_2986(2))
				{
					if (aggregate_func_1727(iVar7, 518218985, 1, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar7, ENTITY::GET_ENTITY_COORDS(iVar7, false, false), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar7, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, false);
					}
				}
			}
		}
	}
}

void func_428()
{
	int iVar0;

	func_691(0);
	iVar0 = aggregate_func_7382(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (aggregate_func_1727(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_429()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_691(0);
	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (!aggregate_func_2905(iVar0, 501393341))
		{
			iVar2 = aggregate_func_4995();
			if (iVar2 == 10)
			{
				if (aggregate_func_4644(16777216) && aggregate_func_2905(iVar0, 242628503))
				{
					aggregate_func_2922(2097152);
					TASK::TASK_PLAY_ANIM(iVar0, func_311(11), func_543(11), 4f, -4f, 2000, 24, 0, 0, 0, 0, 0, 0);
				}
			}
			else if (iVar2 == 9)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
			}
			if (aggregate_func_1727(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, (2.5f / 2f), 1f, 2f, 0);
			}
		}
	}
}

void func_430()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_7382(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()) && NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) == Local_13.f_7.f_22)
	{
		func_702(0);
		if (func_692())
		{
			if (aggregate_func_1727(iVar1, -1162159953, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(7), func_543(7), iVar0, -1, 4f, -2f, 8, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
				}
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (aggregate_func_1727(iVar0, -1162159953, 1, 0))
		{
			aggregate_func_2922(4194304);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar1, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_311(8), func_543(8), iVar1, -1, 4f, -2f, 8, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
}

void func_432()
{
	if (!aggregate_func_4644(64))
	{
		aggregate_func_2922(536870912);
	}
	func_170();
	aggregate_func_2922(16777216);
}

void func_433()
{
	if (!aggregate_func_3740(268435456, 255))
	{
		if (!aggregate_func_2986(0))
		{
			if (aggregate_func_3740(2048, 255) || aggregate_func_3740(4096, 255))
			{
				aggregate_func_5005(7, Local_1067.f_4);
				aggregate_func_6722(7, Local_1067.f_4);
				aggregate_func_2922(268435456);
			}
		}
	}
	func_170();
	aggregate_func_2922(16777216);
}

void func_436()
{
	if (aggregate_func_4644(2))
	{
		if (aggregate_func_2986(0))
		{
			aggregate_func_6692();
		}
	}
}

int func_447(int iParam0, int iParam1)
{
	if (!aggregate_func_7089(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + aggregate_func_7090(iParam0)));
}

bool func_452()
{
	if (ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1067.f_18.f_244, 0))
	{
		return true;
	}
	return false;
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Female";
		case 2:
			return "Fish";
		default:
			break;
	}
	return "Female";
}

int func_454(int iParam0)
{
	return func_721(0, iParam0);
}

char* func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POLE";
		case 1:
			return "BOBBER";
		case 2:
			return "RAG";
		default:
			break;
	}
	return "POLE";
}

float func_460(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_722(iParam0), func_722(iParam1));
}

void func_478(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_5 = { vParam2 };
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_4 = fParam5;
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_8 = iParam6;
}

bool func_495()
{
	switch (aggregate_func_4995())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

bool func_497()
{
	return ((aggregate_func_4644(256) || aggregate_func_4644(512)) || aggregate_func_4644(1024));
}

void func_499(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		func_513(&(Local_13.f_7.f_10));
		Local_13.f_7 = iParam0;
	}
}

void func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = aggregate_func_7382(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			iVar1 = func_733(0);
			if (NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
					PED::_0xEEED8FAFEC331A70(iVar0, vVar3, 3);
				}
			}
		}
	}
}

void func_509(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = aggregate_func_7382(iParam0);
	iVar3 = 255;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iParam3)
	{
		case 0:
			iVar3 = Local_13.f_7.f_20;
			break;
		case 1:
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
			{
				iVar3 = Local_13.f_7.f_21;
			}
			else
			{
				iVar3 = Local_13.f_7.f_20;
			}
			break;
		case 2:
			iVar3 = aggregate_func_1079(2, 99f, 1);
			break;
		case 3:
			iVar3 = aggregate_func_1078(0, 96680, 99f, 1);
			break;
		case 4:
			iVar3 = Local_13.f_7.f_22;
			break;
		case -1:
		case 5:
			iParam3 = 5;
			iVar1 = iVar0;
			break;
	}
	if (iVar1 == 0)
	{
		if (NETWORK::_0x255A5EF65EDA9167(iVar3))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				iVar1 = PLAYER::GET_PLAYER_PED(iVar3);
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	if (aggregate_func_3027(1))
	{
		return;
	}
	if (Local_13.f_7.f_9 != 0)
	{
		if (!aggregate_func_4644(32) || Local_13.f_7.f_15 < 1)
		{
			func_738(&(Local_13.f_7.f_15), iParam2);
			aggregate_func_4896(32);
			func_513(&(Local_13.f_7.f_9));
		}
		iVar4 = Local_13.f_7.f_15;
		if (bParam10 && !func_512(iParam4))
		{
			iVar4 = 1500;
		}
		if (func_520(Local_13.f_7.f_9, iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (iVar5 != 255)
			{
				if (!NETWORK::_0x255A5EF65EDA9167(iVar3) || aggregate_func_702(0, fParam1, iVar5, 1))
				{
					if (!func_512(iParam4))
					{
						func_516(iParam0, iParam3, iParam4, 0);
					}
					else if (!func_512(iParam5))
					{
						func_516(iParam0, iParam3, iParam5, 0);
					}
					else if (iParam6 != -1 && !func_512(iParam6))
					{
						func_516(iParam0, iParam3, iParam6, 0);
					}
					else if (iParam7 != -1 && !func_512(iParam7))
					{
						func_516(iParam0, iParam3, iParam7, 0);
					}
					else if (iParam8 != -1 && !func_512(iParam8))
					{
						func_516(iParam0, iParam3, iParam8, 0);
					}
					else if (iParam9 != -1 && !func_512(iParam9))
					{
						func_516(iParam0, iParam3, iParam9, 0);
					}
					else if (iParam11 != -1)
					{
						func_739(iParam11);
					}
				}
			}
		}
	}
	else
	{
		func_513(&(Local_13.f_7.f_9));
	}
}

void func_510()
{
	if (Local_13.f_7.f_11 == 0)
	{
		func_513(&(Local_13.f_7.f_11));
		func_738(&(Local_13.f_7.f_16), 12000);
		return;
	}
	if (aggregate_func_4644(524288))
	{
		func_513(&(Local_13.f_7.f_11));
		func_738(&(Local_13.f_7.f_16), 12000);
	}
}

bool func_511()
{
	int iVar0;

	if (aggregate_func_4644(536870912))
	{
		return true;
	}
	if (Local_13.f_7.f_12 == 0)
	{
		func_513(&(Local_13.f_7.f_12));
	}
	if (func_520(Local_13.f_7.f_12, 100000))
	{
		if (!func_520(Local_13.f_7.f_9, 10000))
		{
			return false;
		}
		iVar0 = aggregate_func_7382(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
			{
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	return MISC::IS_BIT_SET(&(Local_1067.f_18.f_45[iVar1]), iVar2);
}

void func_513(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_514(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;

	iVar3 = aggregate_func_7382(1);
	fVar7 = fParam4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (aggregate_func_1556(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || iVar2 != iVar3)
				{
					if (!bParam5 || PED::_0xB676EFDA03DADA52(iVar2, 0) == 0)
					{
						bVar8 = false;
						if (!bParam6)
						{
							bVar8 = true;
						}
						if (!bVar8)
						{
							iVar9 = aggregate_func_7382(0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9) && !PED::IS_PED_DEAD_OR_DYING(iVar9, true))
							{
								if (aggregate_func_1417(iVar9, iVar2, 0, fParam4, 0))
								{
									bVar8 = true;
								}
							}
						}
						if (bVar8)
						{
							fVar10 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), vParam1);
							if (fVar10 < 50f && fVar10 < fVar7)
							{
								fVar7 = fVar10;
								*iParam0 = iVar2;
								iVar11 = PED::_0xB676EFDA03DADA52(*iParam0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar11))
								{
									iVar12 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (NETWORK::_0x255A5EF65EDA9167(iVar12))
									{
										Local_13.f_7.f_25 = iVar12;
									}
								}
							}
							iVar6++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar6;
}

void func_516(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	if (bParam3)
	{
		Var0.f_14 = 1;
	}
	else
	{
		Var0.f_14 = -1;
	}
	aggregate_func_7153(&Var0);
}

int func_517(vector3 vParam0, float fParam3)
{
	var uVar0;
	int iVar1;

	uVar0 = aggregate_func_130(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3, -432403087, 0, 8);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	return iVar1;
}

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_4240((Local_74[iVar0 /*31*/])->f_1.f_2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_520(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam0 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iParam0, iVar0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

int func_522()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		default:
			break;
	}
	return 4;
}

bool func_523()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_326(1) };
	fVar7 = (vVar4.z - vVar1.z);
	if (fVar7 > 5f)
	{
		return true;
	}
	return false;
}

int func_525()
{
	int iVar0;

	iVar0 = Local_13.f_7.f_19;
	switch (iVar0)
	{
		case 1:
			return 21;
		case 2:
			return 22;
		case 3:
			return 23;
		default:
			break;
	}
	return 21;
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::CLEAR_BIT(Local_1067.f_18.f_45[iVar1], iVar2);
}

char[] func_528(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_CL_IDLE";
				case 1:
					return "OREPHT_CL_IDLE";
				case 2:
					return "OREPHT_CL_IDLE";
				case 3:
					return "OREPHT_CL_CALL1";
				case 4:
					return "OREPHT_CL_CAL1M";
				case 5:
					return "OREPHT_CL_CAL1A";
				case 6:
					return "OREPHT_CL_CAL1R";
				case 7:
					return "OREPHT_CL_CALL2";
				case 8:
					return "OREPHT_CL_CALL2";
				case 9:
					return "OREPHT_CL_OFFR1";
				case 10:
					return "OREPHT_CL_OFFR2";
				case 11:
					return "OREPHT_CL_OFFR3";
				case 16:
					return "OREPHT_CL_TODO";
				case 21:
					return "OREPHT_CL_POSE1";
				case 22:
					return "OREPHT_CL_POSE2";
				case 23:
					return "OREPHT_CL_POSE3";
				case 24:
					return "OREPHT_CL_POSE4";
				case 83:
					return "OREPHT_CL_BACK1";
				case 84:
					return "OREPHT_CL_BACK1";
				case 85:
					return "OREPHT_CL_BACK1";
				case 86:
					return "OREPHT_CL_FALL";
				case 87:
					return "OREPHT_CL_SCRM";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DA_IDLE";
					case 1:
						return "OREPHT_DA_IDLE";
					case 2:
						return "OREPHT_DA_IDLE";
					case 3:
						return "OREPHT_DA_CALL1";
					case 4:
						return "OREPHT_DA_CAL1M";
					case 5:
						return "OREPHT_DA_CAL1A";
					case 6:
						return "OREPHT_DA_CAL1R";
					case 7:
						return "OREPHT_DA_CALL2";
					case 8:
						return "OREPHT_DA_CALL2";
					case 9:
						return "OREPHT_DA_OFFR1";
					case 10:
						return "OREPHT_DA_OFFR2";
					case 11:
						return "OREPHT_DA_OFFR3";
					case 16:
						return "OREPHT_DA_TODO";
					case 48:
						return "OREPHT_DA_PHFRM";
					case 49:
						return "OREPHT_DA_PHFRM";
					case 50:
						return "OREPHT_DA_PHFRM";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 83:
						return "OREPHT_DA_BACK1";
					case 84:
						return "OREPHT_DA_BACK1";
					case 85:
						return "OREPHT_DA_BACK1";
					case 88:
						return "OREPHT_DA_SAVED";
					case 89:
						return "OREPHT_DA_OFFRB";
					case 90:
						return "OREPHT_DA_OFFRK";
					case 91:
						return "OREPHT_DA_OFFRO";
					case 92:
						return "OREPHT_DA_OFFRC";
					case 93:
						return "OREPHT_DA_OFFRW";
					case 94:
						return "OREPHT_DA_ATTCK";
					case 95:
						return "OREPHT_DA_ATTCK";
					case 96:
						return "OREPHT_DA_ATTCK";
					case 97:
						return "OREPHT_DA_PLCLS";
					case 98:
						return "OREPHT_DA_PLCLS";
					case 99:
						return "OREPHT_DA_PLSCR";
					case 100:
						return "OREPHT_DA_PLSCR";
					case 101:
						return "OREPHT_DA_SVRD1";
					case 102:
						return "OREPHT_DA_SVRD2";
					case 103:
						return "OREPHT_DA_SVRD3";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_AN_IDLE";
					case 1:
						return "OREPHT_AN_IDLE";
					case 2:
						return "OREPHT_AN_IDLE";
					case 3:
						return "OREPHT_AN_CALL1";
					case 4:
						return "OREPHT_AN_CAL1M";
					case 5:
						return "OREPHT_AN_CAL1A";
					case 6:
						return "OREPHT_AN_CAL1R";
					case 7:
						return "OREPHT_AN_CALL2";
					case 8:
						return "OREPHT_AN_CALL2";
					case 9:
						return "OREPHT_AN_OFFR1";
					case 10:
						return "OREPHT_AN_OFFR2";
					case 11:
						return "OREPHT_AN_OFFR3";
					case 16:
						return "OREPHT_AN_TODO";
					case 48:
						return "OREPHT_AN_PHFRM";
					case 49:
						return "OREPHT_AN_PHFRM";
					case 50:
						return "OREPHT_AN_PHFRM";
					case 21:
						return "OREPHT_CL_POSE1";
					case 22:
						return "OREPHT_CL_POSE2";
					case 23:
						return "OREPHT_CL_POSE3";
					case 24:
						return "OREPHT_CL_POSE4";
					case 83:
						return "OREPHT_AN_BACK1";
					case 84:
						return "OREPHT_AN_BACK1";
					case 85:
						return "OREPHT_AN_BACK1";
					case 88:
						return "OREPHT_AN_SAVED";
					case 89:
						return "OREPHT_AN_OFFRB";
					case 90:
						return "OREPHT_AN_OFFRK";
					case 91:
						return "OREPHT_AN_OFFRO";
					case 92:
						return "OREPHT_AN_OFFRC";
					case 93:
						return "OREPHT_AN_OFFRW";
					case 94:
						return "OREPHT_AN_ATTCK";
					case 95:
						return "OREPHT_AN_ATTCK";
					case 96:
						return "OREPHT_AN_ATTCK";
					case 97:
						return "OREPHT_AN_PLCLS";
					case 98:
						return "OREPHT_AN_PLCLS";
					case 99:
						return "OREPHT_AN_PLSCR";
					case 100:
						return "OREPHT_AN_PLSCR";
					case 101:
						return "OREPHT_AN_SVRD1";
					case 102:
						return "OREPHT_AN_SVRD2";
					case 103:
						return "OREPHT_AN_SVRD3";
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 48:
						return "OREPHT_HR_PHFRM";
					case 49:
						return "OREPHT_HR_PHFRM";
					case 50:
						return "OREPHT_HR_PHFRM";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 118:
						return "OREPHT_DT_TNT1";
					case 119:
						return "OREPHT_DT_TNT2";
					case 120:
						return "OREPHT_DT_TNT3";
					case 121:
						return "OREPHT_DT_CHS1";
					case 122:
						return "OREPHT_DT_CHS1";
					case 123:
						return "OREPHT_DT_CHS1";
					case 124:
						return "OREPHT_DT_THRN1";
					case 125:
						return "OREPHT_DT_AGATK";
					case 126:
						return "OREPHT_DT_AGATK";
					case 127:
						return "OREPHT_DT_AGATK";
					case 82:
						return "OREPHT_DT_FLEE";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 118:
						return "OREPHT_ST_TNT1";
					case 119:
						return "OREPHT_ST_TNT2";
					case 120:
						return "OREPHT_ST_TNT3";
					case 121:
						return "OREPHT_ST_CHS1";
					case 122:
						return "OREPHT_ST_CHS1";
					case 123:
						return "OREPHT_ST_CHS1";
					case 124:
						return "OREPHT_ST_THRN1";
					case 125:
						return "OREPHT_ST_AGATK";
					case 126:
						return "OREPHT_ST_AGATK";
					case 127:
						return "OREPHT_ST_AGATK";
					case 82:
						return "OREPHT_ST_FLEE";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_FH_IDLE";
				case 1:
					return "OREPHT_FH_IDLE";
				case 2:
					return "OREPHT_FH_IDLE";
				case 128:
					return "OREPHT_FH_REEL";
				case 129:
					return "OREPHT_FH_WHOO";
				case 130:
					return "OREPHT_FH_CATCH";
				case 9:
					return "OREPHT_FH_OFFR1";
				case 10:
					return "OREPHT_FH_OFFR2";
				case 11:
					return "OREPHT_FH_OFFR3";
				case 48:
					return "OREPHT_FH_PHFRM";
				case 49:
					return "OREPHT_FH_PHFRM";
				case 50:
					return "OREPHT_FH_PHFRM";
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_GN_IDLE";
				case 1:
					return "OREPHT_GN_IDLE";
				case 2:
					return "OREPHT_GN_IDLE";
				case 9:
					return "OREPHT_GN_OFFR1";
				case 10:
					return "OREPHT_GN_OFFR2";
				case 11:
					return "OREPHT_GN_OFFR3";
				case 131:
					return "OREPHT_GN_TDUP1";
				case 132:
					return "OREPHT_GN_TDUP2";
				case 133:
					return "OREPHT_GN_TDAT1";
				case 134:
					return "OREPHT_GN_TDAT2";
				case 135:
					return "OREPHT_GN_TDHG1";
				case 136:
					return "OREPHT_GN_TDHG2";
				case 137:
					return "OREPHT_GN_GTHR1";
				case 138:
					return "OREPHT_GN_GTHR1";
				case 139:
					return "OREPHT_GN_GTHR1";
				case 140:
					return "OREPHT_GN_GTHR2";
				case 141:
					return "OREPHT_GN_GTHR2";
				case 142:
					return "OREPHT_GN_GTHR2";
				case 144:
					return "OREPHT_GN_NOCAM";
				case 145:
					return "OREPHT_GN_NOCAM";
				case 146:
					return "OREPHT_GN_NOCAM";
				case 147:
					return "OREPHT_GN_PSEUP";
				case 148:
					return "OREPHT_GN_PSEUP";
				case 149:
					return "OREPHT_GN_PSEUP";
				case 150:
					return "OREPHT_GN_PSEAT";
				case 151:
					return "OREPHT_GN_PSEAT";
				case 152:
					return "OREPHT_GN_PSEAT";
				case 154:
					return "OREPHT_GN_PSHOG";
				case 155:
					return "OREPHT_GN_PSHOG";
				case 156:
					return "OREPHT_GN_PSHOG";
				case 158:
					return "OREPHT_GN_PHFR1";
				case 159:
					return "OREPHT_GN_PHFR1";
				case 160:
					return "OREPHT_GN_PHFR1";
				case 161:
					return "OREPHT_GN_PHFR2";
				case 162:
					return "OREPHT_GN_PHFR2";
				case 163:
					return "OREPHT_GN_PHFR2";
				case 165:
					return "OREPHT_GN_HOGCR";
				case 166:
					return "OREPHT_GN_HOGCR";
				case 167:
					return "OREPHT_GN_HOGCR";
				case 168:
					return "OREPHT_GN_HOGCT";
				case 169:
					return "OREPHT_GN_HOGCT";
				case 170:
					return "OREPHT_GN_HOGCT";
				case 171:
					return "OREPHT_GN_HOGRL";
				case 172:
					return "OREPHT_GN_HOGRL";
				case 173:
					return "OREPHT_GN_HOGRL";
				case 174:
					return "OREPHT_GN_NOPED";
				case 175:
					return "OREPHT_GN_NOPSE";
				default:
					break;
			}
			break;
	}
	if (func_201() == 2)
	{
		switch (iParam0)
		{
			case 3:
				return "OREPHT_DA_CALL1";
			case 4:
				return "OREPHT_DA_CAL1M";
			case 5:
				return "OREPHT_DA_CAL1A";
			case 6:
				return "OREPHT_DA_CAL1R";
			case 7:
				return "OREPHT_DA_CALL2";
			case 8:
				return "OREPHT_DA_CALL2";
			case 34:
				return "OREPHT_DS_ACCPT";
			case 35:
				return "OREPHT_DS_DECLN";
			case 12:
				return "OREPHT_DS_OFFR4";
			case 13:
				return "OREPHT_DS_OFFR4";
			case 14:
				return "OREPHT_DS_OFFR5";
			case 15:
				return "OREPHT_DS_OFFR5";
			case 36:
				return "OREPHT_DS_PHCAM";
			case 37:
				return "OREPHT_DS_PHCAM";
			case 38:
				return "OREPHT_DS_PHCAM";
			case 40:
				return "OREPHT_DS_PHFAR";
			case 41:
				return "OREPHT_DS_PHFAR";
			case 42:
				return "OREPHT_DS_PHFAR";
			case 44:
				return "OREPHT_DS_PHFRM";
			case 45:
				return "OREPHT_DS_PHFRM";
			case 46:
				return "OREPHT_DS_PHFRM";
			case 52:
				return "OREPHT_DS_PHCLS";
			case 53:
				return "OREPHT_DS_PHCLS";
			case 54:
				return "OREPHT_DS_PHCLS";
			case 17:
				return "OREPHT_DS_WAIT";
			case 18:
				return "OREPHT_DS_WAIT";
			case 19:
				return "OREPHT_DS_WAIT";
			case 59:
				return "OREPHT_DS_PHWAT";
			case 60:
				return "OREPHT_DS_PHWAT";
			case 61:
				return "OREPHT_DS_PHWAT";
			case 56:
				return "OREPHT_DS_PHRDY";
			case 57:
				return "OREPHT_DS_PHRDY";
			case 58:
				return "OREPHT_DS_PHRDY";
			case 62:
				return "OREPHT_DS_PHNOW";
			case 63:
				return "OREPHT_DS_PHNOW";
			case 64:
				return "OREPHT_DS_PHNOW";
			case 65:
				return "OREPHT_DS_PHBAD";
			case 68:
				return "OREPHT_DS_PHRWB";
			case 66:
				return "OREPHT_DS_PHOK";
			case 69:
				return "OREPHT_DS_PHRWO";
			case 67:
				return "OREPHT_DS_PHGOD";
			case 70:
				return "OREPHT_DS_PHRWG";
			case 71:
				return "OREPHT_DS_FILM";
			case 25:
				return "OREPHT_DS_RIDE1";
			case 26:
				return "OREPHT_DS_RIDE2";
			case 27:
				return "OREPHT_DS_RIDE3";
			case 28:
				return "OREPHT_DS_RIDB1";
			case 29:
				return "OREPHT_DS_RIDB2";
			case 30:
				return "OREPHT_DS_RIDB3";
			case 31:
				return "OREPHT_DS_FAIL1";
			case 32:
				return "OREPHT_DS_FAIL2";
			case 33:
				return "OREPHT_DS_FAIL3";
			case 72:
				return "OREPHT_DS_ANNOY";
			case 73:
				return "OREPHT_DS_ANPOS";
			case 74:
				return "OREPHT_DS_AGGRO";
			case 75:
				return "OREPHT_DS_AGGRO";
			case 76:
				return "OREPHT_DS_AGGRO";
			case 77:
				return "OREPHT_DS_AGGHR";
			case 78:
				return "OREPHT_DS_AGGHR";
			case 79:
				return "OREPHT_DS_HOGTD";
			case 80:
				return "OREPHT_DS_HOGTD";
			case 81:
				return "OREPHT_DS_HOGTD";
			case 82:
				return "OREPHT_DS_HOGUT";
			default:
				break;
		}
	}
	switch (aggregate_func_4995())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 34:
					return "OREPHT_TS_ACCPT";
				case 35:
					return "OREPHT_TS_DECLN";
				case 12:
					return "OREPHT_TS_OFFR4";
				case 13:
					return "OREPHT_TS_OFFR4";
				case 14:
					return "OREPHT_TS_OFFR5";
				case 15:
					return "OREPHT_TS_OFFR5";
				case 36:
					return "OREPHT_TS_PHCAM";
				case 37:
					return "OREPHT_TS_PHCAM";
				case 38:
					return "OREPHT_TS_PHCAM";
				case 40:
					return "OREPHT_TS_PHFAR";
				case 41:
					return "OREPHT_TS_PHFAR";
				case 42:
					return "OREPHT_TS_PHFAR";
				case 44:
					return "OREPHT_TS_PHFRM";
				case 45:
					return "OREPHT_TS_PHFRM";
				case 46:
					return "OREPHT_TS_PHFRM";
				case 52:
					return "OREPHT_TS_PHCLS";
				case 53:
					return "OREPHT_TS_PHCLS";
				case 54:
					return "OREPHT_TS_PHCLS";
				case 17:
					return "OREPHT_TS_WAIT";
				case 18:
					return "OREPHT_TS_WAIT";
				case 19:
					return "OREPHT_TS_WAIT";
				case 59:
					return "OREPHT_TS_PHWAT";
				case 60:
					return "OREPHT_TS_PHWAT";
				case 61:
					return "OREPHT_TS_PHWAT";
				case 56:
					return "OREPHT_TS_PHRDY";
				case 57:
					return "OREPHT_TS_PHRDY";
				case 58:
					return "OREPHT_TS_PHRDY";
				case 62:
					return "OREPHT_TS_PHNOW";
				case 63:
					return "OREPHT_TS_PHNOW";
				case 64:
					return "OREPHT_TS_PHNOW";
				case 65:
					return "OREPHT_TS_PHBAD";
				case 68:
					return "OREPHT_TS_PHRWB";
				case 66:
					return "OREPHT_TS_PHOK";
				case 69:
					return "OREPHT_TS_PHRWO";
				case 67:
					return "OREPHT_TS_PHGOD";
				case 70:
					return "OREPHT_TS_PHRWG";
				case 71:
					return "OREPHT_TS_FILM";
				case 25:
					return "OREPHT_TS_RIDE1";
				case 26:
					return "OREPHT_TS_RIDE2";
				case 27:
					return "OREPHT_TS_RIDE3";
				case 28:
					return "OREPHT_TS_RIDB1";
				case 29:
					return "OREPHT_TS_RIDB2";
				case 30:
					return "OREPHT_TS_RIDB3";
				case 31:
					return "OREPHT_TS_FAIL1";
				case 32:
					return "OREPHT_TS_FAIL2";
				case 33:
					return "OREPHT_TS_FAIL3";
				case 72:
					return "OREPHT_TS_ANNOY";
				case 73:
					return "OREPHT_TS_ANPOS";
				case 74:
					return "OREPHT_TS_AGGRO";
				case 75:
					return "OREPHT_TS_AGGRO";
				case 76:
					return "OREPHT_TS_AGGRO";
				case 77:
					return "OREPHT_TS_AGGHR";
				case 78:
					return "OREPHT_TS_AGGHR";
				case 79:
					return "OREPHT_TS_HOGTD";
				case 80:
					return "OREPHT_TS_HOGTD";
				case 81:
					return "OREPHT_TS_HOGTD";
				case 82:
					return "OREPHT_TS_HOGUT";
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 3:
					return "OREPHT_FS_CALL1";
				case 4:
					return "OREPHT_FS_CAL1M";
				case 5:
					return "OREPHT_FS_CAL1A";
				case 6:
					return "OREPHT_FS_CAL1R";
				case 7:
					return "OREPHT_FS_CALL2";
				case 8:
					return "OREPHT_FS_CALL2";
				case 34:
					return "OREPHT_FS_ACCPT";
				case 35:
					return "OREPHT_FS_DECLN";
				case 12:
					return "OREPHT_FS_OFFR4";
				case 13:
					return "OREPHT_FS_OFFR4";
				case 14:
					return "OREPHT_FS_OFFR5";
				case 15:
					return "OREPHT_FS_OFFR5";
				case 36:
					return "OREPHT_FS_PHCAM";
				case 37:
					return "OREPHT_FS_PHCAM";
				case 38:
					return "OREPHT_FS_PHCAM";
				case 40:
					return "OREPHT_FS_PHFAR";
				case 41:
					return "OREPHT_FS_PHFAR";
				case 42:
					return "OREPHT_FS_PHFAR";
				case 44:
					return "OREPHT_FS_PHFRM";
				case 45:
					return "OREPHT_FS_PHFRM";
				case 46:
					return "OREPHT_FS_PHFRM";
				case 52:
					return "OREPHT_FS_PHCLS";
				case 53:
					return "OREPHT_FS_PHCLS";
				case 54:
					return "OREPHT_FS_PHCLS";
				case 17:
					return "OREPHT_FS_WAIT";
				case 18:
					return "OREPHT_FS_WAIT";
				case 19:
					return "OREPHT_FS_WAIT";
				case 59:
					return "OREPHT_FS_PHWAT";
				case 60:
					return "OREPHT_FS_PHWAT";
				case 61:
					return "OREPHT_FS_PHWAT";
				case 56:
					return "OREPHT_FS_PHRDY";
				case 57:
					return "OREPHT_FS_PHRDY";
				case 58:
					return "OREPHT_FS_PHRDY";
				case 62:
					return "OREPHT_FS_PHNOW";
				case 63:
					return "OREPHT_FS_PHNOW";
				case 64:
					return "OREPHT_FS_PHNOW";
				case 65:
					return "OREPHT_FS_PHBAD";
				case 68:
					return "OREPHT_FS_PHRWB";
				case 66:
					return "OREPHT_FS_PHOK";
				case 69:
					return "OREPHT_FS_PHRWO";
				case 67:
					return "OREPHT_FS_PHGOD";
				case 70:
					return "OREPHT_FS_PHRWG";
				case 71:
					return "OREPHT_FS_FILM";
				case 25:
					return "OREPHT_FS_RIDE1";
				case 26:
					return "OREPHT_FS_RIDE2";
				case 27:
					return "OREPHT_FS_RIDE3";
				case 28:
					return "OREPHT_FS_RIDB1";
				case 29:
					return "OREPHT_FS_RIDB2";
				case 30:
					return "OREPHT_FS_RIDB3";
				case 31:
					return "OREPHT_FS_FAIL1";
				case 32:
					return "OREPHT_FS_FAIL2";
				case 33:
					return "OREPHT_FS_FAIL3";
				case 72:
					return "OREPHT_FS_ANNOY";
				case 73:
					return "OREPHT_FS_ANPOS";
				case 74:
					return "OREPHT_FS_AGGRO";
				case 75:
					return "OREPHT_FS_AGGRO";
				case 76:
					return "OREPHT_FS_AGGRO";
				case 77:
					return "OREPHT_FS_AGGHR";
				case 78:
					return "OREPHT_FS_AGGHR";
				case 79:
					return "OREPHT_FS_HOGTD";
				case 80:
					return "OREPHT_FS_HOGTD";
				case 81:
					return "OREPHT_FS_HOGTD";
				case 82:
					return "OREPHT_FS_HOGUT";
				case 176:
					return "PLAYER_LOITERING";
				case 177:
					return "BLOCKED_GENERIC";
				case 178:
					return "INSULT_RESPONSE";
				case 179:
					return "GET_OUT";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_530()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 10f;
		case 6:
			return 10f;
		case 7:
			return 10f;
		default:
			break;
	}
	return 10f;
}

void func_531()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
	{
		iVar0 = func_733(2);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_24 = iVar0;
		}
	}
}

bool func_533(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7382(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if (func_682(0, aggregate_func_6604(0)) > 100f)
	{
		return true;
	}
	if (aggregate_func_2676(0, 100f, 0) < 1)
	{
		return true;
	}
	return false;
}

bool func_535(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return false;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(Local_1067.f_18.f_244, sVar0);
}

int func_536()
{
	if (aggregate_func_4644(512))
	{
		return 66;
	}
	if (aggregate_func_4644(1024))
	{
		return 67;
	}
	return 65;
}

bool func_537(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_4006(0, iVar0, 1) < fParam0)
			{
				if (aggregate_func_4015(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && aggregate_func_4015(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_538(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_4006(0, iVar0, 1) < fParam0)
			{
				if (aggregate_func_3740(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && aggregate_func_3740(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_539(int iParam0)
{
	func_513(&(Local_13.f_7.f_13));
	if (Local_13.f_7.f_1 != iParam0)
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_540()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_13.f_7.f_22 != 255)
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			return true;
		}
		else
		{
			Local_13.f_7.f_22 = 255;
		}
	}
	if (Local_13.f_7.f_22 == 255)
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
				if (aggregate_func_3740(2048, iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (NETWORK::_0x255A5EF65EDA9167(iVar0))
					{
						iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							Local_13.f_7.f_22 = iVar0;
							return true;
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_13.f_7.f_22 = 255;
	return false;
}

int func_542()
{
	if (aggregate_func_4644(512))
	{
		return 69;
	}
	if (aggregate_func_4644(1024))
	{
		return 70;
	}
	return 68;
}

char* func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move";
		case 1:
			return "FRONT_BKN";
		case 2:
			return "FRONT_BKN";
		case 3:
			return "FRONT_CO";
		case 4:
			return "FRONT_CO";
		case 5:
			return "CALLOVER_N";
		case 6:
			return "CALLOVER_N";
		case 7:
			return "give_recieve_letter_plyr";
		case 8:
			return "give_recieve_letter_mp";
		case 9:
			return "intro";
		case 10:
			return "loop";
		case 11:
			return "outro";
		default:
			break;
	}
	return "";
}

void func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar3 = 255;
	bVar7 = false;
	switch (iParam0->f_9)
	{
		case 377515857:
			iVar0 = iParam0->f_11;
			iVar1 = aggregate_func_7382(iVar0);
			if (iParam0->f_12 == -1)
			{
				iVar4 = iVar1;
			}
			else
			{
				iVar6 = iParam0->f_12;
				switch (iVar6)
				{
					case 0:
						iVar3 = Local_13.f_7.f_20;
						break;
					case 1:
						iVar3 = Local_13.f_7.f_21;
						break;
					case 5:
						iVar4 = iVar1;
						break;
				}
				if (iVar4 == 0)
				{
					if (NETWORK::_0x255A5EF65EDA9167(iVar3))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
						{
							iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						}
						else
						{
							iVar4 = iVar1;
						}
					}
					else
					{
						iVar4 = iVar1;
					}
				}
			}
			iVar5 = iParam0->f_13;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				if (iParam0->f_12 == -1)
				{
				}
				if (iParam0->f_14 != -1)
				{
					bVar7 = true;
				}
				if (func_746(iVar1, iVar4, iVar5, 0, bVar7))
				{
					if (func_747(iVar5))
					{
						aggregate_func_1726(1891783641, iVar1, 1);
					}
					Local_1067.f_18.f_151 = iVar0;
					Local_1067.f_18.f_152 = iVar5;
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						aggregate_func_4896(32);
					}
				}
			}
			break;
	}
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

int func_550()
{
	int iVar0;

	iVar0 = aggregate_func_4995();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

int func_552()
{
	int iVar0;

	iVar0 = aggregate_func_4995();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

void func_553(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

void func_556()
{
	int iVar0;

	Local_1067.f_377.f_64 = 0;
	Local_1067.f_377.f_63 = 0;
	Local_1067.f_377.f_66 = 0;
	Local_1067.f_377.f_67 = 0;
	Local_1067.f_377.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1067.f_377.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1067.f_377.f_79[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1067.f_377.f_75[iVar0]);
		aggregate_func_2424(iVar0);
		iVar0++;
	}
}

void func_557()
{
	int iVar0;

	Local_1067.f_520.f_5 = 0;
	Local_1067.f_520.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		aggregate_func_68(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_559(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1067.f_377.f_64 = (Local_1067.f_377.f_64 || (Local_74[iParam0 /*31*/])->f_10.f_1);
		Local_1067.f_377.f_63 = (Local_1067.f_377.f_63 || (Local_74[iParam0 /*31*/])->f_10);
		Local_1067.f_377.f_66 = (Local_1067.f_377.f_66 || (Local_74[iParam0 /*31*/])->f_10.f_3);
		Local_1067.f_377.f_67 = (Local_1067.f_377.f_67 || (Local_74[iParam0 /*31*/])->f_10.f_4);
		Local_1067.f_377.f_68 = (Local_1067.f_377.f_68 || (Local_74[iParam0 /*31*/])->f_10.f_5);
		Local_1067.f_377.f_69 = (Local_1067.f_377.f_69 || (Local_74[iParam0 /*31*/])->f_10.f_6);
		Local_1067.f_377.f_94 = (Local_1067.f_377.f_94 || (Local_74[iParam0 /*31*/])->f_10.f_2);
		Local_1067.f_377.f_70 = (Local_1067.f_377.f_70 && (Local_74[iParam0 /*31*/])->f_10.f_7);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_75[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_79[iVar0]);
			aggregate_func_691(aggregate_func_4270(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_573()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = aggregate_func_4270(iVar0);
		if (!aggregate_func_2995(iVar4))
		{
		}
		else if (!aggregate_func_2148(iVar4, iVar5))
		{
			if (aggregate_func_2418(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate_func_2136(iVar4);
					func_762(iVar4);
				}
			}
		}
		iVar0++;
	}
}

bool func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (aggregate_func_3740(67108864, 255))
	{
		return true;
	}
	if (aggregate_func_3740(134217728, 255))
	{
		aggregate_func_2922(1048576);
		return true;
	}
	if (aggregate_func_4015(134217728, 255))
	{
		if (func_520(Local_1067.f_18.f_158, 500))
		{
			aggregate_func_3553(134217728);
		}
	}
	iVar0 = aggregate_func_7382(iParam0);
	switch (aggregate_func_4270(iParam0))
	{
		case 0:
			iVar1 = ENTITY::_0xEF2D9ED7CE684F08(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					aggregate_func_2922(67108864);
				}
			}
			if (!aggregate_func_4644(8192))
			{
				if (PED::_0x833F0053340EF413(iVar0))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					if (Global_1939168->f_40 == 1151374672)
					{
						if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar2, 1151374672 /* GXTEntry: "Bolas" */, 2f, true))
						{
							aggregate_func_2922(67108864);
						}
					}
				}
			}
			break;
		case 1:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && TASK::_0xEFC4303DDC6E60D3(PLAYER::PLAYER_PED_ID())) && TASK::_0xED1F514AF4732258(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				aggregate_func_2922(134217728);
			}
			break;
	}
	return false;
}

bool func_590(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!aggregate_func_5162())
	{
		aggregate_func_6723();
	}
	if (aggregate_func_3740(67108864, 255) || aggregate_func_3740(134217728, 255))
	{
		if (!aggregate_func_7154())
		{
			aggregate_func_7155(0);
		}
		return true;
	}
	switch (aggregate_func_4270(iParam0))
	{
		case 0:
			switch (aggregate_func_4995())
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (aggregate_func_4644(64))
					{
						if ((!aggregate_func_4644(128) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (aggregate_func_4644(128))
							{
								if (Local_1067.f_18.f_158 == 0)
								{
									Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
								}
							}
							if (!aggregate_func_5618(iParam1, 0, 0, 0, 0))
							{
								return false;
							}
						}
					}
					else if ((aggregate_func_4644(16) || aggregate_func_4644(32)) || aggregate_func_4015(2048, 255))
					{
						if (Local_1067.f_18.f_158 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (Local_1067.f_18.f_158 == 0)
							{
								Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							if (!aggregate_func_5618(iParam1, 0, 1, 0, 0) || iParam1 == 256)
							{
								return false;
							}
						}
					}
					break;
				case 10:
					if (iParam1 == 8)
					{
						if (WEAPON::_0xCB690F680A3EA971(PLAYER::PLAYER_PED_ID(), 4))
						{
							aggregate_func_3553(134217728);
						}
						else
						{
							aggregate_func_3553(134217728);
						}
					}
					if (aggregate_func_4644(4096))
					{
						Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!aggregate_func_4644(4096) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (!aggregate_func_5618(iParam1, 1, 0, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 11:
					if (aggregate_func_4644(8192))
					{
						Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!aggregate_func_4644(8192) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (aggregate_func_4644(8192))
						{
							switch (iParam1)
							{
								case 2:
								case 4:
								case 8:
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
									{
										if ((iVar0 == joaat("weapon_lasso") || iVar0 == -680302000) || iVar0 == 1151374672)
										{
											return false;
										}
									}
									break;
							}
						}
						if (!aggregate_func_5618(iParam1, 1, 1, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 2:
					if (aggregate_func_4015(2, 255))
					{
						if (iParam1 == 1024)
						{
							return false;
						}
					}
					break;
			}
			if (iParam1 == 1024)
			{
				aggregate_func_1617(1250422342, 0, 0);
				aggregate_func_2922(1048576);
			}
			break;
		case 2:
			if (aggregate_func_4015(64, 255))
			{
				return false;
			}
			break;
		case 1:
			if (!aggregate_func_5618(iParam1, 0, 0, 0, 0))
			{
				return false;
			}
			aggregate_func_2922(1048576);
			break;
	}
	if (!aggregate_func_7154())
	{
		aggregate_func_7155(0);
	}
	return true;
}

void func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_710(0, 0);
	if (iVar0 != Local_1067.f_520.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_1067.f_520.f_3.f_1);
				aggregate_func_7928(Local_1067.f_520.f_3.f_1);
			}
			Local_1067.f_520.f_3 = iVar0;
			Local_1067.f_520.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < aggregate_func_4270(3))
				{
					if (iVar1 == aggregate_func_7927(iVar2))
					{
						Local_1067.f_520.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_1067.f_520.f_3.f_1);
				aggregate_func_7935(Local_1067.f_520.f_3.f_1);
			}
		}
		else
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_1067.f_520.f_3.f_1);
				aggregate_func_7928(Local_1067.f_520.f_3.f_1);
			}
			Local_1067.f_520.f_3 = iVar0;
			Local_1067.f_520.f_3.f_1 = -1;
		}
	}
}

void func_615(int iParam0, var uParam1)
{
	if (iParam0 != 0)
	{
		return;
	}
	switch (aggregate_func_4270(uParam1))
	{
		case 0:
			aggregate_func_8917(iParam0, 0);
			break;
		case 1:
			aggregate_func_8917(iParam0, 1);
			aggregate_func_8918(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			aggregate_func_8918(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 2:
			aggregate_func_8917(iParam0, 1);
			if (aggregate_func_4015(2, 255))
			{
				aggregate_func_8918(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
				aggregate_func_8918(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			}
			else
			{
				aggregate_func_8918(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
				aggregate_func_8918(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			}
			break;
		case 3:
			aggregate_func_8917(iParam0, 1);
			aggregate_func_8918(iParam0, 0, "NB_PHOTOGRAPHY_ILO_POSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			aggregate_func_8918(iParam0, 1, "NB_PHOTOGRAPHY_ILO_STEP", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 4:
			aggregate_func_8917(iParam0, 1);
			aggregate_func_4011(iParam0, 0, 0, 1);
			aggregate_func_4011(iParam0, 1, 0, 1);
			break;
		case 5:
			aggregate_func_8917(iParam0, 0);
			func_810(iParam0, 0);
			func_810(iParam0, 1);
			break;
	}
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_7382(iParam0);
	switch (aggregate_func_4270(aggregate_func_4942()))
	{
		case 1:
			if (aggregate_func_6711() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						aggregate_func_2922(4096);
						aggregate_func_2922(1);
						aggregate_func_3553(1);
						aggregate_func_4264();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -822629770 /* GXTEntry: "Nod Head" */, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						aggregate_func_2922(2);
						aggregate_func_3553(2);
						aggregate_func_2922(8192);
						aggregate_func_4264();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914 /* GXTEntry: "Shake Head" */, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 2:
			if (aggregate_func_6711() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						aggregate_func_2922(4096);
						aggregate_func_2922(1);
						aggregate_func_3553(1);
						aggregate_func_4264();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -822629770 /* GXTEntry: "Nod Head" */, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						aggregate_func_2922(4);
						aggregate_func_3553(2);
						aggregate_func_2922(8192);
						aggregate_func_4264();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914 /* GXTEntry: "Shake Head" */, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 3:
			if (aggregate_func_6711() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						aggregate_func_2922(4096);
						aggregate_func_2922(8);
						aggregate_func_4264();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914 /* GXTEntry: "Shake Head" */, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						aggregate_func_2922(4096);
						aggregate_func_4896(262144);
						aggregate_func_2922(16);
						aggregate_func_4264();
						aggregate_func_4975(PLAYER::PLAYER_PED_ID(), "SILENT_PLAYER_MOVE_BACK", 291934926, iVar0, 1, 0, 0, 1);
						break;
				}
			}
			break;
	}
}

char* func_627()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4995();
	iVar1 = func_201();
	switch (iVar1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 1:
			switch (iVar0)
			{
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 8:
					return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
				case 10:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 9:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 11:
					return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			switch (iVar0)
			{
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
	}
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
		case 1:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 8:
			return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
		case 10:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 9:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 11:
			return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
	}
	return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
}

char* func_629()
{
	int iVar0;

	iVar0 = func_201();
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_REWARD_TS";
		case 1:
			return "NB_PHOTOGRAPHY_H_REWARD_FS";
		case 2:
			if (func_495())
			{
				return "NB_PHOTOGRAPHY_H_REWARD_ANIMAL_DS";
			}
			else
			{
				return "NB_PHOTOGRAPHY_H_REWARD_HORSE_DS";
			}
			break;
	}
	return "NB_PHOTOGRAPHY_H_REWARD_TS";
}

char* func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_4995();
	iVar1 = func_201();
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID());
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_495())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_TS";
					}
					else if (iVar0 == 0)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_CLIFF_TS";
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 8388608:
					return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_FS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_FS";
				case 268435456:
					return "NB_PHOTOGRAPHY_H_HOGTIE";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_641())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
					}
					else if (iVar0 == 8)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_FISH_FS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_FS";
					}
					break;
				case 67108864:
					if ((NETWORK::_0x255A5EF65EDA9167(iVar2) && NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GATHER_CAMERAMAN";
					}
					else
					{
						return "NB_PHOTOGRAPHY_H_GATHER";
					}
					break;
				case 134217728:
					if ((NETWORK::_0x255A5EF65EDA9167(iVar2) && NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GUNS_CAMERAMAN";
					}
					else if (iVar0 == 9)
					{
						return "NB_PHOTOGRAPHY_H_GUNSUP";
					}
					else if (iVar0 == 10)
					{
						return "NB_PHOTOGRAPHY_H_GUNSAIMED";
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_DS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_DS";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_495())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_DS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_DS";
					}
					break;
			}
			break;
	}
	return "";
}

int func_632()
{
	switch (aggregate_func_4995())
	{
		case 5:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 99;
}

int func_633()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 4;
}

int func_634()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		default:
			break;
	}
	return 4;
}

float func_636(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
		{
			return 0f;
		}
	}
	return &((Local_74[iParam0 /*31*/])->f_4.f_2[iParam1]);
}

int func_637(float fParam0)
{
	if (fParam0 < func_530())
	{
		return 4;
	}
	if (fParam0 < func_823())
	{
		return 2;
	}
	if (fParam0 < func_824())
	{
		return 1;
	}
	return 0;
}

bool func_639(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	iVar0 = PLAYER::PLAYER_PED_ID();
	vVar1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	fVar7 = aggregate_func_4333((aggregate_func_4006(0, -1, 1) * 0.95f), 0f, 20f);
	vVar8 = { aggregate_func_2907(vVar4 - vVar1) };
	vVar11 = { vVar1 + vVar8 * Vector(fVar7, fVar7, fVar7) / Vector(2f, 2f, 2f) };
	vVar14 = { func_826(vVar8, 0f, 0f, 1f) };
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		Local_1067.f_18.f_252 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar11, vVar14, fVar7, 1f, 2f, "PHOTO_CAM_VOL");
	}
	VOLUME::_0x541B8576615C33DE(Local_1067.f_18.f_252, vVar11);
	VOLUME::_0xA07CF1B21B56F041(Local_1067.f_18.f_252, vVar14);
	VOLUME::_0xA46E98BDC407E23D(Local_1067.f_18.f_252, fVar7, 1f, 1.75f);
	if (!aggregate_func_4015(32, 255))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		aggregate_func_3553(32);
	}
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		if (!PED::_0x164CECC59E70DF86(iParam0, 0.75f))
		{
			return true;
		}
		if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return true;
	}
	iVar17 = ITEMSET::CREATE_ITEMSET(true);
	iVar18 = ENTITY::_0x886171A12F400B89(Local_1067.f_18.f_252, iVar17, 1);
	iVar21 = aggregate_func_4995();
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		iVar20 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17));
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar20))
			{
				iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar20);
				if ((!func_640() || iVar22 != iVar0) && iVar22 != iParam0)
				{
					iVar23 = PED::GET_MOUNT(iParam0);
					if (iVar23 == 0 || iVar23 != iVar22)
					{
						if (iVar21 == 8)
						{
							iVar24 = aggregate_func_7382(2);
						}
						if (iVar24 == 0 || iVar24 != iVar22)
						{
							ITEMSET::_0x20A4BF0E09BEE146(iVar17);
							ITEMSET::DESTROY_ITEMSET(iVar17);
							return true;
						}
					}
				}
			}
		}
		iVar19++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar17);
	ITEMSET::DESTROY_ITEMSET(iVar17);
	return false;
}

bool func_640()
{
	return &Global_1956174;
}

bool func_641()
{
	switch (aggregate_func_4995())
	{
		case 9:
		case 10:
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

void func_644(float fParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), aggregate_func_6604(0));
	if (fVar1 < fParam0)
	{
		func_833(0, 0);
	}
	else
	{
		aggregate_func_2442(0);
	}
}

void func_645(var uParam0)
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_647(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
	{
		return;
	}
	func_834(Local_13.f_7.f_20, iParam0);
}

void func_649()
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (aggregate_func_1727(iVar0, 993674639, 1, 0))
	{
		iVar1 = func_315(0);
		sVar2 = func_835(0);
		if (iVar1 != 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, 0, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, 0, MISC::GET_HASH_KEY(sVar2), -1082130432 /* Float: -1f */, 0);
			}
		}
	}
}

void func_650()
{
	if (aggregate_func_3740(524288, 255) && !func_520(Local_13.f_7.f_11, Local_13.f_7.f_16))
	{
		aggregate_func_2922(524288);
	}
}

void func_652(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
	{
		return;
	}
	func_836(Local_13.f_7.f_20, iParam0);
}

bool func_653(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_447(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	return aggregate_func_2501(iVar0, iParam0);
}

int func_656()
{
	return 2;
}

void func_658()
{
	if (func_661())
	{
		if ((aggregate_func_2437(func_528(56)) || aggregate_func_2437(func_528(57))) || aggregate_func_2437(func_528(58)))
		{
			return;
		}
		aggregate_func_3614(1, 0, 0);
		if (!func_512(56))
		{
			func_516(0, 0, 56, 0);
		}
		else if (!func_512(57))
		{
			func_516(0, 0, 57, 0);
		}
		else if (!func_512(58))
		{
			func_516(0, 0, 58, 0);
		}
	}
}

void func_659()
{
	if (!aggregate_func_3027(1))
	{
		if (!func_512(59))
		{
			if (func_520(Local_13.f_7.f_9, 5000))
			{
				func_516(0, 0, 59, 0);
			}
		}
	}
}

bool func_661()
{
	int iVar0;

	if (aggregate_func_4006(0, -1, 1) > 50f)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(iVar0, "camera_takingPic");
		}
	}
	return false;
}

void func_662()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		aggregate_func_2922(256);
		return;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar19 = 255;
	if (func_639(iVar0))
	{
		iVar8 -= 5;
	}
	else
	{
		iVar8 = (iVar8 + func_839(iVar0));
	}
	if (aggregate_func_3663(iVar0, iVar2, 0))
	{
		iVar8++;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	if (func_841(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else if (func_842(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else
	{
		iVar9++;
	}
	iVar20 = aggregate_func_4995();
	switch (iVar20)
	{
		case 0:
			vVar4 = { func_326(1) };
			fVar7 = BUILTIN::VDIST(vVar4, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar7 < 2f)
			{
				iVar10 += 3;
			}
			else if (fVar7 < 4f)
			{
				iVar10 += 2;
			}
			else
			{
				iVar10 = iVar10;
			}
			break;
		case 1:
		case 2:
			iVar11 = (iVar11 + func_839(iVar1));
			if (aggregate_func_3663(iVar1, iVar2, 0))
			{
				iVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar3 = aggregate_func_7382(2);
			iVar12 = (iVar12 + func_839(iVar3));
			if (aggregate_func_3663(iVar3, iVar2, 0))
			{
				iVar12++;
			}
			if (Local_13.f_7.f_18 >= func_843())
			{
				iVar12 += 3;
			}
			else if (Local_13.f_7.f_18 >= func_844())
			{
				iVar12 += 2;
			}
			else
			{
				iVar12 = iVar12;
			}
			break;
		case 8:
			iVar3 = aggregate_func_7382(2);
			iVar12 = (iVar12 + func_839(iVar3));
			break;
		case 9:
		case 10:
		case 11:
			uVar15 = aggregate_func_130(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
			iVar16 = SCRIPTS::COUNT_PLAYER_BITS(&uVar15);
			if (iVar16 == 0)
			{
				iVar13 = -10;
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 32)
				{
					if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar15, iVar17))
					{
						iVar19 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
						iVar18 = PLAYER::GET_PLAYER_PED(iVar19);
						if (!ENTITY::IS_ENTITY_DEAD(iVar18))
						{
							iVar13 = (iVar13 + func_839(iVar18));
							switch (iVar20)
							{
								case 9:
									if (!WEAPON::_0xCB690F680A3EA971(iVar18, 4) || (!PLAYER::IS_PLAYER_FREE_AIMING(iVar19) && !NETWORK::_0x8E7CE19219669AEB(iVar19)))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 10:
									if (!aggregate_func_4015(134217728, iVar17) && (!WEAPON::_0xCB690F680A3EA971(iVar18, 4) || (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar19, iVar0, 0) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar19, iVar0))))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 11:
									if (PED::_0x3AA24CCC0D451379(iVar0))
									{
										iVar13++;
									}
									else
									{
										iVar13 = -10;
									}
									if (aggregate_func_3663(iVar18, iVar2, 0))
									{
										iVar13++;
									}
									break;
							}
						}
					}
					iVar17++;
				}
			}
			break;
	}
	iVar14 = (iVar14 + (((((iVar8 + iVar9) + iVar10) + iVar11) + iVar12) + iVar13));
	iVar21 = 7;
	iVar22 = 4;
	switch (iVar20)
	{
		case 0:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 1:
		case 2:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar21 = 9;
			iVar22 = 6;
			break;
		case 8:
			iVar21 = 6;
			iVar22 = 4;
			break;
		case 9:
		case 10:
		case 11:
			iVar21 = 7;
			iVar22 = 4;
			break;
	}
	if (!aggregate_func_3740(2048, 255))
	{
		if (iVar14 >= iVar21)
		{
			aggregate_func_2922(1024);
			aggregate_func_2922(512);
			aggregate_func_2922(256);
		}
		else if (iVar14 >= iVar22)
		{
			aggregate_func_2922(512);
			aggregate_func_2922(1024);
			aggregate_func_2922(256);
		}
		else
		{
			aggregate_func_2922(256);
			aggregate_func_2922(1024);
			aggregate_func_2922(512);
		}
	}
}

void func_663()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = aggregate_func_4995();
	iVar1 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return;
	}
	if (iVar0 == 11)
	{
		if (PED::_0x9682F850056C9ADE(iVar1) && !PED::_0x3AA24CCC0D451379(iVar1))
		{
			func_509(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
			return;
		}
		iVar2 = ENTITY::_0x61914209C36EFDDB(iVar1);
		switch (iVar2)
		{
			case 4:
			case 5:
			case 7:
			case 8:
				func_509(0, 65f, 5000, 0, 165, 166, 167, -1, -1, -1, 0, -1);
				if (func_512(167))
				{
					if (Local_13.f_7.f_14 == 0)
					{
						func_513(&(Local_13.f_7.f_14));
					}
				}
				return;
			default:
				break;
		}
	}
	if (Local_13.f_7.f_14 != 0)
	{
		Local_13.f_7.f_17 = (Local_13.f_7.f_17 + NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()));
		Local_13.f_7.f_14 = 0;
	}
	if (func_495())
	{
		if (func_845())
		{
			return;
		}
	}
	Local_13.f_7.f_6 = aggregate_func_130(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
	iVar3 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_6));
	Local_13.f_7.f_7 = aggregate_func_130(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 30f, 30f, 30f, -432403087, 0, 8);
	iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_7));
	if (func_641())
	{
		if (iVar3 < 1)
		{
			aggregate_func_4896(32768);
			if (iVar4 > 2)
			{
				func_509(0, 65f, 5000, 1, 140, 141, 142, -1, -1, -1, 0, 143);
				return;
			}
			else
			{
				func_509(0, 65f, 5000, 1, 137, 138, 139, -1, -1, -1, 0, 143);
				return;
			}
		}
	}
	aggregate_func_4896(32768);
	if (iVar0 == 10 || iVar0 == 9)
	{
		bVar6 = false;
		iVar8 = 255;
		iVar5 = 0;
		while (iVar5 < 32)
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_6), iVar5))
			{
				iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
				iVar7 = PLAYER::GET_PLAYER_PED(iVar8);
				if (!ENTITY::IS_ENTITY_DEAD(iVar7) && Local_13.f_7.f_21 != iVar8)
				{
					switch (iVar0)
					{
						case 9:
							if (WEAPON::_0xCB690F680A3EA971(iVar7, 4) && ((PLAYER::IS_PLAYER_FREE_AIMING(iVar8) || NETWORK::_0x8E7CE19219669AEB(iVar8)) || TASK::_0x8785E6E40C7A8819(iVar7)))
							{
								bVar6 = true;
							}
							else
							{
								Jump @687; //curOff = 620
								if (aggregate_func_4015(134217728, iVar5) || (WEAPON::_0xCB690F680A3EA971(iVar7, 4) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar8, iVar1, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar8, iVar1))))
								{
									bVar6 = true;
								}
								else
								{
									iVar5++;
								}
							}
							if (!bVar6)
							{
								aggregate_func_4896(65536);
								switch (iVar0)
								{
									case 9:
										func_509(0, 65f, 5000, 0, 147, 148, 149, -1, -1, -1, 0, 153);
										break;
									case 10:
										func_509(0, 65f, 5000, 0, 150, 151, 152, -1, -1, -1, 0, 153);
										break;
								}
								return;
							}
							func_670(iVar1);
							aggregate_func_4896(65536);
							if (iVar0 == 11)
							{
								if (!PED::_0x3AA24CCC0D451379(iVar1))
								{
									func_509(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
									return;
								}
								func_670(iVar1);
							}
							if (!aggregate_func_4644(16))
							{
								if ((iVar0 == 10 || iVar0 == 9) || iVar0 == 11)
								{
									func_509(0, 65f, 5000, 0, 144, 145, 146, -1, -1, -1, 0, 39);
								}
								else
								{
									func_509(0, 65f, 5000, 0, 36, 37, 38, -1, -1, -1, 0, 39);
								}
								return;
							}
							iVar9 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
							if (iVar9 == 0)
							{
								return;
							}
							vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
							if (func_841(vVar10))
							{
								func_509(0, 65f, 5000, 1, 52, 53, 54, -1, -1, -1, 0, 55);
								return;
							}
							else if (func_842(vVar10))
							{
								func_509(0, 65f, 5000, 1, 40, 41, 42, -1, -1, -1, 0, 43);
								return;
							}
							if (!aggregate_func_4644(32768))
							{
								func_509(0, 65f, 5000, 1, 44, 45, 46, -1, -1, -1, 0, 47);
								return;
							}
							if (func_641())
							{
								if (!aggregate_func_4644(262144))
								{
									func_509(0, 65f, 5000, 1, 161, 162, 163, -1, -1, -1, 0, 164);
									return;
								}
								else if (!aggregate_func_4644(131072))
								{
									func_509(0, 65f, 5000, 1, 158, 159, 160, -1, -1, -1, 0, 164);
									return;
								}
							}
							if ((func_495() || iVar0 == 1) || iVar0 == 8)
							{
								if (!aggregate_func_4644(65536))
								{
									iVar13 = 48;
									switch (iVar0)
									{
										case 3:
											iVar13 = 89;
											break;
										case 4:
											iVar13 = 90;
											break;
										case 5:
											iVar13 = 91;
											break;
										case 6:
											iVar13 = 92;
											break;
										case 7:
											iVar13 = 93;
											break;
									}
									func_509(0, 65f, 5000, 1, iVar13, 48, 49, 50, -1, -1, 0, 51);
									return;
								}
							}
							func_509(0, 65f, 5000, 1, 62, 63, 64, 17, 18, 19, 0, 20);
							default:
								break;
					}
				}
			}
		}
	}
}

bool func_664(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar3 = { func_326(1) };
	vVar6 = { func_326(0) };
	if (func_495())
	{
		vVar3 = { aggregate_func_6604(2) };
		vVar6 = { func_326(3) };
	}
	else if (aggregate_func_4995() == 9)
	{
		vVar3 = { func_326(5) };
		vVar6 = { func_326(6) };
	}
	vVar0 = { aggregate_func_2907(vVar6 - vVar3) * Vector(10f, 10f, 10f) + vVar6 };
	if (!aggregate_func_1536(iParam0, vVar0, 0.95f))
	{
		if (aggregate_func_1727(iParam0, 1464580341, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0, vVar0, -1);
		}
	}
	else
	{
		if (aggregate_func_4995() != 9)
		{
			if (Local_13.f_7.f_19 != -1)
			{
				if (aggregate_func_1727(iParam0, 993674639, 1, 0))
				{
					func_665();
				}
			}
		}
		return true;
	}
	return false;
}

void func_665()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (Local_13.f_7.f_19 == -1)
	{
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	iVar1 = aggregate_func_6711();
	iVar2 = func_315(iVar1);
	sVar3 = func_835(iVar1);
	if (!PED::_0x34D6AC1157C8226C(iVar0, iVar2))
	{
		if (iVar2 != 0)
		{
			PED::_0xA3A9299C4F2ADB98(iVar0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, 1, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, 1, MISC::GET_HASH_KEY(sVar3), -1082130432 /* Float: -1f */, 0);
			}
		}
	}
}

void func_667()
{
	if (MAP::DOES_BLIP_EXIST(Local_1067.f_18.f_153))
	{
		aggregate_func_2433(&(Local_1067.f_18.f_153));
	}
}

void func_668()
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_22))
	{
		func_647(5000);
		return;
	}
	func_834(Local_13.f_7.f_22, 5000);
}

bool func_669()
{
	float fVar0;

	fVar0 = 0f;
	switch (aggregate_func_4995())
	{
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.9f;
			break;
		case 5:
			fVar0 = 0.2f;
			break;
		case 6:
			fVar0 = 0.6f;
			break;
		case 7:
			fVar0 = 0.6f;
			break;
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fVar0;
}

void func_670(int iParam0)
{
	if (Local_1067.f_18.f_247 == 0)
	{
		Local_1067.f_18.f_247 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_848(), iParam0, -1f, 35f, 50f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
	}
}

void func_671()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_495())
	{
		return;
	}
	iVar0 = aggregate_func_7382(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (aggregate_func_2905(iVar0, 518218985))
	{
		return;
	}
	if (aggregate_func_2905(iVar0, -1442466670) || aggregate_func_2905(iVar0, -1952598043))
	{
		if (func_460(0, 2) < func_530())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_3553(64);
				func_499(25);
			}
		}
		return;
	}
	iVar1 = aggregate_func_2678(2, func_530(), 1);
	if (aggregate_func_4505(iVar1))
	{
		if (!aggregate_func_4644(268435456))
		{
			if (aggregate_func_4644(134217728))
			{
				aggregate_func_4896(268435456);
				iVar2 = aggregate_func_7382(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, 1609284507);
			}
		}
		if (aggregate_func_1727(iVar0, -1442466670, 1, 0))
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 100f, 0, 0);
		}
	}
	if (aggregate_func_2986(2))
	{
		if (aggregate_func_1727(iVar0, 518218985, 1, 0))
		{
			iVar3 = func_733(2);
			if (NETWORK::_0x255A5EF65EDA9167(iVar3))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar4, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, aggregate_func_6604(2), 500f, -1, false, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, aggregate_func_6604(2), 500f, -1, false, 1077936128);
			}
		}
	}
}

void func_673(float fParam0)
{
	float fVar0;

	if (!func_850(2) || func_851(2, 0))
	{
		aggregate_func_2442(2);
		return;
	}
	fVar0 = aggregate_func_4006(2, -1, 1);
	if (fVar0 < fParam0 && fVar0 != 0f)
	{
		if (!aggregate_func_4007(2))
		{
			aggregate_func_856(2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, "NB_PHOTOGRAPHY_BLIP_NAME_ANIMAL");
		}
	}
	else
	{
		aggregate_func_2372(2);
	}
}

void func_675(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
	{
		func_652(-1);
		return;
	}
	func_836(Local_13.f_7.f_24, iParam0);
}

void func_677()
{
	if (aggregate_func_4644(512))
	{
		return;
	}
	if (!aggregate_func_4644(16384))
	{
		if ((!aggregate_func_4644(32768) && !aggregate_func_4644(65536)) && !aggregate_func_4644(131072))
		{
			aggregate_func_4896(16384);
		}
	}
}

bool func_678(int iParam0, int iParam1)
{
	if (NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return aggregate_func_2148(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return false;
}

void func_679(int iParam0, vector3 vParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_1067.f_18.f_153))
	{
		return;
	}
	Local_1067.f_18.f_153 = MAP::_0xEC174ADBCB611ECC(1247852480, func_326(iParam0), vParam1, 0);
	MAP::_0x662D364ABF16DE2F(Local_1067.f_18.f_153, 1679075994);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1067.f_18.f_153, "NB_PHOTOGRAPHY_BLIP_NAME_OBJ");
}

void func_680()
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_23))
	{
		func_836(Local_13.f_7.f_23, -1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) || ENTITY::IS_ENTITY_DEAD(Local_1067.f_18.f_154))
	{
		func_652(-1);
		return;
	}
	iVar0 = PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_652(-1);
		return;
	}
	iVar1 = 255;
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		func_652(-1);
		return;
	}
	func_836(iVar1, -1);
}

float func_682(int iParam0, vector3 vParam1)
{
	return BUILTIN::VDIST(func_722(iParam0), vParam1);
}

void func_683(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
	{
		func_652(-1);
		return;
	}
	func_836(Local_13.f_7.f_21, iParam0);
}

bool func_686(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return false;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1067.f_18.f_244, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1067.f_18.f_244, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1067.f_18.f_244, sVar0);
		}
		return false;
	}
	return true;
}

bool func_687(char* sParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1067.f_18.f_244, sParam0);
}

void func_688(char* sParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1067.f_18.f_244, sParam0, true, true);
}

void func_689(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1067.f_18.f_244, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1067.f_18.f_244, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1067.f_18.f_244, sVar0);
		}
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1067.f_18.f_244, sVar0, true);
}

float func_690()
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return -1f;
	}
	return ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_1067.f_18.f_244);
}

void func_691(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (aggregate_func_4015(4, 255))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_520(Local_13.f_7.f_13, 2000))
		{
			return;
		}
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	switch (func_201())
	{
		case 0:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_TS";
			break;
		case 1:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_FS";
			break;
		case 2:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_DS";
			break;
	}
	aggregate_func_2916(sVar1, 10000, 0, 0, 0, 1);
	aggregate_func_3553(4);
}

bool func_692()
{
	int iVar0;
	int iVar1;

	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 != joaat("weapon_unarmed"))
				{
					if (aggregate_func_1727(iVar0, 716706914, 1, 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_693()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1019754709))
	{
		iVar1 = aggregate_func_7382(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), iVar1);
				}
				PED::DELETE_PED(&iVar1);
			}
		}
		iVar2 = func_454(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(2), iVar2);
				}
				OBJECT::DELETE_OBJECT(&iVar2);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1066693069))
	{
		iVar3 = func_454(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar3, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), iVar3);
				}
				OBJECT::DELETE_OBJECT(&iVar3);
			}
		}
	}
}

void func_695(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		iParam0 = Local_13.f_7.f_20;
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return;
		}
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	bVar2 = false;
	if (!aggregate_func_2905(iVar0, 242628503))
	{
		aggregate_func_3553(iParam1);
		bVar2 = true;
	}
	if ((Local_1067.f_18.f_155 != iParam0 && aggregate_func_2905(iVar0, 242628503)) && TASK::GET_SEQUENCE_PROGRESS(iVar0) > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		Local_1067.f_18.f_155 = iParam0;
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (!aggregate_func_4644(iParam1))
		{
			aggregate_func_3553(iParam1);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_311(iParam2), func_543(iParam2), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), 2000, 4f, -4f, 24, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
		}
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_311(iParam3), func_543(iParam3), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 25, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
		aggregate_func_1004(iVar0, &iVar3, 0, 0, 1, 1);
	}
}

void func_696()
{
	if (aggregate_func_4644(512))
	{
		return;
	}
	if (!aggregate_func_4644(8192))
	{
		if ((!aggregate_func_4644(32768) && !aggregate_func_4644(65536)) && !aggregate_func_4644(131072))
		{
			if (aggregate_func_3740(2048, 255) || aggregate_func_3740(4096, 255))
			{
				aggregate_func_1617(1872332830, 0, 0);
				aggregate_func_4896(8192);
			}
		}
	}
}

void func_697()
{
	int iVar0;

	if (aggregate_func_4644(512))
	{
		return;
	}
	if (!aggregate_func_4644(524288))
	{
		if ((!aggregate_func_4644(32768) && !aggregate_func_4644(65536)) && !aggregate_func_4644(131072))
		{
			if (aggregate_func_3740(2048, 255) || aggregate_func_3740(4096, 255))
			{
				iVar0 = 1356609994;
				if (aggregate_func_4644(512))
				{
					iVar0 = 783724279;
				}
				else if (aggregate_func_4644(1024))
				{
					iVar0 = -83587753;
				}
				if (aggregate_func_4638(iVar0, 0, 255, 0, 0))
				{
					aggregate_func_4896(524288);
				}
			}
		}
	}
}

void func_698()
{
	if (aggregate_func_3740(2048, 255) || aggregate_func_3740(4096, 255))
	{
		aggregate_func_6724();
	}
}

void func_699()
{
	if (aggregate_func_3740(2048, 255) || aggregate_func_3740(4096, 255))
	{
		aggregate_func_6692();
	}
}

void func_700()
{
	if (aggregate_func_2422(0, -1) || aggregate_func_2148(0, -1))
	{
		aggregate_func_7155(0);
		aggregate_func_6722(7, Local_1067.f_4);
	}
}

void func_701()
{
	if (!aggregate_func_4644(131072))
	{
		if (!aggregate_func_4015(2, 255))
		{
			aggregate_func_1617(-1315007749, 0, 0);
			aggregate_func_4896(65536);
		}
	}
}

void func_702(bool bParam0)
{
	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (bParam0)
	{
		if (aggregate_func_3740(8388608, 255))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 256, 0);
			aggregate_func_2922(8388608);
		}
	}
	else if (!aggregate_func_3740(8388608, 255))
	{
		PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), false, 256, 0);
		aggregate_func_2922(8388608);
	}
}

var func_721(int iParam0, int iParam1)
{
	return &((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/]);
}

Vector3 func_722(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(&(Local_1067.f_271.f_7[iParam0 /*11*/]), true, false);
}

int func_733(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(&(Local_13.f_49.f_1[iParam0])))
	{
	}
	if (&Local_13.f_49.f_5[iParam0] == 0)
	{
		return 255;
	}
	return &(Local_13.f_49.f_1[iParam0]);
}

bool func_736(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return aggregate_func_3528(iParam1, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)));
}

void func_738(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 - 1250);
	iVar1 = iParam1 + 1250;
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1);
}

void func_739(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 39:
			iVar0 = 1048576;
			break;
		case 20:
			iVar0 = 2097152;
			break;
		case 47:
			iVar0 = 4194304;
			break;
		case 51:
			iVar0 = 4194304;
			break;
		case 112:
			iVar0 = 16777216;
			break;
		case 116:
			iVar0 = 33554432;
			break;
		case 143:
			iVar0 = 67108864;
			break;
		case 153:
			iVar0 = 134217728;
			break;
		case 157:
			iVar0 = 268435456;
			break;
		case 164:
			iVar0 = 8388608;
			break;
		case 55:
			iVar0 = 536870912;
			break;
		case 43:
			iVar0 = 1073741824; /* Float: 2f */
			break;
	}
	if (iVar0 != 0)
	{
		aggregate_func_4896(iVar0);
	}
}

bool func_746(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam4 && AUDIO::_0x54B187F111D9C6F8(iParam0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		aggregate_func_3614(1, 0, 0);
	}
	if (func_871(iParam2))
	{
		if (!aggregate_func_4975(iParam0, func_528(iParam2), -1223286396, iParam1, 1, 0, 0, 1))
		{
			return false;
		}
	}
	else if (!aggregate_func_938(&(Local_1067.f_18.f_52), aggregate_func_6661(func_528(iParam2)), 0, -1, 0, 0))
	{
		return false;
	}
	if (!bParam3)
	{
		func_874(iParam2);
	}
	func_513(&(Local_13.f_7.f_9));
	return true;
}

bool func_747(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 128:
			return true;
		case 129:
			return true;
		case 130:
			return true;
		default:
			break;
	}
	return false;
}

void func_762(int iParam0)
{
	int iVar0;
	int iVar1;

	if (0 == iParam0)
	{
		if (aggregate_func_4644(8192))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
			{
				if (iVar0 == joaat("weapon_lasso") || iVar0 == -680302000)
				{
					aggregate_func_2136(iParam0);
					aggregate_func_2411(iParam0);
					iVar1 = aggregate_func_7382(iParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

void func_810(int iParam0, int iParam1)
{
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = "";
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = 1;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = -1;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = 0;
	if (aggregate_func_7938(iParam0))
	{
		aggregate_func_2878((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
}

void func_820(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = aggregate_func_4270(iVar0);
		aggregate_func_4011(iVar1, 0, bParam0, bParam1);
		aggregate_func_4011(iVar1, 1, bParam0, bParam1);
		aggregate_func_4011(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

float func_823()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 16f;
		case 4:
			return 16f;
		case 5:
			return 16f;
		case 6:
			return 16f;
		case 7:
			return 16f;
		default:
			break;
	}
	return 16f;
}

float func_824()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 25f;
		case 4:
			return 25f;
		case 5:
			return 25f;
		case 6:
			return 25f;
		case 7:
			return 25f;
		default:
			break;
	}
	return 25f;
}

Vector3 func_826(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { aggregate_func_2907(vParam0) };
	vVar3 = { aggregate_func_7249(aggregate_func_7249(vVar0, aggregate_func_2907(vParam3)), vVar0) };
	fVar6 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar7 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	vVar8 = { -vVar0.y, vVar0.x, 0f };
	vVar11 = { aggregate_func_7249(vVar8, vVar0) };
	fVar14 = (MISC::ATAN2((aggregate_func_5364(vVar8, vVar3) / BUILTIN::VMAG(vVar8)), (aggregate_func_5364(vVar11, vVar3) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_833(int iParam0, int iParam1)
{
	if (!aggregate_func_7208(255))
	{
		aggregate_func_2442(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_1067.f_18.f_3[iParam0 /*2*/])))
	{
		Local_1067.f_18.f_3[iParam0 /*2*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, aggregate_func_7382(0));
		switch (aggregate_func_4995())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_201() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				}
				break;
			case 1:
			case 2:
			case 8:
			case 9:
			case 10:
			case 11:
				if (func_201() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_FS");
				}
				break;
			default:
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				break;
		}
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_1067.f_18.f_3[iParam0 /*2*/]), 942020339);
	}
}

void func_834(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(Local_1067.f_18.f_156))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (Local_1067.f_18.f_156 != iParam0)
		{
			Local_1067.f_18.f_156 = iParam0;
		}
		func_938(&(Local_1067.f_18.f_219), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_156), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_1067.f_18.f_219));
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_1067.f_18.f_156 = iParam0;
		func_938(&(Local_1067.f_18.f_219), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_156), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_1067.f_18.f_219));
	}
}

char* func_835(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_MALE_D";
				case 1:
					return "WORLD_HUMAN_STAND_WAITING_MALE_B";
				case 2:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 3:
					return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_A_MOONSHINE";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_FEMALE_A";
						case 2:
							return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
						case 3:
							return "WORLD_CAMP_FIRE_SIT_GROUND_FEMALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_A_MOONSHINE";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_MALE_B";
						case 2:
							return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
						case 3:
							return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_836(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = aggregate_func_7382(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
	if (Local_1067.f_18.f_155 == iParam0 && aggregate_func_2905(iVar1, -875674219))
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(Local_1067.f_18.f_155))
	{
		if ((Local_1067.f_18.f_159 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000) || !aggregate_func_2905(iVar1, -875674219))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			if (iParam1 != -1)
			{
				if (func_520(Local_13.f_7.f_11, Local_13.f_7.f_16))
				{
					aggregate_func_2922(524288);
					Local_1067.f_18.f_155 = iParam0;
					Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					sVar2 = func_939(iParam1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(iParam1), func_543(iParam1), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 8, 0, 0, 0, -1082130432 /* Float: -1f */, sVar2, 0, -1082130432 /* Float: -1f */);
				}
				else if (Local_1067.f_18.f_155 != iParam0)
				{
					Local_1067.f_18.f_155 = iParam0;
					Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
				}
			}
			else
			{
				Local_1067.f_18.f_155 = iParam0;
				Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
			}
		}
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_1067.f_18.f_155 = iParam0;
		Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (iParam1 != -1)
		{
			aggregate_func_2922(524288);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(iParam1), func_543(iParam1), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 8, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
		}
	}
}

int func_839(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 0;
	}
	iVar0 = 0;
	fVar1 = 0.2f;
	fVar2 = 0.8f;
	fVar3 = 0.1f;
	fVar4 = 0.9f;
	vVar5 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	if (aggregate_func_2940(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	fVar1 = 0.4f;
	fVar2 = 0.6f;
	fVar3 = 0.3f;
	fVar4 = 0.7f;
	if (aggregate_func_2940(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_841(vector3 vParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) < 5f)
	{
		return true;
	}
	return false;
}

bool func_842(vector3 vParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7382(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) > 20f)
	{
		return true;
	}
	return false;
}

int func_843()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_844()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_845()
{
	float fVar0;

	fVar0 = 16f;
	switch (aggregate_func_4995())
	{
		case 3:
			fVar0 = 16f;
			break;
		case 4:
			fVar0 = 16f;
			break;
		case 5:
			fVar0 = 16f;
			break;
		case 6:
			fVar0 = 16f;
			break;
		case 7:
			fVar0 = 16f;
			break;
	}
	if (aggregate_func_2677(2, fVar0))
	{
		func_509(0, 65f, 5000, 2, 97, 98, -1, -1, -1, -1, 0, -1);
		return true;
	}
	return false;
}

int func_848()
{
	int iVar0;

	iVar0 = aggregate_func_4995();
	switch (iVar0)
	{
		case 0:
			return 697410695;
		case 1:
			return 161068336;
		case 2:
			return 697410695;
		case 3:
			return -1215290486;
		case 4:
			return -1227782948;
		case 5:
			return -1215290486;
		case 6:
			return -1215290486;
		case 7:
			return -1215290486;
		case 8:
			return 161068336;
		case 9:
			return -1130398329;
		case 10:
			return -1130398329;
		case 11:
			return 697410695;
		default:
			break;
	}
	return 161068336;
}

bool func_850(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(&(Local_1067.f_271.f_7[iParam0 /*11*/]));
}

bool func_851(int iParam0, bool bParam1)
{
	if (!bParam1 || func_850(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(&(Local_1067.f_271.f_7[iParam0 /*11*/]));
	}
	return false;
}

bool func_871(int iParam0)
{
	switch (iParam0)
	{
		case 176:
			return true;
		case 177:
			return true;
		case 178:
			return true;
		case 179:
			return true;
		default:
			break;
	}
	return false;
}

void func_874(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::SET_BIT(Local_1067.f_18.f_45[iVar1], iVar2);
}

bool func_875(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = aggregate_func_7382(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = aggregate_func_4006(iParam0, -1, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_938(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

char* func_939(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RightArmOnly_filter";
		case 2:
			return "RightArmOnly_filter";
		case 3:
			return "RightArmOnly_filter";
		case 4:
			return "RightArmOnly_filter";
		case 5:
			return "LeftArmOnly_filter";
		case 6:
			return "LeftArmOnly_filter";
		default:
			break;
	}
	return "";
}

