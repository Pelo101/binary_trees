#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *binary_tree_sibling
 *@node: pointer to root node.
 *Return: 0 On failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if  (parent->left == node)
	{
		return (parent->right);
	}
	if  (parent->right == node)
	{
		return (parent->left);
	}
	return (NULL);
}
