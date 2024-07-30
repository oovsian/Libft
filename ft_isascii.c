/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:20:06 by oovsiann          #+#    #+#             */
/*   Updated: 2024/05/22 21:45:08 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
//ASCII caracteres entre 0 y 127 decimal

/*int	main(void)
{
	int	i;
	int	c;

	c = 127;
	i = ft_isascii(c);
	printf("%d\n", i);
	return (0);
}*/