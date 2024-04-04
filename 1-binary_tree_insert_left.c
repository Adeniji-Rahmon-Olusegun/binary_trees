#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node
 *
 * @parent: pointer to the node toinsert the left-child in
 * @value: value to be stored in the new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh_node;

	if (parent == NULL)
		return (NULL);

	fresh_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (fresh_node == NULL)
	{
		return (NULL);
	}

	fresh_node->n = value;
	fresh_node->left = parent->left;
	fresh_node->right = NULL;
	
	parent->left = fresh_node;

	return (fresh_node);
}
