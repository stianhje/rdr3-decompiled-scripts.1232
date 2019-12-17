#region Local Var
	struct<41> Local_0 = { 0, 0, 0, 0, 1, 0, 0, 0, 255, 255, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<5> Local_43[32];
	struct<4292> Local_204 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_4496 = 7;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = -1;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	struct<18> Local_4509 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_4527 = 255;
	var uLocal_4528 = 255;
	var uLocal_4529 = 255;
	var uLocal_4530 = 255;
	var uLocal_4531 = 255;
	var uLocal_4532 = 255;
	var uLocal_4533 = 255;
	var uLocal_4534 = 255;
	var uLocal_4535 = 255;
	var uLocal_4536 = 255;
	var uLocal_4537 = 255;
	var uLocal_4538 = 255;
	var uLocal_4539 = 255;
	var uLocal_4540 = 255;
	var uLocal_4541 = 255;
	var uLocal_4542 = 255;
	var uLocal_4543 = 255;
	var uLocal_4544 = 255;
	var uLocal_4545 = 255;
	var uLocal_4546 = 255;
	var uLocal_4547 = 255;
	var uLocal_4548 = 255;
	var uLocal_4549 = 255;
	var uLocal_4550 = 255;
	var uLocal_4551 = 255;
	var uLocal_4552 = 255;
	var uLocal_4553 = 255;
	var uLocal_4554 = 255;
	var uLocal_4555 = 255;
	var uLocal_4556 = 255;
	var uLocal_4557 = 255;
	var uLocal_4558 = 255;
	struct<6> Local_4559[32];
	struct<1422> Local_4752 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	float fLocal_6199 = 0f;
	float fLocal_6200 = 0f;
	var uLocal_6201 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == fme_animal_tagging.__EntryFunction__

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 43, 38);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_0), 43, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_43, 161, 39);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_43[0 /*5*/]), 161, "m_clientData");
}

void func_64()
{
	Local_204 = Local_4752.f_3;
	Local_204.f_1 = DATAFILE::_0xD97D8D905F1562F2(-22776762);
	Local_204.f_1.f_1 = DATAFILE::_0xD97D8D905F1562F2(-1257874925);
	Local_204.f_4273 = Local_4752.f_2;
	if (Local_4752.f_2 == -926595562)
	{
		Local_204.f_4282 = VOLUME::_CREATE_VOLUME_BOX(1407.9f, 273.6f, 89f, 0f, 0f, 15f, 18f, 14f, 10f);
	}
}

void func_125()
{
	int iVar0;

	if (DATAFILE::_0x7907969497EA92F5(Local_204.f_1.f_1))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_204.f_1.f_1);
	}
	if (DATAFILE::_0x7907969497EA92F5(Local_204.f_1))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_204.f_1);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_4275)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_204.f_11[iVar0 /*498*/])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_204.f_11[iVar0 /*498*/]));
		}
		func_340(iVar0);
		iVar0++;
	}
	aggregate.fme_animal_tagging.func_622();
	GRAPHICS::_0x37D7BDBA89F13959(func_342());
	GRAPHICS::_0x37D7BDBA89F13959(func_343());
	_NAMESPACE71::_0x2F901291EF177B02(Local_204.f_4283, 0);
	aggregate.fme_archery.func_343("FM_KotC_END", 1, 0);
}

bool func_177()
{
	if (Local_204.f_4291 < func_388())
	{
		if (!func_389())
		{
			return false;
		}
	}
	return true;
}

bool func_194()
{
	func_400();
	func_401();
	aggregate.aberdeenpigfarm.func_23();
	func_403();
	return false;
}

bool func_219()
{
	if (!DATAFILE::_0x603AC35FD4602C76(Local_204.f_1.f_1))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_204.f_1))
	{
		return false;
	}
	func_422();
	if (!func_423())
	{
		return false;
	}
	return true;
}

bool func_221()
{
	Local_204.f_1.f_9 = func_424();
	Local_204.f_1.f_7 = func_425();
	Local_204.f_1.f_8 = func_426();
	Local_204.f_1.f_3 = func_427();
	Local_204.f_1.f_4 = func_428();
	Local_204.f_1.f_6 = func_429();
	func_430();
	func_431();
	GRAPHICS::_0x5199405EABFBD7F0(func_342());
	GRAPHICS::_0x5199405EABFBD7F0(func_343());
	return true;
}

void func_247()
{
	if (aggregate.fme_animal_tagging.func_152(Local_4752.f_1332))
	{
	}
}

char[] func_306(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTC_SHARD_OUTRO_PRIMARY_WON", BUILTIN::FLOOR(fParam0));
}

char* func_309(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTC_SHARD_OUTRO_PRIMARY_FAILED");
}

void func_340(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (Local_204.f_11[iParam0 /*498*/])->f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[iParam0 /*498*/])->f_13[iVar0 /*11*/])))
		{
			if ((Local_204.f_11[iParam0 /*498*/])->f_13[iVar0 /*11*/])->f_1 == func_600()
			{
				aggregate.fme_animal_tagging.func_638(ENTITY::GET_ENTITY_COORDS(&((Local_204.f_11[iParam0 /*498*/])->f_13[iVar0 /*11*/]), true, false), 1065353216 /* Float: 1f */);
				OBJECT::DELETE_OBJECT((Local_204.f_11[iParam0 /*498*/])->f_13[iVar0 /*11*/]);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((Local_204.f_11[iParam0 /*498*/])->f_13[iVar0 /*11*/]);
			}
		}
		iVar0++;
	}
	if (aggregate.fme_king_of_the_castle.func_602(&((Local_204.f_11[iParam0 /*498*/])->f_12)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&((Local_204.f_11[iParam0 /*498*/])->f_12), 1);
	}
}

char* func_342()
{
	return "KingCastleRed";
}

char* func_343()
{
	return "KingCastleBlue";
}

int func_388()
{
	vector3 vVar0;
	int iVar5;

	if (func_664(&vVar0))
	{
		vVar0.f_2 = -1666291036;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
		{
			iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y);
		}
	}
	if (iVar5 > 25)
	{
		iVar5 = 25;
	}
	return iVar5;
}

