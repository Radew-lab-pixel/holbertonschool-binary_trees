#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree : pointer to the root node of the tree to measure the height
 * Return: value of height ( max of left amd right child)
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree; /* copy of tree */
	size_t lefth = 0, righth = 0;

	if (current == NULL)
		return (0);

	lefth = binary_tree_height(current->left);
	righth = binary_tree_height(current->right);

	/* not lefth + 1 or right + 1 */
	if (lefth > righth)
		return (lefth + 1);
	else /* lefth < righth */
		return (righth + 1);
}
