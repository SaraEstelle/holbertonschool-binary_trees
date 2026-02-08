// Inclut les structures et prototypes nécessaires pour manipuler les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_size - calcule la taille d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: 0 si tree est NULL, sinon le nombre de nœuds dans l'arbre
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result;

	/* Si le nœud est NULL, l'arbre n'a pas de taille */
	if (tree == NULL)
		return (0);

	/* Taille = taille sous-arbre gauche +
	taille sous-arbre droit + 1 pour le nœud courant */
	result = binary_tree_size(tree->left) +
			 binary_tree_size(tree->right) +
			 1;

	return (result);
}
