#include "binary_trees.h"

size_t binary_tree_height_diff(const binary_tree_t *tree);
int binary_tree_balance_local(const binary_tree_t *tree);

/**
 * binary_tree_height_diff - that measures the height difference of a binary tree
 * Description : exact copy from 9-binary_tree_height
 * @tree : pointer to the root node of the tree to measure the height
 * Return: value of height difference
 */

size_t binary_tree_height_diff(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;  /*copy of tree */
	size_t lefth = 0, righth = 0;

	if (current == NULL)
		return (0);
	/* if ((current->left == NULL) || (current->right == NULL)) */
	/* return (0); */

	/*if (current->left)  remove to pass*/
	lefth = binary_tree_height_diff(current->left) + 1;

	/*if (current->right) remopve to pass*/
	righth = binary_tree_height_diff(current->right) + 1;

	return (lefth - righth); 
	/*  not lefth + 1 or right + 1 */
	/**if (lefth > righth)
	*	return (lefth);
	*else 
	*	return (righth);
	*/
}



/**
 * binary_tree_balance - measure balance factor
 * @tree : pointer to root node
 * Return: integer value of balance factor
 */
int binary_tree_balance_local(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int lefth = 0, righth = 0;

	if (current == NULL)
		return (0);
	
	/*if ((current->1eft != NULL ) && (current->right != NULL)) added for Task 15 */
	lefth =  1 + binary_tree_height_diff(current->left);
	righth = 1 + binary_tree_height_diff(current->right);

	/** some code from 9-binary_tree_height.c */
	/*if (current->left)*/
	/*lefth = 1 + binary_tree_balance(current->left);*/
	/*if (current->right)*/
	/*righth = 1 + binary_tree_balance(current->right);*/

	return (lefth - righth);

}

/**
 * binary_tree_is_full - check a node has 0 or 2 childs
 * @tree : pointer to the node
 * Return: 1 if true else 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int balance_factor = 0;

	if (current == NULL)
		return (0);
	/* function from 14-binary_tree_balance.c */
	balance_factor = binary_tree_balance_local(current);

	if (balance_factor == 0) /*|| (balance_factor == 2))*/
		return (1);
	else
		return (0);

/**
*if ((current->left) && (current->right))
*       return (1);
*else if ((!current->left) && (!current->right))
*       return (1);
*else
*       return (0);
*/
}

