#include <stdio.h>
int main()
{
  int a,b,c,d,e;
  d=1;
  printf("Enter values of i,M and N for equation 2^i*(M%N):");
  scanf("%d %d %d",&a,&b,&c);
  if(a==0){
    d=1;
  }else{
    for(int i=0;i<a;i++){
      d=2*d;
    }
  }
  e=d*(b%c);
  printf("%d",e);
}
