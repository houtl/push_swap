#include "push_swap.h"

void				b_back_rb_rrb(t_pile *pile, int j)
{
	if (j > count_lst_len(pile->b) / 2)
	{
		j = count_lst_len(pile->b) - j;
		while (j--)
			operation(pile, 6);
	}
	else
		while (j--)
			operation(pile, 9);
}

void				a_back_ra_rra(t_pile *pile, int f, int j)
{
	if (f == 1)
	{
		if (j > count_lst_len(pile->a) / 2)
		{
			j = count_lst_len(pile->a) - j;
			while (j--)
				operation(pile, 5);
		}
		else
			while (j--)
				operation(pile, 8);
	}
}
