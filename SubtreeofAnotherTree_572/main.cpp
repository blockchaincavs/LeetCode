#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    // base case
    if (!p || !q) {
        return true;
    } else if (!p || !q) {
        return false;
    }

    return ( (p->val == q->val) &&
            (isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
            );
}

int main()
{
    // Tree 1 test case 1
    TreeNode p3 = {3, nullptr, nullptr};
    TreeNode p2 = {2, nullptr, nullptr};
    TreeNode p = {3, &p2, &p3};

    // Tree 2 test case 1
    TreeNode q3 = {3, nullptr, nullptr};
    TreeNode q2 = {2, nullptr, nullptr};
    TreeNode q = {3, &q2, &q3};

    bool result = isSameTree(&p, &q);
    std::cout << result << std::endl;



        return 0;
}
