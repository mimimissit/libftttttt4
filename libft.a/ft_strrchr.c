/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:57:35 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/21 12:00:31 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			p = ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		p = ((char *)&s[i]);
	}
	return (p);
}
/*
int main()
{
    char s[]= "";
    printf("%p\n", ft_strrchr(s,'r'));
    return(0);
}*/
