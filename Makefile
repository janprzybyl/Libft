CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

$(NAME): all
 
all: 
	@$(CC) -c $(CFLAGS) src/*.c
	@ar -rc $(NAME) *.o

test:
	@$(CC) src/test.c -L. -lft
	@./a.out 
	
clean:
	@rm *.o

fclean:
	@rm $(NAME) a.out *.o

re: fclean all

.PHONY: all clean fclean re