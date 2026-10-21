/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:09:15 by malghroz          #+#    #+#             */
/*   Updated: 2026/09/29 11:59:20 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	while (src[x])
		x++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}
/*
int main()
{
	char src[] = "maryyyy";
	char dst[4];
	size_t total;

	total = ft_strlcpy(dst,src,3);
	printf("%s\n",dst);
	printf("%zu\n",total);
}*/
