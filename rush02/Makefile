NAME	= rush-02
SRCS	= dict_init_1.c dict_init_2.c check_dict.c fileopen.c find_dict_1.c find_dict_2.c print_number.c util.c main.c main_2.c main_3.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
