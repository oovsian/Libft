/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:45:18 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/21 20:32:42 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*s1;
	char		first;
	size_t		i;

	s1 = (char *)s;
	first = (char)c;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == first)
			return (&s1[i]);
		i++;
	}
	if (first == '\0')
		return (&s1[i]);
	return (NULL);
}

//devuelve un puntero a la primera aparición del carácter c en la cadena s
//o devuelve NULL si no se encuentra el carácter
//el '\0' byte se considera parte de la cadena
//si c se especifica como '\0', devuelve un puntero al terminador

/*int	main(void)
{
	char const	*str = "Hijo, te quiero!";
	char *st1 = strchr(str, ',');
	printf("\n%s", st1);
	char *st2 = strchr(str, 'q');
	printf("\n%s", st2);
	char *st3 = strchr(str, 'k');
	printf("\n%s", st3);
	return (0);
}*/