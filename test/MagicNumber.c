#include <stdio.h>
int main()
{
  printf("Enter two number:");
  int a,b,c,d,e;
  scanf("%d,%d",&a,&b);
  e=d=c=1;
  while(c<b && d==d|e){
    c=a%10;
    e=c;
    d=d|e;
    if(c>b || d!=d|e) {
      printf("Number is not magical.");
      break;
      a=a/10;
    }
  }
  if(c<b && d==d|e){
    printf("Number is magical.");
  }
}
