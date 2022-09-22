#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new inary tree to the left
 *
 * @parent: parent node
 * @value: value to be inserted
 * Return: Return the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftNode = malloc(sizeof(binary_tree_t));

	if (leftNode == NULL)
	{
		return (NULL);
	}
	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = NULL;
	leftNode->right = NULL;

	if (parent->left != NULL)
	{
		leftNode->left = parent->left;
		parent->left->parent = leftNode;
	}

	parent->left = leftNode;
	return (leftNode);

}
