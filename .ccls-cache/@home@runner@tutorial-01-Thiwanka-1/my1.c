#include <stdio.h>

int main() {

  int mark1,mark2;
  float avg;

  printf("Enter Mark 1 : ");
  scanf("%d", &mark1);

  printf("Enter mark 2 : ");
  scanf("%d", &mark2);

  avg = (mark1 + mark2) / 2.0;

  printf("Avarage is : %.2f", avg);
  
  return 0;
}