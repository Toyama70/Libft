/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:40:29 by ybestrio          #+#    #+#             */
/*   Updated: 2021/10/17 15:40:33 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (n > i && (ptr_s1[i] || ptr_s2[i]))
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			if (ptr_s1[i] > ptr_s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
