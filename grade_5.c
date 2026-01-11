#include<stdio.h>
#include<stdio.h>
int main(){
int marks;
printf("Enter marks(0-100):\n");
scanf("%d", &marks);
 if (marks >= 0 && marks < 30){
    printf("Grade : C\n");
 }
 else if (marks >= 30  && marks < 70){
    printf("Grade : B\n");
 }else if (marks >= 70 && marks < 90){
    printf("Grade : A\n");
 }
 else if (marks >= 90 && marks <= 100){
    printf("Grade : A+\n");
 }
else{    printf("Not a valid input\n");
}
return 0;
}