#include<stdio.h>
int main(){
    int temp;
    int unarr[5];
    for(int m=0; m<=4; m++){
        printf("Enter %d array element :\n",m);
        scanf("%d",&unarr[m]);
    }
    for(int i=0; i<=4; i++){
        for(int j=0; j<4; j++){
            if(unarr[j]>unarr[j+1]){
                temp=unarr[j];
                unarr[j]=unarr[j+1];
                unarr[j+1]=temp;
            }
        }
    }
    for(int k=0; k<=4; k++){
    printf("%d ",unarr[k]);}
    return 0;}