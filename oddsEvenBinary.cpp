#include <bits/stdc++.h>
using namespace std; 

struct node {
  int data; 
  struct node *right, *left; 
};

struct node* newnode(int key)
{
  struct node* temp = new node; 
  temp->data = key;
  temp->right = NULL;
  temp->left = NULL;

  return temp;
}

void convert(struct node* root)
{
  if (root == NULL) {
    return;
  }

  convert(root->right);

  if (root->data == 0) {
    root->data = -1;
  }

  convert(root->left);
}

int sum_tree(struct node* root)
{
  int a = 0, b = 0;

  if (root == NULL) {
    return 0;
  }

  a = sum_tree(root->left);
  b = sum_tree(root->right);

  root->data = root->data + a + b;

  return root->data;
}

int checkSubtree(struct node* root, int d)
{
  if (root == NULL) {
    return 0;
  }

  if (d == 0) {
    d = checkSubtree(root->left, d);
  }

  if (root->data == 0) {
    d = 1; 
    return d; 
  }

  if (d == 0) {
    d = checkSubtree(root->right, d);
  }

  return d;
}

int main()
{
  struct node* root = newnode(1);
  root->right = newnode(0);
  root->right->right = newnode(1);
  root->right->right->right = newnode(1);
  root->left = newnode(0);
  root->left->left = newnode(1);
  root->left->left->left = newnode(1);
  root->left->right = newnode(0);
  root->left->right->left->left = newnode(1);
  root->left->right->right = newnode(0);
  root->left->right->right->left = newnode(0);
  root->left->right->right->left->left = newnode(1);

  convert(root);
  sum_tree(root);

  int d = 0;
  if (checkSubtree(root, d)) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }

  return 0;
}

