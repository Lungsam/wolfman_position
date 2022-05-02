//Find
bool is_string_true(const char * string)

//add before

#if defined(USE_LYCAN_CREATE_POSITION)
bool g_bEnableMapWolfman = true;
#endif


//Find

	}

	if (g_setQuestObjectDir.empty())
		g_setQuestObjectDir.insert(g_stDefaultQuestObjectDir);
		

//add before

#if defined(USE_LYCAN_CREATE_POSITION)
		TOKEN("wolfman_position")
		{
			BYTE flag = 0;
			str_to_number(flag, value_string);

			if (1 == flag)
				g_bEnableMapWolfman = true;
			else
				g_bEnableMapWolfman = false;

			fprintf(stderr, "WOLFMAN_POSITION: %d\n", flag); // not necessary cuz he will not necessary cuz continue
			continue;
		}
#endif