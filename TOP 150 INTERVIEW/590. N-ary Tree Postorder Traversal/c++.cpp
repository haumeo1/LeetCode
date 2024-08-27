#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() : val(0), children(vector<Node*>()) {}
    Node(int _val) : val(_val), children(vector<Node*>()) {}
    Node(int _val, vector<Node*> _children) : val(_val), children(_children) {}
};
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root == nullptr){
            return result;
        }
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node* temp = s.top();
            s.pop();
            result.push_back(temp->val);
            for (int i=0;i<temp->children.size();i++){
                s.push(temp->children[i]);
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }

};

