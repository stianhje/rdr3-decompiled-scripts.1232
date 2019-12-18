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
#endregion

void __EntryFunction__()
{
	aggregate_func_2604();
	while (!aggregate_func_7974())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	aggregate_func_4264();
	aggregate_func_2819();
}

void func_3()
{
	if (aggregate_func_1452())
	{
		func_13();
	}
	func_14();
}

void func_9()
{
	int iVar0;

	func_18();
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		((*Global_1247291)[iVar0 /*10*/])->f_1 = TASK::_0xE1C105E6BBA48270();
		iVar0++;
	}
	func_19();
}

void func_13()
{
	int iVar0;

	while (iVar0 < 5)
	{
		func_20(Global_1246311->f_146);
		Global_1246311->f_146++;
		if (Global_1246311->f_146 > 4)
		{
			Global_1246311->f_146 = 0;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;

	while (iVar0 < 3)
	{
		func_21(Global_1247291->f_74);
		Global_1247291->f_74++;
		if (Global_1247291->f_74 > 4)
		{
			Global_1247291->f_74 = 0;
		}
		iVar0++;
	}
	func_22();
}

void func_15()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 21)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1247291->f_51[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Global_1247291->f_51[iVar0]));
		}
		iVar0++;
	}
}

void func_18()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1246311, 147, 7);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1246311), 147, "g_mpScanManagerHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1246458, 833, 8);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1246458)[0 /*26*/]), 833, "g_mpScanManagerPlayerData");
}

