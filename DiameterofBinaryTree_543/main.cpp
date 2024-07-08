#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

/*
 * Helper function to find heght
 *
 * The trick to this problem is we need a global varaiable, or reference
 * The reference will permanatly store the max height of the subtrees
 * and return up the max heght + 1 to the parent.
*/
int height(TreeNode* root, int &maxDiameter) {
    // base case
    if (!root)
        return 0;

    int lh = height(root->left, maxDiameter);
    int rh = height(root->right, maxDiameter);

    maxDiameter = std::max(maxDiameter, lh + rh);

    // count current node after returning from children. "postorder" serach.
    return 1 + (std::max(lh, rh));
}

int diameterOfBinaryTree(TreeNode* root) {
    int maxDiameter = 0;
    height(root, maxDiameter);
    return maxDiameter;
}

int main()
{
    TreeNode node5 = {5, nullptr, nullptr};
    TreeNode node4 = {4, nullptr, nullptr};
    TreeNode node3 = {3, nullptr, nullptr};
    TreeNode node2 = {2, &node4, &node5};
    TreeNode root = {1, &node2, &node3};

    int diameter = diameterOfBinaryTree(&root);
    std::cout << diameter << std::endl;

    return 0;
}
