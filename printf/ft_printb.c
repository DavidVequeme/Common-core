/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:54:45 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/12 12:48:40 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printb(unsigned long n, char *base, int basesize, int *counter)
{
	if (n / basesize > 0)
		ft_printb(n / basesize, base, basesize, counter);
	ft_putchar(base[n % basesize], counter);
}