void func_19()
{
	Global_1247291->f_51[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2661.152f, -1484.681f, 46.283f, 0f, 0f, 0f, 100f, 13.5f, 10.25f, "BadTiles_SaintDenisTrainTracks");
	Global_1247291->f_51[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3523.964f, 817.257f, 42f, 0f, 0f, 80.1952f, 2275.5f, 610.5f, 200f, "BadTiles_Annesburg");
	Global_1247291->f_51[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3734.058f, -840.8746f, 42f, 0f, 0f, 105.9452f, 1417.75f, 1235.25f, 200f, "BadTiles_Siska");
	Global_1247291->f_51[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2772.144f, -2239.2f, 42f, 0f, 0f, 27.36972f, 3500f, 736.5f, 200f, "BadTiles_SaintDenisBay");
	Global_1247291->f_51[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1.913f, -2816.89f, 42f, 0f, 0f, 0.36973f, 2529.75f, 913.25f, 200f, "BadTiles_SouthFlatIronLake");
	Global_1247291->f_51[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1113.942f, -2260.829f, 42f, 0f, 0f, 0f, 283.25f, 420f, 200f, "BadTiles_QuakersCove");
	Global_1247291->f_51[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(458.9158f, -1037.307f, 52.07294f, 0f, 0f, 0f, 160f, 160f, 30f, "BadTiles_ScarlettMeadowsTreelessIsland");
	Global_1247291->f_51[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3094.862f, -2471.42f, 59.01997f, 0f, 0f, -10f, 19f, 5f, 4f, "BadTiles_ArmadilloCliff");
	Global_1247291->f_51[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-221.1699f, 1336.444f, 163.4222f, 0f, 0f, 0f, 85.8828f, 114.2864f, 61.82489f, "RelocateOrigin_DakotaRiverCanyon");
	Global_1247291->f_51[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(461.5739f, 1603.823f, 196.7019f, 0f, 0f, 0f, 100f, 125f, 50f, "RelocateOrigin_DakotaRiverCanyonEast");
	Global_1247291->f_51[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5187.701f, -2106.909f, 24.13687f, 0f, 0f, 6.750001f, 200f, 140f, 100f, "RelocateOrigin_RathskellerFork");
	Global_1247291->f_51[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6695.072f, -3567.247f, -22.21381f, 0f, 0f, 30.49729f, 150f, 100f, 50f, "RelocateOrigin_CoronadoNorth");
	Global_1247291->f_51[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6569.904f, -3773.847f, -12.74948f, 0f, 0f, 16.91815f, 280f, 100f, 50f, "RelocateOrigin_CoronadoSouth");
	Global_1247291->f_51[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3411.939f, -1815.859f, 56.37196f, 0f, 0f, 0f, 300f, 100f, 50f, "RelocateOrigin_HennigansSteadRailBridge");
	Global_1247291->f_51[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2640.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "RelocateOrigin_HangingDogRanchCave");
	Global_1247291->f_51[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(435.5826f, 1784.918f, 190.0176f, 0f, 0f, -10.5f, 191f, 43.5f, 20f, "RelocateOrigin_BachhusBridge");
	Global_1247291->f_51[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-220.0916f, 1302.687f, 177.1935f, 0f, 0f, -44.74999f, 750f, 2500f, 345f, "CanyonArea_DakotaRiverCanyon");
	Global_1247291->f_51[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1142.307f, 1793.674f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelEast");
	Global_1247291->f_51[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1006.591f, 1730.76f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelWest");
	Global_1247291->f_51[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2119.513f, 79.23312f, 253.9226f, 0f, 0f, 0f, 100f, 103.5f, 40f, "UnscannableVolume_MountShannCave");
	Global_1247291->f_51[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2720.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "UnscannableVolume_HangingDogRanchCave");
	Global_1247291->f_51[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2269.427f, 1091.326f, 56.73091f, 0f, 0f, 0f, 100f, 110f, 80f, "UnscannableVolume_ElysianPoolCave");
}

void func_20(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;

	func_25(iParam0);
	switch (Global_1246311[iParam0 /*29*/])
	{
		case 0:
			if (func_27(iParam0, 2, aggregate_func_8556(iParam0)))
			{
				if (func_27(iParam0, 64, aggregate_func_8556(iParam0)))
				{
					aggregate_func_9249(iParam0, 1);
				}
				else
				{
					func_29(iParam0, 0);
				}
			}
			else if (func_30(iParam0, 4, aggregate_func_8556(iParam0)))
			{
				vVar0 = { func_31(iParam0) };
				if (aggregate_func_4268(vVar0))
				{
					func_29(iParam0, 0);
				}
				else
				{
					((*Global_1246311)[iParam0 /*29*/])->f_22 = { vVar0 };
					aggregate_func_9230(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_34(((*Global_1246311)[iParam0 /*29*/])->f_22, &iVar3))
			{
				vVar4 = { func_35(iVar3) };
				if (!aggregate_func_4268(vVar4))
				{
					((*Global_1246311)[iParam0 /*29*/])->f_22 = { vVar4 };
				}
				else
				{
					func_29(iParam0, 0);
					return;
				}
			}
			if (func_36(((*Global_1246311)[iParam0 /*29*/])->f_12.f_1, ((*Global_1246311)[iParam0 /*29*/])->f_22))
			{
				((*Global_1246311)[iParam0 /*29*/])->f_12.f_4 = { aggregate_func_2907(((*Global_1246311)[iParam0 /*29*/])->f_12.f_1 - ((*Global_1246311)[iParam0 /*29*/])->f_22) };
				((*Global_1246311)[iParam0 /*29*/])->f_12.f_8 = 35f;
				aggregate_func_9248(iParam0, 48);
				func_29(iParam0, 0);
				return;
			}
			aggregate_func_9230(iParam0, 2);
			break;
		case 2:
			if (func_27(iParam0, 8, aggregate_func_8556(iParam0)))
			{
				if (func_30(iParam0, 16, aggregate_func_8556(iParam0)))
				{
					func_29(iParam0, 0);
				}
				else
				{
					func_39(iParam0);
					return;
				}
			}
			break;
	}
}

void func_21(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = aggregate_func_8556(iParam0);
	if (func_40(iParam0, -1) != iVar0)
	{
		func_41(iParam0);
	}
	switch (Global_1246311[iParam0 /*29*/])
	{
		case 0:
			if (!func_42(iParam0, 2, -1) && !func_42(iParam0, 4, -1))
			{
				if (!func_43(((*Global_1246311)[iParam0 /*29*/])->f_12.f_1))
				{
					func_44(iParam0, 64);
					func_44(iParam0, 2);
					return;
				}
				((*Global_1247291)[iParam0 /*10*/])->f_6 = { ((*Global_1246311)[iParam0 /*29*/])->f_12.f_4 };
				func_44(iParam0, 1);
				if (!aggregate_func_695(((*Global_1246311)[iParam0 /*29*/])->f_12.f_1, (*Global_1247291)[iParam0 /*10*/], &bVar1, ((*Global_1246311)[iParam0 /*29*/])->f_12, 0, ((*Global_1246311)[iParam0 /*29*/])->f_12.f_8, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, ((*Global_1246311)[iParam0 /*29*/])->f_12.f_7))
				{
					if (bVar1)
					{
						func_44(iParam0, 2);
					}
				}
				else
				{
					((*Global_1247291)[iParam0 /*10*/])->f_3.f_2 = (((*Global_1247291)[iParam0 /*10*/])->f_3.f_2 + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(((*Global_1247291)[iParam0 /*10*/])->f_3, &fVar4, 0))
					{
						func_44(iParam0, 2);
						return;
					}
					else if (fVar4 == 0f)
					{
						func_44(iParam0, 2);
						return;
					}
					if (!PATHFIND::IS_NAVMESH_LOADED_IN_AREA(((*Global_1247291)[iParam0 /*10*/])->f_3, ((*Global_1247291)[iParam0 /*10*/])->f_3))
					{
						func_44(iParam0, 2);
						return;
					}
					((*Global_1247291)[iParam0 /*10*/])->f_3.f_2 = fVar4;
					((*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/])->f_2 = { ((*Global_1247291)[iParam0 /*10*/])->f_3 };
					func_44(iParam0, 4);
				}
			}
			break;
		case 2:
			if (!func_42(iParam0, 8, -1))
			{
				if (!aggregate_func_9226(iParam0, 4))
				{
					fVar3 = BUILTIN::VDIST(Global_36, ((*Global_1246311)[iParam0 /*29*/])->f_22);
					if (fVar3 < 18f)
					{
						func_44(iParam0, 16);
						func_44(iParam0, 8);
						return;
					}
				}
				if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), ((*Global_1246311)[iParam0 /*29*/])->f_22, 1.5f, 100f))
				{
					if (!func_42(iParam0, 32, -1))
					{
						((*Global_1247291)[iParam0 /*10*/])->f_9 = GRAPHICS::CREATE_TRACKED_POINT();
						if (((*Global_1247291)[iParam0 /*10*/])->f_9 != 0 || ((*Global_1247291)[iParam0 /*10*/])->f_9 != -1)
						{
							GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1247291)[iParam0 /*10*/])->f_9, ((*Global_1246311)[iParam0 /*29*/])->f_22 + Vector(0.5f, 0f, 0f), 1f);
							func_44(iParam0, 32);
						}
						else
						{
							func_44(iParam0, 8);
							return;
						}
					}
					iVar2 = GRAPHICS::_0xDFE332A5DA6FE7C9(((*Global_1247291)[iParam0 /*10*/])->f_9);
					if (iVar2 != -1)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1247291)[iParam0 /*10*/])->f_9))
						{
							func_44(iParam0, 16);
						}
						if ((((*Global_1247291)[iParam0 /*10*/])->f_9 != 0 && ((*Global_1247291)[iParam0 /*10*/])->f_9 != -1) && GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1247291)[iParam0 /*10*/])->f_9))
						{
							GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1247291)[iParam0 /*10*/])->f_9);
						}
						func_44(iParam0, 8);
					}
				}
				else
				{
					func_44(iParam0, 8);
				}
			}
			break;
	}
}

