#include<stdio.h>
void print_uniq(int arr[],int n);
int main()
{
int array[100], n, i, j, swap; 
printf("Enter number of elements\n");
scanf("%d", &n); 
printf("Enter %d Numbers:\n", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1]) 
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
} 
print_uniq(array,n);
return 0;
}
void print_uniq(int arr[],int n)
{ 
  int i=0,j=1;
  printf("Printing unique elements if exits\n");
  while(j<n){
    if(arr[i]!=arr[j]&&arr[i]!=arr[i-1]){
      printf("%d ",arr[i]);

    }
    i++;
    j++;
  }
  if(arr[i]!=arr[i-1]){
    printf("%d ",arr[i]);
  }
  }

