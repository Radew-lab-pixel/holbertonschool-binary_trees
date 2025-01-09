#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node : ppinter of the node
 * Return: node of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *current = node;
	binary_tree_t *parent = NULL;
	int lefth = 0, righth = 0;

	if (current == NULL)
		return (NULL);

	parent = current->parent;
	if (parent == NULL)
		return (NULL);

	lefth = parent->left->n;
	righth = parent->right->n;
	
	if ((lefth == current->n) && (parent->right != NULL)) /* current-> is lefth child */
		return (parent->right);
	else if ((righth == current->n) && (parent->left != NULL))
		return (parent->left);
	else
		return (NULL);

}
