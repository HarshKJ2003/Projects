#include <stdio.h>
int av(int f,float g)
{
  if(f>g)
  printf("%d \n",f);
  return f;
}
int main()
{
  printf("Enter 5 numbers:");
  int a,b,c,d,e;
  float avg;
  scanf("%d,%d,%d,%d,%d",&a,&b,&c,&e,&d);
  avg=(a+b+c+d+e)/5;
   av(a,avg);
   av(b,avg);
   av(c,avg);
   av(d,avg);
   av(e,avg);
}
