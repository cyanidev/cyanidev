/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:20 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:29:42 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	cs = s;
	i = 0;
	while (n > 0)
	{
		cs[i] = c;
		i++;
		n--;
	}
	return (s);
}

/* llena los primero n bytes de un area de memoria apuntado por s 
c llena el bloque de memoria convirtiendose en char