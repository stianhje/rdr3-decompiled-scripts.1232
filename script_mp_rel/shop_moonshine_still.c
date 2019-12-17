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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<1778> Local_23 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, -1, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, -1, 0, 2, 0, 0, 5, -1, 0, 0, 5, -1, 0, -1, 0, 2, 0, 0, 5, -1, 0, 0, 5, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, 2, -1, -1, 493038497, 493038497, -1, -1, -1, 0, 0, 0, 5, -1, 0, -1, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, 25, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -719620017, 992265328, -388507855, 1072537860, 0, 0, 0, 2, 0, 0, 1000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<2533> Var0;
	int iVar2587;
	bool bVar2588;
	bool bVar2589;
	int iVar2590;
	bool bVar2591;
	int iVar2592;
	int iVar2593;
	bool bVar2594;
	bool bVar2595;
	float fVar2596;
	bool bVar2597;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_1 = 8;
	Var0.f_21 = 16;
	Var0.f_150 = 16;
	Var0.f_167.f_4.f_1.f_1 = 10;
	Var0.f_167.f_4.f_1.f_82 = 10;
	Var0.f_167.f_4.f_1.f_163 = 10;
	Var0.f_167.f_4.f_1.f_174 = 10;
	Var0.f_167.f_4.f_1.f_186 = 10;
	Var0.f_167.f_4.f_1.f_197 = 10;
	Var0.f_167.f_4.f_1.f_208 = 10;
	Var0.f_167.f_4.f_223.f_20 = 10;
	Var0.f_167.f_4.f_223.f_31 = 10;
	Var0.f_167.f_4.f_279 = -1;
	Var0.f_167.f_4.f_281.f_3 = 16;
	Var0.f_167.f_4.f_281.f_3.f_1 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_167.f_4.f_281.f_3.f_81 = 16;
	Var0.f_167.f_4.f_281.f_3.f_115 = 16;
	Var0.f_167.f_4.f_436 = 4;
	Var0.f_167.f_4.f_436.f_1 = 14;
	Var0.f_167.f_4.f_436.f_1.f_4.f_8 = 2;
	Var0.f_167.f_4.f_436.f_1.f_4.f_11 = 16;
	Var0.f_167.f_4.f_436.f_1.f_4.f_28 = 16;
	Var0.f_167.f_4.f_436.f_1.f_4.f_45 = 16;
	Var0.f_167.f_4.f_436.f_1.f_4.f_62 = 16;
	Var0.f_167.f_4.f_436.f_1.f_4.f_79 = 16;
	Var0.f_167.f_4.f_436.f_1.f_4.f_96 = 4;
	Var0.f_167.f_4.f_436.f_1.f_4.f_96.f_1.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_136 = 4;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_153 = -1;
	Var0.f_167.f_4.f_436.f_1.f_154 = -1;
	Var0.f_167.f_4.f_436.f_1.f_155 = 16;
	Var0.f_167.f_4.f_436.f_1.f_172 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189 = 14;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_8 = 2;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_11 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_28 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_45 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_62 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_79 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_96 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_96.f_1.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_153 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_154 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_155 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_172 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189 = 14;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_8 = 2;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_11 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_28 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_45 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_62 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_79 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_96 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_96.f_1.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_153 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_154 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_155 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_172 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189 = 14;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_8 = 2;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_11 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_28 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_45 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_62 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_79 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_96 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_96.f_1.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136 = 4;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_153 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_154 = -1;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_155 = 16;
	Var0.f_167.f_4.f_436.f_1.f_189.f_189.f_189.f_172 = 16;
	Var0.f_167.f_4.f_1198 = 6;
	Var0.f_167.f_4.f_1206.f_7 = 1110441984;
	Var0.f_167.f_4.f_1206.f_8 = 1036831949;
	Var0.f_167.f_4.f_1206.f_9 = 1092616192;
	Var0.f_167.f_4.f_1206.f_10 = 1084227584;
	Var0.f_167.f_4.f_1206.f_12 = 1;
	Var0.f_167.f_4.f_1206.f_13 = 1;
	Var0.f_167.f_4.f_1206.f_14 = 1;
	Var0.f_167.f_4.f_1206.f_15 = 1;
	Var0.f_167.f_4.f_1232 = 10;
	Var0.f_167.f_4.f_1232.f_11 = 10;
	Var0.f_167.f_4.f_1232.f_22 = 10;
	Var0.f_167.f_4.f_1278 = joaat("SHORT_TIMED_EVENT");
	Var0.f_167.f_4.f_1288 = -1;
	Var0.f_167.f_4.f_1291 = 1;
	Var0.f_167.f_1305.f_3 = 200;
	Var0.f_167.f_1513.f_3 = 200;
	Var0.f_167.f_1722 = 7;
	Var0.f_167.f_1722.f_8 = 7;
	Var0.f_167.f_1722.f_16 = 7;
	Var0.f_167.f_1767 = -805634630;
	Var0.f_167.f_1774 = 1;
	Var0.f_167.f_1778.f_1.f_3 = 1036831949;
	Var0.f_167.f_1778.f_1.f_5 = 1110704128;
	Var0.f_167.f_1778.f_1.f_6 = 1073741824;
	Var0.f_167.f_1778.f_1.f_7 = 1080033280;
	Var0.f_167.f_1778.f_1.f_8 = 1080033280;
	Var0.f_167.f_1778.f_1.f_9 = -1038090240;
	Var0.f_167.f_1778.f_1.f_10 = 1101004800;
	Var0.f_167.f_1778.f_1.f_11 = -1020002304;
	Var0.f_167.f_1778.f_1.f_12 = 1127481344;
	Var0.f_167.f_1778.f_1.f_16 = 1080033280;
	Var0.f_167.f_1778.f_1.f_17 = 1;
	Var0.f_167.f_1778.f_1.f_18 = 2;
	Var0.f_167.f_1778.f_22 = -1;
	Var0.f_167.f_1778.f_23 = 256;
	Var0.f_167.f_1815 = 7;
	Var0.f_2003.f_1.f_3 = 1036831949;
	Var0.f_2003.f_1.f_5 = 1110704128;
	Var0.f_2003.f_1.f_6 = 1073741824;
	Var0.f_2003.f_1.f_7 = 1080033280;
	Var0.f_2003.f_1.f_8 = 1080033280;
	Var0.f_2003.f_1.f_9 = -1038090240;
	Var0.f_2003.f_1.f_10 = 1101004800;
	Var0.f_2003.f_1.f_11 = -1020002304;
	Var0.f_2003.f_1.f_12 = 1127481344;
	Var0.f_2003.f_1.f_16 = 1080033280;
	Var0.f_2003.f_1.f_17 = 1;
	Var0.f_2003.f_1.f_18 = 2;
	Var0.f_2003.f_22 = -1;
	Var0.f_2003.f_23 = 256;
	Var0.f_2047 = -1;
	Var0.f_2047.f_1 = -1;
	Var0.f_2057 = -1;
	Var0.f_2057.f_1 = -1;
	Var0.f_2079.f_4 = 5;
	Var0.f_2094.f_20 = 10;
	Var0.f_2094.f_31 = 10;
	Var0.f_2094.f_44 = -1;
	Var0.f_2094.f_69 = -1;
	Var0.f_2094.f_70 = -1;
	Var0.f_2094.f_74 = -1;
	Var0.f_2248.f_8 = 4;
	Var0.f_2248.f_8.f_1.f_2 = 570;
	Var0.f_2248.f_8.f_1.f_3 = 1065353216;
	Var0.f_2248.f_8.f_1.f_4 = -1082130432;
	Var0.f_2248.f_8.f_1.f_9 = 2;
	Var0.f_2248.f_8.f_1.f_17.f_2 = 570;
	Var0.f_2248.f_8.f_1.f_17.f_3 = 1065353216;
	Var0.f_2248.f_8.f_1.f_17.f_4 = -1082130432;
	Var0.f_2248.f_8.f_1.f_17.f_9 = 2;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_2 = 570;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_3 = 1065353216;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_4 = -1082130432;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_9 = 2;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_17.f_2 = 570;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_17.f_3 = 1065353216;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_17.f_4 = -1082130432;
	Var0.f_2248.f_8.f_1.f_17.f_17.f_17.f_9 = 2;
	Var0.f_2248.f_77.f_1 = -1;
	Var0.f_2248.f_77.f_3 = -1;
	Var0.f_2248.f_77.f_6 = -1;
	Var0.f_2248.f_77.f_12 = 1073741824;
	Var0.f_2248.f_77.f_16 = 1;
	Var0.f_2248.f_98 = -1;
	Var0.f_2248.f_100 = 1103626240;
	Var0.f_2248.f_103 = 4;
	Var0.f_2248.f_108 = 4;
	Var0.f_2248.f_114 = 2;
	Var0.f_2248.f_115 = -1;
	Var0.f_2371.f_5 = -252438768;
	Var0.f_2421.f_56 = -1;
	Var0.f_2532 = 8;
	Var0.f_2532.f_9.f_20 = 10;
	Var0.f_2532.f_9.f_31 = 10;
	Var0.f_3 = ScriptParam_0;
	Var0.f_4 = aggregate.annesburg.func_114(ScriptParam_0.f_1, Var0.f_3);
	Var0.f_19 = ScriptParam_0.f_1;
	Var0.f_1997 = ScriptParam_0.f_2;
	Var0.f_1998 = ScriptParam_0.f_3;
	Var0.f_2000 = { ScriptParam_0.f_4 };
	Var0 = 0;
	Var0.f_167.f_4.f_221 = ScriptParam_0;
	Var0.f_167.f_1747 = ScriptParam_0;
	bVar2588 = aggregate.aberdeenpigfarm.func_45() == -1;
	aggregate.mp_intro.func_3303(Var0.f_3, &iVar2593);
	Var0.f_2248.f_101 = iVar2593;
	aggregate.shop_bait.func_4(Var0.f_3, &(Var0.f_2248));
	Var0.f_2421.f_1 = Var0.f_4;
	Var0.f_2421.f_4 = iVar2593;
	aggregate.saloon_dining.func_581(&(Var0.f_2421), 0);
	Var0.f_8 = aggregate.shop_bait.func_6(Var0.f_3, Var0.f_4);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate.shop_bait.func_7(&Var0);
	}
	aggregate.shop_bait.func_136(&Var0);
	while (bVar2588 || !aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		bVar2594 = aggregate.barcustomer_interaction.func_12(iVar2593, 0);
		if (!Var0.f_18 && bVar2594)
		{
			if (Var0.f_3 == 9)
			{
				PED::SET_PED_CONFIG_FLAG(iVar2593, 315, false);
				PED::SET_PED_CONFIG_FLAG(iVar2593, 130, false);
				if (!PLAYER::_0xEA8F168A76A0B9BC(PLAYER::GET_PLAYER_INDEX(), iVar2593, 4, 1))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar2593, 4, 1, true);
				}
				if (!PLAYER::_0xEA8F168A76A0B9BC(PLAYER::GET_PLAYER_INDEX(), iVar2593, 7, 1))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar2593, 7, 1, true);
				}
				Var0.f_18 = 1;
			}
			else
			{
				if (!LAW::_0x0EAF918F751F27BA(iVar2593) && !LAW::_0xC0DF161950FB101E(iVar2593))
				{
					PED::SET_PED_CONFIG_FLAG(iVar2593, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar2593, 174, true);
				}
				if (!PLAYER::_0xEA8F168A76A0B9BC(PLAYER::GET_PLAYER_INDEX(), iVar2593, 3, 1))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar2593, 3, 1, true);
				}
				if (!PLAYER::_0xEA8F168A76A0B9BC(PLAYER::GET_PLAYER_INDEX(), iVar2593, 4, 1))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar2593, 4, 1, true);
				}
				if (!PLAYER::_0xEA8F168A76A0B9BC(PLAYER::GET_PLAYER_INDEX(), iVar2593, 7, 1))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar2593, 7, 1, true);
				}
				Var0.f_18 = 1;
			}
		}
		bVar2595 = PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX());
		fVar2596 = aggregate.fm_mission_controller.func_3321(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Var0.f_2000, 1);
		if (bVar2588)
		{
			bVar2589 = aggregate.shop_bait.func_12(Var0.f_3);
		}
		else
		{
			bVar2589 = aggregate.shop_bait.func_13(Var0.f_3);
		}
		if (aggregate.shop_bait.func_14(&Var0, fVar2596))
		{
			aggregate.shop_bait.func_15(&Var0, 9);
		}
		if (Var0 >= 5 && Var0 <= 7)
		{
			if (Var0.f_8)
			{
				aggregate.shop_bait.func_16(&(Var0.f_167), &Var0);
			}
			aggregate.shop_bait.func_17(&Var0);
		}
		func_18(&Var0);
		aggregate.shop_bait.func_19(&Var0);
		aggregate.shop_bait.func_20(&Var0);
		if (!bVar2588)
		{
			if (Var0 >= 3 && Var0 <= 8)
			{
				aggregate.shop_bait.func_21(Var0.f_3, &Var0);
			}
		}
		if (Var0 >= 3)
		{
			aggregate.shop_bait.func_22(&Var0);
			aggregate.saloon_dining.func_156(&(Var0.f_2421));
		}
		aggregate.shop_bait.func_24(&Var0);
		if (Var0.f_2527 > (MISC::GET_GAME_TIMER() - 1200))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SHOP_INSPECT"), false);
		}
		aggregate.shop_bait.func_25(&Var0, aggregate.shop_bait.func_12(Var0.f_3));
		aggregate.shop_bait.func_26(&Var0, iVar2593, bVar2588);
		if (bVar2588)
		{
			aggregate.shop_bait.func_27(&Var0, iVar2593);
		}
		if ((((Var0 > 1 && Var0 < 7) && Var0.f_8) && aggregate.shop_bait.func_12(Var0.f_3)) && !ENTITY::DOES_ENTITY_EXIST(Var0.f_167.f_1768))
		{
			func_28(&Var0, 0);
		}
		if (Var0.f_8 && ((Global_1915170->f_20142 && Global_1915170->f_19742.f_1 != Var0.f_4) || Global_1915170->f_20142))
		{
			if (!Var0.f_167.f_1828)
			{
				Var0.f_167.f_1828 = 1;
			}
		}
		else if (Var0.f_167.f_1828)
		{
			aggregate.shop_bait.func_29(&(Var0.f_167), 1);
			func_28(&Var0, 0);
			Var0.f_167.f_1828 = 0;
		}
		switch (Var0)
		{
			case 0:
				Var0.f_11 = 0;
				Var0.f_12 = 0;
				aggregate.shop_bait.func_136(&Var0);
				if ((bVar2588 && aggregate.aberdeenpigfarm.func_99() > &Global_5653.f_1696[Var0.f_4]) && aggregate.long_update.func_572(Var0.f_4, 16))
				{
					aggregate.shop_bait.func_35(aggregate.aberdeenpigfarm.func_118((Global_1915170->f_3[Var0.f_3 /*447*/])->f_21), aggregate.aberdeenpigfarm.func_123(), 1);
					aggregate.saloon_dining.func_458(Var0.f_4, 16);
				}
				aggregate.shop_bait.func_15(&Var0, 1);
				break;
			case 1:
				if (func_37(&Var0))
				{
					aggregate.shop_bait.func_15(&Var0, 2);
				}
				break;
			case 2:
				if (bVar2588)
				{
					iVar2592 = &Global_5653.f_1696[Var0.f_4];
					aggregate.coffee_drinking.func_60(&iVar2592, 0, 0, 0, 4, 0, 0);
					if (aggregate.long_update.func_572(Var0.f_4, 16) && aggregate.aberdeenpigfarm.func_99() > iVar2592)
					{
						aggregate.shop_bait.func_35(aggregate.aberdeenpigfarm.func_118((Global_1915170->f_3[Var0.f_3 /*447*/])->f_21), aggregate.aberdeenpigfarm.func_123(), 0);
					}
				}
				aggregate.shop_bait.func_136(&Var0);
				aggregate.shop_bait.func_136(&Var0);
				func_41(&Var0);
				if ((Var0.f_3 != 18 && Var0.f_3 != 35) && Var0.f_3 != 36)
				{
					aggregate.shop_bait.func_42(&Var0, 1, 64);
					if (Var0.f_3 != 16 && Var0.f_3 != 29)
					{
						aggregate.shop_bait.func_42(&Var0, 2, 8);
					}
				}
				aggregate.shop_bait.func_43(&Var0);
				aggregate.aberdeenpigfarm.func_154(&Var0);
				aggregate.shop_bait.func_15(&Var0, 3);
				break;
			case 3:
				aggregate.shop_bait.func_136(&Var0);
				if (VOLUME::_0x92A78D0BEDB332A3(Var0.f_1997))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Var0.f_1997, true, 0))
					{
						SCRIPTS::_0x7D654266025E921B(-219582252);
						aggregate.shop_bait.func_15(&Var0, 4);
						Global_1957543->f_674 = 1;
						aggregate.shop_bait.func_46(&(Var0.f_2248), 0);
					}
				}
				break;
			case 4:
				if (bVar2588)
				{
					if (!TASK::_0x841475AC96E794D1((Global_1915170->f_3[Var0.f_3 /*447*/])->f_16))
					{
						(Global_1915170->f_3[Var0.f_3 /*447*/])->f_16 = aggregate.shop_bait.func_47(Var0.f_3);
						iVar2590 = (Global_1915170->f_3[Var0.f_3 /*447*/])->f_16;
					}
					bVar2591 = aggregate.benedictpoint.func_120(Var0.f_3, 32768);
				}
				else
				{
					iVar2590 = (Global_1051387->f_69[Var0.f_3 /*76*/])->f_6;
					bVar2591 = aggregate.aberdeenpigfarm.func_152(Var0.f_3, 32768);
				}
				if (!bVar2591 && !TASK::_0x841475AC96E794D1(iVar2590))
				{
					if (bVar2588)
					{
						iVar2590 = aggregate.shop_bait.func_47(Var0.f_3);
					}
					else
					{
						iVar2590 = aggregate.shop_bait.func_50(Var0.f_3);
					}
					if (!TASK::_0x841475AC96E794D1(iVar2590))
					{
					}
					else if (aggregate.aberdeenpigfarm.func_45() == -1)
					{
						(Global_1915170->f_3[Var0.f_3 /*447*/])->f_16 = iVar2590;
					}
					else
					{
						(Global_1051387->f_69[Var0.f_3 /*76*/])->f_6 = iVar2590;
					}
				}
				Global_1915170->f_19793 = { Global_1915170->f_19742 };
				Global_1915170->f_19742 = Var0.f_3;
				Global_1915170->f_19742.f_1 = Var0.f_4;
				Global_1915170->f_19742.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				aggregate.long_update.func_736(Global_1915170->f_19742.f_1);
				aggregate.saloon_dining.func_159(Var0.f_3, 4);
				INVENTORY::_0x9B4E793B1CB6550A();
				iVar2587 = aggregate.shop_bait.func_53();
				if (aggregate.aberdeenpigfarm.func_58(iVar2587) && Var0.f_19 != iVar2587)
				{
					aggregate.shop_bait.func_55(Var0.f_19);
				}
				aggregate.shop_bait.func_56(Var0.f_4);
				if (aggregate.shop_bait.func_57(Var0.f_3, Var0.f_4))
				{
					if (!aggregate.mp_intro.func_3303(Var0.f_3, &iVar2593))
					{
					}
					else if (!aggregate.fme_round_up.func_1021(iVar2593, 0))
					{
					}
				}
				if (!bVar2588)
				{
					aggregate.shop_bait.func_59(Var0.f_4, 1);
					aggregate.shop_bait.func_60(Var0.f_3, Var0.f_4);
					aggregate.aberdeenpigfarm.func_108(func_61(Var0.f_4), 1);
					Var0.f_11 = 1;
					if (!aggregate.aberdeenpigfarm.func_152(Var0.f_3, 16384) && (Var0.f_3 != 28 && Var0.f_3 != 29))
					{
						aggregate.mp_intro.func_1603(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[Var0.f_3 /*76*/])->f_21), 6f, 0f, 0f, 0f, 0f, 0f, 0f);
					}
				}
				aggregate.aberdeenpigfarm.func_181(1);
				aggregate.shop_bait.func_136(&Var0);
				bVar2597 = false;
				if (bVar2588)
				{
					bVar2597 = aggregate.long_update.func_259(Var0.f_4);
				}
				else
				{
					bVar2597 = aggregate.shop_bait.func_67(Var0.f_3);
				}
				if (!bVar2597)
				{
					aggregate.shop_bait.func_68(&Var0, iVar2593);
					if (!aggregate.shop_bait.func_69(Var0.f_4))
					{
						if (Var0.f_4 == 78)
						{
						}
						else
						{
							aggregate.scarletthorseshop.func_62(Var0.f_4, Var0.f_3, 1, 0);
						}
					}
				}
				if (Var0.f_4 == 48 || Var0.f_4 == 6)
				{
					if (!aggregate.long_update.func_247(545))
					{
						aggregate.binoculars.func_18(545, 1);
					}
				}
				if (!aggregate.blackwater.func_77(561))
				{
					if (((Var0.f_3 != 4 && Var0.f_3 != 2) && Var0.f_3 != 1) && Var0.f_3 != 16)
					{
						if (aggregate.shop_bait.func_74() < 1f)
						{
							aggregate.binoculars.func_18(561, 1);
						}
					}
				}
				aggregate.shop_bait.func_15(&Var0, 5);
				if (Var0.f_3 != 9 && !aggregate.long_update.func_259(Var0.f_4))
				{
					TELEMETRY::_0xF78E669FDC202E73();
					TELEMETRY::_0x775B2ED944E44973(aggregate.doc_book.func_344(Var0.f_3), aggregate.annesburg.func_243(Var0.f_4), aggregate.aberdeenpigfarm.func_73(Var0.f_19, 0), Var0.f_2000);
					if (!aggregate.shop_bait.func_78(Var0.f_3))
					{
						aggregate.shop_bait.func_79(&Var0);
						PED::_0xFD6943B6DF77E449(Global_35, false);
					}
				}
				if (!SCRIPTS::HAS_SCRIPT_LOADED("satchel"))
				{
					SCRIPTS::REQUEST_SCRIPT("satchel");
				}
				break;
			case 5:
				aggregate.shop_bait.func_68(&Var0, iVar2593);
				if (!bVar2588)
				{
					if (!aggregate.annesburg.func_142(Global_35, (Global_1051387->f_69[Var0.f_3 /*76*/])->f_26, 1, 0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar2593, 297, false);
						PED::SET_PED_CONFIG_FLAG(iVar2593, 301, true);
					}
					else
					{
						PED::SET_PED_CONFIG_FLAG(iVar2593, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar2593, 301, false);
					}
					if (!aggregate.camera_item.func_66())
					{
						aggregate.aberdeenpigfarm.func_181(1);
					}
				}
				if (aggregate.shop_bait.func_82(Var0.f_3, Var0.f_4))
				{
					aggregate.camera_item.func_75(0);
				}
				if (aggregate.shop_bait.func_84(Var0.f_4))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
				if (!aggregate.long_update.func_259(Var0.f_4))
				{
					aggregate.fme_animal_tagging.func_735();
				}
				if (Var0.f_3 == 9)
				{
					PED::SET_PED_RESET_FLAG(Global_35, 265, true);
				}
				if (!bVar2588)
				{
					PED::_0xAE6004120C18DF97(Global_35, 0, false);
					PED::SET_PED_CONFIG_FLAG(Global_35, 310, false);
					if (Global_1051387->f_3211 && aggregate.aberdeenpigfarm.func_149(Var0.f_3, 1024))
					{
						aggregate.aberdeenpigfarm.func_150(Var0.f_3, 1024);
						aggregate.shop_bait.func_88(1);
					}
				}
				if (bVar2588)
				{
					bVar2589 = aggregate.shop_bait.func_12(Var0.f_3);
				}
				else
				{
					bVar2589 = aggregate.shop_bait.func_13(Var0.f_3);
				}
				aggregate.shop_bait.func_89(&Var0);
				aggregate.shop_bait.func_90(&Var0, bVar2589);
				if (!aggregate.fme_escaped_convicts.func_920(Global_35, Var0.f_1997, 0, 1) || bVar2595)
				{
					SCRIPTS::_0x50B72A754EE64A71(-219582252);
					aggregate.shop_bait.func_15(&Var0, 8);
				}
				break;
			case 7:
				if (aggregate.shop_bait.func_92() && !aggregate.net_main_offline.func_1224())
				{
					aggregate.fm_mission_controller.func_1225();
				}
				if (((((Var0.f_3 != 10 && Var0.f_3 != 29) && Var0.f_3 != 35) && Var0.f_3 != 38) && Var0.f_2 != 11) && Var0.f_2 != 10)
				{
					aggregate.shop_bait.func_95(&Var0, 1);
				}
				if (!Var0.f_2531)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
				}
				Global_1915170->f_19742 = Var0.f_3;
				if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
				{
					PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
				}
				if (aggregate.fm_mission_controller.func_2361() && aggregate.shop_bait.func_97() > 0f)
				{
					Var0.f_2528 = aggregate.shop_bait.func_97();
					aggregate.fm_deathmatch_controller.func_512(1);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				if (ENTITY::DOES_ENTITY_EXIST(Global_35))
				{
					aggregate.shop_bait.func_99(1);
					aggregate.shop_bait.func_100(1);
				}
				aggregate.camera_item.func_75(0);
				if (aggregate.shop_bait.func_101(&Var0))
				{
					aggregate.aberdeenpigfarm.func_181(0);
					Global_1915170->f_20136 = 0;
					aggregate.shop_bait.func_95(&Var0, 0);
					if (aggregate.net_impromptu_race_online.func_38(4))
					{
						aggregate.fishing_core.func_104(0);
					}
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Var0.f_1997, true, 0) || bVar2595)
					{
						aggregate.shop_bait.func_105(Var0.f_4, 1);
						aggregate.shop_bait.func_105(Var0.f_4, 2);
						aggregate.shop_bait.func_15(&Var0, 8);
					}
					else
					{
						aggregate.shop_bait.func_105(Var0.f_4, 2);
						aggregate.shop_bait.func_15(&Var0, 5);
					}
					aggregate.shop_bait.func_100(0);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					if (aggregate.long_update.func_259(Var0.f_4))
					{
						TELEMETRY::_0xF78E669FDC202E73();
						if (!aggregate.shop_bait.func_78(Var0.f_3))
						{
							PED::_0xFD6943B6DF77E449(Global_35, true);
						}
					}
					if (Var0.f_2528 > 0f)
					{
						aggregate.coffee_drinking.func_13(Var0.f_2528, 0);
						Var0.f_2528 = 0f;
					}
					if (aggregate.mp_intro.func_1426(&Var0) && aggregate.mp_intro.func_1426(&Var0))
					{
						aggregate.mp_intro.func_599(&Var0);
					}
				}
				else
				{
					Global_1915170->f_20136 = 1;
				}
				break;
			case 8:
				aggregate.shop_bait.func_110(&Var0);
				aggregate.shop_bait.func_15(&Var0, 3);
				break;
			case 9:
				Jump @4972; //curOff = 4958
				BUILTIN::WAIT(0);
			}
			aggregate.shop_bait.func_7(&Var0);
			SCRIPTS::TERMINATE_THIS_THREAD();
		}

