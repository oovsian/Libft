/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:14:07 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/14 19:52:52 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			last;

	last = (char)c;
	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == last)
			res = ((char *)&s[i]);
		i++;
	}
	{
		if (s[i] == last)
			res = ((char *)&s[i]);
		return (res);
	}
}
//devuelve un puntero a la ultima aparición del carácter c en la cadena s
//o devuelve NULL si no se encuentra el carácter
//el '\0' byte se considera parte de la cadena
//si c se especifica como '\0', devuelve un puntero al terminador

/*int	main(void)
{
	char const	*str = "Hijo, te quiero!";
	char *st1 = strrchr(str, 'i');
	printf("\n%s", st1);
	char *st2 = strrchr(str, 'o');
	printf("\n%s", st2);
	char *st3 = strrchr(str, 'k');
	printf("\n%s", st3);
	return (0);
}*/