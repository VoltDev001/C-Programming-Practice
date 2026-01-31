#include<stdio.h>
void printString(char a[]);
int main(){
    char stringarr[]={'H','e','l','l','o','\0'};
    char stringarray[]="World!!";
    printString(stringarr);
    printf(" ");
    printString(stringarray);
    printf("\nBy using string specifier\n");
    printf("%s", stringarr);
    printf(" ");
    printf("%s", stringarray);
    return 0;
}
void printString(char a[]){
    int i=0;
    do{printf("%c",a[i]);
        i++;
    }while(a[i]!='\0');
}