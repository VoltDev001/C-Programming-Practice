#include<stdio.h>
void findTranspose(int x[][100], int y[][100], int n, int m);
int main(){
    int x[100][100],y[100][100],n,m,i,j;
    printf("Enter number of rows and columns :\n");
    scanf("%d%d",&n,&m);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&x[i][j]);
    findTranspose(x, y, n, m);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void findTranspose(int x[][100], int y[][100], int n, int m){
    int i,j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            y[i][j]=x[j][i];
}