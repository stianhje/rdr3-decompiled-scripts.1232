#region Local Var
	struct<18> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_18 = 255;
	var uLocal_19 = 255;
	var uLocal_20 = 255;
	var uLocal_21 = 255;
	var uLocal_22 = 255;
	var uLocal_23 = 255;
	var uLocal_24 = 255;
	var uLocal_25 = 255;
	var uLocal_26 = 255;
	var uLocal_27 = 255;
	var uLocal_28 = 255;
	var uLocal_29 = 255;
	var uLocal_30 = 255;
	var uLocal_31 = 255;
	var uLocal_32 = 255;
	var uLocal_33 = 255;
	var uLocal_34 = 255;
	var uLocal_35 = 255;
	var uLocal_36 = 255;
	var uLocal_37 = 255;
	var uLocal_38 = 255;
	var uLocal_39 = 255;
	var uLocal_40 = 255;
	var uLocal_41 = 255;
	var uLocal_42 = 255;
	var uLocal_43 = 255;
	var uLocal_44 = 255;
	var uLocal_45 = 255;
	var uLocal_46 = 255;
	var uLocal_47 = 255;
	var uLocal_48 = 255;
	var uLocal_49 = 255;
	struct<6> Local_50[32];
	struct<1442> Local_243 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 7;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = -1;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	float fLocal_1703 = 0f;
	float fLocal_1704 = 0f;
	var uLocal_1705 = 0;
	struct<492> Local_1706 = { 0, 3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 9, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 15, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	struct<15> Local_2200[32];
	struct<1081> Local_2681 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 15, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 9, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 15, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 5, 0, -1, -1, 0, 0, 0, -1, 0, -1082130432, 0, 0, 0 } ;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == aggregate_func_3505

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 50, 54);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_50, 193, 55);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_50[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_1706, 494, 52);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_1706), 494, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2200, 481, 53);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_2200[0 /*15*/]), 481, "m_clientData");
}

void func_51()
{
	Local_2681.f_33 = Local_243.f_1391;
	if (DATAFILE::_0x603AC35FD4602C76(Local_2681.f_33))
	{
	}
	func_147(&(Local_2681.f_33));
	if (!func_148())
	{
	}
	func_149();
	func_150();
	func_151();
}

void func_64()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(24);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(36);
	aggregate_func_6739(-2065086408);
	aggregate_func_4355(1073741824 /* Float: 2f */);
	aggregate_func_4355(524288);
	Local_243.f_1420 = 0;
	aggregate_func_4355(131072);
	aggregate_func_4355(64);
	aggregate_func_4355(65536);
	aggregate_func_4355(65536);
	aggregate_func_4355(128);
	if (Local_243.f_2 == 893024815)
	{
		aggregate_func_3414(-441204543);
	}
	func_173(0);
	Local_2681.f_1075 = MISC::GET_GAME_TIMER();
}

void func_72()
{
	func_177();
	func_178();
	func_179();
	func_180(2f);
	if (func_181())
	{
		if (aggregate_func_8646(0) && aggregate_func_7854(0) != func_184())
		{
			aggregate_func_8091(0);
		}
	}
}

void func_125()
{
	func_173(1);
	if (Local_243.f_2 == 893024815)
	{
		aggregate_func_3010(-441204543);
	}
	if (MAP::DOES_BLIP_EXIST(Local_2681.f_38))
	{
		MAP::REMOVE_BLIP(&(Local_2681.f_38));
	}
}

void func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 47)
	{
		aggregate_func_3901(uParam0, func_375(iVar0, 1));
		iVar0++;
	}
}

bool func_148()
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2681.f_33))
	{
		return false;
	}
	Var0 = Local_2681.f_33;
	Var0.f_2 = -692671154;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!aggregate_func_3418(Var0, 2057649523, &(Local_2681.f_34), 0))
	{
	}
	return true;
}

void func_149()
{
	int iVar0;

	Local_2681.f_1065 = func_377(685218342);
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1065 - 1))
	{
		Local_2681.f_742[iVar0 /*2*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_378(Local_2681.f_742[iVar0 /*2*/]), false);
		iVar0++;
	}
}

void func_150()
{
	int iVar0;

	Local_2681.f_1066 = func_377(-565871549);
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1066 - 1))
	{
		Local_2681.f_797[iVar0] = iVar0;
		PROPSET::_REQUEST_PROPSET(func_379(Local_2681.f_797[iVar0]));
		iVar0++;
	}
}

void func_151()
{
	int iVar0;

	Local_2681.f_1063 = func_377(-1890596655);
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1063 - 1))
	{
		Local_2681.f_723[iVar0 /*3*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_380(Local_2681.f_723[iVar0 /*3*/]), false);
		iVar0++;
	}
}

void func_173(bool bParam0)
{
	if (!bParam0)
	{
		aggregate_func_4241(&(Global_1274635->f_32), 1);
	}
	else
	{
		aggregate_func_4243(&(Global_1274635->f_32), 1);
	}
}

void func_177()
{
	int iVar0[78];
	int iVar79;

	iVar79 = 0;
	while (iVar79 <= 77)
	{
		iVar0[iVar79] = iVar79;
		iVar79++;
	}
	func_412(&iVar0);
	iVar79 = 0;
	while (iVar79 <= 14)
	{
		(Local_1706.f_314[iVar79 /*3*/])->f_1 = &iVar0[iVar79];
		(Local_1706.f_314[iVar79 /*3*/])->f_2 = func_413();
		STREAMING::REQUEST_MODEL((Local_1706.f_314[iVar79 /*3*/])->f_2, false);
		iVar79++;
	}
}

void func_178()
{
	int iVar0[9];
	int iVar10;

	iVar10 = 0;
	while (iVar10 <= 8)
	{
		iVar0[iVar10] = iVar10;
		iVar10++;
	}
	func_412(&iVar0);
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		(Local_1706.f_360[iVar10 /*6*/])->f_4 = &iVar0[iVar10];
		STREAMING::REQUEST_MODEL(func_414(Local_1706.f_360[iVar10 /*6*/]), false);
		iVar10++;
	}
}

void func_179()
{
	int iVar0[45];
	int iVar46;
	vector3 vVar47;
	var uVar50;
	int iVar51;
	int iVar52;
	var uVar53;

	iVar46 = 0;
	while (iVar46 <= 44)
	{
		iVar0[iVar46] = iVar46;
		iVar46++;
	}
	func_412(&iVar0);
	iVar46 = 0;
	while (iVar46 <= 14)
	{
		(Local_1706.f_415[iVar46 /*4*/])->f_3 = &iVar0[iVar46];
		vVar47 = { func_415(Local_1706.f_415[iVar46 /*4*/]) };
		uVar50 = vVar47.z;
		if (!func_417(&((Local_2681.f_1032[iVar46 /*2*/])->f_1), func_416(Local_1706.f_415[iVar46 /*4*/]), uVar50, &iVar51, &iVar52, &uVar53))
		{
		}
		switch (iVar51)
		{
			case joaat("common"):
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 2);
				break;
			case -777576080:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 4);
				break;
			case -417755324:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 8);
				break;
		}
		switch (iVar52)
		{
			case 0:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 16);
				break;
			case 1:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 32);
				break;
			case 2:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 64);
				break;
			case 3:
				aggregate_func_4247(Local_1706.f_415[iVar46 /*4*/], 128);
				break;
		}
		(Local_1706.f_415[iVar46 /*4*/])->f_1 = iVar52;
		(Local_1706.f_415[iVar46 /*4*/])->f_2 = uVar53;
		iVar46++;
	}
}

void func_180(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_50[iVar2 /*6*/] >= 2)
		{
			iVar1++;
		}
		iVar2++;
	}
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
		case 2:
			Local_1706.f_5 = 25f;
			break;
		case 3:
		case 4:
			Local_1706.f_5 = 20f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_1706.f_5 = 15f;
			break;
		default:
			Local_1706.f_5 = 10f;
			break;
	}
	if (func_419(1404758079) < 2)
	{
		Local_1706.f_5 = (Local_1706.f_5 * 0.5f);
	}
	if ((Local_2681.f_1080 + Local_2681.f_1078) < 10)
	{
		Local_1706.f_5 = (Local_1706.f_5 * 0.5f);
	}
	if (fParam0 > 0f)
	{
		Local_1706.f_5 = fParam0;
	}
}

bool func_181()
{
	return Local_243.f_2 == -348618743;
}

int func_184()
{
	return -735194130;
}

bool func_190()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	if (func_181())
	{
		if (aggregate_func_8646(0))
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (!func_423())
			{
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 <= (Local_2681.f_1066 - 1))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(func_379(Local_2681.f_797[iVar2])))
		{
			return false;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_414(Local_1706.f_360[iVar2 /*6*/])))
		{
			return false;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 14)
	{
		if ((Local_1706.f_314[iVar2 /*3*/])->f_1 == -1)
		{
			return false;
		}
		if (&Local_2681.f_805[iVar2 /*12*/] == -1)
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(aggregate_func_4249(Local_1706.f_314[iVar2 /*3*/])))
		{
			return false;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (Local_2681.f_1063 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_380(Local_2681.f_723[iVar2 /*3*/])))
		{
			return false;
		}
		iVar2++;
	}
	return iVar0;
}

void func_192()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		func_425(Local_1706.f_360[iVar0 /*6*/], Local_2681.f_986[iVar0 /*5*/]);
		iVar0++;
	}
}

bool func_194()
{
	int iVar0;

	iVar0 = 1;
	if (!func_426())
	{
		iVar0 = 0;
	}
	if (!aggregate_func_8615())
	{
		iVar0 = 0;
	}
	if (!func_428())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_211()
{
	int iVar0;
	int iVar1;

	func_441();
	func_442();
	func_443();
	iVar0 = aggregate_func_2736(2);
	iVar1 = aggregate_func_2393(2);
	if (iVar0 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_235()
{
	int iVar0;

	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < 24)
	{
		return false;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < 36)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1065 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_378(Local_2681.f_742[iVar0 /*2*/])))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if ((Local_1706.f_314[iVar0 /*3*/])->f_1 == -1)
		{
			return false;
		}
		if (&Local_2681.f_805[iVar0 /*12*/] == -1)
		{
			func_463();
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_237()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (!func_464())
	{
		iVar0 = 0;
	}
	if (!func_465())
	{
		iVar0 = 0;
	}
	if (!func_466())
	{
		iVar0 = 0;
	}
	if (func_181())
	{
		if (!Local_2681.f_1076)
		{
			iVar0 = 0;
			iVar1 = aggregate_func_7856(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_2743();
				}
				if (VEHICLE::_0xBD3C4A2ED509205E(iVar1))
				{
					Local_2681.f_1076 = 1;
				}
			}
		}
	}
	return iVar0;
}

void func_238()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_469(Local_1706.f_314[iVar0 /*3*/], Local_2681.f_805[iVar0 /*12*/]);
		Local_2681.f_805[iVar0 /*12*/] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1063 - 1))
	{
		(Local_2681.f_723[iVar0 /*3*/])->f_1 = NETWORK::NET_TO_VEH(&(Local_1706.f_476[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		(Local_2681.f_986[iVar0 /*5*/])->f_3 = NETWORK::NET_TO_OBJ(&(Local_1706.f_360[iVar0 /*6*/]));
		Local_2681.f_986[iVar0 /*5*/] = iVar0;
		(Local_2681.f_986[iVar0 /*5*/])->f_4 = GRAPHICS::_0xFA50F79257745E74(ENTITY::GET_ENTITY_COORDS((Local_2681.f_986[iVar0 /*5*/])->f_3, true, false), 1.5f, 1, -1, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Local_2681.f_1032[iVar0 /*2*/] = iVar0;
		iVar0++;
	}
	Local_1706.f_14 = -1;
	func_470();
}

void func_251()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	if ((!aggregate_func_4281(128) && !aggregate_func_2920(Local_243.f_1287)) && !aggregate_func_2920(Local_243.f_1291))
	{
		Local_243.f_1291 = aggregate_func_6834(MISC::_CREATE_VAR_STRING(2, "FME_WK_SHARD_COMDIS"), joaat("COLOR_WHITE"));
		if (aggregate_func_4246(Local_243.f_1291))
		{
			aggregate_func_4355(128);
		}
	}
}

void func_263()
{
	int iVar0;

	func_538();
	aggregate_func_6999(&(Local_2681.f_1));
	aggregate_func_8076(&(Local_2681.f_1), 1);
	aggregate_func_5528(&(Local_2681.f_1), 1);
	if (func_181())
	{
		iVar0 = aggregate_func_7856(0);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
		VEHICLE::_0x07E2E21E799080A0(iVar0, 1);
		VEHICLE::EXPLODE_VEHICLE(iVar0, true, true, 0);
	}
	func_542(1);
}

bool func_269()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = Local_2681.f_1074;
	if ((Local_50[Local_243.f_1332 /*6*/])->f_3 != iVar0)
	{
		(Local_50[Local_243.f_1332 /*6*/])->f_3 = iVar0;
	}
	iVar1 = aggregate_func_3301(aggregate_func_4354(-1048906573));
	iVar1 = (iVar1 - Local_243.f_1280);
	if (iVar1 != (Local_50[Local_243.f_1332 /*6*/])->f_4)
	{
		(Local_50[Local_243.f_1332 /*6*/])->f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= (Local_243.f_1276 - 1))
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_243.f_1389;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = (Local_50[iVar9 /*6*/])->f_2;
			fVar3 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_3);
			fVar4 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		aggregate_func_813(&(Local_243.f_13), fVar2, iVar8, Local_243.f_971[iVar9], !aggregate_func_6777(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_243.f_1389++;
		if (Local_243.f_1389 >= 32)
		{
			Local_243.f_1389 = 0;
		}
		iVar10++;
	}
	aggregate_func_3457(&(Local_243.f_13));
	return true;
}

void func_273()
{
	func_542(0);
	func_568();
	func_569();
	func_570();
	func_571();
	if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 1) && func_573())
	{
		aggregate_func_3902(1);
	}
	if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 2) && func_575())
	{
		aggregate_func_3902(2);
	}
	if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 4) && func_576())
	{
		aggregate_func_3902(4);
	}
}

int func_283()
{
	return 557057;
}

void func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_49[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_49[iVar0 /*22*/])->f_21 - 1))
			{
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_49[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_49[iVar0 /*22*/])->f_1[iVar1 /*6*/]))) && ENTITY::IS_ENTITY_VISIBLE(&((Local_2681.f_50[iVar0 /*56*/])->f_1[iVar1 /*17*/])))
				{
					ENTITY::SET_ENTITY_VISIBLE(&((Local_2681.f_50[iVar0 /*56*/])->f_1[iVar1 /*17*/]), false);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

char[] func_319()
{
	float fVar0;

	fVar0 = (Local_50[Local_243.f_1332 /*6*/])->f_2;
	if (BUILTIN::FLOOR(fVar0) == 1)
	{
		return MISC::_CREATE_VAR_STRING(2, "FME_WK_SHARD_OUTRO_PRIMARY_WON_1", BUILTIN::FLOOR(fVar0));
	}
	return MISC::_CREATE_VAR_STRING(2, "FME_WK_SHARD_OUTRO_PRIMARY_WON", BUILTIN::FLOOR(fVar0));
}

char[] func_322(float fParam0)
{
	return "";
}

bool func_338()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1065 - 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((Local_2681.f_742[iVar0 /*2*/])->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2681.f_1063 - 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_1706.f_476[iVar0])))
		{
			aggregate_func_1025(Local_1706.f_476[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		aggregate_func_4620(&((Local_2681.f_805[iVar0 /*12*/])->f_2));
		func_633((Local_2681.f_805[iVar0 /*12*/])->f_1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_1706.f_314[iVar0 /*3*/])))
		{
			aggregate_func_1025(Local_1706.f_314[iVar0 /*3*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		_NAMESPACE49::_0x9D16896F0DBE78A2(func_634(Local_1706.f_360[iVar0 /*6*/]), 10f);
		GRAPHICS::_0x9CF1836C03FB67A2(&((Local_2681.f_986[iVar0 /*5*/])->f_4), 0);
		func_633((Local_2681.f_986[iVar0 /*5*/])->f_3);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_1706.f_360[iVar0 /*6*/])))
		{
			aggregate_func_1025(Local_1706.f_360[iVar0 /*6*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		TASK::_0x81948DFE4F5A0283((Local_2681.f_1032[iVar0 /*2*/])->f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (TASK::_0x841475AC96E794D1(&(Local_2681.f_40[iVar0])))
		{
			TASK::_0x81948DFE4F5A0283(&(Local_2681.f_40[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_49[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_49[iVar0 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_49[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_49[iVar0 /*22*/])->f_1[iVar1 /*6*/])))
				{
					aggregate_func_1025((Local_1706.f_49[iVar0 /*22*/])->f_1[iVar1 /*6*/]);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return true;
}

int func_375(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1695952109;
		case 1:
			return -692671154;
		case 2:
			return 2057649523;
		case 3:
			return 1248369828;
		case 4:
			return 1268095596;
		case 5:
			return -538315284;
		case 6:
			return 1218921439;
		case 7:
			return -1191553031;
		case 8:
			return 1687465887;
		case 9:
			return 1381829424;
		case 10:
			return -348163890;
		case 11:
			return -1538366747;
		case 12:
			return 1979614790;
		case 13:
			return -1833360518;
		case 14:
			return 425959891;
		case 15:
			return 256247696;
		case 16:
			return 413811142;
		case 17:
			return -1515541953;
		case 18:
			return -1774701585;
		case 19:
			return 89029101;
		case 20:
			return -43053691;
		case 21:
			return 2066571170;
		case 22:
			return -1890596655;
		case 23:
			return 2025794970;
		case 24:
			return 685218342;
		case 25:
			return 733276510;
		case 26:
			return -565871549;
		case 27:
			return 1497039912;
		case 28:
			return 796262628;
		case 29:
			return -1084127701;
		case 30:
			return -14916973;
		case 31:
			return -1851356988;
		case 32:
			return -335517339;
		case 33:
			return 612244624;
		case 34:
			return 2019912578;
		case 35:
			return -1639163394;
		case 36:
			return 1763905867;
		case 37:
			return 810522312;
		case 38:
			return -570563579;
		case 39:
			return 137865554;
		case 40:
			return 766008034;
		case 41:
			return -531292328;
		case 42:
			return 536703056;
		case 43:
			return -1848254013;
		case 44:
			return -767930282;
		case 45:
			return 1310428614;
		case 46:
			return -355516948;
		case 47:
			return -1198443210;
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

int func_377(int iParam0)
{
	vector3 vVar0;
	int iVar5;

	if (func_671(&vVar0))
	{
		vVar0.f_2 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
		{
			iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y);
		}
	}
	return iVar5;
}

int func_378(var uParam0)
{
	return func_672(*uParam0, 733276510);
}

int func_379(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_671(&Var0))
	{
		Var0.f_2 = 1497039912;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate_func_3012(Var0, -1833360518, &iVar5, 0);
		}
	}
	return iVar5;
}

int func_380(var uParam0)
{
	return func_672(*uParam0, 2025794970);
}

void func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = (*iParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = iParam0[iVar1];
		(*iParam0)[iVar1] = iParam0[iVar0];
		(*iParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

int func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = func_717(1);
	iVar1 = 1;
	while (iVar1 == 1)
	{
		iVar1 = func_718();
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = -1155590626;
					break;
				case -777576080:
					iVar2 = -1551342312;
					break;
				case -417755324:
					iVar2 = 673063823;
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = 1604267113;
					break;
				case -777576080:
					iVar2 = 1093733824;
					break;
				case -417755324:
					iVar2 = -409863402;
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = 1392186231;
					break;
				case -777576080:
					iVar2 = -1206565311;
					break;
				case -417755324:
					iVar2 = -1585005420;
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = -1812392162;
					break;
				case -777576080:
					iVar2 = -1812392162;
					break;
				case -417755324:
					iVar2 = -1812392162;
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = -665031091;
					break;
				case -777576080:
					iVar2 = -665031091;
					break;
				case -417755324:
					iVar2 = -665031091;
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case joaat("common"):
					iVar2 = -1213438170; /* GXTEntry: "Tarot Card" */
					break;
				case -777576080:
					iVar2 = -1213438170; /* GXTEntry: "Tarot Card" */
					break;
				case -417755324:
					iVar2 = -1213438170; /* GXTEntry: "Tarot Card" */
					break;
			}
			break;
	}
	Var3.f_2 = 1763905867;
	Var3 = Local_2681.f_33;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
	}
	Var3.f_2 = 766008034;
	Var3.f_3 = iVar2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
	}
	iVar8 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var3, Var3.f_1);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
	Var3.f_2 = 536703056;
	Var3.f_3 = iVar9;
	iVar10 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
	}
	iVar11 = 0;
	if (!aggregate_func_3012(Var3, -1833360518, &iVar11, 0))
	{
	}
	iVar10 = iVar11;
	return iVar10;
}

