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
	struct<49> Local_13 = { 0, 255, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<22> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	struct<18> Local_186 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_204 = 255;
	var uLocal_205 = 255;
	var uLocal_206 = 255;
	var uLocal_207 = 255;
	var uLocal_208 = 255;
	var uLocal_209 = 255;
	var uLocal_210 = 255;
	var uLocal_211 = 255;
	var uLocal_212 = 255;
	var uLocal_213 = 255;
	var uLocal_214 = 255;
	var uLocal_215 = 255;
	var uLocal_216 = 255;
	var uLocal_217 = 255;
	var uLocal_218 = 255;
	var uLocal_219 = 255;
	var uLocal_220 = 255;
	var uLocal_221 = 255;
	var uLocal_222 = 255;
	var uLocal_223 = 255;
	var uLocal_224 = 255;
	var uLocal_225 = 255;
	var uLocal_226 = 255;
	var uLocal_227 = 255;
	var uLocal_228 = 255;
	var uLocal_229 = 255;
	var uLocal_230 = 255;
	var uLocal_231 = 255;
	var uLocal_232 = 255;
	var uLocal_233 = 255;
	var uLocal_234 = 255;
	var uLocal_235 = 255;
	struct<6> Local_236[32];
	struct<1422> Local_429 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

// __EntryFunction__ == fme_animal_tagging.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_186, 50, 47);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_186), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_236, 193, 48);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_236[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 49, 40);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 49, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_62, 97, 41);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(vLocal_62[0 /*3*/]), 97, "m_clientData");
}

void func_64()
{
	Local_159.f_1 = Local_429.f_3;
	Local_159 = Local_429.f_2;
	if (!aggregate.fme_animal_tagging.func_50(func_166(), &(Local_159.f_3), 600, -1, 0, 0))
	{
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 814452583, "turnins/pickup(id=%x)/turnin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, -595886836, "turnins/pickup(id=%x)/spawns");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, -1309457284, "spawn_point(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 222505148, "propsets");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, -1443510071, "prop(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 796467835, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, -93903636, ":labelDeliverH");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 203933749, ":labelDeliverW");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, -1084640432, ":labelAlly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 1508252642, ":propset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_159.f_3, 382339740, ":heading");
	aggregate.fme_animal_tagging.func_35(-2065086408);
}

void func_125()
{
	if (MAP::DOES_BLIP_EXIST(Local_429.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_429.f_1325));
	}
	if (MAP::DOES_BLIP_EXIST(Local_159.f_12))
	{
		MAP::REMOVE_BLIP(&(Local_159.f_12));
	}
	func_341(3);
	func_342();
	func_343(0);
	func_344();
	DATAFILE::_DATAFILE_UNLOAD(Local_159.f_3);
}

int func_166()
{
	return 403893157;
}

bool func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.annesburg.func_121(Local_13.f_36))
	{
		func_392();
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (aggregate.annesburg.func_121((Local_13.f_4[iVar1 /*6*/])->f_2))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_4[iVar1 /*6*/])) || !PROPSET::_DOES_PROPSET_EXIST(NETWORK::_0xD08066E00D26C448(&(Local_13.f_4[iVar1 /*6*/]))))
			{
				PROPSET::_REQUEST_PROPSET((Local_13.f_4[iVar1 /*6*/])->f_1);
				if (!PROPSET::_HAS_PROPSET_LOADED((Local_13.f_4[iVar1 /*6*/])->f_1))
				{
					iVar0 = 1;
				}
				else
				{
					iVar2 = PROPSET::_CREATE_PROPSET((Local_13.f_4[iVar1 /*6*/])->f_1, (Local_13.f_4[iVar1 /*6*/])->f_2, 7, 0f, 1200f, true, true);
					Local_13.f_4[iVar1 /*6*/] = NETWORK::_0x74F99EF7EF503398(iVar2);
				}
			}
			iVar1++;
		}
	}
	if (iVar0 == 1)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_2) && NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		if (!aggregate.fme_archery.func_922(&(Local_13.f_2), func_393(), Local_13.f_36, 1, 0))
		{
			return false;
		}
		else
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(NETWORK::NET_TO_OBJ(Local_13.f_2), 0);
			ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_13.f_2), true);
			PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_ENT(Local_13.f_2), true);
		}
	}
	if (!func_395(Local_13.f_39, Local_13.f_45))
	{
		return false;
	}
	return true;
}

bool func_195()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_13.f_1 == 255)
	{
		if (func_402(2, &iVar0))
		{
			Local_13.f_1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			return false;
		}
	}
	else
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_1))
		{
			Local_13.f_1 = 255;
			return false;
		}
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			Local_13.f_1 = 255;
			return false;
		}
		iVar2 = iVar1;
		if (aggregate.fme_dead_drop.func_403(&(vLocal_62[iVar2 /*3*/]), 4))
		{
			return true;
		}
	}
	func_404();
	if (func_405())
	{
		return true;
	}
	func_406();
	return false;
}

bool func_220()
{
	if (!func_425())
	{
		return false;
	}
	switch (Local_159.f_1)
	{
		case 1128251250:
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			break;
		case 1999062905:
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
			break;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	Local_159.f_3.f_1 = { aggregate.fme_challenges.func_1469() };
	Local_159.f_13 = { aggregate.fme_challenges.func_1469() };
	Local_159.f_3.f_4 = 0f;
	return true;
}

void func_248()
{
	if (aggregate.fme_animal_tagging.func_152(Local_429.f_1332))
	{
		func_490();
		aggregate.fme_dead_drop.func_491(0);
		if ((!func_492() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_13)))
		{
			HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(NETWORK::NET_TO_PED(Local_13));
		}
	}
	func_493();
	func_494();
}

void func_258()
{
	func_343(1);
	func_522();
	func_523();
	func_494();
	func_524();
	func_525();
	aggregate.fme_dead_drop.func_526();
	func_527();
	func_528();
	func_529();
	func_530();
	func_531();
	func_532();
	func_533();
	func_534();
}

int func_268()
{
	return 113;
}

char* func_307(float fParam0)
{
	char* sVar0;

	switch (Local_159.f_1)
	{
		case 1128251250:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "DD_WON_H");
			break;
		case 1999062905:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "DD_WON_W");
			break;
	}
	return sVar0;
}

char* func_309()
{
	char* sVar0;

	if (Local_13.f_48 >= 30)
	{
		if (func_492())
		{
			sVar0 = "DD_FAIL_RESPAWN_W";
		}
		else
		{
			sVar0 = "DD_FAIL_RESPAWN_H";
		}
		return sVar0;
	}
	return "";
}

char* func_310(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "DD_FAILED_H");
}

bool func_323()
{
	func_590();
	func_591(1);
	func_342();
	func_592(1);
	return true;
}

