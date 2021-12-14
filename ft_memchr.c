/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:41 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 19:18:33 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	ch;
	size_t			i;

	st = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return (&st[i]);
		i++;
	}
	return (NULL);
}

/* memchr busca en los primeros n bytes de memoria aputnado por s la primera coincidencia de c
c y s son interpretados como unsigned char