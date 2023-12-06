/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:25:07 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 15:14:43 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *entry, ...);
void	len_print_arg(char c, va_list arg, int	*octet);

void	ft_print_char(int c, int	*octet);
void	ft_print_str(char *s, int *octet);
void	ft_print_nbr(int nb, int *octet);
void	ft_print_ptr(void *addr, int *octet);
void	ft_print_unbr(unsigned int nb, int *octet);
void	ft_print_hexa(unsigned int nb, char *base, int	*octet);
// void	ft_print_hexa_upper(unsigned int nb, int	*octet);

#endif