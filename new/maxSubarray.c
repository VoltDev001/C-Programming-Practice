#include<stdio.h>

int main(){
    int N=9;
    // printf("Enter number of array elements:\n");
    // scanf("%d", &N);
    int A[9]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
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