#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if node is a list
 *
 * @node: the node to check
 * Return: the node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if ((node->left == NULL) && (node->right == NULL))
		{
			return (1);
		}
		return (0);
	}

	return (0);
}
