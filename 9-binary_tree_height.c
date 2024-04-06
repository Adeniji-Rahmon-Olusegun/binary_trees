#include "binary_trees.h"

/**
 * find_max - finds the maximum number
 *
 * @num1: first number
 * @num2: second number
 *
 * Return: max number
 */

size_t find_max(size_t num1, size_t num2)
{
	if (num1 > num2)
	{
		return (num1);
	}

	return (num2);
}

/**
 * binary_tree_height - computes the height of a binary tree
 *
 * @tree: pointer to the binary tree
 * 
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_sub_h;
	size_t right_sub_h;

	if (tree == NULL)
	{
		return (0);
	}

	left_sub_h = binary_tree_height(tree->left);
	right_sub_h = binary_tree_height(tree->right);

	return (find_max(left_sub_h, right_sub_h) + 1);
}
