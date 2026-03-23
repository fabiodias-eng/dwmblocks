#define SchemeNorm 0
#define SchemeSel  1
static const char *fonts[] = {
    "DepartureMono Nerd Font Mono:pixelsize=12"
};

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-clock",	60,	0},
	{"", "sb-cpu",		1,	0},
	{"", "sb-gpu",		1,	0},
	{"", "sb-mem",		1,	0},
	{"", "sb-disk",		1,	0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "|";
static unsigned int delimLen = 0;
