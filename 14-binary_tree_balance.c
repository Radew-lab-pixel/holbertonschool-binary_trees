#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor
 * @tree : pointer to root node
 * Return: integer value of balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int lefth = 0, righth = 0;

	if (current == NULL)
		return (0);
	/** some code from 9-binary_tree_height.c */
	if (current->left)
	lefth = 1 + binary_tree_balance(current->left);
	if (current->right)
	righth = 1 + binary_tree_balance(current->right);

	return (lefth - righth);

}
