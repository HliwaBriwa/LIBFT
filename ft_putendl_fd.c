/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-mir <sel-mir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:34 by sel-mir           #+#    #+#             */
/*   Updated: 2024/11/09 16:43:40 by sel-mir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	a;

	a = 0;
	if (!s || fd < 0)
		return ;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}
