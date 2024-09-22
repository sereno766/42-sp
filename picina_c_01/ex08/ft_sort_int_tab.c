/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:03:34 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/27 15:05:46 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
}
