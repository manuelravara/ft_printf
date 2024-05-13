/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lower_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:00:57 by mcadavez          #+#    #+#             */
/*   Updated: 2024/05/13 12:00:59 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower_base(size_t n)
{
	int			count;
	const char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 16)
		return (print_char(symbols[n]));
	else
	{
		count = print_lower_digit(n / 16, 16);
		return (count + print_lower_digit(n % 16, 16));
	}
}
