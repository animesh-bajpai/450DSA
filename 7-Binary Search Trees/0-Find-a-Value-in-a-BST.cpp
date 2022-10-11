/*
    Problem Link : https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1
    Time Complexity : O(log n)
    Space Complexity : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right;
    Node *left;

    Node(int x)
    {
        data = x;
        right = NULL;
        left = NULL;
    }
};

// Intuition : In a BST value of the left child ias always smaller than the node & value of right child is always greater than the node
bool search(Node *root, int x)
{
    if (!root)
        return false;

    if (root->data == x)
        return true;

    else if (root->data > x)
        return search(root->left, x);

    else
        return search(root->right, x);

    return false;
}

int main()
{
}