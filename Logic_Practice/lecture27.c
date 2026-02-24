#include<stdio.h>
int countVowels(char st[]);
int calLength(char st[]);
void isAlphanumeric(char st[]);
int main(){
    int i,len;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    len=calLength(st);
    if(st[len-1]=='\n')
        st[len-1]='\0';
    printf("Number of vowels in the string = %d.\n",countVowels(st));
    isAlphanumeric(st);
    return 0;
}
int calLength(char st[]){
    int i;
    for(i=0; st[i]; i++);
    return i;
}
int countVowels(char st[]){
    int i, j, vowel=0;
    // for(i=0; st[i]; i++){
    //     if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || 
    //        st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U')
    //         vowel++;
    // }
    char v[]="aeiouAEIOU";
    for(i=0; st[i]; i++){
        for(j=0; j<10; j++){
            if(st[i]==v[j]){
                vowel++;
                break;
            }
        }
    }
    return vowel;
}
void isAlphanumeric(char st[]){
    int i, isNum, isAlpha;
    for(i=0, isAlpha=0; st[i]; i++){
        if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')){
            isAlpha=1;
            break;
        }
    }
    for(i=0, isNum=0; st[i]; i++){
        if(st[i]>='0' && st[i]<='9'){
            isNum=1;
            break;
        }
    }
    if(isAlpha && isNum)
        printf("The string is Alphanumeric.\n");
    else
        printf("The string is not Alphanumeric.\n");
}