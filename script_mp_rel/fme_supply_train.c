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
	struct<1177> Local_13 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	struct<47> Local_1190[32];
	struct<287> Local_2695 = { 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_2982 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_3000 = 255;
	var uLocal_3001 = 255;
	var uLocal_3002 = 255;
	var uLocal_3003 = 255;
	var uLocal_3004 = 255;
	var uLocal_3005 = 255;
	var uLocal_3006 = 255;
	var uLocal_3007 = 255;
	var uLocal_3008 = 255;
	var uLocal_3009 = 255;
	var uLocal_3010 = 255;
	var uLocal_3011 = 255;
	var uLocal_3012 = 255;
	var uLocal_3013 = 255;
	var uLocal_3014 = 255;
	var uLocal_3015 = 255;
	var uLocal_3016 = 255;
	var uLocal_3017 = 255;
	var uLocal_3018 = 255;
	var uLocal_3019 = 255;
	var uLocal_3020 = 255;
	var uLocal_3021 = 255;
	var uLocal_3022 = 255;
	var uLocal_3023 = 255;
	var uLocal_3024 = 255;
	var uLocal_3025 = 255;
	var uLocal_3026 = 255;
	var uLocal_3027 = 255;
	var uLocal_3028 = 255;
	var uLocal_3029 = 255;
	var uLocal_3030 = 255;
	var uLocal_3031 = 255;
	struct<6> Local_3032[32];
	struct<1422> Local_3225 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	float fLocal_4672 = 0f;
	float fLocal_4673 = 0f;
	var uLocal_4674 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == fme_animal_tagging.__EntryFunction__

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 1177, 38);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 1177, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1190, 1505, 39);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_1190[0 /*47*/]), 1505, "m_clientData");
}

void func_51()
{
	Local_2695 = Local_3225.f_1391;
	if (DATAFILE::_0x603AC35FD4602C76(Local_2695))
	{
	}
	func_147(&Local_2695);
	if (!func_148(&Local_13, &Local_2695))
	{
	}
	func_149(&Local_13, 0);
	func_150(&Local_13);
}

void func_64()
{
	int iVar0;

	iVar0 = func_170(Local_3225.f_2);
	Local_2695.f_114 = { func_171(iVar0) };
	aggregate.fme_animal_tagging.func_389(1229355466);
	aggregate.aberdeenpigfarm.func_154(Local_3225.f_2);
	aggregate.fme_animal_tagging.func_174(524288);
	Local_3225.f_1420 = 0;
	aggregate.fme_animal_tagging.func_174(131072);
	aggregate.fme_animal_tagging.func_174(2097152);
	aggregate.fme_animal_tagging.func_174(1048576);
	func_174();
	func_175();
}

void func_72()
{
	if (aggregate.fme_king_of_the_rails.func_172(0) && aggregate.fme_king_of_the_rails.func_173(0) != func_181())
	{
		aggregate.fme_king_of_the_rails.func_175(0);
	}
	Local_13.f_1156 = MISC::GET_GAME_TIMER();
}

void func_101()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
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
	func_285();
	if (!aggregate.fme_animal_tagging.func_152(Local_3225.f_1332))
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
				Local_3225.f_1384 = 1310067901;
			}
		}
		else if (aggregate.fme_animal_tagging.func_134(8192))
		{
			Local_3225.f_1384 = joaat("leaderboard");
		}
		else
		{
			Local_3225.f_1384 = 0;
		}
		aggregate.fme_animal_tagging.func_268(aggregate.fme_archery.func_268(), func_280(), Local_3225.f_11, Local_3225.f_12, 30000);
	}
	else if (aggregate.fme_animal_tagging.func_275())
	{
		Local_3225.f_1384 = 1310067901;
		aggregate.fme_animal_tagging.func_268(0, func_280(), 0, 0, 30000);
	}
	else
	{
		aggregate.fme_animal_tagging.func_277();
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		if (aggregate.fme_animal_tagging.func_278())
		{
			aggregate.fme_animal_tagging.func_279(&(Local_3225.f_1005));
			iVar0 = aggregate.fme_animal_tagging.func_280();
			if (aggregate.fme_animal_tagging.func_134(4096))
			{
				GRAPHICS::_0x3A9A281FF71249E9(aggregate.fme_animal_tagging.func_57(), iVar0);
			}
			else
			{
				GRAPHICS::_0x3A9A281FF71249E9(aggregate.fme_animal_tagging.func_58(), iVar0);
			}
			if (!aggregate.fme_animal_tagging.func_275() || Local_3225.f_9 == -785841056)
			{
				aggregate.fme_animal_tagging.func_244(&(Local_3225.f_1005), 1);
			}
			aggregate.fme_animal_tagging.func_174(32);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(64))
	{
		aggregate.fme_animal_tagging.func_281();
		if (Local_3225.f_9 == -785841056)
		{
			if (!aggregate.fishing_core.func_107(Local_3225.f_1287))
			{
				aggregate.fme_animal_tagging.func_283();
				iVar1 = 6000;
				if (Local_2982.f_12 != 0 || !aggregate.fme_animal_tagging.func_284(Local_3225.f_1384))
				{
					iVar1 = 1000;
				}
				if (!aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1316)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > iVar1)
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
		else if (((!aggregate.fishing_core.func_107(Local_3225.f_1287) && !aggregate.fishing_core.func_277()) && !aggregate.fme_animal_tagging.func_287()) && !aggregate.fme_animal_tagging.func_288())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1322)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1322));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1322)) > 10000)
				{
					aggregate.dynamic_craft_scenario.func_188();
					aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1322));
				}
			}
			else
			{
				aggregate.fme_animal_tagging.func_283();
				if (!aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1316)))
				{
					aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
				}
				else if (aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 1000 && !aggregate.fishing_core.func_107(Local_3225.f_1289))
				{
					aggregate.fme_condor_egg.func_127(0);
					aggregate.fme_animal_tagging.func_174(64);
				}
			}
		}
		else
		{
			if (aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1316)))
			{
				aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1316));
			}
			if (aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1322)))
			{
				aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1322));
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
				if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_3225.f_1416, true, false) };
					if (!aggregate.annesburg.func_121(vVar3))
					{
						vVar6 = { aggregate.fme_animal_tagging.func_292(vVar3, 10f, 0.25f) };
						ENTITY::SET_ENTITY_COORDS(Global_35, vVar6, true, false, true, true);
					}
				}
			}
			if (Local_2982.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416))
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
				if (CAM::DOES_CAM_EXIST(Local_3225.f_1415) && !CAM::IS_CAM_ACTIVE(Local_3225.f_1415))
				{
					CAM::SET_CAM_ACTIVE(Local_3225.f_1415, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3225.f_1416) && !ENTITY::IS_ENTITY_DEAD(Local_3225.f_1416))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3225.f_1416, true);
				}
				aggregate.fme_animal_tagging.func_295();
				HUD::_0x4CC5F2FC1332577F(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1316));
			Local_3225.f_1418 = 1500;
			if (!aggregate.aberdeenpigfarm.func_123())
			{
				if (Local_2982.f_10 != 255)
				{
					iVar9 = aggregate.fme_animal_tagging.func_297();
					Local_3225.f_1418 = aggregate.fme_animal_tagging.func_298(iVar9);
					iVar10 = aggregate.fme_animal_tagging.func_299(iVar9);
					aggregate.fme_animal_tagging.func_300(Local_3225.f_1416, iVar9, 2, 0, 0, iVar10);
				}
			}
			aggregate.fme_animal_tagging.func_174(512);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(1024))
	{
		aggregate.fme_animal_tagging.func_294();
		if (!aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1316)))
		{
			StringCopy(&cVar11, aggregate.fme_animal_tagging.func_301(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar11))
			{
				StringCopy(&cVar11, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			cVar19 = { func_315() };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
			{
				cVar19 = { Local_3225.f_1406 };
			}
			if (aggregate.fme_animal_tagging.func_134(8192) || aggregate.fme_animal_tagging.func_134(524288))
			{
				aggregate.fme_animal_tagging.func_307(&(Local_3225.f_1421), &cVar19, func_316(), func_317(), func_319(aggregate.fme_archery.func_307(&(Local_3225.f_13), 0)), "", "", Local_3225.f_1414);
			}
			else if (Local_2982.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(aggregate.fme_animal_tagging.func_301()))
				{
					aggregate.fme_animal_tagging.func_307(&(Local_3225.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					aggregate.fme_animal_tagging.func_307(&(Local_3225.f_1421), "", "", aggregate.fme_animal_tagging.func_301(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_2982.f_10 == PLAYER::PLAYER_ID())
			{
				aggregate.fme_animal_tagging.func_307(&(Local_3225.f_1421), &cVar11, &cVar19, func_319(aggregate.fme_archery.func_307(&(Local_3225.f_13), 0)), "", "", "", Local_3225.f_1414);
			}
			else
			{
				aggregate.fme_animal_tagging.func_307(&(Local_3225.f_1421), &cVar11, &cVar19, aggregate.fme_animal_tagging.func_309(Local_3225.f_1406, Local_3225.f_1414, aggregate.fme_archery.func_307(&(Local_3225.f_13), 0)), "", "", "", Local_3225.f_1414);
			}
			aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
		}
		else
		{
			iVar27 = Local_3225.f_1418;
			aggregate.aberdeenpigfarm.func_154(&iVar27);
			if (aggregate.aberdeenpigfarm.func_123() || (iVar27 > 0 && aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > iVar27))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_3225.f_1417);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_3225.f_1417);
				aggregate.fme_animal_tagging.func_174(1024);
			}
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(2048))
	{
		aggregate.fme_animal_tagging.func_294();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_3225.f_1417, 2, 0, &uVar28))
		{
			bVar29 = true;
		}
		if (bVar29 || aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(aggregate.fme_animal_tagging.func_122(), aggregate.fme_animal_tagging.func_123(), true, 0);
			aggregate.fme_animal_tagging.func_61(&(Local_3225.f_1421), 1);
			aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
			aggregate.fme_animal_tagging.func_174(2048);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(4096))
	{
		aggregate.fme_animal_tagging.func_294();
		if (aggregate.fme_animal_tagging.func_312(&(Local_3225.f_1421)) || aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 8000)
		{
			aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
			aggregate.fme_animal_tagging.func_174(4096);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		aggregate.fme_animal_tagging.func_294();
		if (aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 5000)
		{
			if (!aggregate.aberdeenpigfarm.func_123())
			{
				aggregate.fme_animal_tagging.func_117(&(Local_3225.f_1421));
			}
			aggregate.fme_animal_tagging.func_35(aggregate.fme_animal_tagging.func_314());
			aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1316));
			aggregate.fme_animal_tagging.func_174(8192);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(16384))
	{
		aggregate.fme_animal_tagging.func_294();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_3225.f_13.f_11))
		{
			if (Local_3225.f_1283 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_value_07", aggregate.error_listener.func_18(Local_3225.f_1283));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_value_07", true);
				Local_3225.f_1283 = 0;
			}
			if (Local_3225.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_08", aggregate.error_listener.func_18(Local_3225.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_08", true);
				Local_3225.f_1285 = 0;
			}
			if (Local_3225.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_06", aggregate.error_listener.func_18(Local_3225.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_3225.f_13.f_11, "info_visible_06", true);
				Local_3225.f_1284 = 0;
			}
			if (Local_3225.f_1286 > 0)
			{
				Local_3225.f_1286 = 0;
			}
		}
		if (!aggregate.barcustomer_interaction.func_42(&(Local_3225.f_1316)))
		{
			aggregate.fme_animal_tagging.func_1407(&(Local_3225.f_1316));
		}
		else if (aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 2000)
		{
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar33) || _NAMESPACE26::_0x149A2751AB66AC02(iVar33) <= 1) || !_NAMESPACE26::_0x93A91A351A07360E(iVar33))
			{
				iVar30 = 1;
				if (aggregate.fme_animal_tagging.func_171(512, Local_3225.f_1332))
				{
					iVar31++;
				}
				if (aggregate.fme_animal_tagging.func_171(1024, Local_3225.f_1332))
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
			if (!aggregate.annesburg.func_217(Local_3225.f_1297))
			{
				if (iVar30 > 1)
				{
					Local_3225.f_1297 = aggregate.binoculars.func_24(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_3225.f_1297 = aggregate.binoculars.func_24("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (aggregate.annesburg.func_217(Local_3225.f_1297))
			{
				if (iVar30 > 1)
				{
					aggregate.fme_animal_tagging.func_318(Local_3225.f_1297, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), 1);
				}
				else
				{
					aggregate.fme_animal_tagging.func_318(Local_3225.f_1297, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!aggregate.fme_animal_tagging.func_171(512, Local_3225.f_1332))
				{
					if (aggregate.binoculars.func_13(Local_3225.f_1297, 1))
					{
						aggregate.fme_animal_tagging.func_220(512, Local_3225.f_1332);
						aggregate.binoculars.func_37(Local_3225.f_1297, 0, 1, 1);
					}
				}
			}
			if (!aggregate.fme_animal_tagging.func_171(1024, Local_3225.f_1332))
			{
				if (iVar31 >= iVar30 || aggregate.fme_animal_tagging.func_181(&(Local_3225.f_1316)) > 62000)
				{
					aggregate.fme_animal_tagging.func_220(1024, Local_3225.f_1332);
				}
			}
			else if (iVar32 >= iVar30)
			{
				aggregate.annesburg.func_218(&(Local_3225.f_1297), 1, 1);
				aggregate.fme_animal_tagging.func_290(&(Local_3225.f_1316));
				aggregate.fme_animal_tagging.func_174(16384);
			}
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(32768))
	{
		if (aggregate.aberdeenpigfarm.func_123())
		{
			aggregate.fme_animal_tagging.func_117(&(Local_3225.f_1421));
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

void func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 23)
	{
		aggregate.fme_condor_egg.func_368(uParam0, func_371(iVar0, 1));
		iVar0++;
	}
}

bool func_148(var uParam0, var uParam1)
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(*uParam1))
	{
		return false;
	}
	Var0 = *uParam1;
	Var0.f_2 = -668747133;
	Var0.f_3 = Local_3225.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!aggregate.fme_supply_train.func_39(Var0, 217762429, &(uParam1->f_1), 0))
	{
		uParam1->f_1 = 600000000;
	}
	return true;
}

void func_149(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	vector3 vVar17;
	float fVar20;

	if (func_373(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0 = Local_2695;
		Var0.f_2 = 439583753;
		Var0.f_3 = iParam1;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar7 = 0;
		while (iVar7 <= (iVar6 - 1))
		{
			Var0.f_1 = uVar5;
			Var0.f_3 = iParam1;
			Var0.f_4 = iVar7;
			Var0.f_2 = -1678548701;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			uVar8 = Var0.f_1;
			vVar9 = { 0f, 0f, 0f };
			iVar12 = -1;
			bVar13 = false;
			bVar14 = false;
			iVar15 = -1;
			iVar16 = -1;
			Var0.f_2 = -828272613;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				if (!aggregate.fme_animal_tagging.func_143(Var0, -1049349821, &vVar9, 1))
				{
				}
				if (!aggregate.fme_animal_tagging.func_40(Var0, 179535921, &iVar12, 1))
				{
				}
				if (!aggregate.fme_condor_egg.func_42(Var0, 2011932436, &bVar13, 0))
				{
				}
				if (!aggregate.fme_condor_egg.func_42(Var0, -1678866018, &bVar14, 0))
				{
				}
				if (!aggregate.fme_supply_train.func_39(Var0, 483086319, &iVar15, 0))
				{
				}
				if (!aggregate.fme_supply_train.func_39(Var0, 1789390703, &iVar16, 0))
				{
				}
			}
			vVar17 = { 0f, 0f, 0f };
			fVar20 = 0f;
			Var0.f_1 = uVar8;
			Var0.f_2 = 1907897756;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				if (!aggregate.fme_animal_tagging.func_143(Var0, -1049349821, &vVar17, 1))
				{
				}
				if (!aggregate.fme_animal_tagging.func_142(Var0, 1914071458, &fVar20, 1))
				{
				}
			}
			*(uParam0->f_9[iVar7 /*7*/]) = { vVar9 };
			(uParam0->f_9[iVar7 /*7*/])->f_3 = iVar12;
			if (bVar13)
			{
				func_374(iVar7, 1);
			}
			if (bVar14)
			{
				func_374(iVar7, 2);
			}
			if (iVar15 > 0)
			{
				(uParam0->f_9[iVar7 /*7*/])->f_4 = iVar15;
			}
			if (iVar16 > 0)
			{
				(uParam0->f_9[iVar7 /*7*/])->f_5 = iVar16;
			}
			*(uParam0->f_325[iVar7 /*4*/]) = { vVar17 };
			(uParam0->f_325[iVar7 /*4*/])->f_3 = fVar20;
			iVar7++;
		}
	}
}

int func_150(var uParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if (func_373(&Var0))
	{
		uVar5 = Var0.f_1;
		Var0.f_2 = -784532701;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
		iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar7 = 0;
		while (iVar7 <= (iVar6 - 1))
		{
			Var0.f_1 = uVar5;
			Var0.f_3 = iVar7;
			Var0.f_2 = 653187835;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			if (!aggregate.fme_animal_tagging.func_143(Var0, -1049349821, &((uParam0->f_1025[iVar7 /*14*/])->f_1), 1))
			{
			}
			if (!aggregate.fme_animal_tagging.func_143(Var0, 1276750075, &((uParam0->f_1025[iVar7 /*14*/])->f_4), 1))
			{
			}
			if (!aggregate.fme_animal_tagging.func_142(Var0, 1726885030, &((uParam0->f_1025[iVar7 /*14*/])->f_7), 1))
			{
			}
			if (!aggregate.fme_condor_egg.func_42(Var0, -946156189, &((uParam0->f_1025[iVar7 /*14*/])->f_8), 1))
			{
			}
			if (!aggregate.fme_condor_egg.func_42(Var0, -204185654, &((uParam0->f_1025[iVar7 /*14*/])->f_9), 1))
			{
			}
			if (!aggregate.fme_animal_tagging.func_143(Var0, -2049688002, &((uParam0->f_1025[iVar7 /*14*/])->f_10), 0))
			{
			}
			if (!aggregate.fme_animal_tagging.func_142(Var0, -202007812, &((uParam0->f_1025[iVar7 /*14*/])->f_13), 0))
			{
			}
			iVar7++;
		}
	}
	return 1;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case -1900781664:
			return 8;
		case -824858074:
			return 6;
		case -79540972:
			return 3;
		case 2063714806:
			return 10;
		default:
			break;
	}
	return 0;
}

Vector3 func_171(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			break;
	}
	return vVar0;
}

void func_174()
{
	aggregate.fme_animal_tagging.func_35(227643027);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 1, 0);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 0, 0);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 0, 0);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 1, 1);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), -250506368 /* GXTEntry: "Train" */, 1);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), aggregate.fme_supply_train.func_405(-250506368 /* GXTEntry: "Train" */), 1);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 0f, 1);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), 1, 1);
}

