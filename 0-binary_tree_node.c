#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the new node
 *
 * Return: pointer to the new node or NULL upon fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh_node;

	fresh_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (fresh_node == NULL)
	{
		return (NULL);
	}

	fresh_node->n = value;

	if (parent == NULL)
		parent = fresh_node;

	fresh_node->parent = parent;
	fresh_node->left = NULL;
	fresh_node->right = NULL;

	return (fresh_node);
}
