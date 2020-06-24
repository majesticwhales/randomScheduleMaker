#include <stdio.h>

void intro(void) {
  printf("Welcome to the Schedule-Building Tool!\n\n");
}

void intro_prompts(void) {
  printf("If you would like to add or delete a team to the directory, type 't'\n");
  printf("If you would like to create or delete a division, type 'd'\n");
  printf("If you would like to alter the schedule settings, type 's'\n");
  printf("If you are finished and would like to randomize, type 'f'\n");
  printf("If you would like to quit the program and erase your content, type 'q'\n");
}