bool func_389()
{
	int iVar0;

	if (func_388() == 0)
	{
		return true;
	}
	if (!aggregate.annesburg.func_121((Local_204.f_3996[Local_204.f_4291 /*11*/])->f_2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_11[Local_204.f_4291])))
	{
		if (!ENTITY::_0x6BFBDC46139C45AB((Local_204.f_3996[Local_204.f_4291 /*11*/])->f_2))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD((Local_204.f_3996[Local_204.f_4291 /*11*/])->f_2);
			return false;
		}
		if (aggregate.fme_archery.func_922(Local_0.f_11[Local_204.f_4291], (Local_204.f_3996[Local_204.f_4291 /*11*/])->f_1, (Local_204.f_3996[Local_204.f_4291 /*11*/])->f_2, 1, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(&(Local_0.f_11[Local_204.f_4291]));
			if (!aggregate.annesburg.func_121((Local_204.f_3996[Local_204.f_4291 /*11*/])->f_6))
			{
				ENTITY::SET_ENTITY_ROTATION(iVar0, (Local_204.f_3996[Local_204.f_4291 /*11*/])->f_6, 2, true);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(iVar0, (Local_204.f_3996[Local_204.f_4291 /*11*/])->f_5);
			}
			ENTITY::_0x9587913B9E772D29(iVar0, 1);
		}
	}
	Local_204.f_4291++;
	return Local_204.f_4291 == func_388();
}

void func_400()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	iVar2 = 255;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && aggregate.aberdeenpigfarm.func_175(&(Local_43[iVar3 /*5*/]), 1))
		{
			if (iVar2 == 255)
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			}
			else if (!_NAMESPACE26::_0x3F59FE6F37869576(iVar2, NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
			{
				bVar0 = true;
			}
			else
			{
				iVar3++;
			}
			if (bVar0)
			{
				func_666(2);
			}
			else
			{
				func_667(2);
			}
		}
	}
}

void func_401()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (Local_0.f_8 == 255)
	{
		aggregate.fme_animal_tagging.func_389(func_668());
	}
	else
	{
		bVar0 = false;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_0.f_8) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_0.f_8))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_0.f_8);
			iVar2 = iVar1;
			if (aggregate.fme_condor_egg.func_545(1, iVar2))
			{
				bVar0 = true;
			}
		}
		if (!bVar0)
		{
			aggregate.fme_animal_tagging.func_389(255);
		}
	}
}

void func_403()
{
	int iVar0;

	if (!func_671())
	{
		return;
	}
	if (aggregate.fme_escaped_convicts.func_408(4) && Local_0.f_2 >= BUILTIN::FLOOR(BUILTIN::TO_FLOAT((Local_4752.f_1269 / Local_204.f_1.f_3))))
	{
		if (!aggregate.fme_escaped_convicts.func_408(16))
		{
			func_666(16);
		}
		return;
	}
	if (func_673(&(Local_0.f_40), Local_204.f_1.f_3, 1))
	{
		func_667(4);
	}
	if (!aggregate.fme_escaped_convicts.func_408(4))
	{
		iVar0 = func_674((Local_204.f_11[Local_0.f_1 /*498*/])->f_2);
		if (iVar0 == -1)
		{
			return;
		}
		if (iVar0 == -1)
		{
			aggregate.annesburg.func_233(&(Local_0.f_4), iVar0, 1);
			func_667(16);
			iVar0 = func_674((Local_204.f_11[Local_0.f_1 /*498*/])->f_2);
		}
		Local_0.f_1 = iVar0;
		Local_0.f_2++;
		func_666(4);
		aggregate.annesburg.func_240(&(Local_0.f_4), Local_0.f_1, 1);
	}
}

void func_421()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if ((Local_204.f_11[iVar0 /*498*/])->f_12 != -1)
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&((Local_204.f_11[iVar0 /*498*/])->f_12), 1);
		}
		func_340(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (func_388() - 1))
	{
		iVar2 = &Local_0.f_11[iVar1];
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar2))
		{
			iVar3 = NETWORK::NET_TO_OBJ(iVar2);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar3);
		}
		iVar1++;
	}
	aggregate.fme_archery.func_343("FM_KotC_END", 1, 0);
	aggregate.fme_king_of_the_castle.func_603();
	func_604();
}

void func_422()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, 106906195, "data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -473735049, ":iMoveObjectiveEveryMS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -1424548903, ":iMoveObjectiveWarningMS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, 1917437142, ":fMarkerRatio");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -163264925, ":fPointsToWin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, 422097111, ":fDefaultPointsPerSecond");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -1634653029, ":fPossePointsPerSecond");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -931786358, ":iMaxRespawnDist");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -1407794235, ":iMinRespawnDist");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1.f_1, -1143056591, ":bDrawCastleMarkers");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 2002446768, "locations/location(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1911374815, "castles");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1485225107, "castles/castle(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1299854342, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 20807926, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1194245129, ":scale");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 930439357, ":vol_type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 2125442394, "castle_prop(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1489732360, ":model");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1984789670, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 211737478, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1408350205, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 2131029455, ":should_tint");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1837257751, ":snap_to_ground");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 203425304, "respawn_volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1197574829, "respawn_volumes/respawn_volume(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 139831935, ":location");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1317942175, ":radius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1666291036, "prop_data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 227332775, "prop_data/prop(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1848712804, ":model");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 1771985232, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, 499878609, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_204.f_1, -1129216234, ":rotation");
}

bool func_423()
{
	int iVar0;
	int iVar1;

	iVar0 = func_388();
	if (iVar0 < 1)
	{
		return true;
	}
	if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		(Local_204.f_3996[iVar1 /*11*/])->f_1 = func_686(iVar1);
		(Local_204.f_3996[iVar1 /*11*/])->f_2 = { func_687(iVar1) };
		(Local_204.f_3996[iVar1 /*11*/])->f_5 = func_688(iVar1);
		(Local_204.f_3996[iVar1 /*11*/])->f_6 = { func_689(iVar1) };
		if (STREAMING::IS_MODEL_VALID((Local_204.f_3996[iVar1 /*11*/])->f_1))
		{
			STREAMING::REQUEST_MODEL((Local_204.f_3996[iVar1 /*11*/])->f_1, false);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (!STREAMING::IS_MODEL_VALID((Local_204.f_3996[iVar1 /*11*/])->f_1))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED((Local_204.f_3996[iVar1 /*11*/])->f_1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

var func_424()
{
	return func_690(-163264925, 160f);
}

var func_425()
{
	return func_690(422097111, 1f);
}

var func_426()
{
	return func_690(-1634653029, 1.25f);
}

var func_427()
{
	return aggregate.fme_king_of_the_castle.func_1056(-473735049, 60000);
}

var func_428()
{
	return aggregate.fme_king_of_the_castle.func_1056(-1424548903, 7000);
}

var func_429()
{
	return func_690(1917437142, 0.5f);
}

void func_430()
{
	int iVar0;

	Local_204.f_4275 = func_692();
	if (Local_204.f_4275 >= 8)
	{
		Local_204.f_4275 = 8;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_4275)
	{
		func_693(iVar0);
		iVar0++;
	}
}

void func_431()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_204.f_4275 - 1))
	{
		if (!aggregate.annesburg.func_121((Local_204.f_11[iVar0 /*498*/])->f_2) && !VOLUME::_0x92A78D0BEDB332A3(&(Local_204.f_11[iVar0 /*498*/])))
		{
			Local_204.f_11[iVar0 /*498*/] = VOLUME::_CREATE_VOLUME_BY_HASH((Local_204.f_11[iVar0 /*498*/])->f_11, (Local_204.f_11[iVar0 /*498*/])->f_2, (Local_204.f_11[iVar0 /*498*/])->f_5, (Local_204.f_11[iVar0 /*498*/])->f_8);
			func_694(iVar0);
		}
		iVar0++;
	}
}

