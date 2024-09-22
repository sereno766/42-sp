/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:20:18 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/02 20:39:35 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_atoi(char *str)
{
	int		cont_negative;
	int		tmp;

	tmp = 0 ;
	cont_negative = 1;
	while ((*str >= 9 && *str <= 13)
		|| (*str == ' '))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cont_negative *= -1;
		str++;
	}
	if ((*str >= 'A' && *str <= 'Z')
		|| (*str >= 'A' && *str <= 'Z'))
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		tmp = tmp * 10 + (*str - '0');
		str++;
	}
	return (tmp * cont_negative);
}

// int	main(void)
// {
// 	int x ;
// 	x = ft_atoi("     --++-231234");
// 	printf("%d",x);
// 	return (0);
// }