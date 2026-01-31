#include<stdio.h>
#include<string.h>
int countVowel(char arr[]);
int main(){
    char arr[100];
    printf("Enter a string:\n");
    scanf("%s",arr);
    getchar();
    printf("The number of vowels in given string = %d.\n",countVowel(arr));
    return 0;
}
int countVowel(char arr[]){
    int count=0;
    for(int i=0; arr[i]!=0; i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'
            ||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            count++;
        }
    }
    return count;
}