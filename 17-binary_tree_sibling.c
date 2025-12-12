// Inclut les définitions nécessaires pour les arbres binaires (struct, prototypes…)
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 * If node is NULL or parent is NULL → return NULL
 * If node has no sibling → return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	// Si node est NULL ou si node n'a pas de parent
	// → impossible d'avoir un frère
	if (node == NULL || node->parent == NULL)
		return (NULL);

	// Si node est l'enfant droit du parent
	// → son frère est l'enfant gauche
	if (node == node->parent->right)
		return (node->parent->left);

	// Si node est l'enfant gauche du parent
	// → son frère est l'enfant droit
	if (node == node->parent->left)
		return (node->parent->right);

	// Si aucun des cas ne correspond (peu probable), pas de frère
	return (NULL);
}
