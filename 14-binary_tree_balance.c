#include "binary_trees.h"
/**
 * binary_tree_balance_b - Measures the height of a binary tree for balance
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree (1-based), or 0 if tree is NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_height_b(tree->left);
	r = binary_tree_height_b(tree->right);

	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = (int)binary_tree_height_b(tree->left);
	right_h = (int)binary_tree_height_b(tree->right);

	return (left_h - right_h);
}
