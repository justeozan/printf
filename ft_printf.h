/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozasahin <ozasahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:25:07 by justo             #+#    #+#             */
/*   Updated: 2023/12/06 17:33:34 by ozasahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *entry, ...);
void	len_print_arg(char c, va_list arg, size_t	*octet);
void	ft_print_char(int c, size_t	*octet);
void	ft_print_str(char *s, size_t *octet);
void	ft_print_nbr(int nb, size_t *octet);
void	ft_print_ptr(unsigned long long addr, size_t *octet);
void	ft_print_unbr(unsigned int nb, size_t *octet);
void	ft_print_hexa(unsigned int nb, char *base, size_t	*octet);

#endif