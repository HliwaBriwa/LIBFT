/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:35:43 by sel-mir           #+#    #+#             */
/*   Updated: 2024/10/29 20:48:56 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	a;

	a = c;
	if (a <= 'z' && a >= 'a')
	{
		a -= 32;
		return (a);
	}
	return (c);
}