void func_341(int iParam0)
{
	char* sVar0;
	bool bVar1;

	if (Local_159.f_8 != iParam0)
	{
		switch (iParam0)
		{
			case 0:
				break;
			case 1:
				sVar0 = "MC_DELIVERING";
				break;
			case 2:
				sVar0 = "MC_DEFENDING";
				break;
			case 3:
				sVar0 = "MC_SILENT";
				bVar1 = true;
				break;
		}
		if (!aggregate.fishing_core.func_230(sVar0, 1, bVar1))
		{
		}
		Local_159.f_8 = iParam0;
	}
}

void func_342()
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Local_159.f_18))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(&(Local_159.f_18));
}

void func_343(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 128) && aggregate.fme_animal_tagging.func_152(Local_429.f_1332))
		{
			PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 128);
		}
	}
	else if (aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 128))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
		aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 128);
	}
}

void func_344()
{
	if (Local_159.f_9 != 0)
	{
		Local_159.f_9.f_1 = 0;
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 253, false);
		aggregate.fme_animal_tagging.func_212(0);
	}
}

void func_392()
{
	struct<4> Var0;
	struct<4> Var5;

	Var0 = Local_159.f_3;
	Var0.f_2 = 814452583;
	Var0.f_3 = Local_429.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 796467835;
		DATAFILE::_DATAFILE_GET_VECTOR(&(Local_13.f_36), &Var0);
	}
	Var5 = Local_159.f_3;
	Var5.f_2 = -595886836;
	Var5.f_3 = Local_429.f_2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var5.f_1), &Var5))
	{
		func_672(&Var5);
	}
}

int func_393()
{
	return 389769403;
}

bool func_395(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	switch (Local_159.f_1)
	{
		case 1128251250:
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				Local_13.f_46++;
				if (Local_13.f_46 >= 150)
				{
					aggregate.fme_animal_tagging.func_176(8);
				}
				return false;
			}
			if (!aggregate.fme_challenges.func_1263(&Local_13, func_674(), vParam0, uParam3, 1, 0, 1, 1, 1))
			{
				return false;
			}
			else
			{
				iVar1 = NETWORK::NET_TO_ENT(Local_13);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
				iVar2 = NETWORK::NET_TO_PED(Local_13);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 273, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 253, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 217, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 471, true);
				AITRANSPORT::_0xDD0660C997DE94FD(iVar2, 1);
				PED::SET_PED_CONFIG_FLAG(iVar2, 319, true);
				PED::_SET_PED_OUTFIT_PRESET(iVar2, 0, 0);
			}
			break;
		case 1999062905:
			if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				Local_13.f_46++;
				if (Local_13.f_46 >= 150)
				{
					aggregate.fme_animal_tagging.func_176(8);
				}
				return false;
			}
			if (!aggregate.fme_condor_egg.func_999(&Local_13, func_676(), vParam0, uParam3, 1, 0, 0, 0))
			{
				return false;
			}
			else
			{
				iVar0 = NETWORK::NET_TO_VEH(Local_13);
				Local_13.f_3 = NETWORK::_0x74F99EF7EF503398(PROPSET::_CREATE_PROPSET_3(func_678(), vVar3, iVar0, 0f, false, 1, true));
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, false);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iVar0, false);
				VEHICLE::_0x226C6A4E3346D288(iVar0, 0);
				VEHICLE::_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(iVar0, true);
				func_679(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1065353216 /* Float: 1f */);
			}
			break;
	}
	Local_13.f_46 = 0;
	return true;
}

bool func_402(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate.fme_dead_drop.func_403(&(vLocal_62[iVar0 /*3*/]), iParam0))
		{
			*uParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_404()
{
	switch (Local_13.f_47)
	{
		case 0:
			if (!func_680() && func_681())
			{
				Local_13 = 0;
				Local_13.f_42 = { Local_159.f_13 };
				aggregate.fme_animal_tagging.func_212(1);
			}
			break;
		case 1:
			if (func_425() && func_683())
			{
				aggregate.fme_animal_tagging.func_212(2);
			}
			else
			{
				Local_13.f_48++;
				if (Local_13.f_48 >= 3)
				{
					Local_13.f_42 = { Local_159.f_3.f_1 };
					Local_13.f_45 = 0f;
					aggregate.fme_animal_tagging.func_212(2);
				}
			}
			break;
		case 2:
			if (func_395(Local_13.f_42, Local_13.f_45))
			{
				aggregate.fme_animal_tagging.func_212(3);
			}
			else
			{
				Local_13.f_48++;
			}
			break;
		case 3:
			if (func_684())
			{
				Local_13.f_48 = 0;
				aggregate.fme_animal_tagging.func_212(0);
			}
			break;
	}
}

bool func_405()
{
	return Local_13.f_48 >= 30;
}

void func_406()
{
	int iVar0;

	switch (Local_13.f_35)
	{
		case 0:
			if (func_492())
			{
				aggregate.fme_animal_tagging.func_212(4);
			}
			else if (func_686(&iVar0))
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			break;
		case 1:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_13)))
			{
				aggregate.fme_animal_tagging.func_212(2);
			}
			break;
		case 2:
			if (func_686(&iVar0))
			{
				aggregate.fme_animal_tagging.func_212(iVar0);
			}
			break;
		case 3:
			if (func_686(&iVar0))
			{
				aggregate.fme_animal_tagging.func_212(iVar0);
			}
			break;
		case 4:
			break;
	}
}

void func_408()
{
	if (Local_13.f_1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_1))
	{
		aggregate.fme_animal_tagging.func_632(Local_13.f_1);
	}
}

void func_424()
{
	func_341(3);
	func_698();
	func_343(0);
	func_344();
	if (MAP::DOES_BLIP_EXIST(Local_159.f_12))
	{
		MAP::REMOVE_BLIP(&(Local_159.f_12));
	}
	if (aggregate.fme_animal_tagging.func_152(Local_429.f_1332))
	{
		aggregate.fme_dead_drop.func_491(1);
		HUD::_UIPROMPT_CLEAR_FAVOURED_PED_FOR_CONFLICT_RESOLUTION();
	}
	func_342();
	func_591(1);
	if (Local_13.f_1 == PLAYER::PLAYER_ID())
	{
		aggregate.fme_archery.func_1315(9999.9f);
	}
}

bool func_425()
{
	switch (Local_159.f_1)
	{
		case 1128251250:
			STREAMING::REQUEST_MODEL(func_674(), false);
			if (!STREAMING::HAS_MODEL_LOADED(func_674()))
			{
				return false;
			}
			break;
		case 1999062905:
			STREAMING::REQUEST_MODEL(func_676(), false);
			if (!STREAMING::HAS_MODEL_LOADED(func_676()))
			{
				return false;
			}
			PROPSET::_REQUEST_PROPSET(func_678());
			if (!PROPSET::_HAS_PROPSET_LOADED(func_678()))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_441(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_429.f_1288 == 0 || !aggregate.fishing_core.func_107(Local_429.f_1288))
	{
		aggregate.fme_animal_tagging.func_345();
	}
	if (iParam0 >= 5 && (aggregate.fishing_core.func_107(Local_429.f_1287) && !bParam3))
	{
		aggregate.fme_animal_tagging.func_345();
		return false;
	}
	if (Local_429.f_1266 == 5 && iParam0 >= 5)
	{
		return false;
	}
	if (Local_429.f_1266 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			aggregate.fme_animal_tagging.func_345();
		}
		else
		{
			Local_429.f_1288 = aggregate.fme_animal_tagging.func_684(sParam1, iParam2, 0, 0, 1);
		}
		Local_429.f_1266 = iParam0;
		return true;
	}
	return false;
}

