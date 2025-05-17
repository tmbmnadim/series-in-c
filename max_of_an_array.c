#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of an array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Max is:%d\n",max);
}