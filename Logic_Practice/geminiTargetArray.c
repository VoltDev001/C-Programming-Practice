#include<stdio.h>
void insertionSort(int a[], int n);
void targetElement(int a[], int n, int t);
int main(){
    int target,n,i, x[100];
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    printf("Enter target element:\n");
    scanf("%d",&target);
    insertionSort(x, n);
    targetElement(x, n, target);
    return 0;
}
void insertionSort(int a[], int n){
    int i,j,temp;
    for(i=1; i<n; i++){
        for(j=i-1; j>=0; j--){
            if(a[j+1]<a[j]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            else
                break;
        }
    }
}
void targetElement(int a[], int n, int t){
    int low=0, high=n-1, mid;
    while(low<=high){
        mid=low + (high-low)/2;
        if(a[mid]==t){
            printf("Index of %d in sorted array is %d.\n",t,mid);
            return;
            }
        if(a[mid]<t)
            low=mid+1;
        else
            high=mid-1;
    }
    printf("%d is not in the array.\n",t);
}