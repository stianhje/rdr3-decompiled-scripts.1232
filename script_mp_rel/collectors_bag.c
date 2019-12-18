void __EntryFunction__()
{
	int iVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	if (!UIAPPS::_IS_APP_ACTIVE(-76766502))
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
		if (iVar0 != 0)
		{
			func_1();
		}
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(-76766502);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (aggregate_func_523(1, 1))
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	if (!UIAPPS::_IS_APP_ACTIVE(-76766502))
	{
		return true;
	}
	return false;
}