void func_18(var uParam0)
{
	if (aggregate.net_main_offline.func_3644(1) != 3)
	{
		aggregate.shop_bait.func_15(uParam0, 9);
	}
}

int func_28(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	bVar7 = false;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		bVar7 = true;
	}
	if (bVar7)
	{
		iVar6 = aggregate.shop_bait.func_47(uParam0->f_3);
	}
	else
	{
		iVar6 = (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_6;
	}
	if (!TASK::_0x841475AC96E794D1(iVar6))
	{
		return 0;
	}
	sVar8 = "p_cs_catalogue01x_PH_R_HAND";
	if (!bVar7)
	{
		sVar8 = "mp001_s_mp_catalogue01x_noanim_PH_R_HAND";
	}
	iVar9 = TASK::_0x295514F198EFD0CA(iVar6, sVar8);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		if (bParam1)
		{
			if (bVar7)
			{
				iVar10 = TASK::_0xF533D68FF970D190((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_10, -1063116709, 5.5f, 0, 0);
			}
			else
			{
				iVar10 = (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_6;
			}
			if (!TASK::_0x841475AC96E794D1(iVar10))
			{
			}
			else
			{
				iVar6 = iVar10;
				iVar9 = TASK::_0x295514F198EFD0CA(iVar6, sVar8);
			}
		}
		else
		{
			return 0;
		}
	}
	if (bVar7)
	{
		iVar11 = aggregate.aberdeenpigfarm.func_174((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21);
	}
	else
	{
		iVar11 = (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_20;
	}
	vVar0 = { TASK::_0xA8452DD321607029(iVar6, 1) };
	if (uParam0->f_4 == 85 || uParam0->f_4 == 103)
	{
		vVar0 = { vVar0 + Vector(0.004f, 0f, 0f) };
	}
	else if (uParam0->f_4 == 0)
	{
		vVar0 = { vVar0 + Vector(0.002f, 0f, 0f) };
	}
	vVar3.x = 0f;
	vVar3.f_1 = 0f;
	vVar3.f_2 = TASK::_0xB93EA7184BAA85C3(iVar6, 1);
	if (!func_317(&(uParam0->f_167), uParam0->f_4, uParam0->f_3, vVar0, vVar3, iVar9, iVar11, iVar6))
	{
		return 0;
	}
	return 1;
}

bool func_37(var uParam0)
{
	HUD::_0xF66090013DE648D5("COOKAUD");
	if (!HUD::_0xD0976CC34002DB57("COOKAUD"))
	{
		return false;
	}
	HUD::_0xF66090013DE648D5("SHOP");
	if (!HUD::_0xD0976CC34002DB57("SHOP"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("mp_moonshiner"))
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT("mp_moonshiner", false);
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("moonshiner_requests"))
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT("moonshiner_requests", false);
	}
	return true;
}

void func_41(var uParam0)
{
	aggregate.shop_bait.func_749(uParam0, 0, 61309, 61528, 61760, 61837);
	aggregate.mp_intro.func_1329(uParam0, 61977);
	aggregate.mp_intro.func_1329(uParam0, 62585);
	aggregate.mp_intro.func_1329(uParam0, 62886);
	aggregate.mp_intro.func_1329(uParam0, 63180);
	aggregate.mp_intro.func_1329(uParam0, 63308);
	aggregate.mp_intro.func_1329(uParam0, 63341);
	aggregate.mp_intro.func_1329(uParam0, 63682);
	aggregate.shop_bait.func_334(uParam0, 0, 64227);
}

struct<2> func_61(int iParam0)
{
	bool bVar0;

	bVar0 = aggregate.annesburg.func_204(iParam0);
	return aggregate.aberdeenpigfarm.func_107(-277276100, bVar0);
}

char* func_115(var uParam0)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 38)
	{
		aggregate.saloon_dining.func_659();
		return aggregate.blackwater.func_268(*(Global_1957543->f_319[38 /*8*/]));
	}
	if (*uParam0 == 15)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[15 /*8*/]))
		{
			aggregate.saloon_dining.func_661(15, uParam0->f_4);
		}
		return aggregate.blackwater.func_268(*(Global_1957543->f_319[15 /*8*/]));
	}
	if (*uParam0 == 35)
	{
		switch (uParam0->f_1)
		{
			case 109:
			case 113:
			case 114:
				return "JONES";
			default:
				break;
		}
	}
	iVar0 = aggregate.annesburg.func_122();
	switch (iVar0)
	{
		case 81:
			switch (uParam0->f_1)
			{
				case 84:
					return "0478_U_M_M_ValGenStoreOwner_01";
				case 85:
					return "0479_U_M_M_ValGunsmith_01";
				case 83:
					return "0477_U_M_M_ValDoctor_01";
				case 90:
					return "0480_U_M_M_ValHotelOwner_01";
				case 87:
				case 88:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 86:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 78:
					return "0710_U_M_M_ValBarber_01";
				case 79:
					return "0475_U_M_M_ValBartender_01";
				case 91:
					return "0686_U_M_O_ValBartender_01";
				case 82:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(81);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 83:
			switch (uParam0->f_1)
			{
				case 0:
					return "0036_U_M_M_AsbGunsmith_01";
				case 1:
				case 2:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 98:
			switch (uParam0->f_1)
			{
				case 93:
					return "0509_U_M_O_VhTExoticShopkeeper_01";
				case 97:
				case 98:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 94:
					return "1038_U_F_M_VhTBartender_01";
				case 96:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 40:
			switch (uParam0->f_1)
			{
				case 6:
					return "0083_U_M_O_BlWGeneralStoreOwner_01";
				case 19:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 13:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 8:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 14:
				case 15:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 10:
					return "0080_U_M_O_BlWBartender_01";
				case 12:
					return "1099_U_M_O_BLWPhotographer_01";
				case 9:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(40);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 26:
			switch (uParam0->f_1)
			{
				case 69:
					return "0678_U_M_M_StrGenStoreOwner_01";
				case 74:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 70:
					return "1039_U_M_M_StrWelcomeCenter_01";
				case 71:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(26);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1178
					switch (uParam0->f_1)
					{
						case 45:
							return "0315_U_M_M_NbxDoctor_01";
						case 48:
							return "0317_U_M_M_NbxGeneralStoreOwner_01";
						case 49:
							return "0319_U_M_M_NbxGunsmith_01";
						case 53:
							return "0820_S_M_M_Tailor_01_WHITE_01";
						case 46:
							return "0679_U_M_M_NBXShadyDealer_01";
						case 43:
							return "0821_S_M_M_Barber_01_WHITE_01";
						case 50:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
							{
								aggregate.benedictpoint.func_126();
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
						case 51:
						case 52:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						case 54:
							return "0311_U_M_M_NbxBartender_01";
						case 56:
							return "0312_U_M_M_NbxBartender_02";
						case 44:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
							{
								aggregate.benedictpoint.func_124(5);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
						case 60:
							return "1100_U_M_M_SDPhotographer_01";
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1467
					switch (uParam0->f_1)
					{
						case 33:
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
							{
								iVar1 = aggregate.net_fetch.func_4672(uParam0->f_4, 0);
								if (aggregate.aberdeenpigfarm.func_85(iVar1) && aggregate.barcustomer_interaction.func_41(iVar1) == joaat("cs_mrpearson"))
								{
									return "PEARSON_SHOPKEEPER";
								}
							}
							if (aggregate.aberdeenpigfarm.func_123())
							{
								return "PEARSON_SHOPKEEPER";
							}
							else
							{
								return "0400_U_M_M_RhdGenStoreOwner_01";
							}
							break;
						case 34:
							return "0401_U_M_M_RhdGunsmith_01";
						case 35:
						case 39:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						case 31:
							return "0694_U_M_M_RhdGenStoreOwner_02";
						case 36:
							return "0397_U_M_M_RhdBartender_01";
						case 30:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
							{
								aggregate.benedictpoint.func_124(111);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
						default:
							return "SHOPKEEPER_TEST_PED";
					}
					Jump @2453; //curOff = 1719
					switch (uParam0->f_1)
					{
						case 99:
							return "1036_U_M_M_WalGeneralStoreOwner_01";
						case 100:
						case 101:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1807
					switch (uParam0->f_1)
					{
						case 41:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
							{
								aggregate.benedictpoint.func_126();
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1875
					switch (uParam0->f_1)
					{
						case 22:
							return "EMR_Son1";
						case 24:
						case 25:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1963
					switch (uParam0->f_1)
					{
						case 102:
							return "1084_U_F_M_TumGeneralStoreOwner_01";
						case 103:
							return "1085_U_M_M_TumGunsmith_01";
						case 105:
							return "1087_U_M_M_TumBartender_01";
						case 104:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
							{
								aggregate.benedictpoint.func_124(121);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
						case 107:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
							{
								aggregate.benedictpoint.func_126();
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 2120
					switch (uParam0->f_1)
					{
						case 108:
							return "1076_U_M_M_ArmGeneralStoreOwner_01";
						case 110:
							return "1077_U_M_O_ArmBartender_01";
						case 111:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 2215
					switch (uParam0->f_1)
					{
						case 26:
							return "0216_U_F_M_LagMother_01";
						default:
							break;
					}
					return "0216_U_F_M_LagMother_01";
					Jump @2453; //curOff = 2248
					switch (uParam0->f_1)
					{
						case 117:
						case 118:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 2323
					switch (uParam0->f_1)
					{
						case 27:
						case 28:
							if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
							{
								aggregate.benedictpoint.func_123(iVar0);
							}
							return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
						default:
							break;
					}
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 2398
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
					{
						aggregate.saloon_dining.func_667();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[11 /*8*/]));
					Jump @2453; //curOff = 2443
					return "SHOPKEEPER_TEST_PED";
					return "SHOPKEEPER_TEST_PED";
				}

void func_122(var uParam0)
{
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("swatches_camp_mp");
	AUDIO::_0x9428447DED71FC7E("shop_scenes");
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20))
	{
		aggregate.gfh_campworks.func_95(&(Local_23.f_1), Local_23.f_100.f_1211.f_6.f_20);
		aggregate.gfh_campworks.func_95(&(Local_23.f_1), Global_35);
	}
	Local_23.f_1772 = 0;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	}
	aggregate.net_fetch.func_5132(1, 0);
	ENTITY::_0x0939E773925C4719();
	if ((!Local_23.f_1775 && !Local_23.f_100.f_1211.f_6.f_12) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_HEADING(Global_35, Local_23.f_1777);
		aggregate.fme_escaped_convicts.func_913(0f, -4f);
		Local_23.f_1775 = 1;
	}
	func_467(&(Local_23.f_100.f_1211));
	if (Local_23.f_100.f_1211.f_6.f_12)
	{
		Local_23.f_100.f_1211.f_6.f_12 = 0;
	}
	Local_23.f_1775 = 0;
	Local_23.f_100.f_1211.f_6.f_11 = 0;
	func_468();
	func_469(1);
	if (aggregate.net_fetch.func_5397(512))
	{
		aggregate.net_assassination.func_520(512);
	}
	func_472(Local_23.f_100.f_1211.f_6.f_20);
	aggregate.mp_intro.func_1795(uParam0, 0);
}

void func_136(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_122))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_122, true);
	}
	func_336(uParam0);
}

bool func_317(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate.annesburg.func_121(vParam3))
	{
		return false;
	}
	if (aggregate.annesburg.func_121(vParam6))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iParam11))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam9))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1748) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1748, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1748, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1748, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1749) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1749, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1749, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1749, 0);
	}
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate.shop_bait.func_724(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate.mp_intro.func_1946(aggregate.shop_bait.func_725(iParam2)))
	{
		if (!func_750(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_751(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 139742);
	aggregate.camera_item.func_77(&(uParam0->f_4), 139779);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 139807);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 140342);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate.interactive_campfire.func_44(uParam0, 1);
	return true;
}

bool func_333(var uParam0)
{
	struct<7> Var0;
	var uVar7;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, 0);
	func_769();
	if (!aggregate.net_fetch.func_5397(4))
	{
		aggregate.net_fetch.func_5132(1, 1);
		return false;
	}
	if (!func_770(&(Local_23.f_100.f_1211)))
	{
		return false;
	}
	if (!func_771(&(Local_23.f_100.f_1211)))
	{
		return false;
	}
	if (!aggregate.net_fetch.func_5397(512))
	{
		aggregate.net_assassination.func_520(512);
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("swatches_camp_mp", false);
	aggregate.fme_escaped_convicts.func_515(1);
	Local_23.f_1766 = aggregate.moonshine_drink_item.func_1() == PLAYER::PLAYER_ID();
	Local_23.f_1777 = aggregate.fme_supply_train.func_1214(Local_23.f_100.f_1211.f_146, Global_36);
	if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 256))
	{
		func_777();
	}
	Var0 = { aggregate.aberdeenpigfarm.func_131(aggregate.moonshine_drink_item.func_1()) };
	aggregate.mp_intro.func_2500(&(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52), &uVar7, &Var0);
	return func_780(uParam0, -395929392, joaat("use"), 0);
}

