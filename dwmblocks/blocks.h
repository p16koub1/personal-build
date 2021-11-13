//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" ", "/home/tandalos/packages/dwmblocks/scripts/memory",		60,			   -1},
		
	{" ", "/home/tandalos/packages/dwmblocks/scripts/storage",		60,			    0},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/kblayout",		0,			    5},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/bright",		0,		            1},
	
	{" ", "/home/tandalos/packages/dwmblocks/scripts/volume",	        0,		            2},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/battery",		60,		            3},

	{" ", "/home/tandalos/packages/dwmblocks/scripts/clock",		60,		            4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
