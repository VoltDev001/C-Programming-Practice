#include<stdio.h>
int main(){
    int n,i,j,k,l,mid;
    printf("Enter number of rows:\n");
    scanf("%d",&n);
    mid=(n+1)/2;
    for(i=1; i<=n; i++){
        if(i<=mid)
            k=i;
        else
            k=n+1-i;
        l=k-1;
        for(j=1; j<=mid-k; j++){
            printf("  ");
        }
            int count=2*k-1;
            for(j=1; j<=count; j++){
                printf("%2d",l%10);
                if(j<k)
                    l++;
                else{
                    l--;
                    if(l==-1)
                        l=9;
                }
            }
        printf("\n");
    }
    return 0;
}