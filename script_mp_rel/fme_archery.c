#region Local Var
	float fLocal_0 = 0f;
	float fLocal_1 = 0f;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	struct<118> Local_7 = { 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<5> Local_130[32];
	struct<853> Local_291 = { 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1144 = 7;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = -1;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	struct<18> Local_1157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1175 = 255;
	var uLocal_1176 = 255;
	var uLocal_1177 = 255;
	var uLocal_1178 = 255;
	var uLocal_1179 = 255;
	var uLocal_1180 = 255;
	var uLocal_1181 = 255;
	var uLocal_1182 = 255;
	var uLocal_1183 = 255;
	var uLocal_1184 = 255;
	var uLocal_1185 = 255;
	var uLocal_1186 = 255;
	var uLocal_1187 = 255;
	var uLocal_1188 = 255;
	var uLocal_1189 = 255;
	var uLocal_1190 = 255;
	var uLocal_1191 = 255;
	var uLocal_1192 = 255;
	var uLocal_1193 = 255;
	var uLocal_1194 = 255;
	var uLocal_1195 = 255;
	var uLocal_1196 = 255;
	var uLocal_1197 = 255;
	var uLocal_1198 = 255;
	var uLocal_1199 = 255;
	var uLocal_1200 = 255;
	var uLocal_1201 = 255;
	var uLocal_1202 = 255;
	var uLocal_1203 = 255;
	var uLocal_1204 = 255;
	var uLocal_1205 = 255;
	var uLocal_1206 = 255;
	struct<6> Local_1207[32];
	struct<1442> Local_1400 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	float fLocal_2847 = 0f;
	float fLocal_2848 = 0f;
	var uLocal_2849 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_0 = 15f;
	fLocal_1 = 0.67f;
	iLocal_2 = -2026534332;
	fLocal_2847 = 1f;
	fLocal_2848 = 1f;
	iVar0 = ScriptParam_0;
	aggregate_func_825(iVar0);
	aggregate_func_3464(&ScriptParam_0);
	while (!aggregate_func_6730(ScriptParam_0.f_7))
	{
		aggregate_func_2960();
		BUILTIN::WAIT(0);
	}
	aggregate_func_1703();
	aggregate_func_2819();
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_7, 123, 38);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_7), 123, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_130, 161, 39);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_130[0 /*5*/]), 161, "m_clientData");
}

void func_64()
{
	Local_291 = Local_1400.f_3;
	GRAPHICS::_0xFAAD23DE7A54FC14();
	GRAPHICS::ANIMPOSTFX_PLAY(func_166());
	WEAPON::_0xDA5D3F2C6DD5B5D4(1);
	OBJECT::_0xF92099527DB8E2A7(128, 0);
	func_167();
	WEAPON::SET_PED_INFINITE_AMMO(Global_35, false, joaat("weapon_bow"));
}

void func_125()
{
	aggregate_func_1312(func_342(), 1, 1);
	DATAFILE::_DATAFILE_UNLOAD(Local_291.f_1);
	func_344();
	func_345();
	Global_1912861 = 0;
}

char* func_166()
{
	return "MP_ArcheryTarget";
}

void func_167()
{
	if (!aggregate_func_1649(func_387(), &(Local_291.f_1), 600, -1, 0, 0))
	{
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 0, "locations/location(id=%x)/variants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 1, "target_group_set(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 2, "group(%i):index");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 3, "locations/location(id=%x)/target_groups/target_group(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 4, "target(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 5, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 6, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 7, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 8, "locations/location(id=%x)/ammo_pickups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_291.f_1, 9, "pickup(%i)");
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !aggregate_func_4240((Local_1207[iVar0 /*6*/])->f_1, iParam0))
		{
			return false;
		}
		iVar0 = (iVar0 + 1);
	}
	return true;
}

bool func_196()
{
	if (func_402(1))
	{
		if (!aggregate_func_4260(&Local_7))
		{
			aggregate_func_4480(&Local_7);
		}
		if (aggregate_func_4732(&Local_7) > 7000)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_421(1418533863);
	iVar1 = func_421(863196319);
	iVar2 = func_421(1444957042);
	STREAMING::REQUEST_MODEL(iVar0, false);
	STREAMING::REQUEST_MODEL(iVar1, false);
	STREAMING::REQUEST_MODEL(iVar2, false);
	STREAMING::REQUEST_MODEL(iLocal_2, false);
	STREAMING::REQUEST_MODEL(-1416495420, false);
	if ((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_MODEL_LOADED(iVar1)) || !STREAMING::HAS_MODEL_LOADED(iVar2)) || !STREAMING::HAS_MODEL_LOADED(iLocal_2)) || !STREAMING::HAS_MODEL_LOADED(-1416495420))
	{
		return false;
	}
	iVar3 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar3);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar3)
	{
		return false;
	}
	return true;
}

