//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/        /*Command*/                 /*Update Interval*/     /*Update Signal*/
  {"",             "sb-music",                0,                      1},
  {"",             "sb-pacpackages",          0,                      2},
  {"",             "sb-forecast",             18000,                  3},
  {"",             "sb-mailbox",              180,                    4},
  {"",             "sb-microphone",           0,                      5},
  {"",             "sb-volume",               0,                      6},
  {"",             "sb-redshiftstatus",       600,                    7},
  {"",             "sb-brightness",           0,                      8},
  {"",             "sb-battery",              5,                      9},
  {"",             "sb-clock",                30,                     10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
