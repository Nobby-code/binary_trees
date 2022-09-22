#include "binary_trees.h"

/**
 * binary_tree_height - function to find the height of a tree
 *
 * @tree: tree to find its height
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_len, right_len;

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left_len = binary_tree_height(tree->left);
	right_len = binary_tree_height(tree->right);

	if (left_len > right_len)
	{
		return (left_len + 1);
	}
	else
	{
		return (right_len + 1);
	}
}
