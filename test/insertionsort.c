#include <stdio.h>
void swap(int *ele1ptr,int *ele2ptr);
void inssort(int length,int arr[]);
void printarr(int length,int arr[]);
void main()
{
    printf("Before sorting\n");
    int x[20]={20,28,58,592,5,2,59,502,5,89,52,95,58,583,592,1,392,94,194,67};
    printarr(20,x);
    inssort(20,x);
    printf("\nAfter sorting\n");
    printarr(20,x);

}
void swap(int *ele1ptr,int *ele2ptr)
{
    int temp;
    temp=*ele1ptr;
    *ele1ptr=*ele2ptr;
    *ele2ptr=temp;
}
void printarr(int length,int arr[])
{
    printf("[");
    for(int i=0;i<length;i++){
        printf(" %d ",arr[i]);
    }
    printf("]");
}
void inssort(int length,int arr[])
{
    for(int i=1;i<length;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
}
