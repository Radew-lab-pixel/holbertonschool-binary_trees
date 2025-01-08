#include "binary_trees.h"

size_t binary_tree_height_local(const binary_tree_t *tree);


/**
 * binary_tree_height_local - that measures the height of a binary tree
 * Description : exact copy from 9-binary_tree_height
 * @tree : pointer to the root node of the tree to measure the height
 * Return: value of height ( max of left amd right child)
 */

size_t binary_tree_height_local(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;  /*copy of tree */
	size_t lefth = 0, righth = 0;

	if (current == NULL)
		return (0);
	/* if ((current->left == NULL) || (current->right == NULL)) */
	/* return (0); */

	/*if (current->left)  remove to pass*/
		lefth = binary_tree_height_local(current->left) + 1;

	/*if (current->right) remopve to pass*/
		righth = binary_tree_height_local(current->right) + 1;

	/*  not lefth + 1 or right + 1 */
	if (lefth > righth)
		return (lefth);
	else /* lefth < righth */
		return (righth);
}



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
	lefth = 1 + binary_tree_height_local(current->left);
	righth = 1 + binary_tree_height_local(current->right);

	/** some code from 9-binary_tree_height.c */
	/*if (current->left)*/
	/*lefth = 1 + binary_tree_balance(current->left);*/
	/*if (current->right)*/
	/*righth = 1 + binary_tree_balance(current->right);*/

	return (lefth - righth);

}
