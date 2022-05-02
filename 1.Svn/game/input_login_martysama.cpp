##
// if you use martysama Src 
##
//find

// #define USE_LYCAN_CREATE_POSITION

//change to
#define USE_LYCAN_CREATE_POSITION

//find
bool NewPlayerTable(TPlayerTable * table,

//in:
	table->x 	= CREATE_START_X(bEmpire) + number(-300, 300);
	table->y 	= CREATE_START_Y(bEmpire) + number(-300, 300);
	

// change to

#if defined(ENABLE_WOLFMAN_CHARACTER) && defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x	= LYCAN_CREATE_START_X(bEmpire, job) + number(-300, 300);
		table->y	= LYCAN_CREATE_START_Y(bEmpire, job) + number(-300, 300);
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
#if defined(ENABLE_WOLFMAN_CHARACTER) && defined(USE_LYCAN_CREATE_POSITION)
	if (g_bEnableMapWolfman && job == JOB_WOLFMAN)
	{
		table->x	= LYCAN_CREATE_START_X(bEmpire, job) + number(-300, 300);
		table->y	= LYCAN_CREATE_START_Y(bEmpire, job) + number(-300, 300);
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
