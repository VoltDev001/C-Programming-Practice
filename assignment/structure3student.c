#include<stdio.h>
int main(){
    struct student{
        char *name;
        int rollNo;
    }s1,s2;
    s1.name="Hello";
    s1.rollNo=45;
    s2.name="Hello2";
    s2.rollNo=6;
    
    return 0;
}