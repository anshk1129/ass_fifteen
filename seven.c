#include <stdio.h>
int cal_dup(int arr[], int n);
int main()
{
    int array[100], n, i, j, swap;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d Numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d",&array[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }
    int answer=cal_dup(array,n);
    printf("Total number of duplicate elements is %d",answer);
    return 0;
}
int cal_dup(int arr[], int n)
{
    int i=0, k = 0, j = 1, count = 0;
    while (k < n)
    {
        if (arr[i] == arr[j]&&j<n)
        {
            count++;
        }
        i++;
        j++;
        k++;
    }
    return count;
}