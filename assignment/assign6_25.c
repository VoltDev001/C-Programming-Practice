#include<stdio.h>
int main(){
    int i;
    char st1[100], st2[100];
    printf("Enter a string:\n");
    fgets(st1, sizeof(st1), stdin);
    for(i=0; st1[i]; i++);
    if(st1[i-1]=='\n')
        st1[i-1]='\0';
    for(i=0; st1[i]; i++)
        st2[i]=st1[i];
    st2[i]='\0';
    printf("Copied string: %s\n", st2);
    return 0;
}