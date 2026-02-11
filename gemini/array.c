#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Array in reverse order :\n");
    for(i=n-1; i>=0; i--)
        printf("%d ",arr[i]);
    return 0;
}