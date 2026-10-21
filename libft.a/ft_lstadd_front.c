/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:30:20 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 12:40:19 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int main(void)
{
	t_list *new;
	t_list *lst;

	new = ft_lstnew("jj");
	lst = ft_lstnew("old");
	ft_lstadd_front(&lst,new);
	printf("%s\n", (char *)lst ->content);
	printf("%s\n", (char *)lst -> next -> content);
}*/
