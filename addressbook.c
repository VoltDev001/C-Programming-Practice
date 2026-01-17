#include<stdio.h>
int main(){
    int x=45, y=18, z=33;
    int *ptrarr[3]/* or i can initialize with (={&x,&y,&z})*/;
    ptrarr[0]=&x;
    ptrarr[1]=&y;
    ptrarr[2]=&z;
    for(int i=1; i<=3; i++){
        printf("%d ",*ptrarr[i-1]);
    }
    return 0;
}