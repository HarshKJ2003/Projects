#include <stdio.h>
int main()
{
  int a,fac,i;
  i=1,fac=1;
  printf("Enter number:");
  scanf("%d",&a);
  while(i<=a){
    fac=fac*i;
    i++;
  }
  printf("Factorial is %d",fac);
}
