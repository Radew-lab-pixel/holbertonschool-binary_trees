#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if node is roor
 * @node : pointer to the node to be checked
 * Return: 1 if true else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	const binary_tree_t *current = node;

	if (current == NULL)
		return (0);

	if (current->parent == NULL) /* node is root */
		return (1);
	else
		return (0);
}
