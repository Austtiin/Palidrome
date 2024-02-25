/*
Author: Austin Stephens

Date: 07/16/2022

FileName: AStephens_M02LA_07162022

Purpous: 

   A FLdrome is a word that it reads the same left to right and right to left. For this programming assignment, you need to write a C++ program that does the following:

Input: 
    String to test.

Exceptions:

    Request the user to enter a string.
    Write a recursive function that will test the string to validate if it is a FLdrome or not.
    Respond back with an output saying if the original string was a FLdrome or not.

*/




#include <iostream>
#include <cstdlib>
#include <stack>
#include <bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node* left;
    node* right;
};

struct node* createNode(int value)
{
    //create instance
    struct node* temp = new node();
    //populate
    //set data

    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;

}

struct node* InsertNode(struct node* node, int value)
{
    if (node == NULL)
        return createNode(value);
    else if (value < node->data)
        node->left = InsertNode(node->left, value);
    else if (value > node->data)
        node->right = InsertNode(node->right, value);
    return node;
};

int GenReq(int Rand)
{
    Rand = (rand() % 100) + 1;
    return Rand;
}

void inorder(struct  node* root)
{
    if (root != NULL)
    {
        inorder(root->left); // left node sub
        cout << root->data << " "; //root
        inorder(root->right);//right node sub
    }
    
};


int main()
{
    int Rand;
    struct node* root = NULL;
    srand (time(NULL)); // NTS: include in main, dont call each time


    for (int i = 0; i < 20; i++)
    {
        root = InsertNode(root, GenReq(Rand));
    }
    
    cout << "Inorder Traversal: \n";
    inorder(root);
    

    return 0;

}




