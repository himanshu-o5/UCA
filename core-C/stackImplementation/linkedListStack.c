#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Node{
    int value;
    struct Node* next;
} ListNode;

struct Stack{
    ListNode* head;
    int size;
};
struct Stack stack = {NULL, 0};

void push(int n){
    if(!stack.head){
        stack.head = (ListNode*)malloc(sizeof(struct Stack));
        stack.head->value = n;
    }
    else{
        ListNode* temp = (ListNode*)malloc(sizeof(struct Stack));
        temp->next = stack.head;
        temp->value = n;
        stack.head = temp;
    }
}

int top(){
    if(!stack.head) return -1;
    return stack.head->value;
}

int isEmpty(){
    return !stack.head;
}

int pop(){
    if(!stack.head){
        return -1;
    }
    else{
        ListNode* temp = stack.head;
        stack.head = stack.head->next;
        int val = temp->value;
        free(temp);
        return val;
    }
}

void testStack(){
    assert(top() == -1);
    assert(isEmpty() == 1);
    assert(pop() == -1);

    push(1);
    assert(top() == 1);
    push(2);
    assert(top() == 2);
    assert(isEmpty() == 0);
    assert(pop() == 2);
    assert(top() == 1);
    assert(pop() == 1);
    assert(top() == -1);
    assert(isEmpty() == 1);

    return;
}

int main(){
    testStack();

    return 0;
}
