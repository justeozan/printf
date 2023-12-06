/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:47:08 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 17:30:11 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	printf("\n===Mon printf===\n");
	ft_printf("- last : -%c%s%%%d%i%u%x%X%-l", 'S', "ft_plouf", 45, 50, 55, 666, 777);
	

	printf("\n===Reel printf===\n");
	printf("- last : -%c%s%%%d%i%u%x%X%-l", 'S', "ft_plouf", 45, 50, 55, 666, 777);

	return (0);
}
