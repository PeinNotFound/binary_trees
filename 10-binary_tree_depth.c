#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL or it's the root node, return 0 */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Recursively calculate the depth of the parent node */
	return (binary_tree_depth(tree->parent) + 1);
}

