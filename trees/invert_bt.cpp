#include<iostream>
#include<vector>
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

//https://leetcode.com/problems/invert-binary-tree/

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // no root
        if (root == nullptr) return nullptr;

        // swapping the children

        // if there's no children just return itself
        if (root->left == nullptr && root->right == nullptr) return root;

        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        invertTree(root->left);
        invertTree(root->right);
    
        return root;
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

    sol->display(t);
    // TreeNode* res = sol->invertTree(t);
    // while (curr != nullptr) {
    //     std::cout << curr->val << std::endl;
    //     curr = curr->next;
    // }

    return 0;
}