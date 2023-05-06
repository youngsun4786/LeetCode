#include<iostream>
#include<algorithm>
#include <cstdlib>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//https://leetcode.com/problems/minimum-depth-of-binary-tree/

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
private:
    int dfs(TreeNode* root) {
        // base case - root is null
        if (root == nullptr) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if (root->left == nullptr) return right + 1;
        if (root->right == nullptr) return left + 1;
        std::cout << "left subtree: " << left << '\n';
        std::cout << "right subtree: " << right << '\n';
        return std::min(left, right) + 1;
    }
};

int main() {
    Solution *sol = new Solution();
    // [2,null,3,null,4,null,5,null,6]

    TreeNode* t = new TreeNode(2, NULL, new TreeNode(3, NULL, new TreeNode(4, NULL, new TreeNode(5, NULL, new TreeNode(6)))));
    int res = sol->minDepth(t);
    std::cout << "final res is " << res << '\n';
    // while (curr != nullptr) {
    //     std::cout << curr->val << std::endl;
    //     curr = curr->next;
    // }

    return 0;
}