/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:36:11 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/14 17:46:43 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* checkea si el caracter dado es ASCII, el cual es cualquiera entre 0 y octal 
0177 inclusive 0 si es falso, un numero diferente de cero para verdadero