void func_438()
{
	if (Local_4752.f_2 == -570047453)
	{
		aggregate.fme_challenges.func_740();
	}
}

char* func_505(int iParam0, bool bParam1, bool bParam2)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		*bParam1 = 0;
		return "";
	}
	*bParam1 = 1;
	return MISC::_CREATE_VAR_STRING(2, "FME_KOTC_HELP_CONTENT_RULES", iParam0);
}

int func_516(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && (uParam0->f_210[*uParam3 /*23*/])->f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[*uParam3 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[*uParam3 /*23*/])->f_14))
		{
			aggregate.fme_animal_tagging.func_732(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || (uParam0->f_210[iVar0 /*23*/])->f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar0 /*23*/])->f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar0 /*23*/])->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar1 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar1 /*23*/])->f_14))
				{
					aggregate.binoculars.func_41(uParam0);
					aggregate.fme_animal_tagging.func_732(uParam0, iVar1);
				}
			}
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 == iParam2)
			{
				aggregate.binoculars.func_41(uParam0);
				iVar0 = iVar1;
				Jump @337; //curOff = 287
			}
			else if ((uParam0->f_210[iVar1 /*23*/])->f_14 == 255 && iVar0 == -1)
			{
				aggregate.binoculars.func_41(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			aggregate.binoculars.func_41(uParam0);
			aggregate.fme_animal_tagging.func_732(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if (((uParam0->f_210[iVar0 /*23*/])->f_5 != fParam1 || (uParam0->f_210[iVar0 /*23*/])->f_1 != fParam5) || (uParam0->f_210[iVar0 /*23*/])->f_2 != fParam6)
			{
				aggregate.binoculars.func_41(uParam0);
			}
			(uParam0->f_210[iVar0 /*23*/])->f_14 = iParam2;
			(uParam0->f_210[iVar0 /*23*/])->f_5 = fParam1;
			(uParam0->f_210[iVar0 /*23*/])->f_1 = fParam5;
			(uParam0->f_210[iVar0 /*23*/])->f_2 = fParam6;
			(uParam0->f_210[iVar0 /*23*/])->f_3 = fParam8;
			(uParam0->f_210[iVar0 /*23*/])->f_4 = fParam9;
			uParam0->f_210[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_522()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -1315570756:
				func_788(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_523()
{
	if ((((aggregate.fme_animal_tagging.func_152(Local_4752.f_1332) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && Local_0.f_1 >= 0) && VOLUME::_0x92A78D0BEDB332A3(&(Local_204.f_11[Local_0.f_1 /*498*/]))) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Local_204.f_11[Local_0.f_1 /*498*/]), false, 0))
	{
		if (Local_0.f_1 > 8)
		{
			return;
		}
		if (!aggregate.fme_condor_egg.func_545(1, Local_4752.f_1332))
		{
			func_789(1);
			aggregate.fme_animal_tagging.func_1407(&((Local_43[Local_4752.f_1332 /*5*/])->f_2));
		}
	}
	else
	{
		func_791(1);
	}
}

void func_524()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_0.f_8) && (Local_0.f_8 == PLAYER::PLAYER_ID() || ((_NAMESPACE26::_0x81FB74C83C2ED69F(Local_0.f_8) && aggregate.fme_condor_egg.func_545(1, Local_4752.f_1332)) && !aggregate.fme_dead_drop.func_799())))
	{
		func_793();
	}
	else
	{
		func_794();
	}
}

void func_525()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_152(Local_4752.f_1332))
	{
		func_795();
		func_796();
		func_797();
		iVar0 = -1428663542;
		if (Local_0.f_8 == 255)
		{
			iVar0 = -1428663542;
			MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, -1636811933);
			MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 231194138);
			MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 580546400);
			MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -1445216292);
			MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -2145527776);
			aggregate.fme_animal_tagging.func_425(13, "FME_KOTC_VARIATION_FFA_OBJECTIVE_ENTER", -1, 0);
			func_798(iVar0);
		}
		else
		{
			if (Local_204.f_4281 != Local_0.f_8)
			{
				if (Local_4752.f_1266 != 5)
				{
					aggregate.fme_animal_tagging.func_425(0, "", -1, 0);
				}
				Local_204.f_4281 = Local_0.f_8;
			}
			if (Local_0.f_8 == PLAYER::PLAYER_ID())
			{
				iVar0 = -1640778959;
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -1636811933);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, -1445216292);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 231194138);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -2145527776);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, 580546400);
				aggregate.fme_animal_tagging.func_425(10, "FME_KOTC_VARIATION_FFA_OBJECTIVE_DEFEND_SELF", -1, 0);
				aggregate.fme_archery.func_343(func_799(), 1, 0);
				func_798(iVar0);
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F(Local_0.f_8) && !aggregate.fme_dead_drop.func_799())
			{
				iVar0 = -1640778959;
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -1636811933);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, -1445216292);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 231194138);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -2145527776);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, 580546400);
				aggregate.fme_animal_tagging.func_425(11, MISC::_CREATE_VAR_STRING(10, "FME_KOTC_VARIATION_FFA_OBJECTIVE_DEFEND_TEAM", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(Local_0.f_8), joaat("COLOR_PURE_WHITE"))), -1, 0);
				aggregate.fme_archery.func_343(func_799(), 1, 0);
				func_798(iVar0);
				if ((!aggregate.fme_animal_tagging.func_134(1024) && aggregate.fme_animal_tagging.func_435(Local_4752.f_1289)) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
				{
					Local_4752.f_1289 = aggregate.fme_animal_tagging.func_436(MISC::_CREATE_VAR_STRING(2, "FME_KOTC_HELP_FRIENDLY_KING", Local_4752.f_1325));
					aggregate.fme_escaped_convicts.func_515(1024);
				}
			}
			else
			{
				iVar0 = 1937193856;
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -1636811933);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, -1445216292);
				MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, 580546400);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, -2145527776);
				MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 231194138);
				aggregate.fme_animal_tagging.func_425(6, MISC::_CREATE_VAR_STRING(10, "FME_KOTC_VARIATION_FFA_OBJECTIVE_ATTACK", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(Local_0.f_8), joaat("COLOR_PURE_WHITE"))), -1, 0);
				aggregate.fme_archery.func_343(func_802(), 1, 0);
				func_798(iVar0);
				if ((!aggregate.fme_animal_tagging.func_134(512) && aggregate.fme_animal_tagging.func_435(Local_4752.f_1289)) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
				{
					Local_4752.f_1289 = aggregate.fme_animal_tagging.func_436(MISC::_CREATE_VAR_STRING(2, "FME_KOTC_HELP_ENEMY_KING", Local_4752.f_1325));
					aggregate.fme_escaped_convicts.func_515(512);
				}
			}
		}
		if (func_803())
		{
			func_804(iVar0);
		}
		if (Local_204.f_4290 != iVar0 && func_805())
		{
			func_798(iVar0);
			func_806(iVar0);
			Local_204.f_4290 = iVar0;
		}
		if ((aggregate.barcustomer_interaction.func_42(&(Local_0.f_40)) && (Local_204.f_1.f_3 - aggregate.fme_animal_tagging.func_181(&(Local_0.f_40))) < Local_204.f_1.f_4) && !aggregate.fme_escaped_convicts.func_408(16))
		{
			if (!aggregate.fishing_core.func_107(Local_4752.f_1287))
			{
				Local_4752.f_1291 = aggregate.fme_animal_tagging.func_499(MISC::_CREATE_VAR_STRING(2, "FME_KOTC_OBJ_MOVING_TICKER_NEUTRAL"), joaat("COLOR_WHITE"));
				aggregate.fme_escaped_convicts.func_515(128);
			}
		}
		if (aggregate.fme_animal_tagging.func_134(16))
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
			if (aggregate.fme_animal_tagging.func_134(128))
			{
				if (!aggregate.fishing_core.func_107(Local_4752.f_1287))
				{
					Local_4752.f_1291 = aggregate.fme_animal_tagging.func_499(MISC::_CREATE_VAR_STRING(2, "FME_KOTC_VARIATION_ENTER"), joaat("COLOR_WHITE"));
					aggregate.fme_escaped_convicts.func_515(256);
				}
			}
			aggregate.fme_escaped_convicts.func_888(128);
			aggregate.fme_escaped_convicts.func_888(256);
			func_604();
			aggregate.fme_escaped_convicts.func_888(16);
		}
	}
	else
	{
		aggregate.fme_animal_tagging.func_622();
	}
}

