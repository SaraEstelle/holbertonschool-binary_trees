// Inclut les structures et prototypes nécessaires pour manipuler les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	// Variable qui contiendra la taille totale du sous-arbre courant
	size_t result;

	// Si le nœud est NULL → aucune taille → retourne 0
	if (tree == NULL)
		return (0);

	// Calcul récursif :
	// taille du sous-arbre gauche +
	// taille du sous-arbre droit +
	// 1 pour le nœud actuel
	result = binary_tree_size(tree->left) +
			 binary_tree_size(tree->right) +
			 1;

	// Retourne la taille totale calculée
	return (result);
}
