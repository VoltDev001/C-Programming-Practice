#include<stdio.h>
int main(){
    int i, j, inWord=0, start=-1, end=-1;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(i>0 && st[i-1]=='\n'){
        st[i-1]='\0';
        i--;
    }
    j=i-1;
    for(i=0; st[i]; i++){
        if(st[i]!=' ' && st[i]!='\t'){
            if(inWord==0){
                start=i;
                break;
            }
        }
    }
    for(i=j; i>=0; i--){
        if(st[i]!=' ' && st[i]!='\t'){
            if(inWord==0){
                end=i;
                break;
            }
        }
    }
    if(start==-1)
        st[i]='\0';
    else{
        for(i=0; start<=end; i++, start++)
            st[i]=st[start];
        st[i]='\0';
    }
    printf("%s", st);
    return 0;
}