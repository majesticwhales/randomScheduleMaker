#include "setup.c"
#include <stdlib.h>

int main(void) {

    intro();

    char cmd = 0;

    do {
        intro_prompts();
        scan_answer();
    } while (cmd != 'q');

}
