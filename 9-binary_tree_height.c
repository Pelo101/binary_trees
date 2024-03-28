#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
*binary_tree_height - function that measures the height of a binary tree.
*@tree: pointer to root node.
*Return: 0 on failure.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t heightL = 0;
size_t heightR = 0;


if (tree == NULL)
{
return (0);
}
else
{
heightL = (tree->left != NULL) ?  1 + binary_tree_height(tree->left) : 0;
heightR = (tree->right != NULL) ?  1 + binary_tree_height(tree->right) : 0;
}
if (heightL >= heightR)
{
return (heightL);
}
else
{
return (heightR);
}

}
