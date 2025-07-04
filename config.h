/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
 "JetBrains Mono:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static const char *colors[SchemeLast][2] = {
	/*                      fg         bg        */
	[SchemeNorm]         = { "#e0def4", "#191724" },
	[SchemeSel]          = { "#191724", "#c4a7e7" },
	[SchemeSelHighlight] = { "#f6c177", "#575279" },
	[SchemeNormHighlight]= { "#f6c177", "#191724" },
	[SchemeOut]          = { "#191724", "#9ccfd8" }, // using foam as accent
};
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
