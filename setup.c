#include <stdio.h>

void intro(void) {
  printf("Welcome to the Schedule-Building Tool!\n\n");
}

void introPrompts(void) {
  printf("If you would like to add or delete a team to the directory, type 't'\n");
  printf("If you would like to create or delete a division, type 'd'\n");
  printf("If you would like to alter the schedule settings, type 's'\n");
  printf("If you are done and would like to randomize, type 'done'\n");
  printf("If you would like to quit the program and erase your content, type 'q'\n");
}

int basicSetup() {

  int return_code = 0;
  int teams = 0;
  int games = 0;
  int divs = 0;

  printf("How many teams would you like to have in your league?\n");
  if (scanf("%d", &teams) != 1 || teams < 2) { 
    return_code = 1;
  }

  printf("How many games would you like to have in the season?\n");
  if (scanf("%d", &games) != 1 || games < 1) {
    return_code = 2;
  }

  printf("How many divisions would you like to have in the league?\n");
  if (scanf("%d", &divs) != 1 || divs < 1) {    
    return_code = 3;
  }

  return return_code;
}

int error_analysis(int error) {
  switch(error) {
    case 1:
      printf("Error: You must have at least two teams or participants.\n");
      return 1;
    case 2:
      printf("Error: You must have at least one game in the regular season for each team.\n");
      return 2;
    case 3:
      printf("Error: You must have at least one division.\n");
      return 3;
    default:
      return 0;
  }
}