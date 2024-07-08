#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

int heightOfBST(TreeNode *root, bool &balanced) {

    // base case
    if (!root)
        return 0;

    int lh = heightOfBST(root->left, balanced);
    int rh = heightOfBST(root->right, balanced);

    //balaned if left height and right height don't differ by more than 1
    if (std::abs(lh - rh) > 1)
        balanced = false;

    // return current height ( 1 + for the current node)
    return 1 + std::max(lh, rh);
}

bool isBalanced(TreeNode* root) {
    bool balanced = true;
    heightOfBST(root, balanced);
    return balanced;
}

int main()
{
    // test tree 1 = true
    TreeNode node7 = {7, nullptr, nullptr};
    TreeNode node15 = {15, nullptr, nullptr};
    TreeNode node9 = {9, nullptr, nullptr};
    TreeNode node20 = {20, &node15, &node7};
    TreeNode node3 = {3, &node9, &node20};

    bool result = isBalanced(&node3);
    std::cout << result << std::endl;

    return 0;
}
