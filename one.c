#include <stdio.h>
int great(int arr[], int n);
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
    printf("The greatest element is %d ", great(arr, n));
    return 0;
}
int great(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}