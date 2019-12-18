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
	struct<348> Local_1706 = { 255, 0, 3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	struct<14> Local_2054[32];
	struct<854> Local_2503 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 100, 100, 100 } ;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == aggregate_func_3505

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 50, 53);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_50, 193, 54);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_50[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_1706, 348, 51);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_1706), 348, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2054, 449, 52);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_2054[0 /*14*/]), 449, "m_clientData");
}

void func_51()
{
	Local_2503.f_37 = Local_243.f_1391;
	if (DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
	}
	func_147(&(Local_2503.f_37));
	if (!func_148())
	{
	}
	func_149();
	func_150();
	func_151();
}

void func_64()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(36);
	HUD::_TEXT_DATABASE_REQUEST("FMEWK");
	func_171(0);
	aggregate_func_6739(joaat("timer"));
	aggregate_func_4355(8192);
	aggregate_func_4355(1073741824 /* Float: 2f */);
	Local_243.f_1420 = 0;
	aggregate_func_4355(131072);
	aggregate_func_4355(64);
	aggregate_func_4355(65536);
	aggregate_func_4355(65536);
	aggregate_func_4355(128);
}

void func_72()
{
	func_176(15f);
	func_177(&(Local_1706.f_316), &(Local_1706.f_319), &(Local_1706.f_322), -1);
}

void func_125()
{
	if (Local_0.f_10 == PLAYER::PLAYER_ID())
	{
		aggregate_func_4322(803, 1);
	}
	func_171(1);
	HUD::_TEXT_DATABASE_DELETE("FMEWK");
}

void func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 47)
	{
		aggregate_func_3901(uParam0, func_367(iVar0, 1));
		iVar0++;
	}
}

bool func_148()
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
		return false;
	}
	Var0 = Local_2503.f_37;
	Var0.f_2 = -692671154;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!aggregate_func_3418(Var0, 2057649523, &(Local_2503.f_38), 0))
	{
	}
	return true;
}

void func_149()
{
	int iVar0;

	Local_2503.f_818 = func_369(685218342);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		Local_2503.f_753[iVar0 /*2*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_370(Local_2503.f_753[iVar0 /*2*/]), false);
		iVar0++;
	}
}

void func_150()
{
	int iVar0;

	Local_2503.f_819 = func_369(-565871549);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		Local_2503.f_808[iVar0] = iVar0;
		PROPSET::_REQUEST_PROPSET(func_371(Local_2503.f_808[iVar0]));
		iVar0++;
	}
}

void func_151()
{
	int iVar0;

	Local_2503.f_816 = func_369(-1890596655);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_816 - 1))
	{
		Local_2503.f_715[iVar0 /*3*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_372(Local_2503.f_715[iVar0 /*3*/]), false);
		iVar0++;
	}
}

void func_171(bool bParam0)
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

void func_176(float fParam0)
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
			Local_1706.f_6 = 25f;
			break;
		case 3:
		case 4:
			Local_1706.f_6 = 20f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_1706.f_6 = 15f;
			break;
		default:
			Local_1706.f_6 = 10f;
			break;
	}
	if (func_403(1404758079) < 2)
	{
		Local_1706.f_6 = (Local_1706.f_6 * 0.5f);
	}
	if ((Local_2503.f_853 + Local_2503.f_851) < 10)
	{
		Local_1706.f_6 = (Local_1706.f_6 * 0.5f);
	}
	if (fParam0 > 0f)
	{
		Local_1706.f_6 = fParam0;
	}
}

void func_177(var uParam0, var uParam1, var uParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
	}
	if (!func_404(&Var0))
	{
	}
	Var0.f_2 = 2019912578;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
	Var0.f_2 = -1639163394;
	if (iParam3 == -1)
	{
		Var0.f_3 = iVar6;
	}
	else
	{
		Var0.f_3 = iParam3;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!aggregate_func_3418(Var0, 425959891, uParam0, 0))
	{
	}
	if (!aggregate_func_3418(Var0, 256247696, uParam1, 0))
	{
	}
	if (!aggregate_func_3418(Var0, 89029101, uParam2, 0))
	{
	}
}

bool func_182()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(func_371(Local_2503.f_808[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_186()
{
	int iVar0;

	iVar0 = 1;
	if (!func_405())
	{
		iVar0 = 0;
	}
	if (!func_406())
	{
		iVar0 = 0;
	}
	if (!func_407())
	{
		iVar0 = 0;
	}
	if (!aggregate_func_8615())
	{
		iVar0 = 0;
	}
	if (!func_409())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_195()
{
	int iVar0;

	iVar0 = 1;
	if (!aggregate_func_8615())
	{
		iVar0 = 0;
	}
	if (!func_410())
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_203()
{
	int iVar0;
	int iVar1;

	func_422();
	iVar0 = aggregate_func_2736(2);
	iVar1 = aggregate_func_2393(2);
	if (func_424() || iVar0 == iVar1)
	{
		return true;
	}
	func_425();
	func_426();
	func_427();
	return false;
}

bool func_210()
{
	switch (Local_243.f_1)
	{
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 1:
			return aggregate_func_4658();
		default:
			break;
	}
	return false;
}

char[] func_223(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

bool func_227()
{
	int iVar0;

	if (!HUD::_TEXT_DATABASE_HAS_LOADED("FMEWK"))
	{
		return false;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < 1)
	{
		return false;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < 36)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_370(Local_2503.f_753[iVar0 /*2*/])))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(func_371(Local_2503.f_808[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_229()
{
	int iVar0;

	iVar0 = 1;
	if (!func_446())
	{
		iVar0 = 0;
	}
	if (!func_447())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_230()
{
	Local_2503.f_835 = NETWORK::NET_TO_PED(Local_1706.f_346);
	Local_1706.f_16 = -1;
}

void func_243()
{
	if ((!aggregate_func_4281(128) && !aggregate_func_2920(Local_243.f_1287)) && !aggregate_func_2920(Local_243.f_1291))
	{
		Local_243.f_1291 = aggregate_func_6834(MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_COMDIS"), joaat("COLOR_WHITE"));
		if (aggregate_func_4246(Local_243.f_1291))
		{
			aggregate_func_4355(128);
		}
	}
}

void func_255()
{
	int iVar0;

	func_515();
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_816 - 1))
	{
		(Local_2503.f_715[iVar0 /*3*/])->f_1 = NETWORK::NET_TO_VEH(&(Local_1706.f_327[iVar0]));
		iVar0++;
	}
	func_515();
	func_516();
	aggregate_func_6999(&(Local_2503.f_5));
	aggregate_func_8076(&(Local_2503.f_5), 1);
	aggregate_func_5528(&(Local_2503.f_5), 1);
}

void func_265()
{
	if ((!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 64) && !ENTITY::DOES_ENTITY_EXIST(Local_2503.f_2)) && Local_2503.f_3 == 574926209)
	{
		aggregate_func_4741(521036731, 0);
		aggregate_func_3902(64);
	}
	if (!aggregate_func_4281(64) && aggregate_func_1339("MC_DELIVERING", 1, 0))
	{
		aggregate_func_4355(64);
	}
	func_549();
	func_550();
	func_551();
	func_552();
	func_553();
	func_554();
	Local_2503.f_3 = ENTITY::GET_ENTITY_MODEL(aggregate_func_1741(PLAYER::PLAYER_PED_ID(), 4));
}

void func_280()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/]))) && ENTITY::IS_ENTITY_VISIBLE(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/])))
				{
					ENTITY::SET_ENTITY_VISIBLE(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/]), false);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

