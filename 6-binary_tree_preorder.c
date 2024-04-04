#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using
 * preorder technique
 *
 * @tree: tree to be traversed
 * @func: function to be passed
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
