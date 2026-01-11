#include<stdio.h>
//if temperature > 25degree celsius --> hot
void hotCold(int n);
int main(){
    int n;
    printf("Enter the temperature(in Celsius) : ");
    scanf("%d",&n);
    hotCold(n);
    return 0;
}
void hotCold(int n){
    if(n > 25){
        printf("It is hot.\n");
    }
    else{
        printf("It is cold.\n");
    }
}