/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 21:13:17 by snarain           #+#    #+#             */
/*   Updated: 2021/05/22 15:14:42 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;

	if (!f || !lst)
		return (NULL);
	new_l = NULL;
	if (lst)
	{
		while (lst)
		{
			new_n = ft_lstnew((*f)(lst->content));
			if (!new_n)
			{
				ft_lstclear(&new_l, del);
				return (NULL);
			}
			ft_lstadd_back(&new_l, new_n);
			lst = lst->next;
		}
	}
	return (new_l);
}
