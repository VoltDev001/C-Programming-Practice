#include<stdio.h>
void reverseString(char st[], int start, int end);
int main(){
    int i, j, start=0, inWord=0;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(st[i-1]=='\n')
        st[i-1]='\0';
    for(i=0; st[i]; i++);
    reverseString(st, 0, i-1);
    j=i;
    for(i=0; i<=j; i++){
        if(st[i]==' '|| st[i]=='\t' || st[i]=='\0'){
            if(inWord==1)
                reverseString(st, start, i-1);
            inWord=0;
        }
        else if(inWord==0){
            inWord=1;
            start=i;
        }
    }
    printf("%s",st);
}
void reverseString(char st[], int start, int end){
    char temp;
    for(; start<end; start++, end--){
        temp=st[start];
        st[start]=st[end];
        st[end]=temp;
    }
}