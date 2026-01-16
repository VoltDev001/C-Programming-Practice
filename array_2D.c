#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and columns respectively: \n");
    scanf("%d%d",&n,&m);
    int arr2[n][m];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2[i-1][j-1]);
        }
    }
    printf("The required 2 dimensional array of order %d*%d is as below : \n",n,m);
    for(int k=1; k<=n; k++){
        for(int l=1; l<=m; l++){
            printf("%d ",arr2[k-1][l-1]);
        }
        printf("\n");
    }
    return 0;
}