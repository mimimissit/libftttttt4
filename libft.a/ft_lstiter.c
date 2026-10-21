/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:39:10 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/17 15:57:12 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst -> content);
		lst = lst -> next;
	}
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

void    string_tolower(void *content)
{
        char *str = (char *)content;
        int i = 0;

        while (str[i])
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                i++;
        }
}

int     main(void)
{
        t_list  *one;
        t_list  *two;

        one = ft_lstnew(ft_strdup("Hello"));
        two = ft_lstnew(ft_strdup("World"));
        if (!one || !two)
                return (1);
        one->next = two;

        ft_lstiter(one, string_tolower);

        printf("%s\n", (char *)one->content);
        printf("%s\n", (char *)two->content);

        free(one->content);
        free(two->content);
        free(one);
        free(two);
        return (0);
}
*/