void func_526()
{
	if (Local_0.f_1 != Local_204.f_4274 && Local_0.f_1 != -1)
	{
		func_340(Local_204.f_4274);
		aggregate.fme_escaped_convicts.func_515(16);
		aggregate.fme_escaped_convicts.func_515(32);
		Local_204.f_4274 = Local_0.f_1;
		Local_204.f_4276 = 0;
		Local_204.f_4277 = 0;
		(Local_204.f_11[Local_0.f_1 /*498*/])->f_1 = 0;
		if (Local_0.f_1 == -1)
		{
			return;
		}
	}
}

void func_527()
{
	if (Local_204.f_4277 < 4)
	{
		func_808(&(Local_204.f_4276), &(Local_204.f_4277));
		aggregate.fme_escaped_convicts.func_515(64);
	}
}

void func_528()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_134(32) && !aggregate.fme_animal_tagging.func_134(64))
	{
		iVar0 = 0;
		while (iVar0 < (Local_204.f_11[Local_0.f_1 /*498*/])->f_1)
		{
			if (STREAMING::IS_MODEL_VALID(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1))
			{
				STREAMING::REQUEST_MODEL(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1, false);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < (Local_204.f_11[Local_0.f_1 /*498*/])->f_1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1))
			{
				return;
			}
			iVar0++;
		}
		aggregate.fme_escaped_convicts.func_515(64);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_204.f_11[Local_0.f_1 /*498*/])->f_1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])))
		{
			(Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/] = OBJECT::CREATE_OBJECT(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1, ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2, false, false, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])) && ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1 == func_600())
			{
				aggregate.fme_animal_tagging.func_638(ENTITY::GET_ENTITY_COORDS(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), true, false), 1065353216 /* Float: 1f */);
			}
			func_809(iVar0);
		}
		iVar0++;
	}
	aggregate.fme_escaped_convicts.func_888(32);
	aggregate.fme_escaped_convicts.func_888(64);
}

int func_600()
{
	return 389769403;
}

void func_604()
{
	int iVar0;

	if (MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_4752.f_1325));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		aggregate.fme_king_of_the_castle.func_864(iVar0);
		iVar0++;
	}
	func_667(64);
}

bool func_664(var uParam0)
{
	*uParam0 = Local_204.f_1;
	uParam0->f_2 = 2002446768;
	uParam0->f_3 = Local_204.f_4273;
	return (DATAFILE::_0x603AC35FD4602C76(Local_204.f_1) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

void func_666(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(Local_0, iParam0))
	{
		aggregate.bandana.func_26(&Local_0, iParam0);
	}
}

void func_667(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(Local_0, iParam0))
	{
		aggregate.bandana.func_26(&Local_0, iParam0);
	}
}

int func_668()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 255;
	if ((Local_0.f_9 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_0.f_9)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_0.f_9))
	{
		if (aggregate.fme_condor_egg.func_545(1, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_0.f_9)))
		{
			iVar4 = Local_0.f_9;
		}
		Local_0.f_9 = 255;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3) && aggregate.fme_condor_egg.func_545(1, iVar0))
			{
				iVar2 = aggregate.fme_king_of_the_castle.func_963(&((Local_43[iVar0 /*5*/])->f_2));
				if (iVar2 > iVar1)
				{
					iVar1 = iVar2;
					iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				}
			}
			iVar0++;
		}
	}
	return iVar4;
}

bool func_671()
{
	return Local_204 == 66262036;
}

bool func_673(var uParam0, int iParam1, bool bParam2)
{
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.barcustomer_interaction.func_25(uParam0, 0);
	}
	else if (aggregate.fme_animal_tagging.func_181(uParam0) >= iParam1)
	{
		if (bParam2)
		{
			aggregate.fme_animal_tagging.func_1407(uParam0);
		}
		return true;
	}
	return false;
}