void func_175()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 37)
	{
		(Local_2695.f_2[iVar0 /*3*/])->f_2 = -1;
		iVar0++;
	}
}

int func_181()
{
	return 1758415199;
}

bool func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	if (aggregate.fme_king_of_the_rails.func_172(0))
	{
		bVar1 = true;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!aggregate.fme_archery.func_1103(func_414(Local_3225.f_2)))
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	if (!aggregate.fme_archery.func_1103(func_416()))
	{
		iVar0 = 0;
	}
	if (!aggregate.fme_archery.func_1103(func_417()))
	{
		iVar0 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		if (!aggregate.fme_archery.func_1103(func_418()))
		{
			iVar0 = 0;
		}
		iVar2++;
	}
	if (!bVar1)
	{
		if (!func_419(Local_3225.f_2, &(Local_2695.f_114), &(Local_13.f_1156)))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_191()
{
	if (!func_420(1, Local_3225.f_1332))
	{
		if (Local_13.f_1156 == -1 || (MISC::GET_GAME_TIMER() - Local_13.f_1156) > Global_1901929->f_295.f_178)
		{
			if (Local_13.f_1156 == -1)
			{
			}
			aggregate.fme_animal_tagging.func_176(8);
		}
		return false;
	}
	else if (func_421())
	{
		return true;
	}
	return false;
}

void func_194()
{
	if (!aggregate.fme_animal_tagging.func_134(4) && func_423())
	{
		if (func_424(0))
		{
			aggregate.fme_escaped_convicts.func_515(4);
		}
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		if (func_426())
		{
			aggregate.fme_escaped_convicts.func_515(2);
		}
	}
}

void func_204()
{
	func_434(0, 1);
	func_435(0);
	func_436(0, "MOVING");
}

bool func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	func_440();
	func_441();
	func_442();
	aggregate.aberdeenpigfarm.func_23();
	func_444();
	if (Local_13.f_1173 >= 2 && Local_13.f_1173 <= 5)
	{
		iVar0 = Local_13.f_1159;
		iVar1 = func_445(iVar0);
		iVar2 = Local_2695.f_277;
		if (iVar1 == 18 && iVar2 <= 0)
		{
			if (!aggregate.fme_animal_tagging.func_134(1024))
			{
				aggregate.fme_escaped_convicts.func_515(1024);
			}
		}
	}
	if (aggregate.fme_animal_tagging.func_134(128))
	{
		bVar3 = true;
	}
	else if (!aggregate.fme_animal_tagging.func_134(8))
	{
		if (func_447() == 0)
		{
			bVar3 = true;
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
		if (aggregate.fme_animal_tagging.func_195() > 5000 && Local_3225.f_1267 <= 0)
		{
			bVar3 = true;
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
	}
	if (aggregate.fme_animal_tagging.func_134(1024))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		return true;
	}
	return false;
}

bool func_232()
{
	int iVar0;

	iVar0 = 1;
	PROPSET::_REQUEST_PROPSET_2(func_468());
	if (!PROPSET::_HAS_PROPSET_LOADED_2(func_468()))
	{
		iVar0 = 0;
	}
	if (!func_470(func_469(Local_3225.f_2, 0), Local_2695.f_272[0], Local_13.f_1170[0], 0, 0))
	{
		iVar0 = 0;
	}
	if (!func_470(func_469(Local_3225.f_2, 1), Local_2695.f_272[1], Local_13.f_1170[1], 0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_234()
{
	int iVar0;
	float fVar1;

	if (!func_420(1, Local_3225.f_1332))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_451();
			func_472();
			if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
			{
				fVar1 = func_473(func_170(Local_3225.f_2));
				if (fVar1 != 0f)
				{
					VEHICLE::_0x8EC47DD4300BF063(iVar0, fVar1);
				}
				func_474();
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_434(0, 1);
				}
				func_475(1);
			}
		}
	}
	else if (func_476(1))
	{
		func_477(Local_3225.f_2);
		return true;
	}
	return false;
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_474();
	func_472();
	if (aggregate.fme_animal_tagging.func_134(4) && !aggregate.fme_animal_tagging.func_134(16))
	{
		if (aggregate.fme_supply_train.func_531(0, Local_3225.f_1332))
		{
			iVar0 = 0;
			while (iVar0 <= 14)
			{
				iVar5 = func_532(0, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_MODEL(iVar5, joaat("privateflatcar01x")))
				{
					iVar4 = PROPSET::_0xCE2ACD6F602803E5(iVar5);
					iVar3 = ITEMSET::CREATE_ITEMSET(true);
					iVar2 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar4, iVar3, 0, false, false);
					iVar1 = 0;
					while (iVar1 <= (iVar2 - 1))
					{
						iVar6 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar3));
						if (ENTITY::GET_ENTITY_MODEL(iVar6) == func_418())
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
							ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
						}
						iVar1++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar3);
				}
				iVar0++;
			}
			aggregate.fme_escaped_convicts.func_515(16);
		}
	}
	if (!aggregate.fme_animal_tagging.func_134(256) && aggregate.fme_animal_tagging.func_435(Local_3225.f_1289))
	{
		Local_3225.f_1289 = aggregate.fme_animal_tagging.func_436("FME_ST_DESC");
		aggregate.fme_escaped_convicts.func_515(256);
	}
	else if (!aggregate.fme_animal_tagging.func_134(512) && aggregate.fme_animal_tagging.func_435(Local_3225.f_1289))
	{
		Local_3225.f_1289 = aggregate.fme_animal_tagging.func_436(MISC::_CREATE_VAR_STRING(10, "FME_ST_DESC_2", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(func_534()), joaat("COLOR_PURE_WHITE"))));
		aggregate.fme_escaped_convicts.func_515(512);
	}
	else if (!aggregate.fme_animal_tagging.func_134(1024) && aggregate.fme_animal_tagging.func_435(Local_3225.f_1289))
	{
		Local_3225.f_1289 = aggregate.fme_animal_tagging.func_436("FME_ST_DESC_3");
		aggregate.fme_escaped_convicts.func_515(1024);
	}
	else if (!aggregate.fme_animal_tagging.func_134(2048) && aggregate.fme_animal_tagging.func_435(Local_3225.f_1289))
	{
		Local_3225.f_1289 = aggregate.fme_animal_tagging.func_436("FME_ST_DESC_4");
		aggregate.fme_escaped_convicts.func_515(2048);
	}
	func_536(8192, 60000);
	func_536(16384, 10000);
}

void func_260()
{
	aggregate.fme_king_of_the_rails.func_518(3072, 1);
	func_548();
}

bool func_266()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 <= (Local_3225.f_1276 - 1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar7 = Local_3225.f_1389;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = (Local_3032[iVar7 /*6*/])->f_2;
			fVar1 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_3);
			fVar2 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar7 /*6*/])->f_5);
			fVar4 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar6));
		}
		aggregate.fme_animal_tagging.func_495(&(Local_3225.f_13), fVar0, iVar6, Local_3225.f_971[iVar7], !aggregate.fme_animal_tagging.func_152(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		Local_3225.f_1389++;
		if (Local_3225.f_1389 >= 32)
		{
			Local_3225.f_1389 = 0;
		}
		iVar8++;
	}
	iVar9 = aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_50(-1048906573));
	iVar9 = (iVar9 - Local_3225.f_1280);
	if (iVar9 != (Local_3032[Local_3225.f_1332 /*6*/])->f_4)
	{
		(Local_3032[Local_3225.f_1332 /*6*/])->f_4 = iVar9;
	}
	func_569(&(Local_3225.f_13));
	return true;
}

void func_270()
{
	func_575(Local_13.f_1173);
	func_576();
	func_577();
	func_548();
	func_578();
	func_579();
	func_476(0);
	func_580();
	func_581();
	func_582();
	if (aggregate.fme_animal_tagging.func_134(8))
	{
		aggregate.fme_animal_tagging.func_263(PLAYER::PLAYER_ID());
		func_583();
		aggregate.fme_animal_tagging.func_174(8192);
	}
	if (!aggregate.fme_animal_tagging.func_134(128) && !aggregate.fme_animal_tagging.func_134(8))
	{
		if (func_447() == 0)
		{
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
		if (aggregate.fme_animal_tagging.func_195() > 5000 && Local_3225.f_1267 <= 0)
		{
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
	}
}

bool func_271()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = 0f;
		iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		iVar7 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
		{
			fVar1 = (Local_3032[iVar0 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_4);
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
			fVar4 = BUILTIN::TO_FLOAT((Local_3032[iVar0 /*6*/])->f_5);
			fVar5 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar7));
		}
		aggregate.fme_animal_tagging.func_495(&(Local_3225.f_13), fVar1, iVar7, Local_3225.f_971[iVar0], !aggregate.fme_animal_tagging.func_152(iVar0), fVar2, fVar3, 0, fVar4, fVar5);
		iVar0++;
	}
	func_569(&(Local_3225.f_13));
	return true;
}

int func_280()
{
	return 2129921;
}

void func_285()
{
	if (aggregate.fme_animal_tagging.func_134(8))
	{
		func_575(Local_13.f_1173);
		func_576();
		func_577();
		func_578();
	}
	else
	{
		func_608(0, 0f);
	}
}

struct<8> func_315()
{
	char cVar0[64];

	Local_3225.f_1414 = joaat("COLOR_PURE_WHITE");
	StringCopy(&cVar0, aggregate.fme_animal_tagging.func_504(PLAYER::PLAYER_ID()), 64);
	return cVar0;
}

char[] func_316()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_ST_SHARD_OUTRO_PRIMARY_EARNED", func_632());
}

char* func_317()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_ST_SHARD_OUTRO_PRIMARY_KILLS", func_633());
}

char* func_319(float fParam0)
{
	return func_317();
}

bool func_335()
{
	func_608(0, 0f);
	return true;
}

int func_371(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1793117406;
		case 1:
			return -668747133;
		case 2:
			return 217762429;
		case 3:
			return -1049349821;
		case 4:
			return -592280821;
		case 5:
			return 1914071458;
		case 6:
			return 179535921;
		case 7:
			return 1276750075;
		case 8:
			return 1726885030;
		case 9:
			return -946156189;
		case 10:
			return -204185654;
		case 11:
			return -2049688002;
		case 12:
			return -202007812;
		case 13:
			return -409038919;
		case 14:
			return 439583753;
		case 15:
			return -1678548701;
		case 16:
			return -828272613;
		case 17:
			return 1907897756;
		case 18:
			return 2011932436;
		case 19:
			return -1678866018;
		case 20:
			return 483086319;
		case 21:
			return 1789390703;
		case 22:
			return -784532701;
		case 23:
			return 653187835;
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

bool func_373(var uParam0)
{
	bool bVar0;
	bool bVar1;

	*uParam0 = Local_2695;
	uParam0->f_2 = 1793117406;
	uParam0->f_3 = Local_3225.f_2;
	bVar0 = DATAFILE::_0x603AC35FD4602C76(Local_2695);
	bVar1 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	return (bVar0 && bVar1);
}

void func_374(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 45)
	{
		return;
	}
	aggregate.bandana.func_26(&((Local_13.f_9[iParam0 /*7*/])->f_6), iParam1);
}

int func_413(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 2, &uParam1);
	return 1;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case -1900781664:
			return -1397252733;
		case -824858074:
			return joaat("a_m_m_unigunslinger_01");
		case -79540972:
			return 1722511552;
		case 2063714806:
			return -640132444;
		default:
			break;
	}
	return -1397252733;
}

int func_416()
{
	return -1038436471;
}

int func_417()
{
	return joaat("wagon04x");
}

int func_418()
{
	return 1092771681;
}

bool func_419(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	bVar0 = uParam1->f_2;
	if (func_725(func_170(iParam0)))
	{
		bVar0 = !bVar0;
	}
	fVar1 = ((IntToFloat(*uParam2) * 5f) + 330f);
	vVar2 = { VEHICLE::_0xBA958F68031DDBFC(*uParam1, uParam1->f_1) };
	if (iParam0 == -824858074)
	{
		vVar2 = { 2775.967f, -1409.05f, 44.996f };
	}
	vVar5 = { VEHICLE::_0x35D302397E524939(*uParam1, vVar2, fVar1, !bVar0) };
	if (!aggregate.flow_controller.func_429(0, vVar5))
	{
		*uParam2++;
		if (*uParam2 < 45)
		{
			return false;
		}
	}
	aggregate.fme_king_of_the_rails.func_699(0, func_181(), vVar2, bVar0, Local_3225.f_7);
	return true;
}

bool func_420(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return aggregate.aberdeenpigfarm.func_175((Local_1190[iParam1 /*47*/])->f_38, iParam0);
	}
	return false;
}

bool func_421()
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1169))
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1169))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		iVar1 = VEHICLE::_0x2963B5C1637E8A27(iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return false;
		}
		if (!NETWORK::_0xB07D3185E11657A5(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
				}
			}
		}
		else
		{
			Local_13.f_1169 = NETWORK::PED_TO_NET(iVar1);
		}
	}
	return false;
}

bool func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	if (aggregate.fme_supply_train.func_531(0, Local_3225.f_1332))
	{
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			iVar2 = func_532(0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("privateflatcar01x")))
			{
				if (!PROPSET::_0x155B2FBE72D7D1D0(iVar2))
				{
					iVar0 = 0;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_424(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (aggregate.fme_supply_train.func_531(0, Local_3225.f_1332))
	{
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar12 = func_532(0, iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar12) && VEHICLE::IS_VEHICLE_MODEL(iVar12, joaat("privateflatcar01x")))
			{
				iVar13 = 0;
				while (iVar13 <= 5)
				{
					if (bParam0)
					{
						iVar14 = Local_13.f_1159;
					}
					else
					{
						iVar14 = Local_13.f_1159;
					}
					if (func_728(iVar0, iVar13, iVar14))
					{
						iVar15 = func_445(iVar14);
						iVar1 = 0;
						while (iVar1 <= (iVar15 - 1))
						{
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar1 /*3*/])))
							{
								func_729(iVar12, iVar13, &vVar2, &vVar5);
								if (aggregate.fme_archery.func_922(Local_13.f_1096[iVar1 /*3*/], func_418(), vVar2, 1, 0))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar1 /*3*/])), iVar12, 0, 0, vVar2, 0f, 0f, 0f, vVar5, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
									PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar1 /*3*/])));
									OBJECT::_0xFFB99FFD17F65889(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar1 /*3*/])), 4f);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar1 /*3*/])), true, 1269650476);
									if (bParam0)
									{
										ENTITY::SET_ENTITY_ALPHA(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar1 /*3*/])), 0, false);
										func_731(iVar1, 0);
									}
								}
								else
								{
									iVar1++;
								}
								iVar13++;
								iVar11 = PROPSET::_0xCE2ACD6F602803E5(iVar12);
								iVar10 = ITEMSET::CREATE_ITEMSET(true);
								iVar9 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar11, iVar10, 0, false, false);
								iVar8 = 0;
								while (iVar8 <= (iVar9 - 1))
								{
									iVar16 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, iVar10));
									ENTITY::_0xE9E7A0BAC7F57746(iVar16, 1);
									NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iVar16);
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar16, true, false);
									if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar16))
									{
									}
									if (NETWORK::_0xB07D3185E11657A5(iVar16) && ENTITY::GET_ENTITY_MODEL(iVar16) == func_418())
									{
										vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar12, ENTITY::GET_ENTITY_COORDS(iVar16, true, false)) };
										vVar5 = { ENTITY::GET_ENTITY_ROTATION(iVar16, 2) };
										OBJECT::DELETE_OBJECT(&iVar16);
									}
									iVar8++;
								}
								ITEMSET::DESTROY_ITEMSET(iVar10);
								iVar0++;
								return true;
							}
						}
					}
				}
			}
		}
	}
}

