#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
