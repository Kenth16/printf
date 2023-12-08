# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: navarre <navarre@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:03:46 by navarre           #+#    #+#              #
#    Updated: 2023/11/28 18:03:47 by navarre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc 
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a 
LIBFT = ../libft
SRC = ft_printf.c print_char.c print_hex.c print_int.c print_ptr.c print_str.c print_unsigned_int.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a .
	mv libft.a $(NAME)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME) libft.a
	@cd $(LIBFT) && make fclean

re : fclean all

.PHONY : all clean fclean re
