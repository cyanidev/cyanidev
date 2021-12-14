/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:45 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:18:35 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			i;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}

/* compara los primero n bytes de dos areas de memoria de s1 y s2
regresa un int mayor, igual a, o menos que cero si los primeros n bytes de s1 son encontrados
si es mayor a s2  un int mayor, cero si igual o menor si es menor a s2 respectivamente 
el signo del digito diferente de cero es determinado por el signo de la diferencia
entre los primero pares de bytes 