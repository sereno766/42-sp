/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:29:49 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/22 14:40:35 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
// int	main(void)
// {
// 	int	*pont;
// 	int	tab[5];
// 	int	i;
// 	int	size;

// 	i = 0;
// 	size = 5;
// 	pont = tab;

// 	while (i < size)
// 	{
// 		tab[i] = i;
// 		i++;
// 	}
// 	ft_rev_int_tab(pont, size);
// 	for (i = 0; i < size; i++)
//     {
//         printf("%d ", tab[i]);
//     }
// 	return (0);
// }
