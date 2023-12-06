/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 15:54:57 by ozasahin         ###   ########.fr       */
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
	value += ft_printf("\n- test d'une adresse memoire : -%p-", NULL);
	value += ft_printf("\n- test d'une percent : -%%-");
	value += ft_printf("\n- dernier test : -%c%s%%%d%i%u%x%X-", 'S', "ft_plouf", 45, 50, 55, 666, 777);
	value += ft_printf("\n- test du max : -%d-", 2147483699);
	printf("\n%d\n", value);
	printf("\n===Reel printf===\n");
	value = printf("- test d'un caractère : -%c- \n- test d'une chaine : %s \n- test d'un décimal : -%d- \n- test d'un integer : -%i- \n- test d'un unsigned : -%u- \n- test des hexa : -%x-  -%X-", chr, str, nb, nb, unb, unb, unb);
	value += printf("\n- test d'une adresse memoire : -%p-", str);
	value += printf("\n- test d'une adresse memoire : -%p-", NULL);
	value += printf("\n- test d'une percent : -%%-");
	value += printf("\n- dernier test : -%c%s%%%d%i%u%x%X-", 'S', "ft_plouf", 45, 50, 55, 666, 777);
	value += printf("\n- test du max : -%d-", 2147483699);
	printf("\n%d\n", value);
	return (0);
}