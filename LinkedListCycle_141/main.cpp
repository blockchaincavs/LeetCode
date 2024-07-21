#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
};

// use fast and slow pointers
// Time Complexity: O(n)
// Memory: O(1)
bool hasCycle(ListNode *head) {

    ListNode *slow = head;
    ListNode *fast = head->next->next;

    while (fast != nullptr && fast->next != nullptr) {
        if (fast == slow) return true;
        fast = fast->next->next;
        slow = slow->next;
    }
    return false;
}

int main()
{
    ListNode node4 = {-4, nullptr};
    ListNode node0 = {0, &node4};
    ListNode node2 = {2, &node0};
    ListNode node3 = {3, &node2};
    node4.next = &node2;

    bool result = hasCycle(&node3);
    std::cout << result << std::endl;
    return 0;
}