char[] func_314(float fParam0)
{
	int iVar0;

	iVar0 = aggregate_func_5302(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_WON", iVar0);
}

char[] func_316()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_EXPIRED");
}

char[] func_317(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_FAILED");
}

bool func_330()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((Local_2503.f_753[iVar0 /*2*/])->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])))
				{
					aggregate_func_1025((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/]);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_346) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
	{
		aggregate_func_1025(&(Local_1706.f_346));
	}
	func_612();
	return true;
}

int func_367(int iParam0, int iParam1)
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

int func_369(int iParam0)
{
	vector3 vVar0;
	int iVar5;

	if (func_404(&vVar0))
	{
		vVar0.f_2 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
		{
			iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y);
		}
	}
	return iVar5;
}

int func_370(var uParam0)
{
	return func_652(*uParam0, 733276510);
}

int func_371(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
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

int func_372(var uParam0)
{
	return func_652(*uParam0, 2025794970);
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (aggregate_func_4278(Local_1706.f_51[iVar0 /*22*/], 1) && &Local_2503.f_42[iVar0 /*56*/] == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_404(var uParam0)
{
	*uParam0 = Local_2503.f_37;
	uParam0->f_2 = 1695952109;
	uParam0->f_3 = Local_243.f_2;
	return (DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_405()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_325))
	{
		return true;
	}
	if (!aggregate_func_930(&(Local_1706.f_325), 574926209, aggregate_func_5996(), 1, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1706.f_325), aggregate_func_5996(), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_1706.f_325), aggregate_func_5996(), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1706.f_325), true);
	TASK::_0xF0B4F759F35CC7F5(NETWORK::NET_TO_OBJ(Local_1706.f_325), 1185502896, 0, 0, 512);
	ENTITY::_0x18FF3110CF47115D(NETWORK::NET_TO_OBJ(Local_1706.f_325), 32, true);
	return true;
}

bool func_406()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_326))
	{
		return true;
	}
	if (!aggregate_func_930(&(Local_1706.f_326), -1904939264, aggregate_func_5996(), 1, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1706.f_326), aggregate_func_5996() + aggregate_func_5996(), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_1706.f_326), aggregate_func_5996(), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1706.f_326), true);
	return true;
}

bool func_407()
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_2053(joaat("a_c_vulture_01")))
	{
		return false;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_342[iVar1])))
		{
			iVar0 = 0;
			if (aggregate_func_404(Local_1706.f_342[iVar1], joaat("a_c_vulture_01"), func_703(iVar1), 0f, 1, 0, 1, 1, 1))
			{
				TASK::TASK_FLYING_CIRCLE(NETWORK::NET_TO_PED(&(Local_1706.f_342[iVar1])), 2f, func_703(iVar1) + Vector(40f, 0f, 0f), 0f, 7f);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_409()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_346))
	{
		return true;
	}
	if (!aggregate_func_2053(joaat("a_c_californiacondor_01")))
	{
		return false;
	}
	if (!aggregate_func_404(&(Local_1706.f_346), joaat("a_c_californiacondor_01"), aggregate_func_5996() + Vector(70f, 0f, 0f), 0f, 1, 0, 1, 1, 1))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_1706.f_346), true);
	TASK::TASK_FLYING_CIRCLE(NETWORK::NET_TO_PED(Local_1706.f_346), 1.5f, aggregate_func_5996() + Vector(40f, 0f, 0f), 0f, 250f);
	return true;
}

bool func_410()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					if (!func_706(0, joaat("guard"), 0))
					{
						return false;
					}
					if (!func_706(1, joaat("guard"), 1))
					{
						return false;
					}
					if (!func_706(2, -1553326850, 0))
					{
						return false;
					}
					if (!func_706(3, joaat("defensive"), 0))
					{
						return false;
					}
					if (!func_706(4, joaat("defensive"), 1))
					{
						return false;
					}
					if (!func_706(5, 200161421, 0))
					{
						return false;
					}
					break;
				case -348618743:
					if (!func_706(0, joaat("guard"), 0))
					{
						return false;
					}
					if (!func_706(1, -1553326850, 0))
					{
						return false;
					}
					if (!func_706(2, joaat("defensive"), 0))
					{
						return false;
					}
					if (!func_706(3, 200161421, 0))
					{
						return false;
					}
					break;
				case -1837356407:
					if (!func_706(0, joaat("guard"), 0))
					{
						return false;
					}
					if (!func_706(1, -1553326850, 0))
					{
						return false;
					}
					if (!func_706(2, -1553326850, 1))
					{
						return false;
					}
					if (!func_706(3, joaat("defensive"), 0))
					{
						return false;
					}
					if (!func_706(4, joaat("defensive"), 1))
					{
						return false;
					}
					if (!func_706(5, 200161421, 0))
					{
						return false;
					}
					break;
				default:
					break;
			}
			break;
		case 11:
			if (!func_706(0, -931055996, 0))
			{
				return false;
			}
			if (!func_706(1, -931055996, 1))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_422()
{
	Local_2503++;
	if (Local_2503 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_2503 = 0;
	}
}

bool func_424()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate_func_7846(iVar0, 64))
		{
			Local_1706 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_425()
{
	if (Local_1706.f_347 != 6 && ENTITY::IS_ENTITY_DEAD(Local_2503.f_835))
	{
		aggregate_func_7571(6);
		return;
	}
	switch (Local_1706.f_347)
	{
		case 0:
			aggregate_func_7571(1);
			break;
		case 1:
			if (Local_243.f_1267 < 300000)
			{
				aggregate_func_7571(2);
			}
			break;
		case 2:
			if (Local_243.f_1267 < 180000)
			{
				aggregate_func_7571(3);
			}
			break;
		case 3:
			if (Local_243.f_1267 < 60000)
			{
				aggregate_func_7571(4);
			}
			break;
		case 4:
			if (Local_243.f_1267 < 30000)
			{
				aggregate_func_7571(5);
			}
			break;
		case 5:
			if (ENTITY::GET_ENTITY_SPEED(Local_2503.f_835) < 0.25f)
			{
				aggregate_func_7571(6);
			}
			break;
	}
}

void func_426()
{
	int iVar0;

	func_709();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_710(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]))
		{
			func_711(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]);
			if ((aggregate_func_4278(Local_1706.f_51[iVar0 /*22*/], 32) && !aggregate_func_4281(32)) && &Local_2503.f_42[iVar0 /*56*/] != -1553326850)
			{
				func_713(iVar0);
			}
		}
		iVar0++;
	}
}

