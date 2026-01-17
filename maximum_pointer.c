#include<stdio.h>
void max(int a, int b, int *maximum);
int main(){
    int a,b,maximum;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    max(a,b,&maximum);
    printf("Maximum of the two numbers = %d\n",maximum);
    return 0;
}
void max(int a, int b, int *maximum){
    if(a>b){
        *maximum=a;
    }
    else{
        *maximum=b;
    }
}