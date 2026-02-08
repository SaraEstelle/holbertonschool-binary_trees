// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_is_root - vérifie si un nœud est la racine
 * @node: pointeur vers le nœud à vérifier
 *
 * Return: 1 si c'est une racine, sinon 0
 * Si node est NULL, retourne 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)        /* pas de nœud → pas une racine */
		return (0);

	if (node->parent == NULL) /* pas de parent → racine */
		return (1);

	return (0); /* sinon, nœud non racine */
}
