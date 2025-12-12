// Inclut les structures et prototypes nécessaires pour les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	// Variables pour stocker les hauteurs des sous-arbres gauche et droit
	size_t height_left, height_right, max;

	// Si l’arbre est NULL → hauteur = 0
	if (tree == NULL)
		return (0);

	// Si le nœud courant est une feuille → hauteur = 0
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	// Calcul récursif de la hauteur du sous-arbre gauche
	height_left = binary_tree_height(tree->left);

	// Calcul récursif de la hauteur du sous-arbre droit
	height_right = binary_tree_height(tree->right);

	// Sélectionne la plus grande des deux hauteurs
	if (height_left > height_right)
		max = height_left;
	else
		max = height_right;

	// Ajoute 1 pour inclure le niveau actuel du nœud
	return (max + 1);
}
