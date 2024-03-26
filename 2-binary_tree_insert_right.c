#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_insert_right - function that inserts a node
 *as the right-child of another node.
 *@parent: pointer to rood node.
 *@value: value of nodes.
 *Return: the newnode or null on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left =  NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right->newNode;
}
