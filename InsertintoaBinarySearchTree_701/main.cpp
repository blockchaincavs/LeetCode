#include <iostream>



/*
 * Insert into a leaf is easier
*/
TreeNode* insertIntoBST(TreeNode* root, int val) {

    // base case, found a leaf node
    if (!root)
        return new TreeNode{val, nullptr, nullptr};

    if (val > root->val) {
        root->right = insertIntoBST(root->right, val);
    } else if (val < root->val) {
        root->left = insertIntoBST(root->left, val);
    }
    return root;

}

int main()
{
    TreeNode node7 = {7, nullptr, nullptr};
    TreeNode node1 = {1, nullptr, nullptr};
    TreeNode node3 = {3, nullptr, nullptr};
    TreeNode node2 = {2, &node1, &node3};
    TreeNode root = {4, &node2, &node7};

    int val = 5; // num to insert
    TreeNode *node = insertIntoBST(&root, val);

    // print the side of tree val was inserted into
    while (node != nullptr) {
        std::cout << node->val;
        if (val > node->val) {
            node = node->right;
        } else if (val < node->val) {
            node = node->left;
        } else {
            break;
        }

    }
    delete node;

    return 0;
}
