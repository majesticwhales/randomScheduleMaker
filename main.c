#include <stdio.h>
#include "setup.h"

int main(void) {

    int *divs;
    int *teams;
    int *games;

    int error = basicSetup(divs, teams, games);

    if (error_analysis(error)) {
        return error;
    }

    return 0;
}
