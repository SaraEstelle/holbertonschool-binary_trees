#include "binary_trees.h"
/**
 * binary_tree_height_p - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_p(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l = binary_tree_height_p(tree->left);
	r = binary_tree_height_p(tree->right);

	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_is_perfect -  a function that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is NULL or 1 if the tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	h_left = binary_tree_height_p(tree->left);
	h_right = binary_tree_height_p(tree->right);

	if (h_left != h_right)
		return (0);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}
