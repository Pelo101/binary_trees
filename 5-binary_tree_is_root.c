#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *binary_tree_is_root - function that checks if a given node is a root
 *@node: pointet to root node.
 *Return: 1 on Success 0 on failure.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
