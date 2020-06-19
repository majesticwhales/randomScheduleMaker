#include <stdio.h>
#include "setup.h"

int main(void) {

    int *divs;
    int *teams;
    int *games;

    basicSetup(divs, teams, games);

    printf("Error: You must have at least two teams or participants.\n");
    printf("Error: You must have at least on egame in the regular season for each team.\n");
    printf("Error: You must have at least one division.\n");
    
    return 0;
}