bool func_426()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1176))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		iVar1 = func_732();
		vVar2 = { func_733(Local_3225.f_2) };
		fVar5 = func_734(Local_3225.f_2);
		if (aggregate.fme_archery.func_1103(iVar1))
		{
			if (aggregate.fme_condor_egg.func_999(&(Local_13.f_1176), iVar1, vVar2, fVar5, 1, 0, 0, 0))
			{
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

int func_434(int iParam0, int iParam1)
{
	struct<13> Var0;

	if (!func_736(iParam0, iParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 6;
		Var0.f_5 = iParam0;
		Var0.f_11 = iParam1;
		return func_413(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

int func_435(int iParam0)
{
	struct<13> Var0;

	if (!func_737(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 7;
		Var0.f_5 = iParam0;
		return func_413(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

bool func_436(int iParam0, char* sParam1)
{
	struct<8> Var0;
	struct<16> Var8;

	Var0 = { aggregate.fme_king_of_the_rails.func_709(sParam1) };
	if (!func_739(iParam0, Var0))
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_4 = 9;
		Var8.f_5 = iParam0;
		Var8.f_15 = { Var0 };
		return func_413(&Var8, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return true;
}

void func_437()
{
	func_436(0, "STOPPED");
	func_435(0);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(3, 1609284507, 1269650476);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(3, 1269650476, 1609284507);
	func_740(0f);
}

void func_440()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;

	func_741();
	switch (Local_13.f_1173)
	{
		case 0:
			Local_13.f_1157 = 0;
			Local_13.f_1159 = 0;
			aggregate.fme_animal_tagging.func_212(1);
			break;
		case 1:
			if (!aggregate.fme_animal_tagging.func_134(64))
			{
				iVar4 = aggregate.fme_king_of_the_rails.func_407(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (aggregate.barcustomer_interaction.func_42(&Local_13))
					{
						if (aggregate.fme_animal_tagging.func_134(1))
						{
							func_740(5f);
							aggregate.fme_escaped_convicts.func_515(64);
							aggregate.fme_animal_tagging.func_290(&Local_13);
							aggregate.fme_animal_tagging.func_212(2);
						}
						else
						{
							func_451();
						}
					}
					else
					{
						aggregate.fme_animal_tagging.func_1407(&Local_13);
					}
				}
			}
			break;
		case 2:
			vVar0 = { func_743(0) };
			if ((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_9)
			{
				vVar5 = { func_171(func_744(Local_3225.f_2, Local_13.f_1157)) };
				vVar8 = { VEHICLE::_0xBA958F68031DDBFC(vVar5.x, vVar5.y) };
				fVar3 = BUILTIN::VDIST(vVar0, vVar8);
			}
			else
			{
				fVar3 = BUILTIN::VDIST(vVar0, (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1);
			}
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				aggregate.fme_escaped_convicts.func_888(256);
			}
			if (!aggregate.annesburg.func_121((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_4))
			{
				if (func_746(Local_13.f_1157))
				{
					func_747(Local_13.f_1157, 1);
				}
			}
			if (fVar3 < 50f)
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
			if (func_748(65536))
			{
				aggregate.fme_animal_tagging.func_212(7);
			}
			break;
		case 3:
			vVar0 = { func_743(0) };
			fVar3 = BUILTIN::VDIST(vVar0, (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1);
			if (ENTITY::GET_ENTITY_SPEED(func_532(0, 0)) <= 0f)
			{
				aggregate.fme_animal_tagging.func_212(4);
			}
			if (aggregate.fme_animal_tagging.func_134(2))
			{
				func_747(Local_13.f_1157, 0);
				func_749();
				aggregate.fme_escaped_convicts.func_888(2);
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 4:
			if ((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_8)
			{
				func_751(1, Local_13.f_1160);
				aggregate.fme_animal_tagging.func_212(5);
			}
			else
			{
				if (!aggregate.fme_animal_tagging.func_134(256))
				{
					aggregate.fme_escaped_convicts.func_515(256);
				}
				func_752();
				if (func_753(Local_3225.f_1396, 100f) <= 0)
				{
					aggregate.fme_animal_tagging.func_212(6);
				}
			}
			break;
		case 5:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[Local_13.f_1157 /*14*/])) && aggregate.fme_animal_tagging.func_134(2))
			{
				func_740(5f);
				func_751(0, Local_13.f_1160);
				func_747(Local_13.f_1157, 0);
				func_754();
				func_749();
				aggregate.fme_escaped_convicts.func_888(2);
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 6:
			iVar11 = aggregate.fme_king_of_the_rails.func_407(0);
			func_752();
			if (ENTITY::DOES_ENTITY_EXIST(iVar11))
			{
				if (aggregate.barcustomer_interaction.func_42(&Local_13))
				{
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_2695.f_272[Local_13.f_1158]), 0))
					{
						if (!aggregate.fme_animal_tagging.func_134(2048))
						{
							func_755();
							aggregate.fme_escaped_convicts.func_515(2048);
						}
						else
						{
							func_424(1);
						}
					}
					else if (aggregate.fme_animal_tagging.func_134(4096))
					{
						if (((ANIMSCENE::_0xD8254CB2C586412B(&(Local_2695.f_272[Local_13.f_1158]), 0) || ANIMSCENE::_0xF94692EB9DC15D74(&(Local_2695.f_272[Local_13.f_1158]), 0)) || ANIMSCENE::_0x34A0671BE613D3D0(&(Local_2695.f_272[Local_13.f_1158]))) || func_748(131072))
						{
							aggregate.fme_golden_hat.func_194();
							if (aggregate.fme_animal_tagging.func_134(2048))
							{
								aggregate.fme_escaped_convicts.func_888(2048);
							}
						}
					}
					if (func_757(131072))
					{
						if ((func_758(0) != func_759(Local_3225.f_2) && !func_760(0, func_759(Local_3225.f_2), 1, 1092616192 /* Float: 10f */)) && !aggregate.fme_animal_tagging.func_134(128))
						{
							func_740(5f);
						}
						aggregate.fme_animal_tagging.func_290(&Local_13);
						iVar12 = 0;
						while (iVar12 <= 44)
						{
							func_761(iVar12, 0);
							iVar12++;
						}
						func_762(&Local_13);
						func_149(&Local_13, Local_13.f_1159);
						func_747(Local_13.f_1157, 0);
						func_749();
						func_763();
						aggregate.fme_animal_tagging.func_212(2);
					}
					else
					{
						func_451();
					}
				}
				else
				{
					aggregate.fme_animal_tagging.func_1407(&Local_13);
				}
			}
			break;
		case 7:
			if (!aggregate.fme_animal_tagging.func_134(256))
			{
				aggregate.fme_escaped_convicts.func_515(256);
			}
			func_752();
			if (func_753(Local_3225.f_1396, 100f) <= 0)
			{
				if (!aggregate.fme_animal_tagging.func_134(128))
				{
					func_451();
					aggregate.fme_escaped_convicts.func_515(128);
				}
			}
			break;
	}
}

void func_441()
{
	switch (Local_13.f_1174)
	{
		case 0:
			aggregate.fme_animal_tagging.func_212(1);
			break;
		case 1:
			if (func_765())
			{
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 2:
			func_740(8f);
			aggregate.fme_animal_tagging.func_212(3);
			break;
		case 3:
			if (!func_765())
			{
				aggregate.fme_animal_tagging.func_212(4);
			}
			break;
		case 4:
			if (Local_2695.f_279 == 2)
			{
				func_740(5f);
			}
			aggregate.fme_animal_tagging.func_212(1);
			break;
	}
}

void func_442()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;

	if (aggregate.barcustomer_interaction.func_42(&(Local_13.f_6)))
	{
		iVar1 = aggregate.fme_animal_tagging.func_181(&(Local_13.f_6));
		if (iVar1 > 5000)
		{
			if (!aggregate.fme_animal_tagging.func_134(256))
			{
				func_766();
				aggregate.fme_animal_tagging.func_1407(&(Local_13.f_6));
			}
		}
	}
	else
	{
		aggregate.fme_animal_tagging.func_1407(&(Local_13.f_6));
	}
	if (Local_13.f_1161 >= 0 && Local_13.f_1161 < 35)
	{
		switch ((Local_13.f_506[Local_13.f_1161 /*14*/])->f_2)
		{
			case 1:
				if (func_767(Local_13.f_1161, -1))
				{
					aggregate.fme_supply_train.func_768(Local_13.f_1161, 2);
				}
				break;
		}
	}
	func_769();
	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (func_770(&(Local_13.f_506[iVar0 /*14*/])))
		{
			if ((Local_13.f_506[iVar0 /*14*/])->f_2 > 2 && (Local_13.f_506[iVar0 /*14*/])->f_2 < 9)
			{
				aggregate.fme_supply_train.func_768(iVar0, 9);
			}
		}
		else
		{
			if ((Local_13.f_506[iVar0 /*14*/])->f_2 >= 2 && (Local_13.f_506[iVar0 /*14*/])->f_2 < 9)
			{
				func_771(iVar0);
				if (aggregate.fme_animal_tagging.func_134(128))
				{
					if ((Local_13.f_506[iVar0 /*14*/])->f_2 != 8)
					{
						aggregate.fme_supply_train.func_768(iVar0, 8);
					}
				}
			}
			if (func_772(iVar0, 8))
			{
				if (aggregate.barcustomer_interaction.func_42(&((Local_13.f_506[iVar0 /*14*/])->f_9)))
				{
					iVar1 = aggregate.fme_animal_tagging.func_181(&((Local_13.f_506[iVar0 /*14*/])->f_9));
					if (iVar1 > 6000)
					{
						func_773(iVar0, 16);
						aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_9));
					}
				}
				else
				{
					aggregate.fme_animal_tagging.func_1407(&((Local_13.f_506[iVar0 /*14*/])->f_9));
				}
			}
			else if (aggregate.barcustomer_interaction.func_42(&((Local_13.f_506[iVar0 /*14*/])->f_9)))
			{
				aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_9));
			}
		}
		switch ((Local_13.f_506[iVar0 /*14*/])->f_2)
		{
			case 0:
				if (Local_13.f_1173 >= 2)
				{
					aggregate.fme_supply_train.func_768(iVar0, 1);
				}
				break;
			case 1:
				break;
			case 2:
				if (func_774(iVar0))
				{
					iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					func_775(&Var2, Local_3225.f_2, Local_13.f_1159);
					if (iVar4 < Var2.f_1)
					{
						func_776(iVar0, 2);
					}
				}
				aggregate.fme_supply_train.func_768(iVar0, 3);
				break;
			case 3:
				if (aggregate.camera_item.func_34(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 0))
				{
					if ((Local_13.f_506[iVar0 /*14*/])->f_4 >= 0)
					{
						if (aggregate.fme_animal_tagging.func_134(256))
						{
							if (aggregate.fme_challenges.func_1307(iVar0, 2) && func_772(iVar0, 64))
							{
								aggregate.fme_supply_train.func_768(iVar0, 4);
							}
							else
							{
								aggregate.fme_supply_train.func_768(iVar0, 7);
							}
						}
						else if (aggregate.fme_challenges.func_1307(iVar0, 2))
						{
							aggregate.fme_supply_train.func_768(iVar0, 4);
						}
						else
						{
							aggregate.fme_supply_train.func_768(iVar0, 5);
						}
					}
					else
					{
						aggregate.fme_supply_train.func_768(iVar0, 5);
					}
				}
				break;
			case 4:
				if (aggregate.barcustomer_interaction.func_42(&((Local_13.f_506[iVar0 /*14*/])->f_6)))
				{
					iVar1 = aggregate.fme_animal_tagging.func_181(&((Local_13.f_506[iVar0 /*14*/])->f_6));
					if (func_772(iVar0, 1) || iVar1 > 5000)
					{
						aggregate.fme_supply_train.func_768(iVar0, 5);
						aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_6));
					}
				}
				else
				{
					aggregate.fme_animal_tagging.func_1407(&((Local_13.f_506[iVar0 /*14*/])->f_6));
				}
				break;
			case 5:
				if (aggregate.barcustomer_interaction.func_42(&((Local_13.f_506[iVar0 /*14*/])->f_6)))
				{
					iVar1 = aggregate.fme_animal_tagging.func_181(&((Local_13.f_506[iVar0 /*14*/])->f_6));
					if (func_772(iVar0, 1) && (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("on_foot"))
					{
						iVar5 = 10000;
					}
					else
					{
						iVar5 = 5000;
					}
					if (iVar1 > iVar5)
					{
						aggregate.fme_supply_train.func_768(iVar0, 2);
						func_779(iVar0, 1);
						func_779(iVar0, 2);
						aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_6));
						func_780(iVar0, 1);
					}
				}
				else
				{
					aggregate.fme_animal_tagging.func_1407(&((Local_13.f_506[iVar0 /*14*/])->f_6));
				}
				break;
			case 7:
				if (!aggregate.fme_challenges.func_1307(iVar0, 8))
				{
					if (aggregate.barcustomer_interaction.func_42(&((Local_13.f_506[iVar0 /*14*/])->f_6)))
					{
						iVar1 = aggregate.fme_animal_tagging.func_181(&((Local_13.f_506[iVar0 /*14*/])->f_6));
						if (iVar1 > 5000)
						{
							func_776(iVar0, 8);
							aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_6));
						}
					}
					else
					{
						aggregate.fme_animal_tagging.func_1407(&((Local_13.f_506[iVar0 /*14*/])->f_6));
					}
				}
				else if (func_772(iVar0, 32))
				{
					func_779(iVar0, 8);
					func_780(iVar0, 32);
				}
				if (func_772(iVar0, 64))
				{
					if (func_781(iVar0))
					{
						aggregate.fme_supply_train.func_768(iVar0, 2);
						aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_6));
						func_779(iVar0, 8);
					}
				}
				break;
			case 8:
				break;
			case 9:
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_13.f_506[iVar0 /*14*/])->f_1))
				{
					aggregate.fme_animal_tagging.func_1407(&((Local_13.f_506[iVar0 /*14*/])->f_6));
					aggregate.fme_supply_train.func_768(iVar0, 10);
				}
				break;
			case 10:
				iVar1 = aggregate.fme_animal_tagging.func_181(&((Local_13.f_506[iVar0 /*14*/])->f_6));
				if (func_782(iVar0))
				{
					if (iVar1 > 6000)
					{
						if ((Local_13.f_506[iVar0 /*14*/])->f_4 >= 0)
						{
							if (!func_783((Local_13.f_506[iVar0 /*14*/])->f_4, 1))
							{
								func_784((Local_13.f_506[iVar0 /*14*/])->f_4, 8);
							}
							if ((Local_13.f_9[(Local_13.f_506[iVar0 /*14*/])->f_4 /*7*/])->f_5 > 0 || (Local_13.f_9[(Local_13.f_506[iVar0 /*14*/])->f_4 /*7*/])->f_4 > 0)
							{
								if (!func_783((Local_13.f_506[iVar0 /*14*/])->f_4, 4))
								{
									func_374((Local_13.f_506[iVar0 /*14*/])->f_4, 4);
								}
							}
						}
						(Local_13.f_506[iVar0 /*14*/])->f_4 = -1;
						(Local_13.f_506[iVar0 /*14*/])->f_12 = 0;
						aggregate.fme_animal_tagging.func_290(&((Local_13.f_506[iVar0 /*14*/])->f_6));
						if (VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iVar0 /*14*/])->f_13))
						{
							VOLUME::_0x43F867EF5C463A53((Local_13.f_506[iVar0 /*14*/])->f_13);
						}
						aggregate.fme_supply_train.func_768(iVar0, 0);
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_444()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (!func_785(iVar0))
		{
		}
		else if (func_786(iVar0))
		{
		}
		else
		{
			func_787(iVar0, 0);
		}
		iVar0++;
	}
}

int func_445(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 6;
			break;
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 18;
			break;
	}
	return iVar0;
}

int func_447()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (func_788(iVar1))
		{
		}
		else if (func_420(4096, iVar1))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_450()
{
	if (aggregate.fme_animal_tagging.func_631(&(Local_3225.f_13)) > 0f)
	{
		aggregate.fme_animal_tagging.func_632((Local_3225.f_13.f_210[0 /*23*/])->f_14);
	}
	aggregate.bandana.func_26(&(Local_2982.f_13), 256);
}

int func_451()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = aggregate.fme_king_of_the_rails.func_407(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
	{
		func_740(0f);
		iVar0 = 0;
	}
	return iVar0;
}

void func_467()
{
	AUDIO::TRIGGER_MUSIC_EVENT(func_801());
	if (aggregate.fme_animal_tagging.func_134(8))
	{
		func_575(Local_13.f_1173);
		func_576();
		func_577();
		func_578();
	}
	else
	{
		func_608(0, 0f);
	}
	if (!aggregate.fme_animal_tagging.func_134(128) && !aggregate.fme_animal_tagging.func_134(8))
	{
		if (func_447() == 0)
		{
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
		if (aggregate.fme_animal_tagging.func_195() > 5000 && Local_3225.f_1267 <= 0)
		{
			aggregate.fme_archery.func_1315(0f);
			Local_2695.f_277 = 0;
		}
	}
	if (aggregate.fme_condor_egg.func_1656(0, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	}
}

int func_468()
{
	return 840515068;
}

char* func_469(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1900781664:
			if (iParam1 == 0)
			{
				return "script@mp@freemode_events@supply_train@cornwall";
			}
			else
			{
				return "script@mp@freemode_events@supply_train@heartland_overflow";
			}
			break;
		case -824858074:
			if (iParam1 == 0)
			{
				return "script@mp@freemode_events@supply_train@bluegill";
			}
			else
			{
				return "script@mp@freemode_events@supply_train@van_horn";
			}
			break;
		case -79540972:
			if (iParam1 == 0)
			{
				return "script@mp@freemode_events@supply_train@flatneck_station";
			}
			else
			{
				return "script@mp@freemode_events@supply_train@dewberry_creek";
			}
			break;
		case 2063714806:
			if (iParam1 == 0)
			{
				return "script@mp@freemode_events@supply_train@mercer_station";
			}
			else
			{
				return "script@mp@freemode_events@supply_train@rio_bravo";
			}
			break;
	}
	return "";
}

bool func_470(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return false;
					}
				}
				if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
				{
					if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 1))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = NETWORK::_0xE0D73CDDEA79DDCD(*uParam1);
				}
			}
			return false;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return false;
	}
	*uParam1 = NETWORK::_0xD7F6781A0ABAF6FB(*uParam2);
	if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		return false;
	}
	return true;
}

void func_472()
{
	int iVar0;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && VEHICLE::_0xE887BD31D97793F6(iVar0))
		{
			func_435(0);
			aggregate.fme_escaped_convicts.func_515(4);
		}
	}
}

float func_473(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_474()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = VEHICLE::_0x2963B5C1637E8A27(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1169))
	{
		return 0;
	}
	if (func_420(32, Local_3225.f_1332))
	{
		return 1;
	}
	iVar1 = NETWORK::NET_TO_PED(Local_13.f_1169);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		if (!NETWORK::_0xB07D3185E11657A5(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 263, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 245, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 17, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 18, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 19, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 6, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 310, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
			PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
			PED::_0xAE6004120C18DF97(iVar1, 0, false);
			ENTITY::SET_ENTITY_PROOFS(iVar1, 159, false);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar1, 524369);
			PED::SET_PED_CONFIG_FLAG(iVar1, 2, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, 1609284507);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1609284507, 1269650476);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1269650476, 1609284507);
			func_475(32);
		}
	}
	return 0;
}

void func_475(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175((Local_1190[Local_3225.f_1332 /*47*/])->f_38, iParam0))
	{
		aggregate.bandana.func_26(&((Local_1190[Local_3225.f_1332 /*47*/])->f_38), iParam0);
	}
}

bool func_476(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!aggregate.annesburg.func_121((Local_13.f_1025[iVar0 /*14*/])->f_10))
		{
			if (bParam0)
			{
				if (!ENTITY::_0x6BFBDC46139C45AB((Local_13.f_1025[iVar0 /*14*/])->f_10))
				{
					STREAMING::REQUEST_COLLISION_AT_COORD((Local_13.f_1025[iVar0 /*14*/])->f_10);
				}
				else
				{
					bVar2 = true;
				}
			}
			if (!bParam0 || bVar2)
			{
				if (PROPSET::_HAS_PROPSET_LOADED_2(func_468()))
				{
					if (!PROPSET::_DOES_PROPSET_EXIST(&(Local_2695.f_117[iVar0])))
					{
						Local_2695.f_117[iVar0] = PROPSET::_CREATE_PROPSET_2(func_468(), (Local_13.f_1025[iVar0 /*14*/])->f_10, 1, (Local_13.f_1025[iVar0 /*14*/])->f_13, 1200f, false, true);
					}
					else if (!PROPSET::_0xF42DB680A8B2A4D9(&(Local_2695.f_117[iVar0])))
					{
						iVar1 = 0;
					}
					if (PROPSET::_DOES_PROPSET_EXIST(&(Local_2695.f_117[iVar0])))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
				}
				else
				{
					PROPSET::_REQUEST_PROPSET_2(func_468());
					iVar1 = 0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_477(int iParam0)
{
	switch (iParam0)
	{
		case -1900781664:
			func_803(-245962931, 1);
			break;
		case -824858074:
			func_803(-1420724065, 1);
			break;
		case -79540972:
			func_804(2);
			func_803(-530846566, 0);
			break;
		case 2063714806:
			func_803(1603023256, 1);
			break;
	}
}

bool func_492(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_3225.f_1288 == 0 || !aggregate.fishing_core.func_107(Local_3225.f_1288))
	{
		aggregate.fme_animal_tagging.func_345();
	}
	if (iParam0 >= 5 && (aggregate.fishing_core.func_107(Local_3225.f_1287) && !bParam3))
	{
		aggregate.fme_animal_tagging.func_345();
		return false;
	}
	if (Local_3225.f_1266 == 5 && iParam0 >= 5)
	{
		return false;
	}
	if (Local_3225.f_1266 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			aggregate.fme_animal_tagging.func_345();
		}
		else
		{
			Local_3225.f_1288 = aggregate.fme_animal_tagging.func_684(sParam1, iParam2, 0, 0, 1);
		}
		Local_3225.f_1266 = iParam0;
		return true;
	}
	return false;
}

int func_532(int iParam0, int iParam1)
{
	return &((Global_1130823->f_2[iParam0 /*41*/])->f_10[iParam1 /*2*/]);
}

int func_534()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return 0;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (iVar1 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	return iVar1;
}

void func_536(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_748(iParam0))
	{
		if (aggregate.barcustomer_interaction.func_42(&(Local_2982.f_1)))
		{
			iVar0 = aggregate.fme_animal_tagging.func_181(&(Local_2982.f_1));
			iVar1 = (Local_3225.f_1268 - iVar0);
			if (iVar1 <= iParam1)
			{
				if (func_436(0, "ACKNOWLEDGE"))
				{
					func_475(iParam0);
				}
			}
		}
	}
}

