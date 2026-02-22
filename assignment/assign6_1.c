#include<stdio.h>
void reverseArray(int a[], int n);
int main(){
    int x[100],n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    printf("Original array : \n");
    for(i=0; i<n; i++)
        printf("%d ",x[i]);
    reverseArray(x, n);
    printf("\nReversed array : \n");
    for(i=0; i<n; i++)
        printf("%d ",x[i]);
    return 0;
}
void reverseArray(int a[], int n){
    int i,temp;
    for(i=0; i<n/2; i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}