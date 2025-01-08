#include "binary_trees.h"

/**
 * binary_tree_delete - function to delete entire binary tree
 * @tree : pointer top the root node of the tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = tree; /* a copy of tree */

	if (current == NULL)
		return;

	/* first delete both subtrees */
	binary_tree_delete(current->left);
	binary_tree_delete(current->right);

	/* then delete th node/ binary tree */
	free(current);
	return;
}