void func_427()
{
	int iVar0;

	if (aggregate_func_3724(&(Local_1706.f_13)) < Local_1706.f_6)
	{
		return;
	}
	if (aggregate_func_6784() < 30000)
	{
		return;
	}
	if (func_715() == -1)
	{
		return;
	}
	func_176(0);
	iVar0 = func_716();
	if (iVar0 == 0)
	{
		return;
	}
	func_717(iVar0, -1);
	aggregate_func_4480(&(Local_1706.f_13));
	aggregate_func_4480(&(Local_1706.f_10));
}

void func_429()
{
	aggregate_func_3488(Local_1706);
}

void func_445()
{
	aggregate_func_1339("MP_OWC_END", 1, 0);
}

bool func_446()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Local_2503.f_818 - 1))
	{
		if (!func_729(Local_2503.f_753[iVar1 /*2*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_447()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar0 = 1;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (!TASK::_0x841475AC96E794D1(&(Local_2503.f_831[iVar4])))
		{
			iVar0 = 0;
			vVar1 = { func_703(iVar4) };
			Local_2503.f_831[iVar4] = TASK::CREATE_SCENARIO_POINT(428946548, vVar1, 0, 0, 0, 0);
		}
		iVar4++;
	}
	return iVar0;
}

void func_515()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					func_807(0, joaat("guard"));
					func_807(1, joaat("guard"));
					func_807(2, -1553326850);
					func_807(3, joaat("defensive"));
					func_807(4, joaat("defensive"));
					func_807(5, 200161421);
					break;
				case -348618743:
					func_807(0, joaat("guard"));
					func_807(1, -1553326850);
					func_807(2, joaat("defensive"));
					func_807(3, 200161421);
					break;
				case -1837356407:
					func_807(0, joaat("guard"));
					func_807(1, -1553326850);
					func_807(2, -1553326850);
					func_807(3, joaat("defensive"));
					func_807(4, joaat("defensive"));
					func_807(5, 200161421);
					break;
				default:
					break;
			}
			break;
		case 11:
			func_807(0, -931055996);
			func_807(1, -931055996);
			break;
	}
}

void func_516()
{
	Local_2503.f_2 = NETWORK::NET_TO_OBJ(Local_1706.f_325);
	func_808(Local_2503.f_2, 0, 1);
}

char[] func_523()
{
	int iVar0;

	iVar0 = aggregate_func_5302(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OBJECTIVE", iVar0);
}

void func_549()
{
	bool bVar0;

	bVar0 = Local_2503.f_836 != Local_1706.f_347;
	Local_2503.f_836 = Local_1706.f_347;
	func_829(bVar0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
	{
		return;
	}
	switch (Local_1706.f_347)
	{
		case 0:
			break;
		case 1:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, aggregate_func_5996() + Vector(40f, 0f, 0f), 0f, 100f);
			}
			break;
		case 2:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, aggregate_func_5996() + Vector(40f, 0f, 0f), 0f, 75f);
			}
			break;
		case 3:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, aggregate_func_5996() + Vector(40f, 0f, 0f), 0f, 50f);
			}
			break;
		case 4:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, aggregate_func_5996() + Vector(40f, 0f, 0f), 0f, 20f);
			}
			break;
		case 5:
			if (bVar0)
			{
				TASK::TASK_FLY_TO_COORD(Local_2503.f_835, 1f, aggregate_func_5996(), 1, 0);
			}
			break;
		case 6:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
			{
				aggregate_func_1025(&(Local_1706.f_346));
			}
			break;
	}
}

void func_550()
{
	bool bVar0;

	aggregate_func_204(&(Local_2503.f_837), ENTITY::GET_ENTITY_COORDS(Local_2503.f_2, true, false), 1, 1, 1);
	if (aggregate_func_987(Global_35, Local_2503.f_2, 7f, 1))
	{
		aggregate_func_1736(&(Local_2503.f_4));
	}
	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return;
	}
	bVar0 = ((Global_1939168->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || aggregate_func_8616());
	func_834(Local_2503.f_2, bVar0, 1);
}

void func_551()
{
	if (aggregate_func_6777(Local_243.f_1332))
	{
		if (!aggregate_func_4281(2) && aggregate_func_3482(Local_243.f_1289))
		{
			Local_243.f_1289 = aggregate_func_3074("FME_CE_HELP_START");
			aggregate_func_4355(2);
		}
		aggregate_func_3535(7, "FME_CE_OBJ_FIND_EGG", -1, 0);
	}
}

void func_552()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (Local_2503.f_846 == 0)
	{
		return;
	}
	if (Local_2503.f_847 == -1 || Local_2503.f_848 == -1)
	{
		return;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = 291934926;
	iVar3 = 0;
	switch (Local_2503.f_846)
	{
		case 2:
			break;
	}
	if (func_835(Local_2503.f_846, Local_2503.f_847, Local_2503.f_848, bVar0, bVar1, iVar2, iVar3))
	{
		Local_2503.f_846 = 0;
		Local_2503.f_847 = -1;
		Local_2503.f_848 = -1;
	}
}

void func_553()
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
				func_836(iVar0);
				break;
			case 141007368:
				func_837(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_554()
{
	int iVar0;

	func_838();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_710(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]))
		{
			func_839(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]);
		}
		iVar0++;
	}
}

void func_575()
{
	if (Local_1706 == PLAYER::PLAYER_ID())
	{
		aggregate_func_6842(0);
	}
	else
	{
		aggregate_func_6842(&(Local_243.f_971[Local_243.f_1332]));
	}
}

bool func_584()
{
	struct<8> Var0;
	int iVar8;
	int iVar9;

	Var0 = { aggregate_func_4941() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_243.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_243.f_1338 };
		}
	}
	iVar8 = Local_1706;
	if (PLAYER::PLAYER_ID() == iVar8)
	{
		iVar9 = aggregate_func_5302(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
		Local_243.f_1287 = aggregate_func_6830(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_WON", iVar9), aggregate_func_5995(), aggregate_func_4843());
	}
	else
	{
		Local_243.f_1287 = aggregate_func_6830(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(10, "FME_CE_SHARD_FOUEGG", aggregate_func_1524(aggregate_func_2320(iVar8), joaat("COLOR_PURE_WHITE"))), aggregate_func_5995(), aggregate_func_4843());
	}
	return true;
}

void func_612()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2503.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_2503.f_2))
	{
		aggregate_func_1025(&(Local_1706.f_325));
	}
	func_876(Local_2503.f_2);
}

char* func_651(int iParam0)
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

int func_652(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (func_404(&Var0))
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

struct<5> func_694(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { aggregate_func_1967(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = aggregate_func_2830(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { aggregate_func_1972(bParam1) };
			if (bParam2 && aggregate_func_2833(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!aggregate_func_4290(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!aggregate_func_4290(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (aggregate_func_4291(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { aggregate_func_2834(bParam1) };
			switch (aggregate_func_2827(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			Jump @892; //curOff = 410
			if (aggregate_func_1992(iParam0, -1823706425))
			{
				Var0 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (aggregate_func_1992(iParam0, -1483207246))
			{
				Var0 = { aggregate_func_2828(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (aggregate_func_1992(iParam0, -1653629781))
			{
				Var0 = { aggregate_func_2828(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			Jump @892; //curOff = 654
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!aggregate_func_4272(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (aggregate_func_1992(iParam0, -1653629781))
			{
				Var0 = { aggregate_func_2828(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			return Var0;
		}

Vector3 func_703(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (Local_243.f_2)
	{
		case -348618743:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return -6041.97f, -3537.536f, -4.6068f;
						case 1:
							return -6100.441f, -3525.772f, 5.1807f;
						case 2:
							return -6069.9f, -3454.741f, 12.2916f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return -6020.848f, -3768.271f, -26.119f;
						case 1:
							return -6204.641f, -3830.656f, -26.4589f;
						case 2:
							return -6352.181f, -3733.388f, -23.9431f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return -6246.348f, -3682.845f, 9.1211f;
						case 1:
							return -6123.118f, -3653.438f, 17.4948f;
						case 2:
							return -6156.325f, -3476.611f, 31.6582f;
						default:
							break;
					}
					break;
			}
			break;
		case 1706859953:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return -1928.31f, -1647.538f, 117.6614f;
						case 1:
							return -1958.225f, -1792.649f, 120.7689f;
						case 2:
							return -1936.479f, -1839.569f, 116.5473f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return -2272.769f, -1964.496f, 102.1049f;
						case 1:
							return -2288.559f, -1912.634f, 106.4639f;
						case 2:
							return -2263.624f, -1652.642f, 143.1282f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return -2024.205f, -1665.178f, 133.1946f;
						case 1:
							return -1960.695f, -1968.046f, 92.5306f;
						case 2:
							return -2083.111f, -1511.441f, 136.1538f;
						default:
							break;
					}
					break;
			}
			break;
		case 1921384287:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return 2413.239f, 1757.95f, 105.3729f;
						case 1:
							return 2340.631f, 1814.913f, 122.7684f;
						case 2:
							return 2393.745f, 1613.783f, 92.5807f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return 2532.781f, 1518.423f, 85.5812f;
						case 1:
							return 2563.399f, 1661.195f, 95.4974f;
						case 2:
							return 2693.529f, 1819.483f, 103.665f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return 2750.177f, 1768.915f, 148.5721f;
						case 1:
							return 2761.225f, 1853.416f, 140.7395f;
						case 2:
							return 2769.496f, 1884.319f, 160.0032f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_705(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_327[iParam0])))
	{
		return true;
	}
	vVar0 = { *(Local_2503.f_715[iParam0 /*3*/]) };
	vVar3 = { aggregate_func_8617(&vVar0) };
	uVar6 = vVar3.z;
	if (!aggregate_func_260(Local_1706.f_327[iParam0], func_372(&vVar0), aggregate_func_8617(&vVar0), uVar6, 1, 0, 0, 0))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), aggregate_func_8617(&vVar0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), aggregate_func_8617(&vVar0), 2, true);
	if (func_1000(&vVar0) != 0)
	{
		(Local_2503.f_715[iParam0 /*3*/])->f_2 = PROPSET::_CREATE_PROPSET_3(func_1000(&vVar0), 0f, 0f, 0f, NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), 0f, false, 1, true);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), 1);
	return true;
}