int func_414(var uParam0)
{
	return func_672(uParam0->f_4, -1851356988);
}

Vector3 func_415(var uParam0)
{
	return func_719(uParam0->f_3, 612244624);
}

Vector3 func_416(var uParam0)
{
	return func_720(uParam0->f_3, 612244624);
}

bool func_417(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, var uParam7)
{
	if (TASK::_0x841475AC96E794D1(*uParam0))
	{
		return true;
	}
	func_721(iParam5, iParam6, uParam7);
	*uParam0 = TASK::CREATE_SCENARIO_POINT(func_722(*iParam6), vParam1, iParam4, 0, 0, 0);
	if (!TASK::_0x841475AC96E794D1(*uParam0))
	{
		return false;
	}
	TASK::_0xC47D9080A9A8856A(*uParam0, *uParam7);
	TASK::_0xD3A0DA8F91612C6E(*uParam0, 99f, 1);
	return true;
}

int func_419(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (aggregate_func_4278(Local_1706.f_49[iVar0 /*22*/], 1) && &Local_2681.f_50[iVar0 /*56*/] == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_422(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 8, &uParam1);
	return 1;
}

bool func_423()
{
	vector3 vVar0;

	vVar0 = { -5026.198f, -2549.442f, -8.8526f };
	if (!aggregate_func_492(0, vVar0))
	{
		if (Local_2681.f_1075 == -1 || (MISC::GET_GAME_TIMER() - Local_2681.f_1075) > Global_1901929->f_295.f_178)
		{
			if (Local_2681.f_1075 == -1)
			{
			}
		}
		else
		{
			return false;
		}
	}
	aggregate_func_8647(0, func_184(), vVar0, 1, Local_243.f_7);
	return true;
}

void func_425(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	switch (func_414(uParam0))
	{
		case joaat("p_strongbox_waterlogged_01x"):
		case joaat("p_strongbox_rusted_01x"):
			uParam0->f_3 = 94059948;
			if (iVar0 < 60)
			{
				uParam0->f_2 = -2012539830;
			}
			else
			{
				uParam0->f_2 = 1211144132;
			}
			break;
		case joaat("s_footlocker03x"):
		case -1370447667:
		case joaat("p_lootablecrate01x"):
		case joaat("s_footlocker01x"):
		case joaat("s_lootablebigmiscchest"):
		case 1068085544:
		case joaat("s_footlockermud02x"):
			uParam0->f_3 = 1732377668;
			if (iVar0 < 10)
			{
				uParam0->f_2 = -411015399;
			}
			else if (iVar0 < 40)
			{
				uParam0->f_2 = -1959105293;
			}
			else
			{
				uParam0->f_2 = 441724574;
			}
			break;
		default:
			break;
	}
}

bool func_426()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (!func_729(Local_1706.f_314[iVar1 /*3*/], Local_2681.f_805[iVar1 /*12*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_428()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (!func_731(Local_1706.f_360[iVar1 /*6*/], Local_2681.f_986[iVar1 /*5*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_429()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					if (!func_732(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_732(1, joaat("guard"), 1))
					{
						return 0;
					}
					if (!func_732(2, -1553326850, 0))
					{
						return 0;
					}
					if (!func_732(3, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_732(4, joaat("defensive"), 1))
					{
						return 0;
					}
					if (!func_732(5, 200161421, 0))
					{
						return 0;
					}
					break;
				case -348618743:
					if (!func_732(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_732(1, -1553326850, 0))
					{
						return 0;
					}
					if (!func_732(2, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_732(3, 200161421, 0))
					{
						return 0;
					}
					break;
				case -1837356407:
					if (!func_732(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_732(1, -1553326850, 0))
					{
						return 0;
					}
					if (!func_732(2, -1553326850, 1))
					{
						return 0;
					}
					if (!func_732(3, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_732(4, joaat("defensive"), 1))
					{
						return 0;
					}
					if (!func_732(5, 200161421, 0))
					{
						return 0;
					}
					break;
				default:
					break;
			}
			break;
		case 11:
			if (!func_732(0, -931055996, 0))
			{
				return 0;
			}
			if (!func_732(1, -931055996, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_441()
{
	Local_2681++;
	if (Local_2681 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_2681 = 0;
	}
	func_734(Local_2681);
	if (!aggregate_func_7689(2) && aggregate_func_7846(Local_2681, 1))
	{
		aggregate_func_7859(2);
	}
	if (!aggregate_func_7689(4) && aggregate_func_7846(Local_2681, 2))
	{
		aggregate_func_7859(4);
	}
	if (!aggregate_func_7689(8) && aggregate_func_7846(Local_2681, 4))
	{
		aggregate_func_7859(8);
	}
}

void func_442()
{
	int iVar0;

	func_737();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_738(Local_1706.f_49[iVar0 /*22*/], Local_2681.f_50[iVar0 /*56*/]))
		{
			func_739(Local_1706.f_49[iVar0 /*22*/], Local_2681.f_50[iVar0 /*56*/]);
			if ((aggregate_func_4278(Local_1706.f_49[iVar0 /*22*/], 32) && !aggregate_func_7689(32)) && &Local_2681.f_50[iVar0 /*56*/] != -1553326850)
			{
				func_740(iVar0);
			}
		}
		iVar0++;
	}
}

void func_443()
{
	int iVar0;

	if (aggregate_func_3724(&(Local_1706.f_11)) < Local_1706.f_5)
	{
		return;
	}
	if (aggregate_func_6784() < 30000)
	{
		return;
	}
	if (func_742() == -1)
	{
		return;
	}
	func_180(0);
	iVar0 = func_743();
	if (iVar0 == 0)
	{
		return;
	}
	func_744(iVar0, -1);
	aggregate_func_4480(&(Local_1706.f_11));
	aggregate_func_4480(&(Local_1706.f_8));
}

void func_446()
{
	if (aggregate_func_7104(&(Local_243.f_13)) > 0f)
	{
		aggregate_func_3488((Local_243.f_13.f_210[0 /*23*/])->f_14);
	}
	aggregate_func_4247(&(Local_0.f_13), 256);
}

void func_462()
{
	aggregate_func_1339("MP_OWC_END", 1, 0);
}

void func_463()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Local_2681.f_805[iVar0 /*12*/] = iVar0;
		iVar0++;
	}
}

bool func_464()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Local_2681.f_1065 - 1))
	{
		if (!func_758(Local_2681.f_742[iVar1 /*2*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_465()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (!func_759(Local_1706.f_360[iVar1 /*6*/], Local_2681.f_986[iVar1 /*5*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_466()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 14)
	{
		if (!func_760(Local_1706.f_415[iVar1 /*4*/], Local_2681.f_1032[iVar1 /*2*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_469(var uParam0, var uParam1)
{
	uParam1->f_1 = NETWORK::NET_TO_OBJ(*uParam0);
}

void func_470()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	Local_2681.f_1067 = func_377(-43053691);
	iVar5 = 0;
	while (iVar5 <= (Local_2681.f_1067 - 1))
	{
		func_762(iVar5, &vVar0, &iVar3, &iVar4);
		Local_2681.f_40[iVar5] = TASK::CREATE_SCENARIO_POINT(iVar4, vVar0, iVar3, 0, 0, 1);
		iVar5++;
	}
}

void func_538()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					func_840(0, joaat("guard"));
					func_840(1, joaat("guard"));
					func_840(2, -1553326850);
					func_840(3, joaat("defensive"));
					func_840(4, joaat("defensive"));
					func_840(5, 200161421);
					break;
				case -348618743:
					func_840(0, joaat("guard"));
					func_840(1, -1553326850);
					func_840(2, joaat("defensive"));
					func_840(3, 200161421);
					break;
				case -1837356407:
					func_840(0, joaat("guard"));
					func_840(1, -1553326850);
					func_840(2, -1553326850);
					func_840(3, joaat("defensive"));
					func_840(4, joaat("defensive"));
					func_840(5, 200161421);
					break;
				default:
					break;
			}
			break;
		case 11:
			func_840(0, -931055996);
			func_840(1, -931055996);
			break;
	}
}

void func_542(bool bParam0)
{
	int iVar0;

	if (Local_243.f_2 != -1837356407)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_2681.f_723[iVar0 /*3*/])->f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_2681.f_723[iVar0 /*3*/])->f_1))
		{
			VEHICLE::_0x873AAF600CC36DAC((Local_2681.f_723[iVar0 /*3*/])->f_1);
			if (bParam0)
			{
				FIRE::ADD_EXPLOSION(aggregate_func_8617(Local_2681.f_723[iVar0 /*3*/]) - Vector(0.5f, 0f, 0f), 26, 1f, false, 1, 0f);
			}
		}
		iVar0++;
	}
}

void func_568()
{
	if (aggregate_func_6777(Local_243.f_1332))
	{
		if (!MAP::DOES_BLIP_EXIST(Local_2681.f_38))
		{
			Local_2681.f_38 = MAP::_0x45F13B7E0A15C880(1055493006, aggregate_func_5996(), 200f);
			switch (Local_243.f_2)
			{
				case 893024815:
					MAP::SET_BLIP_SPRITE(Local_2681.f_38, 1106719664, true);
					break;
				case -348618743:
					MAP::SET_BLIP_SPRITE(Local_2681.f_38, -250506368 /* GXTEntry: "Train" */, true);
					break;
				case -1837356407:
					MAP::SET_BLIP_SPRITE(Local_2681.f_38, 874255393 /* GXTEntry: "Wagon" */, true);
					break;
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2681.f_38, "FME_WK_WRECKAGE");
		}
		if (!aggregate_func_4281(1) && aggregate_func_3482(Local_243.f_1289))
		{
			switch (Local_243.f_2)
			{
				case 893024815:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_MAIN_BOAT");
					break;
				case -348618743:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_MAIN_TRAIN");
					break;
				case -1837356407:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_MAIN_WAGON");
					break;
				default:
					break;
			}
			aggregate_func_4355(1);
		}
		if ((!aggregate_func_4281(2) && aggregate_func_6784() > 30000) && aggregate_func_3482(Local_243.f_1289))
		{
			Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_EE");
			aggregate_func_4355(2);
		}
		if ((!aggregate_func_4281(64) && aggregate_func_1279(PLAYER::PLAYER_PED_ID(), aggregate_func_5996(), 200f, 0, 0)) && aggregate_func_1339("MC_DELIVERING", 1, 0))
		{
			aggregate_func_4355(64);
		}
		if ((!aggregate_func_4281(4) && aggregate_func_1279(PLAYER::PLAYER_PED_ID(), aggregate_func_5996(), 200f, 0, 0)) && aggregate_func_3482(Local_243.f_1289))
		{
			Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_AREA");
			aggregate_func_4355(4);
		}
		if ((!aggregate_func_4281(8) && aggregate_func_4281(32)) && aggregate_func_3482(Local_243.f_1289))
		{
			Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_ATK");
			aggregate_func_4355(8);
		}
		if ((!aggregate_func_4281(16) && aggregate_func_6784() > 300000) && aggregate_func_3482(Local_243.f_1289))
		{
			switch (Local_243.f_2)
			{
				case 893024815:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_AREA_BOAT");
					break;
				case -348618743:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_AREA_TRAIN");
					break;
				case -1837356407:
					Local_243.f_1289 = aggregate_func_3074("FME_WK_HELP_AREA_WAGON");
					break;
				default:
					break;
			}
			aggregate_func_4355(16);
		}
		aggregate_func_3535(7, "FME_WK_OBJ_FIND_LOOT", -1, 0);
	}
}

void func_569()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (Local_2681.f_1069 == 0)
	{
		return;
	}
	if (Local_2681.f_1070 == -1 || Local_2681.f_1071 == -1)
	{
		return;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = 291934926;
	iVar3 = 0;
	switch (Local_2681.f_1069)
	{
		case 2:
			break;
	}
	if (func_862(Local_2681.f_1069, Local_2681.f_1070, Local_2681.f_1071, bVar0, bVar1, iVar2, iVar3))
	{
		Local_2681.f_1069 = 0;
		Local_2681.f_1070 = -1;
		Local_2681.f_1071 = -1;
	}
}

void func_570()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_863(iVar0);
				break;
			case 141007368:
				func_864(iVar0);
				break;
			case -1315570756:
				func_865(iVar0);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar1)
		{
			case -1511724297:
				func_866(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_571()
{
	int iVar0;

	func_867();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_738(Local_1706.f_49[iVar0 /*22*/], Local_2681.f_50[iVar0 /*56*/]))
		{
			func_868(Local_1706.f_49[iVar0 /*22*/], Local_2681.f_50[iVar0 /*56*/]);
		}
		iVar0++;
	}
}

