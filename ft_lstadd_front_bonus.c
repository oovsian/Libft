/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oovsiann <oovsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:58:35 by oovsiann          #+#    #+#             */
/*   Updated: 2024/06/20 19:05:02 by oovsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h> 
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	char	*data;
	t_list 	*mi_lista;
	t_list 	*nuevo_nodo;

	data = strdup("42 Malaga");
	mi_lista = NULL;
	nuevo_nodo = ft_lstnew(data);
	ft_lstadd_front(&mi_lista, nuevo_nodo);
	printf("Contenido del nodo: %s\n", (char *)mi_lista->content);
	free(data);
	return (0);
}*/