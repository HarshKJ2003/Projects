#include <stdio.h>
int main()
{
 int a,b,c,i;
 c=1;
  printf("Enter number and power:");
  scanf("%d,%d",&a,&b);
   i=0;
   while(i<b){
     c=c*a;
      i++;
  }
  printf("%d",c);
}
