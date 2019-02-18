# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: svoort <svoort@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/11 14:08:33 by svoort         #+#    #+#                 #
#    Updated: 2019/02/18 13:50:26 by svoort        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
EXECNAME = ft_printf
SRCS = ft_printf.c check_width.c conversions1.c
CFLAGS = -Wall -Wextra -Werror
MKLIB = make -C libft/ fclean && make -C libft/
CLEANLIB = make -C libft/ clean
CC = gcc
LIB = -L libft/ -lft
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(MKLIB)
	@$(CLEANLIB)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

exec:
	@echo "Making executable..."
	@$(MKLIB)
	@$(CLEANLIB)
	@$(CC) -c $(CFLAGS) $(SRCS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(EXECNAME)

# $(NAME):
# 	$(MKLIB)
# 	$(CC) $(CFLAGS) $(SRCS) $(LIB) -o ft_printf

clean:
	@rm -f $(OBJS)
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all