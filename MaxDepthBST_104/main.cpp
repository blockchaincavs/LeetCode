#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

/*
 * Can use preorder, inorder, or postorder search
 */
int maxDepth(TreeNode* root) {
    // base case
    if (!root)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    // post order search since accounting for the 1 after both child nodes
    return 1 + std::max(left, right);
}

int main()
{
    TreeNode node7 = {7, nullptr, nullptr};
    TreeNode node15 = {15, nullptr, nullptr};
    TreeNode node20 = {20, &node15, &node7};
    TreeNode node9 = {2, nullptr, nullptr};
    TreeNode root = {3, &node9, &node20};

    int depth = maxDepth(&root);
    std::cout << depth << std::endl;

    return 0;
}
