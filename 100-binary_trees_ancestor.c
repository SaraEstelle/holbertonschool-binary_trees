#include "binary_trees.h"

/**
 * binary_trees_ancestor - trouve l'ancêtre commun le plus bas (lowest common ancestor)
 * @first: premier nœud
 * @second: deuxième nœud
 *
 * Return: pointeur vers l'ancêtre commun le plus bas, sinon NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *f, *s;

	// Si un des nœuds est NULL → impossible de trouver un ancêtre
	if (!first || !second)
		return (NULL);

	// On commence à explorer les chemins depuis chaque nœud
	f = first;
	s = second;

	while (f || s)
	{
		// On remonte depuis f et on compare avec tous les ancêtres de second
		if (f)
		{
			const binary_tree_t *temp = second;

			while (temp)
			{
				// Si on trouve un ancêtre commun → c’est le LCA
				if (temp == f)
					return ((binary_tree_t *)f);
				temp = temp->parent;
			}
			// On remonte d’un niveau depuis f
			f = f->parent;
		}

		// On remonte depuis s et on compare avec tous les ancêtres de first
		if (s)
		{
			const binary_tree_t *temp = first;

			while (temp)
			{
				if (temp == s)
					return ((binary_tree_t *)s);
				temp = temp->parent;
			}
			// On remonte d’un niveau depuis s
			s = s->parent;
		}
	}

	// Aucun ancêtre commun trouvé
	return (NULL);
}