void func_548()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_532(0, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		aggregate.fme_animal_tagging.func_34(vVar1);
	}
}

char* func_559(int iParam0, bool bParam1, bool bParam2)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		*bParam1 = 0;
		return "";
	}
	*bParam1 = 1;
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTR_HELP_CONTENT_RULES", iParam0);
}

void func_569(var uParam0)
{
	var uVar0;
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

	uVar0 = uParam0->f_210;
	iVar1 = 23;
	iVar2 = 5;
	iVar3 = 2;
	iVar4 = 1;
	iVar5 = 1;
	iVar6 = 2;
	iVar7 = 1;
	iVar8 = 2;
	iVar9 = 2;
	iVar10 = 1;
	iVar11 = 3;
	iVar12 = 2;
	iVar13 = 1;
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12, iVar13);
}

void func_575(int iParam0)
{
	if (iParam0 != Local_2695.f_279)
	{
	}
	Local_2695.f_279 = iParam0;
}

void func_576()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	int iVar13;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
		iVar6 = iVar5;
		if (iVar6 != 255 && iVar6 > -1)
		{
			if (func_420(32768, iVar6))
			{
				aggregate.fme_escaped_convicts.func_515(8);
			}
		}
	}
	if (Local_13.f_1173 >= 2 && Local_13.f_1173 <= 3)
	{
		if (!(Local_13.f_1025[Local_13.f_1157 /*14*/])->f_9)
		{
			if (!aggregate.annesburg.func_121((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1))
			{
				func_895(0, (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1);
			}
		}
	}
	func_896();
	Local_2695.f_285 = func_897();
	switch (Local_2695.f_279)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT(func_898());
			break;
		case 1:
			if (!aggregate.fme_animal_tagging.func_134(1))
			{
				iVar7 = aggregate.fme_king_of_the_rails.func_407(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					if (aggregate.barcustomer_interaction.func_42(&Local_13))
					{
						iVar8 = aggregate.fme_animal_tagging.func_181(&Local_13);
						if (iVar8 > 100)
						{
							if (func_899(0))
							{
								func_608(0, 5f);
							}
						}
					}
					if (ENTITY::GET_ENTITY_SPEED(iVar7) > 0f)
					{
						aggregate.fme_escaped_convicts.func_515(1);
					}
				}
			}
			if (Local_3225.f_1266 != 10)
			{
				func_492(10, "FME_ST_PROTECT_GOODS", -1, 0);
			}
			break;
		case 2:
			vVar0 = { func_743(0) };
			fVar3 = BUILTIN::VDIST(vVar0, (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1);
			vVar9 = { func_901(aggregate.fme_supply_train.func_900()) };
			bVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar9, true) < 10f;
			if ((func_758(0) == func_759(Local_3225.f_2) || func_760(0, func_759(Local_3225.f_2), 1, 1092616192 /* Float: 10f */)) || (Local_2695.f_285 >= 0.999f && bVar12))
			{
				func_475(65536);
				func_902(0);
				func_608(0, 0f);
				return;
			}
			func_903();
			if (ENTITY::GET_ENTITY_SPEED(func_532(0, 0)) <= 0f)
			{
				if (func_899(0))
				{
					func_608(0, 5f);
				}
			}
			if (func_420(131072, 255))
			{
				func_904(131072);
			}
			if (aggregate.annesburg.func_217((Local_1190[Local_3225.f_1332 /*47*/])->f_43))
			{
				aggregate.annesburg.func_218(&((Local_1190[Local_3225.f_1332 /*47*/])->f_43), 1, 1);
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[Local_13.f_1157 /*14*/])))
			{
				func_905(NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])), 0);
			}
			if (Local_3225.f_1266 != 10)
			{
				func_492(10, "FME_ST_PROTECT_GOODS", -1, 0);
			}
			if (MAP::DOES_BLIP_EXIST(Local_2695.f_275))
			{
				MAP::REMOVE_BLIP(&(Local_2695.f_275));
			}
			aggregate.fme_escaped_convicts.func_888(65536);
			aggregate.fme_escaped_convicts.func_888(131072);
			break;
		case 3:
			vVar0 = { func_743(0) };
			fVar3 = BUILTIN::VDIST(vVar0, (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_1);
			aggregate.fme_escaped_convicts.func_888(64);
			if (((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_8 && !MAP::DOES_BLIP_EXIST(Local_2695.f_275)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[Local_13.f_1157 /*14*/])))
			{
				if (fVar3 < 30f)
				{
					if (func_492(7, "FME_ST_BLOCKED_TRACKS_OBJECTIVE", -1, 0))
					{
						Local_2695.f_275 = MAP::_0x23F74C2FDA6E7C61(408396114, NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])));
					}
				}
			}
			if (MAP::DOES_BLIP_EXIST(Local_2695.f_275))
			{
				if (!func_906(Local_13.f_1157))
				{
					if (MAP::DOES_BLIP_EXIST(Local_2695.f_275))
					{
						MAP::REMOVE_BLIP(&(Local_2695.f_275));
					}
					func_899(0);
					func_608(0, 5f);
					aggregate.fme_escaped_convicts.func_515(2);
				}
			}
			break;
		case 4:
			aggregate.fme_escaped_convicts.func_888(32);
			if ((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_8)
			{
				if (Local_3225.f_1266 != 7)
				{
					func_492(7, "FME_ST_BLOCKED_TRACKS_OBJECTIVE", -1, 0);
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[Local_13.f_1157 /*14*/])) && !MAP::DOES_BLIP_EXIST(Local_2695.f_275))
				{
					Local_2695.f_275 = MAP::_0x23F74C2FDA6E7C61(408396114, NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])));
				}
			}
			else if (Local_3225.f_1266 != 6)
			{
				func_492(6, "FME_ST_REMAINING_BANDITS_OBJECTIVE", -1, 0);
			}
			if (func_907(0) || ENTITY::GET_ENTITY_SPEED(aggregate.fme_king_of_the_rails.func_407(0)) != 0f)
			{
				func_608(0, 0f);
			}
			break;
		case 5:
			if (!aggregate.fme_condor_egg.func_1287(NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])), (Local_13.f_1025[Local_13.f_1157 /*14*/])->f_4, 5f, 1, 1))
			{
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])), 0, 0))
			{
			}
			if (VEHICLE::_0xDDBEA5506C848227(NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/]))))
			{
			}
			if ((Local_13.f_1025[Local_13.f_1157 /*14*/])->f_8)
			{
				if (Local_3225.f_1266 != 7)
				{
					func_492(7, "FME_ST_BLOCKED_TRACKS_OBJECTIVE", -1, 0);
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[Local_13.f_1157 /*14*/])) && !MAP::DOES_BLIP_EXIST(Local_2695.f_275))
				{
					Local_2695.f_275 = MAP::_0x23F74C2FDA6E7C61(408396114, NETWORK::NET_TO_VEH(&(Local_13.f_1025[Local_13.f_1157 /*14*/])));
				}
				if (!aggregate.fme_animal_tagging.func_134(64))
				{
					aggregate.fme_animal_tagging.func_499("FME_ST_BLOCKED_TRACKS", joaat("COLOR_WHITE"));
					aggregate.fme_escaped_convicts.func_515(64);
				}
			}
			if (!func_906(Local_13.f_1157))
			{
				if (MAP::DOES_BLIP_EXIST(Local_2695.f_275))
				{
					MAP::REMOVE_BLIP(&(Local_2695.f_275));
				}
				func_899(0);
				func_608(0, 5f);
				aggregate.fme_escaped_convicts.func_515(2);
			}
			else if (func_907(0) || ENTITY::GET_ENTITY_SPEED(aggregate.fme_king_of_the_rails.func_407(0)) != 0f)
			{
				func_608(0, 0f);
			}
			break;
		case 6:
			iVar13 = aggregate.fme_king_of_the_rails.func_407(0);
			_NAMESPACE79::_0x1C38C3577901AF1F();
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!aggregate.fme_animal_tagging.func_134(131072))
			{
				aggregate.fme_animal_tagging.func_499(MISC::_CREATE_VAR_STRING(2, "FME_ST_STATION_REACHED", Local_2695.f_277), joaat("COLOR_WHITE"));
				aggregate.fme_escaped_convicts.func_515(131072);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				if (aggregate.barcustomer_interaction.func_42(&Local_13))
				{
					if ((ANIMSCENE::_0x25557E324489393C(&(Local_2695.f_272[Local_13.f_1158])) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_2695.f_272[Local_13.f_1158]))) && CAM::_0xA2B1C7EF759A63CE() >= 1f)
					{
						if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_2695.f_272[Local_13.f_1158]), 0))
						{
							ANIMSCENE::START_ANIM_SCENE(&(Local_2695.f_272[Local_13.f_1158]));
						}
					}
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_2695.f_272[Local_13.f_1158]), 0))
					{
						if (!aggregate.fme_animal_tagging.func_134(16384))
						{
							AUDIO::TRIGGER_MUSIC_EVENT(func_909());
							aggregate.fme_escaped_convicts.func_515(16384);
						}
						func_910();
						if (((((!aggregate.annesburg.func_217((Local_1190[Local_3225.f_1332 /*47*/])->f_43) && !func_420(131072, 255)) && !aggregate.fme_animal_tagging.func_134(8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())) && func_911())
						{
							(Local_1190[Local_3225.f_1332 /*47*/])->f_43 = aggregate.binoculars.func_20(MISC::_CREATE_VAR_STRING(2, "FME_ST_USE_CONTEXT_LEAVE", Local_2695.f_277), joaat("INPUT_CONTEXT_B"), 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							if (func_788(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								aggregate.binoculars.func_37((Local_1190[Local_3225.f_1332 /*47*/])->f_43, 1, 1, 1);
								aggregate.camera_item.func_130((Local_1190[Local_3225.f_1332 /*47*/])->f_43, 2072763408, 0, 1);
							}
						}
						if (!aggregate.fme_animal_tagging.func_134(4096))
						{
							aggregate.fme_escaped_convicts.func_515(4096);
						}
						if (!aggregate.fme_animal_tagging.func_134(32768))
						{
							if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								Local_3225.f_1289 = aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(2, "FME_ST_DESC_RESU", Local_2695.f_277), -1, 0, 0, 0, 1);
							}
							else
							{
								Local_3225.f_1289 = aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(2, "FME_ST_DESC_RSPM", Local_2695.f_277), -1, 0, 0, 0, 1);
							}
							aggregate.fme_escaped_convicts.func_515(32768);
						}
						func_608(0, 0f);
						if ((aggregate.annesburg.func_217((Local_1190[Local_3225.f_1332 /*47*/])->f_43) && aggregate.doc_book.func_50((Local_1190[Local_3225.f_1332 /*47*/])->f_43, 1)) && !aggregate.fme_animal_tagging.func_134(8))
						{
							aggregate.annesburg.func_218(&((Local_1190[Local_3225.f_1332 /*47*/])->f_43), 1, 1);
							aggregate.fme_escaped_convicts.func_515(8);
							func_475(32768);
						}
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							aggregate.fme_supply_train.func_914(0, 2);
						}
					}
					else if (aggregate.fme_animal_tagging.func_134(4096))
					{
						if ((ANIMSCENE::_0xD8254CB2C586412B(&(Local_2695.f_272[Local_13.f_1158]), 0) || ANIMSCENE::_0xF94692EB9DC15D74(&(Local_2695.f_272[Local_13.f_1158]), 0)) || ANIMSCENE::_0x34A0671BE613D3D0(&(Local_2695.f_272[Local_13.f_1158])))
						{
							if (aggregate.annesburg.func_217((Local_1190[Local_3225.f_1332 /*47*/])->f_43))
							{
								aggregate.annesburg.func_218(&((Local_1190[Local_3225.f_1332 /*47*/])->f_43), 1, 1);
							}
							func_903();
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								aggregate.fme_supply_train.func_914(1, 2);
							}
							if (aggregate.fme_animal_tagging.func_134(32768))
							{
								_NAMESPACE71::_0x2F901291EF177B02(Local_3225.f_1289, 1);
								aggregate.fme_escaped_convicts.func_888(32768);
							}
							if (!aggregate.fme_animal_tagging.func_134(65536))
							{
								func_915("FME_ST_GDS_PLS");
								aggregate.fme_escaped_convicts.func_515(65536);
							}
							func_916(Local_13.f_1157, 0);
							func_899(0);
							func_608(0, 5f);
							func_475(131072);
						}
						else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							aggregate.fme_supply_train.func_914(0, 2);
						}
					}
				}
			}
			break;
		case 7:
			if (func_753(Local_3225.f_1396, 100f) > 0)
			{
				if (Local_3225.f_1266 != 6)
				{
					func_492(6, "FME_ST_REMAINING_BANDITS_OBJECTIVE", -1, 0);
				}
			}
			func_902(0);
			func_608(0, 0f);
			break;
	}
}

void func_577()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	func_917();
	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (func_918(iVar0))
		{
			if (!MAP::DOES_BLIP_EXIST(&(Local_2695.f_2[iVar0 /*3*/])))
			{
				Local_2695.f_2[iVar0 /*3*/] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])));
			}
			if (!aggregate.fme_animal_tagging.func_134(8192))
			{
				AUDIO::TRIGGER_MUSIC_EVENT(func_919());
				aggregate.fme_escaped_convicts.func_515(8192);
			}
		}
		else if (MAP::DOES_BLIP_EXIST(&(Local_2695.f_2[iVar0 /*3*/])))
		{
			aggregate.fme_escaped_convicts.func_736(Local_2695.f_2[iVar0 /*3*/]);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/])))
		{
			if (!func_770(&(Local_13.f_506[iVar0 /*14*/])))
			{
				if ((Local_13.f_506[iVar0 /*14*/])->f_2 >= 2 && (Local_13.f_506[iVar0 /*14*/])->f_2 < 9)
				{
					if (!func_772(iVar0, 16))
					{
						if (Local_2695.f_280 > (Local_13.f_506[iVar0 /*14*/])->f_5 + 2)
						{
							vVar2 = { func_743(0) };
							fVar5 = BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), true, false));
							fVar6 = 150f;
							if (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted")
							{
								fVar6 = 200f;
							}
							if (fVar5 > fVar6)
							{
								func_773(iVar0, 8);
							}
							else
							{
								func_780(iVar0, 8);
							}
						}
					}
					else
					{
						aggregate.butchercreek.func_92(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 1, 0);
					}
				}
				if ((Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted") && func_770((Local_13.f_506[iVar0 /*14*/])->f_1))
				{
					if (PED::GET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 167, false))
					{
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 167, false);
					}
				}
			}
			switch ((Local_13.f_506[iVar0 /*14*/])->f_2)
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					if (aggregate.fme_challenges.func_1307(iVar0, 1))
					{
						func_922(iVar0, 1);
						func_773(iVar0, 1);
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/])))
					{
						if ((Local_13.f_506[iVar0 /*14*/])->f_4 >= 0)
						{
							vVar7 = { *(Local_13.f_325[(Local_13.f_506[iVar0 /*14*/])->f_4 /*4*/]) };
							fVar10 = (Local_13.f_325[(Local_13.f_506[iVar0 /*14*/])->f_4 /*4*/])->f_3;
						}
						if (!func_770(&(Local_13.f_506[iVar0 /*14*/])))
						{
							iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/]));
							if (aggregate.barcustomer_interaction.func_46(iVar1, 167901368))
							{
								TASK::CLEAR_PED_TASKS(iVar1, 0, 0);
							}
							if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -1169648302)
							{
								WEAPON::REMOVE_WEAPON_FROM_PED(iVar1, joaat("weapon_thrown_dynamite"), true, -142743235);
							}
							if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -423716019)
							{
								WEAPON::REMOVE_WEAPON_FROM_PED(iVar1, joaat("weapon_thrown_molotov"), true, -142743235);
							}
							if ((Local_13.f_506[iVar0 /*14*/])->f_3 != 547290871 || !func_924())
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
								func_925(iVar0);
								TASK::TASK_COMBAT_HATED_TARGETS(iVar1, -1082130432 /* Float: -1f */);
							}
							if ((Local_13.f_506[iVar0 /*14*/])->f_3 == 547290871 && func_924())
							{
								if (!func_926(iVar0, 1))
								{
									iVar11 = NETWORK::NET_TO_VEH(Local_13.f_1176);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
									TASK::TASK_ENTER_VEHICLE(iVar1, iVar11, -1, -1, 2f, 1, 0);
								}
								else if (func_926(iVar0, 0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
									func_925(iVar0);
									TASK::TASK_COMBAT_HATED_TARGETS(iVar1, -1082130432 /* Float: -1f */);
								}
							}
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 30, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 57, false);
							if ((((Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("on_foot") || (Local_13.f_506[iVar0 /*14*/])->f_3 == -1169648302) || (Local_13.f_506[iVar0 /*14*/])->f_3 == -423716019) || (Local_13.f_506[iVar0 /*14*/])->f_3 == 547290871)
							{
								if (!aggregate.annesburg.func_121(vVar7) && !func_772(iVar0, 64))
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar1, vVar7, fVar10, 1, false, 0);
								}
							}
							else if (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted")
							{
								if (Local_13.f_1173 == 5 || aggregate.fme_animal_tagging.func_134(256))
								{
									func_927(iVar0);
								}
							}
						}
					}
					break;
				case 4:
					iVar12 = 167901368;
					if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -1169648302)
					{
					}
					if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -423716019)
					{
					}
					if (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted")
					{
					}
					if (((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/]))) && !aggregate.fme_challenges.func_1307(iVar0, 1)) && aggregate.fme_supply_train.func_928(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), iVar12, 1, 0))
					{
						iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/]));
						if (!PED::IS_PED_INJURED(iVar1))
						{
							iVar13 = (Local_2695.f_2[iVar0 /*3*/])->f_2;
							if (iVar13 >= 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -1169648302)
								{
									iVar14 = joaat("weapon_thrown_dynamite");
								}
								else if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -423716019)
								{
									iVar14 = joaat("weapon_thrown_molotov");
								}
								if ((Local_13.f_506[iVar0 /*14*/])->f_3 == -1169648302 || (Local_13.f_506[iVar0 /*14*/])->f_3 == -423716019)
								{
									WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, iVar14, 1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
									WEAPON::SET_CURRENT_PED_WEAPON(iVar1, iVar14, false, 0, false, false);
									TASK::TASK_THROW_PROJECTILE(iVar1, ENTITY::GET_ENTITY_COORDS((Local_2695.f_123[iVar13 /*8*/])->f_1, true, false) + Vector(2f, 0f, 0f));
									PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 57, true);
								}
								else
								{
									TASK::TASK_SHOOT_AT_ENTITY(iVar1, (Local_2695.f_123[iVar13 /*8*/])->f_1, 10000, 0, 1);
								}
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 30, true);
								func_929(iVar0, 1);
								if (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted")
								{
								}
								func_773(iVar0, 1);
							}
						}
					}
					break;
				case 5:
					if (Local_13.f_506[iVar0 /*14*/])->f_3 == joaat("mounted")
					{
						if (Local_13.f_1173 == 3)
						{
							if (!VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iVar0 /*14*/])->f_13))
							{
								func_927(iVar0);
							}
						}
						if (Local_13.f_1173 != 5 && !aggregate.fme_animal_tagging.func_134(256))
						{
							if (VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iVar0 /*14*/])->f_13))
							{
								VOLUME::_0x43F867EF5C463A53((Local_13.f_506[iVar0 /*14*/])->f_13);
								PED::REMOVE_PED_DEFENSIVE_AREA(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), false);
							}
						}
					}
					break;
				case 7:
					if (aggregate.fme_challenges.func_1307(iVar0, 8) && !func_772(iVar0, 32))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/])))
						{
							func_927(iVar0);
							func_773(iVar0, 32);
							func_773(iVar0, 64);
						}
					}
					break;
				case 8:
					if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/]))) && aggregate.fme_supply_train.func_928(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 518218985, 1, 0))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 4, false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 512, false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 0, false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 128, false);
						iVar15 = aggregate.fme_king_of_the_rails.func_407(0);
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), ENTITY::GET_ENTITY_COORDS(iVar15, true, false), 200f, -1, false, 1077936128);
					}
					break;
			}
		}
		switch ((Local_13.f_506[iVar0 /*14*/])->f_2)
		{
			case 9:
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/])))
				{
					aggregate.fme_condor_egg.func_611(Local_13.f_506[iVar0 /*14*/]);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((Local_13.f_506[iVar0 /*14*/])->f_1))
				{
					aggregate.fme_condor_egg.func_611(&((Local_13.f_506[iVar0 /*14*/])->f_1));
				}
				break;
			case 10:
				(*Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])[iVar0] = 0;
				break;
		}
		iVar0++;
	}
}

