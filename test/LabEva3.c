#include <stdio.h>
int a=0;
int rec(int b);
int main()
{
  int ip;
  scanf("%d",&ip);
  printf("%d",rec(ip));
}
int rec(int b)
{
  while(b!=1){
    if(b%2==0){
      b=b/2;
      a++;
    }else{
      b=3*b+1;
      a++;
    }
  }
  return a;
}
