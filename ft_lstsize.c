/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:49:19 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:18:30 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/* cuenta el numero de elementos en una linked list
 se itera la lista reemplazando lst con el address del elemento next
 el ultimo apunta a null asi que hace bucle hasta que sea null el lst
 y se retorna el numero de elementos validos de la lista que es cuantas veces se entro en el bucle