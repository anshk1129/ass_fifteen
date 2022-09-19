#include <stdio.h>
void rotate(int a[], int n, int val, int pos);
int main()
{
    int n, arr[100], val, pos;
    printf("Enter how many terms you \n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter how many times you want to rotate\n");
    scanf("%d", &val);
    printf("In which direction you want to rotate\n 1 For left\n 2 For right\n");
    scanf("%d",&pos);
    rotate(arr, n, val, pos);
    return 0;
}
void rotate(int a[], int n, int val, int pos)
{
    int i = 0, k = 1, j = 0, temp;
    while (i < val)
    {
        j = 0, k = 1;
        while (k < n)
        {

            if (pos == 1)
            {
                temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }

            else
            {
                temp = a[j];
                a[j] = a[n - 1];
                a[n - 1] = temp;
            }
            j++;
            k++;
        }
        i++;
    }
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    
}