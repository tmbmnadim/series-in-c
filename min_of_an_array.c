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

    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Min is:%d\n",min);
}