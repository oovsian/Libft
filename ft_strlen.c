/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:57:17 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 20:37:30 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

//calcula la lengitud de la cadena s a la que apunta hasta '\0'

/*int	main(void)
{
	char	*s;
	int		i;

	s = "Mi libreria";
	i = ft_strlen(s);
	printf("%d\n", i);
	return (0);
}*/