bool func_573()
{
	int iVar0;
	int iVar1;

	Local_2681.f_1078 = 15;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_869(Local_1706.f_314[iVar0 /*3*/], Local_2681.f_805[iVar0 /*12*/]))
		{
			Local_2681.f_1078 = (Local_2681.f_1078 - 1);
		}
		else
		{
			aggregate_func_204(&((Local_2681.f_805[iVar0 /*12*/])->f_2), ENTITY::GET_ENTITY_COORDS((Local_2681.f_805[iVar0 /*12*/])->f_1, true, false), 1, 0, 1);
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_575()
{
	int iVar0;
	int iVar1;

	Local_2681.f_1079 = 9;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (func_871(Local_1706.f_360[iVar0 /*6*/], Local_2681.f_986[iVar0 /*5*/]))
		{
			func_872(Local_1706.f_360[iVar0 /*6*/], Local_2681.f_986[iVar0 /*5*/]);
			Local_2681.f_1079 = (Local_2681.f_1079 - 1);
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_576()
{
	int iVar0;
	int iVar1;

	Local_2681.f_1080 = 15;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (func_873(Local_1706.f_415[iVar0 /*4*/], Local_2681.f_1032[iVar0 /*2*/]))
		{
			Local_2681.f_1080 = (Local_2681.f_1080 - 1);
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_605()
{
	struct<8> Var0;
	int iVar8;

	Var0 = { aggregate_func_4941() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_243.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_243.f_1338 };
		}
	}
	iVar8 = BUILTIN::FLOOR((Local_50[Local_243.f_1332 /*6*/])->f_2);
	Local_243.f_1287 = aggregate_func_6830(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_WK_COLL", iVar8), aggregate_func_5995(), aggregate_func_4843());
	return true;
}

void func_633(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::_0xDC5E09D012D759C4(iParam0, iParam0, 0);
	}
}

Vector3 func_634(var uParam0)
{
	return func_720(uParam0->f_4, -1851356988);
}

char* func_670(int iParam0)
{
	switch (iParam0)
	{
		case 1695952109:
			return "EventData/location(id=%x)";
		case -692671154:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case 2057649523:
			return ":vWreckageLocation";
		case 1248369828:
			return "EventData/wave_data/wave(type=%x)/peds";
		case 1268095596:
			return "ped(%i)";
		case -538315284:
			return "EventData/location(id=%x)/SpawnPositions/wave(type=%x)";
		case 1218921439:
			return "spawnposition(%i)";
		case -1191553031:
			return ":pos1";
		case 1687465887:
			return ":pos2";
		case 1381829424:
			return ":pos3";
		case -348163890:
			return ":head1";
		case -1538366747:
			return ":head2";
		case 1979614790:
			return ":head3";
		case -1833360518:
			return ":model";
		case 425959891:
			return ":pos";
		case 256247696:
			return ":rotation";
		case 413811142:
			return ":role";
		case -1515541953:
			return ":scenario";
		case -1774701585:
			return ":point";
		case 89029101:
			return ":offset";
		case -43053691:
			return "scenario_points";
		case 2066571170:
			return "scenario_points/scenario_point(%i)";
		case -1890596655:
			return "vehicle_data";
		case 2025794970:
			return "vehicle_data/vehicle(%i)";
		case 685218342:
			return "prop_data";
		case 733276510:
			return "prop_data/prop(%i)";
		case -565871549:
			return "propset_data";
		case 1497039912:
			return "propset_data/propset(%i)";
		case 796262628:
			return "LootLocations";
		case -1084127701:
			return "LootLocations/lootlocation(%i)";
		case -14916973:
			return "ChestLocations";
		case -1851356988:
			return "ChestLocations/chestlocation(%i)";
		case -335517339:
			return "DirtMoundLocations";
		case 612244624:
			return "DirtMoundLocations/dirtmoundlocation(%i)";
		case 2019912578:
			return "EggLocations";
		case -1639163394:
			return "egglocation(%i)";
		case 1763905867:
			return "EventData/reward_groups";
		case 810522312:
			return "EventData/chest_data";
		case -570563579:
			return "chests";
		case 137865554:
			return "chest(rewardtype=%x)";
		case 766008034:
			return "reward_group(type=%x)";
		case -531292328:
			return "reward_group(%i)";
		case 536703056:
			return "reward(%i)";
		case -1848254013:
			return ":random";
		case -767930282:
			return ":type";
		case 1310428614:
			return ":value";
		case -355516948:
			return ":loot_type";
		case -1198443210:
			return ":loot_value";
		default:
			break;
	}
	return "";
}

bool func_671(var uParam0)
{
	*uParam0 = Local_2681.f_33;
	uParam0->f_2 = 1695952109;
	uParam0->f_3 = Local_243.f_2;
	return (DATAFILE::_0x603AC35FD4602C76(Local_2681.f_33) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_672(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (func_671(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			iVar6 = 0;
			aggregate_func_3012(Var0, -1833360518, &iVar6, 0);
			iVar5 = iVar6;
		}
	}
	return iVar5;
}

int func_717(bool bParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (bParam0)
	{
		if (iVar0 < 70)
		{
			return joaat("common");
		}
		else if (iVar0 < 95)
		{
			return -777576080;
		}
		else
		{
			return -417755324;
		}
	}
	if (iVar0 < 40)
	{
		return joaat("common");
	}
	if (iVar0 < 90)
	{
		return -777576080;
	}
	return -417755324;
}

int func_718()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	return iVar0;
}

Vector3 func_719(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { -1f, 0f, 0f };
	if (func_671(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate_func_3418(Var0, 256247696, &vVar5, 0);
		}
	}
	return vVar5;
}

Vector3 func_720(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_671(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate_func_3418(Var0, 425959891, &vVar5, 0);
		}
	}
	return vVar5;
}

void func_721(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	*iParam0 = func_717(0);
	iVar0 = func_1024(*iParam0, 1, iParam1);
	*uParam2 = BUILTIN::TO_FLOAT(func_1025(iVar0));
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87256266;
		case 1:
			return -1702773118;
		case 2:
			return -686858613;
		case 3:
			return -1907387938;
		default:
			break;
	}
	return 0;
}

bool func_729(var uParam0, var uParam1)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return true;
	}
	if (!aggregate_func_930(uParam0, aggregate_func_4249(uParam0), func_1035(uParam0), 1, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(*uParam0), func_1035(uParam0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(*uParam0), func_1037(uParam0), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(*uParam0), true);
	TASK::_0xF0B4F759F35CC7F5(NETWORK::NET_TO_OBJ(*uParam0), -411455723, 0, 0, 512);
	ENTITY::_0x18FF3110CF47115D(NETWORK::NET_TO_OBJ(*uParam0), 32, true);
	return true;
}

bool func_730(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_476[iParam0])))
	{
		return true;
	}
	vVar0 = { *(Local_2681.f_723[iParam0 /*3*/]) };
	vVar3 = { aggregate_func_8617(&vVar0) };
	uVar6 = vVar3.z;
	if (!aggregate_func_260(Local_1706.f_476[iParam0], func_380(&vVar0), aggregate_func_8617(&vVar0), uVar6, 1, 0, 0, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(&(Local_1706.f_476[iParam0])), aggregate_func_8617(&vVar0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_VEH(&(Local_1706.f_476[iParam0])), aggregate_func_8617(&vVar0), 2, true);
	if (func_1040(&vVar0) != 0)
	{
		(Local_2681.f_723[iParam0 /*3*/])->f_2 = PROPSET::_CREATE_PROPSET_3(func_1040(&vVar0), 0f, 0f, 0f, NETWORK::NET_TO_VEH(&(Local_1706.f_476[iParam0])), 0f, false, 1, true);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(&(Local_1706.f_476[iParam0])), 1);
	return true;
}

bool func_731(var uParam0, var uParam1)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return true;
	}
	_NAMESPACE49::_0x9D16896F0DBE78A2(func_634(uParam0), 10f);
	if (!aggregate_func_930(uParam0, func_414(uParam0), func_634(uParam0), 1, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(*uParam0), func_634(uParam0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(*uParam0), func_1041(uParam0), 2, true);
	return true;
}

bool func_732(int iParam0, int iParam1, int iParam2)
{
	if (aggregate_func_4278(Local_1706.f_49[iParam0 /*22*/], 2))
	{
		return true;
	}
	if ((Local_2681.f_50[iParam0 /*56*/])->f_55 == -1)
	{
		(Local_2681.f_50[iParam0 /*56*/])->f_55 = iParam0;
	}
	if (!func_1042(NETWORK::PARTICIPANT_ID_TO_INT(), Local_2681.f_50[iParam0 /*56*/], 1))
	{
		if (func_1043(Local_1706.f_49[iParam0 /*22*/], Local_2681.f_50[iParam0 /*56*/], iParam1))
		{
			aggregate_func_4247((Local_2200[NETWORK::PARTICIPANT_ID_TO_INT() /*15*/])->f_1[iParam0], 1);
		}
		else
		{
			return false;
		}
	}
	if (func_1045(Local_1706.f_49[iParam0 /*22*/], Local_2681.f_50[iParam0 /*56*/], iParam1, iParam2))
	{
		aggregate_func_4266(Local_1706.f_49[iParam0 /*22*/], 2);
		aggregate_func_4266(Local_1706.f_49[iParam0 /*22*/], 1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_733(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_483[iParam0])))
	{
		return true;
	}
	uVar0 = &Local_2681.f_797[iParam0];
	vVar1 = { func_1047(&uVar0) };
	if (!aggregate_func_1113(Local_1706.f_483[iParam0], func_379(&uVar0), func_1047(&uVar0), vVar1.z, 1, 1, 1150681088 /* Float: 1200f */))
	{
		return false;
	}
	return true;
}

void func_734(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (aggregate_func_4278(Local_1706.f_360[iVar0 /*6*/], 1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (aggregate_func_4368(Local_1706.f_415[iVar0 /*4*/], 1))
		{
		}
		else if (MISC::IS_BIT_SET((Local_2200[iParam0 /*15*/])->f_14, &(Local_2681.f_1032[iVar0 /*2*/])))
		{
			aggregate_func_4247(Local_1706.f_415[iVar0 /*4*/], 1);
		}
		iVar0++;
	}
}

void func_737()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<22> Var5;

	if (aggregate_func_7689(16))
	{
		if (Local_1706.f_7 == -1)
		{
			func_1051();
			return;
		}
		if (aggregate_func_7251(&(Local_1706.f_8), 7500))
		{
			Local_1706.f_5 = 5f;
			func_1051();
			return;
		}
		if (!aggregate_func_4278(Local_1706.f_49[Local_1706.f_7 /*22*/], 2))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !aggregate_func_7846(iVar0, 8))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				if (Local_1706.f_14 == -1)
				{
					iVar2 = func_1053(Local_1706.f_49[Local_1706.f_7 /*22*/], Local_2681.f_50[Local_1706.f_7 /*56*/]);
					if (iVar2 != -1)
					{
						Local_1706.f_14 = iVar2;
					}
				}
				else if (func_1045(Local_1706.f_49[Local_1706.f_7 /*22*/], Local_2681.f_50[Local_1706.f_7 /*56*/], 0, -1))
				{
					Local_1706.f_1[2] = &Local_1706.f_1[1];
					Local_1706.f_1[1] = &Local_1706.f_1[0];
					Local_1706.f_1[0] = (&Local_2681.f_50[Local_1706.f_7 /*56*/] + Local_1706.f_14);
					aggregate_func_4266(Local_1706.f_49[Local_1706.f_7 /*22*/], 2);
				}
			}
		}
		else
		{
			bVar3 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !aggregate_func_7846(iVar0, 16))
				{
					bVar3 = false;
				}
				iVar0++;
			}
			if (bVar3)
			{
				aggregate_func_4266(Local_1706.f_49[Local_1706.f_7 /*22*/], 1);
				func_1051();
			}
		}
	}
	if (aggregate_func_7689(32))
	{
		if (Local_1706.f_15 == -1)
		{
			func_1054();
			return;
		}
		if (aggregate_func_4278(Local_1706.f_49[Local_1706.f_15 /*22*/], 1))
		{
			bVar4 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !aggregate_func_7846(iVar0, 32))
				{
					bVar4 = false;
				}
				iVar0++;
			}
			if (bVar4)
			{
				Var5.f_1 = 3;
				*(Local_1706.f_49[Local_1706.f_15 /*22*/]) = { Var5 };
				func_1054();
			}
		}
	}
}

bool func_738(var uParam0, var uParam1)
{
	return (aggregate_func_4278(uParam0, 1) && uParam1->f_55 != -1);
}

void func_739(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (!aggregate_func_4278(uParam0, 4) && func_1042(Local_2681, uParam1, 4))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_21 - 1))
		{
			aggregate_func_4266(uParam0->f_1[iVar0 /*6*/], 4);
			iVar0++;
		}
		aggregate_func_4266(uParam0, 4);
	}
	if (!aggregate_func_4278(uParam0, 32))
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_21 - 1))
		{
			if (!aggregate_func_4278(uParam0->f_1[iVar0 /*6*/], 512))
			{
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			aggregate_func_4266(uParam0, 32);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		func_1057(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
		if (!aggregate_func_4278(uParam0, 16) && aggregate_func_4278(uParam0->f_1[iVar0 /*6*/], 32))
		{
			aggregate_func_4266(uParam0, 16);
		}
		if (!aggregate_func_4278(uParam0->f_1[iVar0 /*6*/], 32) && aggregate_func_4278(uParam0, 16))
		{
			aggregate_func_4266(uParam0->f_1[iVar0 /*6*/], 32);
		}
		iVar0++;
	}
}

int func_740(int iParam0)
{
	int iVar0;

	if (aggregate_func_7689(32))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_7846(iVar0, 32))
			{
				return 0;
			}
		}
		iVar0++;
	}
	aggregate_func_7859(32);
	Local_1706.f_15 = iParam0;
	return 1;
}

int func_742()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!aggregate_func_4278(Local_1706.f_49[iVar0 /*22*/], 1))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_743()
{
	float fVar0[9];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	float fVar18;

	iVar11 = 0;
	while (iVar11 < 9)
	{
		iVar12 = func_1058(iVar11);
		if (iVar12 == 0)
		{
		}
		else if (!func_1059(iVar12))
		{
		}
		else
		{
			iVar13 = func_1060(iVar12);
			iVar14 = func_419(iVar12);
			fVar0[iVar11] = BUILTIN::TO_FLOAT((iVar13 - iVar14));
			if (iVar12 == -1346830927 || iVar12 == -66644432)
			{
				if (func_419(-1346830927) == 0 && func_419(-66644432) == 0)
				{
					fVar0[iVar11] = (&fVar0[iVar11] * 5f);
				}
			}
			else if (iVar12 == 1404758079 && func_419(1404758079) < 2)
			{
				fVar0[iVar11] = (&fVar0[iVar11] * 2f);
			}
			iVar10 = (iVar10 + BUILTIN::FLOOR(&(fVar0[iVar11])));
		}
		iVar11++;
	}
	if (iVar10 == 0)
	{
		return 0;
	}
	iVar11 = 0;
	while (iVar11 < 9)
	{
		fVar0[iVar11] = (&fVar0[iVar11] / BUILTIN::TO_FLOAT(iVar10));
		iVar11++;
	}
	fVar15 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	iVar16 = 0;
	fVar17 = 0f;
	iVar11 = 0;
	while (iVar11 < 9)
	{
		if (&fVar0[iVar11] == 0f)
		{
		}
		else
		{
			fVar18 = (fVar17 + &fVar0[iVar11]);
			if (fVar15 >= fVar17 && fVar15 <= fVar18)
			{
				iVar16 = func_1058(iVar11);
				if (iVar16 != 0)
				{
				}
				else
				{
					fVar17 = fVar18;
					iVar11++;
				}
				return iVar16;
			}
		}
	}
}

int func_744(int iParam0, int iParam1)
{
	int iVar0;

	if (aggregate_func_7689(16))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (aggregate_func_7846(iVar0, 8) || aggregate_func_7846(iVar0, 16))
			{
				return 0;
			}
		}
		iVar0++;
	}
	aggregate_func_7859(16);
	Local_1706.f_6 = iParam0;
	Local_1706.f_7 = func_742();
	Local_1706.f_14 = iParam1;
	if (Local_1706.f_7 < 0)
	{
		func_1051();
		return 0;
	}
	return 1;
}

bool func_758(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	uParam0->f_1 = OBJECT::CREATE_OBJECT(func_378(uParam0), aggregate_func_8624(uParam0), false, false, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(uParam0->f_1, aggregate_func_8624(uParam0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, aggregate_func_8624(uParam0), 2, true);
	if (func_1080(uParam0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_1, true);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1, false);
		FIRE::ADD_EXPLOSION(aggregate_func_8624(uParam0), 26, 1f, false, 1, 0f);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, true);
	}
	return true;
}

bool func_759(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
	{
		return true;
	}
	uParam1->f_3 = NETWORK::NET_TO_OBJ(*uParam0);
	return true;
}

bool func_760(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	float fVar5;

	if (TASK::_0x841475AC96E794D1(uParam1->f_1))
	{
		return true;
	}
	vVar0 = { func_415(uParam0) };
	uVar3 = vVar0.z;
	uVar4 = uParam0->f_1;
	fVar5 = uParam0->f_2;
	if (fVar5 == 0f)
	{
		return false;
	}
	if (!func_1081(&(uParam1->f_1), func_416(uParam0), uVar3, uVar4, &fVar5))
	{
		return false;
	}
	return true;
}

void func_762(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	var uVar5;

	if (!func_671(&Var0))
	{
		return;
	}
	Var0.f_2 = 2066571170;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	if (!aggregate_func_3418(Var0, 425959891, uParam1, 0))
	{
	}
	if (!aggregate_func_3451(Var0, -348163890, iParam2, 0))
	{
	}
	if (!aggregate_func_3012(Var0, -1515541953, &uVar5, 0))
	{
	}
	*iParam3 = uVar5;
}

bool func_786()
{
	if (aggregate_func_4281(131072) && Local_243.f_10 >= 4)
	{
		if ((Local_50[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_243.f_1420)
		{
			if (!aggregate_func_6507() == 4)
			{
				aggregate_func_4556(4);
				aggregate_func_4355(1);
				aggregate_func_4355(2);
				aggregate_func_4355(4);
				aggregate_func_4355(8);
				aggregate_func_4355(16);
				return true;
			}
		}
	}
	return false;
}

void func_840(int iParam0, int iParam1)
{
	int iVar0;

	func_1043(Local_1706.f_49[iParam0 /*22*/], Local_2681.f_50[iParam0 /*56*/], iParam1);
	(Local_2681.f_50[iParam0 /*56*/])->f_55 = iParam0;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_49[iParam0 /*22*/])->f_21 - 1))
	{
		((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_15 = iParam0;
		((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
		(Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_49[iParam0 /*22*/])->f_1[iVar0 /*6*/]));
		((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
		((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2681.f_50[iParam0 /*56*/])->f_1[iVar0 /*17*/]));
		iVar0++;
	}
}

bool func_862(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	var uVar0;

	if (bParam3 && aggregate_func_4278(Local_2681.f_50[iParam1 /*56*/], iParam0))
	{
		return false;
	}
	uVar0 = &(Local_2681.f_50[iParam1 /*56*/])->f_1[iParam2 /*17*/];
	if (!bParam4)
	{
		if (func_1134(Local_1706.f_49[iParam1 /*22*/], Local_2681.f_50[iParam1 /*56*/]))
		{
			return false;
		}
	}
	if (aggregate_func_4975(uVar0, func_1135(iParam0), iParam5, 0, 1, 0, iParam6, 1))
	{
		aggregate_func_4247(&(Local_2681.f_1072), iParam0);
		aggregate_func_4247(&((Local_2681.f_50[iParam1 /*56*/])->f_54), iParam0);
		return true;
	}
	return false;
}

void func_863(int iParam0)
{
	struct<10> Var0;
	var uVar10;

	Var0.f_9 = 255;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0 != 55)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			func_1137(Var0);
			break;
		case 2:
			func_1138(Var0);
			break;
		case 3:
			func_1139(Var0);
			break;
		case 4:
			func_1140(Var0);
			break;
		case 5:
			func_1141(Var0);
			break;
		case 6:
			if (Var0.f_1 != 255 && aggregate_func_6777(Local_243.f_1332))
			{
				if (func_1142(Var0.f_6, &uVar10))
				{
					Local_243.f_1292 = aggregate_func_8609(MISC::_CREATE_VAR_STRING(42, "FME_WK_TICK_LOOT", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(Var0.f_1), aggregate_func_752(Var0.f_1, 1, -1, 0)), &uVar10));
				}
			}
			break;
		case 7:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if ((Local_1706.f_360[Var0.f_6 /*6*/])->f_5 == -1)
				{
					(Local_1706.f_360[Var0.f_6 /*6*/])->f_5 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Var0.f_1);
				}
				aggregate_func_4266(Local_1706.f_360[Var0.f_6 /*6*/], 1);
			}
			break;
	}
}

void func_864(int iParam0)
{
	struct<6> Var0;
	struct<8> Var9;
	var uVar30;
	int iVar38;
	struct<2> Var39;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		return;
	}
	Var9.f_7.f_2.f_1 = 10;
	if (!func_1145(&Var0, &Var9))
	{
	}
	if (func_1142(Var0.f_5, &uVar30))
	{
		aggregate_func_7436(1f);
		iVar38 = 0;
		while (iVar38 <= 14)
		{
			Var39 = { *(Local_2681.f_1032[iVar38 /*2*/]) };
			if (aggregate_func_1279(Global_35, TASK::_0xA8452DD321607029(Var39.f_1, 1), 1.5f, 0, 0))
			{
				MISC::SET_BIT(&((Local_2200[NETWORK::PARTICIPANT_ID_TO_INT() /*15*/])->f_14), Var39);
			}
			iVar38++;
		}
	}
}

void func_865(int iParam0)
{
	struct<6> Var0;
	int iVar31;
	int iVar32;
	int iVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	else if (!Var0.f_3)
	{
		return;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	else if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	else if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	else if (Var0.f_5 == joaat("weapon_fall"))
	{
		return;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (iVar31 != Global_35)
	{
		iVar32 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar32))
		{
			if (iVar31 != iVar32)
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_A_PLAYER(iVar33))
	{
		return;
	}
	else if (!PED::IS_PED_HUMAN(iVar33))
	{
		return;
	}
	Local_2681.f_1074++;
}

void func_866(int iParam0)
{
	struct<13> Var0;
	char[] cVar36[8];
	int iVar44;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 36))
	{
		return;
	}
	iVar44 = 0;
	while (iVar44 <= (Var0 - 1))
	{
		if (func_1142(&(Var0.f_1[iVar44]), &cVar36))
		{
			aggregate_func_7436(1f);
		}
		iVar44++;
	}
}

void func_867()
{
	int iVar0;
	struct<56> Var1;

	if (aggregate_func_7689(16))
	{
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && func_1043(Local_1706.f_49[Local_1706.f_7 /*22*/], Local_2681.f_50[Local_1706.f_7 /*56*/], Local_1706.f_6))
		{
			aggregate_func_3902(8);
		}
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 16) && aggregate_func_4278(Local_1706.f_49[Local_1706.f_7 /*22*/], 2))
		{
			if ((Local_1706.f_49[Local_1706.f_7 /*22*/])->f_21 == 0)
			{
			}
			(Local_2681.f_50[Local_1706.f_7 /*56*/])->f_55 = Local_1706.f_7;
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_49[Local_1706.f_7 /*22*/])->f_21 - 1))
			{
				((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/])->f_15 = Local_1706.f_7;
				((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
				(Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_49[Local_1706.f_7 /*22*/])->f_1[iVar0 /*6*/]));
				((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
				((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2681.f_50[Local_1706.f_7 /*56*/])->f_1[iVar0 /*17*/]));
				iVar0++;
			}
			aggregate_func_3902(16);
		}
	}
	else if (aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 8) || aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 16))
	{
		aggregate_func_3902(8);
		aggregate_func_3902(16);
	}
	if (aggregate_func_7689(32))
	{
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
		{
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_49[Local_1706.f_15 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&((Local_2681.f_50[Local_1706.f_15 /*56*/])->f_1[iVar0 /*17*/])))
				{
					if (!aggregate_func_4278((Local_2681.f_50[Local_1706.f_15 /*56*/])->f_1[iVar0 /*17*/], 512))
					{
						func_1149((Local_1706.f_49[Local_1706.f_15 /*22*/])->f_1[iVar0 /*6*/], (Local_2681.f_50[Local_1706.f_15 /*56*/])->f_1[iVar0 /*17*/]);
					}
					aggregate_func_1025((Local_1706.f_49[Local_1706.f_15 /*22*/])->f_1[iVar0 /*6*/]);
				}
				iVar0++;
			}
			Var1.f_1 = 3;
			Var1.f_1.f_1.f_15 = -1;
			Var1.f_1.f_1.f_16 = -1;
			Var1.f_1.f_1.f_17.f_15 = -1;
			Var1.f_1.f_1.f_17.f_16 = -1;
			Var1.f_1.f_1.f_17.f_17.f_15 = -1;
			Var1.f_1.f_1.f_17.f_17.f_16 = -1;
			Var1.f_55 = -1;
			*(Local_2681.f_50[Local_1706.f_15 /*56*/]) = { Var1 };
			aggregate_func_3902(32);
		}
	}
	else if (aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
	{
		aggregate_func_3902(32);
	}
}

