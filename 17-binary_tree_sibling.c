#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling
 *
 * @node: node to get its sibling
 * Return: returns the sibling of the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
