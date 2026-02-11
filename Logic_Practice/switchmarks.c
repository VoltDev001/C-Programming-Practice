#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter marks : \n");
scanf("%d", &n);
switch(n){
case 91 ... 100:
printf("Grade : A\n");
break;
case 81 ... 90:
printf("Grade : B\n");
break;
case 71 ... 80:
printf("Grade : C\n");
break;
case 61 ... 70:
printf("Grade : D\n");
break;
case 51 ... 60:
printf("Grade : E\n");
break;
case 0 ... 50:
printf("Grade : F\n");
break;
default:
printf("Enter correct marks!!\n");
}
    return 0;
}