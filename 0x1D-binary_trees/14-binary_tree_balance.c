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
 * binary_tree_balance -  function that measures the balance factor
 * @tree: pointer to the root node
 *
 * Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	else
		(tree != NULL)
		{
			left_size  = binary_tree_height(tree->left);
			right_size = binary_tree_height(tree->right);
			return (left_size - right_size);
		}
}
