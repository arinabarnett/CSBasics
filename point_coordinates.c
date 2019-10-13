// User inputes coordinates of a point, program calcuates the quadrant of the point 
#include <stdio.h>

int main(){
  int x, y; 
  printf("Please enter x and y\n");
  scanf("%i %i", &x, &y);
  if(x>0 && y>0) {
    printf("Your point is in the first(1) quadrant");
  } else if (x<0 && y>0) {
    printf("Your point is in the second(2) quadrant");
  } else if (x<0 && y<0) {
    printf("Your point is in the third(3) quadrant");
  } else {
    printf("Your point is in the fourth(4) quadrant");
  }
  return 0;
}