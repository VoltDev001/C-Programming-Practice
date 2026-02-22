#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and columns respectively: \n");
    scanf("%d%d",&n,&m);
    int arr2_1[n][m], arr2_2[m][n];
    int sum[n][n];
    printf("\nEnter entries for first array : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_1[i][j]);
        }
    }
    printf("\nEnter entries for second array : \n ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_2[i][j]);
        }
    }
    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            sum[a][b]=0;
            for(int c=0; c<m; c++){
                sum[a][b]+=((arr2_1[a][c])*(arr2_2[c][b]));
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("The multiplication of 2 array gives an array order %d*%d ,which  is as below : \n",n,n);
    for(int k=0; k<n; k++){
        for(int l=0; l<n; l++){
            printf("%d ",sum[k][l]);
        }
        printf("\n");
    }
    return 0;
}