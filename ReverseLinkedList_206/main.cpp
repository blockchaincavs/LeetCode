#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
};


ListNode* reverseList(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *current = head;
    ListNode *next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    //    current = 1 2 3 4 5 null
    //        next = current->next // 2 3 4 5 null
    //        current->next = prev // 1 null = current
    //        prev = current // 1 null
    //        current = next // 2 3 4 5 null

    //    current = 2 3 4 5 null
    //        next = current->next // 3 4 5 null
    //        current->next = prev // 2 1 null = current
    //        prev = current // 2 1 null
    //        current = next // 3 4 5 null

    //    current = 3 4 5 null
    //        next = current->next // 4 5 null
    //        current->next = prev // 3 2 1 null = current
    //        prev = current // 3 2 1 null
    //        current = next // 4 5 null

    //    current = 4 5 null
    //        next = current->next // 5 null
    //        current->next = prev // 4 3 2 1 null = current
    //        prev = currrent // 4 3 2 1 null
    //        current = next // 5 null

    //    current = 5 null
    //        next = current->next // null
    //        current->next = prev // 5 4 3 2 1 null = current
    //        prev = current // 5 4 3 2 1 null
    //        current = next // null

    return prev; // new head node
}

int main()
{
    ListNode node4 = {4, nullptr};
    ListNode node3 = {3, &node4};
    ListNode node2 = {2, &node3};
    ListNode node = {1, &node2};

    ListNode *reverse = reverseList(&node);

    while (reverse != nullptr) {
        std::cout << reverse->val << std::endl;
        reverse = reverse->next;
    }
}