void func_249()
{
	if (Local_291.f_852 == 0)
	{
		func_485();
	}
	if (!aggregate_func_6777(Local_1400.f_1332))
	{
		return;
	}
	aggregate_func_1312(func_486(), 1, 0);
	func_487();
	func_488();
	Global_1912861 = -789269373;
}

void func_259()
{
	if (Local_291.f_852 == 0)
	{
		func_485();
	}
	func_516();
	func_517();
	func_518();
	func_519();
	func_520();
}

char[] func_308(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FMARCH_SHARD_OUTRO_PRIMARY_WON", sParam0);
}

char[] func_311(var uParam0, var uParam1, char[4] cParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char[4] cParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FMARCH_SHARD_OUTRO_PRIMARY_FAILED");
}

bool func_324()
{
	char* sVar0;

	sVar0 = func_166();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sVar0);
	}
	GRAPHICS::_0x5C9978A2A3DC3D0D();
	func_576();
	func_577();
	return func_578();
}

char* func_342()
{
	return "FME_ARCHERY_END";
}

void func_344()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_7.f_59 - 1))
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_291.f_2[iVar0])))
		{
			MAP::REMOVE_BLIP(Local_291.f_2[iVar0]);
		}
		iVar0++;
	}
}

void func_345()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_291.f_117[iVar0])))
		{
			MAP::REMOVE_BLIP(Local_291.f_117[iVar0]);
		}
		iVar0++;
	}
}

int func_387()
{
	return -1809577895;
}

void func_397()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<5> Var135;
	int iVar140;
	var uVar141;

	func_654();
	Var0 = Local_291.f_1;
	Var0.f_2 = 0;
	Var0.f_3 = Local_1400.f_2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
	Var0.f_2 = 1;
	Var0.f_3 = iVar6;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	iVar7 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	uVar8 = 25;
	iVar140 = 0;
	while (iVar140 <= (iVar7 - 1))
	{
		Var135 = { Var0 };
		Var135.f_2 = 2;
		Var135.f_3 = iVar140;
		if (!DATAFILE::_DATAFILE_GET_INT(&uVar141, &Var135))
		{
		}
		else if (func_655(uVar141, &uVar8))
		{
			func_656(&uVar8);
		}
		iVar140++;
	}
}

void func_398()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	vector3 vVar12;
	float fVar15;
	int iVar16;

	Var0 = Local_291.f_1;
	Var0.f_2 = 8;
	Var0.f_3 = Local_1400.f_2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	if (iVar5 > 5)
	{
		return;
	}
	if (!NETWORK::_0xF0460C7BF80011EA(iVar5))
	{
		return;
	}
	iVar6 = 0;
	MISC::SET_BIT(&iVar6, 1);
	MISC::SET_BIT(&iVar6, 4);
	MISC::SET_BIT(&iVar6, 32);
	MISC::SET_BIT(&iVar6, 262144);
	iVar16 = 0;
	while (iVar16 <= (iVar5 - 1))
	{
		Var7 = { Var0 };
		Var7.f_2 = 9;
		Var7.f_3 = iVar16;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 5;
			if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar12, &Var7))
			{
				return;
			}
			Var7.f_2 = 6;
			if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar15, &Var7))
			{
				return;
			}
			Local_7.f_117[iVar16] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_bow_mp"), vVar12, 0f, 0f, fVar15, iVar6, 10, 2, false, iLocal_2, 0, 0f, 0);
			OBJECT::SET_PICKUP_REGENERATION_TIME(&(Local_7.f_117[iVar16]), 600);
		}
		iVar16++;
	}
	Local_7.f_60 = iVar5;
}

