#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

/* Inorder traversal
 * perform operation after returning from the left node
*/
void inOrderTraversal(TreeNode *root, std::vector<int> &nums) {

    // base case
    if (!root)
        return;

    inOrderTraversal(root->left, nums);
    nums.push_back(root->val);
    inOrderTraversal(root->right, nums);
}

/* pre-order traversal
 * perform operation first before going to the next node
*/
void preOrderTraversal(TreeNode *root, std::vector<int> &nums) {

    // base case
    if (!root)
        return;

    nums.push_back(root->val);
    inOrderTraversal(root->left, nums);
    inOrderTraversal(root->right, nums);
}

/* post-order traversal
 * perform operation after returning from child nodes
*/
void postOrderTraversal(TreeNode *root, std::vector<int> &nums) {

    // base case
    if (!root)
        return;

    inOrderTraversal(root->left, nums);
    inOrderTraversal(root->right, nums);
    nums.push_back(root->val);
}

int main()
{
    TreeNode node3 = {3, nullptr, nullptr};
    TreeNode node2 = {2, &node3, nullptr};
    TreeNode node1 = {1, nullptr, &node2};
    std::vector<int> nums;
    nums.reserve(3);

    // First test case
    inOrderTraversal(&node1, nums);

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // second test case
    node1 = {1, nullptr, nullptr};
    nums.clear();
    inOrderTraversal(&node1, nums);

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Third test case
    TreeNode node;
    nums.clear();
    inOrderTraversal(&node, nums);

    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
