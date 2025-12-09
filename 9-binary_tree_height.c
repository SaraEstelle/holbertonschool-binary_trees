#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right, max;
	
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0); /* feuille → hauteur 0 */
	/* Calculer la hauteur du sous-arbre gauche et droit */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	/* Prendre le plus grand des deux côtés */
	if (height_left > height_right)
		max = height_left;

	else
		max = height_right;
	/* Ajouter 1 pour le niveau actuel du nœud */
	return (max + 1);
}
