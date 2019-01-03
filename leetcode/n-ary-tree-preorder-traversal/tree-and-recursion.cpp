/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void preorder(Node *root, vector<int> &ans) {
        if (NULL == root) { return; }

        ans.push_back(root->val);
        for (auto & child : root->children) {
            preorder(child, ans);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int> ans;
        if (NULL == root) { return ans; }

        preorder(root, ans);
        return ans;
    }
};