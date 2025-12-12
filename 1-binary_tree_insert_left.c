#include "binary_trees.h"
// Inclusion du fichier d'en-tête contenant la définition de la structure `binary_tree_t`
// et d'éventuelles fonctions utilitaires pour les arbres binaires.

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL
 */
// Déclaration de la fonction `binary_tree_insert_left` qui crée un nouveau noeud
// et l'insère comme enfant gauche d'un noeud parent donné.

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	// Déclaration d'un pointeur pour le nouveau noeud
	binary_tree_t *new_node;

	// Vérifie si le parent est NULL ; impossible d'insérer dans ce cas
	if (parent == NULL)
		return (NULL);

	// Allocation dynamique pour le nouveau noeud
	new_node = malloc(sizeof(binary_tree_t));
	// Vérifie si l'allocation a échoué
	if (new_node == NULL)
		return (NULL);

	/* Stocke 'value' dans le champ n du nouveau noeud */
	new_node->n = value;
	// Définir le parent du nouveau noeud
	new_node->parent = parent;
	// Initialisation des enfants gauche et droit à NULL
	new_node->left = NULL;
	new_node->right = NULL;

	// Si le parent avait déjà un enfant gauche
	if (parent->left != NULL)
	{
		/* L'ancien fils gauche devient le fils gauche du nouveau noeud */
		new_node->left = parent->left;
		/* Mise à jour du parent de l'ancien fils gauche */
		parent->left->parent = new_node;
	}

	/* On place le nouveau noeud comme fils gauche du parent */
	parent->left = new_node;

	// Retourne le pointeur vers le nouveau noeud créé
	return (new_node);
}