bool func_334(var uParam0)
{
	bool bVar0;
	bool bVar1;

	func_781(1);
	func_769();
	bVar0 = true;
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		bVar1 = true;
		if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("swatches_camp_mp"))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			uParam0->f_6++;
			if (uParam0->f_6 > 500)
			{
				bVar0 = false;
				return true;
			}
		}
		else
		{
			aggregate.fme_escaped_convicts.func_515(4);
		}
	}
	if (!aggregate.fme_animal_tagging.func_134(8) && bVar0)
	{
		aggregate.fme_escaped_convicts.func_515(8);
	}
	if (aggregate.fme_animal_tagging.func_134(8))
	{
		if (!aggregate.fme_animal_tagging.func_134(2048))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			func_469(0);
		}
	}
	if (!aggregate.fme_animal_tagging.func_134(4) || !aggregate.fme_animal_tagging.func_134(8))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20, true);
	}
	return aggregate.mp_intro.func_1341(uParam0);
}

bool func_335(var uParam0)
{
	func_769();
	if (!aggregate.fme_animal_tagging.func_134(4096) && func_784())
	{
		aggregate.fme_escaped_convicts.func_515(4096);
	}
	if (!uParam0->f_2094.f_47)
	{
		return false;
	}
	func_785(&(Local_23.f_100.f_1211));
	func_781(0);
	return aggregate.net_camp.func_812(uParam0);
}

void func_336(var uParam0)
{
	if (!Local_23.f_100.f_1211.f_6.f_12)
	{
		Global_1274951->f_44 = -1;
	}
	aggregate.annesburg.func_166(uParam0->f_1999);
	aggregate.mp_intro.func_599(uParam0);
	aggregate.fme_escaped_convicts.func_888(4096);
}

int func_338(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!Local_23.f_100.f_1211.f_6.f_10)
	{
		Local_23.f_100.f_1211.f_6.f_10 = 1;
	}
	aggregate.fme_animal_tagging.func_389(uParam1->f_1);
	switch (uParam1->f_9)
	{
		case -822124724:
		case 827714260:
		case 1269193435:
			aggregate.net_fetch.func_4035(262144);
			if (!aggregate.shop_bait.func_931(uParam1->f_9, aggregate.mp_intro.func_2594(uParam1->f_9), 1))
			{
				func_792(7);
			}
			break;
		default:
			func_793(262144);
			break;
	}
	switch (*uParam1)
	{
		case -1499658354:
			if (aggregate.mp_intro.func_2878(uParam0))
			{
				aggregate.mp_intro.func_2840(uParam0);
			}
			if (uParam1->f_1 == -644511797)
			{
				if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 4))
				{
					iVar0 = func_796();
					aggregate.mp_intro.func_1782(uParam0, MISC::_CREATE_VAR_STRING(2, "MSSR_MENU_PRDCTN_TIME_LEFT", iVar0));
					func_798(uParam0, "SHOP_MS_MASH_ALT_DESC");
				}
				else if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 128))
				{
					aggregate.mp_intro.func_2452(uParam0, -634036615);
					func_798(uParam0, "SHOP_MS_MASH_COMP_DESC");
				}
				else
				{
					aggregate.mp_intro.func_2452(uParam0, -417587985);
					func_798(uParam0, "SHOP_MS_MASH_DESC");
				}
			}
			else if (uParam1->f_1 == -1191946537)
			{
				if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 4))
				{
					if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 32) || aggregate.fm_mission_controller.func_6295(&Global_1273882, 64))
					{
						aggregate.mp_intro.func_2452(uParam0, -1337489558);
					}
					else
					{
						aggregate.mp_intro.func_2452(uParam0, -382933358);
					}
					func_798(uParam0, "SHOP_MS_FLAVOR_DESC");
				}
				else
				{
					aggregate.mp_intro.func_2452(uParam0, 1367521593);
					func_798(uParam0, "SHOP_MS_FLAVOR_DESC");
				}
			}
			else if (uParam1->f_1 == 603940701)
			{
				iVar1 = func_801(aggregate.flow_controller.func_231(-408236271), 81);
				if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 128) && (iVar1 == 5 || iVar1 == 19))
				{
					func_792(20);
				}
				else if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 128) && iVar1 == 8)
				{
					func_792(21);
				}
				func_802(uParam0);
			}
			break;
		case -1928601151:
			if (!aggregate.mp_intro.func_2878(uParam0))
			{
				aggregate.mp_intro.func_2840(uParam0);
			}
			break;
		case -1086794738:
			aggregate.mp_intro.func_1785(uParam0, 1);
			break;
		case -1702260384:
			aggregate.mp_intro.func_1894(uParam0, 1592437185, 0, func_804(uParam0, uParam1), 0, 0, -1, 0, -1);
			aggregate.mp_intro.func_2885(uParam0, aggregate.mp_intro.func_2035());
			break;
	}
	return 1;
}

int func_340(var uParam0, var uParam1)
{
	if (uParam1->f_10 != 1 && uParam1->f_10 != 2)
	{
		return 1;
	}
	if (!Local_23.f_100.f_1211.f_6.f_10)
	{
		Local_23.f_100.f_1211.f_6.f_10 = 1;
	}
	switch (uParam1->f_7)
	{
		case 827714260:
			aggregate.net_fetch.func_4035(1024);
			break;
		case -822124724:
			aggregate.net_fetch.func_4035(2048);
			break;
		case 1269193435:
			aggregate.net_fetch.func_4035(4096);
			break;
		case -1498871949:
		case -1283370018:
		case -818346432:
		case -624685730:
		case -610395813:
		case 348064119:
		case 447784640:
		case 1739830455:
		case 1958345007:
		case 2103594888:
			if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 16))
			{
				func_808(uParam0, uParam1);
			}
			break;
		default:
			break;
	}
	if (Local_23.f_1736 == 2 && *uParam1 == -1702260384)
	{
		HUD::_0x8BC7C1F929D07BF3(557238883);
		if (!aggregate.barcustomer_interaction.func_42(&(Local_23.f_1737)))
		{
			aggregate.barcustomer_interaction.func_25(&(Local_23.f_1737), 0);
		}
		Local_23.f_1767 = uParam1->f_2;
		Local_23.f_1736 = 3;
	}
	return 1;
}

void func_342(var uParam0, int iParam1, var uParam2)
{
	func_811();
	if (iParam1 == 603940701 || aggregate.fme_supply_train.func_900() == 603940701)
	{
		func_802(uParam0);
	}
	else if (iParam1 == -1191946537)
	{
		aggregate.mp_intro.func_1782(uParam0, func_813());
	}
	switch (Local_23.f_1736)
	{
		case 0:
			if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 256))
			{
				aggregate.net_camp.func_1328(uParam0, 1136954474, 1, -1, 0, 0, 0, 0);
				Local_23.f_1736 = 1;
			}
			break;
		case 1:
			if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 128))
			{
				aggregate.net_camp.func_1328(uParam0, 1136954474, 1, -1, 0, 0, 0, 0);
				Local_23.f_1736 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 128))
			{
				func_815(uParam0);
				aggregate.fme_animal_tagging.func_290(&(Local_23.f_1737));
				Local_23.f_100.f_1211.f_6.f_12 = 1;
				Local_23.f_1736 = 4;
			}
			break;
		case 4:
			if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 256))
			{
				Local_23.f_1736 = 0;
			}
			break;
	}
}

void func_344(var uParam0, struct<9> Param1, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	if (aggregate.bandana.func_10(Param1.f_8) == -1940066807)
	{
		if (iParam15 == 2113164098 || iParam15 == 541670136)
		{
			func_818();
		}
		func_819(uParam0->f_2047.f_1, 0);
	}
	else if (iParam15 == 2113164098 || iParam15 == 541670136)
	{
		if (!func_820(&Param1))
		{
		}
	}
}

int func_348(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (iParam1 == -1191946537)
	{
		if (!func_821(bParam2))
		{
			return 0;
		}
		if (!func_822(bParam2))
		{
			return 0;
		}
	}
	if (iParam1 == 603940701)
	{
		if (iParam3 == -1702260384)
		{
			bVar0 = bParam2;
			if (bVar0 != 0)
			{
				if (!aggregate.binoculars.func_32(bVar0, 1))
				{
					return 0;
				}
			}
		}
	}
	if (iParam1 == -644511797)
	{
		switch (bParam2)
		{
			case 827714260:
				if (aggregate.net_main_offline.func_3101(aggregate.moonshine_drink_item.func_1(), 0, 1) < 1)
				{
					return 0;
				}
				break;
			case -822124724:
				if (aggregate.net_main_offline.func_3101(aggregate.moonshine_drink_item.func_1(), 0, 1) < 2)
				{
					return 0;
				}
				break;
			case 1269193435:
				if (aggregate.net_main_offline.func_3101(aggregate.moonshine_drink_item.func_1(), 0, 1) < 3)
				{
					return 0;
				}
				break;
		}
	}
	if (iParam1 == 1136954474)
	{
		if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 256))
		{
			if (bParam2 == -644511797)
			{
				return 0;
			}
		}
		if (func_824())
		{
			if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 16))
			{
				if (bParam2 == -1191946537)
				{
					return 0;
				}
			}
		}
		if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 128) || func_801(aggregate.flow_controller.func_231(-408236271), 81) != 0)
		{
			if (bParam2 == 603940701)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_350(var uParam0, var uParam1, int iParam2, var uParam3)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	uParam3->f_4 = -2084715009;
	if (iParam2 == -644511797)
	{
		switch (aggregate.fm_mission_controller.func_5430())
		{
			case 827714260:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_WEAK_GROUP_LABEL");
				uParam3->f_3 = 1701351406;
				break;
			case -822124724:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_MEDIUM_GROUP_LABEL");
				uParam3->f_3 = 1306382942;
				break;
			case 1269193435:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_STRONG_GROUP_LABEL");
				uParam3->f_3 = 274711637;
				break;
			default:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_EMPTY_GROUP_LABEL");
				uParam3->f_3 = -88898306;
				break;
		}
		if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 4))
		{
			*uParam3 = (BUILTIN::TO_FLOAT(((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_15) / BUILTIN::TO_FLOAT(INVENTORY::_0xE80E50BEE276A54A(827714260, 1039159916)));
			uParam3->f_2 = 1;
		}
		else
		{
			*uParam3 = 0f;
			uParam3->f_2 = 0;
		}
		func_826(uParam0, uParam3->f_3, uParam3->f_4);
	}
	else if (iParam2 == -1191946537)
	{
		uParam3->f_3 = -1631788627;
		bVar0 = aggregate.gfh_campworks.func_416();
		if (bVar0 == 0)
		{
			uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MSHINE_FLAVOR_UNFLAVORED");
		}
		else
		{
			uParam3->f_1 = MISC::_CREATE_VAR_STRING(0, aggregate.fm_mission_controller.func_1773(bVar0));
			vVar1 = { aggregate.mp_intro.func_2598(bVar0) };
			uParam3->f_4 = vVar1.y;
			uParam3->f_3 = vVar1.x;
		}
		if (aggregate.barcustomer_interaction.func_42(&(Global_1274951->f_5)) && Global_1274951->f_8 > 0f)
		{
			*uParam3 = (aggregate.fme_condor_egg.func_714(&(Global_1274951->f_5)) / Global_1274951->f_8);
			uParam3->f_2 = 1;
		}
		else
		{
			*uParam3 = 0f;
			uParam3->f_2 = 0;
		}
		func_831(uParam0, uParam3->f_3, uParam3->f_4);
	}
	else if (iParam2 == 603940701)
	{
		iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			iVar4 = PLAYER::PLAYER_ID();
		}
		iVar5 = func_832(iVar4);
		iVar6 = 20;
		uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MSHINE_BOTTLES_FILLED", iVar5, iVar6);
		uParam3->f_3 = 1349568299;
		*uParam3 = (BUILTIN::TO_FLOAT(iVar5) / BUILTIN::TO_FLOAT(iVar6));
		uParam3->f_2 = 0;
		func_833(uParam0, uParam3->f_3, uParam3->f_4);
	}
}

