//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	{"Bat: ", "echo $(upower -i $(upower -e | grep 'BAT') | grep -E 'percentage' | awk '{print $2}')", 30, 0},
	{"Vol: ", "amixer -c 1 get Master | grep -o '[0-9]*%'", 10, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
