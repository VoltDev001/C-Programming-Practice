#include<stdio.h>
int calculateHCF(int n1, int n2);
int main(){
    int n1,n2,hcf,lcm;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    hcf=calculateHCF(n1,n2);
    lcm=(n1*n2)/hcf;
    printf("The Lowest Common Multiple of %d and %d = %d.\n",n1,n2,lcm);
    return 0;
}
int calculateHCF(int n1, int n2){
    while(n1 != 0){
        int temp=n1;
        n1=n2%n1;
        n2=temp;
    }
    return n2;
}