#include<stdio.h>
int main(){
    int sub[5],sum=0;
    for(int i=0; i<5; i++){
        printf("Enter marks of %d subject : \n",i+1);
        scanf("%d",&sub[i]);
    }
    for(int j=1; j<=5; j++){
        sum+=sub[j-1];
    }
    printf("The total of 5 subects = %d.\n",sum);
    return 0;
}