void func_578()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar0 /*3*/])) && !ENTITY::DOES_ENTITY_EXIST((Local_2695.f_123[iVar0 /*8*/])->f_1))
		{
			(Local_2695.f_123[iVar0 /*8*/])->f_1 = NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar0 /*3*/]));
		}
		if ((&Local_2695.f_123[iVar0 /*8*/] >= 2 && &Local_2695.f_123[iVar0 /*8*/] < 4) && ENTITY::GET_ENTITY_HEALTH((Local_2695.f_123[iVar0 /*8*/])->f_1) < 850)
		{
			aggregate.fme_supply_train.func_931(iVar0, 4);
		}
		if ((&Local_2695.f_123[iVar0 /*8*/] >= 2 && &Local_2695.f_123[iVar0 /*8*/] <= 4) && func_932(iVar0))
		{
			iVar1++;
		}
		switch (&Local_2695.f_123[iVar0 /*8*/])
		{
			case 1:
				(Local_2695.f_123[iVar0 /*8*/])->f_2 = func_933((Local_2695.f_123[iVar0 /*8*/])->f_1, 416644418, 0, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE((Local_2695.f_123[iVar0 /*8*/])->f_2, "FME_ST_CRATE_BLIP");
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar0 /*3*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar0 /*3*/]))))
				{
				}
				break;
			case 0:
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar0 /*3*/])) && ENTITY::DOES_ENTITY_EXIST((Local_2695.f_123[iVar0 /*8*/])->f_1))
				{
					(Local_2695.f_123[iVar0 /*8*/])->f_6 = ENTITY::GET_ENTITY_HEALTH((Local_2695.f_123[iVar0 /*8*/])->f_1);
					(Local_2695.f_123[iVar0 /*8*/])->f_2 = func_933((Local_2695.f_123[iVar0 /*8*/])->f_1, 416644418, 0, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE((Local_2695.f_123[iVar0 /*8*/])->f_2, "FME_ST_CRATE_BLIP");
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar0 /*3*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar0 /*3*/]))))
					{
					}
					aggregate.fme_supply_train.func_931(iVar0, 2);
				}
				break;
			case 2:
				if (aggregate.barcustomer_interaction.func_42(&((Local_2695.f_123[iVar0 /*8*/])->f_3)) && aggregate.fme_animal_tagging.func_181(&((Local_2695.f_123[iVar0 /*8*/])->f_3)) > 6000)
				{
					MAP::_0xB059D7BD3D78C16F((Local_2695.f_123[iVar0 /*8*/])->f_2, -42414432);
					(Local_2695.f_123[iVar0 /*8*/])->f_6 = ENTITY::GET_ENTITY_HEALTH((Local_2695.f_123[iVar0 /*8*/])->f_1);
					aggregate.fme_animal_tagging.func_290(&((Local_2695.f_123[iVar0 /*8*/])->f_3));
				}
				if (ENTITY::GET_ENTITY_HEALTH((Local_2695.f_123[iVar0 /*8*/])->f_1) < (Local_2695.f_123[iVar0 /*8*/])->f_6)
				{
					(Local_2695.f_123[iVar0 /*8*/])->f_6 = ENTITY::GET_ENTITY_HEALTH((Local_2695.f_123[iVar0 /*8*/])->f_1);
					aggregate.fme_supply_train.func_931(iVar0, 3);
				}
				break;
			case 3:
				if (MAP::_0x662D364ABF16DE2F((Local_2695.f_123[iVar0 /*8*/])->f_2, -42414432))
				{
					aggregate.fme_animal_tagging.func_1407(&((Local_2695.f_123[iVar0 /*8*/])->f_3));
					aggregate.fme_supply_train.func_931(iVar0, 2);
				}
				break;
			case 4:
				if (MAP::DOES_BLIP_EXIST((Local_2695.f_123[iVar0 /*8*/])->f_2))
				{
					MAP::REMOVE_BLIP(&((Local_2695.f_123[iVar0 /*8*/])->f_2));
				}
				FIRE::_0xB7DF150605EEDC9B((Local_2695.f_123[iVar0 /*8*/])->f_1, 0, ENTITY::GET_ENTITY_COORDS((Local_2695.f_123[iVar0 /*8*/])->f_1, true, false), 25, 0.1f, 1, 0, 1065353216 /* Float: 1f */);
				aggregate.fme_animal_tagging.func_499("FME_ST_GOODS_DESTROYED", joaat("COLOR_WHITE"));
				aggregate.fme_supply_train.func_931(iVar0, 5);
				break;
			case 5:
				if (ENTITY::DOES_ENTITY_EXIST((Local_2695.f_123[iVar0 /*8*/])->f_1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE((Local_2695.f_123[iVar0 /*8*/])->f_1, true);
				}
				break;
		}
		iVar0++;
	}
	Local_2695.f_277 = iVar1;
	aggregate.fme_archery.func_1315(BUILTIN::TO_FLOAT(Local_2695.f_277));
}

void func_579()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_13.f_1159;
	iVar1 = func_445(iVar0);
	iVar2 = Local_2695.f_277;
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), iVar1, 0);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), iVar2, 0);
	aggregate.fme_round_up.func_689(&(Local_3225.f_1020), Local_2695.f_285, 1);
}

void func_580()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	if (iVar0 <= 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		if (iVar2 != -1315570756)
		{
		}
		else
		{
			func_934(iVar1);
		}
		iVar1++;
	}
}

void func_581()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (func_420(4096, iVar0) && !func_935(iVar0))
				{
					aggregate.fme_challenges.func_816(MISC::_CREATE_VAR_STRING(10, "FME_ST_PLY_LEFT", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar2), joaat("COLOR_PURE_WHITE"))));
					func_937(iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_582()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(aggregate.fme_escaped_convicts.func_1483(), true, false) };
	iVar3 = 0;
	while (iVar3 < 37)
	{
		if (func_785(iVar3))
		{
			func_939(iVar3, 0);
		}
		else
		{
			iVar4 = &Local_13.f_506[iVar3 /*14*/];
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar4))
			{
				func_939(iVar3, 0);
			}
			else
			{
				iVar5 = NETWORK::NET_TO_PED(iVar4);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					func_939(iVar3, 0);
				}
				else
				{
					vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
					fVar9 = aggregate.blackwater.func_175(vVar0, vVar6);
					if (fVar9 >= 80f)
					{
						func_939(iVar3, 0);
					}
					else
					{
						func_939(iVar3, 1);
					}
				}
			}
		}
		iVar3++;
	}
}

void func_583()
{
	func_475(4096);
}

void func_586()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = func_532(0, 0);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_HEADING(iVar0), 1.3937f, 6.1713f, 4.7796f) };
	vVar4 = { func_943(vVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) };
	func_944(vVar1, vVar4);
}

bool func_599(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	float fVar6;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar4 = VEHICLE::_0x3C9628A811CBD724(iVar0);
	uVar5 = VEHICLE::_0x85D39F5E3B6D7EB0(vVar1);
	fVar6 = 15f;
	*uParam0 = { VEHICLE::_0x35D302397E524939(uVar5, vVar1, fVar6, bVar4) };
	if (aggregate.annesburg.func_121(*uParam0))
	{
		return false;
	}
	*fParam1 = aggregate.fishing_core.func_492(vVar1, *uParam0, 1);
	*iParam2 = 0;
	return true;
}

int func_608(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	if (fParam1 < 0f)
	{
		return 0;
	}
	VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar0, fParam1);
	return 1;
}

bool func_613()
{
	struct<8> Var0;
	int iVar8;
	char* sVar9;

	Var0 = { aggregate.fme_animal_tagging.func_475() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_3225.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_3225.f_1338 };
		}
	}
	iVar8 = func_534();
	sVar9 = Local_2695.f_277;
	if (iVar8 == PLAYER::PLAYER_ID())
	{
		Local_3225.f_1287 = aggregate.fme_animal_tagging.func_483(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_ST_SHARD_OUTRO_PRIMARY_EARNED", sVar9), aggregate.fme_archery.func_305(), aggregate.fme_animal_tagging.func_301());
	}
	else
	{
		Local_3225.f_1287 = aggregate.fme_animal_tagging.func_483(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(10, "FME_ST_HLP_GDS", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(iVar8), joaat("COLOR_PURE_WHITE")), sVar9), aggregate.fme_archery.func_305(), aggregate.fme_animal_tagging.func_301());
	}
	return true;
}

bool func_624()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 16);
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(8))
	{
		func_575(Local_13.f_1173);
		func_576();
		func_577();
		func_578();
	}
	else
	{
		func_608(0, 0f);
	}
	return true;
}

int func_632()
{
	int iVar0;

	iVar0 = func_974();
	if (iVar0 == -1)
	{
		return 0;
	}
	return BUILTIN::FLOOR((Local_3225.f_13.f_210[iVar0 /*23*/])->f_5);
}

int func_633()
{
	int iVar0;

	iVar0 = func_974();
	if (iVar0 == -1)
	{
		return 0;
	}
	return BUILTIN::FLOOR((Local_3225.f_13.f_210[iVar0 /*23*/])->f_1);
}

char* func_677(int iParam0)
{
	switch (iParam0)
	{
		case 1793117406:
			return "EventData/location(id=%x)";
		case -668747133:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case 217762429:
			return ":iEventDuration";
		case -1049349821:
			return ":pos";
		case -592280821:
			return ":rotation";
		case 179535921:
			return ":role";
		case 1914071458:
			return ":radius";
		case 1276750075:
			return ":vehiclePos";
		case 1726885030:
			return ":vehicleHeading";
		case -946156189:
			return ":isStopAnAmbush";
		case -204185654:
			return ":isStationNode";
		case -2049688002:
			return ":propSetPos";
		case -202007812:
			return ":propSetHeading";
		case -409038919:
			return "EventData/location(id=%x)/variation(id=%x)";
		case 439583753:
			return "SpawnData/Section(%i)";
		case -1678548701:
			return "SpawnData/Section(%i)/SpawnPoint(%i)";
		case -828272613:
			return "SpawnLocation";
		case 1907897756:
			return "DefenseLocation";
		case 2011932436:
			return ":OnlySpawnOnce";
		case -1678866018:
			return ":OnlyAttackCrates";
		case 483086319:
			return ":TriggerDuringAmbush";
		case 1789390703:
			return ":TriggerAfterAmbush";
		case -784532701:
			return "TrainStopData";
		case 653187835:
			return "TrainStopData/TrainStop(%i)";
		default:
			break;
	}
	return "";
}

bool func_725(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_728(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam2)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1;
							break;
						case 1:
							iVar0 = 1;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 1;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 1;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 1;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 1;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 1;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 1;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 1;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 1;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 1;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 1;
							break;
						case 4:
							iVar0 = 1;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 1;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							iVar0 = 0;
							break;
						case 1:
							iVar0 = 0;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 1;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							iVar0 = 1;
							break;
						case 1:
							iVar0 = 1;
							break;
						case 2:
							iVar0 = 0;
							break;
						case 3:
							iVar0 = 0;
							break;
						case 4:
							iVar0 = 0;
							break;
						case 5:
							iVar0 = 0;
							break;
					}
					break;
			}
			break;
	}
	return iVar0;
}

void func_729(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (PROPSET::_0x36F69E7A22655653(iParam0))
	{
		case -176926924:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1.48675f, 5.95939f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 1:
					*uParam2 = { -0.838728f, -4.56523f, 1.07559f };
					*uParam3 = { 0f, 0f, 0f };
					break;
				case 2:
					*uParam2 = { -1.53338f, -2.77102f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
				case 3:
					*uParam2 = { -1.46552f, -0.226741f, 1.07559f };
					*uParam3 = { 0f, 0f, 93.5007f };
					break;
				case 4:
					*uParam2 = { 1.53045f, 3.32931f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 5:
					*uParam2 = { 1.53045f, -0.702026f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
			}
			break;
		case 292914998:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1.48674f, 5.95941f, 1.07057f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 1:
					*uParam2 = { -1.46648f, -5.49348f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
				case 2:
					*uParam2 = { -1.5334f, 3.49132f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
				case 3:
					*uParam2 = { -1.46552f, 6.03556f, 1.07559f };
					*uParam3 = { 0f, 0f, 93.5007f };
					break;
				case 4:
					*uParam2 = { 1.53044f, 3.32934f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 5:
					*uParam2 = { 1.53046f, -0.819226f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
			}
			break;
		case 532161467:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1.4665f, -4.70187f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
				case 1:
					*uParam2 = { -1.53339f, 1.08875f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
				case 2:
					*uParam2 = { -0.785663f, 2.92669f, 1.07559f };
					*uParam3 = { 0f, 0f, 183.501f };
					break;
				case 3:
					*uParam2 = { 1.4759f, 6.50478f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 4:
					*uParam2 = { 1.53046f, -5.888f, 1.07056f };
					*uParam3 = { 0f, 0f, -90f };
					break;
				case 5:
					*uParam2 = { -1.46894f, 5.92215f, 1.07559f };
					*uParam3 = { 0f, 0f, 90f };
					break;
			}
			break;
	}
}

void func_731(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 18)
	{
		return;
	}
	if (!bParam1)
	{
		MISC::SET_BIT(&(Local_13.f_1162), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_13.f_1162), iParam0);
	}
}

int func_732()
{
	return joaat("gatlingmaxim02");
}

Vector3 func_733(int iParam0)
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case -1900781664:
			vVar0 = { 1100.29f, 811.96f, 114.22f };
			break;
		case -824858074:
			vVar0 = { 2847.66f, 975.02f, 47.79f };
			break;
		case -79540972:
			vVar0 = { 191.81f, -417.8f, 86.6f };
			break;
		case 2063714806:
			vVar0 = { -5291.62f, -3354.18f, -22.99f };
			break;
	}
	return vVar0;
}

float func_734(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case -1900781664:
			fVar0 = 185f;
			Jump @82; //curOff = 49
			fVar0 = 170f;
			Jump @82; //curOff = 59
			fVar0 = 90f;
			Jump @82; //curOff = 69
			fVar0 = 310f;
			return fVar0;
		}

bool func_736(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0x4182C037AA1F0091(iVar0, iParam1);
	return true;
}

bool func_737(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0x3660BCAB3A6BB734(iVar0);
	return true;
}

bool func_739(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_0xCFE122EC635CC2B2(iVar0, &uParam1, 1, 0);
	return true;
}

void func_740(float fParam0)
{
	if (Local_13.f_1151 != fParam0)
	{
		Local_13.f_1151 = fParam0;
		aggregate.fme_king_of_the_rails.func_702(0, fParam0);
	}
}

void func_741()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_1101(iVar0))
		{
		}
		else if (func_1102(iVar0, 1) && func_1103(iVar0, 1))
		{
			func_1104(iVar0);
			func_1105(iVar0, 1);
		}
		else if (func_1102(iVar0, 0) && func_1103(iVar0, 0))
		{
			func_1104(iVar0);
			func_1105(iVar0, 0);
		}
		iVar0++;
	}
}

Vector3 func_743(int iParam0)
{
	return (Global_1130300->f_2[iParam0 /*17*/])->f_2;
}

int func_744(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -79540972:
			switch (iParam1)
			{
				case 0:
					return 2;
			}
			break;
	}
	return 0;
}

bool func_746(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[iParam0 /*14*/])))
	{
		bVar0 = true;
	}
	if (!aggregate.annesburg.func_121((Local_13.f_1025[iParam0 /*14*/])->f_4))
	{
		if (!bVar0)
		{
			if (aggregate.fme_condor_egg.func_999(Local_13.f_1025[iParam0 /*14*/], func_417(), (Local_13.f_1025[iParam0 /*14*/])->f_4, (Local_13.f_1025[iParam0 /*14*/])->f_7, 1, 0, 0, 0))
			{
				bVar0 = true;
			}
		}
		if (bVar0 == 1)
		{
			iVar2 = 0;
			while (iVar2 <= 1)
			{
				iVar3 = (35 + iVar2);
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar3 /*14*/])))
				{
					if (iVar2 == 0)
					{
						func_776(iVar3, 4);
					}
					(Local_13.f_506[iVar3 /*14*/])->f_3 = 1210237496;
					if (func_767(iVar3, iParam0))
					{
						if ((Local_13.f_506[iVar3 /*14*/])->f_2 < 2)
						{
							aggregate.fme_supply_train.func_768(iVar3, 2);
						}
					}
					else
					{
						iVar1 = 0;
					}
					iVar1 = 0;
				}
				else
				{
					if ((Local_13.f_506[iVar3 /*14*/])->f_2 < 2)
					{
						aggregate.fme_supply_train.func_768(iVar3, 2);
					}
					iVar1 = 1;
				}
				iVar2++;
			}
		}
	}
	return iVar1;
}

