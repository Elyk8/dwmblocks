//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/        /*Command*/                 /*Update Interval*/     /*Update Signal*/
  {"",             "sb-radio",                0,                      1       },
  {"",             "sb-pacpackages",          0,                      3       },
  {"",             "sb-forecast",             18000,                  4       },
  {"",             "sb-mailbox",              180,                    5       },
  {"",             "sb-volume",               0,                      7       },
  {"",             "sb-microphone",           0,                      6       },
  {"",             "sb-redshiftstatus",       600,                    8       },
  {"",             "sb-brightness",           0,                      9       },
  {"",             "sb-battery",              5,                      10      },
  {"",             "sb-clock",                30,                     11      },
  {"",             "sb-keymode",              0,                      12      },
  {"",             "sb-music",                0,                      2       },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
