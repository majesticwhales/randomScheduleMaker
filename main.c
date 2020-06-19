#include <stdio.h>
#include "setup.h"

int main(void) {

    int *divs;
    int *teams;
    int *games;

    int error = basicSetup(divs, teams, games);

    error_analysis(error);
    
    return error;
}
