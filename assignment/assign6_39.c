#include<stdio.h>
int main(){
    int i, j, k, isEqual=0, n, changed=0, occurrence=-1;
    char st1[100], st2[100];
    printf("Enter two strings:\n");
    fgets(st1, sizeof(st1), stdin);
    fgets(st2, sizeof(st2), stdin);
    printf("Enter which occurence(>0) you want:\n");
    scanf("%d", &n);
    for(i=0; st2[i]; i++);
    if(i>0 && st2[i-1]=='\n')
        st2[i-1]='\0';
    for(i=0; st1[i]; i++);
    if(i>0 && st1[i-1]=='\n')
            st1[i-1]='\0';
    for(i=0; st1[i] ; i++){
        if(st2[0]==st1[i]){
            isEqual=1;
            for(j=1, k=i+1; st2[j]; j++, k++){
                if(st1[k]!=st2[j]){
                    isEqual=0;
                    break;
                }
            }
            if(isEqual){
                occurrence=i;
                changed++;
                i+=(j-1);
                if(changed==n)
                    break;
            }
        }
    }
    if(changed==0)
        printf("There is no occurence.\n");
    else{
        if(changed==n)
            printf("Occurrence = %d.\n",occurrence);
        else
            printf("There is no %d occurence.\n", n);
    } 
    return 0;
}