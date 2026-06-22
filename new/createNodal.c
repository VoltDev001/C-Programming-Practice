#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node* next;
};

struct Node* createNode(int value);

int main() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    head->next = second;
    second->next = third;

    printf("Node 1: %d\n", head->num);
    printf("Node 2: %d\n", head->next->num);
    printf("Node 3: %d\n", head->next->next->num);

    free(third);
    free(second);
    free(head);

    return 0;
}

struct Node* createNode(int value){
    struct Node* head=NULL;
    head = (struct Node*) malloc (sizeof(struct Node));
    if(head==NULL){
        printf("OS Memory Allocation Failed.\n");
        return NULL;
    }
    head->num=value;
    head->next=NULL;
    return head;
}