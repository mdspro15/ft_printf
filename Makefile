.PHONY : all clean fclean re

NAME = libftprintf.a

FILES = ft_check_format.c ft_treat_char.c ft_treat_str.c ft_printf.c ft_treat_int.c \
		ft_treat_unsigned.c ft_treat_ptr.c ft_treat_x.c
	   	

OBJ = $(FILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

$(OBJ): %.o: %.c ft_printf.h
	gcc $(CFLAGS) -c $< -o $@

clean :
	make -C libft clean
	rm -f *.o

fclean : clean
	make -C libft fclean
	rm -f $(NAME)

re : fclean all
