#include <stdio.h> 

int main() { 
    int N; 
    printf("Enter size of matrix:\n"); 
    scanf("%d", &N); 
    
    int m[N][N]; 
    
    printf("Enter array elements:\n"); 
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < N; j++) { 
            scanf("%d", &m[i][j]); 
        } 
    } 

    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            m[i][j]+=m[j][i];
            m[j][i]=m[i][j]-m[j][i];
            m[i][j]-=m[j][i];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N/2; j++){
            m[i][j]+=m[i][N-1-j];
            m[i][N-1-j]=m[i][j]-m[i][N-1-j];
            m[i][j]-=m[i][N-1-j];
        }
    }
    
    printf("90degrees rotated image:\n");
    for(int i = 0; i < N; i++) { 
        for(int j = 0; j < N; j++) { 
            printf("%d\t", m[i][j]);
        } 
        printf("\n"); 
    } 
    
    return 0; 
}