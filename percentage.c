#include<stdio.h>
int percent(int sci, int sans, int math);
int main(){
    int sci, sans, math;
     printf("Enter marks of Science, Sanskrit and Maths : ");
    scanf("%d%d%d",&sci,&sans,&math);
    printf("Percentage of the student = %d.\n",percent(sci,sans,math));
    return 0;
}
int percent(int sci, int sans, int math){
    int P=(sci + sans + math)/3;
    return P;
}