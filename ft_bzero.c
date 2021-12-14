/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:03:00 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 17:46:38 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*st;
	size_t			i;

	i = 0;
	st = s;
	while (i < n)
	{
		st[i] = 0;
		i++;
	}
}

/* bzero borra la informacion en un n bytes de memoria empezando en donde apunte s
mientras el indice sea menor a n la posicion es reemplazada por 0 y avanza.