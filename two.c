#include <stdio.h>
int small(int arr[], int n);
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The smallest element is %d ", small(arr, n));
    return 0;
}
int small(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}