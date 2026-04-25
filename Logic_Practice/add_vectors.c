#include<stdio.h>
typedef struct vector{
    float i;
    float j;
}vec;
void add(struct vector v1, struct vector v2, struct vector sum);
struct vector* addition(struct vector* ptr1, struct vector* ptr2, struct vector* summ);
int main(){
    vec vec1, vec2, sum={0};
    vec vect[3];
    vec1.i=45.0;
    vec1.j=45.2;
    vec2.i=8.2;
    vec2.j=8.5;
    vect[0].i=45;
    vect[0].j=5;
    vect[1].i=5;
    vect[1].j=45;
    vect[2].i=0;
    vect[2].j=0;
    vec* ptr1=&vect[0];
    vec* ptr2=&vect[1];
    vec* summ=&vect[2];
    add(vec1, vec2, sum);
    addition(ptr1, ptr2, summ);
    printf("Sum of vectors = %.2fi + %.2fj .\n", vect[2].i , vect[2].j);
    return 0;
}

void add(struct vector v1, struct vector v2, struct vector sum){
    sum.i= v1.i + v2.i;
    sum.j= v1.j + v2.j; 
    printf("Sum of vectors = %.2fi + %.2fj .\n", sum.i , sum.j);
}

struct vector* addition(struct vector* ptr1, struct vector* ptr2, struct vector* summ){
    summ->i+= ptr1->i + ptr2->i;
    summ->j+= ptr1->j + ptr2->j;
    return summ;
}