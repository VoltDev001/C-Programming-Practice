#include<stdio.h>
int main(){
    char ch='A';
    char chl='a';
    char *ptr=&ch;
    char *ptrl=&chl;
    for(int i=1; i<=26; i++){
        printf("%c ", *ptr);
        (*ptr)++;
    }
    printf("\n");
    for(int i=1; i<=26; i++){
        printf("%c ", *ptrl);
        (*ptrl)++;
    }
    return 0;
}