void func_490()
{
	char* sVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		Local_429.f_1325 = MAP::_0x23F74C2FDA6E7C61(618936128, NETWORK::NET_TO_ENT(Local_13));
		MAP::_0x662D364ABF16DE2F(Local_429.f_1325, 580546400);
		MAP::_0x662D364ABF16DE2F(Local_429.f_1325, 231194138);
		switch (Local_159.f_1)
		{
			case 1128251250:
				MAP::SET_BLIP_SPRITE(Local_429.f_1325, 564457427, true);
				sVar0 = "DD_HORSE";
				break;
			case 1999062905:
				MAP::SET_BLIP_SPRITE(Local_429.f_1325, 1012165077 /* GXTEntry: "Wagon" */, true);
				sVar0 = "DD_WAGON";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_429.f_1325, sVar0);
	}
}

bool func_492()
{
	switch (Local_159.f_1)
	{
		case 1999062905:
			return true;
		default:
			break;
	}
	return false;
}

bool func_493()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_159.f_1 == 1999062905)
	{
		iVar1 = NETWORK::NET_TO_VEH(Local_13);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar0);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 273, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 253, true);
			}
			iVar0++;
		}
	}
	return true;
}

void func_494()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13)))
	{
		aggregate.fme_animal_tagging.func_34(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_13), false, false));
		Local_159.f_13 = { aggregate.fme_challenges.func_1469() };
	}
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
				Jump @338; //curOff = 288
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
	if (Local_13.f_35 > (vLocal_62[Local_429.f_1332 /*3*/])->f_2)
	{
		func_794(Local_13.f_35);
	}
	switch (Local_13.f_35)
	{
		case 0:
			if (func_795())
			{
				func_794(1);
			}
			break;
		case 1:
			break;
		case 2:
			if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13)) && PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13)))
			{
				func_794(3);
			}
			break;
		case 3:
			if (func_796())
			{
				func_794(4);
			}
			break;
		case 4:
			break;
	}
}

void func_523()
{
	switch (Local_159.f_1)
	{
		case 1128251250:
			if (((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13))) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_13))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(NETWORK::NET_TO_PED(Local_13), 2.5f);
				PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_13), 6, true);
				PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_13), 7, true);
			}
			break;
		case 1999062905:
			if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13))) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_13)))
			{
				VEHICLE::_0x0C3F0F7F92CA847C(NETWORK::NET_TO_VEH(Local_13), 12f);
				if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 64))
				{
					func_797(NETWORK::_0xD08066E00D26C448(Local_13.f_3));
					aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 64);
				}
			}
			break;
	}
}

void func_524()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (aggregate.fme_animal_tagging.func_152(Local_429.f_1332))
	{
		bVar1 = aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1);
		if (bVar1)
		{
			if (MAP::DOES_BLIP_EXIST(Local_429.f_1325))
			{
				MAP::REMOVE_BLIP(&(Local_429.f_1325));
			}
		}
		else if (func_402(1, &iVar0))
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				if ((func_798() && !aggregate.fme_dead_drop.func_799()) && _NAMESPACE26::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_429.f_1325))
					{
						func_490();
					}
					MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -1636811933);
					MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -2145527776);
					MAP::_0x662D364ABF16DE2F(Local_429.f_1325, -1445216292);
				}
				else
				{
					if (!MAP::DOES_BLIP_EXIST(Local_429.f_1325))
					{
						func_490();
					}
					MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -1636811933);
					MAP::_0x662D364ABF16DE2F(Local_429.f_1325, -2145527776);
					MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -1445216292);
				}
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(Local_429.f_1325))
		{
			func_490();
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(Local_429.f_1325, -1636811933);
			MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -2145527776);
			MAP::_0xB059D7BD3D78C16F(Local_429.f_1325, -1445216292);
		}
		if (!MAP::DOES_BLIP_EXIST(Local_159.f_12))
		{
			if (bVar1 || (func_800(1) && !aggregate.fme_dead_drop.func_799()))
			{
				Local_159.f_12 = MAP::_0x45F13B7E0A15C880(-308585968, Local_13.f_36, 10f);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_159.f_12, "DD_DROP_OFF");
				MAP::_0x662D364ABF16DE2F(Local_159.f_12, 231194138);
				MAP::_0x662D364ABF16DE2F(Local_159.f_12, -521680853);
			}
			if (bVar1)
			{
				MAP::_0x662D364ABF16DE2F(Local_159.f_12, -1878373110);
			}
		}
		else if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1) && !func_800(1))
		{
			MAP::REMOVE_BLIP(&(Local_159.f_12));
		}
	}
	else
	{
		if (MAP::DOES_BLIP_EXIST(Local_429.f_1325))
		{
			MAP::REMOVE_BLIP(&(Local_429.f_1325));
		}
		if (MAP::DOES_BLIP_EXIST(Local_159.f_12))
		{
			MAP::REMOVE_BLIP(&(Local_159.f_12));
		}
	}
}

void func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_13);
			switch (Local_159.f_1)
			{
				case 1128251250:
					if (!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::IS_PED_ON_MOUNT(Global_35))
					{
						iVar2 = PED::GET_MOUNT(Global_35);
						if (aggregate.annesburg.func_253(iVar2) == iVar0)
						{
							aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 1);
							func_802();
						}
					}
					break;
				case 1999062905:
					iVar1 = NETWORK::NET_TO_VEH(Local_13);
					if (PED::IS_PED_IN_VEHICLE(Global_35, iVar1, false) && PED::_0x4E76CB57222A00E5(Global_35) == -1)
					{
						aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 1);
						func_802();
					}
					break;
			}
		}
	}
	else
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 1);
			return;
		}
		iVar0 = NETWORK::NET_TO_ENT(Local_13);
		switch (Local_159.f_1)
		{
			case 1128251250:
				if (ENTITY::IS_ENTITY_DEAD(iVar0) || !PED::IS_PED_ON_MOUNT(Global_35))
				{
					aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 1);
				}
				break;
			case 1999062905:
				iVar1 = NETWORK::NET_TO_VEH(Local_13);
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iVar1, false) || PED::_0x4E76CB57222A00E5(Global_35) != -1)
				{
					aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 1);
				}
				break;
		}
	}
}

