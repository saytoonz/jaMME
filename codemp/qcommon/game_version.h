// Copyright (C) 2000-2002 Raven Software, Inc.
//

#define _STR(x) #x
#define STR(x) _STR(x)

// Current version of the multi player game
#define VERSION_MAJOR_RELEASE		1
#define VERSION_MINOR_RELEASE		11
#define VERSION_EXTERNAL_BUILD		0
#define VERSION_INTERNAL_BUILD		0

#define VERSION_STRING STR(VERSION_MAJOR_RELEASE) ", " STR(VERSION_MINOR_RELEASE)// ", " STR(VERSION_EXTERNAL_BUILD)// ", " STR(VERSION_INTERNAL_BUILD) // "a, b, c, d"
#define VERSION_STRING_DOTTED STR(VERSION_MAJOR_RELEASE) "." STR(VERSION_MINOR_RELEASE)// "." STR(VERSION_EXTERNAL_BUILD)// "." STR(VERSION_INTERNAL_BUILD) // "a.b.c.d"

#if defined(_DEBUG)
	#define	JK_VERSION		"(debug)jaMME " VERSION_STRING_DOTTED
#else
	#define	JK_VERSION		"jaMME " VERSION_STRING_DOTTED
#endif
