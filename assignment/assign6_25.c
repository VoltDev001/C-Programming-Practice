#include<stdio.h>
int main(){
    int i;
    char st1[100], st2[100];
    printf("Enter a string:\n");
    scanf("%s",st1);
    for(i=0; st1[i]; i++)
        st2[i]=st1[i];
    st2[i]='\0';
    printf("Copied string: %s\n", st2);
    return 0;
}