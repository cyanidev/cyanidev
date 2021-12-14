/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:55:05 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 20:40:46 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]),
			i++;
	}
	str[i] = '\0';
	return (str);
}

/*Applies the function ’f’ to each character of
the string ’s’ , and passing its index as first
argument to create a new string (with malloc(3))
resulting from successive applications of ’f’.