int func_674(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[8];
	float fVar12;
	float fVar13;
	vector3 vVar14;

	iVar2 = -1;
	aggregate.flow_controller.func_274(&uVar3, 8, 1);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iVar1 = &uVar3[iVar0];
		vVar14 = { (Local_204.f_11[iVar1 /*498*/])->f_2 };
		if (aggregate.annesburg.func_121(vVar14))
		{
		}
		else if (aggregate.annesburg.func_264(&(Local_0.f_4), iVar1, 1))
		{
		}
		else
		{
			fVar12 = BUILTIN::VDIST(vParam0, vVar14);
			if (fVar12 >= 50f)
			{
				return iVar1;
			}
			if (iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar13 = fVar12;
			}
			else if (fVar13 < fVar12)
			{
				iVar2 = iVar1;
				fVar13 = fVar12;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_686(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (func_664(&Var0))
	{
		Var0.f_2 = 227332775;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			iVar6 = 0;
			aggregate.fme_animal_tagging.func_40(Var0, 1848712804, &iVar6, 0);
			iVar5 = iVar6;
		}
	}
	return iVar5;
}

Vector3 func_687(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_664(&Var0))
	{
		Var0.f_2 = 227332775;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_143(Var0, 1771985232, &vVar5, 0);
		}
	}
	return vVar5;
}

float func_688(int iParam0)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_664(&Var0))
	{
		Var0.f_2 = 227332775;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_142(Var0, 499878609, &fVar5, 0);
		}
	}
	return fVar5;
}

Vector3 func_689(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_664(&Var0))
	{
		Var0.f_2 = 227332775;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_143(Var0, -1129216234, &vVar5, 0);
		}
	}
	return vVar5;
}

float func_690(int iParam0, float fParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = fParam1;
	if (func_981(&Var0))
	{
		aggregate.fme_animal_tagging.func_142(Var0, iParam0, &fVar5, 1);
	}
	return fVar5;
}

int func_692()
{
	vector3 vVar0;
	int iVar5;

	if (func_664(&vVar0))
	{
		vVar0.f_2 = -1911374815;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
		{
			iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y);
		}
	}
	return iVar5;
}

void func_693(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;

	if (!func_664(&Var0))
	{
		return;
	}
	Var0.f_2 = 1485225107;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_143(Var0, -1299854342, &((Local_204.f_11[iParam0 /*498*/])->f_2), 0);
	aggregate.fme_animal_tagging.func_143(Var0, 20807926, &((Local_204.f_11[iParam0 /*498*/])->f_5), 0);
	aggregate.fme_animal_tagging.func_143(Var0, -1194245129, &((Local_204.f_11[iParam0 /*498*/])->f_8), 0);
	aggregate.fme_animal_tagging.func_40(Var0, 930439357, &uVar5, 1);
	(Local_204.f_11[iParam0 /*498*/])->f_11 = uVar5;
	(Local_204.f_11[iParam0 /*498*/])->f_1 = func_982(iParam0);
	if ((Local_204.f_11[iParam0 /*498*/])->f_1 > 44)
	{
		(Local_204.f_11[iParam0 /*498*/])->f_1 = 44;
	}
	iVar6 = 0;
	while (iVar6 < (Local_204.f_11[iParam0 /*498*/])->f_1)
	{
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_1 = func_983(iParam0, iVar6);
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_2 = { func_984(iParam0, iVar6) };
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_5 = func_985(iParam0, iVar6);
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_6 = { func_986(iParam0, iVar6) };
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_9 = func_987(iParam0, iVar6);
		((Local_204.f_11[iParam0 /*498*/])->f_13[iVar6 /*11*/])->f_10 = func_988(iParam0, iVar6);
		iVar6++;
	}
}

void func_694(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vVar1 = { VOLUME::_0xF70F00013A62F866(&(Local_204.f_11[iParam0 /*498*/])) };
	vVar4 = { VOLUME::_0x3E2A25B2416DD67E(&(Local_204.f_11[iParam0 /*498*/])) };
	if ((Local_204.f_11[iParam0 /*498*/])->f_11 == 665633627 && vVar4.x == vVar4.y)
	{
		fVar0 = (vVar4.x + 2f);
		vVar7 = { vVar1 };
	}
	else
	{
		vVar7.x = ((vVar1.x + (vVar4.x * 0.5f)) + 2f);
		vVar7.f_1 = ((vVar1.y + (vVar4.y * 0.5f)) + 2f);
		vVar7.f_2 = vVar1.z;
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar7, vVar1, true);
	}
	aggregate.fme_king_of_the_castle.func_989(&((Local_204.f_11[iParam0 /*498*/])->f_12), vVar1, fVar0, 1, -1, 0);
}

void func_720(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	if (Local_0.f_1 > 0)
	{
		vVar0 = { (Local_204.f_11[Local_0.f_1 /*498*/])->f_2 };
		if (!aggregate.annesburg.func_121(vVar0))
		{
			uParam1->f_1 = { vVar0 };
			uParam2->f_1 = { vVar0 };
		}
		if (VOLUME::_0x92A78D0BEDB332A3(Local_204.f_4282))
		{
			NETWORK::_0x405DDEFB1F531B18(Local_204.f_4282, false, 0, 0);
		}
	}
}

void func_788(int iParam0)
{
	struct<15> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (aggregate.aberdeenpigfarm.func_45() != 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar31) || !PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	iVar33 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
	iVar34 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar32);
	if (iVar33 != Local_0.f_8)
	{
		return;
	}
	if ((Var0.f_3 || Var0.f_13) || Var0.f_14)
	{
		Local_0.f_9 = iVar34;
	}
}

void func_789(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(&(Local_43[Local_4752.f_1332 /*5*/]), iParam0))
	{
		aggregate.bandana.func_26(Local_43[Local_4752.f_1332 /*5*/], iParam0);
	}
}

void func_791(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_175(&(Local_43[Local_4752.f_1332 /*5*/]), iParam0))
	{
		aggregate.bandana.func_26(Local_43[Local_4752.f_1332 /*5*/], iParam0);
	}
}

void func_793()
{
	if (!aggregate.barcustomer_interaction.func_42(&(Local_4752.f_1298)))
	{
		aggregate.barcustomer_interaction.func_25(&(Local_4752.f_1298), 0);
	}
	else if (aggregate.barcustomer_interaction.func_58(&(Local_4752.f_1298)))
	{
		aggregate.fme_hot_property.func_965(&(Local_4752.f_1298));
	}
	if (aggregate.barcustomer_interaction.func_42(&(Local_4752.f_1298)) && aggregate.fme_animal_tagging.func_181(&(Local_4752.f_1298)) > func_1048())
	{
		aggregate.fme_archery.func_1155(1f);
		aggregate.fme_animal_tagging.func_1407(&(Local_4752.f_1298));
	}
}

