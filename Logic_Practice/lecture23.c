#include<stdio.h>
int sumArray(int x[], int n);
int greatestArray(int x[], int n);
void rotateArray_1(int x[], int n);
void rotateArray_r(int x[], int n, int r);
int main(){
    int x[100],n,i,r;
    printf("Enter number of elements and no. of elements to rotate:\n");
    scanf("%d%d",&n ,&r);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    printf("%d \n",sumArray(x,n));
    printf("%d \n",greatestArray(x,n));
    printf("\n");
    rotateArray_r(x, n, r);
    for(i=0; i<n; i++)
        printf("%d ",x[i]);
    return 0;
}
int sumArray(int x[], int n){
    int sum=0;
    for(int j=0; j<n; j++)
        sum+=x[j];
    return sum;
}
int greatestArray(int x[], int n){
    int max=x[0],m,i;
    for(i=1,m=0; i<n; i++){
        if(x[i]>max){
            max=x[i];
            m=i;
        }
    }
    return m;
}
void rotateArray_1(int x[], int n){
    int temp=x[n-1],i;
    for(i=n-1; i>0; i--)
        x[i]=x[i-1];
    x[0]=temp;
}
void rotateArray_r(int x[], int n, int r){
    // int temp[r],i;
    // for(i=0; i<r; i++)
    //     temp[i]=x[n-r+i];
    // for(i=n-1; i>=r; i--)
    //     x[i]=x[i-r];
    // for(i=0; i<r; i++)
    //     x[i]=temp[i];
    int i;
    while(r--){
        rotateArray_1(x, n);
    }
}