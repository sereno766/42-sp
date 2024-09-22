/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmachad <acmachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:13:32 by acmachad          #+#    #+#             */
/*   Updated: 2024/08/27 18:11:51 by acmachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
// int main(void)
// {
// 	char src[] = "test";
// 	char dest[10];

// 	ft_strcpy(dest,src);

// 	printf("dest: %s\n", dest);
// 	return(0);
// }
