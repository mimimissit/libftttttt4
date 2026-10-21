/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:27:15 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/21 11:34:00 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*test_dup_int(void *content)
{
	int	*new_ptr;

	new_ptr = malloc(sizeof(int));
	if (!new_ptr)
		return (NULL);
	*new_ptr = *(int *)content;
	return ((void *)new_ptr);
}
int main()
{
	t_list *new = NULL;
	t_list *old;
	old = ft_lstnew("mary");
	new = ft_lstmap(new,test_dup_int,free);
	printf("%s\n", (char *)new -> content);
	free(old);
	free (new);
}*/
