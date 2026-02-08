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
        for(j=1; j<=n; j++){
            if(j>=mid+1-k && j<=mid-1+k){
                printf("%2d",l%10);
                if(j<mid)
                    l++;
                else{
                    l--;
                    if(l==-1)
                        l=9;
                }
                
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}