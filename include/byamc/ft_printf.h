/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <0x@bontal.net>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:55:30 by mkhaing           #+#    #+#             */
/*   Updated: 2024/03/13 21:11:13 by mkhaing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <byamc/byamc.h>
# include <stdarg.h>
# include <stdint.h>

# if defined(__linux__)
#  define NULLPTR "(nil)"
# elif defined(__APPLE__)
#  define NULLPTR "0x0"
# else
#  define NULLPTR "NULL"
# endif

int	ft_printf(const char *fmt, ...);

int	handle_char(int c);
int	handle_string(char *str);
int	handle_ptr(unsigned long long ptr);
int	handle_int(int n);
int	handle_unsigned(unsigned int n);
int	handle_hex(unsigned int n, char fmt);
int	handle_percent(void);

#endif /* FT_PRINTF_H */
