/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:30:29 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/19 15:30:45 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b, int c)
{
	char	vir;
	char	space;

	vir = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 55)
	{
		write(1, &vir, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b +1;
			while (c <= 57)
			{
				ft_putchar (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
