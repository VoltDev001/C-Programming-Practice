#include<stdio.h>
void findTranspose(int x[][100], int n);
int main(){
    int x[100][100],n,i,j;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&x[i][j]);
    findTranspose(x, n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void findTranspose(int x[][100], int n){
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            temp=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=temp;
        }
    }
}