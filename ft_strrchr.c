/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:18:15 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/15 22:18:18 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = ft_strlen(s);
	ptr = (char *)s;
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
		{
			while (i-- > 0)
				ptr++;
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