void func_868(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		func_1150(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
		iVar0++;
	}
}

bool func_869(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
	{
		func_1151(uParam1);
		return false;
	}
	return true;
}

bool func_871(var uParam0, var uParam1)
{
	struct<10> Var0;

	if (aggregate_func_4278(uParam1, 1))
	{
		return true;
	}
	if (TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(Global_35)) && aggregate_func_1279(uParam1->f_3, TASK::_0xA8452DD321607029(TASK::_0xD04241BBF6D03A5E(Global_35), 1), 2f, 1, 1))
	{
		uParam1->f_2 = MISC::GET_FRAME_COUNT();
	}
	if (aggregate_func_4278(uParam0, 1) || TASK::_0xB219612B5568E9EC(uParam1->f_3))
	{
		if ((MISC::GET_FRAME_COUNT() - uParam1->f_2) < 10)
		{
			Var0.f_9 = 255;
			Var0.f_5 = aggregate_func_4507(0, 8);
			Var0.f_6 = *uParam1;
			func_1158(Var0, 7);
		}
		func_633(uParam1->f_3);
		aggregate_func_4266(uParam1, 1);
		return true;
	}
	func_1160(uParam1);
	return false;
}

void func_872(var uParam0, var uParam1)
{
	if ((!aggregate_func_4278(uParam1, 2) && aggregate_func_4278(uParam1, 1)) && uParam0->f_5 == NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		func_1161(uParam0, uParam1);
		aggregate_func_4266(uParam1, 2);
	}
}

bool func_873(var uParam0, var uParam1)
{
	if ((TASK::_0x841475AC96E794D1(uParam1->f_1) && !aggregate_func_1279(Global_35, TASK::_0xA8452DD321607029(uParam1->f_1, 1), 145f, 1, 1)) && MISC::IS_BIT_SET((Local_2200[Local_243.f_1332 /*15*/])->f_14, *uParam1))
	{
		TASK::_0x81948DFE4F5A0283(uParam1->f_1);
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 && func_1162(TASK::_0xA8452DD321607029(uParam1->f_1, 1)))
	{
		MISC::SET_BIT(&((Local_2200[NETWORK::PARTICIPANT_ID_TO_INT() /*15*/])->f_14), *uParam1);
	}
	if (aggregate_func_4368(uParam0, 1))
	{
		return true;
	}
	return false;
}

int func_899()
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;

	Var1.f_1 = 11;
	aggregate_func_6860(&Var1, Local_243.f_1333);
	aggregate_func_1287(&Var1);
	aggregate_func_2410(&Var1, Local_0.f_4);
	aggregate_func_6929(&Var1);
	iVar14 = Local_0.f_10;
	if (PLAYER::PLAYER_ID() == iVar14)
	{
		iVar0 = -697003817;
	}
	else
	{
		iVar0 = -252981337;
	}
	if (aggregate_func_6360(iVar0, &(Local_243.f_1374), &Var1, 0, 255, 0, 0))
	{
		Local_243.f_1281++;
		iVar15 = 1;
	}
	return iVar15;
}

int func_1024(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		*iParam2 = func_1260();
	}
	else
	{
		*iParam2 = func_718();
	}
	switch (*iParam2)
	{
		case 0:
			switch (iParam0)
			{
				case joaat("common"):
					return -1155590626;
				case -777576080:
					return -1551342312;
				case -417755324:
					return 673063823;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case joaat("common"):
					return 1604267113;
				case -777576080:
					return 1093733824;
				case -417755324:
					return -409863402;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case joaat("common"):
					return 1392186231;
				case -777576080:
					return -1206565311;
				case -417755324:
					return -1585005420;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("common"):
					return -1812392162;
				case -777576080:
					return -1812392162;
				case -417755324:
					return -1812392162;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("common"):
					return -665031091;
				case -777576080:
					return -665031091;
				case -417755324:
					return -665031091;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case joaat("common"):
					return -1213438170 /* GXTEntry: "Tarot Card" */;
				case -777576080:
					return -1213438170 /* GXTEntry: "Tarot Card" */;
				case -417755324:
					return -1213438170 /* GXTEntry: "Tarot Card" */;
				default:
					break;
			}
			break;
	}
	return -1155590626;
}

int func_1025(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1392186231:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar0)
			{
				case 0:
					return 31;
				case 1:
					return 34;
				case 2:
					return 37;
				case 3:
					return 40;
				case 4:
					return 43;
				default:
					break;
			}
			break;
		case -1206565311:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar0)
			{
				case 0:
					return 16;
				case 1:
					return 19;
				case 2:
					return 28;
				case 3:
					return 25;
				case 4:
					return 22;
				default:
					break;
			}
			break;
		case -1585005420:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					return 1;
				case 1:
					return 13;
				case 2:
					return 10;
				default:
					break;
			}
			break;
		case -1155590626:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return 22;
				case 1:
					return 25;
				case 2:
					return 28;
				case 3:
					return 31;
				default:
					break;
			}
			break;
		case -1551342312:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar0)
			{
				case 0:
					return 34;
				case 1:
					return 10;
				case 2:
					return 13;
				case 3:
					return 16;
				case 4:
					return 19;
				default:
					break;
			}
			break;
		case 673063823:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					return 1;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case -1812392162:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
			switch (iVar0)
			{
				case 0:
					return 200;
				case 1:
					return 203;
				case 2:
					return 206;
				case 3:
					return 209;
				case 4:
					return 212;
				case 5:
					return 215;
				case 6:
					return 218;
				case 7:
					return 221;
				case 8:
					return 224;
				case 9:
					return 227;
				case 10:
					return 4;
				case 11:
					return 231;
				case 12:
					return 10;
				default:
					break;
			}
			break;
		case -665031091:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 31);
			switch (iVar0)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				case 2:
					return 4;
				case 3:
					return 6;
				case 4:
					return 7;
				case 5:
					return 9;
				case 6:
					return 10;
				case 7:
					return 11;
				case 8:
					return 13;
				case 9:
					return 16;
				case 10:
					return 17;
				case 11:
					return 19;
				case 12:
					return 21;
				case 13:
					return 24;
				case 14:
					return 27;
				case 15:
					return 30;
				case 16:
					return 33;
				case 17:
					return 36;
				case 18:
					return 38;
				case 19:
					return 41;
				case 20:
					return 43;
				case 21:
					return 48;
				case 22:
					return 51;
				case 23:
					return 52;
				case 24:
					return 58;
				case 25:
					return 60;
				case 26:
					return 62;
				case 27:
					return 64;
				case 28:
					return 65;
				case 29:
					return 66;
				case 30:
					return 67;
				default:
					break;
			}
			break;
	}
	return 22;
}

Vector3 func_1035(var uParam0)
{
	return func_720(uParam0->f_1, -1084127701);
}

Vector3 func_1037(var uParam0)
{
	return func_719(uParam0->f_1, -1084127701);
}

int func_1040(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_671(&Var0))
	{
		Var0.f_2 = 2025794970;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate_func_3012(Var0, 1310428614, &iVar5, 0);
		}
	}
	return iVar5;
}

Vector3 func_1041(var uParam0)
{
	return func_719(uParam0->f_4, -1851356988);
}

bool func_1042(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_55 == -1)
	{
		return false;
	}
	return aggregate_func_4240(&((Local_2200[iParam0 /*15*/])->f_1[uParam1->f_55]), iParam2);
}

bool func_1043(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	struct<5> Var6;
	struct<17> Var11;
	int iVar28;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2681.f_33))
	{
		return false;
	}
	Var0 = Local_2681.f_33;
	Var0.f_2 = 1248369828;
	Var0.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	Var11.f_15 = -1;
	Var11.f_16 = -1;
	iVar28 = 0;
	while (iVar28 <= (iVar5 - 1))
	{
		Var0.f_2 = 1268095596;
		Var0.f_3 = iVar28;
		MISC::_COPY_MEMORY(&Var6, &Var0, 5);
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
		{
		}
		else
		{
			*(uParam1->f_1[iVar28 /*17*/]) = { Var11 };
			(uParam1->f_1[iVar28 /*17*/])->f_4 = func_1266(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_10 = func_1267(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_9 = func_1268(Var6);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_1269(Var6))
				{
					aggregate_func_4266(uParam0->f_1[iVar28 /*6*/], 256);
				}
				aggregate_func_4266(uParam0->f_1[iVar28 /*6*/], 1);
			}
		}
		iVar28++;
	}
	*uParam1 = iParam2;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam0->f_21 = iVar5;
	}
	return true;
}

bool func_1045(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	iVar0 = 1;
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_21 - 1))
	{
		if (!aggregate_func_6347(uParam0->f_1[iVar5 /*6*/]))
		{
			return false;
		}
		if (!aggregate_func_4278(uParam0->f_1[iVar5 /*6*/], 2))
		{
			func_1271(&vVar1, &uVar4, uParam1, uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], iVar5, iParam2, iParam3);
			if (!func_1272(uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], vVar1, uVar4))
			{
				iVar0 = 0;
			}
			else
			{
				return false;
			}
		}
		iVar5++;
	}
	return iVar0;
}

Vector3 func_1047(var uParam0)
{
	return func_720(*uParam0, 1497039912);
}

void func_1051()
{
	aggregate_func_7859(16);
	Local_1706.f_6 = 0;
	Local_1706.f_7 = -1;
	Local_1706.f_14 = -1;
}

int func_1053(var uParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;

	Var0 = Local_2681.f_33;
	Var0.f_2 = -538315284;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = *uParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar14 = func_1276();
	if (iVar14 == 255)
	{
		return -1;
	}
	iVar15 = 0;
	while (iVar15 <= iVar5)
	{
		if (iVar15 == 0)
		{
			iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		else
		{
			iVar16 = (iVar15 - 1);
		}
		Var0.f_2 = 1218921439;
		Var0.f_3 = iVar16;
		MISC::_COPY_MEMORY(&Var6, &Var0, 5);
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
		{
		}
		else
		{
			if (!aggregate_func_3418(Var6, -1191553031, &vVar11, 0))
			{
			}
			vVar17 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar14), true, false) };
			vVar20 = { ENTITY::GET_ENTITY_COORDS(func_1277(vVar11), true, false) };
			if (func_1278(uParam1, vVar11, vVar17, vVar20, iVar5, iVar16))
			{
				Local_1706.f_16[iVar14] = &Local_1706.f_16[iVar14] + 1;
				return iVar16;
			}
		}
		iVar15++;
	}
	return -1;
}

void func_1054()
{
	aggregate_func_7859(32);
	Local_1706.f_15 = -1;
}

void func_1057(var uParam0, var uParam1)
{
	if (!aggregate_func_4278(uParam0, 512))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*uParam1) || uParam0->f_1 == 10) || uParam1->f_10 == joaat("horse"))
		{
			func_1279(uParam0, 10);
			aggregate_func_4266(uParam0, 512);
		}
	}
	switch (uParam1->f_10)
	{
		case joaat("search"):
			func_1280(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1281(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1282(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1283(uParam0, uParam1);
			break;
		case -1346830927:
			func_1284(uParam0, uParam1);
			break;
		case -862695229:
			func_1285(uParam0, uParam1);
			break;
	}
}

int func_1058(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return -931055996;
		case 1:
			return -1347265301;
		case 2:
			return 1404758079;
		case 3:
			return -1553326850;
		case 4:
			return joaat("guard");
		case 5:
			return 200161421;
		case 6:
			return joaat("defensive");
		case 7:
			return -1346830927;
		case 8:
			return -66644432;
	}
	return 0;
}

bool func_1059(int iParam0)
{
	switch (iParam0)
	{
		case -1347265301:
		case -1346830927:
		case -66644432:
		case 200161421:
		case 1404758079:
			return true;
		case joaat("defensive"):
		case -1553326850:
		case -931055996:
		case joaat("guard"):
			return false;
	}
	return false;
}

int func_1060(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 10;
		case -1346830927:
			return 1;
		case joaat("defensive"):
			return 5;
		case joaat("guard"):
			return 5;
		case -931055996:
			return 3;
		case -1347265301:
			if (Local_243.f_1 == 10)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case 200161421:
			if (Local_243.f_1 == 11)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -1553326850:
			return 1;
		case -66644432:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1080(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_671(&Var0))
	{
		Var0.f_2 = 733276510;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			if (!aggregate_func_3758(Var0, 1310428614, &iVar5, 0))
			{
				iVar5 = 0;
			}
		}
	}
	return iVar5;
}

bool func_1081(var uParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	if (TASK::_0x841475AC96E794D1(*uParam0))
	{
		return true;
	}
	*uParam0 = TASK::CREATE_SCENARIO_POINT(func_722(iParam5), vParam1, iParam4, 0, 0, 0);
	if (!TASK::_0x841475AC96E794D1(*uParam0))
	{
		return false;
	}
	TASK::_0xC47D9080A9A8856A(*uParam0, *fParam6);
	TASK::_0xD3A0DA8F91612C6E(*uParam0, 99f, 1);
	return true;
}

