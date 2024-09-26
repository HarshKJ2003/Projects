#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapyfy(int n, int a[n], int root)
{
    int largest = root;
    int left = (2 * root) + 1;
    int right = (2 * root) + 2;
    if (left < n && a[left] > a[largest])
        largest = left;
    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != root)
    {
        swap(&a[largest], &a[root]);
        heapyfy(n, a, largest);
    }
}

void heap_sort(int n, int a[n])
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapyfy(n, a, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        heapyfy(i, a, 0);
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
    heap_sort(n, a);
    printf("Sorted array\n");
    print_Arr(a, n);
}