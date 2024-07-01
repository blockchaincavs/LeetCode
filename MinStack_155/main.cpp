#include <iostream>
#include "minstack.h"

int main()
{
    MinStack *minStack = new MinStack;
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    std::cout << minStack->getMin() << std::endl; // return -3
    minStack->pop();
    std::cout << minStack->top() << std::endl;    // return 0
    std::cout << minStack->getMin() << std::endl; // return -2

    delete minStack;
    return 0;
}
