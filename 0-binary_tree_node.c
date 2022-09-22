#include "binary_trees.h"

/**
 * binary_tree_node - Creates new tree node
 * @parent: parent node of the created node
 * @value: value of the created node
 *
 * Return: poiter to the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode)
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}

	return (NULL);
}
