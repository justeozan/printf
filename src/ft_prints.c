/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:11:52 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 15:21:26 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_char(int c, int	*octet)
{
	write(1, &c, 1);
	(*octet)++;
}

void	ft_print_str(char *s, int *octet)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_print_char(s[i], octet);
		i++;
	}
}

void	ft_print_ptr(void *addr, int *octet) //-----------------------------
{
	char	stack[17];
	int		i;
	unsigned long long	address;
	
	address = (unsigned long long)addr;
	i = 0;
	while (i < 16)
	{
		stack[i] = "0123456789abcdef"[address % 16];
		i++;
		address /= 16;
	}
	stack[i] = '\0';
	i = 15;
	while (stack[i] == '0')
		i--;
	ft_print_str("0x", octet);
	while (i >= 0)
	{
		ft_print_char(stack[i], octet);
		i--;
	}
}

void	ft_print_nbr(int nb, int *octet)
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
		ft_print_nbr(nb, octet);
	}
	else if (nb >= 10)
	{
		ft_print_nbr(nb / 10, octet);
		ft_print_nbr(nb % 10, octet);
	}
	else if (nb <= 9 && nb >= 0)
	{
		nb += 48;
		write(1, &nb, 1);
		(*octet)++;
	}
}

void	ft_print_unbr(unsigned int nb, int *octet)
{
	if (nb >= 10)
	{
		ft_print_unbr(nb / 10, octet);
		ft_print_unbr(nb % 10, octet);
	}
	else if (nb <= 9)
	{
		nb += 48;
		write(1, &nb, 1);
		(*octet)++;
	}
}

void	ft_print_hexa(unsigned int nb, char *base, int	*octet)
{
	if (nb > 15)
		ft_print_hexa(nb / 16, base, octet);
	ft_print_char(base[nb%16], octet);
}
