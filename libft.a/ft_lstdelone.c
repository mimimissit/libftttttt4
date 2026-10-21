/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:57:46 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 15:11:05 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst -> content);
	free(lst);
}
/*
int main(void)
{
	t_list *lst;

	lst = ft_lstnew(ft_strdup("kk"));
	printf("%s\n", (char *)lst -> content);
	ft_lstdelone(lst,free);
}*/
