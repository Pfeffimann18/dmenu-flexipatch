#if INSTANT_PATCH
static int instant = 0;                     /* -n  option; if 1, selects matching item without the need to press enter */
#endif // INSTANT_PATCH
{
	"FantasqueSansMono Nerd Font:size=12"
};
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#c6d0f5", "#303446" },
	[SchemeSel] = { "#303446", "#81c8be" },
	[SchemeOut] = { "#000000", "#81c8be" },
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight]  = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
	#if HIGHPRIORITY_PATCH
	[SchemeHp]   = { "#bbbbbb", "#333333" },
	#endif // HIGHPRIORITY_PATCH
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
#if GRID_PATCH
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;
#endif // GRID_PATCH
#if LINE_HEIGHT_PATCH
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;
#endif // LINE_HEIGHT_PATCH
#if NAVHISTORY_PATCH
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */
#endif // NAVHISTORY_PATCH

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
#if PIPEOUT_PATCH
static const char startpipe[] = "#";
#endif // PIPEOUT_PATCH
static const char worddelimiters[] = " ";

#if BORDER_PATCH
/* Size of the window border */
static unsigned int border_width = 0;
#endif // BORDER_PATCH

#if PREFIXCOMPLETION_PATCH
/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
#endif // PREFIXCOMPLETION_PATCH
