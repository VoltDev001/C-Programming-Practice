#include<stdio.h>
int main(){
    int arr[5],target,found=0,index;
    for(int i=0; i<5; i++){
        printf("Enter %d array element : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target number :\n");
    scanf("%d",&target);
    for(int j=0; j<5; j++){
        if(target == arr[j]){
           found=1;
           index=j;
           break;
        }
    }
    if(found==1){
        printf("The index of the target number = %d.\n",index);
    }
    else{
        printf("Number not found.\n");
    }
    return 0;
}