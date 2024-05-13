/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:04:05 by mcadavez          #+#    #+#             */
/*   Updated: 2024/05/13 12:04:08 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_lower_digit((long)(va_arg(ap, int)), 10);
	else if (specifier == 'u')
		count += print_lower_digit((long)(va_arg(ap, unsigned int)), 10);
	else if (specifier == 'x')
		count += print_lower_digit((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'X')
		count += print_upper_digit((long)(va_arg(ap, unsigned int)), 16);
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, void *));
	else if (specifier == '%')
		count += print_char('%');
	else
		count += write(1, &specifier, 1);
	return (count);
}
