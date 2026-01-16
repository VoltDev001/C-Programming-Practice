#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows and columns respectively: \n");
    scanf("%d%d",&n,&m);
    int arr2_1[n][m], arr2_2[n][m];
    printf("\nEnter entries for first array : \n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_1[i-1][j-1]);
        }
    }
    printf("\nEnter entries for second array : \n ");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter [%d][%d] element : \n",i,j);
            scanf("%d",&arr2_2[i-1][j-1]);
        }
    }
    printf("\nThe required resultant of the two arrays is as below :\n");
    for(int k=1; k<=n; k++){
        for(int l=1; l<=m; l++){
            printf("%d ",((arr2_1[k-1][l-1])+(arr2_2[k-1][l-1])));
        }
        printf("\n");
    }
    return 0;
}