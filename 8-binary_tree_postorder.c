// Inclut les définitions des structures et prototypes des arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree
 * using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	// Si l’arbre est NULL ou si la fonction fournie est NULL → ne rien faire
	if (tree == NULL || func == NULL)
		return;

	// Traverse récursivement le sous-arbre gauche en premier
	binary_tree_postorder(tree->left, func);

	// Puis traverse récursivement le sous-arbre droit
	binary_tree_postorder(tree->right, func);

	// Enfin, applique la fonction au nœud courant (post-ordre)
	func(tree->n);
}
