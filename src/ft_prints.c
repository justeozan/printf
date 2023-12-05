/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:11:52 by justo             #+#    #+#             */
/*   Updated: 2023/12/04 17:11:52 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_printchar(int c, int	*octet)
{
	write(1, &c, 1);
	(*octet)++;
}

void	ft_printstr(char *s, int *octet)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_printchar(s[i], octet);
		i++;
	}
}

// void	ft_print_ptr() //pointeur %p
// {

// }

void	ft_printnbr(int nb, int *octet)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*octet) += 11;
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		(*octet)++;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9 && nb >= 0)
	{
		nb += 48;
		write(1, &nb, 1);
		(*octet)++;
	}
}

void	ft_print_hexa_lower(int nb, int	*octet)
{
	if (nb > 15)
		print_hexa_upper(nb / 16, octet);
	ft_printchar("0123456789abcdef"[nb%16], octet);
}

void	ft_print_hexa_upper(int nb, int	*octet)
{
	if (nb > 15)
		print_hexa_upper(nb / 16, octet);
	ft_printchar("0123456789ABCDEF"[nb%16], octet);
}
