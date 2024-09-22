/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:37:09 by acmachad          #+#    #+#             */
/*   Updated: 2024/09/03 15:06:16 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (*s1 || *s2)
	{
		i = 0;
		while (n > i)
		{
			if (*s1 != *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
			i++;
		}
	}
	return (0);
}
