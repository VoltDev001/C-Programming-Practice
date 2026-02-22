#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int i,n=5,isEqual=1;
    for(i=0; i<n; i++){
        if(a[i]!=b[i]){
            isEqual=0;
            break;
        }
    }
    if(isEqual)
        printf("The two arrays are equal.\n");
    else
        printf("The two arrays are not equal.\n");
    return 0;
}