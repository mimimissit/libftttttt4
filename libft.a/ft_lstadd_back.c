/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:18:49 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 14:51:50 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last -> next)
	{
		last = last -> next;
	}
	last -> next = new;
}
/*
t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc (sizeof(t_list));
    if(!new)
        return(NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}
int main(void)
{
	t_list *new;
	t_list *lst = NULL;

	new = ft_lstnew("hi");
	ft_lstadd_back(&lst , new);
	printf("%s\n", (char *)lst->content);
	free(lst);
	return(0);
}*/
