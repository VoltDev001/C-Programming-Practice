#include<stdio.h>
void swap(int *x, int *y);
int sumArray(int* ptr, int n);
void getMinMax(int* ptr, int n, int *min, int *max);
int main(){
    //int a,b;
    // printf("Enter two numbers:\n");
    // scanf("%d%d",&a, &b);
    // swap(&a, &b);
    // printf("%d %d", a, b);
    int arr[5]={1,2,3,4,5};
    int* ptr=&arr[0];
    int min=0, max=0;

    getMinMax(ptr, 5, &min, &max);
    //printf("%d",sumArray(ptr, 5));
    
    return 0;
}
void swap(int *x, int *y){
    if (x == NULL || y == NULL)
        return;
    int temp = *x;
    *x=*y;
    *y=temp;
}
int sumArray(int* ptr, int n){
    if (ptr == NULL || n <= 0)
        return 0;
    int i=0, sum=0;
    while(i<n){
        sum+=*ptr;
        ptr++;
        i++;
    }
    return sum;
}
void getMinMax(int* ptr, int n, int *min, int *max){
    int i=0;
    for(i=0; i<n-1; i++){
        if(ptr<ptr++){
            *min=*ptr;
            *max=*ptr++;
        }
        else if(ptr>ptr++){
            *min=*ptr++;
            *max=*ptr;
        }
    }
}