void func_22()
{
	if (!aggregate_func_8931())
	{
		return;
	}
	if (func_48(Global_1247291->f_75))
	{
		func_49();
		return;
	}
	if (!aggregate_func_4246(Global_1247291->f_86))
	{
		aggregate_func_4950(&(Global_1247291->f_86));
	}
	if (aggregate_func_5011(Global_1247291->f_86) > 1000)
	{
		func_49();
		return;
	}
}

void func_25(int iParam0)
{
	if (Global_1246311[iParam0 /*29*/] == -1)
	{
		return;
	}
	if (!aggregate_func_4246(((*Global_1246311)[iParam0 /*29*/])->f_27))
	{
		aggregate_func_4950(&(((*Global_1246311)[iParam0 /*29*/])->f_27));
	}
	if (Global_1246311[iParam0 /*29*/] == 4 || Global_1246311[iParam0 /*29*/] == 3)
	{
		if (aggregate_func_5011(((*Global_1246311)[iParam0 /*29*/])->f_27) > 5000)
		{
			aggregate_func_4073(iParam0);
			return;
		}
	}
	else if (aggregate_func_5011(((*Global_1246311)[iParam0 /*29*/])->f_27) > 10000)
	{
		aggregate_func_9249(iParam0, 3);
		return;
	}
}

bool func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (!func_42(iParam0, iParam1, iVar0) || func_40(iParam0, iVar0) != iParam2))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_29(int iParam0, int iParam1)
{
	if (((*Global_1246311)[iParam0 /*29*/])->f_26 > 0)
	{
		((*Global_1246311)[iParam0 /*29*/])->f_26 = (((*Global_1246311)[iParam0 /*29*/])->f_26 - 1);
	}
	if (((*Global_1246311)[iParam0 /*29*/])->f_26 > 0)
	{
		aggregate_func_4078(iParam0);
	}
	else
	{
		aggregate_func_9249(iParam0, iParam1);
	}
}

