#region Local Var
	int iLocal_0 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2();
	while (!iLocal_0)
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	iLocal_0 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
}

void func_3()
{
}

