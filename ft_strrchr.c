/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:09:38 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 20:12:21 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	char	*str;

	str = (char *)s;
	i = (ft_strlen(str));
	ch = (char)c;
	while (i >= 0)
	{
		if (str[i] == ch)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/* retorna un puntero a la ultima ocurrencia de c en s 