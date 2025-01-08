#include "binary_trees.h"

/**
 * binary_tree_size - function to find size (no, of nodes)
 * @tree : pointer to the root node
 * Return: size (succesful) or 0 (Fail)
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t lefth = 0, righth = 0;

	if (current == NULL)
		return (0);

	if (current->left)
		lefth =  binary_tree_size(current->left);

	if (current->right)
		righth =  binary_tree_size(current->right);

	return (lefth + righth + 1); /* including node k */

}
