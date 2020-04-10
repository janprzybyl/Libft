CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	# DO SOMETHING
 
all: 
	$(CC) -c $(CFLAGS) src/*.c
	ar -rc libft.a *.o
	ranlib libft.a
	$(CC) src/test.c -L. -lft
	./a.out 
	
clean:
	rm *.o

fclean:
	rm libft.a a.out *.o

re: fclean all

.PHONY: all clean fclean re