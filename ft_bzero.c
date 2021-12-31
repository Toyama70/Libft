/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 09:50:43 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/04 15:09:31 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*d;

	i = 0;
	d = s;
	while (i < (int)n)
	{
		d[i] = 0;
		i++;
	}
	s = d;
}