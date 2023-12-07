/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/07 13:16:27 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	size_t	value;
	
	printf("\n===Mon printf===\n");
	value = ft_printf("- %%c		: %c\n", 'S');
	value += ft_printf("- %%s		: %s\n", "Voici une chaine");
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
	value += ft_printf("- last		: %c%s%%%d%i%u%x%X", 'S', "ft_plouf", 45, 50, 55, 666, 777);
	printf("\n%ld\n", value);
	printf("\n===Reel printf===\n");
	value = printf("- %%c		: %c\n", 'S');
	value += printf("- %%s		: %s\n", "Voici une chaine");
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
	value += printf("- last		: %c%s%%%d%i%u%x%X", 'S', "ft_plouf", 45, 50, 55, 666, 777);
	printf("\n%ld\n", value);
	
	return (0);
}
