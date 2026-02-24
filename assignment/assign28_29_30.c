#include<stdio.h>
void toUpperCase(char st[]);
void toLowerCase(char st[]);
void toggleCase(char st[]);
int main(){
    int i;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(st[i-1]=='\n')
        st[i-1]='\0';
    //toUpperCase(st);
    //toLowerCase(st);
    toggleCase(st);
    printf("%s\n",st);
    return 0;
}
void toUpperCase(char st[]){
    int i;
    for(i=0; st[i]; i++){
        if(st[i]>='a' && st[i]<='z')
            st[i]-=' ';
    }
}
void toLowerCase(char st[]){
    int i;
    for(i=0; st[i]; i++){
        if(st[i]>='A' && st[i]<='Z')
            st[i]+=' ';
    }
}
void toggleCase(char st[]){
    int i;
    for(i=0; st[i]; i++){
        if(st[i]>='a' && st[i]<='z')
            st[i]-=' ';
        else if(st[i]>='A' && st[i]<='Z')
            st[i]+=' ';
    }
}