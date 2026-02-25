#include<stdio.h>
int isPalindrome(char st[]);
int main(){
    int i, start, end;
    char st[100];
    printf("Enter a string:\n");
    fgets(st, sizeof(st), stdin);
    for(i=0; st[i]; i++);
    if(st[i-1]=='\n')
        st[i-1]='\0';
    if(isPalindrome(st))
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");
    return 0;
}
int isPalindrome(char st[]){
    int i, start, end;
    start=0, end=i-1;
    while(start<end){
        char leftChar=st[start];
        char rightChar=st[end];
        if(leftChar >= 'A' && leftChar <= 'Z') 
            leftChar += ' ';
        if(rightChar >= 'A' && rightChar <= 'Z')
            rightChar += ' ';
        if(st[leftChar]!=st[rightChar]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}