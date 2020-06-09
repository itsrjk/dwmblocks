//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🧠 ", "memory",            6,                    1},
	{"🌡", "cpu",                 10,                   1},
	{" 📦 ", "pacupdate",        3600,                 8},
	{"", "internet",             5,                    0},
	{"", "battery",              5,                    12},
	{"🗓 ", "clock",              10,                   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
