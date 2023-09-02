//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	    /*Command*/	          /*Update Interval*/   /*Update Signal*/
//  {"",            "sb-music",	          560,	                22},
//  {"vol: ",       "sb-volume",	      560,		            10},
//  {"trc: ",       "sb-timew",	          5,	                25},
//  {"bt: ",        "sb-bluetooth",       0,		            11},
//	{"rss: ",       "sb-rss",	          0,	                21},
//  {"doc: ",       "sb-docker",	      0,		            12},
//  {"net: ",       "sb-traffic",         5,     	            18},
//  {"con: ",       "sb-internet",        10,     	            28},
//  {"dsc: ",       "sb-disk /home",      180,	                13},
//  {"mem: ",       "sb-mem",             10,                   15},
//  {"cpu: ",       "sb-cpu",             4,     	            19},
//  {"btt: ",       "sb-battery",         120,     	            27},
//  {"",            "sb-clock",           5,		            20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
