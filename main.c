#include <stdio.h>

int main(void) {

    int divs = 0;
    int teams = 0;
    int games = 0;

    printf("How many teams/participants do you want to include?");

    if (scanf("%d", teams) != 1 || teams < 2) {
        printf("You must have at least two teams or participants.")
    }

    return 0;
}