void func_527()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	switch (Local_159.f_9)
	{
		case 0:
			if (aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			break;
		case 1:
			if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
			{
				aggregate.fme_animal_tagging.func_212(5);
			}
			else if (Local_159.f_9.f_2 == 0 || (MISC::GET_GAME_TIMER() - Local_159.f_9.f_2) > 15000)
			{
				func_804();
				Local_159.f_9.f_1 = MISC::GET_GAME_TIMER();
				Local_159.f_9.f_2 = Local_159.f_9.f_1;
				func_592(0);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
				PED::SET_PED_CONFIG_FLAG(Global_35, 253, true);
				aggregate.fme_animal_tagging.func_212(2);
			}
			else
			{
				aggregate.fme_animal_tagging.func_212(4);
			}
			break;
		case 2:
			aggregate.coffee_drinking.func_88(-1);
			aggregate.coffee_drinking.func_86(-1);
			aggregate.coffee_drinking.func_89(-1, 0);
			aggregate.coffee_drinking.func_24(19, 60f, 1, 1);
			aggregate.coffee_drinking.func_24(18, 60f, 1, 1);
			aggregate.coffee_drinking.func_24(20, 60f, 1, 1);
			aggregate.fme_animal_tagging.func_212(3);
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - Local_159.f_9.f_1) < 1800)
			{
			}
			else
			{
				Local_159.f_9.f_1 = 0;
				func_592(1);
				PED::SET_PED_CAN_BE_TARGETTED(Global_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 253, false);
				aggregate.fme_animal_tagging.func_212(4);
				Jump @381; //curOff = 344
				if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
				{
					aggregate.fme_animal_tagging.func_212(5);
				}
				Jump @381; //curOff = 371
				func_344();
			}
			default:
				break;
	}
}

void func_528()
{
	if (Local_159.f_21 == 0)
	{
		Local_159.f_21 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_159.f_21) > 1000)
	{
		Local_159.f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_152(Local_429.f_1332) && Local_159.f_8 > 0)
	{
		func_341(3);
		return;
	}
	if (aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
	{
		func_341(1);
		return;
	}
	if (!aggregate.fme_dead_drop.func_799())
	{
		if (func_800(1))
		{
			func_341(1);
		}
		else if (func_809(1))
		{
			func_341(2);
		}
	}
	else if (func_809(1))
	{
		func_341(2);
	}
}

void func_529()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
	{
		return;
	}
	switch (Local_159.f_1)
	{
		case 1128251250:
			iVar2 = NETWORK::NET_TO_ENT(Local_13);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iVar1, 0)))
				{
					iVar0 = PED::_0xB676EFDA03DADA52(iVar1, 0);
					func_810(iVar0);
				}
			}
			break;
		case 1999062905:
			iVar3 = NETWORK::NET_TO_VEH(Local_13);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1)))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1);
				func_810(iVar0);
			}
			break;
	}
}

void func_530()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_152(Local_429.f_1332))
	{
		return;
	}
	if (aggregate.fme_dead_drop.func_811())
	{
		return;
	}
	if (aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1))
	{
		sVar1 = func_812(1);
		if (func_441(12, sVar1, -1, 0))
		{
			func_813(PLAYER::PLAYER_ID());
		}
	}
	else if (func_402(1, &iVar0))
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		if ((func_798() && !aggregate.fme_dead_drop.func_799()) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar2))
		{
			sVar1 = MISC::_CREATE_VAR_STRING(10, func_812(0), aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar2), joaat("COLOR_PURE_WHITE")));
			if (func_441(10, sVar1, -1, 0))
			{
				func_813(iVar2);
			}
		}
		else
		{
			switch (Local_159.f_1)
			{
				case 1128251250:
					if (func_441(6, MISC::_CREATE_VAR_STRING(10, "DD_E_POSSESS_OBJ_H", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar2), joaat("COLOR_PURE_WHITE"))), -1, 0))
					{
						func_813(iVar2);
					}
					break;
				case 1999062905:
					if (func_441(6, MISC::_CREATE_VAR_STRING(10, "DD_E_POSSESS_OBJ_W", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar2), joaat("COLOR_PURE_WHITE"))), -1, 0))
					{
						func_813(iVar2);
					}
					break;
			}
		}
	}
	else
	{
		switch (Local_159.f_1)
		{
			case 1128251250:
				func_441(7, MISC::_CREATE_VAR_STRING(2, "DD_GRAB_H"), -1, 0);
				break;
			case 1999062905:
				func_441(7, MISC::_CREATE_VAR_STRING(2, "DD_GRAB_W"), -1, 0);
				break;
		}
	}
}

void func_531()
{
	int iVar0;

	if (((Local_429.f_1277 < aggregate.fme_animal_tagging.func_433() && !aggregate.fishing_core.func_277()) && !aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1)) && func_402(1, &iVar0))
	{
		if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 16) && (func_800(1) && !aggregate.fme_dead_drop.func_799()))
		{
			aggregate.camera_item.func_73(func_814(iVar0), 10000, 0, 0, 0, 1);
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 16);
		}
		else if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 32) && (!func_800(1) || aggregate.fme_dead_drop.func_799()))
		{
			aggregate.camera_item.func_73(func_815(iVar0), 10000, 0, 0, 0, 1);
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 32);
		}
	}
}

void func_532()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 1;
	bVar1 = NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13);
	if ((!aggregate.fme_animal_tagging.func_152(Local_429.f_1332) || aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1)) || !bVar1)
	{
		iVar0 = 0;
	}
	if (bVar1)
	{
		iVar2 = NETWORK::NET_TO_ENT(Local_13);
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			iVar0 = 0;
		}
	}
	if (func_402(1, &iVar4))
	{
		iVar3 = 1937193856;
		if (func_798() && !aggregate.fme_dead_drop.func_799())
		{
			iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5) && _NAMESPACE26::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5)))
			{
				iVar3 = -1640778959;
			}
		}
	}
	else
	{
		iVar3 = -1428663542;
	}
	switch (Local_159.f_1)
	{
		case 1999062905:
			func_816(iVar0, iVar3, 1100884054, "DeadDrop", iVar4);
			break;
		case 1128251250:
			func_816(iVar0, iVar3, 1100884054, "DeadDrop", iVar4);
			break;
	}
	func_591(0);
}

int func_533()
{
	if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 2))
	{
		if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 1)) && BUILTIN::VDIST(Global_36, Local_13.f_36) <= 10f)
		{
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 2);
		}
	}
	else if (Local_13.f_1 == PLAYER::PLAYER_ID())
	{
		if (!aggregate.fme_dead_drop.func_403(&(vLocal_62[Local_429.f_1332 /*3*/]), 4))
		{
			aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 4);
		}
		return 1;
	}
	return 0;
}

void func_534()
{
	switch ((vLocal_62[Local_429.f_1332 /*3*/])->f_1)
	{
		case 0:
			if (func_817())
			{
				if (MAP::DOES_BLIP_EXIST(Local_159.f_12))
				{
					MAP::REMOVE_BLIP(&(Local_159.f_12));
				}
				if (MAP::DOES_BLIP_EXIST(Local_429.f_1325))
				{
					MAP::REMOVE_BLIP(&(Local_429.f_1325));
				}
				aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 64);
				func_818(1);
			}
			break;
		case 1:
			if (func_425() && func_817())
			{
				func_818(2);
			}
			break;
		case 2:
			if (func_817())
			{
				func_818(3);
			}
			break;
		case 3:
			if (func_493())
			{
				func_818(4);
			}
			break;
		case 4:
			if (Local_13.f_47 == 0)
			{
				func_818(0);
			}
			break;
	}
}

