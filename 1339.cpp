// https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/description/?envType=daily-question&envId=2026-01-07

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
class Solution {
public:
    long long get(TreeNode* root, long long& total, long long& sub)
    {
        if(!root)
            return 0;
        long long subTotal = root->val + get(root->left, total, sub) + get(root->right, total, sub);
        if(total > 0)
        {
            long long maxProd = subTotal * (total - subTotal);
            sub = max(maxProd, sub);
        }
        return subTotal;
    }

    int maxProduct(TreeNode* root) {
        long long total = 0;
        long long sub = 0;
        total = get(root, total, sub);
        get(root, total, sub);
        return sub % 1000000007;
    }
};
