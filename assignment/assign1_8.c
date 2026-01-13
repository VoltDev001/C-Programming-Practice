#include<stdio.h>
int main() {
    int sub[5],total;
    float avg,percent;
    for (int i=0; i<5; i++) {
        printf("Enter marks of %d subject : ",i+1);
        scanf("%d",&sub[i]);
    }
    total = (sub[0] + sub[1] +sub[2] + sub[3] + sub[4]);
    avg = total/5.0;
    percent = avg ;
    printf("The total of the five subjects = %d.\n",total);
    printf("The average of the five subjects = %.2f.\n",avg);
    printf("The percentage of the five subjects = %.2f.\n",percent);
    return 0;
}