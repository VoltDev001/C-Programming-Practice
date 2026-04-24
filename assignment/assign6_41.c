#include<stdio.h>
int main(){
    int i, j, spaceFlag=-1;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(i >0 && st[i-1]=='\n')
        st[i-1]='\0';
    for(i=0, j=0; st[i]; i++){
        if(st[i]!=' ' && st[i]!='\t'){
            st[j++]=st[i];
            spaceFlag=0;
        }
        else{
            if(spaceFlag==0){
                st[j++]=st[i];
                spaceFlag=1;
            }
        }
    }
    st[j]='\0';
        printf("%s", st);
    return 0;
}