#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that measures the nodes of a binary tree
 * @tree: pointer to the root node
 * Return: number of nodes or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		return (l + 1 + r);
	}
}
