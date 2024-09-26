#include <stdio.h>
int main()
{
  int a;
  printf("Enter number of elements:");
  scanf("%d",&a);
  int m1[a];
  for(int i=0;i<a;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&m1[i]);
  }
  for(int j=0;j<a;j++){
    if(m1[j]==m1[a-j-1]){
      printf("Element %d and element %d are equal.\n",j+1,a-j);
    } else {
      printf("Element %d and element %d are not equal.\n",j+1,a-j);
    }
  }
}
