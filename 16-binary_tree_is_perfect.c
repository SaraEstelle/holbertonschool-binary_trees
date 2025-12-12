// Inclut les définitions nécessaires des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height_p - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_p(const binary_tree_t *tree)
{
	// Déclare la hauteur du sous-arbre gauche
	size_t l = 0;

	// Déclare la hauteur du sous-arbre droit
	size_t r = 0;

	// Si l’arbre est NULL → hauteur = 0
	if (tree == NULL)
		return (0);

	// Si le nœud est une feuille (aucun enfant) → hauteur = 0
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	// Calcule récursivement la hauteur du sous-arbre gauche
	l = binary_tree_height_p(tree->left);

	// Calcule récursivement la hauteur du sous-arbre droit
	r = binary_tree_height_p(tree->right);

	// Retourne la hauteur la plus grande + 1 pour tenir compte du niveau actuel
	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is NULL or not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	// Hauteur du sous-arbre gauche
	size_t h_left = 0;

	// Hauteur du sous-arbre droit
	size_t h_right = 0;

	// Si l’arbre est NULL → ce n’est pas un arbre parfait
	if (tree == NULL)
		return (0);

	// Si c’est une feuille → un seul nœud est parfaitement équilibré
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	// Calcule la hauteur du sous-arbre gauche
	h_left = binary_tree_height_p(tree->left);

	// Calcule la hauteur du sous-arbre droit
	h_right = binary_tree_height_p(tree->right);

	// Si les hauteurs sont différentes → l’arbre n’est pas parfait
	if (h_left != h_right)
		return (0);

	// Vérifie récursivement que les deux sous-arbres sont parfaits
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	// Si un des deux sous-arbres n'est pas parfait → résultat final = 0
	return (0);
}
