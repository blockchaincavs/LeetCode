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

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (!subRoot) return true; // null can be a subtree
    if(!root) return false;

    // if they are the same tree then subRoot is a subtree of root
    if (isSameTree(root, subRoot))
        return true;

    // recursivly check if each root is a subroot
    return isSameTree(root->left, subRoot->right) ||
                    isSameTree(root->right, subRoot->right);

    return subTree;
}

int main()
{
    // Tree 1 test case 1
    TreeNode p5 = {5, nullptr, nullptr};
    TreeNode p2 = {2, nullptr, nullptr};
    TreeNode p1 = {1, nullptr, nullptr};
    TreeNode p4 = {2, &p1, &p2};
    TreeNode p = {3, &p4, &p5};

    // Tree 2 test case 1
    TreeNode q1 = {1, nullptr, nullptr};
    TreeNode q2 = {2, nullptr, nullptr};
    TreeNode q = {4, &q1, &q2};

    bool result = isSameTree(&p, &q);
    std::cout << result << std::endl;

    return 0;
}