bool func_402(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
		}
		else if (!aggregate_func_4368(Local_130[iVar1 /*5*/], iParam0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_420()
{
	Global_1912861 = 0;
	func_344();
	func_345();
	func_576();
	aggregate_func_1312(func_342(), 1, 1);
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 1418533863:
			return 1000705175;
		case 863196319:
			return -36237369;
		case 1444957042:
			return -73658703;
		default:
			break;
	}
	return 1000705175;
}

char* func_450()
{
	return "FMARCH_HELP_TEMP_WEAPON";
}

int func_474()
{
	return joaat("weapon_bow");
}

void func_485()
{
	var uVar0;
	vector3 vVar1;
	int iVar4;

	if (Local_7.f_59 < 5)
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 <= (Local_7.f_59 - 1))
	{
		vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f) };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iVar4])))
		{
			OBJECT::SET_OBJECT_TARGETTABLE(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), true, 0f);
			GRAPHICS::_0x7DFB49BCDB73089A(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), true);
			func_747(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), &vVar1);
			if (&Local_7.f_61[iVar4])
			{
				Local_291.f_796[iVar4] = OBJECT::CREATE_OBJECT(-1416495420, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), true, false), false, false, true, false, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(&(Local_291.f_796[iVar4]), NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), false);
				ENTITY::SET_ENTITY_HEADING(&(Local_291.f_796[iVar4]), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4]))));
			}
			if (iLocal_5 < 31)
			{
				PLAYER::_0x6ECFC621A168424C(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), 0);
				PLAYER::_0xAC67098A1E54ABB0(PLAYER::PLAYER_ID(), NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar4])), &uVar0);
				iLocal_5++;
				iLocal_6++;
			}
		}
		iVar4++;
	}
	Local_291.f_852 = 1;
}

char* func_486()
{
	return "FME_ARCHERY_START";
}

void func_487()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_7.f_59 - 1))
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_291.f_2[iVar0])))
		{
			MAP::REMOVE_BLIP(Local_291.f_2[iVar0]);
		}
		func_748(iVar0);
		iVar0++;
	}
}

void func_488()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_7.f_60 - 1))
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_291.f_117[iVar0])))
		{
			MAP::REMOVE_BLIP(Local_291.f_117[iVar0]);
		}
		if (OBJECT::DOES_PICKUP_EXIST(&(Local_7.f_117[iVar0])))
		{
			func_749(iVar0, OBJECT::GET_PICKUP_COORDS(&(Local_7.f_117[iVar0])));
		}
		iVar0++;
	}
}

void func_516()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -2036121834:
				func_765(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_517()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (Local_291.f_134 == 0)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= (Local_291.f_134 - 1))
	{
		iVar0 = (Global_1273882->f_20 - (Local_291.f_123[iVar3 /*2*/])->f_1);
		fVar2 = MISC::_0xEF50E344A8F93784(aggregate_func_5608((IntToFloat(iVar0) / 1000f), 1f), 0f, 1f, 18);
		func_767(&(Local_291.f_123[iVar3 /*2*/]), (1f - fVar2), fVar2);
		if (IntToFloat(iVar0) >= 1000f)
		{
			iVar1 = iVar3 + 1;
		}
		iVar3++;
	}
	if (iVar1 == 0)
	{
		return;
	}
	iVar3 = iVar1;
	while (iVar3 <= (Local_291.f_134 - 1))
	{
		Local_291.f_123[(iVar3 - iVar1) /*2*/] = &Local_291.f_123[iVar3 /*2*/];
		(Local_291.f_123[(iVar3 - iVar1) /*2*/])->f_1 = (Local_291.f_123[iVar3 /*2*/])->f_1;
		iVar3++;
	}
	Local_291.f_134 = (Local_291.f_134 - iVar1);
}

void func_518()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = iLocal_3;
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iVar0])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_7.f_3[iVar0]));
			func_768(iVar2, iVar0);
		}
		if (iVar0 == iLocal_3)
		{
			if ((iLocal_3 - iVar1) < 5)
			{
				iVar3 = iLocal_3 + 1;
				if (iVar3 >= 55)
				{
					iVar3 = 0;
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iVar3])))
				{
					func_769(iVar3);
					func_770(iVar3);
				}
				iLocal_3 = iVar3;
			}
		}
		iVar0++;
	}
}

