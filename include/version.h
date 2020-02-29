#ifndef	WHQA_VERSION_INCLUDED
#define WHQA_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define WHQA_VERSION_MAJOR	1
#define WHQA_VERSION_MINOR	2
#define WHQA_VERSION_PATCH	0
#define WHQA_VERSION_BETA	0
#define WHQA_VERSION_VERSTRING	MAKE_STR(WHQA_VERSION_MAJOR) "." MAKE_STR(WHQA_VERSION_MINOR) "." MAKE_STR(WHQA_VERSION_PATCH) "." MAKE_STR(WHQA_VERSION_BETA)

#endif
