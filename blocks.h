//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🧠 ", "~/.local-bin-scripts/statusbar/memory",            6,                    1},
	{"🌡", "~/.local-bin-scripts/statusbar/cpu",                 10,                   1},
	{"📦 ", "~/.local-bin-scripts/statusbar/pacupdate",        3600,                 8},
	{"", "~/.local-bin-scripts/statusbar/internet",             5,                    0},
	{"", "~/.local-bin-scripts/statusbar/battery",              5,                    12},
	{"🗓 ", "~/.local-bin-scripts/statusbar/clock",              10,                   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
