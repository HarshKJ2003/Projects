#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapyfy(int n, int a[n], int root)
{
    int smallest = root;
    int left = (2 * root) + 1;
    int right = (2 * root) + 2;
    if (left < n && a[left] < a[smallest])
        smallest = left;
    if (right < n && a[right] < a[smallest])
        smallest = right;

    if (smallest != root)
    {
        swap(&a[smallest], &a[root]);
        heapyfy(n, a, smallest);
    }
}

void min_heap(int n, int a[n])
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapyfy(n, a, i);
    }
}

void print_Arr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min_heap(n, a);
    printf("heapify array\n");
    print_Arr(a, n);
}