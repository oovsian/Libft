/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:13:56 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:25:06 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] != '\0' && ft_is_set(s1[start], set))
		start++;
	while (end > start && ft_is_set(s1[end - 1], set))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

	/*int	main(void)
	{
	char	*str1;
	char	*space;
	char	*i;

	str1 = "     28 de mayo ";
	printf("Primera cadena:%s\n", str1);
	space = " \n\t";
	i = ft_strtrim(str1, space);
	printf("Nueva cadena:%s\n", i);
	return (0);
	}*/

	//borra en el principio y en el fin de la cadena s1 
	//los caracteres de la cadena set
	//devuelve subcadena con la lengitud end - start