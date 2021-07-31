//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"sb-tasks",	10,	26}, */
	{"",	"sb-music",	0,	1},
	{"",	"sb-pacpackages",	0,	2},
	/* {"",	"sb-news",		0,  11}, */
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"sb-torrent",	20,	7}, */
	/* {"",	"sb-memory",	10,	14}, */
	/* {"",	"sb-cpu",		10,	18}, */
	/* {"",	"sb-moonphase",	18000,	17}, */
	{"",	"sb-forecast",	18000,	3},
	{"",	"sb-mailbox",	180,	4},
	{"",	"sb-microphone",	0,	5},
	{"",	"sb-volume",	0,	6},
	{"",	"sb-redshiftstatus",	600,	7},
	{"",	"sb-brightness",	0,	8},
	{"",	"sb-battery",	5,	9},
	{"",	"sb-clock",	30,	10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";