#include<stdio.h>
int main(){
    int target,n,i, x[100];
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&x[i]);
    int max=x[0], max2=x[0];
    for(i=1; i<n; i++){
        if(x[i]>max){
            max2=max;
            max=x[i];
        } 
        else if((x[i]>max2 || max==max2)&&(x[i]!=max)) 
                max2=x[i];
    }
    printf("Second largest element in the array = %d.\n",max2); 
    return 0;
}