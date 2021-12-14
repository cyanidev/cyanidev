/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:03:22 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:21:30 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}

/* copia los n bytesde un area de memoria src(otigen) a el area de memoria dst(origen)
no se debe superponer, si sse sobreponen usar memmove