bool func_706(int iParam0, int iParam1, int iParam2)
{
	if (aggregate_func_4278(Local_1706.f_51[iParam0 /*22*/], 2))
	{
		return true;
	}
	if ((Local_2503.f_42[iParam0 /*56*/])->f_55 == -1)
	{
		(Local_2503.f_42[iParam0 /*56*/])->f_55 = iParam0;
	}
	if (!func_1001(NETWORK::PARTICIPANT_ID_TO_INT(), Local_2503.f_42[iParam0 /*56*/], 1))
	{
		if (func_1002(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1))
		{
			aggregate_func_4247((Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/])->f_1[iParam0], 1);
		}
		else
		{
			return false;
		}
	}
	if (func_1004(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1, iParam2))
	{
		aggregate_func_4266(Local_1706.f_51[iParam0 /*22*/], 2);
		aggregate_func_4266(Local_1706.f_51[iParam0 /*22*/], 1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_707(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_334[iParam0])))
	{
		return true;
	}
	uVar0 = &Local_2503.f_808[iParam0];
	vVar1 = { func_1006(&uVar0) };
	if (!aggregate_func_1113(Local_1706.f_334[iParam0], func_371(&uVar0), func_1006(&uVar0), vVar1.z, 1, 1, 1150681088 /* Float: 1200f */))
	{
		return false;
	}
	return true;
}

void func_709()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<22> Var5;

	if (aggregate_func_4281(16))
	{
		if (Local_1706.f_8 == -1)
		{
			func_1008();
			return;
		}
		if (aggregate_func_7251(&(Local_1706.f_10), 7500))
		{
			Local_1706.f_6 = 5f;
			func_1008();
			return;
		}
		if (!aggregate_func_4278(Local_1706.f_51[Local_1706.f_8 /*22*/], 2))
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
				if (Local_1706.f_16 == -1)
				{
					iVar2 = func_1010(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/]);
					if (iVar2 != -1)
					{
						Local_1706.f_16 = iVar2;
					}
				}
				else if (func_1004(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/], 0, -1))
				{
					Local_1706.f_2[2] = &Local_1706.f_2[1];
					Local_1706.f_2[1] = &Local_1706.f_2[0];
					Local_1706.f_2[0] = (&Local_2503.f_42[Local_1706.f_8 /*56*/] + Local_1706.f_16);
					aggregate_func_4266(Local_1706.f_51[Local_1706.f_8 /*22*/], 2);
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
				aggregate_func_4266(Local_1706.f_51[Local_1706.f_8 /*22*/], 1);
				func_1008();
			}
		}
	}
	if (aggregate_func_4281(32))
	{
		if (Local_1706.f_17 == -1)
		{
			func_1011();
			return;
		}
		if (aggregate_func_4278(Local_1706.f_51[Local_1706.f_17 /*22*/], 1))
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
				*(Local_1706.f_51[Local_1706.f_17 /*22*/]) = { Var5 };
				func_1011();
			}
		}
	}
}

bool func_710(var uParam0, var uParam1)
{
	return (aggregate_func_4278(uParam0, 1) && uParam1->f_55 != -1);
}