void func_519()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!aggregate_func_6777(iVar0))
	{
		return;
	}
	if (aggregate_func_4368(Local_130[iVar0 /*5*/], 1) && !func_402(1))
	{
		aggregate_func_3535(14, "FMARCH_OBJECTIVE_END", -1, 0);
	}
	else
	{
		aggregate_func_3535(6, "FMARCH_OBJECTIVE", -1, 0);
	}
	if (!aggregate_func_1963(&((Local_130[iVar0 /*5*/])->f_1), Local_291.f_114, 3) && !MAP::DOES_BLIP_EXIST(&(Local_291.f_2[Local_291.f_114])))
	{
		func_748(Local_291.f_114);
	}
	if (OBJECT::DOES_PICKUP_OBJECT_EXIST(&(Local_7.f_117[Local_291.f_115])))
	{
		if (!MAP::DOES_BLIP_EXIST(&(Local_291.f_117[Local_291.f_115])))
		{
			func_749(Local_291.f_115, OBJECT::GET_PICKUP_COORDS(&(Local_7.f_117[Local_291.f_115])));
		}
	}
	else if (MAP::DOES_BLIP_EXIST(&(Local_291.f_117[Local_291.f_115])))
	{
		MAP::REMOVE_BLIP(Local_291.f_117[Local_291.f_115]);
	}
	Local_291.f_114 = (Local_291.f_114 + 1 % Local_7.f_59);
	Local_291.f_115 = (Local_291.f_115 + 1 % 5);
	func_771();
}

void func_520()
{
	if (!AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Local_1157 == 5)
	{
		aggregate_func_1312(func_486(), 1, 0);
	}
}

void func_576()
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= (Local_7.f_59 - 1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_7.f_3[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_7.f_3[iVar1]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				PLAYER::_0xDC5E09D012D759C4(iVar2, iVar2, 0);
				PLAYER::_0x9A957912CE2EABD1(PLAYER::GET_PLAYER_INDEX(), iVar2, &uVar0);
				aggregate_func_1473(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 1065353216 /* Float: 1f */);
				ENTITY::DELETE_ENTITY(&iVar2);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_291.f_796[iVar1])))
		{
			OBJECT::DELETE_OBJECT(Local_291.f_796[iVar1]);
		}
		iVar1++;
	}
}

void func_577()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_7.f_117 - 1))
	{
		if (OBJECT::DOES_PICKUP_EXIST(&(Local_7.f_117[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(&(Local_7.f_117[iVar0])))
		{
			OBJECT::REMOVE_PICKUP(&(Local_7.f_117[iVar0]));
		}
		iVar0++;
	}
}

int func_578()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Local_7.f_59 - 1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iVar0])))
		{
			iVar1 = NETWORK::NET_TO_ENT(&(Local_7.f_3[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_654()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = Local_1400.f_1276;
	iVar1 = aggregate_func_2393(2);
	if (iVar1 > iVar0)
	{
		iVar1 = iVar0;
	}
	fVar2 = (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(25));
	iLocal_4 = (30 + BUILTIN::FLOOR((fVar2 * BUILTIN::TO_FLOAT(iVar1))));
	iLocal_4 = aggregate_func_5045(iLocal_4, 30, 55);
}

bool func_655(var uParam0, var uParam1)
{
	struct<5> Var0;
	struct<127> Var5;
	var uVar132;
	struct<5> Var133;
	int iVar138;

	Var0 = Local_291.f_1;
	Var0.f_2 = 3;
	Var0.f_3 = Local_1400.f_2;
	Var0.f_4 = uParam0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var5 = 25;
	Var5.f_126 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar138 = 0;
	while (iVar138 <= (Var5.f_126 - 1))
	{
		Var133 = { Var0 };
		Var133.f_2 = 4;
		Var133.f_3 = iVar138;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var133.f_1), &Var133))
		{
		}
		else
		{
			Var133.f_2 = 5;
			if (!DATAFILE::_DATAFILE_GET_VECTOR(Var5[iVar138 /*5*/], &Var133))
			{
				return false;
			}
			Var133.f_2 = 6;
			if (!DATAFILE::_DATAFILE_GET_FLOAT(&((Var5[iVar138 /*5*/])->f_3), &Var133))
			{
				return false;
			}
			Var133.f_2 = 7;
			if (!DATAFILE::_DATAFILE_GET_HASH(&uVar132, &Var133))
			{
				return false;
			}
			else
			{
				(Var5[iVar138 /*5*/])->f_4 = uVar132;
			}
		}
		iVar138++;
	}
	*uParam1 = { Var5 };
	return true;
}

