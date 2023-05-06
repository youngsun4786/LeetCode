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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            return std::max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
        }
    }

    //function to display all the element present in the binary search tree
    void display(TreeNode* root)
    {
        if (root != nullptr)
        {
            display(root->left);
            std::cout<<root->val<<" ";
            display(root->right);
        }
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