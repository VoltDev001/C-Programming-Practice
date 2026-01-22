#include<stdio.h>
void calTable(int table[][10], int n, int m, int num);
int main(){
    int k;
    printf("Enter number of tables to be printed(from 1):\n");
    scanf("%d",&k);
    int table[k][10];
    for(int j=1; j<=k; j++){
    calTable(table,(j-1),10,j);
    printf("\n");
    }
    return 0;
}
void calTable(int table[][10], int n, int m, int num){
    for(int i=0; i<m; i++){
        table[n][i]=num*(i+1);
        printf("%d\t",table[n][i]);
    }
}