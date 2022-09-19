#include<stdio.h>
int f1(int arr[],int n);
int main(){
int a[]={10,2,44,2,2,3,1,2,3,10};
int val=f1(a,10);
if(val!=0)
printf("\nThe first occurence value is %d",val);
else
printf("no element repeat\n");
return 0;
}
int f1(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
         if(arr[i]==arr[i+1]){
            return arr[i];
         }
    }
    return 0;
}
