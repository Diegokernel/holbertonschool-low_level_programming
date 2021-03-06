#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to a root node
 *
 * Return: pointer to an uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent != node->parent->parent->left &&
	    node->parent->parent->left != NULL)
		return (node->parent->parent->left);

	if (node->parent != node->parent->parent->right &&
	    node->parent->parent->right != NULL)
		return (node->parent->parent->right);
}
