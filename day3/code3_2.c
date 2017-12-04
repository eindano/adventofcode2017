#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// 265149 => 266330

int nums[100][100];
 
void main(int argc, char** argv) {
  int input = atoi(argv[1]);
  
  int middleX = 50;
  int middleY = 50;
  
  int rows = 1;
  int columns = 1;
  int x = middleX;
  int y = middleY;
  int v = 1;
  int num = 1;
  int i = 0;
  nums[50][50] = 1;
  int j = 0;
  int val = -1;
  
  while(1) {
    // right
    while (num > i++) {
      x++;
      v = nums[x-1][y-1] + nums[x-1][y] + nums[x-1][y+1] +   nums[x][y-1] + nums[x][y+1]    + nums[x+1][y-1] + nums[x+1][y] + nums[x+1][y+1];
      nums[x][y] = v;
      if (v > input) {
        val = v;
        goto end;
      }
    } 

    i = 0;
    // turn up
    while(num > i++) {
      y--;
      v = nums[x-1][y-1] + nums[x-1][y] + nums[x-1][y+1] +   nums[x][y-1] + nums[x][y+1]    + nums[x+1][y-1] + nums[x+1][y] + nums[x+1][y+1];
      nums[x][y] = v;
      if (v > input) { 
        val = v;
        goto end;
      }
    }  

    // left
    i = 0;
    num++;
    rows += 1;
    while (num > i++) {   
      x--;
      v = nums[x-1][y-1] + nums[x-1][y] + nums[x-1][y+1] +   nums[x][y-1] + nums[x][y+1]    + nums[x+1][y-1] + nums[x+1][y] + nums[x+1][y+1];
      nums[x][y] = v;
      if (v > input) {
        val = v;
        goto end;
      }
    } 
    
    // down
    columns += 1;
    i = 0;
    while(num > i++) {
      y++;
      v = nums[x-1][y-1] + nums[x-1][y] + nums[x-1][y+1] +   nums[x][y-1] + nums[x][y+1]    + nums[x+1][y-1] + nums[x+1][y] + nums[x+1][y+1];
      nums[x][y] = v;
      if (v > input) {
        val = v;
        goto end;
      }
    }  
    rows += 1;
    num++;
    i = 0;
  }  
end:
  printf("%d\n", val);
}
