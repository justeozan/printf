/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/07 13:18:35 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_perso(void)
{
	size_t	value;
	char	*s;
	int		n;

	n = 55;
	s = "ft_plouf";
	printf("\n===Mon printf===\n");
	value = ft_printf("- %%c		: %c\n", 'S');
	value += ft_printf("- %%s		: %s\n", "Voici une chaine");
	value += ft_printf("- %%s(err)	: %s\n", NULL);
	value += ft_printf("- %%p		: %p\n", "ptr");
	value += ft_printf("- %%p(err)	: %p\n", NULL);
	value += ft_printf("- %%d		: %d\n", 26);
	value += ft_printf("- %%i		: %i\n", 26);
	value += ft_printf("- %%i(err)	: %i\n", 2147483699);
	value += ft_printf("- %%u		: %u\n", 26);
	value += ft_printf("- %%u(err)	: %u\n", -26);
	value += ft_printf("- %%x		: %x\n", 445);
	value += ft_printf("- %%X		: %X\n", 445);
	value += ft_printf("- %%%%		: %%\n");
	value += ft_printf("-%c%s%%%d%i%u%x%X", s[0], s, n, n, n, n, n);
	printf("\n%ld\n", value);
}

void	test_real(void)
{
	size_t	value;
	char	*s;
	int		n;

	n = 55;
	s = "ft_plouf";
	printf("\n===Mon printf===\n");
	value = printf("- %%c		: %c\n", 'S');
	value += printf("- %%s		: %s\n", "Voici une chaine");
	value += printf("- %%s(err)	: %s\n", NULL);
	value += printf("- %%p		: %p\n", "ptr");
	value += printf("- %%p(err)	: %p\n", NULL);
	value += printf("- %%d		: %d\n", 26);
	value += printf("- %%i		: %i\n", 26);
	value += printf("- %%i(err)	: %i\n", 2147483699);
	value += printf("- %%u		: %u\n", 26);
	value += printf("- %%u(err)	: %u\n", -26);
	value += printf("- %%x		: %x\n", 445);
	value += printf("- %%X		: %X\n", 445);
	value += printf("- %%%%		: %%\n");
	value += printf("-%c%s%%%d%i%u%x%X", s[0], s, n, n, n, n, n);
	printf("\n%ld\n", value);
}

int	main(void)
{
	test_perso();
	test_real();
	return (0);
}
