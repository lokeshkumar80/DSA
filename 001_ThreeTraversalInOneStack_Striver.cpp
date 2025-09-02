/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) : val(data) , left(nullptr) , right(nullptr) {}
};

void traversal(TreeNode* root, vector<vector<int>>&ans){
    if(root==NULL){
        return;
    }
    vector<int> pre, inr, post;
    stack<pair<TreeNode*, int>>st;
    st.push({root,1});
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        // this is the part of the preorder...
        // increment 1 to 2..
        // and push the left of the current node..
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left){
                st.push({it.first->left, 1});
            }
        }

        // Now this is the part of inorder ...
        else if(it.second==2){
            inr.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right, 1});
            }
        }
        // don't push it back again...
        else{
            post.push_back(it.first->val);
        }
    }
    ans.push_back(pre);
    ans.push_back(inr);
    ans.push_back(post);
}

vector<vector<int>> treeTraversal(TreeNode* root){
    vector<vector<int>>ans;
    traversal(root, ans);
    return ans;
}

int main() {
    // Create a sample binary tree:
    //         1
    //        / \
    //       2   3
    //      / \   \
    //     4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    // Perform traversals
    vector<vector<int>> result = treeTraversal(root);

    // Print results
    cout << "Preorder: ";
    for (int x : result[0]) cout << x << " ";
    cout << endl;

    cout << "Inorder: ";
    for (int x : result[1]) cout << x << " ";
    cout << endl;

    cout << "Postorder: ";
    for (int x : result[2]) cout << x << " ";
    cout << endl;

    return 0;
}