Vector3 func_361(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
			return -5228.75f, -3468.28f, -21.57f;
			return -784.49f, -1321.95f, 42.88f;
			return -753.4219f, -1284.24f, 43.20049f;
			return -814.4116f, -1367.243f, 43.7509f;
			return -868.3356f, -1366.207f, 44.75311f;
			return -875.03f, -1327.09f, 42.97f;
			return -875.02f, -1326.71f, 42.97f;
			return -762.0716f, -1293.549f, 42.8355f;
			return -813.6f, -1373.8f, 44.2f;
			return 1417.288f, 273.5687f, 88.4881f;
			return 1521.91f, 441.15f, 89.68f;
			return 1523.63f, 442.65f, 89.68f;
			return 2161.5f, -618.5f, 43f;
			return -1092.88f, -575.69f, 81.41f;
			return -1094.35f, -577.48f, 81.41f;
			return 1294.084f, -1303.102f, 76.0418f;
			return 1297.423f, -1278.412f, 75.65752f;
			return 1319.43f, -1142.08f, 81.41f;
			return 1329.755f, -1294.218f, 76.0092f;
			return 1323.734f, -1321.775f, 77.8924f;
			return 1226.71f, -1295.08f, 75.9f;
			return 1230.34f, -1298.578f, 75.9027f;
			return 1209.053f, -193.1814f, 101.9785f;
			return 2644.188f, -1292.507f, 51.2496f;
			return 2657.466f, -1180.96f, 53.2785f;
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2859.51f, -1202.16f, 48.59f;
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.98f, 52.68f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return -1402f, -2317f, 43.6f;
			return 0f, 0f, 0f;
		}

void func_420(var uParam0)
{
	HUD::_0xC9CAEAEEC1256E54(1163138879);
}

bool func_432(var uParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_23.f_100.f_1211.f_6) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	}
	iVar0 = 0;
	if (aggregate.annesburg.func_180(255))
	{
		if (!Local_23.f_100.f_1211.f_6.f_12)
		{
			if (func_876(&(Local_23.f_100.f_1211)) || CAM::IS_SCREEN_FADED_OUT())
			{
				Local_23.f_100.f_1211.f_6.f_11 = 1;
				iVar0 = 1;
			}
		}
		else
		{
			func_877();
			if (Local_23.f_100.f_1211.f_6.f_11)
			{
				iVar0 = 1;
				aggregate.fme_animal_tagging.func_290(&(Local_23.f_1737));
			}
		}
	}
	else
	{
		func_781(0);
		if (!Local_23.f_100.f_1211.f_6.f_12)
		{
			if (func_876(&(Local_23.f_100.f_1211)))
			{
				Local_23.f_100.f_1211.f_6.f_11 = 1;
				Global_1274951->f_44 = -1;
				iVar0 = 1;
			}
		}
		else
		{
			func_877();
			if (Local_23.f_100.f_1211.f_6.f_11)
			{
				iVar0 = 1;
				aggregate.fme_animal_tagging.func_290(&(Local_23.f_1737));
			}
		}
	}
	if (iVar0 || Local_23.f_100.f_1211.f_6.f_11)
	{
		if (func_467(&(Local_23.f_100.f_1211)))
		{
			if (func_472(Local_23.f_100.f_1211.f_6.f_20))
			{
				return true;
			}
		}
	}
	return false;
}

int func_453(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!aggregate.aberdeenpigfarm.func_84(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return aggregate.net_fetch.func_5405(iParam0, iVar0, iVar1, bParam2);
}

bool func_467(var uParam0)
{
	if (!func_895(&(uParam0->f_6)))
	{
		return false;
	}
	aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_26), 0);
	aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 0);
	aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_24), 0);
	return true;
}

void func_468()
{
	Local_23.f_1772 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		aggregate.fme_escaped_convicts.func_888(2048);
	}
	else
	{
		aggregate.fme_escaped_convicts.func_515(2048);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, bParam0);
	}
}

bool func_472(int iParam0)
{
	aggregate.fishing_core.func_116(&iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	return false;
}

bool func_542(var uParam0, var uParam1, bool bParam2)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	char* sVar14;
	char* sVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	char cVar24[32];
	char cVar28[32];
	char cVar32[32];
	char cVar36[32];
	char cVar40[32];
	char cVar44[32];
	int iVar48;
	char* sVar49;
	int iVar50;
	char cVar51[64];
	char cVar59[64];
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;

	if (!uParam1->f_1)
	{
		return false;
	}
	switch (*uParam1)
	{
		case 14:
		case 15:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureDictionary", aggregate.shop_bait.func_854(uParam0));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureName", aggregate.shop_bait.func_882(uParam0));
			break;
		case 1:
			if (uParam1->f_3 == uParam0->f_279)
			{
				sVar9 = "DEFAULT_NOTE_PAGE";
				sVar8 = "DEFAULT_NOTE_PAGE";
			}
			else
			{
				sVar9 = aggregate.shop_bait.func_860(uParam0, uParam1);
				sVar8 = aggregate.shop_bait.func_860(uParam0, uParam1);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureDictionary", sVar9);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureName", sVar8);
			break;
		case 0:
			if (aggregate.shop_bait.func_503(uParam1))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_6, "CATALOG_INDEX_DOUBLE");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_5, "CATALOG_INDEX_DOUBLE");
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_6, "DEFAULT_INDEX");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_5, "DEFAULT_INDEX");
			}
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAT_HEADER"), 64);
			sVar14 = MISC::_CREATE_VAR_STRING(2, "CAT_TABLE_CONTENTS");
			if (uParam1->f_3 >= 2)
			{
				StringConCat(&cVar0, " - ", 64);
				StringConCat(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_134), 64);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_3, &cVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_4, sVar14);
			bVar11 = false;
			while (bVar11 < 16)
			{
				iVar17 = aggregate.shop_bait.func_884(uParam1->f_154);
				if (bVar11 >= uParam1->f_154)
				{
					sVar15 = "";
				}
				else
				{
					sVar15 = HUD::_GET_LABEL_TEXT_BY_HASH(&(uParam1->f_155[bVar11]));
				}
				if (bParam2)
				{
					bVar13 = uParam0->f_281.f_1 == bVar11;
					if (bVar13)
					{
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_4.f_45[bVar11]), bVar13);
				}
				bVar16 = (bVar11 < (uParam1->f_154 - 1) && (bVar11 % iVar17) < (iVar17 - 1));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_4.f_79[bVar11]), bVar16);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam1->f_4.f_28[bVar11]), sVar15);
				bVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			if (aggregate.shop_bait.func_885(*uParam1) || !(aggregate.shop_bait.func_886(&(uParam1->f_136[0 /*4*/])) && !aggregate.shop_bait.func_887(&(uParam1->f_136[0 /*4*/]))))
			{
				StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAT_HEADER"), 64);
				StringConCat(&cVar0, " - ", 64);
				StringConCat(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_134), 64);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_3, &cVar0);
			}
			iVar12 = uParam1->f_153;
			if (iVar12 <= 0)
			{
				if (aggregate.shop_bait.func_885(*uParam1))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", "");
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", "");
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", "");
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Hovered", false);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", "");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", "");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", "");
				if (aggregate.shop_bait.func_886(&(uParam1->f_136[bVar11 /*4*/])))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
				}
				StringConCat(&cVar32, MISC::_CREATE_VAR_STRING(2, "NUMBER", 0), 32);
				StringConCat(&cVar24, MISC::_CREATE_VAR_STRING(2, "NUMBER", 0), 32);
				StringConCat(&cVar28, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", 0), 32);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", &cVar28);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", &cVar32);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", &cVar24);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", false);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", "");
				iVar50 = 0;
				while (iVar50 < 6)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "statLabel", false);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "invertedPotentialStat", false);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "invertedCurrentStat", 100);
					iVar50++;
				}
				uParam1->f_2 = 0;
			}
			else
			{
				bVar11 = false;
				while (bVar11 < iVar12)
				{
					bVar10 = &uParam1->f_136[bVar11 /*4*/];
					sVar8 = aggregate.shop_bait.func_888(bVar10, *uParam1);
					sVar9 = aggregate.shop_bait.func_861(bVar10);
					StringCopy(&cVar51, aggregate.fm_mission_controller.func_4327(bVar10), 64);
					if (aggregate.bandana.func_11(bVar10, -306684263))
					{
						StringCopy(&cVar51, aggregate.doc_book.func_271(bVar10), 64);
					}
					MISC::_0x49C44FE78A135A1D(&cVar51);
					if (!aggregate.shop_bait.func_833(bVar10))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Header", "");
						if (aggregate.shop_bait.func_885(*uParam1))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", "");
						}
						else if (aggregate.shop_bait.func_887(bVar10))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", &cVar51);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", "");
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", "");
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Hovered", false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", "");
						if (aggregate.shop_bait.func_886(&(uParam1->f_136[bVar11 /*4*/])))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", "");
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", "");
					}
					else
					{
						StringCopy(&cVar59, aggregate.shop_bait.func_891(bVar10), 64);
						MISC::_0x49C44FE78A135A1D(&cVar59);
						StringCopy(&cVar24, "", 32);
						StringCopy(&cVar32, "", 32);
						StringCopy(&cVar28, "", 32);
						StringCopy(&cVar36, "", 32);
						StringCopy(&cVar40, "", 32);
						StringCopy(&cVar44, "", 32);
						bVar67 = false;
						bVar68 = bVar10;
						bVar69 = -915411861;
						if (aggregate.shop_bait.func_837(bVar10))
						{
							bVar70 = false;
							if (aggregate.mp_intro.func_3211((uParam1->f_136[bVar11 /*4*/])->f_2, (uParam1->f_136[bVar11 /*4*/])->f_3, &bVar70))
							{
								if (aggregate.bandana.func_30(bVar70, 0))
								{
									bVar68 = bVar70;
								}
							}
						}
						if ((!aggregate.long_update.func_602(bVar10) && !aggregate.bandana.func_11(bVar10, 81450561)) && !aggregate.bandana.func_11(bVar10, 1342455455))
						{
							aggregate.mp_intro.func_2440(bVar10, &iVar48, &iVar22, 1);
							if (iVar22 > aggregate.generic_document_inspection.func_420(iVar48))
							{
								StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, "CAT_UNLOCK_RANK", iVar22), 32);
							}
						}
						if (aggregate.shop_bait.func_892(bVar68) && !aggregate.fme_animal_tagging.func_1525(bVar68, -915411861))
						{
							bVar69 = -570078785;
							bVar67 = true;
						}
						bVar71 = aggregate.mp_intro.func_2031(bVar68, 0, 1, -1, 1);
						if (bVar71 == 997808187 || aggregate.fm_mission_controller.func_6230(bVar71))
						{
							bVar18 = false;
							bVar21 = false;
						}
						else if (aggregate.mp_intro.func_2033(bVar71))
						{
							bVar18 = aggregate.shop_bait.func_562(bVar68, bVar71, 0, 0, 1);
							bVar21 = aggregate.shop_bait.func_562(bVar68, bVar69, 0, 0, 0);
						}
						else
						{
							bVar18 = aggregate.shop_bait.func_562(bVar68, bVar69, 0, 0, 1);
							bVar21 = aggregate.shop_bait.func_562(bVar68, bVar69, 0, 0, 0);
						}
						if (bVar21 != bVar18)
						{
							if (bVar67)
							{
								StringCopy(&cVar36, MISC::_CREATE_VAR_STRING(2, "CAT_OLD_PRICE_GOLD", bVar21), 32);
							}
							else
							{
								StringCopy(&cVar36, MISC::_CREATE_VAR_STRING(2, "CAT_OLD_PRICE", bVar21), 32);
							}
						}
						iVar19 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar18) / 100f));
						iVar20 = (bVar18 - iVar19 * 100);
						if (iVar20 < 10)
						{
							StringCopy(&cVar24, "0", 32);
						}
						if (bVar67)
						{
							StringIntConCat(&cVar32, bVar18, 32);
							StringIntConCat(&cVar28, bVar18, 32);
							StringCopy(&cVar24, "", 32);
						}
						else
						{
							StringConCat(&cVar32, MISC::_CREATE_VAR_STRING(2, "NUMBER", iVar19), 32);
							StringConCat(&cVar24, MISC::_CREATE_VAR_STRING(2, "NUMBER", iVar20), 32);
							StringConCat(&cVar28, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", bVar18), 32);
						}
						sVar49 = "";
						if (!aggregate.shop_bait.func_894(bVar10, uParam0->f_221))
						{
							sVar49 = "MISSING FROM INVENTORY";
						}
						else if (aggregate.shop_bait.func_885(*uParam1))
						{
							if (aggregate.aberdeenpigfarm.func_45() == -1)
							{
								if (aggregate.shop_bait.func_895(uParam0, bVar10))
								{
									StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, "SHOP_PRICE"), 32);
								}
								else
								{
									sVar49 = MISC::_CREATE_VAR_STRING(2, "SHOP_PRICE");
								}
							}
							else if (!aggregate.long_update.func_602(bVar10))
							{
								if (UNLOCK::_UNLOCK_IS_UNLOCK_FLAG_SET(bVar10, 64))
								{
									StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, aggregate.shop_bait.func_896(bVar10)), 32);
								}
							}
							else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar40))
							{
								sVar49 = MISC::_CREATE_VAR_STRING(2, aggregate.shop_bait.func_896(bVar10));
							}
						}
						bVar23 = false;
						if (aggregate.mp_freemode_tutorial.func_861(bVar68, 1))
						{
							bVar23 = aggregate.shop_butcher.func_576(bVar68, 1);
						}
						StringIntConCat(&cVar44, bVar23, 32);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", bVar23 > 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", &cVar44);
						if ((bVar23 > 0 && bVar21 != bVar18) && aggregate.shop_bait.func_885(*uParam1))
						{
							StringConCat(&cVar36, " |", 32);
						}
						if (bParam2)
						{
							bVar13 = false;
							if (aggregate.shop_bait.func_1295(uParam0) == uParam1->f_3 && aggregate.mp_intro.func_1426(uParam0) == bVar11)
							{
								bVar13 = true;
							}
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", bVar13);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Header", &cVar59);
						if (aggregate.shop_bait.func_885(*uParam1))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", &cVar51);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", &cVar51);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", aggregate.shop_bait.func_897(bVar10));
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", !bVar67);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", &cVar36);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", &cVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", sVar49);
						if (aggregate.shop_bait.func_886(&(uParam1->f_136[bVar11 /*4*/])))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", &cVar28);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", &cVar32);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", &cVar24);
						if (aggregate.shop_bait.func_898(bVar10))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", "");
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", "");
						}
						aggregate.shop_bait.func_899(uParam1);
					}
					bVar11++;
				}
				aggregate.camera_item.func_77(uParam0, 1);
			}
			break;
		default:
			return false;
	}
	return true;
}

