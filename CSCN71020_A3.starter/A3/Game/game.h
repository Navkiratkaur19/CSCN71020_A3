#pragma once

#pragma once
#include <stdbool.h>

/*Rock, paper, siisor Hand shapes definition*/
#define STR_ROCK	"Rock"
#define STR_PAPER	"Paper"
#define STR_SISSOR	"Sissor"

/* game results definition */
#define STR_INVALID	"Invalid"
#define STR_DRAW	"Draw"
#define STR_PLAYER1	"Player1"
#define STR_PLAYER2	"Player2"

#if defined(__cplusplus)
extern "C" {
#endif

	/* Function prototypes .c */
	const char* playGame(const char* player1Shape, const char* player2Shape);

#if defined(__cplusplus)
}
#endif