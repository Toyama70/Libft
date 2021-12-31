/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:59:24 by yasinbest         #+#    #+#             */
/*   Updated: 2021/10/15 10:02:55 by yasinbest        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old;

	if (!del)
		return ;
	while (*lst != 0)
	{
		del((*lst)->content);
		old = *lst;
		*lst = old->next;
		free(old);
	}
	*lst = NULL;
}
