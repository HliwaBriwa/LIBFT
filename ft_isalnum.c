/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:14:47 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/06 17:28:25 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}