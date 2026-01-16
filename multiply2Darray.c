#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and columns respectively: \n");
    scanf("%d%d",&n,&m);
    int arr2_1[n][m], arr2_2[m][n];
    int sum[n][n];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            sum[i-1][j-1]=0;
        }
    }
    printf("\nEnter entries for first array : \n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_1[i-1][j-1]);
        }
    }
    printf("\nEnter entries for second array : \n ");
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_2[i-1][j-1]);
        }
    }
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            for(int c=1; c<=m; c++){
                sum[a-1][b-1]+=((arr2_1[a-1][c-1])*(arr2_2[c-1][b-1]));
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("The multiplication of 2 array gives an array order %d*%d ,which  is as below : \n",n,n);
    for(int k=1; k<=n; k++){
        for(int l=1; l<=n; l++){
            printf("%d ",sum[k-1][l-1]);
        }
        printf("\n");
    }
    return 0;
}