struct<8> func_571()
{
	char cVar0[64];

	StringCopy(&cVar0, "DD_SHARD_OUTRO_TITLE_FAILED", 64);
	return cVar0;
}

void func_590()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_13);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
		{
			switch (Local_159.f_1)
			{
				case 1128251250:
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					iVar1 = NETWORK::NET_TO_PED(Local_13);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
					PED::SET_PED_CONFIG_FLAG(iVar1, 273, false);
					PED::SET_PED_CONFIG_FLAG(iVar1, 253, false);
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
					break;
				case 1999062905:
					iVar2 = NETWORK::NET_TO_VEH(Local_13);
					iVar3 = 0;
					while (iVar3 < 6)
					{
						iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar3);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar1, false);
							PED::SET_PED_CONFIG_FLAG(iVar1, 273, false);
							PED::SET_PED_CONFIG_FLAG(iVar1, 253, false);
						}
						iVar3++;
					}
					VEHICLE::_0x226C6A4E3346D288(iVar2, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
					break;
			}
		}
	}
	if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_2)) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13.f_2)))
	{
		iVar4 = NETWORK::NET_TO_ENT(Local_13.f_2);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
	}
	iVar5 = 0;
	while (iVar5 <= 4)
	{
		if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_4[iVar5 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_4[iVar5 /*6*/]))) && PROPSET::_DOES_PROPSET_EXIST(NETWORK::_0xD08066E00D26C448(&(Local_13.f_4[iVar5 /*6*/]))))
		{
			iVar6 = NETWORK::_0xD08066E00D26C448(&(Local_13.f_4[iVar5 /*6*/]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar6);
		}
		iVar5++;
	}
}

void func_591(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_159.f_20), iVar0) && (iParam0 == 1 || !aggregate.fme_dead_drop.func_403(&(vLocal_62[iVar2 /*3*/]), 1)))
			{
				if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) && _NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
				{
					iVar1 = 1283453238;
				}
				else
				{
					iVar1 = 1277358601;
				}
				aggregate.fme_dead_drop.func_854(iVar0, iVar1);
				SCRIPTS::_0xD426E2E3288469D6(&(Local_159.f_20), iVar0);
			}
		}
		iVar2++;
	}
}

void func_592(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && iVar1 != PLAYER::PLAYER_ID())
		{
			PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Global_35, iVar1, bParam0);
		}
		iVar0++;
	}
}

void func_672(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;

	iVar6 = 100;
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam0, uParam0->f_1);
	Var10 = { *uParam0 };
	iVar15 = ITEMSET::CREATE_ITEMSET(false);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		Var10.f_2 = -1309457284;
		Var10.f_3 = iVar1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var10.f_1), &Var10))
		{
			Var10.f_2 = 796467835;
			if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar7, &Var10))
			{
				iVar3 = ENTITY::_0x59B57C4B06531E1E(vVar7, 40f, iVar15, 1);
				if (iVar3 > 0)
				{
					iVar4 = 0;
					while (iVar4 <= (iVar3 - 1))
					{
						iVar16 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar15);
						iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(iVar16));
						if (ENTITY::DOES_ENTITY_EXIST(iVar17) && PED::IS_PED_A_PLAYER(iVar17))
						{
							iVar5++;
						}
						iVar4++;
					}
				}
				else
				{
					iVar5 = 0;
				}
				if (iVar5 < iVar6)
				{
					iVar2 = iVar1;
					iVar6 = iVar5;
				}
			}
		}
		iVar5 = 0;
		iVar3 = 0;
		Var10 = { *uParam0 };
		ITEMSET::_0x20A4BF0E09BEE146(iVar15);
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar15);
	uParam0->f_2 = -1309457284;
	uParam0->f_3 = iVar2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_2 = 796467835;
		DATAFILE::_DATAFILE_GET_VECTOR(&(Local_13.f_39), uParam0);
		uParam0->f_2 = 382339740;
		DATAFILE::_DATAFILE_GET_FLOAT(&(Local_13.f_45), uParam0);
		func_968(uParam0);
	}
}

int func_674()
{
	return -1038436471;
}

int func_676()
{
	return joaat("cart01");
}

int func_678()
{
	return -239337607;
}

void func_679(vector3 vParam0, int iParam3)
{
	struct<10> Var0;
	var uVar10;

	Var0 = 56;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = Local_429;
	Var0.f_5 = 1;
	Var0.f_6 = { vParam0 };
	Var0.f_9 = iParam3;
	uVar10 = aggregate.dynamic_craft_scenario.func_194(0, 8);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar10))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 10, 38, &uVar10);
}

bool func_680()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_ENT(Local_13);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (func_492())
	{
		iVar1 = NETWORK::NET_TO_VEH(Local_13);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_681()
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_13);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
		{
			func_679(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1065353216 /* Float: 1f */);
			ENTITY::DELETE_ENTITY(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13);
			return false;
		}
	}
	return true;
}

int func_683()
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	fVar2 = 100f;
	iVar3 = 0;
	while (iVar3 <= 50)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_13.f_42, iVar3, &(Local_13.f_42), 17, 1077936128 /* Float: 3f */, 0))
		{
			fVar1 = aggregate.blackwater.func_175(Local_13.f_42, Local_159.f_13);
			if (fVar1 >= fVar2)
			{
				bVar0 = true;
			}
			else
			{
				Jump @87; //curOff = 81
				Jump @96; //curOff = 84
				iVar3++;
			}
			if (!bVar0)
			{
				iVar4 = 0;
				while (iVar4 <= 7)
				{
					Local_13.f_42 = { func_973(iVar4) };
					iVar3 = 0;
					while (iVar3 <= 50)
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_13.f_42, iVar3, &(Local_13.f_42), 17, 1077936128 /* Float: 3f */, 0))
						{
							fVar1 = aggregate.blackwater.func_175(Local_13.f_42, Local_159.f_13);
							if (fVar1 >= fVar2)
							{
								Local_13.f_45 = aggregate.fishing_core.func_492(Local_13.f_42, Local_13.f_36, 1);
								return 1;
							}
						}
						iVar3++;
					}
					iVar4++;
				}
			}
			else
			{
				Local_13.f_45 = aggregate.fishing_core.func_492(Local_13.f_42, Local_13.f_36, 1);
				return 1;
			}
			return 0;
		}
	}
}

