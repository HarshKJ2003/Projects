#include <stdio.h>
int primef(int a)
{
int i,j;
i=2;
j=2;
 for(i;i<=a;i++) {
   for(j;j<i;j++) {
     if(j%i!=0){
       break;
     }
   }
   if(a%i==0) {
     printf("%d \n",i);
   }
 }
}
int main()
{
  int a;
  printf("Enter number:");
  scanf("%d",&a);
  primef(a);
}
