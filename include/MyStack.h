#ifndef C__GIT_PALINDROM_IMPLEMENTATION_PALINDROM_IMPLEMENTATION_INCLUDE_MYSTACK_H_
#define C__GIT_PALINDROM_IMPLEMENTATION_PALINDROM_IMPLEMENTATION_INCLUDE_MYSTACK_H_
#include "StructCNode.h"
class MyStack {
    CNode *top;
public:
    MyStack(void);
    ~MyStack(void);
    int& GetTop();
    bool pop();
    bool push(int x);
    int min();
};
#endif  // C__GIT_PALINDROM_IMPLEMENTATION_PALINDROM_IMPLEMENTATION_INCLUDE_MYSTACK_H_
