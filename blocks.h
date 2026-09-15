#define SchemeNorm 0
#define SchemeSel 1

// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-cpu", 1, 0},
    {"", "sb-gpu", 1, 0},
    {"", "sb-mem", 1, 0},
    {"", "sb-disk", 60, 0},
    {"", "sb-bat", 30, 0},
    {"", "sb-wtr", 60, 0},
    {"", "sb-clock", 60, 0},
};
// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = "|";
static unsigned int delimLen = 0;
