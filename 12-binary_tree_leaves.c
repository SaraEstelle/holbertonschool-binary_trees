// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: Number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	// Si l’arbre est NULL → aucun nœud, donc 0 feuille
	if (tree == NULL)
		return (0);

	// Si le nœud n’a aucun enfant → c’est une feuille → retourne 1
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	// Sinon, retourne la somme des feuilles du sous-arbre gauche
	// et du sous-arbre droit (récursion)
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
