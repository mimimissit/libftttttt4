/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:00:41 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 14:17:36 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int main(void)
{
    t_list *one;
    t_list *two;
    t_list *three;
    t_list *last;

    one = ft_lstnew("hi");
    two = ft_lstnew("hello");
    three = ft_lstnew("ok");

    one->next = two;
    two->next = three;

    last = ft_lstlast(one);

    printf("%s\n", (char *)last->content);

    free(one);
    free(two);
    free(three);

    return (0);
}*/
