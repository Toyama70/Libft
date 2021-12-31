/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:06:16 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/16 10:55:37 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int				i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	while (i < (int)n)
	{
		*tmp2++ = *tmp1++;
		i++;
	}
	return (dst);
}
