#include<stdio.h>
int isIdentity(int x[][100], int n);
int main(){
    int x[100][100],n,i,j;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d",&x[i][j]);
    if(isIdentity(x, n))
        printf("The array is an identity matrix.\n");
    else
        printf("The array is not an identity matrix.\n");
    return 0;
}
int isIdentity(int x[][100], int n){
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j && x[i][j]!=1)
                return 0;
            else if(i!=j && x[i][j]!=0)
                return 0;
        }
    }
    return 1;
}