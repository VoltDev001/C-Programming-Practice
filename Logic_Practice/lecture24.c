#include<stdio.h>
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);
void selectionSort(int a[], int n);
void frequency(int a[], int n);
int main(){
    int x[100],n,i;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    //insertionSort(x, n);
    // bubbleSort(x, n);
    selectionSort(x, n);
    for(i=0; i<n; i++)
        printf("%d ",x[i]);
        printf("\n");
    frequency(x,n);
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
void bubbleSort(int a[], int n){
    int i,j,temp,swapped;
    for(i=1; i<n; i++){
        swapped=0;
        for(j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swapped=1;
            }
        }
        if(swapped==0)
            break;
    }
}
void selectionSort(int a[], int n){
    int i,j,index,temp;
    for(i=0; i<n; i++){
        index=i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[index])
                index=j;
        }
        if(index!=i){
            temp=a[index];
            a[index]=a[i];
            a[i]=temp;
        }
    }
}
void frequency(int a[], int n){
    int i,j,f;
    // for(i=0; i<n; i++){
    //     f=0;
    //     if(i==0||a[i]!=a[i-1]){
    //         f=1;
    //         for(j=i+1; j<n; j++){
    //             if(a[i]==a[j]){
    //                 f++;
    //             }
    //             else
    //                 break;
    //         }
    //     }
    //     if(f)
    //         printf("Frequency of %d is %d.\n",a[i],f);
    // }
    for(i=0; i<n; i=j){
        f=1;
        j=i+1;
        while(j<n && a[i]==a[j]){
            f++;
            j++;
        }
        printf("Frequency of %d is %d.\n",a[i],f);
    }
}