#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to a root node
 *
 * Return: pointer to a sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent && node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
