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
	char	*str = "-voici une chaine-";
	char	chr = 'A';
	int		nb = -26;
	printf("\n===Mon printf===\n");
	int value = ft_printf("- test d'un caractère : -%c- \n- test d'une chaine : %s \n- test d'un décimal : -%d- \n- test des hexa : -%x-  -%X-", chr, str, nb, nb, nb);
	printf("\n%d\n", value);
	printf("\n===Reel printf===\n");
	value = printf("- test d'un caractère : -%c- \n- test d'une chaine : %s \n- test d'un décimal : -%d- \n- test des hexa : -%x-  -%X-", chr, str, nb, nb, nb);
	printf("\n%d\n", value);
	return (0);
}