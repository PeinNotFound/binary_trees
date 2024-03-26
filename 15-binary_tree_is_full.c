#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* Check if the current node has exactly one child */
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);

	/* Check if the current node is a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check if both left and right subtrees are full */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

