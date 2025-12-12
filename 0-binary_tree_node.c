#include "binary_trees.h"
// Inclusion du fichier d'en-tête contenant la définition de la structure `binary_tree_t`
// et d'éventuelles fonctions utilitaires pour manipuler les arbres binaires.

/**
 * binary_tree_node  - creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: A pointer to the new node, or NULL in failure
 */
// Déclaration de la fonction `binary_tree_node` qui crée un nouveau noeud
// avec une valeur donnée et un parent spécifié.

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	// Déclaration d'un pointeur pour le nouveau noeud
	binary_tree_t *new_node;

	// Allocation dynamique de mémoire pour le nouveau noeud
	new_node = malloc(sizeof(binary_tree_t));
	// Vérifie si l'allocation a échoué
	if (new_node == NULL)
		return (NULL);

	// Initialise la valeur du noeud
	new_node->n = value;
	// Définit le parent du nouveau noeud
	new_node->parent = parent;

	// Initialise les enfants gauche et droit à NULL
	new_node->left = NULL;
	new_node->right = NULL;

	// Retourne le pointeur vers le nouveau noeud créé
	return (new_node);
}
