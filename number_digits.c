#include <stdio.h>
int main(){
int n,ndigit=1;
    printf("Enter a number : \n");
    scanf("%d",&n);
while(n >= 10){
        ndigit+=1;
        n=n/10;
     }
     // or the above can be written with the below logic
//      int n,ndigit=0;
//     printf("Enter a number : \n");
//     scanf("%d",&n);
// while(n != 0){
//         ndigit++;
//         n=n/10;
//      }
     printf("The number of digits in the given number = %d.\n",ndigit);
    return 0;
}
