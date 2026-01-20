#include<stdio.h>
int main(){
int n;
printf("Enter till where to print table (1-_) : \n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
printf("Table of %d = ",i);
for(int j=1; j<=10; j++){
printf("%d\t",(i*j));
}
printf("\n");
}
return 0;
}