/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:45:00 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/05 19:41:50 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

//comprueba carácteres imprimibles, incluido el espacio

/*int	main(void)
{	
	int	c;
	int	i;

	c = 125;
	i = ft_isprint(c);
	printf("%d\n", i);
	return (0);
}*/
