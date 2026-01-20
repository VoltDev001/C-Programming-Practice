#include<stdio.h>
void calculateTable(int table[][]; int n; int m)
int main(){
    int table[2][10];
    calculateTable(table; 2; 10);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", table[i][j]);
        }
    }
    return 0;
}
void calculateTable(int table[][]; int n; int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            table[i][j]=((2+i)*(j+1));
        }
    }
}