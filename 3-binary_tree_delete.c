#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *binary_tree_delete - function that deletes an entire binary tree.
 *@tree: pointer to the root.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}


	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
