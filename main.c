#include "setup.c"
#include <stdlib.h>

int main(void) {

    intro();
    intro_prompts();

    int error = basicSetup();

    if (error_analysis(error)) {
        return error;
    }

    return 0;
}
