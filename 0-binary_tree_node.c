#include "binary_trees.h"

/**
 * binary_tree_node - function to create nodes in binary tree
 * @parent : input of node of binary_tree_t
 * @value : node value
 * Return: newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* create a new Node */
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	/* binary_tree_t *current ; */
	/* binary_tree_t *root = parent;  copy of parent/root */

	if (new_node == NULL)
	{
		perror("Error in creating node\n");
		free(new_node); /*failed malloc return checker */
		return (NULL);
	}

	/**
	 * if (root == NULL) // root is absent
	 *	root = new_node; // new_node is root/ parent
	* else
	*{
	*	current = root; // current now hold parent value
	*	//parent = NULL; // parent/root now NULL
	*
	*	while(1)
	*	{
	*		parent = current
	*	}
	*}
	*/
	new_node->n = value;
	new_node->parent = parent; /* parent */
	new_node->left = NULL; /* left child */
	new_node->right = NULL; /* right child */
	return (new_node);

}