void func_747(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1107(iParam0)) || (!bParam1 && !func_1107(iParam0)))
	{
		return;
	}
	iVar0 = iParam0 * 3 + 1;
	iVar1 = iParam0 * 3 + 2;
	MISC::CLEAR_BIT(&(Local_13.f_1155), iVar0);
	MISC::CLEAR_BIT(&(Local_13.f_1155), iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_13.f_1155), iVar0);
	}
	else
	{
		MISC::SET_BIT(&(Local_13.f_1155), iVar1);
	}
}

bool func_748(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_420(iParam0, iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_749()
{
	Local_13.f_1157++;
}

void func_751(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (bParam0)
		{
			iVar1 = (Local_13.f_9[iVar0 /*7*/])->f_4;
		}
		else
		{
			iVar1 = (Local_13.f_9[iVar0 /*7*/])->f_5;
		}
		bVar2 = false;
		if (iVar1 == iParam1)
		{
			bVar2 = true;
		}
		if ((bVar2 && func_783(iVar0, 8)) && func_783(iVar0, 1))
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			func_374(iVar0, 4);
		}
		iVar0++;
	}
}

void func_752()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 44)
	{
		func_784(iVar0, 4);
		iVar0++;
	}
}

int func_753(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 37)
	{
		if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar1 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar1 /*14*/])))) && !func_770(&(Local_13.f_506[iVar1 /*14*/])))
		{
			fVar2 = BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar1 /*14*/])), true, false));
			if (fVar2 < fParam3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_754()
{
	Local_13.f_1160++;
	if (Local_13.f_1160 > 2)
	{
		Local_13.f_1160 = 1;
	}
}

void func_755()
{
	Local_13.f_1159 = aggregate.fishing_core.func_224(Local_13.f_1159 + 1, 0, 2);
}

bool func_757(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_420(iParam0, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_758(int iParam0)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return 0;
	}
	vVar0.x = VEHICLE::_0x865FEC2FA899F29C((Global_1130823->f_2[iParam0 /*41*/])->f_2);
	vVar0.f_1 = VEHICLE::_0x86FA6D8B48667D75((Global_1130823->f_2[iParam0 /*41*/])->f_2);
	if (!VEHICLE::_0xE887BD31D97793F6((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return 0;
	}
	return func_1109(vVar0);
}

int func_759(int iParam0)
{
	switch (iParam0)
	{
		case -1900781664:
			return 7;
		case -824858074:
			return 5;
		case -79540972:
			return 1;
		case 2063714806:
			return 11;
		default:
			break;
	}
	return 0;
}

bool func_760(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return false;
	}
	vVar0 = { func_171(iParam1) };
	if (bParam2)
	{
		if (ENTITY::GET_ENTITY_SPEED((Global_1130823->f_2[iParam0 /*41*/])->f_2) > 0f)
		{
			return false;
		}
		vVar3 = { VEHICLE::_0xBA958F68031DDBFC(vVar0.x, vVar0.y) };
		vVar6 = { ENTITY::GET_ENTITY_COORDS((Global_1130823->f_2[iParam0 /*41*/])->f_2, true, false) };
		if (aggregate.blackwater.func_175(vVar3, vVar6) <= fParam3)
		{
			return true;
		}
	}
	if (!VEHICLE::_0xE887BD31D97793F6((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return false;
	}
	if (VEHICLE::_0x86FA6D8B48667D75((Global_1130823->f_2[iParam0 /*41*/])->f_2) != vVar0.y)
	{
		return false;
	}
	if (VEHICLE::_0x865FEC2FA899F29C((Global_1130823->f_2[iParam0 /*41*/])->f_2) != vVar0.x)
	{
		return false;
	}
	return true;
}

void func_761(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam0, 45, &iVar0, &iVar1))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(Local_13.f_1166[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Local_13.f_1166[iVar0], iVar1);
	}
}

void func_762(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 44)
	{
		*(uParam0->f_9[iVar0 /*7*/]) = { 0f, 0f, 0f };
		(uParam0->f_9[iVar0 /*7*/])->f_3 = 0;
		(uParam0->f_9[iVar0 /*7*/])->f_4 = -1;
		(uParam0->f_9[iVar0 /*7*/])->f_5 = -1;
		(uParam0->f_9[iVar0 /*7*/])->f_6 = 0;
		*(uParam0->f_325[iVar0 /*4*/]) = { 0f, 0f, 0f };
		(uParam0->f_325[iVar0 /*4*/])->f_3 = 0f;
		iVar0++;
	}
}

void func_763()
{
	Local_13.f_1158 = aggregate.fishing_core.func_224(Local_13.f_1158 + 1, 0, 2);
}

bool func_765()
{
	int iVar0;
	int iVar1;

	if (Local_2695.f_279 != 2)
	{
		return false;
	}
	iVar0 = Local_3225.f_2;
	iVar1 = Local_2695.f_280;
	switch (iVar0)
	{
		case -1900781664:
			return false;
		case -824858074:
			if (iVar1 >= 8 && iVar1 <= 10)
			{
				return true;
			}
			break;
		case -79540972:
			if (iVar1 >= 2 && iVar1 <= 3)
			{
				return true;
			}
			break;
		case 2063714806:
			if (iVar1 >= 1 && iVar1 <= 2)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_766()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = 0;
	while (iVar0 <= 44)
	{
		vVar1 = { func_743(0) };
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(aggregate.fme_king_of_the_rails.func_407(0), 0f, 100f, 0f) };
		fVar4 = BUILTIN::VDIST(vVar1, *(Local_13.f_9[iVar0 /*7*/]));
		bVar5 = false;
		bVar6 = false;
		if (fVar4 < 200f)
		{
			bVar5 = true;
			if ((Local_13.f_9[iVar0 /*7*/])->f_4 > 0 || (Local_13.f_9[iVar0 /*7*/])->f_5 > 0)
			{
				bVar6 = true;
			}
		}
		if ((Local_13.f_9[iVar0 /*7*/])->f_4 > 0)
		{
			if ((Local_13.f_9[iVar0 /*7*/])->f_4 == Local_13.f_1160 && Local_13.f_1173 == 5)
			{
				bVar6 = true;
			}
		}
		if (func_783(iVar0, 8) && func_783(iVar0, 1))
		{
			bVar5 = false;
		}
		if (!bVar6)
		{
			if (bVar5)
			{
				func_374(iVar0, 4);
			}
			else
			{
				func_784(iVar0, 4);
			}
		}
		iVar0++;
	}
}

bool func_767(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	struct<2> Var4;
	bool bVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iParam0 /*14*/])))
	{
		return true;
	}
	if ((Local_13.f_506[iParam0 /*14*/])->f_3 == 1210237496)
	{
		if (!aggregate.annesburg.func_121((Local_13.f_1025[iParam1 /*14*/])->f_4))
		{
			vVar0 = { (Local_13.f_1025[iParam1 /*14*/])->f_4 };
		}
	}
	else if ((Local_13.f_506[iParam0 /*14*/])->f_4 < 0)
	{
		iVar3 = func_1111();
		if (iVar3 >= 0)
		{
			(Local_13.f_506[iParam0 /*14*/])->f_4 = iVar3;
			(Local_13.f_506[iParam0 /*14*/])->f_3 = (Local_13.f_9[iVar3 /*7*/])->f_3;
			func_374(iVar3, 8);
			vVar0 = { *(Local_13.f_9[iVar3 /*7*/]) };
		}
	}
	else
	{
		vVar0 = { *(Local_13.f_9[(Local_13.f_506[iParam0 /*14*/])->f_4 /*7*/]) };
	}
	func_775(&Var4, Local_3225.f_2, Local_13.f_1159);
	if (!aggregate.annesburg.func_121(vVar0))
	{
		switch ((Local_13.f_506[iParam0 /*14*/])->f_3)
		{
			case joaat("on_foot"):
			case -1169648302:
			case -423716019:
				if (aggregate.fme_challenges.func_1263(Local_13.f_506[iParam0 /*14*/], func_414(Local_3225.f_2), vVar0, 0f, 1, 0, 1, 1, 1))
				{
					func_1113(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), Var4);
					func_787(iParam0, 1);
					func_1114(iParam0);
					func_1115(iParam0);
				}
				break;
			case joaat("mounted"):
				if (aggregate.fme_challenges.func_1263(&((Local_13.f_506[iParam0 /*14*/])->f_1), func_416(), vVar0, 0f, 1, 0, 1, 1, 1) && aggregate.fme_escaped_convicts.func_1084(Local_13.f_506[iParam0 /*14*/], (Local_13.f_506[iParam0 /*14*/])->f_1, func_414(Local_3225.f_2), -1, 1, 1, 1, 0))
				{
					aggregate.butchercreek.func_190(NETWORK::NET_TO_PED((Local_13.f_506[iParam0 /*14*/])->f_1), 1);
					func_1113(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), Var4);
					func_787(iParam0, 1);
					func_1114(iParam0);
					func_1115(iParam0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), 167, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), 126, true);
					PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), 13, 10f);
				}
				break;
			case 1210237496:
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1025[iParam1 /*14*/])))
				{
					if (aggregate.fme_challenges.func_1307(iParam0, 4))
					{
						if (aggregate.fme_supply_train.func_1118(Local_13.f_506[iParam0 /*14*/], &(Local_13.f_1025[iParam1 /*14*/]), func_414(Local_3225.f_2), 0, 1, 1, 1))
						{
							bVar6 = true;
							vVar7 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), true, false) };
							func_1119(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), vVar7, 1f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), 3, false);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), 65, true);
							func_787(iParam0, 1);
							func_1115(iParam0);
							PED::_0xC2745D9261664901(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), MISC::GET_HASH_KEY("FME_ST_BANDIT"));
						}
					}
					else
					{
						vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(&(Local_13.f_1025[iParam1 /*14*/])), 0f, -1f, 0f) };
						vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(&(Local_13.f_1025[iParam1 /*14*/])), -0.5f, -3.25f, -0.5f) };
						if (aggregate.fme_challenges.func_1263(Local_13.f_506[iParam0 /*14*/], func_414(Local_3225.f_2), vVar10, 0f, 1, 0, 1, 1, 1))
						{
							bVar6 = true;
							func_1119(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), vVar13, 1.5f, 0, 0);
							func_787(iParam0, 1);
							func_1115(iParam0);
							PED::_0xC2745D9261664901(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), MISC::GET_HASH_KEY("FME_ST_BANDIT"));
						}
					}
					if (bVar6)
					{
						func_1113(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), Var4);
					}
				}
				break;
			case 547290871:
				if (aggregate.fme_challenges.func_1263(Local_13.f_506[iParam0 /*14*/], func_414(Local_3225.f_2), vVar0, 0f, 1, 0, 1, 1, 1))
				{
					func_787(iParam0, 1);
					func_1114(iParam0);
					func_1115(iParam0);
					PED::_0xC2745D9261664901(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), MISC::GET_HASH_KEY("FME_ST_BANDIT"));
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1176))
					{
						func_1113(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), Var4);
					}
				}
				break;
		}
	}
	return false;
}

void func_769()
{
	Local_13.f_1161++;
	if (Local_13.f_1161 >= 35)
	{
		Local_13.f_1161 = 0;
	}
}

bool func_770(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return true;
}

void func_771(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	fVar4 = 999f;
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		vVar1 = { func_1120(Local_3225.f_2, iVar0) };
		fVar6 = aggregate.blackwater.func_175(vVar1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), true, false));
		if (fVar6 < fVar4)
		{
			fVar4 = fVar6;
			iVar5 = iVar0;
		}
		iVar0++;
	}
	(Local_13.f_506[iParam0 /*14*/])->f_5 = iVar5;
}

bool func_772(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_1121(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_773(int iParam0, int iParam1)
{
	aggregate.aberdeenpigfarm.func_106((*Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])[iParam0], iParam1);
}

bool func_774(int iParam0)
{
	if ((Local_13.f_506[iParam0 /*14*/])->f_3 == joaat("mounted") || func_772(iParam0, 64))
	{
		if (func_781(iParam0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if ((Local_13.f_506[iParam0 /*14*/])->f_3 == 1210237496)
	{
		return false;
	}
	if (((Local_13.f_506[iParam0 /*14*/])->f_3 == joaat("on_foot") || (Local_13.f_506[iParam0 /*14*/])->f_3 == -1169648302) || (Local_13.f_506[iParam0 /*14*/])->f_3 == -423716019)
	{
		if ((Local_13.f_506[iParam0 /*14*/])->f_4 >= 0)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/])), true, false), *(Local_13.f_325[(Local_13.f_506[iParam0 /*14*/])->f_4 /*4*/])) < 4f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_775(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1900781664:
			switch (iParam2)
			{
				case 0:
					*uParam0 = 60;
					uParam0->f_1 = 50;
					break;
				case 1:
					*uParam0 = 75;
					uParam0->f_1 = 65;
					break;
				case 2:
					*uParam0 = 80;
					uParam0->f_1 = 70;
					break;
			}
			break;
		case -824858074:
			switch (iParam2)
			{
				case 0:
					*uParam0 = 60;
					uParam0->f_1 = 50;
					break;
				case 1:
					*uParam0 = 75;
					uParam0->f_1 = 65;
					break;
				case 2:
					*uParam0 = 80;
					uParam0->f_1 = 70;
					break;
			}
			break;
		case -79540972:
			switch (iParam2)
			{
				case 0:
					*uParam0 = 60;
					uParam0->f_1 = 50;
					break;
				case 1:
					*uParam0 = 75;
					uParam0->f_1 = 65;
					break;
				case 2:
					*uParam0 = 80;
					uParam0->f_1 = 70;
					break;
			}
			break;
		case 2063714806:
			switch (iParam2)
			{
				case 0:
					*uParam0 = 60;
					uParam0->f_1 = 50;
					break;
				case 1:
					*uParam0 = 75;
					uParam0->f_1 = 65;
					break;
				case 2:
					*uParam0 = 80;
					uParam0->f_1 = 70;
					break;
			}
			break;
	}
}

void func_776(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((Local_13.f_506[iParam0 /*14*/])->f_12, iParam1))
	{
		aggregate.bandana.func_26(&((Local_13.f_506[iParam0 /*14*/])->f_12), iParam1);
	}
}

void func_779(int iParam0, int iParam1)
{
	if (aggregate.aberdeenpigfarm.func_175((Local_13.f_506[iParam0 /*14*/])->f_12, iParam1))
	{
		aggregate.bandana.func_26(&((Local_13.f_506[iParam0 /*14*/])->f_12), iParam1);
	}
}

void func_780(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			func_1122(iParam0, iParam1, iVar0);
		}
		iVar0++;
	}
}

bool func_781(int iParam0)
{
	int iVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iParam0 /*14*/])->f_13))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
	if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, (Local_13.f_506[iParam0 /*14*/])->f_13, true, 0))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_1190[iVar0 /*47*/][iParam0] != 0)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_783(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 45)
	{
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_175((Local_13.f_9[iParam0 /*7*/])->f_6, iParam1))
	{
		return false;
	}
	return true;
}

void func_784(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 45)
	{
		return;
	}
	aggregate.bandana.func_26(&((Local_13.f_9[iParam0 /*7*/])->f_6), iParam1);
}

bool func_785(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam0, 37, &iVar0, &iVar1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(&(Local_13.f_1163[iVar0]), iVar1);
}

bool func_786(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 37)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (func_1123(iVar0, iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_787(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam0, 37, &iVar0, &iVar1))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(Local_13.f_1163[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Local_13.f_1163[iVar0], iVar1);
	}
}

bool func_788(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(131072))
	{
		return false;
	}
	if (&Local_3032[iParam0 /*6*/] < 2)
	{
		return false;
	}
	if ((Local_3032[iParam0 /*6*/])->f_4 < 1)
	{
		return false;
	}
	if ((Local_3032[iParam0 /*6*/])->f_4 < Local_3225.f_1420)
	{
		return false;
	}
	return true;
}

char* func_801()
{
	return "MP_OWC_END";
}

int func_803(int iParam0, int iParam1)
{
	struct<13> Var0;

	if (!func_1142(iParam0, iParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 10;
		Var0.f_7 = iParam0;
		Var0.f_11 = iParam1;
		return func_413(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
	return 1;
}

void func_804(int iParam0)
{
	aggregate.bandana.func_26(&(Global_1130300->f_1), iParam0);
}

bool func_828()
{
	if (aggregate.fme_animal_tagging.func_134(131072) && Local_3225.f_10 >= 4)
	{
		if ((Local_3032[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_3225.f_1420)
		{
			if (!aggregate.fme_animal_tagging.func_490() == 4)
			{
				aggregate.annesburg.func_234(4);
				return true;
			}
		}
	}
	return false;
}

int func_895(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		aggregate.fme_escaped_convicts.func_888(32);
		return 0;
	}
	if (aggregate.fme_animal_tagging.func_134(32))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		aggregate.fme_king_of_the_rails.func_1004(iParam0, 8);
		return 0;
	}
	if (aggregate.annesburg.func_121(vParam1))
	{
		return 0;
	}
	VEHICLE::_0x41503629D1139ABC(iVar0, VEHICLE::_0x85D39F5E3B6D7EB0(vParam1), vParam1);
	aggregate.fme_escaped_convicts.func_515(32);
	func_1193(iParam0, 8);
	return 1;
}

void func_896()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_1101(iVar0))
		{
			func_1194(iVar0);
		}
		else
		{
			bVar1 = func_1102(iVar0, 1);
			if (func_1103(iVar0, bVar1))
			{
			}
			else
			{
				iVar2 = &Local_13.f_1025[iVar0 /*14*/];
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2))
				{
				}
				else
				{
					iVar3 = NETWORK::NET_TO_VEH(iVar2);
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0, 0))
					{
					}
					else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
					{
					}
					else if (func_1195(iVar3) != 2)
					{
					}
					else
					{
						bVar4 = true;
						iVar5 = 0;
						while (iVar5 < 2)
						{
							iVar6 = iVar5;
							iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar3, iVar6);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
							{
							}
							else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar7))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar7);
								bVar4 = false;
							}
							iVar5++;
						}
						if (!bVar4)
						{
						}
						else
						{
							iVar5 = 0;
							while (iVar5 < 6)
							{
								iVar8 = iVar5;
								iVar9 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar3, iVar8);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
								{
								}
								else
								{
									PED::SET_PED_CAN_BE_TARGETTED(iVar9, !bVar1);
									ENTITY::SET_ENTITY_INVINCIBLE(iVar9, bVar1);
								}
								iVar5++;
							}
							ENTITY::SET_ENTITY_INVINCIBLE(iVar3, bVar1);
							VEHICLE::_0x226C6A4E3346D288(iVar3, !bVar1);
							func_1196(iVar0, bVar1);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

