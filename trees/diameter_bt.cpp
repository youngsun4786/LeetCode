#include<iostream>
#include<algorithm>
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

// https://leetcode.com/problems/maximum-depth-of-binary-tree/

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    int diameter = 0; 
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root, diameter);
        return diameter;
    }
private:
    int dfs(TreeNode* root, int& diameter) {
        // return -1 b/c mathematically no child should give -1
        if (root == nullptr) return -1;
        int left = dfs(root->left, diameter);
        int right = dfs(root-> right, diameter);
        // to calculate diameter must find the height in left,right subtree
        diameter = std::max(diameter, left + right + 2);

        // return height for one recursion of dfs
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