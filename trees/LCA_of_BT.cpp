/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<iostream>


struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};




class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return nullptr;
        if (root->val == p->val || root->val == q->val) return root;

        TreeNode *leftNode = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightNode = lowestCommonAncestor(root->right, p, q);

        if (leftNode != nullptr && rightNode != nullptr) return root;

        if (leftNode != nullptr) return leftNode;

        if (rightNode != nullptr) return rightNode;

        return nullptr;
    }
};

int main() {

    Solution *sol = new Solution();

    TreeNode* l = new TreeNode(1);
    // TreeNode* r = new TreeNode(2);
    TreeNode* t = new TreeNode(2);
    t->left = l;
    // t->right = r;
    TreeNode* res = sol->lowestCommonAncestor(t, l, t);

    std::cout << res->val << "\n";
    return 0;

}
