/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:40:19 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 21:10:20 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *)s;
	while (n > 0)
	{
		*tmp_ptr = (unsigned char)c;
		tmp_ptr++;
		n--;
	}
	return (s);
}
//llena los primeros n bytes del area señalada por *s con c

/*int	main(void)
{
	unsigned char s[9] = "42Malaga";
	ft_memset(s, '1', 5);
	printf("%s\n", s);
	return (0);
}*/