bool func_1134(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(&(uParam1->f_1[iVar0 /*17*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "WHAT_IS_THAT";
		case 2:
			return "HEADS_UP_NEUTRAL";
		case 4:
			return "WARNING";
		case 8:
			return "KEEP_GOING";
		case 16:
			return "FINAL_WARNING";
		case 32:
			return "GREET_GENERAL_STRANGER";
		case 64:
			return "HEADS_UP_CONFRONT";
		default:
			break;
	}
	return "";
}

void func_1137(struct<10> Param0)
{
	int iVar0;

	((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 8);
	aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 16);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		aggregate_func_4266((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 8);
		aggregate_func_4266(Local_1706.f_49[Param0.f_6 /*22*/], 8);
	}
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_49[Param0.f_6 /*22*/])->f_21 - 1))
	{
		if (iVar0 == Param0.f_7 || ((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_10 != joaat("guard"))
		{
		}
		else
		{
			if (Param0.f_9 != 255)
			{
				((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
			}
			aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4266((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			}
		}
		iVar0++;
	}
}

void func_1138(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_49[Param0.f_6 /*22*/])->f_21 - 1))
	{
		aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
		aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 8);
		aggregate_func_4480(&(((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_12));
		((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = 0;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_4266((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			aggregate_func_4266((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 8);
			aggregate_func_4266(Local_1706.f_49[Param0.f_6 /*22*/], 8);
			func_1279((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 6);
		}
		iVar0++;
	}
}

void func_1139(struct<10> Param0)
{
	int iVar0;

	Local_2681.f_32 = Param0.f_8;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_49[Param0.f_6 /*22*/])->f_21 - 1))
	{
		aggregate_func_4266((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 32);
		if (Param0.f_9 != 255)
		{
			((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_4266((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 32);
			aggregate_func_4266(Local_1706.f_49[Param0.f_6 /*22*/], 16);
		}
		iVar0++;
	}
}

void func_1140(struct<9> Param0, var uParam9)
{
	Local_2681.f_1070 = Param0.f_6;
	Local_2681.f_1071 = Param0.f_7;
	Local_2681.f_1069 = Param0.f_8;
}

void func_1141(struct<8> Param0, var uParam8, var uParam9)
{
	((Local_2681.f_50[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_1279((Local_1706.f_49[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 3);
	}
}

bool func_1142(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case -2139092482: /* GXTEntry: "Ten of Pentacles Tarot Card" */
		case -2132509733: /* GXTEntry: "King of Swords Tarot Card" */
		case -2098877713: /* GXTEntry: "Knight of Swords Tarot Card" */
		case -2083620375: /* GXTEntry: "Queen of Cups Tarot Card" */
		case -2079764912: /* GXTEntry: "Six of Swords Tarot Card" */
		case -2078537312: /* GXTEntry: "Five of Wands Tarot Card" */
		case -2058309720: /* GXTEntry: "Ivory Hairpin" */
		case -2053993543: /* GXTEntry: "Queen of Pentacles Tarot Card" */
		case -2029903517: /* GXTEntry: "Seven of Pentacles Tarot Card" */
		case -2023776602: /* GXTEntry: "Slate Arrowhead" */
		case -1982102297: /* GXTEntry: "1800 Gold Dollar" */
		case -1968768543: /* GXTEntry: "Ace of Wands Tarot Card" */
		case -1937978205: /* GXTEntry: "Five of Cups Tarot Card" */
		case -1893135121: /* GXTEntry: "Beaulieux Diamond Ring" */
		case -1888442693: /* GXTEntry: "Rosewood Hairbrush" */
		case -1884965711: /* GXTEntry: "1792 Nickel" */
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
		case -1867083042: /* GXTEntry: "1796 Halfpenny" */
		case -1866466055: /* GXTEntry: "Bone Arrowhead" */
		case -1850613113: /* GXTEntry: "Raw Arrowhead" */
		case -1841900790: /* GXTEntry: "1795 Half Eagle" */
		case -1804185681: /* GXTEntry: "Harford Garnet Earrings" */
		case -1763726091: /* GXTEntry: "Ivory Comb" */
		case -1634516097: /* GXTEntry: "Two of Swords Tarot Card" */
		case -1631158895: /* GXTEntry: "Horse Hair Brush" */
		case -1604348319: /* GXTEntry: "Obsidian Arrowhead" */
		case -1579131656: /* GXTEntry: "Rou Pearl Necklace" */
		case -1533342244: /* GXTEntry: "Page of Swords Tarot Card" */
		case -1523419995: /* GXTEntry: "Infanta Turquoise Bracelet" */
		case -1503977063: /* GXTEntry: "Two of Cups Tarot Card" */
		case -1485299891: /* GXTEntry: "Eight of Cups Tarot Card" */
		case -1461195441: /* GXTEntry: "Yates Diamond Ring" */
		case -1431438550: /* GXTEntry: "Two of Wands Tarot Card" */
		case -1430911710: /* GXTEntry: "Aubrey Onyx Ring" */
		case -1405474507: /* GXTEntry: "Four of Pentacles Tarot Card" */
		case -1370882316: /* GXTEntry: "Duchess Emerald Earrings" */
		case -1350438989: /* GXTEntry: "Beauchêne Ruby Earrings" */
		case -1333497650: /* GXTEntry: "Ten of Wands Tarot Card" */
		case -1324394408: /* GXTEntry: "Endicott Diamond Earrings" */
		case -1323673307: /* GXTEntry: "1797 Gold Eagle" */
		case -965972353: /* GXTEntry: "Quartz Arrowhead" */
		case -939330110: /* GXTEntry: "Gosselin White Gold Necklace" */
		case -920474102: /* GXTEntry: "Six of Wands Tarot Card" */
		case -909283963: /* GXTEntry: "Flint Arrowhead" */
		case -906665413: /* GXTEntry: "Six of Cups Tarot Card" */
		case -897008046: /* GXTEntry: "Caribbean Rum" */
		case -888745206: /* GXTEntry: "Dane Topaz Necklace" */
		case -836035669: /* GXTEntry: "Bosque Emerald Ring" */
		case -796183751: /* GXTEntry: "Two of Pentacles Tarot Card" */
		case -753628968: /* GXTEntry: "Boar Bristle Brush" */
		case -753018368: /* GXTEntry: "1792 Liberty Quarter" */
		case -715051670: /* GXTEntry: "Nine of Wands Tarot Card" */
		case -644738616: /* GXTEntry: "Josephine Pearl Earrings" */
		case -625323392: /* GXTEntry: "1800 Half Dime" */
		case -581875397: /* GXTEntry: "Seven of Swords Tarot Card" */
		case -526980287: /* GXTEntry: "Tuamotu Pearl Necklace" */
		case -523530337: /* GXTEntry: "Elliston Carved Bracelet" */
		case -518056479: /* GXTEntry: "Nine of Cups Tarot Card" */
		case -392829098: /* GXTEntry: "Cognac" */
		case -329116887: /* GXTEntry: "1789 Penny" */
		case -322231256: /* GXTEntry: "Three of Swords Tarot Card" */
		case -313250059: /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */
		case -288598209: /* GXTEntry: "Sackville Diamond Ring" */
		case -250719930: /* GXTEntry: "Agate Arrowhead" */
		case -222405083: /* GXTEntry: "Page of Wands Tarot Card" */
		case -209370662: /* GXTEntry: "Thorburn Turquoise Ring" */
		case -184379884: /* GXTEntry: "Eight of Pentacles Tarot Card" */
		case -173673073: /* GXTEntry: "Four of Swords Tarot Card" */
		case -172592270: /* GXTEntry: "Eight of Swords Tarot Card" */
		case -166875730: /* GXTEntry: "Seven of Cups Tarot Card" */
		case -163158070: /* GXTEntry: "Ace of Cups Tarot Card" */
		case -162108183: /* GXTEntry: "Emmeline Coral Earrings" */
		case -130873515: /* GXTEntry: "London Dry Gin" */
		case -98060753: /* GXTEntry: "Knight of Pentacles Tarot Card" */
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
		case 49516917: /* GXTEntry: "Harland Coral Ring" */
		case 61850108: /* GXTEntry: "Blakely Miniature Necklace" */
		case 74495272: /* GXTEntry: "Eight of Wands Tarot Card" */
		case 110185544: /* GXTEntry: "King of Wands Tarot Card" */
		case 113535009: /* GXTEntry: "Ten of Cups Tarot Card" */
		case 125940045: /* GXTEntry: "Knight of Cups Tarot Card" */
		case 147602269: /* GXTEntry: "Jade Hairpin" */
		case 205445966: /* GXTEntry: "Richelieu Amethyst Necklace" */
		case 215580102: /* GXTEntry: "Three of Wands Tarot Card" */
		case 232063688: /* GXTEntry: "Greco Sapphire Bracelet" */
		case 249916796: /* GXTEntry: "Cherrywood Comb" */
		case 261854063: /* GXTEntry: "Rough Arrowhead" */
		case 285783511: /* GXTEntry: "1800 Gold Quarter" */
		case 289416445: /* GXTEntry: "Magnate Turquoise Ring" */
		case 308818593: /* GXTEntry: "Abello Ruby Bangle Bracelet" */
		case 319991179: /* GXTEntry: "Pilgrim Moonstone Ring" */
		case 324548078: /* GXTEntry: "Ursula Citrine Earrings" */
		case 333760707: /* GXTEntry: "Royal Victoria Diamond Earrings" */
		case 391412462: /* GXTEntry: "Bonnard Pearl Ring" */
		case 442429651: /* GXTEntry: "1798 Draped Bust Silver Dollar" */
		case 456059252: /* GXTEntry: "Pelle Pearl Necklace" */
		case 575547207: /* GXTEntry: "Ainsworth Cross Necklace" */
		case 600432608: /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */
		case 614214934: /* GXTEntry: "Nine of Pentacles Tarot Card" */
		case 620291574: /* GXTEntry: "King of Pentacles Tarot Card" */
		case 686159610: /* GXTEntry: "Braxton Amethyst Necklace" */
		case 695579895: /* GXTEntry: "Ace of Pentacles Tarot Card" */
		case 738218396: /* GXTEntry: "Page of Pentacles Tarot Card" */
		case 751981376: /* GXTEntry: "Splintered Arrowhead" */
		case 780474809: /* GXTEntry: "Three of Cups Tarot Card" */
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
		case 996250359: /* GXTEntry: "Calumet Turquoise Earrings" */
		case 1006600695: /* GXTEntry: "Ebony Hairbrush" */
		case 1013011582: /* GXTEntry: "Queen of Wands Tarot Card" */
		case 1025032918: /* GXTEntry: "Three of Pentacles Tarot Card" */
		case 1030821510: /* GXTEntry: "1787 One Cent Token" */
		case 1063947084: /* GXTEntry: "Crude Arrowhead" */
		case 1107778901: /* GXTEntry: "Helena Sapphire Bracelet" */
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
		case 1156167154: /* GXTEntry: "Seven of Wands Tarot Card" */
		case 1159809525: /* GXTEntry: "Six of Pentacles Tarot Card" */
		case 1204853609: /* GXTEntry: "Metal Hairpin" */
		case 1209263432: /* GXTEntry: "Scotch Whisky" */
		case 1217599018: /* GXTEntry: "Carved Wooden Hairpin" */
		case 1289018795: /* GXTEntry: "Orchidee Diamond Earrings" */
		case 1299302457: /* GXTEntry: "Page of Cups Tarot Card" */
		case 1328162258: /* GXTEntry: "1794 Silver Dollar" */
		case 1367469686: /* GXTEntry: "Ace of Swords Tarot Card" */
		case 1416504149: /* GXTEntry: "Boxwood Comb" */
		case 1421431411: /* GXTEntry: "Five of Swords Tarot Card" */
		case 1465762285: /* GXTEntry: "Absinthe" */
		case 1466045897: /* GXTEntry: "Sterling Tooth Earrings" */
		case 1496994240: /* GXTEntry: "1700 New Yorke Token" */
		case 1530504034: /* GXTEntry: "Five of Pentacles Tarot Card" */
		case 1546533744: /* GXTEntry: "Chipped Arrowhead" */
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
		case 1570512815: /* GXTEntry: "Feldspar Arrowhead" */
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
		case 1640145676: /* GXTEntry: "1800 Five Dollar Bechtler" */
		case 1645128206: /* GXTEntry: "Durant Pearl Bracelet" */
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
		case 1782725274: /* GXTEntry: "Knight of Wands Tarot Card" */
		case 1796104920: /* GXTEntry: "King of Cups Tarot Card" */
		case 1841524557: /* GXTEntry: "Queen of Swords Tarot Card" */
		case 1926107175: /* GXTEntry: "Ten of Swords Tarot Card" */
		case 1926912008: /* GXTEntry: "Banais Topaz Ring" */
		case 1979910825: /* GXTEntry: "Ebony Hairpin" */
		case 2002017787: /* GXTEntry: "Four of Cups Tarot Card" */
		case 2044772006: /* GXTEntry: "Nine of Swords Tarot Card" */
		case 2051310739: /* GXTEntry: "Four of Wands Tarot Card" */
		case 2116252151:
			StringCopy(sParam1, aggregate_func_2854(iVar0), 64);
			return true;
		default:
			break;
	}
	iVar1 = iParam0;
	switch (iVar1)
	{
		case -2132348472:
		case -2098248158:
		case -2063569423:
		case -1980587442:
		case -1949131163:
		case -1914990977:
		case -1914323519:
		case -1845614766:
		case -1843094784:
		case -1803360398:
		case -1787268311:
		case -1750110910:
		case -1678406212:
		case -1647261494:
		case -1597269158:
		case -1583551360:
		case -1538719578:
		case -1519010704:
		case -1479457955:
		case -1459382417:
		case -1434735180:
		case -1400928817:
		case -1388841754:
		case -1338236715:
		case -1298419407:
		case -1296260337:
		case -1132845243:
		case -901049146:
		case -883489996:
		case -834041111:
		case -702109507:
		case -649069078:
		case -605903845:
		case -599044012:
		case -581360339:
		case -469808552:
		case -373311654:
		case -364070233:
		case -330620837:
		case -305847860:
		case -256638116:
		case -253293041:
		case -180052139:
		case -135773962:
		case -115477556:
		case -77692146:
		case -71915978:
		case -37487183:
		case -32321552:
		case 127681874:
		case 259513172:
		case 309566985:
		case 371926572:
		case 395137059:
		case 505459309:
		case 520232109:
		case 527426268:
		case 530382704:
		case 530930425:
		case 536987249:
		case 544784227:
		case 574670748:
		case 604651083:
		case 651832873:
		case 700547967:
		case 726047816:
		case 746055788:
		case 856057291:
		case 897707862:
		case 903574438:
		case 967176349:
		case 1028397275:
		case 1216475110:
		case 1290286961:
		case 1331081117:
		case 1357570735:
		case 1365678051:
		case 1465764690:
		case 1524848772:
		case 1531432272:
		case 1606281828:
		case 1628530735:
		case 1659722492:
		case 1711174319:
		case 1732356987:
		case 1789589305:
		case 1833116882:
		case 1904567340:
		case 1962033744:
		case 2079959006:
			StringCopy(sParam1, aggregate_func_2854(func_1333(iVar1)), 64);
			return true;
		default:
			break;
	}
	iVar2 = iParam0;
	switch (iVar2)
	{
		case -2133164405:
		case -2129818996:
		case -2090931256:
		case -2070072185:
		case -2053586493:
		case -2045332310:
		case -2024019598:
		case -2014985768:
		case -2006507012:
		case -1983358489:
		case -1963501782:
		case -1961368073:
		case -1922025145:
		case -1889969380:
		case -1872221348:
		case -1851556126:
		case -1767394530:
		case -1751029298:
		case -1724023040:
		case -1693868721:
		case -1653099775:
		case -1639975189:
		case -1588950139:
		case -1573845159:
		case -1555585595:
		case -1555042073:
		case -1527670026:
		case -1490629752:
		case -1489501682:
		case -1472975869:
		case -1463148437:
		case -1342044032:
		case -1263660863:
		case -1259808609:
		case -1240621354:
		case -1201148795:
		case -1184923125:
		case -1142172174:
		case -1105355522:
		case -1093637570:
		case -998778990:
		case -972590214:
		case -872628103:
		case -807307453:
		case -743870406:
		case -732502703:
		case -689914155:
		case -677268897:
		case -624498332:
		case -586283258:
		case -551182035:
		case -458420031:
		case -417335499:
		case -366959609:
		case -351538474:
		case -294955637:
		case -287794981:
		case -274901691:
		case -274413916:
		case -198765800:
		case -175501147:
		case -131271168:
		case -81050372:
		case 15676852:
		case 25253416:
		case 76710316:
		case 111174276:
		case 113392784:
		case 116619265:
		case 245833833:
		case 272433059:
		case 290746986:
		case 328855486:
		case 383936181:
		case 384178408:
		case 392683917:
		case 467408818:
		case 494571889:
		case 495062037:
		case 495887552:
		case 505367429:
		case 525317058:
		case 585692720:
		case 606206989:
		case 635824265:
		case 676903322:
		case 703694458:
		case 703773503:
		case 716515216:
		case 766850795:
		case 790068786:
		case 800098637:
		case 812489544:
		case 879704227:
		case 885213159:
		case 939128696:
		case 949797982:
		case 968018790:
		case 1001559014:
		case 1055791420:
		case 1076696182:
		case 1090498470:
		case 1092698497:
		case 1112299501:
		case 1120417603:
		case 1132161511:
		case 1147429965:
		case 1155584865:
		case 1161535814:
		case 1174060710:
		case 1233150997:
		case 1281042957:
		case 1285826702:
		case 1322862606:
		case 1353765918:
		case 1363757812:
		case 1373471224:
		case 1385794696:
		case 1399164840:
		case 1478112078:
		case 1559577164:
		case 1569902667:
		case 1615011334:
		case 1639046972:
		case 1652790811:
		case 1664062243:
		case 1699273179:
		case 1717163287:
		case 1733888286:
		case 1737689467:
		case 1743722699:
		case 1752244106:
		case 1795971462:
		case 1799713607:
		case 1896032674:
		case 1899107908:
		case 1924088058:
		case 1930967388:
		case 1945283077:
		case 1974121534:
		case 1984574849:
		case 2009257216:
		case 2012750462:
		case 2026187299:
		case 2104147823:
		case 2143682238:
			StringCopy(sParam1, aggregate_func_2854(func_1334(iVar2)), 64);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1145(var uParam0, var uParam1)
{
	int iVar0;

	if (!aggregate_func_4349(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_2518)
	{
		if (aggregate_func_4632(Global_1270479->f_2518.f_1[iVar0 /*21*/], uParam0))
		{
			*uParam1 = { *(Global_1270479->f_2518.f_1[iVar0 /*21*/]) };
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1149(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1336(uParam0, uParam1);
	if (iVar0 != 0)
	{
		if (!ENTITY::_0x8C03CD6B5E0E85E8(*uParam1, iVar0))
		{
		}
	}
}

void func_1150(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	struct<10> Var2;
	bool bVar12;
	int iVar13;

	if ((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1) && !aggregate_func_1279(*uParam1, Local_243.f_1396, (Local_243.f_1294 + 50f), 1, 1)) && !aggregate_func_898(ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f, 1120403456 /* Float: 100f */))
	{
		aggregate_func_1172(*uParam1, 0, 0);
	}
	if ((((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1) && uParam1->f_10 == joaat("bandit")) && aggregate_func_3724(&(uParam0->f_3)) > 15f) && !aggregate_func_987(*uParam1, func_1338(*uParam1), 150f, 1)) && !aggregate_func_898(ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f, 200f))
	{
		aggregate_func_1172(*uParam1, 0, 0);
	}
	if (uParam1->f_10 == joaat("horse"))
	{
		return;
	}
	if (!aggregate_func_4278(uParam1, 512) && ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
		{
			func_1149(uParam0, uParam1);
		}
		aggregate_func_4266(uParam1, 512);
	}
	bVar0 = false;
	if (uParam1->f_10 == joaat("bandit") || uParam1->f_10 == joaat("defensive"))
	{
		aggregate_func_6948(&(Local_2681.f_1), 1);
		bVar0 = true;
	}
	else
	{
		aggregate_func_6948(&(Local_2681.f_1), 0);
	}
	if (((!aggregate_func_4278(uParam1, 4) && (MISC::GET_FRAME_COUNT() % 3) == 0) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 2f, 50f)) && !ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
	{
		aggregate_func_4247((Local_2200[NETWORK::PARTICIPANT_ID_TO_INT() /*15*/])->f_1[uParam1->f_15], 4);
		aggregate_func_4266(uParam1, 4);
	}
	if (!aggregate_func_4278(uParam1, 32))
	{
		bVar1 = false;
		if (bVar0 && func_1341(*uParam1, PLAYER::PLAYER_PED_ID(), 1109393408 /* Float: 40f */))
		{
			bVar1 = true;
			Local_2681.f_32 = 131072;
		}
		if (aggregate_func_415(*uParam1, 0, &(Local_2681.f_1), &(Local_2681.f_32), 0, 0))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			aggregate_func_4266(uParam1, 32);
			Var2.f_9 = 255;
			Var2.f_5 = aggregate_func_4507(0, 8);
			Var2.f_6 = uParam1->f_15;
			Var2.f_7 = uParam1->f_16;
			Var2.f_8 = Local_2681.f_32;
			Var2.f_9 = PLAYER::PLAYER_ID();
			func_1158(Var2, 3);
		}
	}
	if (((aggregate_func_4278(uParam1, 32) && uParam0->f_1 < 8) && !aggregate_func_2905(*uParam1, 780511057)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
	{
		bVar12 = false;
		switch (Local_2681.f_32)
		{
			case 4:
			case 256:
				bVar12 = true;
				break;
		}
		iVar13 = uParam1->f_2;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
		{
			iVar13 = func_1338(*uParam1);
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			PED::_0x802092B07E3B1EEA(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 3);
		}
		if (bVar12 && !PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2681.f_39));
			TASK::TASK_COMBAT_PED(0, iVar13, 16384, 0);
			aggregate_func_1004(*uParam1, &(Local_2681.f_39), 0f, 1.5f, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2681.f_39));
			TASK::TASK_COMBAT_PED(0, iVar13, 0, 0);
			aggregate_func_1004(*uParam1, &(Local_2681.f_39), 0f, 1.5f, 1, 1);
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam1) && uParam1->f_10 != -1346830927) && uParam1->f_10 != joaat("horse"))
	{
		if (!aggregate_func_4278(uParam1, 64))
		{
			if (aggregate_func_4278(uParam0, 32) && aggregate_func_987(PLAYER::PLAYER_PED_ID(), *uParam1, 75f, 1))
			{
				uParam1->f_1 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), *uParam1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1345(uParam1));
				aggregate_func_4266(uParam1, 64);
				aggregate_func_4266(uParam1, 128);
				if (!aggregate_func_4281(32))
				{
					aggregate_func_4355(32);
				}
			}
			else if (aggregate_func_4278(uParam0, 4) && aggregate_func_987(PLAYER::PLAYER_PED_ID(), *uParam1, 50f, 1))
			{
				uParam1->f_1 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), *uParam1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1345(uParam1));
				MAP::_0x662D364ABF16DE2F(uParam1->f_1, -662251075);
				aggregate_func_4266(uParam1, 64);
			}
		}
		else
		{
			if (!aggregate_func_4278(uParam1, 128) && aggregate_func_4278(uParam0, 32))
			{
				MAP::_0xB059D7BD3D78C16F(uParam1->f_1, -662251075);
				aggregate_func_4266(uParam1, 128);
			}
			if (!aggregate_func_987(PLAYER::PLAYER_PED_ID(), *uParam1, 100f, 1))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_1));
				aggregate_func_4266(uParam1, 64);
				aggregate_func_4266(uParam1, 128);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam1->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_1));
	}
	switch (uParam1->f_10)
	{
		case joaat("search"):
			func_1346(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1347(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1348(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1349(uParam0, uParam1);
			break;
		case -1346830927:
			func_1350(uParam0, uParam1);
			break;
		case -862695229:
			func_1351(uParam0, uParam1);
			break;
	}
	uParam1->f_11 = uParam0->f_1;
}

void func_1151(var uParam0)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return;
	}
	bVar0 = ((Global_1939168->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || aggregate_func_8616());
	if (((!aggregate_func_4278(uParam0, 1) && Local_2681.f_1068 < 30) && aggregate_func_987(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 500f, 1)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 2f))
	{
		func_1354(uParam0->f_1, bVar0, 1);
		if (bVar0)
		{
			aggregate_func_4266(uParam0, 2);
		}
		aggregate_func_4266(uParam0, 1);
		Local_2681.f_1068++;
	}
	if (aggregate_func_4278(uParam0, 1))
	{
		if (!aggregate_func_987(PLAYER::PLAYER_PED_ID(), uParam0->f_1, 500f, 1) || !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 2f))
		{
			func_633(uParam0->f_1);
			aggregate_func_4266(uParam0, 1);
			Local_2681.f_1068 = (Local_2681.f_1068 - 1);
		}
		else if (!aggregate_func_4278(uParam0, 2) && bVar0)
		{
			func_1357(uParam0->f_1, bVar0, 0);
			aggregate_func_4266(uParam0, 2);
		}
		else if (aggregate_func_4278(uParam0, 2) && !bVar0)
		{
			func_1357(uParam0->f_1, bVar0, 0);
			aggregate_func_4266(uParam0, 2);
		}
	}
}

void func_1158(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Param0.f_5)))
	{
		return;
	}
	Param0 = 55;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param0.f_4 = iParam10;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 10, 51, &(Param0.f_5));
}

void func_1160(var uParam0)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return;
	}
	if (!aggregate_func_8616())
	{
		return;
	}
	bVar0 = (Global_1939168->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
	if (((!aggregate_func_4278(uParam0, 4) && Local_2681.f_1068 < 30) && aggregate_func_987(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 500f, 1)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 2f))
	{
		func_1354(uParam0->f_3, bVar0, 0);
		if (bVar0)
		{
			aggregate_func_4266(uParam0, 8);
		}
		aggregate_func_4266(uParam0, 4);
		Local_2681.f_1068++;
	}
	if (aggregate_func_4278(uParam0, 4))
	{
		if (!aggregate_func_987(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 500f, 1) || !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 2f))
		{
			func_633(uParam0->f_3);
			aggregate_func_4266(uParam0, 4);
			Local_2681.f_1068 = (Local_2681.f_1068 - 1);
		}
		else if (!aggregate_func_4278(uParam0, 8) && bVar0)
		{
			func_1357(uParam0->f_3, bVar0, 0);
			aggregate_func_4266(uParam0, 8);
		}
		else if (aggregate_func_4278(uParam0, 8) && !bVar0)
		{
			func_1357(uParam0->f_3, bVar0, 0);
			aggregate_func_4266(uParam0, 8);
		}
	}
}

