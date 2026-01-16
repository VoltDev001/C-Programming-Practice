#include<stdio.h>
void printBonjour();
int main(){
    char a;
    printf("Which langauage ?\n Enter 'e' for English and 'f' for French :\n");
    scanf("%c",&a);
    if(a == 'f'){
        printBonjour();
    }
    else{
        printf("Hello!\n");
    }
    return 0;
}
void printBonjour(){
    printf("Bonjour!\n");
}