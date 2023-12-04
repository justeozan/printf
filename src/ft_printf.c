/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:08:29 by justo             #+#    #+#             */
/*   Updated: 2023/12/04 16:08:29 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include "ft_printf.h"
#include "ft_prints.c"
#include <stdarg.h>


int	len_print_arg(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_printchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_printstr(va_arg(arg, char *));
	// else if (c == 'p')
	// 	len += ft_printptr();
	// else if (c == 'd')
	// 	len += ft_putnbr_base( , 10);
	// else if (c == 'i')
	// 	len += ft_putnbr_base( , 10);
	// else if (c == 'u')
	// 	len += ft_putnbr_base( , 10);
	// else if (c == 'x')
	// 	len += ft_putnbr_base( , 16);
	// else if (c == 'X')
	// 	len += ft_putnbr_base( , 16);
	// else if (c == '%')
	// 	return (0);
	// else
	// 	return (0);
	return (len);
}

int	ft_printf(const char *entry, ...)
{
	int		i;
	int		j;
	int		len;
	va_list	args;

	i = -1;
	j = 0;
	va_start(args, entry);
	while (entry[++i])
	{
		if (entry[i] == '%')
		{
			len += len_print_arg(entry[i + 1], args);
			i++;
		}
		else
		{
			ft_printchar(entry[i]);
			len++;
		}
	}
	return (len);
}

#include <stdio.h>

int main()
{
	char	*str = "nop";
	char	chr = 'x';
	int value = ft_printf("le poil %s au%c feu", str, chr);
	printf("\n%d\n", value);
	return (0);
}