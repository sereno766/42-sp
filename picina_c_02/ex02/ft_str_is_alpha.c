/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:21:44 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/02 18:20:12 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
// int	main(void)
// {
// 	char	*str = "Aaoub";
// 	int		x;

// 	x = ft_str_is_alpha(str);
// 	printf("%d\n", x);
// 	return (0);
// }
