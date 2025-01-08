#include "binary_trees.h"

/**
 * binary_tree_depth - function measure the depth of node
 * @tree : pointer to the node
 * Return: depth value (successful) else 0 (fail)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t depth = 0;

	if (current == NULL)
		return (0);

	if (current->parent) /* parent is not NULL*/
	{
		depth = 1 + binary_tree_depth(current->parent);
	}
	return (depth);
}
