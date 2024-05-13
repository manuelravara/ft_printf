/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcadavez <mcadavez@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:15:05 by mcadavez          #+#    #+#             */
/*   Updated: 2024/05/06 10:15:06 by mcadavez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	int	count;
	char *ptr = "This is a string.";
	// unsigned int u;

	// u = 13;
	// count = ft_printf("%u\n", u);
	// ft_printf("The chars written are %d\n", count);
	// count = printf("%u\n", u);
	// printf("The chars written are %d\n\n", count);

	// count = ft_printf("Hello %s\n", "John");
	// ft_printf("The chars written are %d\n", count);
	// count = ft_printf("%u\n", 42);
	// ft_printf("The chars written are %d\n", count);
	// count = printf("%u\n", 42);
	// printf("The chars written are %d\n\n", count);

	count = ft_printf("%s\n", ptr);
	ft_printf("The chars written are %d\n", count);
	count = printf("%s\n", ptr);
	printf("The chars written are %d\n\n", count);

	count = ft_printf("%p\n", ptr);
	ft_printf("The chars written are %d\n", count);
	count = printf("%p\n", ptr);
	printf("The chars written are %d\n\n", count);

	ft_printf("%d\n", ft_printf("%% abcdefs %d %% %% %d %s\n", 12, 25, "string"));
	printf("%d\n", printf("%% abcdefs %d %% %% %d %s\n", 12, 25, "string"));

	ft_printf("%d\n", ft_printf("%p", NULL));
	printf("%d\n", printf("%p", NULL));

	ft_printf(" -> %d\n", ft_printf("%% %s", "abc"));
	printf(" -> %d\n", printf("%% %s", "abc"));

	ft_printf(" -> %d\n", ft_printf("%% %a", "abc"));
	printf(" -> %d\n", printf("%% %a", "abc"));
}