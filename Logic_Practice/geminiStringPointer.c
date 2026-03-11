#include<stdio.h>
#include<string.h>
void sortStrings(char** arr, int n);
int main(){
    char* words[]={"Orange","Apple","Water","Hello"};
    int n, i;
    n=sizeof(words)/sizeof(words[0]);
    sortStrings(&words[0], n);
    for(i=0; i<n; i++){
        printf("%s\n", words[i]);
    }
    return 0;
}
void sortStrings(char** arr, int n){
    if (arr == NULL || n <= 1)
        return;
    int swapped=-1, i, j;
    for(i=0; i<n-1; i++){
        swapped=0;
        for(j=0; j<n-1-i; j++){
            if(arr[j] != NULL && arr[j+1] != NULL && strcmp(arr[j], arr[j+1]) > 0){
                char *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(!swapped)
            return;
    }
}