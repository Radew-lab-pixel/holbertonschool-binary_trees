#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves/child of a node
 * @tree : pointer to the node
 * Return: No. of leaves/child (successful) else 0 (fail)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t lefth = 0, righth = 0, count = 0;

	if (current == NULL)
		return (0);

	if ((current->left == NULL) && (current->right == NULL))
		/* return (1); */
		count++; /* add +1 as node without leaves is counted as leave */

	if (current->left)
	{	/*lefth++;*/
		lefth = binary_tree_leaves(current->left);
	}
	if (current->right)
	{	/*righth++; */
		righth = binary_tree_leaves(current->right);
	}
	return (lefth + righth + count);
}
