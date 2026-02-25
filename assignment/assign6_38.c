#include<stdio.h>
int main(){
    int i;
    char ch1, ch2, st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    printf("Enter the character to be replaced:\n");
    scanf("%c",&ch1);
    printf("Enter the character to be placed:\n");
    scanf(" %c",&ch2);
    for(i=0; st[i]; i++);
    if(st[i-1]=='\n')
        st[i-1]='\0';
    for(i--; i>=0; i--)
        if(st[i]==ch1)
            st[i]=ch2;
    printf("The string after replacing %c with %c =\n%s", ch1, ch2, st);
    return 0;
}