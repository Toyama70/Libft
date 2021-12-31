/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:41:59 by ybestrio          #+#    #+#             */
/*   Updated: 2021/10/05 13:39:28 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*p_dst;
	char	*p_src;

	if (dst == src)
		return (dst);
	p_dst = (char *)dst;
	p_src = (char *)src;
	if (dst > src)
	{
		while (n-- > 0)
			*(p_dst + n) = *(p_src + n);
		return (dst);
	}
	else
	{
		while (n-- > 0)
			*p_dst++ = *p_src++;
	}
	return (dst);
}
