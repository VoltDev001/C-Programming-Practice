#include<stdio.h>
void reverseArray(int a[], int n);
int main(){
    int x[100],n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    reverseArray(x, n);
    return 0;
}
void reverseArray(int a[], int n){
    int i;
    
}