void func_582(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;

	if (!aggregate.shop_bait.func_833(bParam1))
	{
		return;
	}
	if (aggregate.shop_bait.func_835(uParam0, bParam1, &iVar0, 1))
	{
		switch (iVar0)
		{
			case 1:
				aggregate.net_main_offline.func_312("SHOP_H_MAX_ITEM", 10000, 0, 0, 0, 1);
				break;
			case 2:
				aggregate.net_main_offline.func_312("SHOP_H_MAX_ITEM_HANDHELD", 10000, 0, 0, 0, 1);
				break;
			case 4:
				aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(10, "SHOP_H_MAX_WEAPON_HANDHELD", aggregate.aberdeenpigfarm.func_103(aggregate.fm_mission_controller.func_4327(bParam1), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, 1);
				break;
			case 3:
				aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(10, "SHOP_H_MAX_WEAPON", aggregate.aberdeenpigfarm.func_103(aggregate.fm_mission_controller.func_4327(bParam1), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, 1);
				break;
			case 5:
				aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(10, "SHOP_H_MAX_WEAPON", aggregate.aberdeenpigfarm.func_103(aggregate.fm_mission_controller.func_4327(bParam1), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, 1);
				break;
		}
		aggregate.binoculars.func_22("MAXED_OUT", "HUD_SHOP_SOUNDSET", 1);
		return;
	}
	if (aggregate.shop_bait.func_895(uParam0, bParam1) || aggregate.shop_bait.func_932(uParam0, bParam1))
	{
		if (aggregate.shop_bait.func_560(bParam1, &uVar1))
		{
			if (aggregate.mp_intro.func_1405(uParam2))
			{
				if (!aggregate.shop_bait.func_931(bParam1, 0, 1))
				{
					if (!aggregate.mp_intro.func_1858())
					{
						aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD"), 10000, 0, 0, 0, 1);
					}
					aggregate.binoculars.func_22("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
					return;
				}
			}
			else
			{
				aggregate.net_main_offline.func_312("SHOP_H_LOCKED", 10000, 0, 0, 0, 1);
				aggregate.binoculars.func_22("LOCKED", "HUD_SHOP_SOUNDSET", 1);
				return;
			}
		}
		else
		{
			iVar2 = aggregate.fme_animal_tagging.func_1738(bParam1, 1);
			if (UNLOCK::_UNLOCK_IS_UNLOCK_FLAG_SET(bParam1, 64))
			{
				aggregate.net_main_offline.func_312("SHOP_H_LOCKED", 10000, 0, 0, 0, 1);
			}
			else if (iVar2 > NETWORK::_0x32C90CDFAF40514C())
			{
				aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "SHOP_H_LOCKED_RANK", iVar2), 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate.net_main_offline.func_312("SHOP_H_LOCKED", 10000, 0, 0, 0, 1);
			}
			aggregate.binoculars.func_22("LOCKED", "HUD_SHOP_SOUNDSET", 1);
			return;
		}
	}
	if (aggregate.doc_book.func_159(bParam1))
	{
		aggregate.net_main_offline.func_312("SHOP_H_OWNED", 10000, 0, 0, 0, 1);
		aggregate.binoculars.func_22("MAXED_OUT", "HUD_SHOP_SOUNDSET", 1);
	}
	else if (aggregate.bandana.func_58(bParam1) == joaat("clothing") && aggregate.bandana.func_47(2097152))
	{
		aggregate.net_main_offline.func_312("SHOP_H_OUTFIT", 10000, 0, 0, 0, 1);
		aggregate.binoculars.func_22("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
	}
	else if (aggregate.shop_bait.func_937(uParam2, bParam1))
	{
		aggregate.net_main_offline.func_312("SHOP_H_OUTFIT", 10000, 0, 0, 0, 1);
		aggregate.binoculars.func_22("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
	}
	else if ((aggregate.mp_intro.func_1429(bParam1) && !aggregate.shop_bait.func_938(bParam1)) && aggregate.mp_intro.func_2432(0) >= func_1012(0))
	{
		aggregate.net_main_offline.func_312("SHOP_H_NO_SADDLE_SLOTS", 10000, 0, 0, 0, 1);
	}
	else if (aggregate.doc_book.func_291(bParam1) && aggregate.mp_intro.func_2456(uParam2, bParam1))
	{
		aggregate.net_main_offline.func_312("SHOPS_TOOLTIP_EXCEED_PURCHASE_LIMIT", 10000, 0, 0, 0, 1);
	}
	else if (!aggregate.shop_bait.func_931(bParam1, 0, 1))
	{
		bVar3 = aggregate.mp_intro.func_2031(bParam1, bVar3, 1, -1, 1);
		if (aggregate.mp_freemode_tutorial.func_861(bParam1, 1) && !aggregate.role_progression.func_209(bParam1, 1))
		{
			aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"), 10000, 0, 0, 0, 1);
		}
		else if (bVar3 == -570078785)
		{
			if (!aggregate.mp_intro.func_1858())
			{
				aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD"), 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar3 == -915411861)
		{
			aggregate.net_main_offline.func_312("SHOP_H_TOO_POOR", 10000, 0, 0, 0, 1);
		}
		aggregate.binoculars.func_22("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
	}
}

bool func_683(var uParam0)
{
	bool bVar0;

	switch (uParam0->f_2)
	{
		case 0:
		case 1:
			if (aggregate.saloon_dining.func_465())
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
				{
					uParam0->f_45 = 1;
					if (aggregate.long_update.func_361(uParam0) && aggregate.fme_escaped_convicts.func_724())
					{
						uParam0->f_44 = aggregate.saloon_dining.func_474(33);
					}
					else
					{
						uParam0->f_44 = aggregate.saloon_dining.func_474(32);
					}
					return true;
				}
			}
			Stack.Push((uParam0->f_11 < 3 && uParam0->f_29));
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_30);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (aggregate.saloon_dining.func_455(uParam0))
			{
				uParam0->f_44 = aggregate.saloon_dining.func_476(4);
				return true;
			}
			else if (aggregate.fishing_core.func_34(uParam0, 4))
			{
				uParam0->f_44 = aggregate.saloon_dining.func_474(31);
				return true;
			}
			else if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				uParam0->f_44 = aggregate.saloon_dining.func_476(2);
				return true;
			}
			else if (aggregate.fishing_core.func_34(uParam0, 16))
			{
				uParam0->f_44 = aggregate.saloon_dining.func_476(1);
				return true;
			}
			else if (uParam0->f_11 > 2)
			{
				if ((*uParam0 != 6 && aggregate.bandana.func_30(uParam0->f_13, 0)) && aggregate.mp_intro.func_2428(uParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
				{
					uParam0->f_44 = aggregate.saloon_dining.func_476(11);
				}
				else
				{
					uParam0->f_44 = aggregate.saloon_dining.func_476(10);
				}
				return true;
			}
			else if ((*uParam0 != 6 && aggregate.bandana.func_30(uParam0->f_13, 0)) && aggregate.mp_intro.func_2428(uParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
			{
				uParam0->f_44 = aggregate.saloon_dining.func_476(6);
				return true;
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						uParam0->f_44 = aggregate.saloon_dining.func_476(9);
						return true;
					case 1:
						uParam0->f_44 = aggregate.saloon_dining.func_476(7);
						return true;
					case 2:
						uParam0->f_44 = aggregate.saloon_dining.func_476(20);
						return true;
					case 3:
						uParam0->f_44 = aggregate.saloon_dining.func_476(21);
						return true;
				}
			}
			break;
		case 2:
			if (!aggregate.bandana.func_30(uParam0->f_13, 0))
			{
				bVar0 = uParam0->f_13;
				if (!aggregate.aberdeenpigfarm.func_165(bVar0))
				{
				}
				else
				{
					uParam0->f_17++;
					if (uParam0->f_11 > 2)
					{
						uParam0->f_44 = aggregate.saloon_dining.func_476(14);
						return true;
					}
					Stack.Push(uParam0->f_29);
					Stack.Push(uParam0);
					Call_Loc(uParam0->f_30);
					if (StackVal && StackVal)
					{
						return true;
					}
					if (!aggregate.saloon_dining.func_455(uParam0))
					{
						if (aggregate.doc_book.func_86(uParam0->f_13, 1073741824 /* Float: 2f */))
						{
							uParam0->f_44 = aggregate.saloon_dining.func_476(15);
							return true;
						}
						else if (aggregate.doc_book.func_86(uParam0->f_13, 268435456))
						{
							uParam0->f_44 = aggregate.saloon_dining.func_476(17);
							return true;
						}
						else if (aggregate.doc_book.func_86(uParam0->f_13, 134217728))
						{
							uParam0->f_44 = aggregate.saloon_dining.func_476(18);
							return true;
						}
						else
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									uParam0->f_44 = aggregate.saloon_dining.func_476(21);
									break;
								case 1:
									uParam0->f_44 = aggregate.saloon_dining.func_476(16);
									break;
								case 2:
									uParam0->f_44 = aggregate.saloon_dining.func_476(20);
									break;
							}
							return true;
						}
					}
					else
					{
						uParam0->f_44 = aggregate.saloon_dining.func_476(4);
						return true;
					}
					Jump @810; //curOff = 781
					Stack.Push(uParam0->f_29);
					Stack.Push(uParam0);
					Call_Loc(uParam0->f_30);
					if (StackVal && StackVal)
					{
						return true;
					}
				}
				return false;
			}
			default:
				break;
	}
}

void func_720(var uParam0)
{
	bool bVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		bVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			bVar0 = 654746159;
		}
		if (func_780(uParam0, bVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 201050);
			aggregate.mp_intro.func_1329(uParam0, 201945);
			aggregate.mp_intro.func_1329(uParam0, 202520);
			aggregate.mp_intro.func_1329(uParam0, 202789);
			aggregate.mp_intro.func_1329(uParam0, 202967);
			aggregate.camera_item.func_77(uParam0, uParam0->f_2371.f_10);
			aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate.mp_intro.func_1341(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_750(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<173> Var0;
	int iVar189;

	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3 = -1;
	Var0.f_136.f_1.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_153 = -1;
	Var0.f_154 = -1;
	Var0.f_155 = 16;
	Var0.f_172 = 16;
	iVar189 = 0;
	iVar189 = 0;
	while (iVar189 < 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_436[iVar189 /*189*/], &Var0, 189);
		iVar189++;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam4;
	if (!aggregate.mp_intro.func_1707(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 225469;
	uParam0->f_1280 = 225478;
	uParam0->f_1281 = 225487;
	uParam0->f_1282 = 225487;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_751(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam3;
	if (!aggregate.mp_intro.func_1705(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 225469;
	uParam0->f_1280 = 225478;
	uParam0->f_1281 = 225487;
	uParam0->f_1282 = 225487;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

void func_769()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		}
		iVar0++;
	}
}

bool func_770(var uParam0)
{
	if (!func_1264())
	{
		return false;
	}
	func_1265(uParam0);
	if (Local_23.f_1735 != 1)
	{
		Local_23.f_1735 = 1;
		return false;
	}
	if (uParam0->f_6.f_26 != 13)
	{
		aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_26), 13);
		return false;
	}
	if (!func_1268(&(uParam0->f_6), func_1266(Local_23.f_1735), func_1267(uParam0->f_6.f_26)))
	{
		return false;
	}
	Global_1274951->f_44 = uParam0->f_6;
	return true;
}

bool func_771(var uParam0)
{
	Local_23.f_100.f_1211.f_6.f_12 = 0;
	Local_23.f_100.f_1211.f_6.f_10 = 0;
	if (!func_1269(uParam0))
	{
		return false;
	}
	if (!func_1271(uParam0->f_6, uParam0->f_146, uParam0->f_149, func_1270(), aggregate.annesburg.func_253(uParam0->f_6.f_20)))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20, true);
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_6.f_20, 1, 0, ((*Global_1275475)[&Global_1273882 /*86*/])->f_3);
	aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 3);
	AUDIO::_0x6339C1EA3979B5F7("shop_moonshine_cook", "shop_scenes");
	aggregate.fme_escaped_convicts.func_1516(&(Local_23.f_1), uParam0->f_6.f_20, "MARCEL", 1);
	aggregate.fme_escaped_convicts.func_1516(&(Local_23.f_1), Global_35, "ARTHUR", 1);
	return true;
}

void func_777()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[iVar0] = (((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[iVar0] && uVar1);
		iVar0++;
	}
}

bool func_780(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate.mp_intro.func_1705(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
		{
			if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.net_camp.func_1328(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate.binoculars.func_15(&(uParam0->f_2094));
	uParam0->f_2094.f_73 = 0;
	uParam0->f_2094.f_75 = 0;
	uParam0->f_2094.f_76 = 0;
	uParam0->f_2094.f_68 = 0;
	uParam0->f_2094.f_48 = 0;
	uParam0->f_2094.f_121 = 0;
	uParam0->f_2094.f_122 = -1;
	uParam0->f_2094.f_123 = -1;
	uParam0->f_2094.f_81 = 0;
	uParam0->f_2094.f_83 = 0;
	uParam0->f_2094.f_118 = 0;
	aggregate.mp_intro.func_1710(uParam0);
	aggregate.mp_intro.func_1105();
	aggregate.binoculars.func_16(uParam0);
	aggregate.generic_shop_ui_events.func_27();
	aggregate.mp_intro.func_1713(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate.mp_intro.func_1714(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate.mp_intro.func_1715(uParam0, 6, joaat("IB_EXIT"));
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1717(uParam0, 6, 0);
	aggregate.mp_intro.func_1715(uParam0, 1, joaat("ib_select"));
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1717(uParam0, 1, 0);
	aggregate.mp_intro.func_1715(uParam0, 2, 1891107858);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	aggregate.mp_intro.func_1715(uParam0, 3, -405106071);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2094.f_133 = 0;
		uParam0->f_2094.f_135 = 0;
		uParam0->f_2094.f_131 = 0;
		uParam0->f_2094.f_137 = 0;
		uParam0->f_2094.f_143 = 0;
		uParam0->f_2094.f_139 = 0;
		uParam0->f_2094.f_145 = 0;
		uParam0->f_2094.f_147 = 0;
	}
	uParam0->f_2094.f_149 = 228294;
	uParam0->f_2094.f_150 = 229178;
	uParam0->f_2094.f_151 = 230164;
	uParam0->f_2094.f_152 = 230283;
	uParam0->f_2094.f_46 = 1;
	return true;
}

void func_781(bool bParam0)
{
	aggregate.net_main_online.func_341();
	aggregate.player_menu.func_6();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_CANCEL"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_ACCEPT"), false);
	}
}

bool func_784()
{
	int iVar0;

	if (aggregate.fm_mission_controller.func_4265(1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (aggregate.net_fetch.func_5397(65536))
	{
		iVar0 = 3;
		aggregate.net_assassination.func_520(65536);
	}
	else if (aggregate.fm_mission_controller.func_2361())
	{
		iVar0 = 6;
	}
	else if (aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_100(-1473368735)) == 0 && NETWORK::_0xFBE782B3165AC8EC(-1429796736))
	{
		iVar0 = 5;
		func_1295(aggregate.coffee_drinking.func_100(-1473368735), 1);
	}
	else
	{
		iVar0 = 4;
	}
	HUD::_0xF66090013DE648D5(func_1296(iVar0));
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_23.f_1), aggregate.fme_escaped_convicts.func_1689(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

int func_785(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_20, true);
	}
	switch (uParam0->f_6.f_25)
	{
		case 3:
			uParam0->f_6.f_8 = 0;
			if (uParam0->f_6.f_26 == 13 && func_1299(uParam0->f_6, 0.99f))
			{
				aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_26), 4);
				aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 4);
			}
			if (uParam0->f_6.f_26 == 4 && func_1299(uParam0->f_6, 0.99f))
			{
				if (func_1300(Local_23.f_1735, &(uParam0->f_6.f_44), &(uParam0->f_6.f_26), &(uParam0->f_6.f_10), &(uParam0->f_6.f_12)))
				{
					aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 4);
				}
			}
			else if (func_1299(uParam0->f_6, 0.99f))
			{
				aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_26), 4);
				func_1301();
				aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 4);
			}
			if (uParam0->f_3)
			{
				if (func_1302(&(uParam0->f_6.f_26)))
				{
					uParam0->f_3 = 0;
					aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 4);
				}
			}
			break;
		case 4:
			func_1303(uParam0->f_6, func_1267(uParam0->f_6.f_26), &(uParam0->f_6.f_8));
			if (uParam0->f_6.f_8)
			{
				aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_25), 3);
			}
			break;
	}
	return 1;
}

int func_792(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	if (aggregate.fm_mission_controller.func_4265(1))
	{
		return 0;
	}
	if (!aggregate.barcustomer_interaction.func_42(&(Local_23.f_1740)))
	{
		Local_23.f_1744 = MISC::GET_RANDOM_INT_IN_RANGE(60000, 90000);
		aggregate.barcustomer_interaction.func_25(&(Local_23.f_1740), 0);
	}
	else if (aggregate.fme_animal_tagging.func_181(&(Local_23.f_1740)) > Local_23.f_1744 || !Local_23.f_1776)
	{
		Local_23.f_1776 = 1;
		aggregate.fme_animal_tagging.func_290(&(Local_23.f_1740));
		if (aggregate.fme_escaped_convicts.func_1690(&(Local_23.f_1), aggregate.fme_escaped_convicts.func_1689(func_1296(iParam0)), 0, -1, 0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_793(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(((*Global_1275475)[&Global_1273882 /*86*/])->f_19, iParam0))
	{
		aggregate.bandana.func_26(&(((*Global_1275475)[&Global_1273882 /*86*/])->f_19), iParam0);
	}
}

int func_796()
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	uVar2 = ((*Global_1275475)[iVar1 /*86*/])->f_19.f_16 * 5;
	return uVar2;
}

void func_798(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "Description", sParam1);
}

int func_801(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;
	int iVar11;
	int iVar12;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1) != iVar0)
	{
		return 2;
	}
	if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_159()))
	{
		return 4;
	}
	if (iParam1 & 4 == 0)
	{
		if (aggregate.net_fetch.func_5428(aggregate.flow_controller.func_374(iParam0)) == 5)
		{
			return 19;
		}
	}
	if (iParam1 & 1 == 0)
	{
		if (aggregate.net_gun_for_hire_offline.func_687(iParam0))
		{
			return 5;
		}
	}
	if (aggregate.fme_archery.func_1286(iVar0, 1, 0, 1))
	{
		return 7;
	}
	Var2 = { aggregate.aberdeenpigfarm.func_131(iVar0) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar9);
	if (iVar9 >= Global_1901929->f_160.f_2)
	{
		return 8;
	}
	iVar11 = aggregate.flow_controller.func_381(iVar1);
	if (iVar11 == -1)
	{
		return 9;
	}
	if (aggregate.flow_controller.func_382(iVar11) != 0)
	{
		return 25;
	}
	iVar12 = PLAYER::GET_PLAYER_PED(iVar0);
	if (TASK::_0xEC7E480FF8BD0BED(iVar12))
	{
		return 10;
	}
	if (aggregate.interactive_campfire.func_105())
	{
		return 11;
	}
	if (aggregate.fme_animal_tagging.func_1097())
	{
		return 12;
	}
	if (aggregate.net_gun_for_hire_online.func_382())
	{
		return 13;
	}
	if (aggregate.fme_animal_tagging.func_118())
	{
		return 14;
	}
	if (aggregate.flow_controller.func_385(iVar0))
	{
		return 15;
	}
	if (iParam1 & 16 == 0)
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar1) > 4)
		{
			return 20;
		}
	}
	if (iParam1 & 32 == 0)
	{
		if (aggregate.medium_update.func_201(-1784925006, PLAYER::PLAYER_ID(), 0, 1) != -1)
		{
			return 18;
		}
	}
	if (Global_1274951->f_45 & 1 != 0)
	{
		return 27;
	}
	return 0;
}

void func_802(var uParam0)
{
	if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 256))
	{
		aggregate.mp_intro.func_2452(uParam0, -1871110370);
	}
	else if (aggregate.fm_mission_controller.func_6295(&Global_1273882, 4))
	{
		aggregate.mp_intro.func_2452(uParam0, -1277879663);
	}
	else
	{
		aggregate.mp_intro.func_1782(uParam0, func_813());
	}
	func_798(uParam0, "SHOP_MS_BUYER_DESC");
}

