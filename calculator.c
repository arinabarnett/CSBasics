#include <stdio.h>

int main(){
float x, y, z;
char i;
printf("Enter an expression\n");
scanf("%f %c %f", &x, &i, &y);
switch (i)
{
case '+':{
  z = x+y;
  break;
 } case '-': {
  z = x-y;
  break;
} case '*': {
  z = x*y;
  break;
} case '/': {
  z = x/y;
  break;
}
default: 
  printf("You didn't enter the expression");
  break;
}
printf("%f", z);
return 0;
}