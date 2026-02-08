// Inclut les définitions nécessaires pour les arbres binaires (struct, prototypes…)
#include "binary_trees.h"

/**
 * binary_tree_sibling - trouve le frère d’un nœud
 * @node: pointeur vers le nœud dont on cherche le frère
 *
 * Return: pointeur vers le frère du nœud
 * Si node est NULL ou n'a pas de parent → retourne NULL
 * Si le nœud n’a pas de frère → retourne NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	// Impossible d'avoir un frère si le nœud est NULL ou n'a pas de parent
	if (node == NULL || node->parent == NULL)
		return (NULL);

	// Si node est l'enfant droit → son frère est l'enfant gauche
	if (node == node->parent->right)
		return (node->parent->left);

	// Si node est l'enfant gauche → son frère est l'enfant droit
	if (node == node->parent->left)
		return (node->parent->right);

	// Par sécurité : si aucun des cas n'est vrai → pas de frère
	return (NULL);
}
