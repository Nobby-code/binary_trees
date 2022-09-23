#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count the number of leaves
 *
 * @tree: the tree to traverse
 *
 * Return: total number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total, total_right, total_left;

	if (tree == NULL)
		return (0);

	total_left = binary_tree_leaves(tree->left);
	total_right = binary_tree_leaves(tree->right);
	total = total_left + total_right;

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (total);
}
