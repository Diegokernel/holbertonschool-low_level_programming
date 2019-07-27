#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if the binary tree is full
 * @tree: pointer to a binary tree
 *
 * Return: return 1 if full or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_size = binary_tree_is_full(tree->left);
		right_size = binary_tree_is_full(tree->right);
		return (left_size && right_size);
	}
	return (0);
}
