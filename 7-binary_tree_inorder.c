#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal
 * @tree : a pointer to the root node of the tree to traverse
 * @func : a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current = tree;

	if ((current == NULL) || (*func == NULL))
		return;

	binary_tree_inorder(current->left, *func); /* 1st left child */
	func(current->n); /* 2nd print current->n / root */
	binary_tree_inorder(current->right, *func); /*last right child */
}
