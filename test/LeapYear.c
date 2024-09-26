#include <stdio.h>
int main()
{
  int a;
  printf("Enter year:");
  scanf("%d",&a);
  if(a%4==0) {
    printf("Year is a leap year.");
  } else {
    printf("Year is not leap year.");
  }
}
