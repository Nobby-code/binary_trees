#include "binary_trees.h"

/**
 * binary_tree_size - function to find the size of a tree
 *
 * @tree: tree to be traversed
 *
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right, tree_size;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	tree_size = (size_left + size_right) + 1;

	return (tree_size);
}
