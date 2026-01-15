#include<stdio.h>
#include<math.h>
int main(){
    int n,initialn,ndigit=0,revnumb=0;
    int numb_digit(int n, int ndigit);
    printf("Enter a number : \n");
    scanf("%d",&n);
    initialn=n;
    ndigit=numb_digit(n,ndigit);
    // My logic
    for(int i=ndigit; i>=1; i--){
        revnumb+=(n%10)*(round(pow(10.0,i-1)));
        n/=10;
    }
    // standard and easy logic 
    // for(int i=1; i<=ndigit; i++){
    //     revnumb=((revnumb*10)+(n%10));
    //     n/=10;
    // }
    printf("The reverse of %d = %d.\n",initialn,revnumb);
    if(initialn == revnumb){
        printf("%d is a palindrome number.\n",initialn);
    }
    else{
        printf("%d is not a palindrome number.\n",initialn);
    }
    return 0;
}
int numb_digit(int n, int ndigit){ 
    while(n != 0){
        ndigit++;
        n/=10;
    }
    return ndigit;}