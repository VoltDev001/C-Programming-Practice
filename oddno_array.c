#include<stdio.h>
int odd(int arr[]);
int main(){
    int arr[]={1,2,3,4,5,6};
    printf("Number of odd numbers = %d\n",odd(arr));
    return 0;
}
int odd(int arr[]){
    int count=0;
    for(int i=0; i<6; i++){
        if((arr[i]%2)!=0){
            count++;
        }
    }
    return count;
}