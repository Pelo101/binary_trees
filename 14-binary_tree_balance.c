#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *binary_tree_height - function that measures the
 * height of a binary tree
 *@tree: pointer to root node.
 *Return: 0 on failure
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL = 0;
	size_t heightR = 0;


	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		heightL = (tree->left != NULL) ?  1 + binary_tree_height(tree->left) : 0;
		heightR = (tree->right != NULL) ?  1 + binary_tree_height(tree->right) : 0;
	}
	if (heightL >= heightR)
	{
		return (heightL);
	}
	else
	{
		return (heightR);
	}

}


/**
 *binary_tree_balance - function that measures the
 * balance factor of a binary tree
 *@tree: pointer to root node.
 *Return: 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL, heightR;

	if (tree)
	{	
		heightL = binary_tree_height(tree->left);
		heightR = binary_tree_height(tree->right);
	}
	return (int)(heightL- heightR);
}
