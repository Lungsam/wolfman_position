//find
bool NewPlayerTable(TPlayerTable * table,

//in:
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
	

// change to

#if defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x = 808274 + number(-300, 300);
		table->y = 935090 + number(-300, 300);
	}
	else
	{
		table->x = CREATE_START_X(bEmpire) + number(-300, 300);
		table->y = CREATE_START_Y(bEmpire) + number(-300, 300);
	}
#else
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
#endif

//find
bool NewPlayerTable2(TPlayerTable * table, const char * name, BYTE race, BYTE shape, BYTE bEmpire)

//in:
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);

// change to
#if defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x = 808274 + number(-300, 300);
		table->y = 935090 + number(-300, 300);
	}
	else
	{
		table->x = CREATE_START_X(bEmpire) + number(-300, 300);
		table->y = CREATE_START_Y(bEmpire) + number(-300, 300);
	}//find
bool NewPlayerTable(TPlayerTable * table,

//in:
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
	

// change to

#if defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x = 808274 + number(-300, 300);
		table->y = 935090 + number(-300, 300);
	}
	else
	{
		table->x = CREATE_START_X(bEmpire) + number(-300, 300);
		table->y = CREATE_START_Y(bEmpire) + number(-300, 300);
	}
#else
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
#endif

//find
bool NewPlayerTable2(TPlayerTable * table, const char * name, BYTE race, BYTE shape, BYTE bEmpire)

//in:
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);

// change to
#if defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x = 808274 + number(-300, 300);
		table->y = 935090 + number(-300, 300);
	}
	else
	{
		table->x = CREATE_START_X(bEmpire) + number(-300, 300);
		table->y = CREATE_START_Y(bEmpire) + number(-300, 300);
	}
#else
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
#endif

#else
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
#endif
