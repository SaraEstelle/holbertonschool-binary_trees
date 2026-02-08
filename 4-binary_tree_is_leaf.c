// Inclut les définitions et structures des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - vérifie si un nœud est une feuille
 * @node: pointeur vers le nœud à vérifier
 *
 * Return: 1 si c'est une feuille, sinon 0
 * Si node est NULL, retourne 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)             /* pas de nœud → pas une feuille */
		return (0);

	if (node->left == NULL && node->right == NULL) /* aucun enfant → feuille */
		return (1);

	return (0); /* sinon, nœud non-feuille */
}
