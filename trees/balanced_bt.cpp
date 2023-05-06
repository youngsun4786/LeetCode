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

// https://leetcode.com/problems/balanced-binary-tree/

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int diff = 0;
    bool isBalanced(TreeNode* root) {
        dfs(root, diff);
        if (diff > 1) return false;
        return true;
    }

private:
    int dfs(TreeNode* root, int& diff) {
        if (root == nullptr) return 0;
        int left = dfs(root->left, diff);
        int right = dfs(root->right, diff);
        // find the difference in height of left&right subtree
        diff = std::max(diff, std::abs(left-right));
        return std::max(left, right) + 1;
    }
};

int main() {
    Solution *sol = new Solution();

    TreeNode* l = new TreeNode(1);
    TreeNode* r = new TreeNode(3);
    TreeNode* t = new TreeNode(2, l, r);
    // TreeNode* res = sol->invertTree(t);
    // while (curr != nullptr) {
    //     std::cout << curr->val << std::endl;
    //     curr = curr->next;
    // }

    return 0;
}