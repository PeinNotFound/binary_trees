#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as the right-child of another node
 * @parent: The pointer to the node to insert the right-child in
 * @value: The Value to store in the new node
 *
 * Return: pointer to the created node, or NULL of failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}