void func_794()
{
	if (aggregate.barcustomer_interaction.func_42(&(Local_4752.f_1298)) && !aggregate.barcustomer_interaction.func_58(&(Local_4752.f_1298)))
	{
		aggregate.fme_hot_property.func_967(&(Local_4752.f_1298));
	}
}

void func_795()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == Local_0.f_8)
			{
				aggregate.fme_king_of_the_castle.func_1051(iVar1, 233295963);
			}
			else
			{
				aggregate.fme_king_of_the_castle.func_864(iVar1);
			}
		}
		iVar1++;
	}
}

void func_796()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	int iVar12;

	iVar0 = &Local_204.f_11[Local_0.f_1 /*498*/];
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar4 = vVar1.z;
	vVar5 = { VOLUME::_0xF70F00013A62F866(iVar0) };
	fVar8 = vVar5.z;
	vVar9 = { VOLUME::_0x3E2A25B2416DD67E(iVar0) };
	if (!aggregate.fme_escaped_convicts.func_408(64) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_4752.f_1325));
	}
	if (vVar9.z <= 6f)
	{
		if (MISC::ABSF((fVar8 - fVar4)) >= 1.75f)
		{
			if (aggregate.fme_condor_egg.func_545(8, Local_4752.f_1332) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
			{
				MAP::REMOVE_BLIP(&(Local_4752.f_1325));
			}
			func_791(8);
		}
		else
		{
			if (!aggregate.fme_condor_egg.func_545(8, Local_4752.f_1332) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
			{
				MAP::REMOVE_BLIP(&(Local_4752.f_1325));
			}
			func_789(8);
		}
	}
	else
	{
		if (!aggregate.fme_condor_egg.func_545(8, Local_4752.f_1332) && MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
		{
			MAP::REMOVE_BLIP(&(Local_4752.f_1325));
		}
		func_789(8);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
	{
		if (!aggregate.fme_condor_egg.func_545(8, Local_4752.f_1332))
		{
			Local_4752.f_1325 = func_1052(vVar5, 0);
			MAP::SET_BLIP_SPRITE(Local_4752.f_1325, 2113496404, true);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_4752.f_1325, "KC_KING_BLIP");
		}
		else
		{
			iVar12 = -308585968;
			if ((Local_204.f_11[Local_0.f_1 /*498*/])->f_11 == -1612834106)
			{
				iVar12 = 1259054292;
			}
			Local_4752.f_1325 = MAP::_0xA6EF0C54A3443E70(iVar12, &(Local_204.f_11[Local_0.f_1 /*498*/]));
			MAP::SET_BLIP_SPRITE(Local_4752.f_1325, 2113496404, true);
			MAP::_0x662D364ABF16DE2F(Local_4752.f_1325, 453264060);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_4752.f_1325, "KC_KING_BLIP");
		}
	}
	if (MAP::DOES_BLIP_EXIST(Local_4752.f_1325))
	{
		if (BUILTIN::VDIST(vVar1, vVar5) < 50f)
		{
			MAP::_0xB059D7BD3D78C16F(Local_4752.f_1325, 580546400);
		}
	}
	func_666(64);
}

void func_797()
{
	if (aggregate.fme_condor_egg.func_545(1, Local_4752.f_1332))
	{
		if ((!_NAMESPACE26::_0x81FB74C83C2ED69F(Local_0.f_8) && !aggregate.fme_dead_drop.func_799()) && Local_0.f_8 != 255)
		{
			func_1053();
			func_863(1);
		}
		else
		{
			func_1054();
			func_862(1);
		}
	}
	else
	{
		func_862(1);
		func_863(1);
	}
}

void func_798(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (Local_204.f_11[Local_0.f_1 /*498*/])->f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])) && func_987(Local_0.f_1, iVar0))
		{
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), func_1055(iParam0, ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1));
		}
		iVar0++;
	}
}

char* func_799()
{
	return "FM_KotC_DEFENDING";
}

char* func_802()
{
	return "FM_KotC_ATTACKING";
}

bool func_803()
{
	return func_1056(-1143056591, 0);
}