bool func_804(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;

	bVar2 = aggregate.mp_intro.func_2502(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[uParam1->f_2 /*4*/]);
	Var3.f_1 = -1;
	Var3 = { *(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[uParam1->f_2 /*4*/]) };
	bVar1 = !aggregate.mp_intro.func_3227(Var3.f_3) == joaat("default");
	if (!bVar1)
	{
		bVar2 = aggregate.gfh_campworks.func_416();
		if (bVar2 == 0)
		{
			bVar1 = true;
		}
	}
	iVar0 = aggregate.mp_intro.func_2602(bVar2, bVar1);
	return iVar0;
}

void func_808(var uParam0, var uParam1)
{
	switch (uParam1->f_10)
	{
		case 1:
			aggregate.net_fetch.func_4035(32);
			func_1333(uParam1->f_7, 1);
			func_1334(0);
			func_1335(uParam1);
			break;
		case 2:
			func_1333(uParam1->f_7, 2);
			break;
	}
}

void func_811()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = PLAYER::PLAYER_ID();
	if (!func_824())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
			}
			else
			{
				iVar3 = iVar4;
				if (iVar2 != iVar3)
				{
					if (aggregate.moonshine_drink_item.func_1() == iVar4)
					{
						iVar1 = 0;
						while (iVar1 < 10)
						{
							((*Global_1275475)[iVar2 /*86*/])->f_19.f_1[iVar1] = (((*Global_1275475)[iVar2 /*86*/])->f_19.f_1[iVar1] || ((*Global_1275475)[iVar3 /*86*/])->f_19.f_1[iVar1]) // PointerArith;
							iVar1++;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_813()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = func_1337();
	iVar0 = (iVar3 / 3600);
	iVar1 = ((iVar3 - iVar0 * 3600) / 60);
	iVar2 = ((iVar3 - iVar0 * 3600) - iVar1 * 60);
	return MISC::_CREATE_VAR_STRING(2, "SHOP_MS_STILL_TOOLTIP_CRAFT_NO_INGREDIENTS_PRS", iVar0, iVar1, iVar2);
}

void func_815(var uParam0)
{
	uParam0->f_2 = 10;
}

void func_818()
{
	bool bVar0;
	bool bVar1;

	bVar0 = aggregate.gfh_campworks.func_416();
	bVar1 = false;
	if (aggregate.bandana.func_11(bVar0, 1372968408))
	{
		bVar1 = -1519683528;
	}
	else if (aggregate.bandana.func_11(bVar0, -710171994))
	{
		bVar1 = 384689046;
	}
	else if (aggregate.bandana.func_11(bVar0, 956386416))
	{
		bVar1 = 1435612062;
	}
	aggregate.doc_book.func_171(bVar1, 0, 255, 0, 0);
}

void func_819(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	aggregate.hub_offers.func_108(uParam0, &uVar0);
	iVar4 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_5.f_12;
	iVar5 = func_1348(iVar4);
	if (bParam1)
	{
		iVar6 = 1535463323;
	}
	else
	{
		iVar6 = 733252738;
	}
	if (bParam1)
	{
		uVar7 = Global_1274951->f_19;
	}
	uVar8 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_19;
	uVar9 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17;
	uVar10 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_18;
	uVar11 = Global_1274951->f_33;
	iVar12 = func_1349();
	uVar13 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16;
	uVar14 = &((*Global_1275475)[&Global_1273882 /*86*/])->f_5[0];
	TELEMETRY::_0xB5013EFBB5516867(&uVar0, iVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, iVar12, uVar13, uVar14);
}

bool func_820(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return false;
	}
	if (aggregate.fm_mission_controller.func_4265(1))
	{
		return false;
	}
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 1039159916:
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			iVar2 = func_1350(1);
			switch (iVar2)
			{
				case 2:
					if (fVar1 < 0.7f)
					{
						iVar0 = 9;
					}
					break;
				case 1:
					if (fVar1 < 0.5f)
					{
						iVar0 = 10;
					}
					break;
				case 0:
					if (fVar1 < 0.7f)
					{
						iVar0 = 11;
					}
					break;
			}
			if (iVar0 == 0)
			{
				switch (uParam0->f_8)
				{
					case 827714260:
						iVar0 = 14;
						break;
					case -822124724:
						iVar0 = 13;
						break;
					case 1269193435:
						iVar0 = 12;
						break;
				}
			}
			break;
		default:
			return false;
	}
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_23.f_1), aggregate.fme_escaped_convicts.func_1689(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_821(bool bParam0)
{
	if (!func_824())
	{
		if (aggregate.bandana.func_10(bParam0) == -1940066807)
		{
			if (!func_1351(bParam0, 2))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_822(bool bParam0)
{
	if (aggregate.bandana.func_10(bParam0) == -1940066807)
	{
		if (func_1351(bParam0, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_824()
{
	return Local_23.f_1766;
}

void func_826(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "MaterialsTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "MaterialsTextureDictionary", bParam2);
}

void func_831(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "ProductionTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "ProductionTextureDictionary", bParam2);
}

int func_832(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return ((*Global_1275475)[iVar0 /*86*/])->f_19.f_16;
}

void func_833(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "GoodsTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "GoodsTextureDictionary", bParam2);
}

bool func_876(var uParam0)
{
	if (uParam0->f_6.f_26 != 14)
	{
		aggregate.fm_mission_controller.func_6654(&(uParam0->f_6.f_26), 14);
		uParam0->f_6.f_8 = 0;
	}
	func_1303(uParam0->f_6, func_1267(uParam0->f_6.f_26), &(uParam0->f_6.f_8));
	if (uParam0->f_6.f_8)
	{
		if (func_1299(uParam0->f_6, 0.85f))
		{
			uParam0->f_6.f_8 = 0;
			return true;
		}
	}
	return false;
}

void func_877()
{
	Local_23.f_100.f_1211.f_6.f_8 = 0;
	switch (Local_23)
	{
		case 0:
			if (Local_23.f_100.f_1211.f_6.f_12)
			{
				aggregate.fme_animal_tagging.func_176(1);
			}
			break;
		case 1:
			if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 8))
			{
				aggregate.net_fetch.func_4035(8);
			}
			if (!aggregate.fm_mission_controller.func_6295(&Global_1273882, 2))
			{
			}
			else
			{
				func_1388(Local_23.f_1767 != 0, *(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[Local_23.f_1767 /*4*/]));
				aggregate.fme_animal_tagging.func_176(2);
				Jump @442; //curOff = 144
				if (!ANIMSCENE::_0x25557E324489393C(Local_23.f_100.f_1211.f_6))
				{
				}
				else
				{
					if ((ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p1") || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p2")) || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p3"))
					{
						Local_23.f_100.f_1211.f_6.f_8 = 1;
						aggregate.fme_animal_tagging.func_176(3);
						aggregate.fme_animal_tagging.func_290(&(Local_23.f_1737));
					}
					Jump @442; //curOff = 259
					Local_23.f_100.f_1211.f_6.f_8 = 1;
					if (!func_1299(Local_23.f_100.f_1211.f_6, 0.99f))
					{
						if ((ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p1") || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p2")) || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p3"))
						{
							if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_23.f_100.f_1211.f_6.f_20))
							{
								Jump @442; //curOff = 380
							}
						}
					else
					{
						}
						else if (!CAM::IS_SCREEN_FADED_OUT())
						{
						}
						else
						{
							Local_23.f_100.f_1211.f_6.f_11 = 1;
							Local_23.f_100.f_1211.f_6.f_12 = 0;
							Global_1274951->f_43 = 1;
							aggregate.fme_animal_tagging.func_176(0);
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_895(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	}
	return true;
}

bool func_1012(bool bParam0)
{
	struct<4> Var0;
	struct<10> Var4;

	Var0 = { aggregate.fm_deathmatch_controller.func_2464(0) };
	Var4.f_9 = -1591664384;
	aggregate.bandana.func_66(Var0, &Var4, bParam0, 0, -1);
	return aggregate.net_camp.func_2216(Var4.f_4);
}

bool func_1170(var uParam0)
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
	var uVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	var uVar20;
	int iVar24;
	int iVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	char* sVar30;

	iVar0 = aggregate.mp_intro.func_1412();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, aggregate.generic_shop_ui_events.func_31());
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413());
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1910());
	iVar4 = aggregate.mp_intro.func_1906();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413(), iVar2);
	if (iVar1 == -395279071)
	{
		iVar5 = aggregate.generic_shop_ui_events.func_11();
		bVar6 = iVar5;
		iVar7 = aggregate.mp_intro.func_1911(bVar6);
		(Global_1951131->f_1461.f_1[bVar6 /*9*/])->f_8 = iVar2;
		if (!aggregate.mp_intro.func_1912(iVar7, &iVar8, &uVar9))
		{
			return false;
		}
		bVar10 = Global_1951131->f_1461.f_1[bVar6 /*9*/][iVar2];
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), bVar10);
		iVar11 = aggregate.bandana.func_44(iVar8, 1);
		aggregate.dynamic_craft_scenario.func_285(iVar11);
		aggregate.dynamic_craft_scenario.func_283();
		func_1717(&(Global_1951131->f_1538), &(Global_1951131->f_1538.f_1[iVar11 /*3*/]), iVar11, 1);
		(Global_1951131->f_1538.f_1[aggregate.bandana.func_44(iVar8, 1) /*3*/])->f_1 = uVar9;
		if (aggregate.fme_animal_tagging.func_1294(iVar11) == -1)
		{
			aggregate.dynamic_craft_scenario.func_286(iVar11, 0);
		}
		aggregate.dynamic_craft_scenario.func_169(1, 1, 0, 1);
		aggregate.bandana.func_28(19, 0, 2, 0, 0);
		aggregate.mp_intro.func_1415(uParam0);
	}
	else if (iVar1 == -339889117)
	{
		bVar12 = false;
		switch (iVar2)
		{
			case 0:
				bVar12 = 1728382685; /* GXTEntry: "Right" */
				break;
			case 1:
				bVar12 = -649335959; /* GXTEntry: "Left" */
				break;
		}
		if (bVar12 != 0)
		{
			if (aggregate.mp_intro.func_1914(aggregate.mp_intro.func_1381(), bVar12, &iVar13, &iVar14))
			{
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1915(), iVar13);
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1916(), iVar14);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), bVar12);
			aggregate.mp_intro.func_1917(uParam0, bVar12);
			if ((aggregate.mp_intro.func_1355(uParam0) == -2144266389 || aggregate.mp_intro.func_1355(uParam0) == 2057502022) || aggregate.mp_intro.func_1355(uParam0) == 1275816411)
			{
				aggregate.shop_bait.func_1617(uParam0, aggregate.mp_intro.func_1381(), 0);
			}
			bVar15 = aggregate.mp_intro.func_1381();
			if (WEAPON::_0xD955FEE4B87AFA07(bVar15))
			{
				bVar26 = true;
				bVar27 = true;
				bVar28 = true;
				iVar24 = -1610187846; /* GXTEntry: "Equip Sidearm" */
				iVar25 = 190417139; /* GXTEntry: "Equip Off-Hand Sidearm" */
				Var16 = { aggregate.bandana.func_59(bVar15, aggregate.bandana.func_60(0), bVar12, 0) };
				if (WEAPON::_0x6929E22158E52265(Global_35, 2, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						bVar27 = false;
					}
				}
				if (WEAPON::_0x6929E22158E52265(Global_35, 3, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584; /* GXTEntry: "Unequip Off-Hand Sidearm" */
					}
				}
				if (!aggregate.bandana.func_74() || aggregate.shop_butcher.func_1682() < 2)
				{
					bVar28 = false;
				}
				aggregate.mp_intro.func_1723(uParam0, 3, iVar24, bVar26, 1, 0);
				aggregate.mp_intro.func_1723(uParam0, 2, iVar25, (bVar27 && bVar28), bVar28, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		iVar29 = aggregate.hub_offers.func_106(uParam0);
		switch (iVar2)
		{
			case 0:
				sVar30 = aggregate.mp_intro.func_1921(1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 1);
				}
				break;
			case 1:
				sVar30 = aggregate.mp_intro.func_1921(2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 2);
				}
				break;
		}
		DATABINDING::_0xA3BD6FF95E713EE5(iVar0, aggregate.mp_intro.func_1913(), sVar30);
		if (ENTITY::DOES_ENTITY_EXIST(iVar29))
		{
			PED::_0xCC8CA3E88256E58F(iVar29, 0, 1, 1, 1, false);
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_52, "HorseGender", MISC::GET_HASH_KEY(sVar30));
	}
	return true;
}

bool func_1264()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1273882->f_15;
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	return true;
}

void func_1265(var uParam0)
{
	uParam0->f_93 = aggregate.medium_update.func_397(aggregate.moonshine_drink_item.func_1(), 1);
	switch (uParam0->f_93)
	{
		case 0:
			uParam0->f_146 = { 1789.989f, -818.1904f, 188.401f };
			uParam0->f_149 = { 0f, 0f, 28.4f };
			break;
		case 1:
			uParam0->f_146 = { -1091.248f, 712.8531f, 80.0358f };
			uParam0->f_149 = { 0f, 0f, -171.5f };
			break;
		case 2:
			uParam0->f_146 = { -2774.076f, -3045.214f, -12.8987f };
			uParam0->f_149 = { 0f, 0f, 137.3f };
			break;
		case 3:
			uParam0->f_146 = { 1630.838f, 827.6671f, 120.7437f };
			uParam0->f_149 = { 0f, 0f, 51.8f };
			break;
		case 4:
			uParam0->f_146 = { -1865.579f, -1726.884f, 85.0569f };
			uParam0->f_149 = { 0f, 0f, -135f };
			break;
	}
}

char* func_1266(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "script@mp@cook@ig1_ig4_table_shop";
		case 2:
			return "script@mp@maggie@ig_1_shop@maggie_shop";
		case 3:
			return "script@mp@maggie@ig_4_briefs@maggie_briefs";
		case 4:
			return "script@mp@cook@ig2_cook_idle_intros";
		case 5:
			return "script@mp@maggie@ig_2_intro@maggie_intro";
		default:
			break;
	}
	return "FAIL";
}

char* func_1267(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_ig4_jobbrief_p1";
		case 2:
			return "pl_ig4_jobbrief_p2";
		case 3:
			return "pl_ig4_jobbrief_p3";
		case 4:
			return "pl_ig1_idle_loop";
		case 5:
			return "pl_ig1_idle_variation_a";
		case 6:
			return "pl_ig1_idle_variation_b";
		case 7:
			return "pl_ig1_idle_variation_c";
		case 8:
			return "pl_ig1_idle_variation_d";
		case 9:
			return "pl_ig1_idle_variation_e";
		case 10:
			return "pl_ig1_idle_variation_f";
		case 11:
			return "pl_ig1_idle_variation_g";
		case 12:
			return "pl_ig1_idle_variation_h";
		case 13:
			return "pl_ig1_enter_fwd";
		case 14:
			return "pl_ig1_exit_fwd";
		case 0:
			return "FAIL";
		default:
			break;
	}
	return "FAIL";
}

bool func_1268(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return false;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0) && !ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(*uParam0, 0));
}

bool func_1269(var uParam0)
{
	vector3 vVar0;

	func_1265(uParam0);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_146, uParam0->f_149.f_2, 0.2f, 2f, 0f) };
	if (!ENTITY::DOES_ENTITY_EXIST(aggregate.annesburg.func_253(uParam0->f_6.f_20)))
	{
		uParam0->f_6.f_20 = aggregate.butchercreek.func_91(-1619564045, vVar0, 0f, 1, 1, 0, 1, 1, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_20, false);
		NETWORK::_0xF3354D6CA46F419D(uParam0->f_6.f_20, 0);
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uParam0->f_6.f_20, true);
	}
	else if (func_1870(uParam0->f_6.f_20, 21756842))
	{
		return true;
	}
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_6.f_20, "rdro_shop_moonshine_cook_mixgroup", 0f);
	return false;
}

char* func_1270()
{
	return "COOK";
}

bool func_1271(int iParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8)
{
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0, vParam1, vParam4, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, sParam7, iParam8, 0);
		ANIMSCENE::START_ANIM_SCENE(iParam0);
		return false;
	}
	return true;
}

