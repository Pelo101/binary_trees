#include"binary_trees.h"
#include<stdio.h>
#include<stdlib.h>


/**
 *binary_tree_depth - function that measures
 *the depth of a node in a binary tree
 *@tree: pointer to root node.
 *Return:0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth + 1);
}


/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree:pointer to the root node.
 *Return:0 on failure.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth_left = 0;
	size_t depth_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	depth_left = binary_tree_depth(tree->left);
	depth_right = binary_tree_depth(tree->right);

	return (depth_left == depth_right &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));


}
