#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree : pointer to the root node
 * Return: no. of nodes (successful) else 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t lefth = 0, righth = 0, count = 0;

	if (current == NULL)
		return (0);

	if ((current->left) || (current->right))
	{
		lefth = binary_tree_nodes(current->left);
	/*if (current->right) */
		righth = binary_tree_nodes(current->right);
		count = lefth + righth + 1; /* +1 root node */
	}
	/*return (lefth + righth + 1);*/
	return (count);
}
