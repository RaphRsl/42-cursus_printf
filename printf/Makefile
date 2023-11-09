# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 11:41:09 by rroussel          #+#    #+#              #
#    Updated: 2022/11/22 15:15:34 by rroussel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = srcs/ft_printf.c\
		srcs/parser.c\
		srcs/libft/ft_putchar_fd.c\
		srcs/libft/ft_putnbr_fd.c\
		srcs/libft/ft_putstr_fd.c\
		srcs/libft/ft_strlen.c\
		srcs/flags/ft_for_letters_c_s_percent.c\
		srcs/flags/ft_for_letters_u_d_i.c\
		srcs/flags/ft_for_letters_x_capx_p.c\

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

INCLUDES = includes/ft_printf.h includes/libft.h

all:	$(NAME)

$(NAME):$(OBJS)
		ar rcs $(NAME) $(OBJS)

.c.o:
		gcc $(CFLAGS) -g -c $< -I includes -o $(<:.c=.o)
						
clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