float func_897()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<12> Var7;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	vector3 vVar44;
	float fVar47;
	vector3 vVar48;
	float fVar51;
	float fVar52;
	float fVar53;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0f;
	}
	if (Local_2695.f_279 == 7 && ENTITY::GET_ENTITY_SPEED(iVar0) < 0.5f)
	{
		return 1f;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	iVar4 = aggregate.fme_supply_train.func_900();
	iVar5 = Local_2695.f_280;
	iVar6 = iVar5 + 1;
	Var7 = { func_1197(iVar4, iVar5, iVar6) };
	if (iVar5 == Var7.f_8)
	{
		return 1f;
	}
	vVar19 = { Var7 };
	vVar22 = { Var7.f_3 };
	vVar25 = { vVar19.x, vVar19.y, 0f };
	vVar28 = { vVar22.x, vVar22.y, 0f };
	vVar31 = { vVar28 - vVar25 };
	fVar34 = BUILTIN::VMAG(vVar31);
	vVar31 = { vVar31 / Vector(fVar34, fVar34, fVar34) };
	vVar35 = { (vVar31.y * -1f), vVar31.x, 0f };
	vVar38 = { vVar1.x, vVar1.y, 0f };
	vVar41 = { vVar38 + vVar35 };
	if (func_1198(vVar25, vVar28, vVar38, vVar41, &vVar44, 1, 0))
	{
		fVar47 = (BUILTIN::VMAG(vVar44 - vVar25) / fVar34);
		vVar48 = { vVar19 + vVar22 - vVar19 * Vector(fVar47, fVar47, fVar47) };
		if (aggregate.annesburg.func_121(Local_2695.f_282))
		{
			fVar51 = BUILTIN::VMAG(vVar48 - vVar19);
		}
		else
		{
			fVar51 = BUILTIN::VMAG(vVar48 - Local_2695.f_282);
		}
		Local_2695.f_281 = (Local_2695.f_281 + fVar51);
		Local_2695.f_282 = { vVar48 };
		aggregate.fme_escaped_convicts.func_515(262144);
	}
	else
	{
		if (aggregate.fme_animal_tagging.func_134(262144) && !aggregate.annesburg.func_121(Local_2695.f_282))
		{
			Local_2695.f_280 = iVar6;
			Local_2695.f_281 = (Local_2695.f_281 + BUILTIN::VMAG(vVar22 - Local_2695.f_282));
			Local_2695.f_282 = { vVar22 };
		}
		aggregate.fme_escaped_convicts.func_888(262144);
	}
	fVar52 = 0f;
	fVar53 = 0f;
	if (iVar5 < Var7.f_6)
	{
		fVar53 = Local_2695.f_281;
		fVar52 = (func_1199((fVar53 / Var7.f_9), 0f, 1f) * 0.333333f);
	}
	else if (iVar5 < Var7.f_7)
	{
		fVar52 = 0.333333f;
		fVar53 = (Local_2695.f_281 - Var7.f_9);
		fVar52 = (fVar52 + (func_1199((fVar53 / Var7.f_10), 0f, 1f) * 0.333333f));
	}
	else
	{
		fVar52 = (0.333333f * 2f);
		fVar53 = ((Local_2695.f_281 - Var7.f_9) - Var7.f_10);
		fVar52 = (fVar52 + (func_1199((fVar53 / Var7.f_11), 0f, 1f) * 0.333333f));
	}
	return fVar52;
}

char* func_898()
{
	return "MC_SUSPENSE_HIGH";
}

bool func_899(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
	{
		return false;
	}
	VEHICLE::_0x787E43477746876F(iVar0);
	aggregate.fme_escaped_convicts.func_888(32);
	aggregate.fme_king_of_the_rails.func_1004(iParam0, 8);
	return true;
}

Vector3 func_901(int iParam0)
{
	struct<12> Var0;

	Var0 = { func_1197(iParam0, 0, 0) };
	return func_1120(iParam0, Var0.f_8);
}

int func_902(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fme_king_of_the_rails.func_407(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	VEHICLE::_0x3660BCAB3A6BB734(iVar0);
	return 1;
}

void func_903()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_1096[iVar0 /*3*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(Local_13.f_1096[iVar0 /*3*/]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (ENTITY::GET_ENTITY_ALPHA(iVar1) == 255)
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_ALPHA(iVar1, 255, true);
			}
		}
		iVar0++;
	}
}

void func_904(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175((Local_1190[Local_3225.f_1332 /*47*/])->f_38, iParam0))
	{
		aggregate.bandana.func_26(&((Local_1190[Local_3225.f_1332 /*47*/])->f_38), iParam0);
	}
}

void func_905(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iVar1, bParam1);
		}
		iVar0++;
	}
}

bool func_906(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	vector3 vVar20;

	if (iParam0 < 0 || iParam0 >= 5)
	{
		return false;
	}
	iVar0 = &Local_13.f_1025[iParam0 /*14*/];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (!aggregate.fme_supply_train.func_1200(iVar1))
	{
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	iVar5 = ENTITY::GET_ENTITY_MODEL(iVar1);
	MISC::GET_MODEL_DIMENSIONS(iVar5, &vVar6, &vVar9);
	fVar12 = 1f;
	vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, (vVar9.y + fVar12), vVar9.z) };
	vVar16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, (vVar6.y - fVar12), vVar6.z) };
	fVar19 = (vVar9.x - vVar6.x);
	vVar20 = { (Local_13.f_1025[iParam0 /*14*/])->f_4 };
	vVar20.f_2 = vVar2.z;
	if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar20, vVar13, vVar16, fVar19, false, true))
	{
		return false;
	}
	return true;
}

bool func_907(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return false;
	}
	if (!VEHICLE::_0xE887BD31D97793F6((Global_1130823->f_2[iParam0 /*41*/])->f_2))
	{
		return false;
	}
	return true;
}

char* func_909()
{
	return "MC_DEFENDING";
}

void func_910()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 37)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iVar0 /*14*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_506[iVar0 /*14*/])))
		{
			if (!func_770(&(Local_13.f_506[iVar0 /*14*/])))
			{
				aggregate.butchercreek.func_92(NETWORK::NET_TO_PED(&(Local_13.f_506[iVar0 /*14*/])), 1, 0);
			}
		}
		iVar0++;
	}
}

bool func_911()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_788(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			iVar0 = _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			if (iVar0 > 1)
			{
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar2))
					{
						if (!func_788(iVar1))
						{
							return true;
						}
					}
					iVar1++;
				}
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

var func_915(char* sParam0)
{
	return aggregate.fme_archery.func_1152(sParam0, 0, func_1204(), 0, 0, 0, 1);
}

void func_916(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	iVar0 = &Local_2695.f_117[iParam0];
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return;
	}
	iVar2 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, 0, false, false);
	if (iVar2 == 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return;
	}
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1);
		if (!MISC::_0xBDC6E364C9C78178(iVar4))
		{
		}
		else
		{
			iVar5 = MISC::_0x18013392501CE5DC(iVar4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
			}
			else
			{
				iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
				if ((iVar6 != -1614880863 && iVar6 != -1327323859) && iVar6 != 1726931358)
				{
				}
				else
				{
					iVar7 = 255;
					if (!bParam1)
					{
						iVar7 = 0;
					}
					ENTITY::SET_ENTITY_ALPHA(iVar5, iVar7, false);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar5, bParam1, false);
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

void func_917()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = Local_2695.f_286;
	iVar2 = (Local_2695.f_286 + 37 - 1);
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		iVar3 = (iVar0 % 37);
		if ((Local_13.f_506[iVar3 /*14*/])->f_2 != 4)
		{
			(Local_2695.f_2[iVar3 /*3*/])->f_2 = -1;
		}
		else
		{
			(Local_2695.f_2[iVar3 /*3*/])->f_2 = func_1206(iVar3);
			Local_2695.f_286 = (iVar3 + 1 % 37);
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_918(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 37)
	{
		return false;
	}
	iVar0 = &Local_13.f_506[iParam0 /*14*/];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	if (func_770(iVar0))
	{
		return false;
	}
	if (func_785(iParam0))
	{
		return false;
	}
	if (!func_786(iParam0))
	{
		return false;
	}
	return true;
}

char* func_919()
{
	return "MC_ATTACKING";
}

void func_922(int iParam0, int iParam1)
{
	if (aggregate.aberdeenpigfarm.func_175((Local_2695.f_2[iParam0 /*3*/])->f_1, iParam1))
	{
		aggregate.bandana.func_26(&((Local_2695.f_2[iParam0 /*3*/])->f_1), iParam1);
	}
}

bool func_924()
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_VEH(Local_13.f_1176);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_1176))
	{
		return false;
	}
	if (aggregate.fme_supply_train.func_1207(iVar0))
	{
		return false;
	}
	return true;
}

void func_925(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				PED::REGISTER_TARGET(iVar0, iVar2, 1);
			}
		}
		iVar4++;
	}
}

bool func_926(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_VEH(Local_13.f_1176);
	iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
	if (!func_924())
	{
		return false;
	}
	return PED::IS_PED_IN_VEHICLE(iVar1, iVar0, bParam1);
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	float fVar14;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	vector3 vVar22;
	vector3 vVar25;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iParam0 /*14*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (aggregate.flow_controller.func_463(0))
	{
		iVar1 = 0;
		iVar2 = func_1208(0);
		iVar3 = -1;
		iVar4 = 0;
		iVar1 = 0;
		while (iVar1 <= iVar2)
		{
			iVar5 = func_532(0, iVar1);
			iVar6 = func_1209(iVar1);
			if (iVar6 == 0)
			{
			}
			else if (iVar6 > iVar4)
			{
				iVar4 = iVar6;
				iVar3 = iVar1;
			}
			iVar1++;
		}
		if (iVar3 == -1)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= iVar2)
			{
				iVar5 = func_532(0, iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_MODEL(iVar5, joaat("privateflatcar01x")))
				{
					iVar3 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
		}
		if (iVar3 == -1)
		{
			return;
		}
		iVar5 = func_532(0, iVar3);
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		iVar10 = Local_3225.f_2;
		switch (iVar10)
		{
			case -1900781664:
				if ((aggregate.fme_animal_tagging.func_134(256) && Local_13.f_1159 == 0) && iVar3 < 5)
				{
					bVar9 = true;
				}
				break;
		}
		if (bVar8 == 0 && bVar9 == 0)
		{
			vVar11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar5, -2f, 0f, 0f) };
			fVar14 = aggregate.fishing_core.func_39(iVar0, vVar11, 1);
			vVar15 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar5, 2f, 0f, 0f) };
			fVar18 = aggregate.fishing_core.func_39(iVar0, vVar15, 1);
			if (fVar14 < fVar18)
			{
				bVar7 = true;
			}
		}
		else if (bVar8)
		{
			bVar7 = true;
		}
		else if (bVar9)
		{
			bVar7 = false;
		}
		if (bVar7)
		{
			fVar19 = -9f;
		}
		else
		{
			fVar19 = 9f;
		}
		iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar21 > 50)
		{
			fVar20 = 6f;
		}
		else
		{
			fVar20 = -6f;
		}
		vVar22 = { fVar19, fVar20, 0f };
		vVar25 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar5, vVar22) };
		if (VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iParam0 /*14*/])->f_13))
		{
			VOLUME::_0x43F867EF5C463A53((Local_13.f_506[iParam0 /*14*/])->f_13);
		}
		if (!VOLUME::_0x92A78D0BEDB332A3((Local_13.f_506[iParam0 /*14*/])->f_13))
		{
			(Local_13.f_506[iParam0 /*14*/])->f_13 = VOLUME::_0xB3FB80A32BAE3065(vVar25, 0f, 0f, 0f, 4f, 4f, 4f);
		}
		PED::_0xFC3DB99C8144CD81(iVar0, (Local_13.f_506[iParam0 /*14*/])->f_13, 1, 0, 0);
	}
}

void func_929(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((Local_2695.f_2[iParam0 /*3*/])->f_1, iParam1))
	{
		aggregate.bandana.func_26(&((Local_2695.f_2[iParam0 /*3*/])->f_1), iParam1);
	}
}

bool func_932(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 18)
	{
		return false;
	}
	return !MISC::IS_BIT_SET(Local_13.f_1162, iParam0);
}

int func_933(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::_0x23F74C2FDA6E7C61(iParam1, iParam0);
	}
	else
	{
		MAP::_0xEDD964B7984AC291(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
		}
	}
	return iVar0;
}

void func_934(int iParam0)
{
	struct<4> Var0;
	int iVar31;
	int iVar32;
	int iVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!Var0.f_3)
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
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
	{
		return;
	}
	if (!func_1211(iVar31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar32))
	{
		return;
	}
	iVar33 = aggregate.fme_escaped_convicts.func_1483();
	if (iVar32 != iVar33 && iVar32 != func_1212(iVar33))
	{
		return;
	}
	(Local_3032[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_3++;
}

bool func_935(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_2695.f_278, iParam0);
}

void func_937(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_2695.f_278), iParam0);
}

void func_939(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam0, 37, &iVar0, &iVar1))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_44[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_44[iVar0], iVar1);
	}
}

Vector3 func_943(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { 0f, 0f, 0f };
	vVar0.f_2 = aggregate.fme_supply_train.func_1214(vParam0, vParam3);
	fVar3 = (vParam0.z - vParam3.z);
	fVar4 = BUILTIN::VDIST(vParam0, vParam3);
	vVar0.x = (270f - aggregate.fme_supply_train.func_1214(0f, 0f, 0f, fVar4, fVar3, 0f));
	return vVar0;
}

void func_944(vector3 vParam0, vector3 vParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
	{
		return;
	}
	Global_1099293->f_26.f_25 = { vParam0 };
	Global_1099293->f_26.f_31 = { vParam3 };
	Global_1099293->f_26.f_23 = 1;
}

int func_967()
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	struct<2> Var15;

	Var1.f_1 = 11;
	aggregate.fme_animal_tagging.func_748(&Var1, Local_3225.f_1333);
	aggregate.fme_animal_tagging.func_749(&Var1);
	aggregate.fme_animal_tagging.func_750(&Var1, Local_2982.f_4);
	aggregate.fme_animal_tagging.func_751(&Var1);
	if (aggregate.fme_animal_tagging.func_134(8192))
	{
		if (Local_2695.f_277 >= 1)
		{
			iVar0 = 1519614621;
		}
	}
	else if (Local_2695.f_277 >= 1)
	{
		iVar0 = -926779719;
	}
	else
	{
		iVar0 = 1387750829;
	}
	aggregate.fme_animal_tagging.func_752(iVar0, &(Local_3225.f_1374), &Var1, 0, 255, 0, 0);
	Local_3225.f_1281++;
	iVar14 = func_1227(Local_2695.f_277);
	if (Local_2695.f_277 <= 0)
	{
		return 1;
	}
	if (Local_2695.f_277 == 1 || iVar14 == 0)
	{
		if (aggregate.doc_book.func_171(-1155541776, 0, 255, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	Var15.f_1 = 11;
	aggregate.doc_book.func_292(&Var15, iVar14);
	if (aggregate.fme_supply_train.func_1229(-1155541776, &Var15, 0, 255, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_974()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if ((Local_3225.f_13.f_210[iVar1 /*23*/])->f_14 == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

bool func_1101(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return false;
	}
	iVar0 = iParam0 * 3 + 1;
	iVar1 = iParam0 * 3 + 2;
	if (!MISC::IS_BIT_SET(Local_13.f_1155, iVar0) && !MISC::IS_BIT_SET(Local_13.f_1155, iVar1))
	{
		return false;
	}
	return true;
}

bool func_1102(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1106(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		iVar0 = iParam0 * 3 + 1;
	}
	else
	{
		iVar0 = iParam0 * 3 + 2;
	}
	if (!MISC::IS_BIT_SET(Local_13.f_1155, iVar0))
	{
		return false;
	}
	return true;
}

bool func_1103(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else
		{
			iVar1 = 0;
			if (bParam1)
			{
				iVar1 = iParam0 * 2;
			}
			else
			{
				iVar1 = iParam0 * 2 + 1;
			}
			if (MISC::IS_BIT_SET((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_39, iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1104(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = iParam0 * 3 + 1;
	iVar1 = iParam0 * 3 + 2;
	MISC::CLEAR_BIT(&(Local_13.f_1155), iVar0);
	MISC::CLEAR_BIT(&(Local_13.f_1155), iVar1);
}

void func_1105(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = iParam0 * 3;
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_13.f_1155), iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_13.f_1155), iVar0);
	}
}

bool func_1106(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 5)
	{
		return false;
	}
	if (!(Local_13.f_1025[iParam0 /*14*/])->f_8)
	{
		return false;
	}
	return true;
}

bool func_1107(int iParam0)
{
	int iVar0;

	if (!func_1106(iParam0))
	{
		return false;
	}
	iVar0 = iParam0 * 3;
	return MISC::IS_BIT_SET(Local_13.f_1155, iVar0);
}

int func_1109(struct<2> Param0, var uParam2)
{
	switch (Param0)
	{
		case 0:
			switch (Param0.f_1)
			{
				case 0:
					return 1;
				case 1:
					return 2;
				case 2:
					return 3;
				case 3:
					return 4;
				case 4:
					return 5;
				case 5:
					return 6;
				default:
					break;
			}
			return 0;
			Jump @371; //curOff = 126
			switch (Param0.f_1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			return 0;
			Jump @371; //curOff = 156
			switch (Param0.f_1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			return 0;
			Jump @371; //curOff = 187
			switch (Param0.f_1)
			{
				case 0:
					return 12;
				case 1:
					return 13;
				case 2:
					return 14;
				case 3:
					return 15;
				case 4:
					return 16;
				case 5:
					return 17;
				case 6:
					return 18;
				case 7:
					return 19;
				default:
					break;
			}
			return 0;
			Jump @371; //curOff = 295
			switch (Param0.f_1)
			{
				case 1:
					return 11;
				default:
					break;
			}
			return 0;
			Jump @371; //curOff = 326
			switch (Param0.f_1)
			{
				case 0:
					return 9;
				case 1:
					return 10;
				default:
					break;
			}
			return 0;
			return 0;
		}

bool func_1110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam2 = -1;
	*iParam3 = -1;
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= iParam1)
	{
		return false;
	}
	*iParam2 = (iParam0 / 32);
	*iParam3 = (iParam0 - *iParam2 * 32);
	return true;
}

int func_1111()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if ((func_783(iVar0, 4) && !func_783(iVar0, 8)) && !aggregate.annesburg.func_121(*(Local_13.f_9[iVar0 /*7*/])))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 >= 0)
	{
	}
	return iVar1;
}

void func_1113(int iParam0, int iParam1, var uParam2)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1269650476);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::_0x431240A58484D5D0(iParam0, false);
	WEAPON::_0x45E57FDD531C9477(iParam0, false);
	PED::_0xC2745D9261664901(iParam0, MISC::GET_HASH_KEY("FME_ST_BANDIT"));
}

void func_1114(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = (Local_13.f_506[iParam0 /*14*/])->f_4;
	if (func_1318(iVar0))
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
		aggregate.bandana.func_26(iVar1, 0);
	}
	else
	{
		func_761(iVar0, 1);
	}
}

void func_1115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	if (iParam0 < 0 || iParam0 >= 37)
	{
		return;
	}
	iVar0 = &Local_13.f_506[iParam0 /*14*/];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(iVar0);
	if (!aggregate.barcustomer_interaction.func_12(iVar1, 0))
	{
		return;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, false, true);
	iVar2 = (iParam0 % 3);
	bVar3 = iVar2 <= true;
	iVar2 = (iParam0 % 6);
	bVar4 = iVar2 == true;
	WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_revolver_schofield"), 80, !bVar3, bVar3, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	if (bVar3)
	{
		if (bVar4)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_rifle_boltaction"), 80, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		else
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_repeater_carbine"), 80, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
	}
}

