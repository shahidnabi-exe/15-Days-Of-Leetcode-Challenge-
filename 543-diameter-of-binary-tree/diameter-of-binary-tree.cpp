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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        HeightofTree(root, diameter);
        return diameter;
    }
    private: 
    int HeightofTree(TreeNode* root, int & diameter){
        if (root == NULL ){
            return 0;
        }
        int lh = HeightofTree(root -> left, diameter);
        int rh = HeightofTree(root -> right, diameter);
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }

};