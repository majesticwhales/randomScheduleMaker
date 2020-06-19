#include <stdio.h>
#include "setup.h"

int main(void) {

    int divs = 0;
    int teams = 0;
    int games = 0;

    printf("How many teams/participants do you want to include?:\n");

    if (scanf("%d", &teams) != 1 || teams < 2) {
        printf("Error: You must have at least two teams or participants.\n");
        return 1;
    }

    printf("How many games would you like to have in the season?\n");

    if (scanf("%d", &games) != 1 || games < 1) {
        printf("Error: You must have at least on egame in the regular season for each team.\n");
        return 2;
    }

    printf("How many divisions would you like to have in one league?\n");

    if (scanf("%d", &divs) != 1 || divs < 1) {
        printf("Error: You must have at least one division.\n");
        return 3;
    }

    return 0;
}
