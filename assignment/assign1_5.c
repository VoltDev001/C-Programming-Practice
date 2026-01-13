#include<stdio.h>

int main() {
    int n,n500,n200,n100,n50,n20,n10;

    printf("Enter value in rupees : ");
    scanf("%d",&n);
    
    n500=n/500;
    n=n%500;
    
    n200=n/200;
    n=n%200;
    
    n100=n/100;
    n=n%100;
    
    n50=n/50;
    n=n%50;
    
    n20=n/20;
    n=n%20;
    
    n10=n/10;
    
    printf("Number of notes of 500 = %d.\n",n500);
    printf("Number of notes of 200 = %d.\n",n200);
    printf("Number of notes of 100 = %d.\n",n100);
    printf("Number of notes of 50 = %d.\n",n50);
    printf("Number of notes of 20 = %d.\n",n20);
    printf("Number of notes of 10 = %d.\n",n10);
    return 0;
}