void func_656(var uParam0)
{
	int iVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(uParam0->f_126))
	{
		return;
	}
	if (Local_7.f_59 >= iLocal_4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_126 - 1))
	{
		if (aggregate_func_930(Local_7.f_3[Local_7.f_59], func_421(((*uParam0)[iVar0 /*5*/])->f_4), *((*uParam0)[iVar0 /*5*/]), 1, 0))
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_ENT(&(Local_7.f_3[Local_7.f_59])), ((*uParam0)[iVar0 /*5*/])->f_3);
			OBJECT::SET_OBJECT_TARGETTABLE(NETWORK::NET_TO_OBJ(&(Local_7.f_3[Local_7.f_59])), true);
			GRAPHICS::_0x7DFB49BCDB73089A(NETWORK::NET_TO_OBJ(&(Local_7.f_3[Local_7.f_59])), true);
			GRAPHICS::_0x7C348310A6E2FB91(NETWORK::NET_TO_OBJ(&(Local_7.f_3[Local_7.f_59])), 0);
			aggregate_func_1473(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(&(Local_7.f_3[Local_7.f_59])), true, false), 1065353216 /* Float: 1f */);
			if (((*uParam0)[iVar0 /*5*/])->f_4 == 863196319)
			{
				ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_7.f_3[Local_7.f_59])), *((*uParam0)[iVar0 /*5*/]) + Vector(0.05f, 0f, 0f), true, false, true, true);
				Local_7.f_61[Local_7.f_59] = 1;
			}
			Local_7.f_59++;
			if (Local_7.f_59 >= iLocal_4)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_695(float fParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_474();
	if (iVar0 != 0 && aggregate_func_2850(iVar0, 1))
	{
		aggregate_func_1474(iVar0, 0, 1);
	}
}

void func_747(int iParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = -1;
	vVar1 = { 0f, 0f, 0f };
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_994(iVar4))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, func_995(iVar4));
		if (iVar0 != -1)
		{
			vVar1 = { ENTITY::_0x5E214112806591EA(iParam0, iVar0) };
		}
	}
	if (aggregate_func_4268(vVar1))
	{
		ENTITY::_0xF3FDA9A617A15145(iParam0, &vVar5, &vVar8);
		vVar1 = { func_996(vVar5, vVar8) };
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, vVar1) };
	}
	ENTITY::_0xAF7F3099B9FEB535(iParam0, vVar1 + *uParam1);
}

void func_748(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_7.f_3[iParam0])))
	{
		return;
	}
	Local_291.f_2[iParam0] = MAP::_0x23F74C2FDA6E7C61(-1082366112, NETWORK::NET_TO_ENT(&(Local_7.f_3[iParam0])));
	MAP::_0x662D364ABF16DE2F(&(Local_291.f_2[iParam0]), 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_291.f_2[iParam0]), "FMARCH_BLIP_NAME");
}

void func_749(int iParam0, vector3 vParam1)
{
	Local_291.f_117[iParam0] = MAP::_0x554D9D53F696D002(joaat("BLIP_STYLE_PICKUP"), vParam1);
	MAP::SET_BLIP_SPRITE(&(Local_291.f_117[iParam0]), 573732443, false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_291.f_117[iParam0]), "AMMO_ARROW");
}

void func_765(int iParam0)
{
	struct<6> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_5 != joaat("weapon_bow"))
	{
		return;
	}
	if (!func_1000(Var0))
	{
		return;
	}
	func_1001(Var0.f_1, Var0.f_2, Var0.f_3, Var0.f_4);
}

void func_767(int iParam0, float fParam1, float fParam2)
{
	float fVar0[4];
	bool bVar5;

	bVar5 = GRAPHICS::_0xE8A8378BF651079C(iParam0, fVar0[0], fVar0[1], fVar0[2], fVar0[3]);
	if (!bVar5)
	{
		return;
	}
	fVar0[0] = fParam1;
	fVar0[1] = fParam2;
	GRAPHICS::_0xE92012611461A42A(iParam0, fVar0[0], fVar0[1], fVar0[2], fVar0[3]);
}

