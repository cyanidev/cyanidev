/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:24 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:21:31 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (cdest < csrc)
	{
		ft_memcpy(cdest, csrc, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			cdest[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return (dest);
}

/*copia los n bytesde un area de memoria src(otigen) a el area de memoria dst(origen)
si se sobreponen los areas de memoria se odria haber usado un array temporal o copiando desde atras
para adelante 