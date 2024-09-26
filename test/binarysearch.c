int binsearch(int initialindex,int endindex,int value,int arr[]);
#include <stdio.h>
int main()
{
    int x[10]={10,40,55,79,85,91,109,129,148,198};
    printf("%d",binsearch(0,9,85,x)+1);
}
int binsearch(int initialindex,int endindex,int value,int arr[])
{
    int mid;
    mid=initialindex+(endindex-initialindex)/2;
    if(arr[mid]==value){
        return mid;
    }else if(value>arr[mid]){
        return binsearch(mid+1,endindex,value,arr);
    }else if(value<arr[mid]){
        return binsearch(initialindex,mid-1,value,arr);
    }else{
        return -1;}
}