void func_1161(var uParam0, var uParam1)
{
	int iVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;
	struct<5> Var9;
	struct<5> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	vector3 vVar22;
	struct<5> Var27;
	int iVar32;
	int iVar33;

	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	Var9 = Local_2681.f_33;
	Var9.f_2 = 810522312;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var9.f_1), &Var9))
	{
	}
	Var9.f_2 = -570563579;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var9.f_1), &Var9))
	{
	}
	Var9.f_2 = 137865554;
	Var9.f_3 = uParam0->f_2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var9.f_1), &Var9))
	{
	}
	if (!aggregate_func_3761(Var9, 1310428614, &iVar6, 0))
	{
	}
	iVar8 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var9, Var9.f_1);
	iVar19 = 0;
	while (iVar19 <= (iVar6 - 1))
	{
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
		MISC::_COPY_MEMORY(&Var14, &Var9, 5);
		Var14.f_2 = -531292328;
		Var14.f_3 = iVar7;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var14.f_1), &Var14))
		{
		}
		if (!aggregate_func_3012(Var14, -767930282, &iVar21, 0))
		{
		}
		iVar0[iVar19] = iVar21;
		iVar19++;
	}
	vVar22.x = Local_2681.f_33;
	vVar22.f_2 = 1763905867;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar22.f_1), &vVar22))
	{
	}
	iVar19 = 0;
	while (iVar19 <= (iVar6 - 1))
	{
		MISC::_COPY_MEMORY(&Var14, &vVar22, 5);
		Var14.f_2 = 766008034;
		Var14.f_3 = &iVar0[iVar19];
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var14.f_1), &Var14))
		{
		}
		if (!aggregate_func_3761(Var14, -1848254013, &iVar7, 0))
		{
		}
		iVar33 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var14, Var14.f_1);
		if (iVar33 == 0)
		{
			return;
		}
		if (iVar7 == 1)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar33);
			Var14.f_2 = 536703056;
			Var14.f_3 = iVar7;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var14.f_1), &Var14))
			{
			}
			if (!aggregate_func_3012(Var14, -1198443210, &iVar21, 0))
			{
			}
			iVar32 = iVar21;
			aggregate_func_4741(iVar32, 0);
		}
		else
		{
			iVar20 = 0;
			while (iVar20 <= (iVar33 - 1))
			{
				MISC::_COPY_MEMORY(&Var27, &Var14, 5);
				Var27.f_2 = 536703056;
				Var27.f_3 = iVar20;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var27.f_1), &Var27))
				{
				}
				if (!aggregate_func_3012(Var27, -1198443210, &iVar21, 0))
				{
				}
				iVar32 = iVar21;
				aggregate_func_4741(iVar32, 0);
				iVar20++;
			}
		}
		iVar19++;
	}
}

bool func_1162(vector3 vParam0)
{
	if (!aggregate_func_1279(Global_35, vParam0, 2f, 1, 1))
	{
		return false;
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@chest_01", "enter_rf", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@chest_01", "base", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@chest_01", "exit", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@nothing_01", "enter_rf", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@nothing_01", "base", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@nothing_01", "exit", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@grab_01", "enter_rf", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@grab_01", "base", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_pickup@mp_treasure@grab_01", "exit", 1))
	{
		return true;
	}
	return false;
}

int func_1260()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3 + 1);
	return iVar0;
}

int func_1266(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, -1833360518, &iVar0, 0);
	return iVar0;
}

int func_1267(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, 413811142, &iVar0, 0);
	return iVar0;
}

int func_1268(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, -1515541953, &iVar0, 0);
	return iVar0;
}

bool func_1269(struct<5> Param0)
{
	var uVar0;

	aggregate_func_3758(Param0, -1774701585, &uVar0, 0);
	return uVar0;
}

void func_1271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	struct<5> Var0;

	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	Var0 = Local_2681.f_33;
	Var0.f_2 = -538315284;
	Var0.f_3 = Local_243.f_2;
	if (iParam6 == 0)
	{
		Var0.f_4 = *uParam2;
	}
	else
	{
		Var0.f_4 = iParam6;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	Var0.f_2 = 1218921439;
	if (iParam7 == -1)
	{
		Var0.f_3 = Local_1706.f_14;
	}
	else
	{
		Var0.f_3 = iParam7;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if ((iParam5 % 3) == 0)
	{
		if (!aggregate_func_3418(Var0, -1191553031, uParam0, 0))
		{
		}
		if (!aggregate_func_3451(Var0, -348163890, uParam1, 0))
		{
		}
	}
	else if ((iParam5 % 3) == 1)
	{
		if (!aggregate_func_3418(Var0, 1687465887, uParam0, 0))
		{
			if (!aggregate_func_3418(Var0, -1191553031, uParam0, 0))
			{
			}
		}
		if (!aggregate_func_3451(Var0, -1538366747, uParam1, 0))
		{
			if (!aggregate_func_3451(Var0, -348163890, uParam1, 0))
			{
			}
		}
	}
	else
	{
		if (!aggregate_func_3418(Var0, 1381829424, uParam0, 0))
		{
			if (!aggregate_func_3418(Var0, -1191553031, uParam0, 0))
			{
			}
		}
		if (!aggregate_func_3451(Var0, 1979614790, uParam1, 0))
		{
			if (!aggregate_func_3451(Var0, -348163890, uParam1, 0))
			{
			}
		}
	}
}

bool func_1272(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return true;
	}
	if (!aggregate_func_404(uParam0, uParam1->f_4, vParam2, uParam5, 1, 0, 1, 1, 1))
	{
		return false;
	}
	uParam1->f_5 = { vParam2 };
	uParam1->f_8 = uParam5;
	*uParam1 = NETWORK::NET_TO_PED(*uParam0);
	func_1451(uParam0, uParam1);
	return true;
}

int func_1276()
{
	int iVar0;
	float fVar1[32];
	float fVar34[32];
	float fVar67;
	float fVar68;
	float fVar69;
	float fVar70;
	float fVar71;

	fVar67 = 0f;
	fVar68 = 0f;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1452(iVar0))
		{
			fVar1[iVar0] = BUILTIN::TO_FLOAT(&(Local_1706.f_16[iVar0]));
			fVar1[iVar0] = (&fVar1[iVar0] * &fVar1[iVar0]);
			fVar67 = (fVar67 + &fVar1[iVar0]);
		}
		iVar0++;
	}
	if (fVar67 == 0f)
	{
		fVar67 = 1f;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1452(iVar0))
		{
			fVar34[iVar0] = (fVar67 - &fVar1[iVar0]);
			if (&fVar34[iVar0] == 0f)
			{
				fVar34[iVar0] = (&fVar34[iVar0] + 0.5f);
			}
			fVar68 = (fVar68 + &fVar34[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1452(iVar0))
		{
			fVar34[iVar0] = (&fVar34[iVar0] / fVar68);
		}
		iVar0++;
	}
	fVar69 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	fVar70 = 0f;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1452(iVar0))
		{
			if (&fVar34[iVar0] == 0f)
			{
			}
			else
			{
				fVar71 = (fVar70 + &fVar34[iVar0]);
				if (fVar69 >= fVar70 && fVar69 <= fVar71)
				{
					return PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
				fVar70 = fVar71;
			}
		}
		iVar0++;
	}
	return 255;
}

int func_1277(vector3 vParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1453(vParam0, 1203982208 /* Float: 99999f */, 0, 0, 0));
}

bool func_1278(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;

	if (iParam10 <= 1)
	{
		return true;
	}
	if (!aggregate_func_4124(vParam1, vParam4, func_1454(*uParam0), 1))
	{
		return false;
	}
	if (aggregate_func_4124(vParam1, vParam7, func_1456(*uParam0), 1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_49[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_49[iVar0 /*22*/])->f_21 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&((Local_2681.f_50[iVar0 /*56*/])->f_1[iVar1 /*17*/])) && aggregate_func_1279(&((Local_2681.f_50[iVar0 /*56*/])->f_1[iVar1 /*17*/]), vParam1, 20f, 0, 1))
				{
					return false;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iVar0), vParam1, 2f, 100f))
		{
			return false;
		}
		iVar0++;
	}
	if (iParam10 < 4)
	{
		return true;
	}
	if (((*uParam0 + iParam11) == &Local_1706.f_1[0] || (*uParam0 + iParam11) == &Local_1706.f_1[1]) || (*uParam0 + iParam11) == &Local_1706.f_1[2])
	{
		return false;
	}
	if (*uParam0 == -1347265301)
	{
		if (aggregate_func_6784() < 180000)
		{
		}
		else if (aggregate_func_6784() < 300000)
		{
			if (!aggregate_func_4124(vParam1, Local_1706.f_491, 400f, 1))
			{
				return false;
			}
		}
		else if (aggregate_func_6784() < 420000)
		{
			if (!aggregate_func_4124(vParam1, Local_1706.f_491, 200f, 1))
			{
				return false;
			}
		}
		else if (!aggregate_func_4124(vParam1, Local_1706.f_491, 100f, 1))
		{
			return false;
		}
	}
	return true;
}

void func_1279(var uParam0, int iParam1)
{
	if (uParam0->f_1 == iParam1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
	aggregate_func_4480(&(uParam0->f_3));
}

void func_1280(var uParam0, var uParam1)
{
	struct<10> Var0;

	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1458(uParam0, uParam1, 0) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1279(uParam0, 1);
			}
			break;
		case 1:
			func_1279(uParam0, 2);
			break;
		case 2:
			if ((Local_1706.f_49[uParam1->f_15 /*22*/])->f_21 > 1)
			{
				return;
			}
			if (func_1460(uParam1) && aggregate_func_987(func_1338(*uParam1), *uParam1, 15f, 1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_9 = 255;
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2681.f_32;
					func_1158(Var0, 3);
				}
				func_1279(uParam0, 8);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 12000 || !aggregate_func_4278(Local_2681.f_50[uParam1->f_15 /*56*/], 32))
			{
				if (aggregate_func_987(func_1338(*uParam1), *uParam1, 15f, 1))
				{
					if (aggregate_func_4278(Local_2681.f_50[uParam1->f_15 /*56*/], 64))
					{
						func_1279(uParam0, 4);
					}
					else
					{
						func_1279(uParam0, 3);
					}
				}
				else if (aggregate_func_4278(Local_2681.f_50[uParam1->f_15 /*56*/], 32))
				{
					func_1279(uParam0, 0);
				}
			}
			break;
		case 3:
			if (aggregate_func_4732(&(uParam0->f_3)) > 1000)
			{
				func_1279(uParam0, 2);
			}
			break;
		case 4:
			if (aggregate_func_4732(&(uParam0->f_3)) > 12000)
			{
				func_1279(uParam0, 2);
			}
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_1281(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar10;

	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	Var0.f_9 = 255;
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1458(uParam0, uParam1, 1) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1279(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate_func_4278(uParam0, 4))
			{
				func_1279(uParam0, 2);
			}
			if (aggregate_func_4278(uParam1, 16))
			{
				func_1279(uParam0, 4);
			}
			break;
		case 2:
			if (!aggregate_func_4278(uParam0, 16))
			{
				iVar10 = 0;
				while (iVar10 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar10)) && func_1341(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 15f))
					{
						if ((!aggregate_func_4260(&(uParam1->f_12)) || aggregate_func_4732(&(uParam1->f_12)) > 5000) || aggregate_func_987(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 8f, 1))
						{
							aggregate_func_4266(uParam0, 16);
							aggregate_func_4266(Local_1706.f_49[uParam1->f_15 /*22*/], 8);
							Var0.f_5 = aggregate_func_4507(0, 8);
							Var0.f_6 = uParam1->f_15;
							Var0.f_7 = uParam1->f_16;
							Var0.f_9 = PLAYER::INT_TO_PLAYERINDEX(iVar10);
							func_1158(Var0, 1);
						}
					}
					iVar10++;
				}
			}
			else
			{
				func_1279(uParam0, 3);
			}
			break;
		case 3:
			if (func_1460(uParam1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2681.f_32;
					func_1158(Var0, 3);
				}
				func_1279(uParam0, 8);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 2000)
			{
				func_1279(uParam0, 4);
			}
			break;
		case 4:
			if (aggregate_func_4732(&(uParam0->f_3)) > 2000 && aggregate_func_987(*uParam1, uParam1->f_2, 3f, 1))
			{
				if (func_1460(uParam1))
				{
					func_1279(uParam0, 8);
				}
				else
				{
					func_1279(uParam0, 5);
				}
			}
			else if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1))
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1461(8, uParam1);
				}
				func_1279(uParam0, 6);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 8000 && aggregate_func_4278(uParam1, 8))
			{
				if (!func_1462(uParam1->f_2, *uParam1))
				{
					if (func_1460(uParam1))
					{
						func_1279(uParam0, 8);
					}
					else
					{
						func_1279(uParam0, 7);
					}
				}
				else if (aggregate_func_4278(uParam1, 8))
				{
					func_1461(8, uParam1);
				}
			}
			break;
		case 5:
			if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1) || (aggregate_func_4732(&(uParam0->f_3)) > 3000 && !aggregate_func_2905(*uParam1, joaat("SCRIPT_TASK_CONFRONT"))))
			{
				func_1279(uParam0, 4);
			}
			else if (!aggregate_func_1279(*uParam1, uParam1->f_5, 10f, 1, 1) || aggregate_func_4732(&(uParam0->f_3)) > 10000)
			{
				func_1279(uParam0, 7);
			}
			break;
		case 6:
			if (aggregate_func_4278(uParam0, 16))
			{
				Var0.f_5 = aggregate_func_4507(0, 8);
				Var0.f_6 = uParam1->f_15;
				Var0.f_7 = uParam1->f_16;
				func_1158(Var0, 2);
			}
			if (func_1458(uParam0, uParam1, 0))
			{
				func_1279(uParam0, 2);
			}
			break;
		case 7:
			if (aggregate_func_4732(&(uParam0->f_3)) > 6000 && !func_1462(uParam1->f_2, *uParam1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2681.f_32;
					func_1158(Var0, 3);
				}
				func_1279(uParam0, 8);
			}
			else if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1))
			{
				func_1279(uParam0, 6);
			}
			break;
		case 8:
			break;
		case 9:
			if ((MISC::GET_FRAME_COUNT() % 30) == 0 && !aggregate_func_987(*uParam1, func_1338(*uParam1), 100f, 1))
			{
				func_1279(uParam0, 10);
			}
			break;
		case 10:
			break;
	}
}

