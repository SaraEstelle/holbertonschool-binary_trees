// Inclut les structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree for balance
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree (1-based), or 0 if tree is NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	// Hauteur du sous-arbre gauche
	size_t l = 0;

	// Hauteur du sous-arbre droit
	size_t r = 0;

	// Si le nœud est NULL → hauteur = 0
	if (tree == NULL)
		return (0);

	// Calcule récursivement la hauteur du sous-arbre gauche
	l = binary_tree_height_b(tree->left);

	// Calcule récursivement la hauteur du sous-arbre droit
	r = binary_tree_height_b(tree->right);

	// Retourne la hauteur maximale entre gauche et droite + 1 (niveau actuel)
	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	// Hauteur du sous-arbre gauche
	int left_h = 0;

	// Hauteur du sous-arbre droit
	int right_h = 0;

	// Si l’arbre est NULL → facteur d’équilibre = 0
	if (tree == NULL)
		return (0);

	// Mesure la hauteur du sous-arbre gauche
	left_h = (int)binary_tree_height_b(tree->left);

	// Mesure la hauteur du sous-arbre droit
	right_h = (int)binary_tree_height_b(tree->right);

	// Le facteur d’équilibre = hauteur gauche - hauteur droite
	return (left_h - right_h);
}
