#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using pre-order traversal
 * @tree : a pointer to the root node of the tree to traverse
 * @func : a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current = tree;

	if ((current == NULL) || (*func == NULL))
		return;

	binary_tree_postorder(current->left, *func); /* 1st leftchild */
	binary_tree_postorder(current->right, *func); /* 2nd rightchild */
	func(current->n); /* last current->n/root */

}
