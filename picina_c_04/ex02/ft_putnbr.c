/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:46:03 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/02 16:24:08 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printer(int nb)
{
	char	tmp[12];
	int		index;
	int		char_nunber;

	index = 0;
	while (nb > 0)
	{
		tmp[index] = (nb % 10) + '0';
		char_nunber = tmp[index++];
		nb = nb / 10;
	}
	while (index > 0)
	{
		write(1, &tmp[--index], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + 48);
	if (nb >= 10)
		ft_printer(nb);
}
int main(void)
{
	ft_putnbr(-2147483647);
	return(0);
}