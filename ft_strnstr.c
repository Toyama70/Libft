/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:23:55 by ybestrio          #+#    #+#             */
/*   Updated: 2021/10/13 09:53:42 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;

	ptr = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (ptr);
	while (len > 0 && *ptr)
	{
		if (*ptr == needle[0])
		{
			if (ft_strncmp(ptr, needle, ft_strlen(needle)) == 0
				&& len >= ft_strlen(needle))
			{
				return (ptr);
			}
		}
		len--;
		ptr++;
	}
	return (0);
}
