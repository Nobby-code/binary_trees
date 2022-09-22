#include "binary_trees.h"

/**
 * binary_tree_depth - function to find depth of the tree
 *
 * @tree: tree to find its depth
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}

	return (count);
}
