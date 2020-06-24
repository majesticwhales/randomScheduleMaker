#include "setup.c"
#include "scan.c"
#include <stdlib.h>

int main(void) {

    intro();

    char *cmd = 0;

    do {
        intro_prompts();
        scan_answer(cmd);
    } while (*cmd != 'q');

    delete_memory();

}