void func_804(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;

	HUD::_GET_COLOR_FROM_NAME(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	vVar4 = { VOLUME::_0xF70F00013A62F866(&(Local_204.f_11[Local_0.f_1 /*498*/])) };
	vVar7 = { VOLUME::_0x18675BC914891122(&(Local_204.f_11[Local_0.f_1 /*498*/])) };
	vVar10 = { VOLUME::_0x3E2A25B2416DD67E(&(Local_204.f_11[Local_0.f_1 /*498*/])) };
	vVar4.f_2 = (vVar4.z - (vVar10.z / 2f));
	iVar13 = -1795314153;
	if ((Local_204.f_11[Local_0.f_1 /*498*/])->f_11 == -1612834106)
	{
		iVar13 = 1857541051;
	}
	else
	{
		vVar10.x = (vVar10.x * 2f);
		vVar10.f_1 = (vVar10.y * 2f);
	}
	vVar10.f_2 = 1f;
	GRAPHICS::_0x2A32FAA57B937173(iVar13, vVar4, 0f, 0f, 0f, vVar7, vVar10, uVar0, uVar1, uVar2, uVar3, 0, 0, 2, 0, 0, 0, 0);
}

bool func_805()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (Local_204.f_11[Local_0.f_1 /*498*/])->f_1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_806(int iParam0)
{
	if (iParam0 == -1640778959)
	{
		aggregate.fme_archery.func_343("FM_KotC_DEFENDING", 1, 0);
	}
	else if (Local_204.f_4290 == -1640778959 || iParam0 == -1428663542)
	{
		aggregate.fme_archery.func_343("FM_KotC_ATTACKING", 1, 0);
	}
}

void func_808(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	iVar0 = (Local_204.f_11[Local_0.f_1 /*498*/])->f_1;
	iVar1 = &Local_204.f_11[Local_0.f_1 /*498*/];
	vVar11 = { VOLUME::_0xF70F00013A62F866(iVar1) };
	vVar14 = { VOLUME::_0x3E2A25B2416DD67E(iVar1) };
	vVar17 = { VOLUME::_0x18675BC914891122(iVar1) };
	fVar20 = vVar17.z;
	fVar21 = (vVar14.x * 0.5f);
	fVar22 = (vVar14.y * 0.5f);
	fVar23 = vVar14.x;
	if ((Local_204.f_11[Local_0.f_1 /*498*/])->f_11 == -1612834106)
	{
		switch (*uParam1)
		{
			case 0:
				vVar2.x = fVar21;
				vVar2.f_1 = fVar22;
				func_1057(&vVar2, &(vVar2.f_1), fVar20);
				vVar2 = { vVar2 + vVar11 };
				vVar5.x = (fVar21 * -1f);
				vVar5.f_1 = fVar22;
				func_1057(&vVar5, &(vVar5.f_1), fVar20);
				vVar5 = { vVar5 + vVar11 };
				fVar24 = (IntToFloat(BUILTIN::FLOOR(vVar14.x)) / BUILTIN::TO_FLOAT(BUILTIN::FLOOR(10f)));
				fVar24 = aggregate.coffee_drinking.func_45(fVar24, 0.75f, 5f);
				break;
			case 1:
				vVar2.x = (fVar21 * -1f);
				vVar2.f_1 = fVar22;
				func_1057(&vVar2, &(vVar2.f_1), fVar20);
				vVar2 = { vVar2 + vVar11 };
				vVar5.x = (fVar21 * -1f);
				vVar5.f_1 = (fVar22 * -1f);
				func_1057(&vVar5, &(vVar5.f_1), fVar20);
				vVar5 = { vVar5 + vVar11 };
				fVar24 = (IntToFloat(BUILTIN::FLOOR(vVar14.y)) / BUILTIN::TO_FLOAT(BUILTIN::FLOOR(10f)));
				fVar24 = aggregate.coffee_drinking.func_45(fVar24, 0.75f, 5f);
				break;
			case 2:
				vVar2.x = (fVar21 * -1f);
				vVar2.f_1 = (fVar22 * -1f);
				func_1057(&vVar2, &(vVar2.f_1), fVar20);
				vVar2 = { vVar2 + vVar11 };
				vVar5.x = fVar21;
				vVar5.f_1 = (fVar22 * -1f);
				func_1057(&vVar5, &(vVar5.f_1), fVar20);
				vVar5 = { vVar5 + vVar11 };
				fVar24 = (IntToFloat(BUILTIN::FLOOR(vVar14.x)) / BUILTIN::TO_FLOAT(BUILTIN::FLOOR(10f)));
				fVar24 = aggregate.coffee_drinking.func_45(fVar24, 0.75f, 5f);
				break;
			case 3:
				vVar2.x = fVar21;
				vVar2.f_1 = (fVar22 * -1f);
				func_1057(&vVar2, &(vVar2.f_1), fVar20);
				vVar2 = { vVar2 + vVar11 };
				vVar5.x = fVar21;
				vVar5.f_1 = fVar22;
				func_1057(&vVar5, &(vVar5.f_1), fVar20);
				vVar5 = { vVar5 + vVar11 };
				fVar24 = (IntToFloat(BUILTIN::FLOOR(vVar14.y)) / BUILTIN::TO_FLOAT(BUILTIN::FLOOR(10f)));
				fVar24 = aggregate.coffee_drinking.func_45(fVar24, 0.75f, 5f);
				break;
		}
		if (*uParam0 == 0)
		{
			((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1 = func_600();
		}
		else
		{
			iVar25 = *uParam0;
			iVar25 = (iVar25 % 3);
			switch (iVar25)
			{
				case 0:
					iVar26 = func_1058();
					break;
				case 1:
					iVar26 = func_1059();
					break;
				case 2:
					iVar26 = func_1060();
					break;
			}
			((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1 = iVar26;
		}
		vVar8 = { func_1061(vVar2, vVar5, *uParam0, fVar24) };
		((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2 = { vVar8 };
		(Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/] = OBJECT::CREATE_OBJECT(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1, ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2, false, false, false, false, true);
		ENTITY::SET_ENTITY_HEADING(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		if (iVar0 > 44)
		{
			return;
		}
		func_1062(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2);
		if (!ENTITY::_0x9587913B9E772D29(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), 1))
		{
		}
		*uParam0++;
		(Local_204.f_11[Local_0.f_1 /*498*/])->f_1++;
		switch (*uParam1)
		{
			case 0:
			case 2:
				if (*uParam0 >= 10 || (fVar24 * IntToFloat(*uParam0)) >= vVar14.x)
				{
					*uParam1++;
					*uParam0 = 0;
				}
				break;
			case 1:
			case 3:
				if (*uParam0 >= 10 || (fVar24 * IntToFloat(*uParam0)) >= vVar14.y)
				{
					*uParam1++;
					*uParam0 = 0;
				}
				break;
		}
	}
	else if (*uParam0 < 36)
	{
		if ((*uParam0 % 9) == 0)
		{
			((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1 = func_600();
		}
		else
		{
			iVar27 = *uParam0;
			iVar27 = (iVar27 % 3);
			switch (iVar27)
			{
				case 0:
					iVar28 = func_1058();
					break;
				case 1:
					iVar28 = func_1059();
					break;
				case 2:
					iVar28 = func_1060();
					break;
			}
			((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1 = iVar28;
		}
		vVar2 = { aggregate.fme_king_of_the_castle.func_1063((10f * IntToFloat(*uParam0))) };
		vVar8 = { vVar11 + vVar2 * Vector(fVar23, fVar23, fVar23) };
		((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2 = { vVar8 };
		(Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/] = OBJECT::CREATE_OBJECT(((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_1, ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2, false, false, false, false, true);
		ENTITY::SET_ENTITY_HEADING(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		if (iVar0 > 44)
		{
			return;
		}
		func_1062(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/])->f_2);
		if (!ENTITY::_0x9587913B9E772D29(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), 1))
		{
		}
		*uParam0++;
		(Local_204.f_11[Local_0.f_1 /*498*/])->f_1++;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), true);
	PHYSICS::SET_DISABLE_FRAG_DAMAGE(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), true);
	ENTITY::FREEZE_ENTITY_POSITION(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iVar0 /*11*/]), true);
}

void func_809(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iParam0 /*11*/])) && ((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iParam0 /*11*/])->f_10)
	{
		ENTITY::_0x9587913B9E772D29(&((Local_204.f_11[Local_0.f_1 /*498*/])->f_13[iParam0 /*11*/]), 1);
	}
}

void func_862(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_342()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_342());
		}
		aggregate.fme_animal_tagging.func_290(&(Local_204.f_4284));
		if (bParam0)
		{
			aggregate.fme_escaped_convicts.func_888(1);
		}
	}
}

void func_863(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(2))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_343()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_343());
		}
		aggregate.fme_animal_tagging.func_290(&(Local_204.f_4287));
		if (bParam0)
		{
			aggregate.fme_escaped_convicts.func_888(2);
		}
	}
}

bool func_981(var uParam0)
{
	*uParam0 = Local_204.f_1.f_1;
	uParam0->f_2 = 106906195;
	return (DATAFILE::_0x603AC35FD4602C76(Local_204.f_1.f_1) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_982(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_1171(&Var0, iParam0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_983(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			iVar6 = 0;
			aggregate.fme_animal_tagging.func_40(Var0, 1489732360, &iVar6, 0);
			iVar5 = iVar6;
		}
	}
	return iVar5;
}

Vector3 func_984(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_143(Var0, -1984789670, &vVar5, 0);
		}
	}
	return vVar5;
}

