#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new inary tree to the left
 *
 * @parent: parent node
 * @value: value to be inserted
 * Return: Return the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);

	rightNode = malloc(sizeof(binary_tree_t));

	if (rightNode == NULL)
		return (NULL);

	rightNode->n = value;
	rightNode->parent = parent;
	rightNode->right = NULL;
	rightNode->left = NULL;

	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}

	parent->right = rightNode;

	return (rightNode);
}
