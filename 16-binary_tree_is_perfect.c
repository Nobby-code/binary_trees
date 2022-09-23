#include "binary_trees.h"

/**
 * perfect_tree - function to find the perfect tree
 *
 *@tree: tree to traverse
 *
 *Return: 1 if perfect, 0 otherwise
 */

int perfect_tree(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0;

	if (tree->left && tree->right)
	{
		l_tree = 1 + perfect_tree(tree->left);
		r_tree = 1 + perfect_tree(tree->right);
		if (r_tree == l_tree && r_tree != 0 && l_tree != 0)
			return (r_tree);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - check a perfect tree
 *
 * @tree: tree to traverse
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);

	else
	{
		result = perfect_tree(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}

	return (0);
}
