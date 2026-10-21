/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 13:29:13 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/08 13:31:31 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i])
	{
		i++;
	}
	ptr = malloc ((i + 1) * sizeof (char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*c;

	c = ft_strdup("Hello");

	printf("%p\n", c);

	free(c);
	return (0);
}*/
