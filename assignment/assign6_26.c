#include<stdio.h>
int main(){
    int i,j;
    char st1[100], st2[100];
    printf("Enter two strings:\n");
    fgets(st1, sizeof(st1), stdin);
    fgets(st2, sizeof(st2), stdin);
    for(i=0; st2[i]; i++);
    if(st2[i-1]=='\n')
        st2[i-1]='\0';
    for(i=0; st1[i]; i++);
    if(st1[i-1]=='\n')
        st1[i-1]='\0';
    for(i=0; st1[i]; i++);
    for(i, j=0; st2[j]; i++, j++){
        st1[i]=st2[j];
    }
    st1[i]='\0';
    printf("Concatenated string: %s\n", st1);
    return 0;
}