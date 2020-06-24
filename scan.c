#include "team.c"
#include "div.c"
#include "sched.c"
#include "make.c"

void scan_answer(char *c) {
  switch(*c) {
    case 't':
      team_functions();
      break;
    case 'd':
      division_functions();
      break;
    case 's':
      schedule_functions();
      break;
    case 'f':
      make_schedule();
      break;
    case 'q':
      break;
    default:
  }
}