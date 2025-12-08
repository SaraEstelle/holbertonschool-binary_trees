#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is a root, otherwise 0 If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* if the node don't have parent */
	if (node->parent == NULL)
		return (1);

	else
		return (0);
}
