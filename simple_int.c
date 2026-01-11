# include<stdio.h>

int main(){
float pamount , rate , time ;
printf("Enter Principal amount ");
scanf("%f",&pamount);
printf("Enter Rate of interest ");
scanf("%f",&rate);
printf("Enter Time  ");
scanf("%f",&time);
printf("The Simple Interest : %.2f\n",pamount * rate * time / 100);
return 0;



}