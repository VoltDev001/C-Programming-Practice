#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of digits of the number %d = '%d'.\n",n,sum(n));
    return 0;
}
int sum(int n){
    if(n/10 == 0){
        return n%10;
    }
    int sumdiv = sum(n/10);
    int sumrem = n%10;
    int sumn = sumdiv + sumrem;
    return sumn;
}