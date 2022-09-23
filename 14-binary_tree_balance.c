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

	size_t left_len, right_len;

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

/**
 * binary_tree_balance - calculating balance factor
 *
 * @tree: tre to traverse
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_l, right_l;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_l = -1;
	else
	{
		left_l = binary_tree_height(tree->left);
	}
	if (tree->right == NULL)
		right_l = -1;
	else
	{
		right_l = binary_tree_height(tree->right);
	}

	return (left_l - right_l);
}
