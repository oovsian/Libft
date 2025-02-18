/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:25:53 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:48:28 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		s1_len;
	int		s2_len;
	int		full_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	full_len = s1_len + s2_len + 1;
	new_s = malloc(full_len);
	i = 0;
	if (!new_s)
		return (NULL);
	while (i < s1_len)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < full_len - 1)
	{
		new_s[i] = *s2++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*i;

	str1 = "Hola ";
	str2 = "Mundo";
	i = ft_strjoin(str1, str2);
	printf("La nueva cadena es: %s\n", i);
	return (0);
}*/

//concatena dos cadenas de caracteres:
//asignamos suficiente memoria en la nueva cadena para dos cadenas mas '\0'
//devuelve un puntero a una nueva cadena
//o devuelve NULL si no se puede asignar memoria para la nueva cadena