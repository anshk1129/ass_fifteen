#include<stdio.h>
int main()
{
int array[100], n, i, j, swap; 
printf("Enter number of elements\n");
scanf("%d", &n); 
printf("Enter %d Numbers:\n", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
printf("Before reverse\n");
for(int i=0;i<n;i++){
    printf("%d ",array[i]);
}
printf("\nAfter reverse\n");
for(int i=n-1;i>=0;i--){
    printf("%d ",array[i]);
}

}