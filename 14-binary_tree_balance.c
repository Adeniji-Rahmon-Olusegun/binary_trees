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
 * binary_tree_height_bal - computes the height of a binary tree
 *
 * @tree: pointer to the binary tree
 *
 * Return: height of binary tree
 */

size_t binary_tree_height_bal(const binary_tree_t *tree)
{
	size_t left_sub_h = 0;
	size_t right_sub_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_sub_h = tree->left ? 1 + binary_tree_height_bal(tree->left) : 1;
	right_sub_h = tree->right ? 1 + binary_tree_height_bal(tree->right) : 1;

	return (find_max(left_sub_h, right_sub_h));
}

/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 *
 * @tree: pointer to the tree
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_f1;
	int bal_f2;

	if (tree == NULL)
	{
		return (0);
	}

	bal_f1 = (int)(binary_tree_height_bal(tree->left));
	bal_f2 = (int)(binary_tree_height_bal(tree->right));

	return (bal_f1 - bal_f2);
}