void func_768(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_994(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, func_995(iVar0));
		if (iVar1 != -1)
		{
			*(Local_291.f_135[iParam1 /*12*/]) = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar1) };
			(Local_291.f_135[iParam1 /*12*/])->f_9 = { (Local_291.f_135[iParam1 /*12*/])->f_6 };
			(Local_291.f_135[iParam1 /*12*/])->f_6 = { ENTITY::_0x3AB3A77672F6473F(iParam0, iVar1, 0, 2) };
			if (aggregate_func_4268((Local_291.f_135[iParam1 /*12*/])->f_3))
			{
				(Local_291.f_135[iParam1 /*12*/])->f_3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar1) };
			}
		}
	}
}

void func_769(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (aggregate_func_1963(&((Local_130[iVar0 /*5*/])->f_1), iParam0, 3))
	{
		if ((&Local_291.f_58[iParam0] - Global_1273882->f_20) >= 120000)
		{
			aggregate_func_2007(&((Local_130[iVar0 /*5*/])->f_1), iParam0, 3);
			OBJECT::SET_OBJECT_TARGETTABLE(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iParam0])), true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iParam0])), true, 0f);
			GRAPHICS::_0x7DFB49BCDB73089A(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iParam0])), true);
			func_767(NETWORK::NET_TO_ENT(&(Local_7.f_3[iParam0])), 0f, 0f);
		}
	}
}

void func_770(int iParam0)
{
	var uVar0;
	int iVar1;

	if (!aggregate_func_1963(&((Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/])->f_1), iParam0, 3))
	{
		if (iLocal_5 < 31)
		{
			if (iParam0 == iLocal_6)
			{
				iVar1 = NETWORK::NET_TO_OBJ(&(Local_7.f_3[iParam0]));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					return;
				}
				PLAYER::_0x6ECFC621A168424C(iVar1, iVar1, 0);
				PLAYER::_0xAC67098A1E54ABB0(PLAYER::PLAYER_ID(), iVar1, &uVar0);
				iLocal_5++;
				iLocal_6++;
			}
		}
	}
}

void func_771()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (aggregate_func_1500(954660191 /* GXTEntry: "Arrows" */, aggregate_func_1967(0), -1591664384, 0, 0, 0) < 6)
	{
		if (!aggregate_func_4368(Local_130[iVar0 /*5*/], 2))
		{
			aggregate_func_4247(Local_130[iVar0 /*5*/], 2);
			Local_1400.f_1289 = aggregate_func_3074("FMARCH_LOW_AMMO");
		}
		if (!aggregate_func_4368(Local_130[iVar0 /*5*/], 4))
		{
			aggregate_func_4247(Local_130[iVar0 /*5*/], 4);
		}
	}
	else if (aggregate_func_4368(Local_130[iVar0 /*5*/], 4))
	{
		aggregate_func_4247(Local_130[iVar0 /*5*/], 4);
	}
}

bool func_934(int iParam0, int iParam1)
{
	*iParam0 = 954660191; /* GXTEntry: "Arrows" */
	*iParam1 = 15;
	return true;
}

bool func_994(int iParam0)
{
	switch (iParam0)
	{
		case 1000705175:
			return false;
		case -73658703:
		case -36237369:
			return true;
		default:
			break;
	}
	return false;
}

char* func_995(int iParam0)
{
	switch (iParam0)
	{
		case -36237369:
			return "p_targetArchery02xTarget";
		case -73658703:
			return "p_targetArchery03xTarget";
		default:
			break;
	}
	return "";
}

