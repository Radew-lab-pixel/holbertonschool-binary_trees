#include "binary_trees.h"

int binary_tree_is_full_local(const binary_tree_t *tree);

/**
 * binary_tree_is_full_local - check a node has 0 or 2 childs
 * @tree : pointer to the node
 * Return: 1 if true else 0
 * Description : Instead of AND gate in task 15, lefth + righth
 */
int binary_tree_is_full_local(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int lefth = 0, righth = 0;

	if (current == NULL)
		return (0); /*false */

	/* if two childs exist */
	if ((current->left) && (current->right))
	{	/* return (1); */
		lefth = binary_tree_is_full_local(current->left);
		righth = binary_tree_is_full_local(current->right);
		/*return (lefth && righth);  AND gate */
		return (lefth + righth);
	}
	else if ((!current->left) && (!current->right)) /* no child */
		return (1); /*true */
	else
		return (0); /*false */
}

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree : ppinter to the node / root
 * Return: 1 if true else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	/*int is_perfect = 0; */
	int lefth = 0, righth = 0;

	if (current == NULL)
		return (0);

	/* check if each child has another child */
	lefth = binary_tree_is_full_local(current->left);
	righth = binary_tree_is_full_local(current->right);

	if (lefth == righth)
		return (1);
	else
		return (0);
	/* return (is_perfect);*/
}
