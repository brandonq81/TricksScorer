#include<stdio.h>
#include<string.h>
#include "scanner.h"

char *game(char *, char *, char *, char *, char *);
void execGame(char *, char *, char *, char *, char *, int *, int *, int *, int *);

int main() {
	printf("Who is Player 1? ");
	char *player1 = readToken(stdin);
	int player1score = 0;
        printf("Who is Player 2? ");
        char *player2 = readToken(stdin);
	int player2score = 0;
        printf("Who is Player 3? ");
        char *player3 = readToken(stdin);
	int player3score = 0;
        printf("Who is Player 4? ");
        char *player4 = readToken(stdin);
	int player4score = 0;
	int *p1score = &player1score;
	int *p2score = &player2score;
	int *p3score = &player3score;
	int *p4score = &player4score;
	char *player1p = player1;
	char *player2p = player2;
	char *player3p = player3;
	char *player4p = player4;
	printf("\n%s's Kingdom\n\n", player1);
	char *king1game1 = game("first", "null", "null", "null", "null");
	execGame(king1game1, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
	printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
	printf("Already played: %s\n", king1game1);
	char *king1game2 = game("second", king1game1, "null", "null", "null");
	execGame(king1game2, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
	printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
	printf("Already played: %s, %s\n", king1game1, king1game2);
        char *king1game3 = game("third", king1game1, king1game2, "null", "null");
        execGame(king1game3, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
	printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s\n", king1game1, king1game2, king1game3);
        char *king1game4 = game("fourth", king1game1, king1game2, king1game3, "null");
        execGame(king1game4, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s, %s\n", king1game1, king1game2, king1game3, king1game4);
        char *king1game5 = game("fifth", king1game1, king1game2, king1game3, king1game4);
        execGame(king1game5, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("\n%s's Kingdom\n\n", player2);
	char *king2game1 = game("first", "null", "null", "null", "null");
        execGame(king2game1, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s\n", king2game1);
	char *king2game2 = game("second", king2game1, "null", "null", "null");
        execGame(king2game2, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s\n", king2game1, king2game2);
        char *king2game3 = game("third", king2game1, king2game2, "null", "null");
        execGame(king2game3, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s\n", king2game1, king2game2, king2game3);
        char *king2game4 = game("fourth", king2game1, king2game2, king2game3, "null");
        execGame(king2game4, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s, %s\n", king2game1, king2game2, king2game3, king2game4);
        char *king2game5 = game("fifth", king2game1, king2game2, king2game3, king2game4);
        execGame(king2game5, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("\n%s's Kingdom\n\n", player3);
	char *king3game1 = game("first", "null", "null", "null", "null");
        execGame(king3game1, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s\n", king3game1);
	char *king3game2 = game("second", king3game1, "null", "null", "null");
        execGame(king3game2, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s\n", king3game1, king3game2);
        char *king3game3 = game("third", king3game1, king3game2, "null", "null");
        execGame(king3game3, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s\n", king3game1, king3game2, king3game3);
        char *king3game4 = game("fourth", king3game1, king3game2, king3game3, "null");
        execGame(king3game4, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s, %s\n", king3game1, king3game2, king3game3, king3game4);
        char *king3game5 = game("fifth", king3game1, king3game2, king3game3, king3game4);
        execGame(king3game5, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("\n%s's Kingdom\n\n", player4);
	char *king4game1 = game("first", "null", "null", "null", "null");
        execGame(king4game1, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s\n", king4game1);
	char *king4game2 = game("second", king4game1, "null", "null", "null");
        execGame(king4game2, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s\n", king4game1, king4game2);
        char *king4game3 = game("third", king4game1, king4game2, "null", "null");
        execGame(king4game3, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s\n", king4game1, king4game2, king4game3);
        char *king4game4 = game("fourth", king4game1, king4game2, king4game3, "null");
        execGame(king4game4, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
        printf("Already played: %s, %s, %s, %s\n", king4game1, king4game2, king4game3, king4game4);
        char *king4game5 = game("fifth", king4game1, king4game2, king4game3, king4game4);
        execGame(king4game5, player1p, player2p, player3p, player4p, p1score, p2score, p3score, p4score);
        printf("%s: %d\n%s: %d\n%s: %d\n%s: %d\n\n", player1, player1score, player2, player2score, player3, player3score, player4, player4score);
	char *winner = player1;
	if ( player2score>player1score && player2score>player3score && player2score>player4score ) {
		winner =player2;
	}
        if ( player3score>player1score && player3score>player2score && player3score>player4score ) {
                winner =player3;
        }
        if ( player4score>player1score && player4score>player2score && player4score>player3score ) {
                winner =player4;
        }
	printf("\nThe winner is %s!\n\n", winner);
	return 0;
}

char *game(char *stringDummy, char *gameDum1, char *gameDum2, char *gameDum3, char *gameDum4) {
	printf("Which game is %s? ", stringDummy);
	char *gameType = readToken(stdin);
	while ( ( (strcmp(gameType,"diamonds")!=0) && (strcmp(gameType,"tricks")!=0) && (strcmp(gameType,"queens")!=0) && (strcmp(gameType,"king")!=0) && (strcmp(gameType,"jacks")!=0) ) || 
	( (strcmp(gameType,gameDum1)==0) || (strcmp(gameType,gameDum2)==0) || (strcmp(gameType,gameDum3)==0) || (strcmp(gameType,gameDum4)==0) ) ) {
		printf("Invalid Entry.\nPlease enter a game (either 'diamonds', 'tricks', 'queens', 'king', or 'jacks') that has not been played in this kingdom.\n");
		printf("Which game is %s? ", stringDummy);
		gameType = readToken(stdin);
	}
	return gameType;
}

void execGame(char *stringDummy1, char *playerDummy1, char *playerDummy2, char *playerDummy3, char *playerDummy4, int *p1scoreDummy, int *p2scoreDummy, int *p3scoreDummy, int *p4scoreDummy) {
	if ( strcmp(stringDummy1,"diamonds")==0 ) {
		printf("How many diamonds did %s get? ", playerDummy1);
		int p1diamonds = readInt(stdin);
		*p1scoreDummy = *p1scoreDummy - 10 * p1diamonds;
                printf("How many diamonds did %s get? ", playerDummy2);
		int p2diamonds = readInt(stdin);
                *p2scoreDummy = *p2scoreDummy - 10 * p2diamonds;
                printf("How many diamonds did %s get? ", playerDummy3);
		int p3diamonds = readInt(stdin);
                *p3scoreDummy = *p3scoreDummy - 10 * p3diamonds;
                printf("How many diamonds did %s get? ", playerDummy4);
		int p4diamonds = readInt(stdin);
                *p4scoreDummy = *p4scoreDummy - 10 * p4diamonds;
		while ( p1diamonds + p2diamonds + p3diamonds + p4diamonds != 13 ) {
	                *p1scoreDummy = *p1scoreDummy + 10 * p1diamonds;
        	        *p2scoreDummy = *p2scoreDummy + 10 * p2diamonds;
                	*p3scoreDummy = *p3scoreDummy + 10 * p3diamonds;
	                *p4scoreDummy = *p4scoreDummy + 10 * p4diamonds;
			printf("Invalid Entry.\nPlease enter a total of 13 diamonds.\n");
			printf("How many diamonds did %s get? ", playerDummy1);
	                p1diamonds = readInt(stdin);
        	        *p1scoreDummy = *p1scoreDummy - 10 * p1diamonds;
                	printf("How many diamonds did %s get? ", playerDummy2);
	                p2diamonds = readInt(stdin);
        	        *p2scoreDummy = *p2scoreDummy - 10 * p2diamonds;
                	printf("How many diamonds did %s get? ", playerDummy3);
	                p3diamonds = readInt(stdin);
        	        *p3scoreDummy = *p3scoreDummy - 10 * p3diamonds;
                	printf("How many diamonds did %s get? ", playerDummy4);
			p4diamonds = readInt(stdin);
			*p4scoreDummy = *p4scoreDummy - 10 * p4diamonds;
		}
	}
        if ( strcmp(stringDummy1,"tricks")==0 ) {
                printf("How many tricks did %s get? ", playerDummy1);
                int p1tricks = readInt(stdin);
                *p1scoreDummy = *p1scoreDummy - 15 * p1tricks;
                printf("How many tricks did %s get? ", playerDummy2);
                int p2tricks = readInt(stdin);
                *p2scoreDummy = *p2scoreDummy - 15 * p2tricks;
                printf("How many tricks did %s get? ", playerDummy3);
                int p3tricks = readInt(stdin);
                *p3scoreDummy = *p3scoreDummy - 15 * p3tricks;
                printf("How many tricks did %s get? ", playerDummy4);
                int p4tricks = readInt(stdin);
                *p4scoreDummy = *p4scoreDummy - 15 * p4tricks;
                while ( p1tricks + p2tricks + p3tricks + p4tricks != 13 ) {
                        *p1scoreDummy = *p1scoreDummy + 15 * p1tricks;
                        *p2scoreDummy = *p2scoreDummy + 15 * p2tricks;
                        *p3scoreDummy = *p3scoreDummy + 15 * p3tricks;
                        *p4scoreDummy = *p4scoreDummy + 15 * p4tricks;
                        printf("Invalid Entry.\nPlease enter a total of 13 tricks.\n");
                        printf("How many tricks did %s get? ", playerDummy1);
                        p1tricks = readInt(stdin);
                        *p1scoreDummy = *p1scoreDummy - 15 * p1tricks;
                        printf("How many tricks did %s get? ", playerDummy2);
                        p2tricks = readInt(stdin);
                        *p2scoreDummy = *p2scoreDummy - 15 * p2tricks;
                        printf("How many tricks did %s get? ", playerDummy3);
                        p3tricks = readInt(stdin);
                        *p3scoreDummy = *p3scoreDummy - 15 * p3tricks;
                        printf("How many tricks did %s get? ", playerDummy4);
                        p4tricks = readInt(stdin);
                        *p4scoreDummy = *p4scoreDummy - 15 * p4tricks;
		}
        }
        if ( strcmp(stringDummy1,"queens")==0 ) {
                printf("How many queens did %s get? ", playerDummy1);
                int p1queens = readInt(stdin);
                *p1scoreDummy = *p1scoreDummy - 25 * p1queens;
                printf("How many queenss did %s get? ", playerDummy2);
                int p2queens = readInt(stdin);
                *p2scoreDummy = *p2scoreDummy - 25 * p2queens;
                printf("How many queenss did %s get? ", playerDummy3);
                int p3queens = readInt(stdin);
                *p3scoreDummy = *p3scoreDummy - 25 * p3queens;
                printf("How many queens did %s get? ", playerDummy4);
                int p4queens = readInt(stdin);
                *p4scoreDummy = *p4scoreDummy - 25 * p4queens;
                while ( p1queens + p2queens + p3queens + p4queens != 4 ) {
                        *p1scoreDummy = *p1scoreDummy + 25 * p1queens;
                        *p2scoreDummy = *p2scoreDummy + 25 * p2queens;
                        *p3scoreDummy = *p3scoreDummy + 25 * p3queens;
                        *p4scoreDummy = *p4scoreDummy + 25 * p4queens;
                        printf("Invalid Entry.\nPlease enter a total of 4 queens.\n");
                        printf("How many queens did %s get? ", playerDummy1);
                        p1queens = readInt(stdin);
                        *p1scoreDummy = *p1scoreDummy - 25 * p1queens;
                        printf("How many queens did %s get? ", playerDummy2);
                        p2queens = readInt(stdin);
                        *p2scoreDummy = *p2scoreDummy - 25 * p2queens;
                        printf("How many queens did %s get? ", playerDummy3);
                        p3queens = readInt(stdin);
                        *p3scoreDummy = *p3scoreDummy - 25 * p3queens;
                        printf("How many queens did %s get? ", playerDummy4);
                        p4queens = readInt(stdin);
                        *p4scoreDummy = *p4scoreDummy - 25 * p4queens;
        	}
	}
	if ( strcmp(stringDummy1,"king")==0 ) {
		printf("Who got the king of hearts? ");
		char *kingHolder = readToken(stdin);
		if ( strcmp(kingHolder,playerDummy1)==0 ) {
			*p1scoreDummy = *p1scoreDummy - 75;
		}
		if ( strcmp(kingHolder,playerDummy2)==0 ) {
	                *p2scoreDummy = *p2scoreDummy - 75;
                }
                if ( strcmp(kingHolder,playerDummy3)==0 ) {
                        *p3scoreDummy = *p3scoreDummy - 75;
                }
                if ( strcmp(kingHolder,playerDummy4)==0 ) {
                        *p4scoreDummy = *p4scoreDummy - 75;
                }
		while ( ( strcmp(kingHolder,playerDummy1)!=0 ) && ( strcmp(kingHolder,playerDummy2)!=0 ) && ( strcmp(kingHolder,playerDummy3)!=0 ) && ( strcmp(kingHolder,playerDummy4)!=0 ) ) {
			printf("Invalid Entry.\nPlease enter '%s', '%s', '%s', or '%s.\n", playerDummy1, playerDummy2, playerDummy3, playerDummy4);
			printf("Who got the king of hearts? ");
			kingHolder = readToken(stdin);
                	if ( strcmp(kingHolder,playerDummy1)==0 ) {
                        	*p1scoreDummy = *p1scoreDummy - 75;
                	}
	                if ( strcmp(kingHolder,playerDummy2)==0 ) {
        	                *p2scoreDummy = *p2scoreDummy - 75;
                	}
	                if ( strcmp(kingHolder,playerDummy3)==0 ) {
        	                *p3scoreDummy = *p3scoreDummy - 75;
                	}
	                if ( strcmp(kingHolder,playerDummy4)==0 ) {
        	                *p4scoreDummy = *p4scoreDummy - 75;
                	}
		}
	}
	if ( strcmp(stringDummy1,"jacks")==0 ) {
		printf("What place did %s finish in? ", playerDummy1);
		char *p1place = readToken(stdin);
		if ( strcmp(p1place,"first")==0 ) {
			*p1scoreDummy = *p1scoreDummy + 200;
		}
                if ( strcmp(p1place,"second")==0 ) {
                        *p1scoreDummy = *p1scoreDummy + 150;
                }
                if ( strcmp(p1place,"third")==0 ) {
                        *p1scoreDummy = *p1scoreDummy + 100;
                }
                if ( strcmp(p1place,"fourth")==0 ) {
                        *p1scoreDummy = *p1scoreDummy + 50;
                }
                printf("What place did %s finish in? ", playerDummy2);
                char *p2place = readToken(stdin);
                if ( strcmp(p2place,"first")==0 ) {
                        *p2scoreDummy = *p2scoreDummy + 200;
                }
                if ( strcmp(p2place,"second")==0 ) {
                        *p2scoreDummy = *p2scoreDummy + 150;
                }
                if ( strcmp(p2place,"third")==0 ) {
                        *p2scoreDummy = *p2scoreDummy + 100;
                }
                if ( strcmp(p2place,"fourth")==0 ) {
                        *p2scoreDummy = *p2scoreDummy + 50;
                }
                printf("What place did %s finish in? ", playerDummy3);
                char *p3place = readToken(stdin);
                if ( strcmp(p3place,"first")==0 ) {
                        *p3scoreDummy = *p3scoreDummy + 200;
                }
                if ( strcmp(p3place,"second")==0 ) {
                        *p3scoreDummy = *p3scoreDummy + 150;
                }
                if ( strcmp(p3place,"third")==0 ) {
                        *p3scoreDummy = *p3scoreDummy + 100;
                }
                if ( strcmp(p3place,"fourth")==0 ) {
                        *p3scoreDummy = *p3scoreDummy + 50;
                }
                printf("What place did %s finish in? ", playerDummy4);
                char *p4place = readToken(stdin);
                if ( strcmp(p4place,"first")==0 ) {
                        *p4scoreDummy = *p4scoreDummy + 200;
                }
                if ( strcmp(p4place,"second")==0 ) {
                        *p4scoreDummy = *p4scoreDummy + 150;
                }
                if ( strcmp(p4place,"third")==0 ) {
                        *p4scoreDummy = *p4scoreDummy + 100;
                }
                if ( strcmp(p4place,"fourth")==0 ) {
                        *p4scoreDummy = *p4scoreDummy + 50;
                }
		while ( ( ( strcmp(p1place,"first")!=0 ) && ( strcmp(p2place,"first")!=0 ) && ( strcmp(p3place,"first")!=0 ) && ( strcmp(p4place,"first")!=0 ) ) || 
		( ( strcmp(p1place,"second")!=0 ) && ( strcmp(p2place,"second")!=0 ) && ( strcmp(p3place,"second")!=0 ) && ( strcmp(p4place,"second")!=0 ) ) ||
		( ( strcmp(p1place,"third")!=0 ) && ( strcmp(p2place,"third")!=0 ) && ( strcmp(p3place,"third")!=0 ) && ( strcmp(p4place,"third")!=0 ) ) ||
		( ( strcmp(p1place,"fourth")!=0 ) && ( strcmp(p2place,"fourth")!=0 ) && ( strcmp(p3place,"fourth")!=0 ) && ( strcmp(p4place,"fourth")!=0 ) ) ) {
			printf("Invalid Entry.\nPlease enter 'first', 'second', 'third', and 'fourth'.\n");
	                if ( strcmp(p1place,"first")==0 ) {
        	                *p1scoreDummy = *p1scoreDummy - 200;
                	}
	                if ( strcmp(p1place,"second")==0 ) {
        	                *p1scoreDummy = *p1scoreDummy - 150;
                	}
	                if ( strcmp(p1place,"third")==0 ) {
        	                *p1scoreDummy = *p1scoreDummy - 100;
                	}
	                if ( strcmp(p1place,"fourth")==0 ) {
        	                *p1scoreDummy = *p1scoreDummy - 50;
       			}         
                	if ( strcmp(p2place,"first")==0 ) {
                        	*p2scoreDummy = *p2scoreDummy - 200;
                	}
                	if ( strcmp(p2place,"second")==0 ) {
                        	*p2scoreDummy = *p2scoreDummy - 150;
                	}
                	if ( strcmp(p2place,"third")==0 ) {
                        	*p2scoreDummy = *p2scoreDummy - 100;
                	}
                	if ( strcmp(p2place,"fourth")==0 ) {
                        	*p2scoreDummy = *p2scoreDummy - 50;
                	}
                	if ( strcmp(p3place,"first")==0 ) {
                        	*p3scoreDummy = *p3scoreDummy - 200;
                	}
                	if ( strcmp(p3place,"second")==0 ) {
                        	*p3scoreDummy = *p3scoreDummy - 150;
                	}
                	if ( strcmp(p3place,"third")==0 ) {
                        	*p3scoreDummy = *p3scoreDummy - 100;
                	}
                	if ( strcmp(p3place,"fourth")==0 ) {
                	        *p3scoreDummy = *p3scoreDummy - 50;
        	        }
	                if ( strcmp(p4place,"first")==0 ) {
                        	*p4scoreDummy = *p4scoreDummy - 200;
                	}
                	if ( strcmp(p4place,"second")==0 ) {
                        	*p4scoreDummy = *p4scoreDummy - 150;
                	}
                	if ( strcmp(p4place,"third")==0 ) {
                        	*p4scoreDummy = *p4scoreDummy - 100;
                	}
                	if ( strcmp(p4place,"fourth")==0 ) {
                        	*p4scoreDummy = *p4scoreDummy - 50;
                	}
                	printf("What place did %s finish in? ", playerDummy1);
                	p1place = readToken(stdin);
                        if ( strcmp(p1place,"first")==0 ) {
                                *p1scoreDummy = *p1scoreDummy + 200;
                        }
                        if ( strcmp(p1place,"second")==0 ) {
                                *p1scoreDummy = *p1scoreDummy + 150;
                        }
                        if ( strcmp(p1place,"third")==0 ) {
                                *p1scoreDummy = *p1scoreDummy + 100;
                        }
                        if ( strcmp(p1place,"fourth")==0 ) {
                                *p1scoreDummy = *p1scoreDummy + 50;
                        }
                	printf("What place did %s finish in? ", playerDummy2);
                	p2place = readToken(stdin);
                        if ( strcmp(p2place,"first")==0 ) {
                                *p2scoreDummy = *p2scoreDummy + 200;
                        }
                        if ( strcmp(p2place,"second")==0 ) {
                                *p2scoreDummy = *p2scoreDummy + 150;
                        }
                        if ( strcmp(p2place,"third")==0 ) {
                                *p2scoreDummy = *p2scoreDummy + 100;
                        }
                        if ( strcmp(p2place,"fourth")==0 ) {
                                *p2scoreDummy = *p2scoreDummy + 50;
                        }
                	printf("What place did %s finish in? ", playerDummy3);
                	p3place = readToken(stdin);
                        if ( strcmp(p3place,"first")==0 ) {
                                *p3scoreDummy = *p3scoreDummy + 200;
                        }
                        if ( strcmp(p3place,"second")==0 ) {
                                *p3scoreDummy = *p3scoreDummy + 150;
                        }
                        if ( strcmp(p3place,"third")==0 ) {
                                *p3scoreDummy = *p3scoreDummy + 100;
                        }
                        if ( strcmp(p3place,"fourth")==0 ) {
                                *p3scoreDummy = *p3scoreDummy + 50;
                        }
                	printf("What place did %s finish in? ", playerDummy4);
                	p4place = readToken(stdin);
                        if ( strcmp(p4place,"first")==0 ) {
                                *p4scoreDummy = *p4scoreDummy + 200;
                        }
                        if ( strcmp(p4place,"second")==0 ) {
                                *p4scoreDummy = *p4scoreDummy + 150;
                        }
                        if ( strcmp(p4place,"third")==0 ) {
                                *p4scoreDummy = *p4scoreDummy + 100;
                        }
                        if ( strcmp(p4place,"fourth")==0 ) {
                                *p4scoreDummy = *p4scoreDummy + 50;
                        }
		}
	}
}
