#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root
 *
 * @node: the node to check
 * Return: 1 if root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
		{
			return (1);
		}

		return (0);
	}

	return (0);
}
