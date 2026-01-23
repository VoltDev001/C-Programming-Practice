#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    printf("Enter number of subjects:\n");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i<n; i++){
        printf("Enter details of student %d:\n",i+1);
        for(int j=0; j<m; j++){
            printf("Enter marks of subject %d:\n",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        printf("Student %d:",i+1);
        for(int j=0; j<m; j++){
            printf("%d|",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}