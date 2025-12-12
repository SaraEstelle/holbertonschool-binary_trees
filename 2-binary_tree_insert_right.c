#include "binary_trees.h"
// Inclusion du fichier d'en-tête contenant la définition de la structure `binary_tree_t`
// et éventuellement d'autres fonctions liées aux arbres binaires.

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure
 *  or if parent is NULL
 */
// Déclaration de la fonction `binary_tree_insert_right` qui insère un nouveau noeud
// en tant qu'enfant droit d'un noeud donné.

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	// Déclaration d'un pointeur pour le nouveau noeud à créer
	binary_tree_t *new_node;

	// Vérifie si le noeud parent est NULL
	// Si c'est le cas, on ne peut pas insérer et on retourne NULL
	if (parent == NULL)
		return (NULL);

	// Allocation dynamique de mémoire pour le nouveau noeud
	new_node = malloc(sizeof(binary_tree_t));
	// Vérifie si l'allocation a échoué
	if (new_node == NULL)
		return (NULL);

	// Initialise la valeur du nouveau noeud avec `value`
	new_node->n = value;
	// Associe le parent du nouveau noeud au noeud donné
	new_node->parent = parent;
	// Le nouveau noeud n'a pas d'enfant gauche au moment de la création
	new_node->left = NULL;

	// Le droit du nouveau noeud devient le droit actuel du parent
	// Cela permet de ne pas perdre le sous-arbre déjà présent à droite
	new_node->right = parent->right;

	// Si le parent avait déjà un enfant droit, on met à jour son parent
	if (parent->right != NULL)
		parent->right->parent = new_node;

	// Le droit du parent devient le nouveau noeud
	parent->right = new_node;

	// Retourne le pointeur vers le nouveau noeud créé
	return (new_node);
}
