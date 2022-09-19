#include <stdio.h>
void merge_arr(int arr[], int arr1[], int arr2[], int n1, int n2);
int main()
{
    /*ARRAY MUST BE IN SORTED */
    int arr[5] = {10, 20, 30, 40, 50};
    int arr1[5] = {90, 112, 123, 130, 156};
    int arr2[10];
    merge_arr(arr, arr1, arr2, 5, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
void merge_arr(int arr[], int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    for (int val = 0; i < n1 && j < n1; val++)
    {
        if (arr[i] < arr1[j])
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            arr2[k] = arr1[j];
            j++;
            k++;
        }
    }
        while (i < n1)
        {
            arr2[k] = arr[i];
            i++;
            k++;
        }
        while (j < n1)
        {
            arr2[k] = arr1[j];
            j++;
            k++;
        }
    
}