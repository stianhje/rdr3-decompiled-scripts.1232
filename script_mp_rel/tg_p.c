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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<4243> Local_25 = { 0, 0, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 1101004800, 1101004800, 1097859072, 1140457472, 1069547520, 1071644672, 1036831949, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 1101004800, 1101004800, 1097859072, 1140457472, 1069547520, 1071644672, 1036831949, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = -1;
	var uLocal_4303 = 2;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 8;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 1;
	var uLocal_4426 = 0;
	var uLocal_4427 = 1;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 4;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uScriptParam_0 = -1;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = -1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = -1;
	var uScriptParam_14 = -1;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 6;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = -1;
	var uScriptParam_33 = 255;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	func_3(&Local_25, &uScriptParam_0, 37, 385, -1857735811, 6);
}

void func_1()
{
	aggregate_func_4242(&Local_25, 2544);
	aggregate_func_4242(&Local_25, 2853);
	aggregate_func_4242(&Local_25, 2950);
	aggregate_func_4242(&Local_25, 3016);
	aggregate_func_4242(&Local_25, 3252);
	aggregate_func_4242(&Local_25, 3459);
	aggregate_func_4242(&Local_25, 3833);
	aggregate_func_4242(&Local_25, 3870);
	aggregate_func_4242(&Local_25, 3907);
	aggregate_func_4242(&Local_25, 3981);
	aggregate_func_4242(&Local_25, 4011);
	aggregate_func_4242(&Local_25, 4046);
	aggregate_func_4242(&Local_25, 4081);
	aggregate_func_4242(&Local_25, 4116);
	aggregate_func_4242(&Local_25, 4151);
	aggregate_func_4242(&Local_25, 4186);
	aggregate_func_4242(&Local_25, 4221);
	aggregate_func_4242(&Local_25, 4269);
	aggregate_func_4242(&Local_25, 4407);
	aggregate_func_4242(&Local_25, 4437);
	aggregate_func_4242(&Local_25, 4469);
	aggregate_func_4242(&Local_25, 4499);
	aggregate_func_4242(&Local_25, 4532);
	aggregate_func_4242(&Local_25, 4563);
	aggregate_func_4242(&Local_25, 4594);
	aggregate_func_4242(&Local_25, 4629);
	aggregate_func_4242(&Local_25, 4660);
	aggregate_func_4242(&Local_25, 4691);
	aggregate_func_4242(&Local_25, 4721);
	aggregate_func_4242(&Local_25, 4752);
	aggregate_func_4242(&Local_25, 4783);
	aggregate_func_4242(&Local_25, 4815);
	aggregate_func_4242(&Local_25, 4846);
	aggregate_func_4242(&Local_25, 4877);
}

void func_2()
{
	aggregate_func_4242(&Local_25, 5085);
	aggregate_func_4242(&Local_25, 5117);
	aggregate_func_4242(&Local_25, 5155);
	aggregate_func_4242(&Local_25, 5339);
	aggregate_func_4242(&Local_25, 5432);
	aggregate_func_4242(&Local_25, 5633);
	aggregate_func_4242(&Local_25, 5684);
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_86(uParam0, uParam1, iParam2, iParam3, iParam4);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_87(uParam0);
	}
	if (iParam5 > 0)
	{
		func_88(uParam0, iParam5);
	}
	func_89(uParam0);
	aggregate_func_7687(uParam0);
	if (iParam5 > 0)
	{
		func_91();
	}
	func_92(uParam0);
	func_93(uParam0);
	aggregate_func_7687(uParam0);
	while (true)
	{
		if (func_95(uParam0, &iVar1))
		{
			if (((uParam0->f_43 != 21 && uParam0->f_43 != 22) && uParam0->f_43 != 23) && uParam0->f_43 != 24)
			{
				func_96(uParam0, iVar1);
			}
		}
		if (((uParam0->f_43 == 0 || uParam0->f_43 == 13) || uParam0->f_43 == 14) || uParam0->f_43 == 15)
		{
			Call_Loc(uParam0->f_118);
		}
		switch (uParam0->f_43)
		{
			case 0:
				aggregate_func_7637(uParam0, 13);
				break;
			case 13:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(-1553724839);
					Call_Loc(uParam0->f_123);
					if (StackVal)
					{
						Call_Loc(uParam0->f_126);
						if (func_98(uParam0))
						{
							aggregate_func_7637(uParam0, 14);
						}
						else
						{
							func_96(uParam0, 2);
						}
					}
					else
					{
						Call_Loc(uParam0->f_124);
						if (StackVal)
						{
							func_96(uParam0, 2);
						}
						else if (aggregate_func_4628(&(uParam0->f_44), 5f))
						{
							func_96(uParam0, 2);
						}
					}
				}
				break;
			case 14:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(1246061318);
					Call_Loc(uParam0->f_123);
					Stack.Push(287982460);
					Call_Loc(uParam0->f_123);
					while (StackVal || StackVal)
					{
						Call_Loc(uParam0->f_126);
					}
					Stack.Push(uParam0->f_1);
					Call_Loc(uParam0->f_123);
					if (StackVal)
					{
						Call_Loc(uParam0->f_126);
						Call_Loc(uParam0->f_119);
						aggregate_func_7637(uParam0, 15);
					}
					else
					{
						Call_Loc(uParam0->f_124);
						if (StackVal)
						{
							func_96(uParam0, 2);
						}
						else if (aggregate_func_4628(&(uParam0->f_44), 5f))
						{
							func_96(uParam0, 2);
						}
					}
				}
				break;
			case 15:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(1);
					Stack.Push(&iVar7);
					Stack.Push(&iVar8);
					Call_Loc(uParam0->f_147);
					bVar6 = StackVal;
					if (bVar6)
					{
						if (iVar7 == -1)
						{
							iVar9 = 0;
						}
						else
						{
							iVar9 = iVar7 + 1;
						}
					}
					else
					{
						iVar9 = iVar8;
					}
					iVar10 = 0;
					while (iVar10 < iVar9)
					{
						Call_Loc(uParam0->f_124);
						if (!StackVal)
						{
							bVar6 = false;
							Jump @727; //curOff = 681
						}
						else
						{
							Stack.Push(1959158395);
							Call_Loc(uParam0->f_123);
							if (StackVal)
							{
								func_96(uParam0, 6);
								Jump @727; //curOff = 707
							}
							else
							{
								Call_Loc(uParam0->f_126);
							}
						}
						iVar10++;
					}
					if (uParam0->f_43 == 15)
					{
						if (bVar6)
						{
							aggregate_func_7687(uParam0);
							aggregate_func_7637(uParam0, 1);
						}
						else if (aggregate_func_4628(&(uParam0->f_44), 10f))
						{
							func_96(uParam0, 2);
						}
					}
				}
				break;
			case 1:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_110);
					uVar3 = StackVal;
					Call_Loc(uParam0->f_116);
					uVar4 = StackVal;
					Call_Loc(uParam0->f_118);
					uVar5 = StackVal;
					if ((uVar3 && uVar4) && uVar5)
					{
						aggregate_func_9328(uParam0->f_38, 2);
						aggregate_func_7637(uParam0, 16);
					}
					else if (aggregate_func_4628(&(uParam0->f_44), 25f))
					{
						func_96(uParam0, 3);
					}
				}
				break;
			case 16:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else if (func_102(uParam0->f_38) == MISC::GET_FRAME_COUNT())
				{
					func_103(uParam0);
					func_104(uParam0);
					aggregate_func_8113(uParam0, 1);
					func_106(uParam0->f_39, 8388608);
					aggregate_func_7637(uParam0, 6);
				}
				else if (aggregate_func_4628(&(uParam0->f_44), 30f))
				{
					func_96(uParam0, 3);
				}
				break;
			case 6:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					if (!uParam0->f_55)
					{
						if (uParam0->f_58 == 4 && !func_107())
						{
							func_108(uParam0);
						}
					}
					Call_Loc(uParam0->f_120);
					iVar0 = StackVal;
					if (iVar0 != 0)
					{
						aggregate_func_8113(uParam0, 0);
						switch (iVar0)
						{
							case 2:
							case 3:
								aggregate_func_7637(uParam0, 8);
								break;
							default:
								break;
						}
					}
					else if ((!uParam0->f_55 && func_107()) && (uParam0->f_58 == 4 || aggregate_func_8546(uParam0->f_38, 8)))
					{
						if (func_110())
						{
							func_111(uParam0, 1);
						}
						else
						{
							func_111(uParam0, 2);
						}
						func_112(uParam0->f_38, 8);
						aggregate_func_8113(uParam0, 0);
						aggregate_func_7637(uParam0, 7);
					}
					else if (!uParam0->f_55 && aggregate_func_8546(uParam0->f_38, 8))
					{
						func_111(uParam0, 0);
						func_112(uParam0->f_38, 8);
						aggregate_func_8113(uParam0, 0);
						aggregate_func_7637(uParam0, 7);
					}
					else if (uParam0->f_57)
					{
						aggregate_func_8113(uParam0, 0);
						func_89(uParam0);
						aggregate_func_7637(uParam0, 17);
					}
				}
				break;
			case 7:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					func_113(uParam0, &iVar2);
					if (!uParam0->f_55)
					{
						if (iVar2 == 2)
						{
							func_114();
						}
						if (iVar2 == 3 || iVar2 == 2)
						{
							func_108(uParam0);
						}
					}
					Call_Loc(uParam0->f_120);
					iVar0 = StackVal;
					if (iVar0 != 0)
					{
						switch (iVar0)
						{
							case 2:
							case 3:
								func_115(uParam0);
								aggregate_func_7637(uParam0, 8);
								break;
							default:
								break;
						}
					}
					else if (iVar2 == 1)
					{
						func_115(uParam0);
						aggregate_func_7687(uParam0);
						aggregate_func_8113(uParam0, 1);
						aggregate_func_7637(uParam0, 6);
					}
				}
				break;
			case 8:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_120);
					Call_Loc(uParam0->f_132);
					if (StackVal)
					{
						func_117(uParam0);
					}
				}
				break;
			case 17:
				if (func_118(500))
				{
					aggregate_func_7687(uParam0);
					aggregate_func_7637(uParam0, 18);
				}
				break;
			case 18:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_122);
					Stack.Push(0);
					Stack.Push(&iVar7);
					Stack.Push(&iVar8);
					Call_Loc(uParam0->f_147);
					bVar6 = StackVal;
					if (bVar6)
					{
						if (iVar7 == -1)
						{
							iVar9 = 0;
						}
						else
						{
							iVar9 = iVar7 + 1;
						}
					}
					else
					{
						iVar9 = iVar8;
					}
					iVar10 = 0;
					while (iVar10 < iVar9)
					{
						Call_Loc(uParam0->f_124);
						if (!StackVal)
						{
							bVar6 = false;
							Jump @1667; //curOff = 1621
						}
						else
						{
							Stack.Push(1959158395);
							Call_Loc(uParam0->f_123);
							if (StackVal)
							{
								func_96(uParam0, 6);
								Jump @1667; //curOff = 1647
							}
							else
							{
								Call_Loc(uParam0->f_126);
							}
						}
						iVar10++;
					}
					if (uParam0->f_43 == 18)
					{
						if (bVar6)
						{
							aggregate_func_7687(uParam0);
							aggregate_func_7637(uParam0, 19);
						}
						else if (aggregate_func_4628(&(uParam0->f_44), 10f))
						{
							func_96(uParam0, 2);
						}
					}
				}
				break;
			case 19:
				if (!MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
				{
					aggregate_func_7637(uParam0, 20);
				}
				else
				{
					Call_Loc(uParam0->f_116);
					if (StackVal)
					{
						aggregate_func_7687(uParam0);
						func_121(uParam0);
						func_104(uParam0);
						aggregate_func_8113(uParam0, 1);
						CAM::DO_SCREEN_FADE_IN(500);
						aggregate_func_7637(uParam0, 6);
					}
					else if (aggregate_func_4628(&(uParam0->f_44), 25f))
					{
						func_96(uParam0, 2);
					}
				}
				break;
			case 20:
				uParam0->f_105++;
				if (uParam0->f_105 >= 7)
				{
					func_96(uParam0, 1);
				}
				break;
			case 21:
				if ((!aggregate_func_7212(uParam0) || func_123(uParam0)) || aggregate_func_4628(&(uParam0->f_44), 10f))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					aggregate_func_7637(uParam0, 22);
				}
				break;
			case 22:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_124(uParam0);
					aggregate_func_7637(uParam0, 23);
				}
				else if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				break;
			case 23:
				Call_Loc(uParam0->f_129);
				if (!StackVal || aggregate_func_4298(&(uParam0->f_44)) > 2f)
				{
					aggregate_func_9328(uParam0->f_38, 4);
					func_126(uParam0->f_38, MISC::GET_FRAME_COUNT() + 1);
					aggregate_func_7637(uParam0, 24);
				}
				break;
			case 24:
				aggregate_func_7637(uParam0, 25);
				break;
		}
		if (uParam0->f_43 == 25)
		{
			if (uParam0->f_54)
			{
				func_127(uParam0);
			}
		}
		Call_Loc(uParam0->f_134);
		if (uParam0->f_43 == 25)
		{
			func_87(uParam0);
		}
		BUILTIN::WAIT(0);
	}
	func_87(uParam0);
}

void func_4()
{
	struct<10> Var0;

	if (func_128(&(Local_25.f_2)))
	{
		aggregate_func_4242(&(Local_25.f_151), 1);
	}
	else
	{
		aggregate_func_4242(&(Local_25.f_151), 2);
	}
	Var0 = { aggregate_func_7286(Local_25.f_38) };
	func_131(&(Local_25.f_2839), Var0.f_5, Var0.f_8, 0);
	func_132(&(Local_25.f_4242), Var0.f_5, Var0.f_8);
	func_133(&(Local_25.f_2335));
	func_134(&(Local_25.f_151));
	switch (Local_25.f_42)
	{
		case 40:
			func_135(&(Local_25.f_2839), 0);
			break;
		case 8:
			func_135(&(Local_25.f_2839), 2);
			break;
		case 111:
			func_135(&(Local_25.f_2839), 3);
			break;
		case 80:
			func_135(&(Local_25.f_2839), 4);
			break;
		case 5:
			func_135(&(Local_25.f_2839), 5);
			break;
		case 81:
			func_135(&(Local_25.f_2839), 7);
			break;
		case 98:
			func_135(&(Local_25.f_2839), 8);
			break;
		case 121:
			func_135(&(Local_25.f_2839), 6);
			break;
		default:
			func_135(&(Local_25.f_2839), 1);
			break;
	}
	func_136(&Local_25, Local_25.f_42);
}

void func_6()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Local_25.f_151.f_1475), 17, 43);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&(Local_25.f_151.f_1475)), 17, "g_main.mClient.bd.host");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Local_25.f_151.f_1475.f_17), 55, 44);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_25.f_151.f_1475.f_17[0 /*9*/]), 55, "g_main.mClient.bd.part");
}

void func_8()
{
	PLAYER::_0x3B296934DB026873(-888740878, 1780529216);
	if (func_139(&(Local_25.f_151), 1))
	{
		aggregate_func_4489(&(Local_25.f_2335));
	}
	aggregate_func_4239(&(Local_25.f_2839));
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (Local_25.f_42)
	{
		case 81:
			iVar1 = 0;
			break;
		case 121:
			iVar1 = 2;
			break;
		case 80:
			iVar1 = 3;
			break;
		default:
			iVar1 = 1;
			break;
	}
	switch (Local_25.f_42)
	{
		case 81:
			iVar2 = 1;
			break;
		default:
			iVar2 = 0;
			break;
	}
	iVar0 = 1;
	func_142(&(Local_25.f_2839), iVar0, iVar1, 0);
	func_143(&(Local_25.f_4242), iVar2);
	func_144(&(Local_25.f_2335), Local_25.f_2839.f_692);
	AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1);
	AUDIO::_0xD9130842D7226045("RDRO_Poker_Sounds", 0);
	HUD::_0xF66090013DE648D5("MGPKR");
	PED::_0xED9582B3DA8F02B4(6);
	iVar3 = func_145(Local_25.f_39, Local_25.f_42, -1, 0);
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3, false);
	}
	iVar3 = func_145(Local_25.f_39, Local_25.f_42, -1, 1);
	if (iVar3 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar3, false);
	}
}

int func_12()
{
	int iVar0;

	if ((((((!func_146(&(Local_25.f_2839)) || !func_147(&(Local_25.f_4242))) || !func_148(&(Local_25.f_2335))) || !AUDIO::_0xD9130842D7226045("MGBLK_Sounds", 1)) || !AUDIO::_0xD9130842D7226045("RDRO_Poker_Sounds", 0)) || !HUD::_0xD0976CC34002DB57("MGPKR")) || !PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	iVar0 = func_145(Local_25.f_39, Local_25.f_42, -1, 0);
	if (iVar0 == 0 || !STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	iVar0 = func_145(Local_25.f_39, Local_25.f_42, -1, 1);
	if (iVar0 == 0 || !STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_14()
{
	int iVar0;
	int iVar1;

	if (Local_25.f_151.f_52 == 0)
	{
		if (aggregate_func_7654(512))
		{
			Local_25.f_151.f_52 = 1;
		}
	}
	if (Local_25.f_48)
	{
		PAD::_0x2804658EB7D8A50B(4, 1686594632);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	if (aggregate_func_2875(Local_25.f_2335.f_500))
	{
		if (PAD::_IS_INPUT_DISABLED(0) && Local_25.f_48)
		{
			if (!aggregate_func_1549(Local_25.f_2335.f_500, 1))
			{
				_NAMESPACE30::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				_NAMESPACE30::_SET_MOUSE_CURSOR_SPRITE(0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
		}
	}
	if (Local_25.f_151.f_1630 != 0 && Local_25.f_151.f_1630 < MISC::GET_GAME_TIMER())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
		Local_25.f_151.f_1630 = 0;
	}
	func_152(&Local_25);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_153(&(Local_25.f_151));
	}
	if (!aggregate_func_7654(4096))
	{
		if (MISC::IS_BIT_SET(Local_25.f_151.f_1475.f_7, 0))
		{
			aggregate_func_7824(4096);
			if (aggregate_func_7654(2048))
			{
				aggregate_func_8452(2048);
				if (aggregate_func_7654(512))
				{
					aggregate_func_4580();
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar1 != PLAYER::PLAYER_ID() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (!NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
			{
				NETWORK::NETWORK_CONCEAL_PLAYER(iVar1, true);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_16()
{
	if (Local_25.f_54)
	{
		NETWORK::_0xD78A26024BB13E08(PLAYER::PLAYER_ID());
	}
}

bool func_18()
{
	return aggregate_func_3539(Local_25.f_2335.f_442.f_20, 1);
}

void func_20()
{
	if (func_139(&(Local_25.f_151), 1))
	{
		if (!aggregate_func_7654(512))
		{
			aggregate_func_6633(10, 0);
		}
		else if (aggregate_func_7654(2048))
		{
			aggregate_func_6633(8, 0);
		}
	}
}

void func_28()
{
	aggregate_func_4247(&Local_25, &(Local_25.f_151.f_416));
}

void func_32()
{
	func_164(&Local_25, &(Local_25.f_151.f_416));
}

void func_36()
{
	func_166();
	func_167(&Local_25, Local_25.f_42);
	func_168(&Local_25);
	func_169(&Local_25);
}

int func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	if (!func_170())
	{
		iVar0 = 0;
	}
	iVar1 = 1;
	if (!func_171(&(Local_25.f_2839), Local_25.f_42))
	{
		iVar1 = 0;
	}
	func_172(&(Local_25.f_151.f_1475.f_17), Local_25.f_151.f_1475, Local_25.f_42);
	iVar2 = 1;
	if (!func_173(Local_25.f_151.f_1475, Local_25.f_42))
	{
		iVar2 = 0;
	}
	if ((iVar0 && iVar1) && iVar2)
	{
		return 1;
	}
	return 0;
}

var func_42()
{
	return func_175(&Local_25, &(Local_25.f_151));
}

bool func_46(int iParam0)
{
	return func_177(&(Local_25.f_151), iParam0, 0);
}

bool func_48()
{
	return func_178(&(Local_25.f_151), 0);
}

int func_50()
{
	return func_179(&(Local_25.f_151), 0);
}

void func_52()
{
	func_180(&(Local_25.f_151), 0, 0, 0, 0);
}

bool func_56()
{
	return aggregate_func_2967(&(Local_25.f_151), 0);
}

bool func_58()
{
	return func_183(&(Local_25.f_151));
}

bool func_60()
{
	return aggregate_func_2967(&(Local_25.f_151), 6);
}

bool func_62()
{
	return aggregate_func_2967(&(Local_25.f_151), 7);
}

bool func_64()
{
	return aggregate_func_2967(&(Local_25.f_151), 8);
}

void func_66()
{
	func_185(&(Local_25.f_151), 2);
}

void func_68()
{
	func_185(&(Local_25.f_151), 0);
}

void func_70()
{
	int iVar0;
	int iVar1;

	func_186();
	aggregate_func_9336(&Local_25);
	func_188();
	func_189(&(Local_25.f_2839), 1, 1);
	func_190(&(Local_25.f_4242));
	func_191(&(Local_25.f_2335), &Local_25);
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && !Local_25.f_104)
		{
			aggregate_func_346(1);
		}
	}
	AUDIO::_0x531A78D6BF27014B("MGBLK_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDRO_Poker_Sounds");
	HUD::_0xAA03F130A637D923("MGPKR");
	PED::_0x7D4E70A67A651C71(6);
	iVar1 = func_145(Local_25.f_39, Local_25.f_42, -1, 0);
	if (iVar1 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	}
	iVar1 = func_145(Local_25.f_39, Local_25.f_42, -1, 1);
	if (iVar1 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	}
}

int func_72()
{
	return func_193(&Local_25, &(Local_25.f_151));
}

bool func_74(int iParam0, var uParam1, var uParam2)
{
	return func_194(&(Local_25.f_151), iParam0, 1, 1, uParam1, uParam2);
}

void func_76()
{
	func_195(&Local_25, &(Local_25.f_151.f_416), 0);
	func_196(&(Local_25.f_4242), &(Local_25.f_2839), 0);
	func_197(&(Local_25.f_2839), Local_25.f_151.f_9);
	Local_25.f_151.f_1630 = MISC::GET_GAME_TIMER() + 2000;
	aggregate_func_2862(&(Local_25.f_151), 1);
	func_199(&(Local_25.f_2839));
	if (func_200(&(Local_25.f_151.f_416), Local_25.f_151.f_9))
	{
		func_202(&(Local_25.f_151), aggregate_func_5974(&(Local_25.f_151.f_416), Local_25.f_151.f_9));
	}
	if (func_203(&(Local_25.f_151.f_416)) > 0)
	{
		func_204(&(Local_25.f_151));
	}
	func_205(&(Local_25.f_151.f_1475.f_17));
	func_206(1);
}

void func_78()
{
	if (func_207(&(Local_25.f_2839), Local_25.f_151.f_9))
	{
		func_208(&(Local_25.f_2839), Local_25.f_151.f_9, 0);
	}
	func_209(&(Local_25.f_2839), -1);
	func_210(&(Local_25.f_2839), 1);
	func_211(&(Local_25.f_2335), 0);
	func_212(&Local_25, 0);
}

void func_80()
{
	func_211(&(Local_25.f_2335), 0);
	func_212(&Local_25, 0);
	func_213(&(Local_25.f_2335), &Local_25);
	func_214(&(Local_25.f_4242));
	if (func_207(&(Local_25.f_2839), Local_25.f_151.f_9))
	{
		func_215(&(Local_25.f_2839), Local_25.f_151.f_9, 1, 0);
	}
	func_209(&(Local_25.f_2839), Local_25.f_151.f_9);
	func_210(&(Local_25.f_2839), 1);
	func_216(&(Local_25.f_2839), 1);
	func_217(&(Local_25.f_2839), 1);
	func_218(&(Local_25.f_151));
	aggregate_func_4242(&(Local_25.f_2839), 0);
	func_220(&(Local_25.f_151));
	aggregate_func_3175(&(Local_25.f_151), 2);
	aggregate_func_3175(&(Local_25.f_151), 3);
	aggregate_func_3175(&(Local_25.f_151), 4);
	aggregate_func_3175(&(Local_25.f_151), 5);
}

void func_82()
{
	func_195(&Local_25, &(Local_25.f_151.f_416), 1);
	func_196(&(Local_25.f_4242), &(Local_25.f_2839), 0);
}

void func_84()
{
	func_222(&Local_25, &(Local_25.f_151));
	func_223(&Local_25);
}

void func_86(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 == 0)
	{
	}
	*uParam0 = 0;
	uParam0->f_1 = iParam4;
	uParam0->f_2 = { *uParam1 };
	uParam0->f_38 = *uParam1;
	uParam0->f_39 = uParam1->f_14;
	uParam0->f_41 = uParam1->f_15;
	uParam0->f_42 = uParam1->f_2;
	switch (uParam1->f_14)
	{
		case 0:
			uParam0->f_40 = -1150372370;
			break;
		case 2:
			uParam0->f_40 = -471827042;
			break;
		case 1:
			uParam0->f_40 = 355424894;
			break;
		case 3:
			uParam0->f_40 = -2033178055;
			break;
		default:
			uParam0->f_40 = 0;
			break;
	}
	aggregate_func_7637(uParam0, 0);
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_58 = 0;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62.f_3 = MISC::GET_HASH_KEY("MG_YES");
	uParam0->f_62.f_3.f_3 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = 22790;
	uParam0->f_107 = 22790;
	uParam0->f_108 = 22790;
	uParam0->f_109 = 22790;
	uParam0->f_110 = 22798;
	uParam0->f_111 = 22798;
	uParam0->f_112 = 22798;
	uParam0->f_113 = 22790;
	uParam0->f_114 = 22798;
	uParam0->f_115 = 22790;
	uParam0->f_116 = 22798;
	uParam0->f_117 = 22790;
	uParam0->f_118 = 22807;
	uParam0->f_119 = 22790;
	uParam0->f_120 = 22816;
	uParam0->f_121 = 22790;
	uParam0->f_122 = 22790;
	uParam0->f_123 = 22825;
	uParam0->f_124 = 22798;
	uParam0->f_125 = 22834;
	uParam0->f_126 = 22790;
	uParam0->f_127 = 22790;
	uParam0->f_128 = 22798;
	uParam0->f_129 = 22798;
	uParam0->f_130 = 22798;
	uParam0->f_131 = 22798;
	uParam0->f_132 = 22798;
	uParam0->f_133 = 22843;
	uParam0->f_134 = 22790;
	uParam0->f_135 = 22798;
	uParam0->f_136 = 22790;
	uParam0->f_137 = 22790;
	uParam0->f_138 = 22790;
	uParam0->f_139 = 22790;
	uParam0->f_140 = 22790;
	uParam0->f_141 = 22790;
	uParam0->f_142 = 22790;
	uParam0->f_143 = 22798;
	uParam0->f_144 = 22790;
	uParam0->f_145 = 22790;
	uParam0->f_146 = 22798;
	uParam0->f_147 = 22852;
	uParam0->f_148 = 22790;
	uParam0->f_149 = 22790;
	uParam0->f_150 = 22790;
	Call_Loc(iParam2);
	Call_Loc(uParam0->f_106);
	Call_Loc(iParam3);
}

void func_87(var uParam0)
{
	int iVar0;

	if (aggregate_func_4625())
	{
		aggregate_func_4580();
	}
	func_124(uParam0);
	func_115(uParam0);
	if (!uParam0->f_56)
	{
		func_233(uParam0);
	}
	if (uParam0->f_54)
	{
		func_127(uParam0);
	}
	if (!uParam0->f_49)
	{
		func_234(uParam0);
	}
	if (uParam0->f_50)
	{
		func_104(uParam0);
	}
	Call_Loc(uParam0->f_139);
	if (func_235() == uParam0->f_39 && func_236() == uParam0->f_38)
	{
		iVar0 = func_237();
		if (iVar0 == 6 || iVar0 == 7)
		{
			func_238();
		}
	}
	aggregate_func_2819();
}

void func_88(var uParam0, int iParam1)
{
	aggregate_func_1994(iParam1, 1);
	aggregate_func_306();
	Call_Loc(uParam0->f_107);
}

void func_89(var uParam0)
{
	uParam0->f_50 = 1;
	uParam0->f_51 = SCRIPTS::GET_NO_LOADING_SCREEN();
	SCRIPTS::SET_NO_LOADING_SCREEN(true);
}

void func_91()
{
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_92(var uParam0)
{
	struct<2> Var0;

	uParam0->f_47 = 1;
	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4255(Var0))
	{
		if (aggregate_func_4263(Var0) == 5)
		{
			MISC::_0x1096603B519C905F(func_246(uParam0->f_39, 1));
		}
	}
	Call_Loc(uParam0->f_108);
}

void func_93(var uParam0)
{
	if (!uParam0->f_48)
	{
		uParam0->f_48 = 1;
		aggregate_func_2985(1);
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		}
		if (!Global_1939168->f_6)
		{
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
		aggregate_func_6907(0);
		aggregate_func_184(0);
		ENTITY::_0x18FF3110CF47115D(Global_35, 9, false);
		func_252(func_251(func_250()), 1);
		AUDIO::START_AUDIO_SCENE(func_253(uParam0->f_39));
		aggregate_func_1576(joaat("none"), 0);
		Call_Loc(uParam0->f_137);
	}
}

bool func_95(var uParam0, int iParam1)
{
	int iVar0;

	*iParam1 = 0;
	if (aggregate_func_9148())
	{
		aggregate_func_4489(uParam0);
	}
	Global_1902701->f_188 = MISC::GET_FRAME_COUNT();
	if (aggregate_func_523(0, 0))
	{
		if (uParam0->f_104)
		{
			*iParam1 = 5;
		}
		else
		{
			*iParam1 = 4;
		}
		return true;
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		*iParam1 = 3;
		return true;
	}
	if (Global_1939168->f_6)
	{
		*iParam1 = 3;
		return true;
	}
	if (func_258(uParam0->f_39, 8))
	{
		*iParam1 = 4;
		return true;
	}
	Call_Loc(uParam0->f_133);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		*iParam1 = iVar0;
		return true;
	}
	if (uParam0->f_48)
	{
		aggregate_func_3038(0);
		aggregate_func_4580();
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		GRAPHICS::_0x1C6306E5BC25C29C();
	}
	aggregate_func_8396(4, 1);
	func_262(uParam0);
	return false;
}

void func_96(var uParam0, int iParam1)
{
	aggregate_func_4242(uParam0, iParam1);
	func_264(uParam0);
}

bool func_98(var uParam0)
{
	Call_Loc(uParam0->f_146);
	return StackVal;
}

int func_102(int iParam0)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return 0;
	}
	return Global_1130954->f_137.f_2;
}

void func_103(var uParam0)
{
	if (uParam0->f_54)
	{
	}
	else
	{
		Call_Loc(uParam0->f_141);
		uParam0->f_54 = 1;
	}
}

void func_104(var uParam0)
{
	if (uParam0->f_50)
	{
		SCRIPTS::SET_NO_LOADING_SCREEN(uParam0->f_51);
		uParam0->f_50 = 0;
		uParam0->f_51 = 0;
	}
}

void func_106(int iParam0, int iParam1)
{
	if (!func_258(iParam0, iParam1))
	{
	}
	Global_1902701->f_3[iParam0] = (Global_1902701->f_3[iParam0] || iParam1);
}

bool func_107()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
	{
		return true;
	}
	return false;
}

void func_108(var uParam0)
{
	Call_Loc(uParam0->f_121);
	uParam0->f_55 = 1;
}

bool func_110()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
	{
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_111(var uParam0, int iParam1)
{
	if (uParam0->f_83 != 0)
	{
	}
	else
	{
		uParam0->f_82 = iParam1;
	}
}

void func_112(int iParam0, int iParam1)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return;
	}
	if (aggregate_func_4240(Global_1130954->f_137.f_1, iParam1))
	{
		aggregate_func_4247(&(Global_1130954->f_137.f_1), iParam1);
	}
}

void func_113(var uParam0, int iParam1)
{
	if (uParam0->f_83 == 0)
	{
		func_271(uParam0);
	}
	*iParam1 = 0;
	if (uParam0->f_83 != 0)
	{
		switch (uParam0->f_82)
		{
			case 0:
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
				{
					*iParam1 = 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_X")))
				{
					*iParam1 = 2;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT")))
				{
					*iParam1 = 3;
				}
				break;
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
				{
					*iParam1 = 1;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT")))
				{
					*iParam1 = 2;
				}
				break;
		}
	}
	if (*iParam1 != 0)
	{
	}
}

void func_114()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
	{
		aggregate_func_346(1);
	}
}

void func_115(var uParam0)
{
	if (uParam0->f_83 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(uParam0->f_83);
		uParam0->f_83 = 0;
	}
}

void func_117(var uParam0)
{
	if (uParam0->f_103 == 0)
	{
	}
	func_264(uParam0);
}

bool func_118(int iParam0)
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_121(var uParam0)
{
	if (uParam0->f_57)
	{
		uParam0->f_57 = 0;
	}
}

bool func_123(var uParam0)
{
	return PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT"));
}

void func_124(var uParam0)
{
	if (uParam0->f_81 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(uParam0->f_81);
		uParam0->f_81 = 0;
	}
}

void func_126(int iParam0, var uParam1)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return;
	}
	Global_1130954->f_137.f_3 = uParam1;
}

void func_127(var uParam0)
{
	if (!uParam0->f_54)
	{
	}
	else
	{
		Call_Loc(uParam0->f_142);
		uParam0->f_54 = 0;
	}
}

bool func_128(var uParam0)
{
	if (uParam0->f_34)
	{
		return true;
	}
	return false;
}

void func_131(var uParam0, vector3 vParam1, var uParam4, int iParam5)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = uParam4;
	uParam0->f_762 = 0;
	uParam0->f_766 = 0;
	uParam0->f_42 = 0;
	uParam0->f_808 = iParam5;
	uParam0->f_809 = 0;
	StringCopy(uParam0->f_4[0 /*8*/], "face_human@mini_games@generic", 64);
	StringCopy(uParam0->f_4[1 /*8*/], "face_human@mini_games@poker", 64);
	StringCopy(uParam0->f_21[0 /*8*/], "p_m_zero", 64);
	StringCopy(uParam0->f_21[1 /*8*/], "gen_male", 64);
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_41 = 0;
	uParam0->f_1197 = 0;
	uParam0->f_1402 = 0;
	uParam0->f_789 = 0;
	uParam0->f_790 = 0;
	uParam0->f_791 = 0;
	uParam0->f_792 = 0;
	func_276(uParam0);
	func_277(uParam0);
	aggregate_func_7648(uParam0);
	func_279(uParam0);
	aggregate_func_7648(uParam0);
	aggregate_func_7648(uParam0);
	aggregate_func_7648(uParam0);
	aggregate_func_7648(uParam0);
	func_284(uParam0);
}

void func_132(var uParam0, vector3 vParam1, var uParam4)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_285(&(uParam0->f_36), vParam1, uParam4);
	func_286(&(uParam0->f_36), 0, 0.268f, -0.3454f, 1.1811f, -6.4048f, 0.0522f, 11.1279f, 33.0328f, 0f);
	func_286(&(uParam0->f_36), 1, -0.8528f, 1.8438f, 1.5104f, -17.3208f, -0.1408f, -154.8075f, 51.282f, 0f);
	func_287(&(uParam0->f_36), 0, 0.0729f, 0.553f, 1.1431f, -59.0945f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 1, 0.0337f, 0.6014f, 1.2234f, -59.0944f, 0f, 179.8223f, 42.735f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 2, 0.0028f, 1.0857f, 2.175f, -62.243f, 0f, 179.2382f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 3, 0.0651f, 0.3596f, 1.1895f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 4, 0.0328f, 0.359f, 1.2283f, -89.4999f, -0.1268f, 0.2809f, 46.62f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 5, -0.0174f, -0.3798f, 2.175f, -62.243f, 0f, -0.8449f, 14.4905f, 0, 0, 0, 0f, 0.1f);
	func_287(&(uParam0->f_36), 6, 0.6349f, -0.2965f, 1.1056f, -3.4672f, 0f, 78.9368f, 37.8962f, 0, 0, 0, 0f, 0.19f);
}

void func_133(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_165 = 0;
	uParam0->f_166 = 0;
	uParam0->f_168 = 0;
	uParam0->f_169 = 0;
	uParam0->f_170 = 0;
	uParam0->f_171 = 1;
	uParam0->f_172 = 0;
	func_288(uParam0);
	func_289(uParam0);
	func_290(uParam0);
}

void func_134(var uParam0)
{
	func_291(uParam0);
	func_220(uParam0);
	aggregate_func_5019(uParam0, 1, 30204);
	aggregate_func_5019(uParam0, 2, 30436);
	aggregate_func_5019(uParam0, 3, 30650);
	aggregate_func_5019(uParam0, 4, 33503);
	aggregate_func_5019(uParam0, 5, 36364);
	aggregate_func_5019(uParam0, 6, 36928);
	aggregate_func_5019(uParam0, 7, 39091);
	aggregate_func_5019(uParam0, 8, 40162);
	aggregate_func_5019(uParam0, 9, 41250);
	aggregate_func_5019(uParam0, 10, 46879);
	aggregate_func_5019(uParam0, 11, 48460);
	aggregate_func_5019(uParam0, 1, 48530);
	aggregate_func_5019(uParam0, 2, 49107);
	aggregate_func_5019(uParam0, 3, 50241);
	aggregate_func_5019(uParam0, 4, 50572);
	aggregate_func_5019(uParam0, 2, 51756);
	aggregate_func_5019(uParam0, 3, 52657);
	aggregate_func_5019(uParam0, 4, 52902);
	aggregate_func_5019(uParam0, 5, 55180);
	aggregate_func_5019(uParam0, 1, 56032);
	aggregate_func_5019(uParam0, 1, 56094);
	aggregate_func_5019(uParam0, 2, 56424);
	aggregate_func_5019(uParam0, 3, 59905);
	aggregate_func_5019(uParam0, 1, 61181);
	aggregate_func_5019(uParam0, 2, 61341);
	aggregate_func_5019(uParam0, 3, 61482);
	aggregate_func_4242(uParam0, 61993);
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_692 = iParam1;
	func_325(&(uParam0->f_693), uParam0->f_692);
	func_326(&(uParam0->f_695), uParam0->f_692);
	func_328(&(uParam0->f_694), func_327(), uParam0->f_692, 0);
}

void func_136(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 81:
			func_329(&(uParam0->f_2839), -307.1723f, 796.1072f, 117.9627f);
			func_329(&(uParam0->f_2839), -312.5649f, 809.5051f, 117.9771f);
			func_329(&(uParam0->f_2839), -305.9782f, 811.3005f, 117.9807f);
			func_329(&(uParam0->f_2839), -312.6757f, 802.9134f, 117.9805f);
			func_329(&(uParam0->f_2839), -310.7475f, 796.211f, 117.9675f);
			func_329(&(uParam0->f_2839), -308.5533f, 797.4734f, 117.9642f);
			func_329(&(uParam0->f_2839), -305.9204f, 798.1023f, 117.9606f);
			func_329(&(uParam0->f_2839), -307.3433f, 797.2706f, 117.9627f);
			func_329(&(uParam0->f_2839), -301.5801f, 792.1054f, 117.1054f);
			func_330(&(uParam0->f_2839), -306.8107f, 793.4584f, 116.9747f);
			break;
		case 5:
			func_329(&(uParam0->f_2839), 2626.753f, -1219.197f, 52.2514f);
			func_329(&(uParam0->f_2839), 2637.419f, -1224.354f, 52.3804f);
			func_329(&(uParam0->f_2839), 2637.921f, -1229.526f, 52.3804f);
			func_329(&(uParam0->f_2839), 2633.379f, -1233.32f, 53.1887f);
			func_329(&(uParam0->f_2839), 2635.423f, -1220.865f, 52.3804f);
			func_329(&(uParam0->f_2839), 2630.454f, -1217.621f, 52.2645f);
			func_329(&(uParam0->f_2839), 2624.762f, -1222.479f, 52.2391f);
			func_330(&(uParam0->f_2839), 2627.455f, -1219.955f, 52.2466f);
			break;
		case 121:
			func_329(&(uParam0->f_2839), -5512.044f, -2910.505f, 0.6699f);
			func_329(&(uParam0->f_2839), -5515.198f, -2911.668f, 0.6704f);
			func_329(&(uParam0->f_2839), -5512.416f, -2918.883f, 0.6517f);
			func_330(&(uParam0->f_2839), -5514.41f, -2918.763f, 0.6464f);
			break;
		case 40:
			func_329(&(uParam0->f_2839), -811.3929f, -1324.61f, 42.6781f);
			func_329(&(uParam0->f_2839), -817.068f, -1322.638f, 42.6789f);
			func_329(&(uParam0->f_2839), -821.1555f, -1315.399f, 42.6789f);
			func_329(&(uParam0->f_2839), -807.1668f, -1312.655f, 42.6624f);
			func_329(&(uParam0->f_2839), -808.6184f, -1309.705f, 42.6567f);
			func_329(&(uParam0->f_2839), -808.018f, -1319.517f, 42.6661f);
			func_330(&(uParam0->f_2839), -809.1511f, -1312.746f, 42.6682f);
			break;
		case 80:
			func_329(&(uParam0->f_2839), -321.8182f, -358.8911f, 87.0173f);
			func_329(&(uParam0->f_2839), -322.9761f, -356.7132f, 87.001f);
			func_329(&(uParam0->f_2839), -324.3805f, -353.8069f, 86.9829f);
			func_329(&(uParam0->f_2839), -332.2454f, -354.9357f, 87.0182f);
			func_329(&(uParam0->f_2839), -338.1316f, -356.5013f, 87.0331f);
			func_329(&(uParam0->f_2839), -334.125f, -356.3169f, 87.0035f);
			func_329(&(uParam0->f_2839), -335.3971f, -361.9433f, 87.0766f);
			func_329(&(uParam0->f_2839), -338.2805f, -359.7622f, 87.0718f);
			func_329(&(uParam0->f_2839), -340.7805f, -362.6811f, 87.048f);
			func_329(&(uParam0->f_2839), -341.2767f, -360.5272f, 87.0055f);
			func_330(&(uParam0->f_2839), -324.0977f, -357.0095f, 86.9931f);
			break;
	}
}

bool func_139(var uParam0, int iParam1)
{
	return uParam0->f_1474 == iParam1;
}

void func_142(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	uParam0->f_38 = 1;
	STREAMING::_0x2B6529C54D29037A("TaskMovePokerMP");
	iVar0 = 0;
	while (iVar0 < 6)
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_1274[iVar0 /*8*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		STREAMING::REQUEST_CLIP_SET(func_331(uParam0, iVar0));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			STREAMING::REQUEST_ANIM_DICT(func_332(uParam0, iVar1, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	STREAMING::REQUEST_ANIM_DICT("mini_games@poker_mg@deal");
	STREAMING::REQUEST_MODEL(uParam0->f_693, false);
	STREAMING::REQUEST_MODEL(uParam0->f_694, false);
	STREAMING::REQUEST_MODEL(uParam0->f_695, false);
	STREAMING::REQUEST_MODEL(-1383054421, false);
	STREAMING::REQUEST_MODEL(744014130, false);
	STREAMING::REQUEST_MODEL(552839784, false);
	STREAMING::REQUEST_MODEL(-809957388, false);
	STREAMING::REQUEST_MODEL(1028219667, false);
	STREAMING::REQUEST_MODEL(1699623712, false);
	STREAMING::REQUEST_MODEL(1509629050, false);
	STREAMING::REQUEST_MODEL(278923713, false);
	STREAMING::REQUEST_MODEL(1985926465, false);
	STREAMING::REQUEST_MODEL(-1045813766, false);
	func_333(uParam0, iParam2, bParam3);
	func_334(uParam0);
	if (!PED::IS_PED_INJURED(Global_35) && PED::IS_PED_MALE(Global_35))
	{
		func_335(uParam0, 0);
	}
	else
	{
		func_335(uParam0, 4);
	}
	if (uParam0->f_808)
	{
		func_336(uParam0, iParam1);
	}
}

void func_143(var uParam0, int iParam1)
{
	if (!*uParam0)
	{
		*uParam0 = 1;
		uParam0->f_7 = iParam1;
		CAM::_0x6A4D224FC7643941("table_games_cam");
		STREAMING::REQUEST_MODEL(joaat("p_coin01x"), false);
	}
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	func_337(iParam1, &iVar0);
	func_338(uParam0, 2, 0, iVar0);
	bVar1 = false;
	while (bVar1 < 6)
	{
		func_339(uParam0, bVar1, "", "", 0, 0);
		bVar1++;
	}
	AUDIO::_0xD9130842D7226045("HUD_POKER", 0);
	GRAPHICS::_0x5199405EABFBD7F0("OJPokerPlayerTurn");
}

int func_145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0[4];
	int iVar5;

	iVar5 = 0;
	if (iParam0 == 3)
	{
		return joaat("a_m_m_fivefingerfilletplayers_01");
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (!bParam3)
		{
			return joaat("a_m_m_cardgameplayers_01");
		}
		else
		{
			return -294911754;
		}
	}
	else if (iParam0 == 1)
	{
		return joaat("a_m_m_dominoesplayers_01");
	}
	switch (iParam1)
	{
		case 81:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar5 = 2;
			break;
		case 111:
			iVar0[0] = joaat("a_m_m_rhdupperclass_01");
			iVar5 = 1;
			break;
		case 40:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_blwlaborer_01");
				iVar0[1] = joaat("a_m_m_blwlaborer_02");
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_blwupperclass_01");
				iVar5 = 1;
			}
			break;
		case 121:
			iVar0[0] = joaat("a_m_m_tumtownfolk_01");
			iVar0[1] = joaat("a_m_m_tumtownfolk_02");
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = joaat("s_m_m_strlumberjack_01");
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_middlesdtownfolk_01");
				iVar0[1] = joaat("a_m_m_middlesdtownfolk_02");
				iVar0[2] = joaat("a_m_m_middlesdtownfolk_03");
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = joaat("a_m_o_sdupperclass_01");
				iVar0[1] = joaat("a_m_o_sdupperclass_01");
				iVar5 = 2;
			}
			break;
		case 98:
			iVar0[0] = joaat("a_m_m_vhttownfolk_01");
			iVar5 = 1;
			break;
		case 74:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			break;
		case 80:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar0[2] = joaat("s_m_m_valcowpoke_01");
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return &(iVar0[iParam2]);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_808)
	{
		if (!func_340(uParam0))
		{
			return false;
		}
		else if (uParam0->f_807 == -1)
		{
			func_341(uParam0);
		}
	}
	if (!STREAMING::_0x2C04D89A0FB4E244("TaskMovePokerMP"))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_1274[iVar0 /*8*/]))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!STREAMING::HAS_CLIP_SET_LOADED(func_331(uParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_332(uParam0, iVar1, iVar2)))
			{
				return false;
			}
			iVar2++;
		}
		iVar1++;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@poker_mg@deal"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_693))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_694))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_695))
	{
		return false;
	}
	if (!aggregate_func_2740(uParam0))
	{
		return false;
	}
	if (!func_343(uParam0))
	{
		return false;
	}
	if (((((((((!STREAMING::HAS_MODEL_LOADED(-1383054421) || !STREAMING::HAS_MODEL_LOADED(744014130)) || !STREAMING::HAS_MODEL_LOADED(552839784)) || !STREAMING::HAS_MODEL_LOADED(-809957388)) || !STREAMING::HAS_MODEL_LOADED(1028219667)) || !STREAMING::HAS_MODEL_LOADED(1699623712)) || !STREAMING::HAS_MODEL_LOADED(1509629050)) || !STREAMING::HAS_MODEL_LOADED(278923713)) || !STREAMING::HAS_MODEL_LOADED(1985926465)) || !STREAMING::HAS_MODEL_LOADED(-1045813766))
	{
		return false;
	}
	return true;
}

bool func_147(var uParam0)
{
	if (!*uParam0)
	{
	}
	else if (!CAM::_0xDD0B7C5AE58F721D("table_games_cam") || !STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
	{
		return false;
	}
	return true;
}

bool func_148(var uParam0)
{
	if (!AUDIO::_0xD9130842D7226045("HUD_POKER", 0))
	{
		return false;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("OJPokerPlayerTurn"))
	{
		return false;
	}
	if (uParam0->f_1 == 4)
	{
		return true;
	}
	return false;
}

void func_152(var uParam0)
{
	func_345(&(uParam0->f_2839), 1);
	aggregate_func_7462(&(uParam0->f_2335));
	func_347(&(uParam0->f_151));
	func_348(&(uParam0->f_151));
}

void func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	uParam0->f_1473++;
	if (uParam0->f_1473 >= 32)
	{
		uParam0->f_1473 = 0;
	}
	iVar2 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1473);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		iVar0 = iVar1;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1475.f_7, 0))
			{
				if (MISC::IS_BIT_SET((uParam0->f_1475.f_17[iVar0 /*9*/])->f_8, 0))
				{
					MISC::SET_BIT(&(uParam0->f_1475.f_7), 0);
				}
			}
			iVar3 = (uParam0->f_1475.f_17[iVar0 /*9*/])->f_5;
			iVar4 = (uParam0->f_1475.f_17[iVar0 /*9*/])->f_6;
			bVar5 = (uParam0->f_1475.f_17[iVar0 /*9*/])->f_7;
			if ((iVar3 != -1 && iVar4 != -1) && iVar4 > &uParam0->f_1475.f_8[iVar3])
			{
				func_349(uParam0, iVar3, iVar4, bVar5);
			}
		}
	}
}

void func_159(var uParam0)
{
	func_354(uParam0, uParam0->f_9, uParam0->f_416, !PED::IS_PED_MALE(Global_35));
}

int func_161(var uParam0, var uParam1)
{
	if (!func_355(&(uParam0->f_2335), 1))
	{
		return 0;
	}
	return 1;
}

int func_163(var uParam0, var uParam1)
{
	if (!func_357(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_164(var uParam0, var uParam1)
{
	int iVar0[6];
	int iVar7;
	int iVar8;
	struct<7> Var9[6];
	int iVar52;

	uParam0->f_151.f_1449 = 0;
	aggregate_func_4284(&(uParam0->f_151.f_1657), -uParam0->f_151.f_1455);
	func_356(uParam0, uParam1);
	func_218(&(uParam0->f_151));
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (func_200(uParam1, iVar8) && aggregate_func_4971(&(uParam0->f_151), iVar8) == 1)
		{
			MISC::SET_BIT(&iVar7, iVar8);
			iVar0[iVar8] = func_360(&(uParam0->f_151), iVar8);
		}
		iVar8++;
	}
	if (iVar7 != 0)
	{
		func_361(&(uParam0->f_2335), iVar7, &iVar0);
	}
	if (func_139(&(uParam0->f_151), 1))
	{
		iVar52 = 0;
		uParam0->f_151.f_2180 = 0;
		iVar8 = 0;
		while (iVar8 < 6)
		{
			if (aggregate_func_4971(&(uParam0->f_151), iVar8) == 1 && !func_362(&(uParam0->f_151), iVar8))
			{
				if (func_363(&(uParam0->f_151), iVar8, Var9[iVar52 /*7*/]))
				{
					MISC::SET_BIT(&(uParam0->f_151.f_2180), iVar8);
					iVar52++;
				}
			}
			iVar8++;
		}
		if (iVar52 > 0)
		{
			if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
			{
				uParam0->f_151.f_2181 = 1;
			}
			else
			{
				uParam0->f_151.f_2181 = NETWORK::_0xD66C9E72B3CC4982(&Var9, iVar52);
			}
		}
	}
}

int func_165(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3[6];
	int iVar52;
	int iVar53;

	iVar0 = uParam0->f_151.f_1449;
	if (func_139(&(uParam0->f_151), 1) && uParam0->f_151.f_2180 != 0)
	{
		iVar52 = func_364(uParam0->f_151.f_2180);
		if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
		{
			iVar53 = -1;
		}
		else
		{
			iVar53 = NETWORK::_0x58CC181719256197(uParam0->f_151.f_2181, &Var3, iVar52);
		}
		if (iVar53 == 0)
		{
			iVar52 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(uParam0->f_151.f_2180, iVar0))
				{
					func_365(&(uParam0->f_151), iVar0, Var3[iVar52 /*8*/], 1);
					iVar52++;
				}
				iVar0++;
			}
			uParam0->f_151.f_2180 = 0;
		}
		else if (iVar53 == 1)
		{
		}
		else
		{
			uParam0->f_151.f_2180 = 0;
		}
	}
	if (iVar0 < 6)
	{
		if (!func_200(uParam1, iVar0))
		{
			uParam0->f_151.f_1449++;
		}
		else if (aggregate_func_4971(&(uParam0->f_151), iVar0) == 0)
		{
			return 0;
		}
		else if (aggregate_func_4971(&(uParam0->f_151), iVar0) != 1)
		{
			return 0;
		}
		else
		{
			if (uParam0->f_151.f_9 == iVar0)
			{
				iVar1 = Global_35;
			}
			else if (!func_366(uParam0, iVar0, *uParam1, func_360(&(uParam0->f_151), iVar0), &iVar1, &uVar2))
			{
				return 0;
			}
			func_367(&(uParam0->f_151), iVar0, iVar1, uParam0->f_151.f_9 != iVar0);
			uParam0->f_151.f_1449++;
		}
	}
	if (uParam0->f_151.f_1449 >= 6)
	{
		if (aggregate_func_4628(&(uParam0->f_44), (25f - 0.5f)))
		{
			func_368(&(uParam0->f_2335));
		}
		if ((func_357(uParam0) && func_355(&(uParam0->f_2335), 1)) && uParam0->f_151.f_2180 == 0)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_369(&(uParam0->f_151), iVar0) && !func_370(&(uParam0->f_151), iVar0))
				{
					return 0;
				}
				iVar0++;
			}
			return 1;
		}
	}
	return 0;
}

void func_166()
{
	aggregate_func_6609(30, 1073741824 /* Float: 2f */);
	aggregate_func_6609(31, 1073741824 /* Float: 2f */);
	func_372();
}

void func_167(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 81:
			func_373(&(uParam0->f_2839), -908482159, 0, 0);
			func_373(&(uParam0->f_2839), -1147728628, 0, 0);
			break;
		case 5:
			func_373(&(uParam0->f_2839), 804086151, 0, 0);
			func_373(&(uParam0->f_2839), -399528504, 0, 0);
			break;
		case 121:
			func_373(&(uParam0->f_2839), -2077467, 0, 0);
			func_373(&(uParam0->f_2839), 223504277, 0, 0);
			func_373(&(uParam0->f_2839), 1322586500, 0, 0);
			break;
		case 40:
			func_373(&(uParam0->f_2839), -1842720100, 0, 0);
			func_373(&(uParam0->f_2839), -983069384, 0, 0);
			func_373(&(uParam0->f_2839), -768760124, 0, 0);
			func_373(&(uParam0->f_2839), -1974086289, 0, 0);
			break;
		case 80:
			func_373(&(uParam0->f_2839), -1322761226, 0, 0);
			func_373(&(uParam0->f_2839), -1494929552, 0, 0);
			func_373(&(uParam0->f_2839), -1801221395, 0, 0);
			func_373(&(uParam0->f_2839), -1983417035, 1, 0f);
			func_373(&(uParam0->f_2839), -1476769939, 0, 0);
			func_373(&(uParam0->f_2839), -1229658910, 0, 0);
			break;
	}
}

void func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	iVar3 = func_374(uParam0->f_42);
	MISC::SET_BIT(&((uParam0->f_151.f_1475.f_17[iVar2 /*9*/])->f_4), iVar3);
}

void func_169(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0x1F714E7A9DADFC42(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), uParam0->f_2839) < 2f)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
	}
}

bool func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_372();
	iVar0 = &Global_1051387->f_3693[30 /*16*/];
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (&Global_1051387->f_3582[iVar2 /*19*/] != -1)
		{
			if (iVar0 == &Global_1051387->f_3582[iVar2 /*19*/])
			{
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar1 != -1)
	{
		Global_1051387->f_3659 = iVar1;
		iVar3 = &Global_1051387->f_3582[iVar1 /*19*/];
		iVar4 = (Global_1051387->f_3582[iVar1 /*19*/])->f_9;
		if (iVar3 != -1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_8))
			{
				return false;
			}
			else if (!TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar1 /*19*/])->f_6))
			{
				return false;
			}
			else if (!PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar1 /*19*/])->f_8, (Global_1051387->f_3582[iVar1 /*19*/])->f_6) && !aggregate_func_927((Global_1051387->f_3582[iVar1 /*19*/])->f_8, -76381094))
			{
				TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar1 /*19*/])->f_8, (Global_1051387->f_3582[iVar1 /*19*/])->f_6, 0, 0, false, true, 1778448947, false, -1082130432 /* Float: -1f */, 0);
			}
		}
		iVar5 = aggregate_func_5121((Global_1051387->f_3582[iVar1 /*19*/])->f_9);
		if (iVar4 != -1 && UNLOCK::_UNLOCK_IS_UNLOCKED(iVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_15))
			{
				return false;
			}
			else if (!TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar1 /*19*/])->f_13))
			{
				return false;
			}
			else if (!PED::_0x9C54041BB66BCF9E((Global_1051387->f_3582[iVar1 /*19*/])->f_15, (Global_1051387->f_3582[iVar1 /*19*/])->f_13) && !aggregate_func_927((Global_1051387->f_3582[iVar1 /*19*/])->f_15, -76381094))
			{
				TASK::CLEAR_PED_TASKS((Global_1051387->f_3582[iVar1 /*19*/])->f_15, 1, 0);
				TASK::_TASK_USE_SCENARIO_POINT((Global_1051387->f_3582[iVar1 /*19*/])->f_15, (Global_1051387->f_3582[iVar1 /*19*/])->f_13, 0, 0, false, true, 1595886358, false, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	return true;
}

bool func_171(var uParam0, int iParam1)
{
	if (uParam0->f_789 == 0)
	{
		if (iParam1 == 5)
		{
			uParam0->f_789 = ENTITY::_0x6F3068258A499E52(1105255678, 2629.15f, -1228.84f, 52.38f, 7);
		}
		else if (iParam1 == 121)
		{
			uParam0->f_789 = ENTITY::_0x6F3068258A499E52(1822151739, -5510.41f, -2913.68f, 2.37f, 7);
		}
		else if (iParam1 == 40)
		{
			uParam0->f_789 = ENTITY::_0x6F3068258A499E52(-1697970565, -813.6749f, -1317.336f, 42.6795f, 7);
		}
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_789))
	{
		if (iParam1 == 5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_790))
			{
				uParam0->f_790 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_789));
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_790))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_790, false);
					return true;
				}
				return false;
			}
		}
		else if (iParam1 == 121)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_791))
			{
				uParam0->f_791 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_789));
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_791))
				{
					return true;
				}
				return false;
			}
		}
		else if (iParam1 == 40)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_792))
			{
				uParam0->f_792 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_789));
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_792))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_792, false);
					return true;
				}
				return false;
			}
		}
	}
	return true;
}

void func_172(var uParam0, struct<17> Param1, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_173(Param1, iParam18))
	{
		return;
	}
	iVar0 = func_374(iParam18);
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
	iVar3 = iVar2;
	if (func_377(Param1, iVar3, iVar0))
	{
		if (!MISC::IS_BIT_SET(((*uParam0)[iVar3 /*9*/])->f_4, 6))
		{
			PED::_0xBFA6B7731C3BAF02();
			MISC::SET_BIT(&(((*uParam0)[iVar3 /*9*/])->f_4), 6);
		}
		else if (!MISC::IS_BIT_SET(((*uParam0)[iVar3 /*9*/])->f_4, 7))
		{
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				MISC::SET_BIT(&(((*uParam0)[iVar3 /*9*/])->f_4), 7);
			}
		}
	}
}

bool func_173(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	int iVar0;

	iVar0 = func_374(iParam17);
	if (MISC::IS_BIT_SET(Param0.f_6, iVar0))
	{
		return true;
	}
	return false;
}

var func_175(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	func_176(uParam1);
	while (((func_177(uParam1, 1246061318, 1) || func_177(uParam1, 287982460, 1)) || func_378(uParam1, -1043649719, 1)) || func_379(uParam1, 1))
	{
		if (func_379(uParam1, 1))
		{
			func_180(uParam1, 1, 0, 0, 1);
		}
		else
		{
			func_180(uParam1, 1, 0, 0, 0);
		}
	}
	if (func_378(uParam1, 1995414514, 1))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_380(uParam1, iVar0, 1))
			{
				if (&uParam1->f_1557[iVar0 /*8*/] == 0)
				{
					if (func_200(&(uParam1->f_902), iVar0))
					{
						func_381(uParam0, uParam1, iVar0, 2, 1);
					}
					else
					{
						func_381(uParam0, uParam1, iVar0, 4, 1);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_177(uParam1, 1959158395, 1))
	{
		if (uParam1->f_1552 == 0)
		{
			func_382(uParam0, uParam1, 6, 0);
		}
	}
	if (uParam1->f_1401)
	{
		if (uParam1->f_1552 == 0)
		{
			func_382(uParam0, uParam1, 7, 1);
		}
	}
	if (uParam1->f_1552 != 0)
	{
		func_383(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam1->f_1557[iVar0 /*8*/] != 0)
		{
			func_384(uParam0, uParam1, iVar0);
		}
		iVar0++;
	}
	if (uParam0->f_151.f_1606 != 0)
	{
		func_385(uParam0, &(uParam0->f_151));
	}
	if (func_386(uParam1, 1))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_387(uParam1, iVar0, 1))
			{
				if (&uParam1->f_1557[iVar0 /*8*/] == 0)
				{
					func_381(uParam0, uParam1, iVar0, 3, 1);
				}
			}
			iVar0++;
		}
	}
	func_388(uParam0, uParam1);
	func_389(uParam0, uParam1);
	if (uParam1->f_1552 == 0)
	{
		if (func_390(uParam0, &iVar1))
		{
			func_382(uParam0, uParam1, iVar1, 1);
		}
	}
	func_391(uParam0);
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		bVar3 = false;
		if (uParam1->f_1547 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(&(uParam1->f_416));
			Call_Loc(&uParam1->f_1405[uParam1->f_1547]);
			if (StackVal)
			{
				iVar2++;
				bVar3 = true;
			}
		}
		if (iVar2 > 50)
		{
		}
	else
	{
		}
	}
	func_392(uParam0, &(uParam0->f_151));
	func_393(uParam0, &(uParam0->f_151));
	return uParam1->f_1552;
}

void func_176(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar8;
	struct<2> Var9;

	iVar8 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	if (uParam0->f_1388 != 0)
	{
		if (uParam0->f_1388 != iVar8)
		{
			func_394(uParam0);
		}
	}
	if (uParam0->f_1388 == 0)
	{
		if (iVar8 != 0)
		{
			uParam0->f_1388 = iVar8;
			if (uParam0->f_1388 == -1857735811)
			{
				Var9.f_1.f_15 = 11;
				Var9.f_1.f_39 = 6;
				Var9.f_1.f_39.f_1.f_7 = 11;
				Var9.f_1.f_39.f_1.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
				Var9.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
				Var9.f_1.f_376 = 6;
				Var9.f_1.f_376.f_1.f_2 = 6;
				Var9.f_1.f_376.f_1.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
				Var9.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
				if (!MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var9, 487))
				{
					return;
				}
				uParam0->f_902 = { Var9.f_1 };
				uParam0->f_1388.f_1 = Var9.f_1.f_1;
				uParam0->f_1388.f_2 = Var9.f_1;
				uParam0->f_1388.f_3 = 0;
				switch (uParam0->f_1388.f_1)
				{
					case 1995414514:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (func_200(&(uParam0->f_416), iVar0) != func_200(&(Var9.f_1), iVar0))
							{
								MISC::SET_BIT(&(uParam0->f_1388.f_3), iVar0);
								if (func_200(&(Var9.f_1), iVar0) && !aggregate_func_9042(uParam0, iVar0))
								{
									func_396(uParam0, iVar0, 255, 0, &uVar1);
								}
							}
							iVar0++;
						}
						break;
					case 1592704673:
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (aggregate_func_5974(&(uParam0->f_416), iVar0) < aggregate_func_5974(&(Var9.f_1), iVar0))
							{
								MISC::SET_BIT(&(uParam0->f_1388.f_3), iVar0);
							}
							iVar0++;
						}
						break;
				}
			}
			if (uParam0->f_1388 == -1857735811)
			{
			}
		}
	}
}

bool func_177(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (iParam1 == 0)
	{
	}
	else
	{
		if (uParam0->f_1388 == -1857735811)
		{
			if (bParam2)
			{
				if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
				{
					return false;
				}
			}
		}
		if (uParam0->f_1388 == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_178(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
	}
	return uParam0->f_1388 != 0;
}

int func_179(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return 0;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return 0;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return 0;
			}
		}
	}
	return uParam0->f_1388;
}

int func_180(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (uParam0->f_1388 == 0)
	{
		return 0;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam4)
		{
		}
	}
	else if (bParam4)
	{
	}
	if (bParam1)
	{
		if ((uParam0->f_1388 == -1857735811 && (uParam0->f_1388.f_1 == 1995414514 || uParam0->f_1388.f_1 == 1592704673)) && uParam0->f_1388.f_3 != 0)
		{
			return 0;
		}
	}
	if (iParam2 != 0 && iParam2 != uParam0->f_1388)
	{
		return 0;
	}
	if (iParam3 != 0 && iParam3 != uParam0->f_1388.f_1)
	{
		return 0;
	}
	iVar0 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	if (uParam0->f_1388 != iVar0)
	{
		return 0;
	}
	uParam0->f_1392 = { uParam0->f_1388 };
	if (uParam0->f_1388 == -1857735811 && !bParam4)
	{
		uParam0->f_1396 = uParam0->f_1388.f_2;
	}
	if (bParam4)
	{
		func_398();
	}
	else
	{
		switch (uParam0->f_1388)
		{
			case -1553724839:
				func_399(uParam0);
				break;
			case 1959158395:
				func_400(uParam0);
				break;
			case 1246061318:
				func_401(uParam0);
				break;
			case 287982460:
				func_398();
				break;
			case -1857735811:
				func_402(uParam0, &(uParam0->f_902), bParam1);
				break;
			case -1657573670:
			case -1267385353:
			case 308196724:
				func_398();
				break;
			default:
				break;
		}
	}
	func_394(uParam0);
	func_176(uParam0);
	return 1;
}

int func_181(var uParam0)
{
	struct<4> Var0;

	if (!func_403(uParam0, 0))
	{
		MINIGAME::_MINIGAME_LEAVE_TABLE(&Var0);
		func_404(uParam0, 0, Var0, 1, 1);
		return 1;
	}
	return 0;
}

bool func_183(var uParam0)
{
	return (uParam0->f_66 && -1 ^ (uParam0->f_69 || uParam0->f_70)) != 0;
}

void func_185(var uParam0, int iParam1)
{
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 1:
			HUD::_0x8BC7C1F929D07BF3(1920936087);
			break;
		case 2:
			HUD::_0x8BC7C1F929D07BF3(-333726060);
			HUD::_0x8BC7C1F929D07BF3(372886907);
			break;
		case 3:
			HUD::_0x8BC7C1F929D07BF3(-333726060);
			HUD::_0x8BC7C1F929D07BF3(372886907);
			HUD::_0x8BC7C1F929D07BF3(2003196676);
			break;
		case 4:
			break;
	}
	uParam0->f_1403 = iParam1;
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 1:
			HUD::_0x4CC5F2FC1332577F(1920936087);
			break;
		case 2:
			HUD::_0x4CC5F2FC1332577F(-333726060);
			HUD::_0x4CC5F2FC1332577F(372886907);
			break;
		case 3:
			HUD::_0x4CC5F2FC1332577F(-333726060);
			HUD::_0x4CC5F2FC1332577F(372886907);
			HUD::_0x4CC5F2FC1332577F(2003196676);
			break;
		case 4:
			break;
	}
}

void func_186()
{
	if (aggregate_func_5174(67108864))
	{
		aggregate_func_5122(67108864);
	}
}

void func_188()
{
	aggregate_func_6609(30, 1073741824 /* Float: 2f */);
	aggregate_func_6609(31, 1073741824 /* Float: 2f */);
	func_206(0);
}

void func_189(var uParam0, bool bParam1, bool bParam2)
{
	func_410(uParam0);
	aggregate_func_2632(uParam0);
	aggregate_func_2632(uParam0);
	aggregate_func_2632(uParam0);
	aggregate_func_2632(uParam0);
	func_415(uParam0);
	func_416(uParam0, 1);
	if (bParam2)
	{
		func_210(uParam0, 1);
	}
	else
	{
		func_417(uParam0);
	}
	func_418(uParam0);
	func_419(uParam0);
	if (bParam1)
	{
		func_420(uParam0);
	}
}

void func_190(var uParam0)
{
	if (uParam0->f_1)
	{
		func_214(uParam0);
	}
	func_421(&(uParam0->f_36));
	func_422(uParam0);
}

void func_191(var uParam0, var uParam1)
{
	func_213(uParam0, uParam1);
	func_423(uParam0);
	if (uParam0->f_1 != 0 && uParam0->f_1 != 5)
	{
		func_424(uParam0);
	}
}

int func_193(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	if (MINIGAME::_POKER_GET_GAME_SETTINGS_FOR_ID(&(uParam0->f_151.f_11)))
	{
		bVar0 = uParam1->f_11.f_2;
		iVar1 = aggregate_func_4655(bVar0, -915411861, 1, 0, 1, 0);
		func_427(uParam0, iVar1);
		return 1;
	}
	return 0;
}

bool func_194(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar489;
	int iVar490;

	*uParam5 = MINIGAME::_0x3B31732FADE5BAF3();
	if (bParam3)
	{
	}
	iVar0 = (*uParam5 - 1);
	Var2.f_1.f_15 = 11;
	Var2.f_1.f_39 = 6;
	Var2.f_1.f_39.f_1.f_7 = 11;
	Var2.f_1.f_39.f_1.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var2.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var2.f_1.f_376 = 6;
	Var2.f_1.f_376.f_1.f_2 = 6;
	Var2.f_1.f_376.f_1.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var2.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	while (iVar0 >= 0)
	{
		iVar1 = MINIGAME::_0x578907F59BA01B6D(iVar0);
		if (iVar1 != -1857735811)
		{
			if (bParam3)
			{
			}
		}
		else if (!MINIGAME::_0xDF728C5AE137FC14(iVar0, &Var2, 487))
		{
		}
		else
		{
			if (bParam3)
			{
			}
			Stack.Push(&(Var2.f_1));
			Stack.Push(uParam0->f_9);
			Stack.Push(iParam1);
			Stack.Push(&iVar489);
			Stack.Push(&iVar490);
			Call_Loc(uParam0->f_1441);
			if (StackVal)
			{
				if (bParam3)
				{
				}
				if (bParam2)
				{
					func_428(uParam0, iVar489, iVar490);
				}
				*iParam4 = iVar0;
				return true;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	if (bParam3)
	{
	}
	Stack.Push(&(uParam0->f_416));
	Stack.Push(uParam0->f_9);
	Stack.Push(iParam1);
	Stack.Push(&iVar489);
	Stack.Push(&iVar490);
	Call_Loc(uParam0->f_1441);
	if (StackVal)
	{
		if (bParam3)
		{
		}
		if (bParam2)
		{
			func_428(uParam0, iVar489, iVar490);
		}
		*iParam4 = -1;
		return true;
	}
	if (bParam3)
	{
	}
	*iParam4 = -1;
	return false;
}

void func_195(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	struct<16> Var7;

	if (!uParam0->f_151.f_1996)
	{
		func_429(&(uParam0->f_151), uParam1, &uVar0);
		func_430(&(uParam0->f_151), uVar0);
	}
	func_431(uParam0, uParam1, 1, 1, bParam2);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_200(uParam1, iVar1) && aggregate_func_4971(&(uParam0->f_151), iVar1) == 1)
		{
			iVar5 = func_360(&(uParam0->f_151), iVar1);
			iVar6 = func_432(&(uParam0->f_151), iVar1, 1);
			if (PED::IS_PED_INJURED(iVar6))
			{
			}
			else
			{
				if (func_433(uParam1, iVar1))
				{
					iVar3 = 2;
				}
				else
				{
					iVar3 = 1;
				}
				if (iVar1 == uParam0->f_151.f_9)
				{
					iVar2 = func_434(&iVar6, 0);
				}
				else
				{
					iVar2 = func_435(&iVar6);
				}
				if (bParam2 && uParam0->f_151.f_9 == iVar1)
				{
					func_215(&(uParam0->f_2839), iVar1, iVar3, 0);
				}
				else
				{
					bVar4 = false;
					if (!bParam2 && uParam0->f_151.f_9 == iVar1)
					{
						bVar4 = true;
					}
					Var7 = { func_436(&(uParam0->f_151), iVar1, 0, 0) };
					if (!func_437(&(uParam0->f_2839), iVar1, iVar6, iVar3, iVar2, 1, -1, 92, iVar5, 1, 0, 0, 0, bVar4, &Var7))
					{
						PED::DELETE_PED(&iVar6);
						func_438(&(uParam0->f_2335), iVar1);
					}
					if (bVar4)
					{
						func_381(uParam0, &(uParam0->f_151), uParam0->f_151.f_9, 1, 1);
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_151.f_1547 == 2)
	{
		func_439(uParam0, uParam1);
		func_440(uParam0);
	}
	else if (uParam0->f_151.f_1547 == 4)
	{
		func_439(uParam0, uParam1);
		func_441(uParam0, uParam1);
	}
	else if (uParam0->f_151.f_1547 == 9)
	{
		func_439(uParam0, uParam1);
		func_442(uParam0, uParam1);
	}
	else if (uParam0->f_151.f_1547 == 10)
	{
		func_439(uParam0, uParam1);
		func_440(uParam0);
	}
}

void func_196(var uParam0, var uParam1, bool bParam2)
{
	if (uParam0->f_1)
	{
	}
	else if (!CAM::_0xDD0B7C5AE58F721D("table_games_cam"))
	{
	}
	else if (!STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
	{
	}
	else
	{
		uParam0->f_9.f_17 = OBJECT::CREATE_OBJECT(joaat("p_coin01x"), *uParam1 + Vector(0.825f, 0f, 0f), false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_9.f_17))
		{
			return;
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9.f_17, false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_9.f_17, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_9.f_17, true);
		StringCopy(&(uParam0->f_9), "table_games_cam", 64);
		uParam0->f_9.f_16 = -1774795398;
		if (!bParam2)
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_REQUEST", 64);
		}
		else
		{
			StringCopy(&(uParam0->f_9.f_8), "CAMERA_TABLE_GAMES_CUT_REQUEST", 64);
		}
		CAM::_0xB8B207C34285E978(&(uParam0->f_9));
		func_443(&(uParam0->f_36));
		uParam0->f_1 = 1;
		func_444(uParam0, 0, 0, -1, -1, 0);
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && CAM::_0xD1BA66940E94C547())
		{
			GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(func_445(uParam0->f_7), 5f);
			uParam0->f_8 = 1;
		}
	}
}

void func_197(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_805))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_805, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_805);
	}
	uParam0->f_810 = 1;
}

void func_199(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_788)
	{
		NETWORK::_0xC1E1A3D5ED7617B8(&(uParam0->f_767[iVar0]), 1);
		iVar0++;
	}
}

bool func_200(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1)
	{
		return true;
	}
	return false;
}

void func_202(var uParam0, int iParam1)
{
	uParam0->f_1454 = (uParam0->f_1454 + iParam1);
}

int func_203(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1 /*56*/] != -1 && (uParam0->f_39[iVar1 /*56*/])->f_6 != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_204(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (!MISC::IS_BIT_SET((uParam0->f_1475.f_17[iVar1 /*9*/])->f_8, 0))
		{
			MISC::SET_BIT(&((uParam0->f_1475.f_17[iVar1 /*9*/])->f_8), 0);
		}
	}
}

void func_205(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	MISC::SET_BIT(&(((*uParam0)[iVar2 /*9*/])->f_4), 8);
}

void func_206(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 176)
	{
		if (aggregate_func_4369(iVar0) == 30)
		{
			aggregate_func_6124(iVar0, 30, bParam0, 0);
		}
		iVar0++;
	}
}

bool func_207(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1 /*63*/] != 0)
	{
		return true;
	}
	return false;
}

void func_208(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else
	{
		iVar0 = &uParam0->f_818[iParam1 /*63*/];
		iVar1 = aggregate_func_5974(uParam0, iParam1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_449(iVar0);
			if (iVar1 == 2 || iVar1 == 1)
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
				}
				else if (!bParam2)
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
				}
				else
				{
					func_450(iVar0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
					func_451(uParam0, iParam1, 0);
					func_452(uParam0, iParam1, "no_cards_idle_a", 1, 0f, 1040187392 /* Float: 0.125f */, 0, 1);
					PED::_0x2208438012482A1A(iVar0, false, false);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
		}
		func_453(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
}

void func_209(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_207(uParam0, iVar0) && iVar0 != iParam1)
		{
			func_454(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_210(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_455(uParam0, iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_456(uParam0, iVar1);
		iVar1++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0 /*30*/][iVar2]))
				{
					OBJECT::DELETE_OBJECT((*uParam0->f_74[iVar0 /*30*/])[iVar2]);
					AUDIO::_0x341CDD17EFC2472E(iVar0, iVar2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar2])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_74[iVar0 /*30*/])->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iVar0 /*30*/][iVar2]))
				{
					OBJECT::DELETE_OBJECT((*uParam0->f_255[iVar0 /*30*/])[iVar2]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar2])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_255[iVar0 /*30*/])->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iVar0 /*30*/][iVar2]))
				{
					OBJECT::DELETE_OBJECT((*uParam0->f_436[iVar0 /*30*/])[iVar2]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar2])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_436[iVar0 /*30*/])->f_15[iVar2]);
				}
				iVar2++;
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_689))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_689));
	}
}

void func_211(var uParam0, bool bParam1)
{
	aggregate_func_4823(uParam0->f_442.f_20, !bParam1, 1);
	aggregate_func_4823(uParam0->f_442.f_21, !bParam1, 1);
	aggregate_func_4823(uParam0->f_442.f_22, !bParam1, 1);
	aggregate_func_4823(uParam0->f_465.f_18, !bParam1, 1);
	aggregate_func_4823(uParam0->f_465.f_19, !bParam1, 1);
	aggregate_func_4823(uParam0->f_485.f_4, !bParam1, 1);
	aggregate_func_4823(uParam0->f_485.f_5, !bParam1, 1);
	aggregate_func_4823(uParam0->f_485.f_7, !bParam1, 1);
	aggregate_func_4823(uParam0->f_485.f_6, !bParam1, 1);
	aggregate_func_4823(uParam0->f_485.f_8, !bParam1, 1);
	aggregate_func_4823(uParam0->f_494, !bParam1, 1);
	aggregate_func_4823(uParam0->f_495, !bParam1, 1);
	aggregate_func_4823(uParam0->f_496, !bParam1, 1);
	aggregate_func_4823(uParam0->f_497, !bParam1, 1);
	aggregate_func_4823(uParam0->f_498, !bParam1, 1);
	aggregate_func_4823(uParam0->f_499, !bParam1, 1);
	aggregate_func_4823(uParam0->f_500, !bParam1, 1);
}

void func_212(var uParam0, bool bParam1)
{
	aggregate_func_4823(uParam0->f_59, !bParam1, 1);
}

void func_213(var uParam0, var uParam1)
{
	uParam0->f_165 = 0;
	uParam0->f_166 = 0;
	if (uParam0->f_172 != 0)
	{
		if (func_458(uParam0->f_172))
		{
			aggregate_func_2985(1);
		}
	}
	uParam0->f_170 = 0;
	uParam0->f_172 = 0;
	func_459(uParam0, uParam1);
	func_460(uParam0);
	func_461(uParam0);
	func_462(uParam0);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("OJPokerPlayerTurn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("OJPokerPlayerTurn");
	}
}

void func_214(var uParam0)
{
	if (!uParam0->f_1)
	{
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_9)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_9));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9.f_17))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_9.f_17));
		}
		if (uParam0->f_8)
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) && CAM::_0xD1BA66940E94C547())
			{
				GRAPHICS::_0xBB6C707F20D955D4(5f);
			}
			else
			{
				GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
			}
		}
		func_463(&(uParam0->f_36));
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_4 = -1;
		uParam0->f_5 = -1;
		uParam0->f_8 = 0;
	}
}

void func_215(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if (iParam2 != 1 && iParam2 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			if (fParam3 == 0f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uParam0->f_818[iParam1 /*63*/]), 0, 1);
				WEAPON::_0xFCCC886EDE3C63EC(&(uParam0->f_818[iParam1 /*63*/]), 2, 1);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(&(uParam0->f_818[iParam1 /*63*/]), true);
			}
			if (iParam2 == 1)
			{
				func_465(uParam0, iParam1, "NoCardsIdleRequest", fParam3);
			}
			else
			{
				func_465(uParam0, iParam1, "HoldCardsIdleRequest", fParam3);
				func_467(uParam0, iParam1, "hold_cards_idle_a_card1", aggregate_func_7680(uParam0, iParam1, 0), 4, 2, -1082130432 /* Float: -1f */);
				func_467(uParam0, iParam1, "hold_cards_idle_a_card2", aggregate_func_7680(uParam0, iParam1, 1), 4, 2, -1082130432 /* Float: -1f */);
			}
		}
		func_468(uParam0, iParam1, iParam2);
		if (iParam2 == 2)
		{
			func_469(uParam0, iParam1, 1);
		}
		else
		{
			func_469(uParam0, iParam1, 0);
		}
	}
}

void func_216(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (bParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_617[iVar1 /*9*/])->f_5[iVar2])))
				{
				}
			}
			if (func_470(uParam0, *((*uParam0->f_617[iVar1 /*9*/])[iVar2 /*2*/]), &iVar0))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			*((*uParam0->f_617[iVar1 /*9*/])[iVar2 /*2*/]) = { func_327() };
			iVar2++;
		}
		iVar1++;
	}
}

void func_217(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iVar1])))
			{
			}
		}
		if (func_470(uParam0, *(uParam0->f_672[iVar1 /*2*/]), &iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		*(uParam0->f_672[iVar1 /*2*/]) = { func_327() };
		iVar1++;
	}
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = &uParam0->f_1442[iVar1];
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
		uParam0->f_1442[iVar1] = 0;
		iVar1++;
	}
}

void func_220(var uParam0)
{
	int iVar0;

	uParam0->f_1547 = 0;
	uParam0->f_1548 = 0;
	aggregate_func_4313(&(uParam0->f_1549));
	uParam0->f_1552 = 0;
	uParam0->f_1552.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1557[iVar0 /*8*/] = 0;
		(uParam0->f_1557[iVar0 /*8*/])->f_1 = 0;
		iVar0++;
	}
	uParam0->f_1606 = 0;
	uParam0->f_1606.f_1 = 0;
	uParam0->f_1617 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1618[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_1625 = 0;
	uParam0->f_1626 = 0;
	uParam0->f_1627 = 0;
	uParam0->f_1628 = 0;
	uParam0->f_1629 = 0;
	uParam0->f_1630 = 0;
	uParam0->f_1631 = 0;
	uParam0->f_1632 = 0;
	uParam0->f_1633 = 0;
	uParam0->f_1634 = 0;
	uParam0->f_1635 = 0;
	uParam0->f_1636 = 0;
	uParam0->f_1637 = 0;
	aggregate_func_7248(&(uParam0->f_1638));
	aggregate_func_4313(&(uParam0->f_1640));
	aggregate_func_4313(&(uParam0->f_1643));
	aggregate_func_4313(&(uParam0->f_1646));
	aggregate_func_4313(&(uParam0->f_1650));
	uParam0->f_1649 = -1;
	uParam0->f_1660 = 0;
	uParam0->f_1661 = 0;
	uParam0->f_1662 = 0;
	aggregate_func_4313(&(uParam0->f_1663));
	uParam0->f_1666 = 0f;
	uParam0->f_1667 = 0f;
	uParam0->f_1668 = 0;
	uParam0->f_1669 = 0;
	func_473(uParam0);
	func_474(uParam0);
	uParam0->f_1996 = 0;
	uParam0->f_1997 = 0;
	uParam0->f_1998 = -1;
	uParam0->f_1999 = 0;
	uParam0->f_2001 = 0;
	uParam0->f_2002 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2003[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2010[iVar0] = 0;
		iVar0++;
	}
	aggregate_func_4313(&(uParam0->f_2017));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2020[iVar0] = 0;
		aggregate_func_4313(uParam0->f_2027[iVar0 /*3*/]);
		iVar0++;
	}
	uParam0->f_2046 = 0;
	uParam0->f_2047 = 0;
	uParam0->f_2048 = 0;
	uParam0->f_2049 = 0;
	aggregate_func_4242(uParam0, 0);
	uParam0->f_2054 = 0;
	uParam0->f_2055 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2057 = 0;
	uParam0->f_2051 = 0;
	uParam0->f_2052 = 0;
	uParam0->f_2058 = 0;
	uParam0->f_2059 = 0;
	uParam0->f_2060 = 0;
	uParam0->f_2061 = 0;
	uParam0->f_2062 = 0;
	uParam0->f_2063 = -1;
	uParam0->f_2064 = -1;
	uParam0->f_2065 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_2066[iVar0] = -1;
		uParam0->f_2073[iVar0] = 0;
		aggregate_func_4313(uParam0->f_2080[iVar0 /*3*/]);
		iVar0++;
	}
	func_476(uParam0);
	aggregate_func_4313(&(uParam0->f_2166));
	aggregate_func_4313(&(uParam0->f_2169));
	uParam0->f_2172 = -1;
	uParam0->f_2173 = -1;
	aggregate_func_4313(&(uParam0->f_2174));
	aggregate_func_4313(&(uParam0->f_2177));
	uParam0->f_2180 = 0;
	uParam0->f_2181 = -1;
}

void func_222(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = uParam0->f_103;
	if (iVar0 == 6)
	{
		func_477(&iVar1);
	}
	else
	{
		iVar1 = 0;
	}
	if (aggregate_func_2514(uParam0->f_38))
	{
		func_479(2, -1166915294, 0);
	}
	else if (aggregate_func_9348(uParam0->f_38, 700892038))
	{
		func_479(2, -1878199881, 0);
	}
	else if (aggregate_func_8045(uParam0->f_38))
	{
		func_479(2, 579389526, 0);
	}
	else if (aggregate_func_2733(uParam0->f_38, 1485265289, &Var2))
	{
		func_479(2, -1589038658, Var2.f_3);
	}
	else if (aggregate_func_2733(uParam0->f_38, -1038316793, &Var2))
	{
		func_479(2, -1300909614, Var2.f_3);
	}
	else if (func_139(uParam1, 1) && aggregate_func_2733(uParam0->f_38, 430260396, &Var2))
	{
		func_479(2, 1671747787, Var2.f_3);
	}
	else if (func_483(uParam1->f_1))
	{
		func_479(2, 1053423395, 0);
	}
	else if (iVar1 == -971119797)
	{
		func_479(2, 1736016924, 0);
	}
	else if ((iVar1 == -1631908357 || iVar1 == -572687397) || iVar1 == -1433740021)
	{
		func_479(2, -835571454, 0);
	}
	else if (iVar1 == -1749777281)
	{
		func_479(2, 2124908670, 0);
	}
	else if (iVar1 == -238208981)
	{
		func_479(2, 1320901890, 0);
	}
	else if (iVar0 == 1)
	{
		func_479(2, 1736016924, 0);
	}
	else if (iVar0 == 2)
	{
		func_479(2, -835571454, 0);
	}
	else if (iVar0 == 3)
	{
		func_479(2, -301240451, 0);
	}
	else if (iVar0 == 4)
	{
		func_479(2, -1249239171, 0);
	}
	else if (iVar0 == 5)
	{
		func_479(2, 1406403638, 0);
	}
	else if (iVar0 == 8)
	{
		func_479(2, 1320901890, 0);
	}
	else if (iVar0 == 9)
	{
		func_479(2, -1695230319, 0);
	}
	else if (iVar0 == 10)
	{
		func_479(2, -592991683, 0);
	}
	else if (iVar0 == 7 || iVar1 == 1260659963)
	{
		func_479(2, -1385120212, 0);
	}
	else
	{
		func_479(2, 0, 0);
	}
}

void func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	iVar0 = aggregate_func_4271(uParam0->f_2.f_4);
	iVar1 = func_485();
	bVar2 = (func_139(&(uParam0->f_151), 1) && aggregate_func_7654(1024));
	iVar3 = func_486(&(uParam0->f_2));
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	uVar7 = uParam0->f_151.f_52;
	if (func_200(&(uParam0->f_151.f_416), uParam0->f_151.f_9))
	{
		iVar4 = aggregate_func_5974(&(uParam0->f_151.f_416), uParam0->f_151.f_9);
		iVar5 = (iVar4 - uParam0->f_151.f_1454);
		iVar6 = uParam0->f_151.f_1453;
	}
	TELEMETRY::_0x8127C5AA05C5A210(&(uParam0->f_151.f_1), iVar0, iVar1, bVar2, iVar3, 0, iVar5, iVar4, iVar6, uVar7);
}

void func_233(var uParam0)
{
	if (uParam0->f_56)
	{
	}
	else
	{
		Call_Loc(uParam0->f_150);
		uParam0->f_56 = 1;
	}
}

void func_234(var uParam0)
{
	struct<2> Var0;
	bool bVar2;

	if (!uParam0->f_49)
	{
		uParam0->f_49 = 1;
		if (uParam0->f_48)
		{
			func_487(uParam0);
		}
		aggregate_func_2853(1, -1706799532);
		Var0 = { aggregate_func_4259(0) };
		if (aggregate_func_4255(Var0))
		{
			if (aggregate_func_4263(Var0) == 5)
			{
				MISC::_0x1096603B519C905F("");
			}
		}
		aggregate_func_4643(0);
		func_490(uParam0->f_39);
		func_124(uParam0);
		bVar2 = false;
		if (!bVar2)
		{
			if (func_491())
			{
				aggregate_func_2037(uParam0->f_2.f_4, 0, 0, 0);
			}
			else
			{
				aggregate_func_2037(uParam0->f_2.f_4, 0, -1, 0);
			}
			aggregate_func_4904(uParam0->f_2.f_4, 1);
		}
		if (!NETWORK::NETWORK_SESSION_IS_PRIVATE())
		{
			NETWORK::_0xBB51299166B844F3();
		}
	}
}

int func_235()
{
	return Global_1902701->f_42.f_1;
}

int func_236()
{
	return Global_1902701->f_42.f_2;
}

int func_237()
{
	return Global_1902701->f_42;
}

void func_238()
{
	func_494();
	func_495();
	func_496(-1);
	func_497(-1);
}

char* func_246(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return aggregate_func_4363(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return aggregate_func_4363(bParam1, "OOJDO", "MGDOM");
		case 2:
			return aggregate_func_4363(bParam1, "OOJPO", "MGPKR");
		case 3:
			return aggregate_func_4363(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

int func_250()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_506(iVar0))
		{
			return aggregate_func_7217(aggregate_func_4314(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 2:
			return 54;
		case 1:
			return 56;
		case 3:
			return 36;
		case 4:
			return 105;
		case 7:
			return 110;
		case 6:
			return 91;
		case 5:
			return 79;
		case 8:
			return 94;
		default:
			break;
	}
	return -1;
}

void func_252(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate_func_6111(iParam0))
		{
			aggregate_func_4466(iParam0, 67108864);
		}
	}
	else if (aggregate_func_6111(iParam0))
	{
		aggregate_func_4456(iParam0, 67108864);
	}
}

char* func_253(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Minigame_Poker_Scene";
		default:
			break;
	}
	return "Minigame_Global_Scene";
}

bool func_258(int iParam0, int iParam1)
{
	return (Global_1902701->f_3[iParam0] && iParam1) != 0;
}

void func_262(var uParam0)
{
	func_269(uParam0);
	switch (uParam0->f_58)
	{
		case 0:
			break;
		case 1:
			Stack.Push(aggregate_func_1549(uParam0->f_59, 1));
			Call_Loc(uParam0->f_135);
			if (StackVal || (StackVal && PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_QUIT"))))
			{
				func_517(uParam0, 2, 0);
			}
			break;
		case 2:
			if (!aggregate_func_1549(uParam0->f_59, 1))
			{
				func_517(uParam0, 1, 0);
			}
			else if (aggregate_func_455(uParam0->f_59, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
				func_517(uParam0, 4, 1);
			}
			break;
		case 3:
			if (aggregate_func_1549(uParam0->f_59, 1) && aggregate_func_455(uParam0->f_59, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
				func_517(uParam0, 4, 1);
			}
			break;
		case 4:
			break;
	}
}

void func_264(var uParam0)
{
	int iVar0;

	if (aggregate_func_4625())
	{
		aggregate_func_4580();
	}
	if (MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(uParam0->f_40))
	{
		Call_Loc(uParam0->f_128);
		Stack.Push(!StackVal);
		Stack.Push(1959158395);
		Call_Loc(uParam0->f_123);
		if (StackVal && !StackVal)
		{
			aggregate_func_7687(uParam0);
		}
	}
	if (!uParam0->f_56)
	{
		func_233(uParam0);
	}
	iVar0 = func_485();
	switch (iVar0)
	{
		case -1878199881:
		case -1720361368:
		case -1700673948:
		case -1695230319:
		case -1589038658:
		case -1517426354:
		case -1300909614:
		case -1166915294:
		case -835571454:
		case -592991683:
		case -301240451:
		case 579389526:
		case 1053423395:
		case 1320901890:
		case 1671747787:
		case 1736016924:
		case 2124908670:
			func_520(uParam0, iVar0);
			aggregate_func_7637(uParam0, 21);
			break;
		case -1385120212:
			aggregate_func_7637(uParam0, 22);
			break;
		case -1249239171:
		case 0:
		case 1406403638:
		default:
			aggregate_func_7637(uParam0, 23);
			break;
	}
}

void func_269(var uParam0)
{
	if (uParam0->f_60 && !func_258(uParam0->f_39, 2))
	{
		if (uParam0->f_61 != 0)
		{
			if ((uParam0->f_58 != 3 && uParam0->f_58 != 2) && uParam0->f_58 != 4)
			{
				func_517(uParam0, 3, 1);
			}
		}
		else if ((uParam0->f_58 != 1 && uParam0->f_58 != 2) && uParam0->f_58 != 4)
		{
			func_517(uParam0, 1, 1);
		}
	}
	else if (uParam0->f_58 != 0)
	{
		func_517(uParam0, 0, 1);
	}
}

void func_271(var uParam0)
{
	struct<19> Var0;

	uParam0->f_84 = { Var0 };
	switch (uParam0->f_82)
	{
		case 0:
			uParam0->f_84.f_3 = MISC::GET_HASH_KEY("MG_YES");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_7 = MISC::GET_HASH_KEY("MG_NO");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = aggregate_func_3122(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY", 0, 0, 1);
			break;
		case 2:
			uParam0->f_84.f_3 = MISC::GET_HASH_KEY("MG_YES");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_7 = MISC::GET_HASH_KEY("MG_NO");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = aggregate_func_3122(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY_POSSE_MEMBER", 0, 0, 1);
			break;
		case 1:
			uParam0->f_84.f_3 = MISC::GET_HASH_KEY("EXIT_WITH_POSSE");
			uParam0->f_84.f_3.f_3 = 0;
			uParam0->f_84.f_11 = MISC::GET_HASH_KEY("EXIT_ALONE");
			uParam0->f_84.f_11.f_3 = 0;
			uParam0->f_84.f_7 = MISC::GET_HASH_KEY("MG_CFG_CANCEL");
			uParam0->f_84.f_7.f_3 = 0;
			uParam0->f_83 = aggregate_func_3122(&(uParam0->f_84), "MG_ALERT", "VERIFY_EXIT_LOBBY_POSSE_LEADER", 0, 0, 1);
			break;
		default:
			break;
	}
}

void func_276(var uParam0)
{
	int iVar0;

	uParam0->f_692 = 0;
	func_325(&(uParam0->f_693), uParam0->f_692);
	func_326(&(uParam0->f_695), uParam0->f_692);
	func_328(&(uParam0->f_694), func_327(), uParam0->f_692, 0);
	uParam0->f_696 = 1.5f;
	uParam0->f_697 = 2f;
	uParam0->f_698 = 0.3f;
	uParam0->f_699 = 0.8f;
	uParam0->f_700 = 0.2f;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_525(uParam0, iVar0);
		iVar0++;
	}
	func_526(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_527(uParam0, iVar0);
		aggregate_func_9382(uParam0, iVar0);
		aggregate_func_9382(uParam0, iVar0);
		aggregate_func_9382(uParam0, iVar0);
		iVar0++;
	}
	func_531(uParam0);
}

void func_277(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_532(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_794 = 0;
	uParam0->f_795 = -1;
	uParam0->f_797 = -1;
	*(uParam0->f_1198[0 /*3*/]) = { 0.008654f, 1.171513f, 0.4999996f };
	*(uParam0->f_1217[0 /*3*/]) = { 0f, 0f, 180f };
	*(uParam0->f_1198[1 /*3*/]) = { 1.018887f, 0.5782621f, 0.4999996f };
	*(uParam0->f_1217[1 /*3*/]) = { 0f, 0f, 120f };
	*(uParam0->f_1198[2 /*3*/]) = { 1.010233f, -0.5932513f, 0.4999996f };
	*(uParam0->f_1217[2 /*3*/]) = { 0f, 0f, 60f };
	*(uParam0->f_1198[3 /*3*/]) = { -0.008654f, -1.171513f, 0.4999996f };
	*(uParam0->f_1217[3 /*3*/]) = { 0f, 0f, 0f };
	*(uParam0->f_1198[4 /*3*/]) = { -1.018887f, -0.5782621f, 0.4999996f };
	*(uParam0->f_1217[4 /*3*/]) = { 0f, 0f, -60f };
	*(uParam0->f_1198[5 /*3*/]) = { -1.010233f, 0.5932513f, 0.4999996f };
	*(uParam0->f_1217[5 /*3*/]) = { 0f, 0f, -120f };
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_533(*uParam0, uParam0->f_3, *(uParam0->f_1198[iVar0 /*3*/]), *(uParam0->f_1217[iVar0 /*3*/]), uParam0->f_1236[iVar0 /*3*/], uParam0->f_1255[iVar0 /*3*/]);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		uParam0->f_1330[iVar1] = 98950;
		uParam0->f_1366[iVar1] = 98958;
		iVar1++;
	}
	StringCopy(uParam0->f_1274[0 /*8*/], "mini_games@poker_mg@base", 64);
	StringCopy(uParam0->f_1274[1 /*8*/], "mini_games@poker_mg@base_camp", 64);
	StringCopy(uParam0->f_1274[2 /*8*/], "mini_games@poker_mg@relaxed", 64);
	StringCopy(uParam0->f_1274[4 /*8*/], "mini_games@poker_mg@fem_base_camp", 64);
	StringCopy(uParam0->f_1274[3 /*8*/], "mini_games@poker_mg@fem_focused", 64);
	StringCopy(uParam0->f_1274[5 /*8*/], "mini_games@poker_mg@fem_relaxed", 64);
	uParam0->f_1323[0] = -1196886585;
	uParam0->f_1323[1] = 1937500030;
	uParam0->f_1323[2] = -521410981;
	uParam0->f_1323[4] = -1999305469;
	uParam0->f_1323[3] = -762617465;
	uParam0->f_1323[5] = 866151846;
	uParam0->f_1330[0] = 98950;
	uParam0->f_1330[1] = 98966;
	uParam0->f_1330[2] = 98974;
	uParam0->f_1330[3] = 99049;
	uParam0->f_1366[3] = 99239;
	uParam0->f_1330[4] = 99255;
	uParam0->f_1366[4] = 100752;
	uParam0->f_1330[5] = 100768;
	uParam0->f_1366[5] = 100911;
	uParam0->f_1330[6] = 100942;
	uParam0->f_1366[6] = 101235;
	uParam0->f_1330[7] = 101261;
	uParam0->f_1366[7] = 102476;
	uParam0->f_1330[8] = 102490;
	uParam0->f_1366[8] = 105718;
	uParam0->f_1330[9] = 105732;
	uParam0->f_1330[10] = 105951;
	uParam0->f_1330[11] = 106413;
	uParam0->f_1330[12] = 106676;
	uParam0->f_1330[13] = 107390;
	uParam0->f_1366[13] = 108410;
	uParam0->f_1330[14] = 108447;
	uParam0->f_1330[15] = 108867;
	uParam0->f_1330[16] = 109254;
	uParam0->f_1366[16] = 110063;
	uParam0->f_1330[17] = 110079;
	uParam0->f_1366[17] = 111086;
	uParam0->f_1330[18] = 111102;
	uParam0->f_1366[18] = 111603;
	uParam0->f_1330[19] = 111628;
	uParam0->f_1366[19] = 112414;
	uParam0->f_1330[20] = 112554;
	uParam0->f_1330[21] = 113643;
	uParam0->f_1330[22] = 114110;
	uParam0->f_1330[23] = 114465;
	uParam0->f_1366[23] = 114868;
	uParam0->f_1330[24] = 114884;
	uParam0->f_1366[24] = 115111;
	uParam0->f_1330[25] = 115127;
	uParam0->f_1366[25] = 115323;
	uParam0->f_1330[26] = 115339;
	uParam0->f_1366[26] = 116272;
	uParam0->f_1330[27] = 116288;
	uParam0->f_1366[27] = 116748;
	uParam0->f_1330[28] = 116764;
	uParam0->f_1330[29] = 116842;
	uParam0->f_1330[30] = 117405;
	uParam0->f_1330[31] = 118069;
	uParam0->f_1330[32] = 118756;
	uParam0->f_1330[33] = 119196;
}

void func_279(var uParam0)
{
	uParam0->f_805 = -1;
	uParam0->f_810 = 0;
}

void func_284(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_811[iVar0] = -1;
		iVar0++;
	}
}

void func_285(var uParam0, vector3 vParam1, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_126 != 0)
	{
		return;
	}
	iVar0 = 2;
	if ((iVar0 + 31 / 32) < 1)
	{
		return;
	}
	iVar1 = 2;
	if ((iVar1 + 31 / 32) < 1)
	{
		return;
	}
	uParam0->f_126 = 0;
	uParam0->f_127 = -1;
	MISC::SET_BIT(&(uParam0->f_126), 0);
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0f;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_122[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_124[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_175 = 119783;
	uParam0->f_176 = 119783;
	uParam0->f_135 = 0;
	uParam0->f_131 = { vParam1 };
	uParam0->f_134 = uParam4;
}

int func_286(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return 0;
	}
	*((*uParam0)[iParam1 /*12*/]) = { vParam2 };
	((*uParam0)[iParam1 /*12*/])->f_3 = { vParam5 };
	((*uParam0)[iParam1 /*12*/])->f_6 = fParam8;
	((*uParam0)[iParam1 /*12*/])->f_7 = fParam9;
	MISC::SET_BIT(uParam0->f_122[(iParam1 / 32)], (iParam1 % 32));
	return 1;
}

int func_287(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13)
{
	if (uParam0->f_126 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	*(uParam0->f_25[iParam1 /*12*/]) = { vParam2 };
	(uParam0->f_25[iParam1 /*12*/])->f_3 = { vParam5 };
	(uParam0->f_25[iParam1 /*12*/])->f_6 = fParam8;
	(uParam0->f_25[iParam1 /*12*/])->f_7 = iParam9;
	(uParam0->f_25[iParam1 /*12*/])->f_8 = iParam10;
	(uParam0->f_25[iParam1 /*12*/])->f_9 = iParam11;
	(uParam0->f_25[iParam1 /*12*/])->f_10 = fParam12;
	(uParam0->f_25[iParam1 /*12*/])->f_11 = fParam13;
	MISC::SET_BIT(uParam0->f_124[(iParam1 / 32)], (iParam1 % 32));
	return 1;
}

void func_288(var uParam0)
{
	int iVar0;

	uParam0->f_294 = 0;
	uParam0->f_293 = 0;
	uParam0->f_291 = 0;
	uParam0->f_439 = -1;
	uParam0->f_440 = -1;
	uParam0->f_441 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_586(uParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_587(uParam0, iVar0);
		iVar0++;
	}
	aggregate_func_4285(uParam0);
}

void func_289(var uParam0)
{
	uParam0->f_442 = 0;
	uParam0->f_442.f_1 = 0;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_4 = 0;
	uParam0->f_442.f_3 = 0;
	uParam0->f_442.f_20 = 0;
	uParam0->f_442.f_21 = 0;
	uParam0->f_442.f_22 = 0;
	func_589(&(uParam0->f_442.f_5));
	uParam0->f_465 = 0;
	uParam0->f_465.f_1 = 0;
	uParam0->f_465.f_2 = 0;
	uParam0->f_465.f_18 = 0;
	uParam0->f_465.f_19 = 0;
	func_589(&(uParam0->f_465.f_3));
	uParam0->f_494 = 0;
	uParam0->f_495 = 0;
	uParam0->f_496 = 0;
	uParam0->f_497 = 0;
	uParam0->f_498 = 0;
	uParam0->f_499 = 0;
	uParam0->f_500 = 0;
	aggregate_func_4313(&(uParam0->f_501));
}

void func_290(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_173[iVar0] = 0;
		uParam0->f_180[iVar0] = 255;
		uParam0->f_187[iVar0] = 0;
		StringCopy(uParam0->f_194[iVar0 /*16*/], "", 128);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		aggregate_func_1627(iVar1, 2);
		iVar1++;
	}
}

void func_291(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = -1;
	uParam0->f_10 = 0;
	func_591(&(uParam0->f_11));
	uParam0->f_51 = 1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	func_592(uParam0);
	func_593(&(uParam0->f_416));
	func_593(&(uParam0->f_902));
	uParam0->f_1388 = 0;
	uParam0->f_1388.f_1 = 0;
	uParam0->f_1388.f_2 = -1;
	uParam0->f_1388.f_3 = 0;
	uParam0->f_1392 = 0;
	uParam0->f_1392.f_1 = 0;
	uParam0->f_1392.f_2 = -1;
	uParam0->f_1392.f_3 = 0;
	uParam0->f_1396 = -1;
	uParam0->f_1397 = 0;
	uParam0->f_1398 = 0;
	uParam0->f_1399 = 0;
	uParam0->f_1400 = 0;
	uParam0->f_1401 = 0;
	uParam0->f_1402 = 0;
	uParam0->f_1403 = 0;
	uParam0->f_1404 = 0;
	func_594(uParam0);
	uParam0->f_1450 = 0;
	uParam0->f_1451 = 0;
	uParam0->f_1452 = 0;
	uParam0->f_1453 = 0;
	uParam0->f_1454 = 0;
	uParam0->f_1455 = 2f;
	uParam0->f_1456 = 1f;
	uParam0->f_1457 = 20f;
	uParam0->f_1458 = 0.5f;
	uParam0->f_1459 = 2f;
	uParam0->f_1460 = 2f;
	uParam0->f_1461 = 1;
	uParam0->f_1462 = 200f;
	uParam0->f_1463 = 200f;
	uParam0->f_1464 = 0.45f;
	uParam0->f_1465 = 0.8f;
	uParam0->f_1466 = 25f;
	uParam0->f_1467 = 25f;
	uParam0->f_1468 = 0f;
	uParam0->f_1469 = 0.5f;
	uParam0->f_1470 = 0.75f;
	uParam0->f_1471 = 0.5f;
	uParam0->f_1473 = 0;
	uParam0->f_1475.f_6 = 0;
	uParam0->f_1475.f_7 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1475[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		uParam0->f_1475.f_8[iVar1] = -1;
		iVar1++;
	}
	uParam0->f_1475.f_15 = 0;
	uParam0->f_1475.f_16 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_4 = 0;
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_8 = 0;
		uParam0->f_1475.f_17[iVar2 /*9*/] = -1;
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_2 = -1;
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_5 = -1;
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_6 = -1;
		(uParam0->f_1475.f_17[iVar2 /*9*/])->f_7 = 0;
		iVar2++;
	}
}

int func_292(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam0->f_151.f_9;
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			if ((!func_207(&(uParam0->f_2839), iVar0) || !func_595(&(uParam0->f_2839), iVar0, 4)) || func_596(&(uParam0->f_2839), iVar0, 0))
			{
				func_196(&(uParam0->f_4242), &(uParam0->f_2839), 0);
				aggregate_func_7637(&(uParam0->f_151), 15);
				return 1;
			}
			break;
		case 15:
			if (!func_207(&(uParam0->f_2839), iVar0) || !func_595(&(uParam0->f_2839), iVar0, 4))
			{
				aggregate_func_7637(&(uParam0->f_151), 102);
				return 1;
			}
			break;
		case 102:
			if (!func_598(uParam0))
			{
				func_428(&(uParam0->f_151), 2, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			func_599(uParam0, uParam1);
			aggregate_func_7637(&(uParam0->f_151), 5);
			return 1;
		case 5:
			if (func_378(&(uParam0->f_151), -26793149, 1))
			{
				func_600(&(uParam0->f_151), -26793149, 1);
			}
			if (func_378(&(uParam0->f_151), -1773144867, 1))
			{
				func_600(&(uParam0->f_151), -1773144867, 1);
			}
			if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				func_428(&(uParam0->f_151), 3, 0);
				return 1;
			}
			else if (!func_378(&(uParam0->f_151), -26793149, 1) && !func_378(&(uParam0->f_151), -1773144867, 1))
			{
				if (func_601(uParam0, 1))
				{
					return 0;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_295(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	bVar3 = true;
	if (uParam0->f_151.f_1548 != 0)
	{
		switch (uParam0->f_151.f_1629)
		{
			case 0:
				if (((((uParam0->f_151.f_1997 != uParam1->f_4 && uParam0->f_151.f_1997 != uParam1->f_5) || (uParam0->f_151.f_1997 == uParam1->f_4 && uParam0->f_151.f_1548 > 18)) || (uParam0->f_151.f_1997 == uParam1->f_5 && uParam0->f_151.f_1548 > 20)) && !MISC::IS_BIT_SET(uParam0->f_151.f_2000, uParam0->f_151.f_1997)) && uParam0->f_151.f_1997 == uParam1->f_3)
				{
					if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
					{
						if ((func_603(&(uParam0->f_2839), uParam0->f_151.f_1997, 0, 0) || func_603(&(uParam0->f_2839), uParam0->f_151.f_1997, 1, 0)) && uParam0->f_151.f_9 == (uParam0->f_151.f_1997 + 1 % 6))
						{
							iVar4 = func_604(&(uParam0->f_2839), uParam0->f_151.f_1997, 2);
						}
						else
						{
							iVar4 = 6;
						}
						func_606(&(uParam0->f_2839), uParam0->f_151.f_1997, uParam0->f_151.f_9, aggregate_func_4133(uParam1), 0, iVar4);
						aggregate_func_4242(&(uParam0->f_151), 1);
					}
				}
				break;
			case 1:
				if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 7))
				{
					aggregate_func_4242(&(uParam0->f_151), 2);
				}
				else if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, 6))
				{
					func_609(uParam0, uParam0->f_151.f_1997, 2, 3, -1);
					func_610(&(uParam0->f_2839), uParam0->f_151.f_1997, 6);
				}
				break;
			case 2:
				break;
			default:
				break;
		}
	}
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				uParam0->f_151.f_2000 = 0;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (((func_200(&(uParam0->f_151.f_902), iVar0) && aggregate_func_5974(&(uParam0->f_151.f_902), iVar0) > 0) && uParam0->f_151.f_902.f_4 != iVar0) && uParam0->f_151.f_902.f_5 != iVar0)
					{
						MISC::SET_BIT(&(uParam0->f_151.f_2000), iVar0);
					}
					iVar0++;
				}
				iVar1 = aggregate_func_4133(&(uParam0->f_151.f_902));
				bVar2 = (!uParam0->f_151.f_1996 && uParam0->f_151.f_1997 != uParam0->f_151.f_902.f_3);
				if (((((func_612(&(uParam0->f_151), uParam0->f_151.f_1997, 1) && (func_612(&(uParam0->f_151), uParam0->f_151.f_902.f_3, 1) || !bVar2)) && func_612(&(uParam0->f_151), uParam0->f_151.f_902.f_4, 1)) && func_612(&(uParam0->f_151), uParam0->f_151.f_902.f_5, 1)) && func_613(&(uParam0->f_151), uParam0->f_151.f_2000, 1)) && func_613(&(uParam0->f_151), iVar1, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2000, 1);
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 0);
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_902.f_4, 0);
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_902.f_5, 0);
					if (bVar2)
					{
						aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_902.f_3, 0);
					}
					func_616(uParam0);
					func_600(&(uParam0->f_151), -1442142035, 1);
					aggregate_func_4242(&(uParam0->f_151), 0);
					if ((func_200(uParam1, uParam0->f_151.f_9) && !func_617(uParam1, uParam0->f_151.f_9)) && func_618(uParam0, uParam0->f_151.f_9) == 0)
					{
						func_619(&(uParam0->f_2335), "MGPKR_MSG_SITTING_OUT", 0);
					}
					func_620(uParam0, uParam1);
					func_621(&(uParam0->f_151), uParam1);
					func_204(&(uParam0->f_151));
					if (uParam0->f_151.f_1670.f_126 == 1)
					{
						if (!aggregate_func_2967(&(uParam0->f_151), 4))
						{
							func_622(uParam0, &(uParam0->f_151), 1, 1, 1);
						}
					}
					func_623(uParam0, uParam1);
					aggregate_func_4444(&(uParam0->f_2839));
					if (!func_625(&(uParam0->f_2839)) || aggregate_func_4267(&(uParam0->f_2839)) != uParam0->f_151.f_1997)
					{
						func_627(&(uParam0->f_2839), uParam0->f_151.f_1997, 0);
					}
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (func_617(uParam1, iVar0))
						{
							if (func_629(func_628(uParam1, iVar0, 0)) && func_629(func_628(uParam1, iVar0, 1)))
							{
								func_630(&(uParam0->f_2839), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 1);
							}
						}
						iVar0++;
					}
					if (bVar2)
					{
						aggregate_func_7637(&(uParam0->f_151), 87);
						return 1;
					}
					else
					{
						aggregate_func_7637(&(uParam0->f_151), 17);
						return 1;
					}
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 87:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
			{
				func_631(&(uParam0->f_2839), uParam0->f_151.f_1997, uParam1->f_3);
				aggregate_func_7637(&(uParam0->f_151), 88);
			}
			break;
		case 88:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 21))
			{
				aggregate_func_7637(&(uParam0->f_151), 89);
				return 1;
			}
			break;
		case 89:
			if (func_207(&(uParam0->f_2839), uParam1->f_3) && func_602(&(uParam0->f_2839), uParam1->f_3, 1))
			{
				func_632(&(uParam0->f_2839), uParam1->f_3);
				aggregate_func_7637(&(uParam0->f_151), 90);
			}
			break;
		case 90:
			if (!func_207(&(uParam0->f_2839), uParam1->f_3) || !func_608(&(uParam0->f_2839), uParam1->f_3, 22))
			{
				if (((!MISC::IS_BIT_SET(uParam0->f_151.f_2000, uParam0->f_151.f_1997) && uParam0->f_151.f_1997 != uParam1->f_3) && uParam0->f_151.f_1997 != uParam1->f_4) && uParam0->f_151.f_1997 != uParam1->f_5)
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
				}
				func_430(&(uParam0->f_151), uParam1->f_3);
				aggregate_func_7637(&(uParam0->f_151), 17);
				return 1;
			}
			break;
		case 17:
			if (func_207(&(uParam0->f_2839), uParam1->f_4) && func_602(&(uParam0->f_2839), uParam1->f_4, 1))
			{
				func_634(&(uParam0->f_2839), uParam1->f_4, uParam1->f_9, 1);
				func_635(uParam0, uParam1->f_4);
				aggregate_func_7637(&(uParam0->f_151), 18);
			}
			break;
		case 18:
			if (!func_207(&(uParam0->f_2839), uParam1->f_4) || !func_608(&(uParam0->f_2839), uParam1->f_4, 13))
			{
				func_636(uParam0, uParam1->f_4);
				if (uParam1->f_4 != uParam0->f_151.f_1997)
				{
					aggregate_func_9383(&(uParam0->f_151), uParam1->f_4, 0);
				}
				aggregate_func_7637(&(uParam0->f_151), 19);
				return 1;
			}
			break;
		case 19:
			if (func_207(&(uParam0->f_2839), uParam1->f_5) && func_602(&(uParam0->f_2839), uParam1->f_5, 1))
			{
				func_634(&(uParam0->f_2839), uParam1->f_5, uParam1->f_10, 1);
				func_635(uParam0, uParam1->f_5);
				aggregate_func_7637(&(uParam0->f_151), 20);
			}
			break;
		case 20:
			if (!func_207(&(uParam0->f_2839), uParam1->f_5) || !func_608(&(uParam0->f_2839), uParam1->f_5, 13))
			{
				func_636(uParam0, uParam1->f_5);
				if (uParam1->f_5 != uParam0->f_151.f_1997)
				{
					aggregate_func_9383(&(uParam0->f_151), uParam1->f_5, 0);
				}
				aggregate_func_7637(&(uParam0->f_151), 21);
				return 1;
			}
			break;
		case 21:
			uParam0->f_151.f_2046 = func_637(uParam1->f_3, uParam0->f_151.f_2000);
			if (func_200(uParam1, uParam0->f_151.f_2046))
			{
				if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
				{
					func_634(&(uParam0->f_2839), uParam0->f_151.f_2046, aggregate_func_5974(uParam1, uParam0->f_151.f_2046), 1);
					func_635(uParam0, uParam0->f_151.f_2046);
					aggregate_func_7637(&(uParam0->f_151), 22);
					return 1;
				}
			}
			else
			{
				aggregate_func_7637(&(uParam0->f_151), 25);
				return 1;
			}
			break;
		case 22:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 13))
			{
				func_636(uParam0, uParam0->f_151.f_2046);
				MISC::CLEAR_BIT(&(uParam0->f_151.f_2000), uParam0->f_151.f_2046);
				if (uParam0->f_151.f_2046 != uParam0->f_151.f_1997)
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2046, 0);
				}
				aggregate_func_7637(&(uParam0->f_151), 21);
				return 1;
			}
			break;
		case 25:
			if (uParam0->f_151.f_1629 != 0)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 != uParam0->f_151.f_1997 && func_433(uParam1, iVar0))
					{
						if (aggregate_func_5974(&(uParam0->f_2839), iVar0) != 2)
						{
							bVar3 = false;
							if ((!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 7)) || func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, (0 + iVar0)))
							{
								if (func_602(&(uParam0->f_2839), iVar0, 1))
								{
									if ((func_603(&(uParam0->f_2839), iVar0, 0, 1) || func_603(&(uParam0->f_2839), iVar0, 1, 1)) && uParam0->f_151.f_9 == (iVar0 + 1 % 6))
									{
										iVar4 = func_604(&(uParam0->f_2839), iVar0, 2);
										func_638(&(uParam0->f_2839), iVar0, iVar4);
									}
									else
									{
										func_639(&(uParam0->f_2839), iVar0, 0);
										if (aggregate_func_2967(&(uParam0->f_151), 1))
										{
											if (iVar0 == uParam0->f_151.f_9)
											{
												if (aggregate_func_9384(uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11)))
												{
													func_641(&(uParam0->f_2335), uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11), 0);
												}
											}
										}
										func_642(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, iVar0);
									}
								}
							}
						}
					}
					iVar0++;
				}
				if (bVar3)
				{
					if (uParam0->f_151.f_1629 == 2)
					{
						if (aggregate_func_2967(&(uParam0->f_151), 1) && func_200(uParam1, uParam0->f_151.f_9))
						{
							if (aggregate_func_9384(uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11)))
							{
								func_641(&(uParam0->f_2335), uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11), 0);
							}
						}
						aggregate_func_4480(&(uParam0->f_151));
						aggregate_func_7637(&(uParam0->f_151), 28);
						return 1;
					}
				}
			}
			break;
		case 28:
			func_644(&(uParam0->f_151));
			func_428(&(uParam0->f_151), 4, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_296(var uParam0, var uParam1)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	switch (uParam0->f_151.f_1548)
	{
		case 0:
			uParam0->f_151.f_1661 = 0;
			func_645(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 7);
			return 1;
		case 2:
			uParam0->f_151.f_1661 = 0;
			func_645(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 29);
			return 1;
		case 4:
			if (func_646(uParam0, &(uParam0->f_151)))
			{
				func_647(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 29);
				return 1;
			}
			break;
		case 7:
			if (func_378(&(uParam0->f_151), -441318505, 1))
			{
				func_600(&(uParam0->f_151), -441318505, 1);
				aggregate_func_7637(&(uParam0->f_151), 29);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), 981015204, 1))
			{
				aggregate_func_7637(&(uParam0->f_151), 41);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 29:
			if (func_648(uParam0, 0) && func_649(&(uParam0->f_151), uParam1->f_6))
			{
				if (func_650(uParam0))
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 4);
					return 1;
				}
			}
			func_652(uParam0, uParam1);
			if (func_649(&(uParam0->f_151), uParam1->f_6))
			{
				func_653(uParam0, uParam1);
			}
			func_654(&(uParam0->f_151));
			uParam0->f_151.f_1633 = 0;
			uParam0->f_151.f_1662 = 0;
			aggregate_func_4283(&(uParam0->f_151.f_1643));
			aggregate_func_4284(&(uParam0->f_151.f_1646), -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f));
			uParam0->f_151.f_1649 = -1;
			if (uParam0->f_151.f_9 == uParam1->f_6)
			{
				uParam0->f_151.f_1661++;
			}
			aggregate_func_7637(&(uParam0->f_151), 30);
			return 1;
		case 30:
			if (!uParam0->f_151.f_1633)
			{
				if (uParam0->f_151.f_1632)
				{
					func_655(uParam0, &(uParam0->f_151), uParam1, &Var0);
				}
				if (Var0 != 0)
				{
					switch (Var0)
					{
						case 4:
							bVar2 = func_656(&(uParam0->f_151), uParam1->f_6);
							break;
						case 3:
							bVar2 = func_657(&(uParam0->f_151), uParam1->f_6);
							break;
						case 2:
							bVar2 = func_658(&(uParam0->f_151), uParam1->f_6, Var0.f_1);
							break;
						case 5:
							bVar2 = func_659(&(uParam0->f_151), uParam1->f_6);
							break;
					}
					if (bVar2)
					{
						func_660(uParam0, uParam1);
						uParam0->f_151.f_1633 = 1;
					}
				}
			}
			func_661(uParam0, &(uParam0->f_151));
			if (aggregate_func_4298(&(uParam0->f_151.f_1646)) > 0f)
			{
				iVar5 = func_609(uParam0, uParam1->f_6, 1, 1, uParam0->f_151.f_1649);
				if (iVar5 != -1)
				{
					uParam0->f_151.f_1649 = iVar5;
					aggregate_func_4284(&(uParam0->f_151.f_1646), -MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 4.75f));
				}
				else if (aggregate_func_4298(&(uParam0->f_151.f_1646)) > 2.5f)
				{
					iVar5 = func_609(uParam0, uParam1->f_6, 1, 1, -1);
					if (iVar5 != -1)
					{
						uParam0->f_151.f_1649 = iVar5;
						aggregate_func_4284(&(uParam0->f_151.f_1646), -MISC::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 4.75f));
					}
				}
			}
			if (uParam0->f_151.f_1633 && func_662(&(uParam0->f_151), 2))
			{
				func_660(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 31);
				return 1;
			}
			else if (func_177(&(uParam0->f_151), -1267385353, 1))
			{
				func_660(uParam0, uParam1);
				func_180(&(uParam0->f_151), 1, 0, 0, 0);
				aggregate_func_7637(&(uParam0->f_151), 31);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				func_660(uParam0, uParam1);
				func_663(uParam0, uParam1);
				func_600(&(uParam0->f_151), 402903974, 1);
				aggregate_func_7637(&(uParam0->f_151), 7);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), -1766937362, 1))
			{
				func_660(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 32);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 31:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 1.5f))
			{
				aggregate_func_7637(&(uParam0->f_151), 29);
				return 1;
			}
			break;
		case 32:
			if (func_378(&(uParam0->f_151), -1766937362, 1))
			{
				if (func_612(&(uParam0->f_151), uParam0->f_151.f_902.f_6, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_902.f_6, 1);
					func_600(&(uParam0->f_151), -1766937362, 1);
					aggregate_func_7637(&(uParam0->f_151), 33);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 33:
			if (aggregate_func_2967(&(uParam0->f_151), 1) && func_200(uParam1, uParam0->f_151.f_9))
			{
				if (aggregate_func_9384(uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11)))
				{
					func_641(&(uParam0->f_2335), uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11), 0);
				}
			}
			func_609(uParam0, uParam1->f_6, 0, 6, -1);
			switch (uParam0->f_151.f_1397)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					aggregate_func_7637(&(uParam0->f_151), 35);
					return 1;
				case 6:
					aggregate_func_7637(&(uParam0->f_151), 38);
					return 1;
				default:
					break;
			}
			break;
		case 34:
			if ((func_649(&(uParam0->f_151), uParam1->f_6) || aggregate_func_4628(&(uParam0->f_151.f_1663), uParam0->f_151.f_1666)) || uParam0->f_2839.f_40)
			{
				if (!func_207(&(uParam0->f_2839), uParam1->f_6) || func_602(&(uParam0->f_2839), uParam1->f_6, 1))
				{
					func_665(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam1->f_6);
					switch (&uParam0->f_151.f_1670.f_79[0 /*4*/])
					{
						case 2:
							func_666(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam1->f_6);
							break;
						case 4:
							func_667(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam1->f_6);
							break;
						case 3:
							func_668(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam1->f_6);
							break;
					}
					aggregate_func_7637(&(uParam0->f_151), 35);
					return 1;
				}
			}
			break;
		case 35:
			if (func_207(&(uParam0->f_2839), uParam1->f_6) && func_602(&(uParam0->f_2839), uParam1->f_6, 1))
			{
				if (uParam0->f_151.f_1397 == 1)
				{
					func_669(&(uParam0->f_2839), uParam1->f_6);
				}
				else if (uParam0->f_151.f_1397 == 5 && func_670(&(uParam0->f_2839), uParam1->f_6))
				{
					func_671(&(uParam0->f_2839), uParam1->f_6);
				}
				else
				{
					func_634(&(uParam0->f_2839), uParam1->f_6, uParam0->f_151.f_1398, 0);
				}
				func_672(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 36);
			}
			break;
		case 36:
			if (!func_207(&(uParam0->f_2839), uParam1->f_6) || ((!func_608(&(uParam0->f_2839), uParam1->f_6, 13) && !func_608(&(uParam0->f_2839), uParam1->f_6, 15)) && !func_608(&(uParam0->f_2839), uParam1->f_6, 14)))
			{
				switch (&uParam0->f_151.f_1670.f_79[0 /*4*/])
				{
					case 2:
						func_673(uParam0, &(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_151.f_416));
						break;
					case 4:
						func_674(uParam0, &(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_151.f_416));
						break;
					case 3:
						func_675(uParam0, &(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_151.f_416));
						break;
				}
				aggregate_func_7637(&(uParam0->f_151), 37);
				return 1;
			}
			break;
		case 37:
			aggregate_func_4480(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 8);
			return 1;
		case 38:
			if (func_207(&(uParam0->f_2839), uParam1->f_6) && func_602(&(uParam0->f_2839), uParam1->f_6, 1))
			{
				func_676(&(uParam0->f_2839), uParam1->f_6, uParam0->f_151.f_1997, 1);
				func_665(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam1->f_6);
				func_677(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam1->f_6);
				func_672(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 39);
			}
			break;
		case 39:
			if (!func_207(&(uParam0->f_2839), uParam1->f_6) || !func_608(&(uParam0->f_2839), uParam1->f_6, 17))
			{
				switch (&uParam0->f_151.f_1670.f_79[0 /*4*/])
				{
					case 5:
						func_678(uParam0, &(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_151.f_416));
						break;
				}
				aggregate_func_7637(&(uParam0->f_151), 40);
				return 1;
			}
			break;
		case 40:
			func_679(uParam0, uParam1);
			aggregate_func_4480(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 8);
			return 1;
		case 8:
			if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				func_663(uParam0, uParam1);
				func_600(&(uParam0->f_151), 402903974, 1);
				aggregate_func_7637(&(uParam0->f_151), 7);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 41:
			func_680(&(uParam0->f_2335));
			func_681(uParam0, &(uParam0->f_151.f_902));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if ((func_200(uParam1, iVar3) && func_617(&(uParam0->f_151.f_902), iVar3)) && aggregate_func_5974(&(uParam0->f_151.f_902), iVar3) > aggregate_func_5974(uParam1, iVar3))
				{
					bVar4 = (func_682(&(uParam0->f_151.f_902)) || uParam1->f_2 == 3);
					func_683(uParam0, iVar3, (aggregate_func_5974(&(uParam0->f_151.f_902), iVar3) - aggregate_func_5974(uParam1, iVar3)));
					func_685(&(uParam0->f_2839), iVar3, aggregate_func_5974(&(uParam0->f_151.f_902), iVar3), aggregate_func_5974(&(uParam0->f_151.f_902), iVar3), bVar4, 1);
					aggregate_func_7637(&(uParam0->f_151), 42);
					return 1;
				}
				iVar3++;
			}
			aggregate_func_7637(&(uParam0->f_151), 43);
			return 1;
		case 42:
			aggregate_func_7637(&(uParam0->f_151), 43);
			return 1;
		case 43:
			if (func_378(&(uParam0->f_151), 981015204, 1))
			{
				if (func_682(&(uParam0->f_151.f_902)))
				{
					func_428(&(uParam0->f_151), 6, 0);
					return 1;
				}
				else
				{
					func_600(&(uParam0->f_151), 981015204, 1);
					aggregate_func_7637(&(uParam0->f_151), 6);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 6:
			if (func_378(&(uParam0->f_151), -1179646469, 1))
			{
				func_428(&(uParam0->f_151), 8, 0);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				if (func_686(&(uParam0->f_151.f_902)))
				{
					func_428(&(uParam0->f_151), 9, 0);
				}
				else
				{
					func_428(&(uParam0->f_151), 5, 0);
				}
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_297(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam0->f_151.f_1548)
	{
		case 0:
			if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				if (func_612(&(uParam0->f_151), uParam0->f_151.f_1997, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
					func_600(&(uParam0->f_151), -1442142035, 1);
					iVar0 = 0;
					while (iVar0 < uParam1->f_15.f_23)
					{
						if (!func_687(&(uParam0->f_2839), iVar0))
						{
							func_688(&(uParam0->f_2839), iVar0, *(uParam1->f_15[iVar0 /*2*/]), 1);
						}
						iVar0++;
					}
					aggregate_func_7637(&(uParam0->f_151), 23);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 23:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
			{
				func_689(&(uParam0->f_2839), uParam0->f_151.f_1997, uParam1->f_2, 0);
				func_609(uParam0, uParam0->f_151.f_1997, 3, 6, -1);
				aggregate_func_7637(&(uParam0->f_151), 25);
			}
			break;
		case 25:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 2.5f) || uParam0->f_2839.f_40)
			{
				func_690(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 26);
				return 1;
			}
			break;
		case 26:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 8))
			{
				func_691(uParam0, uParam1);
				if (aggregate_func_2967(&(uParam0->f_151), 1) && func_200(uParam1, uParam0->f_151.f_9))
				{
					if (aggregate_func_9384(uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11)))
					{
						func_641(&(uParam0->f_2335), uParam1, uParam0->f_151.f_9, &(uParam0->f_151.f_11), 0);
					}
				}
				aggregate_func_4480(&(uParam0->f_151));
				aggregate_func_7637(&(uParam0->f_151), 27);
				return 1;
			}
			break;
		case 27:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 2f) || uParam0->f_2839.f_40)
			{
				func_428(&(uParam0->f_151), 4, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_298(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (uParam0->f_151.f_1548)
	{
		case 0:
			if (func_378(&(uParam0->f_151), 981015204, 1))
			{
				iVar2 = aggregate_func_4133(&(uParam0->f_151.f_902));
				if (func_613(&(uParam0->f_151), iVar2, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), iVar2, 1);
					func_600(&(uParam0->f_151), 981015204, 1);
					func_694(uParam0, uParam1, 1);
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (func_695(uParam1, iVar0))
						{
							if (!func_696(&(uParam0->f_2839), iVar0))
							{
								func_630(&(uParam0->f_2839), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 0);
							}
						}
						iVar0++;
					}
					uParam0->f_151.f_2049 = uParam1->f_2;
					func_697(uParam0);
					if (func_698(uParam1, &(uParam0->f_151.f_2046), 2))
					{
						aggregate_func_7637(&(uParam0->f_151), 12);
					}
					else
					{
						aggregate_func_7637(&(uParam0->f_151), 51);
					}
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 12:
			aggregate_func_7637(&(uParam0->f_151), 44);
			return 1;
		case 44:
			if (aggregate_func_4298(&(uParam0->f_151.f_1549)) <= uParam0->f_151.f_1460 && !uParam0->f_2839.f_40)
			{
				return 0;
			}
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_699(uParam0, uParam0->f_151.f_2046);
				if (uParam0->f_151.f_2056)
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 0);
				}
				else
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 1);
				}
				aggregate_func_7637(&(uParam0->f_151), 45);
			}
			break;
		case 45:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.2f) || uParam0->f_2839.f_40)
			{
				func_701(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046, 0);
				func_702(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				func_609(uParam0, uParam0->f_151.f_2046, 5, 6, -1);
				aggregate_func_7637(&(uParam0->f_151), 46);
			}
			break;
		case 46:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.4f) || uParam0->f_2839.f_40)
			{
				func_703(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 47);
			}
			break;
		case 47:
			if (((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 16)) || aggregate_func_4628(&(uParam0->f_151.f_1549), 0.35f)) || uParam0->f_2839.f_40)
			{
				if (uParam0->f_151.f_2057)
				{
					aggregate_func_7637(&(uParam0->f_151), 50);
					return 1;
				}
				else
				{
					aggregate_func_7637(&(uParam0->f_151), 48);
					return 1;
				}
			}
			break;
		case 50:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2054) || !func_695(uParam1, uParam0->f_151.f_2054))
			{
				aggregate_func_7637(&(uParam0->f_151), 48);
				return 1;
			}
			else if (func_602(&(uParam0->f_2839), uParam0->f_151.f_2054, 1))
			{
				func_705(&(uParam0->f_2839), uParam0->f_151.f_2054, 1, func_704(&(uParam0->f_151), uParam0->f_151.f_2054));
				func_706(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2054);
				aggregate_func_7637(&(uParam0->f_151), 48);
				return 1;
			}
			break;
		case 48:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 16))
			{
				func_707(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 49);
				return 1;
			}
			break;
		case 49:
			func_708(uParam0);
			aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2046, 1);
			if (func_709(uParam1, &(uParam0->f_151.f_2046), 2, 0))
			{
				aggregate_func_7637(&(uParam0->f_151), 44);
				return 1;
			}
			else
			{
				aggregate_func_7637(&(uParam0->f_151), 51);
				return 1;
			}
			break;
		case 51:
			aggregate_func_4480(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 11);
			return 1;
		case 11:
			if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				func_600(&(uParam0->f_151), -1442142035, 1);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), 981015204, 1))
			{
				func_600(&(uParam0->f_151), 981015204, 1);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), -1179646469, 1))
			{
				aggregate_func_7637(&(uParam0->f_151), 71);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 71:
			if (func_378(&(uParam0->f_151), -1179646469, 1))
			{
				iVar3 = func_710(&(uParam0->f_151.f_902), 0);
				if (func_613(&(uParam0->f_151), iVar3, 1) && func_612(&(uParam0->f_151), uParam0->f_151.f_1997, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), iVar3, 1);
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 0);
					func_600(&(uParam0->f_151), -1179646469, 1);
					func_711(uParam0, uParam1, uParam0->f_151.f_2049);
					func_712(&(uParam0->f_151), uParam1, uParam0->f_151.f_2049);
					aggregate_func_9699(&(uParam0->f_151.f_2049));
					iVar1 = 0;
					while (iVar1 < uParam1->f_15.f_23)
					{
						if (!func_687(&(uParam0->f_2839), iVar1))
						{
							func_688(&(uParam0->f_2839), iVar1, *(uParam1->f_15[iVar1 /*2*/]), 1);
						}
						iVar1++;
					}
					aggregate_func_7637(&(uParam0->f_151), 23);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 23:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
			{
				func_689(&(uParam0->f_2839), uParam0->f_151.f_1997, uParam0->f_151.f_2049, 1);
				aggregate_func_7637(&(uParam0->f_151), 24);
				return 1;
			}
			break;
		case 24:
			aggregate_func_7637(&(uParam0->f_151), 25);
			return 1;
		case 25:
			if (((!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_595(&(uParam0->f_2839), uParam0->f_151.f_1997, 8)) || func_714(&(uParam0->f_2839), uParam0->f_151.f_1997) >= 2.5f) || uParam0->f_2839.f_40)
			{
				aggregate_func_7637(&(uParam0->f_151), 26);
				return 1;
			}
			break;
		case 26:
			if ((func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 8)) && !func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, 2))
			{
				switch (uParam0->f_151.f_2049)
				{
					case 1:
						if (func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, 0))
						{
							func_711(uParam0, uParam1, uParam0->f_151.f_2049);
							func_715(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1);
							func_716(&(uParam0->f_151), uParam1, uParam0->f_151.f_2049);
							aggregate_func_9699(&(uParam0->f_151.f_2049));
						}
						break;
					case 2:
						if (func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
						{
							func_711(uParam0, uParam1, uParam0->f_151.f_2049);
							func_717(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1);
							func_716(&(uParam0->f_151), uParam1, uParam0->f_151.f_2049);
							aggregate_func_9699(&(uParam0->f_151.f_2049));
						}
						break;
				}
			}
			else
			{
				func_718(uParam0, uParam1);
				func_719(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1);
				func_716(&(uParam0->f_151), uParam1, 3);
				aggregate_func_4242(&(uParam0->f_151), 1);
				aggregate_func_7637(&(uParam0->f_151), 27);
				return 1;
			}
			break;
		case 27:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 1f) || uParam0->f_2839.f_40)
			{
				if (!func_720(uParam1, uParam0->f_151.f_1997))
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
				}
				aggregate_func_7637(&(uParam0->f_151), 55);
				return 1;
			}
			break;
		case 55:
			if (!func_721(&(uParam0->f_151)))
			{
				func_428(&(uParam0->f_151), 7, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_299(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	int iVar10;
	bool bVar11;

	switch (uParam0->f_151.f_1548)
	{
		case 0:
			uParam0->f_151.f_1999 = 0;
			aggregate_func_7637(&(uParam0->f_151), 3);
			return 1;
		case 3:
			if (func_722(uParam0))
			{
				if (func_650(uParam0))
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 4);
					return 1;
				}
			}
			func_622(uParam0, &(uParam0->f_151), 3, 1, 1);
			aggregate_func_7637(&(uParam0->f_151), 76);
			return 1;
		case 4:
			if (func_646(uParam0, &(uParam0->f_151)))
			{
				func_647(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 3);
				return 1;
			}
			break;
		case 76:
			iVar10 = func_723(uParam1, 1);
			if (iVar10 == 0)
			{
				aggregate_func_7637(&(uParam0->f_151), 77);
			}
			else
			{
				bVar11 = iVar10 > 1;
				if (func_200(uParam1, uParam0->f_151.f_9) && func_724(uParam1, uParam0->f_151.f_9))
				{
					uParam0->f_151.f_2046 = uParam0->f_151.f_9;
				}
				else
				{
					uParam0->f_151.f_2046 = func_725(uParam1, 1);
				}
				if (!bVar11)
				{
					if ((func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1)) && !func_726(&(uParam0->f_2839)))
					{
						func_727(&(uParam0->f_2839), uParam0->f_151.f_2046, aggregate_func_5974(uParam1, uParam0->f_151.f_2046), 0);
						uParam0->f_151.f_1668 = 0;
						uParam0->f_151.f_1669 = 0;
						if (func_200(uParam1, uParam0->f_151.f_9) && func_724(uParam1, uParam0->f_151.f_9))
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						aggregate_func_7637(&(uParam0->f_151), 77);
					}
				}
				else
				{
					iVar0 = func_710(uParam1, 1);
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (MISC::IS_BIT_SET(iVar0, iVar2))
						{
							if (func_207(&(uParam0->f_2839), iVar2) && func_602(&(uParam0->f_2839), iVar2, 1))
							{
								MISC::SET_BIT(&iVar1, iVar2);
							}
						}
						iVar2++;
					}
					if (iVar0 == iVar1 && !func_726(&(uParam0->f_2839)))
					{
						iVar2 = 0;
						while (iVar2 < 6)
						{
							if (MISC::IS_BIT_SET(iVar0, iVar2))
							{
								iVar3[iVar2] = aggregate_func_5974(uParam1, iVar2);
							}
							iVar2++;
						}
						func_728(&(uParam0->f_2839), uParam0->f_151.f_2046, iVar0, &iVar3, 0);
						uParam0->f_151.f_1668 = 0;
						uParam0->f_151.f_1669 = 0;
						if (func_200(uParam1, uParam0->f_151.f_9) && func_724(uParam1, uParam0->f_151.f_9))
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						aggregate_func_7637(&(uParam0->f_151), 77);
					}
				}
			}
			break;
		case 77:
			if (!uParam0->f_151.f_1668)
			{
				if ((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !(func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18) || func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 19))) || !func_729(&(uParam0->f_2839)))
				{
					func_644(&(uParam0->f_151));
					func_730(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046);
					func_731(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
					uParam0->f_151.f_1668 = 1;
				}
			}
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && (func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18) || func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 19)))
			{
				if (!uParam0->f_151.f_1669 && func_596(&(uParam0->f_2839), uParam0->f_151.f_2046, 0))
				{
					func_732(uParam0, &(uParam0->f_151), uParam1);
					uParam0->f_151.f_1669 = 1;
				}
			}
			else
			{
				aggregate_func_7525(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 16);
				return 1;
			}
			break;
		case 16:
			aggregate_func_4480(&(uParam0->f_151));
			func_734(uParam0, uParam1);
			func_428(&(uParam0->f_151), 10, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			if (func_378(&(uParam0->f_151), -1179646469, 1))
			{
				if (func_698(&(uParam0->f_151.f_902), &(uParam0->f_151.f_2046), 0))
				{
					if (func_612(&(uParam0->f_151), uParam0->f_151.f_2046, 1))
					{
						aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2046, 1);
						func_600(&(uParam0->f_151), -1179646469, 1);
						aggregate_func_7637(&(uParam0->f_151), 3);
						return 1;
					}
				}
				else
				{
					func_600(&(uParam0->f_151), -1179646469, 1);
					aggregate_func_7637(&(uParam0->f_151), 3);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 3:
			if (func_722(uParam0))
			{
				if (func_650(uParam0))
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 4);
					return 1;
				}
			}
			func_622(uParam0, &(uParam0->f_151), 3, 1, 1);
			aggregate_func_7637(&(uParam0->f_151), 72);
			return 1;
		case 4:
			if (func_646(uParam0, &(uParam0->f_151)))
			{
				func_647(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 72);
				return 1;
			}
			break;
		case 72:
			if (uParam0->f_151.f_2046 != -1)
			{
				aggregate_func_7637(&(uParam0->f_151), 74);
				return 1;
			}
			else
			{
				aggregate_func_7637(&(uParam0->f_151), 16);
				return 1;
			}
			break;
		case 74:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_676(&(uParam0->f_2839), uParam0->f_151.f_2046, uParam0->f_151.f_1997, 0);
				func_735(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046);
				func_736(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				func_737(uParam0, uParam1);
				func_609(uParam0, uParam0->f_151.f_2046, 3, 6, -1);
				aggregate_func_7637(&(uParam0->f_151), 75);
			}
			break;
		case 75:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 17))
			{
				aggregate_func_7637(&(uParam0->f_151), 76);
				return 1;
			}
			break;
		case 76:
			if ((func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1)) && !func_726(&(uParam0->f_2839)))
			{
				func_727(&(uParam0->f_2839), uParam0->f_151.f_2046, aggregate_func_5974(uParam1, uParam0->f_151.f_2046), 0);
				uParam0->f_151.f_1668 = 0;
				uParam0->f_151.f_1669 = 0;
				if (func_200(uParam1, uParam0->f_151.f_9) && func_724(uParam1, uParam0->f_151.f_9))
				{
					AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
				}
				aggregate_func_4242(&(uParam0->f_151), 1);
				aggregate_func_7637(&(uParam0->f_151), 77);
			}
			break;
		case 77:
			if (!uParam0->f_151.f_1668)
			{
				if ((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18)) || !func_729(&(uParam0->f_2839)))
				{
					func_644(&(uParam0->f_151));
					func_730(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046);
					func_731(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
					uParam0->f_151.f_1668 = 1;
				}
			}
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18))
			{
				if (!uParam0->f_151.f_1669 && func_596(&(uParam0->f_2839), uParam0->f_151.f_2046, 0))
				{
					func_738(uParam0, &(uParam0->f_151), uParam0->f_151.f_2046);
					uParam0->f_151.f_1669 = 1;
				}
			}
			else
			{
				aggregate_func_7525(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 16);
				return 1;
			}
			break;
		case 16:
			aggregate_func_4480(&(uParam0->f_151));
			func_734(uParam0, uParam1);
			func_428(&(uParam0->f_151), 10, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_301(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[6];
	bool bVar11;
	bool bVar12;

	if (func_739(&(uParam0->f_2335)))
	{
		if (aggregate_func_2927(uParam0->f_2335.f_498, 1))
		{
			uParam0->f_151.f_1634 = 1;
			func_741(&(uParam0->f_2335), 0);
			AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
		}
	}
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			func_694(uParam0, &(uParam0->f_151.f_902), 0);
			func_697(uParam0);
			uParam0->f_151.f_1637 = 0;
			uParam0->f_151.f_1634 = 0;
			if (func_433(&(uParam0->f_151.f_902), uParam0->f_151.f_9))
			{
				func_741(&(uParam0->f_2335), 1);
			}
			aggregate_func_7637(&(uParam0->f_151), 14);
			return 1;
		case 14:
			if (func_378(&(uParam0->f_151), -1442142035, 1))
			{
				if (func_698(&(uParam0->f_151.f_902), &(uParam0->f_151.f_2046), 2))
				{
					if (func_612(&(uParam0->f_151), uParam0->f_151.f_2046, 1))
					{
						aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2046, 1);
						func_600(&(uParam0->f_151), -1442142035, 1);
						aggregate_func_7637(&(uParam0->f_151), 12);
						return 1;
					}
				}
				else
				{
					func_600(&(uParam0->f_151), -1442142035, 1);
					aggregate_func_7637(&(uParam0->f_151), 7);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 2:
			func_697(uParam0);
			uParam0->f_151.f_1637 = 0;
			uParam0->f_151.f_1634 = 0;
			aggregate_func_7637(&(uParam0->f_151), 29);
			return 1;
		case 12:
			aggregate_func_7637(&(uParam0->f_151), 61);
			return 1;
		case 61:
			uParam0->f_151.f_2047 = func_742(uParam1, uParam0->f_151.f_2046);
			func_630(&(uParam0->f_2839), uParam0->f_151.f_2046, func_628(uParam1, uParam0->f_151.f_2046, 0), func_628(uParam1, uParam0->f_151.f_2046, 1), 0);
			aggregate_func_7637(&(uParam0->f_151), 62);
			return 1;
		case 62:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_699(uParam0, uParam0->f_151.f_2046);
				if (func_743(uParam1, uParam0->f_151.f_2047))
				{
					uParam0->f_151.f_2056 = 1;
				}
				if (uParam0->f_151.f_2056)
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 0);
				}
				else
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 1);
				}
				if (!uParam0->f_151.f_1637)
				{
					func_744(uParam0, uParam1, uParam0->f_151.f_2047);
					uParam0->f_151.f_1637 = 1;
				}
				aggregate_func_7637(&(uParam0->f_151), 63);
			}
			break;
		case 63:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.2f) || uParam0->f_2839.f_40)
			{
				func_701(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046, 0);
				if (func_743(uParam1, uParam0->f_151.f_2047))
				{
					func_745(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046, uParam0->f_151.f_2047);
				}
				else
				{
					func_702(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				}
				func_609(uParam0, uParam0->f_151.f_2046, 5, 6, -1);
				aggregate_func_7637(&(uParam0->f_151), 64);
			}
			break;
		case 64:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.4f) || uParam0->f_2839.f_40)
			{
				func_703(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 65);
			}
			break;
		case 65:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 16))
			{
				func_707(uParam0);
				func_708(uParam0);
				if (func_743(uParam1, uParam0->f_151.f_2047))
				{
					aggregate_func_7637(&(uParam0->f_151), 94);
					return 1;
				}
				else
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 7);
					return 1;
				}
			}
			break;
		case 94:
			if (func_722(uParam0))
			{
				if (func_650(uParam0))
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 95);
					return 1;
				}
			}
			aggregate_func_7637(&(uParam0->f_151), 96);
			return 1;
		case 95:
			if (func_646(uParam0, &(uParam0->f_151)))
			{
				func_647(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 94);
				return 1;
			}
			break;
		case 96:
			func_746(uParam0, uParam1);
			func_747(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2047);
			func_622(uParam0, &(uParam0->f_151), 3, 1, 1);
			if (func_200(uParam1, uParam0->f_151.f_9) && func_748(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_9))
			{
				AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
			}
			aggregate_func_7637(&(uParam0->f_151), 97);
			return 1;
		case 97:
			if ((func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1)) && !func_726(&(uParam0->f_2839)))
			{
				bVar12 = true;
				func_727(&(uParam0->f_2839), uParam0->f_151.f_2046, aggregate_func_5974(uParam1, uParam0->f_151.f_2046), bVar12);
				uParam0->f_151.f_1668 = 0;
				uParam0->f_151.f_1669 = 0;
				aggregate_func_7637(&(uParam0->f_151), 98);
			}
			break;
		case 98:
			if (!uParam0->f_151.f_1668)
			{
				if ((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18)) || !func_729(&(uParam0->f_2839)))
				{
					func_644(&(uParam0->f_151));
					func_730(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046);
					func_731(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
					uParam0->f_151.f_1668 = 1;
				}
			}
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18))
			{
				if (!uParam0->f_151.f_1669 && func_596(&(uParam0->f_2839), uParam0->f_151.f_2046, 0))
				{
					func_749(uParam0, &(uParam0->f_151), uParam1, uParam0->f_151.f_2047);
					uParam0->f_151.f_1669 = 1;
				}
			}
			else
			{
				aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_2046, 1);
				aggregate_func_7637(&(uParam0->f_151), 99);
				return 1;
			}
			break;
		case 99:
			if ((!func_595(&(uParam0->f_2839), uParam0->f_151.f_2046, 18) || func_596(&(uParam0->f_2839), uParam0->f_151.f_2046, 1)) || func_750(uParam1) == 0)
			{
				func_751(uParam0, uParam1);
				aggregate_func_7525(uParam0);
				uParam0->f_151.f_1637 = 0;
				aggregate_func_4480(&(uParam0->f_151));
				aggregate_func_7637(&(uParam0->f_151), 7);
				return 1;
			}
			break;
		case 7:
			if (func_378(&(uParam0->f_151), -441318505, 1))
			{
				func_600(&(uParam0->f_151), -441318505, 1);
				aggregate_func_7637(&(uParam0->f_151), 29);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), 981015204, 1))
			{
				func_600(&(uParam0->f_151), 981015204, 1);
				aggregate_func_7637(&(uParam0->f_151), 41);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 29:
			uParam0->f_151.f_2046 = uParam1->f_6;
			uParam0->f_151.f_2047 = func_742(uParam1, uParam0->f_151.f_2046);
			if (!uParam0->f_151.f_1637)
			{
				func_744(uParam0, uParam1, uParam0->f_151.f_2047);
				uParam0->f_151.f_1637 = 1;
			}
			uParam0->f_151.f_1633 = 0;
			aggregate_func_7637(&(uParam0->f_151), 30);
			return 1;
		case 30:
			if (!uParam0->f_151.f_1633)
			{
				if (func_649(&(uParam0->f_151), uParam1->f_6))
				{
					if (uParam0->f_151.f_1634)
					{
						if (func_659(&(uParam0->f_151), uParam1->f_6))
						{
							func_741(&(uParam0->f_2335), 0);
							uParam0->f_151.f_1633 = 1;
						}
					}
					else if (aggregate_func_4298(&(uParam0->f_151.f_1549)) > uParam0->f_151.f_1459 || uParam0->f_2839.f_40)
					{
						if (func_752(&(uParam0->f_151), uParam1->f_6))
						{
							func_741(&(uParam0->f_2335), 0);
							uParam0->f_151.f_1633 = 1;
						}
					}
				}
			}
			if (uParam0->f_151.f_1633 && func_662(&(uParam0->f_151), 2))
			{
				uParam0->f_151.f_1633 = 0;
				return 1;
			}
			else if (func_378(&(uParam0->f_151), -1766937362, 1))
			{
				aggregate_func_7637(&(uParam0->f_151), 32);
				return 1;
			}
			else if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				aggregate_func_7637(&(uParam0->f_151), 70);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 32:
			if (func_378(&(uParam0->f_151), -1766937362, 1))
			{
				if (func_612(&(uParam0->f_151), uParam0->f_151.f_902.f_6, 1))
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_902.f_6, 1);
					func_600(&(uParam0->f_151), -1766937362, 1);
					aggregate_func_7637(&(uParam0->f_151), 33);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 33:
			if (func_695(uParam1, uParam1->f_6))
			{
				func_630(&(uParam0->f_2839), uParam1->f_6, func_628(uParam1, uParam1->f_6, 0), func_628(uParam1, uParam1->f_6, 1), 0);
				aggregate_func_7637(&(uParam0->f_151), 44);
				return 1;
			}
			else if (func_753(uParam1, uParam1->f_6))
			{
				aggregate_func_7637(&(uParam0->f_151), 66);
				return 1;
			}
			break;
		case 44:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_699(uParam0, uParam0->f_151.f_2046);
				if (uParam0->f_151.f_2056)
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 0);
				}
				else
				{
					func_700(&(uParam0->f_2839), uParam0->f_151.f_2046, 1);
				}
				aggregate_func_7637(&(uParam0->f_151), 45);
			}
			break;
		case 45:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.2f) || uParam0->f_2839.f_40)
			{
				func_701(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046, 0);
				func_702(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				func_609(uParam0, uParam0->f_151.f_2046, 5, 6, -1);
				aggregate_func_7637(&(uParam0->f_151), 46);
			}
			break;
		case 46:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.2f) || uParam0->f_2839.f_40)
			{
				func_703(uParam0, uParam1);
				aggregate_func_7637(&(uParam0->f_151), 47);
			}
			break;
		case 47:
			if (((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 16)) || aggregate_func_4628(&(uParam0->f_151.f_1549), 0.35f)) || uParam0->f_2839.f_40)
			{
				if (uParam0->f_151.f_2057)
				{
					aggregate_func_7637(&(uParam0->f_151), 50);
					return 1;
				}
				else
				{
					aggregate_func_7637(&(uParam0->f_151), 48);
					return 1;
				}
			}
			break;
		case 50:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2054) || !func_695(uParam1, uParam0->f_151.f_2054))
			{
				aggregate_func_7637(&(uParam0->f_151), 48);
				return 1;
			}
			else if (func_602(&(uParam0->f_2839), uParam0->f_151.f_2054, 1))
			{
				func_705(&(uParam0->f_2839), uParam0->f_151.f_2054, 1, func_754(&(uParam0->f_151), uParam0->f_151.f_2054, uParam0->f_151.f_2047));
				func_706(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2054);
				aggregate_func_7637(&(uParam0->f_151), 48);
				return 1;
			}
			break;
		case 48:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 16))
			{
				func_707(uParam0);
				func_708(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 69);
				return 1;
			}
			break;
		case 66:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_676(&(uParam0->f_2839), uParam0->f_151.f_2046, uParam0->f_151.f_1997, 1);
				aggregate_func_7637(&(uParam0->f_151), 67);
			}
			break;
		case 67:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 0.2f) || uParam0->f_2839.f_40)
			{
				func_701(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046, 1);
				func_755(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				func_609(uParam0, uParam0->f_151.f_2046, 5, 6, -1);
				func_756(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 68);
			}
			break;
		case 68:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 17))
			{
				func_707(uParam0);
				func_757(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 69);
				return 1;
			}
			break;
		case 69:
			aggregate_func_4480(&(uParam0->f_151));
			aggregate_func_7637(&(uParam0->f_151), 8);
			return 1;
		case 8:
			if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				aggregate_func_7637(&(uParam0->f_151), 70);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 70:
			if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				if (aggregate_func_5974(&(uParam0->f_151.f_902), uParam0->f_151.f_2047) > 0)
				{
					aggregate_func_7637(&(uParam0->f_151), 71);
					return 1;
				}
				else
				{
					func_600(&(uParam0->f_151), 402903974, 1);
					aggregate_func_7637(&(uParam0->f_151), 7);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 71:
			if (func_378(&(uParam0->f_151), 402903974, 1))
			{
				iVar2 = func_759(&(uParam0->f_151.f_902), uParam0->f_151.f_2047, 0);
				if (func_613(&(uParam0->f_151), iVar2, 1) || iVar2 == 0)
				{
					aggregate_func_9383(&(uParam0->f_151), iVar2, 1);
					func_600(&(uParam0->f_151), 402903974, 1);
					aggregate_func_7637(&(uParam0->f_151), 3);
					return 1;
				}
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		case 3:
			if (func_722(uParam0))
			{
				if (func_650(uParam0))
				{
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_7637(&(uParam0->f_151), 4);
					return 1;
				}
			}
			aggregate_func_7637(&(uParam0->f_151), 52);
			return 1;
		case 4:
			if (func_646(uParam0, &(uParam0->f_151)))
			{
				func_647(uParam0);
				aggregate_func_7637(&(uParam0->f_151), 3);
				return 1;
			}
			break;
		case 52:
			func_746(uParam0, uParam1);
			if (func_750(&(uParam0->f_151.f_902)) == 0)
			{
				aggregate_func_4242(&(uParam0->f_151), 1);
			}
			func_747(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2047);
			if (func_433(uParam1, uParam0->f_151.f_2046))
			{
				aggregate_func_7637(&(uParam0->f_151), 56);
				return 1;
			}
			else if (aggregate_func_5974(uParam1, uParam0->f_151.f_2047) == 1 && func_748(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_2046))
			{
				aggregate_func_7637(&(uParam0->f_151), 56);
				return 1;
			}
			uParam0->f_151.f_1999 = 0;
			uParam0->f_151.f_2046 = func_760(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_1999, 1);
			aggregate_func_7637(&(uParam0->f_151), 53);
			return 1;
		case 53:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_705(&(uParam0->f_2839), uParam0->f_151.f_2046, 0, 1);
				func_736(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
				MISC::SET_BIT(&(uParam0->f_151.f_1999), uParam0->f_151.f_2046);
				aggregate_func_7637(&(uParam0->f_151), 54);
				return 1;
			}
			break;
		case 54:
			if (aggregate_func_4298(&(uParam0->f_151.f_1549)) > 0.2f || uParam0->f_2839.f_40)
			{
				uParam0->f_151.f_2046 = func_760(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_1999, 1);
				if (func_200(uParam1, uParam0->f_151.f_2046))
				{
					aggregate_func_7637(&(uParam0->f_151), 53);
					return 1;
				}
				else
				{
					aggregate_func_7637(&(uParam0->f_151), 56);
					return 1;
				}
			}
			break;
		case 56:
			func_622(uParam0, &(uParam0->f_151), 3, 1, 1);
			if (func_433(uParam1, uParam0->f_151.f_2046))
			{
				aggregate_func_7637(&(uParam0->f_151), 74);
				return 1;
			}
			else
			{
				aggregate_func_7637(&(uParam0->f_151), 76);
				return 1;
			}
			break;
		case 74:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1))
			{
				func_676(&(uParam0->f_2839), uParam0->f_151.f_2046, uParam0->f_151.f_1997, 0);
				aggregate_func_7637(&(uParam0->f_151), 75);
				return 1;
			}
			break;
		case 75:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 17))
			{
				aggregate_func_7637(&(uParam0->f_151), 76);
				return 1;
			}
			break;
		case 76:
			iVar0 = func_761(uParam1, uParam0->f_151.f_2047, 1);
			if (iVar0 == 0)
			{
				aggregate_func_7637(&(uParam0->f_151), 77);
			}
			else
			{
				bVar11 = iVar0 > 1;
				if (func_200(uParam1, uParam0->f_151.f_9) && func_748(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_9))
				{
					uParam0->f_151.f_2046 = uParam0->f_151.f_9;
				}
				else
				{
					uParam0->f_151.f_2046 = func_762(uParam1, uParam0->f_151.f_2047, 1);
				}
				bVar12 = uParam0->f_151.f_2047 > 0;
				if (!bVar11)
				{
					if ((func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && func_602(&(uParam0->f_2839), uParam0->f_151.f_2046, 1)) && !func_726(&(uParam0->f_2839)))
					{
						func_727(&(uParam0->f_2839), uParam0->f_151.f_2046, aggregate_func_5974(uParam1, uParam0->f_151.f_2046), bVar12);
						uParam0->f_151.f_1668 = 0;
						uParam0->f_151.f_1669 = 0;
						if (func_200(uParam1, uParam0->f_151.f_9) && func_748(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_9))
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						aggregate_func_7637(&(uParam0->f_151), 77);
					}
				}
				else
				{
					iVar2 = func_759(uParam1, uParam0->f_151.f_2047, 1);
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (MISC::IS_BIT_SET(iVar2, iVar1))
						{
							if (func_207(&(uParam0->f_2839), iVar1) && func_602(&(uParam0->f_2839), iVar1, 1))
							{
								MISC::SET_BIT(&iVar3, iVar1);
							}
						}
						iVar1++;
					}
					if (iVar2 == iVar3 && !func_726(&(uParam0->f_2839)))
					{
						iVar1 = 0;
						while (iVar1 < 6)
						{
							if (MISC::IS_BIT_SET(iVar2, iVar1))
							{
								iVar4[iVar1] = aggregate_func_5974(uParam1, iVar1);
							}
							iVar1++;
						}
						func_728(&(uParam0->f_2839), uParam0->f_151.f_2046, iVar2, &iVar4, bVar12);
						uParam0->f_151.f_1668 = 0;
						uParam0->f_151.f_1669 = 0;
						if (func_200(uParam1, uParam0->f_151.f_9) && func_748(uParam1, uParam0->f_151.f_2047, uParam0->f_151.f_9))
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_win", "RDRO_Poker_Sounds", true, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FRONTEND("showdown_lose", "RDRO_Poker_Sounds", true, 0);
						}
						aggregate_func_7637(&(uParam0->f_151), 77);
					}
				}
			}
			break;
		case 77:
			if (!uParam0->f_151.f_1668)
			{
				if ((!func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) || !(func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18) || func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 19))) || !func_729(&(uParam0->f_2839)))
				{
					func_644(&(uParam0->f_151));
					func_730(&(uParam0->f_151), &(uParam0->f_151.f_1670), uParam1, uParam0->f_151.f_2046);
					func_731(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), uParam1, uParam0->f_151.f_2046);
					uParam0->f_151.f_1668 = 1;
				}
			}
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2046) && (func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 18) || func_608(&(uParam0->f_2839), uParam0->f_151.f_2046, 19)))
			{
				if (!uParam0->f_151.f_1669 && func_596(&(uParam0->f_2839), uParam0->f_151.f_2046, 0))
				{
					func_749(uParam0, &(uParam0->f_151), uParam1, uParam0->f_151.f_2047);
					uParam0->f_151.f_1669 = 1;
				}
			}
			else
			{
				func_751(uParam0, uParam1);
				aggregate_func_7525(uParam0);
				uParam0->f_151.f_1637 = 0;
				aggregate_func_4480(&(uParam0->f_151));
				aggregate_func_7637(&(uParam0->f_151), 7);
				return 1;
			}
			break;
		case 41:
			func_741(&(uParam0->f_2335), 0);
			aggregate_func_7637(&(uParam0->f_151), 10);
			return 1;
		case 10:
			if (func_378(&(uParam0->f_151), -1179646469, 1))
			{
				func_600(&(uParam0->f_151), -1179646469, 1);
				func_734(uParam0, uParam1);
				func_428(&(uParam0->f_151), 10, 0);
				return 1;
			}
			else if (func_601(uParam0, 1))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_302(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	if (uParam0->f_151.f_1548 != 0)
	{
		func_764(uParam0, uParam1, 150375);
	}
	switch (uParam0->f_151.f_1548)
	{
		case 0:
		case 1:
			func_599(uParam0, uParam1);
			if (func_765(uParam1) > 0)
			{
				func_766(uParam0);
			}
			func_767(&(uParam0->f_151), uParam1);
			if (!aggregate_func_2967(&(uParam0->f_151), 5))
			{
				func_622(uParam0, &(uParam0->f_151), 2, 1, 1);
			}
			func_768(uParam0, 1, 0);
			func_769(&(uParam0->f_151), &(uParam0->f_2839));
			func_770();
			if (uParam0->f_151.f_1548 == 1)
			{
				aggregate_func_7637(&(uParam0->f_151), 13);
				return 1;
			}
			else
			{
				aggregate_func_7637(&(uParam0->f_151), 74);
				return 1;
			}
			break;
		case 13:
			if (aggregate_func_4628(&(uParam0->f_151.f_1549), 3f) || uParam0->f_2839.f_40)
			{
				aggregate_func_7637(&(uParam0->f_151), 74);
				return 1;
			}
			break;
		case 74:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iVar0 != uParam0->f_151.f_1997)
				{
					if (((func_200(uParam1, iVar0) && func_207(&(uParam0->f_2839), iVar0)) && func_771(&(uParam0->f_2839), iVar0)) && (aggregate_func_5974(&(uParam0->f_2839), iVar0) == 3 || aggregate_func_5974(&(uParam0->f_2839), iVar0) == 2))
					{
						aggregate_func_5019(&(uParam0->f_151), iVar0, 1);
					}
				}
				iVar0++;
			}
			aggregate_func_7637(&(uParam0->f_151), 75);
			return 0;
		case 75:
			if (!func_774(&(uParam0->f_151), 1))
			{
				bVar2 = true;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_207(&(uParam0->f_2839), iVar0) && func_608(&(uParam0->f_2839), iVar0, 17))
					{
						bVar2 = false;
					}
					iVar0++;
				}
				if (bVar2)
				{
					aggregate_func_7637(&(uParam0->f_151), 14);
					return 1;
				}
			}
			break;
		case 14:
			iVar1 = uParam1->f_3;
			if (uParam0->f_151.f_1996 || !func_775(uParam1, &iVar1, 1))
			{
				iVar1 = uParam0->f_151.f_1997;
			}
			if (func_612(&(uParam0->f_151), uParam0->f_151.f_1997, 1) && func_612(&(uParam0->f_151), iVar1, 1))
			{
				aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
				aggregate_func_9383(&(uParam0->f_151), iVar1, 0);
				uParam0->f_151.f_1998 = iVar1;
				aggregate_func_7637(&(uParam0->f_151), 85);
				return 1;
			}
			break;
		case 85:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
			{
				bVar4 = uParam0->f_151.f_1998 != uParam0->f_151.f_1997;
				func_776(&(uParam0->f_2839), uParam0->f_151.f_1997, bVar4, uParam0->f_151.f_1998);
				aggregate_func_7637(&(uParam0->f_151), 91);
				return 1;
			}
			break;
		case 91:
			aggregate_func_7637(&(uParam0->f_151), 86);
			return 1;
		case 86:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997))
			{
				if (func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 20))
				{
					if (func_596(&(uParam0->f_2839), uParam0->f_151.f_1997, 0))
					{
						if (uParam0->f_151.f_1998 != uParam0->f_151.f_1997)
						{
							func_777(uParam0, uParam0->f_151.f_1998, uParam0->f_151.f_1997, 6);
						}
						func_610(&(uParam0->f_2839), uParam0->f_151.f_1997, 0);
					}
				}
				else
				{
					aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
					func_430(&(uParam0->f_151), uParam0->f_151.f_1998);
					if (aggregate_func_4275(&(uParam0->f_2839)))
					{
						aggregate_func_7637(&(uParam0->f_151), 89);
						return 1;
					}
					if (func_779(&(uParam0->f_151), uParam0->f_151.f_1997))
					{
						aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
					}
					aggregate_func_7637(&(uParam0->f_151), 93);
					return 1;
				}
			}
			break;
		case 89:
			if (func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) && func_602(&(uParam0->f_2839), uParam0->f_151.f_1997, 1))
			{
				func_632(&(uParam0->f_2839), uParam0->f_151.f_1997);
				aggregate_func_7637(&(uParam0->f_151), 90);
				return 1;
			}
			break;
		case 90:
			if (!func_207(&(uParam0->f_2839), uParam0->f_151.f_1997) || !func_608(&(uParam0->f_2839), uParam0->f_151.f_1997, 22))
			{
				aggregate_func_9383(&(uParam0->f_151), uParam0->f_151.f_1997, 1);
				aggregate_func_7637(&(uParam0->f_151), 93);
				return 1;
			}
			break;
		case 93:
			if (uParam0->f_151.f_1552 == 0)
			{
				if (func_780(uParam0, &iVar3))
				{
					func_382(uParam0, &(uParam0->f_151), iVar3, 1);
					return 0;
				}
			}
			aggregate_func_7637(&(uParam0->f_151), 16);
			return 1;
		case 16:
			if (func_378(&(uParam0->f_151), -1773144867, 1))
			{
				func_600(&(uParam0->f_151), -1773144867, 1);
			}
			if (func_378(&(uParam0->f_151), -26793149, 1))
			{
				func_600(&(uParam0->f_151), -26793149, 1);
			}
			if (!func_781(&(uParam0->f_151)))
			{
				if (func_378(&(uParam0->f_151), -1442142035, 1))
				{
					aggregate_func_4242(&(uParam0->f_151), 0);
					uParam0->f_151.f_1660++;
					aggregate_func_4480(&(uParam0->f_151));
					aggregate_func_9385(&(uParam0->f_2839), 0);
					aggregate_func_9385(&(uParam0->f_2839), 0);
					func_784(&(uParam0->f_2839));
					func_785(&(uParam0->f_2839));
					func_216(&(uParam0->f_2839), 1);
					func_217(&(uParam0->f_2839), 1);
					if (!aggregate_func_7212(&(uParam0->f_151)))
					{
						func_428(&(uParam0->f_151), 3, 0);
						return 1;
					}
					else
					{
						aggregate_func_7637(&(uParam0->f_151), 92);
						return 1;
					}
				}
				else if (!func_378(&(uParam0->f_151), -1773144867, 1) && !func_378(&(uParam0->f_151), -26793149, 1))
				{
					if (func_601(uParam0, 1))
					{
						return 0;
					}
				}
			}
			break;
		case 92:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_207(&(uParam0->f_2839), iVar0))
				{
					if (func_787(&(uParam0->f_2839), iVar0))
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				func_428(&(uParam0->f_151), 0, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_303(var uParam0, var uParam1)
{
	switch (uParam0->f_151.f_1548)
	{
		case 0:
			func_788(uParam0, &(uParam0->f_151), 1, 1);
			aggregate_func_7637(&(uParam0->f_151), 16);
			return 1;
		case 16:
			break;
		default:
			break;
	}
	return 0;
}

int func_304(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam2->f_1)
	{
		case 0:
			if (!func_789(uParam1, iParam3, 1))
			{
			}
			else
			{
				if (func_139(uParam1, 1))
				{
					if (!aggregate_func_7654(512) || aggregate_func_7654(1024))
					{
						uParam1->f_1631 = 1;
					}
				}
				aggregate_func_4283(&(uParam2->f_2));
				aggregate_func_6629(uParam1, iParam3, 5);
				return 1;
			}
			break;
		case 5:
			if (aggregate_func_4628(&(uParam2->f_2), 1.5f))
			{
				if (func_139(uParam1, 1))
				{
					if (!aggregate_func_7654(4096))
					{
						aggregate_func_7824(2048);
					}
					if (!aggregate_func_7654(512))
					{
						aggregate_func_6633(10, 0);
					}
					else
					{
						aggregate_func_6633(8, 0);
					}
				}
				aggregate_func_6629(uParam1, iParam3, 6);
				return 1;
			}
			break;
		case 6:
			if (!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 5))
			{
				if (aggregate_func_5974(&(uParam1->f_416), iParam3) > 0)
				{
					aggregate_func_6629(uParam1, iParam3, 8);
					return 1;
				}
				else
				{
					aggregate_func_6629(uParam1, iParam3, 10);
					return 1;
				}
			}
			break;
		case 8:
			if (func_207(&(uParam0->f_2839), iParam3) && func_602(&(uParam0->f_2839), iParam3, 1))
			{
				func_791(&(uParam0->f_2839), iParam3, aggregate_func_5974(&(uParam1->f_416), iParam3));
				aggregate_func_6629(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 32))
			{
				aggregate_func_6629(uParam1, iParam3, 10);
				return 1;
			}
			break;
		case 10:
			func_792(uParam1, iParam3, 1);
			uParam1->f_1631 = 0;
			if (!uParam1->f_2051 && !func_617(&(uParam1->f_416), iParam3))
			{
				if (func_139(uParam1, 1))
				{
					func_793(&(uParam0->f_2335), "MGPKR_MSG_JOIN_MIDGAME_NO_CHIPS", 1);
					aggregate_func_4586(&(uParam0->f_2335), 1);
				}
				else if (func_139(uParam1, 2))
				{
					func_793(&(uParam0->f_2335), "MGPKR_MSG_JOIN_MIDGAME_CHIPS", 2);
					aggregate_func_4586(&(uParam0->f_2335), 1);
				}
			}
			func_795(uParam1, iParam3);
			return 1;
	}
	return 0;
}

int func_306(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<7> Var23[1];
	vector3 vVar31;
	vector3 vVar34;
	float fVar37;
	struct<8> Var38[1];
	int iVar47;

	if (func_139(uParam1, 1))
	{
		if (uParam2->f_1 != 0 && uParam2->f_6 != -1)
		{
			if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
			{
				iVar47 = -1;
			}
			else
			{
				iVar47 = NETWORK::_0x58CC181719256197(uParam2->f_6, &Var38, 1);
			}
			if (iVar47 == 0)
			{
				func_796(uParam1, iParam3, Var38[0 /*8*/], 1);
				uParam2->f_6 = -1;
			}
			else if (iVar47 == 1)
			{
			}
			else
			{
				uParam2->f_6 = -1;
			}
		}
	}
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_6 = -1;
			iVar0 = func_797(uParam1, iParam3);
			if (iVar0 == 0)
			{
			}
			else if (iVar0 != 1 && iVar0 != 2)
			{
			}
			else if (func_798(uParam1, iParam3, 1))
			{
				func_789(uParam1, iParam3, 1);
				func_800(&(uParam0->f_2335), iParam3, func_799(uParam1, iParam3));
				if (func_139(uParam1, 1))
				{
					if (func_797(uParam1, iParam3) == 1 && !func_801(uParam1, iParam3))
					{
						if (func_802(uParam1, iParam3, Var23[0 /*7*/]))
						{
							if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
							{
								uParam2->f_6 = 1;
							}
							else
							{
								uParam2->f_6 = NETWORK::_0xD66C9E72B3CC4982(&Var23, 1);
							}
						}
					}
				}
				aggregate_func_4283(&(uParam2->f_2));
				aggregate_func_6629(uParam1, iParam3, 1);
				return 1;
			}
			break;
		case 1:
			if (aggregate_func_4298(&(uParam1->f_1657)) < 0f)
			{
				return 0;
			}
			aggregate_func_4284(&(uParam1->f_1657), -uParam1->f_1456);
			aggregate_func_6629(uParam1, iParam3, 2);
			return 1;
		case 2:
			if (uParam2->f_6 != -1)
			{
			}
			else
			{
				aggregate_func_6629(uParam1, iParam3, 3);
				return 1;
			}
			break;
		case 3:
			iVar17 = func_799(uParam1, iParam3);
			vVar31 = { uParam0->f_2839 };
			if (!func_366(uParam0, iParam3, uParam1->f_902, iVar17, &iVar18, &iVar20))
			{
				return 0;
			}
			func_367(uParam1, iParam3, iVar18, 1);
			uParam2->f_7 = iVar20;
			aggregate_func_6629(uParam1, iParam3, 4);
			return 1;
		case 4:
			iVar17 = func_799(uParam1, iParam3);
			vVar31 = { uParam0->f_2839 };
			iVar20 = uParam2->f_7;
			if (func_370(uParam1, iParam3))
			{
				if (!func_803(&(uParam0->f_2839), vVar31, &vVar34, &fVar37, 0))
				{
					return 0;
				}
				iVar18 = func_432(uParam1, iParam3, 1);
				if (uParam1->f_9 != -1 && (iParam3 + 1 % 6) == uParam0->f_151.f_9)
				{
					iVar19 = func_434(&iVar18, 2);
				}
				else
				{
					iVar19 = func_435(&iVar18);
				}
				ENTITY::_0x203BEFFDBE12E96A(iVar18, vVar34, fVar37, 1, 0, 1);
				iVar21 = 92;
				iVar22 = 1;
				Var1 = { func_804(uParam1, iParam3, 0, 0) };
				if (!func_437(&(uParam0->f_2839), iParam3, iVar18, 0, iVar19, 1, iVar20, iVar21, iVar17, iVar22, 0, 0, 0, 0, &Var1))
				{
					PED::DELETE_PED(&iVar18);
					return 0;
				}
				aggregate_func_6629(uParam1, iParam3, 6);
				return 1;
			}
			break;
		case 6:
			if ((!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 4)) || func_596(&(uParam0->f_2839), iParam3, 0))
			{
				func_805(uParam0, iParam3);
				aggregate_func_6629(uParam1, iParam3, 7);
				return 1;
			}
			break;
		case 7:
			if (func_380(&(uParam0->f_151), iParam3, 1))
			{
				if (!func_806(&(uParam0->f_2335), iParam3, 1))
				{
				}
				else
				{
					func_807(uParam1, iParam3);
					func_808(uParam1, iParam3);
					func_809(uParam1, aggregate_func_5974(&(uParam1->f_416), iParam3));
					func_810(uParam0, &(uParam1->f_416), iParam3);
					func_811(uParam0, iParam3);
					if (aggregate_func_5974(&(uParam1->f_416), iParam3) > 0)
					{
						aggregate_func_6629(uParam1, iParam3, 8);
						return 1;
					}
					else
					{
						aggregate_func_6629(uParam1, iParam3, 10);
						return 1;
					}
				}
			}
			break;
		case 8:
			if (!func_207(&(uParam0->f_2839), iParam3) || func_602(&(uParam0->f_2839), iParam3, 1))
			{
				func_791(&(uParam0->f_2839), iParam3, aggregate_func_5974(&(uParam1->f_416), iParam3));
				aggregate_func_6629(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 32))
			{
				aggregate_func_6629(uParam1, iParam3, 10);
				return 1;
			}
			break;
		case 10:
			func_792(uParam1, iParam3, 1);
			func_795(uParam1, iParam3);
			return 1;
	}
	return 0;
}

int func_307(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;

	switch (uParam2->f_1)
	{
		case 0:
			if (func_798(uParam1, iParam3, 1))
			{
				func_789(uParam1, iParam3, 1);
				aggregate_func_6629(uParam1, iParam3, 8);
				return 1;
			}
			break;
		case 8:
			if (func_387(&(uParam0->f_151), iParam3, 1))
			{
				if (func_207(&(uParam0->f_2839), iParam3) && func_602(&(uParam0->f_2839), iParam3, 1))
				{
					bVar0 = false;
					func_812(uParam1, iParam3);
					func_791(&(uParam0->f_2839), iParam3, aggregate_func_5974(&(uParam1->f_416), iParam3));
					if (iParam3 == uParam1->f_9)
					{
						func_202(uParam1, aggregate_func_5974(&(uParam1->f_416), iParam3));
						if (uParam1->f_1450 && uParam1->f_1452 > 0)
						{
							func_813(uParam1);
							bVar0 = true;
						}
					}
					if (!bVar0)
					{
						func_814(uParam0, iParam3, aggregate_func_5974(&(uParam1->f_416), iParam3));
						func_815(uParam0, iParam3, aggregate_func_5974(&(uParam1->f_416), iParam3));
					}
					aggregate_func_6629(uParam1, iParam3, 9);
					return 1;
				}
			}
			break;
		case 9:
			if (!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 32))
			{
				func_792(uParam1, iParam3, 1);
				func_795(uParam1, iParam3);
				return 1;
			}
			break;
	}
	return 0;
}

int func_308(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	switch (uParam2->f_1)
	{
		case 0:
			if (aggregate_func_4298(&(uParam1->f_1657)) < 0f)
			{
				return 0;
			}
			if (uParam1->f_1997 == iParam3)
			{
				iVar1 = func_816(&(uParam1->f_416), iParam3);
			}
			else
			{
				iVar1 = -1;
			}
			if (iVar1 == -1)
			{
				if (func_798(uParam1, iParam3, 1))
				{
					func_789(uParam1, iParam3, 1);
					bVar0 = true;
				}
			}
			else if (((func_798(uParam1, iParam3, 1) && func_798(uParam1, iVar1, 1)) && !func_817(uParam1)) && !func_726(&(uParam0->f_2839)))
			{
				func_789(uParam1, iParam3, 1);
				func_789(uParam1, iVar1, 1);
				func_818(uParam1, iParam3, iVar1, 0);
				aggregate_func_4242(&(uParam0->f_2839), 1);
				func_819(&(uParam0->f_2839), iParam3, iVar1);
				bVar0 = true;
			}
			if (bVar0)
			{
				aggregate_func_4284(&(uParam1->f_1657), -uParam1->f_1456);
				uParam2->f_5 = 0;
				if (func_200(&(uParam1->f_416), iParam3))
				{
					uParam2->f_5 = aggregate_func_5974(&(uParam1->f_416), iParam3);
				}
				aggregate_func_6629(uParam1, iParam3, 11);
				return 1;
			}
			break;
		case 11:
			if (func_380(&(uParam0->f_151), iParam3, 1))
			{
				if (!func_207(&(uParam0->f_2839), iParam3) || func_602(&(uParam0->f_2839), iParam3, 1))
				{
					if (func_207(&(uParam0->f_2839), iParam3) && (aggregate_func_5974(&(uParam0->f_2839), iParam3) == 2 || aggregate_func_5974(&(uParam0->f_2839), iParam3) == 3))
					{
						func_676(&(uParam0->f_2839), iParam3, uParam1->f_1997, 2);
					}
					func_820(uParam1, &(uParam1->f_1670), &(uParam0->f_2839), &(uParam1->f_416), iParam3, uParam2->f_5);
					func_821(uParam1, uParam2->f_5);
					func_822(uParam0, iParam3);
					func_823(uParam0, iParam3);
					func_807(uParam1, iParam3);
					func_824(uParam1, iParam3);
					aggregate_func_6629(uParam1, iParam3, 12);
				}
			}
			break;
		case 12:
			if (!func_207(&(uParam0->f_2839), iParam3) || !func_608(&(uParam0->f_2839), iParam3, 17))
			{
				if (func_825(uParam1, iParam3))
				{
					aggregate_func_6629(uParam1, iParam3, 14);
					return 1;
				}
				else
				{
					aggregate_func_6629(uParam1, iParam3, 13);
					return 1;
				}
			}
			break;
		case 13:
			if (!func_207(&(uParam0->f_2839), iParam3) || func_602(&(uParam0->f_2839), iParam3, 1))
			{
				if (func_207(&(uParam0->f_2839), iParam3))
				{
					func_826(&(uParam0->f_2839), iParam3, uParam2->f_5, uParam1->f_11.f_13);
					func_609(uParam0, iParam3, 7, 6, -1);
				}
				aggregate_func_6629(uParam1, iParam3, 18);
			}
			break;
		case 14:
			if (!func_207(&(uParam0->f_2839), uParam1->f_2064) || func_602(&(uParam0->f_2839), uParam1->f_2064, 1))
			{
				if (aggregate_func_2740(&(uParam0->f_2839)))
				{
					aggregate_func_6629(uParam1, iParam3, 15);
					return 1;
				}
			}
			break;
		case 15:
			if (!func_207(&(uParam0->f_2839), iParam3) || func_602(&(uParam0->f_2839), iParam3, 1))
			{
				if (func_207(&(uParam0->f_2839), iParam3))
				{
					func_631(&(uParam0->f_2839), iParam3, uParam1->f_2064);
					func_828(&(uParam0->f_2839), iParam3);
				}
				aggregate_func_6629(uParam1, iParam3, 16);
				return 1;
			}
			break;
		case 16:
			if (!func_207(&(uParam0->f_2839), iParam3) || func_602(&(uParam0->f_2839), iParam3, 1))
			{
				if (func_207(&(uParam0->f_2839), iParam3))
				{
					func_826(&(uParam0->f_2839), iParam3, uParam2->f_5, uParam1->f_11.f_13);
					func_609(uParam0, iParam3, 7, 6, -1);
				}
				aggregate_func_4283(&(uParam2->f_2));
				aggregate_func_6629(uParam1, iParam3, 17);
			}
			break;
		case 17:
			if (aggregate_func_4628(&(uParam2->f_2), 1f))
			{
				func_430(uParam1, uParam1->f_2064);
				func_829(uParam0, uParam1->f_2064, 0);
				func_830(uParam0, iParam3, uParam1->f_2064);
				aggregate_func_4242(&(uParam0->f_2839), 0);
				aggregate_func_2632(&(uParam0->f_2839));
				aggregate_func_6629(uParam1, iParam3, 18);
			}
			break;
		case 18:
			if (!func_207(&(uParam0->f_2839), iParam3) || !((func_608(&(uParam0->f_2839), iParam3, 31) || func_608(&(uParam0->f_2839), iParam3, 29)) || func_608(&(uParam0->f_2839), iParam3, 33)))
			{
				func_792(uParam1, iParam3, 1);
				if (func_825(uParam1, iParam3))
				{
					func_792(uParam1, uParam1->f_2064, 1);
					func_831(uParam1, iParam3);
				}
				func_832(uParam0, iParam3);
				func_795(uParam1, iParam3);
			}
			break;
	}
	return 0;
}

int func_309(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_428(uParam1, 0, 0);
			uParam2->f_4 = 0;
			func_833(uParam0, &(uParam1->f_416));
			func_834(&(uParam0->f_2335), uParam0);
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else
			{
				func_837(&(uParam0->f_2839), aggregate_func_5974(&(uParam0->f_2839), uParam1->f_9), aggregate_func_5974(&(uParam1->f_416), uParam1->f_9), uParam1->f_11.f_13);
				aggregate_func_5135(uParam1, 12);
				return 1;
			}
			break;
		case 12:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else if (!func_726(&(uParam0->f_2839)))
			{
				aggregate_func_4242(&(uParam0->f_2839), 1);
				aggregate_func_5135(uParam1, 1);
				return 1;
			}
			break;
		case 1:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else if (func_608(&(uParam0->f_2839), uParam1->f_9, 7))
			{
				if (aggregate_func_4224(&(uParam0->f_2839)) && aggregate_func_2740(&(uParam0->f_2839)))
				{
					func_464(&(uParam0->f_2839), uParam1->f_9, 0);
					func_840(&(uParam0->f_2839), uParam1->f_9, 1);
					func_841(&(uParam0->f_2839), uParam1->f_9);
					uParam2->f_4 = 1;
					aggregate_func_5135(uParam1, 4);
					return 1;
				}
			}
			else if (func_602(&(uParam0->f_2839), uParam1->f_9, 1))
			{
				if (aggregate_func_5974(&(uParam0->f_2839), uParam1->f_9) == 2)
				{
					func_676(&(uParam0->f_2839), uParam1->f_9, uParam1->f_1997, 2);
				}
				func_842(&(uParam0->f_2335));
				aggregate_func_5135(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else if (!func_608(&(uParam0->f_2839), uParam1->f_9, 17))
			{
				if (!aggregate_func_4224(&(uParam0->f_2839)) || aggregate_func_2740(&(uParam0->f_2839)))
				{
					func_464(&(uParam0->f_2839), uParam1->f_9, 0);
					func_840(&(uParam0->f_2839), uParam1->f_9, 1);
					func_841(&(uParam0->f_2839), uParam1->f_9);
					aggregate_func_5135(uParam1, 4);
					return 1;
				}
			}
			break;
		case 4:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else if ((!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839))) || func_844(&(uParam0->f_2839)))
			{
				if (uParam2->f_4)
				{
					func_785(&(uParam0->f_2839));
				}
				func_845(&(uParam0->f_2839));
				func_842(&(uParam0->f_2335));
				aggregate_func_5135(uParam1, 13);
				return 1;
			}
			break;
		case 13:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			else if (!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 16);
				return 1;
			}
			break;
		case 16:
			CAM::DO_SCREEN_FADE_OUT(500);
			aggregate_func_5135(uParam1, 17);
			return 1;
		case 17:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_207(&(uParam0->f_2839), uParam1->f_9))
				{
					func_453(&(uParam0->f_2839), uParam1->f_9, 1);
				}
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
			}
			break;
	}
	return 0;
}

int func_311(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_428(uParam1, 0, 0);
			func_833(uParam0, &(uParam1->f_416));
			func_834(&(uParam0->f_2335), uParam0);
			aggregate_func_5135(uParam1, 1);
			return 1;
		case 1:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9) || func_602(&(uParam0->f_2839), uParam1->f_9, 1))
			{
				if (func_207(&(uParam0->f_2839), uParam1->f_9) && aggregate_func_5974(&(uParam0->f_2839), uParam1->f_9) == 2)
				{
					func_676(&(uParam0->f_2839), uParam1->f_9, uParam1->f_1997, 2);
				}
				aggregate_func_5135(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9) || !func_608(&(uParam0->f_2839), uParam1->f_9, 17))
			{
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
			}
			break;
	}
	return 0;
}

int func_312(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_2 = uParam1->f_9;
			uParam2->f_3 = 0;
			if (func_200(&(uParam1->f_416), uParam2->f_2))
			{
				uParam2->f_3 = aggregate_func_5974(&(uParam1->f_416), uParam2->f_2);
			}
			func_833(uParam0, &(uParam1->f_416));
			func_834(&(uParam0->f_2335), uParam0);
			if (!func_177(uParam1, 1959158395, 0))
			{
				func_181(uParam1);
			}
			if (func_608(&(uParam0->f_2839), uParam2->f_2, 7))
			{
				func_846(&(uParam0->f_2839), 0, 0);
				func_428(uParam1, 0, 0);
				aggregate_func_5135(uParam1, 3);
				return 1;
			}
			else
			{
				func_846(&(uParam0->f_2839), 1, 0);
				aggregate_func_5135(uParam1, 6);
				return 1;
			}
			break;
		case 3:
			if (!aggregate_func_4224(&(uParam0->f_2839)) || aggregate_func_2740(&(uParam0->f_2839)))
			{
				if (aggregate_func_4224(&(uParam0->f_2839)))
				{
					func_847(&(uParam0->f_2839), uParam2->f_2);
				}
				func_820(&(uParam0->f_151), &(uParam1->f_1670), &(uParam0->f_2839), &(uParam1->f_416), uParam2->f_2, uParam2->f_3);
				func_842(&(uParam0->f_2335));
				func_848(&(uParam0->f_2839), 1);
				func_453(&(uParam0->f_2839), uParam2->f_2, 1);
				aggregate_func_5135(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if ((!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839))) || func_844(&(uParam0->f_2839)))
			{
				func_849(&(uParam0->f_2839), uParam2->f_2, 0, 0);
				func_784(&(uParam0->f_2839));
				func_785(&(uParam0->f_2839));
				aggregate_func_9385(&(uParam0->f_2839), 0);
				aggregate_func_9385(&(uParam0->f_2839), 0);
				func_850(&(uParam0->f_2839));
				iVar1 = 0;
				while (iVar1 < 6)
				{
					if (func_207(&(uParam0->f_2839), iVar1))
					{
						func_215(&(uParam0->f_2839), iVar1, 1, 0f);
					}
					iVar1++;
				}
				func_214(&(uParam0->f_4242));
				func_851(&(uParam0->f_2839));
				aggregate_func_5135(uParam1, 5);
			}
			break;
		case 5:
			if (!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839)))
			{
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
			}
			break;
		case 6:
			if (func_177(uParam1, 1959158395, 0))
			{
				aggregate_func_5135(uParam1, 7);
				return 1;
			}
			break;
		case 7:
			if (func_852(uParam1, uParam2->f_2, 1))
			{
				func_853(uParam1, uParam2->f_2, 1);
				func_180(uParam1, 0, 1959158395, 0, 0);
				func_600(uParam1, 1995414514, 0);
				func_824(uParam1, uParam2->f_2);
				aggregate_func_5135(uParam1, 8);
				return 1;
			}
			break;
		case 8:
			if (!func_207(&(uParam0->f_2839), uParam2->f_2) || func_602(&(uParam0->f_2839), uParam2->f_2, 1))
			{
				if (func_207(&(uParam0->f_2839), uParam2->f_2) && aggregate_func_5974(&(uParam0->f_2839), uParam2->f_2) == 2)
				{
					func_676(&(uParam0->f_2839), uParam2->f_2, uParam1->f_1997, func_854(uParam2->f_3));
				}
				func_820(&(uParam0->f_151), &(uParam1->f_1670), &(uParam0->f_2839), &(uParam1->f_416), uParam2->f_2, uParam2->f_3);
				aggregate_func_5135(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			if (!func_207(&(uParam0->f_2839), uParam2->f_2) || !func_608(&(uParam0->f_2839), uParam2->f_2, 17))
			{
				aggregate_func_5135(uParam1, 10);
				return 1;
			}
			break;
		case 10:
			if (!func_207(&(uParam0->f_2839), uParam2->f_2) || func_602(&(uParam0->f_2839), uParam2->f_2, 1))
			{
				if (uParam1->f_1997 == uParam2->f_2)
				{
					iVar0 = func_855(&(uParam1->f_416), uParam1->f_1997);
				}
				else
				{
					iVar0 = -1;
				}
				if (iVar0 != -1)
				{
					if (!aggregate_func_4224(&(uParam0->f_2839)) || aggregate_func_2740(&(uParam0->f_2839)))
					{
						if (aggregate_func_4224(&(uParam0->f_2839)))
						{
							func_847(&(uParam0->f_2839), uParam2->f_2);
						}
						func_842(&(uParam0->f_2335));
						func_848(&(uParam0->f_2839), 1);
						func_453(&(uParam0->f_2839), uParam2->f_2, 1);
						aggregate_func_5135(uParam1, 12);
						return 1;
					}
				}
				else
				{
					if (func_207(&(uParam0->f_2839), uParam2->f_2))
					{
						func_856(&(uParam0->f_2839), uParam2->f_2, func_854(uParam2->f_3), 0);
					}
					func_609(uParam0, uParam2->f_2, 7, 6, -1);
					func_842(&(uParam0->f_2335));
					func_214(&(uParam0->f_4242));
					func_851(&(uParam0->f_2839));
					func_848(&(uParam0->f_2839), 1);
					aggregate_func_5135(uParam1, 11);
					return 1;
				}
			}
			break;
		case 12:
			if ((!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839))) || func_844(&(uParam0->f_2839)))
			{
				iVar0 = func_855(&(uParam1->f_416), uParam1->f_1997);
				if (iVar0 == -1)
				{
					iVar0 = uParam1->f_1997;
					func_857(&iVar0);
				}
				func_430(uParam1, iVar0);
				func_829(uParam0, iVar0, 0);
				func_849(&(uParam0->f_2839), uParam2->f_2, 0, 0);
				func_455(&(uParam0->f_2839), uParam2->f_2);
				func_850(&(uParam0->f_2839));
				func_214(&(uParam0->f_4242));
				func_851(&(uParam0->f_2839));
				aggregate_func_5135(uParam1, 13);
			}
			break;
		case 13:
			if (!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839)))
			{
				func_858(uParam1, uParam2->f_2, 1);
				func_859(&(uParam0->f_2839));
				aggregate_func_2862(uParam1, 6);
				if (func_860(&(uParam1->f_416)) <= 1)
				{
					aggregate_func_4242(&(uParam0->f_2839), 1);
				}
				aggregate_func_5135(uParam1, 14);
				return 1;
			}
			break;
		case 11:
			if (!func_207(&(uParam0->f_2839), uParam2->f_2))
			{
				func_858(uParam1, uParam2->f_2, 1);
				func_849(&(uParam0->f_2839), uParam2->f_2, 0, 1);
				func_859(&(uParam0->f_2839));
				aggregate_func_2862(uParam1, 6);
				if (func_860(&(uParam1->f_416)) <= 1)
				{
					aggregate_func_4242(&(uParam0->f_2839), 1);
				}
				aggregate_func_5135(uParam1, 14);
				return 1;
			}
			break;
		case 14:
			if (aggregate_func_6066(&(uParam0->f_2839)))
			{
				func_428(uParam1, 0, 0);
				aggregate_func_5135(uParam1, 15);
				return 1;
			}
			else if (uParam1->f_1547 == 0)
			{
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
				return 0;
			}
			else if (uParam0->f_42 == 40)
			{
				if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_2839 + Vector(0.4f, 0f, 0f), 2.5f) && BUILTIN::VDIST(Global_36, uParam0->f_2839 - Vector(10f, 0f, 0f)) > 16f)
				{
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_207(&(uParam0->f_2839), iVar1))
						{
							if (func_595(&(uParam0->f_2839), iVar1, 4) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(aggregate_func_6570(&(uParam0->f_2839), iVar1), true, false), uParam0->f_2839 + Vector(0.4f, 0f, 0f)) > 2.5f)
							{
								if (func_200(&(uParam1->f_416), iVar1))
								{
									func_821(uParam1, aggregate_func_5974(&(uParam1->f_416), iVar1));
								}
								func_208(&(uParam0->f_2839), iVar1, 0);
							}
							else if ((func_595(&(uParam0->f_2839), iVar1, 29) || func_595(&(uParam0->f_2839), iVar1, 30)) || func_595(&(uParam0->f_2839), iVar1, 28))
							{
								func_454(&(uParam0->f_2839), iVar1);
							}
							else if (!func_200(&(uParam1->f_416), iVar1))
							{
								func_454(&(uParam0->f_2839), iVar1);
							}
						}
						iVar1++;
					}
					func_785(&(uParam0->f_2839));
					func_784(&(uParam0->f_2839));
					aggregate_func_9385(&(uParam0->f_2839), 0);
					aggregate_func_9385(&(uParam0->f_2839), 0);
					aggregate_func_9385(&(uParam0->f_2839), 0);
					iVar3 = (func_865(&(uParam1->f_416)) - func_866(&(uParam1->f_416)));
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_207(&(uParam0->f_2839), iVar1))
						{
							iVar2++;
						}
						iVar1++;
					}
					iVar4 = 0;
					if (iVar2 > 0)
					{
						iVar4 = (iVar3 / iVar2);
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_207(&(uParam0->f_2839), iVar1))
						{
							iVar5 = aggregate_func_5974(&(uParam1->f_416), iVar1);
							iVar5 = (iVar5 + iVar4);
							aggregate_func_6629(&(uParam1->f_416), iVar1, iVar5);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < 6)
					{
						if (func_207(&(uParam0->f_2839), iVar1))
						{
							func_215(&(uParam0->f_2839), iVar1, 1, 0);
							func_849(&(uParam0->f_2839), iVar1, aggregate_func_5974(&(uParam1->f_416), iVar1), 0);
						}
						iVar1++;
					}
					func_428(uParam1, 0, 0);
					aggregate_func_2862(uParam1, 8);
					aggregate_func_5135(uParam1, 18);
					return 0;
				}
			}
			break;
		case 15:
			if (func_868(&(uParam0->f_2839)) == 0)
			{
				func_417(&(uParam0->f_2839));
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
				return 0;
			}
			break;
	}
	return 0;
}

int func_313(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	switch (uParam2->f_1)
	{
		case 0:
			func_428(uParam1, 0, 0);
			func_833(uParam0, &(uParam1->f_416));
			func_834(&(uParam0->f_2335), uParam0);
			func_846(&(uParam0->f_2839), 1, 1);
			if (STREAMING::_0xFC464598F6EE97B0())
			{
				STREAMING::_0x31108BB5715D035F();
			}
			switch (uParam0->f_42)
			{
				case 76:
					STREAMING::_0x20D504994FDC4412("hso_poker_seats", "hso_normal_seats");
					break;
				case 104:
					STREAMING::_0x20D504994FDC4412("dewclm_poker_seats", "dewclm_normal_seats");
					break;
				case 9:
					STREAMING::_0x20D504994FDC4412("shb_poker_seats", "shb_normal_seats");
					break;
			}
			aggregate_func_5135(uParam1, 1);
			return 1;
		case 1:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9) || func_602(&(uParam0->f_2839), uParam1->f_9, 1))
			{
				if (func_207(&(uParam0->f_2839), uParam1->f_9) && aggregate_func_5974(&(uParam0->f_2839), uParam1->f_9) == 2)
				{
					func_676(&(uParam0->f_2839), uParam1->f_9, uParam1->f_1997, 2);
				}
				func_820(uParam1, &(uParam1->f_1670), &(uParam0->f_2839), &(uParam1->f_416), uParam1->f_9, aggregate_func_5974(&(uParam1->f_416), uParam1->f_9));
				func_842(&(uParam0->f_2335));
				aggregate_func_5135(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_207(&(uParam0->f_2839), uParam1->f_9) || !func_595(&(uParam0->f_2839), uParam1->f_9, 17))
			{
				if ((!aggregate_func_4224(&(uParam0->f_2839)) || aggregate_func_2740(&(uParam0->f_2839))) && (!STREAMING::_0xFC464598F6EE97B0() || STREAMING::_0xC2C05DEFE85A0B64()))
				{
					if (func_207(&(uParam0->f_2839), uParam1->f_9))
					{
						func_848(&(uParam0->f_2839), 1);
						func_847(&(uParam0->f_2839), uParam1->f_9);
						func_453(&(uParam0->f_2839), uParam1->f_9, 1);
					}
					else
					{
						aggregate_func_2632(&(uParam0->f_2839));
					}
					aggregate_func_5135(uParam1, 12);
					return 1;
				}
			}
			break;
		case 12:
			if ((!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839))) || func_844(&(uParam0->f_2839)))
			{
				if (STREAMING::_0xFC464598F6EE97B0())
				{
					STREAMING::_0x040EE319EFD1D3B5();
				}
				ENTITY::REMOVE_MODEL_HIDE(uParam0->f_2839, 2.5f, -686064834, 1);
				func_214(&(uParam0->f_4242));
				func_210(&(uParam0->f_2839), 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_207(&(uParam0->f_2839), iVar0))
					{
						iVar1 = aggregate_func_6570(&(uParam0->f_2839), iVar0);
						if (!PED::IS_PED_INJURED(iVar1))
						{
							vVar5 = { *(uParam0->f_2839.f_1236[iVar0 /*3*/]) - uParam0->f_2839 };
							vVar5.f_2 = 0f;
							vVar5 = { aggregate_func_2907(vVar5) * Vector(2f, 2f, 2f) };
							vVar5.f_2 = 1f;
							vVar2 = { uParam0->f_2839 + vVar5 };
							MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), 0);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, 1);
							ENTITY::SET_ENTITY_COORDS(iVar1, vVar2, true, false, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar1, MISC::GET_HEADING_FROM_VECTOR_2D(vVar5.x, vVar5.y));
							func_208(&(uParam0->f_2839), iVar0, 0);
						}
					}
					iVar0++;
				}
				aggregate_func_5135(uParam1, 13);
				return 1;
			}
			break;
		case 13:
			if (!aggregate_func_4224(&(uParam0->f_2839)) || func_843(&(uParam0->f_2839)))
			{
				aggregate_func_2862(uParam1, 8);
				aggregate_func_5135(uParam1, 18);
			}
			break;
	}
	return 0;
}

int func_314(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_833(uParam0, &(uParam1->f_416));
			func_834(&(uParam0->f_2335), uParam0);
			aggregate_func_5135(uParam1, 18);
			return 1;
	}
	return 0;
}

int func_315(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (uParam2->f_1)
	{
		case 0:
			aggregate_func_4283(&(uParam2->f_2));
			aggregate_func_5135(uParam1, 5);
			break;
		case 5:
			if (aggregate_func_4628(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_871(&(uParam0->f_2839), uParam1->f_9, -1, -1);
				iVar1 = func_871(&(uParam0->f_2839), -1, -1, -1);
				if (func_872(uParam0, &(uParam1->f_1870.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_777(uParam0, iVar3, iVar2, 10);
					func_609(uParam0, iVar2, 8, 6, -1);
				}
				aggregate_func_5135(uParam1, 2);
			}
			break;
		case 2:
			if (func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4283(&(uParam2->f_2));
			}
			else if (aggregate_func_4628(&(uParam2->f_2), 1.5f))
			{
				iVar0 = func_871(&(uParam0->f_2839), uParam1->f_9, -1, -1);
				iVar1 = func_871(&(uParam0->f_2839), -1, -1, -1);
				if (func_872(uParam0, &(uParam1->f_1870.f_96), iVar0, "postGame_chatter", iVar1, 100, &iVar2, &iVar3))
				{
					func_777(uParam0, iVar3, iVar2, 10);
					func_609(uParam0, iVar2, 8, 6, -1);
				}
				aggregate_func_5135(uParam1, 3);
			}
			break;
		case 3:
			break;
	}
	return 0;
}

int func_317(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;

	iVar21 = -1;
	iVar22 = -1;
	iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
	iVar1 = func_871(&(uParam0->f_2839), uParam1->f_9, -1, -1);
	iVar2 = iVar0;
	uVar4 = aggregate_func_4304(&(uParam1->f_1670));
	iVar5 = aggregate_func_4304(&(uParam1->f_1670));
	iVar6 = (uVar4 && -1 ^ iVar5);
	uVar11 = aggregate_func_4304(&(uParam1->f_1670));
	uVar12 = aggregate_func_4304(&(uParam1->f_1670));
	uVar13 = aggregate_func_4304(&(uParam1->f_1670));
	uVar14 = aggregate_func_4304(&(uParam1->f_1670));
	uVar15 = aggregate_func_4304(&(uParam1->f_1670));
	uVar16 = aggregate_func_4304(&(uParam1->f_1670));
	if (uParam2->f_8 != -1)
	{
		MISC::SET_BIT(&iVar3, uParam2->f_8);
	}
	iVar23 = 0;
	while (iVar23 < 6)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar23))
		{
			fVar17 = func_881(&(uParam1->f_1670), iVar23);
			fVar18 = aggregate_func_6570(&(uParam1->f_1670), iVar23);
			fVar19 = aggregate_func_6570(&(uParam1->f_1670), iVar23);
			if (func_884(fVar17))
			{
				MISC::SET_BIT(&iVar9, iVar23);
			}
			if (func_885(fVar17))
			{
				MISC::SET_BIT(&uVar10, iVar23);
			}
			if (MISC::IS_BIT_SET(iVar5, iVar23))
			{
				if (func_886(fVar18))
				{
					MISC::SET_BIT(&uVar7, iVar23);
				}
			}
			if (MISC::IS_BIT_SET(iVar6, iVar23))
			{
				if (func_887(fVar19))
				{
					MISC::SET_BIT(&iVar8, iVar23);
				}
			}
		}
		iVar23++;
	}
	switch (uParam2->f_1)
	{
		case 0:
			aggregate_func_4313(&(uParam2->f_5));
			if (func_888(&(uParam1->f_416)) > 0 || uParam0->f_151.f_1670.f_130)
			{
				aggregate_func_5135(uParam1, 1);
				return 1;
			}
			else
			{
				aggregate_func_4284(&(uParam2->f_2), -4f);
				aggregate_func_5135(uParam1, 5);
				return 1;
			}
			break;
		case 1:
			if (((((func_888(&(uParam1->f_416)) == 0 && !uParam0->f_151.f_1670.f_130) && !func_781(uParam1)) && !func_889(uParam1, 4)) && !func_890(uParam1)) && !func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4284(&(uParam2->f_2), -3.5f);
				aggregate_func_5135(uParam1, 21);
			}
			break;
		case 5:
			iVar23 = 0;
			while (iVar23 < 6)
			{
				if ((func_207(&(uParam0->f_2839), iVar23) && func_595(&(uParam0->f_2839), iVar23, 18)) && !func_596(&(uParam0->f_2839), iVar23, 1))
				{
					bVar24 = true;
				}
				iVar23++;
			}
			if (bVar24)
			{
				aggregate_func_4284(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 4f));
			}
			if (aggregate_func_4628(&(uParam2->f_2), 0f) && !func_729(&(uParam0->f_2839)))
			{
				if (func_872(uParam0, &(uParam1->f_1870.f_16), (iVar0 && uVar11), "postGame_brokeWinningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 7);
					return 0;
				}
				if (func_872(uParam0, &(uParam1->f_1870.f_26), (iVar0 && uVar12), "postGame_brokeLosingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 8);
					return 0;
				}
				if (func_872(uParam0, &(uParam1->f_1870.f_56), (((iVar0 && -1 ^ iVar9) && uVar7) && uVar15), "postGame_mono_goodGame", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 11);
					return 0;
				}
				if (func_872(uParam0, &(uParam1->f_1870.f_66), (((iVar0 && iVar6) && -1 ^ iVar8) && uVar16), "postGame_frustrated_lvl1", iVar2, 60, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 12);
					return 0;
				}
				if (func_872(uParam0, &(uParam1->f_1870.f_36), ((iVar0 && uVar13) && -1 ^ iVar9), "postGame_winningStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 9);
					return 0;
				}
				if (func_872(uParam0, &(uParam1->f_1870.f_46), (iVar0 && uVar14), "postGame_losingStreak", iVar2, 100, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 10);
					return 0;
				}
				aggregate_func_4284(&(uParam2->f_2), -2f);
				aggregate_func_5135(uParam1, 6);
				return 0;
			}
			break;
		case 6:
			if (aggregate_func_4628(&(uParam2->f_2), 0f))
			{
				iVar21 = func_891(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = -1;
					func_609(uParam0, iVar21, 8, 6, -1);
					aggregate_func_5135(uParam1, 13);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 7:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_893(&(uParam1->f_1870.f_86), uParam2->f_9);
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 17);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 17);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 8:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 100))
				{
					func_893(&(uParam1->f_1870.f_76), uParam2->f_9);
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 16);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 16);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 9:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentWinningStreak", uParam2->f_8, 100))
				{
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 14);
					return 0;
				}
				iVar21 = func_891(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentWinningStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 14);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 16);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 10:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentLosingStreak", uParam2->f_8, 100))
				{
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 15);
					return 0;
				}
				iVar21 = func_891(uParam0, (iVar2 && -1 ^ iVar3), "postGame_commentLosingStreak", uParam2->f_8, 100);
				if (iVar21 != -1)
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 15);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 17);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 11:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentWin", uParam2->f_8, 60))
				{
					func_893(&(uParam1->f_1870.f_76), uParam2->f_9);
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 16);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_76), (iVar2 && -1 ^ iVar3), "postGame_commentWin", uParam2->f_8, 60, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 16);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 12:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "postGame_commentLoss", uParam2->f_8, 100))
				{
					func_893(&(uParam1->f_1870.f_86), uParam2->f_9);
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 17);
					return 0;
				}
				if (func_894(uParam0, &(uParam1->f_1870.f_86), (iVar2 && -1 ^ iVar3), "postGame_commentLoss", uParam2->f_8, 100, &iVar21))
				{
					uParam2->f_9 = iVar21;
					func_777(uParam0, uParam2->f_8, uParam2->f_9, 10);
					func_609(uParam0, uParam2->f_9, 8, 6, -1);
					aggregate_func_5135(uParam1, 17);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 19:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_892(uParam0, uParam2->f_9, "chat_camp_response_NOCONV", uParam2->f_8, 100))
				{
					aggregate_func_5135(uParam1, 20);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 17:
			if (!func_729(&(uParam0->f_2839)))
			{
				if (func_884(func_881(&(uParam1->f_1670), uParam2->f_8)))
				{
					iVar20 = 100;
				}
				else
				{
					iVar20 = 50;
				}
				if (func_895(uParam0, &(uParam1->f_1870.f_116), uParam2->f_8, "postGame_rebuff", uParam2->f_9, iVar20))
				{
					func_777(uParam0, uParam2->f_9, uParam2->f_8, 10);
					func_609(uParam0, uParam2->f_8, 8, 6, -1);
					aggregate_func_5135(uParam1, 18);
					return 0;
				}
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 21);
				return 0;
			}
			break;
		case 21:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4284(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 8f));
				aggregate_func_5135(uParam1, 22);
				return 0;
			}
			break;
		case 22:
			if (aggregate_func_4628(&(uParam2->f_2), 0f))
			{
				iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
				iVar2 = iVar0;
				if (func_872(uParam0, &(uParam1->f_1870.f_96), iVar0, "postGame_chatter", iVar2, 66, &iVar21, &iVar22))
				{
					uParam2->f_8 = iVar21;
					uParam2->f_9 = iVar22;
					func_609(uParam0, iVar21, 8, 6, iVar22);
					aggregate_func_5135(uParam1, 23);
					return 0;
				}
				iVar21 = func_891(uParam0, iVar0, "postGame_fillerFX", -1, 60);
				if (iVar21 != -1)
				{
					func_609(uParam0, iVar21, 8, 6, -1);
					aggregate_func_5135(uParam1, 30);
					return 0;
				}
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
		case 23:
			if (func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4284(&(uParam2->f_2), -0.75f);
			}
			else if (aggregate_func_4628(&(uParam2->f_2), 0f))
			{
				if (func_895(uParam0, &(uParam1->f_1870.f_106), uParam2->f_9, "postGame_banter", uParam2->f_8, 50))
				{
					func_609(uParam0, uParam2->f_9, 8, 6, uParam2->f_8);
					aggregate_func_5135(uParam1, 25);
					return 0;
				}
				if (func_895(uParam0, &(uParam1->f_1870.f_106), uParam2->f_9, "postGame_chatter", uParam2->f_8, 33))
				{
					func_609(uParam0, uParam2->f_9, 8, 6, uParam2->f_8);
					aggregate_func_5135(uParam1, 24);
					return 0;
				}
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
		case 24:
		case 25:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
		case 26:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
		case 27:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
		case 28:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4284(&(uParam2->f_2), -5f);
				aggregate_func_5135(uParam1, 29);
				return 0;
			}
			break;
		case 29:
			if (aggregate_func_4628(&(uParam2->f_2), 0f))
			{
				iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
				if (func_891(uParam0, iVar0, "postGame_fillerFX", -1, 60) != -1)
				{
					func_609(uParam0, iVar21, 8, 6, -1);
					aggregate_func_5135(uParam1, 30);
					return 0;
				}
			}
			break;
		case 30:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_5135(uParam1, 28);
				return 0;
			}
			break;
	}
	return 0;
}

int func_318(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;

	iVar9 = -1;
	switch (uParam2->f_1)
	{
		case 0:
			if (!func_729(&(uParam0->f_2839)))
			{
				iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
				iVar1 = aggregate_func_4249(&(uParam1->f_1670));
				uVar2 = aggregate_func_4304(&(uParam1->f_1670));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = aggregate_func_4249(&(uParam1->f_1670));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar13 = func_899(&(uParam1->f_1670), iVar11);
						fVar14 = func_881(&(uParam1->f_1670), iVar11);
						if (func_900(fVar13, fVar14))
						{
							MISC::SET_BIT(&uVar5, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				func_609(uParam0, iVar10, 8, 6, -1);
				iVar9 = func_891(uParam0, (iVar0 && uVar6), "postCelebrate_disapproveFX", -1, 66);
				if (iVar9 != -1)
				{
					aggregate_func_4284(&(uParam2->f_2), 0f);
					aggregate_func_5135(uParam1, 2);
					return 0;
				}
				aggregate_func_4284(&(uParam2->f_2), -0.5f);
				aggregate_func_5135(uParam1, 2);
			}
			break;
		case 2:
			if (aggregate_func_4628(&(uParam2->f_2), 0f) && !func_729(&(uParam0->f_2839)))
			{
				iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
				iVar1 = aggregate_func_4249(&(uParam1->f_1670));
				uVar2 = aggregate_func_4304(&(uParam1->f_1670));
				uVar3 = aggregate_func_4304(&(uParam1->f_1670));
				iVar4 = (uVar2 && -1 ^ iVar1);
				iVar10 = aggregate_func_4249(&(uParam1->f_1670));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar13 = func_899(&(uParam1->f_1670), iVar11);
						fVar14 = func_881(&(uParam1->f_1670), iVar11);
						if (func_900(fVar13, fVar14))
						{
							MISC::SET_BIT(&uVar5, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar6, iVar11);
						}
					}
					iVar11++;
				}
				if (func_695(&(uParam1->f_416), iVar10))
				{
					if (func_902(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_891(uParam0, (iVar0 && iVar4), "postCelebrate_commentRareWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_609(uParam0, iVar9, 8, 6, -1);
							aggregate_func_5135(uParam1, 3);
							return 0;
						}
					}
					if (func_903(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_891(uParam0, (iVar0 && iVar4), "postCelebrate_commentGoodWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_609(uParam0, iVar9, 8, 6, -1);
							aggregate_func_5135(uParam1, 3);
							return 0;
						}
					}
					if (func_904(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_891(uParam0, (iVar0 && iVar4), "postCelebrate_lostToPoorWin", iVar10, 50);
						if (iVar9 != -1)
						{
							func_609(uParam0, iVar9, 8, 6, -1);
							aggregate_func_5135(uParam1, 3);
							return 0;
						}
					}
					if (func_904(&(uParam1->f_416), iVar10))
					{
						iVar9 = func_891(uParam0, (iVar0 && iVar4), "postCelebrate_commentPoorWin", iVar10, 100);
						if (iVar9 != -1)
						{
							func_609(uParam0, iVar9, 8, 6, -1);
							aggregate_func_5135(uParam1, 3);
							return 0;
						}
					}
				}
				iVar9 = func_891(uParam0, ((iVar0 && uVar5) && uVar3), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 8, 6, -1);
					aggregate_func_5135(uParam1, 3);
					return 0;
				}
				iVar9 = func_891(uParam0, (iVar0 && uVar5), "postCelebrate_bigLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 8, 6, -1);
					aggregate_func_5135(uParam1, 3);
					return 0;
				}
				iVar9 = func_891(uParam0, ((iVar0 && uVar6) && uVar3), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 8, 6, -1);
					aggregate_func_5135(uParam1, 3);
					return 0;
				}
				iVar9 = func_891(uParam0, (iVar0 && uVar6), "postCelebrate_smallLoss", iVar10, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 8, 6, -1);
					aggregate_func_5135(uParam1, 3);
					return 0;
				}
				aggregate_func_5135(uParam1, 3);
				return 0;
			}
			break;
		case 3:
			if (!func_729(&(uParam0->f_2839)))
			{
				aggregate_func_4284(&(uParam2->f_2), -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.45f));
				aggregate_func_5135(uParam1, 4);
			}
			break;
		case 4:
			iVar11 = 0;
			while (iVar11 < 6)
			{
				if (func_207(&(uParam0->f_2839), iVar11) && func_595(&(uParam0->f_2839), iVar11, 18))
				{
					func_905(uParam1);
					return 0;
				}
				iVar11++;
			}
			if (aggregate_func_4628(&(uParam2->f_2), 0f) && !func_729(&(uParam0->f_2839)))
			{
				iVar0 = func_871(&(uParam0->f_2839), -1, -1, -1);
				iVar1 = aggregate_func_4249(&(uParam1->f_1670));
				iVar11 = 0;
				while (iVar11 < 6)
				{
					if (MISC::IS_BIT_SET(iVar4, iVar11))
					{
						fVar12 = aggregate_func_6570(&(uParam1->f_1670), iVar11);
						if (func_886(fVar12))
						{
							MISC::SET_BIT(&uVar7, iVar11);
						}
						else
						{
							MISC::SET_BIT(&uVar8, iVar11);
						}
					}
					iVar11++;
				}
				iVar9 = func_891(uParam0, (iVar0 && uVar7), "postCelebrate_excitedFX", 100, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 3, 6, -1);
				}
				iVar9 = func_891(uParam0, (iVar0 && iVar1), "postCelebrate_smallWinFX", 50, 100);
				if (iVar9 != -1)
				{
					func_609(uParam0, iVar9, 3, 6, -1);
				}
				func_905(uParam1);
				return 0;
			}
			break;
	}
	return 0;
}

int func_319(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (aggregate_func_4628(uParam3, 0f))
	{
		if (((!func_907(&(uParam1->f_416), iParam2) || !func_207(&(uParam0->f_2839), iParam2)) || !func_908(uParam1, iParam2, 0, 0)) || func_909(&(uParam0->f_2839), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_910(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iParam2))
			{
				func_911(uParam1, 1, 0.3f);
			}
			return 1;
		}
	}
	return 0;
}

int func_321(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (aggregate_func_4628(uParam3, 0f))
	{
		if (((!func_907(&(uParam1->f_416), iParam2) || !func_207(&(uParam0->f_2839), iParam2)) || !func_908(uParam1, iParam2, 0, 0)) || func_909(&(uParam0->f_2839), iParam2))
		{
			return 1;
		}
		else
		{
			if (func_912(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iParam2))
			{
				func_911(uParam1, 2, 0.1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_322(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;

	if (aggregate_func_4628(uParam3, 0f))
	{
		if ((!func_907(&(uParam1->f_416), iParam2) || !func_207(&(uParam0->f_2839), iParam2)) || !func_908(uParam1, iParam2, 0, 0))
		{
			return 1;
		}
		else if (func_602(&(uParam0->f_2839), iParam2, 1))
		{
			if (!func_909(&(uParam0->f_2839), iParam2))
			{
				iVar0 = aggregate_func_5974(&(uParam1->f_416), iParam2);
				iVar1 = func_913(&(uParam1->f_416), iParam2);
				iVar2 = (aggregate_func_5974(&(uParam1->f_416), iParam2) - iVar1);
				iVar3 = (iVar2 + iVar0);
				fVar4 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(iVar3));
				fVar5 = (BUILTIN::TO_FLOAT((iVar1 - iVar0)) / BUILTIN::TO_FLOAT(iVar3));
				if (func_914(&(uParam0->f_2839), iParam2, 1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_2059, iParam2) && !MISC::IS_BIT_SET(uParam1->f_2058, iParam2))
					{
						func_705(&(uParam0->f_2839), iParam2, 0, 1);
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_2059, iParam2) && MISC::IS_BIT_SET(uParam1->f_2058, iParam2))
					{
						func_705(&(uParam0->f_2839), iParam2, 1, 1);
					}
					else if (fVar5 > 0f)
					{
						if (fVar5 >= 0.5f && uParam1->f_2060 < 1)
						{
							func_705(&(uParam0->f_2839), iParam2, 0, 1);
							uParam1->f_2060++;
							uParam1->f_2062++;
						}
						else if (fVar5 >= 0.25f && uParam1->f_2062 < 3)
						{
							func_705(&(uParam0->f_2839), iParam2, 0, 0);
							uParam1->f_2062++;
						}
					}
					else if (fVar4 >= 0.2f && uParam1->f_2062 < 3)
					{
						func_705(&(uParam0->f_2839), iParam2, 1, 0);
						uParam1->f_2062++;
					}
				}
				func_915(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iParam2);
				func_911(uParam1, 3, 0.6f);
				return 1;
			}
		}
	}
	return 0;
}

int func_323(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4)
{
	if (bParam2)
	{
		if (!func_200(uParam0, iParam1) || func_617(uParam0, iParam1))
		{
			return 0;
		}
	}
	if ((((uParam0->f_1 == -1773144867 || uParam0->f_1 == -26793149) || uParam0->f_11 != 0) || uParam0->f_2 == -1) || func_203(uParam0) == 0)
	{
		*uParam3 = 2;
		*uParam4 = 0;
		return 1;
	}
	else if (uParam0->f_1 == -441318505 || uParam0->f_14 != 0)
	{
		if (((uParam0->f_2 == 0 || uParam0->f_2 == 1) || uParam0->f_2 == 2) || uParam0->f_2 == 3)
		{
			*uParam3 = 4;
			*uParam4 = 2;
			return 1;
		}
		else if (uParam0->f_2 == 4)
		{
			*uParam3 = 9;
			*uParam4 = 2;
			return 1;
		}
	}
	else if (uParam0->f_1 == -1179646469 || uParam0->f_12 != 0)
	{
		*uParam3 = 2;
		*uParam4 = 0;
		return 1;
	}
	return 0;
}

int func_325(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = -1587988328;
			return 1;
		case 1:
			*uParam0 = -1993750510;
			return 1;
		case 2:
			*uParam0 = 1069538232;
			return 1;
		case 3:
			*uParam0 = 1590697544;
			return 1;
		case 4:
			*uParam0 = 335130626;
			return 1;
		case 5:
			*uParam0 = 855344262;
			return 1;
		case 6:
			*uParam0 = -1884742536;
			return 1;
		case 7:
			*uParam0 = -1499241424;
			return 1;
		case 8:
			*uParam0 = -1499241424;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_326(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return 1;
		case 1:
			*uParam0 = -291109262;
			return 1;
		case 2:
			*uParam0 = 210029681;
			return 1;
		case 3:
			*uParam0 = 2037482211;
			return 1;
		case 4:
			*uParam0 = 877666613;
			return 1;
		case 5:
			*uParam0 = -1127201651;
			return 1;
		case 6:
			*uParam0 = 1941338030;
			return 1;
		case 7:
			*uParam0 = 181651164;
			return 1;
		case 8:
			*uParam0 = -1328475408;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

struct<2> func_327()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0 = -1;
	return Var0;
}

bool func_328(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1909758928;
							return true;
						case 3:
							*iParam0 = 1162468676;
							return true;
						case 4:
							*iParam0 = -1354372995;
							return true;
						case 5:
							*iParam0 = 127662037;
							return true;
						case 6:
							*iParam0 = -858857622;
							return true;
						case 7:
							*iParam0 = -2062492572;
							return true;
						case 8:
							*iParam0 = -542504583;
							return true;
						case 9:
							*iParam0 = -1827263623;
							return true;
						case 10:
							*iParam0 = -674570242;
							return true;
						case 11:
							*iParam0 = 828828635;
							return true;
						case 12:
							*iParam0 = 1774527635;
							return true;
						case 13:
							*iParam0 = -880550872;
							return true;
						case 14:
							*iParam0 = 1118659955;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1377685326;
							return true;
						case 3:
							*iParam0 = 2122521996;
							return true;
						case 4:
							*iParam0 = -905735271;
							return true;
						case 5:
							*iParam0 = -2041734073;
							return true;
						case 6:
							*iParam0 = 1336229167;
							return true;
						case 7:
							*iParam0 = -142928476;
							return true;
						case 8:
							*iParam0 = 1949899020;
							return true;
						case 9:
							*iParam0 = -1016355603;
							return true;
						case 10:
							*iParam0 = -2060997082;
							return true;
						case 11:
							*iParam0 = 679836386;
							return true;
						case 12:
							*iParam0 = 205850401;
							return true;
						case 13:
							*iParam0 = -9762481;
							return true;
						case 14:
							*iParam0 = -1889013498;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 490528894;
							return true;
						case 3:
							*iParam0 = 1857377268;
							return true;
						case 4:
							*iParam0 = 306779471;
							return true;
						case 5:
							*iParam0 = -265576506;
							return true;
						case 6:
							*iParam0 = 1764499352;
							return true;
						case 7:
							*iParam0 = 343197067;
							return true;
						case 8:
							*iParam0 = 611917374;
							return true;
						case 9:
							*iParam0 = 1319922984;
							return true;
						case 10:
							*iParam0 = 1496774356;
							return true;
						case 11:
							*iParam0 = 241847248;
							return true;
						case 12:
							*iParam0 = 1715260480;
							return true;
						case 13:
							*iParam0 = -972291366;
							return true;
						case 14:
							*iParam0 = -983269631;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 890959011;
							return true;
						case 3:
							*iParam0 = -1889927490;
							return true;
						case 4:
							*iParam0 = 231465939;
							return true;
						case 5:
							*iParam0 = 551112092;
							return true;
						case 6:
							*iParam0 = -1081501637;
							return true;
						case 7:
							*iParam0 = -1816049069;
							return true;
						case 8:
							*iParam0 = 888381965;
							return true;
						case 9:
							*iParam0 = -804165125;
							return true;
						case 10:
							*iParam0 = -741495176;
							return true;
						case 11:
							*iParam0 = -1801783288;
							return true;
						case 12:
							*iParam0 = -2006996000;
							return true;
						case 13:
							*iParam0 = -1114933352;
							return true;
						case 14:
							*iParam0 = 1487250557;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2003217523;
							return true;
						case 3:
							*iParam0 = -399697037;
							return true;
						case 4:
							*iParam0 = -1518699789;
							return true;
						case 5:
							*iParam0 = -997552329;
							return true;
						case 6:
							*iParam0 = 1652001878;
							return true;
						case 7:
							*iParam0 = 186320325;
							return true;
						case 8:
							*iParam0 = -1326803989;
							return true;
						case 9:
							*iParam0 = 737551253;
							return true;
						case 10:
							*iParam0 = 668030318;
							return true;
						case 11:
							*iParam0 = 859105085;
							return true;
						case 12:
							*iParam0 = -594986572;
							return true;
						case 13:
							*iParam0 = -1754685568;
							return true;
						case 14:
							*iParam0 = 570384605;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 496728947;
							return true;
						case 3:
							*iParam0 = 1921848184;
							return true;
						case 4:
							*iParam0 = -546878645;
							return true;
						case 5:
							*iParam0 = -821118254;
							return true;
						case 6:
							*iParam0 = -361944149;
							return true;
						case 7:
							*iParam0 = -1874474629;
							return true;
						case 8:
							*iParam0 = -318877148;
							return true;
						case 9:
							*iParam0 = 932665613;
							return true;
						case 10:
							*iParam0 = -2038176093;
							return true;
						case 11:
							*iParam0 = -667785661;
							return true;
						case 12:
							*iParam0 = 208099752;
							return true;
						case 13:
							*iParam0 = -581256491;
							return true;
						case 14:
							*iParam0 = 894832080;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1051290148;
							return true;
						case 3:
							*iParam0 = -1005545109;
							return true;
						case 4:
							*iParam0 = 1821478065;
							return true;
						case 5:
							*iParam0 = 540188127;
							return true;
						case 6:
							*iParam0 = -1480085904;
							return true;
						case 7:
							*iParam0 = 825496160;
							return true;
						case 8:
							*iParam0 = -628192245;
							return true;
						case 9:
							*iParam0 = -215756895;
							return true;
						case 10:
							*iParam0 = 793896324;
							return true;
						case 11:
							*iParam0 = 1121466671;
							return true;
						case 12:
							*iParam0 = 1834923532;
							return true;
						case 13:
							*iParam0 = -1282408094;
							return true;
						case 14:
							*iParam0 = 383127860;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 684527193;
							return true;
						case 3:
							*iParam0 = -263420923;
							return true;
						case 4:
							*iParam0 = -249784185;
							return true;
						case 5:
							*iParam0 = 1143187053;
							return true;
						case 6:
							*iParam0 = 827657438;
							return true;
						case 7:
							*iParam0 = -1102425647;
							return true;
						case 8:
							*iParam0 = 853839925;
							return true;
						case 9:
							*iParam0 = -1261345136;
							return true;
						case 10:
							*iParam0 = -1516404361;
							return true;
						case 11:
							*iParam0 = 1432174202;
							return true;
						case 12:
							*iParam0 = 1131319157;
							return true;
						case 13:
							*iParam0 = 186094910;
							return true;
						case 14:
							*iParam0 = -1567460112;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("p_crd_2_c01x_gk");
							return true;
						case 3:
							*iParam0 = -1306858058;
							return true;
						case 4:
							*iParam0 = -1611982353;
							return true;
						case 5:
							*iParam0 = 739756370;
							return true;
						case 6:
							*iParam0 = 1801166233;
							return true;
						case 7:
							*iParam0 = -644313522;
							return true;
						case 8:
							*iParam0 = -832951172;
							return true;
						case 9:
							*iParam0 = 1988315838;
							return true;
						case 10:
							*iParam0 = -1001399461;
							return true;
						case 11:
							*iParam0 = 583972710;
							return true;
						case 12:
							*iParam0 = 854868500;
							return true;
						case 13:
							*iParam0 = 629055820;
							return true;
						case 14:
							*iParam0 = -833244723;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1280053851;
							return true;
						case 3:
							*iParam0 = -633466200;
							return true;
						case 4:
							*iParam0 = -1836575021;
							return true;
						case 5:
							*iParam0 = -1110186928;
							return true;
						case 6:
							*iParam0 = 1672340679;
							return true;
						case 7:
							*iParam0 = 2003108760;
							return true;
						case 8:
							*iParam0 = 1877192539;
							return true;
						case 9:
							*iParam0 = -1703049832;
							return true;
						case 10:
							*iParam0 = -1497400706;
							return true;
						case 11:
							*iParam0 = 1971631392;
							return true;
						case 12:
							*iParam0 = -2127206140;
							return true;
						case 13:
							*iParam0 = -2048927458;
							return true;
						case 14:
							*iParam0 = 1630107168;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -949698496;
							return true;
						case 3:
							*iParam0 = 355316014;
							return true;
						case 4:
							*iParam0 = 1604154240;
							return true;
						case 5:
							*iParam0 = -1789343904;
							return true;
						case 6:
							*iParam0 = -50867196;
							return true;
						case 7:
							*iParam0 = -1012504675;
							return true;
						case 8:
							*iParam0 = -159578860;
							return true;
						case 9:
							*iParam0 = 1097950533;
							return true;
						case 10:
							*iParam0 = -1819094497;
							return true;
						case 11:
							*iParam0 = 763417437;
							return true;
						case 12:
							*iParam0 = -1643922980;
							return true;
						case 13:
							*iParam0 = 1726242611;
							return true;
						case 14:
							*iParam0 = -982898598;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -597281244;
							return true;
						case 3:
							*iParam0 = 1859837183;
							return true;
						case 4:
							*iParam0 = -717777272;
							return true;
						case 5:
							*iParam0 = -384065410;
							return true;
						case 6:
							*iParam0 = -426226845;
							return true;
						case 7:
							*iParam0 = -1560133449;
							return true;
						case 8:
							*iParam0 = -1724719987;
							return true;
						case 9:
							*iParam0 = -1506573666;
							return true;
						case 10:
							*iParam0 = -833467841;
							return true;
						case 11:
							*iParam0 = 1913040302;
							return true;
						case 12:
							*iParam0 = -970236810;
							return true;
						case 13:
							*iParam0 = 990091302;
							return true;
						case 14:
							*iParam0 = 918658043;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -403301546;
							return true;
						case 3:
							*iParam0 = 1871423067;
							return true;
						case 4:
							*iParam0 = 1337869136;
							return true;
						case 5:
							*iParam0 = -1544981815;
							return true;
						case 6:
							*iParam0 = 1935838007;
							return true;
						case 7:
							*iParam0 = 1362450780;
							return true;
						case 8:
							*iParam0 = -311392807;
							return true;
						case 9:
							*iParam0 = 1979302072;
							return true;
						case 10:
							*iParam0 = 527759776;
							return true;
						case 11:
							*iParam0 = 972511286;
							return true;
						case 12:
							*iParam0 = 866723984;
							return true;
						case 13:
							*iParam0 = -1501906712;
							return true;
						case 14:
							*iParam0 = 1657044585;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 696549872;
							return true;
						case 3:
							*iParam0 = 1029329299;
							return true;
						case 4:
							*iParam0 = -204176389;
							return true;
						case 5:
							*iParam0 = -605490871;
							return true;
						case 6:
							*iParam0 = -752686013;
							return true;
						case 7:
							*iParam0 = -2098928623;
							return true;
						case 8:
							*iParam0 = 673396831;
							return true;
						case 9:
							*iParam0 = 61996838;
							return true;
						case 10:
							*iParam0 = 707385061;
							return true;
						case 11:
							*iParam0 = -1336887993;
							return true;
						case 12:
							*iParam0 = 1986014158;
							return true;
						case 13:
							*iParam0 = -1279519199;
							return true;
						case 14:
							*iParam0 = -404939929;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1766621235;
							return true;
						case 3:
							*iParam0 = 639465642;
							return true;
						case 4:
							*iParam0 = 538279577;
							return true;
						case 5:
							*iParam0 = 1589664504;
							return true;
						case 6:
							*iParam0 = 1277241365;
							return true;
						case 7:
							*iParam0 = 464078840;
							return true;
						case 8:
							*iParam0 = 1382365335;
							return true;
						case 9:
							*iParam0 = -1642414969;
							return true;
						case 10:
							*iParam0 = 51231304;
							return true;
						case 11:
							*iParam0 = 1283399627;
							return true;
						case 12:
							*iParam0 = 1832068833;
							return true;
						case 13:
							*iParam0 = -1516046037;
							return true;
						case 14:
							*iParam0 = 663524178;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -305746106;
							return true;
						case 3:
							*iParam0 = -208088591;
							return true;
						case 4:
							*iParam0 = 1937181298;
							return true;
						case 5:
							*iParam0 = 707745297;
							return true;
						case 6:
							*iParam0 = -318896190;
							return true;
						case 7:
							*iParam0 = -954744024;
							return true;
						case 8:
							*iParam0 = 930365499;
							return true;
						case 9:
							*iParam0 = -1247282198;
							return true;
						case 10:
							*iParam0 = 1370939361;
							return true;
						case 11:
							*iParam0 = -753399062;
							return true;
						case 12:
							*iParam0 = -977688234;
							return true;
						case 13:
							*iParam0 = -1596094065;
							return true;
						case 14:
							*iParam0 = -373053921;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1387954345;
							return true;
						case 3:
							*iParam0 = -1354962655;
							return true;
						case 4:
							*iParam0 = -804464549;
							return true;
						case 5:
							*iParam0 = 1348814278;
							return true;
						case 6:
							*iParam0 = 657062187;
							return true;
						case 7:
							*iParam0 = 1510162208;
							return true;
						case 8:
							*iParam0 = 2009701297;
							return true;
						case 9:
							*iParam0 = 1853223245;
							return true;
						case 10:
							*iParam0 = -1775176139;
							return true;
						case 11:
							*iParam0 = 617703278;
							return true;
						case 12:
							*iParam0 = -1298938137;
							return true;
						case 13:
							*iParam0 = -1941521224;
							return true;
						case 14:
							*iParam0 = -1676024061;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 391724922;
							return true;
						case 3:
							*iParam0 = 671459626;
							return true;
						case 4:
							*iParam0 = -1487277617;
							return true;
						case 5:
							*iParam0 = -907221559;
							return true;
						case 6:
							*iParam0 = -2131404875;
							return true;
						case 7:
							*iParam0 = 1136582530;
							return true;
						case 8:
							*iParam0 = -2120550211;
							return true;
						case 9:
							*iParam0 = -281297502;
							return true;
						case 10:
							*iParam0 = 892072825;
							return true;
						case 11:
							*iParam0 = 1611660243;
							return true;
						case 12:
							*iParam0 = -1248904689;
							return true;
						case 13:
							*iParam0 = -2000963135;
							return true;
						case 14:
							*iParam0 = -328923850;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2037189536;
							return true;
						case 3:
							*iParam0 = -2045530267;
							return true;
						case 4:
							*iParam0 = 2045295050;
							return true;
						case 5:
							*iParam0 = 1726116464;
							return true;
						case 6:
							*iParam0 = 136818655;
							return true;
						case 7:
							*iParam0 = 657382278;
							return true;
						case 8:
							*iParam0 = 1404937476;
							return true;
						case 9:
							*iParam0 = -1888826317;
							return true;
						case 10:
							*iParam0 = 681653557;
							return true;
						case 11:
							*iParam0 = -721735422;
							return true;
						case 12:
							*iParam0 = 965390753;
							return true;
						case 13:
							*iParam0 = 72733444;
							return true;
						case 14:
							*iParam0 = 2080330127;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -446539351;
							return true;
						case 3:
							*iParam0 = -1722641930;
							return true;
						case 4:
							*iParam0 = 243348692;
							return true;
						case 5:
							*iParam0 = -2096430697;
							return true;
						case 6:
							*iParam0 = 1941234074;
							return true;
						case 7:
							*iParam0 = 990323913;
							return true;
						case 8:
							*iParam0 = -1593509009;
							return true;
						case 9:
							*iParam0 = -1941079438;
							return true;
						case 10:
							*iParam0 = 948933843;
							return true;
						case 11:
							*iParam0 = -1393933166;
							return true;
						case 12:
							*iParam0 = 1865479666;
							return true;
						case 13:
							*iParam0 = 1475987833;
							return true;
						case 14:
							*iParam0 = 1464992706;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 940287542;
							return true;
						case 3:
							*iParam0 = 790418313;
							return true;
						case 4:
							*iParam0 = -2116754376;
							return true;
						case 5:
							*iParam0 = 1317169409;
							return true;
						case 6:
							*iParam0 = 1033660954;
							return true;
						case 7:
							*iParam0 = 124978929;
							return true;
						case 8:
							*iParam0 = -725520485;
							return true;
						case 9:
							*iParam0 = -1172744195;
							return true;
						case 10:
							*iParam0 = 1815096273;
							return true;
						case 11:
							*iParam0 = 1304006097;
							return true;
						case 12:
							*iParam0 = -1300766016;
							return true;
						case 13:
							*iParam0 = -250573840;
							return true;
						case 14:
							*iParam0 = -1824431250;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 80437487;
							return true;
						case 3:
							*iParam0 = -11479234;
							return true;
						case 4:
							*iParam0 = 1490589553;
							return true;
						case 5:
							*iParam0 = -1110583329;
							return true;
						case 6:
							*iParam0 = -1753679949;
							return true;
						case 7:
							*iParam0 = 1137688840;
							return true;
						case 8:
							*iParam0 = -1710863708;
							return true;
						case 9:
							*iParam0 = 2130883601;
							return true;
						case 10:
							*iParam0 = -1779427821;
							return true;
						case 11:
							*iParam0 = -48560774;
							return true;
						case 12:
							*iParam0 = -1378832890;
							return true;
						case 13:
							*iParam0 = -1337061193;
							return true;
						case 14:
							*iParam0 = -962473954;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -140928778;
							return true;
						case 3:
							*iParam0 = 1767974563;
							return true;
						case 4:
							*iParam0 = 701349000;
							return true;
						case 5:
							*iParam0 = -2012550923;
							return true;
						case 6:
							*iParam0 = -802659006;
							return true;
						case 7:
							*iParam0 = 1535788576;
							return true;
						case 8:
							*iParam0 = -539132616;
							return true;
						case 9:
							*iParam0 = -355413556;
							return true;
						case 10:
							*iParam0 = 125575728;
							return true;
						case 11:
							*iParam0 = 1392136522;
							return true;
						case 12:
							*iParam0 = -1089443358;
							return true;
						case 13:
							*iParam0 = 1496031634;
							return true;
						case 14:
							*iParam0 = -1494400830;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 877243702;
							return true;
						case 3:
							*iParam0 = -30406831;
							return true;
						case 4:
							*iParam0 = 1507721315;
							return true;
						case 5:
							*iParam0 = 220923946;
							return true;
						case 6:
							*iParam0 = 386780259;
							return true;
						case 7:
							*iParam0 = 679225015;
							return true;
						case 8:
							*iParam0 = -130832693;
							return true;
						case 9:
							*iParam0 = -1857759931;
							return true;
						case 10:
							*iParam0 = -1549381684;
							return true;
						case 11:
							*iParam0 = -1306599616;
							return true;
						case 12:
							*iParam0 = -1317905551;
							return true;
						case 13:
							*iParam0 = -1489968742;
							return true;
						case 14:
							*iParam0 = 274824986;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 345349862;
							return true;
						case 3:
							*iParam0 = 233738904;
							return true;
						case 4:
							*iParam0 = 1509393818;
							return true;
						case 5:
							*iParam0 = 60813080;
							return true;
						case 6:
							*iParam0 = -1588867364;
							return true;
						case 7:
							*iParam0 = -741971058;
							return true;
						case 8:
							*iParam0 = -1901598027;
							return true;
						case 9:
							*iParam0 = 216857924;
							return true;
						case 10:
							*iParam0 = -1696859616;
							return true;
						case 11:
							*iParam0 = 1250297936;
							return true;
						case 12:
							*iParam0 = -1324063231;
							return true;
						case 13:
							*iParam0 = 1618412160;
							return true;
						case 14:
							*iParam0 = -628673108;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1336484459;
							return true;
						case 3:
							*iParam0 = 776262968;
							return true;
						case 4:
							*iParam0 = 1952745955;
							return true;
						case 5:
							*iParam0 = -1067714914;
							return true;
						case 6:
							*iParam0 = 251115602;
							return true;
						case 7:
							*iParam0 = 1575451247;
							return true;
						case 8:
							*iParam0 = -746735956;
							return true;
						case 9:
							*iParam0 = 326673134;
							return true;
						case 10:
							*iParam0 = 1872027280;
							return true;
						case 11:
							*iParam0 = -1718732108;
							return true;
						case 12:
							*iParam0 = -1092024524;
							return true;
						case 13:
							*iParam0 = 2071887039;
							return true;
						case 14:
							*iParam0 = -1106339162;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1066627194;
							return true;
						case 3:
							*iParam0 = -799997502;
							return true;
						case 4:
							*iParam0 = 398382432;
							return true;
						case 5:
							*iParam0 = -766490354;
							return true;
						case 6:
							*iParam0 = 834493370;
							return true;
						case 7:
							*iParam0 = -627280631;
							return true;
						case 8:
							*iParam0 = -1689944957;
							return true;
						case 9:
							*iParam0 = -1081837586;
							return true;
						case 10:
							*iParam0 = 1994269490;
							return true;
						case 11:
							*iParam0 = 98506870;
							return true;
						case 12:
							*iParam0 = 828661392;
							return true;
						case 13:
							*iParam0 = -1902382615;
							return true;
						case 14:
							*iParam0 = -1749931149;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1612375921;
							return true;
						case 3:
							*iParam0 = -464036502;
							return true;
						case 4:
							*iParam0 = -1734626244;
							return true;
						case 5:
							*iParam0 = 1432065580;
							return true;
						case 6:
							*iParam0 = -269373164;
							return true;
						case 7:
							*iParam0 = -1462036161;
							return true;
						case 8:
							*iParam0 = 9214594;
							return true;
						case 9:
							*iParam0 = -449150372;
							return true;
						case 10:
							*iParam0 = -676777548;
							return true;
						case 11:
							*iParam0 = 2045572790;
							return true;
						case 12:
							*iParam0 = 247170975;
							return true;
						case 13:
							*iParam0 = 2011504438;
							return true;
						case 14:
							*iParam0 = 1380910900;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1327784484;
							return true;
						case 3:
							*iParam0 = -1496419081;
							return true;
						case 4:
							*iParam0 = 769946245;
							return true;
						case 5:
							*iParam0 = -744715350;
							return true;
						case 6:
							*iParam0 = -1578164439;
							return true;
						case 7:
							*iParam0 = 124531649;
							return true;
						case 8:
							*iParam0 = 28598465;
							return true;
						case 9:
							*iParam0 = 1620556079;
							return true;
						case 10:
							*iParam0 = 1251463005;
							return true;
						case 11:
							*iParam0 = -602401997;
							return true;
						case 12:
							*iParam0 = -363611516;
							return true;
						case 13:
							*iParam0 = -1631692560;
							return true;
						case 14:
							*iParam0 = -771839452;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 729415757;
							return true;
						case 3:
							*iParam0 = 946889695;
							return true;
						case 4:
							*iParam0 = 1738209787;
							return true;
						case 5:
							*iParam0 = 609774326;
							return true;
						case 6:
							*iParam0 = -814389520;
							return true;
						case 7:
							*iParam0 = -1586099842;
							return true;
						case 8:
							*iParam0 = 1273393517;
							return true;
						case 9:
							*iParam0 = -1140616583;
							return true;
						case 10:
							*iParam0 = 675667608;
							return true;
						case 11:
							*iParam0 = -359677198;
							return true;
						case 12:
							*iParam0 = 1703181487;
							return true;
						case 13:
							*iParam0 = -1127742830;
							return true;
						case 14:
							*iParam0 = -1294625031;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -238808491;
							return true;
						case 3:
							*iParam0 = -610087366;
							return true;
						case 4:
							*iParam0 = -2113376606;
							return true;
						case 5:
							*iParam0 = -1658822997;
							return true;
						case 6:
							*iParam0 = 458077008;
							return true;
						case 7:
							*iParam0 = -1479991672;
							return true;
						case 8:
							*iParam0 = -974205616;
							return true;
						case 9:
							*iParam0 = -1915480358;
							return true;
						case 10:
							*iParam0 = -1427302413;
							return true;
						case 11:
							*iParam0 = 1297056981;
							return true;
						case 12:
							*iParam0 = -1238217619;
							return true;
						case 13:
							*iParam0 = 1844773640;
							return true;
						case 14:
							*iParam0 = 1541545551;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 461545493;
							return true;
						case 3:
							*iParam0 = 760481963;
							return true;
						case 4:
							*iParam0 = -1747528191;
							return true;
						case 5:
							*iParam0 = 1706339276;
							return true;
						case 6:
							*iParam0 = -787395957;
							return true;
						case 7:
							*iParam0 = 1254414564;
							return true;
						case 8:
							*iParam0 = -973839534;
							return true;
						case 9:
							*iParam0 = 964732302;
							return true;
						case 10:
							*iParam0 = 1965573369;
							return true;
						case 11:
							*iParam0 = 1273174558;
							return true;
						case 12:
							*iParam0 = -1366850746;
							return true;
						case 13:
							*iParam0 = 640816886;
							return true;
						case 14:
							*iParam0 = 1582547899;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1806179115;
							return true;
						case 3:
							*iParam0 = 1395346866;
							return true;
						case 4:
							*iParam0 = -109213256;
							return true;
						case 5:
							*iParam0 = -1416742002;
							return true;
						case 6:
							*iParam0 = -1615357250;
							return true;
						case 7:
							*iParam0 = -486577432;
							return true;
						case 8:
							*iParam0 = 1488031426;
							return true;
						case 9:
							*iParam0 = -1158386201;
							return true;
						case 10:
							*iParam0 = -685512585;
							return true;
						case 11:
							*iParam0 = -545482240;
							return true;
						case 12:
							*iParam0 = 1170207075;
							return true;
						case 13:
							*iParam0 = 829062722;
							return true;
						case 14:
							*iParam0 = 913568525;
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1372376306;
							return true;
						case 3:
							*iParam0 = -1994390239;
							return true;
						case 4:
							*iParam0 = 1200601581;
							return true;
						case 5:
							*iParam0 = -1632804958;
							return true;
						case 6:
							*iParam0 = -470085637;
							return true;
						case 7:
							*iParam0 = -53460943;
							return true;
						case 8:
							*iParam0 = 793294898;
							return true;
						case 9:
							*iParam0 = -525444146;
							return true;
						case 10:
							*iParam0 = 1136760211;
							return true;
						case 11:
							*iParam0 = -418497553;
							return true;
						case 12:
							*iParam0 = -2106116472;
							return true;
						case 13:
							*iParam0 = 677599687;
							return true;
						case 14:
							*iParam0 = 150094641;
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 372300590;
							return true;
						case 3:
							*iParam0 = -1894075093;
							return true;
						case 4:
							*iParam0 = -807400872;
							return true;
						case 5:
							*iParam0 = 850233799;
							return true;
						case 6:
							*iParam0 = 1063877511;
							return true;
						case 7:
							*iParam0 = -1378538896;
							return true;
						case 8:
							*iParam0 = -125455747;
							return true;
						case 9:
							*iParam0 = -111972905;
							return true;
						case 10:
							*iParam0 = 861776066;
							return true;
						case 11:
							*iParam0 = 1904627018;
							return true;
						case 12:
							*iParam0 = -1833532042;
							return true;
						case 13:
							*iParam0 = -1778822384;
							return true;
						case 14:
							*iParam0 = 1868940630;
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1059972971;
							return true;
						case 3:
							*iParam0 = 1245102704;
							return true;
						case 4:
							*iParam0 = 857443476;
							return true;
						case 5:
							*iParam0 = -1967131166;
							return true;
						case 6:
							*iParam0 = 2056035715;
							return true;
						case 7:
							*iParam0 = 692065755;
							return true;
						case 8:
							*iParam0 = 962251301;
							return true;
						case 9:
							*iParam0 = 487320741;
							return true;
						case 10:
							*iParam0 = 1501334946;
							return true;
						case 11:
							*iParam0 = 820339735;
							return true;
						case 12:
							*iParam0 = 285984845;
							return true;
						case 13:
							*iParam0 = 1972352444;
							return true;
						case 14:
							*iParam0 = 1101400672;
							return true;
						default:
							break;
					}
					break;
			}
			break;
		default:
			return false;
	}
	switch (iParam3)
	{
		case 0:
			*iParam0 = -1360732541;
			return false;
		case 1:
			*iParam0 = 319638501;
			return false;
		case 2:
			*iParam0 = -97213200;
			return false;
		case 3:
			*iParam0 = 1884526773;
			return false;
		case 4:
			*iParam0 = -1797228166;
			return false;
		case 5:
			*iParam0 = -1385386118;
			return false;
		case 6:
			*iParam0 = -2065276132;
			return false;
		case 7:
			*iParam0 = -273401568;
			return false;
		case 8:
			*iParam0 = 188870715;
			return false;
		default:
			break;
	}
	return false;
	if (bParam4)
	{
	}
	return false;
}

void func_329(var uParam0, vector3 vParam1)
{
	if (uParam0->f_762 >= 20)
	{
	}
	else
	{
		*(uParam0->f_701[uParam0->f_762 /*3*/]) = { vParam1 };
		uParam0->f_762++;
	}
}

void func_330(var uParam0, vector3 vParam1)
{
	uParam0->f_766 = 1;
	uParam0->f_763 = { vParam1 };
}

char* func_331(var uParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, "clipset@", 64);
	StringConCat(&cVar0, uParam0->f_1274[iParam1 /*8*/], 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

char* func_332(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	Var0 = { *(uParam0->f_4[iParam1 /*8*/]) };
	StringConCat(&Var0, "@", 64);
	StringConCat(&Var0, uParam0->f_21[iParam2 /*8*/], 64);
	return HUD::_0xD8402B858F4DDD88(&Var0, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0));
}

void func_333(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
		case 1:
			StringCopy(&cVar0, "lightrig@poker_cards_generic_dark", 64);
			break;
		case 2:
			StringCopy(&cVar0, "lightrig@poker_cards_tumbleweed", 64);
			break;
		case 3:
			StringCopy(&cVar0, "lightrig@poker_cards_swanson_station", 64);
			break;
		default:
			StringCopy(&cVar0, "lightrig@poker_cards_generic", 64);
			break;
	}
	if (bParam2)
	{
		uParam0->f_805 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, "plMain", false, true);
	}
	else
	{
		uParam0->f_805 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, "plMain_noBlend", false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_805))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_805);
	}
}

void func_334(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_916(uParam0, iVar0);
		iVar0++;
	}
}

void func_335(var uParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 2)
	{
		uParam0->f_798 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@mp_enters_male", 0, "PBL_ENTER_BASE_02", false, true);
	}
	else if (iParam1 == 1)
	{
		uParam0->f_798 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@mp_enters_male", 0, "PBL_ENTER_BASE_CAMP_02", false, true);
	}
	else if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 4)
	{
		uParam0->f_798 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@mp_enters_female", 0, "PBL_ENTER_FEM_BASE_CAMP_02", false, true);
	}
	else
	{
		uParam0->f_798 = -1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_798))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_798);
	}
}

void func_336(var uParam0, int iParam1)
{
	ANIMSCENE::_0xB727A847862CB00A(func_917(iParam1));
	uParam0->f_806 = iParam1;
}

int func_337(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			return 1;
		case 1:
			*iParam1 = 4;
			return 1;
		case 2:
			*iParam1 = 0;
			return 1;
		case 3:
			*iParam1 = 7;
			return 1;
		case 4:
			*iParam1 = 1;
			return 1;
		case 5:
			*iParam1 = 6;
			return 1;
		case 6:
			*iParam1 = 2;
			return 1;
		case 7:
			*iParam1 = 8;
			return 1;
		case 8:
			*iParam1 = 3;
			return 1;
		default:
			break;
	}
	*iParam1 = 5;
	return 0;
}

void func_338(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	uParam0->f_164++;
	*uParam0 = iParam1;
	uParam0->f_2 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1534086282);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MinigamesDataStore");
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "gameSettings");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "totalsStack");
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_23, "isVisible", true);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_23, "totalsTextItemData");
	func_918(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_23, "totalsItemArray");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_24);
	func_919(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_23, "communityGameTokenItemArray");
		iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_23, "communityGameTokenItemData");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(iVar4);
		bVar0 = false;
		while (bVar0 < uParam0->f_17)
		{
			StringCopy(&cVar2, "", 8);
			StringIntConCat(&cVar2, bVar0, 8);
			iVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar5, &cVar2);
			uParam0->f_17[bVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar6, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iVar4, bVar0, "single_game_token_big", iVar6);
			bVar0++;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, false, "community_cards", uParam0->f_23);
		iVar1 = 1;
	}
	bVar0 = false;
	while (bVar0 < uParam0->f_10)
	{
		StringCopy(&cVar2, "", 8);
		StringIntConCat(&cVar2, bVar0, 8);
		uParam0->f_10[bVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar3, &cVar2);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, (bVar0 + iVar1), "money_with_text", &(uParam0->f_10[bVar0]));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_10[bVar0]), "moneyText", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_10[bVar0]), "text", "");
		bVar0++;
	}
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "playerStack");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_7, "playerData");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_7, "playerList");
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_7, "isVisible", true);
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "bettingControl");
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isVisible", false);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar7, "text", "");
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isLeftArrowVisible", false);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isRightArrowVisible", false);
	iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "centralScoretimer");
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, "timerString", "18:88");
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	func_920(uParam0, 2);
}

void func_339(var uParam0, bool bParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	func_921(uParam0, uParam0->f_34[bParam1 /*21*/], bParam1, sParam2, sParam3, bParam4, bParam5);
}

bool func_340(var uParam0)
{
	if (ANIMSCENE::_0xFDFC14799373283F(func_917(uParam0->f_806)))
	{
		return true;
	}
	return false;
}

void func_341(var uParam0)
{
	if (uParam0->f_807 != -1)
	{
	}
	else
	{
		uParam0->f_807 = ANIMSCENE::_0xA1300DE03E5D1973(func_917(uParam0->f_806));
	}
}

bool func_343(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_798))
	{
		return true;
	}
	else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_798, 1, 0))
	{
		return true;
	}
	return false;
}

void func_345(var uParam0, bool bParam1)
{
	func_922(uParam0, bParam1);
	func_923(uParam0);
}

void func_347(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar10;
	int iVar11;
	int iVar12;

	uVar0 = (uParam0->f_66 && -1 ^ (uParam0->f_69 || uParam0->f_70));
	iVar1 = (uVar0 && uParam0->f_67);
	if (iVar1 != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
		{
			iVar3 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar10);
			switch (iVar3)
			{
				case -1126217932:
					if (SCRIPTS::GET_EVENT_DATA(1, iVar10, &Var4, 6))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (MISC::IS_BIT_SET(iVar1, iVar2))
							{
								if (((&uParam0->f_53[iVar2 /*4*/] == Var4 && (uParam0->f_53[iVar2 /*4*/])->f_1 == Var4.f_1) && (uParam0->f_53[iVar2 /*4*/])->f_2 == Var4.f_2) && (uParam0->f_53[iVar2 /*4*/])->f_3 == Var4.f_3)
								{
									if (Var4.f_4)
									{
										MISC::SET_BIT(&(uParam0->f_69), iVar2);
									}
									else
									{
										MISC::SET_BIT(&(uParam0->f_70), iVar2);
									}
								}
							}
							iVar2++;
						}
					}
					break;
			}
			iVar10++;
		}
	}
	iVar11 = (uVar0 && -1 ^ uParam0->f_67);
	if (iVar11 != 0)
	{
		iVar12 = 0;
		while (iVar12 < 3)
		{
			if (MISC::IS_BIT_SET(iVar11, iVar12))
			{
				if (!MINIGAME::_MINIGAME_IS_REQUEST_PENDING(uParam0->f_53[iVar12 /*4*/]))
				{
					MISC::SET_BIT(&(uParam0->f_69), iVar12);
				}
			}
			iVar12++;
		}
	}
}

void func_348(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1475.f_6, iVar0))
			{
				if (!func_927(uParam0->f_1475, iVar0))
				{
					func_928(&(uParam0->f_1475), iVar0, uParam0->f_1472);
				}
				else
				{
					func_929(&(uParam0->f_1475), iVar0, &(uParam0->f_1475[iVar0]));
				}
			}
			else if (func_930(&(uParam0->f_1475), iVar0))
			{
				func_931(&(uParam0->f_1475), iVar0);
			}
			iVar0++;
		}
		uParam0->f_1472++;
		if (uParam0->f_1472 >= 32)
		{
			uParam0->f_1472 = 0;
		}
	}
}

void func_349(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (MISC::IS_BIT_SET(uParam0->f_1475.f_15, iParam1))
	{
		MISC::SET_BIT(&(uParam0->f_1475.f_16), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1475.f_16), iParam1);
	}
	uParam0->f_1475.f_8[iParam1] = iParam2;
	if (bParam3)
	{
		MISC::SET_BIT(&(uParam0->f_1475.f_15), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1475.f_15), iParam1);
	}
}

void func_354(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			(uParam0->f_1475.f_17[iVar2 /*9*/])->f_5 = uParam1;
			(uParam0->f_1475.f_17[iVar2 /*9*/])->f_6 = uParam2;
			(uParam0->f_1475.f_17[iVar2 /*9*/])->f_7 = bParam3;
		}
	}
}

bool func_355(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] != 0)
		{
			if (!func_806(uParam0, iVar0, bParam1))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_356(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_617(uParam1, iVar0))
		{
			if (func_629(func_628(uParam1, iVar0, 0)) && func_629(func_628(uParam1, iVar0, 1)))
			{
				func_630(&(uParam0->f_2839), iVar0, func_628(uParam1, iVar0, 0), func_628(uParam1, iVar0, 1), 0);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		func_688(&(uParam0->f_2839), iVar1, func_934(uParam1, iVar1), 0);
		iVar1++;
	}
}

bool func_357(var uParam0)
{
	if (!func_935(&(uParam0->f_2839)))
	{
		return false;
	}
	if (!func_936(&(uParam0->f_2839)))
	{
		return false;
	}
	return true;
}

int func_360(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1 /*28*/] != 1)
	{
		return 255;
	}
	return (uParam0->f_71[iParam1 /*28*/])->f_18;
}

void func_361(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			if (&uParam0->f_173[iVar0] != 0)
			{
				func_438(uParam0, iVar0);
			}
		}
		iVar0++;
	}
	Var1 = 2;
	Var1.f_1 = 2;
	Var1.f_3 = 0;
	SCRIPTS::_0xDE544B7EC0C187CC(&(Var1.f_2));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			if (iParam2[iVar0] == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2[iVar0]))
			{
				aggregate_func_5019(uParam0, iVar0, 4);
			}
			else
			{
				aggregate_func_5019(uParam0, iVar0, 1);
				uParam0->f_180[iVar0] = iParam2[iVar0];
				uParam0->f_187[iVar0] = MISC::GET_GAME_TIMER() + 17500;
				SCRIPTS::_0x31010318BA9897AC(&(Var1.f_2), iParam2[iVar0]);
			}
		}
		iVar0++;
	}
	if (SCRIPTS::COUNT_PLAYER_BITS(&(Var1.f_2)) > 0)
	{
		aggregate_func_457(&Var1);
	}
}

bool func_362(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1 /*28*/] != 0)
	{
		return (uParam0->f_71[iParam1 /*28*/])->f_17;
	}
	return false;
}

bool func_363(var uParam0, int iParam1, var uParam2)
{
	if (&uParam0->f_71[iParam1 /*28*/] != 1)
	{
		return false;
	}
	if (!(uParam0->f_71[iParam1 /*28*/])->f_26)
	{
		return false;
	}
	*uParam2 = { (uParam0->f_71[iParam1 /*28*/])->f_19 };
	return true;
}

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_365(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (&uParam0->f_71[iParam1 /*28*/] != 0)
	{
		StringCopy(&((uParam0->f_71[iParam1 /*28*/])->f_1), sParam2, 128);
		(uParam0->f_71[iParam1 /*28*/])->f_17 = iParam3;
		return;
	}
}

bool func_366(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;
	int iVar1;

	*iParam4 = 0;
	*iParam5 = -1;
	if ((iParam3 == 255 || PLAYER::IS_PLAYER_DEAD(iParam3)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam3))
	{
		bVar0 = false;
		bVar0 = func_941(&(uParam0->f_151), iParam1, iParam2);
		iVar1 = func_145(uParam0->f_39, uParam0->f_42, -1, bVar0);
		if (iVar1 != 0)
		{
			*iParam4 = aggregate_func_2073(iVar1, uParam0->f_2839, 0f, 0, 0, 0, 1, 1, 1, 0, 0);
			if (!PED::IS_PED_INJURED(*iParam4))
			{
				*iParam5 = func_944(2, func_943(&(uParam0->f_2839)), bVar0);
				func_945(*iParam4, 2, uParam0->f_42, *iParam5, bVar0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*iParam4, "Poker_NPC_Group", 0f);
			}
		}
	}
	else
	{
		*iParam4 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(iParam3), 0f, false, false);
		if (!PED::IS_PED_INJURED(*iParam4))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*iParam4, "Poker_NPC_Group", 0f);
		}
	}
	if (PED::IS_PED_INJURED(*iParam4))
	{
		return false;
	}
	return true;
}

void func_367(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_1442[iParam1] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else
	{
		uParam0->f_1442[iParam1] = iParam2;
		if (bParam3)
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam2, false);
			ENTITY::SET_ENTITY_COLLISION(iParam2, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam2, true);
		}
	}
}

void func_368(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] == 1 || &uParam0->f_173[iVar0] == 2)
		{
			uParam0->f_187[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

bool func_369(var uParam0, int iParam1)
{
	return !PED::IS_PED_INJURED(&(uParam0->f_1442[iParam1]));
}

bool func_370(var uParam0, int iParam1)
{
	return (!PED::IS_PED_INJURED(&(uParam0->f_1442[iParam1])) && PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_1442[iParam1])));
}

void func_372()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 176)
	{
		func_946();
		iVar0++;
	}
}

void func_373(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (uParam0->f_788 >= 20)
	{
	}
	else
	{
		aggregate_func_400(iParam1, 0, 0);
		if (bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam1, fParam3, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam1, 1);
		}
		uParam0->f_767[uParam0->f_788] = iParam1;
		uParam0->f_788++;
	}
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 81:
			return 0;
		case 80:
			return 1;
		case 40:
			return 2;
		case 121:
			return 3;
		case 5:
			return 4;
	}
	return 0;
}

bool func_377(var[] uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, int iParam18)
{
	if (&uParam0[iParam18] == iParam17)
	{
		return true;
	}
	return false;
}

bool func_378(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (iParam1 == 0)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_379(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		iVar0 = uParam0->f_1396 + 1;
		iVar1 = (uParam0->f_1388.f_2 - iVar0);
		return iVar1 < 0;
	}
	return false;
}

bool func_380(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1995414514 && MISC::IS_BIT_SET(uParam0->f_1388.f_3, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_381(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (&uParam1->f_1557[iParam2 /*8*/] != 0)
	{
		return 0;
	}
	uParam1->f_1557[iParam2 /*8*/] = iParam3;
	(uParam1->f_1557[iParam2 /*8*/])->f_1 = 0;
	aggregate_func_4283(&((uParam1->f_1557[iParam2 /*8*/])->f_2));
	if (bParam4)
	{
		func_384(uParam0, uParam1, iParam2);
	}
	return 1;
}

void func_382(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_181(uParam1);
	}
	aggregate_func_4242(uParam0, iParam2);
	func_788(uParam0, uParam1, aggregate_func_8371(uParam0), 1);
}

void func_383(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_1552;
	iVar1 = 0;
	Stack.Push(uParam1->f_1552 != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_1552));
	Call_Loc(&uParam1->f_1418[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_384(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = &uParam1->f_1557[iParam2 /*8*/];
	iVar1 = 0;
	Stack.Push(&uParam1->f_1557[iParam2 /*8*/] != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam1->f_1557[iParam2 /*8*/]);
	Stack.Push(iParam2);
	Call_Loc(&uParam1->f_1425[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_385(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_1606;
	iVar1 = 0;
	Stack.Push(uParam1->f_1606 != 0);
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_1606));
	Call_Loc(&uParam1->f_1431[iVar0]);
	while ((StackVal && StackVal) && iVar1 < 10)
	{
		iVar1++;
	}
}

bool func_386(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1592704673 && uParam0->f_1388.f_3 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_387(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (uParam0->f_1388 == -1857735811)
	{
		if (bParam2)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 == 1592704673 && MISC::IS_BIT_SET(uParam0->f_1388.f_3, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_388(var uParam0, var uParam1)
{
	if (uParam1->f_1450 && uParam1->f_1452 == 0)
	{
		if (func_200(&(uParam1->f_416), uParam1->f_9))
		{
			if (func_662(uParam1, 1))
			{
				uParam1->f_1450 = 0;
				uParam1->f_1451 = 0;
				uParam1->f_1452 = 0;
			}
			else if (func_951(uParam1, 1))
			{
				uParam1->f_1452 = uParam1->f_1451;
				func_814(uParam0, uParam1->f_9, func_618(uParam0, uParam1->f_9));
				func_815(uParam0, uParam1->f_9, func_618(uParam0, uParam1->f_9));
			}
		}
	}
}

void func_389(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!uParam1->f_1450)
	{
		bVar0 = false;
		bVar1 = false;
		iVar2 = 0;
		bVar0 = func_403(uParam1, 1);
		if ((((func_200(&(uParam1->f_416), uParam1->f_9) && aggregate_func_5974(&(uParam1->f_416), uParam1->f_9) == 0) && aggregate_func_2020() >= func_953(uParam0, uParam1->f_11.f_12)) && !func_954(uParam0)) && !bVar0)
		{
			if (uParam1->f_2050 == 0)
			{
				bVar1 = !func_617(&(uParam1->f_416), uParam1->f_9);
				iVar2 = aggregate_func_5974(&(uParam1->f_416), uParam1->f_9);
			}
			else if (uParam1->f_2050 == 1)
			{
				bVar1 = true;
				iVar2 = aggregate_func_5974(&(uParam1->f_416), uParam1->f_9);
			}
		}
		if (bVar1)
		{
			if (!aggregate_func_4287(&(uParam0->f_2335)))
			{
				func_957(&(uParam0->f_2335), uParam0, &(uParam1->f_11), iVar2);
			}
			else
			{
				if (iVar2 != 0 && !aggregate_func_7212(uParam0))
				{
					func_959(uParam0, iVar2);
				}
				if (func_960(&(uParam0->f_2335), uParam0, &(uParam1->f_11)))
				{
					if (func_962(uParam1, uParam1->f_9, aggregate_func_4787(&(uParam0->f_2335))))
					{
						uParam1->f_1450 = 1;
						uParam1->f_1451 = aggregate_func_4787(&(uParam0->f_2335));
						uParam1->f_1452 = 0;
						func_963(&(uParam0->f_2335), uParam0);
					}
				}
			}
		}
		else if (aggregate_func_4287(&(uParam0->f_2335)))
		{
			func_963(&(uParam0->f_2335), uParam0);
		}
	}
}

bool func_390(var uParam0, int iParam1)
{
	if (aggregate_func_2514(uParam0->f_38))
	{
		*iParam1 = 8;
		return true;
	}
	if (aggregate_func_9348(uParam0->f_38, 700892038))
	{
		*iParam1 = 8;
		return true;
	}
	if (func_139(&(uParam0->f_151), 2) && func_964())
	{
		*iParam1 = 10;
		return true;
	}
	*iParam1 = 0;
	return false;
}

void func_391(var uParam0)
{
	func_965(uParam0, &(uParam0->f_151));
	if (uParam0->f_151.f_2051)
	{
		func_966(uParam0, &(uParam0->f_151.f_416));
	}
}

void func_392(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	struct<16> Var8;
	bool bVar24;

	bVar1 = ((!CAM::_0xA24C1D341C6E0D53(0, 0, 0) && (uParam1->f_1547 == 5 || uParam1->f_1547 == 6)) && (uParam1->f_1548 == 26 || uParam1->f_1548 == 27));
	if (((func_200(&(uParam1->f_416), uParam1->f_9) && func_617(&(uParam1->f_416), uParam1->f_9)) && !aggregate_func_4625()) && ((uParam0->f_151.f_1547 == 3 || uParam0->f_151.f_1547 == 5) || uParam0->f_151.f_1547 == 4))
	{
		func_967(&(uParam0->f_2335), 1);
		func_968(&(uParam0->f_2335), 1);
		func_969(&(uParam0->f_2335), 1);
	}
	else
	{
		func_967(&(uParam0->f_2335), 0);
		func_968(&(uParam0->f_2335), 0);
		func_969(&(uParam0->f_2335), 0);
	}
	if ((((func_207(&(uParam0->f_2839), uParam0->f_151.f_9) && aggregate_func_5974(&(uParam0->f_2839), uParam0->f_151.f_9) == 2) && !func_608(&(uParam0->f_2839), uParam0->f_151.f_9, 7)) && !func_608(&(uParam0->f_2839), uParam0->f_151.f_9, 9)) && !bVar1)
	{
		aggregate_func_9386(&(uParam0->f_2335), 0);
	}
	else
	{
		aggregate_func_9386(&(uParam0->f_2335), 1);
	}
	if (func_971(&(uParam0->f_2839), 0) && !bVar1)
	{
		aggregate_func_9386(&(uParam0->f_2335), 0);
	}
	else
	{
		aggregate_func_9386(&(uParam0->f_2335), 1);
	}
	if (bVar1)
	{
		aggregate_func_9386(&(uParam0->f_2335), 1);
	}
	else
	{
		aggregate_func_9386(&(uParam0->f_2335), 0);
	}
	func_974(&(uParam0->f_2335), 1);
	if (aggregate_func_1549(uParam0->f_2335.f_499, 1) && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_975(&(uParam0->f_2335));
	}
	else
	{
		func_461(&(uParam0->f_2335));
	}
	if (uParam0->f_4242.f_1)
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = -1;
		iVar5 = -1;
		fVar6 = 0f;
		if (uParam0->f_151.f_2065)
		{
			iVar2 = 3;
		}
		else if (uParam0->f_4242.f_2 == 4)
		{
			if (func_595(&(uParam0->f_2839), uParam0->f_151.f_9, 3))
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4242.f_6 < 5)
			{
				if (uParam0->f_4242.f_6 == 3)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(24.97928f, 1065353216 /* Float: 1f */);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iVar2 = 4;
				uParam0->f_4242.f_6++;
			}
			else
			{
				iVar2 = 0;
			}
		}
		else
		{
			bVar7 = false;
			switch (uParam0->f_4242.f_2)
			{
				case 0:
					if (func_976(uParam0->f_2335.f_494) || bVar7)
					{
						iVar2 = 2;
					}
					else if (func_976(uParam0->f_2335.f_495))
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					break;
				case 2:
					if (func_976(uParam0->f_2335.f_495))
					{
						iVar2 = 1;
					}
					else if (!(aggregate_func_6347(uParam0->f_2335.f_494) || bVar7))
					{
						if (aggregate_func_6347(uParam0->f_2335.f_495))
						{
							iVar2 = 1;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 2;
					}
					break;
				case 1:
					if (func_976(uParam0->f_2335.f_494) || bVar7)
					{
						iVar2 = 2;
					}
					else if (!aggregate_func_6347(uParam0->f_2335.f_495))
					{
						if (aggregate_func_6347(uParam0->f_2335.f_494))
						{
							iVar2 = 2;
						}
						else
						{
							iVar2 = 0;
						}
					}
					else
					{
						iVar2 = 1;
					}
					break;
			}
			if (bVar1)
			{
				iVar2 = 1;
			}
		}
		iVar3 = 0;
		if (uParam0->f_151.f_9 == uParam0->f_151.f_416.f_6)
		{
			if (uParam0->f_2335.f_442)
			{
				iVar3 = 1;
			}
		}
		if (iVar2 == 1)
		{
			iVar4 = uParam0->f_151.f_1997;
			iVar5 = 0;
		}
		else if (iVar2 == 3)
		{
			iVar4 = uParam0->f_151.f_2063;
			iVar5 = -1;
		}
		else if (iVar2 == 4)
		{
			iVar4 = uParam0->f_151.f_9;
			iVar5 = -1;
		}
		else
		{
			iVar4 = -1;
			iVar5 = -1;
		}
		if (iVar2 == 1)
		{
			if (uParam0->f_4242.f_2 == 0)
			{
				fVar6 = 2.5f;
			}
		}
		if (((uParam0->f_4242.f_2 != iVar2 || ((uParam0->f_4242.f_3 != iVar3 && iVar2 != 1) && iVar2 != 3)) || uParam0->f_4242.f_4 != iVar4) || uParam0->f_4242.f_5 != iVar5)
		{
			func_444(&(uParam0->f_4242), iVar2, iVar3, iVar4, iVar5, fVar6);
		}
		func_978(&(uParam0->f_4242));
	}
	if ((((uParam0->f_151.f_1547 == 4 && (uParam0->f_4242.f_2 == 2 || uParam0->f_4242.f_2 == 1)) && uParam0->f_151.f_1548 != 42) && func_200(&(uParam1->f_416), uParam1->f_9)) && func_433(&(uParam1->f_416), uParam1->f_9))
	{
		if (uParam0->f_2335.f_170 != 6)
		{
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_YOU_HAVE", func_979(&(uParam1->f_416), uParam1->f_9, 0)), 6);
		}
	}
	else if (uParam0->f_2335.f_170 == 6)
	{
		func_980(&(uParam0->f_2335));
	}
	if (uParam0->f_48)
	{
		if (aggregate_func_4287(&(uParam0->f_2335)))
		{
			uParam1->f_2182 = MISC::GET_GAME_TIMER() + 3000;
		}
		if (uParam1->f_2182 != -1 && MISC::GET_GAME_TIMER() <= uParam1->f_2182)
		{
			if (uParam1->f_1403 != 3)
			{
				func_185(uParam1, 3);
			}
		}
		else if (uParam1->f_1403 == 3)
		{
			func_185(uParam1, 2);
		}
	}
	if (uParam0->f_42 == 121 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2839.f_791))
	{
		if (uParam0->f_4242.f_2 == 1)
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2839.f_791, false);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2839.f_791, true);
		}
	}
	if (!aggregate_func_4260(&(uParam0->f_151.f_2166)))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_REVEAL_HUD")))
		{
			aggregate_func_4283(&(uParam0->f_151.f_2166));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_200(&(uParam0->f_151.f_416), iVar0))
				{
					if (func_981(&(uParam0->f_2335), iVar0))
					{
						Var8 = { func_436(&(uParam0->f_151), iVar0, 0, 1) };
						func_982(&(uParam0->f_2335), iVar0, &Var8);
						aggregate_func_4242(&(uParam0->f_2839), 1);
					}
				}
				iVar0++;
			}
		}
	}
	else if (aggregate_func_4628(&(uParam0->f_151.f_2166), 2f))
	{
		aggregate_func_4313(&(uParam0->f_151.f_2166));
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_981(&(uParam0->f_2335), iVar0))
			{
				func_984(&(uParam0->f_2335), iVar0);
				aggregate_func_4242(&(uParam0->f_2839), 0);
			}
			iVar0++;
		}
	}
	func_985(&(uParam0->f_2335), &(uParam0->f_151.f_416), &(uParam0->f_151.f_11));
	if (!uParam0->f_151.f_1635)
	{
		if (uParam0->f_4242.f_2 == 2)
		{
			uParam0->f_151.f_1635 = 1;
		}
	}
	else if (uParam0->f_4242.f_2 != 2 && uParam0->f_4242.f_2 != 1)
	{
		uParam0->f_151.f_1635 = 0;
	}
	if (func_207(&(uParam0->f_2839), uParam0->f_151.f_9))
	{
		if (uParam0->f_151.f_1635)
		{
			if (!func_595(&(uParam0->f_2839), uParam0->f_151.f_9, 10) && func_602(&(uParam0->f_2839), uParam0->f_151.f_9, 1))
			{
				func_986(&(uParam0->f_2839), uParam0->f_151.f_9);
				func_987(uParam1);
			}
		}
		else if (func_595(&(uParam0->f_2839), uParam0->f_151.f_9, 10) && !func_988(&(uParam0->f_2839), uParam0->f_151.f_9, 1))
		{
			func_989(&(uParam0->f_2839), uParam0->f_151.f_9);
		}
	}
	if ((func_207(&(uParam0->f_2839), uParam1->f_9) && func_608(&(uParam0->f_2839), uParam1->f_9, 10)) && !func_988(&(uParam0->f_2839), uParam1->f_9, 1))
	{
		func_990(uParam1, 1);
	}
	else
	{
		func_990(uParam1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 != uParam1->f_9)
		{
			if ((func_991(uParam1, iVar0, &bVar24) && func_207(&(uParam0->f_2839), iVar0)) && aggregate_func_5974(&(uParam0->f_2839), iVar0) == 2)
			{
				if (bVar24)
				{
					if (!func_595(&(uParam0->f_2839), iVar0, 10) && func_602(&(uParam0->f_2839), iVar0, 1))
					{
						func_986(&(uParam0->f_2839), iVar0);
					}
				}
				else if (func_595(&(uParam0->f_2839), iVar0, 10) && !func_988(&(uParam0->f_2839), iVar0, 1))
				{
					func_989(&(uParam0->f_2839), iVar0);
				}
			}
		}
		iVar0++;
	}
	func_992(uParam0, &(uParam0->f_151));
	if (uParam0->f_151.f_2172 != -1)
	{
		func_993(uParam0);
	}
	func_994(uParam0, &(uParam0->f_151));
	func_995(uParam0, &(uParam0->f_151), &(uParam0->f_151.f_1670.f_112));
	if (func_907(&(uParam1->f_416), uParam1->f_9))
	{
		func_996();
	}
	else
	{
		func_186();
	}
	func_997(&(uParam0->f_151));
	aggregate_func_4247(&(uParam0->f_2335), func_998(uParam0, 1));
	if (!uParam0->f_2335.f_165 && !uParam0->f_2335.f_166)
	{
		if (aggregate_func_4625() || uParam1->f_1631)
		{
			func_1000(&(uParam0->f_2335), 0);
			func_1001(&(uParam0->f_2335));
			func_211(&(uParam0->f_2335), 1);
			func_212(uParam0, 1);
			if (uParam1->f_1631)
			{
				func_1002(&(uParam0->f_151), 2);
			}
		}
		else
		{
			func_1000(&(uParam0->f_2335), 1);
			func_211(&(uParam0->f_2335), 0);
			func_212(uParam0, 0);
		}
	}
	if (func_998(uParam0, 0))
	{
		func_1002(&(uParam0->f_151), 1);
	}
	switch (uParam0->f_151.f_1404)
	{
		case 1:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_HOLE_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_BOARD_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_SKIP"), false);
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), true);
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_HOLE_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_BOARD_CARDS"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_POKER_SKIP"), false);
			break;
	}
	uParam0->f_151.f_1404 = 0;
}

void func_393(var uParam0, var uParam1)
{
	if (uParam1->f_1552 != 0)
	{
		return;
	}
	if (uParam0->f_57)
	{
		return;
	}
	if (func_1003(uParam1, 1))
	{
		func_1004(uParam0, &(uParam0->f_151));
		return;
	}
	if (func_1005(uParam1))
	{
		func_1004(uParam0, &(uParam0->f_151));
		return;
	}
}

void func_394(var uParam0)
{
	uParam0->f_1388 = 0;
	uParam0->f_1388.f_1 = 0;
	uParam0->f_1388.f_2 = -1;
	uParam0->f_1388.f_3 = 0;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam2 == 255)
	{
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
	}
	if (&uParam0->f_409[iParam1])
	{
	}
	uParam0->f_240[iParam1 /*28*/] = 1;
	(uParam0->f_240[iParam1 /*28*/])->f_18 = iParam2;
	(uParam0->f_240[iParam1 /*28*/])->f_19 = { *uParam4 };
	(uParam0->f_240[iParam1 /*28*/])->f_26 = iParam3;
	uParam0->f_409[iParam1] = 1;
	if ((func_139(uParam0, 2) || iParam2 == 255) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		StringCopy(&((uParam0->f_240[iParam1 /*28*/])->f_1), func_1006(iParam1, uParam0->f_9), 128);
		(uParam0->f_240[iParam1 /*28*/])->f_17 = 0;
	}
	else
	{
		StringCopy(&((uParam0->f_240[iParam1 /*28*/])->f_1), PLAYER::GET_PLAYER_NAME(iParam2), 128);
		(uParam0->f_240[iParam1 /*28*/])->f_17 = 1;
	}
}

void func_398()
{
	MINIGAME::_MINIGAME_POP_NEXT_EVENT();
}

void func_399(var uParam0)
{
	struct<72> Var0;
	int iVar72;

	Var0.f_10 = 6;
	if (!MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var0, 72))
	{
		return;
	}
	MINIGAME::_MINIGAME_POP_NEXT_EVENT();
	uParam0->f_1 = { Var0.f_1 };
	uParam0->f_9 = Var0.f_9;
	uParam0->f_10 = 0;
	*uParam0 = 1;
	iVar72 = 0;
	while (iVar72 < Var0.f_71)
	{
		func_396(uParam0, &(Var0.f_10[iVar72 /*10*/]), NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&((Var0.f_10[iVar72 /*10*/])->f_1)), 1, &((Var0.f_10[iVar72 /*10*/])->f_1));
		iVar72++;
	}
}

void func_400(var uParam0)
{
	struct<2> Var0;

	if (!MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var0, 2))
	{
		return;
	}
	MINIGAME::_MINIGAME_POP_NEXT_EVENT();
	*uParam0 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = Var0.f_1;
}

void func_401(var uParam0)
{
	struct<2> Var0;

	if (!MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var0, 11))
	{
		return;
	}
	MINIGAME::_MINIGAME_POP_NEXT_EVENT();
	func_396(uParam0, Var0.f_1, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_1.f_1)), 1, &(Var0.f_1.f_1));
}

void func_402(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE() != -1857735811)
	{
		return;
	}
	MINIGAME::_MINIGAME_POP_NEXT_EVENT();
	if (bParam2 && (uParam0->f_1388.f_1 == 1995414514 || uParam0->f_1388.f_1 == 1592704673))
	{
		if (uParam0->f_1388.f_3 != 0)
		{
		}
	}
	else
	{
		if (uParam0->f_1388.f_1 == 1995414514 && uParam0->f_1388.f_3 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(uParam0->f_1388.f_3, iVar0))
				{
					if (func_200(uParam1, iVar0))
					{
						func_1007(uParam0, iVar0);
					}
					else
					{
						func_1008(uParam0, iVar0);
					}
				}
				iVar0++;
			}
		}
		if (uParam0->f_1388.f_1 == -1766937362)
		{
			func_1009(&(uParam0->f_416), uParam1, uParam1->f_6, &(uParam0->f_1397), &(uParam0->f_1398), &(uParam0->f_1399));
		}
		uParam0->f_416 = { *uParam1 };
	}
}

bool func_403(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((uParam0->f_66 && (-1 ^ (uParam0->f_69 || uParam0->f_70) || uParam0->f_68)), iParam1);
}

void func_404(var uParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7)
{
	if (MISC::IS_BIT_SET(uParam0->f_66, iParam1))
	{
		if (!MISC::IS_BIT_SET((uParam0->f_69 || uParam0->f_70), iParam1))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_68, iParam1))
		{
		}
	}
	*(uParam0->f_53[iParam1 /*4*/]) = { Param2 };
	MISC::SET_BIT(&(uParam0->f_66), iParam1);
	MISC::CLEAR_BIT(&(uParam0->f_69), iParam1);
	MISC::CLEAR_BIT(&(uParam0->f_70), iParam1);
	if (bParam6)
	{
		MISC::SET_BIT(&(uParam0->f_67), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_67), iParam1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_68), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_68), iParam1);
	}
}

void func_410(var uParam0)
{
	if (uParam0->f_805 != -1)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_805))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_805);
		}
		uParam0->f_805 = -1;
		uParam0->f_810 = 0;
	}
}

void func_415(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_811[iVar0])))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_811[iVar0]));
		}
		uParam0->f_811[iVar0] = -1;
		iVar0++;
	}
}

void func_416(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_207(uParam0, iVar0))
		{
			func_208(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_417(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1011(uParam0, iVar0, 0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1012(uParam0, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0 /*30*/][iVar2]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((*uParam0->f_74[iVar0 /*30*/])[iVar2]);
				AUDIO::_0x341CDD17EFC2472E(iVar0, iVar2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar2])))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((uParam0->f_74[iVar0 /*30*/])->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iVar0 /*30*/][iVar2]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((*uParam0->f_255[iVar0 /*30*/])[iVar2]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar2])))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((uParam0->f_255[iVar0 /*30*/])->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iVar0 /*30*/][iVar2]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((*uParam0->f_436[iVar0 /*30*/])[iVar2]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar2])))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((uParam0->f_436[iVar0 /*30*/])->f_15[iVar2]);
			}
			iVar2++;
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_689))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_689));
	}
}

void func_418(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_790))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_790, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_790));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_791))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_791, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_791));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_792))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_792, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_792));
	}
}

void func_419(var uParam0)
{
	if (uParam0->f_807 != -1)
	{
		ANIMSCENE::_0x53CB3970BA02E3CC(uParam0->f_807);
		uParam0->f_807 = -1;
	}
}

void func_420(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_38)
	{
		uParam0->f_38 = 0;
		STREAMING::_0x57A197AD83F66BBF("TaskMovePokerMP");
		iVar0 = 0;
		while (iVar0 < 6)
		{
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_1274[iVar0 /*8*/]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			STREAMING::REMOVE_CLIP_SET(func_331(uParam0, iVar0));
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				STREAMING::REMOVE_ANIM_DICT(func_332(uParam0, iVar1, iVar2));
				iVar2++;
			}
			iVar1++;
		}
		STREAMING::REMOVE_ANIM_DICT("mini_games@poker_mg@deal");
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_693);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_694);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_695);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1383054421);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(744014130);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(552839784);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-809957388);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1028219667);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1699623712);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1509629050);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(278923713);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1985926465);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1045813766);
		func_216(uParam0, 1);
		func_217(uParam0, 1);
	}
}

void func_421(var uParam0)
{
	int iVar0;

	if (func_1013(uParam0))
	{
		func_1014(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		CAM::DESTROY_CAM(uParam0->f_135, false);
	}
	uParam0->f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_122[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
}

void func_422(var uParam0)
{
	if (*uParam0)
	{
		*uParam0 = 0;
		CAM::_0x798BE43C9393632B("table_games_cam");
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_coin01x"));
	}
}

void func_423(var uParam0)
{
	AUDIO::_0x531A78D6BF27014B("HUD_POKER");
	GRAPHICS::_0x37D7BDBA89F13959("OJPokerPlayerTurn");
}

void func_424(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 != 5)
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
		{
			func_1015(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_1016(uParam0, iVar0);
				iVar0++;
			}
			func_919(uParam0);
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1631983120);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
		}
		func_920(uParam0, 5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		uParam0->f_164 = (uParam0->f_164 - 1);
	}
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_151.f_51 = iParam1;
	aggregate_func_4242(&(uParam0->f_2335), iParam1);
}

void func_428(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1547 = iParam1;
	uParam0->f_1548 = iParam2;
	aggregate_func_4283(&(uParam0->f_1549));
}

int func_429(var uParam0, var uParam1, var uParam2)
{
	if (func_200(uParam1, uParam1->f_3))
	{
		*uParam2 = uParam1->f_3;
		return 1;
	}
	if (uParam1->f_3 != -1)
	{
		*uParam2 = func_816(uParam1, uParam1->f_3);
		if (func_200(uParam1, *uParam2))
		{
			return 1;
		}
	}
	*uParam2 = 0;
	if (func_200(uParam1, *uParam2))
	{
		return 1;
	}
	*uParam2 = uParam0->f_9;
	if (func_200(uParam1, *uParam2))
	{
		return 1;
	}
	*uParam2 = 0;
	return 0;
}

void func_430(var uParam0, int iParam1)
{
	if (uParam0->f_1996)
	{
		return;
	}
	uParam0->f_1997 = iParam1;
}

void func_431(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
		func_627(&(uParam0->f_2839), uParam0->f_151.f_1997, 0);
	}
	if (bParam3)
	{
		bVar2 = false;
		if ((uParam0->f_151.f_1547 == 3 || uParam0->f_151.f_1547 == 4) || uParam0->f_151.f_1547 == 5)
		{
			bVar2 = true;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_200(uParam1, iVar0) && (bParam4 || uParam0->f_151.f_9 != iVar0))
			{
				func_1023(&(uParam0->f_2839), iVar0, aggregate_func_5974(uParam1, iVar0), aggregate_func_5974(uParam1, iVar0), bVar2, 0);
			}
			else
			{
				func_1023(&(uParam0->f_2839), iVar0, 0, 0, 0, 0);
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam1->f_15.f_23)
	{
		func_1024(&(uParam0->f_2839), iVar1, uParam0->f_151.f_1997, 1, 1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_433(uParam1, iVar0))
		{
			if (uParam0->f_151.f_9 == iVar0)
			{
				func_1025(&(uParam0->f_2839), iVar0, 2, 0, 1);
			}
			else
			{
				func_1026(&(uParam0->f_2839), iVar0, 2, 0);
			}
		}
		else if (func_753(uParam1, iVar0))
		{
			if (uParam0->f_151.f_9 == iVar0)
			{
				func_1025(&(uParam0->f_2839), iVar0, 5, uParam0->f_151.f_1997, 1);
			}
			else
			{
				func_1026(&(uParam0->f_2839), iVar0, 5, uParam0->f_151.f_1997);
			}
		}
		else if (func_695(uParam1, iVar0))
		{
			func_1025(&(uParam0->f_2839), iVar0, 3, 0, 1);
		}
		iVar0++;
	}
}

int func_432(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (&uParam0->f_1442[iParam1] == 0)
	{
	}
	else
	{
		iVar0 = &uParam0->f_1442[iParam1];
		uParam0->f_1442[iParam1] = 0;
		if (bParam2 && !PED::IS_PED_INJURED(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
			ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
	return iVar0;
}

bool func_433(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1) && (uParam0->f_39[iParam1 /*56*/])->f_6 == 0)
	{
		return true;
	}
	return false;
}

int func_434(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = PED::IS_PED_MALE(*iParam0);
	if (bVar0)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return iParam1;
		}
	}
	else if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
	{
		return iParam1;
	}
	switch (iParam1)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 2;
		default:
			break;
	}
	if (bVar0)
	{
		return 0;
	}
	return 4;
}

int func_435(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	return func_434(iParam0, iVar0);
}

struct<16> func_436(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char cVar0[128];

	if (&uParam0->f_71[iParam1 /*28*/] != 0)
	{
		if (bParam2 && iParam1 == uParam0->f_9)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "MGPKR_YOU"), 128);
			return cVar0;
		}
		else if (iParam3 && (uParam0->f_71[iParam1 /*28*/])->f_17)
		{
			StringCopy(&cVar0, aggregate_func_1524(&((uParam0->f_71[iParam1 /*28*/])->f_1), joaat("COLOR_PURE_WHITE")), 128);
			return cVar0;
		}
		else
		{
			return (uParam0->f_71[iParam1 /*28*/])->f_1;
		}
	}
	StringCopy(&cVar0, "** Null **", 128);
	return cVar0;
}

bool func_437(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11, bool bParam12, bool bParam13, char* sParam14)
{
	if (func_1028(uParam0, iParam1, iParam2, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, sParam14))
	{
		if (iParam3 == 0)
		{
			func_1029(uParam0, iParam1);
		}
		else if (bParam13)
		{
			func_1030(uParam0, iParam1);
		}
		else if (bParam11)
		{
			func_1031(uParam0, iParam1, bParam12);
		}
		else
		{
			func_215(uParam0, iParam1, iParam3, fParam10);
		}
		return true;
	}
	return false;
}

void func_438(var uParam0, int iParam1)
{
	if (&uParam0->f_173[iParam1] == 0)
	{
	}
	else
	{
		if (&uParam0->f_173[iParam1] != 4)
		{
			aggregate_func_1627(&(uParam0->f_180[iParam1]), 2);
		}
		uParam0->f_173[iParam1] = 0;
		uParam0->f_180[iParam1] = 255;
		uParam0->f_187[iParam1] = 0;
		StringCopy(uParam0->f_194[iParam1 /*16*/], "", 128);
	}
}

void func_439(var uParam0, var uParam1)
{
	int iVar0;

	aggregate_func_4242(&(uParam0->f_2335), uParam0->f_151.f_9);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1033(uParam0, uParam1, iVar0, 0);
		iVar0++;
	}
	func_1034(&(uParam0->f_2335));
}

void func_440(var uParam0)
{
	int iVar0;

	aggregate_func_9385(&(uParam0->f_2839), 0);
	aggregate_func_9385(&(uParam0->f_2839), 0);
	func_784(&(uParam0->f_2839));
	func_785(&(uParam0->f_2839));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_207(&(uParam0->f_2839), iVar0) && aggregate_func_5974(&(uParam0->f_2839), iVar0) == 2)
		{
			func_215(&(uParam0->f_2839), iVar0, 1, 0);
		}
		iVar0++;
	}
	func_216(&(uParam0->f_2839), 1);
	func_217(&(uParam0->f_2839), 1);
}

void func_441(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_433(uParam1, iVar1))
		{
			iVar0 = aggregate_func_5974(uParam1, iVar1);
			if (uParam1->f_6 == iVar1)
			{
				func_1036(&(uParam0->f_2335), iVar1, func_1035(uParam0, iVar1, iVar0));
				aggregate_func_9387(&(uParam0->f_2335), iVar1, 1);
			}
			else
			{
				func_1036(&(uParam0->f_2335), iVar1, func_1038(&(uParam0->f_2335), iVar0));
				aggregate_func_9387(&(uParam0->f_2335), iVar1, 0);
			}
		}
		else if (func_753(uParam1, iVar1))
		{
			func_1036(&(uParam0->f_2335), iVar1, func_1039());
			func_1040(&(uParam0->f_2335), iVar1, 1);
		}
		else if (func_695(uParam1, iVar1))
		{
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (iVar2 < uParam1->f_15.f_23)
		{
			func_1042(&(uParam0->f_2335), iVar2, func_1041(uParam1, iVar2), 0, 1);
		}
		else
		{
			func_1042(&(uParam0->f_2335), iVar2, func_327(), 0, 1);
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < uParam1->f_485)
	{
		func_1045(&(uParam0->f_2335), iVar3, aggregate_func_4971(uParam1, iVar3), aggregate_func_4249(uParam1));
		iVar3++;
	}
	iVar4 = 0;
	if (uParam1->f_485 == 0)
	{
		iVar3 = 0;
		iVar4 = func_1046(uParam1);
	}
	else
	{
		iVar3 = (uParam1->f_485 - 1);
		iVar4 = (func_1046(uParam1) + aggregate_func_4971(uParam1, iVar3));
	}
	func_1045(&(uParam0->f_2335), iVar3, iVar4, aggregate_func_4249(uParam1));
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_433(uParam1, iVar0))
		{
			func_1047(&(uParam0->f_2335), iVar0, 1);
			func_1036(&(uParam0->f_2335), iVar0, func_1048());
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
			func_1049(&(uParam0->f_2335), iVar0);
			func_1050(&(uParam0->f_2335), iVar0, 0, func_327());
			func_1050(&(uParam0->f_2335), iVar0, 1, func_327());
			func_1051(&(uParam0->f_2335), iVar0, 0);
			func_1051(&(uParam0->f_2335), iVar0, 1);
		}
		else if (func_695(uParam1, iVar0))
		{
			func_1047(&(uParam0->f_2335), iVar0, 1);
			func_1036(&(uParam0->f_2335), iVar0, func_979(uParam1, iVar0, 1));
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
			func_1049(&(uParam0->f_2335), iVar0);
			func_1050(&(uParam0->f_2335), iVar0, 0, func_628(uParam1, iVar0, 0));
			func_1050(&(uParam0->f_2335), iVar0, 1, func_628(uParam1, iVar0, 1));
			func_1052(&(uParam0->f_2335), iVar0, 0);
		}
		else if (func_753(uParam1, iVar0))
		{
			func_1036(&(uParam0->f_2335), iVar0, func_1039());
			func_1040(&(uParam0->f_2335), iVar0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar1 < uParam1->f_15.f_23)
		{
			func_1042(&(uParam0->f_2335), iVar1, func_1041(uParam1, iVar1), 0, 1);
		}
		else
		{
			func_1042(&(uParam0->f_2335), iVar1, func_327(), 0, 1);
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < uParam1->f_485)
	{
		func_1045(&(uParam0->f_2335), iVar2, aggregate_func_4971(uParam1, iVar2), aggregate_func_4249(uParam1));
		iVar2++;
	}
}

void func_443(var uParam0)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		uParam0->f_135 = CAM::CREATE_CAMERA(26379945, false);
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
	}
}

void func_444(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!uParam0->f_1)
	{
	}
	else if (!CAM::_0x927B810E43E99932(&(uParam0->f_9)))
	{
	}
	else
	{
		if (uParam0->f_2 == 3 || uParam0->f_2 == 1)
		{
			if (iParam1 == 2)
			{
				func_1053(&(uParam0->f_36), MISC::GET_FRAME_COUNT() + 1);
			}
			else
			{
				func_1014(&(uParam0->f_36), 0);
			}
		}
		if (uParam0->f_2 == 4)
		{
			func_1014(&(uParam0->f_36), 3000);
		}
		uParam0->f_2 = iParam1;
		uParam0->f_3 = iParam2;
		uParam0->f_4 = iParam3;
		uParam0->f_5 = iParam4;
		switch (iParam1)
		{
			case 0:
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 2:
				uParam0->f_9.f_21 = 1;
				uParam0->f_9.f_22 = 0;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				break;
			case 1:
				if (iParam4 == 0)
				{
					func_1054(&(uParam0->f_36), 2, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), iParam5);
				}
				else
				{
					func_1054(&(uParam0->f_36), 5, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), iParam5);
				}
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 3:
				func_1055(&(uParam0->f_36), 0, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_21 = 0;
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				break;
			case 4:
				func_1055(&(uParam0->f_36), 1, (360f - (BUILTIN::TO_FLOAT(iParam3) * 60f)), 0, 1, 1);
				uParam0->f_9.f_22 = 1;
				uParam0->f_9.f_23 = 0;
				uParam0->f_9.f_20 = iParam2;
				uParam0->f_9.f_26 = iParam4;
				uParam0->f_6 = 0;
				break;
			default:
				return;
		}
		CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_9));
	}
}

char* func_445(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Odd_Jobs_Poker_Exposure_val";
		case 0:
			return "Odd_Jobs_Poker_First_Person";
		default:
			break;
	}
	return "Odd_Jobs_Poker_First_Person";
}

void func_449(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

void func_450(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

void func_451(var uParam0, int iParam1, int iParam2)
{
	iParam2 = func_604(uParam0, iParam1, iParam2);
	(uParam0->f_818[iParam1 /*63*/])->f_4 = iParam2;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/])))
	{
		TASK::_0x615DC4A82E90BB48(&(uParam0->f_818[iParam1 /*63*/]), &(uParam0->f_1323[iParam2]), joaat("default"));
	}
}

void func_452(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<34> Var2;
	char cVar40[64];

	iVar0 = (uParam0->f_818[iParam1 /*63*/])->f_4;
	iVar1 = &uParam0->f_818[iParam1 /*63*/];
	iVar0 = func_434(&iVar1, iVar0);
	iParam3 |= 16 | 4 | 256;
	if (ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	Var2.f_4 = 1065353216;
	Var2.f_5 = 1065353216;
	Var2.f_9 = 1065353216;
	Var2.f_10 = 1065353216;
	Var2.f_14 = 1065353216;
	Var2.f_15 = 1065353216;
	Var2.f_17 = 1040187392;
	Var2.f_18 = 1040187392;
	Var2.f_19 = -1;
	Var2.f_26 = -1082130432;
	StringCopy(&cVar40, "clipset@", 64);
	StringConCat(&cVar40, uParam0->f_1274[iVar0 /*8*/], 64);
	Var2 = 1;
	Var2.f_1 = aggregate_func_1966(cVar40);
	Var2.f_2 = sParam2;
	Var2.f_3 = iParam6;
	Var2.f_20 = iParam3;
	Var2.f_22 = 1;
	Var2.f_4 = 1f;
	Var2.f_5 = 1f;
	Var2.f_10 = 0f;
	Var2.f_15 = 0f;
	Var2.f_23 = 1;
	Var2.f_19 = -1;
	Var2.f_16 = 0;
	Var2.f_17 = fParam4;
	Var2.f_18 = iParam5;
	Var2.f_33 = 1;
	Var2.f_27 = { *(uParam0->f_1236[iParam1 /*3*/]) };
	Var2.f_30 = { *(uParam0->f_1255[iParam1 /*3*/]) };
	TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var2);
	if (bParam7)
	{
		PED::_0x2208438012482A1A(iVar1, false, false);
	}
}

int func_453(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &uParam0->f_818[iParam1 /*63*/];
	iVar1 = (uParam0->f_818[iParam1 /*63*/])->f_61;
	if (iVar0 == 0)
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if ((uParam0->f_818[iParam1 /*63*/])->f_52)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			}
			if (bParam2)
			{
				func_1062(uParam0, iParam1, 0);
			}
			iVar2 = 0;
			while (iVar2 < 29)
			{
				if ((((iVar2 == 1 || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10)
				{
					WEAPON::_0x67E21ACC5C0C970C(iVar0, iVar2, true);
				}
				iVar2++;
			}
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				aggregate_func_5462(iVar0, 0, 0, 1, 0);
			}
			if ((uParam0->f_818[iParam1 /*63*/])->f_8 >= 0 && (uParam0->f_818[iParam1 /*63*/])->f_8 < 35)
			{
				Stack.Push(uParam0);
				Stack.Push(uParam0->f_818[iParam1 /*63*/]);
				Stack.Push(iParam1);
				Call_Loc(&uParam0->f_1366[(uParam0->f_818[iParam1 /*63*/])->f_8]);
			}
			func_1064(uParam0, iParam1);
			func_1065(uParam0, iParam1);
			if (uParam0->f_807 != -1)
			{
				ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_807, iVar0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			func_1066(iVar1, &((uParam0->f_818[iParam1 /*63*/])->f_62));
			if (iVar1 == PLAYER::PLAYER_ID())
			{
				aggregate_func_6074(iVar0, 0, 0, 0);
			}
			else
			{
				aggregate_func_1329(iVar1, 0);
			}
		}
		func_1069(uParam0, iParam1);
		func_532(uParam0, iParam1);
		AUDIO::_0x7E176C676F8652A9(iParam1);
		uParam0->f_1197 = (uParam0->f_1197 - 1);
	}
	return iVar0;
}

void func_454(var uParam0, int iParam1)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else
	{
		iVar0 = func_453(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
	}
}

void func_455(var uParam0, int iParam1)
{
	int iVar0;

	if ((uParam0->f_617[iParam1 /*9*/])->f_8 != 7)
	{
		(uParam0->f_617[iParam1 /*9*/])->f_8 = 7;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_617[iParam1 /*9*/])->f_5[iVar0])))
			{
				OBJECT::DELETE_OBJECT((uParam0->f_617[iParam1 /*9*/])->f_5[iVar0]);
			}
			(uParam0->f_617[iParam1 /*9*/])->f_5[iVar0] = 0;
			iVar0++;
		}
	}
}

void func_456(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iParam1])))
	{
		OBJECT::DELETE_OBJECT(uParam0->f_672.f_11[iParam1]);
		uParam0->f_672.f_11[iParam1] = 0;
	}
}

bool func_458(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 == iParam0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_459(var uParam0, var uParam1)
{
	if (aggregate_func_4287(uParam0))
	{
		func_1072(uParam0);
	}
	if (aggregate_func_4287(uParam0))
	{
		func_963(uParam0, uParam1);
	}
	if (aggregate_func_7212(uParam0))
	{
		func_680(uParam0);
	}
	aggregate_func_2878(&(uParam0->f_494), 1, 1);
	aggregate_func_2878(&(uParam0->f_495), 1, 1);
	aggregate_func_2878(&(uParam0->f_496), 1, 1);
	aggregate_func_2878(&(uParam0->f_497), 1, 1);
	aggregate_func_2878(&(uParam0->f_498), 1, 1);
	aggregate_func_2878(&(uParam0->f_499), 1, 1);
	aggregate_func_2878(&(uParam0->f_500), 1, 1);
	aggregate_func_4313(&(uParam0->f_501));
}

void func_460(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_981(uParam0, iVar0))
		{
			func_1075(uParam0, iVar0);
		}
		iVar0++;
	}
	aggregate_func_6919(uParam0);
	uParam0->f_293 = 0;
	func_1077(uParam0, 0, 1);
	func_1078(uParam0);
	uParam0->f_294 = 0;
}

void func_461(var uParam0)
{
	if (uParam0->f_168 || UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(-605293197);
		uParam0->f_168 = 0;
	}
}

void func_462(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_173[iVar0] != 0)
		{
			func_438(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_463(var uParam0)
{
	if (func_1013(uParam0))
	{
		func_1014(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		CAM::DESTROY_CAM(uParam0->f_135, false);
	}
}

void func_464(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 0 && iParam2 < 35)
	{
		Stack.Push(uParam0);
		Stack.Push(uParam0->f_818[iParam1 /*63*/]);
		Stack.Push(iParam1);
		Call_Loc(&uParam0->f_1366[(uParam0->f_818[iParam1 /*63*/])->f_8]);
	}
	(uParam0->f_818[iParam1 /*63*/])->f_8 = iParam2;
	(uParam0->f_818[iParam1 /*63*/])->f_9 = 0;
	aggregate_func_4283(&((uParam0->f_818[iParam1 /*63*/])->f_10));
	aggregate_func_4283(&((uParam0->f_818[iParam1 /*63*/])->f_13));
	(uParam0->f_818[iParam1 /*63*/])->f_19 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_20 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_21 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_22 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_23 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_45 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_46 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_47 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_48 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_49 = 0;
}

void func_465(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	struct<34> Var2;

	iVar0 = (uParam0->f_818[iParam1 /*63*/])->f_4;
	iVar1 = &uParam0->f_818[iParam1 /*63*/];
	iVar0 = func_434(&iVar1, iVar0);
	Var2.f_6 = -1082130432;
	Var2.f_9 = -1082130432;
	Var2 = &uParam0->f_1323[iVar0];
	Var2.f_1 = joaat("default");
	Var2.f_29 = sParam2;
	Var2.f_33 = "CurrentPhase";
	Var2.f_32 = "CurrentClip";
	if ((uParam0->f_818[iParam1 /*63*/])->f_52)
	{
		ENTITY::_0x203BEFFDBE12E96A(iVar1, *(uParam0->f_1236[iParam1 /*3*/]) - Vector(1f, 0f, 0f), (uParam0->f_1255[iParam1 /*3*/])->f_2, 1, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	}
	func_1062(uParam0, iParam1, 1);
	if (!func_1079(uParam0, iParam1))
	{
		aggregate_func_6629(uParam0, iParam1, 0);
	}
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iVar1, "TaskMovePokerMP", &Var2, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2, fParam3, 1, 0, 128, 0);
	PED::_0x2208438012482A1A(iVar1, false, false);
}

void func_467(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<34> Var3;
	char cVar41[64];

	iVar0 = (uParam0->f_818[iParam1 /*63*/])->f_4;
	iVar1 = &uParam0->f_818[iParam1 /*63*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		return;
	}
	iVar0 = func_434(&iVar1, iVar0);
	if (MISC::IS_BIT_SET(iParam4, iVar0))
	{
		return;
	}
	if (fParam6 > 0f)
	{
		fVar2 = fParam6;
	}
	else
	{
		fVar2 = 0f;
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
		{
			fVar2 = TASK::_0x844CEEE428EA35B0(iVar1, "CurrentPhase");
		}
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(iParam3, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam3, 2, true);
	}
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	StringCopy(&cVar41, "clipset@", 64);
	StringConCat(&cVar41, uParam0->f_1274[iVar0 /*8*/], 64);
	Var3 = 1;
	Var3.f_1 = aggregate_func_1966(cVar41);
	Var3.f_2 = sParam2;
	Var3.f_3 = fVar2;
	Var3.f_20 = iParam5 | 16 | 4 | 2 | 256;
	Var3.f_22 = 1;
	Var3.f_21 = 536870912;
	Var3.f_4 = 1f;
	Var3.f_5 = 1f;
	Var3.f_10 = 0f;
	Var3.f_15 = 0f;
	Var3.f_23 = 0;
	Var3.f_19 = -1;
	Var3.f_16 = 0;
	Var3.f_17 = 0f;
	Var3.f_18 = 0f;
	Var3.f_33 = 1;
	Var3.f_27 = { *(uParam0->f_1236[iParam1 /*3*/]) };
	Var3.f_30 = { *(uParam0->f_1255[iParam1 /*3*/]) };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam3, &Var3);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam3, 1);
}

void func_468(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_818[iParam1 /*63*/])->f_1 = iParam2;
	if (!(uParam0->f_818[iParam1 /*63*/])->f_3)
	{
		func_1081(uParam0, iParam1, iParam2, 0);
	}
}

void func_469(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if ((uParam0->f_818[iParam1 /*63*/])->f_5 >= 2)
	{
	}
	else
	{
		iVar0 = func_1082(iParam2);
		iVar1 = aggregate_func_5974(uParam0, iParam1);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(&(uParam0->f_818[iParam1 /*63*/]), func_1084(iParam2), func_332(uParam0, iVar0, iVar1));
	}
}

bool func_470(var uParam0, struct<2> Param1, int iParam3)
{
	if (func_328(iParam3, Param1, uParam0->f_692, 0))
	{
		return true;
	}
	*iParam3 = uParam0->f_694;
	return false;
}

void func_473(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1670[iVar0 /*13*/] = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_2 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_3 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_1 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_4 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_5 = 0f;
		(uParam0->f_1670[iVar0 /*13*/])->f_6 = 0f;
		(uParam0->f_1670[iVar0 /*13*/])->f_7 = 0f;
		(uParam0->f_1670[iVar0 /*13*/])->f_8 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_9 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_10 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_11 = 0;
		(uParam0->f_1670[iVar0 /*13*/])->f_12 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		uParam0->f_1670.f_79[iVar1 /*4*/] = 0;
		(uParam0->f_1670.f_79[iVar1 /*4*/])->f_1 = 0;
		(uParam0->f_1670.f_79[iVar1 /*4*/])->f_2 = 0;
		(uParam0->f_1670.f_79[iVar1 /*4*/])->f_3 = 0;
		iVar1++;
	}
	uParam0->f_1670.f_112 = 0;
	uParam0->f_1670.f_112.f_1 = -1;
	uParam0->f_1670.f_112.f_2 = -1;
	aggregate_func_4313(&(uParam0->f_1670.f_112.f_3));
	uParam0->f_1670.f_118 = 0;
	uParam0->f_1670.f_119 = 0;
	uParam0->f_1670.f_120 = 0;
	aggregate_func_4313(&(uParam0->f_1670.f_121));
	uParam0->f_1670.f_125 = 0;
	uParam0->f_1670.f_126 = 0;
	uParam0->f_1670.f_127 = 0;
	uParam0->f_1670.f_128 = 0;
	uParam0->f_1670.f_129 = 0;
	uParam0->f_1670.f_131 = -1;
	uParam0->f_1670.f_132 = -1;
	uParam0->f_1670.f_133 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		uParam0->f_1670.f_134[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_1670.f_137 = 0f;
	uParam0->f_1670.f_138 = 0f;
	uParam0->f_1670.f_139 = 0f;
	uParam0->f_1670.f_140 = 0;
	uParam0->f_1670.f_141 = 0;
	uParam0->f_1670.f_142 = 0;
	uParam0->f_1670.f_143 = 0;
	uParam0->f_1670.f_144 = 0;
	uParam0->f_1670.f_145 = -1;
	uParam0->f_1670.f_146 = 0;
	uParam0->f_1670.f_147 = -1;
	uParam0->f_1670.f_148 = 0;
	uParam0->f_1670.f_149 = 0;
	uParam0->f_1670.f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1670.f_151[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1670.f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_1670.f_165 = 0;
	uParam0->f_1670.f_166 = 0;
	uParam0->f_1670.f_167 = 0;
	uParam0->f_1670.f_168 = 0;
	uParam0->f_1670.f_169 = 0;
	uParam0->f_1670.f_170 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1670.f_171[iVar0] = 0f;
		uParam0->f_1670.f_178[iVar0] = 0f;
		uParam0->f_1670.f_185[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_1670.f_192 = 0;
	uParam0->f_1670.f_193 = 0;
	uParam0->f_1670.f_194 = 0;
	uParam0->f_1670.f_195 = 0;
	uParam0->f_1670.f_196 = 0;
	uParam0->f_1670.f_197 = 0;
	uParam0->f_1670.f_198 = 0;
	uParam0->f_1670.f_199 = 0;
}

void func_474(var uParam0)
{
	aggregate_func_4483(&(uParam0->f_1870.f_96), 0f, 120f);
	aggregate_func_4483(&(uParam0->f_1870.f_106), 0f, 120f);
	aggregate_func_4483(&(uParam0->f_1870.f_116), 120f, 180f);
	aggregate_func_4483(&(uParam0->f_1870.f_16), 60f, 180f);
	aggregate_func_4483(&(uParam0->f_1870.f_26), 60f, 180f);
	aggregate_func_4483(&(uParam0->f_1870.f_36), 60f, 240f);
	aggregate_func_4483(&(uParam0->f_1870.f_46), 60f, 240f);
	aggregate_func_4483(&(uParam0->f_1870.f_56), 60f, 180f);
	aggregate_func_4483(&(uParam0->f_1870.f_66), 120f, 180f);
	aggregate_func_4483(&(uParam0->f_1870.f_76), 0f, 120f);
	aggregate_func_4483(&(uParam0->f_1870.f_86), 0f, 120f);
	uParam0->f_1870 = -1;
}

void func_476(var uParam0)
{
	uParam0->f_2099[0 /*6*/] = 0.3f;
	(uParam0->f_2099[0 /*6*/])->f_1 = 0.7f;
	(uParam0->f_2099[0 /*6*/])->f_2 = 0.2f;
	(uParam0->f_2099[0 /*6*/])->f_3 = 0.5f;
	(uParam0->f_2099[0 /*6*/])->f_4 = 70;
	(uParam0->f_2099[0 /*6*/])->f_5 = 65;
	uParam0->f_2099[1 /*6*/] = 0f;
	(uParam0->f_2099[1 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[1 /*6*/])->f_2 = 0f;
	(uParam0->f_2099[1 /*6*/])->f_3 = 0f;
	(uParam0->f_2099[1 /*6*/])->f_4 = 100;
	(uParam0->f_2099[1 /*6*/])->f_5 = 33;
	uParam0->f_2099[2 /*6*/] = 0f;
	(uParam0->f_2099[2 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[2 /*6*/])->f_2 = 0.3f;
	(uParam0->f_2099[2 /*6*/])->f_3 = 0.6f;
	(uParam0->f_2099[2 /*6*/])->f_4 = 100;
	(uParam0->f_2099[2 /*6*/])->f_5 = 100;
	uParam0->f_2099[3 /*6*/] = 0f;
	(uParam0->f_2099[3 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[3 /*6*/])->f_2 = 0.2f;
	(uParam0->f_2099[3 /*6*/])->f_3 = 0.5f;
	(uParam0->f_2099[3 /*6*/])->f_4 = 100;
	(uParam0->f_2099[3 /*6*/])->f_5 = 100;
	uParam0->f_2099[4 /*6*/] = 0.25f;
	(uParam0->f_2099[4 /*6*/])->f_1 = 0.25f;
	(uParam0->f_2099[4 /*6*/])->f_2 = 0.2f;
	(uParam0->f_2099[4 /*6*/])->f_3 = 0.5f;
	(uParam0->f_2099[4 /*6*/])->f_4 = 100;
	(uParam0->f_2099[4 /*6*/])->f_5 = 100;
	uParam0->f_2099[5 /*6*/] = 0f;
	(uParam0->f_2099[5 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[5 /*6*/])->f_2 = 0.3f;
	(uParam0->f_2099[5 /*6*/])->f_3 = 0.8f;
	(uParam0->f_2099[5 /*6*/])->f_4 = 75;
	(uParam0->f_2099[5 /*6*/])->f_5 = 100;
	uParam0->f_2099[6 /*6*/] = 0.25f;
	(uParam0->f_2099[6 /*6*/])->f_1 = 0.5f;
	(uParam0->f_2099[6 /*6*/])->f_2 = 0f;
	(uParam0->f_2099[6 /*6*/])->f_3 = 0f;
	(uParam0->f_2099[6 /*6*/])->f_4 = 100;
	(uParam0->f_2099[6 /*6*/])->f_5 = 0;
	uParam0->f_2099[7 /*6*/] = 0f;
	(uParam0->f_2099[7 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[7 /*6*/])->f_2 = 0.2f;
	(uParam0->f_2099[7 /*6*/])->f_3 = 0.5f;
	(uParam0->f_2099[7 /*6*/])->f_4 = 100;
	(uParam0->f_2099[7 /*6*/])->f_5 = 100;
	uParam0->f_2099[8 /*6*/] = 0.6f;
	(uParam0->f_2099[8 /*6*/])->f_1 = 0.9f;
	(uParam0->f_2099[8 /*6*/])->f_2 = 0.4f;
	(uParam0->f_2099[8 /*6*/])->f_3 = 0.6f;
	(uParam0->f_2099[8 /*6*/])->f_4 = 75;
	(uParam0->f_2099[8 /*6*/])->f_5 = 30;
	uParam0->f_2099[9 /*6*/] = 0f;
	(uParam0->f_2099[9 /*6*/])->f_1 = 0f;
	(uParam0->f_2099[9 /*6*/])->f_2 = 0f;
	(uParam0->f_2099[9 /*6*/])->f_3 = 0f;
	(uParam0->f_2099[9 /*6*/])->f_4 = 100;
	(uParam0->f_2099[9 /*6*/])->f_5 = 100;
	uParam0->f_2099[10 /*6*/] = 0.25f;
	(uParam0->f_2099[10 /*6*/])->f_1 = 0.5f;
	(uParam0->f_2099[10 /*6*/])->f_2 = 0f;
	(uParam0->f_2099[10 /*6*/])->f_3 = 0f;
	(uParam0->f_2099[10 /*6*/])->f_4 = 100;
	(uParam0->f_2099[10 /*6*/])->f_5 = 100;
}

int func_477(int iParam0)
{
	struct<2> Var0;

	*iParam0 = 0;
	if (MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE() != 1959158395)
	{
		return 0;
	}
	else if (!MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var0, 2))
	{
		return 0;
	}
	*iParam0 = Var0.f_1;
	return 1;
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	Global_1131100->f_2.f_1 = iParam0;
	Global_1131100->f_2 = iParam1;
	Global_1131100->f_2.f_2 = iParam2;
}

bool func_483(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	struct<5> Var1;
	int iVar13;

	iVar13 = MINIGAME::_0x15E90B6A993017AA();
	if (iVar13 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar13)
	{
		if (MINIGAME::_0x10342CC82E8356E9(iVar0, &Var1))
		{
			if (Var1.f_2 == 916571523)
			{
				if (MISC::ARE_STRINGS_EQUAL(&uParam0, &(Var1.f_4)))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_485()
{
	return Global_1131100->f_2;
}

int func_486(var uParam0)
{
	if (uParam0->f_34)
	{
		return 333474665;
	}
	return 1453703409;
}

void func_487(var uParam0)
{
	if (uParam0->f_48)
	{
		uParam0->f_48 = 0;
		AUDIO::STOP_AUDIO_SCENE(func_253(uParam0->f_39));
		func_252(func_251(func_250()), 0);
		ENTITY::_0x18FF3110CF47115D(Global_35, 9, true);
		aggregate_func_6907(1);
		aggregate_func_184(1);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
		}
		aggregate_func_7959(0);
		Call_Loc(uParam0->f_138);
	}
}

void func_490(int iParam0)
{
	Global_1902701->f_3[iParam0] = 0;
}

bool func_491()
{
	return Global_1902701->f_2 == 1;
}

void func_494()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1902701->f_42.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_495()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1902701->f_42.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_496(int iParam0)
{
	Global_1902701->f_42.f_1 = iParam0;
}

void func_497(int iParam0)
{
	Global_1902701->f_42.f_2 = iParam0;
}

bool func_506(int iParam0)
{
	if (!aggregate_func_8854(iParam0))
	{
		return false;
	}
	return &(Global_1938932->f_5[iParam0 /*11*/]);
}

void func_517(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_58 = iParam1;
	if (bParam2)
	{
		aggregate_func_2878(&(uParam0->f_59), 1, 1);
	}
	switch (uParam0->f_58)
	{
		case 0:
		case 4:
			aggregate_func_2878(&(uParam0->f_59), 1, 1);
			break;
		case 1:
		case 2:
			if (!aggregate_func_2875(uParam0->f_59))
			{
				uParam0->f_59 = aggregate_func_2045("MG_LEAVE1", joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate_func_2057(uParam0->f_59, 10, 1, 1);
			}
			break;
		case 3:
			if (!aggregate_func_2875(uParam0->f_59))
			{
				iVar0 = (uParam0->f_61 - NETWORK::GET_CLOUD_TIME_AS_INT()) * 1000;
				if (iVar0 < 0)
				{
					iVar0 = 0;
				}
				uParam0->f_59 = aggregate_func_2045("MG_LEAVE1", joaat("INPUT_MINIGAME_QUIT"), 7, 570, iVar0, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate_func_2057(uParam0->f_59, 10, 1, 1);
			}
			break;
	}
}

void func_520(var uParam0, int iParam1)
{
	uParam0->f_62.f_3 = MISC::GET_HASH_KEY("MG_CONTINUE");
	uParam0->f_62.f_3.f_3 = 0;
	switch (iParam1)
	{
		case -1720361368:
		case -1166915294:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_BANNED", 0, 1);
			break;
		case -1878199881:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_GEO_TOGGLE", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
		case 579389526:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_OVERALL_CAP", 0, 1);
			break;
		case -1300909614:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_DAILY_PROFIT_CAP", 0, 1);
			break;
		case -1589038658:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_DAILY_BUYIN_CAP", 0, 1);
			break;
		case 1671747787:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_PRIV_HOUR_BUYIN_CAP", 0, 1);
			break;
		case 1053423395:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_PUB_RE_BUYIN_CAP", 0, 1);
			break;
		case -1695230319:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_BROKE", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
		case -592991683:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_NO_PARTY_CHAT", 0, 1);
			break;
		case -1517426354:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_MAINTENANCE", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
		case 1406403638:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_POSSE_LEADER_LEFT", 0, 1);
			break;
		case 1320901890:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_ARBITLEGAL", 0, 1);
			break;
		case 1736016924:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_DISCONNECTED", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
		case 2124908670:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", "MG_ALERT_BUYIN_TIMEOUT", 0, 1);
			break;
		case -1700673948:
		case -835571454:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_NETWORK_ERROR", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
		case -301240451:
		default:
			uParam0->f_81 = aggregate_func_3170(&(uParam0->f_62), "MG_ALERT", MISC::_CREATE_VAR_STRING(10, "MG_ALERT_SCRIPT_ERROR", aggregate_func_7814(uParam0->f_39)), 0, 1);
			break;
	}
}

void func_525(var uParam0, int iParam1)
{
	*((*uParam0->f_617[iParam1 /*9*/])[0 /*2*/]) = { func_327() };
	*((*uParam0->f_617[iParam1 /*9*/])[1 /*2*/]) = { func_327() };
	(uParam0->f_617[iParam1 /*9*/])->f_5[0] = 0;
	(uParam0->f_617[iParam1 /*9*/])->f_5[1] = 0;
	(uParam0->f_617[iParam1 /*9*/])->f_8 = 7;
}

void func_526(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0->f_672[iVar0 /*2*/]) = { func_327() };
		uParam0->f_672.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_527(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(uParam0->f_74[iParam1 /*30*/])->f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_531(var uParam0)
{
	uParam0->f_689 = 0;
	uParam0->f_689.f_1 = 0;
	uParam0->f_689.f_2 = 0;
}

void func_532(var uParam0, int iParam1)
{
	uParam0->f_818[iParam1 /*63*/] = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_1 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_2 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_3 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_4 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_5 = 2;
	(uParam0->f_818[iParam1 /*63*/])->f_6 = -1;
	(uParam0->f_818[iParam1 /*63*/])->f_7 = 92;
	(uParam0->f_818[iParam1 /*63*/])->f_8 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_9 = 0;
	aggregate_func_4313(&((uParam0->f_818[iParam1 /*63*/])->f_10));
	aggregate_func_4313(&((uParam0->f_818[iParam1 /*63*/])->f_13));
	aggregate_func_4313(&((uParam0->f_818[iParam1 /*63*/])->f_16));
	(uParam0->f_818[iParam1 /*63*/])->f_19 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_20 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_21 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_22 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_23 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_41 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_42 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_43 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_44 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_45 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_46 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_47 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_48 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_49 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_50 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_51 = 1;
	(uParam0->f_818[iParam1 /*63*/])->f_52 = 1;
	(uParam0->f_818[iParam1 /*63*/])->f_53 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_54 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_55 = 0;
	(uParam0->f_818[iParam1 /*63*/])->f_56 = -1;
	(uParam0->f_818[iParam1 /*63*/])->f_60 = -1;
	(uParam0->f_818[iParam1 /*63*/])->f_61 = 255;
}

void func_533(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10, var uParam11)
{
	vector3 vVar0;

	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*fParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

void func_537(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
	{
		if (func_1117(uParam1, "NoCardsIdle") || func_1117(uParam1, "HoldCardsIdle"))
		{
			func_464(uParam0, iParam2, 1);
		}
	}
}

void func_538(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 6:
			func_1118(uParam0, iParam2, -1921404755);
			func_1118(uParam0, iParam2, 1426724047);
			if ((!func_1119(uParam0, iParam2, "sit_enter_left", 1065353216 /* Float: 1f */) && !func_1119(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */)) || func_1120(uParam0, iParam2, 1))
			{
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_540(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;

	if (uParam0->f_40)
	{
		ENTITY::_0x0918E3565C20F03C(*uParam1, *(uParam0->f_1236[iParam2 /*3*/]), (uParam0->f_1255[iParam2 /*3*/])->f_2, false, 1);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 2:
			if (!aggregate_func_927(*uParam1, 716706914))
			{
				iVar0 = func_1123(2, *uParam0, uParam0->f_3, iParam2, 1051931443 /* Float: 0.35f */);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
					func_1124(vVar1, fVar4, *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), &vVar5, &vVar8);
					switch (aggregate_func_5974(uParam0, iParam2))
					{
						case 1:
						case 4:
							iVar12 = -2043611403;
							iVar13 = -2043611403;
							break;
						case 0:
						case 2:
						case 3:
						case 5:
						default:
							iVar12 = -55367021;
							iVar13 = -55367021;
							break;
					}
					iVar11 = TASK::_0xF533D68FF970D190(*(uParam0->f_1236[iParam2 /*3*/]), iVar13, 0.25f, 1, 0);
					if (TASK::_0x841475AC96E794D1(iVar11))
					{
						TASK::_0x2056AB38DF06825C(iVar11, vVar5, 0);
						TASK::_0xD3A0DA8F91612C6E(iVar11, vVar8.z, 0);
					}
					else
					{
						iVar11 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar0, iVar12, vVar5, vVar8.z, 0, 0, 0);
					}
					if (TASK::_0x841475AC96E794D1(iVar11))
					{
						TASK::_TASK_USE_SCENARIO_POINT(*uParam1, iVar11, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
						func_1121(uParam0, iParam2, 3);
						return;
					}
				}
				iVar14 = aggregate_func_5974(uParam0, iParam2);
				if (func_603(uParam0, iParam2, 2, 1))
				{
					iVar14 = func_604(uParam0, iParam2, 0);
				}
				if (func_603(uParam0, iParam2, 3, 1) || func_603(uParam0, iParam2, 5, 1))
				{
					iVar14 = func_604(uParam0, iParam2, 4);
				}
				vVar15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_1274[iVar14 /*8*/], "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
				vVar18 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_1274[iVar14 /*8*/], "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vVar15, 1f, -1, 0.25f, 5120, vVar18.z);
				func_1121(uParam0, iParam2, 5);
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 1))
			{
				func_1125(uParam0, iParam2, 0);
				func_1121(uParam0, iParam2, 4);
			}
			else if (!aggregate_func_927(*uParam1, -76381094) || (aggregate_func_4628(&(uParam1->f_13), 20f) && (uParam1->f_47 || uParam1->f_48)))
			{
				if (!aggregate_func_927(*uParam1, -76381094))
				{
					if (TASK::_0x841475AC96E794D1(iVar11))
					{
						TASK::_TASK_USE_SCENARIO_POINT(*uParam1, iVar11, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
						return;
					}
					else
					{
						iVar14 = aggregate_func_5974(uParam0, iParam2);
						if (func_603(uParam0, iParam2, 2, 1))
						{
							iVar14 = func_604(uParam0, iParam2, 0);
						}
						if (func_603(uParam0, iParam2, 3, 1) || func_603(uParam0, iParam2, 5, 1))
						{
							iVar14 = func_604(uParam0, iParam2, 4);
						}
						vVar15 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_1274[iVar14 /*8*/], "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
						vVar18 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_1274[iVar14 /*8*/], "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vVar15, 1f, -1, 0.25f, 5120, vVar18.z);
						func_1121(uParam0, iParam2, 5);
						return;
					}
				}
				func_1125(uParam0, iParam2, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, 0, 1);
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(*(uParam0->f_1236[iParam2 /*3*/])))
				{
					ENTITY::SET_ENTITY_COORDS(*uParam1, *(uParam0->f_1236[iParam2 /*3*/]) - Vector(0.5f, 0f, 0f), true, false, true, true);
				}
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 4:
			func_1118(uParam0, iParam2, -1921404755);
			func_1118(uParam0, iParam2, 1426724047);
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 0) || func_1126(uParam0, iParam2, 0)) || aggregate_func_4628(&(uParam1->f_13), 20f))
			{
				PED::_0xF1C03A5352243A30(*uParam1);
				TASK::_0x2D657B10F211C572(*uParam1, 0.5f);
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 5:
			if (!aggregate_func_927(*uParam1, 713668775) || (aggregate_func_4628(&(uParam1->f_13), 20f) && (uParam1->f_47 || uParam1->f_48)))
			{
				if (aggregate_func_927(*uParam1, 713668775))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, 0, 1);
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(*(uParam0->f_1236[iParam2 /*3*/])))
					{
						ENTITY::SET_ENTITY_COORDS(*uParam1, *(uParam0->f_1236[iParam2 /*3*/]) - Vector(0.5f, 0f, 0f), true, false, true, true);
					}
				}
				func_452(uParam0, iParam2, "sit_enter_left", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0, 1);
				func_1125(uParam0, iParam2, 0);
				func_1121(uParam0, iParam2, 6);
			}
			break;
		case 6:
			func_1118(uParam0, iParam2, -1921404755);
			func_1118(uParam0, iParam2, 1426724047);
			if ((!func_1119(uParam0, iParam2, "sit_enter_left", 1065353216 /* Float: 1f */) && !func_1119(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */)) || func_1126(uParam0, iParam2, 0))
			{
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_542(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		ENTITY::_0x0918E3565C20F03C(*uParam1, *(uParam0->f_1236[iParam2 /*3*/]), (uParam0->f_1255[iParam2 /*3*/])->f_2, false, 1);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 44:
			if (func_1127(uParam0))
			{
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_543(var uParam0, var uParam1, int iParam2)
{
	func_1122(uParam0, iParam2);
	aggregate_func_2632(uParam0);
	aggregate_func_6629(uParam0, iParam2, 0);
}

void func_544(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (uParam0->f_40)
	{
		ENTITY::_0x0918E3565C20F03C(*uParam1, *(uParam0->f_1236[iParam2 /*3*/]), (uParam0->f_1255[iParam2 /*3*/])->f_2, false, 1);
		func_464(uParam0, iParam2, 1);
		return;
	}
	fVar1 = uParam0->f_698;
	switch (uParam1->f_9)
	{
		case 6:
			func_1118(uParam0, iParam2, -1921404755);
			func_1118(uParam0, iParam2, 1426724047);
			if (func_1119(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */))
			{
				fVar0 = func_1129(uParam0, iParam2, "sit_enter_right");
				if (fVar0 < fVar1)
				{
					ENTITY::SET_ENTITY_ALPHA(*uParam1, BUILTIN::ROUND(((fVar0 * 255f) / fVar1)), false);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(*uParam1, 255, false);
				}
			}
			if (!func_1119(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */) || func_1126(uParam0, iParam2, 0))
			{
				ENTITY::SET_ENTITY_ALPHA(*uParam1, 255, false);
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_545(var uParam0, var uParam1, int iParam2)
{
	func_1122(uParam0, iParam2);
	ENTITY::SET_ENTITY_ALPHA(*uParam1, 255, false);
}

void func_546(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = MISC::IS_BIT_SET(uParam1->f_19, 0);
	bVar1 = MISC::IS_BIT_SET(uParam1->f_19, 1);
	iVar2 = uParam1->f_20;
	iVar3 = uParam1->f_21;
	if (uParam0->f_40)
	{
		if (func_935(uParam0))
		{
			aggregate_func_2632(uParam0);
			if (iVar2 < 6)
			{
				func_451(uParam0, iParam2, iVar2);
			}
			if (aggregate_func_5974(uParam0, iParam2) == 2)
			{
				func_469(uParam0, iParam2, 1);
			}
			else
			{
				func_469(uParam0, iParam2, 0);
			}
			func_464(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 7:
			if (func_1117(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				if (aggregate_func_2083() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleFront");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardFront");
				}
				func_1121(uParam0, iParam2, 8);
			}
			break;
		case 8:
			if (func_1117(uParam1, "ShuffleStandardFrontAnimFinished") || func_1117(uParam1, "ShuffleRiffleFrontAnimFinished"))
			{
				func_1121(uParam0, iParam2, 11);
			}
			break;
		case 9:
			if (func_1117(uParam1, "ShuffleEnterAnimFinished"))
			{
				if (aggregate_func_2083() || bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleRiffleLeft");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ShuffleStandardLeft");
				}
				func_1121(uParam0, iParam2, 10);
			}
			break;
		case 10:
			if (func_1117(uParam1, "ShuffleStandardLeftAnimFinished") || func_1117(uParam1, "ShuffleRiffleLeftAnimFinished"))
			{
				func_1121(uParam0, iParam2, 11);
			}
			break;
		case 11:
			if (func_1131(uParam0) && func_935(uParam0))
			{
				func_1132(uParam0, iParam2, iVar3);
				func_1125(uParam0, iParam2, 6);
				func_1121(uParam0, iParam2, 12);
			}
			break;
		case 12:
			if (func_1133(uParam0))
			{
				iVar5 = 0;
				while (iVar5 < 6)
				{
					iVar4 = aggregate_func_7680(uParam0, iVar5, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::_0x0B7CB1300CBFE19C(iVar4, 1))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -942436593))
						{
							func_1125(uParam0, iParam2, (iParam2 + 6 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1248793974))
						{
							func_1125(uParam0, iParam2, (iParam2 + 1 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -1698646806))
						{
							func_1125(uParam0, iParam2, (iParam2 + 2 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -2004414345))
						{
							func_1125(uParam0, iParam2, (iParam2 + 3 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, 220797369))
						{
							func_1125(uParam0, iParam2, (iParam2 + 4 % 6));
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, -228858849))
						{
							func_1125(uParam0, iParam2, (iParam2 + 5 % 6));
						}
					}
					iVar5++;
				}
			}
			if (func_1134(uParam0))
			{
				if (iVar2 < 6)
				{
					func_451(uParam0, iParam2, iVar2);
				}
				func_1135(uParam0, iParam2);
				func_610(uParam0, iParam2, 6);
				if (bVar1)
				{
					func_465(uParam0, iParam2, "DealToHoldCardsRequest", 0.5f);
					func_1121(uParam0, iParam2, 13);
				}
				else
				{
					func_465(uParam0, iParam2, "DealToNoCardsRequest", 0.5f);
					func_1121(uParam0, iParam2, 14);
				}
			}
			break;
		case 13:
			if (func_1117(uParam1, "DealToHoldCardsAnimFinished"))
			{
				func_469(uParam0, iParam2, 1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 14:
			if (func_1117(uParam1, "DealToNoCardsAnimFinished"))
			{
				func_469(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle") || func_1117(uParam1, "NoCardsIdle"))
			{
				aggregate_func_2632(uParam0);
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -240642751))
	{
		func_467(uParam0, iParam2, "shuffle_enter_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 190968016))
	{
		func_467(uParam0, iParam2, "shuffle_standard_front_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1711999502))
	{
		func_467(uParam0, iParam2, "shuffle_riffle_front_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 96509896))
	{
		func_467(uParam0, iParam2, "shuffle_standard_left_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1301672132))
	{
		func_467(uParam0, iParam2, "shuffle_riffle_left_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1846387738))
	{
		func_467(uParam0, iParam2, "deal_to_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "deal_to_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_547(var uParam0, var uParam1, var uParam2)
{
	aggregate_func_2632(uParam0);
}

void func_548(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (uParam0->f_40)
	{
		if (func_936(uParam0))
		{
			if (aggregate_func_5974(uParam0, iParam2) == 2)
			{
				func_469(uParam0, iParam2, 1);
			}
			uParam0->f_795 = -1;
			func_464(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 15:
			if (func_936(uParam0))
			{
				switch (uParam0->f_795)
				{
					case 1:
						func_1024(uParam0, 0, -1, 1, 0);
						func_1024(uParam0, 1, -1, 1, 0);
						func_1024(uParam0, 2, -1, 1, 0);
						if (uParam0->f_796)
						{
							func_1024(uParam0, 3, -1, 1, 0);
							func_1024(uParam0, 4, -1, 1, 0);
						}
						break;
					case 2:
						func_1024(uParam0, 3, -1, 1, 0);
						if (uParam0->f_796)
						{
							func_1024(uParam0, 4, -1, 1, 0);
						}
						break;
					case 3:
						func_1024(uParam0, 4, -1, 1, 0);
						break;
				}
				if (uParam1->f_1 == 1)
				{
					if (uParam0->f_795 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterNoCards");
						func_1121(uParam0, iParam2, 16);
					}
					else if (uParam0->f_795 == 2)
					{
						if (!uParam0->f_796)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnNoCards");
							func_1121(uParam0, iParam2, 19);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverNoCards");
							func_1121(uParam0, iParam2, 22);
						}
					}
					else if (uParam0->f_795 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverNoCards");
						func_1121(uParam0, iParam2, 20);
					}
				}
				else if (uParam1->f_1 == 2)
				{
					if (uParam0->f_795 == 1)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopEnterHoldCards");
						func_1121(uParam0, iParam2, 23);
					}
					else if (uParam0->f_795 == 2)
					{
						if (!uParam0->f_796)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnHoldCards");
							func_1121(uParam0, iParam2, 26);
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "TurnRiverHoldCards");
							func_1121(uParam0, iParam2, 29);
						}
					}
					else if (uParam0->f_795 == 3)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "RiverHoldCards");
						func_1121(uParam0, iParam2, 27);
					}
				}
			}
			break;
		case 16:
			if (func_1117(uParam1, "FlopEnterNoCardsAnimFinished"))
			{
				if (!uParam0->f_796)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					func_1121(uParam0, iParam2, 17);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverNoCards");
					func_1121(uParam0, iParam2, 21);
				}
			}
			break;
		case 17:
			if (func_1117(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitNoCards");
				func_1121(uParam0, iParam2, 18);
			}
			break;
		case 18:
			func_1135(uParam0, iParam2);
			if (func_1117(uParam1, "FlopExitNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 19:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "TurnNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 20:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "RiverNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 21:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "FlopTurnRiverNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 22:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "TurnRiverNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 23:
			if (func_1117(uParam1, "FlopEnterHoldCardsAnimFinished"))
			{
				if (!uParam0->f_796)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Flop");
					func_1121(uParam0, iParam2, 24);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopTurnRiverHoldCards");
					func_1121(uParam0, iParam2, 28);
				}
			}
			break;
		case 24:
			if (func_1117(uParam1, "FlopAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "FlopExitHoldCards");
				func_1121(uParam0, iParam2, 25);
			}
			break;
		case 25:
			func_1135(uParam0, iParam2);
			if (func_1117(uParam1, "FlopExitHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 26:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "TurnHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 27:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "RiverHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 28:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "FlopTurnRiverHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 29:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "TurnRiverHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle") || func_1117(uParam1, "HoldCardsIdle"))
			{
				if (aggregate_func_5974(uParam0, iParam2) == 2)
				{
					func_469(uParam0, iParam2, 1);
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (func_971(uParam0, iVar0))
					{
						func_1137(uParam0, iVar0, 1);
					}
					iVar0++;
				}
				uParam0->f_795 = -1;
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1228639662))
	{
		func_467(uParam0, iParam2, "flop_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_card1", func_1138(uParam0, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_card2", func_1138(uParam0, 1), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_card3", func_1138(uParam0, 2), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -572100475))
	{
		func_467(uParam0, iParam2, "flop_enter_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -113517709))
	{
		func_467(uParam0, iParam2, "flop_exit_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 711118658))
	{
		func_467(uParam0, iParam2, "turn_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_no_cards_card1", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 437520029))
	{
		func_467(uParam0, iParam2, "river_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "river_no_cards_card1", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 419783961))
	{
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_card1", func_1138(uParam0, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_card2", func_1138(uParam0, 1), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_card3", func_1138(uParam0, 2), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_card4", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_no_cards_card5", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 381129739))
	{
		func_467(uParam0, iParam2, "turn_river_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_no_cards_card1", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_no_cards_card2", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -95084943))
	{
		func_467(uParam0, iParam2, "flop_enter_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_enter_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_enter_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -607868067))
	{
		func_467(uParam0, iParam2, "flop_exit_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_exit_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_exit_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1776513281))
	{
		func_467(uParam0, iParam2, "turn_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_hold_cards_card3", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1551570381))
	{
		func_467(uParam0, iParam2, "river_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "river_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "river_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "river_hold_cards_card3", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 198906537))
	{
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card3", func_1138(uParam0, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card4", func_1138(uParam0, 1), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card5", func_1138(uParam0, 2), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card6", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "flop_turn_river_hold_cards_card7", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 947648498))
	{
		func_467(uParam0, iParam2, "turn_river_hold_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_hold_cards_card3", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "turn_river_hold_cards_card4", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 531650300))
	{
		func_1137(uParam0, 0, 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1968865871))
	{
		func_1137(uParam0, 1, 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1995200063))
	{
		func_1137(uParam0, 2, 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -695843675))
	{
		func_1137(uParam0, 3, 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -461447018))
	{
		func_1137(uParam0, 4, 1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -134313359))
	{
		if (!func_596(uParam0, iParam2, 0))
		{
			func_1125(uParam0, iParam2, 0);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1156819043))
	{
		if (!func_596(uParam0, iParam2, 1))
		{
			func_1125(uParam0, iParam2, 1);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1436811567))
	{
		if (!func_596(uParam0, iParam2, 2))
		{
			func_1125(uParam0, iParam2, 2);
		}
	}
}

void func_549(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_795 = -1;
}

void func_550(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "HoldCardsEnterAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				func_469(uParam0, iParam2, 1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1087743179))
	{
		func_467(uParam0, iParam2, "hold_cards_enter_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "hold_cards_enter_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_551(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_469(uParam0, iParam2, 1);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 30:
			if (func_1117(uParam1, "PeekEnterAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Peek");
				func_1121(uParam0, iParam2, 31);
			}
			break;
		case 31:
			if (uParam1->f_47 || uParam1->f_48)
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam1))
				{
					func_469(uParam0, iParam2, 1);
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "PeekExit");
					func_1121(uParam0, iParam2, 32);
				}
			}
			break;
		case 32:
			if (func_1117(uParam1, "PeekExitAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1601457590))
	{
		func_467(uParam0, iParam2, "peek_enter_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "peek_enter_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 611442489))
	{
		func_467(uParam0, iParam2, "peek_idle_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "peek_idle_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1497341761))
	{
		func_467(uParam0, iParam2, "peek_exit_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "peek_exit_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_552(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	func_1118(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 33:
			if (func_1117(uParam1, "BetBlindAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle") || func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -131858145))
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_467(uParam0, iParam2, "bet_blind_a_chips", aggregate_func_9388(uParam0, iParam2, iVar0), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_553(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	iVar2 = uParam1->f_21;
	if (uParam0->f_40)
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	func_1118(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 35:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar0));
			if (func_1117(uParam1, "BetAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle") || func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_467(uParam0, iParam2, "bet_stack_a_chips", aggregate_func_9388(uParam0, iParam2, iVar0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_a_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_a_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_467(uParam0, iParam2, "bet_stack_b_chips", aggregate_func_9388(uParam0, iParam2, iVar0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_b_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_b_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_467(uParam0, iParam2, "bet_stack_c_chips", aggregate_func_9388(uParam0, iParam2, iVar0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_c_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_c_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		func_1140(uParam0, iParam2, iVar0, iVar2, 0, aggregate_func_4937(iVar1, 4), 0, 0);
		func_467(uParam0, iParam2, "bet_stack_d_chips", aggregate_func_9388(uParam0, iParam2, iVar0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_d_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_d_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
}

void func_554(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Var0.f_1 = 4;
	Var0 = uParam1->f_19;
	Var0.f_1[0] = uParam1->f_20;
	Var0.f_1[1] = uParam1->f_21;
	Var0.f_1[2] = uParam1->f_22;
	Var0.f_1[3] = uParam1->f_23;
	iVar6 = uParam1->f_43;
	if (uParam0->f_40)
	{
		func_1142(uParam0, iParam2, uParam1, &Var0, 0);
		func_1143(uParam0, iParam2, uParam1, &Var0, 0);
		func_1144(uParam0, iParam2, uParam1, &Var0, 0);
		func_1145(uParam0, iParam2, uParam1, &Var0, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	func_1118(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			aggregate_func_1477(uParam0, iParam2, Var0, 1);
			func_1121(uParam0, iParam2, 37);
			break;
		case 37:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if (func_1117(uParam1, "BetAnimFinished") || func_1117(uParam1, "BetBlindAnimFinished"))
			{
				func_1121(uParam0, iParam2, 41);
			}
			else if ((ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1634097517) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 813449677)) || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 21374103))
			{
				iVar7 = aggregate_func_9388(uParam0, iParam2, Var0);
				iVar8 = &uParam1->f_29[Var0];
				iVar9 = func_1148(iVar7, iVar8, 10);
				if (iVar9 > 4)
				{
					iVar9 = 4;
				}
				func_1140(uParam0, iParam2, Var0, iVar7, iVar8, iVar9, 0, 0);
				func_1149(uParam0, uParam1, iParam2, Var0);
				func_1142(uParam0, iParam2, uParam1, &Var0, 0);
				func_1143(uParam0, iParam2, uParam1, &Var0, 1);
				func_1145(uParam0, iParam2, uParam1, &Var0, 1);
				func_1121(uParam0, iParam2, 40);
			}
			break;
		case 40:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(iVar6));
			if ((func_1117(uParam1, "BetAnimFinished") || func_1117(uParam1, "BetBlindAnimFinished")) || func_1126(uParam0, iParam2, 1))
			{
				if (aggregate_func_5974(uParam0, iParam2) == 2)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				}
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 41:
			func_1142(uParam0, iParam2, uParam1, &Var0, 1);
			func_1143(uParam0, iParam2, uParam1, &Var0, 1);
			func_1145(uParam0, iParam2, uParam1, &Var0, 1);
			func_1144(uParam0, iParam2, uParam1, &Var0, 1);
			if (aggregate_func_5974(uParam0, iParam2) == 2)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
			}
			func_1121(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle") || func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1753320602))
	{
		func_467(uParam0, iParam2, "bet_stack_a_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_a_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1249714093))
	{
		func_467(uParam0, iParam2, "bet_stack_b_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_b_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2023235118))
	{
		func_467(uParam0, iParam2, "bet_stack_c_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_c_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -431766831))
	{
		func_467(uParam0, iParam2, "bet_stack_d_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_stack_d_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
}

void func_555(var uParam0, var uParam1, int iParam2)
{
	aggregate_func_5627(uParam0, iParam2, "NEW", "BET_ADVANCED");
	aggregate_func_5627(uParam0, iParam2, "NEW", 0);
}

void func_556(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_40)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (aggregate_func_4136(uParam0, iParam2, iVar2))
			{
				iVar0 = aggregate_func_9388(uParam0, iParam2, iVar2);
				iVar1 = aggregate_func_7680(uParam0, iParam2, iVar2);
				func_1154(uParam0, iParam2, iVar2, iVar0, iVar1, func_1148(iVar0, iVar1, 10), 0, 0);
			}
			iVar2++;
		}
		func_464(uParam0, iParam2, 1);
		return;
	}
	func_1118(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 34:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BetType", BUILTIN::TO_FLOAT(4));
			if (func_1117(uParam1, "BetAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 727682306))
	{
		func_467(uParam0, iParam2, "bet_all_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_all_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_all_bank_01", aggregate_func_9388(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_all_bank_02", aggregate_func_9388(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_all_bank_03", aggregate_func_9388(uParam0, iParam2, 2), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "bet_all_bank_05", aggregate_func_9388(uParam0, iParam2, 3), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_557(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1118(uParam0, iParam2, -1921404755);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam2 /*63*/]), "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_1117(uParam1, "CheckAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1798862211))
	{
		func_467(uParam0, iParam2, "check_a_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "check_a_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1444041649))
	{
		func_467(uParam0, iParam2, "check_b_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "check_b_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1739656056))
	{
		func_467(uParam0, iParam2, "check_c_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "check_c_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_558(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (func_1156(uParam0, iParam2))
		{
			func_469(uParam0, iParam2, 0);
			func_464(uParam0, iParam2, 1);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 45:
			if (func_1156(uParam0, iParam2))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_41));
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_43));
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Reveal");
				func_1121(uParam0, iParam2, 46);
			}
			break;
		case 46:
			if (func_1118(uParam0, iParam2, -1921404755))
			{
				func_1122(uParam0, iParam2);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_41));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_43));
			if (func_1117(uParam1, "RevealAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				func_469(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2347088))
	{
		func_1025(uParam0, iParam2, 3, 0, 1);
		switch (uParam1->f_41)
		{
			case 0:
				if (uParam1->f_43 == 0)
				{
					func_467(uParam0, iParam2, "reveal_win_a_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_win_a_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (uParam1->f_43 == 1)
				{
					func_467(uParam0, iParam2, "reveal_win_b_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_win_b_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (uParam1->f_43 == 2)
				{
					func_467(uParam0, iParam2, "reveal_win_c_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_win_c_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				break;
			case 1:
				if (uParam1->f_43 == 0)
				{
					func_467(uParam0, iParam2, "reveal_loss_a_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_loss_a_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (uParam1->f_43 == 1)
				{
					func_467(uParam0, iParam2, "reveal_loss_b_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_loss_b_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				else if (uParam1->f_43 == 2)
				{
					func_467(uParam0, iParam2, "reveal_loss_c_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "reveal_loss_c_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
				break;
			case 2:
				func_467(uParam0, iParam2, "reveal_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
				func_467(uParam0, iParam2, "reveal_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
				break;
		}
	}
}

void func_560(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_469(uParam0, iParam2, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 47:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_41));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (((func_1117(uParam1, "ReturnRevealEnterAnimFinished") || func_1117(uParam1, "ReturnEnterHoldCardsAnimFinished")) || func_1157(uParam0, iParam2, joaat("blendout"), 1)) || func_1157(uParam0, iParam2, 1426724047, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ReturnCards");
				func_1121(uParam0, iParam2, 48);
			}
			break;
		case 48:
			if (func_1118(uParam0, iParam2, -1921404755))
			{
				func_1122(uParam0, iParam2);
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_41));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (func_1117(uParam1, "ReturnCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				func_469(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1317959855))
	{
		func_467(uParam0, iParam2, "return_enter_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_enter_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1257930565))
	{
		func_467(uParam0, iParam2, "return_reveal_enter_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_reveal_enter_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1911579200))
	{
		func_467(uParam0, iParam2, "return_fold_enter_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_fold_enter_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -173534072))
	{
		func_467(uParam0, iParam2, "return_1_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_1_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1540636))
	{
		func_467(uParam0, iParam2, "return_2_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_2_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 693530283))
	{
		func_467(uParam0, iParam2, "return_3_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_3_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2123629490))
	{
		func_467(uParam0, iParam2, "return_4_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_4_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 595740131))
	{
		func_467(uParam0, iParam2, "return_5_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_5_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -252921886))
	{
		func_467(uParam0, iParam2, "return_6_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "return_6_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_562(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar0 = uParam1->f_19;
	bVar1 = MISC::IS_BIT_SET(uParam1->f_20, 0);
	if (uParam0->f_40)
	{
		func_849(uParam0, iParam2, iVar0, 0);
		aggregate_func_9385(uParam0, 0);
		aggregate_func_9385(uParam0, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 42:
			if ((func_603(uParam0, iParam2, 4, 1) || func_603(uParam0, iParam2, 5, 1)) || func_603(uParam0, iParam2, 3, 1))
			{
				iVar3 = 2;
			}
			else if (func_603(uParam0, iParam2, 1, 1))
			{
				iVar3 = 1;
			}
			else
			{
				iVar3 = 0;
			}
			if (func_1158(uParam0, iVar3))
			{
				func_1159(uParam0, iParam2, iVar3);
				func_1121(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (!func_596(uParam0, iParam2, 0))
			{
				if (func_1160(uParam0, iParam2) && func_1161(uParam0, iParam2))
				{
					func_1125(uParam0, iParam2, 0);
				}
			}
			if (!func_596(uParam0, iParam2, 1))
			{
				if (func_1162(uParam0, iParam2) || ((!uParam0->f_39 && func_596(uParam0, iParam2, 0)) && !func_1161(uParam0, iParam2)))
				{
					func_1135(uParam0, iParam2);
					bVar2 = (uParam0->f_39 || !func_596(uParam0, iParam2, 0));
					func_849(uParam0, iParam2, iVar0, bVar2);
					if (!bVar1)
					{
						aggregate_func_9385(uParam0, bVar2);
						aggregate_func_9385(uParam0, bVar2);
					}
					else
					{
						func_1163(uParam0, iParam2, bVar2);
					}
					func_1125(uParam0, iParam2, 1);
				}
			}
			if (func_1162(uParam0, iParam2) || (aggregate_func_8321(uParam0, iParam2) && func_1126(uParam0, iParam2, 0)))
			{
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_1069(uParam0, iParam2);
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_563(var uParam0, var uParam1, int iParam2)
{
	func_1069(uParam0, iParam2);
	aggregate_func_6629(uParam0, iParam2, 0);
}

void func_564(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	var uVar4[6];

	iVar2 = uParam1->f_19;
	bVar3 = MISC::IS_BIT_SET(uParam1->f_20, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uVar4[iVar0] = &(uParam0->f_818[iParam2 /*63*/])->f_34[iVar0];
		iVar0++;
	}
	if (uParam0->f_40)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (MISC::IS_BIT_SET(iVar2, iVar0) || iVar0 == iParam2)
			{
				func_849(uParam0, iVar0, &(uVar4[iVar0]), 0);
			}
			iVar0++;
		}
		aggregate_func_9385(uParam0, 0);
		aggregate_func_9385(uParam0, 0);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 42:
			if (func_1158(uParam0, 3))
			{
				func_1166(uParam0, 3, func_1165(iParam2, iVar2));
				func_1121(uParam0, iParam2, 43);
			}
			break;
		case 43:
			if (func_1167(uParam0, 3, func_1165(iParam2, iVar2)))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (MISC::IS_BIT_SET(iVar2, iVar0) && iVar0 != iParam2)
					{
						if (func_207(uParam0, iVar0))
						{
							func_840(uParam0, iVar0, 0);
							func_1168(uParam0, iVar0, iParam2);
						}
					}
					iVar0++;
				}
				func_1169(uParam0, 3, func_1165(iParam2, iVar2));
				func_1170(uParam0, iParam2, iVar2);
				func_1121(uParam0, iParam2, 44);
			}
			break;
		case 44:
			if (!func_596(uParam0, iParam2, 0))
			{
				if (func_1160(uParam0, iParam2) && func_1161(uParam0, iParam2))
				{
					func_1125(uParam0, iParam2, 0);
				}
			}
			if (!func_596(uParam0, iParam2, 1))
			{
				if ((func_1162(uParam0, iParam2) || ((!uParam0->f_39 && func_596(uParam0, iParam2, 0)) && !func_1161(uParam0, iParam2))) || func_1171(uParam0, iParam2, iParam2))
				{
					func_1135(uParam0, iParam2);
					bVar1 = (uParam0->f_39 || !func_596(uParam0, iParam2, 0));
					iVar0 = 0;
					while (iVar0 < 6)
					{
						if (MISC::IS_BIT_SET(iVar2, iVar0))
						{
							func_849(uParam0, iVar0, &(uVar4[iVar0]), bVar1);
						}
						iVar0++;
					}
					if (!bVar3)
					{
						aggregate_func_9385(uParam0, bVar1);
						aggregate_func_9385(uParam0, bVar1);
					}
					else
					{
						func_1163(uParam0, iParam2, bVar1);
					}
					func_1125(uParam0, iParam2, 1);
				}
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (MISC::IS_BIT_SET(iVar2, iVar0) && iVar0 != iParam2)
				{
					if (func_207(uParam0, iVar0) && func_1172(uParam0, iVar0, iParam2))
					{
						if (func_1171(uParam0, iVar0, iParam2))
						{
							func_1173(uParam0, iVar0, iParam2);
							func_215(uParam0, iVar0, 1, 0);
						}
					}
				}
				iVar0++;
			}
			if (func_1162(uParam0, iParam2) || func_1171(uParam0, iParam2, iParam2))
			{
				func_465(uParam0, iParam2, "NoCardsIdleRequest", 0.5f);
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_1069(uParam0, iParam2);
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_565(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_19;
	func_1069(uParam0, iParam2);
	aggregate_func_6629(uParam0, iParam2, 0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1) && iVar1 != iParam2)
		{
			if (func_207(uParam0, iVar1))
			{
				if ((uParam0->f_818[iVar1 /*63*/])->f_50)
				{
					func_840(uParam0, iVar1, 0);
				}
				else if (func_1172(uParam0, iVar1, iParam2))
				{
					func_1173(uParam0, iVar1, iParam2);
					func_215(uParam0, iVar1, 1, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_566(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = MISC::IS_BIT_SET((uParam0->f_818[iParam2 /*63*/])->f_19, 0);
	bVar1 = MISC::IS_BIT_SET((uParam0->f_818[iParam2 /*63*/])->f_19, 1);
	iVar2 = (uParam0->f_818[iParam2 /*63*/])->f_20;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 49:
			if (!bVar0)
			{
				func_1118(uParam0, iParam2, -1921404755);
			}
			if (func_1117(uParam1, "BoardReturnRevealAnimFinished"))
			{
				iVar3 = 0;
				while (iVar3 < 6)
				{
					func_455(uParam0, iVar3);
					iVar3++;
				}
				func_456(uParam0, 0);
				func_456(uParam0, 1);
				func_456(uParam0, 2);
				func_456(uParam0, 3);
				func_456(uParam0, 4);
				if (bVar0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "BoardReturnToPass");
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
					func_1121(uParam0, iParam2, 51);
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "BoardReturnExit");
					func_1121(uParam0, iParam2, 53);
				}
			}
			break;
		case 51:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "PassDeck"))
			{
				func_1125(uParam0, iParam2, 0);
				func_1121(uParam0, iParam2, 52);
			}
			break;
		case 52:
			func_1118(uParam0, iParam2, -1921404755);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar2));
			if (func_1117(uParam1, "PassDeckAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 53:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "BoardReturnExitAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1121191546))
	{
		if (func_771(uParam0, iParam2))
		{
			if (!bVar1)
			{
				func_467(uParam0, iParam2, "board_return_reveal_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
				func_467(uParam0, iParam2, "board_return_reveal_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
			}
		}
		if (func_971(uParam0, 0))
		{
			func_467(uParam0, iParam2, "board_return_reveal_card3", func_1138(uParam0, 0), 0, 2, -1082130432 /* Float: -1f */);
		}
		if (func_971(uParam0, 1))
		{
			func_467(uParam0, iParam2, "board_return_reveal_card4", func_1138(uParam0, 1), 0, 2, -1082130432 /* Float: -1f */);
		}
		if (func_971(uParam0, 2))
		{
			func_467(uParam0, iParam2, "board_return_reveal_card5", func_1138(uParam0, 2), 0, 2, -1082130432 /* Float: -1f */);
		}
		if (func_971(uParam0, 3))
		{
			func_467(uParam0, iParam2, "board_return_reveal_card6", func_1138(uParam0, 3), 0, 2, -1082130432 /* Float: -1f */);
		}
		if (func_971(uParam0, 4))
		{
			func_467(uParam0, iParam2, "board_return_reveal_card7", func_1138(uParam0, 4), 0, 2, -1082130432 /* Float: -1f */);
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (iVar4 != iParam2 || bVar1)
			{
				if (func_771(uParam0, iVar4))
				{
					func_467(uParam0, iParam2, "board_return_reveal_card8", aggregate_func_7680(uParam0, iVar4, 0), 0, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iParam2, "board_return_reveal_card9", aggregate_func_7680(uParam0, iVar4, 1), 0, 2, -1082130432 /* Float: -1f */);
				}
			}
			iVar4++;
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 637998928))
	{
		func_467(uParam0, iParam2, "pass_deck_1_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1482447871))
	{
		func_467(uParam0, iParam2, "pass_deck_2_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 66477882))
	{
		func_467(uParam0, iParam2, "pass_deck_3_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2130775593))
	{
		func_467(uParam0, iParam2, "pass_deck_4_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2138078509))
	{
		func_467(uParam0, iParam2, "pass_deck_5_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_567(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_19;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 54:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "PassDeck"))
			{
				func_1121(uParam0, iParam2, 55);
			}
			break;
		case 55:
			func_1118(uParam0, iParam2, -1921404755);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_1117(uParam1, "PassDeckAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1157265058))
	{
		func_467(uParam0, iParam2, "pass_deck_enter_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 637998928))
	{
		func_467(uParam0, iParam2, "pass_deck_1_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1482447871))
	{
		func_467(uParam0, iParam2, "pass_deck_2_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 66477882))
	{
		func_467(uParam0, iParam2, "pass_deck_3_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 2130775593))
	{
		func_467(uParam0, iParam2, "pass_deck_4_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2138078509))
	{
		func_467(uParam0, iParam2, "pass_deck_5_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_568(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 56:
			if (func_1117(uParam1, "ReceiveDeckEnterNoCardsAnimFinished"))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "ReceiveDeck");
				func_1121(uParam0, iParam2, 57);
			}
			break;
		case 57:
			func_1118(uParam0, iParam2, -1921404755);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam1, "ReceiveDeckExitNoCards"))
			{
				func_1121(uParam0, iParam2, 58);
			}
			break;
		case 58:
			func_1118(uParam0, iParam2, -1921404755);
			if (func_1117(uParam1, "ReceiveDeckExitNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1258893207))
	{
		func_467(uParam0, iParam2, "receive_deck_enter_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -854598449))
	{
		func_467(uParam0, iParam2, "receive_deck_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -698177614))
	{
		func_467(uParam0, iParam2, "receive_deck_exit_no_cards_deck", aggregate_func_4249(uParam0), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_569(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (uParam1->f_9 == 60)
		{
			func_451(uParam0, iParam2, 0);
		}
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 59:
			if (func_1118(uParam0, iParam2, -1921404755))
			{
				func_1122(uParam0, iParam2);
			}
			if (func_1117(uParam1, "MoodEnterHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 60:
			if (func_1118(uParam0, iParam2, -1921404755))
			{
				func_1122(uParam0, iParam2);
			}
			if (func_1117(uParam1, "MoodExitHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				func_451(uParam0, iParam2, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 827336758))
	{
		func_467(uParam0, iParam2, "mood_enter_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "mood_enter_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -13143479))
	{
		func_467(uParam0, iParam2, "mood_exit_hold_cards_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "mood_exit_hold_cards_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_571(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = (uParam0->f_818[iParam2 /*63*/])->f_19;
	iVar1 = (uParam0->f_818[iParam2 /*63*/])->f_20;
	if (uParam0->f_40)
	{
		func_451(uParam0, iParam2, iVar1);
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (((iVar0 != 1 && iVar1 != 1) && iVar0 != 4) && iVar1 != 4)
			{
				func_451(uParam0, iParam2, iVar1);
				func_464(uParam0, iParam2, 1);
				return;
			}
			if (func_1117(uParam1, "ClipsetTransBaseAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				func_451(uParam0, iParam2, iVar1);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_573(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1118(uParam0, iParam2, -1921404755);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_41));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "IntensityType", BUILTIN::TO_FLOAT(uParam1->f_42));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_43));
			if (func_1117(uParam1, "ExpressAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_575(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = (uParam0->f_818[iParam2 /*63*/])->f_42 == false;
	iVar1 = (uParam0->f_818[iParam2 /*63*/])->f_43;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_1118(uParam0, iParam2, -1921404755);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam2 /*63*/]), "CheckType", BUILTIN::TO_FLOAT(iVar1));
			if (uParam1->f_1 == 2)
			{
				if (func_1117(uParam1, "FidgetHoldCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
					func_1121(uParam0, iParam2, 1);
				}
			}
			else if (func_1117(uParam1, "FidgetNoCardsAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle") || func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 953493909))
		{
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_A_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 813983831))
		{
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_B_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1823711918))
		{
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_C_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1179453188))
		{
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_D_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -31018127))
		{
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
			func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_SUBTLE_E_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -308856369))
	{
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_B_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -89351506))
	{
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_C_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -288032489))
	{
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_D_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -496151764))
	{
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card1", aggregate_func_7680(uParam0, iParam2, 0), 4, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "HOLD_CARDS_IDLE_E_card2", aggregate_func_7680(uParam0, iParam2, 1), 4, 2, -1082130432 /* Float: -1f */);
	}
}

void func_577(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	struct<8> Var11;

	bVar0 = (uParam0->f_818[iParam2 /*63*/])->f_42 == false;
	iVar1 = (uParam0->f_818[iParam2 /*63*/])->f_43;
	iVar2 = (uParam0->f_818[iParam2 /*63*/])->f_44;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam2 /*63*/]), "LookType", BUILTIN::TO_FLOAT(iVar1));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam2 /*63*/]), "SeatType", BUILTIN::TO_FLOAT(iVar2));
			if ((func_1117(uParam1, "LookMediumAnimFinished") || func_1117(uParam1, "LookQuickAnimFinished")) || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "HoldCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "HoldCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1523471413))
	{
		StringCopy(&cVar3, "LOOK_", 64);
		if (iVar2 == -1)
		{
			StringConCat(&cVar3, "MEDIUM_BOARD_0", 64);
			StringIntConCat(&cVar3, iVar1 + 1, 64);
			Var11 = { cVar3 };
			StringConCat(&cVar3, "_card1", 64);
			StringConCat(&Var11, "_card2", 64);
		}
		else
		{
			if (bVar0)
			{
				StringConCat(&cVar3, "QUICK_", 64);
			}
			else
			{
				StringConCat(&cVar3, "MEDIUM_", 64);
			}
			StringIntConCat(&cVar3, iVar2 + 1, 64);
			if (iVar1 == 0)
			{
				StringConCat(&cVar3, "A", 64);
			}
			else if (iVar1 == 1)
			{
				StringConCat(&cVar3, "B", 64);
			}
			else if (iVar1 == 2)
			{
				StringConCat(&cVar3, "C", 64);
			}
			Var11 = { cVar3 };
			StringConCat(&cVar3, "_card1", 64);
			StringConCat(&Var11, "_card2", 64);
		}
		func_467(uParam0, iParam2, &cVar3, aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, &Var11, aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_579(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		func_1174(uParam0, iParam2);
		return;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(*uParam1) || TASK::_0x0C3CB2E600C8977D(*uParam1, 0))
			{
				func_1174(uParam0, iParam2);
			}
			break;
	}
}

void func_580(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = MISC::IS_BIT_SET((uParam0->f_818[iParam2 /*63*/])->f_19, 0);
	if (uParam0->f_40)
	{
		if (!PED::IS_PED_A_PLAYER(*uParam1))
		{
			func_454(uParam0, iParam2);
		}
		else
		{
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini_games@poker_mg@base", "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
			vVar4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mini_games@poker_mg@base", "sit_enter_left", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(*uParam1, vVar1, vVar4.z, 1, 0, 1);
			func_208(uParam0, iParam2, 0);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1117(uParam1, "FoldAnimFinished") || func_1120(uParam0, iParam2, 1))
			{
				func_1121(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_452(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_452(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					func_452(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			func_1121(uParam0, iParam2, 63);
			break;
		case 63:
			if ((((!func_1119(uParam0, iParam2, "sit_exit_left", 1065353216 /* Float: 1f */) && !func_1119(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */)) && !func_1119(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216 /* Float: 1f */)) && !func_1119(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216 /* Float: 1f */)) || (!bVar0 && func_1120(uParam0, iParam2, 0)))
			{
				func_208(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		func_467(uParam0, iParam2, "fold_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "fold_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_581(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_40)
	{
		if (PED::IS_PED_A_PLAYER(*uParam1))
		{
		}
		else
		{
			func_454(uParam0, iParam2);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1117(uParam1, "FoldAnimFinished") || func_1120(uParam0, iParam2, 1))
			{
				func_1121(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_452(uParam0, iParam2, "sit_exit_left", 0, 0.125f, 0.25f, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_452(uParam0, iParam2, "sit_exit_left_loss_a", 0, 0.125f, 0.25f, 0, 1);
				}
				else
				{
					func_452(uParam0, iParam2, "sit_exit_left_loss_b", 0, 0.125f, 0.25f, 0, 1);
				}
			}
			func_1121(uParam0, iParam2, 63);
			break;
		case 63:
			if ((((!func_1119(uParam0, iParam2, "sit_exit_left", 1065353216 /* Float: 1f */) && !func_1119(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */)) && !func_1119(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216 /* Float: 1f */)) && !func_1119(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216 /* Float: 1f */)) || func_1120(uParam0, iParam2, 0))
			{
				if (PED::IS_PED_A_PLAYER(*uParam1))
				{
				}
				else
				{
					if (uParam1->f_52)
					{
						ENTITY::SET_ENTITY_COLLISION(*uParam1, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(*uParam1, false);
					}
					func_1062(uParam0, iParam2, 0);
					if (uParam0->f_766)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, uParam0->f_763, 1f, -1, 0.25f, 4194304, 40000f);
						func_1121(uParam0, iParam2, 64);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(*uParam1, 40000f, 0);
						func_1121(uParam0, iParam2, 65);
					}
				}
			}
			break;
		case 64:
			if (!aggregate_func_927(*uParam1, 713668775) || ENTITY::IS_ENTITY_AT_COORD(*uParam1, uParam0->f_763, 1f, 1f, 1f, false, true, 0))
			{
				TASK::TASK_WANDER_STANDARD(*uParam1, 40000f, 0);
				func_1121(uParam0, iParam2, 65);
			}
			break;
		case 65:
			if (ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
			{
				func_454(uParam0, iParam2);
				return;
			}
			else if (aggregate_func_4298(&(uParam1->f_13)) > 10f)
			{
				func_208(uParam0, iParam2, 0);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		func_467(uParam0, iParam2, "fold_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "fold_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_582(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	if (uParam0->f_40)
	{
		if (!PED::IS_PED_A_PLAYER(*uParam1))
		{
			func_454(uParam0, iParam2);
		}
		else
		{
			vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini_games@poker_mg@base", "sit_enter_right", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
			vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mini_games@poker_mg@base", "sit_enter_right", *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 0f, 2) };
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(*uParam1, vVar0, vVar3.z, 1, 0, 1);
			func_208(uParam0, iParam2, 0);
		}
		return;
	}
	fVar8 = aggregate_func_9411(uParam0->f_699, 0, 1065353216 /* Float: 1f */);
	fVar9 = aggregate_func_9411(uParam0->f_700, 0, 1065353216 /* Float: 1f */);
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1117(uParam1, "FoldAnimFinished") || func_1120(uParam0, iParam2, 1))
			{
				func_1121(uParam0, iParam2, 62);
			}
			break;
		case 62:
			if (uParam1->f_41 == 2)
			{
				func_452(uParam0, iParam2, "sit_exit_right", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0, 1);
			}
			else if (uParam1->f_41 == 1)
			{
				if (uParam1->f_43 == 0)
				{
					func_452(uParam0, iParam2, "sit_exit_right_loss_a", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0, 1);
				}
				else
				{
					func_452(uParam0, iParam2, "sit_exit_right_loss_b", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0, 1);
				}
			}
			func_1121(uParam0, iParam2, 63);
			break;
		case 63:
			fVar6 = -1f;
			if (func_1119(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */))
			{
				fVar6 = func_1129(uParam0, iParam2, "sit_exit_right");
			}
			if (func_1119(uParam0, iParam2, "sit_exit_right_loss_a", 1065353216 /* Float: 1f */))
			{
				fVar6 = func_1129(uParam0, iParam2, "sit_exit_right_loss_a");
			}
			if (func_1119(uParam0, iParam2, "sit_exit_right_loss_b", 1065353216 /* Float: 1f */))
			{
				fVar6 = func_1129(uParam0, iParam2, "sit_exit_right_loss_b");
			}
			if (fVar6 >= fVar8)
			{
				fVar7 = aggregate_func_9411((1f - ((fVar6 - fVar8) / fVar9)), 0, 1065353216 /* Float: 1f */);
				ENTITY::SET_ENTITY_ALPHA(*uParam1, BUILTIN::ROUND((255f * fVar7)), false);
			}
			if ((!func_1119(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */) && !func_1119(uParam0, iParam2, "sit_exit_right_loss_a", 1065353216 /* Float: 1f */)) && !func_1119(uParam0, iParam2, "sit_exit_right_loss_b", 1065353216 /* Float: 1f */))
			{
				func_454(uParam0, iParam2);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		func_467(uParam0, iParam2, "fold_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "fold_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_583(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	struct<4> Var6;

	iVar0 = uParam1->f_19;
	iVar1 = uParam1->f_20;
	if (uParam0->f_40)
	{
		func_464(uParam0, iParam2, 1);
		return;
	}
	func_1118(uParam0, iParam2, -1921404755);
	switch (uParam1->f_9)
	{
		case 36:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "BuyInType", BUILTIN::TO_FLOAT(iVar0));
			if (func_1117(uParam1, "BuyInAnimFinished") || func_1126(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "NoCardsIdle");
				func_1121(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_1117(uParam1, "NoCardsIdle"))
			{
				func_464(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1503712844))
	{
		func_849(uParam0, iParam2, iVar1, 1);
		switch (iVar0)
		{
			case 0:
				StringCopy(&cVar2, "buy_in_a", 32);
				break;
			case 1:
				StringCopy(&cVar2, "buy_in_b", 32);
				break;
			case 2:
				StringCopy(&cVar2, "buy_in_c", 32);
				break;
			default:
				StringCopy(&cVar2, "buy_in_a", 32);
				break;
		}
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_01", 32);
		func_467(uParam0, iParam2, &Var6, uParam0->f_74[iParam2 /*30*/][0], 0, 2, -1082130432 /* Float: -1f */);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_02", 32);
		func_467(uParam0, iParam2, &Var6, uParam0->f_74[iParam2 /*30*/][1], 0, 2, -1082130432 /* Float: -1f */);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_03", 32);
		func_467(uParam0, iParam2, &Var6, uParam0->f_74[iParam2 /*30*/][2], 0, 2, -1082130432 /* Float: -1f */);
		Var6 = { cVar2 };
		StringConCat(&Var6, "_bank_05", 32);
		func_467(uParam0, iParam2, &Var6, uParam0->f_74[iParam2 /*30*/][3], 0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_584(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	var uVar3;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;

	iVar0 = uParam1->f_19;
	sVar2 = func_1176(iVar0, uParam1->f_43);
	if (uParam0->f_40)
	{
		if (!PED::IS_PED_A_PLAYER(*uParam1))
		{
			func_454(uParam0, iParam2);
		}
		else
		{
			vVar11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mini_games@poker_mg@base", sVar2, *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 1f, 2) };
			vVar14 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mini_games@poker_mg@base", sVar2, *(uParam0->f_1236[iParam2 /*3*/]), *(uParam0->f_1255[iParam2 /*3*/]), 1f, 2) };
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, 0, 1);
			ENTITY::_0x203BEFFDBE12E96A(*uParam1, vVar11, vVar14.z, 1, 0, 1);
			func_208(uParam0, iParam2, 0);
		}
		return;
	}
	switch (uParam1->f_9)
	{
		case 61:
			if (func_1117(uParam1, "FoldAnimFinished") || func_1120(uParam0, iParam2, 1))
			{
				func_1121(uParam0, iParam2, 62);
			}
			break;
		case 62:
			func_452(uParam0, iParam2, sVar2, 2, 0.5f, 1040187392 /* Float: 0.125f */, 0, 1);
			func_1121(uParam0, iParam2, 63);
			break;
		case 63:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 873047073))
			{
				if (func_1177(uParam0, iParam2))
				{
					func_849(uParam0, iParam2, 0, 1);
				}
			}
			if (!func_1119(uParam0, iParam2, sVar2, 1065353216 /* Float: 1f */) || func_1120(uParam0, iParam2, 0))
			{
				if (func_1177(uParam0, iParam2))
				{
					func_849(uParam0, iParam2, 0, 0);
				}
				if (uParam0->f_766)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, uParam0->f_763, 1f, 20000, 1f, 4202496, 40000f);
				}
				func_208(uParam0, iParam2, 1);
				return;
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 677502514))
	{
		func_467(uParam0, iParam2, "fold_card1", aggregate_func_7680(uParam0, iParam2, 0), 0, 2, -1082130432 /* Float: -1f */);
		func_467(uParam0, iParam2, "fold_card2", aggregate_func_7680(uParam0, iParam2, 1), 0, 2, -1082130432 /* Float: -1f */);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1852719906))
	{
		fVar17 = func_1129(uParam0, iParam2, sVar2);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (aggregate_func_4136(uParam0, iParam2, iVar1) && func_1179(sVar2, iVar1, &uVar3))
			{
				func_467(uParam0, iParam2, &uVar3, uParam0->f_74[iParam2 /*30*/][iVar1], 0, 2, fVar17);
			}
			iVar1++;
		}
	}
}

char* func_585(int iParam0)
{
	char cVar0[16];

	StringCopy(&cVar0, "#", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return aggregate_func_2280(cVar0);
}

void func_586(var uParam0, int iParam1)
{
	uParam0->f_307[iParam1 /*20*/] = 0;
	(uParam0->f_307[iParam1 /*20*/])->f_1 = 0;
	(uParam0->f_307[iParam1 /*20*/])->f_2 = 0;
	StringCopy(&((uParam0->f_307[iParam1 /*20*/])->f_3), "", 128);
	(uParam0->f_307[iParam1 /*20*/])->f_19 = 0;
}

void func_587(var uParam0, int iParam1)
{
	uParam0->f_428[iParam1 /*2*/] = 0;
	(uParam0->f_428[iParam1 /*2*/])->f_1 = 0;
}

void func_589(var uParam0)
{
	uParam0->f_9 = 0f;
	uParam0->f_10 = *uParam0;
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
}

void func_591(var uParam0)
{
	uParam0->f_3 = -93138100;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 2;
	uParam0->f_13 = 1000;
	uParam0->f_14 = 1;
	uParam0->f_15 = 2;
	uParam0->f_16 = -1;
	uParam0->f_17 = 0;
	uParam0->f_39 = 0;
}

void func_592(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_71[iVar0 /*28*/] = 0;
		StringCopy(&((uParam0->f_71[iVar0 /*28*/])->f_1), "", 128);
		(uParam0->f_71[iVar0 /*28*/])->f_17 = 0;
		(uParam0->f_71[iVar0 /*28*/])->f_18 = 255;
		(uParam0->f_71[iVar0 /*28*/])->f_26 = 0;
		(uParam0->f_71[iVar0 /*28*/])->f_27 = 0;
		uParam0->f_240[iVar0 /*28*/] = 0;
		StringCopy(&((uParam0->f_240[iVar0 /*28*/])->f_1), "", 128);
		(uParam0->f_240[iVar0 /*28*/])->f_17 = 0;
		(uParam0->f_240[iVar0 /*28*/])->f_18 = 255;
		(uParam0->f_240[iVar0 /*28*/])->f_26 = 0;
		(uParam0->f_240[iVar0 /*28*/])->f_27 = 0;
		uParam0->f_409[iVar0] = 0;
		iVar0++;
	}
}

void func_593(var uParam0)
{
	int iVar0;

	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1185(uParam0->f_39[iVar0 /*56*/]);
		aggregate_func_5063(uParam0->f_376[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_485 = 0;
	func_1187(&(uParam0->f_15));
}

void func_594(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1442[iVar0] = 0;
		iVar0++;
	}
}

bool func_595(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_596(var uParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET((uParam0->f_818[iParam1 /*63*/])->f_45, iParam2);
}

bool func_598(var uParam0)
{
	if (((((uParam0->f_43 == 0 || uParam0->f_43 == 13) || uParam0->f_43 == 14) || uParam0->f_43 == 15) || uParam0->f_43 == 1) || uParam0->f_43 == 16)
	{
		return true;
	}
	return false;
}

void func_599(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_151.f_2051)
	{
	}
	else
	{
		uParam0->f_151.f_2051 = 1;
		uParam0->f_151.f_2052 = 0;
		uParam0->f_151.f_2053 = 0;
		func_1188(&(uParam0->f_2335), 0, 1);
		func_1077(&(uParam0->f_2335), 0, 1);
		func_1078(&(uParam0->f_2335));
		func_1190(&(uParam0->f_2335), func_1189(uParam1), func_860(uParam1));
		if (aggregate_func_4249(&(uParam0->f_2335)) == 2 || aggregate_func_4249(&(uParam0->f_2335)) == 1)
		{
			aggregate_func_4586(&(uParam0->f_2335), 0);
			func_980(&(uParam0->f_2335));
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_981(&(uParam0->f_2335), iVar0))
			{
				if (func_200(&(uParam0->f_151.f_416), iVar0))
				{
					func_1047(&(uParam0->f_2335), iVar0, 0);
					func_1192(&(uParam0->f_2335), iVar0, func_618(uParam0, iVar0));
					aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
					func_1040(&(uParam0->f_2335), iVar0, 0);
					if (func_618(uParam0, iVar0) == 0)
					{
						func_1036(&(uParam0->f_2335), iVar0, func_1193());
					}
					else
					{
						func_1036(&(uParam0->f_2335), iVar0, func_1194());
					}
				}
			}
			iVar0++;
		}
	}
}

int func_600(var uParam0, int iParam1, bool bParam2)
{
	return func_180(uParam0, bParam2, -1857735811, iParam1, 0);
}

bool func_601(var uParam0, bool bParam1)
{
	if (func_1195(&(uParam0->f_151), bParam1))
	{
		func_1004(uParam0, &(uParam0->f_151));
		return true;
	}
	return false;
}

bool func_602(var uParam0, int iParam1, bool bParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 == 1)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/]))) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(&(uParam0->f_818[iParam1 /*63*/])))
		{
			return true;
		}
	}
	else if (!(uParam0->f_818[iParam1 /*63*/])->f_47)
	{
		func_1196(uParam0, iParam1);
	}
	return false;
}

bool func_603(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = aggregate_func_5974(uParam0, iParam1);
	if (bParam3)
	{
		if (iVar0 == iParam2)
		{
			return true;
		}
		return false;
	}
	switch (iParam2)
	{
		case 0:
		case 3:
			if (iVar0 == 0)
			{
				return true;
			}
			else if (iVar0 == 3)
			{
				return true;
			}
			break;
		case 1:
		case 4:
			if (iVar0 == 1)
			{
				return true;
			}
			else if (iVar0 == 4)
			{
				return true;
			}
			break;
		case 2:
		case 5:
			if (iVar0 == 2)
			{
				return true;
			}
			else if (iVar0 == 5)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_604(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = aggregate_func_6570(uParam0, iParam1);
	return func_434(&iVar0, iParam2);
}

void func_606(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	bool bVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 7);
		bVar0 = MISC::IS_BIT_SET(iParam3, iParam1);
		if (bParam4)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_19), 0);
		}
		if (bVar0)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_19), 1);
		}
		(uParam0->f_818[iParam1 /*63*/])->f_20 = iParam5;
		(uParam0->f_818[iParam1 /*63*/])->f_21 = uParam2;
		if (!uParam0->f_40)
		{
			func_1197(uParam0, iParam1, iParam3);
			if (!func_625(uParam0))
			{
			}
			else if (aggregate_func_4267(uParam0) != iParam1)
			{
			}
			if (aggregate_func_4275(uParam0))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ReceiveDeckEnterNoCards");
				func_1121(uParam0, iParam1, 7);
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ShuffleEnter");
				func_1121(uParam0, iParam1, 9);
			}
		}
		if (bVar0)
		{
			func_468(uParam0, iParam1, 2);
		}
		else
		{
			func_468(uParam0, iParam1, 1);
		}
		if (aggregate_func_4275(uParam0))
		{
			func_1198(uParam0, iParam1, 0);
		}
	}
}

bool func_608(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 == iParam2 && (uParam0->f_818[iParam1 /*63*/])->f_46 == 0)
	{
		return true;
	}
	return false;
}

int func_609(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	Var0 = { *(uParam0->f_151.f_2099[iParam2 /*6*/]) };
	iVar7 = -1;
	if (iParam1 == -1)
	{
	}
	else
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if ((((&uParam0->f_2839.f_818[iVar9 /*63*/] != 0 && (uParam0->f_2839.f_818[iVar9 /*63*/])->f_57 == 0) && &uParam0->f_151.f_2066[iVar9] == -1) && iVar9 != iParam1) && iVar9 != iParam4)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_4)
				{
					MISC::SET_BIT(&iVar8, iVar9);
				}
			}
			iVar9++;
		}
		fVar10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0, Var0.f_1);
		while (iVar8 & 63 != 0 && iParam3 > 0)
		{
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			while (!MISC::IS_BIT_SET(iVar8, iVar9))
			{
				iVar9 = (iVar9 + 1 % 6);
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_5)
			{
				iVar6 = 1;
			}
			else
			{
				iVar6 = 0;
			}
			func_1199(&(uParam0->f_151), iVar9, iParam1, iVar6, fVar10);
			fVar10 = (fVar10 + MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0.f_2, Var0.f_3));
			if (iVar7 == -1)
			{
				iVar7 = iVar9;
			}
			MISC::CLEAR_BIT(&iVar8, iVar9);
			iParam3 = (iParam3 - 1);
		}
	}
	return iVar7;
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (MISC::IS_BIT_SET((uParam0->f_818[iParam1 /*63*/])->f_45, iParam2))
	{
		uVar0 = (uParam0->f_818[iParam1 /*63*/])->f_8;
		MISC::CLEAR_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_45), iParam2);
	}
}

bool func_612(var uParam0, int iParam1, bool bParam2)
{
	return func_908(uParam0, iParam1, 0, bParam2);
}

bool func_613(var uParam0, int iParam1, bool bParam2)
{
	return func_1200(uParam0, iParam1, 0, bParam2);
}

void func_616(var uParam0)
{
	if (!uParam0->f_151.f_2051)
	{
	}
	else
	{
		uParam0->f_151.f_2051 = 0;
		func_1188(&(uParam0->f_2335), 1, 1);
		func_1203(&(uParam0->f_2335));
		func_1042(&(uParam0->f_2335), 0, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 1, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 2, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 3, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 4, func_327(), 0, 0);
		if (aggregate_func_4249(&(uParam0->f_2335)) == 8 || aggregate_func_4249(&(uParam0->f_2335)) == 9)
		{
			func_980(&(uParam0->f_2335));
		}
	}
}

bool func_617(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1) && (uParam0->f_39[iParam1 /*56*/])->f_6 != -1)
	{
		return true;
	}
	return false;
}

int func_618(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_5974(&(uParam0->f_151.f_416), iParam1);
	if (iParam1 == uParam0->f_151.f_9 && iVar0 == 0)
	{
		iVar0 = uParam0->f_151.f_1452;
	}
	return iVar0;
}

void func_619(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	aggregate_func_2985(1);
	aggregate_func_2975(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_170 = iParam2;
}

void func_620(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	aggregate_func_4242(&(uParam0->f_2335), uParam0->f_151.f_9);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1205(uParam1, iVar0))
		{
			func_1040(&(uParam0->f_2335), iVar0, 1);
		}
		else if (func_907(uParam1, iVar0))
		{
			func_1047(&(uParam0->f_2335), iVar0, 0);
			func_1192(&(uParam0->f_2335), iVar0, aggregate_func_5974(uParam1, iVar0));
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
			func_1040(&(uParam0->f_2335), iVar0, 0);
			aggregate_func_9387(&(uParam0->f_2335), iVar0, iVar0 == uParam1->f_3);
			iVar1 = aggregate_func_5974(uParam1, iVar0);
			if (iVar0 == uParam1->f_4)
			{
				if (iVar1 <= uParam1->f_9)
				{
					func_1036(&(uParam0->f_2335), iVar0, func_1207(&(uParam0->f_2335), iVar1));
				}
				else
				{
					func_1036(&(uParam0->f_2335), iVar0, func_1208(&(uParam0->f_2335), iVar1));
				}
			}
			else if (iVar0 == uParam1->f_5)
			{
				func_1036(&(uParam0->f_2335), iVar0, func_1209(&(uParam0->f_2335), iVar1));
			}
			else if (iVar1 > 0)
			{
				func_1036(&(uParam0->f_2335), iVar0, func_1210(&(uParam0->f_2335), iVar1));
			}
			else
			{
				func_1036(&(uParam0->f_2335), iVar0, func_1211(uParam0, iVar0));
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		func_1042(&(uParam0->f_2335), iVar2, func_327(), 0, 1);
		iVar2++;
	}
	func_1045(&(uParam0->f_2335), 0, func_1046(uParam1), 1);
}

void func_621(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	func_1212(&(uParam0->f_1670), 1, -1);
	iVar0 = -1;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (&uParam0->f_1670[iVar3 /*13*/])
		{
			if (func_200(uParam1, iVar3))
			{
				iVar2 = (aggregate_func_5974(uParam1, iVar3) + aggregate_func_5974(uParam1, iVar3));
				(uParam0->f_1670[iVar3 /*13*/])->f_3 = iVar2;
				if (func_617(uParam1, iVar3))
				{
					if (iVar0 == -1 || iVar1 < iVar2)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
					}
					(uParam0->f_1670[iVar3 /*13*/])->f_2++;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (&uParam0->f_1670[iVar3 /*13*/])
		{
			iVar2 = (uParam0->f_1670[iVar3 /*13*/])->f_3;
			fVar4 = aggregate_func_9411((BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1)), 0, 1065353216 /* Float: 1f */);
			fVar5 = 0f;
			fVar6 = ((1f - fVar4) + ((fVar5 * 0.5f) * fVar4));
			(uParam0->f_1670[iVar3 /*13*/])->f_5 = fVar4;
			(uParam0->f_1670[iVar3 /*13*/])->f_6 = fVar5;
			(uParam0->f_1670[iVar3 /*13*/])->f_7 = fVar6;
		}
		iVar3++;
	}
	uParam0->f_1670.f_120 = 0;
	uParam0->f_1670.f_125 = iVar1;
	uParam0->f_1670.f_126++;
	uParam0->f_1670.f_127++;
	uParam0->f_1670.f_128++;
	uParam0->f_1670.f_131 = -1;
	uParam0->f_1670.f_132 = -1;
	uParam0->f_1670.f_133 = 0;
	uParam0->f_1670.f_137 = 0f;
	uParam0->f_1670.f_138 = 0f;
	uParam0->f_1670.f_139 = 0f;
	uParam0->f_1670.f_140 = 0;
	uParam0->f_1670.f_141 = 0;
	uParam0->f_1670.f_142 = 0;
	uParam0->f_1670.f_143 = 0;
	uParam0->f_1670.f_144 = 0;
	uParam0->f_1670.f_145 = -1;
	uParam0->f_1670.f_146 = 0;
	uParam0->f_1670.f_147 = -1;
	uParam0->f_1670.f_148 = 0;
	uParam0->f_1670.f_149 = 0;
	uParam0->f_1670.f_150 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_1670.f_151[iVar3] = 0f;
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		uParam0->f_1670.f_158[iVar3] = 0f;
		iVar3++;
	}
	uParam0->f_1670.f_165 = 0;
	uParam0->f_1670.f_166 = 0;
	uParam0->f_1670.f_167 = 0;
	uParam0->f_1670.f_168 = 0;
	uParam0->f_1670.f_169 = 0;
	uParam0->f_1670.f_170 = 0;
	uParam0->f_1670.f_130 = 0;
}

int func_622(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (uParam1->f_1606 != 0)
	{
		if (bParam4)
		{
			func_644(uParam1);
		}
		else
		{
			return 0;
		}
	}
	uParam1->f_1606 = iParam2;
	uParam1->f_1606.f_1 = 0;
	if (bParam3)
	{
		func_385(uParam0, uParam1);
	}
	return 1;
}

void func_623(var uParam0, var uParam1)
{
	if (func_617(uParam1, uParam0->f_151.f_9))
	{
		aggregate_func_1962(aggregate_func_4257(joaat("attempts"), -1672018311), 1);
	}
}

bool func_625(var uParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_689);
}

int func_627(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_689))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_689));
	}
	uParam0->f_689 = 0;
	if (!func_1216(uParam0, iParam1, iParam2, &vVar0, &vVar3, 1))
	{
		return 0;
	}
	iVar6 = OBJECT::CREATE_OBJECT(uParam0->f_695, vVar0, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar6, vVar3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	uParam0->f_689 = iVar6;
	uParam0->f_689.f_1 = iParam1;
	uParam0->f_689.f_2 = iParam2;
	return 1;
}

struct<2> func_628(var uParam0, int iParam1, int iParam2)
{
	return *((uParam0->f_39[iParam1 /*56*/])->f_7[iParam2 /*2*/]);
}

int func_629(struct<2> Param0)
{
	if (((Param0 >= 2 && Param0 <= 14) && Param0.f_1 >= 0) && Param0.f_1 <= 3)
	{
		return 1;
	}
	return 0;
}

int func_630(var uParam0, int iParam1, struct<2> Param2, struct<2> Param4, bool bParam6)
{
	var uVar0[2];
	int iVar3;
	struct<2> Var4[2];
	int iVar9;
	int iVar10;

	*(Var4[0 /*2*/]) = { Param2 };
	*(Var4[1 /*2*/]) = { Param4 };
	if (!func_470(uParam0, *(Var4[0 /*2*/]), uVar0[0]) || !func_470(uParam0, *(Var4[1 /*2*/]), uVar0[1]))
	{
		iVar9 = 0;
		while (iVar9 < 2)
		{
			if (func_470(uParam0, *((*uParam0->f_617[iParam1 /*9*/])[iVar9 /*2*/]), &iVar3))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
				*((*uParam0->f_617[iParam1 /*9*/])[iVar9 /*2*/]) = { func_327() };
			}
			iVar9++;
		}
		return 0;
	}
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (((*uParam0->f_617[iParam1 /*9*/])[iVar10 /*2*/])->f_1 != (Var4[iVar10 /*2*/])->f_1 || uParam0->f_617[iParam1 /*9*/][iVar10 /*2*/] != &Var4[iVar10 /*2*/])
		{
			if (bParam6)
			{
				if (&(uParam0->f_617[iParam1 /*9*/])->f_5[iVar10] != 0)
				{
				}
			}
			if (func_470(uParam0, *((*uParam0->f_617[iParam1 /*9*/])[iVar10 /*2*/]), &iVar3))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
			}
			*((*uParam0->f_617[iParam1 /*9*/])[iVar10 /*2*/]) = { *(Var4[iVar10 /*2*/]) };
			STREAMING::REQUEST_MODEL(&(uVar0[iVar10]), false);
		}
		iVar10++;
	}
	return 1;
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else if (iParam1 == iParam2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 21);
		iVar0 = (iParam2 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			if (!func_625(uParam0))
			{
			}
			else if (aggregate_func_4267(uParam0) != iParam1)
			{
			}
			else if (aggregate_func_4275(uParam0))
			{
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "PassDeckEnter");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "PassDeckType", BUILTIN::TO_FLOAT(iVar0));
			func_1121(uParam0, iParam1, 54);
		}
		func_1198(uParam0, iParam2, 1);
	}
}

void func_632(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 22);
		if (!uParam0->f_40)
		{
			if (!func_625(uParam0))
			{
			}
			else
			{
				if (aggregate_func_4267(uParam0) != iParam1)
				{
				}
				if (!aggregate_func_4275(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ReceiveDeckEnterNoCards");
			func_1121(uParam0, iParam1, 56);
		}
		func_1198(uParam0, iParam1, 0);
	}
}

void func_634(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	var uVar6;
	var uVar11;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if (!bParam3 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else if (bParam3 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if (iParam2 < 1)
	{
	}
	else
	{
		Var0.f_1 = 4;
		uVar6 = 4;
		uVar11 = 4;
		func_1218(uParam0, iParam1, &uVar6);
		func_1219(uParam0, iParam1, &uVar11, 0);
		func_1220(iParam2, &uVar6, &uVar11, &Var0, bParam3);
		func_1221(uParam0, iParam1, &Var0, bParam3);
	}
}

void func_635(var uParam0, int iParam1)
{
	aggregate_func_9387(&(uParam0->f_2335), iParam1, 1);
}

void func_636(var uParam0, int iParam1)
{
	aggregate_func_9387(&(uParam0->f_2335), iParam1, 0);
}

int func_637(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam0 + 1 % 6);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 1 % 6);
		iVar1++;
	}
	return -1;
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam2 = func_604(uParam0, iParam1, iParam2);
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_4 == 4)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_4 == 5)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_4 == 3)
	{
	}
	else if (iParam2 == 4)
	{
	}
	else if (iParam2 == 5)
	{
	}
	else if (iParam2 == 3)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_4 == iParam2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 24);
		func_1222(uParam0, iParam1, 0);
		iVar0 = aggregate_func_5974(uParam0, iParam1);
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		(uParam0->f_818[iParam1 /*63*/])->f_20 = iParam2;
		if (iVar0 == 1 || iParam2 == 1)
		{
			if (!uParam0->f_40)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ClipsetTransBase");
			}
		}
		func_1121(uParam0, iParam1, 0);
	}
}

void func_639(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 9);
		if (bParam2)
		{
			func_451(uParam0, iParam1, MISC::GET_RANDOM_INT_IN_RANGE(0, 4));
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "HoldCardsEnter");
		}
		func_468(uParam0, iParam1, 2);
		if (func_771(uParam0, iParam1))
		{
			func_1223(uParam0, iParam1, 2);
		}
	}
}

void func_641(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (uParam0->f_166)
	{
		return;
	}
	if (uParam0->f_485 != 0)
	{
		if (bParam4)
		{
		}
	}
	else if (!func_1224(uParam1, iParam2, uParam3))
	{
	}
	else
	{
		uParam0->f_485 = 1;
		uParam0->f_485.f_1 = iParam2;
		uParam0->f_485.f_2 = 0;
		uParam0->f_485.f_3 = 0;
	}
}

void func_642(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "receivedHand", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40);
	}
}

void func_644(var uParam0)
{
	if (uParam0->f_1606 != 0)
	{
		uParam0->f_1606 = 0;
		uParam0->f_1606.f_1 = 0;
	}
}

void func_645(var uParam0)
{
	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	uParam0->f_1670.f_120 = 0;
	uParam0->f_1670.f_131 = -1;
}

bool func_646(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;

	switch (uParam1->f_1627)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_207(&(uParam0->f_2839), iVar0) && func_787(&(uParam0->f_2839), iVar0))
				{
					return false;
				}
				iVar0++;
			}
			func_210(&(uParam0->f_2839), 0);
			func_1228(uParam0);
			func_356(uParam0, &(uParam0->f_151.f_416));
			aggregate_func_4242(uParam1, 1);
			break;
		case 1:
			if (func_357(uParam0))
			{
				func_1230(uParam1);
				func_1231(&(uParam0->f_2839), 0);
				func_850(&(uParam0->f_2839));
				if (!uParam0->f_151.f_1996 && !func_200(&(uParam0->f_151.f_416), uParam0->f_151.f_1997))
				{
					func_429(&(uParam0->f_151), &(uParam0->f_151.f_416), &uVar1);
					func_430(&(uParam0->f_151), uVar1);
				}
				func_431(uParam0, &(uParam1->f_416), 1, 0, 1);
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_207(&(uParam0->f_2839), iVar0))
					{
						func_215(&(uParam0->f_2839), iVar0, aggregate_func_5974(&(uParam0->f_2839), iVar0), 0);
					}
					iVar0++;
				}
				uParam1->f_1628 = 0;
				aggregate_func_4242(uParam1, 2);
			}
			break;
		case 2:
			if (uParam0->f_151.f_1628 > 3)
			{
				aggregate_func_4242(uParam1, 3);
			}
			uParam0->f_151.f_1628++;
			break;
	}
	return uParam1->f_1627 == 3;
}

void func_647(var uParam0)
{
	uParam0->f_151.f_1626 = 0;
	CAM::DO_SCREEN_FADE_IN(1000);
}

int func_648(var uParam0, int iParam1)
{
	if (uParam0->f_151.f_1626 == 1 || uParam0->f_151.f_1626 == 2)
	{
		if (uParam0->f_151.f_1625 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_649(var uParam0, int iParam1)
{
	if (uParam0->f_9 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_650(var uParam0)
{
	if (uParam0->f_151.f_1626 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		uParam0->f_151.f_1626 = 0;
		return false;
	}
	else if (uParam0->f_151.f_1626 == 2)
	{
		uParam0->f_151.f_1626 = 3;
		return true;
	}
	return false;
}

void func_652(var uParam0, var uParam1)
{
	aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
	HUD::_0x5F57522BC1EB9D9D((uParam0->f_2839.f_818[uParam1->f_6 /*63*/])->f_62, -828390532);
	func_1036(&(uParam0->f_2335), uParam1->f_6, func_1035(uParam0, uParam1->f_6, aggregate_func_5974(uParam1, uParam1->f_6)));
	func_1233(&(uParam0->f_2335), uParam1->f_6, 1f);
}

void func_653(var uParam0, var uParam1)
{
	uParam0->f_151.f_1632 = 1;
	aggregate_func_4283(&(uParam0->f_151.f_1640));
	uParam0->f_151.f_1656 = 0;
	aggregate_func_4313(&(uParam0->f_151.f_1653));
	uParam0->f_151.f_2183 = 0;
	aggregate_func_7248(&(uParam0->f_151.f_1638));
	if (aggregate_func_7212(&(uParam0->f_2335)))
	{
		func_1234(&(uParam0->f_2335), uParam1, &(uParam0->f_151.f_1638), &(uParam0->f_151.f_11), 1);
		func_680(&(uParam0->f_2335));
	}
	if (!aggregate_func_9489(&(uParam0->f_151.f_1638)))
	{
		func_1236(&(uParam0->f_2335), &(uParam0->f_151.f_416), &(uParam0->f_151.f_11), uParam1->f_6, 1);
		AUDIO::PLAY_SOUND_FRONTEND("BET_PROMPT", "HUD_POKER", true, 0);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("OJPokerPlayerTurn"))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("OJPokerPlayerTurn");
		}
	}
	func_1237(&(uParam0->f_2335), "MGPKR_OBJ_YOUR_TURN");
}

void func_654(var uParam0)
{
	if (func_649(uParam0, uParam0->f_416.f_6))
	{
		func_1238(uParam0);
		aggregate_func_4283(&(uParam0->f_1650));
	}
	else
	{
		aggregate_func_4313(&(uParam0->f_1650));
	}
}

int func_655(var uParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	if (uParam0->f_151.f_1632)
	{
		if (aggregate_func_9489(&(uParam0->f_151.f_1638)))
		{
			*uParam3 = { uParam0->f_151.f_1638 };
			return 1;
		}
		else
		{
			fVar0 = aggregate_func_9411((aggregate_func_4298(&(uParam0->f_151.f_1640)) / uParam0->f_151.f_1457), 0, 1065353216 /* Float: 1f */);
			if (fVar0 > uParam1->f_1458)
			{
				if (!uParam0->f_151.f_2183)
				{
					AUDIO::PLAY_SOUND_FRONTEND("player_turn_countdown_start", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_151.f_2183 = 1;
				}
				fVar1 = (1f - ((fVar0 - uParam1->f_1458) / (1f - uParam1->f_1458)));
				func_1233(&(uParam0->f_2335), uParam2->f_6, fVar1);
			}
			fVar2 = ((60f * 4f) / uParam1->f_1462);
			fVar3 = ((60f * 4f) / uParam1->f_1463);
			fVar4 = uParam1->f_1464;
			fVar5 = uParam1->f_1465;
			fVar6 = uParam1->f_1466;
			fVar7 = uParam1->f_1467;
			fVar8 = uParam1->f_1468;
			fVar9 = uParam1->f_1469;
			fVar10 = aggregate_func_9411((aggregate_func_4298(&(uParam1->f_1640)) / uParam1->f_1457), 0, 1065353216 /* Float: 1f */);
			fVar11 = uParam1->f_1470;
			if (fVar10 < fVar4)
			{
				fVar12 = fVar2;
			}
			else if (fVar10 >= fVar4 && fVar10 < fVar5)
			{
				fVar12 = (fVar2 + ((fVar10 - fVar4) * ((fVar3 - fVar2) / (fVar5 - fVar4))));
			}
			else if (fVar10 >= fVar5)
			{
				fVar12 = fVar3;
			}
			if (fVar10 < fVar8)
			{
				fVar13 = fVar6;
			}
			else if (fVar10 >= fVar8 && fVar10 < fVar9)
			{
				fVar13 = (fVar6 + ((fVar10 - fVar8) * ((fVar7 - fVar6) / (fVar9 - fVar8))));
			}
			else if (fVar10 >= fVar9)
			{
				fVar13 = fVar7;
			}
			if (uParam0->f_151.f_1656 == 0)
			{
				PAD::SET_PAD_SHAKE(0, 150, 200);
				aggregate_func_4283(&(uParam0->f_151.f_1653));
				if (uParam0->f_151.f_1471 == 0f)
				{
					uParam0->f_151.f_1656 = 3;
				}
				else
				{
					uParam0->f_151.f_1656++;
				}
			}
			else if (uParam0->f_151.f_1656 == 1)
			{
				if (fVar10 >= uParam0->f_151.f_1471)
				{
					uParam0->f_151.f_1656 = 2;
				}
			}
			else if (uParam0->f_151.f_1656 == 2)
			{
				PAD::SET_PAD_SHAKE(0, 100, BUILTIN::ROUND(fVar13));
				aggregate_func_4283(&(uParam0->f_151.f_1653));
				uParam0->f_151.f_1656++;
			}
			else if (uParam0->f_151.f_1656 == 3)
			{
				if (aggregate_func_4298(&(uParam0->f_151.f_1653)) > (fVar12 * 0.75f))
				{
					PAD::SET_PAD_SHAKE(0, 100, BUILTIN::ROUND((fVar13 * fVar11)));
					uParam0->f_151.f_1656++;
				}
			}
			else if (uParam0->f_151.f_1656 == 4)
			{
				if (aggregate_func_4298(&(uParam0->f_151.f_1653)) > fVar12)
				{
					uParam0->f_151.f_1656 = 2;
				}
			}
			if (aggregate_func_4287(&(uParam0->f_2335)) && func_1239(&(uParam0->f_2335), &(uParam0->f_151.f_416), &(uParam0->f_151.f_11), uParam2->f_6, func_998(uParam0, 1)))
			{
				func_1240(&(uParam0->f_2335), uParam3);
				return 1;
			}
			if (aggregate_func_4628(&(uParam0->f_151.f_1640), uParam0->f_151.f_1457))
			{
				AUDIO::PLAY_SOUND_FRONTEND("player_turn_countdown_end", "RDRO_Poker_Sounds", true, 0);
				func_1241(uParam2, uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_656(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_403(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_CHECK(0, &Var0))
		{
			func_404(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_657(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_403(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_CALL(0, &Var0))
		{
			func_404(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_658(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;

	if (!func_403(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_RAISE(uParam2, &Var0))
		{
			func_404(uParam0, 2, Var0, 1, 0);
			return 1;
		}
	}
	return 0;
}

bool func_659(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_403(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_FOLD(&Var0))
		{
			func_404(uParam0, 2, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

void func_660(var uParam0, var uParam1)
{
	if (uParam0->f_151.f_1632)
	{
		func_1242(&(uParam0->f_2335));
		func_1072(&(uParam0->f_2335));
		func_980(&(uParam0->f_2335));
		func_1233(&(uParam0->f_2335), uParam1->f_6, -1f);
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("OJPokerPlayerTurn"))
		{
			GRAPHICS::_0xC5CB91D65852ED7E("OJPokerPlayerTurn");
		}
		uParam0->f_151.f_1632 = 0;
	}
}

void func_661(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (!func_649(uParam1, uParam1->f_416.f_6))
	{
		if (!aggregate_func_4260(&(uParam1->f_1650)))
		{
			if (func_1243(uParam1, uParam1->f_416.f_6, &iVar0))
			{
				aggregate_func_4284(&(uParam1->f_1650), func_1244(iVar0));
			}
		}
		if (aggregate_func_4260(&(uParam1->f_1650)))
		{
			fVar1 = aggregate_func_9411((aggregate_func_4298(&(uParam1->f_1650)) / uParam1->f_1457), 0, 1065353216 /* Float: 1f */);
			if (fVar1 > uParam1->f_1458)
			{
				fVar2 = (1f - ((fVar1 - uParam1->f_1458) / (1f - uParam1->f_1458)));
				func_1233(&(uParam0->f_2335), uParam1->f_416.f_6, fVar2);
			}
		}
	}
}

bool func_662(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((uParam0->f_66 && uParam0->f_70), iParam1);
}

void func_663(var uParam0, var uParam1)
{
	aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 0);
	aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 0);
	HUD::_0x5F57522BC1EB9D9D((uParam0->f_2839.f_818[uParam1->f_6 /*63*/])->f_62, 1277358601);
}

void func_665(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3 /*13*/])
	{
		return;
	}
	switch (uParam0->f_1397)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 5:
			if (uParam0->f_1399 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 4;
			}
			break;
		case 6:
			iVar0 = 5;
			break;
	}
	func_1212(uParam1, iVar0, iParam3);
	iVar1 = aggregate_func_5974(uParam2, iParam3);
	iVar2 = (iVar1 + uParam0->f_1398);
	iVar3 = aggregate_func_5974(uParam2, iParam3);
	iVar4 = (iVar1 + iVar3);
	iVar5 = (func_1245(uParam2) - uParam0->f_1398);
	iVar6 = iVar5;
	if (iVar6 < uParam2->f_10 * 10)
	{
		iVar6 = uParam2->f_10 * 10;
	}
	iVar7 = uParam0->f_1398;
	if (iVar0 == 5)
	{
		iVar7 = (aggregate_func_4249(uParam2) - aggregate_func_5974(uParam2, iParam3));
	}
	fVar8 = ((*uParam1)[iParam3 /*13*/])->f_5;
	fVar9 = ((*uParam1)[iParam3 /*13*/])->f_6;
	fVar10 = ((*uParam1)[iParam3 /*13*/])->f_7;
	fVar11 = (BUILTIN::TO_FLOAT(iVar7) / BUILTIN::TO_FLOAT(iVar2));
	fVar12 = (BUILTIN::TO_FLOAT(uParam0->f_1399) / BUILTIN::TO_FLOAT(iVar6));
	fVar13 = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4));
	fVar14 = ((1f - fVar8) + ((fVar13 * 0.5f) * fVar8));
	if (uParam0->f_1397 == 2)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 0);
	}
	if (uParam0->f_1397 == 5)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 1);
	}
	if (uParam2->f_2 == 0)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 5);
	}
	if (func_750(uParam2) < 2)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 12);
	}
	if (iVar0 == 3)
	{
		if (fVar12 >= 1f)
		{
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 6);
		}
		else if (fVar12 >= 0.3f)
		{
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 7);
		}
		else
		{
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 8);
		}
	}
	if (iVar0 == 5)
	{
		if (fVar9 >= 0.8f)
		{
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 9);
		}
		if (fVar9 >= 0.4f || (fVar10 >= 0.666f && fVar9 < 0.15f))
		{
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 10);
		}
	}
	if (func_1247(uParam2) < 2 || (func_1248(uParam2) == 0 && uParam2->f_2 == 3))
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 11);
	}
	if (iVar0 == 2)
	{
		aggregate_func_2633(&(uParam0->f_1670), iParam3, 1);
	}
	else if (iVar0 != 5)
	{
		aggregate_func_2633(&(uParam0->f_1670), iParam3, 0);
	}
	if (iVar0 == 5)
	{
		aggregate_func_2633(&(uParam0->f_1670), iParam3, 1);
		func_1251(&(uParam0->f_1670), iParam3);
	}
	((*uParam1)[iParam3 /*13*/])->f_6 = fVar13;
	((*uParam1)[iParam3 /*13*/])->f_7 = fVar14;
	uParam1->f_137 = fVar11;
	uParam1->f_138 = fVar9;
	uParam1->f_139 = fVar10;
}

void func_666(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1252(uParam1);
		bVar1 = func_1253(uParam0);
		bVar2 = func_1254(uParam1, 1);
		bVar3 = func_1255(uParam1, 1);
		bVar4 = func_1256(uParam1, 1);
		iVar5 = func_1257(uParam1, 0);
		if (!bVar1)
		{
			if (bVar2)
			{
				if (bVar3)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_again", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						func_1258(uParam1, iVar5);
						return;
					}
				}
				if (bVar4)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_badLoss", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_weakMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar0)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "check_preflop", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "check_base", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_667(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = aggregate_func_4304(uParam1);
		fVar1 = aggregate_func_4304(uParam1);
		fVar2 = func_881(uParam1, iParam4);
		bVar3 = func_1261(uParam1);
		bVar4 = aggregate_func_9389(fVar0);
		bVar5 = func_1263(fVar0);
		bVar6 = func_884(fVar1);
		bVar7 = func_1264(fVar1);
		bVar8 = func_885(fVar1);
		bVar9 = func_1265(fVar1);
		bVar10 = func_885(fVar2);
		bVar11 = func_1253(uParam0);
		bVar12 = func_1254(uParam1, 1);
		bVar13 = func_1255(uParam1, 1);
		bVar14 = func_1256(uParam1, 1);
		bVar15 = func_1266(uParam1, 1);
		bVar16 = func_1267(uParam1, 1);
		bVar17 = func_1268(uParam1, 1);
		bVar18 = func_1269(uParam1, 1);
		bVar19 = func_1270(uParam1, 1);
		iVar20 = func_1257(uParam1, 0);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar13)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_again", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						func_1258(uParam1, iVar20);
						return;
					}
				}
				if (bVar14)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_badLoss", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_fold_weakMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar15)
			{
				if (bVar16)
				{
					if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_nervous", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_cocky", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_impressed", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bullshit", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar17)
				{
					if (bVar7)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_medRaise_focused", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_medRaise_complacent", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else if (bVar18 && !bVar19)
				{
					if (bVar9)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_smallRaise_tease", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_weakMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar16 || bVar17) || bVar19)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_bluff", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
					if (!bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_boldMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar10 && !bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_happy", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_highPressure_allin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 && !bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_highPressure_notCheap", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar3 || bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_base_significant", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_base_highPressure", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_base_casual", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "call_base_significant", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_668(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		bVar0 = func_1261(uParam1);
		bVar1 = func_1271(uParam1);
		bVar2 = func_1272(uParam1);
		bVar3 = func_1273(uParam1);
		bVar4 = func_1253(uParam0);
		bVar5 = func_1274(uParam1);
		bVar6 = func_1275(uParam1, 4);
		fVar7 = aggregate_func_4304(uParam1);
		bVar8 = func_1265(fVar7);
		bVar9 = func_1266(uParam1, 1);
		bVar10 = func_1267(uParam1, 1);
		bVar11 = func_1268(uParam1, 1);
		bVar12 = func_1269(uParam1, 1);
		bVar13 = func_1270(uParam1, 1);
		iVar14 = func_1257(uParam1, 0);
		if (bVar0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_allin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (!bVar4)
		{
			if (bVar9)
			{
				if (bVar10)
				{
					if (bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_cocky", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bullshit", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
				}
				else if (bVar12 || bVar11)
				{
					if (bVar8 && !bVar13)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_smallRaise_tease", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_weakMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_interestingMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				if ((bVar10 || bVar11) || bVar13)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_bluff", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						return;
					}
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_afterCheckAgain", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					func_1276(uParam1, iVar14);
					return;
				}
			}
			if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_afterChecks", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_big", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_med", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_small", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_base", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "raise_base", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_669(var uParam0, int iParam1)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 15);
		iVar0 = ((uParam0->f_799 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		uParam0->f_799 = iVar0;
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Check");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
	}
}

bool func_670(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_1148(aggregate_func_7680(uParam0, iParam1, iVar1), aggregate_func_7680(uParam0, iParam1, iVar1), 10) >= 1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 > 1;
}

void func_671(var uParam0, int iParam1)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 14);
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Bet");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "BetType", BUILTIN::TO_FLOAT(4));
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (aggregate_func_4136(uParam0, iParam1, iVar0))
			{
				func_1279(uParam0, iParam1, iVar0);
			}
			iVar0++;
		}
		func_1121(uParam0, iParam1, 34);
	}
}

void func_672(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (((uParam0->f_151.f_1397 == 2 || uParam0->f_151.f_1397 == 3) || uParam0->f_151.f_1397 == 4) && func_1280(uParam1, &(uParam0->f_151.f_11), uParam1->f_6))
	{
		func_1036(&(uParam0->f_2335), uParam1->f_6, func_1281(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
		aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
	}
	else
	{
		switch (uParam0->f_151.f_1397)
		{
			case 5:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1282(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
			case 1:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1283(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
			case 2:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1038(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
			case 3:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1284(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
			case 4:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1285(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
			case 6:
				func_1036(&(uParam0->f_2335), uParam1->f_6, func_1286(&(uParam0->f_2335), aggregate_func_5974(uParam1, uParam1->f_6)));
				aggregate_func_9387(&(uParam0->f_2335), uParam1->f_6, 1);
				break;
		}
	}
	func_1233(&(uParam0->f_2335), uParam1->f_6, -1f);
	func_1192(&(uParam0->f_2335), uParam1->f_6, aggregate_func_5974(uParam1, uParam1->f_6));
	iVar0 = 0;
	if (uParam1->f_485 == 0)
	{
		iVar1 = 0;
		iVar0 = func_1046(uParam1);
	}
	else
	{
		iVar1 = (uParam1->f_485 - 1);
		iVar0 = (func_1046(uParam1) + aggregate_func_4971(uParam1, iVar1));
	}
	func_1045(&(uParam0->f_2335), iVar1, iVar0, aggregate_func_4249(uParam1));
}

int func_673(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if ((!func_1287(uParam2) && !func_1253(uParam1)) && func_1288(uParam1->f_1870.f_1, 5f))
	{
		iVar0 = func_1289(uParam2);
		iVar1 = func_871(&(uParam0->f_2839), iVar0, -1, -1);
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (func_200(uParam3, iVar4))
			{
				if (func_1290(uParam3, iVar4, &(uParam1->f_11)))
				{
					MISC::SET_BIT(&iVar2, iVar4);
				}
				if (func_1288(&(uParam1->f_1870.f_2[iVar4]), 20f))
				{
					MISC::SET_BIT(&iVar3, iVar4);
				}
			}
			iVar4++;
		}
		iVar1 = (iVar1 && iVar3);
		bVar5 = func_1291(uParam2);
		iVar6 = -1;
		if (bVar5)
		{
			if (func_1288(uParam1->f_1870.f_12, (5f * 60f)))
			{
				iVar6 = func_891(uParam0, (iVar1 && -1 ^ iVar2), "commentCurAct_check_tooOften", -1, 100);
				if (iVar6 != -1)
				{
					func_1292(&(uParam1->f_1870.f_12));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar6]);
					func_1276(uParam2, iVar0);
					func_1293(uParam1, iVar6);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_674(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;

	if ((!func_1287(uParam2) && !func_1253(uParam1)) && func_1288(uParam1->f_1870.f_1, 5f))
	{
		iVar0 = func_1289(uParam2);
		iVar1 = func_1225(uParam3, iVar0);
		iVar2 = func_1225(uParam3, iVar1);
		iVar3 = aggregate_func_4304(uParam2);
		iVar4 = func_871(&(uParam0->f_2839), iVar0, iVar1, iVar2);
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_200(uParam3, iVar7))
			{
				if (iVar7 == iVar3)
				{
					MISC::SET_BIT(&iVar5, iVar7);
				}
				if (func_1288(&(uParam1->f_1870.f_2[iVar7]), 20f))
				{
					MISC::SET_BIT(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar4 = (iVar4 && iVar6);
		fVar8 = aggregate_func_4304(uParam2);
		bVar9 = aggregate_func_9389(fVar8);
		bVar10 = func_1261(uParam2);
		iVar11 = -1;
		if (bVar9 || bVar10)
		{
			if (func_1288(uParam1->f_1870.f_9, 30f))
			{
				iVar11 = func_891(uParam0, (iVar4 && -1 ^ iVar5), "commentCurAct_boldMove", -1, 50);
				if (iVar11 != -1)
				{
					func_1292(&(uParam1->f_1870.f_9));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar11]);
					func_1293(uParam1, iVar11);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_675(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;

	if ((!func_1287(uParam2) && !func_1253(uParam1)) && func_1288(uParam1->f_1870.f_1, 5f))
	{
		iVar0 = func_1289(uParam2);
		iVar1 = func_1225(uParam3, iVar0);
		iVar2 = func_1225(uParam3, iVar1);
		iVar3 = func_871(&(uParam0->f_2839), iVar0, iVar1, iVar2);
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		while (iVar8 < 6)
		{
			if (func_200(uParam3, iVar8))
			{
				if (func_433(uParam3, iVar8))
				{
					MISC::SET_BIT(&iVar4, iVar8);
				}
				if (func_1290(uParam3, iVar8, &(uParam1->f_11)))
				{
					MISC::SET_BIT(&iVar5, iVar8);
				}
				if (func_884(func_881(uParam2, iVar8)))
				{
					MISC::SET_BIT(&iVar6, iVar8);
				}
				if (func_1288(&(uParam1->f_1870.f_2[iVar8]), 20f))
				{
					MISC::SET_BIT(&iVar7, iVar8);
				}
			}
			iVar8++;
		}
		iVar3 = (iVar3 && iVar7);
		bVar9 = func_1271(uParam2);
		bVar10 = func_1272(uParam2);
		bVar11 = func_1273(uParam2);
		bVar12 = func_1261(uParam2);
		iVar13 = -1;
		if (bVar12 && !bVar11)
		{
			if (func_1288(uParam1->f_1870.f_9, 30f))
			{
				iVar13 = func_891(uParam0, (iVar3 && (-1 ^ iVar6 || -1 ^ iVar4)), "commentCurAct_boldMove", -1, 50);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_9));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar9)
		{
			if (func_1288(uParam1->f_1870.f_13, 40f))
			{
				iVar13 = func_891(uParam0, ((iVar3 && iVar5) && iVar6), "commentCurAct_bigRaise_aggressive", -1, 66);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_13));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
			}
			if (func_1288(uParam1->f_1870.f_14, 20f))
			{
				iVar13 = func_891(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_14));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar10)
		{
			if (func_1288(uParam1->f_1870.f_14, 20f))
			{
				iVar13 = func_891(uParam0, (iVar3 && iVar5), "commentCurAct_bigRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_14));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
			}
		}
		if (bVar11 && !bVar12)
		{
			if (func_1288(uParam1->f_1870.f_15, 60f))
			{
				iVar13 = func_891(uParam0, ((iVar3 && iVar5) && -1 ^ iVar6), "commentCurAct_smallRaise_bluff", -1, 50);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_15));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
				iVar13 = func_891(uParam0, (iVar3 && -1 ^ iVar6), "commentCurAct_smallRaise_tease", -1, 50);
				if (iVar13 != -1)
				{
					func_1292(&(uParam1->f_1870.f_15));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar13]);
					func_1293(uParam1, iVar13);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_676(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 17);
		(uParam0->f_818[iParam1 /*63*/])->f_41 = iParam3;
		iVar0 = (iParam2 - iParam1);
		if (iVar0 <= 0)
		{
			iVar0 += 6;
		}
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		if (!uParam0->f_40)
		{
			iVar1 = aggregate_func_5974(uParam0, iParam1);
			iVar2 = aggregate_func_5974(uParam0, iParam1);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "WinLossType", BUILTIN::TO_FLOAT(iParam3));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "ReturnCardType", BUILTIN::TO_FLOAT(iVar0));
			if (iVar1 == 2)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ReturnEnterHoldCards");
			}
			else
			{
				if (iVar2 != 3)
				{
				}
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "ReturnRevealEnter");
			}
		}
		func_1121(uParam0, iParam1, 47);
		func_468(uParam0, iParam1, 1);
		func_1222(uParam0, iParam1, 2);
		if (func_771(uParam0, iParam1))
		{
			func_1223(uParam0, iParam1, 5);
		}
	}
}

void func_677(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 2, -1))
	{
		fVar0 = aggregate_func_4304(uParam1);
		fVar1 = aggregate_func_4304(uParam1);
		fVar2 = aggregate_func_4304(uParam1);
		bVar3 = func_884(fVar0);
		bVar4 = aggregate_func_9389(fVar0);
		bVar5 = func_1297(fVar1);
		bVar6 = func_1298(fVar1);
		bVar7 = func_1299(fVar1);
		bVar8 = func_887(fVar1);
		bVar9 = func_1300(fVar1);
		bVar10 = aggregate_func_9389(fVar2);
		bVar11 = func_1253(uParam0);
		bVar12 = func_1266(uParam1, 1);
		bVar13 = func_1267(uParam1, 1);
		if (!bVar11)
		{
			if (bVar12)
			{
				if (bVar4)
				{
					if (bVar5)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_angry_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_angry_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_angry_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_bigRaise_aggressive", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
				else
				{
					if (bVar5)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_frustrated_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_frustrated_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					else if (bVar7 || bVar8)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_frustrated_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
					if (bVar13 && !bVar6)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "commentPrevAct_boldMove", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							return;
						}
					}
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_veryBadLoss", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar6 || (bVar3 && !bVar9))
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_badLoss", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10 && bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_tooExpensive_highPressure", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar10)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_tooExpensive", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if ((bVar10 || bVar6) || bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_base_significant", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_base_casual", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "fold_base_significant", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

int func_678(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if ((!func_1287(uParam2) && !func_1253(uParam1)) && func_1288(uParam1->f_1870.f_1, 5f))
	{
		iVar0 = func_1289(uParam2);
		iVar1 = aggregate_func_4304(uParam2);
		iVar2 = func_871(&(uParam0->f_2839), iVar0, -1, -1);
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 6)
		{
			if (func_200(uParam3, iVar7))
			{
				if (func_433(uParam3, iVar7))
				{
					MISC::SET_BIT(&iVar3, iVar7);
				}
				if (!func_1301(uParam3, iVar7))
				{
					MISC::SET_BIT(&iVar4, iVar7);
				}
				if (iVar7 == iVar1)
				{
					MISC::SET_BIT(&iVar5, iVar7);
				}
				if (func_1288(&(uParam1->f_1870.f_2[iVar7]), 20f))
				{
					MISC::SET_BIT(&iVar6, iVar7);
				}
			}
			iVar7++;
		}
		iVar2 = (iVar2 && iVar6);
		bVar8 = func_1302(uParam2);
		iVar9 = -1;
		if (bVar8)
		{
			if (func_1288(uParam1->f_1870.f_11, (5f * 60f)))
			{
				iVar9 = func_891(uParam0, ((iVar2 && iVar3) && iVar4), "commentCurAct_fold_tooOften", -1, 100);
				if (iVar9 != -1)
				{
					func_1292(&(uParam1->f_1870.f_11));
					func_1292(&(uParam1->f_1870.f_1));
					func_1292(uParam1->f_1870.f_2[iVar9]);
					func_1258(uParam2, iVar0);
					func_1293(uParam1, iVar9);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_679(var uParam0, var uParam1)
{
	func_1040(&(uParam0->f_2335), uParam1->f_6, 1);
}

void func_680(var uParam0)
{
	if (uParam0->f_485 != 0)
	{
		if (aggregate_func_2875(uParam0->f_494))
		{
			aggregate_func_4823(uParam0->f_494, 1, 1);
		}
		if (aggregate_func_2875(uParam0->f_495))
		{
			aggregate_func_4823(uParam0->f_495, 1, 1);
		}
		if (aggregate_func_2875(uParam0->f_499))
		{
			aggregate_func_4823(uParam0->f_499, 1, 1);
		}
		if (aggregate_func_2875(uParam0->f_500))
		{
			aggregate_func_4823(uParam0->f_500, 1, 1);
		}
		uParam0->f_485 = 0;
		uParam0->f_485.f_2 = 0;
		uParam0->f_485.f_3 = 0;
		aggregate_func_2878(&(uParam0->f_485.f_4), 1, 1);
		aggregate_func_2878(&(uParam0->f_485.f_5), 1, 1);
		aggregate_func_2878(&(uParam0->f_485.f_6), 1, 1);
		aggregate_func_2878(&(uParam0->f_485.f_7), 1, 1);
		aggregate_func_2878(&(uParam0->f_485.f_8), 1, 1);
	}
}

void func_681(var uParam0, var uParam1)
{
	int iVar0;

	func_1078(&(uParam0->f_2335));
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		func_1045(&(uParam0->f_2335), iVar0, aggregate_func_4971(uParam1, iVar0), aggregate_func_4249(uParam1));
		iVar0++;
	}
}

bool func_682(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_695(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_683(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;

	if (uParam0->f_151.f_9 == iParam1)
	{
		func_619(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(2, "MGPKR_REFUND_YOU", func_953(uParam0, iParam2)), 0);
	}
	else
	{
		Var0 = { func_436(&(uParam0->f_151), iParam1, 0, 1) };
		func_619(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(10, "MGPKR_REFUND_THEM_MP", &Var0, func_953(uParam0, iParam2)), 0);
	}
}

void func_685(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0[4];
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	int iVar25;

	aggregate_func_5627(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_FIXUP_DURING_ROUND()");
	aggregate_func_5627(uParam0, iParam1, "OLD", 0);
	func_1218(uParam0, iParam1, &uVar5);
	func_1219(uParam0, iParam1, &uVar10, 1);
	func_1218(uParam0, iParam1, &uVar15);
	func_1219(uParam0, iParam1, &uVar20, 1);
	func_1303(uParam0, iParam1, &uVar0);
	if (func_1304(iParam2, iParam3, &uVar15, &uVar20))
	{
		iVar25 = 0;
		while (iVar25 < 4)
		{
			if ((!bParam4 || &uVar5[iVar25] != &uVar15[iVar25]) || &uVar10[iVar25] != &uVar20[iVar25])
			{
				func_1305(uParam0, iParam1, iVar25, &(uVar0[iVar25]), &(uVar15[iVar25]), func_1148(&(uVar0[iVar25]), &(uVar15[iVar25]), 10), bParam5, 0);
				func_1140(uParam0, iParam1, iVar25, &(uVar0[iVar25]), &(uVar20[iVar25]), func_1148(&(uVar0[iVar25]), &(uVar20[iVar25]), 10), bParam5, 0);
				aggregate_func_1477(uParam0, iParam1, iVar25, bParam5);
			}
			iVar25++;
		}
	}
	aggregate_func_5627(uParam0, iParam1, "NEW", 0);
	aggregate_func_5627(uParam0, iParam1, "NEW", 0);
}

bool func_686(var uParam0)
{
	return uParam0->f_2 == 4;
}

bool func_687(var uParam0, int iParam1)
{
	return func_629(*(uParam0->f_672[iParam1 /*2*/]));
}

int func_688(var uParam0, int iParam1, struct<2> Param2, bool bParam4)
{
	int iVar0;

	if ((uParam0->f_672[iParam1 /*2*/])->f_1 != Param2.f_1 || &uParam0->f_672[iParam1 /*2*/] != Param2)
	{
		if (bParam4)
		{
			if (&uParam0->f_672.f_11[iParam1] != 0)
			{
			}
		}
		if (func_470(uParam0, *(uParam0->f_672[iParam1 /*2*/]), &iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		if (func_470(uParam0, Param2, &iVar0))
		{
			*(uParam0->f_672[iParam1 /*2*/]) = { Param2 };
			STREAMING::REQUEST_MODEL(iVar0, false);
			return 1;
		}
		else
		{
			*(uParam0->f_672[iParam1 /*2*/]) = { func_327() };
			return 0;
		}
	}
	return 1;
}

void func_689(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else if ((iParam2 != 1 && iParam2 != 2) && iParam2 != 3)
	{
	}
	else if (uParam0->f_795 != -1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 8);
		uParam0->f_795 = iParam2;
		uParam0->f_796 = iParam3;
		if (aggregate_func_5974(uParam0, iParam1) == 2)
		{
			func_469(uParam0, iParam1, 2);
		}
		func_1121(uParam0, iParam1, 15);
	}
}

void func_690(var uParam0, var uParam1)
{
	int iVar0;

	func_1307(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_907(uParam1, iVar0))
		{
			func_1047(&(uParam0->f_2335), iVar0, 0);
			func_1192(&(uParam0->f_2335), iVar0, aggregate_func_5974(uParam1, iVar0));
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
			if (aggregate_func_5974(uParam1, iVar0) <= 0)
			{
			}
			else if (func_1280(uParam1, &(uParam0->f_151.f_11), iVar0))
			{
			}
			else
			{
				func_1036(&(uParam0->f_2335), iVar0, func_1211(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

void func_691(var uParam0, var uParam1)
{
	int iVar0;

	func_1077(&(uParam0->f_2335), 0, 1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < uParam1->f_15.f_23)
		{
			func_1042(&(uParam0->f_2335), iVar0, func_1041(uParam1, iVar0), 0, 1);
		}
		else
		{
			func_1042(&(uParam0->f_2335), iVar0, func_327(), 0, 1);
		}
		iVar0++;
	}
}

void func_694(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1307(uParam0, uParam1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_907(uParam1, iVar0))
		{
			func_1047(&(uParam0->f_2335), iVar0, 1);
			func_1036(&(uParam0->f_2335), iVar0, func_1048());
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
			func_1049(&(uParam0->f_2335), iVar0);
			func_1050(&(uParam0->f_2335), iVar0, 0, func_327());
			func_1050(&(uParam0->f_2335), iVar0, 1, func_327());
			func_1051(&(uParam0->f_2335), iVar0, 0);
			func_1051(&(uParam0->f_2335), iVar0, 1);
		}
		iVar0++;
	}
}

bool func_695(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1) && (uParam0->f_39[iParam1 /*56*/])->f_6 == 2)
	{
		return true;
	}
	return false;
}

bool func_696(var uParam0, int iParam1)
{
	return (func_629(*((*uParam0->f_617[iParam1 /*9*/])[0 /*2*/])) && func_629(*((*uParam0->f_617[iParam1 /*9*/])[1 /*2*/])));
}

void func_697(var uParam0)
{
	uParam0->f_151.f_2054 = -1;
	uParam0->f_151.f_2055 = -1;
	uParam0->f_151.f_2056 = 0;
	uParam0->f_151.f_2057 = 0;
}

bool func_698(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = uParam0->f_3;
	return func_709(uParam0, uParam1, iParam2, 1);
}

void func_699(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = uParam0->f_151.f_2054;
	if (!func_695(&(uParam0->f_151.f_416), iVar0))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar2 != iParam1)
			{
				if (func_695(&(uParam0->f_151.f_416), iVar2) && aggregate_func_5974(&(uParam0->f_2839), iVar2) == 3)
				{
					MISC::SET_BIT(&iVar1, iVar2);
				}
			}
			iVar2++;
		}
		iVar4 = 0;
		while (iVar4 < 6)
		{
			if (MISC::IS_BIT_SET(iVar1, iVar4))
			{
				bVar3 = false;
				iVar5 = 0;
				while (iVar5 < 6)
				{
					if ((iVar4 != iVar5 && MISC::IS_BIT_SET(iVar1, iVar5)) && func_1308(&(uParam0->f_151.f_416), iVar5, iVar4))
					{
						bVar3 = true;
					}
					else
					{
						iVar5++;
					}
				}
				if (!bVar3)
				{
					iVar0 = iVar4;
				}
				else
				{
					iVar4++;
				}
				uParam0->f_151.f_2054 = iVar0;
				uParam0->f_151.f_2055 = iParam1;
				if (!func_617(&(uParam0->f_151.f_416), iParam1))
				{
					uParam0->f_151.f_2056 = 0;
					uParam0->f_151.f_2057 = 0;
				}
				else if (!func_695(&(uParam0->f_151.f_416), iVar0))
				{
					uParam0->f_151.f_2056 = aggregate_func_6509(&(uParam0->f_151.f_416), iParam1) > 0;
					uParam0->f_151.f_2057 = 0;
				}
				else
				{
					uParam0->f_151.f_2056 = func_1310(&(uParam0->f_151.f_416), iParam1, iVar0);
					uParam0->f_151.f_2057 = func_1308(&(uParam0->f_151.f_416), iParam1, iVar0);
				}
			}
		}
	}
}

void func_700(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 16);
		func_1121(uParam0, iParam1, 45);
		uParam0->f_803 = ((uParam0->f_803 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		(uParam0->f_818[iParam1 /*63*/])->f_41 = iParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_43 = uParam0->f_803;
		func_468(uParam0, iParam1, 1);
		func_1222(uParam0, iParam1, 2);
		if (func_771(uParam0, iParam1))
		{
			func_1223(uParam0, iParam1, 3);
		}
	}
}

void func_701(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3 /*13*/])
	{
		return;
	}
	func_1212(uParam1, 6, iParam3);
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam1->f_142), iParam3);
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_141), iParam3);
	}
	if (!uParam1->f_140)
	{
		uParam1->f_140 = 1;
		if (uParam0->f_1547 == 9)
		{
			iVar2 = func_742(uParam2, iParam3);
			uParam1->f_144 = uParam1->f_146;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_907(uParam2, iVar0) || (bParam4 && iVar0 == iParam3))
				{
					if (func_742(uParam2, iVar0) == iVar2)
					{
						MISC::SET_BIT(&(uParam1->f_144), iVar0);
						MISC::SET_BIT(&(uParam1->f_143), iVar0);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_1311(uParam2, iVar2, iVar0))
				{
					iVar1 = func_1312(uParam2, iVar0, iVar2);
					uParam1->f_151[iVar0] = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(((*uParam1)[iVar0 /*13*/])->f_3));
				}
				else
				{
					uParam1->f_151[iVar0] = 0f;
				}
				iVar0++;
			}
		}
		else if (uParam0->f_1547 == 6)
		{
			uParam1->f_144 = 0;
			uParam1->f_143 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_907(uParam2, iVar0))
				{
					MISC::SET_BIT(&(uParam1->f_144), iVar0);
					MISC::SET_BIT(&(uParam1->f_143), iVar0);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_907(uParam2, iVar0))
				{
					iVar1 = aggregate_func_5974(uParam2, iVar0);
					uParam1->f_151[iVar0] = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(((*uParam1)[iVar0 /*13*/])->f_3));
				}
				iVar0++;
			}
		}
	}
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	if (!bParam4)
	{
		if (uParam1->f_145 == -1)
		{
			uParam1->f_145 = iParam3;
			MISC::SET_BIT(&(uParam1->f_146), iParam3);
			if (aggregate_func_6509(uParam2, iParam3) > 0)
			{
				MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 13);
			}
		}
		else if (func_1310(uParam2, iParam3, uParam1->f_145))
		{
			if (func_1308(uParam2, iParam3, uParam1->f_145))
			{
				uParam1->f_145 = iParam3;
				uParam1->f_146 = 0;
			}
			MISC::SET_BIT(&(uParam1->f_146), iParam3);
			MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 13);
		}
	}
	else if (uParam1->f_145 == -1)
	{
	}
	uParam1->f_149 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar0) && MISC::IS_BIT_SET(uParam1->f_144, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_146, iVar0))
		{
			if (func_1313(uParam2, iVar0, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar0);
			}
		}
		iVar0++;
	}
	iVar3 = -1;
	uParam1->f_150 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (((MISC::IS_BIT_SET(uParam1->f_141, iVar0) && MISC::IS_BIT_SET(uParam1->f_144, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_146, iVar0)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar0))
		{
			if (iVar3 == -1 || func_1308(uParam2, iVar3, iVar0))
			{
				iVar3 = iVar0;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar0);
			}
			else if (func_1314(uParam2, iVar3, iVar0))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar0);
			}
		}
		iVar0++;
	}
}

void func_702(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		bVar0 = aggregate_func_2967(uParam1, iParam4);
		bVar1 = func_1316(uParam1);
		bVar2 = func_1317(uParam1);
		bVar3 = (func_1318(uParam1) && func_364(uParam1->f_144) < func_364(aggregate_func_4133(uParam3)));
		bVar4 = func_1320(uParam1, iParam4);
		bVar5 = func_1321(uParam1, iParam4);
		bVar6 = func_1322(uParam1, iParam4);
		bVar7 = func_1323(uParam1, iParam4);
		if (bVar2 && aggregate_func_6509(uParam3, iParam4) <= 1)
		{
			if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_first_samePlayers", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_first", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar1)
			{
				ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_bad", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40);
				return;
			}
		}
		if (bVar0)
		{
			if (bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_good_closeWinAgain", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_good_closeWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_good", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else
		{
			if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_bad_closeLossAgain", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (bVar7)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_bad_closeLoss", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "reveal_bad", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
	}
}

void func_703(var uParam0, var uParam1)
{
	func_1036(&(uParam0->f_2335), uParam0->f_151.f_2046, func_979(uParam1, uParam0->f_151.f_2046, 1));
	aggregate_func_9387(&(uParam0->f_2335), uParam0->f_151.f_2046, 1);
	func_1049(&(uParam0->f_2335), uParam0->f_151.f_2046);
	func_1050(&(uParam0->f_2335), uParam0->f_151.f_2046, 0, func_628(uParam1, uParam0->f_151.f_2046, 0));
	func_1050(&(uParam0->f_2335), uParam0->f_151.f_2046, 1, func_628(uParam1, uParam0->f_151.f_2046, 1));
	func_1052(&(uParam0->f_2335), uParam0->f_151.f_2046, 0);
}

int func_704(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_1324(&(uParam0->f_416), iParam1);
	iVar1 = aggregate_func_5974(&(uParam0->f_416), iParam1);
	fVar2 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_705(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 25);
		uParam0->f_804 = ((uParam0->f_804 + MISC::GET_RANDOM_INT_IN_RANGE(1, 3)) % 3);
		(uParam0->f_818[iParam1 /*63*/])->f_41 = iParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_42 = iParam3;
		(uParam0->f_818[iParam1 /*63*/])->f_43 = uParam0->f_804;
		if (!uParam0->f_40)
		{
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "WinLossType", BUILTIN::TO_FLOAT((uParam0->f_818[iParam1 /*63*/])->f_41));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "IntensityType", BUILTIN::TO_FLOAT((uParam0->f_818[iParam1 /*63*/])->f_42));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "VariationType", BUILTIN::TO_FLOAT((uParam0->f_818[iParam1 /*63*/])->f_43));
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Express");
		}
	}
}

void func_706(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		fVar0 = func_881(uParam1, iParam4);
		fVar1 = func_899(uParam1, iParam4);
		bVar2 = func_1298(fVar1);
		bVar3 = func_1299(fVar1);
		bVar4 = func_887(fVar1);
		bVar5 = aggregate_func_9389(fVar0);
		if (bVar5)
		{
			if (bVar2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "beaten_angry_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar3 || bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "beaten_angry_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar2)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "beaten_frustrated_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3 || bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "beaten_frustrated_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "beaten_base", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_707(var uParam0)
{
	aggregate_func_9387(&(uParam0->f_2335), uParam0->f_151.f_2046, 0);
}

void func_708(var uParam0)
{
	if (!func_695(&(uParam0->f_151.f_416), uParam0->f_151.f_2054) || uParam0->f_151.f_2057)
	{
		uParam0->f_151.f_2054 = uParam0->f_151.f_2055;
	}
	uParam0->f_151.f_2055 = -1;
	uParam0->f_151.f_2056 = 0;
	uParam0->f_151.f_2057 = 0;
}

bool func_709(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (*uParam1 < 0 || *uParam1 >= 6)
	{
		*uParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (*uParam1 == uParam0->f_3)
			{
				*uParam1 = -1;
				return false;
			}
		}
		*uParam1 = (*uParam1 + 1 % 6);
		if (func_617(uParam0, *uParam1) && (uParam0->f_39[*uParam1 /*56*/])->f_6 == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	*uParam1 = -1;
	return false;
}

int func_710(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < (uParam0->f_376[iVar1 /*18*/])->f_17)
		{
			if (!bParam1 || func_200(uParam0, &((uParam0->f_376[iVar1 /*18*/])->f_10[iVar2])))
			{
				MISC::SET_BIT(&iVar0, &((uParam0->f_376[iVar1 /*18*/])->f_10[iVar2]));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_711(var uParam0, var uParam1, int iParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;

	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam1, &Var0, iParam2);
	iVar486 = 0;
	while (iVar486 < Var0.f_15.f_23)
	{
		func_1042(&(uParam0->f_2335), iVar486, func_1041(&Var0, iVar486), 0, 1);
		iVar486++;
	}
	iVar487 = 0;
	while (iVar487 < 6)
	{
		if (func_907(&Var0, iVar487))
		{
			func_1036(&(uParam0->f_2335), iVar487, func_979(&Var0, iVar487, 1));
			aggregate_func_9387(&(uParam0->f_2335), iVar487, 0);
		}
		iVar487++;
	}
}

void func_712(var uParam0, var uParam1, int iParam2)
{
	struct<486> Var0;
	int iVar486;

	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam1, &Var0, iParam2);
	uParam0->f_2058 = 0;
	uParam0->f_2059 = 0;
	if (Var0.f_485 > 0)
	{
		iVar486 = 0;
		while (iVar486 < (Var0.f_376[0 /*18*/])->f_17)
		{
			MISC::SET_BIT(&(uParam0->f_2059), &((Var0.f_376[0 /*18*/])->f_10[iVar486]));
			iVar486++;
		}
	}
	uParam0->f_2060 = 0;
	uParam0->f_2061 = 0;
	uParam0->f_2062 = 0;
}

float func_714(var uParam0, int iParam1)
{
	return aggregate_func_4850(&((uParam0->f_818[iParam1 /*63*/])->f_10));
}

void func_715(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	func_1212(uParam1, 9, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam2, &Var0, 1);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1308(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1310(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1313(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1308(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1314(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_716(var uParam0, var uParam1, int iParam2)
{
	struct<486> Var0;
	int iVar486;

	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam1, &Var0, iParam2);
	uParam0->f_2058 = uParam0->f_2059;
	uParam0->f_2059 = 0;
	if (Var0.f_485 > 0)
	{
		iVar486 = 0;
		while (iVar486 < (Var0.f_376[0 /*18*/])->f_17)
		{
			MISC::SET_BIT(&(uParam0->f_2059), &((Var0.f_376[0 /*18*/])->f_10[iVar486]));
			iVar486++;
		}
	}
	func_1327(uParam0);
	switch (iParam2)
	{
		case 1:
			func_1328(uParam0, aggregate_func_4133(&Var0), 1, 0f, 0f);
			break;
		case 2:
			func_1328(uParam0, aggregate_func_4133(&Var0), 2, 0f, 0f);
			break;
		case 3:
			func_1328(uParam0, aggregate_func_4133(&Var0), 3, 0.1f, 0f);
			break;
	}
}

void func_717(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	func_1212(uParam1, 10, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam2, &Var0, 2);
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1308(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1310(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1313(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1308(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1314(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
}

void func_718(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_980(&(uParam0->f_2335));
	iVar0 = 0;
	while (iVar0 < uParam1->f_15.f_23)
	{
		func_1042(&(uParam0->f_2335), iVar0, func_1041(uParam1, iVar0), 0, 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_907(uParam1, iVar1))
		{
			if (func_724(uParam1, iVar1))
			{
				func_1036(&(uParam0->f_2335), iVar1, func_1329(&(uParam0->f_2335), func_979(uParam1, iVar1, 1), func_913(uParam1, iVar1)));
				func_1052(&(uParam0->f_2335), iVar1, 1);
				aggregate_func_9387(&(uParam0->f_2335), iVar1, 1);
			}
			else
			{
				func_1036(&(uParam0->f_2335), iVar1, func_979(uParam1, iVar1, 1));
				aggregate_func_9387(&(uParam0->f_2335), iVar1, 0);
			}
		}
		iVar1++;
	}
}

void func_719(var uParam0, var uParam1, var uParam2)
{
	struct<377> Var0;
	int iVar486;
	int iVar487;
	int iVar488;
	int iVar489;
	float fVar490;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	func_1212(uParam1, 11, -1);
	Var0.f_15 = 11;
	Var0.f_39 = 6;
	Var0.f_39.f_1.f_7 = 11;
	Var0.f_39.f_1.f_31 = 11;
	Var0.f_39.f_1.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_376 = 6;
	Var0.f_376.f_1.f_2 = 6;
	Var0.f_376.f_1.f_10 = 6;
	Var0.f_376.f_1.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	func_1325(uParam2, &Var0, 3);
	iVar486 = 0;
	while (iVar486 < 6)
	{
		uParam1->f_158[iVar486] = 0f;
		iVar486++;
	}
	uParam1->f_140 = 0;
	uParam1->f_147 = uParam1->f_145;
	uParam1->f_148 = uParam1->f_146;
	uParam1->f_145 = -1;
	uParam1->f_146 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486))
		{
			if (uParam1->f_145 == -1 || func_1308(&Var0, iVar486, uParam1->f_145))
			{
				uParam1->f_145 = iVar486;
				uParam1->f_146 = 0;
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
			else if (func_1310(&Var0, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_146), iVar486);
			}
		}
		iVar486++;
	}
	uParam1->f_149 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486))
		{
			if (func_1313(uParam2, iVar486, uParam1->f_145))
			{
				MISC::SET_BIT(&(uParam1->f_149), iVar486);
			}
		}
		iVar486++;
	}
	iVar487 = -1;
	uParam1->f_150 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if ((MISC::IS_BIT_SET(uParam1->f_141, iVar486) && !MISC::IS_BIT_SET(uParam1->f_146, iVar486)) && !MISC::IS_BIT_SET(uParam1->f_149, iVar486))
		{
			if (iVar487 == -1 || func_1308(uParam2, iVar487, iVar486))
			{
				iVar487 = iVar486;
				uParam1->f_150 = 0;
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
			else if (func_1314(uParam2, iVar487, iVar486))
			{
				MISC::SET_BIT(&(uParam1->f_150), iVar486);
			}
		}
		iVar486++;
	}
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar486))
		{
			iVar488 = ((*uParam1)[iVar486 /*13*/])->f_3;
			iVar489 = (func_913(uParam2, iVar486) - aggregate_func_5974(uParam2, iVar486));
			fVar490 = (BUILTIN::TO_FLOAT(iVar489) / BUILTIN::TO_FLOAT(iVar488));
			if (fVar490 < 0f)
			{
				fVar490 = 0f;
			}
			uParam1->f_158[iVar486] = fVar490;
		}
		iVar486++;
	}
	uParam1->f_166 = 0;
	uParam1->f_167 = 0;
	uParam1->f_168 = 0;
	uParam1->f_169 = 0;
	uParam1->f_170 = 0;
	iVar486 = 0;
	while (iVar486 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar486))
		{
			if (MISC::IS_BIT_SET(uParam1->f_146, iVar486))
			{
				if (MISC::IS_BIT_SET(uParam1->f_143, iVar486))
				{
					func_1330(uParam1, iVar486);
				}
				aggregate_func_2633(uParam1, iVar486, uParam1->f_149 != 0);
				aggregate_func_2633(uParam1, iVar486, 0);
			}
			else
			{
				func_1251(uParam1, iVar486);
				aggregate_func_2633(uParam1, iVar486, MISC::IS_BIT_SET(uParam1->f_149, iVar486));
				aggregate_func_2633(uParam1, iVar486, 0);
			}
		}
		iVar486++;
	}
}

bool func_720(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_485)
	{
		iVar1 = 0;
		while (iVar1 < (uParam0->f_376[iVar0 /*18*/])->f_17)
		{
			if (&(uParam0->f_376[iVar0 /*18*/])->f_10[iVar1] == iParam1)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

bool func_721(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2020[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_722(var uParam0)
{
	if (uParam0->f_151.f_1626 == 1 || uParam0->f_151.f_1626 == 2)
	{
		return true;
	}
	return false;
}

int func_723(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < (uParam0->f_376[iVar1 /*18*/])->f_17)
		{
			if (!bParam1 || func_200(uParam0, &((uParam0->f_376[iVar1 /*18*/])->f_10[iVar2])))
			{
				MISC::SET_BIT(&iVar0, &((uParam0->f_376[iVar1 /*18*/])->f_10[iVar2]));
			}
			iVar2++;
		}
		iVar1++;
	}
	return func_364(iVar0);
}

bool func_724(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_485)
		{
			iVar0 = 0;
			while (iVar0 < (uParam0->f_376[iVar1 /*18*/])->f_17)
			{
				if (&(uParam0->f_376[iVar1 /*18*/])->f_10[iVar0] == iParam1)
				{
					return true;
				}
				iVar0++;
			}
			iVar1++;
		}
	}
	return false;
}

int func_725(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (!bParam1 || func_200(uParam0, iVar2))
		{
			if (func_720(uParam0, iVar2))
			{
				iVar3 = func_913(uParam0, iVar2);
				if (iVar0 == -1 || iVar1 < iVar3)
				{
					iVar0 = iVar2;
					iVar1 = iVar3;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_726(var uParam0)
{
	int iVar0;

	if (uParam0->f_42)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_818[iVar0 /*63*/] != 0 && (uParam0->f_818[iVar0 /*63*/])->f_55)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_727(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 18);
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iParam2;
		if (bParam3)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_20), 0);
		}
		aggregate_func_6629(uParam0, iParam1, 1);
		func_1121(uParam0, iParam1, 42);
	}
}

void func_728(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar0) && iVar0 != iParam1)
			{
				if (&uParam0->f_818[iVar0 /*63*/] == 0)
				{
					return;
				}
				else if ((uParam0->f_818[iVar0 /*63*/])->f_50)
				{
					return;
				}
				else if ((uParam0->f_818[iVar0 /*63*/])->f_8 != 1)
				{
					return;
				}
				else if ((uParam0->f_818[iVar0 /*63*/])->f_1 != 1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_464(uParam0, iParam1, 19);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar0) && iVar0 != iParam1)
			{
				func_840(uParam0, iVar0, 1);
			}
			iVar0++;
		}
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iParam2;
		if (bParam4)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_20), 0);
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			(uParam0->f_818[iParam1 /*63*/])->f_34[iVar0] = iParam3[iVar0];
			iVar0++;
		}
		aggregate_func_6629(uParam0, iParam1, 1);
		func_1121(uParam0, iParam1, 42);
	}
}

bool func_729(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1333(uParam0, iVar0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uParam0->f_818[iVar0 /*63*/])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_730(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3 /*13*/])
	{
		return;
	}
	func_1212(uParam1, 12, iParam3);
	if (uParam2->f_2 == 0)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 2);
	}
	if (uParam2->f_2 == 1)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 3);
	}
	if (uParam2->f_2 == 2)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 4);
	}
	if (uParam2->f_2 == 3)
	{
		MISC::SET_BIT(&((uParam1->f_79[0 /*4*/])->f_2), 5);
	}
}

void func_731(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = aggregate_func_6570(uParam1, iParam4);
		bVar1 = func_886(fVar0);
		bVar2 = func_1334(uParam1);
		bVar3 = aggregate_func_4304(uParam1);
		bVar4 = func_1252(uParam1);
		bVar5 = func_1336(uParam1);
		bVar6 = func_1337(uParam1);
		if (bVar2)
		{
			if (bVar4)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_stealPreFlop", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar5)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_stealFlop", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
			else if (bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_stealRiver", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_splitPot", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		if (bVar1)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_base_bigWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "scoop_base_smallWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_732(var uParam0, var uParam1, var uParam2)
{
	struct<16> Var0;
	char cVar16[16];
	char cVar18[64];
	char cVar26[64];
	char cVar34[64];
	int iVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	int iVar47;
	bool bVar48;

	if (func_723(uParam2, 0) < 1)
	{
		return;
	}
	StringCopy(&cVar34, "", 64);
	bVar45 = true;
	iVar46 = 0;
	iVar47 = 0;
	bVar48 = false;
	if (func_200(uParam2, uParam1->f_9))
	{
		iVar43 = 0;
		while (iVar43 < uParam2->f_485)
		{
			if (func_748(uParam2, iVar43, uParam1->f_9))
			{
				if (aggregate_func_5974(uParam2, iVar43) == 1)
				{
					MISC::SET_BIT(&iVar46, iVar43);
				}
				else
				{
					MISC::SET_BIT(&iVar47, iVar43);
				}
				if (func_1338(uParam2, iVar43))
				{
					bVar48 = true;
				}
			}
			iVar43++;
		}
	}
	if (uParam2->f_485 == 1 || func_1339(uParam2))
	{
		if (func_200(uParam2, uParam1->f_9) && func_748(uParam2, 0, uParam1->f_9))
		{
			StringCopy(&cVar18, func_1340(), 64);
			StringCopy(&cVar26, func_979(uParam2, uParam1->f_9, 0), 64);
			if (func_1338(uParam2, 0))
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			if (aggregate_func_5974(uParam2, 0) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
		}
		else
		{
			iVar42 = func_762(uParam2, 0, 1);
			if (func_200(uParam2, iVar42))
			{
				Var0 = { func_436(uParam1, iVar42, 0, 1) };
				StringCopy(&cVar26, func_979(uParam2, iVar42, 0), 64);
			}
			else
			{
				iVar42 = func_762(uParam2, 0, 0);
				StringCopy(&Var0, func_1006(iVar42, uParam1->f_9), 128);
				bVar45 = false;
			}
			StringCopy(&cVar16, func_1342(aggregate_func_5974(uParam2, 0)), 16);
			StringCopy(&cVar18, func_1340(), 64);
			if (func_1338(uParam2, 0))
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			if (bVar45)
			{
				if (aggregate_func_5974(uParam2, 0) == 1)
				{
					func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
				}
				else
				{
					func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
				}
			}
			else if (aggregate_func_5974(uParam2, 0) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
			}
		}
	}
	else if (func_200(uParam2, uParam1->f_9) && func_724(uParam2, uParam1->f_9))
	{
		if (iVar46 != 0 && iVar47 == 0)
		{
			iVar43 = func_1343(uParam2, uParam1->f_9);
			StringCopy(&cVar18, func_1344(iVar43, uParam2->f_485), 64);
			StringCopy(&cVar26, func_979(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			if (func_364(iVar46) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG__YOU_WON_SEVPOTS", &cVar26, &cVar34), 0);
			}
		}
		else if (iVar46 == 0 && iVar47 != 0)
		{
			iVar43 = func_1343(uParam2, uParam1->f_9);
			StringCopy(&cVar18, func_1344(iVar43, uParam2->f_485), 64);
			StringCopy(&cVar26, func_979(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			if (func_364(iVar47) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG__YOU_SPLIT_SEVPOTS", &cVar26, &cVar34), 0);
			}
		}
		else if (iVar46 != 0 && iVar47 != 0)
		{
			StringCopy(&cVar26, func_979(uParam2, uParam1->f_9, 0), 64);
			if (bVar48)
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(42, "MGPKR_MSG__YOU_WON_AND_SPLIT_SEVPOTS", &cVar26, &cVar34), 0);
		}
	}
	else
	{
		iVar44 = func_1345(uParam2);
		if (iVar44 == -1)
		{
		}
		else
		{
			iVar42 = func_762(uParam2, iVar44, 1);
			if (func_200(uParam2, iVar42))
			{
				Var0 = { func_436(uParam1, iVar42, 0, 1) };
				StringCopy(&cVar26, func_979(uParam2, iVar42, 0), 64);
			}
			else
			{
				iVar42 = func_762(uParam2, iVar44, 0);
				StringCopy(&Var0, func_1006(iVar42, uParam1->f_9), 128);
				bVar45 = false;
			}
			StringCopy(&cVar16, func_1342(aggregate_func_5974(uParam2, iVar44)), 16);
			StringCopy(&cVar18, func_1346(), 64);
			if (func_1338(uParam2, iVar44))
			{
				StringCopy(&cVar34, func_1341(), 64);
			}
			if (bVar45)
			{
				if (aggregate_func_5974(uParam2, iVar44) == 1)
				{
					func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
				}
				else
				{
					func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
				}
			}
			else if (aggregate_func_5974(uParam2, iVar44) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
			}
		}
	}
}

void func_734(var uParam0, var uParam1)
{
	if (func_617(uParam1, uParam0->f_151.f_9))
	{
		if (func_913(uParam1, uParam0->f_151.f_9) > 0)
		{
			func_1347(-1672018311);
			if (func_433(uParam1, uParam0->f_151.f_9))
			{
				aggregate_func_1962(aggregate_func_4257(-1892463704, 842107262), 1);
			}
			else
			{
				switch (aggregate_func_6509(uParam1, uParam0->f_151.f_9))
				{
					case 0:
						aggregate_func_1962(aggregate_func_4257(-1892463704, -1035035884), 1);
						break;
					case 1:
						aggregate_func_1962(aggregate_func_4257(-1892463704, 1851750194), 1);
						break;
					case 2:
						aggregate_func_1962(aggregate_func_4257(-1892463704, -677602211), 1);
						break;
					case 3:
						aggregate_func_1962(aggregate_func_4257(-1892463704, 450380649), 1);
						break;
					case 4:
						aggregate_func_1962(aggregate_func_4257(-1892463704, 1983277842), 1);
						break;
					case 5:
						aggregate_func_1962(aggregate_func_4257(-1892463704, -590603668), 1);
						break;
					case 6:
						aggregate_func_1962(aggregate_func_4257(-1892463704, 1799626492), 1);
						break;
					case 7:
						aggregate_func_1962(aggregate_func_4257(-1892463704, -665778455), 1);
						break;
					case 8:
						aggregate_func_1962(aggregate_func_4257(-1892463704, 1674444587), 1);
						break;
					case 9:
						aggregate_func_1962(aggregate_func_4257(-1892463704, -1876751264), 1);
						break;
				}
			}
		}
		else
		{
			func_1348(-1672018311);
		}
	}
}

void func_735(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	if (!uParam1[iParam3 /*13*/])
	{
		return;
	}
	func_1212(uParam1, 8, iParam3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	MISC::SET_BIT(&(uParam1->f_144), iParam3);
	MISC::SET_BIT(&(uParam1->f_143), iParam3);
	MISC::SET_BIT(&(uParam1->f_146), iParam3);
	uParam1->f_145 = iParam3;
	iVar1 = ((*uParam1)[iParam3 /*13*/])->f_3;
	iVar2 = (func_1245(uParam2) - aggregate_func_5974(uParam2, iParam3));
	fVar3 = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1));
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	uParam1->f_158[iParam3] = fVar3;
	uParam1->f_165 = 0;
	func_1330(uParam1, iParam3);
	aggregate_func_2633(uParam1, iParam3, 0);
	aggregate_func_2633(uParam1, iParam3, 0);
}

void func_736(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		fVar0 = aggregate_func_6570(uParam1, iParam4);
		fVar1 = func_881(uParam1, iParam4);
		bVar2 = aggregate_func_9389(fVar0);
		bVar3 = func_1350(fVar0);
		bVar4 = func_1351(fVar0);
		bVar5 = func_886(fVar0);
		bVar6 = aggregate_func_9389(fVar1);
		if (bVar2)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_content_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar6)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_content_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar5)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_base_bigWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_base_smallWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_737(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0->f_151.f_2046;
	iVar1 = func_1245(uParam1);
	iVar2 = (aggregate_func_5974(&(uParam0->f_2335), iVar0) + iVar1);
	func_1307(uParam0, uParam1);
	func_1049(&(uParam0->f_2335), iVar0);
	func_1050(&(uParam0->f_2335), iVar0, 0, func_327());
	func_1050(&(uParam0->f_2335), iVar0, 1, func_327());
	func_1036(&(uParam0->f_2335), iVar0, func_1353(&(uParam0->f_2335), iVar1));
	func_1052(&(uParam0->f_2335), iVar0, 1);
	aggregate_func_9387(&(uParam0->f_2335), iVar0, 1);
	func_1192(&(uParam0->f_2335), iVar0, iVar2);
}

void func_738(var uParam0, var uParam1, int iParam2)
{
	struct<16> Var0;

	if (iParam2 == uParam1->f_9)
	{
		func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG__YOU_STOLE_POT"), 0);
	}
	else
	{
		Var0 = { func_436(uParam1, iParam2, 0, 1) };
		func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG__THEY_STOLE_POT", &Var0), 0);
	}
}

bool func_739(var uParam0)
{
	return aggregate_func_2875(uParam0->f_498);
}

void func_741(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!aggregate_func_2875(uParam0->f_498))
		{
			uParam0->f_498 = aggregate_func_2045("MGPKR_UI_MUCK", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_4283(&(uParam0->f_501));
		}
	}
	else if (aggregate_func_2875(uParam0->f_498))
	{
		aggregate_func_2878(&(uParam0->f_498), 1, 1);
		aggregate_func_4313(&(uParam0->f_501));
	}
}

int func_742(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = (uParam0->f_485 - 1);
	while (iVar1 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_376[iVar1 /*18*/])->f_9)
		{
			if (&(uParam0->f_376[iVar1 /*18*/])->f_2[iVar0] == iParam1)
			{
				return iVar1;
			}
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
	}
	return -1;
}

bool func_743(var uParam0, int iParam1)
{
	return (uParam0->f_376[iParam1 /*18*/])->f_17 > 0;
}

void func_744(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;

	if (uParam1->f_485 > 1)
	{
		if (uParam1->f_485 == 1)
		{
			Var0 = { aggregate_func_4982(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT")) };
		}
		else if (iParam2 == 0)
		{
			Var0 = { aggregate_func_4982(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT")) };
		}
		else if (iParam2 == 1 && uParam1->f_485 == 2)
		{
			Var0 = { aggregate_func_4982(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT")) };
		}
		else
		{
			Var0 = { aggregate_func_4982(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1355(iParam2))) };
		}
		func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_AWARDING_POT", &Var0), 0);
	}
}

void func_745(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = ((*uParam1)[iParam4 /*13*/])->f_3;
		iVar1 = (func_1356(uParam3, iParam4, iParam5) - func_1312(uParam3, iParam4, iParam5));
		fVar2 = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0));
		if (fVar2 < 0f)
		{
			fVar2 = 0f;
		}
		fVar3 = func_881(uParam1, iParam4);
		bVar4 = aggregate_func_9389(fVar2);
		bVar5 = func_1350(fVar2);
		bVar6 = func_1351(fVar2);
		bVar7 = func_886(fVar2);
		bVar8 = aggregate_func_9389(fVar3);
		if (bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (bVar5)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_content_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		else if (bVar6)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_excited_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
			if (!bVar8)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_content_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					return;
				}
			}
		}
		if (bVar7)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_base_bigWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "celebrate_base_smallWin", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_746(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_151.f_2047;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_907(uParam1, iVar1) && func_748(uParam1, iVar0, iVar1))
		{
			func_1036(&(uParam0->f_2335), iVar1, func_1329(&(uParam0->f_2335), func_979(uParam1, iVar1, 1), func_1356(uParam1, iVar1, iVar0)));
			func_1052(&(uParam0->f_2335), iVar1, 1);
			aggregate_func_9387(&(uParam0->f_2335), iVar1, 1);
		}
		iVar1++;
	}
}

void func_747(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= 6)
	{
		return;
	}
	func_1212(uParam1, 7, -1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam1->f_158[iVar0] = 0f;
		iVar0++;
	}
	uParam1->f_140 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar0))
		{
			iVar1 = ((*uParam1)[iVar0 /*13*/])->f_3;
			iVar2 = (func_1356(uParam2, iVar0, iParam3) - func_1312(uParam2, iVar0, iParam3));
			fVar3 = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1));
			if (fVar3 < 0f)
			{
				fVar3 = 0f;
			}
			uParam1->f_158[iVar0] = fVar3;
		}
		iVar0++;
	}
	uParam1->f_165 = aggregate_func_5974(uParam2, iParam3) > 1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam1->f_144, iVar0))
		{
			if (MISC::IS_BIT_SET(uParam1->f_146, iVar0))
			{
				if (MISC::IS_BIT_SET(uParam1->f_143, iVar0))
				{
					func_1330(uParam1, iVar0);
				}
				aggregate_func_2633(uParam1, iVar0, uParam1->f_149 != 0);
				aggregate_func_2633(uParam1, iVar0, 0);
			}
			else
			{
				func_1251(uParam1, iVar0);
				aggregate_func_2633(uParam1, iVar0, MISC::IS_BIT_SET(uParam1->f_149, iVar0));
				aggregate_func_2633(uParam1, iVar0, 0);
			}
		}
		iVar0++;
	}
}

bool func_748(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_376[iParam1 /*18*/])->f_17)
		{
			if (&(uParam0->f_376[iParam1 /*18*/])->f_10[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_749(var uParam0, var uParam1, var uParam2, int iParam3)
{
	struct<16> Var0;
	char cVar16[16];
	char cVar18[64];
	char cVar26[64];
	char cVar34[64];
	int iVar42;
	bool bVar43;

	if (func_723(uParam2, 0) < 1)
	{
		return;
	}
	StringCopy(&cVar34, "", 64);
	bVar43 = true;
	if (func_200(uParam2, uParam1->f_9) && func_748(uParam2, iParam3, uParam1->f_9))
	{
		StringCopy(&cVar18, func_1344(iParam3, uParam2->f_485), 64);
		StringCopy(&cVar26, func_979(uParam2, uParam1->f_9, 0), 64);
		if (func_1338(uParam2, iParam3))
		{
			StringCopy(&cVar34, func_1341(), 64);
		}
		if (aggregate_func_5974(uParam2, iParam3) == 1)
		{
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_WON_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
		}
		else
		{
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__YOU_SPLIT_ONEPOT", &cVar18, &cVar26, &cVar34), 0);
		}
	}
	else
	{
		iVar42 = func_762(uParam2, iParam3, 1);
		if (func_200(uParam2, iVar42))
		{
			Var0 = { func_436(uParam1, iVar42, 0, 1) };
			StringCopy(&cVar26, func_979(uParam2, iVar42, 0), 64);
		}
		else
		{
			iVar42 = func_762(uParam2, iParam3, 0);
			StringCopy(&Var0, func_1006(iVar42, uParam1->f_9), 128);
			bVar43 = false;
		}
		StringCopy(&cVar16, func_1342(aggregate_func_5974(uParam2, iParam3)), 16);
		StringCopy(&cVar18, func_1344(iParam3, uParam2->f_485), 64);
		if (func_1338(uParam2, iParam3))
		{
			StringCopy(&cVar34, func_1341(), 64);
		}
		if (bVar43)
		{
			if (aggregate_func_5974(uParam2, iParam3) == 1)
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_WON_ONEPOT", &Var0, &cVar18, &cVar26, &cVar34), 0);
			}
			else
			{
				func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(682, "MGPKR_MSG__THEY_SPLIT_ONEPOT", &cVar16, &cVar18, &cVar26, &cVar34), 0);
			}
		}
		else if (aggregate_func_5974(uParam2, iParam3) == 1)
		{
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_WON_ONEPOT_NOHAND", &Var0, &cVar18, &cVar34), 0);
		}
		else
		{
			func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(170, "MGPKR_MSG__THEY_SPLIT_ONEPOT_NOHAND", &cVar16, &cVar18, &cVar34), 0);
		}
	}
}

int func_750(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1 /*56*/] != -1 && (uParam0->f_39[iVar1 /*56*/])->f_6 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_751(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_907(uParam1, iVar0) && func_748(uParam1, uParam0->f_151.f_2047, iVar0))
		{
			if (func_1357(&(uParam0->f_2335), iVar0, 0))
			{
				func_1036(&(uParam0->f_2335), iVar0, func_979(uParam1, iVar0, 1));
			}
			func_1051(&(uParam0->f_2335), iVar0, 1);
			aggregate_func_9387(&(uParam0->f_2335), iVar0, 0);
		}
		iVar0++;
	}
}

bool func_752(var uParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_403(uParam0, 2))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_REVEAL(&Var0))
		{
			func_404(uParam0, 2, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

bool func_753(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1) && (uParam0->f_39[iParam1 /*56*/])->f_6 == 1)
	{
		return true;
	}
	return false;
}

int func_754(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = aggregate_func_6570(&(uParam0->f_416), iParam2);
	iVar1 = aggregate_func_5974(&(uParam0->f_416), iParam1);
	fVar2 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT((iVar1 + iVar0)));
	if (fVar2 > 0.4f)
	{
		return 1;
	}
	return 0;
}

void func_755(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 4, -1))
	{
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "muck", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			return;
		}
	}
}

void func_756(var uParam0)
{
	func_1036(&(uParam0->f_2335), uParam0->f_151.f_2046, func_1359());
	aggregate_func_9387(&(uParam0->f_2335), uParam0->f_151.f_2046, 1);
	func_1049(&(uParam0->f_2335), uParam0->f_151.f_2046);
	func_1050(&(uParam0->f_2335), uParam0->f_151.f_2046, 0, func_327());
	func_1050(&(uParam0->f_2335), uParam0->f_151.f_2046, 1, func_327());
}

void func_757(var uParam0)
{
	func_1040(&(uParam0->f_2335), uParam0->f_151.f_2046, 1);
}

int func_759(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < (uParam0->f_376[iParam1 /*18*/])->f_17)
	{
		if (!bParam2 || func_200(uParam0, &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar1])))
		{
			MISC::SET_BIT(&iVar0, &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar1]));
		}
		iVar1++;
	}
	return iVar0;
}

int func_760(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!bParam3 || func_200(uParam0, iVar1))
		{
			if (func_1360(uParam0, iVar1, iParam1) && !MISC::IS_BIT_SET(iParam2, iVar1))
			{
				return iVar1;
			}
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

int func_761(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < (uParam0->f_376[iParam1 /*18*/])->f_17)
	{
		if (!bParam2 || func_200(uParam0, &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar1])))
		{
			MISC::SET_BIT(&iVar0, &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar1]));
		}
		iVar1++;
	}
	return func_364(iVar0);
}

int func_762(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_376[iParam1 /*18*/])->f_17)
		{
			if (!bParam2 || func_200(uParam0, &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar0])))
			{
				return &((uParam0->f_376[iParam1 /*18*/])->f_10[iVar0]);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_763(var uParam0, var uParam1, int iParam2)
{
	switch (&uParam0->f_151.f_2010[iParam2])
	{
		case 1:
			if (((!func_200(uParam1, iParam2) || !func_207(&(uParam0->f_2839), iParam2)) || !func_771(&(uParam0->f_2839), iParam2)) || !(aggregate_func_5974(&(uParam0->f_2839), iParam2) == 3 || aggregate_func_5974(&(uParam0->f_2839), iParam2) == 2))
			{
				return 1;
			}
			else if (!func_1361(&(uParam0->f_151), iParam2))
			{
				if (func_602(&(uParam0->f_2839), iParam2, 1))
				{
					if (aggregate_func_4628(&(uParam0->f_151.f_2017), 0.5f) || uParam0->f_2839.f_40)
					{
						func_676(&(uParam0->f_2839), iParam2, uParam0->f_151.f_1997, 2);
						return 1;
					}
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_764(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_151.f_2010[iVar1] != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar1);
			Call_Loc(iParam2);
			if (StackVal)
			{
				func_1362(&(uParam0->f_151), iVar1);
				aggregate_func_4283(&(uParam0->f_151.f_2017));
			}
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
}

int func_765(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		if ((uParam0->f_376[iVar1 /*18*/])->f_17 > 0 && (uParam0->f_376[iVar1 /*18*/])->f_1 > 0)
		{
			iVar0 = (iVar0 + (uParam0->f_376[iVar1 /*18*/])->f_1);
		}
		iVar1++;
	}
	return iVar0;
}

void func_766(var uParam0)
{
	int iVar0;

	iVar0 = func_765(&(uParam0->f_151.f_416));
	func_619(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(2, "MGPKR_RAKE", func_953(uParam0, iVar0)), 0);
}

void func_767(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	func_1212(&(uParam0->f_1670), 13, -1);
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_617(uParam1, iVar12))
		{
			iVar0 = aggregate_func_5974(uParam1, iVar12);
			iVar1 = func_913(uParam1, iVar12);
			if (iVar1 > iVar0)
			{
				iVar2 = (iVar1 - iVar0);
				iVar3 = 0;
			}
			else
			{
				iVar3 = (iVar0 - iVar1);
				iVar2 = 0;
			}
			uParam0->f_1670.f_178[iVar12] = (BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT((uParam0->f_1670[iVar12 /*13*/])->f_3));
			uParam0->f_1670.f_185[iVar12] = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT((uParam0->f_1670[iVar12 /*13*/])->f_3));
			MISC::SET_BIT(&iVar4, iVar12);
			if (iVar2 > 0)
			{
				MISC::SET_BIT(&iVar5, iVar12);
			}
			if (func_1363(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar6, iVar12);
			}
			if (func_1364(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar7, iVar12);
			}
			if (func_1365(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar8, iVar12);
			}
			if (func_1366(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar9, iVar12);
			}
			if (func_1367(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar10, iVar12);
			}
			if (func_1368(&(uParam0->f_1670), iVar12))
			{
				MISC::SET_BIT(&iVar11, iVar12);
			}
		}
		else
		{
			uParam0->f_1670.f_178[iVar12] = 0f;
			uParam0->f_1670.f_185[iVar12] = 0f;
		}
		uParam0->f_1670.f_171[iVar12] = (uParam0->f_1670[iVar12 /*13*/])->f_7;
		iVar12++;
	}
	uParam0->f_1670.f_192 = iVar4;
	uParam0->f_1670.f_193 = iVar5;
	uParam0->f_1670.f_194 = iVar6;
	uParam0->f_1670.f_195 = iVar7;
	uParam0->f_1670.f_196 = iVar8;
	uParam0->f_1670.f_197 = iVar9;
	uParam0->f_1670.f_198 = iVar10;
	uParam0->f_1670.f_199 = iVar11;
	func_1369(&(uParam0->f_1670));
	iVar13 = -1;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (&uParam0->f_1670[iVar12 /*13*/])
		{
			if (func_200(uParam1, iVar12))
			{
				iVar15 = aggregate_func_5974(uParam1, iVar12);
				(uParam0->f_1670[iVar12 /*13*/])->f_3 = iVar15;
				if (iVar13 == -1 || iVar14 < iVar15)
				{
					iVar13 = iVar12;
					iVar14 = iVar15;
				}
			}
		}
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (&uParam0->f_1670[iVar12 /*13*/])
		{
			iVar15 = (uParam0->f_1670[iVar12 /*13*/])->f_3;
			fVar16 = aggregate_func_9411((BUILTIN::TO_FLOAT(iVar15) / BUILTIN::TO_FLOAT(iVar14)), 0, 1065353216 /* Float: 1f */);
			fVar17 = 0f;
			fVar18 = ((1f - fVar16) + ((fVar17 * 0.5f) * fVar16));
			(uParam0->f_1670[iVar12 /*13*/])->f_5 = fVar16;
			(uParam0->f_1670[iVar12 /*13*/])->f_6 = fVar17;
			(uParam0->f_1670[iVar12 /*13*/])->f_7 = fVar18;
		}
		iVar12++;
	}
	iVar19 = 1;
	while (iVar19 > 0)
	{
		uParam0->f_1670.f_134[iVar19] = &uParam0->f_1670.f_134[(iVar19 - 1)];
		iVar19 = (iVar19 - 1);
	}
	uParam0->f_1670.f_134[iVar19] = (uParam0->f_1670.f_141 || uParam0->f_1670.f_142);
	uParam0->f_1670.f_120 = 0;
	uParam0->f_1670.f_125 = iVar14;
	uParam0->f_1670.f_131 = -1;
	uParam0->f_1670.f_132 = -1;
	uParam0->f_1670.f_133 = 0;
	uParam0->f_1670.f_137 = 0f;
	uParam0->f_1670.f_138 = 0f;
	uParam0->f_1670.f_139 = 0f;
	uParam0->f_1670.f_140 = 0;
	uParam0->f_1670.f_141 = 0;
	uParam0->f_1670.f_142 = 0;
	uParam0->f_1670.f_143 = 0;
	uParam0->f_1670.f_144 = 0;
	uParam0->f_1670.f_145 = -1;
	uParam0->f_1670.f_146 = 0;
	uParam0->f_1670.f_147 = -1;
	uParam0->f_1670.f_148 = 0;
	uParam0->f_1670.f_149 = 0;
	uParam0->f_1670.f_150 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_1670.f_151[iVar12] = 0f;
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		uParam0->f_1670.f_158[iVar12] = 0f;
		iVar12++;
	}
	uParam0->f_1670.f_165 = 0;
	uParam0->f_1670.f_166 = 0;
	uParam0->f_1670.f_167 = 0;
	uParam0->f_1670.f_168 = 0;
	uParam0->f_1670.f_169 = 0;
	uParam0->f_1670.f_170 = 0;
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (func_907(uParam1, iVar12))
		{
			aggregate_func_2633(&(uParam0->f_1670), iVar12, 0);
		}
		iVar12++;
	}
}

void func_768(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;

	if (bParam1)
	{
		aggregate_func_4284(&(uParam0->f_151.f_2017), fParam2);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_151.f_2010[iVar0] != 0)
		{
			uParam0->f_151.f_2010[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_769(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_617(&(uParam0->f_416), iVar2))
		{
			if (func_1361(uParam0, iVar2))
			{
			}
			else
			{
				iVar0 = func_1370(uParam1, iVar2);
				iVar1 = aggregate_func_5974(&(uParam0->f_416), iVar2);
				if (iVar0 != iVar1)
				{
					func_1023(uParam1, iVar2, iVar1, 0, 0, 1);
				}
			}
		}
		iVar2++;
	}
}

void func_770()
{
	if (Global_1902701->f_2 == 0)
	{
	}
	Global_1902701->f_2 = 1;
}

bool func_771(var uParam0, int iParam1)
{
	return (uParam0->f_617[iParam1 /*9*/])->f_8 != 7;
}

bool func_774(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2010[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_775(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (*iParam1 < 0 || *iParam1 >= 6)
	{
		*iParam1 = -1;
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam2 == 0)
		{
			if (*iParam1 == uParam0->f_3)
			{
				*iParam1 = -1;
				return false;
			}
		}
		*iParam1 = (*iParam1 + 1 % 6);
		if (func_200(uParam0, *iParam1) && aggregate_func_5974(uParam0, *iParam1) > 0)
		{
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

void func_776(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
	}
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if (bParam2 && (iParam3 < 0 || iParam3 >= 6))
	{
	}
	else if (bParam2 && iParam1 == iParam3)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 20);
		iVar0 = (iParam3 - iParam1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
		iVar1 = aggregate_func_5974(uParam0, iParam1);
		bVar2 = iVar1 == 5;
		if (bParam2)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_19), 0);
		}
		if (bVar2)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_19), 1);
		}
		(uParam0->f_818[iParam1 /*63*/])->f_20 = iVar0;
		if (bParam2)
		{
			if (!uParam0->f_40)
			{
				if (!func_625(uParam0))
				{
				}
				else if (aggregate_func_4267(uParam0) != iParam1)
				{
				}
				else if (aggregate_func_4275(uParam0))
				{
				}
			}
		}
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "BoardReturnReveal");
			func_1121(uParam0, iParam1, 49);
		}
		if (bParam2)
		{
			func_1198(uParam0, iParam3, 1);
		}
	}
}

void func_777(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar6;
	float fVar7;

	Var0 = { *(uParam0->f_151.f_2099[iParam3 /*6*/]) };
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(Var0, Var0.f_1);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Var0.f_5)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	func_1199(&(uParam0->f_151), iParam1, iParam2, iVar6, fVar7);
}

bool func_779(var uParam0, int iParam1)
{
	return func_1371(uParam0, iParam1, 0);
}

bool func_780(var uParam0, int iParam1)
{
	if (aggregate_func_9348(uParam0->f_38, -1038316793))
	{
		*iParam1 = 8;
		return true;
	}
	if (func_1372(uParam0, &(uParam0->f_151)))
	{
		if (func_139(&(uParam0->f_151), 2) && !func_1373(uParam0, &(uParam0->f_151)))
		{
			*iParam1 = 9;
			return true;
		}
		if (aggregate_func_9348(uParam0->f_38, 1485265289))
		{
			*iParam1 = 8;
			return true;
		}
		if (func_139(&(uParam0->f_151), 2) && func_483(uParam0->f_151.f_1))
		{
			*iParam1 = 8;
			return true;
		}
		if (func_139(&(uParam0->f_151), 1) && aggregate_func_9348(uParam0->f_38, 430260396))
		{
			*iParam1 = 8;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_781(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2010[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_784(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iVar0])))
		{
			OBJECT::DELETE_OBJECT(uParam0->f_672.f_11[iVar0]);
		}
		uParam0->f_672.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_785(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_617[iVar0 /*9*/])->f_5[iVar1])))
			{
				OBJECT::DELETE_OBJECT((uParam0->f_617[iVar0 /*9*/])->f_5[iVar1]);
			}
			(uParam0->f_617[iVar0 /*9*/])->f_5[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_787(var uParam0, int iParam1)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
		return true;
	}
	return false;
}

int func_788(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_1552 != 0)
	{
		return 0;
	}
	uParam1->f_1552 = iParam2;
	uParam1->f_1552.f_1 = 0;
	if (bParam3)
	{
		func_383(uParam0, uParam1);
	}
	return 1;
}

bool func_789(var uParam0, int iParam1, bool bParam2)
{
	return func_1202(uParam0, iParam1, 2, bParam2);
}

void func_791(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if (iParam2 <= 0)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 32);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		(uParam0->f_818[iParam1 /*63*/])->f_20 = iParam2;
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "BuyIn");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "BuyInType", BUILTIN::TO_FLOAT(iVar0));
		}
		func_1121(uParam0, iParam1, 36);
	}
}

int func_792(var uParam0, int iParam1, bool bParam2)
{
	return func_1217(uParam0, iParam1, 2, bParam2);
}

void func_793(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	aggregate_func_2985(1);
	aggregate_func_7896(sParam1, 0, 0, 1);
	uParam0->f_170 = iParam2;
}

void func_795(var uParam0, int iParam1)
{
	uParam0->f_1557[iParam1 /*8*/] = 0;
	(uParam0->f_1557[iParam1 /*8*/])->f_1 = 0;
}

void func_796(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (&uParam0->f_240[iParam1 /*28*/] != 0)
	{
		StringCopy(&((uParam0->f_240[iParam1 /*28*/])->f_1), sParam2, 128);
		(uParam0->f_240[iParam1 /*28*/])->f_17 = iParam3;
		return;
	}
}

int func_797(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return 0;
	}
	return &(uParam0->f_240[iParam1 /*28*/]);
}

bool func_798(var uParam0, int iParam1, bool bParam2)
{
	return func_908(uParam0, iParam1, 2, bParam2);
}

int func_799(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return 255;
	}
	if (&uParam0->f_240[iParam1 /*28*/] != 1)
	{
		return 255;
	}
	return (uParam0->f_240[iParam1 /*28*/])->f_18;
}

void func_800(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	if (&uParam0->f_173[iParam1] != 0)
	{
		func_438(uParam0, iParam1);
	}
	if (iParam2 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		aggregate_func_5019(uParam0, iParam1, 4);
	}
	else
	{
		aggregate_func_5019(uParam0, iParam1, 1);
		uParam0->f_180[iParam1] = iParam2;
		uParam0->f_187[iParam1] = MISC::GET_GAME_TIMER() + 10000;
		Var0 = 2;
		Var0.f_1 = 2;
		Var0.f_3 = 0;
		SCRIPTS::_0xDE544B7EC0C187CC(&(Var0.f_2));
		SCRIPTS::_0x31010318BA9897AC(&(Var0.f_2), iParam2);
		aggregate_func_457(&Var0);
	}
}

bool func_801(var uParam0, int iParam1)
{
	if (&uParam0->f_240[iParam1 /*28*/] != 0)
	{
		return (uParam0->f_240[iParam1 /*28*/])->f_17;
	}
	return false;
}

bool func_802(var uParam0, int iParam1, var uParam2)
{
	if (&uParam0->f_240[iParam1 /*28*/] != 1)
	{
		return false;
	}
	if (!(uParam0->f_240[iParam1 /*28*/])->f_26)
	{
		return false;
	}
	*uParam2 = { (uParam0->f_240[iParam1 /*28*/])->f_19 };
	return true;
}

bool func_803(var uParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;

	if (uParam0->f_762 > 0)
	{
		iVar0 = -1;
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < uParam0->f_762)
		{
			fVar3 = BUILTIN::VDIST2(*(uParam0->f_701[iVar2 /*3*/]), vParam1);
			if (iVar0 == -1 || fVar1 > fVar3)
			{
				if (!bParam6 || ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), *(uParam0->f_701[iVar2 /*3*/]), true))
				{
					iVar0 = iVar2;
					fVar1 = fVar3;
				}
			}
			iVar2++;
		}
		if (iVar0 != -1)
		{
			*iParam4 = { *(uParam0->f_701[iVar0 /*3*/]) };
			*fParam5 = aggregate_func_3570(*iParam4, *uParam0);
			return true;
		}
	}
	else
	{
		*iParam4 = { *uParam0 + *(uParam0->f_1198[4 /*3*/]) * Vector(1.78f, 1.78f, 1.78f) };
		*fParam5 = aggregate_func_3570(*iParam4, *uParam0);
		iParam4->f_2 = uParam0->f_2;
	}
	return false;
}

struct<16> func_804(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char cVar0[128];

	if (!&uParam0->f_409[iParam1])
	{
		StringCopy(&cVar0, "** Null **", 128);
		return cVar0;
	}
	if (&uParam0->f_240[iParam1 /*28*/] == 0)
	{
		StringCopy(&cVar0, "** Null **", 128);
		return cVar0;
	}
	if (bParam2 && iParam1 == uParam0->f_9)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "MGPKR_YOU"), 128);
		return cVar0;
	}
	if (iParam3 && (uParam0->f_240[iParam1 /*28*/])->f_17)
	{
		StringCopy(&cVar0, aggregate_func_1524(&((uParam0->f_240[iParam1 /*28*/])->f_1), joaat("COLOR_PURE_WHITE")), 128);
		return cVar0;
	}
	return (uParam0->f_240[iParam1 /*28*/])->f_1;
}

void func_805(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4133(&(uParam0->f_151.f_416));
	MISC::CLEAR_BIT(&iVar0, iParam1);
	iVar1 = func_891(uParam0, iVar0, "arrive_greet", iParam1, 100);
	if (iVar1 != -1)
	{
		func_1376(&(uParam0->f_151), 1, iVar1, iParam1);
	}
}

bool func_806(var uParam0, int iParam1, bool bParam2)
{
	if (&uParam0->f_173[iParam1] == 3)
	{
		return true;
	}
	if (bParam2)
	{
		if (&uParam0->f_173[iParam1] == 4)
		{
			return true;
		}
		if (&uParam0->f_173[iParam1] == 1 || &uParam0->f_173[iParam1] == 2)
		{
			return MISC::GET_GAME_TIMER() >= &uParam0->f_187[iParam1];
		}
	}
	return false;
}

int func_807(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (uParam0->f_1388 != -1857735811)
	{
		return 0;
	}
	if (uParam0->f_1388.f_1 != 1995414514)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1388.f_3, iParam1))
	{
		return 0;
	}
	if (iVar0 != -1857735811)
	{
		return 0;
	}
	*(uParam0->f_416.f_39[iParam1 /*56*/]) = { *(uParam0->f_902.f_39[iParam1 /*56*/]) };
	if (func_200(&(uParam0->f_416), iParam1))
	{
		func_1007(uParam0, iParam1);
	}
	else
	{
		func_1008(uParam0, iParam1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1388.f_3), iParam1);
	if (uParam0->f_1388.f_3 == 0)
	{
		func_180(uParam0, 1, 0, 0, 0);
	}
	return 1;
}

void func_808(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (&uParam0->f_1670[iParam1 /*13*/])
	{
	}
	else
	{
		iVar0 = aggregate_func_5974(&(uParam0->f_416), iParam1);
		uParam0->f_1670[iParam1 /*13*/] = 1;
		(uParam0->f_1670[iParam1 /*13*/])->f_2 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_3 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_1 = iVar0;
		(uParam0->f_1670[iParam1 /*13*/])->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(8, 13);
		fVar1 = 1f;
		fVar2 = 0f;
		if (uParam0->f_1670.f_126 > 0)
		{
			fVar1 = aggregate_func_9411((BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(uParam0->f_1670.f_125)), 0, 1065353216 /* Float: 1f */);
		}
		(uParam0->f_1670[iParam1 /*13*/])->f_5 = fVar1;
		(uParam0->f_1670[iParam1 /*13*/])->f_6 = fVar2;
		(uParam0->f_1670[iParam1 /*13*/])->f_7 = ((1f - fVar1) + ((fVar2 * 0.5f) * fVar1));
	}
}

void func_809(var uParam0, int iParam1)
{
	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	uParam0->f_1670.f_129 = (uParam0->f_1670.f_129 - iParam1);
}

void func_810(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;

	if (!func_981(&(uParam0->f_2335), iParam2))
	{
		func_1377(&(uParam0->f_2335), iParam2);
		func_1192(&(uParam0->f_2335), iParam2, aggregate_func_5974(uParam1, iParam2));
		if (func_1205(&(uParam0->f_151.f_416), iParam2))
		{
			bVar0 = uParam0->f_151.f_2051;
			if (func_618(uParam0, iParam2) == 0)
			{
				func_1036(&(uParam0->f_2335), iParam2, func_1193());
				func_1040(&(uParam0->f_2335), iParam2, !bVar0);
			}
			else
			{
				func_1036(&(uParam0->f_2335), iParam2, func_1194());
				func_1040(&(uParam0->f_2335), iParam2, !bVar0);
			}
		}
		func_1034(&(uParam0->f_2335));
	}
}

void func_811(var uParam0, int iParam1)
{
	struct<16> Var0;

	Var0 = { func_436(&(uParam0->f_151), iParam1, 1, 1) };
	aggregate_func_3002(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_PLYR_JOINED", &Var0), -2, 0, 0, 0, 1);
}

int func_812(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (uParam0->f_1388 != -1857735811)
	{
		return 0;
	}
	if (uParam0->f_1388.f_1 != 1592704673)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1388.f_3, iParam1))
	{
		return 0;
	}
	if (iVar0 != -1857735811)
	{
		return 0;
	}
	*(uParam0->f_416.f_39[iParam1 /*56*/]) = { *(uParam0->f_902.f_39[iParam1 /*56*/]) };
	MISC::CLEAR_BIT(&(uParam0->f_1388.f_3), iParam1);
	if (uParam0->f_1388.f_3 == 0)
	{
		func_180(uParam0, 1, 0, 0, 0);
	}
	return 1;
}

void func_813(var uParam0)
{
	uParam0->f_1450 = 0;
	uParam0->f_1451 = 0;
	uParam0->f_1452 = 0;
}

void func_814(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = uParam0->f_151.f_2051;
	func_1047(&(uParam0->f_2335), iParam1, 0);
	func_1192(&(uParam0->f_2335), iParam1, iParam2);
	func_1036(&(uParam0->f_2335), iParam1, func_1194());
	func_1040(&(uParam0->f_2335), iParam1, !bVar0);
	if (aggregate_func_4249(&(uParam0->f_2335)) == 1)
	{
		aggregate_func_4586(&(uParam0->f_2335), 0);
		func_793(&(uParam0->f_2335), MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_JOIN_MIDGAME_CHIPS"), 2);
		aggregate_func_4586(&(uParam0->f_2335), 1);
	}
}

void func_815(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;

	Var0 = { func_436(&(uParam0->f_151), iParam1, 1, 1) };
	if (iParam1 == uParam0->f_151.f_9)
	{
		aggregate_func_3002(MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PLYR_BOUGHTIN_YOU", func_953(uParam0, iParam2)), -2, 0, 0, 0, 1);
	}
	else
	{
		aggregate_func_3002(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_PLYR_BOUGHTIN", &Var0, func_953(uParam0, iParam2)), -2, 0, 0, 0, 1);
	}
}

int func_816(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (iParam1 - 1);
	if (iVar0 < 0)
	{
		iVar0 += 6;
	}
	while (&uParam0->f_39[iVar0 /*56*/] == -1)
	{
		if (iVar0 == iParam1)
		{
			return -1;
		}
		iVar0 = (iVar0 - 1);
		if (iVar0 < 0)
		{
			iVar0 += 6;
		}
	}
	return iVar0;
}

bool func_817(var uParam0)
{
	return (uParam0->f_2063 != -1 && uParam0->f_2064 != -1);
}

void func_818(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_817(uParam0))
	{
	}
	else
	{
		uParam0->f_2063 = iParam1;
		uParam0->f_2064 = iParam2;
		uParam0->f_2065 = iParam3;
	}
}

int func_819(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];

	iVar0 = (iParam2 - iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	else if (iVar0 < 0)
	{
		iVar0 += 6;
	}
	StringCopy(&cVar1, "PBL_PASS_DECK_", 64);
	StringIntConCat(&cVar1, iVar0, 64);
	uParam0->f_816 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@DEALER_EXIT_CAMS", 0, &cVar1, false, true);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_816))
	{
		return 0;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_816);
	return 1;
}

void func_820(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		iVar0 = aggregate_func_8636(uParam1, iParam4);
		iVar1 = aggregate_func_8636(uParam1, iParam4);
		fVar2 = aggregate_func_8636(uParam1, iParam4);
		bVar3 = func_1382(fVar2);
		if (iParam5 > iVar0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "leave_happy", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				func_1376(uParam0, 2, iParam4, -1);
				return;
			}
		}
		if (iParam5 == 0)
		{
			if (iVar1 <= 3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "leave_bust_early", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					func_1376(uParam0, 2, iParam4, -1);
					return;
				}
			}
			if (bVar3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "leave_bust_highStanding", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					func_1376(uParam0, 2, iParam4, -1);
					return;
				}
			}
		}
		if (iParam5 > 0)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "leave_base_neutral", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				func_1376(uParam0, 2, iParam4, -1);
				return;
			}
		}
		else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "leave_base_bust", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
		{
			func_1376(uParam0, 2, iParam4, -1);
			return;
		}
	}
}

void func_821(var uParam0, int iParam1)
{
	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	uParam0->f_1670.f_129 = (uParam0->f_1670.f_129 + iParam1);
}

void func_822(var uParam0, int iParam1)
{
	struct<16> Var0;

	Var0 = { func_436(&(uParam0->f_151), iParam1, 1, 1) };
	aggregate_func_3002(MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_PLYR_LEFT", &Var0), -2, 0, 0, 0, 1);
}

void func_823(var uParam0, int iParam1)
{
	if (func_981(&(uParam0->f_2335), iParam1))
	{
		func_1036(&(uParam0->f_2335), iParam1, func_1383());
		func_1040(&(uParam0->f_2335), iParam1, 1);
		aggregate_func_9387(&(uParam0->f_2335), iParam1, 0);
		aggregate_func_9387(&(uParam0->f_2335), iParam1, 0);
		func_1233(&(uParam0->f_2335), iParam1, -1f);
	}
}

void func_824(var uParam0, int iParam1)
{
	if (!uParam0->f_1670.f_118)
	{
		return;
	}
	if (&uParam0->f_1670[iParam1 /*13*/])
	{
		uParam0->f_1670[iParam1 /*13*/] = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_2 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_3 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_1 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_4 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_5 = 0f;
		(uParam0->f_1670[iParam1 /*13*/])->f_6 = 0f;
		(uParam0->f_1670[iParam1 /*13*/])->f_7 = 0f;
		(uParam0->f_1670[iParam1 /*13*/])->f_8 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_9 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_10 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_11 = 0;
		(uParam0->f_1670[iParam1 /*13*/])->f_12 = 0;
	}
}

bool func_825(var uParam0, int iParam1)
{
	return (uParam0->f_2063 == iParam1 && uParam0->f_2064 != -1);
}

void func_826(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 33);
		iVar0 = func_1384(uParam0, iParam2, iParam3);
		(uParam0->f_818[iParam1 /*63*/])->f_19 = iVar0;
		(uParam0->f_818[iParam1 /*63*/])->f_43 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		if ((uParam0->f_818[iParam1 /*63*/])->f_1 == 2)
		{
			if (!uParam0->f_40)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Fold");
			}
			func_1121(uParam0, iParam1, 61);
		}
		else
		{
			func_1121(uParam0, iParam1, 62);
		}
		func_468(uParam0, iParam1, 0);
		func_469(uParam0, iParam1, 0);
	}
}

void func_828(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_816))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_816, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_816);
	}
}

void func_829(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	func_627(&(uParam0->f_2839), iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_971(&(uParam0->f_2839), iVar0))
		{
			func_1024(&(uParam0->f_2839), iVar0, iParam1, 1, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_771(&(uParam0->f_2839), iVar1))
		{
			if (aggregate_func_5974(&(uParam0->f_2839), iVar1) == 5 || aggregate_func_5974(&(uParam0->f_2839), iVar1) == 4)
			{
				func_1025(&(uParam0->f_2839), iVar1, 5, iParam1, 1);
			}
		}
		iVar1++;
	}
}

void func_830(var uParam0, int iParam1, int iParam2)
{
	if (func_981(&(uParam0->f_2335), iParam1))
	{
		aggregate_func_9387(&(uParam0->f_2335), iParam1, 0);
	}
	if (func_981(&(uParam0->f_2335), iParam2))
	{
		aggregate_func_9387(&(uParam0->f_2335), iParam2, 1);
	}
}

void func_831(var uParam0, int iParam1)
{
	if (!func_817(uParam0))
	{
	}
	else if (uParam0->f_2063 != iParam1)
	{
	}
	else
	{
		uParam0->f_2063 = -1;
		uParam0->f_2064 = -1;
		uParam0->f_2065 = 0;
	}
}

void func_832(var uParam0, int iParam1)
{
	if (func_981(&(uParam0->f_2335), iParam1))
	{
		func_1075(&(uParam0->f_2335), iParam1);
		func_1034(&(uParam0->f_2335));
	}
	if (func_1385(&(uParam0->f_2335), iParam1))
	{
		func_438(&(uParam0->f_2335), iParam1);
	}
}

void func_833(var uParam0, var uParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;

	Var0 = { aggregate_func_4257(-2115175355, -1672018311) };
	STATS::_0x0FEE2561120F3333(&Var0);
	if (func_200(uParam1, uParam0->f_151.f_9))
	{
		iVar2 = aggregate_func_5974(uParam1, uParam0->f_151.f_9);
		iVar3 = (iVar2 - uParam0->f_151.f_1454);
		bVar4 = (iVar3 * uParam0->f_151.f_51);
		if (bVar4 > 0)
		{
			Var5 = { aggregate_func_4257(-1901704681, -1672018311) };
			aggregate_func_1962(Var5, bVar4);
			Var7 = { aggregate_func_4354(1943033977) };
			STATS::_0x6A0184E904CDF25E(&Var7, bVar4);
		}
		else
		{
			Var9 = { aggregate_func_4354(-550180269) };
			STATS::_0x6A0184E904CDF25E(&Var9, -bVar4);
		}
	}
}

void func_834(var uParam0, var uParam1)
{
	uParam0->f_166 = 1;
	func_459(uParam0, uParam1);
}

void func_837(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	bool bVar8;
	int iVar9;

	StringCopy(&cVar0, "", 64);
	bVar8 = aggregate_func_2083();
	iVar9 = func_1384(uParam0, iParam2, iParam3);
	if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
	{
		switch (iVar9)
		{
			case 0:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_WIN_HIGH", 64);
				break;
			case 1:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_WIN_LOW", 64);
				break;
			case 2:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_NEU", 64);
				break;
			case 3:
				StringCopy(&cVar0, "PBL_EXIT_FEM_BASE_CAMP_LOSS", 64);
				break;
		}
		if (bVar8)
		{
			StringConCat(&cVar0, "_A", 64);
		}
		else
		{
			StringConCat(&cVar0, "_B", 64);
		}
		uParam0->f_817 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@mp_exits_female", 0, &cVar0, false, true);
	}
	else
	{
		if (iParam1 == 1)
		{
			switch (iVar9)
			{
				case 0:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_WIN_HIGH", 64);
					break;
				case 1:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_WIN_LOW", 64);
					break;
				case 2:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_NEU", 64);
					break;
				case 3:
					StringCopy(&cVar0, "PBL_EXIT_BASE_CAMP_LOSS", 64);
					break;
			}
		}
		else
		{
			switch (iVar9)
			{
				case 0:
					StringCopy(&cVar0, "PBL_EXIT_BASE_WIN_HIGH", 64);
					break;
				case 1:
					StringCopy(&cVar0, "PBL_EXIT_BASE_WIN_LOW", 64);
					break;
				case 2:
					StringCopy(&cVar0, "PBL_EXIT_BASE_NEU", 64);
					break;
				case 3:
					StringCopy(&cVar0, "PBL_EXIT_BASE_LOSS", 64);
					break;
			}
		}
		if (bVar8)
		{
			StringConCat(&cVar0, "_A", 64);
		}
		else
		{
			StringConCat(&cVar0, "_B", 64);
		}
		uParam0->f_817 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@mp_exits_male", 0, &cVar0, false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_817);
	}
}

void func_840(var uParam0, int iParam1, bool bParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_50 != bParam2)
	{
		if ((bParam2 && (uParam0->f_818[iParam1 /*63*/])->f_8 != 0) && (uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
		{
		}
		else
		{
			(uParam0->f_818[iParam1 /*63*/])->f_50 = bParam2;
		}
	}
}

void func_841(var uParam0, int iParam1)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_817, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_817, "player", &(uParam0->f_818[iParam1 /*63*/]), 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1 /*30*/][iVar0]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_817, func_1387(iVar0), uParam0->f_74[iParam1 /*30*/][iVar0], 0);
			}
			iVar0++;
		}
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_817);
	}
}

void func_842(var uParam0)
{
	uParam0->f_165 = 1;
	func_1388(uParam0, 0);
	func_1000(uParam0, 0);
	aggregate_func_2985(1);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
}

bool func_843(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
		return false;
	}
	return (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_817) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_817, 0));
}

bool func_844(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
		return false;
	}
	return ANIMSCENE::_0x4822A65D5AF64E69(uParam0->f_817) >= 1;
}

void func_845(var uParam0)
{
	if (uParam0->f_689 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_689))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_689));
		}
		uParam0->f_689 = 0;
	}
}

void func_846(var uParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	if (!bParam1)
	{
		StringCopy(&cVar0, "PBL_EXIT_DEALING_", 64);
	}
	else
	{
		StringCopy(&cVar0, "PBL_EXIT_BOARD_SWAP_", 64);
	}
	if (!bParam2)
	{
		StringConCat(&cVar0, "L", 64);
	}
	else
	{
		StringConCat(&cVar0, "R", 64);
	}
	uParam0->f_817 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@interrupt_exits", 0, &cVar0, false, true);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_817);
	}
}

void func_847(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_817))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_817, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_817, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_817, "deck", uParam0->f_689, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_817);
	}
}

void func_848(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	uParam0->f_39 = bParam1;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iVar0 /*63*/])->f_60))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL((uParam0->f_818[iVar0 /*63*/])->f_60, "ignoreCamera", true, false);
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_811[iVar1])))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_811[iVar1]), "ignoreCamera", true, false);
			}
			iVar1++;
		}
	}
}

void func_849(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar5;

	aggregate_func_5627(uParam0, iParam1, "OLD", "CREATE_BANK_STACKS_TO_VALUE()");
	uVar0 = 4;
	uVar5 = 4;
	func_1389(iParam2, &uVar0, &uVar5);
	func_1390(uParam0, iParam1, &uVar0, &uVar5, bParam3);
	aggregate_func_5627(uParam0, iParam1, "NEW", 0);
}

void func_850(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_74[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1]);
				}
				(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1] = 0;
				(uParam0->f_74[iVar0 /*30*/])->f_15[iVar1] = 0;
				(uParam0->f_74[iVar0 /*30*/])->f_25[iVar1] = 0f;
			}
			if (&(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_255[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1]);
				}
				(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1] = 0;
				(uParam0->f_255[iVar0 /*30*/])->f_15[iVar1] = 0;
				(uParam0->f_255[iVar0 /*30*/])->f_25[iVar1] = 0f;
			}
			if (&(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iVar0 /*30*/][iVar1]))
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_436[iVar0 /*30*/][iVar1], 255, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1])))
				{
					OBJECT::DELETE_OBJECT((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1]);
				}
				(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1] = 0;
				(uParam0->f_436[iVar0 /*30*/])->f_15[iVar1] = 0;
				(uParam0->f_436[iVar0 /*30*/])->f_25[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_851(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_805))
	{
	}
	else if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_805, "plMain"))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_805, "Breakout", true, false);
	}
}

bool func_852(var uParam0, int iParam1, bool bParam2)
{
	return func_908(uParam0, iParam1, 1, bParam2);
}

int func_853(var uParam0, int iParam1, bool bParam2)
{
	return func_1202(uParam0, iParam1, 1, bParam2);
}

int func_854(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 2;
}

int func_855(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (iParam1 + 1 % 6);
	while (&uParam0->f_39[iVar0 /*56*/] == -1)
	{
		if (iVar0 == iParam1)
		{
			return -1;
		}
		iVar0 = (iVar0 + 1 % 6);
	}
	return iVar0;
}

void func_856(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 1 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 29);
		(uParam0->f_818[iParam1 /*63*/])->f_43 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		(uParam0->f_818[iParam1 /*63*/])->f_41 = iParam2;
		if (bParam3)
		{
			MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_19), 0);
		}
		if ((uParam0->f_818[iParam1 /*63*/])->f_1 == 2)
		{
			if (!uParam0->f_40)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Fold");
			}
			func_1121(uParam0, iParam1, 61);
		}
		else
		{
			func_1121(uParam0, iParam1, 62);
		}
		func_468(uParam0, iParam1, 0);
		func_469(uParam0, iParam1, 0);
	}
}

int func_857(int iParam0)
{
	if (*iParam0 < 0 || *iParam0 >= 6)
	{
		*iParam0 = -1;
		return 0;
	}
	*iParam0 = (*iParam0 + 1 % 6);
	return 1;
}

int func_858(var uParam0, int iParam1, bool bParam2)
{
	return func_1217(uParam0, iParam1, 1, bParam2);
}

void func_859(var uParam0)
{
	int iVar0;

	if (uParam0->f_41 != 0)
	{
	}
	else
	{
		uParam0->f_41 = 1;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (func_207(uParam0, iVar0))
			{
				func_1391(uParam0, iVar0);
			}
			iVar0++;
		}
	}
}

char* func_860(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1 /*56*/] != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_865(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (&uParam0->f_376[iVar1 /*18*/] + iVar0);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_617(uParam0, iVar2))
		{
			iVar0 = (iVar0 + aggregate_func_5974(uParam0, iVar2));
		}
		iVar2++;
	}
	return iVar0;
}

int func_866(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		if ((uParam0->f_376[iVar1 /*18*/])->f_17 > 0)
		{
			iVar0 = (&uParam0->f_376[iVar1 /*18*/] + iVar0);
		}
		iVar1++;
	}
	return iVar0;
}

int func_868(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_207(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_871(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (((iVar1 != iParam1 && iVar1 != iParam2) && iVar1 != iParam3) && func_1393(uParam0, iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_872(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	iVar0 = func_1394(uParam1);
	if (func_1395(uParam0, (iParam2 && iVar0), sParam3, iParam4, iParam5, iParam6, iParam7))
	{
		func_893(uParam1, *iParam6);
		return true;
	}
	return false;
}

float func_881(var uParam0, int iParam1)
{
	return ((*uParam0)[iParam1 /*13*/])->f_7;
}

bool func_884(float fParam0)
{
	return fParam0 >= 0.666f;
}

bool func_885(float fParam0)
{
	return fParam0 < 0.333f;
}

bool func_886(float fParam0)
{
	return fParam0 >= 0.325f;
}

bool func_887(float fParam0)
{
	return fParam0 < 0.2f;
}

int func_888(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1 /*56*/] != -1 && (uParam0->f_39[iVar1 /*56*/])->f_2 == 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_889(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_1557[iVar0 /*8*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_890(var uParam0)
{
	return uParam0->f_1670.f_112 != 0;
}

int func_891(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = &iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (MISC::IS_BIT_SET(iParam1, iVar9))
				{
					if (func_1226(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iVar9, 1, iParam3))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_2839.f_807, sParam2, &(uParam0->f_2839.f_818[iVar9 /*63*/]), 0, uParam0->f_2839.f_40))
						{
							return iVar9;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return -1;
	}
	return -1;
}

bool func_892(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		if (func_1226(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iParam1, 1, iParam3))
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_2839.f_807, sParam2, &(uParam0->f_2839.f_818[iParam1 /*63*/]), 0, uParam0->f_2839.f_40))
			{
				return true;
			}
		}
		return false;
	}
	return false;
}

void func_893(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	*uParam0 = iVar0;
	if (iParam1 >= 0 && iParam1 < 6)
	{
		uParam0->f_1[iParam1] = iVar0;
	}
}

bool func_894(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_1394(uParam1);
	*iParam6 = func_891(uParam0, (uParam2 && iVar0), sParam3, iParam4, iParam5);
	if (*iParam6 != -1)
	{
		func_893(uParam1, *iParam6);
		return true;
	}
	return false;
}

bool func_895(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (func_1396(uParam1, iParam2))
	{
		if (func_892(uParam0, iParam2, sParam3, iParam4, iParam5))
		{
			func_893(uParam1, iParam2);
			return true;
		}
	}
	return false;
}

float func_899(var uParam0, int iParam1)
{
	return &(uParam0->f_151[iParam1]);
}

bool func_900(float fParam0, float fParam1)
{
	return (func_1298(fParam0) || (func_884(fParam1) && !func_1300(fParam0)));
}

bool func_902(var uParam0, int iParam1)
{
	if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 > 7 || ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 == 7 && &(uParam0->f_39[iParam1 /*56*/])->f_31[0 /*2*/] >= 11))
	{
		return true;
	}
	return false;
}

bool func_903(var uParam0, int iParam1)
{
	if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 >= 3)
	{
		return true;
	}
	return false;
}

bool func_904(var uParam0, int iParam1)
{
	if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 == 0)
	{
		return true;
	}
	if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 == 1 && &(uParam0->f_39[iParam1 /*56*/])->f_31[0 /*2*/] < 11)
	{
		return true;
	}
	return false;
}

void func_905(var uParam0)
{
	uParam0->f_1606 = 0;
	uParam0->f_1606.f_1 = 0;
}

bool func_907(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if ((uParam0->f_39[iParam1 /*56*/])->f_6 == 0 || (uParam0->f_39[iParam1 /*56*/])->f_6 == 2)
		{
			return true;
		}
	}
	return false;
}

bool func_908(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (!MISC::IS_BIT_SET(uParam0->f_1617, iParam1) || (&uParam0->f_1618[iParam1] == iParam2 && !bParam3));
}

bool func_909(var uParam0, int iParam1)
{
	int iVar0;

	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1 /*63*/] != 0)
	{
		iVar0 = &uParam0->f_818[iParam1 /*63*/];
		if (!PED::IS_PED_INJURED(iVar0) && AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_910(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1397(uParam1);
		bVar1 = aggregate_func_2967(uParam1, iParam4);
		bVar2 = func_1398(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		fVar5 = func_881(uParam1, iParam4);
		bVar6 = aggregate_func_9389(fVar5);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_excited_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_smallWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_170 < 3)
				{
					if (uParam1->f_168 < 1)
					{
						if (bVar6)
						{
							if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_angry_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
							{
								uParam1->f_168++;
								uParam1->f_170++;
								return true;
							}
						}
						else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_frustrated_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							uParam1->f_168++;
							uParam1->f_170++;
							return true;
						}
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_smallLossFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
		}
		if (!bVar0)
		{
			if (bVar1)
			{
				if (uParam1->f_170 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_lookingGood", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_content_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
			}
			else if (uParam1->f_170 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_lookingBad", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
				if (bVar6)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_frustrated_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return true;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "flop_nervous_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return true;
				}
			}
		}
	}
	return false;
}

void func_911(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2020[iVar0] == iParam1)
		{
			aggregate_func_4284(uParam0->f_2027[iVar0 /*3*/], -fParam2);
		}
		iVar0++;
	}
}

bool func_912(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = func_1397(uParam1);
		bVar1 = aggregate_func_2967(uParam1, iParam4);
		bVar2 = func_1398(uParam1, iParam4);
		bVar3 = (bVar2 && bVar1);
		bVar4 = (bVar2 && !bVar1);
		if (bVar0)
		{
			if (bVar3)
			{
				if (uParam1->f_166 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "turn_smallWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return true;
					}
				}
			}
			if (bVar4)
			{
				if (uParam1->f_167 < 1)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "turn_smallLossFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_913(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < (uParam0->f_376[iVar1 /*18*/])->f_17)
		{
			if (&(uParam0->f_376[iVar1 /*18*/])->f_10[iVar2] == iParam1)
			{
				iVar0 = (iVar0 + (&uParam0->f_376[iVar1 /*18*/] / (uParam0->f_376[iVar1 /*18*/])->f_17));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_914(var uParam0, int iParam1, bool bParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 == 1)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/]))) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(&(uParam0->f_818[iParam1 /*63*/])))
		{
			return true;
		}
	}
	return false;
}

void func_915(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (func_1226(uParam0, uParam1, uParam2, uParam3, iParam4, 1, -1))
	{
		bVar0 = aggregate_func_2967(uParam1, iParam4);
		bVar1 = func_1398(uParam1, iParam4);
		bVar2 = (bVar1 && bVar0);
		bVar3 = (bVar1 && !bVar0);
		fVar4 = func_881(uParam1, iParam4);
		fVar5 = aggregate_func_6570(uParam1, iParam4);
		fVar6 = aggregate_func_8636(uParam1, iParam4);
		bVar7 = aggregate_func_9389(fVar4);
		bVar8 = func_1400(fVar5);
		bVar9 = func_886(fVar5);
		bVar10 = func_900(fVar6, fVar4);
		if (bVar2)
		{
			if (uParam1->f_166 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_winLastMinute", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_excited_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_excited_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_bigWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_166++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_smallWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_166++;
					return;
				}
			}
		}
		if (bVar3 && !bVar8)
		{
			if (uParam1->f_167 < 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_loseLastMinute", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar7)
				{
					if (bVar10)
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_angry_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
						{
							uParam1->f_167++;
							uParam1->f_170++;
							return;
						}
					}
					else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_angry_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (bVar10)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_frustrated_lvl3", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_frustrated_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					uParam1->f_170++;
					return;
				}
				if (bVar10)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_medLossFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_167++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_smallLossFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_167++;
					return;
				}
			}
		}
		if (bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_excited_lvl2", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_excited_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (bVar9)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_bigWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_170++;
						return;
					}
				}
			}
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_smallWinFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
			{
				uParam1->f_170++;
				return;
			}
		}
		if (!bVar8)
		{
			if (uParam1->f_170 < 4)
			{
				if (bVar7)
				{
					if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_angry_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
					{
						uParam1->f_169++;
						uParam1->f_170++;
						return;
					}
				}
				else if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_frustrated_lvl1", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_169++;
					uParam1->f_170++;
					return;
				}
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam2->f_807, "river_smallLossFX", &(uParam2->f_818[iParam4 /*63*/]), 0, uParam2->f_40))
				{
					uParam1->f_170++;
					return;
				}
			}
		}
	}
}

int func_916(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@take_pot", 2, func_1401(uParam0), false, false);
			break;
		case 1:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@take_pot_camp", 2, func_1401(uParam0), false, false);
			break;
		case 2:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@fem_take_pot_camp", 2, func_1401(uParam0), false, false);
			break;
		case 3:
			iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@poker@split_take_pot", 2, 0, false, false);
			break;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	uParam0->f_811[iParam1] = iVar0;
	return 1;
}

char* func_917(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Poker";
		case 1:
			return "PokerArthur";
		case 2:
			return "PokerArthurCamp";
		case 3:
			return "PokerJohn";
		case 4:
			return "PokerJohnCamp";
		default:
			break;
	}
	return "Poker";
}

void func_918(var uParam0, int iParam1)
{
	char cVar0[64];

	switch (*uParam0)
	{
		case 1:
			StringCopy(&cVar0, "dominos_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
		case 0:
		case 2:
			StringCopy(&cVar0, "card_set_", 64);
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
	}
}

void func_919(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	while (bVar0 < 6)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_24, bVar0);
		bVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_24);
}

void func_920(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
	}
	uParam0->f_1 = iParam1;
}

void func_921(var uParam0, var uParam1, bool bParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	char[] cVar1[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	StringIntConCat(&cVar1, bParam2, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sParam3 = "avatar_generic";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		sParam4 = "minigames_hud";
	}
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, &cVar1);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureDictionary", sParam4);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureName", sParam3);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isEnabled", true);
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isVisible", bParam6);
	uParam1->f_6 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isActivePlayer", false);
	uParam1->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "stateText", " ");
	uParam1->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "moneyText", "");
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isMoneyTextVisible", true);
	uParam1->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isDealer", false);
	uParam1->f_11 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_1, "turnTimerValue", -1);
	uParam1->f_12 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isCurrentPlayer", false);
	uParam1->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "enableTurnTimerPulse", false);
	if (bParam5)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, bParam2, "player_stack_item", uParam1->f_1);
	}
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "playerHandData");
	uParam1->f_14 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "playerHandList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_14);
	bVar0 = false;
	while (bVar0 < uParam1->f_16)
	{
		StringCopy(&cVar1, "", 8);
		StringIntConCat(&cVar1, bVar0, 8);
		iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar2, &cVar1);
		uParam1->f_16[bVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "textureName", "");
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_14, bVar0, "single_game_token", iVar3);
		bVar0++;
	}
	if (*uParam0 == 0)
	{
		iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "secondPlayerHandData");
		uParam1->f_15 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "secondPlayerHandList");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_15);
		bVar0 = false;
		while (bVar0 < uParam1->f_19)
		{
			StringCopy(&cVar1, "", 8);
			StringIntConCat(&cVar1, bVar0, 8);
			iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar4, &cVar1);
			uParam1->f_19[bVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_15, bVar0, "single_game_token", iVar5);
			bVar0++;
		}
	}
	MISC::SET_BIT(&(uParam0->f_163), bParam2);
	*uParam1 = 1;
}

void func_922(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (&uParam0->f_818[iVar0 /*63*/] != 0 && PED::IS_PED_INJURED(&(uParam0->f_818[iVar0 /*63*/])))
			{
				if (uParam0->f_41 == 1)
				{
					func_1402(uParam0);
				}
				func_208(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	if (uParam0->f_41 == 1 || uParam0->f_41 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = &uParam0->f_818[iVar0 /*63*/];
			if ((iVar1 != 0 && (uParam0->f_818[iVar0 /*63*/])->f_53) && (uParam0->f_818[iVar0 /*63*/])->f_8 != 28)
			{
				if ((TASK::PED_HAS_USE_SCENARIO_TASK(iVar1) && TASK::_0x0C3CB2E600C8977D(iVar1, 0)) || PED::IS_PED_RAGDOLL(iVar1))
				{
					if (uParam0->f_41 == 1)
					{
						func_1402(uParam0);
					}
					if (TASK::PED_HAS_USE_SCENARIO_TASK(iVar1))
					{
						func_1403(uParam0, iVar0);
					}
					else
					{
						func_1174(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = &uParam0->f_818[iVar0 /*63*/];
		if (iVar1 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam0->f_818[iVar0 /*63*/]);
			Stack.Push(iVar0);
			Call_Loc(&uParam0->f_1330[(uParam0->f_818[iVar0 /*63*/])->f_8]);
		}
		func_1404(uParam0, &((uParam0->f_818[iVar0 /*63*/])->f_62));
		iVar1 = &uParam0->f_818[iVar0 /*63*/];
		if (iVar1 != 0)
		{
			if ((uParam0->f_818[iVar0 /*63*/])->f_8 != 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, -1523471413))
				{
					func_467(uParam0, iVar0, "hold_cards_idle_a_card1", aggregate_func_7680(uParam0, iVar0, 0), 4, 2, -1082130432 /* Float: -1f */);
					func_467(uParam0, iVar0, "hold_cards_idle_a_card2", aggregate_func_7680(uParam0, iVar0, 1), 4, 2, -1082130432 /* Float: -1f */);
				}
			}
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookQuick") || TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookMedium"))
				{
					aggregate_func_6629(uParam0, iVar0, 2);
				}
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "Motiontree"))
				{
					aggregate_func_6629(uParam0, iVar0, 0);
				}
			}
			else if ((uParam0->f_818[iVar0 /*63*/])->f_57 != 0)
			{
				aggregate_func_6629(uParam0, iVar0, 0);
			}
			if ((uParam0->f_818[iVar0 /*63*/])->f_54)
			{
				if (!PED::IS_PED_INJURED(iVar1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar1, 0, 1);
					PED::SET_PED_CAN_LEG_IK(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

void func_923(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (&(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				(uParam0->f_74[iVar0 /*30*/])->f_25[iVar1] = (&(uParam0->f_74[iVar0 /*30*/])->f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = &(uParam0->f_74[iVar0 /*30*/])->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = aggregate_func_9411((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = aggregate_func_9411(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_74[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1])))
					{
						ENTITY::SET_ENTITY_ALPHA(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1]), BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_74[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1])))
					{
						OBJECT::DELETE_OBJECT((uParam0->f_74[iVar0 /*30*/])->f_15[iVar1]);
					}
					(uParam0->f_74[iVar0 /*30*/])->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (&(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				(uParam0->f_255[iVar0 /*30*/])->f_25[iVar1] = (&(uParam0->f_255[iVar0 /*30*/])->f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = &(uParam0->f_255[iVar0 /*30*/])->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = aggregate_func_9411((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = aggregate_func_9411(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_255[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1])))
					{
						ENTITY::SET_ENTITY_ALPHA(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1]), BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_255[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1])))
					{
						OBJECT::DELETE_OBJECT((uParam0->f_255[iVar0 /*30*/])->f_15[iVar1]);
					}
					(uParam0->f_255[iVar0 /*30*/])->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1] != 0)
			{
				if (&(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1] == 3)
				{
					fVar5 = uParam0->f_697;
				}
				else
				{
					fVar5 = uParam0->f_696;
				}
				(uParam0->f_436[iVar0 /*30*/])->f_25[iVar1] = (&(uParam0->f_436[iVar0 /*30*/])->f_25[iVar1] + (MISC::GET_FRAME_TIME() / fVar5));
				fVar4 = &(uParam0->f_436[iVar0 /*30*/])->f_25[iVar1];
				if (fVar4 < 1f)
				{
					switch (&(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1])
					{
						case 1:
							fVar3 = 1f;
							fVar2 = fVar4;
							break;
						case 2:
							fVar3 = (1f - fVar4);
							fVar2 = 1f;
							break;
						case 3:
							fVar3 = aggregate_func_9411((1f - (2f * fVar4)), 0, 1065353216 /* Float: 1f */);
							fVar2 = aggregate_func_9411(((2f * fVar4) - 1f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_436[iVar0 /*30*/][iVar1], BUILTIN::ROUND((fVar2 * 255f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1])))
					{
						ENTITY::SET_ENTITY_ALPHA(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1]), BUILTIN::ROUND((fVar3 * 255f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iVar0 /*30*/][iVar1]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_436[iVar0 /*30*/][iVar1], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1])))
					{
						OBJECT::DELETE_OBJECT((uParam0->f_436[iVar0 /*30*/])->f_15[iVar1]);
					}
					(uParam0->f_436[iVar0 /*30*/])->f_20[iVar1] = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_924(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
			func_920(uParam0, 2);
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				func_920(uParam0, 3);
			}
			break;
		case 3:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_2, uParam0->f_3);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1631983120, uParam0->f_2);
				func_920(uParam0, 4);
			}
			break;
		case 4:
			if (MISC::GET_FRAME_COUNT() > uParam0->f_161 && uParam0->f_162 != -1)
			{
				func_1405(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

void func_925(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;

	iVar17 = 0;
	while (iVar17 < 6)
	{
		switch (&uParam0->f_173[iVar17])
		{
			case 1:
				iVar0 = aggregate_func_347(uParam0->f_194[iVar17 /*16*/], &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 3)
				{
					aggregate_func_5019(uParam0, iVar17, 2);
				}
				break;
			case 2:
				iVar0 = aggregate_func_347(uParam0->f_194[iVar17 /*16*/], &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 4)
				{
					aggregate_func_5019(uParam0, iVar17, 3);
				}
				else if (iVar0 == 1 || iVar0 == 2)
				{
					aggregate_func_1627(&(uParam0->f_180[iVar17]), 2);
					aggregate_func_5019(uParam0, iVar17, 4);
				}
				break;
			case 3:
				iVar0 = aggregate_func_347(&Var1, &(uParam0->f_180[iVar17]), 2);
				if (iVar0 == 4)
				{
					*(uParam0->f_194[iVar17 /*16*/]) = { Var1 };
				}
				break;
		}
		iVar17++;
	}
}

void func_926(var uParam0)
{
	var uVar0;
	char[] cVar16[8];
	int iVar32;

	iVar32 = 0;
	while (iVar32 < 6)
	{
		if (&uParam0->f_307[iVar32 /*20*/])
		{
			func_1407(uParam0, iVar32, &uVar0, &cVar16);
			aggregate_func_3908(uParam0->f_34[iVar32 /*21*/], &uVar0);
			aggregate_func_3908(uParam0->f_34[iVar32 /*21*/], &cVar16);
		}
		iVar32++;
	}
}

bool func_927(var[] uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	if (&uParam0[iParam17] == -1)
	{
		return false;
	}
	return true;
}

void func_928(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::INT_TO_PLAYERINDEX(iParam2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		iVar0 = iVar1;
		if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && MISC::IS_BIT_SET((uParam0->f_17[iVar0 /*9*/])->f_4, iParam1)) && !MISC::IS_BIT_SET((uParam0->f_17[iVar0 /*9*/])->f_4, 8))
		{
			(*uParam0)[iParam1] = iVar0;
		}
	}
}

void func_929(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam2);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		if (MISC::IS_BIT_SET((uParam0->f_17[iParam2 /*9*/])->f_4, 7))
		{
			aggregate_func_2862(uParam0, iParam1);
		}
	}
	else
	{
		func_931(uParam0, iParam1);
	}
}

bool func_930(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	bVar4 = false;
	iVar5 = uParam0[iParam1];
	iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
				iVar1 = iVar2;
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					if (MISC::IS_BIT_SET((uParam0->f_17[iVar1 /*9*/])->f_4, iParam1))
					{
						bVar4 = true;
						(*uParam0)[iParam1] = iVar1;
					}
					else
					{
						iVar0++;
					}
					return !bVar4;
					return false;
				}
			}
		}
	}
}

void func_931(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_6), iParam1);
	(*uParam0)[iParam1] = -1;
}

struct<2> func_934(var uParam0, int iParam1)
{
	return *(uParam0->f_15[iParam1 /*2*/]);
}

bool func_935(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_470(uParam0, *((*uParam0->f_617[iVar1 /*9*/])[iVar2 /*2*/]), &iVar0))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return false;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	return true;
}

bool func_936(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_470(uParam0, *(uParam0->f_672[iVar1 /*2*/]), &iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_941(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= &uParam0->f_1475.f_8[iParam1])
	{
		return MISC::IS_BIT_SET(uParam0->f_1475.f_15, iParam1);
	}
	return MISC::IS_BIT_SET(uParam0->f_1475.f_16, iParam1);
}

int func_943(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_207(uParam0, iVar2))
		{
			iVar1 = (uParam0->f_818[iVar2 /*63*/])->f_6;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_944(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1415(iParam0, bParam2);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_1416(iParam1, iParam2, iParam3, bParam4);
	PED::_0x1902C4CFCC5BE57C(iParam0, iVar0);
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
	return iVar0;
}

void func_946()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	if (Global_1051387->f_3691 == -1)
	{
		Global_1051387->f_3691 = 0;
	}
	else
	{
		Global_1051387->f_3691++;
		if (Global_1051387->f_3691 == 176)
		{
			Global_1051387->f_3691 = 0;
		}
	}
	iVar0 = aggregate_func_4369(Global_1051387->f_3691);
	if (iVar0 == -1)
	{
		return;
	}
	func_1417(Global_1051387->f_3691, iVar0);
	bVar1 = ((aggregate_func_3792(iVar0) || aggregate_func_3730(aggregate_func_5278(Global_1051387->f_3691), 255)) || aggregate_func_1618(Global_1051387->f_3691) == 1);
	iVar2 = aggregate_func_5121(Global_1051387->f_3691);
	bVar1 = ((bVar1 || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2)) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar2));
	if (bVar1)
	{
		if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
		{
			func_1422(Global_1051387->f_3693[iVar0 /*16*/]);
			func_1423(Global_1051387->f_3693[iVar0 /*16*/]);
		}
	}
	else
	{
		vVar3 = { 0f, 0f, 0f };
		if (aggregate_func_5595(Global_1051387->f_3691, &uVar7, &uVar6, &vVar3) && !aggregate_func_4268(vVar3))
		{
			if (&Global_1051387->f_3693[iVar0 /*16*/] == -1 || aggregate_func_4369(&(Global_1051387->f_3693[iVar0 /*16*/])) != iVar0)
			{
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
			else if (&Global_1051387->f_3693[iVar0 /*16*/] == Global_1051387->f_3691)
			{
			}
			else if (BUILTIN::VDIST(Global_36, vVar3) < BUILTIN::VDIST(Global_36, (Global_1051387->f_3693[iVar0 /*16*/])->f_1))
			{
				func_1422(Global_1051387->f_3693[iVar0 /*16*/]);
				Global_1051387->f_3693[iVar0 /*16*/] = Global_1051387->f_3691;
				(Global_1051387->f_3693[iVar0 /*16*/])->f_1 = { vVar3 };
				(Global_1051387->f_3693[iVar0 /*16*/])->f_9 = 0;
			}
		}
	}
	if (Global_1051387->f_3692 == -1)
	{
		Global_1051387->f_3692 = 0;
	}
	iVar8 = Global_1051387->f_3692 + 1;
	if (iVar8 == 39 || iVar8 == -1)
	{
		iVar8 = 0;
	}
	while (iVar8 != Global_1051387->f_3692)
	{
		if (BUILTIN::VDIST2((Global_1051387->f_3693[iVar8 /*16*/])->f_1, Global_36) < func_1426(iVar8, 1))
		{
			Global_1051387->f_3692 = iVar8;
		}
		else
		{
			iVar8++;
			if (iVar8 == 39)
			{
				iVar8 = 0;
			}
		}
	}
	func_1427(Global_1051387->f_3693[Global_1051387->f_3692 /*16*/], Global_1051387->f_3692);
	func_1428(Global_1051387->f_3692);
	if (Global_1051387->f_3666.f_1 != -1)
	{
		func_1429(&(Global_1051387->f_3693[Global_1051387->f_3666.f_1 /*16*/]));
	}
	else if (aggregate_func_2627())
	{
		iVar9 = 0;
		while (iVar9 < 39)
		{
			func_1429(&(Global_1051387->f_3693[iVar9 /*16*/]));
			if (Global_1051387->f_3666.f_1 != -1)
			{
			}
			else
			{
				iVar9++;
			}
		}
	}
}

bool func_951(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((uParam0->f_66 && uParam0->f_69), iParam1);
}

int func_953(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_151.f_51);
}

bool func_954(var uParam0)
{
	var uVar0;

	if (func_390(uParam0, &uVar0) || func_780(uParam0, &uVar0))
	{
		return true;
	}
	return false;
}

void func_957(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam0->f_166)
	{
		return;
	}
	uParam0->f_465 = 1;
	uParam0->f_465.f_1 = 0;
	if (iParam3 > 0)
	{
		func_959(uParam1, iParam3);
	}
	uParam0->f_465.f_2 = aggregate_func_4937(uParam2->f_13, func_1433(uParam0, aggregate_func_2020()));
	if (uParam0->f_169)
	{
		aggregate_func_7824(8192);
		aggregate_func_8452(16384);
	}
	func_589(&(uParam0->f_465.f_3));
	uParam0->f_465.f_17 = 0;
}

void func_959(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
	}
	else
	{
		uParam0->f_61 = iParam1;
		func_269(uParam0);
	}
}

bool func_960(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_465)
	{
		if (uParam0->f_465.f_1 == 0)
		{
			iVar0 = aggregate_func_4937(uParam2->f_12, func_1433(uParam0, aggregate_func_2020()));
			iVar1 = aggregate_func_4937(uParam2->f_13, func_1433(uParam0, aggregate_func_2020()));
			if (!aggregate_func_2875(uParam0->f_465.f_18))
			{
				uParam0->f_465.f_18 = aggregate_func_2045("MGPKR_UI_BUYIN", joaat("INPUT_MINIGAME_POKER_CHECK_FOLD"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!aggregate_func_2875(uParam0->f_465.f_19))
			{
				if (iVar0 != iVar1)
				{
					uParam0->f_465.f_19 = aggregate_func_2045("MGPKR_UI_ALTER", joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			iVar2 = 0;
			iVar2 = func_1434(&(uParam0->f_465.f_3), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
			if (iVar2 != 0)
			{
				iVar3 = aggregate_func_6918((uParam0->f_465.f_2 + iVar2), iVar0, iVar1);
				if (uParam0->f_465.f_2 != iVar3)
				{
					uParam0->f_465.f_2 = iVar3;
					func_1436((iVar3 == iVar0 || iVar3 == iVar1));
				}
			}
			if (aggregate_func_455(uParam0->f_465.f_18, 1))
			{
				uParam0->f_465.f_1 = 1;
			}
			if (uParam0->f_169 && aggregate_func_7654(16384))
			{
				uParam0->f_465.f_1 = 1;
			}
			if (aggregate_func_2875(uParam0->f_465.f_18))
			{
				aggregate_func_1558(uParam0->f_465.f_18, "MGPKR_UI_BUYIN", func_1437(uParam0, uParam0->f_465.f_2), 1);
			}
		}
		if (uParam0->f_465.f_1 != 0)
		{
			func_1439(uParam1);
			aggregate_func_8452(8192);
			aggregate_func_8452(16384);
			aggregate_func_2878(&(uParam0->f_465.f_18), 1, 1);
			aggregate_func_2878(&(uParam0->f_465.f_19), 1, 1);
			return true;
		}
	}
	return false;
}

bool func_962(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;

	if (!func_403(uParam0, 1))
	{
		if (iParam1 != uParam0->f_9)
		{
		}
		else if (MINIGAME::_POKER_BUY_IN(uParam2, &Var0))
		{
			func_404(uParam0, 1, Var0, 1, 0);
			return true;
		}
	}
	return false;
}

void func_963(var uParam0, var uParam1)
{
	uParam0->f_465 = 0;
	uParam0->f_465.f_1 = 0;
	uParam0->f_465.f_2 = 0;
	func_1439(uParam1);
	aggregate_func_8452(8192);
	aggregate_func_8452(16384);
	aggregate_func_2878(&(uParam0->f_465.f_18), 1, 1);
	aggregate_func_2878(&(uParam0->f_465.f_19), 1, 1);
}

bool func_964()
{
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		return NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT();
	}
	return false;
}

void func_965(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = &uParam1->f_2020[iVar2];
		if (iVar0 != 0)
		{
			Stack.Push(uParam0);
			Stack.Push(uParam1);
			Stack.Push(iVar2);
			Stack.Push(uParam1->f_2027[iVar2 /*3*/]);
			Call_Loc(&uParam1->f_1436[iVar0]);
			if (StackVal)
			{
				func_1440(uParam1, iVar2);
			}
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
}

void func_966(var uParam0, var uParam1)
{
	var uVar0[6];
	var uVar7[6];
	var uVar14[6];
	var uVar21[6];
	int iVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	func_1441(&(uParam0->f_151), &uVar0, &uVar7, &uVar14, &uVar21, &iVar28, &bVar29, &iVar30);
	iVar31 = 0;
	iVar32 = 0;
	iVar33 = 0;
	while (iVar33 < 6)
	{
		if (&uVar0[iVar33])
		{
			iVar31++;
			if (&uVar7[iVar33] > 0)
			{
				iVar32++;
			}
		}
		iVar33++;
	}
	if (!bVar29)
	{
		if (aggregate_func_4249(&(uParam0->f_2335)) != iVar32 || aggregate_func_4249(&(uParam0->f_2335)) != iVar31)
		{
			func_1190(&(uParam0->f_2335), iVar32, iVar31);
		}
		iVar34 = (iVar28 - NETWORK::GET_CLOUD_TIME_AS_INT());
		if (iVar34 < 1)
		{
			iVar34 = 1;
		}
		if (uParam0->f_151.f_9 != -1 && &uVar7[uParam0->f_151.f_9] == 0)
		{
			if (aggregate_func_4249(&(uParam0->f_2335)) != 8 && !uParam0->f_151.f_1631)
			{
				func_793(&(uParam0->f_2335), "MGPKR_YOU_NEED_TO_BUYIN", 8);
			}
		}
		else if (aggregate_func_4249(&(uParam0->f_2335)) == 8)
		{
			func_980(&(uParam0->f_2335));
		}
		if (iVar28 == 0)
		{
			if (aggregate_func_4249(&(uParam0->f_2335)) != -1)
			{
				func_1445(&(uParam0->f_2335));
			}
			if (iVar32 < 2)
			{
				if ((aggregate_func_4249(&(uParam0->f_2335)) != 9 && aggregate_func_4249(&(uParam0->f_2335)) != 8) && !uParam0->f_151.f_1631)
				{
					func_793(&(uParam0->f_2335), "MGPKR_MORE_NEED_TO_BUYIN", 9);
				}
			}
		}
		else
		{
			if (aggregate_func_4249(&(uParam0->f_2335)) != iVar34)
			{
				func_1446(&(uParam0->f_2335), iVar34);
				if (iVar34 <= 5)
				{
					AUDIO::PLAY_SOUND_FRONTEND("round_start_countdown_tick", "RDRO_Poker_Sounds", true, 0);
				}
			}
			if (aggregate_func_4249(&(uParam0->f_2335)) == 9)
			{
				func_980(&(uParam0->f_2335));
			}
		}
	}
	else if (!uParam0->f_151.f_2052)
	{
		uParam0->f_151.f_2052 = 1;
		func_1188(&(uParam0->f_2335), 1, 1);
		func_1203(&(uParam0->f_2335));
		func_1042(&(uParam0->f_2335), 0, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 1, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 2, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 3, func_327(), 0, 0);
		func_1042(&(uParam0->f_2335), 4, func_327(), 0, 0);
		func_1045(&(uParam0->f_2335), 0, iVar30, 1);
		if (aggregate_func_4249(&(uParam0->f_2335)) == 8 || aggregate_func_4249(&(uParam0->f_2335)) == 9)
		{
			func_980(&(uParam0->f_2335));
		}
	}
	iVar33 = 0;
	while (iVar33 < 6)
	{
		if (func_200(uParam1, iVar33) && func_981(&(uParam0->f_2335), iVar33))
		{
			if (aggregate_func_5974(&(uParam0->f_2335), iVar33) != &uVar7[iVar33])
			{
				func_1192(&(uParam0->f_2335), iVar33, &(uVar7[iVar33]));
			}
			if (!&uVar0[iVar33])
			{
				if (!func_1447(&(uParam0->f_2335), iVar33, func_1383()))
				{
					func_1036(&(uParam0->f_2335), iVar33, func_1383());
					func_1040(&(uParam0->f_2335), iVar33, 1);
				}
			}
			else if (&uVar21[iVar33] == 0)
			{
				if (&uVar7[iVar33] == 0)
				{
					if (!func_1447(&(uParam0->f_2335), iVar33, func_1193()))
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1193());
						func_1040(&(uParam0->f_2335), iVar33, 0);
					}
				}
				else if (!func_1447(&(uParam0->f_2335), iVar33, func_1194()))
				{
					func_1036(&(uParam0->f_2335), iVar33, func_1194());
					func_1040(&(uParam0->f_2335), iVar33, 0);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_151.f_2053, iVar33))
			{
				MISC::SET_BIT(&(uParam0->f_151.f_2053), iVar33);
				if (&uVar21[iVar33] == 6)
				{
					if (&uVar7[iVar33] == 0)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1193());
					}
					else
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1194());
					}
					func_1040(&(uParam0->f_2335), iVar33, 1);
				}
				else
				{
					if (&uVar21[iVar33] == 1)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1207(&(uParam0->f_2335), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 2)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1208(&(uParam0->f_2335), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 3)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1209(&(uParam0->f_2335), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 4)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1210(&(uParam0->f_2335), &(uVar14[iVar33])));
					}
					else if (&uVar21[iVar33] == 5)
					{
						func_1036(&(uParam0->f_2335), iVar33, func_1211(uParam0, iVar33));
					}
					func_1040(&(uParam0->f_2335), iVar33, 0);
				}
			}
		}
		iVar33++;
	}
}

void func_967(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!aggregate_func_2875(uParam0->f_495))
		{
			uParam0->f_499 = aggregate_func_2045("MGPKR_UI_HANDS", joaat("INPUT_MINIGAME_POKER_SHOW_POSSIBLE_HANDS"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_499, 14, 1, 1);
			aggregate_func_2057(uParam0->f_499, 17, 1, 1);
		}
	}
	else if (aggregate_func_2875(uParam0->f_499))
	{
		aggregate_func_2878(&(uParam0->f_499), 1, 1);
	}
}

void func_968(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!aggregate_func_2875(uParam0->f_494))
		{
			uParam0->f_494 = aggregate_func_2045("MGPKR_UI_HOLE", joaat("INPUT_MINIGAME_POKER_YOUR_CARDS"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_494, 14, 1, 1);
			aggregate_func_2057(uParam0->f_494, 17, 1, 1);
		}
	}
	else if (aggregate_func_2875(uParam0->f_494))
	{
		aggregate_func_2878(&(uParam0->f_494), 1, 1);
	}
}

void func_969(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!aggregate_func_2875(uParam0->f_495))
		{
			uParam0->f_495 = aggregate_func_2045("MGPKR_UI_BOARD", joaat("INPUT_MINIGAME_POKER_COMMUNITY_CARDS"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_495, 14, 1, 1);
			aggregate_func_2057(uParam0->f_495, 17, 1, 1);
		}
	}
	else if (aggregate_func_2875(uParam0->f_495))
	{
		aggregate_func_2878(&(uParam0->f_495), 1, 1);
	}
}

bool func_971(var uParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iParam1]));
}

void func_974(var uParam0, bool bParam1)
{
	if (bParam1 && !uParam0->f_166)
	{
		if (!aggregate_func_2875(uParam0->f_500))
		{
			uParam0->f_500 = aggregate_func_2045("MGPKR_UI_FREE_LOOK", joaat("INPUT_PC_FREE_LOOK"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_500, 14, 1, 1);
			aggregate_func_2057(uParam0->f_500, 17, 1, 1);
		}
	}
	else if (aggregate_func_2875(uParam0->f_500))
	{
		aggregate_func_2878(&(uParam0->f_500), 1, 1);
	}
}

void func_975(var uParam0)
{
	if (!UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1495295997))
		{
		}
		else
		{
			UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1495295997);
			uParam0->f_168 = 1;
		}
	}
}

bool func_976(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_4270(iParam0);
	iVar1 = ((*Global_1949749)[iVar0 /*23*/])->f_4;
	return (aggregate_func_1549(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

void func_978(var uParam0)
{
	func_1449(&(uParam0->f_36), 0);
	switch (uParam0->f_2)
	{
		case 2:
			CAM::_0x90DA5BA5C2635416();
			break;
		case 1:
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			break;
	}
	if (uParam0->f_1)
	{
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			if (!uParam0->f_8)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(func_445(uParam0->f_7), 1E-08f);
				uParam0->f_8 = 1;
			}
		}
		else if (uParam0->f_8)
		{
			GRAPHICS::_0xBB6C707F20D955D4(1E-08f);
			uParam0->f_8 = 0;
		}
	}
}

char* func_979(var uParam0, int iParam1, bool bParam2)
{
	if (func_200(uParam0, iParam1) && func_1450(&((uParam0->f_39[iParam1 /*56*/])->f_31)))
	{
		return func_1451(&((uParam0->f_39[iParam1 /*56*/])->f_31), bParam2);
	}
	return "nothing";
}

void func_980(var uParam0)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (uParam0->f_167)
	{
		return;
	}
	aggregate_func_2985(1);
	uParam0->f_170 = 0;
}

bool func_981(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && uParam0->f_307[iParam1 /*20*/]) // PointerArith)
	{
		return true;
	}
	return false;
}

void func_982(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], sParam2);
		(uParam0->f_307[iParam1 /*20*/])->f_19 = 1;
	}
}

void func_984(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else if ((uParam0->f_307[iParam1 /*20*/])->f_19)
	{
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], &((uParam0->f_307[iParam1 /*20*/])->f_3));
		(uParam0->f_307[iParam1 /*20*/])->f_19 = 0;
	}
}

void func_985(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (uParam0->f_485 != 0)
	{
		if (!func_1224(uParam1, uParam0->f_485.f_1, uParam2))
		{
			func_680(uParam0);
			return;
		}
		bVar0 = true;
		while (bVar0)
		{
			bVar0 = false;
			switch (uParam0->f_485)
			{
				case 1:
					if (!aggregate_func_2875(uParam0->f_485.f_4))
					{
						if (uParam0->f_485.f_2 == 0)
						{
							uParam0->f_485.f_4 = aggregate_func_2045("MGPKR_UI_PRETURN_MENU_MP", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
						else if (uParam0->f_485.f_2 == 1)
						{
							uParam0->f_485.f_4 = aggregate_func_2045("MGPKR_UI_PRETURN_MENU_CHECK", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
						else if (uParam0->f_485.f_2 == 2)
						{
							uParam0->f_485.f_4 = aggregate_func_2045("MGPKR_UI_PRETURN_MENU_CHECK_FOLD", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
						else if (uParam0->f_485.f_2 == 3)
						{
							uParam0->f_485.f_4 = aggregate_func_2045("MGPKR_UI_PRETURN_MENU_CALL_ANY", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
						else if (uParam0->f_485.f_2 == 5)
						{
							uParam0->f_485.f_4 = aggregate_func_2045("MGPKR_UI_PRETURN_MENU_FOLD", joaat("INPUT_MINIGAME_HELP_NEXT"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						}
						aggregate_func_2646(uParam0->f_485.f_4, 1, 1);
						func_1454(uParam0->f_485.f_4, 1, 1);
					}
					if (func_976(uParam0->f_485.f_4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
						if (func_1455(uParam1, uParam0->f_485.f_1))
						{
							func_1456(uParam0, 2);
							bVar0 = true;
						}
						else
						{
							func_1456(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
				case 2:
					if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_HELP_NEXT")))
					{
						func_1456(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1457(uParam0, uParam1, uParam2))
					{
						if (func_1455(uParam1, uParam0->f_485.f_1))
						{
							func_1456(uParam0, 2);
						}
						else
						{
							func_1456(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(635838715, "MGPKR_UI_PRETURN_MENU_MP", 1, 0, 0, 0);
						if (!aggregate_func_2875(uParam0->f_485.f_5))
						{
							uParam0->f_485.f_5 = aggregate_func_2045("MGPKR_UI_PRETURN_CHECK", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_5, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 1)
							{
								aggregate_func_3776(uParam0->f_485.f_5, 1);
							}
						}
						if (!aggregate_func_2875(uParam0->f_485.f_6))
						{
							uParam0->f_485.f_6 = aggregate_func_2045("MGPKR_UI_PRETURN_FOLD", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_6, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 5)
							{
								aggregate_func_3776(uParam0->f_485.f_6, 1);
							}
						}
						if (!aggregate_func_2875(uParam0->f_485.f_7))
						{
							uParam0->f_485.f_7 = aggregate_func_2045("MGPKR_UI_PRETURN_CHECK_FOLD", joaat("INPUT_MINIGAME_POKER_CHECK_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_7, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 2)
							{
								aggregate_func_3776(uParam0->f_485.f_7, 1);
							}
						}
						if (!aggregate_func_2875(uParam0->f_485.f_8))
						{
							uParam0->f_485.f_8 = aggregate_func_2045("MGPKR_UI_PRETURN_CANCEL", joaat("INPUT_MINIGAME_QUIT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_8, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 0)
							{
								aggregate_func_3776(uParam0->f_485.f_8, 1);
							}
						}
						if (aggregate_func_2875(uParam0->f_494))
						{
							aggregate_func_4823(uParam0->f_494, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_495))
						{
							aggregate_func_4823(uParam0->f_495, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_499))
						{
							aggregate_func_4823(uParam0->f_499, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_500))
						{
							aggregate_func_4823(uParam0->f_500, 0, 1);
						}
						if (aggregate_func_2973(uParam0->f_485.f_5, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1460(uParam0, 1, 0);
							func_1456(uParam0, 2);
							bVar0 = true;
						}
						else if (aggregate_func_2973(uParam0->f_485.f_6, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1460(uParam0, 5, 0);
							func_1456(uParam0, 2);
							bVar0 = true;
						}
						else if (aggregate_func_2973(uParam0->f_485.f_7, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1460(uParam0, 2, 0);
							func_1456(uParam0, 2);
							bVar0 = true;
						}
						else if (aggregate_func_2973(uParam0->f_485.f_8, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1461(uParam0);
							func_1456(uParam0, 2);
							bVar0 = true;
						}
					}
					break;
				case 3:
					if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_HELP_NEXT")))
					{
						func_1456(uParam0, 1);
						bVar0 = true;
					}
					else if (func_1457(uParam0, uParam1, uParam2))
					{
						if (func_1455(uParam1, uParam0->f_485.f_1))
						{
							func_1456(uParam0, 2);
						}
						else
						{
							func_1456(uParam0, 3);
						}
						bVar0 = true;
					}
					else
					{
						HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(635838715, "MGPKR_UI_PRETURN_MENU_MP", 1, 0, 0, 0);
						if (!aggregate_func_2875(uParam0->f_485.f_5))
						{
							uParam0->f_485.f_5 = aggregate_func_2045("MGPKR_UI_PRETURN_CALL_ANY", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_5, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 3)
							{
								aggregate_func_3776(uParam0->f_485.f_5, 1);
							}
						}
						if (!aggregate_func_2875(uParam0->f_485.f_6))
						{
							uParam0->f_485.f_6 = aggregate_func_2045("MGPKR_UI_PRETURN_FOLD", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_6, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 5)
							{
								aggregate_func_3776(uParam0->f_485.f_6, 1);
							}
						}
						if (!aggregate_func_2875(uParam0->f_485.f_8))
						{
							uParam0->f_485.f_8 = aggregate_func_2045("MGPKR_UI_PRETURN_CANCEL", joaat("INPUT_MINIGAME_QUIT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2079(uParam0->f_485.f_8, 635838715, 0, 1);
							if (uParam0->f_485.f_2 == 0)
							{
								aggregate_func_3776(uParam0->f_485.f_8, 1);
							}
						}
						if (aggregate_func_2875(uParam0->f_494))
						{
							aggregate_func_4823(uParam0->f_494, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_495))
						{
							aggregate_func_4823(uParam0->f_495, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_499))
						{
							aggregate_func_4823(uParam0->f_499, 0, 1);
						}
						if (aggregate_func_2875(uParam0->f_500))
						{
							aggregate_func_4823(uParam0->f_500, 0, 1);
						}
						if (aggregate_func_2973(uParam0->f_485.f_5, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1460(uParam0, 3, 0);
							func_1456(uParam0, 3);
							bVar0 = true;
						}
						else if (aggregate_func_2973(uParam0->f_485.f_6, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1460(uParam0, 5, 0);
							func_1456(uParam0, 3);
							bVar0 = true;
						}
						else if (aggregate_func_2973(uParam0->f_485.f_8, 1))
						{
							AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
							func_1461(uParam0);
							func_1456(uParam0, 3);
							bVar0 = true;
						}
					}
					break;
			}
		}
	}
}

void func_986(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 10);
		func_1121(uParam0, iParam1, 30);
		func_469(uParam0, iParam1, 2);
		if (!uParam0->f_40)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "PeekEnter");
		}
	}
}

void func_987(var uParam0)
{
	uParam0->f_1453++;
}

bool func_988(var uParam0, int iParam1, int iParam2)
{
	return ((uParam0->f_818[iParam1 /*63*/])->f_48 || (iParam2 && (uParam0->f_818[iParam1 /*63*/])->f_47));
}

void func_989(var uParam0, int iParam1)
{
	if (!(uParam0->f_818[iParam1 /*63*/])->f_47 && !(uParam0->f_818[iParam1 /*63*/])->f_48)
	{
		(uParam0->f_818[iParam1 /*63*/])->f_48 = 1;
	}
}

void func_990(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			if ((uParam0->f_1475.f_17[iVar2 /*9*/])->f_3 != iParam1)
			{
				(uParam0->f_1475.f_17[iVar2 /*9*/])->f_2 = uParam0->f_416;
				(uParam0->f_1475.f_17[iVar2 /*9*/])->f_3 = iParam1;
			}
		}
	}
}

bool func_991(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4971(uParam0, iParam1) == 1)
	{
		iVar0 = func_360(uParam0, iParam1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else
			{
				iVar2 = iVar1;
				if (uParam0->f_416 >= (uParam0->f_1475.f_17[iVar2 /*9*/])->f_2)
				{
					*bParam2 = (uParam0->f_1475.f_17[iVar2 /*9*/])->f_3;
					return true;
				}
			}
		}
	}
	*bParam2 = 0;
	return false;
}

void func_992(var uParam0, var uParam1)
{
	if (uParam1->f_1870 != -1)
	{
		if (!func_909(&(uParam0->f_2839), uParam1->f_1870))
		{
			func_1462(uParam1);
		}
	}
}

void func_993(var uParam0)
{
	if (func_207(&(uParam0->f_2839), uParam0->f_151.f_2172) && func_207(&(uParam0->f_2839), uParam0->f_151.f_2173))
	{
		if (!aggregate_func_4260(&(uParam0->f_151.f_2174)) || aggregate_func_4298(&(uParam0->f_151.f_2174)) >= 0f)
		{
			if (func_1079(&(uParam0->f_2839), uParam0->f_151.f_2172))
			{
				func_1463(&(uParam0->f_2839), uParam0->f_151.f_2172, 1, uParam0->f_151.f_2173);
				aggregate_func_4284(&(uParam0->f_151.f_2174), -100000f);
			}
		}
		if (!aggregate_func_4260(&(uParam0->f_151.f_2177)) || aggregate_func_4298(&(uParam0->f_151.f_2177)) >= 0f)
		{
			if (func_1079(&(uParam0->f_2839), uParam0->f_151.f_2173))
			{
				func_1463(&(uParam0->f_2839), uParam0->f_151.f_2173, 0, uParam0->f_151.f_2172);
				aggregate_func_4284(&(uParam0->f_151.f_2177), -100000f);
			}
		}
	}
}

void func_994(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;

	if (uParam0->f_2839.f_40)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam1->f_2066[iVar0] != -1)
		{
			if (func_207(&(uParam0->f_2839), iVar0) && func_1079(&(uParam0->f_2839), iVar0))
			{
				if (aggregate_func_4298(uParam1->f_2080[iVar0 /*3*/]) >= 0f)
				{
					func_1463(&(uParam0->f_2839), iVar0, &(uParam1->f_2073[iVar0]), &(uParam1->f_2066[iVar0]));
					func_1464(uParam1, iVar0);
				}
			}
			else
			{
				func_1464(uParam1, iVar0);
			}
		}
		iVar0++;
	}
	if (uParam1->f_1547 == 4)
	{
		iVar1 = func_1465(&(uParam1->f_416), uParam1->f_416.f_6, 0, 1, 0);
		iVar2 = func_750(&(uParam1->f_416));
		iVar3 = func_1248(&(uParam1->f_416));
		iVar4 = func_1247(&(uParam1->f_416));
	}
	if (uParam1->f_1547 == 5)
	{
		iVar5 = func_1465(&(uParam1->f_416), uParam1->f_416.f_3, 0, 1, 0);
	}
	uParam1->f_2001 = 0;
	iVar7 = 0;
	while (iVar7 < 6)
	{
		bVar6 = true;
		if ((&uParam1->f_416.f_39[iVar7 /*56*/] != -1 && &uParam0->f_2839.f_818[iVar7 /*63*/] != 0) && !MISC::IS_BIT_SET(uParam0->f_151.f_1617, iVar7))
		{
			switch (uParam1->f_1547)
			{
				case 1:
				case 2:
					if (uParam1->f_1997 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 3:
					if (uParam1->f_1997 == iVar7)
					{
						bVar6 = false;
					}
					break;
				case 4:
					if (iVar2 == 1 && func_433(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					else if ((iVar3 == 0 || uParam1->f_1548 == 41) || uParam1->f_1548 == 6)
					{
						if (iVar4 == 0 || uParam1->f_416.f_2 == 3)
						{
							if (func_907(&(uParam1->f_416), iVar7))
							{
								bVar6 = false;
							}
						}
						else if (uParam1->f_416.f_2 < 3)
						{
							if (iVar7 == uParam1->f_1997)
							{
								bVar6 = false;
							}
						}
					}
					else if ((iVar7 == uParam1->f_416.f_6 && !(uParam1->f_1548 == 30 && aggregate_func_4298(&(uParam1->f_1549)) > 5f)) || (iVar7 == iVar1 && !(uParam1->f_1548 == 30 && aggregate_func_4298(&(uParam1->f_1549)) > 10f)))
					{
						bVar6 = false;
					}
					break;
				case 5:
					if (uParam1->f_1997 == iVar7 || (iVar5 == iVar7 && uParam1->f_1548 == 27))
					{
						bVar6 = false;
					}
					break;
				case 6:
					if (uParam1->f_1997 == iVar7 || func_907(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 7:
				case 8:
				case 9:
					if (func_907(&(uParam1->f_416), iVar7))
					{
						bVar6 = false;
					}
					break;
				case 10:
					if ((uParam1->f_1997 == iVar7 || aggregate_func_5974(&(uParam0->f_2839), iVar7) == 2) || aggregate_func_7212(uParam1))
					{
						bVar6 = false;
					}
					break;
				default:
					bVar6 = false;
					break;
			}
			if (bVar6)
			{
				MISC::SET_BIT(&(uParam1->f_2001), iVar7);
			}
		}
		iVar7++;
	}
	func_1466(&(uParam0->f_2839), uParam1->f_2001, uParam1->f_9);
}

void func_995(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 1:
			if (aggregate_func_4628(&(uParam2->f_3), 1f))
			{
				if ((!func_207(&(uParam0->f_2839), uParam2->f_1) || !func_909(&(uParam0->f_2839), uParam2->f_1)) || aggregate_func_4628(&(uParam2->f_3), 5f))
				{
					func_1467(uParam0, uParam2->f_2, uParam2->f_1);
					func_1468(uParam1);
				}
			}
			break;
		case 2:
			if (aggregate_func_4628(&(uParam2->f_3), 1f))
			{
				if ((!func_207(&(uParam0->f_2839), uParam2->f_1) || !func_909(&(uParam0->f_2839), uParam2->f_1)) || aggregate_func_4628(&(uParam2->f_3), 5f))
				{
					func_1469(uParam0, uParam2->f_1);
					func_1468(uParam1);
				}
			}
			break;
	}
}

void func_996()
{
	if (!aggregate_func_5174(67108864))
	{
		aggregate_func_5122(67108864);
	}
}

void func_997(var uParam0)
{
	switch (uParam0->f_1403)
	{
		case 0:
			break;
		case 2:
			break;
		case 4:
			func_1002(uParam0, 2);
			break;
	}
}

bool func_998(var uParam0, bool bParam1)
{
	if ((uParam0->f_58 == 2 || (uParam0->f_58 == 3 && bParam1)) || uParam0->f_58 == 4)
	{
		return true;
	}
	return false;
}

void func_1000(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, bParam1);
}

void func_1001(var uParam0)
{
	if (uParam0->f_485 != 0)
	{
		if (uParam0->f_485 != 1)
		{
			func_1456(uParam0, 1);
		}
	}
}

void func_1002(var uParam0, int iParam1)
{
	if (uParam0->f_1404 < iParam1)
	{
		uParam0->f_1404 = iParam1;
	}
}

bool func_1003(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		iVar0 = uParam0->f_1396 + 1;
		iVar1 = (uParam0->f_1388.f_2 - iVar0);
		return iVar1 > 0;
	}
	return false;
}

void func_1004(var uParam0, var uParam1)
{
	if (uParam1->f_1552 != 0)
	{
	}
	else
	{
		aggregate_func_7245(uParam0);
	}
}

bool func_1005(var uParam0)
{
	int iVar0;
	var uVar1;

	if (MINIGAME::_0x3B31732FADE5BAF3() >= 15)
	{
		if (func_194(uParam0, 0, 0, 0, &iVar0, &uVar1))
		{
			if (iVar0 >= 10)
			{
				return true;
			}
		}
	}
	return false;
}

char* func_1006(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = (MISC::ABSI(((iParam0 - iParam1) - 6)) % 6) + 1;
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_NAME", sVar0);
}

void func_1007(var uParam0, int iParam1)
{
	if (!&uParam0->f_409[iParam1])
	{
		return;
	}
	*(uParam0->f_71[iParam1 /*28*/]) = { *(uParam0->f_240[iParam1 /*28*/]) };
	uParam0->f_240[iParam1 /*28*/] = 0;
	StringCopy(&((uParam0->f_240[iParam1 /*28*/])->f_1), "", 128);
	(uParam0->f_240[iParam1 /*28*/])->f_17 = 0;
	(uParam0->f_240[iParam1 /*28*/])->f_18 = 255;
	(uParam0->f_240[iParam1 /*28*/])->f_26 = 0;
	(uParam0->f_240[iParam1 /*28*/])->f_27 = 0;
	uParam0->f_409[iParam1] = 0;
}

void func_1008(var uParam0, int iParam1)
{
	if (&uParam0->f_71[iParam1 /*28*/] == 0)
	{
	}
	else
	{
		uParam0->f_71[iParam1 /*28*/] = 0;
		StringCopy(&((uParam0->f_71[iParam1 /*28*/])->f_1), "", 128);
		(uParam0->f_71[iParam1 /*28*/])->f_17 = 0;
		(uParam0->f_71[iParam1 /*28*/])->f_18 = 255;
		(uParam0->f_71[iParam1 /*28*/])->f_26 = 0;
		(uParam0->f_71[iParam1 /*28*/])->f_27 = 0;
	}
}

void func_1009(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (!func_433(uParam1, iParam2))
	{
		*uParam3 = 6;
		*uParam4 = 0;
		*uParam5 = 0;
	}
	else
	{
		func_1473(uParam0, iParam2, aggregate_func_5974(uParam1, iParam2), uParam3, uParam4, uParam5);
	}
}

void func_1011(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if ((uParam0->f_617[iParam1 /*9*/])->f_8 != 7)
	{
		(uParam0->f_617[iParam1 /*9*/])->f_8 = 7;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar0 = &(uParam0->f_617[iParam1 /*9*/])->f_5[iVar1];
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (bParam2)
				{
					if (ENTITY::_0x0B7CB1300CBFE19C(iVar0, 1))
					{
						TASK::STOP_ANIM_PLAYBACK(iVar0, 2, false);
					}
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(iVar0, true);
					PHYSICS::ACTIVATE_PHYSICS(iVar0);
					ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 4f);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((uParam0->f_617[iParam1 /*9*/])->f_5[iVar1]);
			}
			(uParam0->f_617[iParam1 /*9*/])->f_5[iVar1] = 0;
			iVar1++;
		}
	}
}

void func_1012(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iParam1])))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0->f_672.f_11[iParam1]);
		uParam0->f_672.f_11[iParam1] = 0;
	}
}

bool func_1013(var uParam0)
{
	if (uParam0->f_128 != -1 || uParam0->f_129 != -1)
	{
		return true;
	}
	return false;
}

void func_1014(var uParam0, int iParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		aggregate_func_897(&(uParam0->f_136));
	}
	if (uParam0->f_128 != -1)
	{
		if (iParam1 > 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	uParam0->f_128 = -1;
	uParam0->f_129 = -1;
	uParam0->f_127 = -1;
}

void func_1015(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		func_1475(uParam0, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_163 = 0;
}

void func_1016(var uParam0, int iParam1)
{
	func_1476(uParam0, iParam1, "");
	func_1477(uParam0, iParam1, "");
}

void func_1023(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	var uVar15;

	aggregate_func_5627(uParam0, iParam1, "OLD", "PWORLD__CREATE_PLAYER_STACKS_FOR_POPULATE()");
	aggregate_func_5627(uParam0, iParam1, "OLD", 0);
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	uVar15 = 4;
	if (bParam4)
	{
		func_1389((iParam2 + iParam3), &uVar0, &uVar10);
		func_1304(iParam2, iParam3, &uVar10, &uVar15);
		func_1485(uParam0, iParam1, &uVar0);
		func_1390(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		func_1486(uParam0, iParam1, &uVar0, &uVar15, bParam5);
	}
	else
	{
		func_1389(iParam2, &uVar0, &uVar10);
		func_1390(uParam0, iParam1, &uVar0, &uVar10, bParam5);
		func_1389(iParam3, &uVar5, &uVar15);
		func_1486(uParam0, iParam1, &uVar5, &uVar15, bParam5);
		func_1485(uParam0, iParam1, &uVar5);
	}
	aggregate_func_5627(uParam0, iParam1, "NEW", 0);
	aggregate_func_5627(uParam0, iParam1, "NEW", 0);
}

int func_1024(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iParam1])))
	{
		OBJECT::DELETE_OBJECT(uParam0->f_672.f_11[iParam1]);
	}
	uParam0->f_672.f_11[iParam1] = 0;
	if (!func_470(uParam0, *(uParam0->f_672[iParam1 /*2*/]), &iVar0))
	{
		iVar0 = uParam0->f_694;
		if (bParam3)
		{
		}
	}
	if (!func_1487(uParam0, iParam1, iParam2, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	if (!bParam4)
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar7, false);
	}
	uParam0->f_672.f_11[iParam1] = iVar7;
	return 1;
}

void func_1025(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	(uParam0->f_617[iParam1 /*9*/])->f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_617[iParam1 /*9*/])->f_5[iVar7])))
		{
			OBJECT::DELETE_OBJECT((uParam0->f_617[iParam1 /*9*/])->f_5[iVar7]);
		}
		(uParam0->f_617[iParam1 /*9*/])->f_5[iVar7] = 0;
		if (!func_470(uParam0, *((*uParam0->f_617[iParam1 /*9*/])[iVar7 /*2*/]), &iVar0))
		{
			iVar0 = uParam0->f_694;
			if (bParam4)
			{
			}
		}
		if (iParam2 != 5)
		{
			if (!func_1488(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @180; //curOff = 153
				if (!func_1488(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						(uParam0->f_617[iParam1 /*9*/])->f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

void func_1026(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	(uParam0->f_617[iParam1 /*9*/])->f_8 = iParam2;
	iVar7 = 0;
	while (iVar7 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_617[iParam1 /*9*/])->f_5[iVar7])))
		{
			OBJECT::DELETE_OBJECT((uParam0->f_617[iParam1 /*9*/])->f_5[iVar7]);
		}
		(uParam0->f_617[iParam1 /*9*/])->f_5[iVar7] = 0;
		iVar0 = uParam0->f_694;
		if (iParam2 != 5)
		{
			if (!func_1488(uParam0, iParam1, iVar7, iParam2, &vVar1, &vVar4, 1))
			{
			}
			else
			{
				Jump @148; //curOff = 121
				if (!func_1488(uParam0, iParam3, iVar7, iParam2, &vVar1, &vVar4, 1))
				{
				}
				else
				{
					iVar8 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
					{
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar8, vVar1, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(iVar8, vVar4, 2, true);
						ENTITY::SET_ENTITY_COLLISION(iVar8, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
						(uParam0->f_617[iParam1 /*9*/])->f_5[iVar7] = iVar8;
					}
				}
			}
			iVar7++;
		}
	}
}

bool func_1028(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9)
{
	int iVar0;
	char* sVar1;

	iParam3 = func_434(&iParam2, iParam3);
	if (&uParam0->f_818[iParam1 /*63*/] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else if (uParam0->f_41 == 2)
	{
	}
	else
	{
		if (!PED::IS_PED_A_PLAYER(iParam2))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				PED::SET_PED_CONFIG_FLAG(iParam2, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, false, true);
				PED::SET_PED_CONFIG_FLAG(iParam2, 171, false);
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				return false;
			}
		}
		uParam0->f_818[iParam1 /*63*/] = iParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_1 = 0;
		(uParam0->f_818[iParam1 /*63*/])->f_2 = 0;
		(uParam0->f_818[iParam1 /*63*/])->f_3 = 0;
		(uParam0->f_818[iParam1 /*63*/])->f_4 = iParam3;
		(uParam0->f_818[iParam1 /*63*/])->f_5 = iParam4;
		(uParam0->f_818[iParam1 /*63*/])->f_6 = iParam5;
		(uParam0->f_818[iParam1 /*63*/])->f_7 = iParam6;
		(uParam0->f_818[iParam1 /*63*/])->f_52 = iParam8;
		(uParam0->f_818[iParam1 /*63*/])->f_61 = iParam7;
		(uParam0->f_818[iParam1 /*63*/])->f_8 = 1;
		(uParam0->f_818[iParam1 /*63*/])->f_9 = 0;
		aggregate_func_4284(&((uParam0->f_818[iParam1 /*63*/])->f_16), -MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 35f));
		uParam0->f_1197++;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, true);
		PED::SET_PED_CAN_RAGDOLL(iParam2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam2, WEAPON::_0x08FF1099ED2E6E21(iParam2), false, 0, false, false);
		if (!PED::IS_PED_A_PLAYER(iParam2))
		{
			PED::SET_PED_CONFIG_FLAG(iParam2, 453, true);
		}
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
			{
				WEAPON::_0x67E21ACC5C0C970C(iParam2, iVar0, false);
			}
			iVar0++;
		}
		if (PED::IS_PED_A_PLAYER(iParam2))
		{
			aggregate_func_5464(1900014401, iParam2, 0, 1);
		}
		else
		{
			PED::_0xD710A5007C2AC539(iParam2, -1229581779, 1);
			PED::_0xCC8CA3E88256E58F(iParam2, 0, 1, 1, 1, false);
		}
		func_469(uParam0, iParam1, 0);
		func_1491(iParam7, iParam2, sParam9, &((uParam0->f_818[iParam1 /*63*/])->f_62));
		if (iParam7 == PLAYER::PLAYER_ID())
		{
			aggregate_func_5464(-859971527, iParam2, 0, 1);
		}
		else
		{
			aggregate_func_1329(iParam7, 1);
		}
		if (uParam0->f_807 != -1)
		{
			ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_807, iParam2);
			sVar1 = func_1493(func_1492(iParam6));
			if ((iParam6 == 92 || MISC::IS_STRING_NULL_OR_EMPTY(sVar1)) || MISC::ARE_STRINGS_EQUAL(sVar1, "unknown"))
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_807, iParam2, "");
			}
			else
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_807, iParam2, sVar1);
			}
		}
		if (uParam0->f_41 != 0)
		{
			func_1391(uParam0, iParam1);
		}
		return true;
	}
	return false;
}

void func_1029(var uParam0, int iParam1)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 0)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 6);
		if (!uParam0->f_40)
		{
			iVar0 = &uParam0->f_818[iParam1 /*63*/];
			WEAPON::_0xFCCC886EDE3C63EC(iVar0, 2, 1);
			ENTITY::SET_ENTITY_ALPHA(&(uParam0->f_818[iParam1 /*63*/]), 0, false);
			func_452(uParam0, iParam1, "sit_enter_right", 2, 0f, 1040187392 /* Float: 0.125f */, 0, 1);
			func_1125(uParam0, iParam1, 0);
			func_1121(uParam0, iParam1, 6);
		}
		func_468(uParam0, iParam1, 1);
		func_1222(uParam0, iParam1, 0);
		func_469(uParam0, iParam1, 0);
		func_1121(uParam0, iParam1, 6);
	}
}

void func_1030(var uParam0, int iParam1)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 0)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 5);
		if (!uParam0->f_40)
		{
			iVar0 = &uParam0->f_818[iParam1 /*63*/];
			WEAPON::_0xFCCC886EDE3C63EC(iVar0, 2, 1);
			func_1494(uParam0, iParam1);
		}
		func_468(uParam0, iParam1, 1);
		func_1222(uParam0, iParam1, 0);
		aggregate_func_6629(uParam0, iParam1, 1);
		func_469(uParam0, iParam1, 0);
		func_1121(uParam0, iParam1, 44);
	}
}

void func_1031(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 3);
		if (!uParam0->f_40)
		{
			fVar0 = 0f;
			if (bParam2)
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.75f);
			}
			func_452(uParam0, iParam1, "sit_enter_left", 2, 0f, 1040187392 /* Float: 0.125f */, fVar0, !bParam2);
		}
		func_468(uParam0, iParam1, 1);
		func_1222(uParam0, iParam1, 0);
		func_469(uParam0, iParam1, 0);
		func_1125(uParam0, iParam1, 0);
		func_1121(uParam0, iParam1, 6);
	}
}

void func_1033(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;

	if (func_200(uParam1, iParam2))
	{
		func_1377(&(uParam0->f_2335), iParam2);
		aggregate_func_9387(&(uParam0->f_2335), iParam2, iParam2 == uParam1->f_3);
		func_1047(&(uParam0->f_2335), iParam2, 0);
		func_1192(&(uParam0->f_2335), iParam2, func_618(uParam0, iParam2));
		if (func_1205(uParam1, iParam2))
		{
			bVar0 = (uParam0->f_151.f_1547 == 2 || uParam0->f_151.f_1547 == 10);
			if (func_618(uParam0, iParam2) == 0)
			{
				func_1036(&(uParam0->f_2335), iParam2, func_1193());
				func_1040(&(uParam0->f_2335), iParam2, !bVar0);
			}
			else
			{
				func_1036(&(uParam0->f_2335), iParam2, func_1194());
				func_1040(&(uParam0->f_2335), iParam2, !bVar0);
			}
		}
	}
	if (bParam3)
	{
		func_1034(&(uParam0->f_2335));
	}
}

void func_1034(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!uParam0->f_292)
	{
		func_1495(uParam0);
		iVar0 = uParam0->f_291;
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_1496(uParam0, iVar0);
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 += 6;
			}
			iVar1++;
		}
		uParam0->f_292 = 1;
	}
}

char* func_1035(var uParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	struct<16> Var16;

	if (iParam2 > 0)
	{
		if (iParam1 == uParam0->f_151.f_9)
		{
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_YOU_ACT", func_1437(&(uParam0->f_2335), iParam2));
		}
		else
		{
			Var0 = { func_436(&(uParam0->f_151), iParam1, 0, 1) };
			return MISC::_CREATE_VAR_STRING(34, "MGPKR_INFO_THEY_ACT", func_1437(&(uParam0->f_2335), iParam2), &Var0);
		}
	}
	if (iParam1 == uParam0->f_151.f_9)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_YOU_ACT_0");
	}
	Var16 = { func_436(&(uParam0->f_151), iParam1, 0, 1) };
	return MISC::_CREATE_VAR_STRING(10, "MGPKR_INFO_THEY_ACT_0", &Var16);
}

void func_1036(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		MemCopy(&((uParam0->f_307[iParam1 /*20*/])->f_3), {aggregate_func_4982(sParam2)}, 16);
		if (!(uParam0->f_307[iParam1 /*20*/])->f_19)
		{
			aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], sParam2);
		}
	}
}

char* func_1038(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_BET", func_1437(uParam0, iParam1));
}

char* func_1039()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_FOLD_DONE");
}

void func_1040(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], !bParam2);
	}
}

struct<2> func_1041(var uParam0, int iParam1)
{
	return *(uParam0->f_15[iParam1 /*2*/]);
}

void func_1042(var uParam0, int iParam1, struct<2> Param2, int iParam4, bool bParam5)
{
	char[] cVar0[8];

	if (bParam5)
	{
	}
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(uParam0->f_295), iParam1);
			*(uParam0->f_295.f_1[iParam1 /*2*/]) = { Param2 };
		}
		if (iParam4 == uParam0->f_294)
		{
			func_1499(&Param2, &cVar0);
			func_1500(uParam0, iParam1, &cVar0);
		}
	}
}

void func_1045(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		uParam0->f_428[iParam1 /*2*/] = 1;
		(uParam0->f_428[iParam1 /*2*/])->f_1 = iParam2;
		if (iParam3 <= 1)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_POT"));
		}
		else if (iParam1 == 0)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_MAINPOT"));
		}
		else if (iParam1 == 1 && iParam3 == 2)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_SIDEPOT"));
		}
		else if (iParam1 == 1)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_1ST_SIDEPOT"));
		}
		else if (iParam1 == 2)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_2ND_SIDEPOT"));
		}
		else if (iParam1 == 3)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_3RD_SIDEPOT"));
		}
		else if (iParam1 == 4)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_4TH_SIDEPOT"));
		}
		else if (iParam1 == 5)
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_5TH_SIDEPOT"));
		}
		else
		{
			func_1476(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_6TH_SIDEPOT"));
		}
		func_1477(uParam0, iParam1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", func_1437(uParam0, iParam2)));
	}
}

int func_1046(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_617(uParam0, iVar1))
		{
			iVar0 = (iVar0 + aggregate_func_5974(uParam0, iVar1));
		}
		iVar1++;
	}
	return iVar0;
}

void func_1047(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
				break;
			case 1:
				func_1502(uParam0->f_34[iParam1 /*21*/], 1);
				break;
		}
	}
}

char* func_1048()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_WAIT_REVEAL");
}

void func_1049(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_1503(uParam0->f_34[iParam1 /*21*/], iVar0, "");
			iVar0++;
		}
	}
}

void func_1050(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	char[] cVar0[8];

	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else if (iParam2 < 0 || iParam2 >= 2)
	{
	}
	else
	{
		func_1499(&uParam3, &cVar0);
		func_1503(uParam0->f_34[iParam1 /*21*/], iParam2, &cVar0);
	}
}

void func_1051(var uParam0, int iParam1, int iParam2)
{
	MISC::CLEAR_BIT(&((uParam0->f_307[iParam1 /*20*/])->f_1), iParam2);
}

void func_1052(var uParam0, int iParam1, int iParam2)
{
	MISC::SET_BIT(&((uParam0->f_307[iParam1 /*20*/])->f_1), iParam2);
}

void func_1053(var uParam0, var uParam1)
{
	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (!func_1013(uParam0))
	{
		return;
	}
	uParam0->f_127 = uParam1;
}

void func_1054(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(&(uParam0->f_124[(iParam1 / 32)]), (iParam1 % 32)))
	{
		return;
	}
	if (uParam0->f_129 != -1)
	{
		aggregate_func_897(&(uParam0->f_136));
	}
	func_533(uParam0->f_131, (uParam0->f_134 + fParam2), *(uParam0->f_25[iParam1 /*12*/]), (uParam0->f_25[iParam1 /*12*/])->f_3, &vVar0, &vVar3);
	aggregate_func_738(&(uParam0->f_136), vVar0, vVar3, (uParam0->f_25[iParam1 /*12*/])->f_6, (uParam0->f_25[iParam1 /*12*/])->f_7, (uParam0->f_25[iParam1 /*12*/])->f_8, BUILTIN::TO_FLOAT((uParam0->f_25[iParam1 /*12*/])->f_9), (uParam0->f_25[iParam1 /*12*/])->f_10, 0, 0, -1f, (uParam0->f_25[iParam1 /*12*/])->f_11 == 0f, iParam3, (uParam0->f_25[iParam1 /*12*/])->f_11);
	uParam0->f_128 = -1;
	uParam0->f_129 = iParam1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

void func_1055(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;

	if (uParam0->f_126 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(&(uParam0->f_122[(iParam1 / 32)]), (iParam1 % 32)))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
	{
		return;
	}
	iVar0 = 0;
	if (iParam3 > 0)
	{
		if (uParam0->f_128 == -1 && uParam0->f_129 == -1)
		{
			iVar0 = iParam3;
			iParam3 = 0;
		}
		else if (uParam0->f_129 != -1)
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_136))
			{
				func_1505(uParam0->f_136, uParam0->f_135);
			}
			else
			{
				iParam3 = 0;
			}
		}
		else if (uParam0->f_128 != -1)
		{
			func_1505(uParam0->f_135, uParam0->f_135);
		}
	}
	if (uParam0->f_129 != -1)
	{
		aggregate_func_897(&(uParam0->f_136));
	}
	func_533(uParam0->f_131, (uParam0->f_134 + fParam2), ((*uParam0)[iParam1 /*12*/])->f_8, 0f, 0f, ((*uParam0)[iParam1 /*12*/])->f_11, &vVar1, &vVar4);
	func_533(vVar1, vVar4.z, *((*uParam0)[iParam1 /*12*/]), ((*uParam0)[iParam1 /*12*/])->f_3, &vVar7, &vVar10);
	CAM::SET_CAM_ACTIVE(uParam0->f_135, true);
	CAM::SET_CAM_PARAMS(uParam0->f_135, vVar7, vVar10, ((*uParam0)[iParam1 /*12*/])->f_6, iParam3, iParam4, iParam5, 2, 1, 0);
	CAM::SHAKE_CAM(uParam0->f_135, "HAND_SHAKE", ((*uParam0)[iParam1 /*12*/])->f_7);
	if (iVar0 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(true, true, iVar0, true, false, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	uParam0->f_128 = iParam1;
	uParam0->f_129 = -1;
	uParam0->f_130 = fParam2;
	uParam0->f_127 = -1;
}

void func_1062(var uParam0, int iParam1, bool bParam2)
{
	(uParam0->f_818[iParam1 /*63*/])->f_54 = bParam2;
	if (bParam2)
	{
		PED::SET_PED_LEG_IK_MODE(&(uParam0->f_818[iParam1 /*63*/]), 0);
	}
	else if (PED::IS_PED_A_PLAYER(&(uParam0->f_818[iParam1 /*63*/])))
	{
		PED::SET_PED_LEG_IK_MODE(&(uParam0->f_818[iParam1 /*63*/]), 2);
	}
	else
	{
		PED::SET_PED_LEG_IK_MODE(&(uParam0->f_818[iParam1 /*63*/]), 1);
	}
}

void func_1064(var uParam0, int iParam1)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_53)
	{
		(uParam0->f_818[iParam1 /*63*/])->f_53 = 0;
		ANIMSCENE::_0xBC781D24AA11F179(&(uParam0->f_818[iParam1 /*63*/]));
	}
}

void func_1065(var uParam0, int iParam1)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_5 >= 2)
	{
	}
	else
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(&(uParam0->f_818[iParam1 /*63*/]));
	}
}

int func_1066(int iParam0, int iParam1)
{
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(*iParam1))
	{
		HUD::REMOVE_MP_GAMER_TAG(iParam1);
	}
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	aggregate_func_7864(iParam0);
	func_1510(iParam0);
	return 1;
}

void func_1069(var uParam0, int iParam1)
{
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_818[iParam1 /*63*/])->f_60);
	}
	(uParam0->f_818[iParam1 /*63*/])->f_60 = -1;
}

void func_1072(var uParam0)
{
	uParam0->f_442 = 0;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_4 = 0;
	aggregate_func_2878(&(uParam0->f_442.f_20), 1, 1);
	aggregate_func_2878(&(uParam0->f_442.f_21), 1, 1);
	aggregate_func_2878(&(uParam0->f_442.f_22), 1, 1);
}

void func_1075(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], "");
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], "");
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], "");
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], "");
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 0);
		func_1515(uParam0->f_34[iParam1 /*21*/], -1);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 0);
		if (!uParam0->f_293)
		{
			func_1517(uParam0, iParam1);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_1503(uParam0->f_34[iParam1 /*21*/], iVar0, "");
			iVar0++;
		}
		func_586(uParam0, iParam1);
	}
}

int func_1077(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (iParam1 == 0)
	{
		uParam0->f_295 = 0;
	}
	if (iParam1 == uParam0->f_294)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_1500(uParam0, iVar0, "");
			iVar0++;
		}
	}
	return 1;
}

void func_1078(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_428[iVar0 /*2*/] = 0;
		(uParam0->f_428[iVar0 /*2*/])->f_1 = 0;
		func_1476(uParam0, iVar0, "");
		func_1477(uParam0, iVar0, "");
		iVar0++;
	}
}

bool func_1079(var uParam0, int iParam1)
{
	return (uParam0->f_818[iParam1 /*63*/])->f_57 == 0;
}

void func_1081(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(uParam0->f_818[iParam1 /*63*/])->f_3 = iParam3;
	(uParam0->f_818[iParam1 /*63*/])->f_2 = iParam2;
}

int func_1082(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_normal_neutral";
		case 1:
			return "concentration_base";
		case 2:
			return "poker_face";
		default:
			break;
	}
	return "Unknown";
}

bool func_1117(var uParam0, char* sParam1)
{
	if (!uParam0->f_49)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1))
		{
			uParam0->f_49 = 1;
		}
	}
	return (uParam0->f_49 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0));
}

bool func_1118(var uParam0, int iParam1, int iParam2)
{
	if (!(uParam0->f_818[iParam1 /*63*/])->f_46)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_818[iParam1 /*63*/]), iParam2))
		{
			func_1135(uParam0, iParam1);
			return true;
		}
	}
	return false;
}

bool func_1119(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];

	iVar0 = (uParam0->f_818[iParam1 /*63*/])->f_4;
	iVar1 = &uParam0->f_818[iParam1 /*63*/];
	iVar0 = func_434(&iVar1, iVar0);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		StringCopy(&cVar2, "clipset@", 64);
		StringConCat(&cVar2, uParam0->f_1274[iVar0 /*8*/], 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, &cVar2, sParam2, 1) && ENTITY::_0x627520389E288A73(iVar1, &cVar2, sParam2) < fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_1120(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_818[iParam1 /*63*/]), 1426724047))
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/]))) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(&(uParam0->f_818[iParam1 /*63*/])))
		{
			return true;
		}
	}
	return false;
}

void func_1121(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_818[iParam1 /*63*/])->f_9 = iParam2;
	(uParam0->f_818[iParam1 /*63*/])->f_49 = 0;
	aggregate_func_4283(&((uParam0->f_818[iParam1 /*63*/])->f_13));
}

void func_1122(var uParam0, int iParam1)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_3)
	{
		func_1081(uParam0, iParam1, (uParam0->f_818[iParam1 /*63*/])->f_1, 0);
	}
}

int func_1123(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_1533(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_1534(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_1535(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					aggregate_func_2017(iVar2);
					ITEMSET::_0x20A4BF0E09BEE146(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	aggregate_func_2017(iVar2);
	ITEMSET::_0x20A4BF0E09BEE146(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_1124(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vector3 vVar0;

	vVar0 = { vParam4 - vParam0 };
	*uParam10 = ((vVar0.x * BUILTIN::COS(-fParam3)) - (vVar0.y * BUILTIN::SIN(-fParam3)));
	uParam10->f_1 = ((vVar0.x * BUILTIN::SIN(-fParam3)) + (vVar0.y * BUILTIN::COS(-fParam3)));
	uParam10->f_2 = vVar0.z;
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z - fParam3);
}

void func_1125(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!MISC::IS_BIT_SET((uParam0->f_818[iParam1 /*63*/])->f_45, iParam2))
	{
		uVar0 = (uParam0->f_818[iParam1 /*63*/])->f_8;
		MISC::SET_BIT(&((uParam0->f_818[iParam1 /*63*/])->f_45), iParam2);
	}
}

bool func_1126(var uParam0, int iParam1, bool bParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_47)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_818[iParam1 /*63*/]), 1426724047))
		{
			if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/]))) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(&(uParam0->f_818[iParam1 /*63*/])))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1127(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_798))
	{
		return true;
	}
	return (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_798) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_798, 0));
}

float func_1129(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	char cVar2[64];

	iVar0 = (uParam0->f_818[iParam1 /*63*/])->f_4;
	iVar1 = &uParam0->f_818[iParam1 /*63*/];
	iVar0 = func_434(&iVar1, iVar0);
	if (!PED::IS_PED_INJURED(iVar1))
	{
		StringCopy(&cVar2, "clipset@", 64);
		StringConCat(&cVar2, uParam0->f_1274[iVar0 /*8*/], 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, &cVar2, sParam2, 1))
		{
			return ENTITY::_0x627520389E288A73(iVar1, &cVar2, sParam2);
		}
	}
	return 0f;
}

bool func_1131(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_793))
	{
	}
	else if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_793, 1, 0))
	{
		return true;
	}
	else if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_793, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_793);
	}
	return false;
}

int func_1132(var uParam0, int iParam1, int iParam2)
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;
	int iVar5;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_793))
	{
		return 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_793, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_793, "plr", &(uParam0->f_818[iParam1 /*63*/]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_793, "deck", aggregate_func_4249(uParam0), 0);
	iVar4 = (iParam1 + 1 % 6);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (MISC::IS_BIT_SET(uParam0->f_794, iVar4))
		{
			if (iVar4 == iParam2)
			{
				func_1025(uParam0, iVar4, 0, 0, 0);
			}
			else
			{
				func_1026(uParam0, iVar4, 0, 0);
			}
			if (iVar4 == iParam1)
			{
				func_1223(uParam0, iVar4, 2);
			}
			else
			{
				func_1223(uParam0, iVar4, 1);
			}
			StringCopy(&cVar0, "card1_seat", 16);
			StringCopy(&cVar2, "card2_seat", 16);
			StringIntConCat(&cVar0, iVar5 + 1, 16);
			StringIntConCat(&cVar2, iVar5 + 1, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_793, &cVar0, aggregate_func_7680(uParam0, iVar4, 0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_793, &cVar2, aggregate_func_7680(uParam0, iVar4, 1), 0);
		}
		iVar4 = (iVar4 + 1 % 6);
		iVar5++;
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_793);
	return 1;
}

bool func_1133(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_793))
	{
		return false;
	}
	return ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_793, 0);
}

bool func_1134(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_793))
	{
		return false;
	}
	return (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_793) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_793, 0));
}

void func_1135(var uParam0, int iParam1)
{
	if (!(uParam0->f_818[iParam1 /*63*/])->f_46)
	{
		(uParam0->f_818[iParam1 /*63*/])->f_46 = 1;
	}
}

void func_1137(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_672.f_11[iParam1])))
	{
		ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_672.f_11[iParam1]), bParam2);
	}
}

int func_1138(var uParam0, int iParam1)
{
	return &(uParam0->f_672.f_11[iParam1]);
}

int func_1140(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (bParam6)
	{
		iVar1 = &(uParam0->f_255[iParam1 /*30*/])->f_5[iParam2];
		iVar2 = &(uParam0->f_255[iParam1 /*30*/])->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			if (iVar2 > 0)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1537(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_255[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT((*uParam0->f_255[iParam1 /*30*/])[iParam2]);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1538(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1539(iVar3, iParam5, 0);
		func_1540(iVar3, iParam3);
	}
	(*uParam0->f_255[iParam1 /*30*/])[iParam2] = iVar3;
	(uParam0->f_255[iParam1 /*30*/])->f_5[iParam2] = iParam3;
	(uParam0->f_255[iParam1 /*30*/])->f_10[iParam2] = iParam4;
	return 1;
}

void func_1142(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = *iParam3;
	iVar0 = aggregate_func_9388(uParam0, iParam1, iVar2);
	iVar1 = &uParam2->f_24[iVar2];
	func_1305(uParam0, iParam1, iVar2, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam4, 0);
}

void func_1143(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = aggregate_func_9388(uParam0, iParam1, iVar2);
			iVar1 = &uParam2->f_24[iVar2];
			func_1305(uParam0, iParam1, iVar2, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

void func_1144(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = *iParam3;
	iVar0 = aggregate_func_9388(uParam0, iParam1, iVar2);
	iVar1 = &uParam2->f_29[iVar2];
	func_1140(uParam0, iParam1, iVar2, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam4, 0);
}

void func_1145(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != *iParam3)
		{
			iVar0 = aggregate_func_9388(uParam0, iParam1, iVar2);
			iVar1 = &uParam2->f_29[iVar2];
			func_1140(uParam0, iParam1, iVar2, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam4, 0);
		}
		iVar2++;
	}
}

int func_1148(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	fVar0 = (BUILTIN::TO_FLOAT(func_1541(iParam0)) / BUILTIN::TO_FLOAT(10));
	iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_1149(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (aggregate_func_4136(uParam0, iParam2, iParam3))
	{
		if (uParam1->f_1 == 1)
		{
			func_467(uParam0, iParam2, "bet_blind_a_chips", aggregate_func_9388(uParam0, iParam2, iParam3), 0, 2, -1082130432 /* Float: -1f */);
		}
		else if (uParam1->f_43 == 0)
		{
			func_467(uParam0, iParam2, "bet_stack_a_chips", aggregate_func_9388(uParam0, iParam2, iParam3), 0, 2, -1082130432 /* Float: -1f */);
		}
		else if (uParam1->f_43 == 1)
		{
			func_467(uParam0, iParam2, "bet_stack_b_chips", aggregate_func_9388(uParam0, iParam2, iParam3), 0, 2, -1082130432 /* Float: -1f */);
		}
		else if (uParam1->f_43 == 2)
		{
			func_467(uParam0, iParam2, "bet_stack_c_chips", aggregate_func_9388(uParam0, iParam2, iParam3), 0, 2, -1082130432 /* Float: -1f */);
		}
		else if (uParam1->f_43 == 3)
		{
			func_467(uParam0, iParam2, "bet_stack_d_chips", aggregate_func_9388(uParam0, iParam2, iParam3), 0, 2, -1082130432 /* Float: -1f */);
		}
	}
}

int func_1154(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (bParam6)
	{
		iVar1 = &(uParam0->f_436[iParam1 /*30*/])->f_5[iParam2];
		iVar2 = &(uParam0->f_436[iParam1 /*30*/])->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1543(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_436[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT((*uParam0->f_436[iParam1 /*30*/])[iParam2]);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1544(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1539(iVar3, iParam5, 0);
		func_1540(iVar3, iParam3);
	}
	(*uParam0->f_436[iParam1 /*30*/])[iParam2] = iVar3;
	(uParam0->f_436[iParam1 /*30*/])->f_5[iParam2] = iParam3;
	(uParam0->f_436[iParam1 /*30*/])->f_10[iParam2] = iParam4;
	return 1;
}

bool func_1156(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_470(uParam0, *((*uParam0->f_617[iParam1 /*9*/])[iVar1 /*2*/]), &iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_1157(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_818[iParam1 /*63*/]), iParam2))
	{
		if ((!bParam3 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/]))) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(&(uParam0->f_818[iParam1 /*63*/])))
		{
			return true;
		}
	}
	return false;
}

bool func_1158(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = &uParam0->f_811[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return false;
	}
	return ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0);
}

int func_1159(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	char cVar1[16];
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = aggregate_func_6570(uParam0, iParam2);
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_818[iParam1 /*63*/])->f_60);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, "player", &(uParam0->f_818[iParam1 /*63*/]), 0);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar5 = (iVar3 - iParam1);
		while (iVar5 <= 0)
		{
			iVar5 += 6;
		}
		iVar4 = 0;
		while (iVar4 < 4)
		{
			StringCopy(&cVar1, "CHIPS_S", 16);
			StringIntConCat(&cVar1, iVar5, 16);
			if (iVar4 == 0)
			{
				StringConCat(&cVar1, "_A", 16);
			}
			else if (iVar4 == 1)
			{
				StringConCat(&cVar1, "_B", 16);
			}
			else if (iVar4 == 2)
			{
				StringConCat(&cVar1, "_C", 16);
			}
			else if (iVar4 == 3)
			{
				StringConCat(&cVar1, "_D", 16);
			}
			if (aggregate_func_4136(uParam0, iVar3, iVar4))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, &cVar1, aggregate_func_9388(uParam0, iVar3, iVar4), 0);
			}
			iVar4++;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar5 = (iVar3 - iParam1);
		while (iVar5 <= 0)
		{
			iVar5 += 6;
		}
		iVar4 = 0;
		while (iVar4 < 4)
		{
			StringCopy(&cVar1, "BANK_S", 16);
			StringIntConCat(&cVar1, iVar5, 16);
			if (iVar4 == 0)
			{
				StringConCat(&cVar1, "_01", 16);
			}
			else if (iVar4 == 1)
			{
				StringConCat(&cVar1, "_02", 16);
			}
			else if (iVar4 == 2)
			{
				StringConCat(&cVar1, "_03", 16);
			}
			else if (iVar4 == 3)
			{
				StringConCat(&cVar1, "_05", 16);
			}
			if (aggregate_func_4136(uParam0, iVar3, iVar4))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, &cVar1, aggregate_func_9388(uParam0, iVar3, iVar4), 0);
			}
			iVar4++;
		}
		iVar3++;
	}
	if (uParam0->f_39)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "ignoreCamera", true, false);
	}
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	(uParam0->f_818[iParam1 /*63*/])->f_60 = iVar0;
	func_1546(uParam0, iParam2);
	func_916(uParam0, iParam2);
	uParam0->f_797 = iParam1;
	return 1;
}

bool func_1160(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		return false;
	}
	return ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_818[iParam1 /*63*/])->f_60, 0);
}

bool func_1161(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		return false;
	}
	return ANIMSCENE::_0x4822A65D5AF64E69((uParam0->f_818[iParam1 /*63*/])->f_60) >= 1;
}

bool func_1162(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		return false;
	}
	return ((ANIMSCENE::_0xCDC5512A407CF08D((uParam0->f_818[iParam1 /*63*/])->f_60) || ANIMSCENE::_0xF94692EB9DC15D74((uParam0->f_818[iParam1 /*63*/])->f_60, 0)) || ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_818[iParam1 /*63*/])->f_60) > 0.99f);
}

void func_1163(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (uParam0->f_797 != iParam1)
	{
		return;
	}
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar4 = (iVar2 - iParam1);
			while (iVar4 <= 0)
			{
				iVar4 += 6;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (aggregate_func_4136(uParam0, iVar2, iVar3))
				{
					iVar0 = func_1547(uParam0, iVar2, iVar3);
					iVar1 = func_1548(uParam0, iVar2, iVar3);
					func_1140(uParam0, iVar2, iVar3, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (aggregate_func_4136(uParam0, iVar2, iVar3))
				{
					iVar0 = aggregate_func_7680(uParam0, iVar2, iVar3);
					iVar1 = aggregate_func_7680(uParam0, iVar2, iVar3);
					func_1154(uParam0, iVar2, iVar3, iVar0, iVar1, func_1148(iVar0, iVar1, 10), bParam2, 3);
				}
				iVar3++;
			}
			iVar2++;
		}
	}
}

char* func_1165(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!MISC::IS_BIT_SET(iParam1, iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar1))
		{
			iVar2 = ((iVar1 + 6 - iParam0) % 6);
			MISC::SET_BIT(&iVar0, iVar2);
		}
		iVar1++;
	}
	bVar3 = (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 2));
	bVar4 = (MISC::IS_BIT_SET(iVar0, 3) || MISC::IS_BIT_SET(iVar0, 4));
	bVar5 = MISC::IS_BIT_SET(iVar0, 5);
	if ((bVar3 && bVar4) && bVar5)
	{
		return "PBL_P1P2_P3P4_P5_PLAYER";
	}
	else if (bVar3 && bVar4)
	{
		return "PBL_P1P2_P3P4_PLAYER";
	}
	else if (bVar3 && bVar5)
	{
		return "PBL_P1P2_P5_PLAYER";
	}
	else if (bVar4 && bVar5)
	{
		return "PBL_P3P4_P5_PLAYER";
	}
	else if (bVar3)
	{
		return "PBL_P1P2_PLAYER";
	}
	else if (bVar4)
	{
		return "PBL_P3P4_PLAYER";
	}
	else if (bVar5)
	{
		return "PBL_P5_PLAYER";
	}
	return "PBL_P5_PLAYER";
}

void func_1166(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = &uParam0->f_811[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iVar0, sParam2);
}

bool func_1167(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = &uParam0->f_811[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return false;
	}
	return ANIMSCENE::_0x23E33CB9F4A3F547(iVar0, sParam2);
}

void func_1168(var uParam0, int iParam1, int iParam2)
{
	func_464(uParam0, iParam1, 34);
	(uParam0->f_818[iParam1 /*63*/])->f_56 = iParam2;
}

void func_1169(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = &uParam0->f_811[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, sParam2, true);
}

int func_1170(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	char cVar8[32];
	int iVar12;
	int iVar13;
	char cVar14[16];
	int iVar16;
	int iVar17;
	int iVar18;

	iVar0 = 3;
	iVar1 = aggregate_func_6570(uParam0, iVar0);
	if (!ANIMSCENE::_0x25557E324489393C(iVar1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iVar1, 1, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_818[iParam1 /*63*/])->f_60))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_818[iParam1 /*63*/])->f_60);
	}
	vVar2 = { *uParam0 };
	vVar5 = { *(uParam0->f_1255[iParam1 /*3*/]) };
	vVar5.f_2 = (vVar5.z + 180f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar1, vVar2, vVar5, 2);
	if (PED::IS_PED_MALE(&(uParam0->f_818[iParam1 /*63*/])))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "mp_player_m_0", &(uParam0->f_818[iParam1 /*63*/]), 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, "mp_player_f_0", &(uParam0->f_818[iParam1 /*63*/]), 0);
	}
	if (aggregate_func_5974(uParam0, iParam1) == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar1, "isBASE_CAMP", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar1, "isBASE", false, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar1, "isBASE_CAMP", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar1, "isBASE", true, false);
	}
	iVar12 = 0;
	while (iVar12 < 6)
	{
		if (MISC::IS_BIT_SET(iParam2, iVar12))
		{
			if (iVar12 != iParam1 && !PED::IS_PED_INJURED(&(uParam0->f_818[iVar12 /*63*/])))
			{
				iVar13 = ((iVar12 + 6 - iParam1) % 6);
				if (PED::IS_PED_MALE(&(uParam0->f_818[iVar12 /*63*/])))
				{
					StringCopy(&cVar8, "mp_player_m_", 32);
				}
				else
				{
					StringCopy(&cVar8, "mp_player_f_", 32);
				}
				StringIntConCat(&cVar8, iVar13, 32);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, &cVar8, &(uParam0->f_818[iVar12 /*63*/]), 0);
			}
		}
		iVar12++;
	}
	iVar16 = 0;
	while (iVar16 < 6)
	{
		iVar18 = (iVar16 - iParam1);
		while (iVar18 <= 0)
		{
			iVar18 += 6;
		}
		iVar17 = 0;
		while (iVar17 < 4)
		{
			StringCopy(&cVar14, "CHIPS_S", 16);
			StringIntConCat(&cVar14, iVar18, 16);
			if (iVar17 == 0)
			{
				StringConCat(&cVar14, "_A", 16);
			}
			else if (iVar17 == 1)
			{
				StringConCat(&cVar14, "_B", 16);
			}
			else if (iVar17 == 2)
			{
				StringConCat(&cVar14, "_C", 16);
			}
			else if (iVar17 == 3)
			{
				StringConCat(&cVar14, "_D", 16);
			}
			if (aggregate_func_4136(uParam0, iVar16, iVar17))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, &cVar14, aggregate_func_9388(uParam0, iVar16, iVar17), 0);
			}
			iVar17++;
		}
		iVar16++;
	}
	iVar16 = 0;
	while (iVar16 < 6)
	{
		iVar18 = (iVar16 - iParam1);
		while (iVar18 <= 0)
		{
			iVar18 += 6;
		}
		iVar17 = 0;
		while (iVar17 < 4)
		{
			StringCopy(&cVar14, "BANK_S", 16);
			StringIntConCat(&cVar14, iVar18, 16);
			if (iVar17 == 0)
			{
				StringConCat(&cVar14, "_01", 16);
			}
			else if (iVar17 == 1)
			{
				StringConCat(&cVar14, "_02", 16);
			}
			else if (iVar17 == 2)
			{
				StringConCat(&cVar14, "_03", 16);
			}
			else if (iVar17 == 3)
			{
				StringConCat(&cVar14, "_05", 16);
			}
			if (aggregate_func_4136(uParam0, iVar16, iVar17))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar1, &cVar14, aggregate_func_9388(uParam0, iVar16, iVar17), 0);
			}
			iVar17++;
		}
		iVar16++;
	}
	if (uParam0->f_39)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar1, "ignoreCamera", true, false);
	}
	ANIMSCENE::START_ANIM_SCENE(iVar1);
	(uParam0->f_818[iParam1 /*63*/])->f_60 = iVar1;
	func_1546(uParam0, iVar0);
	func_916(uParam0, iVar0);
	uParam0->f_797 = iParam1;
	return 1;
}

bool func_1171(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	int iVar9;

	iVar0 = ((iParam1 + 6 - iParam2) % 6);
	if (PED::IS_PED_MALE(&(uParam0->f_818[iParam1 /*63*/])))
	{
		StringCopy(&cVar1, "mp_player_m_", 64);
	}
	else
	{
		StringCopy(&cVar1, "mp_player_f_", 64);
	}
	StringIntConCat(&cVar1, iVar0, 64);
	iVar9 = (uParam0->f_818[iParam2 /*63*/])->f_60;
	if (((!ANIMSCENE::_0x25557E324489393C(iVar9) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar9, 0)) || ANIMSCENE::_0x005E6F28DD7ED58D(iVar9, &cVar1)) || ANIMSCENE::_0xB89FCFF19DAFFF28(iVar9, &cVar1))
	{
		return true;
	}
	return false;
}

bool func_1172(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 == 34 && (uParam0->f_818[iParam1 /*63*/])->f_56 == iParam2)
	{
		return true;
	}
	return false;
}

void func_1173(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 34)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_56 != iParam2)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 0);
		(uParam0->f_818[iParam1 /*63*/])->f_56 = -1;
	}
}

void func_1174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else
	{
		iVar0 = func_453(uParam0, iParam1, 1);
		iVar1 = aggregate_func_5974(uParam0, iParam1);
		if (iVar1 == 2)
		{
			func_1011(uParam0, iParam1, 1);
		}
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_KEEP_TASK(iVar0, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
}

char* func_1176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_WIN_HIGH_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_WIN_HIGH_B";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_WIN_LOW_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_WIN_LOW_B";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_NEU_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_NEU_B";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "SIT_EXIT_LEFT_LOSS_A";
			}
			else
			{
				return "SIT_EXIT_LEFT_LOSS_B";
			}
			break;
	}
	return "SIT_EXIT_LEFT_NEU_A";
}

bool func_1177(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1 /*30*/][iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1179(char* sParam0, int iParam1, char* sParam2)
{
	StringCopy(sParam2, sParam0, 64);
	switch (iParam1)
	{
		case 0:
			StringConCat(sParam2, "_BANK_01", 64);
			return true;
		case 1:
			StringConCat(sParam2, "_BANK_02", 64);
			return true;
		case 2:
			StringConCat(sParam2, "_BANK_03", 64);
			return true;
		case 3:
			StringConCat(sParam2, "_BANK_05", 64);
			return true;
		case 4:
			StringConCat(sParam2, "_BANK_04", 64);
			return true;
		default:
			break;
	}
	StringCopy(sParam2, "error", 64);
	return false;
}

void func_1185(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	func_1187(&(uParam0->f_7));
	uParam0->f_31.f_24 = -1;
	uParam0->f_31.f_23 = 0;
}

void func_1187(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0 /*2*/] = -1;
		((*uParam0)[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

void func_1188(var uParam0, bool bParam1, bool bParam2)
{
	func_919(uParam0);
	if (bParam1)
	{
		func_1550(uParam0);
	}
	if (bParam2)
	{
		func_1551(uParam0);
	}
}

char[] func_1189(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_39[iVar1 /*56*/] != -1 && (uParam0->f_39[iVar1 /*56*/])->f_2 > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1190(var uParam0, char* sParam1, char* sParam2)
{
	uParam0->f_439 = sParam1;
	uParam0->f_440 = sParam2;
	func_1476(uParam0, 0, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_INTERVAL_PLAYERS_LABEL"));
	func_1477(uParam0, 0, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_INTERVAL_PLAYERS_N", sParam1, sParam2));
}

void func_1192(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		(uParam0->f_307[iParam1 /*20*/])->f_2 = iParam2;
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", func_1437(uParam0, iParam2)));
	}
}

char* func_1193()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_WAITING_FOR_BUYIN");
}

char* func_1194()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_WAITING_FOR_NEXT_HAND");
}

bool func_1195(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (uParam0->f_1400)
		{
			return false;
		}
	}
	if (uParam0->f_1388 != MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE())
	{
		aggregate_func_4239(uParam0);
		return false;
	}
	if (uParam0->f_1388 == -1857735811)
	{
		if (bParam1)
		{
			if (uParam0->f_1388.f_2 != uParam0->f_1396 + 1 && uParam0->f_1396 != -1)
			{
				return false;
			}
		}
		if (uParam0->f_1388.f_1 != 1995414514 && uParam0->f_1388.f_1 != 1592704673)
		{
			return true;
		}
	}
	return false;
}

void func_1196(var uParam0, int iParam1)
{
	if (!(uParam0->f_818[iParam1 /*63*/])->f_47)
	{
		(uParam0->f_818[iParam1 /*63*/])->f_47 = 1;
	}
}

int func_1197(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char cVar8[16];
	int iVar10;
	int iVar11;

	if (uParam0->f_793 != -1)
	{
		return 0;
	}
	StringCopy(&cVar8, "PBL_", 16);
	iVar10 = (iParam1 + 1 % 6);
	iVar11 = 0;
	while (iVar11 < 6)
	{
		if (MISC::IS_BIT_SET(iParam2, iVar10))
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		else if (iVar10 == iParam1)
		{
			StringIntConCat(&cVar8, iVar11 + 1, 16);
		}
		iVar10 = (iVar10 + 1 % 6);
		iVar11++;
	}
	if ((func_603(uParam0, iParam1, 4, 1) || func_603(uParam0, iParam1, 5, 1)) || func_603(uParam0, iParam1, 3, 1))
	{
		StringCopy(&cVar0, "script@mini_game@poker@fem_deal", 64);
	}
	else if (MISC::IS_BIT_SET(iParam2, iParam1))
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal", 64);
	}
	else
	{
		StringCopy(&cVar0, "script@mini_game@poker@deal_casino", 64);
	}
	uParam0->f_793 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, &cVar8, false, true);
	uParam0->f_794 = iParam2;
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_793))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_793);
		return 1;
	}
	uParam0->f_793 = -1;
	return 0;
}

void func_1198(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_689 == 0)
	{
	}
	else
	{
		uParam0->f_689.f_1 = iParam1;
		uParam0->f_689.f_2 = iParam2;
	}
}

void func_1199(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (iParam1 == -1)
	{
	}
	else if (iParam2 == -1)
	{
	}
	else
	{
		if (&uParam0->f_2066[iParam1] != -1)
		{
		}
		uParam0->f_2066[iParam1] = iParam2;
		uParam0->f_2073[iParam1] = iParam3;
		aggregate_func_4284(uParam0->f_2080[iParam1 /*3*/], -fParam4);
	}
}

int func_1200(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			if (!(!MISC::IS_BIT_SET(uParam0->f_1617, iVar0) || (&uParam0->f_1618[iVar0] == iParam2 && !bParam3)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1201(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar1))
		{
			if (MISC::IS_BIT_SET(uParam0->f_1617, iVar1))
			{
				if (&uParam0->f_1618[iVar1] != iParam2)
				{
					iVar0 = 0;
					Jump @98; //curOff = 59
				}
				else if (bParam3)
				{
					iVar0 = 0;
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_1617), iVar1);
					uParam0->f_1618[iVar1] = iParam2;
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

int func_1202(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (MISC::IS_BIT_SET(uParam0->f_1617, iParam1))
	{
		if (&uParam0->f_1618[iParam1] != iParam2)
		{
			return 0;
		}
		else if (bParam3)
		{
			return 0;
		}
	}
	MISC::SET_BIT(&(uParam0->f_1617), iParam1);
	uParam0->f_1618[iParam1] = iParam2;
	return 1;
}

void func_1203(var uParam0)
{
	uParam0->f_439 = -1;
	uParam0->f_440 = -1;
	uParam0->f_441 = -1;
	func_1476(uParam0, 0, "");
	func_1477(uParam0, 0, "");
	func_1476(uParam0, 1, "");
	func_1477(uParam0, 1, "");
}

bool func_1205(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_39[iParam1 /*56*/] != -1) && (uParam0->f_39[iParam1 /*56*/])->f_6 == -1)
	{
		return true;
	}
	return false;
}

char* func_1207(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_SBLIND", func_1437(uParam0, iParam1));
}

char* func_1208(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_SBLIND_ANTE", func_1437(uParam0, iParam1));
}

char* func_1209(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_BBLIND", func_1437(uParam0, iParam1));
}

char* func_1210(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_ANTE", func_1437(uParam0, iParam1));
}

char* func_1211(var uParam0, int iParam1)
{
	struct<16> Var0;

	Var0 = { func_436(&(uParam0->f_151), iParam1, 0, 1) };
	return MISC::_CREATE_VAR_STRING(10, "MGPKR_INFO_WAIT_TURN_MP", &Var0);
}

void func_1212(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!uParam0->f_118)
	{
		return;
	}
	iVar0 = 7;
	while (iVar0 > 0)
	{
		*(uParam0->f_79[iVar0 /*4*/]) = { *(uParam0->f_79[(iVar0 - 1) /*4*/]) };
		iVar0 = (iVar0 - 1);
	}
	uParam0->f_119++;
	if (uParam0->f_119 >= 8)
	{
		uParam0->f_119 = 8;
	}
	uParam0->f_120++;
	if (uParam0->f_120 >= 8)
	{
		uParam0->f_120 = 8;
	}
	if (&uParam0->f_79[1 /*4*/] == 3)
	{
		uParam0->f_131 = (uParam0->f_79[1 /*4*/])->f_1;
	}
	if ((&uParam0->f_79[1 /*4*/] == 2 || &uParam0->f_79[1 /*4*/] == 4) || &uParam0->f_79[1 /*4*/] == 3)
	{
		uParam0->f_132 = (uParam0->f_79[1 /*4*/])->f_1;
	}
	uParam0->f_79[0 /*4*/] = iParam1;
	(uParam0->f_79[0 /*4*/])->f_1 = iParam2;
	(uParam0->f_79[0 /*4*/])->f_2 = 0;
	(uParam0->f_79[0 /*4*/])->f_3 = 0;
	uParam0->f_124 = aggregate_func_4850(&(uParam0->f_121));
	aggregate_func_4283(&(uParam0->f_121));
}

void func_1215(var uParam0)
{
	var uVar0;
	int iVar5;

	uVar0 = 4;
	iVar5 = 0;
	while (iVar5 < 6)
	{
		func_1553(uParam0, iVar5, &uVar0);
		func_1485(uParam0, iVar5, &uVar0);
		aggregate_func_5627(uParam0, iVar5, "NEW", "PWORLD__ASSIGN_ROUND_DENOMS()");
		iVar5++;
	}
}

bool func_1216(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	else if (bParam5)
	{
		func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return true;
}

int func_1217(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1617, iParam1))
	{
		if (bParam3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if (&uParam0->f_1618[iParam1] != iParam2)
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1617), iParam1);
	return 1;
}

void func_1218(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &(uParam0->f_74[iParam1 /*30*/])->f_10[iVar0];
		iVar0++;
	}
}

void func_1219(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &(uParam0->f_255[iParam1 /*30*/])->f_10[iVar0];
		if (bParam3)
		{
			(*uParam2)[iVar0] = (&(uParam0->f_436[iParam1 /*30*/])->f_10[iVar0] + uParam2[iVar0]);
		}
		iVar0++;
	}
}

int func_1220(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = -1;
	*uParam3 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		uParam3->f_1[iVar1] = 0;
		iVar1++;
	}
	if (bParam4 && uParam1[0] > 0)
	{
		iVar0 = 0;
	}
	else
	{
		iVar3 = 14;
		if (uParam1[0] > iParam0)
		{
			iVar3 = 15;
		}
		else if ((uParam1[1] == 0 && uParam1[2] == 0) && uParam1[3] == 0)
		{
			iVar3 = 15;
		}
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam1[iVar1] >= iParam0)
			{
				MISC::SET_BIT(&iVar4, iVar1);
			}
			iVar1++;
		}
		iVar5 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam2[iVar1] == 0)
			{
				MISC::SET_BIT(&iVar5, iVar1);
			}
			iVar1++;
		}
		if (func_364(((iVar4 && iVar5) && iVar3)) != 0)
		{
			iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_364(((iVar4 && iVar5) && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET(((iVar4 && iVar5) && iVar3), iVar1))
				{
					if (iVar6 == 0)
					{
						iVar0 = iVar1;
					}
					iVar6 = (iVar6 - 1);
				}
				iVar1++;
			}
		}
		else if (func_364((iVar4 && iVar3)) != 0)
		{
			iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_364((iVar4 && iVar3)));
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET((iVar4 && iVar3), iVar1))
				{
					if (iVar7 == 0)
					{
						iVar0 = iVar1;
					}
					iVar7 = (iVar7 - 1);
				}
				iVar1++;
			}
		}
		else
		{
			iVar8 = -1;
			iVar9 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (MISC::IS_BIT_SET(iVar3, iVar1))
				{
					if (iVar9 < uParam1[iVar1])
					{
						iVar9 = uParam1[iVar1];
						iVar8 = iVar1;
					}
				}
				iVar1++;
			}
			iVar0 = iVar8;
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = 3;
	}
	*uParam3 = iVar0;
	iVar1 = iVar0;
	iVar2 = aggregate_func_4937(iParam0, uParam1[iVar1]);
	uParam3->f_1[iVar1] = (&uParam3->f_1[iVar1] + iVar2);
	(*uParam1)[iVar1] = (uParam1[iVar1] - iVar2);
	iParam0 = (iParam0 - iVar2);
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar1 = (3 - iVar10);
		iVar2 = aggregate_func_4937(iParam0, uParam1[iVar1]);
		uParam3->f_1[iVar1] = (&uParam3->f_1[iVar1] + iVar2);
		(*uParam1)[iVar1] = (uParam1[iVar1] - iVar2);
		iParam0 = (iParam0 - iVar2);
		iVar10++;
	}
	if (iParam0 > 0)
	{
	}
	return 1;
}

void func_1221(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	var uVar0[4];
	var uVar5[4];
	int iVar10;
	int iVar11;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if (!bParam3 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 2)
	{
	}
	else if (bParam3 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else if (*uParam2 < 0 || *uParam2 >= 4)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 13);
		aggregate_func_5627(uParam0, iParam1, "OLD", "BET_ADVANCED");
		aggregate_func_5627(uParam0, iParam1, "OLD", 0);
		func_1218(uParam0, iParam1, &uVar0);
		func_1219(uParam0, iParam1, &uVar5, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			if (&uParam2->f_1[iVar10] < 0)
			{
				uParam2->f_1[iVar10] = 0;
			}
			else if (&uParam2->f_1[iVar10] > &uVar0[iVar10])
			{
				uParam2->f_1[iVar10] = &uVar0[iVar10];
			}
			iVar10++;
		}
		aggregate_func_5627(uParam0, iParam1, uParam2, 0);
		iVar10 = 0;
		while (iVar10 < 4)
		{
			(uParam0->f_818[iParam1 /*63*/])->f_24[iVar10] = (uParam2->f_1[iVar10] - uVar0[iVar10]) // PointerArith;
			(uParam0->f_818[iParam1 /*63*/])->f_29[iVar10] = (uParam2->f_1[iVar10] + uVar5[iVar10]) // PointerArith;
			iVar10++;
		}
		iVar11 = *uParam2;
		if (func_603(uParam0, iParam1, 1, 0) || func_603(uParam0, iParam1, 4, 0))
		{
			if (iVar11 == 0)
			{
				iVar11 = 1;
			}
			else if (iVar11 == 1)
			{
				iVar11 = 0;
			}
		}
		if (!uParam0->f_40)
		{
			if (bParam3)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "BetBlind");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "Bet");
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "BetType", BUILTIN::TO_FLOAT(iVar11));
			}
		}
		(uParam0->f_818[iParam1 /*63*/])->f_19 = *uParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_20 = &uParam2->f_1[0];
		(uParam0->f_818[iParam1 /*63*/])->f_21 = &uParam2->f_1[1];
		(uParam0->f_818[iParam1 /*63*/])->f_22 = &uParam2->f_1[2];
		(uParam0->f_818[iParam1 /*63*/])->f_23 = &uParam2->f_1[3];
		(uParam0->f_818[iParam1 /*63*/])->f_43 = iVar11;
	}
}

void func_1222(var uParam0, int iParam1, int iParam2)
{
	func_1081(uParam0, iParam1, iParam2, 1);
}

void func_1223(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_617[iParam1 /*9*/])->f_8 == 7)
	{
	}
	else
	{
		(uParam0->f_617[iParam1 /*9*/])->f_8 = iParam2;
	}
}

bool func_1224(var uParam0, int iParam1, var uParam2)
{
	return (func_1290(uParam0, iParam1, uParam2) && func_1248(uParam0) > 0);
}

int func_1225(var uParam0, int iParam1)
{
	int iVar0;

	iParam1 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_1301(uParam0, iParam1))
		{
			return iParam1;
		}
		iParam1 = (iParam1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

bool func_1226(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11[10];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;

	if (!uParam2->f_808 || uParam2->f_809)
	{
		return false;
	}
	if (uParam2->f_807 == -1)
	{
		return false;
	}
	if (iParam4 < 0 || iParam4 >= 6)
	{
		return false;
	}
	fVar2 = -1f;
	switch ((uParam2->f_818[iParam4 /*63*/])->f_2)
	{
		case 0:
			fVar2 = -1f;
			break;
		case 1:
			fVar2 = 0f;
			break;
		case 2:
			fVar2 = 1f;
			break;
	}
	fVar3 = 0f;
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "MgmLookPose", &(uParam2->f_818[iParam4 /*63*/]), 0, fVar2);
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "MgmLookVar", &(uParam2->f_818[iParam4 /*63*/]), 0, fVar3);
	iVar4 = uParam0->f_1997;
	iVar5 = -1;
	if (uParam1->f_119 >= 1)
	{
		iVar5 = (uParam1->f_79[0 /*4*/])->f_1;
	}
	iVar6 = -1;
	if (uParam1->f_119 >= 2)
	{
		iVar6 = (uParam1->f_79[1 /*4*/])->f_1;
	}
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_atDealer", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar4));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_atCurActor", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar5));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_atPrevActor", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar6));
	ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_atGivenSeat", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iParam6));
	if (iParam5 & 2 != 0)
	{
		iVar7 = uParam1->f_131;
		iVar8 = uParam1->f_132;
		iVar9 = func_1557(uParam3, iParam4);
		iVar10 = -1;
		iVar0 = (uParam3->f_6 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_433(uParam3, iVar0) && func_1301(uParam3, iVar0))
			{
				iVar10 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar1 = 0;
		if (iVar7 != -1)
		{
			iVar11[iVar1] = iVar7;
			iVar1++;
		}
		if (iVar8 != -1)
		{
			iVar11[iVar1] = iVar8;
			iVar1++;
		}
		if (iVar10 != -1)
		{
			iVar11[iVar1] = iVar10;
			iVar1++;
		}
		if (iVar9 != -1)
		{
			iVar11[iVar1] = iVar9;
			iVar1++;
		}
		iVar22 = -1;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 90)
		{
			iVar22 = &iVar11[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)];
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_onAction", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar22));
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_atPrevRaiser", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar7));
	}
	if (iParam5 & 4 != 0)
	{
		iVar23 = (uParam1->f_144 && uParam1->f_141 ^ -1);
		iVar24 = -1;
		iVar0 = (iParam4 + 1 % 6);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET(iVar23, iVar0))
			{
				iVar24 = iVar0;
			}
			else
			{
				iVar0 = (iVar0 + 1 % 6);
				iVar1++;
			}
		}
		iVar25 = -1;
		if (uParam1->f_145 != iParam4)
		{
			iVar25 = uParam1->f_145;
		}
		else if (uParam1->f_147 != -1)
		{
			iVar25 = uParam1->f_147;
		}
		else
		{
			iVar25 = iVar24;
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_onReveal", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar25));
	}
	if (iParam5 & 8 != 0)
	{
		iVar26 = -1;
		iVar27 = 0;
		while (iVar27 < uParam1->f_119)
		{
			if (&uParam1->f_79[iVar27 /*4*/] == 6)
			{
				iVar26 = (uParam1->f_79[iVar27 /*4*/])->f_1;
			}
			else
			{
				iVar27++;
			}
		}
		ANIMSCENE::_0x07706C4CC9C6CC9E(uParam2->f_807, "look_onCelebrate", &(uParam2->f_818[iParam4 /*63*/]), 0, func_1556(iParam4, iVar26));
	}
	return true;
}

void func_1227(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(uParam0->f_1617, iVar0) && &uParam0->f_1618[iVar0] == iParam1)
		{
			func_1217(uParam0, iVar0, iParam1, 1);
		}
		iVar0++;
	}
}

void func_1228(var uParam0)
{
	func_216(&(uParam0->f_2839), 1);
	func_217(&(uParam0->f_2839), 1);
}

void func_1230(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2066[iVar0] != -1)
		{
			uParam0->f_2066[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_1231(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	uParam0->f_40 = bParam1;
}

void func_1233(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (!&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else if (fParam2 >= 0f && fParam2 <= 1f)
	{
		func_1515(uParam0->f_34[iParam1 /*21*/], BUILTIN::ROUND((fParam2 * 100f)));
		if (fParam2 == 1f)
		{
			aggregate_func_9387(uParam0, iParam1, 1);
		}
		else
		{
			aggregate_func_9387(uParam0, iParam1, 0);
			aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
		}
	}
	else
	{
		func_1515(uParam0->f_34[iParam1 /*21*/], -1);
		aggregate_func_9387(uParam0, iParam1, 0);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 0);
	}
}

void func_1234(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (uParam0->f_485 != 0)
	{
		if (bParam4)
		{
			func_1457(uParam0, uParam1, uParam3);
		}
		switch (uParam0->f_485.f_2)
		{
			case 1:
			case 2:
			case 3:
			case 4:
				if (aggregate_func_5974(uParam1, uParam0->f_485.f_1) == aggregate_func_4249(uParam1))
				{
					*uParam2 = 4;
					uParam2->f_1 = 0;
				}
				else
				{
					*uParam2 = 3;
					uParam2->f_1 = 0;
				}
				break;
			case 5:
				*uParam2 = 5;
				uParam2->f_1 = 0;
				break;
			default:
				*uParam2 = 0;
				uParam2->f_1 = 0;
				break;
		}
	}
}

void func_1236(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (uParam0->f_166)
	{
		return;
	}
	uParam0->f_442 = 1;
	uParam0->f_442.f_1 = iParam4;
	uParam0->f_442.f_2 = 0;
	uParam0->f_442.f_3 = 0;
	func_1559(uParam1, uParam2, iParam3, &uVar0, &uVar1, &uVar2, 1);
	uParam0->f_442.f_4 = uVar0;
	func_589(&(uParam0->f_442.f_5));
	uParam0->f_442.f_19 = 0;
}

void func_1237(var uParam0, char* sParam1)
{
	if (uParam0->f_165)
	{
		return;
	}
	uParam0->f_172 = func_1560(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
}

void func_1238(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar2 = iVar1;
			uParam0->f_1475.f_17[iVar2 /*9*/] = uParam0->f_416;
			(uParam0->f_1475.f_17[iVar2 /*9*/])->f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

bool func_1239(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (uParam0->f_442 && !bParam4)
	{
		func_1561(&(uParam0->f_442.f_5), aggregate_func_5974(uParam1, iParam3));
		if (uParam0->f_442.f_2 == 0)
		{
			if (!aggregate_func_2875(uParam0->f_442.f_20))
			{
				uParam0->f_442.f_20 = aggregate_func_2045("MGPKR_UI_BET2", joaat("INPUT_MINIGAME_POKER_BET"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2079(uParam0->f_442.f_20, 160258628, 0, 1);
			}
			if (!aggregate_func_2875(uParam0->f_442.f_21))
			{
				if (uParam0->f_442.f_1)
				{
					uParam0->f_442.f_21 = aggregate_func_2045("MGPKR_UI_FOLD2", joaat("INPUT_MINIGAME_POKER_FOLD"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate_func_2079(uParam0->f_442.f_21, 160258628, 0, 1);
				}
			}
			if (!aggregate_func_2875(uParam0->f_442.f_22))
			{
				uParam0->f_442.f_22 = aggregate_func_2045("MGPKR_UI_ALTER", joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2079(uParam0->f_442.f_22, 160258628, 0, 1);
			}
			func_1559(uParam1, uParam2, iParam3, &iVar0, &iVar1, &iVar2, 1);
			iVar3 = 0;
			iVar3 = func_1434(&(uParam0->f_442.f_5), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
			if (iVar3 != 0)
			{
				iVar4 = (uParam0->f_442.f_4 + iVar3);
				if (iVar4 < iVar0)
				{
					iVar4 = iVar0;
				}
				else if (iVar4 > iVar0 && iVar4 < iVar1)
				{
					if (iVar3 < 0)
					{
						iVar4 = iVar0;
					}
					else
					{
						iVar4 = iVar1;
					}
				}
				else if (iVar4 > iVar2)
				{
					iVar4 = iVar2;
				}
				if (uParam0->f_442.f_4 != iVar4)
				{
					uParam0->f_442.f_4 = iVar4;
					func_1436((iVar4 == iVar0 || iVar4 == iVar2));
				}
			}
			iVar5 = (aggregate_func_5974(uParam1, iParam3) + uParam0->f_442.f_4);
			iVar6 = (iVar5 - aggregate_func_4249(uParam1));
			if (aggregate_func_2927(uParam0->f_442.f_20, 1))
			{
				if (uParam0->f_442.f_4 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 4;
				}
				else if (iVar6 <= 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("menu_select_default", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 3;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND("menu_select_bet", "RDRO_Poker_Sounds", true, 0);
					uParam0->f_442.f_2 = 2;
					uParam0->f_442.f_3 = iVar6;
				}
			}
			else if (aggregate_func_2927(uParam0->f_442.f_21, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND("menu_select_fold", "RDRO_Poker_Sounds", true, 0);
				uParam0->f_442.f_2 = 5;
			}
			if (aggregate_func_2875(uParam0->f_442.f_20))
			{
				if (uParam0->f_442.f_4 == 0)
				{
					aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_CHECK2", 1);
				}
				else if (uParam0->f_442.f_4 == aggregate_func_5974(uParam1, iParam3))
				{
					aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_ALLIN2", 1);
				}
				else if (aggregate_func_4249(uParam1) == 0)
				{
					if (func_1563(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
					{
						aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_BET_MAX_BET", 1);
					}
					else
					{
						aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_BET2", 1);
					}
				}
				else if (iVar6 <= 0)
				{
					if (func_1563(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
					{
						aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_CALL_MAX_BET", 1);
					}
					else
					{
						aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_CALL2", 1);
					}
				}
				else if (func_1563(uParam1, uParam2, iParam3, uParam0->f_442.f_4))
				{
					aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_RAISE_MAX_BET", 1);
				}
				else
				{
					aggregate_func_2052(uParam0->f_442.f_20, "MGPKR_UI_RAISE2", 1);
				}
			}
		}
		if (uParam0->f_442.f_2 != 0)
		{
			aggregate_func_2878(&(uParam0->f_442.f_20), 1, 1);
			aggregate_func_2878(&(uParam0->f_442.f_21), 1, 1);
			aggregate_func_2878(&(uParam0->f_442.f_22), 1, 1);
			return true;
		}
	}
	return false;
}

bool func_1240(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_442.f_2;
	uParam1->f_1 = uParam0->f_442.f_3;
	return *uParam1 != 0;
}

void func_1241(var uParam0, var uParam1)
{
	if (aggregate_func_4249(uParam0) == aggregate_func_5974(uParam0, uParam0->f_6))
	{
		*uParam1 = 4;
		uParam1->f_1 = 0;
	}
	else
	{
		*uParam1 = 5;
		uParam1->f_1 = 0;
	}
}

void func_1242(var uParam0)
{
	if (uParam0->f_165)
	{
		return;
	}
	if (aggregate_func_2920(uParam0->f_172))
	{
		_NAMESPACE71::_0x2F901291EF177B02(uParam0->f_172, 0);
	}
}

bool func_1243(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4971(uParam0, iParam1) != 1)
	{
	}
	else
	{
		iVar0 = func_360(uParam0, iParam1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else
			{
				iVar2 = iVar1;
				if (uParam0->f_416 == &uParam0->f_1475.f_17[iVar2 /*9*/])
				{
					*iParam2 = (uParam0->f_1475.f_17[iVar2 /*9*/])->f_1;
					return true;
				}
			}
		}
	}
	*iParam2 = -1;
	return false;
}

float func_1244(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	return BUILTIN::TO_FLOAT((iVar0 - iParam0));
}

int func_1245(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar0 = (&uParam0->f_376[iVar1 /*18*/] + iVar0);
		iVar1++;
	}
	return iVar0;
}

int func_1247(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if ((&uParam0->f_39[iVar1 /*56*/] != -1 && (uParam0->f_39[iVar1 /*56*/])->f_6 == 0) && (uParam0->f_39[iVar1 /*56*/])->f_2 != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1248(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_1301(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1251(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return;
	}
	if (((*uParam0)[iParam1 /*13*/])->f_12 > 0)
	{
		if (((*uParam0)[iParam1 /*13*/])->f_12 >= 3)
		{
			MISC::SET_BIT(&(uParam0->f_133), iParam1);
		}
		((*uParam0)[iParam1 /*13*/])->f_12 = 0;
	}
	((*uParam0)[iParam1 /*13*/])->f_12 = (((*uParam0)[iParam1 /*13*/])->f_12 - 1);
}

bool func_1252(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 2);
}

bool func_1253(var uParam0)
{
	return uParam0->f_1870 != -1;
}

bool func_1254(var uParam0, bool bParam1)
{
	if (!bParam1 || uParam0->f_120 >= 2)
	{
		return &uParam0->f_79[1 /*4*/] == 5;
	}
	return false;
}

bool func_1255(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		if (&uParam0->f_79[1 /*4*/] == 5)
		{
			return aggregate_func_3909(uParam0, (uParam0->f_79[1 /*4*/])->f_1, 4, 6);
		}
	}
	return false;
}

bool func_1256(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET((uParam0->f_79[1 /*4*/])->f_2, 10);
	}
	return false;
}

int func_1257(var uParam0, bool bParam1)
{
	if (uParam0->f_119 >= 2 && (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f)))
	{
		return (uParam0->f_79[1 /*4*/])->f_1;
	}
	return -1;
}

void func_1258(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return;
	}
	((*uParam0)[iParam1 /*13*/])->f_9 = 0;
}

bool func_1261(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 1);
}

bool func_1263(float fParam0)
{
	return fParam0 < 0.2f;
}

bool func_1264(float fParam0)
{
	return (fParam0 >= 0.333f && fParam0 < 0.666f);
}

bool func_1265(float fParam0)
{
	return fParam0 < 0.5f;
}

bool func_1266(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return &uParam0->f_79[1 /*4*/] == 3;
	}
	return false;
}

bool func_1267(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET((uParam0->f_79[1 /*4*/])->f_2, 6);
	}
	return false;
}

bool func_1268(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET((uParam0->f_79[1 /*4*/])->f_2, 7);
	}
	return false;
}

bool func_1269(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET((uParam0->f_79[1 /*4*/])->f_2, 8);
	}
	return false;
}

bool func_1270(var uParam0, bool bParam1)
{
	if (!bParam1 || (uParam0->f_120 >= 2 && uParam0->f_124 < 6f))
	{
		return MISC::IS_BIT_SET((uParam0->f_79[1 /*4*/])->f_2, 1);
	}
	return false;
}

bool func_1271(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 6);
}

bool func_1272(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 7);
}

bool func_1273(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 8);
}

int func_1274(var uParam0)
{
	if (((uParam0->f_120 >= 2 && &uParam0->f_79[0 /*4*/] == 3) && &uParam0->f_79[1 /*4*/] == 2) && aggregate_func_3909(uParam0, (uParam0->f_79[1 /*4*/])->f_1, 4, 8))
	{
		return 1;
	}
	return 0;
}

int func_1275(var uParam0, int iParam1)
{
	int iVar0;

	if ((MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 0) && MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 8)) && uParam0->f_119 >= iParam1 + 1)
	{
		iVar0 = 0;
		while (iVar0 < iParam1)
		{
			if (&uParam0->f_79[iVar0 + 1 /*4*/] != 2 && &uParam0->f_79[iVar0 + 1 /*4*/] != 5)
			{
				return 0;
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_1276(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return;
	}
	((*uParam0)[iParam1 /*13*/])->f_8 = 0;
}

int func_1279(var uParam0, int iParam1, int iParam2)
{
	(*uParam0->f_436[iParam1 /*30*/])[iParam2] = uParam0->f_74[iParam1 /*30*/][iParam2];
	(uParam0->f_436[iParam1 /*30*/])->f_5[iParam2] = &(uParam0->f_74[iParam1 /*30*/])->f_5[iParam2];
	(uParam0->f_436[iParam1 /*30*/])->f_10[iParam2] = &(uParam0->f_74[iParam1 /*30*/])->f_10[iParam2];
	(*uParam0->f_74[iParam1 /*30*/])[iParam2] = 0;
	(uParam0->f_74[iParam1 /*30*/])->f_5[iParam2] = 0;
	(uParam0->f_74[iParam1 /*30*/])->f_10[iParam2] = 0;
	return 1;
}

bool func_1280(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if ((uParam0->f_39[iParam2 /*56*/])->f_3 >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

char* func_1281(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MAX_BET", func_1437(uParam0, iParam1));
}

char* func_1282(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_ALLIN", func_1437(uParam0, iParam1));
}

char* func_1283(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_CHECK", func_1437(uParam0, iParam1));
	}
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_CHECK_0");
}

char* func_1284(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_CALL", func_1437(uParam0, iParam1));
}

char* func_1285(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_RAISE", func_1437(uParam0, iParam1));
}

char* func_1286(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_FOLD", func_1437(uParam0, iParam1));
	}
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_FOLD_0");
}

bool func_1287(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 11);
}

bool func_1288(int iParam0, float fParam1)
{
	if (iParam0 == 0 || (iParam0 + BUILTIN::ROUND((fParam1 * 1000f))) < MISC::GET_GAME_TIMER())
	{
		return true;
	}
	return false;
}

int func_1289(var uParam0)
{
	return (uParam0->f_79[0 /*4*/])->f_1;
}

bool func_1290(var uParam0, int iParam1, var uParam2)
{
	return (((uParam0->f_39[iParam1 /*56*/])->f_6 == 0 && (uParam0->f_39[iParam1 /*56*/])->f_2 != 0) && !func_1280(uParam0, uParam2, iParam1));
}

bool func_1291(var uParam0)
{
	if (&uParam0->f_79[0 /*4*/] == 5)
	{
		return aggregate_func_3909(uParam0, (uParam0->f_79[0 /*4*/])->f_1, 4, 8);
	}
	return false;
}

void func_1292(var uParam0)
{
	*uParam0 = MISC::GET_GAME_TIMER();
}

void func_1293(var uParam0, int iParam1)
{
	if (uParam0->f_1870 != -1)
	{
	}
	uParam0->f_1870 = iParam1;
}

bool func_1297(float fParam0)
{
	return fParam0 >= 0.8f;
}

bool func_1298(float fParam0)
{
	return fParam0 >= 0.4f;
}

bool func_1299(float fParam0)
{
	return (fParam0 >= 0.2f && fParam0 < 0.4f);
}

bool func_1300(float fParam0)
{
	return fParam0 < 0.15f;
}

bool func_1301(var uParam0, int iParam1)
{
	if (&uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if (uParam0->f_2 == 4)
		{
			if ((uParam0->f_39[iParam1 /*56*/])->f_6 == 0)
			{
				return true;
			}
		}
		else if (((uParam0->f_39[iParam1 /*56*/])->f_6 == 0 && (uParam0->f_39[iParam1 /*56*/])->f_2 != 0) && ((uParam0->f_39[iParam1 /*56*/])->f_4 < uParam0->f_7 || (uParam0->f_39[iParam1 /*56*/])->f_5))
		{
			return true;
		}
	}
	return false;
}

bool func_1302(var uParam0)
{
	if (&uParam0->f_79[0 /*4*/] == 5)
	{
		return aggregate_func_3909(uParam0, (uParam0->f_79[0 /*4*/])->f_1, 4, 6);
	}
	return false;
}

void func_1303(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_43[iParam1 /*5*/][iVar0];
		iVar0++;
	}
}

bool func_1304(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = aggregate_func_9687(uParam2);
	iVar1 = aggregate_func_9687(uParam3);
	if (iVar0 + iVar1) != (iParam0 + iParam1)
	{
		return false;
	}
	iVar2 = (iParam0 - iVar0);
	if (iVar2 > 0)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (iVar2 > 0)
			{
				iVar3 = aggregate_func_4937(iVar2, uParam3[iVar5]);
				(*uParam2)[iVar5] = (uParam2[iVar5] + iVar3);
				(*uParam3)[iVar5] = (uParam3[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar5++;
		}
	}
	else if (iVar2 < 0)
	{
		iVar2 = -iVar2;
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar5 = (3 - iVar4);
			if (iVar2 > 0)
			{
				iVar3 = aggregate_func_4937(iVar2, uParam2[iVar5]);
				(*uParam3)[iVar5] = (uParam3[iVar5] + iVar3);
				(*uParam2)[iVar5] = (uParam2[iVar5] - iVar3);
				iVar2 = (iVar2 - iVar3);
			}
			iVar4++;
		}
	}
	return true;
}

int func_1305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (bParam6)
	{
		iVar1 = &(uParam0->f_74[iParam1 /*30*/])->f_5[iParam2];
		iVar2 = &(uParam0->f_74[iParam1 /*30*/])->f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return 1;
		}
		func_1568(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1 /*30*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT((*uParam0->f_74[iParam1 /*30*/])[iParam2]);
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_693;
		if (!func_1569(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, vVar5);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1539(iVar3, iParam5, 0);
		func_1540(iVar3, iParam3);
	}
	(*uParam0->f_74[iParam1 /*30*/])[iParam2] = iVar3;
	(uParam0->f_74[iParam1 /*30*/])->f_5[iParam2] = iParam3;
	(uParam0->f_74[iParam1 /*30*/])->f_10[iParam2] = iParam4;
	return 1;
}

void func_1307(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_981(&(uParam0->f_2335), iVar0))
		{
			if (func_907(uParam1, iVar0))
			{
				if (aggregate_func_5974(uParam1, iVar0) <= 0)
				{
					func_1036(&(uParam0->f_2335), iVar0, func_1570());
				}
				else if (func_1280(uParam1, &(uParam0->f_151.f_11), iVar0))
				{
					func_1036(&(uParam0->f_2335), iVar0, func_1571());
				}
			}
			else if (func_753(uParam1, iVar0))
			{
				func_1036(&(uParam0->f_2335), iVar0, func_1039());
			}
		}
		iVar0++;
	}
}

bool func_1308(var uParam0, int iParam1, int iParam2)
{
	return func_1572(&((uParam0->f_39[iParam1 /*56*/])->f_31), &((uParam0->f_39[iParam2 /*56*/])->f_31)) > 0;
}

bool func_1310(var uParam0, int iParam1, int iParam2)
{
	return func_1572(&((uParam0->f_39[iParam1 /*56*/])->f_31), &((uParam0->f_39[iParam2 /*56*/])->f_31)) >= 0;
}

bool func_1311(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_485)
	{
		return false;
	}
	else if (iParam2 < 0 || iParam2 >= 6)
	{
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_376[iParam1 /*18*/])->f_9)
		{
			if (&(uParam0->f_376[iParam1 /*18*/])->f_2[iVar0] == iParam2)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1312(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (uParam0->f_39[iParam1 /*56*/])->f_3;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 > 0)
	{
		iVar1 = func_1573(uParam0, (iParam2 - 1));
	}
	iVar2 = func_1573(uParam0, iParam2);
	return (aggregate_func_4937(iVar2, iVar0) - aggregate_func_4937(iVar1, iVar0));
}

bool func_1313(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 == (uParam0->f_39[iParam2 /*56*/])->f_31.f_24)
	{
		if ((uParam0->f_39[iParam1 /*56*/])->f_31.f_24 > 1)
		{
			return true;
		}
		if (MISC::ABSI(((uParam0->f_39[iParam2 /*56*/])->f_31[0 /*2*/] - (uParam0->f_39[iParam1 /*56*/])->f_31[0 /*2*/]) // PointerArith) <= 3)
		{
			return true;
		}
	}
	return false;
}

bool func_1314(var uParam0, int iParam1, int iParam2)
{
	return func_1572(&((uParam0->f_39[iParam1 /*56*/])->f_31), &((uParam0->f_39[iParam2 /*56*/])->f_31)) == 0;
}

bool func_1316(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 13);
}

bool func_1317(var uParam0)
{
	return func_364((uParam0->f_141 || uParam0->f_142)) <= 1;
}

bool func_1318(var uParam0)
{
	return uParam0->f_144 == &uParam0->f_134[0];
}

int func_1320(var uParam0, int iParam1)
{
	if ((((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && uParam0->f_149 != 0) && aggregate_func_3909(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1321(var uParam0, int iParam1)
{
	if (((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && uParam0->f_149 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1322(var uParam0, int iParam1)
{
	if ((((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && !MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && MISC::IS_BIT_SET(uParam0->f_149, iParam1)) && aggregate_func_3909(uParam0, iParam1, 2, 5))
	{
		return 1;
	}
	return 0;
}

int func_1323(var uParam0, int iParam1)
{
	if (((MISC::IS_BIT_SET(uParam0->f_144, iParam1) && MISC::IS_BIT_SET(uParam0->f_141, iParam1)) && !MISC::IS_BIT_SET(uParam0->f_146, iParam1)) && MISC::IS_BIT_SET(uParam0->f_149, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1324(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_485)
	{
		iVar2 = 0;
		while (iVar2 < (uParam0->f_376[iVar1 /*18*/])->f_9)
		{
			if (&(uParam0->f_376[iVar1 /*18*/])->f_2[iVar2] == iParam1)
			{
				iVar0 = (&uParam0->f_376[iVar1 /*18*/] + iVar0);
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1325(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = { *uParam0 };
	uParam1->f_2 = iParam2;
	uParam1->f_15.f_23 = func_1576(iParam2);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_907(uParam1, iVar2))
		{
			func_1577(&((uParam1->f_39[iVar2 /*56*/])->f_31), &((uParam1->f_39[iVar2 /*56*/])->f_7), &(uParam1->f_15));
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_485)
	{
		iVar3 = -1;
		iVar1 = 0;
		while (iVar1 < (uParam1->f_376[iVar0 /*18*/])->f_9)
		{
			iVar2 = &(uParam1->f_376[iVar0 /*18*/])->f_2[iVar1];
			if (func_907(uParam1, iVar2))
			{
				if (iVar3 == -1 || func_1308(uParam1, iVar2, iVar3))
				{
					iVar3 = iVar2;
				}
			}
			iVar1++;
		}
		(uParam1->f_376[iVar0 /*18*/])->f_17 = 0;
		if (iVar3 != -1)
		{
			iVar1 = 0;
			while (iVar1 < (uParam1->f_376[iVar0 /*18*/])->f_9)
			{
				iVar2 = &(uParam1->f_376[iVar0 /*18*/])->f_2[iVar1];
				if (func_907(uParam1, iVar2))
				{
					if (iVar2 == iVar3 || func_1310(uParam1, iVar2, iVar3))
					{
						(uParam1->f_376[iVar0 /*18*/])->f_10[(uParam1->f_376[iVar0 /*18*/])->f_17] = iVar2;
						(uParam1->f_376[iVar0 /*18*/])->f_17++;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1327(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_2020[iVar0] != 0)
		{
			func_1440(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_1328(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = fParam3;
	while (iParam1 & 63 != 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar1))
			{
				func_1578(uParam0, iVar1, iParam2, -fVar0);
				MISC::CLEAR_BIT(&iParam1, iVar1);
				fVar0 = (fVar0 + fParam4);
			}
			else
			{
				iVar1 = (iVar1 + 1 % 6);
				iVar2++;
			}
		}
	}
}

char* func_1329(var uParam0, char* sParam1, int iParam2)
{
	return MISC::_CREATE_VAR_STRING(10, "MGPKR_INFO_OUTCOME_WON", sParam1, func_1437(uParam0, iParam2));
}

void func_1330(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return;
	}
	if (((*uParam0)[iParam1 /*13*/])->f_12 < 0)
	{
		if (-((*uParam0)[iParam1 /*13*/])->f_12 >= 3)
		{
			MISC::SET_BIT(&(uParam0->f_133), iParam1);
		}
		((*uParam0)[iParam1 /*13*/])->f_12 = 0;
	}
	((*uParam0)[iParam1 /*13*/])->f_12++;
}

bool func_1333(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1 /*63*/] != 0)
	{
		if (!PED::IS_PED_INJURED(&(uParam0->f_818[iParam1 /*63*/])))
		{
			return true;
		}
	}
	return false;
}

bool func_1334(var uParam0)
{
	return &uParam0->f_79[0 /*4*/] == 8;
}

bool func_1336(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 3);
}

bool func_1337(var uParam0)
{
	return MISC::IS_BIT_SET((uParam0->f_79[0 /*4*/])->f_2, 5);
}

bool func_1338(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<2> Var3;
	struct<2> Var28;
	int iVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	int iVar57;

	if ((uParam0->f_376[iParam1 /*18*/])->f_17 == 0)
	{
		return false;
	}
	iVar0 = &(uParam0->f_376[iParam1 /*18*/])->f_10[0];
	Var3 = 11;
	Var28 = 11;
	iVar56 = 0;
	while (iVar56 < (uParam0->f_376[iParam1 /*18*/])->f_9)
	{
		iVar1 = &(uParam0->f_376[iParam1 /*18*/])->f_2[iVar56];
		bVar2 = false;
		iVar57 = 0;
		while (iVar57 < (uParam0->f_376[iParam1 /*18*/])->f_17)
		{
			if (&(uParam0->f_376[iParam1 /*18*/])->f_10[iVar57] == iVar1)
			{
				bVar2 = true;
			}
			else
			{
				iVar57++;
			}
		}
		if (func_695(uParam0, iVar1) && !bVar2)
		{
			Var3 = { (uParam0->f_39[iVar0 /*56*/])->f_31 };
			Var28 = { (uParam0->f_39[iVar1 /*56*/])->f_31 };
			if (Var3.f_24 == Var28.f_24)
			{
				switch (Var3.f_24)
				{
					case 0:
						iVar53 = 1;
						break;
					case 1:
						iVar53 = 2;
						break;
					case 2:
						iVar53 = 4;
						break;
					case 3:
						iVar53 = 3;
						break;
					case 4:
						iVar53 = 5;
						break;
					case 5:
						iVar53 = 5;
						break;
					case 6:
						iVar53 = 5;
						break;
					case 7:
						iVar53 = 4;
						break;
					case 8:
						iVar53 = 5;
						break;
					case 9:
						iVar53 = 5;
						break;
					default:
						return false;
				}
				bVar55 = true;
				iVar54 = 0;
				while (iVar54 < iVar53)
				{
					if (&Var3[iVar54 /*2*/] != &Var28[iVar54 /*2*/])
					{
						bVar55 = false;
					}
					else
					{
						iVar54++;
					}
				}
				if (bVar55)
				{
					return true;
				}
			}
		}
		iVar56++;
	}
	return false;
}

bool func_1339(var uParam0)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_485 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_485)
		{
			if ((uParam0->f_376[0 /*18*/])->f_17 != (uParam0->f_376[iVar0 /*18*/])->f_17)
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 < (uParam0->f_376[iVar0 /*18*/])->f_17)
			{
				if (&(uParam0->f_376[0 /*18*/])->f_10[iVar1] != &(uParam0->f_376[iVar0 /*18*/])->f_10[iVar1])
				{
					return false;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return true;
}

char* func_1340()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT");
}

char* func_1341()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_KICKER");
}

char* func_1342(int iParam0)
{
	if (iParam0 <= 1)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_1");
	}
	if (iParam0 == 2)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_2");
	}
	if (iParam0 == 3)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_3");
	}
	if (iParam0 == 4)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_4");
	}
	if (iParam0 == 5)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_5");
	}
	if (iParam0 == 6)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_6");
	}
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_PCOUNT_MULTIPLE");
}

int func_1343(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= 6)
	{
		return -1;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_485)
		{
			iVar0 = 0;
			while (iVar0 < (uParam0->f_376[iVar1 /*18*/])->f_17)
			{
				if (&(uParam0->f_376[iVar1 /*18*/])->f_10[iVar0] == iParam1)
				{
					return iVar1;
				}
				iVar0++;
			}
			iVar1++;
		}
	}
	return -1;
}

char* func_1344(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_POT");
	}
	if (iParam0 == 0)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_MAIN_POT");
	}
	if (iParam0 == 1 && iParam1 == 2)
	{
		return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_SIDE_POT");
	}
	return MISC::_CREATE_VAR_STRING(10, "MGPKR_MSG_NTH_SIDE_POT", func_1355(iParam0));
}

int func_1345(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < uParam0->f_485)
	{
		if ((uParam0->f_376[iVar2 /*18*/])->f_17 > 0)
		{
			if (iVar0 < &uParam0->f_376[iVar2 /*18*/] || iVar1 == -1)
			{
				iVar0 = &uParam0->f_376[iVar2 /*18*/];
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

char* func_1346()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_LARGEST_POT");
}

void func_1347(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;

	Var0 = { aggregate_func_4257(-1892463704, iParam0) };
	Var2 = { aggregate_func_4257(-2115175355, iParam0) };
	Var4 = { aggregate_func_4257(-23039984, iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var0, true);
	STATS::_0x6A0184E904CDF25E(&Var2, true);
	iVar6 = 0;
	if (STATS::STAT_ID_GET_INT(&Var2, &iVar6))
	{
		STATS::_0x91A4F58E01ED5E4C(&Var4, iVar6);
	}
	STATS::STAT_ID_GET_INT(&Var0, &uVar7);
	STATS::STAT_ID_GET_INT(&Var2, &uVar8);
	STATS::STAT_ID_GET_INT(&Var4, &uVar9);
}

void func_1348(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;

	Var0 = { aggregate_func_4257(1374282888, iParam0) };
	Var2 = { aggregate_func_4257(-2115175355, iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var0, true);
	STATS::_0x0FEE2561120F3333(&Var2);
	STATS::STAT_ID_GET_INT(&Var0, &uVar4);
	STATS::STAT_ID_GET_INT(&Var2, &uVar5);
}

bool func_1350(float fParam0)
{
	return (fParam0 >= 0.25f && fParam0 < 0.5f);
}

bool func_1351(float fParam0)
{
	return fParam0 < 0.25f;
}

char* func_1353(var uParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_OUTCOME_STEAL", func_1437(uParam0, iParam1));
}

char* func_1355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_MAIN");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_1ST");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_2ND");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_3RD");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_4TH");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_5TH");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_6TH");
		default:
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_MSG_NTH_MAIN");
}

int func_1356(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (uParam0->f_376[iParam2 /*18*/])->f_17)
	{
		if (&(uParam0->f_376[iParam2 /*18*/])->f_10[iVar0] == iParam1)
		{
			return (&uParam0->f_376[iParam2 /*18*/] / (uParam0->f_376[iParam2 /*18*/])->f_17);
		}
		iVar0++;
	}
	return 0;
}

bool func_1357(var uParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET((uParam0->f_307[iParam1 /*20*/])->f_1, iParam2);
}

char* func_1359()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MUCK");
}

bool func_1360(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (uParam0->f_376[iParam2 /*18*/])->f_17)
	{
		if (&(uParam0->f_376[iParam2 /*18*/])->f_10[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1361(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return MISC::IS_BIT_SET(uParam0->f_1617, iParam1);
}

void func_1362(var uParam0, int iParam1)
{
	uParam0->f_2010[iParam1] = 0;
}

bool func_1363(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_133, iParam1) && ((*uParam0)[iParam1 /*13*/])->f_12 < 0);
}

bool func_1364(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_133, iParam1) && ((*uParam0)[iParam1 /*13*/])->f_12 > 0);
}

bool func_1365(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return ((*uParam0)[iParam1 /*13*/])->f_12 >= 3;
}

bool func_1366(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return -((*uParam0)[iParam1 /*13*/])->f_12 >= 3;
}

bool func_1367(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return ((*uParam0)[iParam1 /*13*/])->f_12 > 0;
}

bool func_1368(var uParam0, int iParam1)
{
	if (!uParam0->f_118)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	if (!uParam0[iParam1 /*13*/])
	{
		return false;
	}
	return ((*uParam0)[iParam1 /*13*/])->f_12 < 0;
}

void func_1369(var uParam0)
{
	if (!uParam0->f_118)
	{
		return;
	}
	uParam0->f_133 = 0;
}

int func_1370(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = (&(uParam0->f_74[iParam1 /*30*/])->f_10[iVar1] + iVar0);
		iVar1++;
	}
	return iVar0;
}

bool func_1371(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_1617, iParam1) && &uParam0->f_1618[iParam1] == iParam2);
}

bool func_1372(var uParam0, var uParam1)
{
	if (func_200(&(uParam1->f_416), uParam1->f_9) && func_618(uParam0, uParam1->f_9) == 0)
	{
		return true;
	}
	return false;
}

bool func_1373(var uParam0, var uParam1)
{
	return aggregate_func_2020() >= func_953(uParam0, uParam1->f_11.f_12);
}

void func_1376(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_1670.f_112 = iParam1;
	uParam0->f_1670.f_112.f_1 = iParam2;
	uParam0->f_1670.f_112.f_2 = iParam3;
	aggregate_func_4283(&(uParam0->f_1670.f_112.f_3));
}

int func_1377(var uParam0, int iParam1)
{
	var uVar0;
	char[] cVar16[8];
	int iVar32;

	if (iParam1 < 0 || iParam1 >= 6)
	{
	}
	else if (&uParam0->f_307[iParam1 /*20*/])
	{
	}
	else
	{
		uParam0->f_307[iParam1 /*20*/] = 1;
		(uParam0->f_307[iParam1 /*20*/])->f_1 = 0;
		(uParam0->f_307[iParam1 /*20*/])->f_2 = 0;
		StringCopy(&((uParam0->f_307[iParam1 /*20*/])->f_3), "", 128);
		(uParam0->f_307[iParam1 /*20*/])->f_19 = 0;
		func_1407(uParam0, iParam1, &uVar0, &cVar16);
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], &uVar0);
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], &cVar16);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_CASH", 0));
		aggregate_func_3908(uParam0->f_34[iParam1 /*21*/], " ");
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 1);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 0);
		func_1515(uParam0->f_34[iParam1 /*21*/], -1);
		aggregate_func_3725(uParam0->f_34[iParam1 /*21*/], 0);
		if (!uParam0->f_293)
		{
			func_1579(uParam0, iParam1);
		}
		iVar32 = 0;
		while (iVar32 < 2)
		{
			func_1503(uParam0->f_34[iParam1 /*21*/], iVar32, "");
			iVar32++;
		}
		return 1;
	}
	return 0;
}

bool func_1382(float fParam0)
{
	return fParam0 >= 0.8f;
}

char* func_1383()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_LEAVING");
}

int func_1384(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 > iParam2 * 2)
	{
		return 0;
	}
	else if (iParam1 > iParam2)
	{
		return 1;
	}
	else if (iParam1 > 0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	return 2;
}

bool func_1385(var uParam0, int iParam1)
{
	return &uParam0->f_173[iParam1] != 0;
}

char* func_1387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BANK_S1_01";
		case 1:
			return "BANK_S1_02";
		case 2:
			return "BANK_S1_03";
		case 3:
			return "BANK_S1_05";
		case 4:
			return "BANK_S1_04";
		default:
			break;
	}
	return "";
}

void func_1388(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, bParam1);
}

void func_1389(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= func_1541(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (func_1541(iVar2) * 3 + func_1541(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (func_1541(iVar2) * 2 + func_1541(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (func_1541(iVar2) * 1 + func_1541(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = aggregate_func_4937(iParam0, (iVar0 * func_1541(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
		}
	}
}

void func_1390(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam3[iVar0] > 0)
		{
			func_1305(uParam0, iParam1, iVar0, uParam2[iVar0], uParam3[iVar0], func_1148(uParam2[iVar0], uParam3[iVar0], 10), bParam4, 0);
		}
		else
		{
			aggregate_func_1477(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

void func_1391(var uParam0, int iParam1)
{
	if ((uParam0->f_818[iParam1 /*63*/])->f_53)
	{
	}
	else
	{
		(uParam0->f_818[iParam1 /*63*/])->f_53 = 1;
		ANIMSCENE::_0x99B2A2E3655DEAF1(&(uParam0->f_818[iParam1 /*63*/]), "PokerSeatedNoCards");
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_818[iParam1 /*63*/]), false);
		PED::SET_PED_CAN_RAGDOLL(&(uParam0->f_818[iParam1 /*63*/]), true);
	}
}

bool func_1393(var uParam0, int iParam1)
{
	int iVar0;

	if ((iParam1 >= 0 && iParam1 < 6) && &uParam0->f_818[iParam1 /*63*/] != 0)
	{
		iVar0 = &uParam0->f_818[iParam1 /*63*/];
		if (((((!PED::IS_PED_INJURED(iVar0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0)) && (uParam0->f_818[iParam1 /*63*/])->f_1 != 0) && (uParam0->f_818[iParam1 /*63*/])->f_8 != 4) && (uParam0->f_818[iParam1 /*63*/])->f_8 != 29) && (uParam0->f_818[iParam1 /*63*/])->f_8 != 30)
		{
			return true;
		}
	}
	return false;
}

int func_1394(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 63;
	if (uParam0->f_8 != -1f)
	{
		if (*uParam0 != 0 && MISC::GET_GAME_TIMER() < (*uParam0 + BUILTIN::ROUND((uParam0->f_8 * 1000f))))
		{
			return 0;
		}
	}
	if (uParam0->f_9 != -1f)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (&uParam0->f_1[iVar1] != 0 && MISC::GET_GAME_TIMER() < (&uParam0->f_1[iVar1] + BUILTIN::ROUND((uParam0->f_9 * 1000f))))
			{
				MISC::CLEAR_BIT(&iVar0, iVar1);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1395(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1[6];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 60000);
	if (iVar0 < iParam4 * 600)
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 6)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar9))
			{
				iVar1[iVar8] = iVar9;
				iVar8++;
			}
			iVar9++;
		}
		if (iVar8 > 0)
		{
			iVar9 = &iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
			iVar10 = 0;
			while (iVar10 < 6)
			{
				if (MISC::IS_BIT_SET(iParam1, iVar9))
				{
					*iParam6 = -1;
					iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					iVar11 = 0;
					while (iVar11 < 6)
					{
						if (MISC::IS_BIT_SET(iParam3, iVar12) && iVar12 != iVar9)
						{
							*iParam6 = iVar12;
						}
						else
						{
							iVar12 = (iVar12 + 1 % 6);
							iVar11++;
						}
					}
					if (func_1226(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iVar9, 1, *iParam6))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_2839.f_807, sParam2, &(uParam0->f_2839.f_818[iVar9 /*63*/]), 0, uParam0->f_2839.f_40))
						{
							*iParam5 = iVar9;
							return true;
						}
					}
				}
				iVar9 = (iVar9 + 1 % 6);
				iVar10++;
			}
		}
		return false;
	}
	return false;
}

bool func_1396(var uParam0, int iParam1)
{
	if ((uParam0->f_8 != -1f && *uParam0 != 0) && MISC::GET_GAME_TIMER() < (*uParam0 + BUILTIN::ROUND((uParam0->f_8 * 1000f))))
	{
		return false;
	}
	if ((((iParam1 >= 0 && iParam1 < 6) && uParam0->f_9 != -1f) && &uParam0->f_1[iParam1] != 0) && MISC::GET_GAME_TIMER() < (&uParam0->f_1[iParam1] + BUILTIN::ROUND((uParam0->f_9 * 1000f))))
	{
		return false;
	}
	return true;
}

bool func_1397(var uParam0)
{
	return uParam0->f_146 != uParam0->f_148;
}

bool func_1398(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_146, iParam1) != MISC::IS_BIT_SET(uParam0->f_148, iParam1);
}

bool func_1400(float fParam0)
{
	return fParam0 > 0f;
}

char* func_1401(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			return "PBL_TAKE_POT_A";
		case 1:
			return "PBL_TAKE_POT_B";
		case 2:
			return "PBL_TAKE_POT_C";
		default:
			break;
	}
	return "PBL_TAKE_POT_A";
}

void func_1402(var uParam0)
{
	if (uParam0->f_41 == 0)
	{
	}
	else if (uParam0->f_41 == 1)
	{
		uParam0->f_41 = 2;
	}
}

void func_1403(var uParam0, int iParam1)
{
	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 28);
	}
}

void func_1404(var uParam0, var uParam1)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam1))
	{
		return;
	}
	HUD::_0x93171DDDAB274EB8(*uParam1, func_1580(uParam0));
}

void func_1405(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (&uParam0->f_34[iVar0 /*21*/])
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_34[iVar0 /*21*/])->f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_162 = iParam1;
	uParam0->f_161 = MISC::GET_FRAME_COUNT() + 30;
}

void func_1407(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	switch (&uParam0->f_173[iParam1])
	{
		case 0:
			StringCopy(sParam2, "avatar_generic", 128);
			StringCopy(sParam3, "minigames_hud", 128);
			break;
		case 3:
			*sParam2 = { *(uParam0->f_194[iParam1 /*16*/]) };
			*sParam3 = { *(uParam0->f_194[iParam1 /*16*/]) };
			break;
		case 1:
		case 2:
		case 4:
		default:
			StringCopy(sParam2, "avatar_generic", 128);
			StringCopy(sParam3, "minigames_hud", 128);
			break;
	}
}

int func_1415(int iParam0, bool bParam1)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (bParam1)
		{
			return 8;
		}
		else
		{
			return 12;
		}
	}
	return 0;
}

int func_1416(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 74:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 40:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 81:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 98:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (bParam3)
		{
			if (iParam2 == -1)
			{
				iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
						default:
							break;
					}
					return -1726696266;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
						default:
							break;
					}
					return 4921971;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
						default:
							break;
					}
					return 1469806260;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
						default:
							break;
					}
					return -1387257155;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
						default:
							break;
					}
					return -815574510;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
						default:
							break;
					}
					return -321409750;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
						default:
							break;
					}
					return 1032745865;
			}
		}
		else
		{
			if (iParam2 == -1)
			{
				iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
			}
			switch (iParam1)
			{
				case 5:
					switch (iParam2)
					{
						case 0:
							return 68127406;
						case 1:
							return 912158539;
						case 2:
							return 629329300;
						case 3:
							return 1371088384;
						case 4:
							return 1263868216;
						case 5:
							return 2106064285;
						case 6:
							return 1754977219;
						case 7:
							return -1726696266;
						case 8:
							return -1978394955;
						case 9:
							return -820633060;
						case 10:
							return -44073298;
						case 11:
							return -342303967;
						default:
							break;
					}
					return 68127406;
				case 40:
					switch (iParam2)
					{
						case 0:
							return 316456870;
						case 1:
							return -661468397;
						case 2:
							return -431954321;
						case 3:
							return -1139797490;
						case 4:
							return -875384429;
						case 5:
							return 436555239;
						case 6:
							return 666823002;
						case 7:
							return 4921971;
						case 8:
							return 251738079;
						case 9:
							return 478204342;
						case 10:
							return 777155929;
						case 11:
							return 1841389;
						default:
							break;
					}
					return 316456870;
				case 121:
					switch (iParam2)
					{
						case 0:
							return 2098938291;
						case 1:
							return 1839440580;
						case 2:
							return 680401050;
						case 3:
							return -1892751910;
						case 4:
							return 1174655877;
						case 5:
							return 979024947;
						case 6:
							return -240866616;
						case 7:
							return 1469806260;
						case 8:
							return 317713758;
						case 9:
							return 1934601404;
						case 10:
							return 487194674;
						case 11:
							return -1833636986;
						default:
							break;
					}
					return 2098938291;
				case 81:
					switch (iParam2)
					{
						case 0:
							return -435547108;
						case 1:
							return -128698192;
						case 2:
							return 226255616;
						case 3:
							return -478015708;
						case 4:
							return -194891548;
						case 5:
							return 112776593;
						case 6:
							return 411040031;
						case 7:
							return -1387257155;
						case 8:
							return -1087322498;
						case 9:
							return 2089668521;
						case 10:
							return 1791437852;
						case 11:
							return 1426194578;
						default:
							break;
					}
					return -435547108;
				case 98:
					switch (iParam2)
					{
						case 0:
							return 1194574257;
						case 1:
							return 2093821155;
						case 2:
							return -1582008655;
						case 3:
							return -1887776194;
						case 4:
							return -967360518;
						case 5:
							return -1276208343;
						case 6:
							return -506398995;
						case 7:
							return -815574510;
						case 8:
							return 104710086;
						case 9:
							return -1562249180;
						case 10:
							return -1812506033;
						case 11:
							return -1431009331;
						default:
							break;
					}
					return 1194574257;
				case 111:
					switch (iParam2)
					{
						case 0:
							return -1449777556;
						case 1:
							return 1700437490;
						case 2:
							return -2029723322;
						case 3:
							return 1088279801;
						case 4:
							return 1949514659;
						case 5:
							return 772091720;
						case 6:
							return 1338340040;
						case 7:
							return -321409750;
						case 8:
							return -1233239944;
						case 9:
							return 1051251111;
						case 10:
							return -262949646;
						case 11:
							return -726499920;
						default:
							break;
					}
					return -1449777556;
				case 80:
					switch (iParam2)
					{
						case 0:
							return -1600439903;
						case 1:
							return 1508387900;
						case 2:
							return 1147797824;
						case 3:
							return 1947066503;
						case 4:
							return 1716995354;
						case 5:
							return 401713232;
						case 6:
							return 163056605;
						case 7:
							return 1032745865;
						case 8:
							return 793499396;
						case 9:
							return 883482182;
						case 10:
							return 1123711721;
						case 11:
							return -903083698;
						default:
							break;
					}
					return -1600439903;
			}
		}
	}
	return 0;
}

void func_1417(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (!aggregate_func_4375(iParam0))
	{
		return;
	}
	bVar0 = aggregate_func_4314() == aggregate_func_5278(iParam0);
	if (aggregate_func_5362(iParam0, 1048576))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	iVar1 = aggregate_func_5278(iParam0);
	if (iVar1 != -1 && aggregate_func_3730(iVar1, 255))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	if (aggregate_func_3792(iParam1) || aggregate_func_1618(iParam0) == 1)
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 0;
		return;
	}
	if (iParam1 == 38 && !func_1588(iParam0))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 4;
		}
		return;
	}
	if (aggregate_func_3638())
	{
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 0;
		return;
	}
	iVar2 = aggregate_func_5121(iParam0);
	if (iVar2 != 0 && (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar2) || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2)))
	{
		aggregate_func_8132(iParam0, 1);
		aggregate_func_8132(iParam0, 4);
		if (bVar0)
		{
			aggregate_func_4449(iParam1, 256);
			aggregate_func_4449(iParam1, 512);
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 10;
		}
		return;
	}
	bVar3 = true;
	if (aggregate_func_5362(iParam0, 1))
	{
		aggregate_func_8125(iParam0, 1);
	}
	if (aggregate_func_5362(iParam0, 4))
	{
		aggregate_func_8125(iParam0, 4);
	}
	iVar4 = Global_1915170->f_19844;
	if (bVar3 && Global_1915170->f_19844 & 128 == 128)
	{
		if (!aggregate_func_4458(iParam1, 536870912))
		{
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 13;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915170->f_19844 & 8192 == 8192)
	{
		if (iParam1 == 29)
		{
			(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 14;
			bVar3 = false;
		}
	}
	if (bVar3 && Global_1915170->f_19844 & 2048 == 2048)
	{
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 15;
		bVar3 = false;
	}
	aggregate_func_4247(&iVar4, 2194);
	if (bVar3 && iVar4 != 0)
	{
		bVar3 = false;
	}
	if (((bVar3 && (iParam1 != 28 && iParam1 != 29)) && !(Global_1051387->f_69[iParam1 /*76*/])->f_49) && !(Global_1051387->f_69[iParam1 /*76*/])->f_50 & 16384 != 0)
	{
		(Global_1051387->f_69[iParam1 /*76*/])->f_66 = 6;
		bVar3 = false;
	}
	if (bVar3)
	{
		aggregate_func_4789(iParam1, 256);
		aggregate_func_4789(iParam1, 512);
	}
	else
	{
		aggregate_func_4449(iParam1, 256);
		aggregate_func_4449(iParam1, 512);
	}
}

void func_1422(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_4369(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && !aggregate_func_4458(iVar0, 65536))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_4))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, true);
		}
		ENTITY::DELETE_ENTITY(&(uParam0->f_4));
	}
	if (iVar0 == 30)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (&Global_1051387->f_3582[iVar1 /*19*/] == *uParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_8))
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar1 /*19*/])->f_8))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar1 /*19*/])->f_8, true, true);
					}
					PED::DELETE_PED(&((Global_1051387->f_3582[iVar1 /*19*/])->f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar1 /*19*/])->f_15))
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar1 /*19*/])->f_15))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar1 /*19*/])->f_15, true, true);
					}
					PED::DELETE_PED(&((Global_1051387->f_3582[iVar1 /*19*/])->f_15));
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	aggregate_func_4449(iVar0, 2097152);
	if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_15))
	{
		PROPSET::_DELETE_PROPSET(uParam0->f_15, true, true);
	}
	uParam0->f_10 = 0;
	if (aggregate_func_4429(iVar0, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iVar0 /*76*/])->f_22);
		aggregate_func_4449(iVar0, 262144);
	}
	if ((aggregate_func_4429(iVar0, 16384) && aggregate_func_4314() != aggregate_func_5278(*uParam0)) && func_1603(iVar0))
	{
		iVar2 = TASK::_0x295514F198EFD0CA((Global_1051387->f_69[iVar0 /*76*/])->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iVar0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iVar0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iVar0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iVar0 /*447*/])->f_16);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		aggregate_func_4449(iVar0, 16384);
	}
}

void func_1423(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_9 = 0;
	if (uParam0->f_6 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
		uParam0->f_6 = 0;
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_8);
	}
}

float func_1426(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = func_1605(iParam0, 0);
	fVar0 = (fVar0 + 20f);
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_1427(var uParam0, int iParam1)
{
	if (iParam1 == 36)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4)) && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_4))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		}
	}
	switch (uParam0->f_9)
	{
		case 0:
			if ((BUILTIN::VDIST2(Global_36, uParam0->f_1) < func_1605(iParam1, 1) && func_1606(iParam1, *uParam0)) && !aggregate_func_5362(*uParam0, 1))
			{
				aggregate_func_4242(uParam0, 1);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4270(uParam0->f_5)))
			{
				if (!func_1609(*uParam0, &(uParam0->f_6), &(uParam0->f_7)) || uParam0->f_6 == 0)
				{
					return;
				}
				STREAMING::REQUEST_MODEL(uParam0->f_6, false);
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6))
				{
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
				{
					uParam0->f_8 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_6, uParam0->f_7);
				}
				else if (!PED::_0x610438375E5D1801(uParam0->f_8))
				{
					return;
				}
				uParam0->f_5 = aggregate_func_2073(uParam0->f_6, uParam0->f_1, 0, 0, 1, 0, 1, 1, 1, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_5, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				ENTITY::SET_ENTITY_PROOFS(uParam0->f_5, 127, false);
				PED::SET_PED_CAN_RAGDOLL(uParam0->f_5, false);
				PED::_0xAE6004120C18DF97(uParam0->f_5, 0, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 146, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 26, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 44, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 422, true);
				uParam0->f_4 = aggregate_func_4270(uParam0->f_5);
				func_1610(iParam1, uParam0->f_5);
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) || ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
				{
					aggregate_func_4242(uParam0, 0);
					return;
				}
				if (uParam0->f_7 == 0)
				{
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_5))
				{
					return;
				}
				else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_8))
				{
					PED::_0x1902C4CFCC5BE57C(uParam0->f_5, uParam0->f_7);
					PED::_0xCC8CA3E88256E58F(uParam0->f_5, 1, 1, 1, 1, false);
					PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_8);
				}
				aggregate_func_4242(uParam0, 2);
			}
			break;
		case 2:
			if (BUILTIN::VDIST2(Global_36, uParam0->f_1) > func_1426(iParam1, 1) || !func_1606(iParam1, *uParam0))
			{
				func_1422(uParam0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				aggregate_func_4242(uParam0, 0);
			}
			break;
	}
}

int func_1428(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = ((aggregate_func_3792(iParam0) || aggregate_func_3730(aggregate_func_5278(&(Global_1051387->f_3693[iParam0 /*16*/])), 255)) || aggregate_func_1618(&(Global_1051387->f_3693[iParam0 /*16*/])) == 1);
	iVar1 = aggregate_func_5121(&(Global_1051387->f_3693[iParam0 /*16*/]));
	bVar0 = ((bVar0 || !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1)) || !UNLOCK::_UNLOCK_IS_VISIBLE(iVar1));
	if (iParam0 == 38)
	{
		bVar0 = (bVar0 || !func_1588(&(Global_1051387->f_3693[iParam0 /*16*/])));
	}
	if (!bVar0)
	{
		if (!aggregate_func_4429(iParam0, 2097152) && (Global_1051387->f_3693[iParam0 /*16*/])->f_10 == 0)
		{
			if (func_1611(&(Global_1051387->f_3693[iParam0 /*16*/]), &((Global_1051387->f_3693[iParam0 /*16*/])->f_11), &((Global_1051387->f_3693[iParam0 /*16*/])->f_14), &((Global_1051387->f_3693[iParam0 /*16*/])->f_10)))
			{
				if ((Global_1051387->f_3693[iParam0 /*16*/])->f_10 == 0)
				{
					aggregate_func_4789(iParam0, 2097152);
				}
			}
		}
		if ((Global_1051387->f_3693[iParam0 /*16*/])->f_10 != 0 && BUILTIN::VDIST2((Global_1051387->f_3693[iParam0 /*16*/])->f_11, Global_36) < func_1605(iParam0, 1))
		{
			if (!aggregate_func_4429(iParam0, 2097152))
			{
				if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
				{
					PROPSET::_REQUEST_PROPSET_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10);
					if (!PROPSET::_HAS_PROPSET_LOADED_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10))
					{
						return 0;
					}
					(Global_1051387->f_3693[iParam0 /*16*/])->f_15 = PROPSET::_CREATE_PROPSET_2((Global_1051387->f_3693[iParam0 /*16*/])->f_10, (Global_1051387->f_3693[iParam0 /*16*/])->f_11, 7, (Global_1051387->f_3693[iParam0 /*16*/])->f_14, 1200f, false, true);
					if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
					{
						return 0;
					}
					aggregate_func_4789(iParam0, 2097152);
				}
				else
				{
					PROPSET::_DELETE_PROPSET((Global_1051387->f_3693[iParam0 /*16*/])->f_15, true, true);
				}
			}
			else if (!PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
			{
				aggregate_func_4449(iParam0, 2097152);
			}
		}
	}
	else if (aggregate_func_4429(iParam0, 2097152))
	{
		if (PROPSET::_DOES_PROPSET_EXIST((Global_1051387->f_3693[iParam0 /*16*/])->f_15))
		{
			PROPSET::_DELETE_PROPSET((Global_1051387->f_3693[iParam0 /*16*/])->f_15, true, true);
		}
		aggregate_func_4449(iParam0, 2097152);
	}
	return 1;
}

void func_1429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	iVar0 = aggregate_func_4369(iParam0);
	iVar1 = aggregate_func_4314();
	if (iVar1 != aggregate_func_5278(iParam0))
	{
		if (Global_1051387->f_3666 != 0)
		{
			func_1612();
		}
		return;
	}
	if (!aggregate_func_6126(iParam0, iVar0))
	{
		return;
	}
	iVar3 = func_1614(iParam0);
	if (iVar3 == 0)
	{
		return;
	}
	if (Global_1051387->f_3666 != 0)
	{
		if (Global_1051387->f_3666.f_1 != -1)
		{
			if ((!func_1615(iParam0) && BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[Global_1051387->f_3666.f_1 /*76*/])->f_3) > (15f * 15f)) || aggregate_func_4946())
			{
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				func_1612();
			}
		}
		else
		{
			if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			func_1612();
			return;
		}
	}
	else if ((BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar0 /*76*/])->f_3) > (15f * 15f) && iVar0 != 36) || aggregate_func_4946())
	{
		return;
	}
	switch (Global_1051387->f_3666)
	{
		case 0:
			if (func_1615(iParam0) && BUILTIN::VDIST2(Global_36, (Global_1051387->f_69[iVar0 /*76*/])->f_3) > (15f * 15f))
			{
				func_1617(iParam0);
				aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				Global_1051387->f_3666.f_1 = iVar0;
				aggregate_func_5003(3);
			}
			else if (aggregate_func_1217(iVar0, 0) && (aggregate_func_4268(Global_1051387->f_3666.f_2) || aggregate_func_1170(Global_35, Global_1051387->f_3666.f_2, 1) > 1f))
			{
				if (iVar0 == 36)
				{
					aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED_THEATER", 10000, 0, 0, 0, 1);
				}
				else
				{
					aggregate_func_2975("SHOP_NOT_CURRENTLY_ALLOWED", 10000, 0, 0, 0, 1);
				}
				Global_1051387->f_3666.f_1 = iVar0;
				aggregate_func_5003(1);
			}
			break;
		case 1:
			if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				func_1612();
			}
			else
			{
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1);
				if (((((!iVar7 == 1 && !iVar7 == 0) && !PED::IS_PED_FALLING(Global_35)) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_CLIMBING(Global_35)) && !PED::IS_PED_VAULTING(Global_35))
				{
					Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
					iVar2 = 0;
					while (iVar2 <= (iVar3 - 1))
					{
						func_1621(iParam0, iVar2, &vVar4);
						if (BUILTIN::VDIST(Global_36, vVar4) < BUILTIN::VDIST(Global_36, Global_1051387->f_3666.f_2))
						{
							Global_1051387->f_3666.f_2 = { vVar4 };
						}
						iVar2++;
					}
					if (Global_1051387->f_3666.f_6 > 3)
					{
						aggregate_func_5003(3);
						return;
					}
					if (PED::_0xA911EE21EDF69DAF(Global_35))
					{
						iVar8 = aggregate_func_827(Global_35);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8) && PED::IS_PED_A_PLAYER(iVar8))
						{
							aggregate_func_5003(3);
							return;
						}
					}
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					TASK::_0x013A7BA5015C1372(Global_35, 1);
					TASK::_0xFA30E2254461ADEB(Global_35, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1051387->f_3666.f_2, 1f, 20000, 0.25f, 131072, 40000f);
					PED::SET_PED_CONFIG_FLAG(Global_35, 1, true);
					PED::SET_PED_CONFIG_FLAG(Global_35, 170, true);
					PED::_0xFD6943B6DF77E449(Global_35, true);
					PED::_0xC2266AA617668AD3(Global_35, 0.01f);
					PED::_0x73B6F907B913C860(Global_35, 0.4f);
					Global_1051387->f_3666.f_6++;
				}
				else if (!aggregate_func_1217(Global_1051387->f_3666.f_1, 0) || aggregate_func_1170(Global_35, Global_1051387->f_3666.f_2, 1) < 1f)
				{
					Global_1051387->f_3666.f_5 = ENTITY::GET_ENTITY_HEADING(Global_35);
					aggregate_func_5003(2);
				}
			}
			break;
		case 2:
			if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, Global_1051387->f_3666.f_5, false, false);
			}
			func_1612();
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				aggregate_func_30(Global_35, Global_1051387->f_3666.f_2, ENTITY::GET_ENTITY_HEADING(Global_35), 2, 1073741824 /* Float: 2f */);
				CAM::DO_SCREEN_FADE_IN(500);
				func_1612();
			}
			break;
		default:
			func_1612();
			break;
	}
}

int func_1433(var uParam0, int iParam1)
{
	return (iParam1 / uParam0->f_171);
}

int func_1434(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (fParam1 > uParam0->f_7)
	{
		iVar0 = 1;
	}
	else if (fParam1 < -uParam0->f_7)
	{
		iVar0 = -1;
	}
	if (iVar0 != uParam0->f_11 || bParam2)
	{
		uParam0->f_9 = 0f;
		uParam0->f_10 = *uParam0;
		uParam0->f_11 = iVar0;
		uParam0->f_12 = MISC::GET_GAME_TIMER();
		uParam0->f_13 = 0;
		return iVar0;
	}
	else if (iVar0 != 0)
	{
		uParam0->f_9 = (uParam0->f_9 + (uParam0->f_10 * MISC::GET_FRAME_TIME()));
		if (!uParam0->f_13)
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_12) >= BUILTIN::FLOOR((uParam0->f_5 * 1000f)) && MISC::ABSF(fParam1) >= uParam0->f_8)
			{
				uParam0->f_13 = 1;
			}
		}
		if (!uParam0->f_13)
		{
			uParam0->f_10 = (uParam0->f_10 + (uParam0->f_3 * MISC::GET_FRAME_TIME()));
			if (uParam0->f_10 > uParam0->f_1)
			{
				uParam0->f_10 = uParam0->f_1;
			}
		}
		else
		{
			uParam0->f_10 = (uParam0->f_10 + (uParam0->f_4 * MISC::GET_FRAME_TIME()));
			if (uParam0->f_10 > uParam0->f_2)
			{
				uParam0->f_10 = uParam0->f_2;
			}
		}
		if (uParam0->f_9 >= 1f)
		{
			iVar1 = BUILTIN::FLOOR(uParam0->f_9);
			uParam0->f_9 = (uParam0->f_9 - BUILTIN::TO_FLOAT(iVar1));
			return (iVar1 * iVar0);
		}
	}
	return 0;
}

void func_1436(bool bParam0)
{
	AUDIO::_0x0F2A2175734926D8("BET_AMOUNT", "HUD_POKER");
	if (bParam0)
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_MIN_MAX", "HUD_POKER", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_AMOUNT", "HUD_POKER", true, 0);
	}
}

char* func_1437(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_171);
}

void func_1439(var uParam0)
{
	if (uParam0->f_61 != 0)
	{
		uParam0->f_61 = 0;
		func_269(uParam0);
	}
}

void func_1440(var uParam0, int iParam1)
{
	if (&uParam0->f_2020[iParam1] != 0)
	{
		uParam0->f_2020[iParam1] = 0;
	}
}

void func_1441(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;
	int iVar487;
	int iVar488;
	int iVar489;
	int iVar490;

	Var0.f_1.f_15 = 11;
	Var0.f_1.f_39 = 6;
	Var0.f_1.f_39.f_1.f_7 = 11;
	Var0.f_1.f_39.f_1.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_7 = 11;
	Var0.f_1.f_39.f_1.f_56.f_56.f_56.f_56.f_56.f_31 = 11;
	Var0.f_1.f_376 = 6;
	Var0.f_1.f_376.f_1.f_2 = 6;
	Var0.f_1.f_376.f_1.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_10 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 6;
	Var0.f_1.f_376.f_1.f_18.f_18.f_18.f_18.f_18.f_10 = 6;
	iVar487 = 0;
	iVar488 = 0;
	while (iVar488 < 6)
	{
		if (!func_200(&(uParam0->f_416), iVar488))
		{
			(*uParam1)[iVar488] = 0;
			(*uParam2)[iVar488] = 0;
			(*uParam3)[iVar488] = 0;
			(*uParam4)[iVar488] = 0;
		}
		else
		{
			(*uParam1)[iVar488] = 1;
			(*uParam2)[iVar488] = aggregate_func_5974(&(uParam0->f_416), iVar488);
			(*uParam3)[iVar488] = 0;
			(*uParam4)[iVar488] = 0;
			MISC::SET_BIT(&iVar487, iVar488);
		}
		if (iVar488 == uParam0->f_9 && uParam2[iVar488] == 0)
		{
			(*uParam2)[iVar488] = uParam0->f_1452;
		}
		iVar488++;
	}
	*iParam5 = uParam0->f_416.f_11;
	*bParam6 = 0;
	*iParam7 = func_1046(&(uParam0->f_416));
	iVar489 = MINIGAME::_0x3B31732FADE5BAF3();
	while (iVar490 < iVar489 && !*bParam6)
	{
		if (MINIGAME::_0x578907F59BA01B6D(iVar490) == -1857735811)
		{
			if (!MINIGAME::_0xDF728C5AE137FC14(iVar490, &Var0, 487))
			{
			}
			else
			{
				if (Var0.f_1.f_1 == -1442142035)
				{
					*bParam6 = 1;
				}
				if (!*bParam6)
				{
					*iParam5 = Var0.f_1.f_11;
				}
				if (*bParam6)
				{
					*iParam7 = func_1046(&(Var0.f_1));
				}
				iVar488 = 0;
				while (iVar488 < 6)
				{
					if (MISC::IS_BIT_SET(iVar487, iVar488))
					{
						if (!func_200(&(Var0.f_1), iVar488))
						{
							(*uParam1)[iVar488] = 0;
							MISC::CLEAR_BIT(&iVar487, iVar488);
						}
						else
						{
							(*uParam2)[iVar488] = aggregate_func_5974(&(Var0.f_1), iVar488);
							(*uParam3)[iVar488] = aggregate_func_5974(&(Var0.f_1), iVar488);
							if (iVar488 == uParam0->f_9 && uParam2[iVar488] == 0)
							{
								(*uParam2)[iVar488] = uParam0->f_1452;
							}
							if (*bParam6)
							{
								if (func_617(&(Var0.f_1), iVar488))
								{
									if (Var0.f_1.f_4 == iVar488)
									{
										if (uParam3[iVar488] > Var0.f_1.f_9)
										{
											(*uParam4)[iVar488] = 2;
										}
										else
										{
											(*uParam4)[iVar488] = 1;
										}
									}
									else if (Var0.f_1.f_5 == iVar488)
									{
										(*uParam4)[iVar488] = 3;
									}
									else if (uParam3[iVar488] > 0)
									{
										(*uParam4)[iVar488] = 4;
									}
									else
									{
										(*uParam4)[iVar488] = 5;
									}
								}
								else
								{
									(*uParam4)[iVar488] = 6;
								}
							}
						}
					}
					iVar488++;
				}
			}
		}
		iVar490++;
	}
}

void func_1445(var uParam0)
{
	uParam0->f_441 = -1;
	func_1476(uParam0, 1, "");
	func_1477(uParam0, 1, "");
}

void func_1446(var uParam0, char* sParam1)
{
	uParam0->f_441 = sParam1;
	func_1476(uParam0, 1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_INTERVAL_COUNTDOWN_LABEL"));
	func_1477(uParam0, 1, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_INTERVAL_COUNTDOWN_SECS", sParam1));
}

bool func_1447(var uParam0, int iParam1, char* sParam2)
{
	return MISC::ARE_STRINGS_EQUAL(&((uParam0->f_307[iParam1 /*20*/])->f_3), sParam2);
}

void func_1449(var uParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_126, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uParam0->f_135))
		{
			uParam0->f_135 = CAM::CREATE_CAMERA(26379945, false);
			if (CAM::DOES_CAM_EXIST(uParam0->f_135))
			{
			}
		}
		if (uParam0->f_129 != -1)
		{
			aggregate_func_83(&(uParam0->f_136), bParam1, 1, 0, 0, 0);
		}
		if (uParam0->f_127 != -1)
		{
			if (func_1013(uParam0))
			{
				if (MISC::GET_FRAME_COUNT() >= uParam0->f_127)
				{
					func_1014(uParam0, 0);
				}
			}
			else
			{
				uParam0->f_127 = -1;
			}
		}
	}
}

bool func_1450(var uParam0)
{
	if (uParam0->f_24 >= 0 && uParam0->f_24 <= 9)
	{
		return true;
	}
	return false;
}

char* func_1451(var uParam0, bool bParam1)
{
	char* sVar0;

	if (!bParam1)
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_HIGH", func_1630(uParam0[0 /*2*/]));
				break;
			case 1:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_PAIR", func_1631(uParam0[0 /*2*/]));
				break;
			case 2:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_TWOPAIR", func_1631(uParam0[0 /*2*/]), func_1631(uParam0[2 /*2*/]));
				break;
			case 3:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_THREE", func_1631(uParam0[0 /*2*/]));
				break;
			case 4:
				if (func_1632(uParam0[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_STRAIT1", func_1630(uParam0[0 /*2*/]));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_STRAIT2", func_1630(uParam0[0 /*2*/]));
				}
				break;
			case 5:
				if (func_1632(uParam0[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_FLUSH1", func_1630(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_FLUSH2", func_1630(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				}
				break;
			case 6:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_HOUSE", func_1631(uParam0[0 /*2*/]), func_1631(uParam0[3 /*2*/]));
				break;
			case 7:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND_FOUR", func_1631(uParam0[0 /*2*/]));
				break;
			case 8:
				if (func_1632(uParam0[0 /*2*/]))
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_STFLUSH1", func_1630(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND_STFLUSH2", func_1630(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				}
				break;
			case 9:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "MGPKR_HND_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	else
	{
		switch (uParam0->f_24)
		{
			case 0:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_HIGH", func_1634(uParam0[0 /*2*/]));
				break;
			case 1:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_PAIR", func_1631(uParam0[0 /*2*/]));
				break;
			case 2:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_TWOPAIR", func_1631(uParam0[0 /*2*/]), func_1631(uParam0[2 /*2*/]));
				break;
			case 3:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_THREE", func_1631(uParam0[0 /*2*/]));
				break;
			case 4:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_STRAIT", func_1634(uParam0[0 /*2*/]));
				break;
			case 5:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_FLUSH", func_1634(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				break;
			case 6:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_HOUSE", func_1631(uParam0[0 /*2*/]), func_1631(uParam0[3 /*2*/]));
				break;
			case 7:
				sVar0 = MISC::_CREATE_VAR_STRING(10, "MGPKR_HND2_FOUR", func_1631(uParam0[0 /*2*/]));
				break;
			case 8:
				sVar0 = MISC::_CREATE_VAR_STRING(42, "MGPKR_HND2_STFLUSH", func_1634(uParam0[0 /*2*/]), func_1633(((*uParam0)[0 /*2*/])->f_1));
				break;
			case 9:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "MGPKR_HND2_RYFLUSH");
				break;
			default:
				sVar0 = "nothing";
				break;
		}
	}
	return sVar0;
}

void func_1454(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !aggregate_func_2875(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4270(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949749)[iVar0 /*23*/])->f_3, 10, bParam1);
}

bool func_1455(var uParam0, int iParam1)
{
	if (&uParam0->f_39[iParam1 /*56*/] != -1)
	{
		if (((uParam0->f_39[iParam1 /*56*/])->f_6 == 0 && (uParam0->f_39[iParam1 /*56*/])->f_2 != 0) && ((uParam0->f_39[iParam1 /*56*/])->f_4 == uParam0->f_7 && (uParam0->f_39[iParam1 /*56*/])->f_5))
		{
			return true;
		}
	}
	return false;
}

void func_1456(var uParam0, int iParam1)
{
	uParam0->f_485 = iParam1;
	if (aggregate_func_2875(uParam0->f_494))
	{
		aggregate_func_4823(uParam0->f_494, 1, 1);
	}
	if (aggregate_func_2875(uParam0->f_495))
	{
		aggregate_func_4823(uParam0->f_495, 1, 1);
	}
	if (aggregate_func_2875(uParam0->f_499))
	{
		aggregate_func_4823(uParam0->f_499, 1, 1);
	}
	if (aggregate_func_2875(uParam0->f_500))
	{
		aggregate_func_4823(uParam0->f_500, 1, 1);
	}
	aggregate_func_2878(&(uParam0->f_485.f_4), 1, 1);
	aggregate_func_2878(&(uParam0->f_485.f_5), 1, 1);
	aggregate_func_2878(&(uParam0->f_485.f_6), 1, 1);
	aggregate_func_2878(&(uParam0->f_485.f_7), 1, 1);
	aggregate_func_2878(&(uParam0->f_485.f_8), 1, 1);
}

bool func_1457(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_485 != 0)
	{
		if (!func_1224(uParam1, uParam0->f_485.f_1, uParam2))
		{
			if (uParam0->f_485.f_2 != 0)
			{
				func_1461(uParam0);
				return true;
			}
		}
		else
		{
			switch (uParam0->f_485.f_2)
			{
				case 1:
					if (!func_1455(uParam1, uParam0->f_485.f_1))
					{
						func_1461(uParam0);
						return true;
					}
					break;
				case 2:
					if (!func_1455(uParam1, uParam0->f_485.f_1))
					{
						func_1460(uParam0, 5, 0);
						return true;
					}
					break;
				case 4:
					if (aggregate_func_4249(uParam1) > uParam0->f_485.f_3)
					{
						func_1461(uParam0);
						return true;
					}
					break;
				case 3:
				case 5:
					break;
			}
		}
	}
	return false;
}

void func_1460(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_485.f_2 = iParam1;
	uParam0->f_485.f_3 = iParam2;
}

void func_1461(var uParam0)
{
	uParam0->f_485.f_2 = 0;
	uParam0->f_485.f_3 = 0;
}

void func_1462(var uParam0)
{
	if (uParam0->f_1870 != -1)
	{
		uParam0->f_1870 = -1;
	}
}

void func_1463(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((uParam0->f_818[iParam1 /*63*/])->f_57 != 0)
	{
	}
	else if (iParam1 == iParam3)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_2 != 1 && (uParam0->f_818[iParam1 /*63*/])->f_2 != 2)
	{
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(&(uParam0->f_818[iParam1 /*63*/])))
	{
	}
	else
	{
		(uParam0->f_818[iParam1 /*63*/])->f_57 = 1;
		(uParam0->f_818[iParam1 /*63*/])->f_58 = iParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_59 = iParam3;
		iVar0 = ((iParam3 - iParam1) - 1);
		while (iVar0 < 0)
		{
			iVar0 += 6;
		}
		if ((uParam0->f_818[iParam1 /*63*/])->f_2 == 1)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iParam2)
		{
			case 0:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(&(uParam0->f_818[iParam1 /*63*/]), "StartQuickMgmLook", true);
				break;
			case 1:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(&(uParam0->f_818[iParam1 /*63*/]), "StartMediumMgmLook", true);
				break;
		}
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "MgmLookPose", BUILTIN::TO_FLOAT(iVar1));
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "MgmLookSeat", BUILTIN::TO_FLOAT(iVar0));
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "MgmLookVar", BUILTIN::TO_FLOAT(iVar2));
		aggregate_func_6629(uParam0, iParam1, 1);
	}
}

void func_1464(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (&uParam0->f_2066[iParam1] != -1)
	{
		uParam0->f_2066[iParam1] = -1;
	}
}

int func_1465(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 6)
	{
		if (bParam4)
		{
		}
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam3 == 0)
		{
			if (iParam1 == uParam0->f_3)
			{
				return -1;
			}
		}
		iParam1 = (iParam1 + 1 % 6);
		if (func_617(uParam0, iParam1) && (uParam0->f_39[iParam1 /*56*/])->f_6 == iParam2)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_1466(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (&uParam0->f_818[iVar1 /*63*/] != 0 && (uParam0->f_818[iVar1 /*63*/])->f_8 == 1)
		{
			if ((uParam0->f_818[iVar1 /*63*/])->f_51 && MISC::IS_BIT_SET(iParam1, iVar1))
			{
				if (aggregate_func_4298(&((uParam0->f_818[iVar1 /*63*/])->f_16)) > 0f && func_914(uParam0, iVar1, 1))
				{
					bVar0 = false;
					if (bVar0)
					{
						func_986(uParam0, iVar1);
						func_1196(uParam0, iVar1);
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 75)
					{
						func_1635(uParam0, iVar1, 0);
					}
					else
					{
						func_1635(uParam0, iVar1, 1);
					}
					aggregate_func_4284(&((uParam0->f_818[iVar1 /*63*/])->f_16), -MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 35f));
				}
			}
		}
		iVar1++;
	}
}

void func_1467(var uParam0, int iParam1, int iParam2)
{
	if (func_1226(&(uParam0->f_151), &(uParam0->f_151.f_1670), &(uParam0->f_2839), &(uParam0->f_151.f_416), iParam1, 1, iParam2))
	{
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_2839.f_807, "arrive_response", &(uParam0->f_2839.f_818[iParam1 /*63*/]), 0, uParam0->f_2839.f_40))
		{
			return;
		}
	}
}

void func_1468(var uParam0)
{
	uParam0->f_1670.f_112 = 0;
	uParam0->f_1670.f_112.f_1 = -1;
	uParam0->f_1670.f_112.f_2 = -1;
	aggregate_func_4313(&(uParam0->f_1670.f_112.f_3));
}

void func_1469(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_4133(&(uParam0->f_151.f_416));
	MISC::CLEAR_BIT(&iVar0, iParam1);
	func_891(uParam0, iVar0, "leave_response", iParam1, 100);
}

void func_1471(var uParam0, bool bParam1)
{
	if (uParam0->f_442 && !bParam1)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(160258628, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", func_1437(uParam0, uParam0->f_442.f_4)), 1, 0, 0, aggregate_func_5095(uParam0->f_442.f_22));
	}
}

int func_1473(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam4 = (iParam2 - aggregate_func_5974(uParam0, iParam1));
	*uParam5 = (iParam2 - aggregate_func_4249(uParam0));
	if (iParam2 == aggregate_func_5974(uParam0, iParam1))
	{
		*uParam3 = 1;
		return 1;
	}
	else if (iParam2 == (aggregate_func_5974(uParam0, iParam1) + aggregate_func_5974(uParam0, iParam1)))
	{
		*uParam3 = 5;
		return 1;
	}
	else if (aggregate_func_4249(uParam0) == 0)
	{
		*uParam3 = 2;
		return 1;
	}
	else if (aggregate_func_4249(uParam0) == iParam2)
	{
		*uParam3 = 3;
		return 1;
	}
	else
	{
		*uParam3 = 4;
		return 1;
	}
	return 0;
}

void func_1475(var uParam0, int iParam1)
{
	if (&uParam0->f_34[iParam1 /*21*/])
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY((uParam0->f_34[iParam1 /*21*/])->f_14);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0->f_34[iParam1 /*21*/])->f_14);
		if (*uParam0 == 0)
		{
			DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY((uParam0->f_34[iParam1 /*21*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0->f_34[iParam1 /*21*/])->f_15);
		}
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0->f_34[iParam1 /*21*/])->f_1);
		uParam0->f_34[iParam1 /*21*/] = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_163), iParam1);
}

void func_1476(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_10[iParam1]), "text", sParam2);
}

void func_1477(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_10[iParam1]), "moneyText", sParam2);
}

void func_1485(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0->f_43[iParam1 /*5*/])[iVar0] = uParam2[iVar0];
		iVar0++;
	}
}

void func_1486(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam3[iVar0] > 0)
		{
			func_1140(uParam0, iParam1, iVar0, uParam2[iVar0], uParam3[iVar0], func_1148(uParam2[iVar0], uParam3[iVar0], 10), bParam4, 0);
		}
		else
		{
			aggregate_func_1477(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

bool func_1487(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1398f, 0.3457f, 0.803f };
			vVar4 = { 0f, 0f, 177.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.0686f, 0.3527f, 0.803f };
			vVar4 = { 0f, 0f, 179.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.0038f, 0.35f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.0748f, 0.3543f, 0.803f };
			vVar4 = { 0f, 0f, 178.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.1462f, 0.3533f, 0.803f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 1)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.3693f, 0.0518f, 0.803f };
			vVar4 = { 0f, 0f, 117.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.3397f, 0.1169f, 0.803f };
			vVar4 = { 0f, 0f, 119.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.3012f, 0.1783f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.2694f, 0.2419f, 0.803f };
			vVar4 = { 0f, 0f, 118.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.2328f, 0.3032f, 0.803f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 2)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2295f, -0.2939f, 0.803f };
			vVar4 = { 0f, 0f, 57.1619f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.2711f, -0.2358f, 0.803f };
			vVar4 = { 0f, 0f, 59.3696f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.305f, -0.1717f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.3442f, -0.1124f, 0.803f };
			vVar4 = { 0f, 0f, 58.0068f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.379f, -0.05f, 0.803f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.1398f, -0.3457f, 0.803f };
			vVar4 = { 0f, 0f, -2.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.0686f, -0.3527f, 0.803f };
			vVar4 = { 0f, 0f, -0.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.0038f, -0.35f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { 0.0748f, -0.3543f, 0.803f };
			vVar4 = { 0f, 0f, -1.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { 0.1462f, -0.3533f, 0.803f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 4)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.3693f, -0.0518f, 0.803f };
			vVar4 = { 0f, 0f, -62.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.3397f, -0.1169f, 0.803f };
			vVar4 = { 0f, 0f, -60.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.3012f, -0.1783f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2694f, -0.2419f, 0.803f };
			vVar4 = { 0f, 0f, -61.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.2328f, -0.3032f, 0.803f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam2 == 5)
	{
		if (iParam1 == 0)
		{
			vVar1 = { -0.2295f, 0.2939f, 0.803f };
			vVar4 = { 0f, 0f, -122.8381f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { -0.2711f, 0.2358f, 0.803f };
			vVar4 = { 0f, 0f, -120.6304f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { -0.305f, 0.1717f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.3442f, 0.1124f, 0.803f };
			vVar4 = { 0f, 0f, -121.9932f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.379f, 0.05f, 0.803f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam5)
		{
			func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
		}
		else
		{
			*fParam3 = { vVar1 };
			*uParam4 = { vVar4 };
		}
		return true;
	}
	return false;
}

bool func_1488(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = false;
	if (iParam3 == 1)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0252f, 0.57f, 0.8033f };
				vVar4 = { 0f, -180f, -172.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0381f, 0.5555f, 0.805f };
				vVar4 = { 0f, 180f, 176.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.481f, 0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, 127.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5001f, 0.2447f, 0.805f };
				vVar4 = { 0f, 180f, 116.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5062f, -0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, 67.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.462f, -0.3108f, 0.805f };
				vVar4 = { 0f, 180f, 56.7731f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0252f, -0.57f, 0.8033f };
				vVar4 = { 0f, -180f, 7.4737f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0381f, -0.5555f, 0.805f };
				vVar4 = { 0f, 180f, -3.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.481f, -0.3068f, 0.8033f };
				vVar4 = { 0f, -180f, -52.5263f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5001f, -0.2447f, 0.805f };
				vVar4 = { 0f, 180f, -63.2269f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5062f, 0.2631f, 0.8033f };
				vVar4 = { 0f, -180f, -112.5264f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.462f, 0.3108f, 0.805f };
				vVar4 = { 0f, 180f, -123.2269f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 2)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0002f, 0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, -173.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0146f, 0.5994f, 0.805f };
				vVar4 = { 0f, 180f, 177.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5177f, 0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, 126.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5264f, 0.2871f, 0.805f };
				vVar4 = { 0f, 180f, 117.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5179f, -0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, 66.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5118f, -0.3123f, 0.805f };
				vVar4 = { 0f, 180f, 57.2384f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0002f, -0.5979f, 0.8033f };
				vVar4 = { 0f, -180f, 6.4681f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0146f, -0.5994f, 0.805f };
				vVar4 = { 0f, 180f, -2.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5177f, -0.2991f, 0.8033f };
				vVar4 = { 0f, -180f, -53.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5264f, -0.2871f, 0.805f };
				vVar4 = { 0f, 180f, -62.7616f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5179f, 0.2988f, 0.8033f };
				vVar4 = { 0f, -180f, -113.5319f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5118f, 0.3123f, 0.805f };
				vVar4 = { 0f, 180f, -122.7616f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 3)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0048f, 0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -5.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0198f, 0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 0f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5281f, 0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -65.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5408f, 0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, -60f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5328f, -0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, -125.6941f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.521f, -0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, -120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0048f, -0.6125f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 174.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0198f, -0.613f, 0.8032f };
				vVar4 = { 0f, 0f, 180f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5281f, -0.3104f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 114.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5408f, -0.2893f, 0.8032f };
				vVar4 = { 0f, 0f, 120f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5328f, 0.3021f, 0.8052f };
				vVar4 = { 0.0007f, 0.0048f, 54.3059f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.521f, 0.3237f, 0.8032f };
				vVar4 = { 0f, 0f, 60f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 4)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.0197f, 0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, 135f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.0276f, 0.513f, 0.8032f };
				vVar4 = { 0f, 180f, 126.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4595f, 0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, 75f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.458f, 0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, 66.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.4399f, -0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, 15f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.4304f, -0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, 6.7335f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.0197f, -0.5193f, 0.8014f };
				vVar4 = { 0f, 180f, -45f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.0276f, -0.513f, 0.8032f };
				vVar4 = { 0f, 180f, -53.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4595f, -0.2426f, 0.8014f };
				vVar4 = { 0f, 180f, -105f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.458f, -0.2326f, 0.8032f };
				vVar4 = { 0f, 180f, -113.2665f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.4399f, 0.2767f, 0.8014f };
				vVar4 = { 0f, 180f, -165f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.4304f, 0.2804f, 0.8032f };
				vVar4 = { 0f, 180f, -173.2665f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 5)
	{
		if (iParam1 == 0)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.2147f, 0.5145f, 0.803f };
				vVar4 = { 0f, -180f, -149.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.2194f, 0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, -145.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 1)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.5529f, 0.0713f, 0.803f };
				vVar4 = { 0f, -180f, 150.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.5593f, 0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, 154.3062f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam2 == 0)
			{
				vVar1 = { 0.3382f, -0.4432f, 0.803f };
				vVar4 = { 0f, -180f, 90.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { 0.3399f, -0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, 94.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.2147f, -0.5145f, 0.803f };
				vVar4 = { 0f, -180f, 30.9643f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.2194f, -0.5192f, 0.8034f };
				vVar4 = { 0f, -180f, 34.3061f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 4)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.5529f, -0.0713f, 0.803f };
				vVar4 = { 0f, -180f, -29.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.5593f, -0.0696f, 0.8034f };
				vVar4 = { 0f, -180f, -25.6939f };
				bVar0 = true;
			}
		}
		else if (iParam1 == 5)
		{
			if (iParam2 == 0)
			{
				vVar1 = { -0.3382f, 0.4432f, 0.803f };
				vVar4 = { 0f, -180f, -89.0357f };
				bVar0 = true;
			}
			else if (iParam2 == 1)
			{
				vVar1 = { -0.3399f, 0.4496f, 0.8034f };
				vVar4 = { 0f, -180f, -85.6939f };
				bVar0 = true;
			}
		}
	}
	else if (iParam3 == 0)
	{
		vVar1 = { 0f, 0f, (0.8f - 0.05f) };
		vVar4 = { 0f, 0f, 0f };
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam6)
		{
			func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam4, uParam5);
		}
		else
		{
			*fParam4 = { vVar1 };
			*uParam5 = { vVar4 };
		}
		return true;
	}
	return false;
}

int func_1491(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	func_1643(iParam0, 0);
	aggregate_func_8101(iParam0, joaat("COLOR_WHITE"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam3))
		{
			*uParam3 = HUD::CREATE_FAKE_MP_GAMER_TAG(iParam1, sParam2, true, false, "", 0);
			HUD::_0x93171DDDAB274EB8(*uParam3, 2);
			HUD::_0x5F57522BC1EB9D9D(*uParam3, 1277358601);
			HUD::_0x25B9C78A25105C35(*uParam3, -86326806);
			HUD::_0x84BD27DDF9575816(*uParam3, joaat("COLOR_WHITE"));
		}
	}
	return 1;
}

int func_1492(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 5;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 4;
		case 11:
			return 3;
		case 12:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 2;
		case 17:
			return 6;
		case 18:
			return 0;
		case 26:
			return 6;
		case 28:
			return 5;
		case 29:
			return 2;
		case 34:
			return 5;
		case 35:
			return 1;
		case 36:
			return 4;
		case 37:
			return 7;
		case 38:
			return 5;
		case 39:
			return 1;
		case 41:
			return 1;
		case 45:
			return 0;
		case 46:
			return 5;
		case 47:
			return 6;
		case 48:
			return 1;
		case 50:
			return 7;
		case 51:
			return 6;
		case 52:
			return 4;
		case 53:
			return 7;
		case 56:
			return 6;
		case 58:
			return 4;
		case 61:
			return 6;
		case 63:
			return 3;
		case 64:
			return 6;
		case 66:
			return 6;
		case 67:
			return 7;
		case 68:
			return 3;
		case 71:
			return 7;
		case 73:
			return 6;
		case 75:
			return 6;
		case 76:
			return 7;
		default:
			break;
	}
	return 8;
}

char* func_1493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_VOFX_MALE_AVOID_01";
		case 1:
			return "MINIGAME_VOFX_MALE_AVOID_02";
		case 2:
			return "MINIGAME_VOFX_MALE_AVOID_03";
		case 3:
			return "MINIGAME_VOFX_MALE_AVOID_04";
		case 4:
			return "MINIGAME_VOFX_MALE_AVOID_05";
		case 5:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_01";
		case 6:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_03";
		case 7:
			return "MINIGAME_VOFX_MALE_TIMID_01";
		case 8:
			return "unknown";
		default:
			break;
	}
	return "unknown";
}

void func_1494(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_798))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_798, *(uParam0->f_1236[iParam1 /*3*/]), *(uParam0->f_1255[iParam1 /*3*/]), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_798, "player", &(uParam0->f_818[iParam1 /*63*/]), 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_798);
	}
}

void func_1495(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_163 = 0;
}

void func_1496(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "player_stack_item", (uParam0->f_34[iParam1 /*21*/])->f_1);
	MISC::SET_BIT(&(uParam0->f_163), iParam1);
}

int func_1499(var uParam0, char* sParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			StringCopy(sParam1, "HEARTS_", 16);
			break;
		case 1:
			StringCopy(sParam1, "DIAMONDS_", 16);
			break;
		case 3:
			StringCopy(sParam1, "CLUBS_", 16);
			break;
		case 2:
			StringCopy(sParam1, "SPADES_", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	switch (*uParam0)
	{
		case 2:
			StringConCat(sParam1, "2", 16);
			break;
		case 3:
			StringConCat(sParam1, "3", 16);
			break;
		case 4:
			StringConCat(sParam1, "4", 16);
			break;
		case 5:
			StringConCat(sParam1, "5", 16);
			break;
		case 6:
			StringConCat(sParam1, "6", 16);
			break;
		case 7:
			StringConCat(sParam1, "7", 16);
			break;
		case 8:
			StringConCat(sParam1, "8", 16);
			break;
		case 9:
			StringConCat(sParam1, "9", 16);
			break;
		case 10:
			StringConCat(sParam1, "10", 16);
			break;
		case 11:
			StringConCat(sParam1, "J", 16);
			break;
		case 12:
			StringConCat(sParam1, "Q", 16);
			break;
		case 13:
			StringConCat(sParam1, "K", 16);
			break;
		case 14:
			StringConCat(sParam1, "A", 16);
			break;
		default:
			StringCopy(sParam1, "BACK", 16);
			return 0;
	}
	return 1;
}

void func_1500(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_17)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_17[iParam1]), sParam2);
}

void func_1502(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, !bParam1);
}

void func_1503(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= uParam0->f_16)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_16[iParam1]), sParam2);
}

void func_1505(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(iParam0) && CAM::DOES_CAM_EXIST(iParam1))
	{
		CAM::SET_CAM_PARAMS(iParam1, CAM::GET_CAM_COORD(iParam0), CAM::GET_CAM_ROT(iParam0, 2), CAM::GET_CAM_FOV(iParam0), 0, 1, 1, 2, 1, 0);
	}
}

void func_1510(int iParam0)
{
	if ((Global_1070355->f_20209[iParam0 /*18*/])->f_3 != 0)
	{
		(Global_1070355->f_20209[iParam0 /*18*/])->f_3 = 0;
		aggregate_func_3076(iParam0);
	}
}

void func_1515(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_11, bParam1);
}

void func_1517(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_34[iParam1 /*21*/])->f_5, false);
}

int func_1533(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;

	if (!func_1668(iParam0))
	{
		return 0;
	}
	if (!func_1669(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, 0))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

void func_1534(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, aggregate_func_4473());
	}
}

bool func_1535(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("p_windsorchair03x"):
					return true;
				case joaat("p_windsorchair01x"):
				case 1609095284:
					return true;
				case joaat("p_chair24x"):
				case joaat("p_chair22x"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("p_chair13x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair05x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair06x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_windsorchair03x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair12x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair14x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair11x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair26x"))
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == joaat("p_chair02x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_stool02x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_stool03x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_stoolwinter01x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair_barrel04b"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == joaat("p_chair06x"))
			{
				return true;
			}
			if (iParam1 == joaat("s_crateseat03x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chair_crate02x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return true;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_1537(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_255[iParam1 /*30*/])->f_15[iParam2])))
	{
		OBJECT::DELETE_OBJECT((uParam0->f_255[iParam1 /*30*/])->f_15[iParam2]);
	}
	(uParam0->f_255[iParam1 /*30*/])->f_20[iParam2] = iParam3;
	(uParam0->f_255[iParam1 /*30*/])->f_15[iParam2] = uParam0->f_255[iParam1 /*30*/][iParam2];
	(uParam0->f_255[iParam1 /*30*/])->f_25[iParam2] = 0f;
	(*uParam0->f_255[iParam1 /*30*/])[iParam2] = 0;
	(uParam0->f_255[iParam1 /*30*/])->f_5[iParam2] = 0;
	(uParam0->f_255[iParam1 /*30*/])->f_10[iParam2] = 0;
}

bool func_1538(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

void func_1539(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_1540(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
			break;
		case 1:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
			break;
		case 2:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
			break;
		case 3:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
			break;
		case 4:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
			break;
		case 5:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
			break;
		default:
			break;
	}
}

int func_1541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

void func_1543(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_436[iParam1 /*30*/])->f_15[iParam2])))
	{
		OBJECT::DELETE_OBJECT((uParam0->f_436[iParam1 /*30*/])->f_15[iParam2]);
	}
	(uParam0->f_436[iParam1 /*30*/])->f_20[iParam2] = iParam3;
	(uParam0->f_436[iParam1 /*30*/])->f_15[iParam2] = uParam0->f_436[iParam1 /*30*/][iParam2];
	(uParam0->f_436[iParam1 /*30*/])->f_25[iParam2] = 0f;
	(*uParam0->f_436[iParam1 /*30*/])[iParam2] = 0;
	(uParam0->f_436[iParam1 /*30*/])->f_5[iParam2] = 0;
	(uParam0->f_436[iParam1 /*30*/])->f_10[iParam2] = 0;
}

bool func_1544(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0353f, 0.196f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0603f, 0.1639f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0746f, 0.197f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.112f, 0.1826f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1521f, 0.1285f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1118f, 0.1341f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1333f, 0.1631f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1022f, 0.1883f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.1874f, -0.0674f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1721f, -0.0298f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2079f, -0.0339f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.2142f, 0.0057f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0353f, -0.196f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0603f, -0.1639f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0746f, -0.197f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.112f, -0.1826f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1521f, -0.1285f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1118f, -0.1341f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1333f, -0.1631f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1022f, -0.1883f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.1874f, 0.0674f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1721f, 0.0298f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2079f, 0.0339f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.2142f, -0.0057f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

void func_1546(var uParam0, int iParam1)
{
	uParam0->f_811[iParam1] = -1;
}

int func_1547(var uParam0, int iParam1, int iParam2)
{
	return &((uParam0->f_255[iParam1 /*30*/])->f_5[iParam2]);
}

int func_1548(var uParam0, int iParam1, int iParam2)
{
	return &((uParam0->f_255[iParam1 /*30*/])->f_10[iParam2]);
}

void func_1550(var uParam0)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, false, "community_cards", uParam0->f_23);
}

void func_1551(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_24, -1, "money_with_text", &(uParam0->f_10[iVar0]));
		iVar0++;
	}
}

void func_1553(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = &(uParam0->f_74[iParam1 /*30*/])->f_5[iVar0];
		iVar0++;
	}
}

float func_1556(int iParam0, int iParam1)
{
	int iVar0;

	if ((((iParam0 < 0 || iParam0 >= 6) || iParam1 < 0) || iParam1 >= 6) || iParam1 == iParam0)
	{
		return -1f;
	}
	iVar0 = ((iParam1 - iParam0) - 1);
	while (iVar0 < 0)
	{
		iVar0 += 6;
	}
	return BUILTIN::TO_FLOAT(iVar0);
}

int func_1557(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_433(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % 6);
		iVar0++;
	}
	return -1;
}

void func_1559(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_7;
	iVar1 = uParam0->f_8;
	if (iVar0 == 0)
	{
		*iParam3 = 0;
		*iParam4 = uParam0->f_10;
	}
	else
	{
		*iParam3 = iVar0;
		*iParam4 = (iVar0 + iVar1);
	}
	if (iVar0 > 0 && iVar1 == 0)
	{
	}
	*iParam5 = ((uParam0->f_39[iParam2 /*56*/])->f_2 + (uParam0->f_39[iParam2 /*56*/])->f_4);
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		iVar2 = ((uParam1->f_16 - (uParam0->f_39[iParam2 /*56*/])->f_3) + (uParam0->f_39[iParam2 /*56*/])->f_4);
		if (*iParam5 > iVar2)
		{
			*iParam5 = iVar2;
		}
	}
	if (!(uParam0->f_39[iParam2 /*56*/])->f_5)
	{
		if (*iParam5 > iVar0)
		{
			*iParam5 = iVar0;
		}
	}
	if (*iParam3 > *iParam5)
	{
		*iParam3 = *iParam5;
	}
	if (*iParam4 > *iParam5)
	{
		*iParam4 = *iParam5;
	}
	if (bParam6)
	{
		iVar3 = aggregate_func_5974(uParam0, iParam2);
		*iParam3 = (*iParam3 - iVar3);
		*iParam4 = (*iParam4 - iVar3);
		*iParam5 = (*iParam5 - iVar3);
	}
}

var func_1560(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_13 != -1)
	{
		return aggregate_func_2963(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1672(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return aggregate_func_2963(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1561(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = BUILTIN::FLOOR(((*uParam0 * uParam0->f_5) + (0.5f * ((uParam0->f_3 * uParam0->f_5) * uParam0->f_5))));
	fVar1 = BUILTIN::TO_FLOAT((iParam1 - iVar0));
	fVar2 = (fVar1 / uParam0->f_6);
	if (fVar2 < uParam0->f_1)
	{
		fVar2 = uParam0->f_1;
	}
	uParam0->f_2 = fVar2;
}

bool func_1563(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_3 == 1717653435 && uParam1->f_16 > 0)
	{
		if (((uParam0->f_39[iParam2 /*56*/])->f_3 + iParam3) >= uParam1->f_16)
		{
			return true;
		}
	}
	return false;
}

void func_1568(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_74[iParam1 /*30*/])->f_15[iParam2])))
	{
		OBJECT::DELETE_OBJECT((uParam0->f_74[iParam1 /*30*/])->f_15[iParam2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[iParam1 /*30*/][iParam2]))
	{
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	(uParam0->f_74[iParam1 /*30*/])->f_20[iParam2] = iParam3;
	(uParam0->f_74[iParam1 /*30*/])->f_15[iParam2] = uParam0->f_74[iParam1 /*30*/][iParam2];
	(uParam0->f_74[iParam1 /*30*/])->f_25[iParam2] = 0f;
	(*uParam0->f_74[iParam1 /*30*/])[iParam2] = 0;
	(uParam0->f_74[iParam1 /*30*/])->f_5[iParam2] = 0;
	(uParam0->f_74[iParam1 /*30*/])->f_10[iParam2] = 0;
}

bool func_1569(var uParam0, int iParam1, int iParam2, float fParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_533(*uParam0, uParam0->f_3, vVar1, vVar4, fParam3, uParam4);
	}
	else
	{
		*fParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	fParam3->f_2 = (fParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return true;
}

char* func_1570()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_ALLIN_DONE");
}

char* func_1571()
{
	return MISC::_CREATE_VAR_STRING(2, "MGPKR_INFO_MAX_BET_DONE");
}

int func_1572(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < aggregate_func_4937(5, aggregate_func_4937(uParam0->f_23, uParam1->f_23)))
		{
			if (uParam0[iVar0 /*2*/] > uParam1[iVar0 /*2*/])
			{
				return 1;
			}
			else if (uParam0[iVar0 /*2*/] < uParam1[iVar0 /*2*/])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

int func_1573(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < (uParam0->f_376[iParam1 /*18*/])->f_9)
	{
		iVar2 = &(uParam0->f_376[iParam1 /*18*/])->f_2[iVar3];
		bVar1 = false;
		if (iParam1 < (uParam0->f_485 - 1))
		{
			iVar4 = 0;
			while (iVar4 < (uParam0->f_376[iParam1 + 1 /*18*/])->f_9)
			{
				if (&(uParam0->f_376[iParam1 + 1 /*18*/])->f_2[iVar4] == iVar2)
				{
					bVar1 = true;
				}
				else
				{
					iVar4++;
				}
			}
		}
		if (!bVar1)
		{
			if (iVar0 < (uParam0->f_39[iVar2 /*56*/])->f_3)
			{
				iVar0 = (uParam0->f_39[iVar2 /*56*/])->f_3;
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_1576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 5;
		default:
			break;
	}
	return 0;
}

void func_1577(var uParam0, var uParam1, var uParam2)
{
	MINIGAME::_0x32A7C216344D623B(uParam1, uParam2, uParam0);
}

void func_1578(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (&uParam0->f_2020[iParam1] != 0)
	{
	}
	else
	{
		uParam0->f_2020[iParam1] = iParam2;
		aggregate_func_4284(uParam0->f_2027[iParam1 /*3*/], fParam3);
	}
}

void func_1579(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_34[iParam1 /*21*/])->f_5, true);
}

int func_1580(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if ((HUD::_0x7EC0D68233E391AC(54) == 2 || HUD::_0x7EC0D68233E391AC(21) == 2) || UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		return 0;
	}
	if (uParam0->f_1402)
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_1588(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 == aggregate_func_2477())
	{
		return true;
	}
	if (&Global_1051387->f_3693[38 /*16*/] == iParam0 && ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3693[38 /*16*/])->f_4))
	{
		return true;
	}
	return false;
}

bool func_1603(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return true;
	}
	if (aggregate_func_4458(iParam0, 65536))
	{
		return true;
	}
	return false;
}

float func_1605(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = 100f;
	switch (iParam0)
	{
		case 38:
			fVar0 = 200f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

bool func_1606(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar3 = -1;
	switch (iParam0)
	{
		case 2:
			Var0 = { aggregate_func_4259(0) };
			if (aggregate_func_4917(Var0))
			{
				return false;
			}
			break;
		case 32:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (&Global_1051387->f_4319[iVar2 /*7*/] == &Global_1051387->f_3693[32 /*16*/])
				{
					iVar3 = iVar2;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return false;
			}
			if ((Global_1051387->f_4319[iVar3 /*7*/])->f_3 == (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
			{
				return true;
			}
			else
			{
				iVar4 = aggregate_func_2818(aggregate_func_4265());
				if ((Global_1051387->f_4319[iVar3 /*7*/])->f_3 < (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
				{
					if (iVar4 >= (Global_1051387->f_4319[iVar3 /*7*/])->f_3 && iVar4 < (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else if (iVar4 < (Global_1051387->f_4319[iVar3 /*7*/])->f_3 && iVar4 >= (Global_1051387->f_4319[iVar3 /*7*/])->f_4)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			break;
		case 31:
			if (aggregate_func_5362(func_1685(iParam1), 1))
			{
				return false;
			}
			break;
		case 38:
			return func_1588(iParam1);
	}
	return true;
}

bool func_1609(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	struct<4> Var1;

	Var1 = aggregate_func_5223();
	Var1.f_2 = -738708473;
	Var1.f_3 = aggregate_func_4659(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -302053561;
	DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1);
	*uParam1 = uVar0;
	Var1.f_2 = -1407851228;
	Var1.f_3 = -495343091;
	*uParam2 = 0;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1))
	{
		*uParam2 = uVar0;
	}
	return true;
}

void func_1610(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!aggregate_func_4429(iParam0, 262144))
	{
		sVar0 = aggregate_func_5484(iParam0);
		sVar1 = MISC::_CREATE_VAR_STRING(10, "MP_SHOP_REL", sVar0);
		if (PED::ADD_RELATIONSHIP_GROUP(sVar1, &((Global_1051387->f_69[iParam0 /*76*/])->f_22)))
		{
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_3538(iVar2));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_3538(iVar2), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
				iVar2++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_2436(), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_2436());
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -989642646, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
			aggregate_func_4789(iParam0, 262144);
		}
	}
	else
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, aggregate_func_2436(), (Global_1051387->f_69[iParam0 /*76*/])->f_22);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, (Global_1051387->f_69[iParam0 /*76*/])->f_22, aggregate_func_2436());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, (Global_1051387->f_69[iParam0 /*76*/])->f_22);
	}
}

bool func_1611(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	var uVar0;
	struct<4> Var1;

	Var1 = aggregate_func_5223();
	Var1.f_2 = -738708473;
	Var1.f_3 = aggregate_func_4659(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = -1407851228;
	Var1.f_3 = -1896626193;
	DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1);
	*uParam3 = uVar0;
	Var1.f_2 = -99852754;
	Var1.f_3 = -160814000;
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var1);
	Var1.f_2 = 1059891245;
	Var1.f_3 = -1317038779;
	DATAFILE::_DATAFILE_GET_FLOAT(bParam2, &Var1);
	return true;
}

void func_1612()
{
	Global_1051387->f_3666.f_1 = -1;
	Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
	Global_1051387->f_3666.f_6 = 0;
	PED::SET_PED_CONFIG_FLAG(Global_35, 1, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
	PED::_0xC2266AA617668AD3(Global_35, 1f);
	PED::_0x73B6F907B913C860(Global_35, 1f);
	TASK::_0x013A7BA5015C1372(Global_35, 0);
	TASK::_0xFA30E2254461ADEB(Global_35, 0);
	aggregate_func_5003(0);
}

int func_1614(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	var uVar7;

	Var0 = aggregate_func_5223();
	Var0.f_2 = 1164964224;
	Var0.f_3 = aggregate_func_4659(iParam0);
	iVar5 = 0;
	bVar6 = false;
	while (!bVar6)
	{
		Var0.f_4 = iVar5;
		if (DATAFILE::_DATAFILE_GET_VECTOR(&uVar7, &Var0))
		{
			iVar5++;
		}
		else
		{
			bVar6 = true;
		}
	}
	return iVar5;
}

bool func_1615(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4369(iParam0);
	switch (iVar0)
	{
		case 36:
			if (aggregate_func_1217(iVar0, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1617(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	Global_1051387->f_3666.f_2 = { 0f, 0f, 0f };
	iVar0 = func_1614(iParam0);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		func_1621(iParam0, iVar1, &vVar2);
		if (BUILTIN::VDIST(Global_36, vVar2) < BUILTIN::VDIST(Global_36, Global_1051387->f_3666.f_2))
		{
			Global_1051387->f_3666.f_2 = { vVar2 };
		}
		iVar1++;
	}
}

bool func_1621(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = aggregate_func_5223();
	Var0.f_2 = 1164964224;
	Var0.f_3 = aggregate_func_4659(iParam0);
	Var0.f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
}

char* func_1630(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL1_2";
		case 3:
			return "MGPKR_RANKL1_3";
		case 4:
			return "MGPKR_RANKL1_4";
		case 5:
			return "MGPKR_RANKL1_5";
		case 6:
			return "MGPKR_RANKL1_6";
		case 7:
			return "MGPKR_RANKL1_7";
		case 8:
			return "MGPKR_RANKL1_8";
		case 9:
			return "MGPKR_RANKL1_9";
		case 10:
			return "MGPKR_RANKL1_10";
		case 11:
			return "MGPKR_RANKL1_JACK";
		case 12:
			return "MGPKR_RANKL1_QUEEN";
		case 13:
			return "MGPKR_RANKL1_KING";
		case 14:
			return "MGPKR_RANKL1_ACE";
		default:
			break;
	}
	return "unknown";
}

char* func_1631(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKL2_2";
		case 3:
			return "MGPKR_RANKL2_3";
		case 4:
			return "MGPKR_RANKL2_4";
		case 5:
			return "MGPKR_RANKL2_5";
		case 6:
			return "MGPKR_RANKL2_6";
		case 7:
			return "MGPKR_RANKL2_7";
		case 8:
			return "MGPKR_RANKL2_8";
		case 9:
			return "MGPKR_RANKL2_9";
		case 10:
			return "MGPKR_RANKL2_10";
		case 11:
			return "MGPKR_RANKL2_JACK";
		case 12:
			return "MGPKR_RANKL2_QUEEN";
		case 13:
			return "MGPKR_RANKL2_KING";
		case 14:
			return "MGPKR_RANKL2_ACE";
		default:
			break;
	}
	return "unknown";
}

bool func_1632(int iParam0)
{
	if (iParam0 == 8 || iParam0 == 14)
	{
		return false;
	}
	return true;
}

char* func_1633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGPKR_SUIT_HEART";
		case 1:
			return "MGPKR_SUIT_DMOND";
		case 2:
			return "MGPKR_SUIT_SPADE";
		case 3:
			return "MGPKR_SUIT_CLUB";
		default:
			break;
	}
	return "unknown";
}

char* func_1634(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR_RANKU1_2";
		case 3:
			return "MGPKR_RANKU1_3";
		case 4:
			return "MGPKR_RANKU1_4";
		case 5:
			return "MGPKR_RANKU1_5";
		case 6:
			return "MGPKR_RANKU1_6";
		case 7:
			return "MGPKR_RANKU1_7";
		case 8:
			return "MGPKR_RANKU1_8";
		case 9:
			return "MGPKR_RANKU1_9";
		case 10:
			return "MGPKR_RANKU1_10";
		case 11:
			return "MGPKR_RANKU1_JACK";
		case 12:
			return "MGPKR_RANKU1_QUEEN";
		case 13:
			return "MGPKR_RANKU1_KING";
		case 14:
			return "MGPKR_RANKU1_ACE";
		default:
			break;
	}
	return "unknown";
}

void func_1635(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (&uParam0->f_818[iParam1 /*63*/] == 0)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_50)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_8 != 1)
	{
	}
	else if ((uParam0->f_818[iParam1 /*63*/])->f_1 != 2 && (uParam0->f_818[iParam1 /*63*/])->f_1 != 1)
	{
	}
	else
	{
		func_464(uParam0, iParam1, 26);
		func_1222(uParam0, iParam1, 0);
		switch (iParam2)
		{
			case 0:
				iVar0 = ((uParam0->f_800 + MISC::GET_RANDOM_INT_IN_RANGE(1, 5)) % 5);
				uParam0->f_800 = iVar0;
				break;
			default:
				iVar0 = ((uParam0->f_801 + MISC::GET_RANDOM_INT_IN_RANGE(1, 4)) % 4);
				uParam0->f_801 = iVar0;
				break;
		}
		(uParam0->f_818[iParam1 /*63*/])->f_42 = iParam2;
		(uParam0->f_818[iParam1 /*63*/])->f_43 = iVar0;
		if (!uParam0->f_40)
		{
			switch (iParam2)
			{
				case 0:
					if ((uParam0->f_818[iParam1 /*63*/])->f_1 == 2)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "FidgetHoldCardsSubtle");
					}
					else
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "FidgetNoCardsSubtle");
					}
					break;
				default:
					if ((uParam0->f_818[iParam1 /*63*/])->f_1 == 2)
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "FidgetHoldCards");
					}
					else
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(&(uParam0->f_818[iParam1 /*63*/]), "FidgetNoCards");
					}
					break;
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(&(uParam0->f_818[iParam1 /*63*/]), "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
	}
}

void func_1643(int iParam0, int iParam1)
{
	if ((Global_1070355->f_20209[iParam0 /*18*/])->f_3 != iParam1)
	{
		(Global_1070355->f_20209[iParam0 /*18*/])->f_3 = iParam1;
		aggregate_func_3076(iParam0);
	}
}

bool func_1668(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_1669(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

char* func_1672(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_1723(sParam1));
}

int func_1685(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		case 57:
			return 56;
		case 55:
			return 54;
		case 37:
			return 36;
		case 106:
			return 105;
		case 80:
			return 79;
		case 95:
			return 94;
		default:
			break;
	}
	return -1;
}

char* func_1723(char* sParam0)
{
	return sParam0;
}

