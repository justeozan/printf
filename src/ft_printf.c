/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:08:29 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 16:59:19 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_char(int c, size_t *octet)
{
	write(1, &c, 1);
	(*octet)++;
}

void	len_print_arg(char c, va_list arg, size_t *octet)
{
	if (c == 'c')
		ft_print_char(va_arg(arg, int), octet);
	else if (c == 's')
		ft_print_str(va_arg(arg, char *), octet);
	else if (c == 'p')
		ft_print_ptr(va_arg(arg, unsigned long long), octet);
	else if (c == 'd')
		ft_print_nbr(va_arg(arg, int), octet);
	else if (c == 'i')
		ft_print_nbr(va_arg(arg, int), octet);
	else if (c == 'u')
		ft_print_unbr(va_arg(arg, unsigned int), octet);
	else if (c == 'x')
		ft_print_hexa(va_arg(arg, unsigned int), "0123456789abcdef", octet);
	else if (c == 'X')
		ft_print_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF", octet);
	else if (c == '%')
		ft_print_char('%', octet);
}

int	ft_printf(const char *entry, ...)
{
	size_t		i;
	size_t		len;
	va_list		args;

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
			ft_print_char(entry[i], &len);
		i++;
	}
	return (len);
}
