// Inclut les définitions et structures des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	// Si le nœud est NULL, il ne peut pas être une feuille
	if (node == NULL)
		return (0);

	// Si le nœud n’a aucun enfant, alors c’est une feuille
	if (node->left == NULL && node->right == NULL)
		return (1);

	// Sinon, le nœud a au moins un enfant → pas une feuille
	return (0);
}
