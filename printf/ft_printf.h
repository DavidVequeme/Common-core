/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:08:38 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/12 12:16:19 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_printb(unsigned long n, char *base, int basesize, int *counter);
void	ft_putnbr(long n, int *counter);
void	ft_printp(void *p, int *counter);
size_t	ft_strlen(char *s);
int		ft_printf(const char *s, ...);

#endif