void func_711(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (!aggregate_func_4278(uParam0, 4) && func_1001(Local_2503, uParam1, 4))
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
		func_1014(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
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

int func_713(int iParam0)
{
	int iVar0;

	if (aggregate_func_4281(32))
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
	aggregate_func_4355(32);
	Local_1706.f_17 = iParam0;
	return 1;
}

int func_715()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!aggregate_func_4278(Local_1706.f_51[iVar0 /*22*/], 1))
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

int func_716()
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
		iVar12 = func_1016(iVar11);
		if (iVar12 == 0)
		{
		}
		else if (!func_1017(iVar12))
		{
		}
		else
		{
			iVar13 = func_1018(iVar12);
			iVar14 = func_403(iVar12);
			fVar0[iVar11] = BUILTIN::TO_FLOAT((iVar13 - iVar14));
			if (iVar12 == -1346830927 || iVar12 == -66644432)
			{
				if (func_403(-1346830927) == 0 && func_403(-66644432) == 0)
				{
					fVar0[iVar11] = (&fVar0[iVar11] * 5f);
				}
			}
			else if (iVar12 == 1404758079 && func_403(1404758079) < 2)
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
				iVar16 = func_1016(iVar11);
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

int func_717(int iParam0, int iParam1)
{
	int iVar0;

	if (aggregate_func_4281(16))
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
	aggregate_func_4355(16);
	Local_1706.f_7 = iParam0;
	Local_1706.f_8 = func_715();
	Local_1706.f_16 = iParam1;
	if (Local_1706.f_8 < 0)
	{
		func_1008();
		return 0;
	}
	return 1;
}

bool func_729(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	uParam0->f_1 = OBJECT::CREATE_OBJECT(func_370(uParam0), aggregate_func_8624(uParam0), false, false, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(uParam0->f_1, aggregate_func_8624(uParam0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, aggregate_func_8624(uParam0), 2, true);
	if (func_1038(uParam0))
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

bool func_753()
{
	if (aggregate_func_4281(131072) && Local_243.f_10 >= 4)
	{
		if ((Local_50[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_243.f_1420)
		{
			if (!aggregate_func_6507() == 4)
			{
				aggregate_func_4556(4);
				return true;
			}
		}
	}
	return false;
}

void func_807(int iParam0, int iParam1)
{
	int iVar0;

	func_1002(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1);
	(Local_2503.f_42[iParam0 /*56*/])->f_55 = iParam0;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[iParam0 /*22*/])->f_21 - 1))
	{
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_15 = iParam0;
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
		(Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_51[iParam0 /*22*/])->f_1[iVar0 /*6*/]));
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/]));
		iVar0++;
	}
}

void func_808(int iParam0, bool bParam1, bool bParam2)
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

void func_829(bool bParam0)
{
	if (((bParam0 && Local_1706.f_347 != 0) && Local_1706.f_347 != 1) && Local_1706.f_347 != 6)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_0x0C7A2289A5C4D7C9(-342321975, Local_2503.f_835);
	}
}

void func_834(int iParam0, bool bParam1, bool bParam2)
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

bool func_835(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	var uVar0;

	if (bParam3 && aggregate_func_4278(Local_2503.f_42[iParam1 /*56*/], iParam0))
	{
		return false;
	}
	uVar0 = &(Local_2503.f_42[iParam1 /*56*/])->f_1[iParam2 /*17*/];
	if (!bParam4)
	{
		if (func_1098(Local_1706.f_51[iParam1 /*22*/], Local_2503.f_42[iParam1 /*56*/]))
		{
			return false;
		}
	}
	if (aggregate_func_4975(uVar0, func_1099(iParam0), iParam5, 0, 1, 0, iParam6, 1))
	{
		aggregate_func_4247(&(Local_2503.f_849), iParam0);
		aggregate_func_4247(&((Local_2503.f_42[iParam1 /*56*/])->f_54), iParam0);
		return true;
	}
	return false;
}

void func_836(int iParam0)
{
	struct<10> Var0;

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
			func_1101(Var0);
			break;
		case 2:
			func_1102(Var0);
			break;
		case 3:
			func_1103(Var0);
			break;
		case 4:
			func_1104(Var0);
			break;
		case 5:
			func_1105(Var0);
			break;
	}
}

void func_837(int iParam0)
{
	struct<6> Var0;
	struct<8> Var9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		return;
	}
	Var9.f_7.f_2.f_1 = 10;
	if (!func_1106(&Var0, &Var9))
	{
		return;
	}
	if (Var0.f_5 == ENTITY::GET_ENTITY_MODEL(Local_2503.f_2))
	{
		aggregate_func_3902(64);
	}
}

void func_838()
{
	int iVar0;
	struct<56> Var1;

	if (aggregate_func_4281(16))
	{
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && func_1002(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/], Local_1706.f_7))
		{
			aggregate_func_3902(8);
		}
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 16) && aggregate_func_4278(Local_1706.f_51[Local_1706.f_8 /*22*/], 2))
		{
			if ((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_21 == 0)
			{
			}
			(Local_2503.f_42[Local_1706.f_8 /*56*/])->f_55 = Local_1706.f_8;
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_21 - 1))
			{
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_15 = Local_1706.f_8;
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
				(Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_1[iVar0 /*6*/]));
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/]));
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
	if (aggregate_func_4281(32))
	{
		if (!aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
		{
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&((Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/])))
				{
					if (!aggregate_func_4278((Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/], 512))
					{
						func_1109((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_1[iVar0 /*6*/], (Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/]);
					}
					aggregate_func_1025((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_1[iVar0 /*6*/]);
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
			*(Local_2503.f_42[Local_1706.f_17 /*56*/]) = { Var1 };
			aggregate_func_3902(32);
		}
	}
	else if (aggregate_func_7846(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
	{
		aggregate_func_3902(32);
	}
}

void func_839(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		func_1110(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
		iVar0++;
	}
}

int func_856(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	if ((aggregate_func_2075(&Var1, Local_243.f_1) && aggregate_func_2987(&Var1)) && aggregate_func_2988(&Var1, Local_243.f_3))
	{
		if (aggregate_func_3012(Var1, -75980337, &iVar6, 0))
		{
			iVar0 = iVar6;
		}
	}
	if (iVar0 != 0)
	{
		aggregate_func_4575(iParam0, iVar0);
		return 1;
	}
	else if (Local_243.f_9 != -785841056)
	{
	}
	return 0;
}

int func_865()
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;

	Var1.f_1 = 11;
	aggregate_func_6860(&Var1, Local_243.f_1333);
	aggregate_func_1287(&Var1);
	aggregate_func_2410(&Var1, Local_0.f_4);
	func_856(&Var1);
	iVar14 = Local_0.f_10;
	if (PLAYER::PLAYER_ID() == iVar14)
	{
		iVar0 = -697003817;
	}
	else
	{
		iVar0 = -252981337;
	}
	if (aggregate_func_7180(iVar0, &(Local_243.f_1374), &Var1, 0, 255, 0, 0))
	{
		Local_243.f_1281++;
		iVar15 = 1;
	}
	return iVar15;
}

void func_876(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::_0xDC5E09D012D759C4(iParam0, iParam0, 0);
	}
}

int func_1000(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
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

bool func_1001(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_55 == -1)
	{
		return false;
	}
	return aggregate_func_4240(&((Local_2054[iParam0 /*14*/])->f_1[uParam1->f_55]), iParam2);
}

bool func_1002(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	struct<5> Var6;
	struct<17> Var11;
	int iVar28;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
		return false;
	}
	Var0 = Local_2503.f_37;
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
			(uParam1->f_1[iVar28 /*17*/])->f_4 = func_1214(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_10 = func_1215(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_9 = func_1216(Var6);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_1217(Var6))
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

bool func_1004(var uParam0, var uParam1, int iParam2, int iParam3)
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
			func_1219(&vVar1, &uVar4, uParam1, uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], iVar5, iParam2, iParam3);
			if (!func_1220(uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], vVar1, uVar4))
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

