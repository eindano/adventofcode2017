#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 265149 => 443

void main(int argc, char** argv) {
  int input = atoi(argv[1]);
  
  int numberRows = ((int)ceil( sqrt(input) ));
  if (numberRows % 2 == 0) {
    numberRows++;
  }
  int maxValueInRow = numberRows * numberRows;
  
  int modInput = (maxValueInRow - input) % (numberRows - 1);
  int modMiddle = (numberRows - 1) / 2;  
  int steps = modMiddle + abs(modMiddle - modInput); 
  
  printf("Steps = %d\n", steps);
}
