//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/

	{" ", "/home/tandalos/packages/dwmblocks/scripts/upt ",		        60,		            2},
	
	{" ", "/home/tandalos/packages/dwmblocks/scripts/volume ",	        0,		            1},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/battery ",		60,		            10},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/clock ",			60,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
