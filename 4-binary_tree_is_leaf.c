#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node :  a pointer to the node to check
 * Return: 1 if true else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	const binary_tree_t *current = node; /* copy of node */

	if (current == NULL)
		return (0);

	if ((current->left == NULL) && (current->right == NULL))
		return (1);
	else
		return (0);
	/*binary_tree_is_leaf(current->left); */
}
