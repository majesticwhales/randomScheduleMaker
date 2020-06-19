int basicSetup(int *teams, int *games, int *divs) {

  int return_code = 0;

  printf("How many teams would you like to have in your league?\n");
  if (scanf("%d", &teams) != 1 || teams < 2) { 
    return_code = 1;
  }

  printf("How many games would you like to have in the season?\n");
  if (scanf("%d", &games) != 1 || games < 1) {
    return_code = 2;
  }

  printf("How many divisions would you like to have in one league?\n");
  if (scanf("%d", &divs) != 1 || divs < 1) {    
    return_code = 3;
  }

  return return_code;
}

void error_analysis(int error) {
  switch(error) {
    case 1:
      printf("Error: You must have at least two teams or participants.\n");
      break;
    case 2:
      printf("Error: You must have at least on egame in the regular season for each team.\n");
      break;
    case 3:
      printf("Error: You must have at least one division.\n");
      break;
    default:
      break;
  }
}