int func_1287(var uParam0, var uParam1, bool bParam2)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return aggregate.mp_intro.func_2252(uParam0, uParam1);
		case -1968468235:
			return 1;
		case -384358143:
			return aggregate.mp_intro.func_2253(uParam0, uParam1);
		case -1928601151:
		case -349391286:
			return aggregate.mp_intro.func_2254(uParam0, uParam1);
		case -760956867:
			return aggregate.mp_intro.func_2255(uParam0, uParam1);
		case 38807286:
			return aggregate.mp_intro.func_2255(uParam0, uParam1);
		case -1395073769:
			return aggregate.mp_intro.func_2255(uParam0, uParam1);
		case 1425890997:
			return aggregate.mp_intro.func_2255(uParam0, uParam1);
		case -853534656:
			return aggregate.mp_intro.func_2259(uParam0, uParam1);
		case 777890122:
			return aggregate.mp_intro.func_2260(uParam0, uParam1, bParam2);
		case -1502467280:
			if (aggregate.mp_intro.func_2261(uParam1->f_7))
			{
				return aggregate.mp_intro.func_2253(uParam0, uParam1);
			}
			else
			{
				return aggregate.mp_intro.func_2262(uParam0, uParam1, bParam2);
			}
			break;
		case -1048755899:
			return aggregate.mp_intro.func_2263(uParam0, uParam1);
		case -239176093:
			return aggregate.mp_intro.func_2264(uParam0, uParam1);
		case -87783305:
			return aggregate.mp_intro.func_2265(uParam0, uParam1);
		case 848718617:
			return aggregate.mp_intro.func_2266(uParam0, uParam1);
		case -1080155519:
			return aggregate.mp_intro.func_2267(uParam0, uParam1);
		case 1394581936:
			return aggregate.mp_intro.func_2268(uParam0, uParam1);
		case 193788635:
			return aggregate.mp_intro.func_2269(uParam0, uParam1);
		case -1198174119:
			return aggregate.mp_intro.func_2270(uParam0, uParam1);
		case 1119253406:
			return aggregate.mp_intro.func_2271(uParam0, uParam1);
		case 1837492866:
			return aggregate.mp_intro.func_2272(uParam0, *uParam1);
		case -339889117:
			return aggregate.net_camp.func_2008(uParam0, *uParam1);
		case -348190488:
			return aggregate.net_camp.func_2009(uParam0, *uParam1);
		case 1702073444:
			return aggregate.net_camp.func_2010(uParam0, *uParam1, bParam2);
		case -584027224:
			return aggregate.mp_intro.func_2276(uParam0, uParam1);
		case -467661559:
			return aggregate.mp_intro.func_2277(uParam0, uParam1);
		case 761079318:
			return aggregate.mp_intro.func_2278(uParam0, uParam1);
		case 1942587409:
			return aggregate.mp_intro.func_2279(uParam0, uParam1);
		case -2056428614:
			return aggregate.mp_intro.func_2280(uParam0, uParam1);
		case 2077448405:
			return aggregate.mp_intro.func_2281(uParam0, uParam1);
		case -698448975:
			return aggregate.mp_intro.func_2282(uParam0, uParam1);
		case -627085098:
			return aggregate.mp_intro.func_2283(uParam0, uParam1);
		case -841939068:
			return aggregate.mp_intro.func_2284(uParam0, uParam1);
		case 1751567119:
			return aggregate.mp_intro.func_2285(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return aggregate.mp_intro.func_2286(uParam0, uParam1);
	}
	return 1;
}

void func_1295(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::STAT_ID_SET_INT(&uParam0, iParam2, true);
}

char[] func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COOK_BA_FLAVREP";
		case 2:
			return "COOK_UI_ENTERSU";
		case 3:
			return "COOK_UI_ENTERFT";
		case 4:
			return "COOK_UI_ENTER";
		case 5:
			return "COOK_UI_ENTERST";
		case 6:
			return "COOK_UI_DRUNL";
		case 7:
			return "COOK_UI_NOMONEY";
		case 8:
			return "COOK_UI_IDLE";
		case 9:
			return "COOK_UI_BUYHIGH";
		case 10:
			return "COOK_UI_BUYMED";
		case 11:
			return "COOK_UI_BUYLOW";
		case 12:
			return "COOK_UI_STRONG";
		case 13:
			return "COOK_UI_AVERAGE";
		case 14:
			return "COOK_UI_WEAK";
		case 15:
			return "COOK_BA_FLAVOR2";
		case 16:
			return "COOK_UI_FLSPECL";
		case 17:
			return "COOK_UI_FLIMPRV";
		case 18:
			return "COOK_UI_FLREGLR";
		case 19:
			return "COOK_UI_REFLAV";
		case 20:
			return "COOK_UI_SELLDLY";
		case 21:
			return "COOK_GN_BOUNTY";
		default:
			break;
	}
	return "";
}

bool func_1299(int iParam0, float fParam1)
{
	float fVar0;

	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0);
	if (fVar0 > fParam1)
	{
		return true;
	}
	return false;
}