bool func_684()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && (vLocal_62[iVar0 /*3*/])->f_1 < 3)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_686(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate.fme_animal_tagging.func_152(iVar0)) && (vLocal_62[iVar0 /*3*/])->f_2 > Local_13.f_35)
		{
			*iParam0 = (vLocal_62[iVar0 /*3*/])->f_2;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_698()
{
	switch (Local_159.f_1)
	{
		case 1128251250:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_13)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
				{
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_13), 136, true);
					TASK::TASK_HORSE_ACTION(NETWORK::NET_TO_PED(Local_13), 3, 0, 0);
				}
			}
			if (((!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::IS_PED_ON_MOUNT(Global_35)) && PED::GET_MOUNT(Global_35) == NETWORK::NET_TO_PED(Local_13)) && !aggregate.barcustomer_interaction.func_46(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			break;
		case 1999062905:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13)))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::IS_PED_IN_VEHICLE(Global_35, NETWORK::NET_TO_VEH(Local_13), false)) && !aggregate.barcustomer_interaction.func_46(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(Global_35, NETWORK::NET_TO_VEH(Local_13), 0, 0);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_13), false);
					VEHICLE::BRING_VEHICLE_TO_HALT(NETWORK::NET_TO_VEH(Local_13), 3f, -1, false);
				}
			}
			break;
	}
}

void func_794(int iParam0)
{
	(vLocal_62[Local_429.f_1332 /*3*/])->f_2 = iParam0;
}

bool func_795()
{
	if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(Local_159.f_2))
	{
		Local_159.f_2 = PED::_REQUEST_METAPED_OUTFIT(func_674(), -741888410);
		return false;
	}
	else if (PED::_0x610438375E5D1801(Local_159.f_2))
	{
		return true;
	}
	return false;
}

bool func_796()
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13))
	{
		return false;
	}
	PED::_0x1902C4CFCC5BE57C(NETWORK::NET_TO_PED(Local_13), -741888410);
	PED::_0xCC8CA3E88256E58F(NETWORK::NET_TO_PED(Local_13), 0, 1, 1, 1, false);
	func_679(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_13), true, false), 1065353216 /* Float: 1f */);
	return true;
}

void func_797(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar2 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, 0, false, false);
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(MISC::_0xEE04C0AFD4EFAF0E(iVar1)))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(MISC::_0xEE04C0AFD4EFAF0E(iVar1), true);
		}
		iVar3++;
	}
}

bool func_798()
{
	switch (Local_159.f_1)
	{
		case 1128251250:
		case 1999062905:
			return true;
		default:
			break;
	}
	return false;
}

bool func_800(int iParam0)
{
	int iVar0;

	if (!func_798() && !aggregate.fme_dead_drop.func_799())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && _NAMESPACE26::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))) && aggregate.fme_dead_drop.func_403(&(vLocal_62[iVar0 /*3*/]), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_802()
{
	if (Local_159.f_16 == 0)
	{
		aggregate.bandana.func_26(vLocal_62[Local_429.f_1332 /*3*/], 8);
		Local_159.f_16 = 1;
	}
}

void func_803(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 58:
			func_1047(iParam0);
			break;
	}
}

void func_804()
{
	struct<5> Var0;
	int iVar5;
	var uVar6;

	iVar5 = 255;
	iVar5 = PLAYER::PLAYER_ID();
	Var0 = 58;
	Var0.f_1 = iVar5;
	Var0.f_4 = 1;
	uVar6 = aggregate.dynamic_craft_scenario.func_194(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, 39, &uVar6);
}

bool func_809(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate.fme_dead_drop.func_403(&(vLocal_62[iVar0 /*3*/]), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_810(int iParam0)
{
	if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) == 255)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return;
		}
		aggregate.butchercreek.func_92(iParam0, 0, 0);
	}
}

char* func_812(bool bParam0)
{
	char* sVar0;
	bool bVar1;
	struct<4> Var2;
	struct<8> Var7;

	sVar0 = "INVALID";
	if (!func_492())
	{
		bVar1 = true;
	}
	Var2 = Local_159.f_3;
	Var2.f_2 = 814452583;
	Var2.f_3 = Local_159;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
		if (bParam0)
		{
			if (bVar1)
			{
				Var2.f_2 = -93903636;
			}
			else
			{
				Var2.f_2 = 203933749;
			}
		}
		else
		{
			Var2.f_2 = -1084640432;
		}
		if (DATAFILE::_DATAFILE_GET_STRING(&Var7, &Var2))
		{
			sVar0 = aggregate.blackwater.func_268(Var7);
		}
		else
		{
			sVar0 = "DD_DROP_OFF";
		}
	}
	return sVar0;
}

void func_813(int iParam0)
{
	char* sVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar1 = joaat("COLOR_WHITE");
		switch (Local_159.f_1)
		{
			case 1128251250:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "DD_GAME_UPDATE_POSSESSION_SELF_H");
				break;
			case 1999062905:
				sVar0 = MISC::_CREATE_VAR_STRING(2, "DD_GAME_UPDATE_POSSESSION_SELF_W");
				break;
		}
	}
	else
	{
		if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0) && !aggregate.fme_dead_drop.func_799())
		{
			iVar1 = -963477619;
			bVar2 = true;
		}
		else
		{
			iVar1 = -5208416;
		}
		switch (Local_159.f_1)
		{
			case 1128251250:
				if (bVar2)
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_GAME_UPDATE_POSSESSION_H_F", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), iVar1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_GAME_UPDATE_POSSESSION_H_E", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), iVar1));
				}
				break;
			case 1999062905:
				if (bVar2)
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_GAME_UPDATE_POSSESSION_W_F", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), iVar1));
				}
				else
				{
					sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_GAME_UPDATE_POSSESSION_W_E", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), iVar1));
				}
				break;
		}
	}
	if (!aggregate.fishing_core.func_107(Local_429.f_1287))
	{
		Local_429.f_1291 = aggregate.fme_animal_tagging.func_499(sVar0, iVar1);
	}
}

char* func_814(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	if (func_492())
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_HELP_W_FIRST_COLLECT_PROT", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(iVar1), -963477619));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_HELP_H_FIRST_COLLECT_PROT", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(iVar1), -963477619));
	}
	return sVar0;
}

char* func_815(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	if (func_492())
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_HELP_W_FIRST_COLLECT_KILL", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(iVar1), 1891514641));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(10, "DD_HELP_H_FIRST_COLLECT_KILL", aggregate.fme_animal_tagging.func_488(aggregate.fme_animal_tagging.func_504(iVar1), 1891514641));
	}
	return sVar0;
}

void func_816(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13) || !ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_13)))
	{
		func_342();
		return;
	}
	iVar0 = aggregate.fme_dead_drop.func_1053(NETWORK::NET_TO_ENT(Local_13), 1, &(Local_159.f_19), -1, -1, 0, 1, 0);
	if (iVar0 != 0 && iParam0 != 0)
	{
		if (iParam1 == -1640778959 || iParam1 == 1937193856)
		{
			func_342();
			func_1054(iParam4, iParam2);
		}
		else
		{
			func_1055(iParam0, iParam1, iParam2, sParam3);
		}
	}
	else
	{
		func_342();
	}
}

bool func_817()
{
	return Local_13.f_47 > (vLocal_62[Local_429.f_1332 /*3*/])->f_1;
}

void func_818(int iParam0)
{
	(vLocal_62[Local_429.f_1332 /*3*/])->f_1 = iParam0;
}

