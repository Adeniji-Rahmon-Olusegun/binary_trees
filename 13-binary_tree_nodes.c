#include "binary_trees.h"

/**
 * binary_tree_nodes - computes the number of nodes with
 * at least 1 child
 *
 * @tree: pointer to the tree
 *
 * Return: number of nodes with at least 1 child
 * in the tree or 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count;

	if (tree == NULL)
	{
		return (0);
	}

	node_count = (tree->left || tree->right) ? 1 : 0;

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
