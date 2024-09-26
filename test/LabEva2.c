#include <stdio.h>
int main()
{
  int a,b,c,d;
  c=0;
  d=0;
  printf("Enter number:");
  scanf("%d",&a);
  b=a;
  while(b!=1){
    if(b%2!=0){
      printf("%d can't be written in power of 2.",a);
      d=1;
      break;
    }
    b=b/2;
    c++;
  }
  if(d!=1){
    printf("%d can be written as 2 to the power %d.",a,c);
  }
}
