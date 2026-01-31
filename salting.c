#include<stdio.h>
#include<string.h>
int main(){
    char pass[100];
    char newpass[100];
    char salt[]="123";
    printf("Enter your password:\n");
    scanf("%s",pass);
    strcpy(newpass, pass);
    strcat(newpass, salt);
    puts(newpass);
    return 0;
}