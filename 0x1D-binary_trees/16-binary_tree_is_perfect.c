#Include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: tree is NULL, return 0
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a root node
 *
 * Return: 1 if perfect or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full;
	int left_p, righ_p;
	size_t left_size, right_size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_p = binary_tree_is_perfect(tree->left);
	right_p = binary_tree_is_perfect(tree->right);
	full = left_p && right_p;
	left_size = binary_tree_height(tree->left);
	right_size = binary_tree_height(tree->right);
	return (full && left_size == right_size);
}
