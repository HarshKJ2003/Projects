#include<stdio.h>
int main()
{
  printf("Enter the number:");
  int c,a,i;
  i=2;
  scanf("%d",&a);
  do {
    c=a%i;
    ++i;
  } while (i<a && c!=0);
  if (c==0){
    printf("Number is not prime.");
  } else if (i>a/2) {
    printf("Number is prime.");
  }
}
