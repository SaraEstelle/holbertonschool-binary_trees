// Inclut les définitions nécessaires des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height_p - mesure la hauteur d'un arbre binaire
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: hauteur de l'arbre, 0 si tree est NULL
 */
size_t binary_tree_height_p(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	// Si l'arbre est vide → hauteur = 0
	if (tree == NULL)
		return (0);

	// Si le nœud est une feuille → hauteur = 0
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	// Calcul récursif de la hauteur du sous-arbre gauche
	l = binary_tree_height_p(tree->left);

	// Calcul récursif de la hauteur du sous-arbre droit
	r = binary_tree_height_p(tree->right);

	// Retourne la hauteur la plus grande + 1 pour le niveau courant
	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_is_perfect - vérifie si un arbre binaire est parfait
 * @tree: pointeur vers la racine de l'arbre
 *
 * Return: 1 si parfait, 0 sinon ou si tree est NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	// Si l'arbre est vide → pas parfait
	if (tree == NULL)
		return (0);

	// Une feuille seule est considérée parfaite
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	// Mesure la hauteur du sous-arbre gauche
	h_left = binary_tree_height_p(tree->left);

	// Mesure la hauteur du sous-arbre droit
	h_right = binary_tree_height_p(tree->right);

	// Si les hauteurs diffèrent → arbre non parfait
	if (h_left != h_right)
		return (0);

	// Vérifie récursivement que les deux sous-arbres sont parfaits
	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	// Si une des conditions échoue → arbre non parfait
	return (0);
}
