// Inclusion du fichier d'en-tête contenant les structures et prototypes liés aux arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: if tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	// Si l'arbre est vide, on ne fait rien
	if (tree == NULL)
		return;

	// Suppression récursive du sous-arbre gauche
	binary_tree_delete(tree->left);

	// Suppression récursive du sous-arbre droit
	binary_tree_delete(tree->right);

	// Libération du nœud courant après avoir supprimé ses enfants
	free(tree);
}
