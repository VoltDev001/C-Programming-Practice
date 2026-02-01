#include<stdio.h>
// int main(){
//     int n,i,sum;
//     printf("Enter number:\n");
//     scanf("%d",&n);
//     for(i=1,sum=0; i<=n; i++){
//         printf("%d ",sum+=i);
//     }
//         printf("\n%d",sum);
//     return 0;
// }
int main(){
    int i,n,sum;
    printf("Enter value of n:\n");
    scanf("%d",&n);
    for(i=0,sum=1; i<n; i++){       //for(i=1; i<=n; i++)
        printf("%d ",sum+=i*2+1);   //printf("%d ",i*i+1);
    }
    return 0;
}