#include<stdio.h>
#include<stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_node - function that creates a binary node.
 *@parent: pointer to the parent node of the node to create
 *@value: value to put in in new node
 *Return: pointer to new node or Null on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{

		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);

}
