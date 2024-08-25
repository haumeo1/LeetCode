#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        ord(result,root);
        return result;
    }
    void ord(vector<int>& result, TreeNode* root){
        if(root!=nullptr){
            ord(result, root->left);
            ord(result, root->right);
            result.push_back(root->val);
        
        }
    }
};