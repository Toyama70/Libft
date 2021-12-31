/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:38:18 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/13 11:07:05 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;
	size_t			k;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		dest = malloc(sizeof(char) * 1);
	else if (ft_strlen(s) - start < len)
		dest = malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = start;
	k = 0;
	while (i < len + start && start < ft_strlen(s))
	{
		dest[k] = s[i];
		i++;
		k++;
	}
	dest[k] = 0;
	return (dest);
}
