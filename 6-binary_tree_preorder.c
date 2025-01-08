#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree : a pointer to the root node of the tree to traverse
 * @func : a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current = tree;

	if (current == NULL)
		return;

	func(current->n); /* 1st print current node which is root */
	binary_tree_preorder(current->left, *func); /* 2nd left child */
	binary_tree_preorder(current->right,*func); /*last right child */
}
