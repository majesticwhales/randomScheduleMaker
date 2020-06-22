#include "setup.c"
#include <stdlib.h>

int main(void) {

    int *divs = malloc(sizeof(int));
    int *teams = malloc(sizeof(int));
    int *games = malloc(sizeof(int));

    int error = basicSetup(divs, teams, games);

    if (error_analysis(error)) {
        return error;
    }
  
    free(divs);
    free(teams);
    free(games);

    return 0;
}
