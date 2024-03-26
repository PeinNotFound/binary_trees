#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func pointers are not NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Apply func to the value of the current node */
	func(tree->n);

	/* Recursively traverse right subtree */
	binary_tree_inorder(tree->right, func);
}

