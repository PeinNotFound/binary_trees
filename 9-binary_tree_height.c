#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	/* If tree is NULL or it's a leaf node, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively calculate height of left and right subtrees */
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	/* Return the maximum height of left and right subtrees plus 1 */
	return (MAX(leftHeight, rightHeight) + 1);
}

