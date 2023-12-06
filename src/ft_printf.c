/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:08:29 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 14:26:27 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	len_print_arg(char c, va_list arg, int *octet)
{
	if (c == 'c')
		ft_printchar(va_arg(arg, int), octet);
	else if (c == 's')
		ft_printstr(va_arg(arg, char *), octet);
	// else if (c == 'p')
	// 	len += ft_printptr();
	else if (c == 'd')
		ft_printnbr(va_arg(arg, int), octet);
	else if (c == 'i')
		ft_printnbr(va_arg(arg, int), octet);
	else if (c == 'u')
		ft_print_unbr(va_arg(arg, unsigned int), octet);
	else if (c == 'x')
		ft_print_hexa_lower(va_arg(arg, unsigned int), octet);
	else if (c == 'X')
		ft_print_hexa_upper(va_arg(arg, unsigned int), octet);
	// else if (c == '%')
	// 	return (0);
	// else
	// 	return (0);
}

int	ft_printf(const char *entry, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	va_start(args, entry);
	len = 0;
	while (entry[i])
	{
		if (entry[i] == '%')
		{
			len_print_arg(entry[i + 1], args, &len);
			i++;
		}
		else
		{
			ft_printchar(entry[i], &len);
		}
		i++;
	}
	return (len);
}