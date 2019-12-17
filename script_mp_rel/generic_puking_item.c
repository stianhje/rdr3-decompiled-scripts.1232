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
	var uVar0;
	int iVar3;
	var uVar4;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (aggregate.generic_puking_item.func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

