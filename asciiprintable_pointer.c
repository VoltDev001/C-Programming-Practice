#include<stdio.h>
int main(){
    char ch='!';
    char *ptr=&ch;
    for(int i=1; i<=255; i++){
        printf("%c ", *ptr);
        (*ptr)++;
    }
    return 0;
}