// To check if the character entered is digit or alphabet
#include<stdio.h>
int main(){
char a;
printf("Please enter: \n");
scanf("%c",&a);
if(a >='0' && a <= '9'){
    printf("It is digit.\n");
}
else{
    printf("It is character.\n");
}
return 0;

}