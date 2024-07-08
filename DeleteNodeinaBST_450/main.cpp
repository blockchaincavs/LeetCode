#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

/*
 * FindMinNode helper function
 * Can always replace deleted node with its right childs smallest node
 * this is because we know the deleted nodes right is greter than its left
*/

TreeNode* findMinNode(TreeNode* root) {
    while (root != nullptr && root->left != nullptr) {
        root = root->left;
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    // base case
    if (!root)
        return nullptr;

    // first find the node we want to delete
    if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else {
        // found value. Now find its replacement
        TreeNode *minNode = findMinNode(root);
        root->val = minNode->val;
        root->right = deleteNode(root->right, minNode->val);
        return root;
    }

    return root;
}

int main()
{
    TreeNode node7 = {7, nullptr, nullptr};
    TreeNode node2 = {2, nullptr, nullptr};
    TreeNode node4 = {4, nullptr, nullptr};
    TreeNode node6 = {6, nullptr, &node7};
    TreeNode node3 = {3, &node2, &node4};
    TreeNode root = {5, &node3, &node6};

    int val = 3;
    TreeNode *node = deleteNode(&root, val);

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
    return 0;
}
