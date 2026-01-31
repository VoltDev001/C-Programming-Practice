#include<stdio.h>
int main(){
    char fname[100];
    char fullName[100];
    printf("Enter first name.\n");
    scanf("%s",fname);
    getchar();// to eat enter key
    printf("Enter full name.\n");
    fgets(fullName, 100, stdin);
    printf("First Name: %s.\n",fname);
    puts(fullName);
    return 0;
}