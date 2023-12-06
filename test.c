/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 15:08:18 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*str = "-voici une chaine-";
	char	chr = 'Z';
	int		nb = 26;
	int		unb = 445;
	printf("\n===Mon printf===\n");
	int value = ft_printf("- test d'un caractère : -%c- \n- test d'une chaine : %s \n- test d'un décimal : -%d- \n- test d'un integer : -%i- \n- test d'un unsigned : -%u- \n- test des hexa : -%x-  -%X-", chr, str, nb, nb, unb, unb, unb);
	value += ft_printf("\n- test d'une adresse memoire : -%p-", str);
	printf("\n%d\n", value);
	printf("\n===Reel printf===\n");
	value = printf("- test d'un caractère : -%c- \n- test d'une chaine : %s \n- test d'un décimal : -%d- \n- test d'un integer : -%i- \n- test d'un unsigned : -%u- \n- test des hexa : -%x-  -%X-", chr, str, nb, nb, unb, unb, unb);
	value += printf("\n- test d'une adresse memoire : -%p-", str);
	printf("\n%d\n", value);
	return (0);
}