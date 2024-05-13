# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcadavez <mcadavez@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 11:29:50 by mcadavez          #+#    #+#              #
#    Updated: 2024/05/06 11:29:51 by mcadavez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SOURCES = ft_printf.c print_char.c print_str.c print_lower_base.c print_upper_digit.c \
				print_lower_digit.c print_pointer.c print_format.c

OBJECTS = $(SOURCES:.c=.o)

.c.o: $(SOURCES)
		$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
		$(AR) $(NAME) $(OBJECTS)

all: $(NAME)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean 
		$(MAKE) all

.PHONY: all clean fclean re