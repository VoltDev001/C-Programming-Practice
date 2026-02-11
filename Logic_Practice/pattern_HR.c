#include<stdio.h>
int main(){
    int i,j,l,k,t,n,start_index,m;
    scanf("%d", &n);
    t=2*n-1;
    for(i=1; i<=t; i++){
        l=1;
        if(i<=n)
            k=i;
        else
            k=2*n-i;
        for(j=1; j<=k-1; j++){
            printf("%d ",n+1-j);
            l++;
        }
        for(j=l; j<=n; j++){
            printf("%d ",n+1-k);
        }
        start_index=1;
        if(i==n)
            start_index=2;
        m=n-1;
        for(j=start_index; j<=n-k; j++){
            printf("%d ",n+1-k);
            m--;
        }
        for(j=m; j>=1; j--){
            printf("%d ",n+1-j);
        }
        printf("\n");
    }
    return 0;
}