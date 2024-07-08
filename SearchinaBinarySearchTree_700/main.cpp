#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

/*
 * Time Complexity: O(logn)
*/
TreeNode* searchBST(TreeNode* root, int val) {

    while (root != nullptr) {
        if (val > root->val) {
            root = root->right;
        } else if (root->val < val) {
            root = root->left;
        } else {
            // found value
            return root;
        }
    }
    return nullptr;
}

int main()
{

    TreeNode node7 = {7, nullptr, nullptr};
    TreeNode node1 = {1, nullptr, nullptr};
    TreeNode node3 = {3, nullptr, nullptr};
    TreeNode node2 = {2, &node1, &node3};
    TreeNode root = {4, &node2, &node7};
    TreeNode *node = searchBST(&root, 2);

    std::cout << node->val << std::endl;

    return 0;
}
