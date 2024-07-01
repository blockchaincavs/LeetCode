#ifndef MINSTACK_H
#define MINSTACK_H

#include <iostream>
#include <stack>

class MinStack
{
public:
    MinStack();
    void push(int val);
    void pop();
    int top();
    int getMin();

private:
    std::vector<int> m_stack;
    std::stack<std::pair<int, int>> m_minStack;
};

#endif // MINSTACK_H
