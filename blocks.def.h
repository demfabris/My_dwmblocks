//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                       /*Update Interval*/	/*Update Signal*/
	/* {"", "~/.dwm/statusbar/_traffic.sh",	      	1,	                 	0}, */
	{"", "/usr/src/dwm/statusbar/_wifi.sh",	    		     	1,	                	0},
	{"", "/usr/src/dwm/statusbar/_audio.sh",	           	0,	                 10},
	{"", "/usr/src/dwm/statusbar/_cpu.sh",	    	       	1,	                	0},
	{"", "/usr/src/dwm/statusbar/_battery.sh",		      	60,	                	0},
	{"", "/usr/src/dwm/statusbar/_date.sh",			        3600,	                	1},
	{"", "/usr/src/dwm/statusbar/_displaytime.sh",	       1,	                 	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 0;
