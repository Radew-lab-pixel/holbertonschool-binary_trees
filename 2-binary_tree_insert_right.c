#include "binary_trees.h"

/**
 * binary_tree_insert_right- function to insert right child
 * @parent : a pointer to the node to insert the right-child in
 * @value : value of new node
 * Return: pointer to parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	/*binary_tree_t *new_node; */
	binary_tree_t *current = parent;
	binary_tree_t *temp = NULL;

	/*new_node = binary_tree_node(parent, value); */
	if (parent == NULL)
	{
		free(new_node); /* valgrind */
		/*free(parent); */
		return (NULL);
	}
	if (new_node == NULL)
	{
		free(new_node);  /*valgrind */
		return (NULL);
	}
	new_node->n = value;  /*add new_node */
	new_node->parent = NULL;
	new_node->left = new_node->right = NULL;
	if (current->right == NULL) /* current which is parent has no right child */
	{
		current->right = new_node; /* current parent-> right is new_node */
		new_node->parent = current;
	}
	else /* current parent has a right child */
	{
		temp = current->right; /* save current->right detail as temp */
		current->right = new_node; /* assign new_node to current->left */
		new_node->right = temp; /* new_node->right now is temp  */
		new_node->parent = current; /* new_node->parent is current */
		temp->right = NULL;
		temp->parent = new_node;

	}
	/*free(new_node); */
	return (current);
}

