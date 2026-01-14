#include<stdio.h>
// fibonacci = 0,1,1,2,3,5,8,13,21,34,55,..
int main(){
    int f,n=1,nnm1=0;//nextterm=0;
    printf("Enter number of terms required : \n");
    scanf("%d",&f);
    if(f == 1){
        printf("0.\n");
    }
    else{
        printf("0,1,");
    }
    for(int i=1; i<(f-1); i++){
        n+=nnm1;
        nnm1=n-nnm1;
        printf("%d,",n);
    }
    // or this logic with the use of third variable
    // for(int i=1; i<(f-1); i++){
    //     nextterm=nnm1+n;
    //     nnm1=n;
    //     n=nextterm;
    //     printf("%d,",nextterm);
    // }
    return 0;
}