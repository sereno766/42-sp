/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:55:07 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/27 16:20:01 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str = "acawd";
// 	int		x;

// 	x = ft_str_is_lowercase(str);
// 	printf("%d\n", x);
// 	return (0);
// }