void func_1282(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (aggregate_func_2905(*uParam1, 1056466932) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1279(uParam0, 1);
			}
			break;
		case 1:
			func_1279(uParam0, 2);
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1283(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1458(uParam0, uParam1, 1) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1279(uParam0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1284(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (aggregate_func_558(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0))
			{
				func_1279(uParam0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1285(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1457(uParam1->f_10))
		{
			func_1279(uParam0, 9);
		}
		else
		{
			func_1279(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			func_1279(uParam0, 1);
			break;
		case 1:
			if (aggregate_func_2905(*uParam1, 780511057))
			{
				func_1279(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

int func_1333(int iParam0)
{
	switch (iParam0)
	{
		case -135773962:
			return -250719930 /* GXTEntry: "Agate Arrowhead" */;
		case 1711174319:
			return -1866466055 /* GXTEntry: "Bone Arrowhead" */;
		case -1388841754:
			return 1546533744 /* GXTEntry: "Chipped Arrowhead" */;
		case 1833116882:
			return 1063947084 /* GXTEntry: "Crude Arrowhead" */;
		case 1732356987:
			return 1570512815 /* GXTEntry: "Feldspar Arrowhead" */;
		case 1365678051:
			return -909283963 /* GXTEntry: "Flint Arrowhead" */;
		case -469808552:
			return -1604348319 /* GXTEntry: "Obsidian Arrowhead" */;
		case 651832873:
			return -965972353 /* GXTEntry: "Quartz Arrowhead" */;
		case -1338236715:
			return -1850613113 /* GXTEntry: "Raw Arrowhead" */;
		case -1459382417:
			return 261854063 /* GXTEntry: "Rough Arrowhead" */;
		case -1980587442:
			return -2023776602 /* GXTEntry: "Slate Arrowhead" */;
		case -305847860:
			return 751981376 /* GXTEntry: "Splintered Arrowhead" */;
		case 259513172:
			return -897008046 /* GXTEntry: "Caribbean Rum" */;
		case 505459309:
			return -392829098 /* GXTEntry: "Cognac" */;
		case -2132348472:
			return 1496994240 /* GXTEntry: "1700 New Yorke Token" */;
		case 1531432272:
			return 1030821510 /* GXTEntry: "1787 One Cent Token" */;
		case -1678406212:
			return -329116887 /* GXTEntry: "1789 Penny" */;
		case -71915978:
			return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
		case 1789589305:
			return -1884965711 /* GXTEntry: "1792 Nickel" */;
		case 897707862:
			return 2116252151;
		case -1787268311:
			return 1328162258 /* GXTEntry: "1794 Silver Dollar" */;
		case 395137059:
			return -1841900790 /* GXTEntry: "1795 Half Eagle" */;
		case -702109507:
			return -1867083042 /* GXTEntry: "1796 Halfpenny" */;
		case -1843094784:
			return -1323673307 /* GXTEntry: "1797 Gold Eagle" */;
		case 1659722492:
			return 442429651 /* GXTEntry: "1798 Draped Bust Silver Dollar" */;
		case -2063569423:
			return 1640145676 /* GXTEntry: "1800 Five Dollar Bechtler" */;
		case -1400928817:
			return -1982102297 /* GXTEntry: "1800 Gold Dollar" */;
		case 1524848772:
			return 285783511 /* GXTEntry: "1800 Gold Quarter" */;
		case -1914323519:
			return -625323392 /* GXTEntry: "1800 Half Dime" */;
		case 856057291:
			return 1465762285 /* GXTEntry: "Absinthe" */;
		case -1132845243:
			return -753628968 /* GXTEntry: "Boar Bristle Brush" */;
		case 1606281828:
			return 1006600695 /* GXTEntry: "Ebony Hairbrush" */;
		case 530382704:
			return 1742487931 /* GXTEntry: "Goat Hair Brush" */;
		case -1519010704:
			return -1631158895 /* GXTEntry: "Horse Hair Brush" */;
		case 520232109:
			return -1888442693 /* GXTEntry: "Rosewood Hairbrush" */;
		case -364070233:
			return -27315089 /* GXTEntry: "New Guinea Rosewood Hairbrush" */;
		case -1296260337:
			return 1416504149 /* GXTEntry: "Boxwood Comb" */;
		case 127681874:
			return 249916796 /* GXTEntry: "Cherrywood Comb" */;
		case 1290286961:
			return -1763726091 /* GXTEntry: "Ivory Comb" */;
		case 1628530735:
			return -1868057871 /* GXTEntry: "Tortoiseshell Comb" */;
		case 530930425:
			return 1979910825 /* GXTEntry: "Ebony Hairpin" */;
		case -581360339:
			return -2058309720 /* GXTEntry: "Ivory Hairpin" */;
		case -649069078:
			return 147602269 /* GXTEntry: "Jade Hairpin" */;
		case -180052139:
			return 1204853609 /* GXTEntry: "Metal Hairpin" */;
		case -1597269158:
			return 1217599018 /* GXTEntry: "Carved Wooden Hairpin" */;
		case 903574438:
			return 1135560775 /* GXTEntry: "Irish Whiskey" */;
		case -77692146:
			return 686159610 /* GXTEntry: "Braxton Amethyst Necklace" */;
		case -2098248158:
			return -526980287 /* GXTEntry: "Tuamotu Pearl Necklace" */;
		case 544784227:
			return -523530337 /* GXTEntry: "Elliston Carved Bracelet" */;
		case -1750110910:
			return -162108183 /* GXTEntry: "Emmeline Coral Earrings" */;
		case -373311654:
			return 49516917 /* GXTEntry: "Harland Coral Ring" */;
		case 309566985:
			return 308818593 /* GXTEntry: "Abello Ruby Bangle Bracelet" */;
		case -115477556:
			return -1324394408 /* GXTEntry: "Endicott Diamond Earrings" */;
		case -1845614766:
			return 324548078 /* GXTEntry: "Ursula Citrine Earrings" */;
		case 1216475110:
			return 1466045897 /* GXTEntry: "Sterling Tooth Earrings" */;
		case -901049146:
			return -1370882316 /* GXTEntry: "Duchess Emerald Earrings" */;
		case -1479457955:
			return -836035669 /* GXTEntry: "Bosque Emerald Ring" */;
		case -256638116:
			return -1893135121 /* GXTEntry: "Beaulieux Diamond Ring" */;
		case -1298419407:
			return 600432608 /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */;
		case -883489996:
			return 575547207 /* GXTEntry: "Ainsworth Cross Necklace" */;
		case 1357570735:
			return -1579131656 /* GXTEntry: "Rou Pearl Necklace" */;
		case -330620837:
			return -939330110 /* GXTEntry: "Gosselin White Gold Necklace" */;
		case -599044012:
			return -313250059 /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */;
		case 1465764690:
			return -1804185681 /* GXTEntry: "Harford Garnet Earrings" */;
		case -1914990977:
			return 319991179 /* GXTEntry: "Pilgrim Moonstone Ring" */;
		case 527426268:
			return 456059252 /* GXTEntry: "Pelle Pearl Necklace" */;
		case 700547967:
			return -1430911710 /* GXTEntry: "Aubrey Onyx Ring" */;
		case -1434735180:
			return 1645128206 /* GXTEntry: "Durant Pearl Bracelet" */;
		case 604651083:
			return -644738616 /* GXTEntry: "Josephine Pearl Earrings" */;
		case 371926572:
			return 391412462 /* GXTEntry: "Bonnard Pearl Ring" */;
		case -253293041:
			return 289416445 /* GXTEntry: "Magnate Turquoise Ring" */;
		case 536987249:
			return 61850108 /* GXTEntry: "Blakely Miniature Necklace" */;
		case -1538719578:
			return 333760707 /* GXTEntry: "Royal Victoria Diamond Earrings" */;
		case -1949131163:
			return -1350438989 /* GXTEntry: "Beauchêne Ruby Earrings" */;
		case 967176349:
			return 205445966 /* GXTEntry: "Richelieu Amethyst Necklace" */;
		case 574670748:
			return 1107778901 /* GXTEntry: "Helena Sapphire Bracelet" */;
		case -605903845:
			return 232063688 /* GXTEntry: "Greco Sapphire Bracelet" */;
		case -32321552:
			return -888745206 /* GXTEntry: "Dane Topaz Necklace" */;
		case 1904567340:
			return 1926912008 /* GXTEntry: "Banais Topaz Ring" */;
		case -834041111:
			return 996250359 /* GXTEntry: "Calumet Turquoise Earrings" */;
		case 726047816:
			return -1523419995 /* GXTEntry: "Infanta Turquoise Bracelet" */;
		case -37487183:
			return -209370662 /* GXTEntry: "Thorburn Turquoise Ring" */;
		case 2079959006:
			return 1289018795 /* GXTEntry: "Orchidee Diamond Earrings" */;
		case -1647261494:
			return -288598209 /* GXTEntry: "Sackville Diamond Ring" */;
		case 746055788:
			return -1461195441 /* GXTEntry: "Yates Diamond Ring" */;
		case 1028397275:
			return -130873515 /* GXTEntry: "London Dry Gin" */;
		case 1962033744:
			return 1603716279 /* GXTEntry: "Old Tom Gin" */;
		case -1583551360:
			return 1565126061 /* GXTEntry: "Gran Corazon Madeira" */;
		case -1803360398:
			return 1209263432 /* GXTEntry: "Scotch Whisky" */;
		case 1331081117:
			return 941442568 /* GXTEntry: "Tennessee Whiskey" */;
		default:
			break;
	}
	return 0;
}

int func_1334(int iParam0)
{
	switch (iParam0)
	{
		case 1615011334:
			return 1496994240 /* GXTEntry: "1700 New Yorke Token" */;
		case 676903322:
			return 1030821510 /* GXTEntry: "1787 One Cent Token" */;
		case -1201148795:
			return -329116887 /* GXTEntry: "1789 Penny" */;
		case -807307453:
			return -1884965711 /* GXTEntry: "1792 Nickel" */;
		case -198765800:
			return 2116252151;
		case -294955637:
			return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
		case -2129818996:
			return 1328162258 /* GXTEntry: "1794 Silver Dollar" */;
		case -131271168:
			return -1841900790 /* GXTEntry: "1795 Half Eagle" */;
		case -1105355522:
			return -1867083042 /* GXTEntry: "1796 Halfpenny" */;
		case 1120417603:
			return -1323673307 /* GXTEntry: "1797 Gold Eagle" */;
		case -732502703:
			return 442429651 /* GXTEntry: "1798 Draped Bust Silver Dollar" */;
		case -175501147:
			return -625323392 /* GXTEntry: "1800 Half Dime" */;
		case 1399164840:
			return 1640145676 /* GXTEntry: "1800 Five Dollar Bechtler" */;
		case -1767394530:
			return 285783511 /* GXTEntry: "1800 Gold Quarter" */;
		case 1737689467:
			return -1982102297 /* GXTEntry: "1800 Gold Dollar" */;
		case 1161535814:
			return -753628968 /* GXTEntry: "Boar Bristle Brush" */;
		case -2014985768:
			return 1006600695 /* GXTEntry: "Ebony Hairbrush" */;
		case 1281042957:
			return 1742487931 /* GXTEntry: "Goat Hair Brush" */;
		case -2006507012:
			return -1631158895 /* GXTEntry: "Horse Hair Brush" */;
		case 113392784:
			return -27315089 /* GXTEntry: "New Guinea Rosewood Hairbrush" */;
		case 525317058:
			return -1888442693 /* GXTEntry: "Rosewood Hairbrush" */;
		case -1489501682:
			return 1416504149 /* GXTEntry: "Boxwood Comb" */;
		case -1872221348:
			return 249916796 /* GXTEntry: "Cherrywood Comb" */;
		case 272433059:
			return -1763726091 /* GXTEntry: "Ivory Comb" */;
		case 2009257216:
			return -1868057871 /* GXTEntry: "Tortoiseshell Comb" */;
		case 716515216:
			return 1217599018 /* GXTEntry: "Carved Wooden Hairpin" */;
		case 968018790:
			return 1979910825 /* GXTEntry: "Ebony Hairpin" */;
		case 2026187299:
			return -2058309720 /* GXTEntry: "Ivory Hairpin" */;
		case 585692720:
			return 147602269 /* GXTEntry: "Jade Hairpin" */;
		case -287794981:
			return 1204853609 /* GXTEntry: "Metal Hairpin" */;
		case -1653099775:
			return 308818593 /* GXTEntry: "Abello Ruby Bangle Bracelet" */;
		case 800098637:
			return 1645128206 /* GXTEntry: "Durant Pearl Bracelet" */;
		case -1555585595:
			return -523530337 /* GXTEntry: "Elliston Carved Bracelet" */;
		case 383936181:
			return 600432608 /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */;
		case -1922025145:
			return 232063688 /* GXTEntry: "Greco Sapphire Bracelet" */;
		case -586283258:
			return 1107778901 /* GXTEntry: "Helena Sapphire Bracelet" */;
		case 1055791420:
			return -1523419995 /* GXTEntry: "Infanta Turquoise Bracelet" */;
		case -1093637570:
			return -313250059 /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */;
		case 1090498470:
			return 324548078 /* GXTEntry: "Ursula Citrine Earrings" */;
		case -458420031:
			return -162108183 /* GXTEntry: "Emmeline Coral Earrings" */;
		case -551182035:
			return 1466045897 /* GXTEntry: "Sterling Tooth Earrings" */;
		case 790068786:
			return -1370882316 /* GXTEntry: "Duchess Emerald Earrings" */;
		case -1555042073:
			return 1289018795 /* GXTEntry: "Orchidee Diamond Earrings" */;
		case 1132161511:
			return -644738616 /* GXTEntry: "Josephine Pearl Earrings" */;
		case 1896032674:
			return -1350438989 /* GXTEntry: "Beauchêne Ruby Earrings" */;
		case 384178408:
			return -1804185681 /* GXTEntry: "Harford Garnet Earrings" */;
		case 328855486:
			return -1324394408 /* GXTEntry: "Endicott Diamond Earrings" */;
		case 1373471224:
			return 333760707 /* GXTEntry: "Royal Victoria Diamond Earrings" */;
		case 1664062243:
			return 996250359 /* GXTEntry: "Calumet Turquoise Earrings" */;
		case 116619265:
			return -526980287 /* GXTEntry: "Tuamotu Pearl Necklace" */;
		case -2090931256:
			return 686159610 /* GXTEntry: "Braxton Amethyst Necklace" */;
		case 939128696:
			return 575547207 /* GXTEntry: "Ainsworth Cross Necklace" */;
		case 1155584865:
			return -939330110 /* GXTEntry: "Gosselin White Gold Necklace" */;
		case 1569902667:
			return 456059252 /* GXTEntry: "Pelle Pearl Necklace" */;
		case 76710316:
			return -1579131656 /* GXTEntry: "Rou Pearl Necklace" */;
		case 1322862606:
			return -888745206 /* GXTEntry: "Dane Topaz Necklace" */;
		case -2024019598:
			return 61850108 /* GXTEntry: "Blakely Miniature Necklace" */;
		case -274901691:
			return 205445966 /* GXTEntry: "Richelieu Amethyst Necklace" */;
		case 494571889:
			return 49516917 /* GXTEntry: "Harland Coral Ring" */;
		case -2053586493:
			return -1430911710 /* GXTEntry: "Aubrey Onyx Ring" */;
		case -2133164405:
			return -836035669 /* GXTEntry: "Bosque Emerald Ring" */;
		case 2143682238:
			return -1893135121 /* GXTEntry: "Beaulieux Diamond Ring" */;
		case -1963501782:
			return -1461195441 /* GXTEntry: "Yates Diamond Ring" */;
		case 467408818:
			return 391412462 /* GXTEntry: "Bonnard Pearl Ring" */;
		case 1924088058:
			return 319991179 /* GXTEntry: "Pilgrim Moonstone Ring" */;
		case 1639046972:
			return -288598209 /* GXTEntry: "Sackville Diamond Ring" */;
		case -417335499:
			return 1926912008 /* GXTEntry: "Banais Topaz Ring" */;
		case -1724023040:
			return 289416445 /* GXTEntry: "Magnate Turquoise Ring" */;
		case -972590214:
			return -209370662 /* GXTEntry: "Thorburn Turquoise Ring" */;
		case -1751029298:
			return -1503977063 /* GXTEntry: "Two of Cups Tarot Card" */;
		case 1174060710:
			return 780474809 /* GXTEntry: "Three of Cups Tarot Card" */;
		case 15676852:
			return 2002017787 /* GXTEntry: "Four of Cups Tarot Card" */;
		case -1463148437:
			return -1937978205 /* GXTEntry: "Five of Cups Tarot Card" */;
		case 290746986:
			return -906665413 /* GXTEntry: "Six of Cups Tarot Card" */;
		case 1233150997:
			return -166875730 /* GXTEntry: "Seven of Cups Tarot Card" */;
		case 766850795:
			return -1485299891 /* GXTEntry: "Eight of Cups Tarot Card" */;
		case 1930967388:
			return -518056479 /* GXTEntry: "Nine of Cups Tarot Card" */;
		case -1693868721:
			return 113535009 /* GXTEntry: "Ten of Cups Tarot Card" */;
		case 1285826702:
			return -163158070 /* GXTEntry: "Ace of Cups Tarot Card" */;
		case -1342044032:
			return 1796104920 /* GXTEntry: "King of Cups Tarot Card" */;
		case 1974121534:
			return 125940045 /* GXTEntry: "Knight of Cups Tarot Card" */;
		case 1795971462:
			return 1299302457 /* GXTEntry: "Page of Cups Tarot Card" */;
		case 1001559014:
			return -2083620375 /* GXTEntry: "Queen of Cups Tarot Card" */;
		case -1639975189:
			return -796183751 /* GXTEntry: "Two of Pentacles Tarot Card" */;
		case 1353765918:
			return 1025032918 /* GXTEntry: "Three of Pentacles Tarot Card" */;
		case -624498332:
			return -1405474507 /* GXTEntry: "Four of Pentacles Tarot Card" */;
		case 1752244106:
			return 1530504034 /* GXTEntry: "Five of Pentacles Tarot Card" */;
		case -1961368073:
			return 1159809525 /* GXTEntry: "Six of Pentacles Tarot Card" */;
		case 495062037:
			return -2029903517 /* GXTEntry: "Seven of Pentacles Tarot Card" */;
		case -1472975869:
			return -184379884 /* GXTEntry: "Eight of Pentacles Tarot Card" */;
		case 1112299501:
			return 614214934 /* GXTEntry: "Nine of Pentacles Tarot Card" */;
		case 1385794696:
			return -2139092482 /* GXTEntry: "Ten of Pentacles Tarot Card" */;
		case -1184923125:
			return 695579895 /* GXTEntry: "Ace of Pentacles Tarot Card" */;
		case -2045332310:
			return 620291574 /* GXTEntry: "King of Pentacles Tarot Card" */;
		case 1984574849:
			return -98060753 /* GXTEntry: "Knight of Pentacles Tarot Card" */;
		case 1478112078:
			return 738218396 /* GXTEntry: "Page of Pentacles Tarot Card" */;
		case 1799713607:
			return -2053993543 /* GXTEntry: "Queen of Pentacles Tarot Card" */;
		case 812489544:
			return -1634516097 /* GXTEntry: "Two of Swords Tarot Card" */;
		case 392683917:
			return -322231256 /* GXTEntry: "Three of Swords Tarot Card" */;
		case 606206989:
			return -173673073 /* GXTEntry: "Four of Swords Tarot Card" */;
		case -81050372:
			return 1421431411 /* GXTEntry: "Five of Swords Tarot Card" */;
		case 879704227:
			return -2079764912 /* GXTEntry: "Six of Swords Tarot Card" */;
		case 1652790811:
			return -581875397 /* GXTEntry: "Seven of Swords Tarot Card" */;
		case -1851556126:
			return -172592270 /* GXTEntry: "Eight of Swords Tarot Card" */;
		case 25253416:
			return 2044772006 /* GXTEntry: "Nine of Swords Tarot Card" */;
		case -274413916:
			return 1926107175 /* GXTEntry: "Ten of Swords Tarot Card" */;
		case 1699273179:
			return 1367469686 /* GXTEntry: "Ace of Swords Tarot Card" */;
		case -872628103:
			return -2132509733 /* GXTEntry: "King of Swords Tarot Card" */;
		case 1743722699:
			return -2098877713 /* GXTEntry: "Knight of Swords Tarot Card" */;
		case 245833833:
			return -1533342244 /* GXTEntry: "Page of Swords Tarot Card" */;
		case 635824265:
			return 1841524557 /* GXTEntry: "Queen of Swords Tarot Card" */;
		case 1733888286:
			return -1431438550 /* GXTEntry: "Two of Wands Tarot Card" */;
		case -1240621354:
			return 215580102 /* GXTEntry: "Three of Wands Tarot Card" */;
		case 1899107908:
			return 2051310739 /* GXTEntry: "Four of Wands Tarot Card" */;
		case -998778990:
			return -2078537312 /* GXTEntry: "Five of Wands Tarot Card" */;
		case -366959609:
			return -920474102 /* GXTEntry: "Six of Wands Tarot Card" */;
		case -1527670026:
			return 1156167154 /* GXTEntry: "Seven of Wands Tarot Card" */;
		case 1147429965:
			return 74495272 /* GXTEntry: "Eight of Wands Tarot Card" */;
		case 949797982:
			return -715051670 /* GXTEntry: "Nine of Wands Tarot Card" */;
		case 703773503:
			return -1333497650 /* GXTEntry: "Ten of Wands Tarot Card" */;
		case 505367429:
			return -1968768543 /* GXTEntry: "Ace of Wands Tarot Card" */;
		case 1363757812:
			return 110185544 /* GXTEntry: "King of Wands Tarot Card" */;
		case -1588950139:
			return 1782725274 /* GXTEntry: "Knight of Wands Tarot Card" */;
		case -677268897:
			return -222405083 /* GXTEntry: "Page of Wands Tarot Card" */;
		case -351538474:
			return 1013011582 /* GXTEntry: "Queen of Wands Tarot Card" */;
		case -1490629752:
			return -392829098 /* GXTEntry: "Cognac" */;
		case 2012750462:
			return 1465762285 /* GXTEntry: "Absinthe" */;
		case 703694458:
			return -897008046 /* GXTEntry: "Caribbean Rum" */;
		case -1263660863:
			return 1135560775 /* GXTEntry: "Irish Whiskey" */;
		case -689914155:
			return -130873515 /* GXTEntry: "London Dry Gin" */;
		case 495887552:
			return 1603716279 /* GXTEntry: "Old Tom Gin" */;
		case 111174276:
			return 1565126061 /* GXTEntry: "Gran Corazon Madeira" */;
		case 2104147823:
			return 1209263432 /* GXTEntry: "Scotch Whisky" */;
		case 1092698497:
			return 941442568 /* GXTEntry: "Tennessee Whiskey" */;
		case -1259808609:
			return -250719930 /* GXTEntry: "Agate Arrowhead" */;
		case -1142172174:
			return -1866466055 /* GXTEntry: "Bone Arrowhead" */;
		case -743870406:
			return 1546533744 /* GXTEntry: "Chipped Arrowhead" */;
		case 1945283077:
			return 1063947084 /* GXTEntry: "Crude Arrowhead" */;
		case 1717163287:
			return 1570512815 /* GXTEntry: "Feldspar Arrowhead" */;
		case -2070072185:
			return -909283963 /* GXTEntry: "Flint Arrowhead" */;
		case 1559577164:
			return -1604348319 /* GXTEntry: "Obsidian Arrowhead" */;
		case 885213159:
			return -965972353 /* GXTEntry: "Quartz Arrowhead" */;
		case -1573845159:
			return -1850613113 /* GXTEntry: "Raw Arrowhead" */;
		case -1983358489:
			return 261854063 /* GXTEntry: "Rough Arrowhead" */;
		case -1889969380:
			return -2023776602 /* GXTEntry: "Slate Arrowhead" */;
		case 1076696182:
			return 751981376 /* GXTEntry: "Splintered Arrowhead" */;
		default:
			break;
	}
	return 0;
}

int func_1336(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (uParam1->f_10 == joaat("horse"))
	{
		return 0;
	}
	fVar0 = aggregate_func_2912(ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), Local_243.f_1396);
	fVar1 = (fVar0 / Local_243.f_1294);
	if (fVar1 < 10f)
	{
		fVar1 = 10f;
	}
	if (fVar1 > 75f)
	{
		fVar2 = 10f;
	}
	else if (fVar1 > 50f)
	{
		fVar2 = 7.5f;
	}
	else if (fVar1 > 25f)
	{
		fVar2 = 5f;
	}
	else
	{
		fVar2 = 2.5f;
	}
	switch (uParam1->f_10)
	{
		case joaat("defensive"):
		case joaat("guard"):
			fVar2 = (fVar2 * 1.5f);
			break;
		case -198742249:
		case joaat("search"):
			fVar2 = (fVar2 * 2f);
			break;
		case -1346830927:
		case -862695229:
			fVar2 = (fVar2 * 100f);
			break;
	}
	if (aggregate_func_4732(&(Local_0.f_4)) < 120000)
	{
		fVar2 = (fVar2 * 2f);
	}
	iVar3 = BUILTIN::ROUND(fVar2);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar4 > iVar3)
	{
		return 0;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar5 = BUILTIN::ROUND(fVar1);
	if (iVar4 < iVar5)
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar4 < 18)
		{
			return 412730885;
		}
		else if (iVar4 < 36)
		{
			return -2138801252;
		}
		else if (iVar4 < 54)
		{
			return -441558663;
		}
		else if (iVar4 < 66)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return 1135560775 /* GXTEntry: "Irish Whiskey" */;
				case 1:
					return 1603716279 /* GXTEntry: "Old Tom Gin" */;
				default:
					break;
			}
		}
		else if (iVar4 < 78)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return -250719930 /* GXTEntry: "Agate Arrowhead" */;
				case 1:
					return -1604348319 /* GXTEntry: "Obsidian Arrowhead" */;
				default:
					break;
			}
		}
		else if (iVar4 < 90)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar4)
			{
				case 0:
					return 1496994240 /* GXTEntry: "1700 New Yorke Token" */;
				case 1:
					return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
				case 2:
					return -1323673307 /* GXTEntry: "1797 Gold Eagle" */;
				default:
					break;
			}
		}
		else
		{
			return 838297948;
		}
	}
	else
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar4 < 18)
		{
			return 649725417;
		}
		else if (iVar4 < 36)
		{
			return -1408109627;
		}
		else if (iVar4 < 54)
		{
			return 2056981800;
		}
		else if (iVar4 < 66)
		{
			return 412730885;
		}
		else if (iVar4 < 78)
		{
			return -2138801252;
		}
		else if (iVar4 < 90)
		{
			return -441558663;
		}
		else
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return -1927508981;
				case 1:
					return 322031464;
				default:
					break;
			}
		}
	}
	return 0;
}

