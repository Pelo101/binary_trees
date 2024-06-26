#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *binary_tree_is_leaf - function that checks if a node is a leaf.
 *@node: pointer to the root of the tree.
 *Return: 1 on Successful 0 on failure.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
