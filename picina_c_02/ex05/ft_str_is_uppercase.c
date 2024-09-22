/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:06:39 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/27 16:11:23 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str = "ADWZ";
// 	int		x;

// 	x = ft_str_is_uppercase(str);
// 	printf("%d\n", x);
// 	return (0);
// }
