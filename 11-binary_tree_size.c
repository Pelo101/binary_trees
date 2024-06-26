#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * binary_tree_size - function that measures the size
 *  of a node in a binary tree
 *@tree: pointer to root node.
 *Return: 0 on failure.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->left) + 1
	     + binary_tree_size(tree->right);

	return (size);
}
