#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *binary_tree_leaves - function that counts the leaves in a binary tree.
 *@tree: pointer to the root node.
 *Return: 0 on failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);

}
