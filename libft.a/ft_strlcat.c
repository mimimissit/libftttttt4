/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:59:49 by malghroz          #+#    #+#             */
/*   Updated: 2026/09/29 13:42:25 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	y;

	y = 0;
	i = 0;
	x = 0;
	while (src[x])
		x++;
	while (dst[y] && size > y)
		y++;
	if (y == size)
	{
		return (size + x);
	}
	while (src[i] && (size - 1) > (y + i))
	{
		dst[y + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (x + y);
}
/*
int main()
{
	char src[]="maryyy";
	char dst[10]="";
	size_t total;

	total=ft_strlcat(dst,src,10);
	printf("%s\n",dst);
	printf("%zu\n",total);
	return(0);
}*/
