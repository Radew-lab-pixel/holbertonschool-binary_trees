#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert left child
 * @parent : a pointer to the node to insert the left-child in
 * @value : value of new node
 * Return: pointer to parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	binary_tree_t *current = parent;
	binary_tree_t *temp = NULL;
	/*binary_tree_t *parentTemp;  copy of parent */

	if (parent == NULL)
	{
		free(parent);
		return (NULL);
	}
	if (new_node == NULL)
	{
		/* new_node->parent = NULL; */
		/* free(new_node->left); */
		/*free(new_node->right); */
		free(new_node);
		return (NULL);
	}
	/*parentTemp = parent;  copy of parent */
	/*current = parent; */

	new_node->n = value; /* add new_node */
	/*new_node->parent = parent; */
	new_node->parent = NULL;
	/* new_node->left = new_node->right = NULL; */
	new_node->left = NULL;
	new_node->right = NULL;

	if (current->left == NULL) /* current which is parent has no left child */
	{
		current->left = new_node; /* current parent-> left is new_node */
		new_node->parent = current;

	}
	else /* current parent has a left child */
	{
		temp = current->left; /* save current->left detail as temp */
		current->left = new_node; /* assign new_node to current->left */
		new_node->left = temp; /* new_node->left now is temp  */
		new_node->parent = current; /* new_node->parent is current */
		temp->left = NULL;
		temp->parent = new_node;
	}
	/* free(new_node); */
	return (current);
}

