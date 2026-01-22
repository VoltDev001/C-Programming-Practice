#include<stdio.h>
int maxElement(int arr[], int n);
int main(){
    int n;
    printf("Enter number of array elements:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d array element : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("The maximum of the inputed entries = %d .\n",maxElement(arr,n));
    return 0;
}
int maxElement(int arr[], int n){
int max=arr[0];
    for(int j=1; j<n; j++){
        if(arr[j] > max){
            max=arr[j];
        }
    }
    return max;
}