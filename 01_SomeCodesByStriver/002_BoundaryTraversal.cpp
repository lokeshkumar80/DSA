#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) : val(data) , left(nullptr) , right(nullptr) {}
};

bool isLeaf(TreeNode* root){
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    else{
        return false;
    }
}

void addLeftBoundary(TreeNode* root, vector<int> &ans){
    TreeNode* node = root->left;
    while(node){
        if(!isLeaf(node)){
            ans.push_back(node->val);
        }
        if(node->left){
            node = node->left;
        }else{
            node = node->right;
        }
    }
}

void addRightBoundary(TreeNode* root, vector<int> &ans){
    TreeNode* node = root->right;
    vector<int>tempans;
    while(node){
        if(!isLeaf(node)){
            tempans.push_back(node->val);
        }
        if(node->right){
            node = node->right;
        }else{
            node = node->left;
        }
    }
    reverse(tempans.begin(), tempans.end());
    for(int i=0; i<tempans.size(); i++){
        ans.push_back(tempans[i]);
    }   
}

void addLeaves(TreeNode* root, vector<int> &ans){
    if(isLeaf(root)){
        ans.push_back(root->val);
    }
    if(root->left){
        addLeaves(root->left, ans);
    }
    if(root->right){
        addLeaves(root->right, ans);
    }
}

vector<int> printBoundary(TreeNode* root, vector<int> &ans){
    if(root==NULL){
        return ans;
    }
    if(!isLeaf(root)){
        ans.push_back(root->val);
    }
    
    addLeftBoundary(root, ans);
    addLeaves(root, ans);
    addRightBoundary(root, ans);

    return ans;
}


int main(){
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

    vector<int>ans;
    printBoundary(root, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}