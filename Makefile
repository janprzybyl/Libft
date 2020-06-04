CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADERS = includes/
SRC = src

$(NAME): all
 
all: 
	@$(CC) -c $(CFLAGS) -I $(HEADERS) $(SRC)/*.c
	@ar -rc $(NAME) *.o
	@echo "\033[32m$(NAME) built!\033[0m"

test:
	@$(CC) $(SRC)/test.c -L. -I $(HEADERS) -lft
	@./a.out 
	
clean:
	@rm *.o

fclean:
	@rm $(NAME) a.out *.o

re: fclean all

.PHONY: all clean fclean re