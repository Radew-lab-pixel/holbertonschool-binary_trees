#include "binary_trees.h"


/**
 * binary_tree_is_full - check a node has 0 or 2 childs
 * @tree : pointer to the node
 * Return: 1 if true else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;

	if (current == NULL)
		return (0);

	if ((current->left) && (current->right))
		return (1);
	else if ((!current->left) && (!current->right))
		return (1);
	else
		return (0);
}
