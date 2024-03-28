#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 *@tree: pointer to the root node
 *Return: 0 on failure.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		nodes++;

		nodes += binary_tree_nodes(tree->left);
		nodes +=  binary_tree_nodes(tree->right);
	}
		return (nodes);
}
