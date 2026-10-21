/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:16:37 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 15:35:17 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*this;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		this = (*lst)-> next;
		del ((*lst)-> content);
		free (*lst);
		*lst = this;
	}
}
/*
int main()
{
	t_list *lst;

	 lst = ft_lstnew(ft_strdup("k"));
	if (!lst)
                return (1);
	printf ("%s\n", (char *)lst -> content);
	ft_lstclear(&lst,free);
}*/
