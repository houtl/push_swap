#include "push_swap.h"

int		partition_b(t_pile *pile, int size)
{
	int		m;
	int		count;
	int		j;

	j = 0;
	count = 0;
	m = find_m(pile, size);
	while (m_big(pile->a, m))
		if (pile->a->n > m)
		{
			operation(pile, 3);
			count++;
		}
		else
		{
			j++;
			operation(pile, 6);
		}
	b_back_rb_rrb(pile, j);
	return (count);
}

void		ft_sort2(t_pile *pile, int size)
{
	int		n;

	if (size == 1 || sort_check(pile) == 1)
		return ;
	if (size > 3)
	{
		n = partition_b(pile, size);
		ft_sort(pile, size);
		ft_sort2(pile, size - n);
		move_back_b(pile, n);
	}
	else if (size > 1)
	{
		sort_simple_b(pile, size);
	}
}