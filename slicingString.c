#include<stdio.h>
#include<string.h>
void sliceString(char a[], int n, int m);
int main(){
    char arr[100];
    int n,m;
    printf("Enter a string:\n");
    scanf("%s",arr);
    getchar();
    printf("Enter from which to which index slicing is to be done:\n");
    scanf("%d%d",&n, &m);
    sliceString(arr, n, m);
    return 0;
}
void sliceString(char a[], int n, int m){
    char slicedArr[100];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        slicedArr[j] = a[i];
    }
    slicedArr[j]='\0';
    puts(slicedArr);
}