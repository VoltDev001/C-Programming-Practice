#include<stdio.h>
int isSymmetric(int x[][100], int n);
int main(){
    int x[100][100],n,i,j;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&x[i][j]);
    if(isSymmetric(x, n))
        printf("The array is a symmetric matrix.\n");
    else
        printf("The array is not a symmetric matrix.\n");
    return 0;
}
int isSymmetric(int x[][100], int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(x[i][j]!=x[j][i])
                return 0;
        }
    }
    return 1;
}