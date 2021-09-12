#include <iostream>
#include <queue>
#include "../include/BST.hpp"

void BinarySearchTree::insert(int value)
{
    BSTNode *new_leaf = new BSTNode(value);
    if (root == nullptr)
    {
        root = new_leaf;
        return;
    }
    BSTNode *ptr = root;
    while (ptr != nullptr)
    {
        if (ptr->data < new_leaf->data)
        {
            if (ptr->right != nullptr)
            {
                ptr = ptr->right;
            }
            else
            {
                ptr->right = new_leaf;
                return;
            }
        }
        else
        {
            if (ptr->left != nullptr)
            {
                ptr = ptr->left;
            }
            else
            {
                ptr->left = new_leaf;
                return;
            }
        }
    }
}

void BinarySearchTree::display_BFS()
{
    //breadth-first search from left to right
    std::queue<int> q;
    q.push(root->data);
    BSTNode *ptr = root;
    while(!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
        if(ptr->left != nullptr)
            q.push(ptr->left->data);
        if(ptr->right != nullptr)
            q.push(ptr->right->data);
        ptr = find(q.front());
    }
    std::cout << "\n";
}

BSTNode* BinarySearchTree::find(int key)
{
    BSTNode *ptr = root;
    while (ptr != nullptr)
    {
        if (ptr->data == key)
            return ptr;
        else if (ptr->data > key)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    return nullptr;
}

int BinarySearchTree::min()
{
    BSTNode *ptr = root->left;
    int min = root->data;
    while(ptr != nullptr)
    {
        if(min > ptr->data)
            min = ptr->data;
        ptr = ptr->left;
    }
    return min;
}

int BinarySearchTree::max()
{
    BSTNode *ptr = root->right;
    int max = root->data;
    while(ptr != nullptr)
    {
        if(max < ptr->data)
            max = ptr->data;
        ptr = ptr->right;
    }
    return max;
}