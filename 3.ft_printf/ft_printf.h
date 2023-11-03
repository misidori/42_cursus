/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misidori <misidori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:46:51 by matteo            #+#    #+#             */
/*   Updated: 2023/02/11 21:21:29 by misidori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_put_char(char c);
int	ft_put_str(char *str);
int	ft_put_mem_add(unsigned long pointer, const char *alnum);
int	ft_put_int(int n);
int	ft_put_unsigned_int(unsigned int n);
int	ft_put_int_hex(unsigned int n, const char *format);
int	ft_printf(const char *format, ...);

#endif
