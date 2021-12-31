/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:53:55 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/13 10:53:07 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (0);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (0);
	while (s1[i] != 0)
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[k] != 0)
	{
		dest[i] = s2[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}
