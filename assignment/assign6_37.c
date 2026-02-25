#include<stdio.h>
int main(){
    int i, j, fOccur, lOccur;
    char ch, st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    printf("Enter the character to be found:\n");
    scanf("%c",&ch);
    for(i=0; st[i]; i++);
    if(i>0 && st[i-1]=='\n'){
        st[i-1]='\0';
        i--;
    }
    for(i=0; i<=j; i++){
        if(st[i]==ch){
            fOccur=i;
            break;
        }
    }
    if(i<=j){
        for(i=j; i>=0; i--){
            if(st[i]==ch){
                lOccur=i;
                break;
            }
        }
        printf("The first occurence of %c in the string is at %d index.\n", ch, fOccur);
        printf("The last occurence of %c in the string is at %d index.\n", ch, lOccur);
    }
    else
        printf("There is no occurence of %c in the string.\n",ch);
    return 0;
}