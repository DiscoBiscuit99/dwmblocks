//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		        /*Update Interval*/	    /*Update Signal*/
    {" ",      "get-xkblayout",        1,                      3},
	{"",        "get-music",	        1,		                1},
	{"",        "get-volume",           0,	                    2},
	{"",        "get-wifi-status",      1,	                    0},
	{"",        "get-battery-status",   1,	                    0},
	{"",        "get-date",             1,	                    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
