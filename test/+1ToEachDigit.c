#include <stdio.h>
#include <math.h>
int main()
{
  printf("Enter number:");
  int a,b,c,d;
  d=0;
  scanf("%d",&a);
  c=a;
  while (a>0) {
    b=a%10;
    if (b!=9) {
      c=c+pow(10,d);
    } else {
      c=c+0;
    }
    a=a/10;
    d++;
  }
  printf("%d",c);
}
