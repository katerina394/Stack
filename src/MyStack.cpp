#include "MyStack.h"


MyStack :: MyStack(void) {
    top = 0;
}
MyStack :: ~MyStack(void) {
    while ( top != 0 ) {
        CNode *tmp = top;
        top = top->next;
        delete tmp;
    }
}
int& MyStack :: GetTop() {
    if ( top != 0 )
        return top->data;
    else
        throw 1;
}
bool MyStack :: push(int x) {
    CNode *node = new CNode;
    node->data = x;
    node->next = top;
    top = node;
    return true;
}
bool MyStack :: pop() {
    if ( top != 0 ) {
        CNode *tmp = top;
        top = top->next;
        delete tmp;
        return true;
    } else {
        return false;
    }
}
int MyStack :: min() {
    int Min;
    if ( top != 0 ) {
        Min = top->data;
        CNode *tmp = top;
        while ( tmp->next != 0 ) {
            tmp = tmp->next;
            if ( tmp->data < Min )
                Min = tmp->data;
        }
        return Min;
    } else {
        throw 1;
    }
}
