#include <stdio.h>
int linsearch(int arr[],int n,int value);
int main()
{
    int x[10]={79,2984,92,940,10,100,244,45,32,4,};
    printf("%d",linsearch(x,10,100));
}
int linsearch(int arr[],int n,int value)
{
  for(int i=0;i<n;i++){
    if(arr[i]==value){
        return (i+1);
    }
  }
}