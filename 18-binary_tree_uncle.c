#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find uncle of the node
 * @node : pointer of the node
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *current = node;
	binary_tree_t *parentT = NULL;
	binary_tree_t *greatparent = NULL;

	int lefth = 0, righth = 0;

	if (current == NULL)
		return (NULL);
	parentT = current->parent;
	greatparent = parentT->parent;
	if ((greatparent == NULL) || (parentT == NULL))
		return (NULL);

	if ((!greatparent->left) || (!greatparent->right))
		return (NULL);

	lefth = greatparent->left->n;
	righth = greatparent->right->n;

	if (lefth == parentT->n)
		return (greatparent->right);
	else if (righth == parentT->n)
		return (greatparent->left);
	else
		return (NULL);
}
