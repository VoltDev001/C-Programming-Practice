#include<stdio.h>
int main(){
int marks[5];
float percent;
for(int i=0; i<5; i++){
   printf("Enter marks(0-100) of %d subject : \n",i+1);
   scanf("%d", &marks[i]);
}
percent = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4])/5.0;
printf("Percentage : %.2f percentage.\n",percent);
if (percent >= 0 && percent < 40){
    printf("Grade : F.\n");
 }
 else if (percent >= 40 && percent < 60){
    printf("Grade : E.\n");
 }
 else if (percent >= 60  && percent < 70){
    printf("Grade : D.\n");
 }
 else if (percent >= 70 && percent < 80){
    printf("Grade : C.\n");
 }
 else if (percent >= 80 && percent < 90){
    printf("Grade : B.\n");
 }
 else {
    printf("Grade : A.\n");
 }
return 0;
}