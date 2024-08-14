#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct stk{
    int *st;
    int size;
    int maxSize;
}st;

st stack = {NULL, 0, 1};

void resizeArray(int newCapacity){
    int* newArray = (int*) malloc(sizeof(int) * newCapacity);

    for(int i=0; i<stack.size; i++){
        newArray[i] = stack.st[i];
    }
    free(stack.st);
    stack.st = newArray;
    return;
}

void push(int n){
    if(stack.size == stack.maxSize-1){
        resizeArray(2*stack.maxSize);
        stack.maxSize = 2*stack.maxSize;
    }
    stack.st[stack.size++] = n;
    return;
}

int top(){
    if(stack.size == 0) return -1;
    return stack.st[stack.size-1];
}

int pop(){
    if(stack.size == 0) return -1;
    return stack.st[--stack.size];
}

int isEmpty(){
    return stack.size == 0;
}

void testStack(){
    assert(top() == -1);
    assert(isEmpty() == 1);

    push(1);
    assert(top() == 1);
    assert(isEmpty() == 0);

    push(2);
    push(3);
    assert(top() == 3);
    assert(pop() == 3);
    assert(top() == 2);

}

int main(){
    testStack();

    return 0;
}
