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
	size_t heightL, heightR;
	

	if (tree == NULL)
	{
		return (0);
	}

	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	return (heightL > heightR ? heightL : heightR) + 1;

}
