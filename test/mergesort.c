#include <stdio.h>
void merge(int start,int mid,int stop,int arr[]);
void mersort(int start,int stop,int arr[]);
void printarr(int length,int arr[]);
void main()
{
    printf("Before sorting\n");
    int x[20]={20,28,58,592,5,2,59,502,5,89,52,95,58,583,592,1,392,94,194,67};
    printarr(20,x);
    mersort(0,19,x);
    printf("\nAfter sorting\n");
    printarr(20,x);

}
void printarr(int length,int arr[])
{
    printf("[");
    for(int i=0;i<length;i++){
        printf(" %d ",arr[i]);
    }
    printf("]");
}
void mersort(int start,int stop,int arr[])
{
    if(stop>start){
        int mid;
    mid=start+(stop-start)/2;
    mersort(start,mid,arr);
    mersort(mid+1,stop,arr);
    merge(start,mid,stop,arr);
    }
}
void merge(int start,int mid,int stop,int arr[])
{
    int arr1length,arr2length;
    arr1length=mid-start+1;
    arr2length=stop-mid;
    int arr1[arr1length],arr2[arr2length];
    for(int i=0;i<arr1length;i++){
        arr1[i]=arr[start+i];
    }
    for(int j=0;j<arr2length;j++){
        arr2[j]=arr[j+mid+1];
    }
    int initialindexarr1=0;
    int initialindexarr2=0;
    int initialindexarr=start;
    while(initialindexarr1<arr1length && initialindexarr2<arr2length){
        if(arr1[initialindexarr1]<=arr2[initialindexarr2]){
            arr[initialindexarr]=arr1[initialindexarr1];
            initialindexarr1++;
        }else{
            arr[initialindexarr]=arr2[initialindexarr2];
            initialindexarr2++;
        }
        initialindexarr++;
    }
    while(initialindexarr1<arr1length){
        arr[initialindexarr]=arr1[initialindexarr1];
        initialindexarr1++;
        initialindexarr++;
    }
    while(initialindexarr2<arr2length){
        arr[initialindexarr]=arr2[initialindexarr2];
        initialindexarr2++;
        initialindexarr++;
    }
}
