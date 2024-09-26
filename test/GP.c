#include <stdio.h>
#include <math.h>
int main()
{
  printf("Enter number and number of terms:");
  int x,n,i,sum;
  sum=0;
  scanf("%d,%d",&x,&n);
  for (i=1;i<=n;i++) {
    sum=sum+pow(x,i);
  }
  printf("%d",sum);
}
