#include "binary_trees.h"

/**
 * binaryTreeHeight - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
0
size_t binaryTreeHeight(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of left and right subtrees */
	leftHeight = binaryTreeHeight(tree->left);
	rightHeight = binaryTreeHeight(tree->right);

	/* Return the maximum height plus one */
	return (MAX(leftHeight, rightHeight) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf node, return 1 */
	if (!tree->left && !tree->right)
		return (1);

	/* If the current node has only one child, return 0 */
	if (!tree->left || !tree->right)
		return (0);

	/* Rcsv check if both left&right subtrees have the same height*/
	return (binaryTreeHeight(tree->left) == binaryTreeHeight(tree->right) &&
		binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

