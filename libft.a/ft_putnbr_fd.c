/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malghroz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:43:22 by malghroz          #+#    #+#             */
/*   Updated: 2026/10/12 13:59:14 by malghroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;
	char		c;

	x = n;
	if (x < 0)
	{
		write (fd, "-", 1);
		x = -x;
	}
	if (x > 9)
	{
		ft_putnbr_fd (x / 10, fd);
	}
	c = (x % 10) + '0';
	write (fd, &c, 1);
}
/*
int main ()
{
	ft_putnbr_fd(999,1);
	return (0);
}*/