int func_1338(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1529(iParam0));
}

bool func_1341(int iParam0, int iParam1, float fParam2)
{
	if (!PED::_0x06087579E7AA85A9(iParam0, iParam1, -1f, fParam2, -1f, fParam2))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iParam1, 17))
	{
		return false;
	}
	return true;
}

char* func_1345(var uParam0)
{
	switch (uParam0->f_10)
	{
		case joaat("defensive"):
		case -862695229:
		case joaat("guard"):
		case -198742249:
		case joaat("search"):
		case joaat("bandit"):
			return "FME_BANDIT";
		default:
			break;
	}
	return "";
}

void func_1346(var uParam0, var uParam1)
{
	bool bVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar0 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			func_1458(uParam0, uParam1, 0);
			break;
		case 1:
			WEAPON::_0x94A3C1B804D291EC(*uParam1, 1, 0, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 1, false, false);
			func_1458(uParam0, uParam1, 0);
			break;
		case 2:
			if (bVar0)
			{
				TASK::_0x541E5B41DCA45828(*uParam1, 2, 0);
			}
			break;
		case 3:
			if (bVar0)
			{
				func_1561(uParam1);
				TASK::_0xE7FA07624574B79A(*uParam1, func_1338(*uParam1), 1, 1, -1f, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (bVar0)
			{
				func_1561(uParam1);
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 1, 0);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, WEAPON::GET_BEST_PED_WEAPON(*uParam1, false, false), false, 0, false, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, func_1338(*uParam1), -1, 0, 1);
			}
			break;
		case 8:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 1, 0);
				}
			}
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 9:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1347(var uParam0, var uParam1)
{
	struct<10> Var0;
	bool bVar10;
	struct<10> Var11;

	if (((((uParam0->f_1 >= 2 && uParam0->f_1 <= 7) && (MISC::GET_FRAME_COUNT() % 30) == 0) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_2)) && PLAYER::PLAYER_PED_ID() != uParam1->f_2) && (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false)) + 1f) < BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false)))
	{
		Var0.f_9 = 255;
		Var0.f_5 = aggregate_func_4507(0, 8);
		Var0.f_6 = uParam1->f_15;
		Var0.f_7 = uParam1->f_16;
		func_1158(Var0, 5);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar10 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			func_1458(uParam0, uParam1, 1);
			break;
		case 1:
			func_1458(uParam0, uParam1, 1);
			break;
		case 2:
			break;
		case 3:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1562(uParam1);
				}
				TASK::TASK_LOOK_AT_ENTITY(*uParam1, uParam1->f_2, 10000, 0, 51, 0);
			}
			break;
		case 4:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1562(uParam1);
				}
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xF1C03A5352243A30(*uParam1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, WEAPON::GET_BEST_PED_WEAPON(*uParam1, false, false), true, 0, false, false);
				if (!aggregate_func_987(*uParam1, uParam1->f_2, 20f, 1))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam1, uParam1->f_2, uParam1->f_2, 1f, 0, 13f, 15f, 1, 0, joaat("firing_pattern_burst_fire"), 0);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, uParam1->f_2, -1, 1, 1);
				}
			}
			break;
		case 5:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1562(uParam1);
				}
				if (aggregate_func_1979(*uParam1, 0, 1, 0) != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
				}
			}
			if (!aggregate_func_2905(*uParam1, joaat("SCRIPT_TASK_CONFRONT")) && aggregate_func_1979(*uParam1, 0, 1, 0) == joaat("weapon_unarmed"))
			{
				TASK::TASK_CONFRONT(*uParam1, uParam1->f_2, 2);
			}
			break;
		case 6:
			func_1458(uParam0, uParam1, 0);
			break;
		case 7:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1562(uParam1);
				}
				TASK::TASK_SHOOT_AT_COORD(*uParam1, ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false) + Vector(1.5f, 0f, 0f), 2000, 1566631136, 0);
			}
			if (!aggregate_func_2905(*uParam1, -653332088) && !aggregate_func_2905(*uParam1, 1630799643))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, uParam1->f_2, -1, 1, 1);
			}
			break;
		case 8:
			if (bVar10)
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var11.f_9 = 255;
					Var11.f_5 = aggregate_func_4507(0, 8);
					Var11.f_6 = uParam1->f_15;
					Var11.f_7 = uParam1->f_16;
					Var11.f_8 = Local_2681.f_32;
					func_1158(Var11, 3);
				}
			}
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 9:
			if (bVar10)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, func_1338(*uParam1), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1348(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (!aggregate_func_2905(*uParam1, 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1338(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			if (!aggregate_func_2905(*uParam1, 1056466932) || (MISC::GET_FRAME_COUNT() % 150) == 0)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1338(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			break;
		case 8:
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 10:
			break;
	}
}

void func_1349(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (!aggregate_func_2905(*uParam1, 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1338(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 8:
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 10:
			break;
	}
}

void func_1350(var uParam0, var uParam1)
{
	bool bVar0;

	if (((Local_243.f_1 != 11 && uParam0->f_1 <= 2) && !aggregate_func_987(Global_35, *uParam1, 30f, 1)) && (MISC::GET_FRAME_COUNT() % 600) == 0)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_0x0C7A2289A5C4D7C9(-342321975, *uParam1);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar0 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			if (!aggregate_func_558(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0) && !aggregate_func_2905(*uParam1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 1000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			break;
		case 1:
			if (!aggregate_func_2905(*uParam1, -1665583462))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(*uParam1, -1082130432 /* Float: -1f */, 0, 0);
			}
			break;
		case 2:
			break;
		case 8:
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 9:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1338(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1351(var uParam0, var uParam1)
{
	if (((Local_243.f_1 != 11 && uParam0->f_1 <= 2) && !aggregate_func_987(Global_35, *uParam1, 30f, 1)) && (MISC::GET_FRAME_COUNT() % 600) == 300)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_0x0C7A2289A5C4D7C9(-342321975, *uParam1);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			break;
		case 1:
			if (!aggregate_func_2905(*uParam1, 780511057))
			{
				PED::SET_PED_ACCURACY(*uParam1, 0);
				if (uParam1->f_16 == 0)
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
				}
			}
			break;
		case 2:
			if (!aggregate_func_2905(*uParam1, 780511057))
			{
				PED::SET_PED_ACCURACY(*uParam1, 0);
				if (uParam1->f_16 == 0)
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2681.f_50[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
				}
			}
			break;
		case 8:
			if (!aggregate_func_2905(*uParam1, -2117564886) && aggregate_func_4732(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432 /* Float: -1f */);
			}
			break;
		case 10:
			break;
	}
}

void func_1354(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam0, 0);
		if (bParam1)
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		}
		else
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 100f);
		}
		if (bParam2)
		{
			MAP::_0x7563CBCA99253D1A(iParam0, 187984275);
		}
	}
}

void func_1357(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 200f);
		}
		else
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		}
	}
	else
	{
		PLAYER::_0x907B16B3834C69E2(iParam0, 100f);
	}
}

void func_1451(var uParam0, var uParam1)
{
	aggregate_func_4266(uParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam1, false);
	WEAPON::_0x431240A58484D5D0(*uParam1, false);
	WEAPON::_0x45E57FDD531C9477(*uParam1, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, 1269650476);
	if (func_1458(uParam0, uParam1, 0))
	{
	}
	func_1669(uParam1);
	switch (uParam1->f_10)
	{
		case joaat("guard"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
			PED::SET_PED_ACCURACY(*uParam1, 25);
			break;
		case joaat("search"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 1);
			PED::SET_PED_ACCURACY(*uParam1, 10);
			WEAPON::_0x94A3C1B804D291EC(*uParam1, 1, 0, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 1, false, false);
			break;
		case joaat("bandit"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 1);
			PED::SET_PED_ACCURACY(*uParam1, 10);
			break;
		case joaat("defensive"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
			PED::SET_PED_ACCURACY(*uParam1, 30);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam1, uParam1->f_5, 4f, 0, false, 0);
			break;
		case -862695229:
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, false);
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 0);
			PED::SET_PED_ACCURACY(*uParam1, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam1, uParam1->f_5, 4f, 0, false, 0);
			if (uParam1->f_16 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, 747813878);
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, -40378879);
			}
			break;
		case -1346830927:
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 0);
			PED::SET_PED_ACCURACY(*uParam1, 5);
			break;
		case -198742249:
			aggregate_func_1172(*uParam1, 0, 0);
			break;
		default:
			break;
	}
}

bool func_1452(int iParam0)
{
	return (Local_50[iParam0 /*6*/])->f_4 > Local_243.f_1420;
}

int func_1453(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar1 = iParam3;
	iVar4 = 255;
	fVar2 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
		{
		}
		else if (func_1452(iVar0))
		{
		}
		else if (bParam6 && !aggregate_func_1009(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3), 1, 1))
		{
		}
		else
		{
			iVar5 = PLAYER::GET_PLAYER_PED(iVar3);
			if ((iParam4 == 0 || iParam5 == 0) || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam5, iVar5) == iParam4)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, false, false), vParam0);
				if (fVar1 < fVar2)
				{
					iVar4 = iVar3;
					fVar2 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar4;
}

float func_1454(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 150f;
		case joaat("defensive"):
			return 250f;
		case joaat("guard"):
			return 250f;
		case -931055996:
			return 250f;
		case -1347265301:
			return 250f;
		case 200161421:
			return 400f;
		case -1553326850:
			return 250f;
		case -1346830927:
			return 600f;
		case -66644432:
			return 600f;
		default:
			break;
	}
	return 0f;
}

float func_1456(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 50f;
		case joaat("defensive"):
			return 100f;
		case joaat("guard"):
			return 100f;
		case -931055996:
			return 100f;
		case -1347265301:
			return 100f;
		case 200161421:
			return 100f;
		case -1553326850:
			return 100f;
		case -1346830927:
			return 100f;
		case -66644432:
			return 100f;
		default:
			break;
	}
	return 0f;
}

bool func_1457(int iParam0)
{
	if ((((iParam0 == joaat("bandit") || iParam0 == joaat("guard")) || iParam0 == joaat("defensive")) || iParam0 == -862695229) || iParam0 == joaat("search"))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1346830927:
			return true;
		default:
			break;
	}
	return true;
}

bool func_1458(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (uParam1->f_9 == 0)
	{
		return true;
	}
	if ((!aggregate_func_4278(uParam0, 256) && PED::IS_PED_USING_ANY_SCENARIO(*uParam1)) && PED::_0x34D6AC1157C8226C(*uParam1, uParam1->f_9))
	{
		return true;
	}
	if (aggregate_func_4278(uParam0, 256) && PED::_0x9C54041BB66BCF9E(*uParam1, TASK::_0xF533D68FF970D190(uParam1->f_5, uParam1->f_9, 2f, 0, 0)))
	{
		return true;
	}
	if (aggregate_func_2905(*uParam1, -1098463898) || aggregate_func_2905(*uParam1, -76381094))
	{
		return true;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return false;
	}
	if (aggregate_func_4278(uParam0, 256))
	{
		iVar0 = TASK::_0xF533D68FF970D190(uParam1->f_5, uParam1->f_9, 2f, 0, 0);
		if (TASK::_0x841475AC96E794D1(iVar0))
		{
			TASK::_TASK_USE_SCENARIO_POINT(*uParam1, iVar0, 0, -1, !bParam2, bParam2, 0, false, -1082130432 /* Float: -1f */, 0);
		}
	}
	else
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(*uParam1, uParam1->f_9, -1, !bParam2, 0, -1082130432 /* Float: -1f */, 0);
	}
	return false;
}

bool func_1460(var uParam0)
{
	return (aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 16) || aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 8));
}

void func_1461(int iParam0, var uParam1)
{
	struct<10> Var0;

	if (aggregate_func_4278(Local_2681.f_50[uParam1->f_15 /*56*/], iParam0))
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_5 = aggregate_func_4507(0, 8);
	Var0.f_6 = uParam1->f_15;
	Var0.f_7 = uParam1->f_16;
	Var0.f_8 = iParam0;
	func_1158(Var0, 4);
}

bool func_1462(int iParam0, int iParam1)
{
	if (!PED::IS_PED_FACING_PED(iParam0, iParam1, 80f) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

int func_1529(int iParam0)
{
	return func_1453(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 0, 0, 0);
}

void func_1561(var uParam0)
{
	if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 32))
	{
		func_1461(32, uParam0);
	}
	else if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 64))
	{
		func_1461(64, uParam0);
	}
	else if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 16))
	{
		func_1461(16, uParam0);
	}
}

void func_1562(var uParam0)
{
	if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 1))
	{
		func_1461(1, uParam0);
	}
	else if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 2))
	{
		func_1461(2, uParam0);
	}
	else if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 4))
	{
		func_1461(4, uParam0);
	}
	else if (!aggregate_func_4278(Local_2681.f_50[uParam0->f_15 /*56*/], 16))
	{
		func_1461(16, uParam0);
	}
}

void func_1669(var uParam0)
{
	int iVar0;

	iVar0 = func_1842(uParam0);
	if (iVar0 != 0)
	{
		MISC::_0xF63FA29D4A9ACA86(*uParam0, func_1345(uParam0));
		PED::_0xC2745D9261664901(*uParam0, func_1842(uParam0));
	}
}

int func_1842(var uParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1345(uParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

void func_2135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (aggregate_func_4353(iParam0, iParam1, 1))
	{
		iVar0 = aggregate_func_2848(iParam1);
		iVar1 = aggregate_func_1975(iParam0);
		iVar2 = (aggregate_func_1975(iParam0) - aggregate_func_1975(iParam1));
		iVar3 = (aggregate_func_2848(iParam0) - aggregate_func_2848(iParam1));
		iVar4 = (aggregate_func_2847(iParam0) - aggregate_func_2847(iParam1));
		iVar5 = (aggregate_func_2818(iParam0) - aggregate_func_2818(iParam1));
		iVar6 = (aggregate_func_2821(iParam0) - aggregate_func_2821(iParam1));
		iVar7 = (aggregate_func_2849(iParam0) - aggregate_func_2849(iParam1));
	}
	else
	{
		iVar0 = aggregate_func_2848(iParam0);
		iVar1 = aggregate_func_1975(iParam1);
		iVar2 = (aggregate_func_1975(iParam1) - aggregate_func_1975(iParam0));
		iVar3 = (aggregate_func_2848(iParam1) - aggregate_func_2848(iParam0));
		iVar4 = (aggregate_func_2847(iParam1) - aggregate_func_2847(iParam0));
		iVar5 = (aggregate_func_2818(iParam1) - aggregate_func_2818(iParam0));
		iVar6 = (aggregate_func_2821(iParam1) - aggregate_func_2821(iParam0));
		iVar7 = (aggregate_func_2849(iParam1) - aggregate_func_2849(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + aggregate_func_4323(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(aggregate_func_2924(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2 = (iVar2 + 1);
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

