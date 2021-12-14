/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:07:47 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 17:46:36 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	n;
	int					sign;

	i = 0;
	n = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = (str[i++] - '0') + (n * 10);
	if (n > 9223372036854775807)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (n * sign);
}

/* se te da un string el cual es pasado a integer para su manipulación
se deben ignorar todos los espacios en blanco y negtaivos o positivos extras, 
si el numero es muy largo devuelve -1 si es positivo y 0 si es negativo.