Vector3 func_1006(var uParam0)
{
	return func_1211(*uParam0, 1497039912);
}

void func_1008()
{
	aggregate_func_4355(16);
	Local_1706.f_7 = 0;
	Local_1706.f_8 = -1;
	Local_1706.f_16 = -1;
}

int func_1010(var uParam0, var uParam1)
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

	Var0 = Local_2503.f_37;
	Var0.f_2 = -538315284;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = *uParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar14 = func_1224();
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
			vVar20 = { ENTITY::GET_ENTITY_COORDS(func_1225(vVar11), true, false) };
			if (func_1226(uParam1, vVar11, vVar17, vVar20, iVar5, iVar16))
			{
				Local_1706.f_18[iVar14] = &Local_1706.f_18[iVar14] + 1;
				return iVar16;
			}
		}
		iVar15++;
	}
	return -1;
}

void func_1011()
{
	aggregate_func_4355(32);
	Local_1706.f_17 = -1;
}

void func_1014(var uParam0, var uParam1)
{
	if (!aggregate_func_4278(uParam0, 512))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*uParam1) || uParam0->f_1 == 10) || uParam1->f_10 == joaat("horse"))
		{
			func_1227(uParam0, 10);
			aggregate_func_4266(uParam0, 512);
		}
	}
	switch (uParam1->f_10)
	{
		case joaat("search"):
			func_1228(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1229(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1230(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1231(uParam0, uParam1);
			break;
		case -1346830927:
			func_1232(uParam0, uParam1);
			break;
		case -862695229:
			func_1233(uParam0, uParam1);
			break;
	}
}

int func_1016(int iParam0)
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

bool func_1017(int iParam0)
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

int func_1018(int iParam0)
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

bool func_1038(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
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

bool func_1098(var uParam0, var uParam1)
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

char* func_1099(int iParam0)
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

void func_1101(struct<10> Param0)
{
	int iVar0;

	((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 8);
	aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 16);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		aggregate_func_4266((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 8);
		aggregate_func_4266(Local_1706.f_51[Param0.f_6 /*22*/], 8);
	}
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		if (iVar0 == Param0.f_7 || ((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_10 != joaat("guard"))
		{
		}
		else
		{
			if (Param0.f_9 != 255)
			{
				((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
			}
			aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4266((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			}
		}
		iVar0++;
	}
}

void func_1102(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
		aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 8);
		aggregate_func_4480(&(((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_12));
		((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = 0;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_4266((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			aggregate_func_4266((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 8);
			aggregate_func_4266(Local_1706.f_51[Param0.f_6 /*22*/], 8);
			func_1227((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 6);
		}
		iVar0++;
	}
}

void func_1103(struct<10> Param0)
{
	int iVar0;

	Local_2503.f_36 = Param0.f_8;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		aggregate_func_4266((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 32);
		if (Param0.f_9 != 255)
		{
			((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_4266((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 32);
			aggregate_func_4266(Local_1706.f_51[Param0.f_6 /*22*/], 16);
		}
		iVar0++;
	}
}

void func_1104(struct<9> Param0, var uParam9)
{
	Local_2503.f_847 = Param0.f_6;
	Local_2503.f_848 = Param0.f_7;
	Local_2503.f_846 = Param0.f_8;
}

void func_1105(struct<8> Param0, var uParam8, var uParam9)
{
	((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_1227((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 3);
	}
}

bool func_1106(var uParam0, var uParam1)
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

void func_1109(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1286(uParam0, uParam1);
	if (iVar0 != 0)
	{
		if (!ENTITY::_0x8C03CD6B5E0E85E8(*uParam1, iVar0))
		{
		}
	}
}

void func_1110(var uParam0, var uParam1)
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
	if ((((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1) && uParam1->f_10 == joaat("bandit")) && aggregate_func_3724(&(uParam0->f_3)) > 15f) && !aggregate_func_987(*uParam1, func_1289(*uParam1), 150f, 1)) && !aggregate_func_898(ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f, 200f))
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
			func_1109(uParam0, uParam1);
		}
		aggregate_func_4266(uParam1, 512);
	}
	bVar0 = false;
	if (uParam1->f_10 == joaat("bandit") || uParam1->f_10 == joaat("defensive"))
	{
		aggregate_func_6948(&(Local_2503.f_5), 1);
		bVar0 = true;
	}
	else
	{
		aggregate_func_6948(&(Local_2503.f_5), 0);
	}
	if (((!aggregate_func_4278(uParam1, 4) && (MISC::GET_FRAME_COUNT() % 3) == 0) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 2f, 50f)) && !ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
	{
		aggregate_func_4247((Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/])->f_1[uParam1->f_15], 4);
		aggregate_func_4266(uParam1, 4);
	}
	if (!aggregate_func_4278(uParam1, 32))
	{
		bVar1 = false;
		if (bVar0 && func_1291(*uParam1, PLAYER::PLAYER_PED_ID(), 1109393408 /* Float: 40f */))
		{
			bVar1 = true;
			Local_2503.f_36 = 131072;
		}
		if (aggregate_func_415(*uParam1, 0, &(Local_2503.f_5), &(Local_2503.f_36), 0, 0))
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
			Var2.f_8 = Local_2503.f_36;
			Var2.f_9 = PLAYER::PLAYER_ID();
			func_1294(Var2, 3);
		}
	}
	if (((aggregate_func_4278(uParam1, 32) && uParam0->f_1 < 8) && !aggregate_func_2905(*uParam1, 780511057)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
	{
		bVar12 = false;
		switch (Local_2503.f_36)
		{
			case 4:
			case 256:
				bVar12 = true;
				break;
		}
		iVar13 = uParam1->f_2;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
		{
			iVar13 = func_1289(*uParam1);
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			PED::_0x802092B07E3B1EEA(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 3);
		}
		if (bVar12 && !PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2503.f_41));
			TASK::TASK_COMBAT_PED(0, iVar13, 16384, 0);
			aggregate_func_1004(*uParam1, &(Local_2503.f_41), 0f, 1.5f, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2503.f_41));
			TASK::TASK_COMBAT_PED(0, iVar13, 0, 0);
			aggregate_func_1004(*uParam1, &(Local_2503.f_41), 0f, 1.5f, 1, 1);
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam1) && uParam1->f_10 != -1346830927) && uParam1->f_10 != joaat("horse"))
	{
		if (!aggregate_func_4278(uParam1, 64))
		{
			if (aggregate_func_4278(uParam0, 32) && aggregate_func_987(PLAYER::PLAYER_PED_ID(), *uParam1, 75f, 1))
			{
				uParam1->f_1 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), *uParam1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1297(uParam1));
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
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1297(uParam1));
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
			func_1298(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1299(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1300(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1301(uParam0, uParam1);
			break;
		case -1346830927:
			func_1302(uParam0, uParam1);
			break;
		case -862695229:
			func_1303(uParam0, uParam1);
			break;
	}
	uParam1->f_11 = uParam0->f_1;
}

Vector3 func_1210(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { -1f, 0f, 0f };
	if (func_404(&Var0))
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

Vector3 func_1211(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_404(&Var0))
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

int func_1214(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, -1833360518, &iVar0, 0);
	return iVar0;
}

int func_1215(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, 413811142, &iVar0, 0);
	return iVar0;
}

int func_1216(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	aggregate_func_3012(Param0, -1515541953, &iVar0, 0);
	return iVar0;
}

bool func_1217(struct<5> Param0)
{
	var uVar0;

	aggregate_func_3758(Param0, -1774701585, &uVar0, 0);
	return uVar0;
}

void func_1219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	struct<5> Var0;

	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	Var0 = Local_2503.f_37;
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
		Var0.f_3 = Local_1706.f_16;
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

bool func_1220(var uParam0, var uParam1, vector3 vParam2, float fParam5)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return true;
	}
	if (!aggregate_func_404(uParam0, uParam1->f_4, vParam2, fParam5, 1, 0, 1, 1, 1))
	{
		return false;
	}
	uParam1->f_5 = { vParam2 };
	uParam1->f_8 = fParam5;
	*uParam1 = NETWORK::NET_TO_PED(*uParam0);
	func_1391(uParam0, uParam1);
	return true;
}

int func_1224()
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
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
		{
			fVar1[iVar0] = BUILTIN::TO_FLOAT(&(Local_1706.f_18[iVar0]));
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
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
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
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
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
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
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

int func_1225(vector3 vParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1393(vParam0, 1203982208 /* Float: 99999f */, 0, 0, 0));
}

bool func_1226(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;

	if (iParam10 <= 1)
	{
		return true;
	}
	if (!aggregate_func_4124(vParam1, vParam4, func_1394(*uParam0), 1))
	{
		return false;
	}
	if (aggregate_func_4124(vParam1, vParam7, func_1396(*uParam0), 1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/])) && aggregate_func_1279(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/]), vParam1, 20f, 0, 1))
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
	if (((*uParam0 + iParam11) == &Local_1706.f_2[0] || (*uParam0 + iParam11) == &Local_1706.f_2[1]) || (*uParam0 + iParam11) == &Local_1706.f_2[2])
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
			if (!aggregate_func_4124(vParam1, Local_1706.f_316, 400f, 1))
			{
				return false;
			}
		}
		else if (aggregate_func_6784() < 420000)
		{
			if (!aggregate_func_4124(vParam1, Local_1706.f_316, 200f, 1))
			{
				return false;
			}
		}
		else if (!aggregate_func_4124(vParam1, Local_1706.f_316, 100f, 1))
		{
			return false;
		}
	}
	return true;
}

void func_1227(var uParam0, int iParam1)
{
	if (uParam0->f_1 == iParam1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
	aggregate_func_4480(&(uParam0->f_3));
}

void func_1228(var uParam0, var uParam1)
{
	struct<10> Var0;

	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 0) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			func_1227(uParam0, 2);
			break;
		case 2:
			if ((Local_1706.f_51[uParam1->f_15 /*22*/])->f_21 > 1)
			{
				return;
			}
			if (func_1400(uParam1) && aggregate_func_987(func_1289(*uParam1), *uParam1, 15f, 1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_9 = 255;
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 12000 || !aggregate_func_4278(Local_2503.f_42[uParam1->f_15 /*56*/], 32))
			{
				if (aggregate_func_987(func_1289(*uParam1), *uParam1, 15f, 1))
				{
					if (aggregate_func_4278(Local_2503.f_42[uParam1->f_15 /*56*/], 64))
					{
						func_1227(uParam0, 4);
					}
					else
					{
						func_1227(uParam0, 3);
					}
				}
				else if (aggregate_func_4278(Local_2503.f_42[uParam1->f_15 /*56*/], 32))
				{
					func_1227(uParam0, 0);
				}
			}
			break;
		case 3:
			if (aggregate_func_4732(&(uParam0->f_3)) > 1000)
			{
				func_1227(uParam0, 2);
			}
			break;
		case 4:
			if (aggregate_func_4732(&(uParam0->f_3)) > 12000)
			{
				func_1227(uParam0, 2);
			}
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_1229(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar10;

	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	Var0.f_9 = 255;
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 1) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			if (aggregate_func_4278(uParam0, 4))
			{
				func_1227(uParam0, 2);
			}
			if (aggregate_func_4278(uParam1, 16))
			{
				func_1227(uParam0, 4);
			}
			break;
		case 2:
			if (!aggregate_func_4278(uParam0, 16))
			{
				iVar10 = 0;
				while (iVar10 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar10)) && func_1291(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 15f))
					{
						if ((!aggregate_func_4260(&(uParam1->f_12)) || aggregate_func_4732(&(uParam1->f_12)) > 5000) || aggregate_func_987(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 8f, 1))
						{
							aggregate_func_4266(uParam0, 16);
							aggregate_func_4266(Local_1706.f_51[uParam1->f_15 /*22*/], 8);
							Var0.f_5 = aggregate_func_4507(0, 8);
							Var0.f_6 = uParam1->f_15;
							Var0.f_7 = uParam1->f_16;
							Var0.f_9 = PLAYER::INT_TO_PLAYERINDEX(iVar10);
							func_1294(Var0, 1);
						}
					}
					iVar10++;
				}
			}
			else
			{
				func_1227(uParam0, 3);
			}
			break;
		case 3:
			if (func_1400(uParam1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 2000)
			{
				func_1227(uParam0, 4);
			}
			break;
		case 4:
			if (aggregate_func_4732(&(uParam0->f_3)) > 2000 && aggregate_func_987(*uParam1, uParam1->f_2, 3f, 1))
			{
				if (func_1400(uParam1))
				{
					func_1227(uParam0, 8);
				}
				else
				{
					func_1227(uParam0, 5);
				}
			}
			else if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1))
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1401(8, uParam1);
				}
				func_1227(uParam0, 6);
			}
			else if (aggregate_func_4732(&(uParam0->f_3)) > 8000 && aggregate_func_4278(uParam1, 8))
			{
				if (!func_1402(uParam1->f_2, *uParam1))
				{
					if (func_1400(uParam1))
					{
						func_1227(uParam0, 8);
					}
					else
					{
						func_1227(uParam0, 7);
					}
				}
				else if (aggregate_func_4278(uParam1, 8))
				{
					func_1401(8, uParam1);
				}
			}
			break;
		case 5:
			if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1) || (aggregate_func_4732(&(uParam0->f_3)) > 3000 && !aggregate_func_2905(*uParam1, joaat("SCRIPT_TASK_CONFRONT"))))
			{
				func_1227(uParam0, 4);
			}
			else if (!aggregate_func_1279(*uParam1, uParam1->f_5, 10f, 1, 1) || aggregate_func_4732(&(uParam0->f_3)) > 10000)
			{
				func_1227(uParam0, 7);
			}
			break;
		case 6:
			if (aggregate_func_4278(uParam0, 16))
			{
				Var0.f_5 = aggregate_func_4507(0, 8);
				Var0.f_6 = uParam1->f_15;
				Var0.f_7 = uParam1->f_16;
				func_1294(Var0, 2);
			}
			if (func_1398(uParam0, uParam1, 0))
			{
				func_1227(uParam0, 2);
			}
			break;
		case 7:
			if (aggregate_func_4732(&(uParam0->f_3)) > 6000 && !func_1402(uParam1->f_2, *uParam1))
			{
				if (!aggregate_func_4278(uParam1, 32))
				{
					Var0.f_5 = aggregate_func_4507(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (!aggregate_func_987(*uParam1, uParam1->f_2, 30f, 1))
			{
				func_1227(uParam0, 6);
			}
			break;
		case 8:
			break;
		case 9:
			if ((MISC::GET_FRAME_COUNT() % 30) == 0 && !aggregate_func_987(*uParam1, func_1289(*uParam1), 100f, 1))
			{
				func_1227(uParam0, 10);
			}
			break;
		case 10:
			break;
	}
}

void func_1230(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (aggregate_func_2905(*uParam1, 1056466932) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			func_1227(uParam0, 2);
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1231(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 1) || aggregate_func_8628(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
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

void func_1232(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (aggregate_func_558(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0))
			{
				func_1227(uParam0, 1);
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

void func_1233(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && aggregate_func_4278(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			func_1227(uParam0, 1);
			break;
		case 1:
			if (aggregate_func_2905(*uParam1, 780511057))
			{
				func_1227(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

int func_1286(var uParam0, var uParam1)
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

int func_1289(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1473(iParam0));
}

bool func_1291(int iParam0, int iParam1, float fParam2)
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

void func_1294(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Param0.f_5)))
	{
		return;
	}
	Param0 = 55;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param0.f_4 = iParam10;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 10, 50, &(Param0.f_5));
}

char* func_1297(var uParam0)
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

void func_1298(var uParam0, var uParam1)
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
			func_1398(uParam0, uParam1, 0);
			break;
		case 1:
			WEAPON::_0x94A3C1B804D291EC(*uParam1, 1, 0, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 1, false, false);
			func_1398(uParam0, uParam1, 0);
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
				func_1505(uParam1);
				TASK::_0xE7FA07624574B79A(*uParam1, func_1289(*uParam1), 1, 1, -1f, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (bVar0)
			{
				func_1505(uParam1);
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1, 0);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, WEAPON::GET_BEST_PED_WEAPON(*uParam1, false, false), false, 0, false, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, func_1289(*uParam1), -1, 0, 1);
			}
			break;
		case 8:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1, 0);
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
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1299(var uParam0, var uParam1)
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
		func_1294(Var0, 5);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar10 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			func_1398(uParam0, uParam1, 1);
			break;
		case 1:
			func_1398(uParam0, uParam1, 1);
			break;
		case 2:
			break;
		case 3:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1506(uParam1);
				}
				TASK::TASK_LOOK_AT_ENTITY(*uParam1, uParam1->f_2, 10000, 0, 51, 0);
			}
			break;
		case 4:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1506(uParam1);
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
					func_1506(uParam1);
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
			func_1398(uParam0, uParam1, 0);
			break;
		case 7:
			if (bVar10)
			{
				if (aggregate_func_4278(uParam1, 8))
				{
					func_1506(uParam1);
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
					Var11.f_8 = Local_2503.f_36;
					func_1294(Var11, 3);
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
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, func_1289(*uParam1), 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1300(var uParam0, var uParam1)
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
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			if (!aggregate_func_2905(*uParam1, 1056466932) || (MISC::GET_FRAME_COUNT() % 150) == 0)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
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

void func_1301(var uParam0, var uParam1)
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
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
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

void func_1302(var uParam0, var uParam1)
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
			if (!aggregate_func_558(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0) && !aggregate_func_2905(*uParam1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 1000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
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
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1303(var uParam0, var uParam1)
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
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
				}
			}
			break;
		case 2:
			if (!aggregate_func_2905(*uParam1, 780511057))
			{
				PED::SET_PED_ACCURACY(*uParam1, 0);
				if (uParam1->f_16 == 0)
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
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

void func_1391(var uParam0, var uParam1)
{
	aggregate_func_4266(uParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam1, false);
	WEAPON::_0x431240A58484D5D0(*uParam1, false);
	WEAPON::_0x45E57FDD531C9477(*uParam1, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, 1269650476);
	if (func_1398(uParam0, uParam1, 0))
	{
	}
	func_1606(uParam1);
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

bool func_1392(int iParam0)
{
	return (Local_50[iParam0 /*6*/])->f_4 > Local_243.f_1420;
}

int func_1393(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		else if (func_1392(iVar0))
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

float func_1394(int iParam0)
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

float func_1396(int iParam0)
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

bool func_1397(int iParam0)
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

bool func_1398(var uParam0, var uParam1, bool bParam2)
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

bool func_1400(var uParam0)
{
	return (aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 16) || aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 8));
}

void func_1401(int iParam0, var uParam1)
{
	struct<10> Var0;

	if (aggregate_func_4278(Local_2503.f_42[uParam1->f_15 /*56*/], iParam0))
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_5 = aggregate_func_4507(0, 8);
	Var0.f_6 = uParam1->f_15;
	Var0.f_7 = uParam1->f_16;
	Var0.f_8 = iParam0;
	func_1294(Var0, 4);
}

bool func_1402(int iParam0, int iParam1)
{
	if (!PED::IS_PED_FACING_PED(iParam0, iParam1, 80f) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

int func_1473(int iParam0)
{
	return func_1393(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 0, 0, 0);
}

void func_1505(var uParam0)
{
	if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 32))
	{
		func_1401(32, uParam0);
	}
	else if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 64))
	{
		func_1401(64, uParam0);
	}
	else if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 16))
	{
		func_1401(16, uParam0);
	}
}

void func_1506(var uParam0)
{
	if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 1))
	{
		func_1401(1, uParam0);
	}
	else if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 2))
	{
		func_1401(2, uParam0);
	}
	else if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 4))
	{
		func_1401(4, uParam0);
	}
	else if (!aggregate_func_4278(Local_2503.f_42[uParam0->f_15 /*56*/], 16))
	{
		func_1401(16, uParam0);
	}
}

void func_1606(var uParam0)
{
	int iVar0;

	iVar0 = func_1773(uParam0);
	if (iVar0 != 0)
	{
		MISC::_0xF63FA29D4A9ACA86(*uParam0, func_1297(uParam0));
		PED::_0xC2745D9261664901(*uParam0, func_1773(uParam0));
	}
}

int func_1773(var uParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1297(uParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