bool func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_42(iParam0, iParam1, iVar0)) && func_40(iParam0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_31(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_42(iParam0, 4, iVar0)) && func_40(iParam0, iVar0) == aggregate_func_8556(iParam0))
		{
			return ((*(*Global_1246458)[iVar0 /*26*/])[iParam0 /*5*/])->f_2;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

bool func_34(vector3 vParam0, int iParam3)
{
	*iParam3 = 0;
	while (*iParam3 <= 7)
	{
		if (VOLUME::_0xF256A75210C5C0EB(&(Global_1247291->f_51[*iParam3]), vParam0))
		{
			return true;
		}
		*iParam3++;
	}
	return false;
}

Vector3 func_35(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return 2761.631f, -1374.273f, 46.4021f;
				case 1:
					return 2584.707f, -1408.874f, 46.1841f;
				case 2:
					return 2657.596f, -1359.973f, 48.7346f;
				case 3:
					return 2591.586f, -1439.41f, 46.5108f;
				default:
					break;
			}
			break;
		case 6:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					return 692.1992f, -1059.64f, 53.6229f;
				case 1:
					return 683.2755f, -1089.386f, 54.6198f;
				case 2:
					return 680.8776f, -1030.875f, 47.1735f;
				case 3:
					return 665.3676f, -1133.833f, 48.3046f;
				case 4:
					return 682.7866f, -1116.154f, 51.5915f;
				case 5:
					return 682.3309f, -1059.608f, 53.6422f;
				default:
					break;
			}
			break;
		case 7:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					return -3097.274f, -2489.697f, 70.0502f;
				case 1:
					return -3124.842f, -2493.998f, 70.9493f;
				case 2:
					return -3118.868f, -2500.998f, 70.9476f;
				case 3:
					return -3090.036f, -2494.092f, 72.052f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_36(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;

	if (!func_56(vParam3))
	{
		return false;
	}
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { aggregate_func_2907(vVar4) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, true);
	fVar8 = (fVar7 / 6f);
	iVar9 = 1;
	while (iVar9 <= 5)
	{
		vVar0 = { vParam0 + vVar4 * Vector(fVar8, fVar8, fVar8) * FtoV(IntToFloat(iVar9)) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, 0))
		{
			if (MISC::ABSF((vVar0.z - fVar3)) > 30f)
			{
				return true;
			}
		}
		iVar9++;
	}
	return false;
}

void func_39(int iParam0)
{
	aggregate_func_4950(&(((*Global_1246311)[iParam0 /*29*/])->f_27));
	aggregate_func_9230(iParam0, 3);
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return ((*(*Global_1246458)[iParam1 /*26*/])[iParam0 /*5*/])->f_1;
}

void func_41(int iParam0)
{
	var uVar0;

	if ((((*Global_1247291)[iParam0 /*10*/])->f_9 != 0 && ((*Global_1247291)[iParam0 /*10*/])->f_9 != -1) && GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1247291)[iParam0 /*10*/])->f_9))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1247291)[iParam0 /*10*/])->f_9);
	}
	((*Global_1247291)[iParam0 /*10*/])->f_9 = 0;
	if (func_42(iParam0, 1, -1))
	{
		aggregate_func_2530((*Global_1247291)[iParam0 /*10*/], 1, 0);
		MISC::_COPY_MEMORY((*Global_1247291)[iParam0 /*10*/], &uVar0, 9);
		func_58(iParam0, 1);
	}
	((*Global_1247291)[iParam0 /*10*/])->f_2 = (aggregate_func_9190(iParam0) - ((*Global_1246311)[iParam0 /*29*/])->f_26);
	func_60(iParam0, aggregate_func_8556(iParam0));
	(*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/] = 0;
}

bool func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return aggregate_func_4240((*Global_1246458)[iParam2 /*26*/][iParam0 /*5*/], iParam1);
}

bool func_43(vector3 vParam0)
{
	int iVar0;
	var uVar1;

	uVar1 = TASK::_0x74F0209674864CBD();
	if (TASK::_0xFE5D28B9B7837CC1(uVar1, vParam0))
	{
		iVar0 = 1;
	}
	TASK::_0xBEEFBB608D2AA68A(uVar1);
	return iVar0;
}

void func_44(int iParam0, int iParam1)
{
	if (!func_42(iParam0, iParam1, -1))
	{
		aggregate_func_4247((*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/], iParam1);
	}
}

bool func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (aggregate_func_4017(&uParam0, &(((*Global_1246311)[iVar0 /*29*/])->f_1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_49()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	MISC::_COPY_MEMORY(&(Global_1247291->f_75), &vVar0, 11);
	aggregate_func_4591(&(Global_1247291->f_86));
}

bool func_56(vector3 vParam0)
{
	int iVar0;

	iVar0 = 16;
	while (iVar0 <= 16)
	{
		if (VOLUME::_0xF256A75210C5C0EB(&(Global_1247291->f_51[iVar0]), vParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_58(int iParam0, int iParam1)
{
	if (func_42(iParam0, iParam1, -1))
	{
		aggregate_func_4247((*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/], iParam1);
	}
}

void func_60(int iParam0, int iParam1)
{
	if (((*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/])->f_1 != iParam1)
	{
		((*(*Global_1246458)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/])[iParam0 /*5*/])->f_1 = iParam1;
	}
}

