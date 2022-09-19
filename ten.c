#include <stdio.h>
int main()
{
    int array[100], n, i, j, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d Numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
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
    cal_freq(array, n);
    return 0;
}

void cal_freq(int arr[], int n)
{
    int i = 0, j = 1, count=1;

    while (i < n)
    {
        if (arr[i] == arr[j]&&j<n)
            count++;
        else{
            printf("%d  occurs %d times\n", arr[i], count);
        count=1;
        }i++;
        j++;
    }
}