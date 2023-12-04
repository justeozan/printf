/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:11:52 by justo             #+#    #+#             */
/*   Updated: 2023/12/04 17:11:52 by justo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

void	ft_print_ptr(void	*ptr)
{

}

void	ft_putnbr_base(int nbr, int base)
{

}