bool func_1300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (*uParam3)
			{
				iVar0 = func_1966(iParam0);
				iVar2 = iVar0;
				if (func_1967(iVar2) && iVar2 != *uParam2)
				{
					aggregate.fm_mission_controller.func_6654(uParam2, iVar2);
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
		case 2:
			if (*uParam3)
			{
				iVar0 = func_1966(iParam0);
				iVar1 = iVar0;
				if (func_1968(iVar1) && iVar1 != *uParam1)
				{
					aggregate.fm_mission_controller.func_6654(uParam1, iVar1);
					*uParam3 = 0;
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
	}
	return false;
}

int func_1301()
{
	int iVar0;

	if (aggregate.fm_mission_controller.func_4265(1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	iVar0 = 8;
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_23.f_1), aggregate.fme_escaped_convicts.func_1689(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_1302(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = *uParam0;
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 >= 16)
	{
		iVar0 = 1;
	}
	*uParam0 = iVar0;
	if ((*uParam0 != 0 && *uParam0 != 15) && *uParam0 != iVar2)
	{
		iVar1 = 1;
	}
	else
	{
		*uParam0 = 1;
		iVar1 = 1;
	}
	return iVar1;
}

void func_1303(int iParam0, char* sParam1, var uParam2)
{
	*uParam2 = 0;
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if ((!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1)) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			*uParam2 = 1;
		}
	}
}

int func_1326(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = aggregate.long_update.func_603(bParam1, 0);
	return aggregate.mp_intro.func_2646(uParam0, bParam1, bVar0);
}

bool func_1329(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	struct<4> Var19;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	var uVar28;
	bool bVar29;
	struct<4> Var30;
	struct<4> Var34;
	struct<9> Var38;
	int iVar48;
	int iVar49;
	int iVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	var uVar55;
	bool bVar56;
	struct<4> Var57;
	struct<4> Var61;
	struct<9> Var65;
	int iVar75;
	int iVar76;
	int iVar77;
	bool bVar78;
	bool bVar79;
	struct<4> Var80;
	struct<4> Var84;
	int iVar88;
	int iVar89;
	struct<14> Var90;

	bVar0 = false;
	if (bParam2 == -1502467280 || bParam2 == 777890122)
	{
		if (aggregate.mp_intro.func_2378(bParam1))
		{
			bVar0 = true;
		}
		else if (aggregate.bandana.func_11(bParam1, 1844906744))
		{
			iVar1 = aggregate.bandana.func_10(bParam1);
			if ((bParam2 == 777890122 || iVar1 == 146649851) || iVar1 == -1954920608)
			{
				bVar0 = true;
			}
			else if (bParam2 == -1502467280)
			{
				Var5 = -1;
				Var5.f_1 = -1;
				Var5.f_2 = -1;
				Var5.f_3 = -1;
				Var5.f_4 = -1;
				Var5.f_5 = -1;
				Var5.f_6 = -1;
				Var5.f_7 = -1;
				Var5.f_8 = -1;
				Var5.f_13 = -1;
				bVar23 = aggregate.mp_intro.func_1426(uParam0);
				bVar24 = aggregate.mp_intro.func_1426(uParam0);
				if (bVar23 != 0 && bVar24 != 0)
				{
					Var19 = { aggregate.bandana.func_59(bVar23, aggregate.bandana.func_60(0), bVar24, 0) };
					if (iVar1 != 0)
					{
						bVar0 = true;
						iVar25 = aggregate.interactive_campfire.func_833(bParam1);
						iVar26 = 0;
						while (iVar26 < iVar25)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar26, &bVar2))
							{
								Var5 = { aggregate.binoculars.func_85(0, bVar2, -1591664384, -1591664384, 0, 0, 0) };
								aggregate.binoculars.func_87(&Var5, Var19);
								if (aggregate.binoculars.func_88(&Var5, &iVar3, &iVar4, 1))
								{
									if (iVar4 != 0)
									{
										bVar0 = false;
									}
									aggregate.binoculars.func_73(iVar3);
								}
							}
							iVar26++;
						}
					}
				}
			}
		}
		else if (aggregate.bandana.func_11(bParam1, 188214926))
		{
			bVar29 = aggregate.mp_intro.func_1380(uParam0);
			Var30.f_2 = -1;
			Var30.f_3 = -1;
			Var38 = -1;
			Var38.f_1 = -1;
			Var38.f_2 = -1;
			Var38.f_3 = -1;
			Var38.f_4 = -1;
			Var38.f_5 = -1;
			Var38.f_6 = -1;
			Var38.f_7 = -1;
			Var38.f_8 = -1;
			if (aggregate.mp_intro.func_2381(aggregate.camera_item.func_20(&(uParam0->f_2094)), bVar29, &Var34))
			{
				bVar27 = false;
				while (bVar27 < Var34.f_3)
				{
					Var30 = { aggregate.mp_intro.func_2382(bVar27, Var34, &(uParam0->f_2094)) };
					if (Var30 == bParam1 && aggregate.bandana.func_30(Var30, 0))
					{
						Var38.f_8 = Var30.f_2;
						iVar49 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var38, &iVar48, 1);
						if (iVar49 == -1)
						{
						}
						else
						{
							iVar50 = 0;
							while (iVar50 < iVar48)
							{
								bVar51 = aggregate.fm_mission_controller.func_6851(iVar50, iVar49);
								if (((aggregate.bandana.func_30(bVar51, 0) && bVar51 != bParam1) && aggregate.mp_intro.func_2051(&(uParam0->f_2094), bVar51, &uVar28)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar51, Var38.f_8) == -2089472884)
								{
									bVar52 = func_1326(uParam0, bVar51);
									if (func_1329(uParam0, bVar51, bVar52))
									{
										bVar0 = true;
									}
									else
									{
										iVar50++;
									}
									ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar49);
									Jump @681; //curOff = 669
									bVar27++;
									Jump @708; //curOff = 681
									bVar53 = aggregate.mp_intro.func_1426(uParam0);
									bVar0 = aggregate.mp_intro.func_2383(bVar53, bParam1, aggregate.mp_intro.func_1426(uParam0));
									Jump @1245; //curOff = 708
									if (bParam2 == -584027224 || bParam2 == -87783305)
									{
										if (aggregate.bandana.func_80(bParam1, 1, 0, 0) > 0)
										{
											return true;
										}
										if (aggregate.mp_intro.func_2384(897456793, bParam1))
										{
											return true;
										}
										if (aggregate.mp_intro.func_2384(-1565675519, bParam1))
										{
											return true;
										}
									}
									else if (bParam2 == 1702073444)
									{
										bVar56 = aggregate.mp_intro.func_1380(uParam0);
										Var57.f_2 = -1;
										Var57.f_3 = -1;
										Var65 = -1;
										Var65.f_1 = -1;
										Var65.f_2 = -1;
										Var65.f_3 = -1;
										Var65.f_4 = -1;
										Var65.f_5 = -1;
										Var65.f_6 = -1;
										Var65.f_7 = -1;
										Var65.f_8 = -1;
										if (aggregate.mp_intro.func_2381(aggregate.camera_item.func_20(&(uParam0->f_2094)), bVar56, &Var61))
										{
											bVar54 = false;
											while (bVar54 < Var61.f_3)
											{
												Var57 = { aggregate.mp_intro.func_2382(bVar54, Var61, &(uParam0->f_2094)) };
												if (Var57 == bParam1 && aggregate.bandana.func_30(Var57, 0))
												{
													Var65.f_8 = Var57.f_2;
													iVar76 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var65, &iVar75, 1);
													if (iVar76 == -1)
													{
													}
													else
													{
														iVar77 = 0;
														while (iVar77 < iVar75)
														{
															bVar78 = aggregate.fm_mission_controller.func_6851(iVar77, iVar76);
															if (((aggregate.bandana.func_30(bVar78, 0) && bVar78 != bParam1) && aggregate.mp_intro.func_2051(&(uParam0->f_2094), bVar78, &uVar55)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar78, Var65.f_8) == -2089472884)
															{
																bVar79 = func_1326(uParam0, bVar78);
																if (func_1329(uParam0, bVar78, bVar79))
																{
																	bVar0 = true;
																}
																else
																{
																	iVar77++;
																}
																ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar76);
																Jump @1116; //curOff = 1104
																bVar54++;
																Jump @1245; //curOff = 1116
																if (bParam2 == 1394581936)
																{
																	if (aggregate.mp_intro.func_2385(bParam1))
																	{
																		Var80 = { aggregate.mp_intro.func_1882(uParam0) };
																		return aggregate.mp_intro.func_2386(&Var80, bParam1);
																	}
																	else
																	{
																		Var84 = { aggregate.mp_intro.func_1882(uParam0) };
																		return aggregate.mp_intro.func_2386(&Var84, bParam1);
																	}
																}
																else
																{
																	Var90 = { aggregate.binoculars.func_85(bParam1, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
																	if (aggregate.binoculars.func_88(&Var90, &iVar88, &iVar89, 0))
																	{
																		if (iVar89 > 0)
																		{
																			bVar0 = true;
																		}
																	}
																	aggregate.binoculars.func_73(iVar88);
																}
																return bVar0;
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
	}
}

void func_1333(bool bParam0, int iParam1)
{
	aggregate.bandana.func_26(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[func_2004(bParam0)], iParam1);
}

void func_1334(int iParam0)
{
	var uVar0;
	struct<19> Var1;

	uVar0 = aggregate.dynamic_craft_scenario.func_194(32768, 8);
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_14 = &Global_1273882->f_154[&Global_1273882];
	Var1 = 0;
	Var1.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var1.f_4 = 109;
	aggregate.dynamic_craft_scenario.func_195(Var1, uVar0, 0, 0);
}

int func_1335(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	if (aggregate.fm_mission_controller.func_4265(1))
	{
		return 0;
	}
	iVar0 = Global_1274951->f_33;
	iVar1 = 0;
	if (iVar0 >= 1)
	{
		iVar1 = 19;
	}
	else
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar2 <= 0.6f)
		{
			switch (uParam0->f_7)
			{
				case -1498871949:
				case -610395813:
				case 447784640:
					iVar1 = 18;
					break;
				case -818346432:
				case 348064119:
				case 2103594888:
					iVar1 = 17;
					break;
				case -1283370018:
				case -624685730:
				case 1739830455:
				case 1958345007:
					iVar1 = 16;
					break;
			}
		}
		else
		{
			iVar1 = 15;
		}
	}
	if (aggregate.fme_escaped_convicts.func_1690(&(Local_23.f_1), aggregate.fme_escaped_convicts.func_1689(func_1296(iVar1)), 0, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_1337()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = aggregate.net_main_offline.func_3044() + 1;
	iVar1 = (iVar0 * Global_1901929->f_295.f_145);
	bVar2 = (iVar1 - NETWORK::GET_CLOUD_TIME_AS_INT());
	return aggregate.mp_intro.func_999(bVar2, 0, bVar2);
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
		case 0:
			return 1397223979;
		case 1:
			return 677707590;
		case 2:
			return -269277617;
		case 3:
			return -1463831630;
		case 4:
			return 2031672089;
		default:
			break;
	}
	return 2037940248;
}

int func_1349()
{
	bool bVar0;
	int iVar1;

	if (!aggregate.doc_book.func_308(&(Global_1275329->f_50)))
	{
		return 0;
	}
	bVar0 = aggregate.bandana.func_84(Global_1275329->f_50, -268973591, 0, 1);
	if (aggregate.bandana.func_11(bVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (aggregate.bandana.func_11(bVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (aggregate.bandana.func_11(bVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

int func_1350(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (!bParam0)
	{
		bVar0 = func_2011(827714260, 0);
	}
	else
	{
		bVar0 = Global_1274951->f_19;
	}
	bVar1 = aggregate.mp_intro.func_2428(827714260, -915411861, 1, 0, 1, 0);
	if (IntToFloat(bVar0) < (IntToFloat(bVar1) * 0.3f))
	{
		return 0;
	}
	if (IntToFloat(bVar0) > (IntToFloat(bVar1) * 0.7f))
	{
		return 2;
	}
	return 1;
}

bool func_1351(bool bParam0, int iParam1)
{
	return aggregate.aberdeenpigfarm.func_175(&(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[func_2004(bParam0)]), iParam1);
}

bool func_1384(var uParam0)
{
	bool bVar0;
	struct<173> Var1;

	if (uParam0->f_279 < 0)
	{
		bVar0 = false;
		Var1 = 14;
		Var1.f_4.f_8 = 2;
		Var1.f_4.f_11 = 16;
		Var1.f_4.f_28 = 16;
		Var1.f_4.f_45 = 16;
		Var1.f_4.f_62 = 16;
		Var1.f_4.f_79 = 16;
		Var1.f_4.f_96 = 4;
		Var1.f_4.f_96.f_1.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
		Var1.f_136 = 4;
		Var1.f_136.f_1.f_2 = -1;
		Var1.f_136.f_1.f_3 = -1;
		Var1.f_136.f_1.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_3 = -1;
		Var1.f_136.f_1.f_4.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_4.f_3 = -1;
		Var1.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
		Var1.f_153 = -1;
		Var1.f_154 = -1;
		Var1.f_155 = 16;
		Var1.f_172 = 16;
		while (aggregate.shop_bait.func_1294(uParam0, bVar0, &Var1))
		{
			if (!aggregate.shop_bait.func_1852(aggregate.camera_item.func_20(&(uParam0->f_223)), Var1.f_134))
			{
			}
			else
			{
				bVar0++;
			}
		}
		uParam0->f_279 = (bVar0 - 1);
	}
	return uParam0->f_279;
}

void func_1388(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1 = -1;
	Var0 = 2;
	if (bParam0)
	{
		Var0.f_1 = 4;
	}
	else
	{
		Var0.f_1 = 3;
	}
	MISC::_COPY_MEMORY(&(Global_1274951->f_34), &Var0, 2);
	MISC::_COPY_MEMORY(&(Global_1274951->f_36), &uParam1, 4);
}

char[] func_1472(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "CATALOG_CLOSE_PROMPT_TAG";
		case 0:
			return "CATALOG_TURN_LEFT_PROMPT_TAG";
		case 1:
			return "CATALOG_TURN_RIGHT_PROMPT_TAG";
		case 3:
			return "CATALOG_SELECT_PROMPT_TAG";
		case 4:
			return "CATALOG_HOLD_PROMPT_TAG";
		case 7:
			return "CATALOG_VIEW_PROMPT_TAG";
		case 9:
			return "CATALOG_READ_PROMPT_TAG";
		case 5:
			return "CATALOG_BACK_PROMPT_TAG";
		case 8:
			return "CATALOG_ZOOM_PROMPT_TAG";
	}
	return "";
}

void func_1717(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	bVar3 = bParam1;
	iVar4 = aggregate.bandana.func_10(bVar3);
	iVar5 = 0;
	if (aggregate.doc_book.func_307() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
				}
				Jump @3217; //curOff = 253
				if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						bVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate.bandana.func_10(bVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					Jump @3217; //curOff = 543
					if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1473580422))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_11(bVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (aggregate.dynamic_craft_scenario.func_362(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1583165364))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(bVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1650340550))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(bVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						Jump @3217; //curOff = 918
						if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 20;
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar1, 1090938458)) && aggregate.bandana.func_11(bVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1171
							aggregate.dynamic_craft_scenario.func_286(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1454
							aggregate.dynamic_craft_scenario.func_286(16, iVar5);
							if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								Jump @3217; //curOff = 1747
								if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate.bandana.func_11(bVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
									}
									Jump @3217; //curOff = 1988
									if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											bVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate.bandana.func_11(bVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(bVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
												}
											}
										}
										Jump @3217; //curOff = 2215
										if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 2439
											if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate.bandana.func_11(bVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(bVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												if ((aggregate.bandana.func_11(bVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(bVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate.bandana.func_11(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
											}
											Jump @3217; //curOff = 2922
											iVar0 = 37;
											if (aggregate.bandana.func_11(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3004
											iVar0 = 10;
											if (-525676072 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3068
											iVar0 = 12;
											if (81053684 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3132
											if (!aggregate.bandana.func_11(bVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
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
			switch (aggregate.bandana.func_49(iParam2, 1))
			{
				case -207860920:
					if (aggregate.dynamic_craft_scenario.func_363(99217379) && aggregate.bandana.func_11(bVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((bParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate.bandana.func_11(bVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(bVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(bVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (bParam1 == -230310728 || bParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (bParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
			default:
				break;
	}
}

bool func_1860(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			aggregate.barcustomer_interaction.func_43(&(iParam1->f_18));
			return false;
		}
		else if (aggregate.barcustomer_interaction.func_42(&(iParam1->f_18)))
		{
			aggregate.barcustomer_interaction.func_50(&(iParam1->f_18));
			return false;
		}
	}
	if (!aggregate.barcustomer_interaction.func_42(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return aggregate.saloon_dining.func_437(&(iParam1->f_18), fParam2);
	return true;
}

bool func_1870(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate.net_fetch.func_4139(iParam1, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == PED::_0x30569F348D126A5A(iParam0))
	{
		return true;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
		return true;
	}
	return false;
}

int func_1966(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 1:
			iVar1 = 16;
			break;
		case 2:
			iVar1 = 13;
			break;
		case 3:
			iVar1 = 8;
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	return iVar0;
}

bool func_1967(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_1968(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

bool func_1984(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case joaat("joe"):
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case joaat("alden"):
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		default:
			break;
	}
	return false;
}

int func_2004(bool bParam0)
{
	switch (bParam0)
	{
		case 1958345007:
			return 0;
		case 348064119:
			return 1;
		case -818346432:
			return 2;
		case -610395813:
			return 3;
		case 2103594888:
			return 4;
		case -624685730:
			return 5;
		case 1739830455:
			return 6;
		case -1498871949:
			return 7;
		case 447784640:
			return 8;
		case -1283370018:
			return 9;
	}
	return -1;
}

bool func_2011(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (bParam0 == 0)
	{
		bParam0 = aggregate.fm_mission_controller.func_5430();
	}
	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return -1;
	}
	bVar0 = false;
	bVar1 = aggregate.mp_intro.func_2031(bParam0, 0, 1, -1, 1);
	iVar2 = aggregate.mp_intro.func_2428(bParam0, bVar1, 1, 0, 1, 0);
	if (aggregate.fm_mission_controller.func_5433(bParam0, &bVar0, &bVar1, bParam1))
	{
		bVar3 = aggregate.mp_intro.func_2422(bVar0, bVar1, 0, 1);
		if (bVar3 < iVar2)
		{
			return bVar3;
		}
	}
	return iVar2;
}

void func_2061(var uParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	struct<173> Var2;
	int iVar191;

	bVar0 = false;
	iVar1 = iParam1;
	Var2 = 14;
	Var2.f_4.f_8 = 2;
	Var2.f_4.f_11 = 16;
	Var2.f_4.f_28 = 16;
	Var2.f_4.f_45 = 16;
	Var2.f_4.f_62 = 16;
	Var2.f_4.f_79 = 16;
	Var2.f_4.f_96 = 4;
	Var2.f_4.f_96.f_1.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var2.f_136 = 4;
	Var2.f_136.f_1.f_2 = -1;
	Var2.f_136.f_1.f_3 = -1;
	Var2.f_136.f_1.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_3 = -1;
	Var2.f_136.f_1.f_4.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_4.f_3 = -1;
	Var2.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var2.f_153 = -1;
	Var2.f_154 = -1;
	Var2.f_155 = 16;
	Var2.f_172 = 16;
	while (aggregate.shop_bait.func_1294(uParam0, bVar0, &Var2))
	{
		if (Var2 != 1 && Var2 != 15)
		{
			iVar191 = 0;
			while (iVar191 < iParam1)
			{
				if (iParam3[iVar191] == -1 && Var2.f_134 == uParam2[iVar191])
				{
					(*iParam3)[iVar191] = Var2.f_3;
					iVar1 = (iVar1 - 1);
				}
				iVar191++;
			}
			if (iVar1 == 0)
			{
				return;
			}
		}
		bVar0++;
	}
}

bool func_2339(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 20;
	iVar3 = 35;
	*iParam2 = 0;
	if (aggregate.bandana.func_47(64))
	{
		*iParam2 = 1259720784; /* GXTEntry: "Your current outfit cannot be altered." */
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_494(&(Global_1951131->f_1657.f_1[34 /*3*/])) != 0)
	{
		*iParam2 = 1676404845; /* GXTEntry: "Your outfit does not support this item." */
		return false;
	}
	switch (bParam1)
	{
		case 3:
			iVar0 = 25;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = 2016241289;
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = 1391009982;
				return false;
			}
			break;
		case 4:
			iVar0 = 18;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/] || 698653232 == aggregate.bandana.func_10(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 524717989;
				return false;
			}
			iVar0 = 35;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			iVar0 = 34;
			if (aggregate.bandana.func_11(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), 1583165364))
			{
				*iParam2 = -1034452951; /* GXTEntry: "Your pants do not support this." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = 710806085;
				return false;
			}
			Jump @1118; //curOff = 403
			if (PED::_0xFB4891BD7578CDC1(iParam0, 2056714954))
			{
				*iParam2 = -1978934058; /* GXTEntry: "Your Collar cannot be modified while wearing a necktie." */
				return false;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, 694822476))
			{
				*iParam2 = 522400877; /* GXTEntry: "Your shirt does not support collar modification." */
				return false;
			}
			iVar0 = 12;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			iVar0 = 20;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = -15902206;
				return false;
			}
			iVar0 = 18;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = -651987738;
				return false;
			}
			iVar0 = 16;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = 522400877; /* GXTEntry: "Your shirt does not support collar modification." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -1379615715;
				return false;
			}
			return true;
			bVar1 = &Global_1951131->f_1657.f_1[iVar2 /*3*/];
			if (&Global_1951131->f_1657.f_1[iVar2 /*3*/] != &Global_1951131->f_81[iVar2 /*12*/] && aggregate.bandana.func_10(bVar1) == 1868067663)
			{
				*iParam2 = -523289378; /* GXTEntry: "Sleeves cannot be modified while wearing a coat." */
				return false;
			}
			iVar0 = 21;
			bVar1 = &Global_1951131->f_1657.f_1[iVar0 /*3*/];
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_10(bVar1) == 1297434125)
			{
				*iParam2 = 13905014; /* GXTEntry: "Sleeves cannot be modified while wearing gauntlets." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -1379615715;
				return false;
			}
			return true;
			iVar0 = 36;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = -279809718;
				return false;
			}
			iVar0 = 34;
			if (aggregate.bandana.func_11(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), 626143778))
			{
				*iParam2 = 1271245555; /* GXTEntry: "Your pants do not support modification." */
				return false;
			}
			if (684307653 == aggregate.bandana.func_10(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 749926372; /* GXTEntry: "Your skirt does not support modification." */
				return false;
			}
			if (&Global_1951131->f_1657.f_1[iVar3 /*3*/] != &Global_1951131->f_81[iVar3 /*12*/])
			{
				*iParam2 = -874441321; /* GXTEntry: "Boots cannot be modified while wearing chaps." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
				return false;
			}
			return true;
			return true;
		}

bool func_2560(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar31;

	if (aggregate.fme_animal_tagging.func_1526(bParam0))
	{
		return aggregate.mp_intro.func_3223(aggregate.saloon_dining.func_494(bParam0, 1), bParam1);
	}
	uVar0 = 15;
	if (!aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &uVar0, &uVar31, 1, 0))
	{
		return false;
	}
	return true;
}

int func_3066(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612: /* GXTEntry: "Traveling Opulence" */
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 158;
				case 1421598733: /* GXTEntry: "Covered" */
					return 174;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 182;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 166;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 190;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 198;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 150;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			Jump @1217; //curOff = 245
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 159;
				case 1421598733: /* GXTEntry: "Covered" */
					return 175;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 183;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 167;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 191;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 199;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			Jump @1217; //curOff = 406
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 160;
				case 1421598733: /* GXTEntry: "Covered" */
					return 176;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 184;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 168;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 192;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 200;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			Jump @1217; //curOff = 567
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 161;
				case 1421598733: /* GXTEntry: "Covered" */
					return 177;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 185;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 169;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 193;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 201;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			Jump @1217; //curOff = 728
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 162;
				case 1421598733: /* GXTEntry: "Covered" */
					return 178;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 186;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 170;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 194;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 202;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			Jump @1217; //curOff = 890
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 163;
				case 1421598733: /* GXTEntry: "Covered" */
					return 179;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 187;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 171;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 195;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 203;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			Jump @1217; //curOff = 1052
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 164;
				case 1421598733: /* GXTEntry: "Covered" */
					return 180;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 188;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 172;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 196;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 204;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 21;
				case 12:
					return 3;
				case 10:
					return 31;
				case 9:
					return 40;
				case 8:
					return 56;
				default:
					break;
			}
			switch (bParam1)
			{
				case -1411330704: /* GXTEntry: "Fast Travel Post" */
					return 60;
				case -428390721: /* GXTEntry: "Butcher Table" */
					return 61;
				case 2073294138: /* GXTEntry: "Weapons Locker" */
					return 66;
				case -1490861779: /* GXTEntry: "Large Delivery Wagon" */
					return 62;
				case 1476279059: /* GXTEntry: "Medium Delivery Wagon" */
					return 63;
				case 913131737: /* GXTEntry: "Small Delivery Wagon" */
					return 64;
				case 1642014154: /* GXTEntry: "Stew Pot" */
					return 65;
				case -1396511102: /* GXTEntry: "Deluxe Campfire" */
					return 2;
				case -1991362080: /* GXTEntry: "Black & Tan" */
				case -1535250369: /* GXTEntry: "Tan Brindle" */
				case 914789466: /* GXTEntry: "Black & White" */
					return 67;
				case 55994234: /* GXTEntry: "Dark Brown" */
				case 262209551: /* GXTEntry: "Dead Grass" */
				case 769866899: /* GXTEntry: "Brown" */
					return 68;
				case -429885089: /* GXTEntry: "Yellow" */
				case -289273358: /* GXTEntry: "Chocolate" */
				case 536669287: /* GXTEntry: "Black" */
					return 69;
				case 952368108:
					return 70;
				case 1671341100: /* GXTEntry: "Aqua" */
					return 71;
				case -1336962048: /* GXTEntry: "Blue" */
					return 72;
				case 1262519305: /* GXTEntry: "Green" */
					return 73;
				case -510449329: /* GXTEntry: "Orange" */
					return 74;
				case -474096794: /* GXTEntry: "Pink" */
					return 75;
				case 2022645972: /* GXTEntry: "Purple" */
					return 76;
				case -1867469444: /* GXTEntry: "Red" */
					return 77;
				case 81790578: /* GXTEntry: "Yellow" */
					return 78;
				case 42875037: /* GXTEntry: "White" */
					return 79;
				case 1321477211: /* GXTEntry: "Alligator" */
					return 80;
				case -1970354802: /* GXTEntry: "Bear" */
					return 81;
				case 1915847437: /* GXTEntry: "Buck" */
					return 82;
				case -418668047: /* GXTEntry: "Coyote" */
					return 83;
				case -1490747347: /* GXTEntry: "Eagle" */
					return 84;
				case 1853960588: /* GXTEntry: "Gila Monster" */
					return 85;
				case -669648504: /* GXTEntry: "Morgan" */
					return 86;
				case 2121739823:
					return 87;
				case -801482238: /* GXTEntry: "Tennessee Walker" */
					return 88;
				case -1535222926: /* GXTEntry: "Vulture" */
					return 89;
				case 1101681612: /* GXTEntry: "Baltz" */
					return 90;
				case 1687066518: /* GXTEntry: "Clam Juice" */
					return 91;
				case 846374071: /* GXTEntry: "Festa" */
					return 92;
				case 1173221821: /* GXTEntry: "Gelatin" */
					return 93;
				case -872063735: /* GXTEntry: "Jolly Jacks" */
					return 94;
				case 1659150076: /* GXTEntry: "Cola" */
					return 95;
				case 495709860: /* GXTEntry: "Lucifer\'s Cradle" */
					return 96;
				case -1981287626: /* GXTEntry: "Old Blood Eyes" */
					return 97;
				case -373605683: /* GXTEntry: "Prairie Moon" */
					return 98;
				case -1030438211: /* GXTEntry: "Schiffer" */
					return 99;
				case -1413081099: /* GXTEntry: "Ace" */
					return 100;
				case -1291835985: /* GXTEntry: "Ambarino State" */
					return 101;
				case 1051756150: /* GXTEntry: "Anchor" */
					return 102;
				case -1568446057: /* GXTEntry: "Guarma" */
					return 103;
				case 271439292: /* GXTEntry: "Lemoyne State" */
					return 104;
				case -132276375: /* GXTEntry: "New Hanover State" */
					return 105;
				case -908539768: /* GXTEntry: "Skulls" */
					return 106;
				case 1092029674:
					return 107;
				case -1958953278: /* GXTEntry: "Saint Denis" */
					return 108;
				case 733303292: /* GXTEntry: "West Elizabeth State" */
					return 109;
				case -144166169: /* GXTEntry: "Standard 1" */
					return 110;
				case -492687949: /* GXTEntry: "Standard 2" */
					return 111;
				case -874512337: /* GXTEntry: "Standard 3" */
					return 112;
				case -415385882: /* GXTEntry: "Standard 4" */
					return 113;
				case -797537960: /* GXTEntry: "Standard 5" */
					return 114;
				case -941076000: /* GXTEntry: "Traveling Opulence 1" */
					return 119;
				case -1567174399: /* GXTEntry: "Traveling Opulence 2" */
					return 120;
				case -763924656: /* GXTEntry: "The Hobo Life 1" */
					return 121;
				case 1928558912: /* GXTEntry: "The Hobo Life 2" */
					return 122;
				case 524939438: /* GXTEntry: "Military Surplus 1" */
					return 123;
				case -1949362405: /* GXTEntry: "Military Surplus 2" */
					return 124;
				case 908640876: /* GXTEntry: "Survivor 1" */
					return 125;
				case 501275986: /* GXTEntry: "Survivor 2" */
					return 126;
				case 1257532163: /* GXTEntry: "Bounty Hunter" */
					return 127;
				case 1160088249: /* GXTEntry: "Collector" */
					return 128;
				case -267422042: /* GXTEntry: "Trader" */
					return 129;
				case 800085008: /* GXTEntry: "Bandito" */
					return 130;
				case 738479284: /* GXTEntry: "Veteran" */
					return 131;
				case 900620296: /* GXTEntry: "Trapper" */
					return 132;
				case 1054660175:
					return 115;
				case -2043878162:
					return 116;
				case 594616184:
					return 117;
				case -92189287:
					return 118;
				case -811830793: /* GXTEntry: "Bedroll" */
					return 157;
				case 1421598733: /* GXTEntry: "Covered" */
					return 173;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 181;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 165;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 189;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 197;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 149;
				default:
					break;
			}
			return 0;
		}

int func_3354(bool bParam0)
{
	switch (bParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
			return 2126795269;
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
			return 0;
		}

