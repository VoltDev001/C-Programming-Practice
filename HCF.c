#include<stdio.h>
int calculateHCF(int n1, int n2);
int main(){
    int n1,n2,hcf;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    hcf=calculateHCF(n1,n2);
    printf("The highest common factor of %d and %d = %d.\n",n1,n2,hcf);
    return 0;
}
int calculateHCF(int n1, int n2){
    // for(int i=n1; i>=1; i--){
    //     if(n1%i==0 && n2%i==0){
    //         return i;
    //     }
    // }
    while(n1 != 0){
        int temp=n1;
        n1=n2%n1;
        n2=temp;
    }
    return n2;
}