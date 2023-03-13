#include <stdio.h>

// main function
int main() {

  float x, y, z;

  printf("Enter the marks for subject1: ");
  scanf("%f", &x);

  printf("Enter the marks for subject2: ");
  scanf("%f", &y);

  z = (x + y)/2.00;

  printf("Average is %f", z);

  return 0;
}

