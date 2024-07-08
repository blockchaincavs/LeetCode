#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

void dfs(TreeNode *root) {

    // base case
    if (!root)
        return;

    std::cout << root->val;
    dfs(root->left);
    dfs(root->right);

    return;
}

/*
 * Time Complexity: O(N)
*/
TreeNode* invertTree(TreeNode* root) {

    //base case
    if (!root)
        return nullptr;

    TreeNode *tempNode = root->left;
    root->left= root->right;
    root->right = tempNode;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

int main()
{
    TreeNode node1 = {1, nullptr, nullptr};
    TreeNode node3 = {3, nullptr, nullptr};
    TreeNode node6 = {6, nullptr, nullptr};
    TreeNode node9 = {9, nullptr, nullptr};
    TreeNode node7 = {7, &node6, &node9};
    TreeNode node2 = {2, &node1, &node3};
    TreeNode root = {4, &node2, &node7};

    // print BST
    dfs(&root);
    std::cout << std::endl;

    TreeNode *node = invertTree(&root);
    dfs(node);
    std::cout << std::endl;

    return 0;
}
