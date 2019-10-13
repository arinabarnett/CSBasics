// Program that calculates factorial of a number 

#include <stdio.h>

int main(){
  int n, i;
  int factorial = 1;
  printf("Please enter a positive number: ");
  scanf("%d", &n);
  if (n < 0)
  printf("Error: You entered a negative number");
  else {
  for(i=1; i<=n; ++i) {
  factorial *= i;
  }
  printf("Factorial of %d = %d", n, factorial);
  }
  return 0;
}