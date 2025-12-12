// Inclut les structures et prototypes nécessaires pour manipuler les arbres binaires
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	// Si le nœud courant est NULL ou si la fonction est NULL → ne rien faire
	if (tree == NULL || func == NULL)
		return;

	// On commence par parcourir récursivement le sous-arbre gauche
	binary_tree_inorder(tree->left, func);

	// On applique la fonction au nœud courant (visite en second → in-order)
	func(tree->n);

	// Ensuite, on parcourt récursivement le sous-arbre droit
	binary_tree_inorder(tree->right, func);
}
