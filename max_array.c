#include<stdio.h>
int main(){
    int arr[5],max;
    for(int i=0; i<5; i++){
        printf("Enter %d array element : \n",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int j=1; j<5; j++){
        if(arr[j] > max){
            max=arr[j];
        }
    }
    printf("The maximum of the inputed entries = %d .\n",max);
    return 0;
}