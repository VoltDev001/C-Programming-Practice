#include<stdio.h>
#include<string.h>

int main(){
    char s1[100005], s2[100005];
    printf("Enter two strings:\n");
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int frequency[26]={0}, i, isAnagram=1;
    for(i=0; s2[i]; i++);
    if(i>0 && s2[i-1]=='\n')
        s2[i-1]='\0';
    for(i=0; s1[i]; i++);
    if(i>0 && s1[i-1]=='\n')
            s1[i-1]='\0';

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == ' ') continue; 
        if (s1[i] >= 'a' && s1[i] <= 'z') 
            frequency[s1[i] - 'a']++;
        else if (s1[i] >= 'A' && s1[i] <= 'Z') 
            frequency[s1[i] - 'A']++;
        else{
            isAnagram=0;
            printf("The program expects only alphabet letters.\n");
        }
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == ' ') continue; 
        if (s2[i] >= 'a' && s2[i] <= 'z') 
            frequency[s2[i] - 'a']--;
        else if (s2[i] >= 'A' && s2[i] <= 'Z') 
            frequency[s2[i] - 'A']--;
        else{
            isAnagram=0;
            printf("The program expects only alphabet letters.\n");
        }
    }

    for (int j = 0; j < 26; j++) {
        if (frequency[j] != 0) {
            isAnagram = 0; 
            break;         
        }
    }

    if(isAnagram)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}