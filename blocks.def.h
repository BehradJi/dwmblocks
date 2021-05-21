//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "music",	0,		11},
	
	{"", "echo $(pamixer --get-volume)%",	0,		11},
	
	{"", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	10,		0},
	
	{"", "sensors | awk '/Core 2/ { print $3}'",	10,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
