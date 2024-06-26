/*
Push_swap copy-pasta
*/
#include "Span.hpp"

static void	qs_swap_value(ssize_t *list, size_t a, size_t b)
{
	ssize_t	temp;

	temp = list[a];
	list[a] = list[b];
	list[b] = temp;
}

static ssize_t	qs_sub_sort(ssize_t *list, size_t low_index, size_t high_index)
{
	ssize_t	pivot;
	size_t	p1;
	size_t	p2;

	pivot = list[high_index];
	p1 = low_index;
	p2 = low_index;
	while (p2 <= high_index)
	{
		if (list[p2] < pivot)
		{
			qs_swap_value(list, p1, p2);
			p1++;
		}
		p2++;
	}
	qs_swap_value(list, p1, high_index);
	return (p1);
}

void	ft_quicksort(ssize_t *list, ssize_t low_index, ssize_t high_index)
{
	ssize_t	pivot_index;

	if (list && (low_index < high_index))
	{
		pivot_index = qs_sub_sort(list, low_index, high_index);
		ft_quicksort(list, low_index, pivot_index - 1);
		ft_quicksort(list, pivot_index + 1, high_index);
	}
}
