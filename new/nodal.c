#include<stdio.h>
#include<stdlib.h>

struct Node{
    int num;
    struct Node* next;
};

int main(){
    struct Node* head=NULL;
    struct Node* second=NULL;
    head = (struct Node*) malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("OS Memory Allocation Failed.\n");
        return 1;
    }

    head->num=10;
    head->next=NULL;
    second= (struct Node*) malloc(sizeof(struct Node));
    if (second == NULL) {
        printf("OS Memory Allocation Failed.\n");
        return 1;
    }

    second->num=20;
    second->next=NULL;
    head->next= second;

    printf("Value of head node= %d", head->num);
    printf("Value of second node= %d", head->next->num);
    free(second);
    free(head);
    
    return 0;
}