#include<stdio.h>

int main(){
    int N;
    printf("Enter number of array elements:\n");
    if (scanf("%d", &N) != 1 || N <= 0) return 1;

    int A[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int max_ending_here=A[0], max_so_far=A[0];
    for(int i=1; i<N; i++){
        if(A[i] < (max_ending_here+A[i])){
            max_ending_here+=A[i];
        }
        else{
            max_ending_here=A[i];
        }

        if(max_ending_here>max_so_far){
            max_so_far=max_ending_here;
        }
    }

    printf("Maximum value of sub-continuous arrays= %d.\n", max_so_far);
    return 0;
}