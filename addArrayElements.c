#include<stdio.h>
int main(){
    int arr[100];
    int n,newn;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number of new elements:\n");
    scanf("%d",&newn);
    printf("Enter new elements:\n");
    for(int j=n; j<(newn+n); j++){
        scanf("%d",&arr[j]);
    }
    for(int k=0; k<(newn+n); k++){
        printf("%d\n",arr[k]);
    }
    return 0;
}