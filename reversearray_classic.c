#include<stdio.h>
int reverseArray(int arr[], int n);
int main(){
    int n;
    printf("Enter number of elements : \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d element : ", i);
        scanf("%d",&arr[i]);
    }
    reverseArray(arr, n);
    for(int i=1; i<=n; i++){
        printf("%d\t",arr[i-1]);
    }
    return 0;
}
int reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstvalue=arr[n-i-1];
        int secondvalue=arr[i];
        arr[i]=firstvalue;
        arr[n-i-1]=secondvalue;
    }
}