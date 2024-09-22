/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:47:36 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/27 16:05:30 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str = "099";
// 	int		x;

// 	x = ft_str_is_numeric(str);
// 	printf("%d\n", x);
// 	return (0);
// }
