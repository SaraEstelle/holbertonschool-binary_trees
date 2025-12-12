#include "binary_trees.h"

/**
 * binary_trees_ancestor - trouve l'ancêtre commun le plus bas
 * @first: premier node
 * @second: deuxième node
 *
 * Return: pointeur vers l'ancêtre commun, sinon NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *f, *s;

	if (!first || !second)
		return (NULL);

	/* on va boucler tant qu'il reste quelque chose à explorer */
	f = first;
	s = second;

	while (f || s)
	{
		/* comparer tout le chemin de f avec second */
		if (f)
		{
			const binary_tree_t *temp = second;

			while (temp)
			{
				if (temp == f)
					return ((binary_tree_t *)f);
				temp = temp->parent;
			}
			f = f->parent;
		}

		/* comparer tout le chemin de s avec first */
		if (s)
		{
			const binary_tree_t *temp = first;

			while (temp)
			{
				if (temp == s)
					return ((binary_tree_t *)s);
				temp = temp->parent;
			}
			s = s->parent;
		}
	}

	return (NULL);
}
