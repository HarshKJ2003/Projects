#include <stdio.h>
int modify(int a[10]);
int main()
{
  int m1[10];
  for(int i=0;i<10;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&m1[i]);
  }
  modify(m1);
  for(int j=0;j<10;j++){
    printf("%d ",m1[j]);
  }
}
int modify(int a[10])
{
  for(int i=0;i<10;i++){
    a[i]=3*a[i];
  }
}
