/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:02:19 by mcadavez          #+#    #+#             */
/*   Updated: 2024/05/13 12:02:20 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	int		count;
	size_t	ptr_value;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	ptr_value = (size_t)ptr;
	count += write(1, "0x", 2);
	count += print_lower_base(ptr_value);
	return (count);
}