int func_834(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.barcustomer_interaction.func_42(&uParam1))
	{
		iVar2 = aggregate.fme_animal_tagging.func_181(&uParam1);
		iVar1 = BUILTIN::FLOOR(aggregate.coffee_drinking.func_45(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -1872051906;
			break;
		case 1:
			iVar0 = -1500385908;
			break;
		case 2:
			iVar0 = 1941932008;
			break;
		case 3:
			iVar0 = -2122898601;
			break;
		case 4:
			iVar0 = 1281472813;
			break;
		case 5:
			iVar0 = 1646781625;
			break;
		case 6:
			iVar0 = 714864034;
			break;
		case 7:
			iVar0 = 947753317;
			break;
		case 8:
			iVar0 = 122171131;
			break;
		case 9:
			iVar0 = 351980128;
			break;
		case 10:
			iVar0 = -1855497387;
			break;
		case 11:
			iVar0 = 2006853571;
			break;
		case 12:
			iVar0 = 745345378;
			break;
		case 13:
			iVar0 = -1556611338;
			break;
		case 14:
			iVar0 = 600768562;
			break;
		case 15:
			iVar0 = -1685459034;
			break;
		case 16:
			iVar0 = 1352522191;
			break;
		case 17:
			iVar0 = 911910217;
			Jump @567; //curOff = 430
			iVar0 = -483131655;
			Jump @567; //curOff = 440
			iVar0 = -789489036;
			Jump @567; //curOff = 450
			iVar0 = -748172699;
			Jump @567; //curOff = 460
			iVar0 = 103067614;
			Jump @567; //curOff = 470
			iVar0 = -281116142;
			Jump @567; //curOff = 480
			iVar0 = 562587301;
			Jump @567; //curOff = 490
			iVar0 = 1303756567;
			Jump @567; //curOff = 500
			iVar0 = 928027213;
			Jump @567; //curOff = 510
			iVar0 = 1747874824;
			Jump @567; //curOff = 520
			iVar0 = 1407470452;
			Jump @567; //curOff = 530
			iVar0 = 1706094329;
			Jump @567; //curOff = 540
			iVar0 = 1339147067;
			Jump @567; //curOff = 550
			iVar0 = -1631493579;
			Jump @567; //curOff = 560
			return 0;
			if (iVar0 != 0)
			{
				aggregate.doc_book.func_292(iParam0, iVar0);
				return 1;
			}
			return 0;
		}

void func_870(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 10, &uVar0);
}

void func_968(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	uParam0->f_2 = 222505148;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam0, uParam0->f_1);
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		Var2 = { *uParam0 };
		Var2.f_2 = -1443510071;
		Var2.f_3 = iVar1;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
		{
			Var2.f_2 = 796467835;
			if (!DATAFILE::_DATAFILE_GET_VECTOR(&((Local_13.f_4[iVar1 /*6*/])->f_2), &Var2))
			{
			}
			Var2.f_2 = 382339740;
			if (!DATAFILE::_DATAFILE_GET_FLOAT(&((Local_13.f_4[iVar1 /*6*/])->f_5), &Var2))
			{
			}
			Var2.f_2 = 1508252642;
			if (!DATAFILE::_DATAFILE_GET_HASH(&((Local_13.f_4[iVar1 /*6*/])->f_1), &Var2))
			{
			}
		}
		iVar1++;
	}
}

Vector3 func_973(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { Local_159.f_13 };
	fVar3 = 150f;
	fVar4 = 250f;
	switch (iParam0)
	{
		case 0:
			vVar0.f_1 = (vVar0.y + fVar3);
			break;
		case 1:
			vVar0.x = (vVar0.x + fVar3);
			break;
		case 2:
			vVar0.f_1 = (vVar0.y - fVar3);
			break;
		case 3:
			vVar0.x = (vVar0.x - fVar3);
			break;
		case 4:
			vVar0.f_1 = (vVar0.y + fVar4);
			break;
		case 5:
			vVar0.x = (vVar0.x + fVar4);
			break;
		case 6:
			vVar0.f_1 = (vVar0.y - fVar4);
			break;
		case 7:
			vVar0.x = (vVar0.x - fVar4);
			break;
	}
	aggregate.fme_dead_drop.func_1153(&vVar0, 1, 1, 0, 0);
	return vVar0;
}

void func_982(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 22, uParam1);
}

void func_1047(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			if (aggregate.fme_condor_egg.func_1665(PLAYER::GET_PLAYER_PED(Var0.f_1), 1, 1, 1, 0, 0))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 13, true);
			}
			break;
	}
}

void func_1054(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !SCRIPTS::_0x72B2E00C9BAC6789(&(Local_159.f_20), iVar0))
	{
		aggregate.fme_dead_drop.func_854(iVar0, iParam1);
		SCRIPTS::_0x31010318BA9897AC(&(Local_159.f_20), iVar0);
	}
}

void func_1055(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_ENT(Local_13);
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(Local_159.f_18))
	{
		aggregate.fme_dead_drop.func_1211(&(Local_159.f_18), iVar0);
		return;
	}
	Local_159.f_18 = HUD::_0xE961BF23EAB76B12(iVar0, sParam3);
	HUD::_0x25B9C78A25105C35(Local_159.f_18, 1847022470);
	HUD::_0x84BD27DDF9575816(Local_159.f_18, iParam1);
	HUD::_0x5F57522BC1EB9D9D(Local_159.f_18, iParam2);
	HUD::_0x93171DDDAB274EB8(Local_159.f_18, iParam0);
}