Vector3 func_996(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

bool func_1000(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	return iParam0 == aggregate_func_4270(iVar0);
}

void func_1001(int iParam0, vector3 vParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	vector3 vVar9;
	int iVar12;
	float fVar13;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	bool bVar19;

	iVar1 = 0;
	while (iVar1 <= (Local_7.f_59 - 1))
	{
		if (NETWORK::NET_TO_ENT(&(Local_7.f_3[iVar1])) == iParam0)
		{
			iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
			if (aggregate_func_1963(&((Local_130[iVar2 /*5*/])->f_1), iVar1, 3))
			{
				return;
			}
			iVar3 = -1;
			fVar4 = 0f;
			iVar5 = 0;
			iVar6 = 0;
			sVar7 = "FMARCH_OUTER_RING";
			sVar8 = "OUTER_RING";
			vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			iVar12 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (func_994(iVar12))
			{
				iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, func_995(iVar12));
				if (iVar3 != -1)
				{
					vVar9 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
				}
			}
			fVar13 = BUILTIN::VDIST2(vParam1, vVar9);
			if (fVar13 < (0.103f * 0.103f))
			{
				fVar4 = 100f;
				sVar7 = "FMARCH_BULLSEYE";
				sVar8 = "BULLSEYE";
			}
			else if (fVar13 < (0.213f * 0.213f))
			{
				fVar4 = 50f;
				sVar7 = "FMARCH_MID_RING";
				sVar8 = "INNER_RING";
			}
			else if (fVar13 < (0.353f * 0.353f))
			{
				fVar4 = 25f;
				sVar7 = "FMARCH_OUTER_RING";
				sVar8 = "OUTER_RING";
			}
			else
			{
				return;
			}
			_NAMESPACE71::_0xDD1232B332CBB9E7(10, 1, 0);
			aggregate_func_1989(&((Local_130[iVar2 /*5*/])->f_1), iVar1, 3);
			if (MAP::DOES_BLIP_EXIST(&(Local_291.f_2[iVar1])))
			{
				MAP::REMOVE_BLIP(Local_291.f_2[iVar1]);
			}
			func_1151(iParam0);
			aggregate_func_3722(MISC::_CREATE_VAR_STRING(6, sVar7, fVar4), 0, -2, 0, 0, 0, 1);
			AUDIO::PLAY_SOUND_FRONTEND(sVar8, "FMA_ARCHERY_Sounds", true, 0);
			vVar14 = { aggregate_func_1977(PLAYER::GET_PLAYER_INDEX()) };
			fVar17 = BUILTIN::VDIST2(vVar14, vVar9);
			if (fVar17 > (fLocal_0 * fLocal_0))
			{
				iVar5 = aggregate_func_5045(BUILTIN::FLOOR((BUILTIN::SQRT(fVar17) * fLocal_1)), 0, 100);
				aggregate_func_3722(MISC::_CREATE_VAR_STRING(2, "FMARCH_LONG_SHOT", iVar5), 0, -2, 0, 0, 0, 1);
			}
			bVar18 = aggregate_func_1533((Local_291.f_135[iVar1 /*12*/])->f_3, *(Local_291.f_135[iVar1 /*12*/]), 0.01f, 1);
			bVar19 = !aggregate_func_1533((Local_291.f_135[iVar1 /*12*/])->f_9, (Local_291.f_135[iVar1 /*12*/])->f_6, 0.01f, 1);
			if (!bVar18 || bVar19)
			{
				iVar6 = 25;
				aggregate_func_3722(MISC::_CREATE_VAR_STRING(2, "FMARCH_MOVING_TARGET", iVar6), 0, -2, 0, 0, 0, 1);
			}
			if ((Local_1400.f_1277 < aggregate_func_6818() && !aggregate_func_4368(Local_130[iVar2 /*5*/], 8)) && aggregate_func_3482(Local_1400.f_1289))
			{
				aggregate_func_4247(Local_130[iVar2 /*5*/], 8);
				Local_1400.f_1289 = aggregate_func_3074("FMARCH_HELP_HIT_TARGET");
			}
			Local_291.f_116++;
			aggregate_func_7436(((fVar4 + IntToFloat(iVar5)) + IntToFloat(iVar6)));
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), false, 0f);
			OBJECT::SET_OBJECT_TARGETTABLE(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), false);
			GRAPHICS::_0x7DFB49BCDB73089A(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), false);
			PLAYER::_0xDC5E09D012D759C4(NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), 0);
			PLAYER::_0x9A957912CE2EABD1(PLAYER::PLAYER_ID(), NETWORK::NET_TO_OBJ(&(Local_7.f_3[iVar1])), &uVar0);
			iLocal_5 = (iLocal_5 - 1);
			Local_291.f_58[iVar1] = Global_1273882->f_20;
		}
		iVar1++;
	}
}

void func_1151(int iParam0)
{
	if (Local_291.f_134 >= 5)
	{
		func_767(iParam0, 0f, 1f);
		return;
	}
	Local_291.f_123[Local_291.f_134 /*2*/] = iParam0;
	(Local_291.f_123[Local_291.f_134 /*2*/])->f_1 = Global_1273882->f_20;
	func_767(iParam0, 1f, 0f);
	Local_291.f_134++;
}

