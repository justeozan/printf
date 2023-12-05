/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/03 18:47:08 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*str = "nop";
	char	chr = 'x';
	int value = ft_printf("le poil %s au%c feu", str, chr);
	printf("\nle poil %s au%c feu", str, chr);
	printf("\n%d\n", value);
	return (0);
}