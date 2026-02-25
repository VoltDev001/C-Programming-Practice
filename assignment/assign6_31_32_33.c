#include<stdio.h>
int main(){
    int i,j, alpha=0, vowel=0, consonant=0, digit=0, spchar=0, word=0, inWord=0;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(i>0 && st[i-1]=='\n')
        st[i-1]='\0';
    for(i=0; st[i]; i++){
        if(st[i]==' ' || st[i]=='\t'){
            inWord=0;
        }
        else{
            if(inWord==0){
                word++;
                inWord=1;
            }
            if((st[i]>='a' && st[i]<='z') || (st[i]>='A' && st[i]<='Z')){
                alpha++;
                char v[10]="aeiouAEIOU";
                for(j=0; j<10; j++){
                    if(st[i]==v[j]){
                        vowel++;
                        break;
                    }
                }
                if(j==10)
                    consonant++;
            }
            else if(st[i]>='0' && st[i]<='9')
                digit++;
            else
                spchar++;
        }
    }
    printf("Alphabet= %d\nVowel= %d\nConsonant= %d\ndigits= %d\nSpecial Characters= %d\nWord= %d\n",
             alpha, vowel, consonant, digit, spchar, word);
    return 0;
}