/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 09:29:04 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/04 15:19:07 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = (void *)b;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	b = (void *)d;
	return (b);
}
