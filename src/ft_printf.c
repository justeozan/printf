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
#include <stdarg.h>

void	find_format(char c)
{
	if (c == 'c')
		ft_putchar();
	else if (c == 's')
		ft_putstr();
	else if (c == 'p')
		ft_print_ptr();
	else if (c == 'd')
		ft_putnbr_base( , 10);
	else if (c == 'i')
		ft_putnbr_base( , 10);
	else if (c == 'u')
		ft_putnbr_base( , 10);
	else if (c == 'x')
		ft_putnbr_base( , 16);
	else if (c == 'X')
		ft_putnbr_base( , 16);
	else if (c == '%')
		return (0);
	else
		return (0);
}

int	ft_printf(const char *entry, ...)
{
	int	i;
	int	value;

	i = -1;
	value = 0;
	while (entry[++i])
	{
		if (entry[i] == '%')
		{
			print_to_format(entry[i + 1]);
		}
	}
	return (value);
}

#include <stdio.h>

int main()
{
	char	*str = "nop";
	int value = ft_printf("le poil %s au feu", str);
	printf("%d\n", value);
	return (0);
}