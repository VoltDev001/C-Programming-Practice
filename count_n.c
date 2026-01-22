#include<stdio.h>
int countn(int arr[],int n, int findn);
int main(){
    int n,findn;
    printf("Enter the number of array elements : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter which number to count:\n");
    scanf("%d",&findn);
    printf("Number of times %d comes = %d.\n",findn,countn(arr,n,findn));
    return 0;
}
int countn(int arr[],int n, int findn){
    int count=0;
    for(int i=0; i<n; i++){
        if(findn == arr[i]){
            count++;
        }
    }
    return count;
}