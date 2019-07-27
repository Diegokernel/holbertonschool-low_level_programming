#Include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		r = 1 + binary_tree_height(tree->right);

	if (l > r)
		return (l);
	else
		return (r);
}
