// Author: Liam Hooks lrh5428@psu.edu
// Collaborator: Angela Bao ymb5072@psu.edu
// Collaborator: Seulki Kim svk6271@psu.edu
// Collaborator:
// Section: 2
// Breakout: 2
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *gradeInput = readline("Enter your CMPSC 131 grade: ");
  double grade = strtod(gradeInput, NULL);
  if (grade >= 93.0)
    printf("Your letter grade for CMPSC 131 is A.\n");
  else if (grade >= 90.0)
    printf("Your letter grade for CMPSC 131 is A-.\n");
  else if (grade >= 87.0)
    printf("Your letter grade for CMPSC 131 is B+.\n");
  else if (grade >= 83.0)
    printf("Your letter grade for CMPSC 131 is B.\n");
  else if (grade >= 80.0)
    printf("Your letter grade for CMPSC 131 is B-.\n");
  else if (grade >= 77.0)
    printf("Your letter grade for CMPSC 131 is C+.\n");
  else if (grade >= 70.0)
    printf("Your letter grade for CMPSC 131 is C.\n");
  else if (grade >= 60.0)
    printf("Your letter grade for CMPSC 131 is D.\n");
  else
    printf("Your letter grade for CMPSC 131 is F.\n");
}