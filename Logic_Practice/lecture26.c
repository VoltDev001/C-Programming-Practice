#include<stdio.h>
int calLength(char st[]);
void reverseString(char st[]);
void toUpperCase(char st[]);
int main(){
    char st[100];
    int len;
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    len=calLength(st);
    if(st[len-1]=='\n')
        st[len-1]='\0';
    printf("Length = %d .\n",calLength(st));
    // reverseString(st);
    // printf("%s",st);
    toUpperCase(st);
    printf("%s",st);
    return 0;
}
int calLength(char st[]){
    int i;
    for(i=0; st[i]; i++);
    return i;
}
void reverseString(char st[]){
    int len=calLength(st), start, end;
    char temp;
    for(start=0, end=len-1; start<end; start++, end--){
        temp=st[start];
        st[start]=st[end];
        st[end]=temp;
    }
}
void toUpperCase(char st[]){
    int i, len=calLength(st);
    for(i=0; i<len; i++){
        // char* ptr=&st[i];
        // if(*ptr>='a' && *ptr<='z'){
        //     *ptr-=' ';
        //     st[i]=*ptr;
        // }
        if(st[i]>='a' && st[i]<='z')
            st[i]-=' ';
    }
}