int func_1086(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
			return 337;
			return 144;
			return 145;
			return 435;
			return 504;
			return 286;
			return 411;
			return 519;
			return 114;
			return 296;
			return 206;
			return 153;
			return 524;
			return 463;
			return 371;
			return 321;
			return 529;
			return 466;
			return 170;
			return 12;
			return 32;
			return 473;
			return 22;
			return 71;
			return 103;
			return 479;
			return 408;
			return 476;
			return 488;
			return 348;
			return 477;
			return 363;
			return 533;
			return 138;
			return 438;
			return 37;
			return 353;
			return 462;
			return 427;
			return 354;
			return 255;
			return 169;
			return 96;
			return 424;
			return 21;
			return 285;
			return 222;
			return 111;
			return 168;
			return 124;
			return 129;
			return 366;
			return 154;
			return 45;
			return 401;
			return 134;
			return 46;
			return 221;
			return 392;
			return 122;
			return 98;
			return 340;
			return 229;
			return 29;
			return 444;
			return 409;
			return 314;
			return 191;
			return 149;
			return 77;
			return 226;
			return 174;
			return 56;
			return 383;
			return 104;
			return 432;
			return 273;
			return 461;
			return 237;
			return 36;
			return 150;
			return 400;
			return 512;
			return 44;
			return 425;
			return 542;
			return 40;
			return 369;
			return 367;
			return 501;
			return 394;
			return 390;
			return 506;
			return 223;
			return 82;
			return 81;
			return 63;
			return 433;
			return 372;
			return 420;
			return 246;
			return 535;
			return 232;
			return 494;
			return 515;
			return 86;
			return 240;
			return 248;
			return 236;
			return 328;
			return 215;
			return 76;
			return 58;
			return 302;
			return 373;
			return 531;
			return 4;
			return 356;
			return 78;
			return 459;
			return 155;
			return 65;
			return 188;
			return 247;
			return 320;
			return 183;
			return 513;
			return 343;
			return 495;
			return 69;
			return 306;
			return 185;
			return 472;
			return 384;
			return 507;
			return 493;
			return 536;
			return 313;
			return 173;
			return 172;
			return 128;
			return 380;
			return 115;
			return 300;
			return 225;
			return 338;
			return 235;
			return 326;
			return 8;
			return 516;
			return 419;
			return 184;
			return 402;
			return 109;
			return 254;
			return 350;
			return 532;
			return 534;
			return 212;
			return 460;
			return 202;
			return 141;
			return 374;
			return 257;
			return 508;
			return 389;
			return 430;
			return 304;
			return 101;
			return 370;
			return 160;
			return 298;
			return 67;
			return 334;
			return 333;
			return 492;
			return 540;
			return 311;
			return 319;
			return 434;
			return 346;
			return 253;
			return 30;
			return 231;
			return 130;
			return 418;
			return 119;
			return 258;
			return 523;
			return 201;
			return 137;
			return 517;
			return 345;
			return 483;
			return 147;
			return 175;
			return 294;
			return 95;
			return 11;
			return 431;
			return 351;
			return 28;
			return 403;
			return 499;
			return 165;
			return 491;
			return 423;
			return 143;
			return 152;
			return 309;
			return 509;
			return 244;
			return 441;
			return 453;
			return 87;
			return 358;
			return 468;
			return 24;
			return 275;
			return 127;
			return 0;
			return 1;
			return 151;
			return 282;
			return 406;
			return 323;
			return 224;
			return 72;
			return 230;
			return 74;
			return 541;
			return 391;
			return 331;
			return 454;
			return 396;
			return 276;
			return 99;
			return 112;
			return 530;
			return 84;
			return 181;
			return 268;
			return 16;
			return 14;
			return 228;
			return 60;
			return 490;
			return 140;
			return 180;
			return 327;
			return 271;
			return 518;
			return 162;
			return 52;
			return 79;
			return 93;
			return 117;
			return 260;
			return 136;
			return 322;
			return 195;
			return 131;
			return 510;
			return 64;
			return 272;
			return 47;
			return 266;
			return 186;
			return 88;
			return 485;
			return 34;
			return 171;
			return 278;
			return 17;
			return 288;
			return 42;
			return 545;
			return 15;
			return 196;
			return 106;
			return 31;
			return 287;
			return 214;
			return 316;
			return 342;
			return 218;
			return 2;
			return 219;
			return 146;
			return 290;
			return 378;
			return 233;
			return 264;
			return 393;
			return 157;
			return 113;
			return 238;
			return 456;
			return 448;
			return 359;
			return 177;
			return 341;
			return 75;
			return 376;
			return 126;
			return 470;
			return 482;
			return 279;
			return 297;
			return 281;
			return 500;
			return 132;
			return 204;
			return 176;
			return 484;
			return 250;
			return 475;
			return 382;
			return 48;
			return 107;
			return 362;
			return 18;
			return 455;
			return 469;
			return 503;
			return 227;
			return 474;
			return 407;
			return 451;
			return 537;
			return 270;
			return 385;
			return 315;
			return 379;
			return 375;
			return 511;
			return 368;
			return 211;
			return 283;
			return 416;
			return 234;
			return 344;
			return 19;
			return 295;
			return 443;
			return 7;
			return 120;
			return 446;
			return 502;
			return 269;
			return 108;
			return 142;
			return 538;
			return 486;
			return 27;
			return 242;
			return 452;
			return 514;
			return 361;
			return 133;
			return 156;
			return 330;
			return 292;
			return 38;
			return 217;
			return 182;
			return 543;
			return 259;
			return 83;
			return 167;
			return 158;
			return 310;
			return 481;
			return 347;
			return 415;
			return 245;
			return 449;
			return 442;
			return 387;
			return 349;
			return 199;
			return 357;
			return 421;
			return 526;
			return 20;
			return 73;
			return 256;
			return 249;
			return 80;
			return 497;
			return 210;
			return 207;
			return 209;
			return 414;
			return 164;
			return 208;
			return 123;
			return 118;
			return 303;
			return 450;
			return 50;
			return 100;
			return 280;
			return 318;
			return 426;
			return 5;
			return 70;
			return 35;
			return 166;
			return 203;
			return 436;
			return 458;
			return 265;
			return 325;
			return 161;
			return 386;
			return 332;
			return 289;
			return 301;
			return 521;
			return 9;
			return 105;
			return 116;
			return 125;
			return 179;
			return 148;
			return 91;
			return 527;
			return 66;
			return 352;
			return 365;
			return 43;
			return 329;
			return 135;
			return 213;
			return 377;
			return 92;
			return 544;
			return 299;
			return 445;
			return 398;
			return 197;
			return 97;
			return 193;
			return 413;
			return 68;
			return 364;
			return 51;
			return 437;
			return 335;
			return 94;
			return 360;
			return 159;
			return 216;
			return 200;
			return 307;
			return 89;
			return 178;
			return 489;
			return 6;
			return 187;
			return 190;
			return 305;
			return 293;
			return 61;
			return 498;
			return 284;
			return 428;
			return 478;
			return 291;
			return 457;
			return 267;
			return 39;
			return 397;
			return 189;
			return 324;
			return 496;
			return 241;
			return 85;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

bool func_1208(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (fParam2 > fParam3)
	{
		return false;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return false;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam1);
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	}
	if (bParam4)
	{
		if ((Global_1070355->f_20209[iParam0 /*18*/])->f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1f);
			}
			if (PED::_0xB655DB7582AEC805(iVar1) && TASK::_0x6C50B9DCCCA70023(iVar1))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
			}
			else if (PED::IS_PED_IN_COVER(iVar1, 1, 0))
			{
				uVar2 = Global_1901929->f_93.f_13;
			}
			else
			{
				uVar2 = Global_1901929->f_93.f_12;
			}
			return ((aggregate.fme_dead_drop.func_1370(&Global_1273882, iParam0) && PED::_0x5102307CE88798EB(iVar1)) && PED::_0x164CECC59E70DF86(iVar1, uVar2));
		}
		else if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else if (bVar0)
	{
		if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else
	{
		return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
	}
	return false;
}

void func_1549(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			aggregate.fme_animal_tagging.func_1552(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			aggregate.fme_animal_tagging.func_1552(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
					{
					}
					else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
					}
					iVar3++;
				}
				aggregate.fme_animal_tagging.func_1553(&Var6, uVar5);
				Jump @394; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				aggregate.fme_animal_tagging.func_1552(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
						{
						}
						else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
						}
						iVar3++;
					}
					aggregate.fme_animal_tagging.func_1553(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

