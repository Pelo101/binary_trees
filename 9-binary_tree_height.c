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
		return (-1);
	}

	heightL =  1+ binary_tree_height(tree->left);
	heightR =  1+ binary_tree_height(tree->right);
	
	if (heightL > heightR)
	{
		return heightL;
	}
	else
	{
		return heightR;
	}

}
