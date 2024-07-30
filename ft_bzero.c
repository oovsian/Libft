/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:17:59 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/24 22:49:51 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *)s;
	while (n > 0)
	{
		*tmp_ptr = '\0';
		tmp_ptr++;
		n--;
	}
}

//borra los datos en los n bytes de la memoria 
//comenzando en la ubicación señalada por s, 
//escribiendo ceros (bytes que contienen '\0') en esa área.
/*int	main(void)
{
	char str[9] = "42Malaga";
	void	*s;

	s = &str;
	ft_bzero(s, 3);
	printf("%s\n", str+3);
	return (0);
}*/