float func_985(int iParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_142(Var0, 211737478, &fVar5, 0);
		}
	}
	return fVar5;
}

Vector3 func_986(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.fme_animal_tagging.func_143(Var0, 1408350205, &vVar5, 0);
		}
	}
	return vVar5;
}

bool func_987(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 1;
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.flow_controller.func_458(Var0, 2131029455, &iVar5, 0);
		}
	}
	return iVar5;
}

int func_988(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_1171(&Var0, iParam0))
	{
		Var0.f_2 = 2125442394;
		Var0.f_3 = iParam1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			aggregate.flow_controller.func_458(Var0, 1837257751, &iVar5, 0);
		}
	}
	return iVar5;
}

int func_1048()
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

	fVar0 = 1000f;
	fVar1 = (Local_4559[Local_4752.f_1332 /*6*/])->f_2;
	fVar2 = aggregate.fme_animal_tagging.func_631(&(Local_4752.f_13));
	fVar3 = 10f;
	if (fVar2 > (fVar1 + fVar3))
	{
		fVar4 = 30f;
		fVar5 = ((fVar2 - fVar1) - fVar3);
		if (fVar5 > fVar4)
		{
			fVar5 = fVar4;
		}
		fVar6 = (fVar5 / fVar4);
		fVar7 = 500f;
		fVar8 = (fVar0 - fVar7);
		fVar9 = (fVar6 * fVar8);
		fVar0 = (fVar0 - fVar9);
	}
	fVar0 = (fVar0 * func_1212(aggregate.fme_dead_drop.func_799()));
	return BUILTIN::FLOOR(fVar0);
}

var func_1052(vector3 vParam0, int iParam3)
{
	var uVar0;

	uVar0 = MAP::_0x554D9D53F696D002(408396114, vParam0);
	return uVar0;
}

void func_1053()
{
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_342());
		aggregate.fme_escaped_convicts.func_515(1);
		aggregate.fme_animal_tagging.func_1407(&(Local_204.f_4284));
	}
	else if (aggregate.barcustomer_interaction.func_42(&(Local_204.f_4284)) && aggregate.fme_animal_tagging.func_181(&(Local_204.f_4284)) > 300)
	{
		func_862(0);
	}
}

void func_1054()
{
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(func_343());
		aggregate.fme_escaped_convicts.func_515(2);
		aggregate.fme_animal_tagging.func_1407(&(Local_204.f_4287));
	}
	else if (aggregate.barcustomer_interaction.func_42(&(Local_204.f_4287)) && aggregate.fme_animal_tagging.func_181(&(Local_204.f_4287)) > 300)
	{
		func_863(0);
	}
}

int func_1055(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1433439452:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 8;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case 178519428:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 8;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case 1364528141:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 8;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case -479539844:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 1;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case -791100729:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 1;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case -1691025263:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 1;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case 682138542:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 1;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
		case 389769403:
			switch (iParam0)
			{
				case 1937193856:
					return 0;
				case -1428663542:
					return 8;
				case -1640778959:
					return 2;
				default:
					break;
			}
			break;
	}
	return 1;
}

int func_1056(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = iParam1;
	if (func_981(&Var0))
	{
		aggregate.flow_controller.func_458(Var0, iParam0, &iVar5, 1);
	}
	return iVar5;
}

void func_1057(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

int func_1058()
{
	return -1433439452;
}

int func_1059()
{
	return 178519428;
}

int func_1060()
{
	return 1364528141;
}

Vector3 func_1061(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7)
{
	return vParam0 + FtoV((IntToFloat(iParam6) * fParam7)) * aggregate.ambient_fishing_scenario.func_26(vParam3 - vParam0);
}

void func_1062(int iParam0, vector3 vParam1)
{
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iParam0))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(vParam1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	}
}

bool func_1171(var uParam0, int iParam1)
{
	if (func_664(uParam0))
	{
		uParam0->f_2 = 1485225107;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

float func_1212(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1f;
	if (bParam0)
	{
		return fVar0;
	}
	if (!aggregate.aberdeenpigfarm.func_175(&(Local_43[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/]), 1))
	{
		return fVar0;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && aggregate.aberdeenpigfarm.func_175(&(Local_43[iVar3 /*5*/]), 1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar2) && iVar2 != PLAYER::PLAYER_ID())
			{
				fVar0 = (fVar0 - 0.1f);
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_1224(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1939057->f_108)
	{
		aggregate.fme_animal_tagging.func_1254(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		aggregate.fme_animal_tagging.func_1114(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!aggregate.fme_animal_tagging.func_1255(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				aggregate.fme_animal_tagging.func_1256(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", aggregate.fme_animal_tagging.func_1257(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar9 = aggregate.fme_animal_tagging.func_1258(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						aggregate.fme_animal_tagging.func_1259(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", aggregate.fme_animal_tagging.func_1260());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", aggregate.fme_animal_tagging.func_1261(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (aggregate.fme_animal_tagging.func_1262())
					{
						if (aggregate.fme_animal_tagging.func_1263(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", aggregate.fme_animal_tagging.func_1264(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (aggregate.fme_animal_tagging.func_1265(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else if (aggregate.fme_animal_tagging.func_1266(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(aggregate.fme_animal_tagging.func_1268((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (aggregate.fme_animal_tagging.func_1269(iVar2))
					{
						iVar11 = uParam0->f_159;
						if (((*uParam1)[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = aggregate.fme_animal_tagging.func_1270(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(aggregate.fme_animal_tagging.func_1268((*uParam1)[iVar0 /*23*/], uParam0->f_159), aggregate.fme_animal_tagging.func_1271(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159));
					}
					if (aggregate.fme_animal_tagging.func_1269(iVar3))
					{
						sVar6 = aggregate.fme_animal_tagging.func_933(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !aggregate.fme_animal_tagging.func_1266(uParam0->f_159)) && !aggregate.fme_animal_tagging.func_1273(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(aggregate.fme_animal_tagging.func_1267((*uParam1)[iVar0 /*23*/], uParam0->f_159), aggregate.fme_animal_tagging.func_1271(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", aggregate.fme_animal_tagging.func_1104(aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", aggregate.fme_animal_tagging.func_933(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = aggregate.fme_animal_tagging.func_1270(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(aggregate.fme_animal_tagging.func_1272((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), aggregate.fme_animal_tagging.func_1271(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0 = (iVar0 + 1);
		}
		uParam0->f_149 = iVar1;
	}
}

