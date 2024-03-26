#include "binary_trees.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
 *binary_tree_insert_left - function that inserts a node
 *as the left-child of another node.
 *@parent: pointer to root node.
 *@value: value to be inserted.
 *Return: pointer to newNode or NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent ==  NULL || value == '\0')
	{
		return (NULL);
	}

	if (newNode == NULL)
	{

		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;

	}
	parent->left = newNode;

	return (newNode);

}

