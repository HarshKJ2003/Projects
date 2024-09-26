#include <stdio.h>
int main()
{
  printf("Enter Dividend:");
  int a,i;
  scanf("%d",&a);
  for (i=2;i<=a;i++){
    if (a%i==0)
    printf("%d \n",i);
  }
}
