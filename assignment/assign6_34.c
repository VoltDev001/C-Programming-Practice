#include<stdio.h>
void reverseString(char st[]);
int main(){
    int i;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(st[i-1]=='\n')
        st[i-1]='\0';
    reverseString(st);
    printf("%s",st);
    return 0;
}
void reverseString(char st[]){
    int i, start, end;
    for(i=0; st[i]; i++);
    char temp;
    for(start=0, end=i-1; start<end; start++, end--){
        temp=st[start];
        st[start]=st[end];
        st[end]=temp;
    }
}