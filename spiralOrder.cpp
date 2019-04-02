#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data; 
  struct node* left; 
  struct node* right; 
};

void printGivenLevel(struct node* root, int level, int ltr); 
int height(struct node* node); 
struct node* newNode(int data); 

void printSpiral(struct node* root)
{
  int h = height(root); 
  int i; 

  bool ltr = false; 
  for (i = 1; i <= h; i++) {
    printGivenLevel(root, i, ltr); 

    ltr = !ltr;
  }
}

void printGivenLevel(struct node* root, int level, int ltr) 
{
  if (root == NULL)
    return; 
  if (level == 1) 
    printf("%d ", root->data); 
  else if (level > 1) {
    if (ltr) {
      print 
