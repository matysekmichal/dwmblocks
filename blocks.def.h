//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	    /*Command*/	            /*Update Interval*/ /*Update Signal*/
//  {"",            "sb-music",             560,                22},
//  {"",            "sb-volume",            560,                10},
//  {"",            "sb-timew",             5,                  25},
//  {"",            "sb-bluetooth",         0,                  11},
//  {"",            "sb-rss",               0,                  21},
//  {"",            "sb-docker",            0,                  12},
//  {"",            "sb-internet",          0,                  28},
//  {"",            "sb-traffic",           5,                  18},
//  {"",            "sb-disk /home",        180,                13},
//  {"",            "sb-mem",               10,                 15},
//  {"",            "sb-cpu",               4,                  19},
//  {"",            "sb-battery",           120,                27},
//  {"",            "sb-clock",             5,                  20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
