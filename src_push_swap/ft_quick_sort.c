#include "push_swap.h"

long long int   *ft_listtoarr(t_lst *a, long long int **arr, int len)
{
    t_lst   *tmp;
    int     i;

    *arr = (long long int *)malloc(sizeof(long long int) * len);
    tmp = a;
    i = 0;
    while (i < len)
    {
        *arr[i] = tmp->n;
        i++;
        tmp = tmp->next;
    }
    return (arr);
}

void            quicksort(long long int *arr, int start, int end)
{
    int     index;

    if (start < end)
    {
        index = partition(arr, start, end);
        quicksort(arr, start, index - 1);
        quicksort(arr, index + 1, end);
    }
}

int             partition(long long int *arr, int start, int end)
{
    long long int   piv;
    int             i;
    int             index;
    int             tmp;

    i = start;
    piv = arr[end];
    index = start;
    while (i < end)
    {
        if (arr[i] <= piv)
        {
            tmp = arr[i];
            arr[i] = arr[index];
            arr[index] = tmp;
            index++;
        }
        i++;
    }
    tmp = arr[end];
    arr[end] = arr[index];
    arr[index] = tmp;
    return (index);
}

void            ft_check_a(t_pile *pile)
{
    t_lst   *tmp;

    tmp = pile->a;
    if (tmp->next && tmp->next->next)
    {
        if ((tmp->n > tmp->next->n) && (tmp->next->n > tmp->next->next->n))
        {
            operation(pile, 0);
            operation(pile, 5);
            operation(pile, 0);
            operation(pile, 8);
            operation(pile, 0);
        }
        else if (tmp->n > tmp->next->n && tmp->next->n < tmp->next->next->n && tmp->n )
    }
}