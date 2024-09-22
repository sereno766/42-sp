/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:20:48 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/02 18:32:49 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	ft_strlowcase(str);
	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			flag = 0;
		}
		if (str[i] < '0')
			flag = 1;
		else if (str[i] > '9' && str[i] < 'A')
			flag = 1;
		else if (str[i] > 'Z' && str[i] < 'a')
			flag = 1;
		else if (str[i] > 'z')
			flag = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = " oi, tudo bem? 42palavras AuarEnta e duas; cinquenta+e+um";

// 	ft_strcapitalize(str);

// 	printf("%s\n", str);
// 	return (0);
// }
