#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root
 *
 * @node: pointer to node to check
 *
 * Return: 1 if node is root and  otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
