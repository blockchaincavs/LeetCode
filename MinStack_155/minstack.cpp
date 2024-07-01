#include "minstack.h"

MinStack::MinStack()
{

}

void MinStack::push(int val)
{
    m_stack.push_back(val);

    if (m_minStack.empty() || (val < m_minStack.top().first)) {
        m_minStack.push({val, 1});
    } else if (val == m_minStack.top().first) {
        m_minStack.top().second += 1;
    }

}

void MinStack::pop()
{
    if (m_stack.back() == m_minStack.top().first) {
        if (--m_minStack.top().second == 0) {
            m_minStack.pop();
        }
    }
    m_stack.pop_back();
}

int MinStack::top()
{
    return m_stack.back();
}

int MinStack::getMin()
{
    std::pair<int, int> myPair;
    return m_minStack.top().first;
}