void func_1119(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam6);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam1, fParam4, iParam5, bParam6, 0);
	}
}

Vector3 func_1120(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 40)
	{
		return aggregate.flow_controller.func_96();
	}
	switch (iParam0)
	{
		case -1900781664:
			switch (iParam1)
			{
				case 0:
					return -121.5872f, 670.2827f, 112.9165f;
				case 1:
					return -82.733f, 686.3893f, 113.8671f;
				case 2:
					return -49.6442f, 685.7531f, 114.9635f;
				case 3:
					return -1.7947f, 673.8198f, 116.4785f;
				case 4:
					return 112.7628f, 615.954f, 118.0881f;
				case 5:
					return 236.0417f, 536.0986f, 114.8165f;
				case 6:
					return 276.5152f, 529.6169f, 114.7831f;
				case 7:
					return 313.2609f, 547.3202f, 114.7831f;
				case 8:
					return 389.202f, 634.6766f, 114.778f;
				case 9:
					return 429.5244f, 656.9503f, 114.7782f;
				case 10:
					return 507.7211f, 654.9171f, 114.7705f;
				case 11:
					return 558.4841f, 660.1981f, 114.9399f;
				case 12:
					return 645.0322f, 696.8521f, 114.1783f;
				case 13:
					return 918.6057f, 770.0656f, 106.725f;
				case 14:
					return 1062.935f, 798.4825f, 106.4286f;
				case 15:
					return 1235.914f, 780.0044f, 98.4459f;
				case 16:
					return 1319.503f, 752.3649f, 94.3293f;
				case 17:
					return 1482.99f, 647.3155f, 91.3911f;
				case 18:
					return 1522.428f, 595.2485f, 91.5505f;
				case 19:
					return 1529.787f, 523.394f, 89.2781f;
				case 20:
					return 1529.396f, 403.7757f, 89.6032f;
			}
			break;
		case -824858074:
			switch (iParam1)
			{
				case 0:
					return 2764.62f, -1422.537f, 45.3059f;
				case 1:
					return 2881.273f, -1283.496f, 45.0613f;
				case 2:
					return 2896.852f, -1249.443f, 44.9997f;
				case 3:
					return 2899.114f, -1218.477f, 45.0074f;
				case 4:
					return 2892.56f, -1158.206f, 45.1537f;
				case 5:
					return 2854.343f, -1038.294f, 44.106f;
				case 6:
					return 2823.417f, -973.2308f, 43.0198f;
				case 7:
					return 2762.548f, -877.7234f, 42.0559f;
				case 8:
					return 2667.83f, -684.5912f, 41.7602f;
				case 9:
					return 2658.231f, -596.5468f, 41.7571f;
				case 10:
					return 2667.397f, -520.7559f, 41.7325f;
				case 11:
					return 2663.985f, -404.2023f, 42.5457f;
				case 12:
					return 2717.758f, -252.5063f, 41.5891f;
				case 13:
					return 2783.772f, -36.8152f, 44.07f;
				case 14:
					return 2780.221f, 50.2491f, 46.1552f;
				case 15:
					return 2729.002f, 163.9802f, 50.7178f;
				case 16:
					return 2744.869f, 313.3094f, 53.0534f;
				case 17:
					return 2898.061f, 654.5159f, 55.7925f;
				case 18:
					return 2909.208f, 709.3277f, 53.0234f;
				case 19:
					return 2899.047f, 809.7759f, 49.6429f;
				case 20:
					return 2845.63f, 926.6808f, 48.2858f;
				case 21:
					return 2824.114f, 1064.986f, 45.7077f;
				case 22:
					return 2851.078f, 1164.595f, 44.9706f;
				case 23:
					return 2934.398f, 1253.887f, 43.291f;
				case 24:
					return 2975.613f, 1335.164f, 42.9013f;
			}
			break;
		case -79540972:
			switch (iParam1)
			{
				case 0:
					return -1046.02f, -615.2333f, 75.5539f;
				case 1:
					return -960.5425f, -635.7365f, 72.2412f;
				case 2:
					return -874.3107f, -622.3497f, 71.2414f;
				case 3:
					return -700.2104f, -532.6961f, 74.9091f;
				case 4:
					return -556.7927f, -459.6315f, 79.6668f;
				case 5:
					return -332.1827f, -345.6793f, 87.2021f;
				case 6:
					return -198.707f, -289.8609f, 89.4791f;
				case 7:
					return -111.5276f, -298.2017f, 93.6727f;
				case 8:
					return -40.4968f, -339.9771f, 93.0262f;
				case 9:
					return 66.5588f, -373.3589f, 90.0648f;
				case 10:
					return 185.5358f, -422.1862f, 86.4144f;
				case 11:
					return 239.9859f, -460.6581f, 83.1534f;
				case 12:
					return 371.0233f, -510.1457f, 78.0694f;
				case 13:
					return 525.2787f, -522.6381f, 76.1655f;
				case 14:
					return 576.5497f, -520.1256f, 76.4246f;
				case 15:
					return 656.0228f, -514.7709f, 76.1512f;
				case 16:
					return 707.6627f, -537.5093f, 76.1522f;
				case 17:
					return 799.383f, -618.5598f, 75.9642f;
				case 18:
					return 899.222f, -644.9669f, 69.8627f;
				case 19:
					return 926.8834f, -699.3165f, 68.5384f;
				case 20:
					return 899.9678f, -768.6123f, 67.4512f;
				case 21:
					return 904.1536f, -818.0391f, 68.6811f;
				case 22:
					return 986.9241f, -928.9213f, 66.4795f;
				case 23:
					return 1073.797f, -1119.488f, 66.4678f;
				case 24:
					return 1123.829f, -1197.42f, 70.5847f;
				case 25:
					return 1186.026f, -1270.631f, 75.4679f;
				case 26:
					return 1301.258f, -1377.309f, 75.3405f;
			}
			break;
		case 2063714806:
			switch (iParam1)
			{
				case 0:
					return -3749.273f, -2638.762f, -14.5368f;
				case 1:
					return -3753.962f, -2762.087f, -15.1476f;
				case 2:
					return -3803.37f, -2819.68f, -15.1416f;
				case 3:
					return -3889.351f, -2844.619f, -15.2463f;
				case 4:
					return -3981.689f, -2898.245f, -15.2851f;
				case 5:
					return -4128.163f, -3056.365f, -8.177f;
				case 6:
					return -4211.917f, -3080.813f, -7.4575f;
				case 7:
					return -4356.208f, -3087.347f, -10.6866f;
				case 8:
					return -4411.633f, -3096.964f, -11.0267f;
				case 9:
					return -4552.962f, -3056.103f, -8.6776f;
				case 10:
					return -4596.984f, -3027.438f, -7.886f;
				case 11:
					return -4627.236f, -3049.369f, -6.9655f;
				case 12:
					return -4679.686f, -3095.2f, -8.2292f;
				case 13:
					return -4761.019f, -3105.209f, -11.1472f;
				case 14:
					return -4888.552f, -3079.619f, -17.3871f;
				case 15:
					return -4990.814f, -3094.486f, -17.9378f;
				case 16:
					return -5072.674f, -3145.798f, -15.1136f;
				case 17:
					return -5121.824f, -3203.158f, -16.0065f;
				case 18:
					return -5272.147f, -3333.499f, -21.7677f;
				case 19:
					return -5280.416f, -3373.937f, -22.3625f;
				case 20:
					return -5245.361f, -3430.188f, -22.5785f;
				case 21:
					return -5241.638f, -3510.052f, -22.086f;
			}
			break;
	}
	return aggregate.flow_controller.func_96();
}

bool func_1121(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return aggregate.aberdeenpigfarm.func_175(Local_1190[iParam2 /*47*/][iParam0], iParam1);
}

void func_1122(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	aggregate.aberdeenpigfarm.func_163((*Local_1190[iParam2 /*47*/])[iParam0], iParam1);
}

bool func_1123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam1, 37, &iVar0, &iVar1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(&((Local_1190[iParam0 /*47*/])->f_44[iVar0]), iVar1);
}

bool func_1142(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case -530846566:
			iVar0 = -705539859;
			vVar1 = { -281.0263f, -319.5532f, 88.02095f };
			break;
		case -245962931:
			iVar0 = 1499637393;
			vVar1 = { 1481.509f, 648.3527f, 91.52025f };
			break;
		case -500348165:
			iVar0 = -760570040;
			vVar1 = { 1529.881f, 467.6379f, 89.20429f };
			break;
		case 476945523:
			iVar0 = 1499637393;
			vVar1 = { 1692.865f, 544.3328f, 97.59906f };
			break;
		case -1420724065:
			iVar0 = 1499637393;
			vVar1 = { 2659.843f, -435.6971f, 42.38826f };
			break;
		case 1548096282:
			iVar0 = 1499637393;
			vVar1 = { 31.56687f, -29.40786f, 102.3233f };
			break;
		case -532023123:
			iVar0 = -988268728;
			vVar1 = { -2174.342f, -2508.351f, 64.79848f };
			break;
		case 1603023256:
			iVar0 = -1467515357;
			vVar1 = { -4916.622f, -3009.565f, -19.15694f };
			break;
		case -421036188:
			iVar0 = -705539859;
			vVar1 = { 610.215f, 1662.165f, 186.3704f };
			break;
		case 1431393516:
			iVar0 = -705539859;
			vVar1 = { -1375.646f, -137.362f, 99.87008f };
			break;
	}
	if (!VEHICLE::_0x86AFC343CF7F0B34(iVar0, vVar1, &uVar4))
	{
		return false;
	}
	VEHICLE::_0xE6C5E2125EB210C1(iVar0, uVar4, iParam1);
	return true;
}

void func_1193(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		aggregate.bandana.func_26((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[iParam0 /*4*/], iParam1);
	}
}

void func_1194(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = iParam0 * 2;
	iVar1 = iParam0 * 2 + 1;
	MISC::CLEAR_BIT(&((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_39), iVar0);
	MISC::CLEAR_BIT(&((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_39), iVar1);
}

int func_1195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1196(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1106(iParam0))
	{
		return;
	}
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = iParam0 * 2;
	}
	else
	{
		iVar0 = iParam0 * 2 + 1;
	}
	MISC::SET_BIT(&((Local_1190[NETWORK::PARTICIPANT_ID_TO_INT() /*47*/])->f_39), iVar0);
}

struct<12> func_1197(int iParam0, int iParam1, int iParam2)
{
	struct<12> Var0;

	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0 = { func_1120(iParam0, iParam1) };
	Var0.f_3 = { func_1120(iParam0, iParam2) };
	switch (iParam0)
	{
		case -1900781664:
			Var0.f_6 = 10;
			Var0.f_7 = 16;
			Var0.f_8 = 20;
			Var0.f_9 = 721.6108f;
			Var0.f_10 = 837.7115f;
			Var0.f_11 = 451.5535f;
			break;
		case -824858074:
			Var0.f_6 = 12;
			Var0.f_7 = 17;
			Var0.f_8 = 24;
			Var0.f_9 = 1279.354f;
			Var0.f_10 = 961.7748f;
			Var0.f_11 = 742.0163f;
			break;
		case -79540972:
			Var0.f_6 = 5;
			Var0.f_7 = 14;
			Var0.f_8 = 26;
			Var0.f_9 = 784.0896f;
			Var0.f_10 = 968.6353f;
			Var0.f_11 = 1240.635f;
			break;
		case 2063714806:
			Var0.f_6 = 7;
			Var0.f_7 = 15;
			Var0.f_8 = 21;
			Var0.f_9 = 842.9855f;
			Var0.f_10 = 678.532f;
			Var0.f_11 = 558.7527f;
			break;
	}
	return Var0;
}

bool func_1198(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12, bool bParam13, bool bParam14)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	float fVar11;

	if (!func_1363(vParam0, vParam3, vParam6, vParam9, uParam12))
	{
		return false;
	}
	if (bParam13)
	{
		fVar0 = BUILTIN::VMAG(vParam3 - vParam0);
		fVar1 = (fVar0 / 2f);
		vVar2 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
		fVar5 = BUILTIN::VMAG(*uParam12 - vVar2);
		if (fVar5 > fVar1)
		{
			return false;
		}
	}
	if (bParam14)
	{
		fVar6 = BUILTIN::VMAG(vParam9 - vParam6);
		fVar7 = (fVar6 / 2f);
		vVar8 = { vParam6 + vParam9 / Vector(2f, 2f, 2f) };
		fVar11 = BUILTIN::VMAG(*uParam12 - vVar8);
		if (fVar11 > fVar7)
		{
			return false;
		}
	}
	return true;
}

float func_1199(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_1204()
{
	return 1000;
}

int func_1206(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4[3];
	float fVar8[3];
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_506[iParam0 /*14*/])))
	{
		return -1;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_506[iParam0 /*14*/]));
	fVar3 = 99999f;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 <= 2)
	{
		iVar4[iVar12] = -1;
		fVar8[iVar12] = 99999f;
		iVar12++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		if (&Local_2695.f_123[iVar2 /*8*/] >= 4)
		{
		}
		else
		{
			iVar1 = (Local_2695.f_123[iVar2 /*8*/])->f_1;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iVar1, true, false));
				if ((Local_13.f_506[iParam0 /*14*/])->f_3 == -1169648302 || (Local_13.f_506[iParam0 /*14*/])->f_3 == -423716019)
				{
					if (fVar3 > 50f)
					{
					}
					else if (fVar3 < &fVar8[0])
					{
						iVar4[2] = &iVar4[1];
						fVar8[2] = &fVar8[1];
						iVar4[1] = &iVar4[0];
						fVar8[1] = &fVar8[0];
						iVar4[0] = iVar2;
						fVar8[0] = fVar3;
					}
					else if (fVar3 < &fVar8[1])
					{
						iVar4[2] = &iVar4[1];
						fVar8[2] = &fVar8[1];
						iVar4[1] = iVar2;
						fVar8[1] = fVar3;
					}
					else if (fVar3 < &fVar8[2])
					{
						iVar4[2] = iVar2;
						fVar8[2] = fVar3;
					}
					iVar2++;
					iVar13 = -1;
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 <= 2)
					{
						if (&iVar4[iVar12] == -1)
						{
						}
						else
						{
							iVar14 = 0;
							iVar1 = (Local_2695.f_123[&iVar4[iVar12] /*8*/])->f_1;
							if ((Local_13.f_506[iParam0 /*14*/])->f_3 == -1169648302 || (Local_13.f_506[iParam0 /*14*/])->f_3 == -423716019)
							{
								vVar15 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) + Vector(3f, 0f, 0f) };
								if (ENTITY::_0x0C9DBF48C6BA6E4C(iVar0, vVar15, 17))
								{
									iVar14 = 1;
								}
							}
							if (Local_13.f_506[iParam0 /*14*/])->f_3 == joaat("mounted")
							{
								vVar15 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) + Vector(1.5f, 0f, 0f) };
								if (ENTITY::_0x0C9DBF48C6BA6E4C(iVar0, vVar15, 17))
								{
									iVar14 = 1;
								}
							}
							if (iVar14 == 0)
							{
								if (PED::_0x7F9B9791D4CB71F6(iVar0, iVar1, false, 0) == 1)
								{
									iVar14 = 1;
								}
							}
							if (iVar14 == 0)
							{
							}
							else
							{
								iVar13 = &iVar4[iVar12];
							}
							else
							{
								iVar12++;
							}
						}
					}
					if (iVar13 == -1)
					{
					}
					return iVar13;
				}
			}
		}
	}
}

int func_1208(int iParam0)
{
	return (Global_1130823->f_2[iParam0 /*41*/])->f_5;
}

int func_1209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && func_1366(PLAYER::GET_PLAYER_PED(iVar1), 0, iParam0))
		{
			iVar0++;
		}
		iVar2++;
	}
	return iVar0;
}

bool func_1211(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == func_414(Local_3225.f_2))
	{
		return true;
	}
	return false;
}

int func_1212(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return 0;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1246065194;
		case 3:
			return -458658893;
		case 4:
			return -650685233;
		case 5:
			return 1515312902;
		case 6:
			return -2000571419;
		case 7:
			return 2113117769;
		case 8:
			return -1404142850;
		case 9:
			return -94038214;
		case 10:
			return -745452277;
		case 11:
			return -1997228077;
		case 12:
			return 2053806783;
		case 13:
			return 1830584359;
		case 14:
			return -1622514558;
		case 15:
			return -1849341576;
		case 16:
			return 1140796909;
		case 17:
			return 908137009;
		case 18:
			return 1706226004;
		default:
			break;
	}
	return 0;
}

bool func_1318(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1110(iParam0, 45, &iVar0, &iVar1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(&(Local_13.f_1166[iVar0]), iVar1);
}

bool func_1363(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (aggregate.flow_controller.func_195(vParam0, vParam3))
	{
		return false;
	}
	if (aggregate.flow_controller.func_195(vParam6, vParam9))
	{
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if ((vParam3.x - vParam0.x) == 0f)
	{
		bVar0 = true;
	}
	else if ((vParam3.y - vParam0.y) == 0f)
	{
		iVar1 = 1;
	}
	if ((vParam9.x - vParam6.x) == 0f)
	{
		bVar2 = true;
	}
	else if ((vParam9.y - vParam6.y) == 0f)
	{
		iVar3 = 1;
	}
	if (bVar0 && bVar2)
	{
		return false;
	}
	else if (iVar1 && iVar3)
	{
		return false;
	}
	if (!bVar0)
	{
		fVar4 = ((vParam3.y - vParam0.y) / (vParam3.x - vParam0.x));
	}
	if (!bVar2)
	{
		fVar5 = ((vParam9.y - vParam6.y) / (vParam9.x - vParam6.x));
	}
	fVar6 = (vParam0.y - (fVar4 * vParam0.x));
	fVar7 = (vParam6.y - (fVar5 * vParam6.x));
	if (bVar0)
	{
		*uParam12 = vParam0.x;
		uParam12->f_1 = ((fVar5 * *uParam12) + fVar7);
		return true;
	}
	if (bVar2)
	{
		*uParam12 = vParam6.x;
		uParam12->f_1 = ((fVar4 * *uParam12) + fVar6);
		return true;
	}
	*uParam12 = ((fVar7 - fVar6) / (fVar4 - fVar5));
	uParam12->f_1 = ((fVar4 * *uParam12) + fVar6);
	return true;
}

bool func_1366(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])))
	{
		return false;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((Global_1130823->f_2[iParam1 /*41*/])->f_10[iParam2 /*2*/])->f_1, false, 0))
	{
		return true;
	}
	return false;
}

void func_1371(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
	aggregate.fme_animal_tagging.func_1253(*uParam0);
}

void func_1822(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 4, &uParam1);
}

